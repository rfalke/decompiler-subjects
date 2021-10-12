typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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




int FUN_080481a9(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    iVar1 = 1;
  }
  else {
    iVar2 = FUN_080481a9(-(1 - param_1));
    iVar1 = FUN_080481a9(-(2 - param_1));
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



int FUN_0804823d(int param_1)

{
  int local_c;
  int local_8;
  
  local_c = 1;
  for (local_8 = 2; local_8 <= param_1; local_8 = local_8 + 1) {
    local_c = local_8 * local_c;
  }
  return local_c;
}



void FUN_080482bc(int param_1,int param_2)

{
  char *__ptr;
  char local_10;
  char *local_c;
  
  __ptr = (char *)malloc(0x100);
  local_c = __ptr;
  do {
    local_10 = (char)(param_1 % param_2);
    if (param_1 % param_2 < 10) {
      local_10 = local_10 + '0';
    }
    else {
      local_10 = -('\n' - (local_10 + 'a'));
    }
    *local_c = local_10;
    local_c = local_c + 1;
    param_1 = param_1 / param_2;
  } while (param_1 != 0);
  while (local_c != __ptr) {
    local_c = local_c + -1;
    printf(&DAT_08048100,(int)*local_c);
  }
  free(__ptr);
  return;
}



undefined4 FUN_08048450(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == 2) || (param_1 == 3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0804876b(*param_2);
    uVar2 = 1;
  }
  else {
    iVar3 = atoi((char *)param_2[1]);
    DAT_080480fc = 10;
    if (2 < param_1) {
      DAT_080480fc = atoi((char *)param_2[2]);
      if ((DAT_080480fc < 2) || (0x24 < DAT_080480fc)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        fprintf(stderr,s_Invalid_base_08048104);
        return 1;
      }
    }
    printf(s_fib__d____08048114,iVar3);
    uVar2 = FUN_080481a9(iVar3);
    FUN_080482bc(uVar2,DAT_080480fc);
    printf(&DAT_08048120);
    printf(s_fact__d____08048124,iVar3);
    if (iVar3 < 0xd) {
      uVar2 = FUN_0804823d(iVar3);
      FUN_080482bc(uVar2,DAT_080480fc);
    }
    else {
      printf(s_Overflow_08048130);
    }
    printf(&DAT_0804813c);
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0804876b(undefined4 param_1)

{
  printf(s_usage___s_n__base__08048140,param_1);
  printf(s_Compute_fib_n__and_fact_n__and_o_08048154);
  return;
}


