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

typedef struct vector<int,std--allocator<int>> vector<int,std--allocator<int>>, *Pvector<int,std--allocator<int>>;

struct vector<int,std--allocator<int>> { // PlaceHolder Class Structure
};

typedef struct allocator<int> allocator<int>, *Pallocator<int>;

struct allocator<int> { // PlaceHolder Class Structure
};

typedef struct basic_string<char,std--char_traits<char>,std--allocator<char>> basic_string<char,std--char_traits<char>,std--allocator<char>>, *Pbasic_string<char,std--char_traits<char>,std--allocator<char>>;

struct basic_string<char,std--char_traits<char>,std--allocator<char>> { // PlaceHolder Class Structure
};

typedef struct _Vector_base<int,std--allocator<int>> _Vector_base<int,std--allocator<int>>, *P_Vector_base<int,std--allocator<int>>;

struct _Vector_base<int,std--allocator<int>> { // PlaceHolder Class Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Class Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Class Structure
};

typedef struct _Vector_impl _Vector_impl, *P_Vector_impl;

struct _Vector_impl { // PlaceHolder Class Structure
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef dword _Niter_base;

typedef dword vector;

typedef dword _Miter_base;

typedef struct new_allocator new_allocator, *Pnew_allocator;

struct new_allocator { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef struct __normal_iterator<int*,std--vector<int,std--allocator<int>>> __normal_iterator<int*,std--vector<int,std--allocator<int>>>, *P__normal_iterator<int*,std--vector<int,std--allocator<int>>>;

struct __normal_iterator<int*,std--vector<int,std--allocator<int>>> { // PlaceHolder Class Structure
};

typedef struct new_allocator<int> new_allocator<int>, *Pnew_allocator<int>;

struct new_allocator<int> { // PlaceHolder Class Structure
};

typedef struct __normal_iterator<int_const*,std--vector<int,std--allocator<int>>> __normal_iterator<int_const*,std--vector<int,std--allocator<int>>>, *P__normal_iterator<int_const*,std--vector<int,std--allocator<int>>>;

struct __normal_iterator<int_const*,std--vector<int,std--allocator<int>>> { // PlaceHolder Class Structure
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
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
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
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
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

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
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

void append(char *param_1,ulong param_2)

{
  append(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void basic_string(void)

{
  basic_string();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void substr(ulong param_1,ulong param_2)

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

void reserve(ulong param_1)

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

void size(void)

{
  size();
  return;
}



void __thiscall Init(Init *this)

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

void basic_string(basic_string *param_1)

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

void length(void)

{
  length();
  return;
}



void __thiscall _ZNSt8ios_base4InitD1Ev(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator___std__char_traits_char__(param_1,param_2);
  return pbVar1;
}



void __thiscall _basic_string(basic_string_char_std__char_traits_char__std__allocator_char__ *this)

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

void basic_string(char *param_1,allocator *param_2)

{
  basic_string(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void terminate(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



void __thiscall
operator__(basic_string_char_std__char_traits_char__std__allocator_char__ *this,ulong param_1)

{
  operator__(this,param_1);
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

basic_ostream *
operator___char_std__char_traits_char__std__allocator_char__
          (basic_ostream *param_1,basic_string *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator___char_std__char_traits_char__std__allocator_char__(param_1,param_2);
  return pbVar1;
}



void __thiscall _allocator(allocator_char_ *this)

{
  _allocator(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void append(char *param_1)

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

void __throw_bad_alloc(void)

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

void allocator(void)

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

void append(basic_string *param_1)

{
  append(param_1);
  return;
}



void __cxx_global_var_init(void)

{
  if ((x * (x + -1) & 1U) == 0 || y < 10) goto LAB_004010db;
  do {
    Init((Init *)&__ioinit);
    __cxa_atexit(_ZNSt8ios_base4InitD1Ev,&__ioinit,&__dso_handle);
LAB_004010db:
    Init((Init *)&__ioinit);
    __cxa_atexit(_ZNSt8ios_base4InitD1Ev,&__ioinit,&__dso_handle);
  } while ((x * (x + -1) & 1U) != 0 && 9 < y);
  return;
}



void __cxx_global_var_init1(void)

{
  if ((x5 * (x5 + -1) & 1U) == 0 || y6 < 10) goto LAB_004011eb;
  do {
    vector((vector_int_std__allocator_int__ *)hero);
    __cxa_atexit(_vector,hero,&__dso_handle);
LAB_004011eb:
    vector((vector_int_std__allocator_int__ *)hero);
    __cxa_atexit(_vector,hero,&__dso_handle);
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
  Init((Init *)&__ioinit);
  __cxa_atexit(_ZNSt8ios_base4InitD1Ev,&__ioinit,&__dso_handle);
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

ulong transform_input(vector param_1)

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
  uint *local_28;
  bool local_19;
  undefined8 local_18;
  
  puVar4 = &local_58;
  local_30 = &local_58;
  local_18 = CONCAT44(in_register_0000003c,param_1);
  do {
    local_19 = (x11 * (x11 + -1) & 1U) == 0 || y12 < 10;
  } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
  if (local_19) goto LAB_0040158b;
  do {
    puVar4 = (undefined8 *)((int *)local_30 + -8);
    ((int *)local_30)[-4] = 0;
    *(int *)puVar4 = 0;
LAB_0040158b:
    local_30 = (undefined8 *)((int *)puVar4 + -8);
    ((int *)puVar4)[-4] = 0;
    *(int *)local_30 = 0;
    local_28 = (uint *)((int *)puVar4 + -4);
  } while ((x11 * (x11 + -1) & 1U) != 0 && 9 < y12);
  while( true ) {
    if ((x11 * (x11 + -1) & 1U) == 0 || y12 < 10) goto LAB_00401640;
    do {
      *(undefined8 *)((int *)puVar4 + -10) = 0x401b88;
      local_50 = size(local_18,*(undefined *)((int *)puVar4 + -10));
LAB_00401640:
      if ((x1 * (x1 + -1) & 1U) == 0 || y2 < 10) goto LAB_00401683;
      do {
        *(undefined8 *)((int *)puVar4 + -10) = 0x401c60;
        local_58 = size(local_18,*(undefined *)((int *)puVar4 + -10));
LAB_00401683:
        local_38 = (long)*(int *)local_30;
        *(undefined8 *)((int *)puVar4 + -10) = 0x401697;
        uVar2 = size(local_18,*(undefined *)((int *)puVar4 + -10));
        bVar5 = (x11 * (x11 + -1) & 1U) == 0;
        local_39 = local_38 < uVar2;
        local_3a = bVar5 || y12 < 10;
      } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
    } while (!bVar5 && y12 >= 10);
    if (local_38 >= uVar2) break;
    if ((x11 * (x11 + -1) & 1U) == 0 || y12 < 10) goto LAB_0040178f;
    do {
      iVar1 = *(int *)local_30;
      *(undefined8 *)((int *)puVar4 + -10) = 0x401ba1;
      piVar3 = (int *)operator__(local_18,(long)iVar1,*(undefined *)((int *)puVar4 + -10));
      *local_28 = *local_28 + *piVar3;
LAB_0040178f:
      if ((x1 * (x1 + -1) & 1U) == 0 || y2 < 10) goto LAB_004017d2;
      do {
        iVar1 = *(int *)local_30;
        *(undefined8 *)((int *)puVar4 + -10) = 0x401c79;
        piVar3 = (int *)operator__(local_18,(long)iVar1,*(undefined *)((int *)puVar4 + -10));
        *local_28 = *local_28 + *piVar3;
LAB_004017d2:
        iVar1 = *(int *)local_30;
        *(undefined8 *)((int *)puVar4 + -10) = 0x4017e2;
        piVar3 = (int *)operator__(local_18,(long)iVar1,*(undefined *)((int *)puVar4 + -10));
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
  return (ulong)*local_28;
}



// sanitize_input(std::basic_string<char, std::char_traits<char>, std::allocator<char>>)

ulong sanitize_input(basic_string param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined7 in_register_00000039;
  bool bVar5;
  undefined auStack392 [24];
  undefined4 *local_170;
  uint local_144;
  basic_ostream *local_140;
  undefined local_136;
  undefined local_135;
  bool local_134;
  undefined local_133;
  undefined local_132;
  uint *local_108;
  long local_100;
  uint local_f8;
  undefined local_f2;
  byte local_f1;
  int local_f0;
  undefined local_e9;
  int local_e8;
  undefined local_e1;
  int *local_e0;
  long local_d8;
  undefined local_ca;
  bool local_c9;
  undefined8 local_c8;
  undefined local_b9;
  long local_b8;
  bool local_a9;
  char *local_a8;
  undefined local_99;
  long local_98;
  undefined local_8a;
  bool local_89;
  undefined4 *local_88;
  uint *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  int *local_68;
  uint *local_60;
  undefined4 *local_58;
  uint *local_50;
  undefined4 *local_48;
  bool local_39;
  undefined8 local_38;
  
  puVar3 = (undefined4 *)auStack392;
  puVar4 = (undefined4 *)auStack392;
  local_38 = CONCAT71(in_register_00000039,param_1);
  do {
    local_39 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  if (local_39) goto LAB_00401da6;
  do {
    puVar3 = puVar4 + -0x10;
    local_170 = puVar3;
    *(undefined8 *)(puVar4 + -0x12) = 0x403db1;
    vector(puVar4 + -0xc,*(undefined *)(puVar4 + -0x12));
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
    vector(puVar3 + -0xc,*(undefined *)(puVar3 + -0x2e));
    *local_60 = 0;
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
  while( true ) {
    do {
      local_89 = (int)*local_60 < legend >> 2;
    } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
    if (!local_89) goto LAB_00403729;
    do {
      local_8a = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    do {
      do {
        uVar1 = *local_60;
        bVar5 = (x17 * (x17 + -1) & 1U) == 0;
        local_98 = (long)(int)uVar1;
        local_99 = bVar5 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    } while (!bVar5 && y18 >= 10);
    do {
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
                    // try { // try from 0040217d to 00402879 has its CatchHandler @ 00402e05
    *(undefined8 *)(puVar3 + -0x2e) = 0x40218d;
    local_a8 = (char *)operator__(local_38,(long)(int)uVar1,*(undefined *)(puVar3 + -0x2e));
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
    push_back(local_58,local_68,*(undefined *)(puVar3 + -0x2e));
    do {
      local_a9 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if (local_a9) goto LAB_0040239d;
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
    local_c8 = length(*(undefined *)(puVar3 + -0x2e));
    do {
      local_c9 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if (local_c9) goto LAB_0040257a;
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
      local_e0 = (int *)operator__(hero,(long)(int)uVar1,*(undefined *)(puVar3 + -0x2e));
      do {
        local_e1 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
      do {
        local_e8 = *local_e0;
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      *(undefined8 *)(puVar3 + -0x2e) = 0x40287a;
      vector(local_88,local_58,*(undefined *)(puVar3 + -0x2e));
      do {
        local_e9 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
      do {
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      do {
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
                    // try { // try from 00402a1c to 00402a24 has its CatchHandler @ 00402f44
      *(undefined8 *)(puVar3 + -0x2e) = 0x402a25;
      local_f0 = transform_input((int)local_88,*(undefined *)(puVar3 + -0x2e));
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
      _vector(local_88,*(undefined *)(puVar3 + -0x2e));
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
        local_108 = (uint *)operator__(hero,(long)(int)uVar1,*(undefined *)(puVar3 + -0x2e));
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
  if (local_134) goto LAB_0040343d;
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
    _vector(local_58,*(undefined *)(puVar3 + -0x2e));
LAB_00403900:
    *(undefined8 *)(puVar3 + -0x2e) = 0x403909;
    _vector(local_58,*(undefined *)(puVar3 + -0x2e));
    local_144 = *local_50;
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
  do {
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  return (ulong)*local_50;
LAB_00403729:
  do {
    local_136 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  do {
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
                    // try { // try from 004037fd to 0040380f has its CatchHandler @ 00402e05
  *(undefined8 *)(puVar3 + -0x2e) = 0x403810;
  local_140 = operator___std__char_traits_char__(cout,"success\n",*(undefined *)(puVar3 + -0x2e));
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

ulong start_quest(basic_string param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined7 in_register_00000039;
  uint uVar4;
  undefined auStack152 [8];
  undefined8 local_90;
  uint local_50;
  bool local_49;
  undefined *local_48;
  uint *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar3 = auStack152;
  local_28 = CONCAT71(in_register_00000039,param_1);
  puVar1 = auStack152;
  if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_004043a4;
  do {
    puVar3 = puVar1;
    *(undefined8 *)(puVar3 + -8) = 0x404c2c;
    push_back(hero,&secret_100,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404c45;
    push_back(hero,&secret_214,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404c5e;
    push_back(hero,&secret_266,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404c77;
    push_back(hero,&secret_369,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404c90;
    push_back(hero,&secret_417,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404ca9;
    push_back(hero,&secret_527,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404cc2;
    push_back(hero,&secret_622,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404cdb;
    push_back(hero,&secret_733,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404cf4;
    push_back(hero,&secret_847,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404d0d;
    push_back(hero,&secret_942,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404d26;
    push_back(hero,&secret_1054,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404d3f;
    push_back(hero,&secret_1106,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404d58;
    push_back(hero,&secret_1222,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404d71;
    push_back(hero,&secret_1336,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404d8a;
    push_back(hero,&secret_1441,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404da3;
    push_back(hero,&secret_1540,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404dbc;
    push_back(hero,&secret_1589,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404dd5;
    push_back(hero,&secret_1686,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404dee;
    push_back(hero,&secret_1796,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e07;
    push_back(hero,&secret_1891,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e20;
    push_back(hero,&secret_1996,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e39;
    push_back(hero,&secret_2112,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e52;
    push_back(hero,&secret_2165,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e6b;
    push_back(hero,&secret_2260,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e84;
    push_back(hero,&secret_2336,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404e9d;
    push_back(hero,&secret_2412,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404eb6;
    push_back(hero,&secret_2498,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404ecf;
    push_back(hero,&secret_2575,puVar3[-8]);
    *(undefined8 *)(puVar3 + -8) = 0x404ed8;
    local_90 = length(puVar3[-8]);
LAB_004043a4:
    local_30 = puVar3 + -0x40;
    local_38 = puVar3 + -0x30;
    local_40 = (uint *)(puVar3 + -0x10);
    local_48 = puVar3 + -0x20;
    *(undefined8 *)(puVar3 + -0x48) = 0x4043f5;
    push_back(hero,&secret_100,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40440e;
    push_back(hero,&secret_214,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404427;
    push_back(hero,&secret_266,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404440;
    push_back(hero,&secret_369,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404459;
    push_back(hero,&secret_417,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404472;
    push_back(hero,&secret_527,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40448b;
    push_back(hero,&secret_622,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044a4;
    push_back(hero,&secret_733,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044bd;
    push_back(hero,&secret_847,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044d6;
    push_back(hero,&secret_942,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044ef;
    push_back(hero,&secret_1054,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404508;
    push_back(hero,&secret_1106,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404521;
    push_back(hero,&secret_1222,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40453a;
    push_back(hero,&secret_1336,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404553;
    push_back(hero,&secret_1441,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40456c;
    push_back(hero,&secret_1540,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404585;
    push_back(hero,&secret_1589,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40459e;
    push_back(hero,&secret_1686,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4045b7;
    push_back(hero,&secret_1796,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4045d0;
    push_back(hero,&secret_1891,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4045e9;
    push_back(hero,&secret_1996,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404602;
    push_back(hero,&secret_2112,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40461b;
    push_back(hero,&secret_2165,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404634;
    push_back(hero,&secret_2260,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40464d;
    push_back(hero,&secret_2336,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404666;
    push_back(hero,&secret_2412,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x40467f;
    push_back(hero,&secret_2498,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x404698;
    push_back(hero,&secret_2575,puVar3[-0x48]);
    *(undefined8 *)(puVar3 + -0x48) = 0x4046a1;
    lVar2 = length(puVar3[-0x48]);
    uVar4 = legend >> 2;
    local_49 = lVar2 + -1 != (long)(int)uVar4;
    puVar1 = puVar3 + -0x40;
  } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  if (local_49) {
    if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_00404760;
    do {
      *local_40 = uVar4;
LAB_00404760:
      *local_40 = uVar4;
    } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  }
  else {
    if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_004047fb;
    do {
      *(undefined8 *)(puVar3 + -0x48) = 0x404f06;
      basic_string(local_48,puVar3[-0x48]);
LAB_004047fb:
      *(undefined8 *)(puVar3 + -0x48) = 0x404808;
      basic_string(local_48,puVar3[-0x48]);
    } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
                    // try { // try from 0040484b to 00404853 has its CatchHandler @ 004048fb
    *(undefined8 *)(puVar3 + -0x48) = 0x404854;
    local_50 = sanitize_input((char)local_48,puVar3[-0x48]);
    if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_0040489f;
    do {
      *local_40 = local_50;
      *(undefined8 *)(puVar3 + -0x48) = 0x404f1d;
      _basic_string(local_48,puVar3[-0x48]);
LAB_0040489f:
      *local_40 = local_50;
      *(undefined8 *)(puVar3 + -0x48) = 0x4048b1;
      _basic_string(local_48,puVar3[-0x48]);
    } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  }
  do {
  } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  return (ulong)*local_40;
}



// std::vector<int, std::allocator<int>>::vector()

void __thiscall vector(vector_int_std__allocator_int__ *this)

{
  vector_int_std__allocator_int__ **ppvVar1;
  vector_int_std__allocator_int__ **ppvVar2;
  undefined auStack24 [8];
  vector_int_std__allocator_int__ *local_10;
  
  ppvVar1 = (vector_int_std__allocator_int__ **)auStack24;
  ppvVar2 = (vector_int_std__allocator_int__ **)auStack24;
  local_10 = this;
  if ((x7 * (x7 + -1) & 1U) == 0 || y8 < 10) goto LAB_00404faf;
  do {
    ppvVar1 = ppvVar2 + -2;
    *ppvVar1 = local_10;
    ppvVar2[-3] = 0x405034;
    _Vector_base(*ppvVar1,*(undefined *)(ppvVar2 + -3));
LAB_00404faf:
    ppvVar2 = ppvVar1 + -2;
    *ppvVar2 = local_10;
    ppvVar1[-3] = 0x404fcb;
    _Vector_base(*ppvVar2,*(undefined *)(ppvVar1 + -3));
  } while ((x7 * (x7 + -1) & 1U) != 0 && 9 < y8);
  return;
}



// std::vector<int, std::allocator<int>>::~vector()

void __thiscall _vector(vector_int_std__allocator_int__ *this)

{
  vector_int_std__allocator_int__ **ppvVar1;
  undefined auStack152 [64];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  vector_int_std__allocator_int__ **local_38;
  vector_int_std__allocator_int__ **local_30;
  undefined8 local_28;
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
    local_50 = (undefined8 *)ppvVar1[-2];
    local_48 = *local_50;
    local_28 = local_50[1];
  } while ((x9 * (x9 + -1) & 1U) != 0 && 9 < y10);
                    // try { // try from 0040512a to 004051d2 has its CatchHandler @ 00405275
  ppvVar1[-7] = 0x405133;
  local_40 = local_50;
  local_20 = this;
  local_58 = _M_get_Tp_allocator(local_50,*(undefined *)(ppvVar1 + -7));
  do {
  } while ((x9 * (x9 + -1) & 1U) != 0 && 9 < y10);
  ppvVar1[-7] = 0x4051d3;
  _Destroy_int__int_(local_48,local_28,local_58,*(undefined *)(ppvVar1 + -7));
  if ((x9 * (x9 + -1) & 1U) == 0 || y10 < 10) goto LAB_0040521b;
  do {
    ppvVar1[-7] = 0x405523;
    __Vector_base(local_40,*(undefined *)(ppvVar1 + -7));
LAB_0040521b:
    ppvVar1[-7] = 0x405227;
    __Vector_base(local_40,*(undefined *)(ppvVar1 + -7));
  } while ((x9 * (x9 + -1) & 1U) != 0 && 9 < y10);
  return;
}



// std::vector<int, std::allocator<int>>::size() const

long __thiscall size(vector_int_std__allocator_int__ *this)

{
  long **pplVar1;
  long **pplVar2;
  undefined local_18 [16];
  
  pplVar1 = (long **)local_18;
  pplVar2 = (long **)local_18;
  if ((x13 * (x13 + -1) & 1U) == 0 || y14 < 10) goto LAB_004055af;
  do {
    pplVar1 = pplVar2 + -2;
    *(vector_int_std__allocator_int__ **)pplVar1 = this;
LAB_004055af:
    pplVar2 = pplVar1 + -2;
    *(vector_int_std__allocator_int__ **)pplVar2 = this;
  } while ((x13 * (x13 + -1) & 1U) != 0 && 9 < y14);
  return (*pplVar2)[1] - **pplVar2 >> 2;
}



// std::vector<int, std::allocator<int>>::operator[](unsigned long)

long __thiscall operator__(vector_int_std__allocator_int__ *this,ulong param_1)

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
    *(vector_int_std__allocator_int__ **)(puVar2 + -2) = this;
    *puVar1 = param_1;
LAB_00405693:
    puVar2 = puVar1 + -4;
    *(vector_int_std__allocator_int__ **)(puVar1 + -2) = this;
    *puVar2 = param_1;
    local_20 = *(long *)puVar1[-2] + *puVar2 * 4;
  } while ((x15 * (x15 + -1) & 1U) != 0 && 9 < y16);
  return local_20;
}



// std::vector<int, std::allocator<int>>::push_back(int const&)

void __thiscall push_back(vector_int_std__allocator_int__ *this,int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  undefined auStack88 [15];
  undefined local_49;
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  vector_int_std__allocator_int__ *local_28;
  
  ppiVar5 = (int **)auStack88;
  local_40 = (int **)auStack88;
  local_28 = this;
  local_30 = param_1;
  if ((x19 * (x19 + -1) & 1U) == 0 || y20 < 10) goto LAB_004057a8;
  do {
    ppiVar5 = local_40 + -4;
    *(vector_int_std__allocator_int__ **)(local_40 + -2) = this;
    *ppiVar5 = param_1;
LAB_004057a8:
    local_40 = ppiVar5 + -6;
    *(vector_int_std__allocator_int__ **)(ppiVar5 + -2) = this;
    ppiVar5[-4] = param_1;
    local_48 = ppiVar5[-2];
    local_38 = ppiVar5 + -4;
    local_49 = *(long *)(local_48 + 2) != *(long *)(local_48 + 4);
  } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  if (*(long *)(local_48 + 2) != *(long *)(local_48 + 4)) {
    if ((x19 * (x19 + -1) & 1U) == 0 || y20 < 10) goto LAB_00405892;
    do {
      uVar1 = *(undefined8 *)(local_48 + 2);
      piVar4 = *local_38;
      ppiVar5[-7] = 0x405a99;
      construct_int_(local_48,uVar1,piVar4,*(undefined *)(ppiVar5 + -7));
      *(long *)(local_48 + 2) = *(long *)(local_48 + 2) + 4;
LAB_00405892:
      uVar1 = *(undefined8 *)(local_48 + 2);
      piVar4 = *local_38;
      ppiVar5[-7] = 0x4058ad;
      construct_int_(local_48,uVar1,piVar4,*(undefined *)(ppiVar5 + -7));
      *(long *)(local_48 + 2) = *(long *)(local_48 + 2) + 4;
    } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  }
  else {
    if ((x19 * (x19 + -1) & 1U) == 0 || y20 < 10) goto LAB_00405954;
    do {
      ppiVar5[-7] = 0x405aba;
      piVar4 = (int *)end(local_48,*(undefined *)(ppiVar5 + -7));
      ppiVar3 = local_40;
      *local_40 = piVar4;
      piVar4 = *local_38;
      piVar2 = *ppiVar3;
      ppiVar5[-7] = 0x405ad4;
      _M_insert_aux(local_48,(int)piVar2,piVar4,*(undefined *)(ppiVar5 + -7));
LAB_00405954:
      ppiVar5[-7] = 0x40595d;
      piVar4 = (int *)end(local_48,*(undefined *)(ppiVar5 + -7));
      ppiVar3 = local_40;
      *local_40 = piVar4;
      piVar4 = *local_38;
      piVar2 = *ppiVar3;
      ppiVar5[-7] = 0x405977;
      _M_insert_aux(local_48,(int)piVar2,piVar4,*(undefined *)(ppiVar5 + -7));
    } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  }
  do {
  } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  return;
}



// std::vector<int, std::allocator<int>>::vector(std::vector<int, std::allocator<int>> const&)

void __thiscall vector(vector_int_std__allocator_int__ *this,vector *param_1)

{
  vector *this_00;
  int *piVar1;
  undefined8 uVar2;
  vector **ppvVar3;
  vector **ppvVar4;
  undefined auStack296 [8];
  undefined8 local_120;
  vector *local_118;
  vector **local_110;
  vector *local_c8;
  vector *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  vector *local_a0;
  vector *local_98;
  vector *local_90;
  vector *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  vector **local_70;
  undefined8 *local_68;
  vector **local_60;
  vector **local_58;
  vector **local_50;
  vector **local_48;
  vector *local_40;
  vector *local_38;
  
  ppvVar3 = (vector **)auStack296;
  ppvVar4 = (vector **)auStack296;
  local_38 = (vector *)this;
  local_40 = param_1;
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405b3f;
  do {
    ppvVar3 = ppvVar4 + -4;
    ppvVar4[-2] = local_38;
    *ppvVar3 = local_40;
    local_110 = ppvVar3;
    local_118 = ppvVar4[-2];
    ppvVar4[-5] = 0x406230;
    local_120 = size(*ppvVar3,*(undefined *)(ppvVar4 + -5));
    this_00 = *local_110;
    ppvVar4[-5] = 0x406249;
    uVar2 = _M_get_Tp_allocator(this_00,*(undefined *)(ppvVar4 + -5));
    ppvVar4[-5] = 0x406251;
    uVar2 = _S_select_on_copy(uVar2,*(undefined *)(ppvVar4 + -5));
    ppvVar4[-5] = 0x406267;
    _Vector_base(local_118,local_120,uVar2,*(undefined *)(ppvVar4 + -5));
LAB_00405b3f:
    local_50 = ppvVar3 + -4;
    ppvVar4 = ppvVar3 + -0xc;
    ppvVar3[-2] = local_38;
    *local_50 = local_40;
    local_68 = (undefined8 *)ppvVar3[-2];
    local_48 = ppvVar3 + -10;
    local_58 = ppvVar3 + -6;
    local_60 = ppvVar3 + -8;
    local_70 = ppvVar4;
    local_78 = local_68;
    ppvVar3[-0xd] = 0x405bb6;
    local_80 = size(*local_50,*(undefined *)(ppvVar3 + -0xd));
    this_00 = *local_50;
    ppvVar3[-0xd] = 0x405bc9;
    uVar2 = _M_get_Tp_allocator(this_00,*(undefined *)(ppvVar3 + -0xd));
    ppvVar3[-0xd] = 0x405bd1;
    uVar2 = _S_select_on_copy(uVar2,*(undefined *)(ppvVar3 + -0xd));
    ppvVar3[-0xd] = 0x405be1;
    _Vector_base(local_68,local_80,uVar2,*(undefined *)(ppvVar3 + -0xd));
    local_88 = *local_50;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
                    // try { // try from 00405c38 to 00405ea3 has its CatchHandler @ 00405f56
  ppvVar3[-0xd] = 0x405c41;
  local_90 = (vector *)begin(local_88,*(undefined *)(ppvVar3 + -0xd));
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405c90;
  do {
    *local_58 = local_90;
LAB_00405c90:
    *local_58 = local_90;
    local_98 = *local_50;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  ppvVar3[-0xd] = 0x405d02;
  local_a0 = (vector *)end(local_98,*(undefined *)(ppvVar3 + -0xd));
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405d51;
  do {
    *local_70 = local_a0;
LAB_00405d51:
    *local_70 = local_a0;
    local_a8 = *local_78;
    local_b0 = local_78;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  ppvVar3[-0xd] = 0x405dce;
  local_b8 = _M_get_Tp_allocator(local_78,*(undefined *)(ppvVar3 + -0xd));
  do {
    local_c0 = *local_58;
    local_c8 = *local_70;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  ppvVar3[-0xd] = 0x405ea4;
  piVar1 = 
           __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                     ((int)local_c0,(int)local_c8,local_a8,local_b8,*(undefined *)(ppvVar3 + -0xd));
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405ef3;
  do {
    *(int **)(local_78 + 1) = piVar1;
LAB_00405ef3:
    *(int **)(local_78 + 1) = piVar1;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  return;
}



void __clang_call_terminate(undefined8 param_1)

{
  if ((x23 * (x23 + -1) & 1U) != 0 && 9 < y24) {
    __cxa_begin_catch(param_1);
                    // WARNING: Subroutine does not return
    terminate();
  }
  __cxa_begin_catch(param_1);
                    // WARNING: Subroutine does not return
  terminate();
}



// __gnu_cxx::__alloc_traits<std::allocator<int>>::_S_select_on_copy(std::allocator<int> const&)

allocator * _S_select_on_copy(allocator *param_1)

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
_M_get_Tp_allocator(_Vector_base_int_std__allocator_int__ *this)

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
_Vector_base(_Vector_base_int_std__allocator_int__ *this,ulong param_1,allocator *param_2)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined auStack136 [32];
  allocator *local_68;
  allocator *local_60;
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
    *(_Vector_base_int_std__allocator_int__ **)(ppaVar2 + -2) = local_38;
    ppaVar2[-4] = local_30;
    *ppaVar1 = local_40;
    ppaVar2[-7] = 0x4068a2;
    _Vector_impl(ppaVar2[-2],*ppaVar1,*(undefined *)(ppaVar2 + -7));
LAB_004065b1:
    local_58 = ppaVar1 + -4;
    local_50 = ppaVar1 + -8;
    ppaVar2 = ppaVar1 + -10;
    *(_Vector_base_int_std__allocator_int__ **)(ppaVar1 + -2) = local_38;
    *local_58 = local_30;
    ppaVar1[-6] = local_40;
    local_60 = ppaVar1[-2];
    ppaVar1[-0xb] = 0x406619;
    local_48 = ppaVar2;
    _Vector_impl(local_60,ppaVar1[-6],*(undefined *)(ppaVar1 + -0xb));
    local_68 = *local_58;
  } while ((x31 * (x31 + -1) & 1U) != 0 && 9 < y32);
                    // try { // try from 0040666f to 0040667b has its CatchHandler @ 00406714
  ppaVar1[-0xb] = 0x40667c;
  _M_create_storage(local_60,local_68,*(undefined *)(ppaVar1 + -0xb));
  do {
  } while ((x31 * (x31 + -1) & 1U) != 0 && 9 < y32);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*, std::allocator<int>&)

int * 
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
    *(int **)(puVar2 + -6) = local_38;
    *(allocator **)(puVar2 + -8) = local_50;
    puVar2[-10] = puVar2[-2];
    *puVar1 = puVar2[-4];
    puVar2[-0xd] = 0x406a80;
    local_60 = 
               uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)puVar2[-10],(int)*puVar1,(int *)puVar2[-6],
                          *(undefined *)(puVar2 + -0xd));
LAB_00406939:
    puVar2 = puVar1 + -0xc;
    puVar1[-2] = local_48;
    puVar1[-4] = local_40;
    *(int **)(puVar1 + -6) = local_38;
    *(allocator **)(puVar1 + -8) = local_50;
    puVar1[-10] = puVar1[-2];
    *puVar2 = puVar1[-4];
    puVar1[-0xd] = 0x4069ab;
    local_58 = 
               uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)puVar1[-10],(int)*puVar2,(int *)puVar1[-6],
                          *(undefined *)(puVar1 + -0xd));
  } while ((x33 * (x33 + -1) & 1U) != 0 && 9 < y34);
  return local_58;
}



// std::vector<int, std::allocator<int>>::begin() const

undefined8 __thiscall begin(vector_int_std__allocator_int__ *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 *local_20;
  vector_int_std__allocator_int__ *local_18;
  
  puVar1 = &local_28;
  puVar2 = &local_28;
  local_18 = this;
  if ((x35 * (x35 + -1) & 1U) == 0 || y36 < 10) goto LAB_00406ae0;
  do {
    puVar1 = puVar2 + -6;
    *(vector_int_std__allocator_int__ **)(puVar2 + -4) = local_18;
    *puVar1 = *(undefined8 *)puVar2[-4];
    puVar2[-7] = 0x406bb8;
    __normal_iterator(puVar2 + -2,puVar1,*(undefined *)(puVar2 + -7));
LAB_00406ae0:
    local_20 = puVar1 + -2;
    puVar2 = puVar1 + -6;
    *(vector_int_std__allocator_int__ **)(puVar1 + -4) = local_18;
    *puVar2 = *(undefined8 *)puVar1[-4];
    puVar1[-7] = 0x406b1d;
    __normal_iterator(local_20,puVar2,*(undefined *)(puVar1 + -7));
    local_28 = *local_20;
  } while ((x35 * (x35 + -1) & 1U) != 0 && 9 < y36);
  return local_28;
}



// std::vector<int, std::allocator<int>>::end() const

undefined8 __thiscall end(vector_int_std__allocator_int__ *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 *local_20;
  vector_int_std__allocator_int__ *local_18;
  
  puVar1 = &local_28;
  puVar2 = &local_28;
  local_18 = this;
  if ((x37 * (x37 + -1) & 1U) == 0 || y38 < 10) goto LAB_00406c10;
  do {
    puVar1 = puVar2 + -6;
    *(vector_int_std__allocator_int__ **)(puVar2 + -4) = local_18;
    *puVar1 = *(undefined8 *)((vector_int_std__allocator_int__ *)puVar2[-4] + 8);
    puVar2[-7] = 0x406cea;
    __normal_iterator(puVar2 + -2,puVar1,*(undefined *)(puVar2 + -7));
LAB_00406c10:
    local_20 = puVar1 + -2;
    puVar2 = puVar1 + -6;
    *(vector_int_std__allocator_int__ **)(puVar1 + -4) = local_18;
    *puVar2 = *(undefined8 *)((vector_int_std__allocator_int__ *)puVar1[-4] + 8);
    puVar1[-7] = 0x406c4e;
    __normal_iterator(local_20,puVar2,*(undefined *)(puVar1 + -7));
    local_28 = *local_20;
  } while ((x37 * (x37 + -1) & 1U) != 0 && 9 < y38);
  return local_28;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator()

_Vector_base_int_std__allocator_int__ * __thiscall
_M_get_Tp_allocator(_Vector_base_int_std__allocator_int__ *this)

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

void __thiscall __Vector_base(_Vector_base_int_std__allocator_int__ *this)

{
  _Vector_base_int_std__allocator_int__ **pp_Var1;
  undefined auStack104 [32];
  long local_48;
  long *local_40;
  _Vector_base_int_std__allocator_int__ **local_38;
  _Vector_base_int_std__allocator_int__ **local_30;
  long local_28;
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
    local_40 = (long *)pp_Var1[-2];
    local_28 = *local_40;
    local_48 = local_40[2] - *local_40 >> 2;
  } while ((x41 * (x41 + -1) & 1U) != 0 && 9 < y42);
                    // try { // try from 00406eaa to 00406eba has its CatchHandler @ 00406f58
  pp_Var1[-7] = 0x406ebb;
  local_20 = this;
  _M_deallocate(local_40,local_28,local_48,*(undefined *)(pp_Var1 + -7));
  if ((x41 * (x41 + -1) & 1U) == 0 || y42 < 10) goto LAB_00406f03;
  do {
    pp_Var1[-7] = 0x4070c7;
    __Vector_impl(local_40,*(undefined *)(pp_Var1 + -7));
LAB_00406f03:
    pp_Var1[-7] = 0x406f0c;
    __Vector_impl(local_40,*(undefined *)(pp_Var1 + -7));
  } while ((x41 * (x41 + -1) & 1U) != 0 && 9 < y42);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_deallocate(int*, unsigned long)

void __thiscall
_M_deallocate(_Vector_base_int_std__allocator_int__ *this,int *param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined auStack88 [7];
  bool local_51;
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
    *(_Vector_base_int_std__allocator_int__ **)(local_48 + -2) = this;
    *(int **)(local_48 + -4) = param_1;
    *puVar3 = param_2;
LAB_0040714f:
    local_40 = (int **)(puVar3 + -4);
    local_48 = puVar3 + -6;
    *(_Vector_base_int_std__allocator_int__ **)(puVar3 + -2) = this;
    *local_40 = param_1;
    *local_48 = param_2;
    local_50 = (_Vector_base_int_std__allocator_int__ *)puVar3[-2];
    local_51 = *local_40 != (int *)0x0;
  } while ((x43 * (x43 + -1) & 1U) != 0 && 9 < y44);
  if (local_51) {
    local_38 = param_2;
    local_30 = this;
    local_28 = param_1;
    if ((x43 * (x43 + -1) & 1U) == 0 || y44 < 10) goto LAB_0040723f;
    do {
      piVar1 = *local_40;
      uVar2 = *local_48;
      puVar3[-7] = 0x40738d;
      deallocate(local_50,piVar1,uVar2,*(undefined *)(puVar3 + -7));
LAB_0040723f:
      piVar1 = *local_40;
      uVar2 = *local_48;
      puVar3[-7] = 0x407259;
      deallocate(local_50,piVar1,uVar2,*(undefined *)(puVar3 + -7));
    } while ((x43 * (x43 + -1) & 1U) != 0 && 9 < y44);
  }
  do {
  } while ((x43 * (x43 + -1) & 1U) != 0 && 9 < y44);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::~_Vector_impl()

void __thiscall __Vector_impl(_Vector_impl *this)

{
  _Vector_impl **pp_Var1;
  _Vector_impl **pp_Var2;
  undefined auStack24 [8];
  _Vector_impl *local_10;
  
  pp_Var1 = (_Vector_impl **)auStack24;
  pp_Var2 = (_Vector_impl **)auStack24;
  local_10 = this;
  if ((x45 * (x45 + -1) & 1U) == 0 || y46 < 10) goto LAB_004073ef;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = local_10;
    pp_Var2[-3] = 0x407474;
    _allocator(*pp_Var1,*(undefined *)(pp_Var2 + -3));
LAB_004073ef:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = local_10;
    pp_Var1[-3] = 0x40740b;
    _allocator(*pp_Var2,*(undefined *)(pp_Var1 + -3));
  } while ((x45 * (x45 + -1) & 1U) != 0 && 9 < y46);
  return;
}



// std::allocator<int>::~allocator()

void __thiscall _allocator(allocator_int_ *this)

{
  allocator_int_ **ppaVar1;
  allocator_int_ **ppaVar2;
  undefined auStack24 [8];
  allocator_int_ *local_10;
  
  ppaVar1 = (allocator_int_ **)auStack24;
  ppaVar2 = (allocator_int_ **)auStack24;
  local_10 = this;
  if ((x47 * (x47 + -1) & 1U) == 0 || y48 < 10) goto LAB_004074cf;
  do {
    ppaVar1 = ppaVar2 + -2;
    *ppaVar1 = local_10;
    ppaVar2[-3] = 0x407554;
    _new_allocator(*ppaVar1,*(undefined *)(ppaVar2 + -3));
LAB_004074cf:
    ppaVar2 = ppaVar1 + -2;
    *ppaVar2 = local_10;
    ppaVar1[-3] = 0x4074eb;
    _new_allocator(*ppaVar2,*(undefined *)(ppaVar1 + -3));
  } while ((x47 * (x47 + -1) & 1U) != 0 && 9 < y48);
  return;
}



// __gnu_cxx::new_allocator<int>::~new_allocator()

void __thiscall _new_allocator(new_allocator_int_ *this)

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

void __thiscall deallocate(new_allocator_int_ *this,int *param_1,ulong param_2)

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
    *(new_allocator_int_ **)(puVar2 + -2) = local_20;
    *(int **)(puVar2 + -4) = local_18;
    *puVar1 = local_28;
    puVar2[-7] = 0x40774a;
    operator_delete((int *)puVar2[-4],*(undefined *)(puVar2 + -7));
LAB_0040767b:
    puVar2 = puVar1 + -6;
    *(new_allocator_int_ **)(puVar1 + -2) = local_20;
    *(int **)(puVar1 + -4) = local_18;
    *puVar2 = local_28;
    puVar1[-7] = 0x4076b9;
    operator_delete((int *)puVar1[-4],*(undefined *)(puVar1 + -7));
  } while ((x51 * (x51 + -1) & 1U) != 0 && 9 < y52);
  return;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::__normal_iterator(int const* const&)

void __thiscall
__normal_iterator(__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this,
                 int **param_1)

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

int * 
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
    *(int **)(puVar2 + -6) = local_40;
    puVar2[-8] = puVar2[-2];
    *puVar1 = puVar2[-4];
    puVar2[-0xb] = 0x4079e9;
    local_50 = 
               __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)puVar2[-8],(int)*puVar1,(int *)puVar2[-6],
                          *(undefined *)(puVar2 + -0xb));
LAB_004078c1:
    puVar2 = puVar1 + -10;
    puVar1[-2] = local_38;
    puVar1[-4] = local_30;
    *(int **)(puVar1 + -6) = local_40;
    puVar1[-8] = puVar1[-2];
    *puVar2 = puVar1[-4];
    puVar1[-0xb] = 0x407925;
    local_48 = 
               __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)puVar1[-8],(int)*puVar2,(int *)puVar1[-6],
                          *(undefined *)(puVar1 + -0xb));
  } while ((x55 * (x55 + -1) & 1U) != 0 && 9 < y56);
  return local_48;
}



// int* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * 
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
    *(int **)(puVar2 + -6) = local_40;
    puVar2[-8] = puVar2[-2];
    *puVar1 = puVar2[-4];
    puVar2[-0xb] = 0x407b89;
    local_50 = 
               copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)puVar2[-8],(int)*puVar1,(int *)puVar2[-6],
                          *(undefined *)(puVar2 + -0xb));
LAB_00407a61:
    puVar2 = puVar1 + -10;
    puVar1[-2] = local_38;
    puVar1[-4] = local_30;
    *(int **)(puVar1 + -6) = local_40;
    puVar1[-8] = puVar1[-2];
    *puVar2 = puVar1[-4];
    puVar1[-0xb] = 0x407ac5;
    local_48 = 
               copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)puVar1[-8],(int)*puVar2,(int *)puVar1[-6],
                          *(undefined *)(puVar1 + -0xb));
  } while ((x57 * (x57 + -1) & 1U) != 0 && 9 < y58);
  return local_48;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>, int*)

int * copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  _Miter_base _Var5;
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
    ppiVar7[-2] = local_40;
    ppiVar7[-4] = local_38;
    ppiVar7[-6] = local_48;
    ppiVar7[-10] = ppiVar7[-2];
    local_80 = ppiVar7 + -4;
    local_88 = ppiVar7 + -6;
    local_90 = ppiVar7 + -8;
    local_98 = ppiVar7 + -0xc;
    local_a0 = ppiVar6;
    ppiVar7[-0xf] = 0x407da3;
    _Var5 = 
            __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)ppiVar7[-10],*(undefined *)(ppiVar7 + -0xf));
    *local_90 = CONCAT44(extraout_var_01,_Var5);
    puVar4 = local_a0;
    *local_a0 = *local_80;
    uVar1 = *puVar4;
    ppiVar7[-0xf] = 0x407dc6;
    _Var5 = 
            __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)uVar1,*(undefined *)(ppiVar7 + -0xf));
    puVar4 = local_98;
    *local_98 = CONCAT44(extraout_var_02,_Var5);
    piVar2 = *local_88;
    uVar1 = *local_90;
    uVar3 = *puVar4;
    ppiVar7[-0xf] = 0x407de9;
    local_a8 = 
               __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)uVar1,(int)uVar3,piVar2,*(undefined *)(ppiVar7 + -0xf));
LAB_00407c03:
    ppiVar7 = ppiVar6 + -0xe;
    ppiVar6[-2] = local_40;
    ppiVar6[-4] = local_38;
    ppiVar6[-6] = local_48;
    ppiVar6[-10] = ppiVar6[-2];
    local_50 = ppiVar6 + -4;
    local_58 = ppiVar6 + -6;
    local_60 = ppiVar6 + -8;
    local_68 = ppiVar6 + -0xc;
    local_70 = ppiVar7;
    ppiVar6[-0xf] = 0x407c80;
    _Var5 = 
            __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)ppiVar6[-10],*(undefined *)(ppiVar6 + -0xf));
    *local_60 = CONCAT44(extraout_var,_Var5);
    puVar4 = local_70;
    *local_70 = *local_50;
    uVar1 = *puVar4;
    ppiVar6[-0xf] = 0x407c9d;
    _Var5 = 
            __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)uVar1,*(undefined *)(ppiVar6 + -0xf));
    puVar4 = local_68;
    *local_68 = CONCAT44(extraout_var_00,_Var5);
    piVar2 = *local_58;
    uVar1 = *local_60;
    uVar3 = *puVar4;
    ppiVar6[-0xf] = 0x407cba;
    local_78 = 
               __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((int)uVar1,(int)uVar3,piVar2,*(undefined *)(ppiVar6 + -0xf));
  } while ((x59 * (x59 + -1) & 1U) != 0 && 9 < y60);
  return local_78;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * 
      __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  _Niter_base _Var4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined auStack168 [8];
  int *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int **local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int **local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  int *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar5 = (undefined8 *)auStack168;
  puVar6 = (undefined8 *)auStack168;
  local_30 = CONCAT44(in_register_00000034,param_2);
  local_38 = CONCAT44(in_register_0000003c,param_1);
  local_40 = param_3;
  if ((x61 * (x61 + -1) & 1U) == 0 || y62 < 10) goto LAB_00407e64;
  do {
    puVar5 = puVar6 + -10;
    puVar6[-2] = local_38;
    puVar6[-4] = local_30;
    *(int **)(puVar6 + -6) = local_40;
    puVar6[-8] = puVar6[-2];
    local_78 = puVar5;
    local_80 = puVar6 + -4;
    local_88 = (int **)(puVar6 + -6);
    puVar6[-0xb] = 0x407fc6;
    _Var4 = 
            __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)puVar6[-8],*(undefined *)(puVar6 + -0xb));
    puVar3 = local_78;
    *local_78 = *local_80;
    uVar1 = *puVar3;
    local_90 = CONCAT44(extraout_var_02,_Var4);
    puVar6[-0xb] = 0x407fe3;
    _Var4 = 
            __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)uVar1,*(undefined *)(puVar6 + -0xb));
    piVar2 = *local_88;
    local_98 = CONCAT44(extraout_var_03,_Var4);
    puVar6[-0xb] = 0x407ff6;
    _Var4 = __niter_base_int__(piVar2,*(undefined *)(puVar6 + -0xb));
    puVar6[-0xb] = 0x40800c;
    local_a0 = __copy_move_a_false_int_const__int__
                         (local_90,local_98,CONCAT44(extraout_var_04,_Var4),
                          *(undefined *)(puVar6 + -0xb));
LAB_00407e64:
    puVar6 = puVar5 + -10;
    puVar5[-2] = local_38;
    puVar5[-4] = local_30;
    *(int **)(puVar5 + -6) = local_40;
    puVar5[-8] = puVar5[-2];
    local_48 = puVar6;
    local_50 = puVar5 + -4;
    local_58 = (int **)(puVar5 + -6);
    puVar5[-0xb] = 0x407ec8;
    _Var4 = 
            __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)puVar5[-8],*(undefined *)(puVar5 + -0xb));
    puVar3 = local_48;
    *local_48 = *local_50;
    uVar1 = *puVar3;
    local_60 = CONCAT44(extraout_var,_Var4);
    puVar5[-0xb] = 0x407ee2;
    _Var4 = 
            __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((int)uVar1,*(undefined *)(puVar5 + -0xb));
    piVar2 = *local_58;
    local_68 = CONCAT44(extraout_var_00,_Var4);
    puVar5[-0xb] = 0x407ef2;
    _Var4 = __niter_base_int__(piVar2,*(undefined *)(puVar5 + -0xb));
    puVar5[-0xb] = 0x407f02;
    local_70 = __copy_move_a_false_int_const__int__
                         (local_60,local_68,CONCAT44(extraout_var_01,_Var4),
                          *(undefined *)(puVar5 + -0xb));
  } while ((x61 * (x61 + -1) & 1U) != 0 && 9 < y62);
  return local_70;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

_Miter_base
__miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
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
    uVar1 = _S_base((int)*puVar2,*(undefined *)(puVar3 + -7));
    *local_30 = uVar1;
LAB_00408070:
    puVar3 = puVar2 + -6;
    puVar2[-4] = local_18;
    *puVar3 = puVar2[-4];
    local_20 = puVar2 + -2;
    puVar2[-7] = 0x4080a7;
    uVar1 = _S_base((int)*puVar3,*(undefined *)(puVar2 + -7));
    puVar2 = local_20;
    *local_20 = uVar1;
    local_28 = *puVar2;
  } while ((x63 * (x63 + -1) & 1U) != 0 && 9 < y64);
  return (_Miter_base)*puVar2;
}



// std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>)

undefined8 _S_base(__normal_iterator param_1)

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

int * __copy_move_a_false_int_const__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  
  ppiVar1 = &local_48;
  ppiVar2 = &local_48;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((x67 * (x67 + -1) & 1U) == 0 || y68 < 10) goto LAB_0040829f;
  do {
    ppiVar1 = (int **)((undefined *)ppiVar2 + -0x40);
    *(int **)((undefined *)ppiVar2 + -0x10) = local_30;
    *(int **)((undefined *)ppiVar2 + -0x20) = local_28;
    *(int **)((undefined *)ppiVar2 + -0x30) = local_38;
    *(undefined *)ppiVar1 = 1;
    *(undefined8 *)((undefined *)ppiVar2 + -0x48) = 0x40839a;
    local_48 = __copy_m_int_(*(int **)((undefined *)ppiVar2 + -0x10),
                             *(int **)((undefined *)ppiVar2 + -0x20),
                             *(int **)((undefined *)ppiVar2 + -0x30),((undefined *)ppiVar2)[-0x48]);
LAB_0040829f:
    ppiVar2 = (int **)((undefined *)ppiVar1 + -0x40);
    *(int **)((undefined *)ppiVar1 + -0x10) = local_30;
    *(int **)((undefined *)ppiVar1 + -0x20) = local_28;
    *(int **)((undefined *)ppiVar1 + -0x30) = local_38;
    *(undefined *)ppiVar2 = 1;
    *(undefined8 *)((undefined *)ppiVar1 + -0x48) = 0x4082ed;
    local_40 = __copy_m_int_(*(int **)((undefined *)ppiVar1 + -0x10),
                             *(int **)((undefined *)ppiVar1 + -0x20),
                             *(int **)((undefined *)ppiVar1 + -0x30),((undefined *)ppiVar1)[-0x48]);
  } while ((x67 * (x67 + -1) & 1U) != 0 && 9 < y68);
  return local_40;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

_Niter_base
__niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
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
    local_20 = _S_base((int)*puVar1,*(undefined *)(puVar2 + -5));
LAB_004083ff:
    puVar2 = puVar1 + -4;
    puVar1[-2] = local_10;
    *puVar2 = puVar1[-2];
    puVar1[-5] = 0x408428;
    local_18 = _S_base((int)*puVar2,*(undefined *)(puVar1 + -5));
  } while ((x69 * (x69 + -1) & 1U) != 0 && 9 < y70);
  return (_Niter_base)local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*)

_Niter_base __niter_base_int__(int *param_1)

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
    ppiVar2[-3] = 0x408596;
    local_20 = _S_base(*ppiVar1,*(undefined *)(ppiVar2 + -3));
LAB_0040850f:
    ppiVar2 = ppiVar1 + -2;
    *ppiVar2 = local_10;
    ppiVar1[-3] = 0x408528;
    local_18 = _S_base(*ppiVar2,*(undefined *)(ppiVar1 + -3));
  } while ((x71 * (x71 + -1) & 1U) != 0 && 9 < y72);
  return (_Niter_base)local_18;
}



// std::_Iter_base<int*, false>::_S_base(int*)

int * _S_base(int *param_1)

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

undefined8 _S_base(__normal_iterator param_1)

{
  undefined8 *this;
  undefined8 *this_00;
  undefined4 in_register_0000003c;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  this = (undefined8 *)auStack40;
  this_00 = (undefined8 *)auStack40;
  if ((x75 * (x75 + -1) & 1U) == 0 || y76 < 10) goto LAB_004086bf;
  do {
    this = this_00 + -2;
    *this = local_10;
    this_00[-3] = 0x408749;
    local_20 = base(this,*(undefined *)(this_00 + -3));
LAB_004086bf:
    this_00 = this + -2;
    *this_00 = local_10;
    this[-3] = 0x4086d8;
    this = (undefined8 *)base(this_00,*(undefined *)(this + -3));
    local_18 = *this;
  } while ((x75 * (x75 + -1) & 1U) != 0 && 9 < y76);
  return local_18;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
base(__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this)

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

int * __copy_m_int_(int *param_1,int *param_2,int *param_3)

{
  int *__dest;
  int *__src;
  long lVar1;
  long *plVar2;
  undefined auStack120 [23];
  bool local_61;
  long *local_60;
  int **local_58;
  int **local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  plVar2 = (long *)auStack120;
  local_60 = (long *)auStack120;
  if ((x79 * (x79 + -1) & 1U) == 0 || y80 < 10) goto LAB_00408893;
  do {
    plVar2 = local_60 + -8;
    *(int **)(local_60 + -2) = param_1;
    *(int **)(local_60 + -4) = param_2;
    *(int **)(local_60 + -6) = param_3;
    *plVar2 = (long)((long)local_60[-4] - (long)local_60[-2]) >> 2;
LAB_00408893:
    local_50 = (int **)(plVar2 + -2);
    local_58 = (int **)(plVar2 + -6);
    local_60 = plVar2 + -8;
    *local_50 = param_1;
    *(int **)(plVar2 + -4) = param_2;
    *local_58 = param_3;
    *local_60 = (long)((long)plVar2[-4] - (long)*local_50) >> 2;
    local_61 = *local_60 != 0;
  } while ((x79 * (x79 + -1) & 1U) != 0 && 9 < y80);
  if (local_61) {
    local_48 = param_3;
    local_40 = param_1;
    local_38 = param_2;
    if ((x79 * (x79 + -1) & 1U) == 0 || y80 < 10) goto LAB_00408998;
    do {
      __dest = *local_58;
      __src = *local_50;
      lVar1 = *local_60;
      plVar2[-9] = 0x408b3b;
      memmove(__dest,__src,lVar1 << 2,*(undefined *)(plVar2 + -9));
LAB_00408998:
      __dest = *local_58;
      __src = *local_50;
      lVar1 = *local_60;
      plVar2[-9] = 0x4089bc;
      memmove(__dest,__src,lVar1 << 2,*(undefined *)(plVar2 + -9));
    } while ((x79 * (x79 + -1) & 1U) != 0 && 9 < y80);
  }
  do {
  } while ((x79 * (x79 + -1) & 1U) != 0 && 9 < y80);
  return *local_58 + *local_60;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::_Vector_impl(std::allocator<int>
// const&)

void __thiscall _Vector_impl(_Vector_impl *this,allocator *param_1)

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
    *(_Vector_impl **)(ppaVar2 + -2) = local_18;
    *ppaVar1 = local_20;
    local_30 = (undefined8 *)ppaVar2[-2];
    ppaVar2[-5] = 0x408c7a;
    allocator(local_30,*ppaVar1,*(undefined *)(ppaVar2 + -5));
    *local_30 = 0;
    local_30[1] = 0;
    local_30[2] = 0;
LAB_00408ba4:
    ppaVar2 = ppaVar1 + -4;
    *(_Vector_impl **)(ppaVar1 + -2) = local_18;
    *ppaVar2 = local_20;
    local_28 = (undefined8 *)ppaVar1[-2];
    ppaVar1[-5] = 0x408bd8;
    allocator(local_28,*ppaVar2,*(undefined *)(ppaVar1 + -5));
    *local_28 = 0;
    local_28[1] = 0;
    local_28[2] = 0;
  } while ((x81 * (x81 + -1) & 1U) != 0 && 9 < y82);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_create_storage(unsigned long)

void __thiscall _M_create_storage(_Vector_base_int_std__allocator_int__ *this,ulong param_1)

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
    *(long **)(puVar3 + -2) = local_18;
    *puVar2 = local_20;
    local_38 = (long *)puVar3[-2];
    local_40 = puVar2;
    puVar3[-5] = 0x408dda;
    lVar1 = _M_allocate(local_38,*puVar2,*(undefined *)(puVar3 + -5));
    *local_38 = lVar1;
    local_38[1] = *local_38;
    local_38[2] = *local_38 + *local_40 * 4;
LAB_00408cf4:
    puVar3 = puVar2 + -4;
    *(long **)(puVar2 + -2) = local_18;
    *puVar3 = local_20;
    local_28 = (long *)puVar2[-2];
    local_30 = puVar3;
    puVar2[-5] = 0x408d2c;
    lVar1 = _M_allocate(local_28,*puVar3,*(undefined *)(puVar2 + -5));
    *local_28 = lVar1;
    local_28[1] = *local_28;
    local_28[2] = *local_28 + *local_30 * 4;
  } while ((x83 * (x83 + -1) & 1U) != 0 && 9 < y84);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_allocate(unsigned long)

undefined8 __thiscall _M_allocate(_Vector_base_int_std__allocator_int__ *this,ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  bool local_31;
  _Vector_base_int_std__allocator_int__ *local_30;
  ulong *local_28;
  ulong local_20;
  _Vector_base_int_std__allocator_int__ *local_18;
  
  puVar2 = local_58;
  local_28 = local_58;
  if ((x85 * (x85 + -1) & 1U) == 0 || y86 < 10) goto LAB_00408e64;
  do {
    puVar2 = local_28 + -4;
    *(_Vector_base_int_std__allocator_int__ **)(local_28 + -2) = this;
    *puVar2 = param_1;
LAB_00408e64:
    local_28 = puVar2 + -4;
    *(_Vector_base_int_std__allocator_int__ **)(puVar2 + -2) = this;
    *local_28 = param_1;
    local_30 = (_Vector_base_int_std__allocator_int__ *)puVar2[-2];
    local_31 = *local_28 != 0;
  } while ((x85 * (x85 + -1) & 1U) != 0 && 9 < y86);
  if (local_31) {
    local_20 = param_1;
    local_18 = this;
    if ((x85 * (x85 + -1) & 1U) == 0 || y86 < 10) goto LAB_00408f3f;
    do {
      uVar1 = *local_28;
      puVar2[-5] = 0x40911f;
      local_58[0] = allocate(local_30,uVar1,0,*(undefined *)(puVar2 + -5));
LAB_00408f3f:
      uVar1 = *local_28;
      puVar2[-5] = 0x408f56;
      local_40 = allocate(local_30,uVar1,0,*(undefined *)(puVar2 + -5));
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

void * __thiscall allocate(new_allocator_int_ *this,ulong param_1,void *param_2)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  bool local_49;
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
    *(new_allocator_int_ **)(ppvVar3 + -2) = local_30;
    ppvVar3[-4] = local_28;
    *ppvVar2 = local_38;
    ppvVar3[-7] = 0x4093c7;
    local_60 = max_size((new_allocator_int_ *)ppvVar3[-2],*(undefined *)(ppvVar3 + -7));
LAB_0040919f:
    local_40 = ppvVar2 + -4;
    ppvVar3 = ppvVar2 + -6;
    *(new_allocator_int_ **)(ppvVar2 + -2) = local_30;
    *local_40 = local_28;
    *ppvVar3 = local_38;
    local_48 = *local_40;
    ppvVar2[-7] = 0x4091e5;
    pvVar1 = (void *)max_size((new_allocator_int_ *)ppvVar2[-2],*(undefined *)(ppvVar2 + -7));
    local_49 = pvVar1 < local_48;
  } while ((x87 * (x87 + -1) & 1U) != 0 && 9 < y88);
  if (local_49) {
    if ((x87 * (x87 + -1) & 1U) == 0 || y88 < 10) goto LAB_00409293;
    do {
      ppvVar2[-7] = 0x4093d5;
      __throw_bad_alloc(*(undefined *)(ppvVar2 + -7));
LAB_00409293:
      ppvVar2[-7] = 0x409298;
      __throw_bad_alloc(*(undefined *)(ppvVar2 + -7));
    } while ((x87 * (x87 + -1) & 1U) != 0 && 9 < y88);
  }
  if ((x87 * (x87 + -1) & 1U) == 0 || y88 < 10) goto LAB_0040931e;
  do {
    pvVar1 = *local_40;
    ppvVar2[-7] = 0x4093ed;
    local_68 = operator_new((long)pvVar1 << 2,*(undefined *)(ppvVar2 + -7));
LAB_0040931e:
    pvVar1 = *local_40;
    ppvVar2[-7] = 0x409331;
    local_58 = operator_new((long)pvVar1 << 2,*(undefined *)(ppvVar2 + -7));
  } while ((x87 * (x87 + -1) & 1U) != 0 && 9 < y88);
  return local_58;
}



// __gnu_cxx::new_allocator<int>::max_size() const

undefined8 __thiscall max_size(new_allocator_int_ *this)

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

void __thiscall allocator(allocator_int_ *this,allocator *param_1)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined auStack40 [8];
  allocator *local_20;
  allocator_int_ *local_18;
  
  ppaVar1 = (allocator **)auStack40;
  ppaVar2 = (allocator **)auStack40;
  local_20 = param_1;
  local_18 = this;
  if ((x91 * (x91 + -1) & 1U) == 0 || y92 < 10) goto LAB_00409524;
  do {
    ppaVar1 = ppaVar2 + -4;
    *(allocator_int_ **)(ppaVar2 + -2) = local_18;
    *ppaVar1 = local_20;
    ppaVar2[-5] = 0x4095dd;
    new_allocator(ppaVar2[-2],*ppaVar1,*(undefined *)(ppaVar2 + -5));
LAB_00409524:
    ppaVar2 = ppaVar1 + -4;
    *(allocator_int_ **)(ppaVar1 + -2) = local_18;
    *ppaVar2 = local_20;
    ppaVar1[-5] = 0x409557;
    new_allocator(ppaVar1[-2],*ppaVar2,*(undefined *)(ppaVar1 + -5));
  } while ((x91 * (x91 + -1) & 1U) != 0 && 9 < y92);
  return;
}



// __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&)

void __thiscall new_allocator(new_allocator_int_ *this,new_allocator *param_1)

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
    *(new_allocator_int_ **)(ppnVar2 + -2) = local_10;
    *ppnVar1 = local_18;
LAB_00409643:
    ppnVar2 = ppnVar1 + -4;
    *(new_allocator_int_ **)(ppnVar1 + -2) = local_10;
    *ppnVar2 = local_18;
  } while ((x93 * (x93 + -1) & 1U) != 0 && 9 < y94);
  return;
}



// void __gnu_cxx::__alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&, int*,
// int const&)

void construct_int_(allocator *param_1,int *param_2,int *param_3)

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
    ppiVar2[-7] = 0x409819;
    construct(ppiVar2[-2],ppiVar2[-4],*ppiVar1,*(undefined *)(ppiVar2 + -7));
LAB_0040973d:
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-2] = local_28;
    ppiVar1[-4] = local_20;
    *ppiVar2 = local_30;
    ppiVar1[-7] = 0x409781;
    construct(ppiVar1[-2],ppiVar1[-4],*ppiVar2,*(undefined *)(ppiVar1 + -7));
  } while ((x95 * (x95 + -1) & 1U) != 0 && 9 < y96);
  return;
}



// std::vector<int, std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int>>>, int const&)

void __thiscall
_M_insert_aux(vector_int_std__allocator_int__ *this,__normal_iterator param_1,int *param_2)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 extraout_var_00;
  undefined8 uVar6;
  int **ppiVar7;
  undefined4 in_register_00000034;
  undefined auStack552 [8];
  long local_220;
  int *local_218;
  int *local_210;
  int local_1fc;
  int *local_1f8;
  long local_1d0;
  int *local_1c8;
  int *local_1c0;
  int *local_140;
  undefined8 local_138;
  int *local_130;
  int *local_128;
  int **local_120;
  undefined8 local_118;
  undefined8 *local_110;
  int *local_108;
  undefined8 local_100;
  int **local_f8;
  int *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
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
    *(vector_int_std__allocator_int__ **)(local_a8 + -4) = this;
    *ppiVar7 = param_2;
LAB_00409886:
    local_a8 = ppiVar7 + -0x16;
    ppiVar7[-2] = local_38;
    *(vector_int_std__allocator_int__ **)(ppiVar7 + -4) = this;
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
      ppiVar7[-0x17] = 0x40acd1;
      construct_int_(local_60,piVar5,piVar1 + -1,*(undefined *)(ppiVar7 + -0x17));
      local_60[1] = local_60[1] + 1;
      *(int *)local_50 = **local_68;
      ppiVar7[-0x17] = 0x40acfe;
      puVar4 = (undefined8 *)base(local_58,*(undefined *)(ppiVar7 + -0x17));
      uVar6 = *puVar4;
      piVar5 = local_60[1];
      piVar1 = local_60[1];
      ppiVar7[-0x17] = 0x40ad23;
      local_1f8 = copy_backward_int__int__
                            (uVar6,piVar5 + -2,piVar1 + -1,*(undefined *)(ppiVar7 + -0x17));
      local_1fc = *(int *)local_50;
      ppiVar7[-0x17] = 0x40ad41;
      piVar5 = (int *)operator_(local_58,*(undefined *)(ppiVar7 + -0x17));
      *piVar5 = local_1fc;
LAB_004099f3:
      piVar5 = local_60[1];
      piVar1 = local_60[1];
      ppiVar7[-0x17] = 0x409a12;
      construct_int_(local_60,piVar5,piVar1 + -1,*(undefined *)(ppiVar7 + -0x17));
      local_60[1] = local_60[1] + 1;
      *(int *)local_50 = **local_68;
      ppiVar7[-0x17] = 0x409a3f;
      puVar4 = (undefined8 *)base(local_58,*(undefined *)(ppiVar7 + -0x17));
      uVar6 = *puVar4;
      piVar5 = local_60[1];
      piVar1 = local_60[1];
      ppiVar7[-0x17] = 0x409a64;
      local_b0 = copy_backward_int__int__
                           (uVar6,piVar5 + -2,piVar1 + -1,*(undefined *)(ppiVar7 + -0x17));
      local_b4 = *(int *)local_50;
      ppiVar7[-0x17] = 0x409a82;
      piVar5 = (int *)operator_(local_58,*(undefined *)(ppiVar7 + -0x17));
      *piVar5 = local_b4;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
  }
  else {
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409b20;
    do {
      ppiVar7[-0x17] = 0x40ad6a;
      piVar5 = (int *)_M_check_len(local_60,1,"vector::_M_insert_aux",
                                   *(undefined *)(ppiVar7 + -0x17));
      *local_78 = piVar5;
      ppiVar7[-0x17] = 0x40ad7a;
      piVar5 = (int *)begin(local_60,*(undefined *)(ppiVar7 + -0x17));
      ppiVar2 = local_88;
      *local_88 = piVar5;
      ppiVar7[-0x17] = 0x40ad8d;
      _Var3 = operator__int__std__vector_int_std__allocator_int___
                        (local_58,ppiVar2,*(undefined *)(ppiVar7 + -0x17));
      *local_80 = (int *)CONCAT44(extraout_var_00,_Var3);
      piVar5 = *local_78;
      ppiVar7[-0x17] = 0x40ada7;
      piVar5 = (int *)_M_allocate(local_60,piVar5,*(undefined *)(ppiVar7 + -0x17));
      ppiVar2 = local_90;
      *local_90 = piVar5;
      *local_98 = *ppiVar2;
LAB_00409b20:
      ppiVar7[-0x17] = 0x409b3a;
      piVar5 = (int *)_M_check_len(local_60,1,"vector::_M_insert_aux",
                                   *(undefined *)(ppiVar7 + -0x17));
      *local_78 = piVar5;
      ppiVar7[-0x17] = 0x409b4a;
      piVar5 = (int *)begin(local_60,*(undefined *)(ppiVar7 + -0x17));
      ppiVar2 = local_88;
      *local_88 = piVar5;
      ppiVar7[-0x17] = 0x409b5d;
      _Var3 = operator__int__std__vector_int_std__allocator_int___
                        (local_58,ppiVar2,*(undefined *)(ppiVar7 + -0x17));
      *local_80 = (int *)CONCAT44(extraout_var,_Var3);
      piVar5 = *local_78;
      ppiVar7[-0x17] = 0x409b77;
      piVar5 = (int *)_M_allocate(local_60,piVar5,*(undefined *)(ppiVar7 + -0x17));
      ppiVar2 = local_90;
      *local_90 = piVar5;
      *local_98 = *ppiVar2;
      local_d0 = *ppiVar2 + (long)*local_80;
      local_c0 = *local_68;
      local_c8 = local_60;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
                    // try { // try from 00409c0a to 0040a0af has its CatchHandler @ 0040a15a
    ppiVar7[-0x17] = 0x409c24;
    construct_int_(local_60,local_d0,local_c0,*(undefined *)(ppiVar7 + -0x17));
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409c6c;
    do {
      *local_98 = (int *)0x0;
LAB_00409c6c:
      *local_98 = (int *)0x0;
      local_d8 = *local_60;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = 0x409cd9;
    local_e0 = (undefined8 *)base(local_58,*(undefined *)(ppiVar7 + -0x17));
    do {
      local_e8 = *local_e0;
      local_f0 = *local_90;
      local_f8 = local_60;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = 0x409dad;
    local_100 = _M_get_Tp_allocator(local_60,*(undefined *)(ppiVar7 + -0x17));
    do {
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = 0x409e60;
    local_108 = __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                          (local_d8,local_e8,local_f0,local_100,*(undefined *)(ppiVar7 + -0x17));
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409eaf;
    do {
      ppiVar2 = local_98;
      *local_98 = local_108;
      *ppiVar2 = *ppiVar2 + 1;
LAB_00409eaf:
      ppiVar2 = local_98;
      *local_98 = local_108;
      *ppiVar2 = *ppiVar2 + 1;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = 0x409f1e;
    local_110 = (undefined8 *)base(local_58,*(undefined *)(ppiVar7 + -0x17));
    do {
      local_118 = *local_110;
      local_120 = local_60;
      local_128 = local_60[1];
      local_130 = *local_98;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = 0x409ffd;
    local_138 = _M_get_Tp_allocator(local_60,*(undefined *)(ppiVar7 + -0x17));
    do {
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = 0x40a0b0;
    local_140 = __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                          (local_118,local_128,local_130,local_138,*(undefined *)(ppiVar7 + -0x17));
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
      ppiVar7[-0x17] = 0x40aebf;
      uVar6 = _M_get_Tp_allocator(local_60,*(undefined *)(ppiVar7 + -0x17));
      ppiVar7[-0x17] = 0x40aed5;
      _Destroy_int__int_(local_210,local_218,uVar6,*(undefined *)(ppiVar7 + -0x17));
      piVar5 = *local_60;
      local_220 = (long)((long)local_60[2] - (long)*local_60) >> 2;
      ppiVar7[-0x17] = 0x40af04;
      _M_deallocate(local_60,piVar5,local_220,*(undefined *)(ppiVar7 + -0x17));
      *local_60 = *local_90;
      local_60[1] = *local_98;
      local_60[2] = *local_90 + (long)*local_78;
LAB_0040a926:
      local_1c0 = *local_60;
      local_1c8 = local_60[1];
      ppiVar7[-0x17] = 0x40a947;
      uVar6 = _M_get_Tp_allocator(local_60,*(undefined *)(ppiVar7 + -0x17));
      ppiVar7[-0x17] = 0x40a95d;
      _Destroy_int__int_(local_1c0,local_1c8,uVar6,*(undefined *)(ppiVar7 + -0x17));
      piVar5 = *local_60;
      local_1d0 = (long)((long)local_60[2] - (long)*local_60) >> 2;
      ppiVar7[-0x17] = 0x40a98c;
      _M_deallocate(local_60,piVar5,local_1d0,*(undefined *)(ppiVar7 + -0x17));
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

vector_int_std__allocator_int__ * __thiscall end(vector_int_std__allocator_int__ *this)

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
    ppvVar2[-5] = 0x40b086;
    __normal_iterator(ppvVar2 + -2,*ppvVar1 + 8,*(undefined *)(ppvVar2 + -5));
LAB_0040afc0:
    local_20 = ppvVar1 + -2;
    ppvVar2 = ppvVar1 + -4;
    *ppvVar2 = local_18;
    ppvVar1[-5] = 0x40aff4;
    __normal_iterator(local_20,*ppvVar2 + 8,*(undefined *)(ppvVar1 + -5));
    local_28 = *local_20;
  } while ((x99 * (x99 + -1) & 1U) != 0 && 9 < y100);
  return local_28;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::__normal_iterator(int*
// const&)

void __thiscall
__normal_iterator(__normal_iterator_int__std__vector_int_std__allocator_int___ *this,int **param_1)

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

int * copy_backward_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  _Miter_base _Var2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int **ppiVar3;
  int **ppiVar4;
  undefined auStack120 [8];
  int *local_70;
  undefined8 local_68;
  int **local_60;
  int **local_58;
  int *local_50;
  undefined8 local_48;
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
    ppiVar4[-7] = 0x40b302;
    local_60 = ppiVar3;
    _Var2 = __miter_base_int__(ppiVar4[-2],*(undefined *)(ppiVar4 + -7));
    local_68 = CONCAT44(extraout_var_01,_Var2);
    piVar1 = *local_58;
    ppiVar4[-7] = 0x40b312;
    _Var2 = __miter_base_int__(piVar1,*(undefined *)(ppiVar4 + -7));
    piVar1 = *local_60;
    ppiVar4[-7] = 0x40b325;
    local_70 = __copy_move_backward_a2_false_int__int__
                         (local_68,CONCAT44(extraout_var_02,_Var2),piVar1,
                          *(undefined *)(ppiVar4 + -7));
LAB_0040b1fd:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = 0x40b240;
    local_40 = ppiVar4;
    _Var2 = __miter_base_int__(ppiVar3[-2],*(undefined *)(ppiVar3 + -7));
    local_48 = CONCAT44(extraout_var,_Var2);
    piVar1 = *local_38;
    ppiVar3[-7] = 0x40b250;
    _Var2 = __miter_base_int__(piVar1,*(undefined *)(ppiVar3 + -7));
    piVar1 = *local_40;
    ppiVar3[-7] = 0x40b263;
    local_50 = __copy_move_backward_a2_false_int__int__
                         (local_48,CONCAT44(extraout_var_00,_Var2),piVar1,
                          *(undefined *)(ppiVar3 + -7));
  } while ((x103 * (x103 + -1) & 1U) != 0 && 9 < y104);
  return local_50;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int__std__vector_int_std__allocator_int___ * __thiscall
base(__normal_iterator_int__std__vector_int_std__allocator_int___ *this)

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



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::operator*() const

undefined8 __thiscall operator_(__normal_iterator_int__std__vector_int_std__allocator_int___ *this)

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

char * __thiscall _M_check_len(vector_int_std__allocator_int__ *this,ulong param_1,char *param_2)

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
  bool local_79;
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
    *(vector_int_std__allocator_int__ **)(ppcVar5 + -2) = local_40;
    ppcVar5[-4] = local_38;
    *ppcVar4 = local_48;
    local_d0 = (vector_int_std__allocator_int__ *)ppcVar5[-2];
    ppcVar5[-7] = 0x40bab6;
    local_d8 = max_size(local_d0,*(undefined *)(ppcVar5 + -7));
    ppcVar5[-7] = 0x40bac9;
    local_e0 = size(local_d0,*(undefined *)(ppcVar5 + -7));
LAB_0040b536:
    ppcVar5 = ppcVar4 + -10;
    *(vector_int_std__allocator_int__ **)(ppcVar4 + -2) = local_40;
    ppcVar4[-4] = local_38;
    ppcVar4[-6] = local_48;
    local_70 = (vector_int_std__allocator_int__ *)ppcVar4[-2];
    local_50 = ppcVar5;
    local_58 = ppcVar4 + -4;
    local_60 = ppcVar4 + -6;
    local_68 = ppcVar4 + -8;
    ppcVar4[-0xb] = 0x40b59c;
    local_78 = max_size(local_70,*(undefined *)(ppcVar4 + -0xb));
    ppcVar4[-0xb] = 0x40b5a9;
    lVar1 = size(local_70,*(undefined *)(ppcVar4 + -0xb));
    local_79 = (char *)(local_78 - lVar1) < *local_58;
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  if (local_79) {
    if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b65c;
    do {
      pcVar2 = *local_60;
      ppcVar4[-0xb] = 0x40bae1;
      __throw_length_error(pcVar2,*(undefined *)(ppcVar4 + -0xb));
LAB_0040b65c:
      pcVar2 = *local_60;
      ppcVar4[-0xb] = 0x40b668;
      __throw_length_error(pcVar2,*(undefined *)(ppcVar4 + -0xb));
    } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  }
  if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b6f0;
  do {
    ppcVar4[-0xb] = 0x40baef;
    local_e8 = size(local_70,*(undefined *)(ppcVar4 + -0xb));
    ppcVar4[-0xb] = 0x40baff;
    pcVar2 = (char *)size(local_70,*(undefined *)(ppcVar4 + -0xb));
    ppcVar5 = local_50;
    *local_50 = pcVar2;
    ppcVar4[-0xb] = 0x40bb0f;
    puVar3 = max_unsigned_long_(ppcVar5,local_58,*(undefined *)(ppcVar4 + -0xb));
    *local_68 = (char *)(local_e8 + *puVar3);
    ppcVar4[-0xb] = 0x40bb2c;
    local_f0 = size(local_70,*(undefined *)(ppcVar4 + -0xb));
LAB_0040b6f0:
    ppcVar4[-0xb] = 0x40b6f9;
    local_88 = size(local_70,*(undefined *)(ppcVar4 + -0xb));
    ppcVar4[-0xb] = 0x40b706;
    pcVar2 = (char *)size(local_70,*(undefined *)(ppcVar4 + -0xb));
    ppcVar5 = local_50;
    *local_50 = pcVar2;
    ppcVar4[-0xb] = 0x40b716;
    puVar3 = max_unsigned_long_(ppcVar5,local_58,*(undefined *)(ppcVar4 + -0xb));
    ppcVar5 = local_68;
    *local_68 = (char *)(local_88 + *puVar3);
    local_90 = *ppcVar5;
    ppcVar4[-0xb] = 0x40b737;
    pcVar2 = (char *)size(local_70,*(undefined *)(ppcVar4 + -0xb));
    local_91 = local_90 < pcVar2;
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  if (local_90 >= pcVar2) {
    if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b7ea;
    do {
      ppcVar4[-0xb] = 0x40bb41;
      local_f8 = max_size(local_70,*(undefined *)(ppcVar4 + -0xb));
LAB_0040b7ea:
      local_a0 = *local_68;
      ppcVar4[-0xb] = 0x40b801;
      pcVar2 = (char *)max_size(local_70,*(undefined *)(ppcVar4 + -0xb));
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
    ppcVar4[-0xb] = 0x40bb56;
    local_100 = max_size(local_70,*(undefined *)(ppcVar4 + -0xb));
LAB_0040b8b4:
    ppcVar4[-0xb] = 0x40b8bd;
    local_b8 = (char *)max_size(local_70,*(undefined *)(ppcVar4 + -0xb));
    local_b0 = local_b8;
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
LAB_0040ba18:
  do {
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  return local_b8;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::difference_type
// __gnu_cxx::operator-<int*, std::vector<int,
// std::allocator<int>>>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>
// const&, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>> const&)

__normal_iterator
operator__int__std__vector_int_std__allocator_int___
          (__normal_iterator *param_1,__normal_iterator *param_2)

{
  __normal_iterator *this;
  long *plVar1;
  __normal_iterator **pp_Var2;
  __normal_iterator **pp_Var3;
  undefined auStack88 [8];
  undefined8 local_50;
  undefined8 local_48;
  __normal_iterator **local_40;
  long local_38;
  long local_30;
  __normal_iterator **local_28;
  __normal_iterator *local_20;
  __normal_iterator *local_18;
  
  pp_Var2 = (__normal_iterator **)auStack88;
  pp_Var3 = (__normal_iterator **)auStack88;
  local_20 = param_2;
  local_18 = param_1;
  if ((x111 * (x111 + -1) & 1U) == 0 || y112 < 10) goto LAB_0040bbc4;
  do {
    pp_Var2 = pp_Var3 + -4;
    pp_Var3[-2] = local_18;
    *pp_Var2 = local_20;
    pp_Var3[-5] = 0x40bc9c;
    local_40 = pp_Var2;
    local_48 = base(pp_Var3[-2],*(undefined *)(pp_Var3 + -5));
    this = *local_40;
    pp_Var3[-5] = 0x40bcac;
    local_50 = base(this,*(undefined *)(pp_Var3 + -5));
LAB_0040bbc4:
    pp_Var3 = pp_Var2 + -4;
    pp_Var2[-2] = local_18;
    *pp_Var3 = local_20;
    pp_Var2[-5] = 0x40bbf2;
    local_28 = pp_Var3;
    plVar1 = (long *)base(pp_Var2[-2],*(undefined *)(pp_Var2 + -5));
    local_30 = *plVar1;
    this = *local_28;
    pp_Var2[-5] = 0x40bc05;
    plVar1 = (long *)base(this,*(undefined *)(pp_Var2 + -5));
    local_38 = local_30 - *plVar1 >> 2;
  } while ((x111 * (x111 + -1) & 1U) != 0 && 9 < y112);
  return (__normal_iterator)local_38;
}



// std::vector<int, std::allocator<int>>::begin()

vector_int_std__allocator_int__ * __thiscall begin(vector_int_std__allocator_int__ *this)

{
  vector_int_std__allocator_int__ **ppvVar1;
  vector_int_std__allocator_int__ **ppvVar2;
  vector_int_std__allocator_int__ *local_28;
  vector_int_std__allocator_int__ **local_20;
  vector_int_std__allocator_int__ *local_18;
  
  ppvVar1 = &local_28;
  ppvVar2 = &local_28;
  local_18 = this;
  if ((x113 * (x113 + -1) & 1U) == 0 || y114 < 10) goto LAB_0040bd10;
  do {
    ppvVar1 = ppvVar2 + -4;
    *ppvVar1 = local_18;
    ppvVar2[-5] = 0x40bdc8;
    __normal_iterator(ppvVar2 + -2,*ppvVar1,*(undefined *)(ppvVar2 + -5));
LAB_0040bd10:
    local_20 = ppvVar1 + -2;
    ppvVar2 = ppvVar1 + -4;
    *ppvVar2 = local_18;
    ppvVar1[-5] = 0x40bd3d;
    __normal_iterator(local_20,*ppvVar2,*(undefined *)(ppvVar1 + -5));
    local_28 = *local_20;
  } while ((x113 * (x113 + -1) & 1U) != 0 && 9 < y114);
  return local_28;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int>>(int*, int*, int*,
// std::allocator<int>&)

int * __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
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
    *(int **)((allocator **)ppiVar2 + -2) = local_40;
    *(int **)((allocator **)ppiVar2 + -4) = local_38;
    *(int **)((allocator **)ppiVar2 + -6) = local_30;
    *(allocator **)ppiVar1 = local_48;
    ((allocator **)ppiVar2)[-9] = 0x40bf47;
    local_58 = __uninitialized_copy_a_int__int__int_
                         (((allocator **)ppiVar2)[-2],((allocator **)ppiVar2)[-4],
                          ((allocator **)ppiVar2)[-6],(allocator *)*ppiVar1,
                          *(undefined *)((allocator **)ppiVar2 + -9));
LAB_0040be37:
    ppiVar2 = (int **)((allocator **)ppiVar1 + -8);
    *(int **)((allocator **)ppiVar1 + -2) = local_40;
    *(int **)((allocator **)ppiVar1 + -4) = local_38;
    *(int **)((allocator **)ppiVar1 + -6) = local_30;
    *(allocator **)ppiVar2 = local_48;
    ((allocator **)ppiVar1)[-9] = 0x40be8f;
    local_50 = __uninitialized_copy_a_int__int__int_
                         (((allocator **)ppiVar1)[-2],((allocator **)ppiVar1)[-4],
                          ((allocator **)ppiVar1)[-6],(allocator *)*ppiVar2,
                          *(undefined *)((allocator **)ppiVar1 + -9));
  } while ((x115 * (x115 + -1) & 1U) != 0 && 9 < y116);
  return local_50;
}



// __gnu_cxx::__alloc_traits<std::allocator<int>>::destroy(std::allocator<int>&, int*)

void destroy(allocator *param_1,int *param_2)

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
    ppiVar2[-5] = 0x40c057;
    destroy(ppiVar2[-2],*ppiVar1,*(undefined *)(ppiVar2 + -5));
LAB_0040bfa4:
    ppiVar2 = ppiVar1 + -4;
    ppiVar1[-2] = local_18;
    *ppiVar2 = local_20;
    ppiVar1[-5] = 0x40bfd4;
    destroy(ppiVar1[-2],*ppiVar2,*(undefined *)(ppiVar1 + -5));
  } while ((x117 * (x117 + -1) & 1U) != 0 && 9 < y118);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&)

void _Destroy_int__int_(int *param_1,int *param_2,allocator *param_3)

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
    *(int **)(ppaVar2 + -2) = local_28;
    *(int **)(ppaVar2 + -4) = local_20;
    *ppaVar1 = local_30;
    ppaVar2[-7] = 0x40c18d;
    _Destroy_int__(ppaVar2[-2],ppaVar2[-4],*(undefined *)(ppaVar2 + -7));
LAB_0040c0bd:
    ppaVar2 = ppaVar1 + -6;
    *(int **)(ppaVar1 + -2) = local_28;
    *(int **)(ppaVar1 + -4) = local_20;
    *ppaVar2 = local_30;
    ppaVar1[-7] = 0x40c0fb;
    _Destroy_int__(ppaVar1[-2],ppaVar1[-4],*(undefined *)(ppaVar1 + -7));
  } while ((x119 * (x119 + -1) & 1U) != 0 && 9 < y120);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*>(int*, int*)

void _Destroy_int__(int *param_1,int *param_2)

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
    ppiVar2[-5] = 0x40c2a1;
    __destroy_int__(ppiVar2[-2],*ppiVar1,*(undefined *)(ppiVar2 + -5));
LAB_0040c1f4:
    ppiVar2 = ppiVar1 + -4;
    ppiVar1[-2] = local_18;
    *ppiVar2 = local_20;
    ppiVar1[-5] = 0x40c221;
    __destroy_int__(ppiVar1[-2],*ppiVar2,*(undefined *)(ppiVar1 + -5));
  } while ((x121 * (x121 + -1) & 1U) != 0 && 9 < y122);
  return;
}



// void std::_Destroy_aux<true>::__destroy<int*>(int*, int*)

void __destroy_int__(int *param_1,int *param_2)

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

void __thiscall destroy(new_allocator_int_ *this,int *param_1)

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

int * __uninitialized_copy_a_int__int__int_
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
    *(int **)((allocator **)ppiVar2 + -2) = local_40;
    *(int **)((allocator **)ppiVar2 + -4) = local_38;
    *(int **)((allocator **)ppiVar2 + -6) = local_30;
    *(allocator **)ppiVar1 = local_48;
    ((allocator **)ppiVar2)[-9] = 0x40c5fb;
    local_58 = uninitialized_copy_int__int__
                         (((allocator **)ppiVar2)[-2],((allocator **)ppiVar2)[-4],
                          ((allocator **)ppiVar2)[-6],*(undefined *)((allocator **)ppiVar2 + -9));
LAB_0040c4f7:
    ppiVar2 = (int **)((allocator **)ppiVar1 + -8);
    *(int **)((allocator **)ppiVar1 + -2) = local_40;
    *(int **)((allocator **)ppiVar1 + -4) = local_38;
    *(int **)((allocator **)ppiVar1 + -6) = local_30;
    *(allocator **)ppiVar2 = local_48;
    ((allocator **)ppiVar1)[-9] = 0x40c549;
    local_50 = uninitialized_copy_int__int__
                         (((allocator **)ppiVar1)[-2],((allocator **)ppiVar1)[-4],
                          ((allocator **)ppiVar1)[-6],*(undefined *)((allocator **)ppiVar1 + -9));
  } while ((x127 * (x127 + -1) & 1U) != 0 && 9 < y128);
  return local_50;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::uninitialized_copy<int*, int*>(int*, int*, int*)

int * uninitialized_copy_int__int__(int *param_1,int *param_2,int *param_3)

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
    ppiVar2[-7] = 0x40c74b;
    local_40 = __uninit_copy_int__int__
                         (ppiVar2[-2],ppiVar2[-4],*ppiVar1,*(undefined *)(ppiVar2 + -7));
LAB_0040c66d:
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-2] = local_28;
    ppiVar1[-4] = local_20;
    *ppiVar2 = local_30;
    ppiVar1[-7] = 0x40c6ae;
    local_38 = __uninit_copy_int__int__
                         (ppiVar1[-2],ppiVar1[-4],*ppiVar2,*(undefined *)(ppiVar1 + -7));
  } while ((x129 * (x129 + -1) & 1U) != 0 && 9 < y130);
  return local_38;
}



// int* std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(int*, int*, int*)

int * __uninit_copy_int__int__(int *param_1,int *param_2,int *param_3)

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
    ppiVar2[-7] = 0x40c89b;
    local_40 = copy_int__int__(ppiVar2[-2],ppiVar2[-4],*ppiVar1,*(undefined *)(ppiVar2 + -7));
LAB_0040c7bd:
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-2] = local_28;
    ppiVar1[-4] = local_20;
    *ppiVar2 = local_30;
    ppiVar1[-7] = 0x40c7fe;
    local_38 = copy_int__int__(ppiVar1[-2],ppiVar1[-4],*ppiVar2,*(undefined *)(ppiVar1 + -7));
  } while ((x131 * (x131 + -1) & 1U) != 0 && 9 < y132);
  return local_38;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::copy<int*, int*>(int*, int*, int*)

int * copy_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  _Miter_base _Var2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int **ppiVar3;
  int **ppiVar4;
  undefined auStack120 [8];
  int *local_70;
  undefined8 local_68;
  int **local_60;
  int **local_58;
  int *local_50;
  undefined8 local_48;
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
    ppiVar4[-7] = 0x40ca12;
    local_60 = ppiVar3;
    _Var2 = __miter_base_int__(ppiVar4[-2],*(undefined *)(ppiVar4 + -7));
    local_68 = CONCAT44(extraout_var_01,_Var2);
    piVar1 = *local_58;
    ppiVar4[-7] = 0x40ca22;
    _Var2 = __miter_base_int__(piVar1,*(undefined *)(ppiVar4 + -7));
    piVar1 = *local_60;
    ppiVar4[-7] = 0x40ca35;
    local_70 = __copy_move_a2_false_int__int__
                         (local_68,CONCAT44(extraout_var_02,_Var2),piVar1,
                          *(undefined *)(ppiVar4 + -7));
LAB_0040c90d:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = 0x40c950;
    local_40 = ppiVar4;
    _Var2 = __miter_base_int__(ppiVar3[-2],*(undefined *)(ppiVar3 + -7));
    local_48 = CONCAT44(extraout_var,_Var2);
    piVar1 = *local_38;
    ppiVar3[-7] = 0x40c960;
    _Var2 = __miter_base_int__(piVar1,*(undefined *)(ppiVar3 + -7));
    piVar1 = *local_40;
    ppiVar3[-7] = 0x40c973;
    local_50 = __copy_move_a2_false_int__int__
                         (local_48,CONCAT44(extraout_var_00,_Var2),piVar1,
                          *(undefined *)(ppiVar3 + -7));
  } while ((x133 * (x133 + -1) & 1U) != 0 && 9 < y134);
  return local_50;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a2<false, int*, int*>(int*, int*, int*)

int * __copy_move_a2_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  _Niter_base _Var2;
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
  undefined8 local_78;
  undefined8 local_70;
  int **local_68;
  int **local_60;
  int *local_58;
  undefined8 local_50;
  undefined8 local_48;
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
    ppiVar4[-7] = 0x40cbaf;
    local_68 = ppiVar3;
    _Var2 = __niter_base_int__(ppiVar4[-2],*(undefined *)(ppiVar4 + -7));
    local_70 = CONCAT44(extraout_var_02,_Var2);
    piVar1 = *local_60;
    ppiVar4[-7] = 0x40cbbf;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar4 + -7));
    local_78 = CONCAT44(extraout_var_03,_Var2);
    piVar1 = *local_68;
    ppiVar4[-7] = 0x40cbcf;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar4 + -7));
    ppiVar4[-7] = 0x40cbdf;
    local_80 = __copy_move_a_false_int__int__
                         (local_70,local_78,CONCAT44(extraout_var_04,_Var2),
                          *(undefined *)(ppiVar4 + -7));
LAB_0040ca9d:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = 0x40cae0;
    local_40 = ppiVar4;
    _Var2 = __niter_base_int__(ppiVar3[-2],*(undefined *)(ppiVar3 + -7));
    local_48 = CONCAT44(extraout_var,_Var2);
    piVar1 = *local_38;
    ppiVar3[-7] = 0x40caf0;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar3 + -7));
    local_50 = CONCAT44(extraout_var_00,_Var2);
    piVar1 = *local_40;
    ppiVar3[-7] = 0x40cb00;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar3 + -7));
    ppiVar3[-7] = 0x40cb10;
    local_58 = __copy_move_a_false_int__int__
                         (local_48,local_50,CONCAT44(extraout_var_01,_Var2),
                          *(undefined *)(ppiVar3 + -7));
  } while ((x135 * (x135 + -1) & 1U) != 0 && 9 < y136);
  return local_58;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*)

_Miter_base __miter_base_int__(int *param_1)

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
    ppiVar2[-3] = 0x40ccc6;
    local_20 = _S_base(*ppiVar1,*(undefined *)(ppiVar2 + -3));
LAB_0040cc3f:
    ppiVar2 = ppiVar1 + -2;
    *ppiVar2 = local_10;
    ppiVar1[-3] = 0x40cc58;
    local_18 = _S_base(*ppiVar2,*(undefined *)(ppiVar1 + -3));
  } while ((x137 * (x137 + -1) & 1U) != 0 && 9 < y138);
  return (_Miter_base)local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a<false, int*, int*>(int*, int*, int*)

int * __copy_move_a_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  
  ppiVar1 = &local_48;
  ppiVar2 = &local_48;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((x139 * (x139 + -1) & 1U) == 0 || y140 < 10) goto LAB_0040cd2f;
  do {
    ppiVar1 = (int **)((undefined *)ppiVar2 + -0x40);
    *(int **)((undefined *)ppiVar2 + -0x10) = local_30;
    *(int **)((undefined *)ppiVar2 + -0x20) = local_28;
    *(int **)((undefined *)ppiVar2 + -0x30) = local_38;
    *(undefined *)ppiVar1 = 1;
    *(undefined8 *)((undefined *)ppiVar2 + -0x48) = 0x40ce2a;
    local_48 = __copy_m_int_(*(int **)((undefined *)ppiVar2 + -0x10),
                             *(int **)((undefined *)ppiVar2 + -0x20),
                             *(int **)((undefined *)ppiVar2 + -0x30),((undefined *)ppiVar2)[-0x48]);
LAB_0040cd2f:
    ppiVar2 = (int **)((undefined *)ppiVar1 + -0x40);
    *(int **)((undefined *)ppiVar1 + -0x10) = local_30;
    *(int **)((undefined *)ppiVar1 + -0x20) = local_28;
    *(int **)((undefined *)ppiVar1 + -0x30) = local_38;
    *(undefined *)ppiVar2 = 1;
    *(undefined8 *)((undefined *)ppiVar1 + -0x48) = 0x40cd7d;
    local_40 = __copy_m_int_(*(int **)((undefined *)ppiVar1 + -0x10),
                             *(int **)((undefined *)ppiVar1 + -0x20),
                             *(int **)((undefined *)ppiVar1 + -0x30),((undefined *)ppiVar1)[-0x48]);
  } while ((x139 * (x139 + -1) & 1U) != 0 && 9 < y140);
  return local_40;
}



// std::vector<int, std::allocator<int>>::max_size() const

undefined8 __thiscall max_size(vector_int_std__allocator_int__ *this)

{
  undefined8 uVar1;
  vector_int_std__allocator_int__ **ppvVar2;
  vector_int_std__allocator_int__ **ppvVar3;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  vector_int_std__allocator_int__ *local_10;
  
  ppvVar2 = (vector_int_std__allocator_int__ **)auStack40;
  ppvVar3 = (vector_int_std__allocator_int__ **)auStack40;
  local_10 = this;
  if ((x141 * (x141 + -1) & 1U) == 0 || y142 < 10) goto LAB_0040ce8f;
  do {
    ppvVar2 = ppvVar3 + -2;
    *ppvVar2 = local_10;
    ppvVar3[-3] = 0x40cf24;
    uVar1 = _M_get_Tp_allocator(*ppvVar2,*(undefined *)(ppvVar3 + -3));
    ppvVar3[-3] = 0x40cf2c;
    local_20 = max_size(uVar1,*(undefined *)(ppvVar3 + -3));
LAB_0040ce8f:
    ppvVar3 = ppvVar2 + -2;
    *ppvVar3 = local_10;
    ppvVar2[-3] = 0x40ceab;
    uVar1 = _M_get_Tp_allocator(*ppvVar3,*(undefined *)(ppvVar2 + -3));
    ppvVar2[-3] = 0x40ceb3;
    local_18 = max_size(uVar1,*(undefined *)(ppvVar2 + -3));
  } while ((x141 * (x141 + -1) & 1U) != 0 && 9 < y142);
  return local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&)

ulong * max_unsigned_long_(ulong *param_1,ulong *param_2)

{
  ulong **ppuVar1;
  undefined auStack104 [23];
  undefined local_51;
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

undefined8 max_size(allocator *param_1)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  allocator *local_10;
  
  ppaVar1 = (allocator **)auStack40;
  ppaVar2 = (allocator **)auStack40;
  local_10 = param_1;
  if ((x145 * (x145 + -1) & 1U) == 0 || y146 < 10) goto LAB_0040d2cf;
  do {
    ppaVar1 = ppaVar2 + -2;
    *ppaVar1 = local_10;
    ppaVar2[-3] = 0x40d35c;
    local_20 = max_size(*ppaVar1,*(undefined *)(ppaVar2 + -3));
LAB_0040d2cf:
    ppaVar2 = ppaVar1 + -2;
    *ppaVar2 = local_10;
    ppaVar1[-3] = 0x40d2eb;
    local_18 = max_size(*ppaVar2,*(undefined *)(ppaVar1 + -3));
  } while ((x145 * (x145 + -1) & 1U) != 0 && 9 < y146);
  return local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_backward_a2<false, int*, int*>(int*, int*, int*)

int * __copy_move_backward_a2_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  _Niter_base _Var2;
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
  undefined8 local_78;
  undefined8 local_70;
  int **local_68;
  int **local_60;
  int *local_58;
  undefined8 local_50;
  undefined8 local_48;
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
    ppiVar4[-7] = 0x40d4df;
    local_68 = ppiVar3;
    _Var2 = __niter_base_int__(ppiVar4[-2],*(undefined *)(ppiVar4 + -7));
    local_70 = CONCAT44(extraout_var_02,_Var2);
    piVar1 = *local_60;
    ppiVar4[-7] = 0x40d4ef;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar4 + -7));
    local_78 = CONCAT44(extraout_var_03,_Var2);
    piVar1 = *local_68;
    ppiVar4[-7] = 0x40d4ff;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar4 + -7));
    ppiVar4[-7] = 0x40d50f;
    local_80 = __copy_move_backward_a_false_int__int__
                         (local_70,local_78,CONCAT44(extraout_var_04,_Var2),
                          *(undefined *)(ppiVar4 + -7));
LAB_0040d3cd:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = 0x40d410;
    local_40 = ppiVar4;
    _Var2 = __niter_base_int__(ppiVar3[-2],*(undefined *)(ppiVar3 + -7));
    local_48 = CONCAT44(extraout_var,_Var2);
    piVar1 = *local_38;
    ppiVar3[-7] = 0x40d420;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar3 + -7));
    local_50 = CONCAT44(extraout_var_00,_Var2);
    piVar1 = *local_40;
    ppiVar3[-7] = 0x40d430;
    _Var2 = __niter_base_int__(piVar1,*(undefined *)(ppiVar3 + -7));
    ppiVar3[-7] = 0x40d440;
    local_58 = __copy_move_backward_a_false_int__int__
                         (local_48,local_50,CONCAT44(extraout_var_01,_Var2),
                          *(undefined *)(ppiVar3 + -7));
  } while ((x147 * (x147 + -1) & 1U) != 0 && 9 < y148);
  return local_58;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_backward_a<false, int*, int*>(int*, int*, int*)

int * __copy_move_backward_a_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  
  ppiVar1 = &local_48;
  ppiVar2 = &local_48;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((x149 * (x149 + -1) & 1U) == 0 || y150 < 10) goto LAB_0040d57f;
  do {
    ppiVar1 = (int **)((undefined *)ppiVar2 + -0x40);
    *(int **)((undefined *)ppiVar2 + -0x10) = local_30;
    *(int **)((undefined *)ppiVar2 + -0x20) = local_28;
    *(int **)((undefined *)ppiVar2 + -0x30) = local_38;
    *(undefined *)ppiVar1 = 1;
    *(undefined8 *)((undefined *)ppiVar2 + -0x48) = 0x40d67a;
    local_48 = __copy_move_b_int_(*(int **)((undefined *)ppiVar2 + -0x10),
                                  *(int **)((undefined *)ppiVar2 + -0x20),
                                  *(int **)((undefined *)ppiVar2 + -0x30),
                                  ((undefined *)ppiVar2)[-0x48]);
LAB_0040d57f:
    ppiVar2 = (int **)((undefined *)ppiVar1 + -0x40);
    *(int **)((undefined *)ppiVar1 + -0x10) = local_30;
    *(int **)((undefined *)ppiVar1 + -0x20) = local_28;
    *(int **)((undefined *)ppiVar1 + -0x30) = local_38;
    *(undefined *)ppiVar2 = 1;
    *(undefined8 *)((undefined *)ppiVar1 + -0x48) = 0x40d5cd;
    local_40 = __copy_move_b_int_(*(int **)((undefined *)ppiVar1 + -0x10),
                                  *(int **)((undefined *)ppiVar1 + -0x20),
                                  *(int **)((undefined *)ppiVar1 + -0x30),
                                  ((undefined *)ppiVar1)[-0x48]);
  } while ((x149 * (x149 + -1) & 1U) != 0 && 9 < y150);
  return local_40;
}



// int* std::__copy_move_backward<false, true,
// std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*)

int * __copy_move_b_int_(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  long lVar2;
  int *__src;
  long lVar3;
  long *plVar4;
  undefined auStack120 [23];
  bool local_61;
  long *local_60;
  int **local_58;
  int **local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  plVar4 = (long *)auStack120;
  local_60 = (long *)auStack120;
  if ((x151 * (x151 + -1) & 1U) == 0 || y152 < 10) goto LAB_0040d6f3;
  do {
    plVar4 = local_60 + -8;
    *(int **)(local_60 + -2) = param_1;
    *(int **)(local_60 + -4) = param_2;
    *(int **)(local_60 + -6) = param_3;
    *plVar4 = (long)((long)local_60[-4] - (long)local_60[-2]) >> 2;
LAB_0040d6f3:
    local_50 = (int **)(plVar4 + -2);
    local_58 = (int **)(plVar4 + -6);
    local_60 = plVar4 + -8;
    *local_50 = param_1;
    *(int **)(plVar4 + -4) = param_2;
    *local_58 = param_3;
    *local_60 = (long)((long)plVar4[-4] - (long)*local_50) >> 2;
    local_61 = *local_60 != 0;
  } while ((x151 * (x151 + -1) & 1U) != 0 && 9 < y152);
  if (local_61) {
    local_48 = param_3;
    local_40 = param_1;
    local_38 = param_2;
    if ((x151 * (x151 + -1) & 1U) == 0 || y152 < 10) goto LAB_0040d7f8;
    do {
      piVar1 = *local_58;
      lVar2 = *local_60;
      __src = *local_50;
      lVar3 = *local_60;
      plVar4[-9] = 0x40d9bd;
      memmove(piVar1 + lVar2 * 0x3fffffffffffffff,__src,lVar3 << 2,*(undefined *)(plVar4 + -9));
LAB_0040d7f8:
      piVar1 = *local_58;
      lVar2 = *local_60;
      __src = *local_50;
      lVar3 = *local_60;
      plVar4[-9] = 0x40d82d;
      memmove(piVar1 + lVar2 * 0x3fffffffffffffff,__src,lVar3 << 2,*(undefined *)(plVar4 + -9));
    } while ((x151 * (x151 + -1) & 1U) != 0 && 9 < y152);
  }
  do {
  } while ((x151 * (x151 + -1) & 1U) != 0 && 9 < y152);
  return *local_58 + *local_60 * 0x3fffffffffffffff;
}



// __gnu_cxx::new_allocator<int>::construct(int*, int const&)

void __thiscall construct(new_allocator_int_ *this,int *param_1,int *param_2)

{
  int **ppiVar1;
  undefined auStack88 [23];
  undefined local_41;
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
    *(new_allocator_int_ **)(local_38 + -2) = this;
    local_38[-4] = param_1;
    *ppiVar1 = param_2;
LAB_0040da2d:
    local_38 = ppiVar1 + -6;
    *(new_allocator_int_ **)(ppiVar1 + -2) = this;
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

void __thiscall _Vector_base(_Vector_base_int_std__allocator_int__ *this)

{
  _Vector_base_int_std__allocator_int__ **pp_Var1;
  _Vector_base_int_std__allocator_int__ **pp_Var2;
  undefined auStack24 [8];
  _Vector_base_int_std__allocator_int__ *local_10;
  
  pp_Var1 = (_Vector_base_int_std__allocator_int__ **)auStack24;
  pp_Var2 = (_Vector_base_int_std__allocator_int__ **)auStack24;
  local_10 = this;
  if ((x155 * (x155 + -1) & 1U) == 0 || y156 < 10) goto LAB_0040dcaf;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = local_10;
    pp_Var2[-3] = 0x40dd2e;
    _Vector_impl(*pp_Var1,*(undefined *)(pp_Var2 + -3));
LAB_0040dcaf:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = local_10;
    pp_Var1[-3] = 0x40dcc8;
    _Vector_impl(*pp_Var2,*(undefined *)(pp_Var1 + -3));
  } while ((x155 * (x155 + -1) & 1U) != 0 && 9 < y156);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::_Vector_impl()

void __thiscall _Vector_impl(_Vector_impl *this)

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
    pp_Var2[-3] = 0x40de3f;
    allocator(local_20,*(undefined *)(pp_Var2 + -3));
    *local_20 = 0;
    local_20[1] = 0;
    local_20[2] = 0;
LAB_0040dd8f:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = local_10;
    local_18 = (undefined8 *)*pp_Var2;
    pp_Var1[-3] = 0x40ddb2;
    allocator(local_18,*(undefined *)(pp_Var1 + -3));
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
  } while ((x157 * (x157 + -1) & 1U) != 0 && 9 < y158);
  return;
}



// std::allocator<int>::allocator()

void __thiscall allocator(allocator_int_ *this)

{
  allocator_int_ **ppaVar1;
  allocator_int_ **ppaVar2;
  undefined auStack24 [8];
  allocator_int_ *local_10;
  
  ppaVar1 = (allocator_int_ **)auStack24;
  ppaVar2 = (allocator_int_ **)auStack24;
  local_10 = this;
  if ((x159 * (x159 + -1) & 1U) == 0 || y160 < 10) goto LAB_0040deaf;
  do {
    ppaVar1 = ppaVar2 + -2;
    *ppaVar1 = local_10;
    ppaVar2[-3] = 0x40df34;
    new_allocator(*ppaVar1,*(undefined *)(ppaVar2 + -3));
LAB_0040deaf:
    ppaVar2 = ppaVar1 + -2;
    *ppaVar2 = local_10;
    ppaVar1[-3] = 0x40decb;
    new_allocator(*ppaVar2,*(undefined *)(ppaVar1 + -3));
  } while ((x159 * (x159 + -1) & 1U) != 0 && 9 < y160);
  return;
}



// __gnu_cxx::new_allocator<int>::new_allocator()

void __thiscall new_allocator(new_allocator_int_ *this)

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
  undefined7 in_register_00000039;
  basic_string_char_std__char_traits_char__std__allocator_char__ local_20 [8];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_18 [8];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_10 [8];
  
  size();
  substr((ulong)local_20,CONCAT71(in_register_00000039,param_1));
                    // try { // try from 0040e02c to 0040e041 has its CatchHandler @ 0040e0a4
  operator__char_std__char_traits_char__std__allocator_char__
            ((char *)local_18,(basic_string *)"\n[+] A great success! Here is a flag{");
                    // try { // try from 0040e047 to 0040e05a has its CatchHandler @ 0040e0b2
  operator__char_std__char_traits_char__std__allocator_char__
            ((basic_string *)local_10,(char *)local_18);
                    // try { // try from 0040e060 to 0040e06f has its CatchHandler @ 0040e0c0
  operator___char_std__char_traits_char__std__allocator_char__
            ((basic_ostream *)cout,(basic_string *)local_10);
                    // try { // try from 0040e079 to 0040e081 has its CatchHandler @ 0040e0b2
  _basic_string(local_10);
                    // try { // try from 0040e087 to 0040e08f has its CatchHandler @ 0040e0a4
  _basic_string(local_18);
  _basic_string(local_20);
  return;
}



ulong main(void)

{
  int iVar1;
  basic_string_char_std__char_traits_char__std__allocator_char__ local_148 [8];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_140 [24];
  allocator_char_ local_128 [8];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_120 [8];
  allocator local_118 [268];
  uint local_c;
  
  local_c = 0;
  operator___std__char_traits_char__((basic_ostream *)cout,"+-----------------------+\n");
  operator___std__char_traits_char__((basic_ostream *)cout,"|    Welcome Hero       |\n");
  operator___std__char_traits_char__((basic_ostream *)cout,"+-----------------------+\n\n");
  operator___std__char_traits_char__
            ((basic_ostream *)cout,"[!] Quest: there is a dragon prowling the domain.\n");
  operator___std__char_traits_char__
            ((basic_ostream *)cout,
             "\tbrute strength and magic is our only hope. Test your skill.\n\n");
  operator___std__char_traits_char__((basic_ostream *)cout,"Enter the dragon\'s secret: ");
  fgets((char *)local_118,0x101,stdin);
  allocator();
                    // try { // try from 0040e217 to 0040e230 has its CatchHandler @ 0040e2ee
  basic_string((char *)local_120,local_118);
  _allocator(local_128);
                    // try { // try from 0040e242 to 0040e254 has its CatchHandler @ 0040e30e
  basic_string((basic_string *)local_140);
                    // try { // try from 0040e25a to 0040e265 has its CatchHandler @ 0040e322
  iVar1 = start_quest((basic_string)0xc0);
                    // try { // try from 0040e27f to 0040e2c1 has its CatchHandler @ 0040e30e
  _basic_string(local_140);
  if (iVar1 == 0x1337) {
    basic_string((basic_string *)local_148);
                    // try { // try from 0040e2c7 to 0040e2d2 has its CatchHandler @ 0040e347
    reward_strength((basic_string)0xb8);
                    // try { // try from 0040e2d8 to 0040e2e3 has its CatchHandler @ 0040e30e
    _basic_string(local_148);
  }
  else {
                    // try { // try from 0040e36c to 0040e37e has its CatchHandler @ 0040e30e
    operator___std__char_traits_char__
              ((basic_ostream *)cout,
               "\n[-] You have failed. The dragon\'s power, speed and intelligence was greater.\n");
  }
  local_c = 0;
  _basic_string(local_120);
  return (ulong)local_c;
}



// WARNING: Removing unreachable block (ram,0x0040e443)
// WARNING: Unknown calling convention yet parameter storage is locked
// std::basic_string<char, std::char_traits<char>, std::allocator<char>> std::operator+<char,
// std::char_traits<char>, std::allocator<char>>(std::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&, char const*)

basic_string
operator__char_std__char_traits_char__std__allocator_char__(basic_string *param_1,char *param_2)

{
  basic_string(param_1);
                    // try { // try from 0040e41c to 0040e424 has its CatchHandler @ 0040e448
  append((char *)param_1);
  return SUB81(param_1,0);
}



// WARNING: Removing unreachable block (ram,0x0040e543)
// WARNING: Unknown calling convention yet parameter storage is locked
// std::basic_string<char, std::char_traits<char>, std::allocator<char>> std::operator+<char,
// std::char_traits<char>, std::allocator<char>>(char const*, std::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

basic_string
operator__char_std__char_traits_char__std__allocator_char__(char *param_1,basic_string *param_2)

{
  length((char *)param_2);
  basic_string();
                    // try { // try from 0040e4d0 to 0040e524 has its CatchHandler @ 0040e548
  size();
  reserve((ulong)param_1);
  append(param_1,(ulong)param_2);
  append((basic_string *)param_1);
  return SUB81(param_1,0);
}



// std::char_traits<char>::length(char const*)

void length(char *param_1)

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


