typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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




void FUN_08048261(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_0804812c;
  DAT_0804812c = DAT_0804812c + 1;
  *puVar1 = param_1;
  return;
}



void FUN_08048283(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_08048130;
  if (DAT_08048130 == (char *)0x0) {
    DAT_08048108 = fgetc(DAT_08048124);
  }
  else {
    DAT_08048130 = DAT_08048130 + 1;
    DAT_08048108 = (int)*pcVar1;
    if (DAT_08048108 == 2) {
      DAT_08048130 = (char *)0x0;
      DAT_08048108 = DAT_08048134;
    }
  }
  return;
}



uint FUN_08048311(void)

{
  uint uVar1;
  
  uVar1 = isalnum(DAT_08048108);
  return DAT_08048108 == 0x5f | uVar1;
}



void FUN_0804835a(void)

{
  if (DAT_08048108 == 0x5c) {
    FUN_08048283();
    if (DAT_08048108 == 0x6e) {
      DAT_08048108 = 10;
    }
  }
  return;
}



void FUN_080483b9(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *local_8;
  
  while (uVar2 = isspace((int)DAT_08048108), (DAT_08048108 == (int *)0x23 | uVar2) != 0) {
    if (DAT_08048108 == (int *)0x23) {
      FUN_08048283();
      FUN_080483b9();
      if (DAT_080480fc == (undefined4 *)0x218) {
        FUN_080483b9();
        FUN_08048261(0x20);
        *DAT_080480fc = 1;
        DAT_080480fc[1] = (int)DAT_0804812c;
      }
      while (DAT_08048108 != (int *)0xa) {
        FUN_08048261(DAT_08048108);
        FUN_08048283();
      }
      FUN_08048261(10);
      FUN_08048261(2);
    }
    FUN_08048283();
  }
  DAT_08048104 = 0;
  DAT_080480fc = DAT_08048108;
  iVar3 = FUN_08048311();
  if (iVar3 == 0) {
    FUN_08048283();
    if (DAT_080480fc == (int *)0x27) {
      DAT_080480fc = (int *)0x2;
      FUN_0804835a();
      DAT_08048100 = DAT_08048108;
      FUN_08048283();
      FUN_08048283();
    }
    else if (DAT_08048108 == (int *)0x2a && DAT_080480fc == (int *)0x2f) {
      FUN_08048283();
      while (DAT_08048108 != (int *)0x0) {
        while (DAT_08048108 != (int *)0x2a) {
          FUN_08048283();
        }
        FUN_08048283();
        if (DAT_08048108 == (int *)0x2f) {
          DAT_08048108 = (int *)0x0;
        }
      }
      FUN_08048283();
      FUN_080483b9();
    }
    else {
      local_8 = &DAT_08048148;
      do {
        cVar1 = *local_8;
        if ((int *)(int)cVar1 == (int *)0x0) {
          return;
        }
        piVar5 = (int *)(int)local_8[1];
        DAT_08048100 = (int *)0x0;
        local_8 = local_8 + 2;
        while( true ) {
          DAT_08048104 = -(0x62 - *local_8);
          if (-1 < DAT_08048104) break;
          DAT_08048100 = (int *)(DAT_08048104 + (int)DAT_08048100 * 0x40 + 0x40);
          local_8 = local_8 + 1;
        }
        local_8 = local_8 + 1;
      } while (piVar5 != (int *)0x40 && piVar5 != DAT_08048108 || (int *)(int)cVar1 != DAT_080480fc)
      ;
      if (piVar5 == DAT_08048108) {
        FUN_08048283();
        DAT_080480fc = (int *)0x1;
      }
    }
  }
  else {
    FUN_08048261(0x20);
    DAT_08048138 = DAT_0804812c;
    while (iVar3 = FUN_08048311(), iVar3 != 0) {
      FUN_08048261(DAT_08048108);
      FUN_08048283();
    }
    iVar3 = isdigit((int)DAT_080480fc);
    if (iVar3 == 0) {
      *DAT_0804812c = ' ';
      pcVar4 = strstr(DAT_08048128,(char *)-(1 - (int)DAT_08048138));
      DAT_080480fc = (int *)-((int)DAT_08048128 - (int)pcVar4);
      *DAT_0804812c = '\0';
      DAT_080480fc = (int *)((int)DAT_080480fc * 8 + 0x100);
      if ((0x218 < (int)DAT_080480fc) &&
         (DAT_080480fc = (int *)((int)DAT_080480fc + DAT_0804810c), *DAT_080480fc == 1)) {
        DAT_08048130 = DAT_080480fc[1];
        DAT_08048134 = DAT_08048108;
        FUN_08048283();
        FUN_080483b9();
      }
    }
    else {
      DAT_08048100 = (int *)strtol(DAT_08048138,(char **)0x0,0);
      DAT_080480fc = (int *)0x2;
    }
  }
  return;
}



void FUN_080489e7(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  while( true ) {
    puVar2 = DAT_08048118;
    if ((param_1 == 0) || (param_1 == -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    DAT_08048118 = DAT_08048118 + 1;
    *puVar2 = (char)param_1;
    param_1 = param_1 >> 8;
  }
  return;
}



void FUN_08048a71(undefined *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return;
}



uint FUN_08048af6(char *param_1)

{
  return (int)param_1[3] << 0x18 |
         ((int)param_1[2] & 0xffU) << 0x10 | ((int)param_1[1] & 0xffU) << 8 | (int)*param_1 & 0xffU;
}



void FUN_08048b93(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  while (param_1 != 0) {
    iVar2 = FUN_08048af6(param_1);
    if (*(char *)-(1 - param_1) == '\x05') {
      if ((param_2 < DAT_0804813c) || (DAT_08048120 <= param_2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_08048a71(param_1,DAT_08048144 + param_2);
        param_1 = iVar2;
      }
      else {
        FUN_08048a71(param_1,DAT_08048144 + (DAT_08048140 - (DAT_08048114 - param_2)));
        param_1 = iVar2;
      }
    }
    else {
      FUN_08048a71(param_1,-((param_1 - param_2) + 4));
      param_1 = iVar2;
    }
  }
  return;
}



void FUN_08048d31(undefined4 param_1)

{
  FUN_08048b93(param_1,DAT_08048118);
  return;
}



int FUN_08048d67(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_080489e7(param_1);
  FUN_08048a71(DAT_08048118,param_2);
  iVar1 = DAT_08048118;
  DAT_08048118 = DAT_08048118 + 4;
  return iVar1;
}



void FUN_08048de7(undefined4 param_1)

{
  FUN_08048d67(0xb8,param_1);
  return;
}



void FUN_08048e1c(undefined4 param_1)

{
  FUN_08048d67(0xe9,param_1);
  return;
}



void FUN_08048e56(int param_1,undefined4 param_2)

{
  FUN_080489e7(0xfc085);
  FUN_08048d67(param_1 + 0x84,param_2);
  return;
}



void FUN_08048eb7(int param_1)

{
  FUN_080489e7(0xc139);
  FUN_08048de7(0);
  FUN_080489e7(0xf);
  FUN_080489e7(param_1 + 0x90);
  FUN_080489e7(0xc0);
  return;
}



void FUN_08048f5d(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  FUN_080489e7(param_1 + 0x83);
  iVar2 = *param_2;
  if ((iVar2 == 0) || (0x1ff < iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_08048d67(0x85,iVar2);
  }
  else {
    param_2 = param_2 + 1;
    iVar2 = FUN_08048d67(5,*param_2);
    *param_2 = iVar2;
  }
  return;
}



void FUN_0804905b(byte param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_c;
  
  iVar2 = DAT_080480fc;
  bVar1 = true;
  if (DAT_080480fc == 0x22) {
    FUN_08048de7(DAT_08048120 + DAT_08048144);
    while (DAT_08048108 != 0x22) {
      FUN_0804835a();
      puVar3 = DAT_08048120;
      DAT_08048120 = DAT_08048120 + 1;
      *puVar3 = (char)DAT_08048108;
      FUN_08048283();
    }
    *DAT_08048120 = 0;
    DAT_08048120 = (undefined *)((uint)(DAT_08048120 + 4) & 0xfffffffc);
    FUN_08048283();
    FUN_080483b9();
  }
  else {
    local_c = DAT_080480fc;
    iVar6 = DAT_08048104;
    uVar4 = DAT_08048100;
    FUN_080483b9(DAT_08048104,DAT_08048100);
    if (iVar2 == 2) {
      FUN_08048de7(uVar4);
    }
    else if (iVar6 == 2) {
      FUN_0804905b(0);
      FUN_08048d67(0xb9,0);
      if (iVar2 == 0x21) {
        FUN_08048eb7(uVar4);
      }
      else {
        FUN_080489e7(uVar4);
      }
    }
    else if (iVar2 == 0x28) {
      FUN_08049bbd();
      FUN_080483b9();
    }
    else if (iVar2 == 0x2a) {
      FUN_080483b9();
      local_c = DAT_080480fc;
      FUN_080483b9();
      FUN_080483b9();
      if (DAT_080480fc == 0x2a) {
        FUN_080483b9();
        FUN_080483b9();
        FUN_080483b9();
        FUN_080483b9();
        local_c = 0;
      }
      FUN_080483b9();
      FUN_0804905b(0);
      if (DAT_080480fc == 0x3d) {
        FUN_080483b9();
        FUN_080489e7(0x50);
        FUN_08049bbd();
        FUN_080489e7(0x59);
        FUN_080489e7((local_c == 0x100) + 0x188);
      }
      else if (local_c != 0) {
        if (local_c == 0x100) {
          FUN_080489e7(0x8b);
        }
        else {
          FUN_080489e7(0xbe0f);
        }
        DAT_08048118 = DAT_08048118 + 1;
      }
    }
    else if (iVar2 == 0x26) {
      FUN_08048f5d(10,DAT_080480fc);
      FUN_080483b9();
    }
    else {
      bVar1 = false;
      if ((param_1 & DAT_080480fc == 0x3d) == 0) {
        if ((DAT_080480fc != 0x28) && (FUN_08048f5d(8,iVar2), DAT_08048104 == 0xb)) {
          FUN_08048f5d(0,iVar2);
          FUN_080489e7(DAT_08048100);
          FUN_080483b9();
        }
      }
      else {
        FUN_080483b9();
        FUN_08049bbd();
        FUN_08048f5d(6,iVar2);
      }
    }
  }
  if (DAT_080480fc == 0x28) {
    if (bVar1) {
      FUN_080489e7(0x50);
    }
    uVar4 = FUN_08048d67(0xec81,0);
    FUN_080483b9();
    _param_1 = 0;
    while (DAT_080480fc != 0x29) {
      FUN_08049bbd();
      FUN_08048d67(0x248489,_param_1);
      if (DAT_080480fc == 0x2c) {
        FUN_080483b9();
      }
      _param_1 = _param_1 + 4;
    }
    FUN_08048a71(uVar4,_param_1);
    FUN_080483b9();
    if (bVar1) {
      FUN_08048d67(0x2494ff,_param_1);
      _param_1 = _param_1 + 4;
    }
    else {
      puVar5 = (undefined4 *)(local_c + 4);
      uVar4 = FUN_08048d67(0xe8,*puVar5);
      *puVar5 = uVar4;
    }
    if (_param_1 != 0) {
      FUN_08048d67(0xc481,_param_1);
    }
  }
  return;
}



void FUN_08049882(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_8;
  
  iVar1 = param_1 + -1;
  if (param_1 == 1) {
    FUN_0804905b(1);
  }
  else {
    FUN_08049882(iVar1);
    iVar6 = 0;
    while (uVar4 = DAT_08048100, iVar3 = DAT_080480fc, iVar1 == DAT_08048104) {
      local_8 = DAT_08048100;
      FUN_080483b9();
      if (iVar1 < 9) {
        FUN_080489e7(0x50);
        FUN_08049882(iVar1);
        FUN_080489e7(0x59);
        if (iVar1 == 5 || iVar1 == 4) {
          FUN_08048eb7(uVar4);
        }
        else {
          FUN_080489e7(uVar4);
          if (iVar3 == 0x25) {
            FUN_080489e7(0x92);
          }
        }
      }
      else {
        iVar6 = FUN_08048e56(uVar4,iVar6);
        FUN_08049882(iVar1);
      }
    }
    if ((iVar6 == 0) || (iVar1 < 9)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar5 = FUN_08048e56(local_8,iVar6);
      FUN_08048de7(local_8 ^ 1,uVar5);
      FUN_08048e1c(5);
      FUN_08048d31(uVar5);
      FUN_08048de7(local_8);
    }
  }
  return;
}



void FUN_08049bbd(void)

{
  FUN_08049882(0xb);
  return;
}



void FUN_08049be5(void)

{
  FUN_08049bbd();
  FUN_08048e56(0,0);
  return;
}



void FUN_08049c29(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  if (DAT_080480fc == 0x120) {
    FUN_080483b9();
    FUN_080483b9();
    local_8 = FUN_08049be5();
    FUN_080483b9();
    FUN_08049c29(param_1);
    if (DAT_080480fc == 0x138) {
      FUN_080483b9();
      uVar1 = FUN_08048e1c(0);
      FUN_08048d31(local_8);
      FUN_08049c29(param_1);
      FUN_08048d31(uVar1);
    }
    else {
      FUN_08048d31(local_8);
    }
  }
  else if (DAT_080480fc == 0x1f8 || DAT_080480fc == 0x160) {
    iVar2 = DAT_080480fc;
    FUN_080483b9();
    FUN_080483b9();
    if (iVar2 == 0x160) {
      iVar3 = DAT_08048118;
      local_8 = FUN_08049be5(0x160,DAT_08048118);
    }
    else {
      if (DAT_080480fc != 0x3b) {
        FUN_08049bbd();
      }
      FUN_080483b9();
      local_8 = 0;
      iVar3 = DAT_08048118;
      if (DAT_080480fc != 0x3b) {
        local_8 = FUN_08049be5(iVar2,DAT_08048118);
      }
      FUN_080483b9();
      if (DAT_080480fc != 0x29) {
        iVar2 = FUN_08048e1c(0);
        FUN_08049bbd(iVar2);
        FUN_08048e1c(-((DAT_08048118 - iVar3) + 5));
        FUN_08048d31(iVar2);
        iVar3 = iVar2 + 4;
      }
    }
    FUN_080483b9(iVar2,iVar3);
    FUN_08049c29(&local_8);
    FUN_08048e1c(-((DAT_08048118 - iVar3) + 5));
    FUN_08048d31(local_8);
  }
  else if (DAT_080480fc == 0x7b) {
    FUN_080483b9();
    FUN_0804a170(1);
    while (DAT_080480fc != 0x7d) {
      FUN_08049c29(param_1);
    }
    FUN_080483b9();
  }
  else {
    if (DAT_080480fc == 0x1c0) {
      FUN_080483b9();
      if (DAT_080480fc != 0x3b) {
        FUN_08049bbd();
      }
      DAT_08048110 = FUN_08048e1c(DAT_08048110);
    }
    else if (DAT_080480fc == 400) {
      FUN_080483b9();
      uVar1 = FUN_08048e1c(*param_1);
      *param_1 = uVar1;
    }
    else if (DAT_080480fc != 0x3b) {
      FUN_08049bbd();
    }
    FUN_080483b9();
  }
  return;
}



void FUN_0804a170(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  while (param_1 == 0 && DAT_080480fc != (int *)0xffffffff || DAT_080480fc == (int *)0x100) {
    if (DAT_080480fc == (int *)0x100) {
      FUN_080483b9();
      while (DAT_080480fc != (int *)0x3b) {
        if (param_1 == 0) {
          *DAT_080480fc = DAT_08048120;
          DAT_08048120 = DAT_08048120 + 4;
        }
        else {
          DAT_0804811c = DAT_0804811c + 4;
          *DAT_080480fc = -DAT_0804811c;
        }
        FUN_080483b9();
        if (DAT_080480fc == (int *)0x2c) {
          FUN_080483b9();
        }
      }
      FUN_080483b9();
    }
    else {
      *DAT_080480fc = DAT_08048118;
      FUN_080483b9();
      FUN_080483b9();
      iVar2 = 8;
      while (DAT_080480fc != (int *)0x29) {
        *DAT_080480fc = iVar2;
        iVar2 = iVar2 + 4;
        FUN_080483b9();
        if (DAT_080480fc == (int *)0x2c) {
          FUN_080483b9();
        }
      }
      FUN_080483b9();
      DAT_0804811c = 0;
      DAT_08048110 = 0;
      FUN_080489e7(0xe58955);
      uVar1 = FUN_08048d67(0xec81,0);
      FUN_08049c29(0,uVar1);
      FUN_08048d31(DAT_08048110);
      FUN_080489e7(0xc3c9);
      FUN_08048a71(uVar1,DAT_0804811c);
    }
  }
  return;
}



void FUN_0804a46f(undefined4 param_1)

{
  FUN_08048a71(DAT_08048120,param_1);
  DAT_08048120 = DAT_08048120 + 4;
  return;
}



void FUN_0804a4ba(int param_1,undefined4 param_2)

{
  FUN_0804a46f(param_1);
  FUN_0804a46f(Elf32_Ehdr_08048000.e_ident_magic_str + param_1 + -1);
  FUN_0804a46f(Elf32_Ehdr_08048000.e_ident_magic_str + param_1 + -1);
  FUN_0804a46f(param_2);
  FUN_0804a46f(param_2);
  return;
}



void FUN_0804a570(int param_1)

{
  char *__src;
  bool bVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  int local_10;
  char *local_8;
  
  local_14 = 0;
  local_8 = DAT_08048128;
  while( true ) {
    __src = local_8 + 1;
    local_8 = __src;
    while( true ) {
      if ((*local_8 == ' ') || ((int)DAT_0804812c <= (int)local_8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_8 = local_8 + 1;
    }
    if (local_8 == DAT_0804812c) break;
    DAT_080480fc = (int *)-(8 - (((int)DAT_08048128 - (int)__src) * -8 + DAT_0804810c + 0x100));
    iVar2 = *DAT_080480fc;
    local_10 = DAT_080480fc[1];
    if ((local_10 == 0) || (iVar2 == 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (iVar2 == 0) {
        if (param_1 == 0) {
          memcpy(DAT_08048120,__src,-((int)__src - (int)local_8));
          DAT_08048120 = (void *)(1 - ((int)__src - (int)(local_8 + (int)DAT_08048120)));
        }
        else if (param_1 == 1) {
          FUN_0804a46f(local_14 + 0x16);
          FUN_0804a46f(0);
          FUN_0804a46f(0);
          FUN_0804a46f(0x10);
          local_14 = 1 - ((int)__src - (int)(local_8 + local_14));
        }
        else {
          local_14 = local_14 + 1;
          while (local_10 != 0) {
            iVar2 = FUN_08048af6(local_10);
            uVar3 = (uint)(*(char *)-(1 - local_10) != '\x05');
            FUN_08048a71(local_10,uVar3 * -4);
            FUN_0804a46f(DAT_08048144 + (DAT_08048140 - (DAT_08048114 - local_10)));
            FUN_0804a46f(uVar3 + local_14 * 0x100 + 1);
            local_10 = iVar2;
          }
        }
      }
      else if (param_1 == 0) {
        FUN_08048b93(local_10,iVar2);
      }
    }
  }
  return;
}



void FUN_0804a9f0(char *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t __n;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  FILE *__stream;
  int local_24;
  
  DAT_08048140 = DAT_08048120;
  __n = -((int)DAT_08048114 - (int)DAT_08048118);
  DAT_08048118 = DAT_08048114;
  FUN_080489e7(0x505458);
  FUN_08048d67(0xe8,-((int)DAT_08048118 + (5 - *(int *)(DAT_0804810c + 0x250))));
  FUN_080489e7(0xc389);
  FUN_08048de7(1);
  FUN_080489e7(0x80cd);
  pvVar2 = DAT_08048120;
  DAT_08048120 = (char *)((int)DAT_08048120 + __n + 1);
  pcVar6 = strcpy(DAT_08048120,s_libc_so_6_080481c8);
  DAT_08048120 = pcVar6 + 10;
  pcVar6 = strcpy(DAT_08048120,s_libdl_so_2_080481d4);
  DAT_08048120 = pcVar6 + 0xb;
  FUN_0804a570(0);
  iVar1 = __n - (int)DAT_08048120;
  uVar7 = (uint)(DAT_08048120 + 3) & 0xfffffffc;
  DAT_08048120 = (char *)uVar7;
  FUN_0804a46f(0);
  FUN_0804a46f(0);
  FUN_0804a46f(0);
  FUN_0804a46f(0);
  FUN_0804a570(1);
  uVar3 = (uint)DAT_08048120;
  iVar8 = (int)-(uVar7 - (int)DAT_08048120) / 0x10;
  FUN_0804a46f(1);
  FUN_0804a46f(iVar8);
  FUN_0804a46f(1);
  FUN_0804a46f(0);
  local_24 = 2;
  while (local_24 < iVar8) {
    FUN_0804a46f(local_24);
    local_24 = local_24 + 1;
  }
  FUN_0804a46f(0);
  uVar4 = (uint)DAT_08048120;
  FUN_0804a570(2);
  memcpy(DAT_08048140,DAT_08048114,__n);
  uVar5 = (uint)DAT_08048120;
  DAT_08048120 = DAT_0804813c;
  FUN_0804a46f(0x464c457f);
  FUN_0804a46f(0x10101);
  FUN_0804a46f(0);
  FUN_0804a46f(0);
  FUN_0804a46f(0x30002);
  FUN_0804a46f(1);
  FUN_0804a46f(DAT_08048144 + (int)DAT_08048140);
  FUN_0804a46f(0x30);
  FUN_0804a46f(0);
  FUN_0804a46f(0);
  FUN_0804a46f(0x200034);
  FUN_0804a46f(3);
  FUN_0804a46f(3);
  FUN_0804a4ba(0x90,0x13);
  FUN_0804a46f(4);
  FUN_0804a46f(1);
  FUN_0804a46f(1);
  FUN_0804a4ba(0,-((int)DAT_0804813c - uVar5));
  FUN_0804a46f(7);
  FUN_0804a46f(0x1000);
  FUN_0804a46f(2);
  FUN_0804a4ba(0xa4,0x58);
  FUN_0804a46f(6);
  FUN_0804a46f(4);
  pcVar6 = strcpy(DAT_08048120,s__lib_ld_linux_so_2_080481e0);
  DAT_08048120 = pcVar6 + 0x14;
  FUN_0804a46f(1);
  FUN_0804a46f(1);
  FUN_0804a46f(1);
  FUN_0804a46f(0xb);
  FUN_0804a46f(4);
  FUN_0804a46f(DAT_08048144 + uVar3);
  FUN_0804a46f(6);
  FUN_0804a46f(DAT_08048144 + uVar7);
  FUN_0804a46f(5);
  FUN_0804a46f((int)pvVar2 + DAT_08048144 + __n);
  FUN_0804a46f(10);
  FUN_0804a46f(-((int)pvVar2 + iVar1));
  FUN_0804a46f(0xb);
  FUN_0804a46f(0x10);
  FUN_0804a46f(0x11);
  FUN_0804a46f(DAT_08048144 + uVar4);
  FUN_0804a46f(0x12);
  FUN_0804a46f(-(uVar4 - uVar5));
  FUN_0804a46f(0x13);
  FUN_0804a46f(8);
  FUN_0804a46f(0);
  FUN_0804a46f(0);
  __stream = fopen(param_1,&DAT_080481f4);
  fwrite(DAT_0804813c,1,-((int)DAT_0804813c - uVar5),__stream);
  fclose(__stream);
  return;
}



undefined4 FUN_0804b4a3(int param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 < 3) {
    printf(s_usage__otccelf_file_c_outfile_080481f8);
  }
  else {
    DAT_08048128 = (char *)calloc(1,99999);
    pcVar1 = strcpy(DAT_08048128,s__int_if_else_while_break_return_f_08048218);
    DAT_0804812c = pcVar1 + 0x30;
    DAT_08048120 = calloc(1,99999);
    DAT_0804813c = DAT_08048120;
    DAT_08048114 = calloc(1,99999);
    DAT_08048118 = DAT_08048114;
    DAT_0804810c = calloc(1,99999);
    DAT_08048124 = fopen(*(char **)(param_2 + 4),&DAT_0804824c);
    DAT_08048144 = -((int)DAT_0804813c + -0x8048000);
    DAT_08048120 = (void *)((int)DAT_08048120 + 0xfc);
    DAT_08048118 = (void *)((int)DAT_08048118 + 0x11);
    FUN_08048283();
    FUN_080483b9();
    FUN_0804a170(0);
    FUN_0804a9f0(*(undefined4 *)(param_2 + 8));
  }
  return 0;
}


