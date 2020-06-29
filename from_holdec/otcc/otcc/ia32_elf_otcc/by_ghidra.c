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
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
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




void FUN_08048205(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_0804812c;
  DAT_0804812c = DAT_0804812c + 1;
  *puVar1 = param_1;
  return;
}



void FUN_08048227(void)

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



uint FUN_080482b5(void)

{
  uint uVar1;
  
  uVar1 = isalnum(DAT_08048108);
  return DAT_08048108 == 0x5f | uVar1;
}



void FUN_080482fe(void)

{
  if (DAT_08048108 == 0x5c) {
    FUN_08048227();
    if (DAT_08048108 == 0x6e) {
      DAT_08048108 = 10;
    }
  }
  return;
}



void FUN_0804835d(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *local_8;
  
  while (uVar2 = isspace((int)DAT_08048108), (DAT_08048108 == (int *)0x23 | uVar2) != 0) {
    if (DAT_08048108 == (int *)0x23) {
      FUN_08048227();
      FUN_0804835d();
      if (DAT_080480fc == (undefined4 *)0x218) {
        FUN_0804835d();
        FUN_08048205(0x20);
        *DAT_080480fc = 1;
        *(char **)(DAT_080480fc + 1) = DAT_0804812c;
      }
      while (DAT_08048108 != (int *)0xa) {
        FUN_08048205(DAT_08048108);
        FUN_08048227();
      }
      FUN_08048205(10);
      FUN_08048205(2);
    }
    FUN_08048227();
  }
  DAT_08048104 = 0;
  DAT_080480fc = DAT_08048108;
  iVar3 = FUN_080482b5();
  if (iVar3 == 0) {
    FUN_08048227();
    if (DAT_080480fc == (int *)0x27) {
      DAT_080480fc = (int *)0x2;
      FUN_080482fe();
      DAT_08048100 = DAT_08048108;
      FUN_08048227();
      FUN_08048227();
    }
    else {
      if (DAT_08048108 == (int *)0x2a && DAT_080480fc == (int *)0x2f) {
        FUN_08048227();
        while (DAT_08048108 != (int *)0x0) {
          while (DAT_08048108 != (int *)0x2a) {
            FUN_08048227();
          }
          FUN_08048227();
          if (DAT_08048108 == (int *)0x2f) {
            DAT_08048108 = (int *)0x0;
          }
        }
        FUN_08048227();
        FUN_0804835d();
      }
      else {
        local_8 = &DAT_0804813c;
        do {
          cVar1 = *local_8;
          if ((int *)(int)cVar1 == (int *)0x0) {
            return;
          }
          piVar5 = (int *)(int)local_8[1];
          DAT_08048100 = (int *)0x0;
          local_8 = local_8 + 2;
          while( true ) {
            DAT_08048104 = -(0x62 - (int)*local_8);
            if (-1 < DAT_08048104) break;
            DAT_08048100 = (int *)(DAT_08048104 + (int)DAT_08048100 * 0x40 + 0x40);
            local_8 = local_8 + 1;
          }
          local_8 = local_8 + 1;
        } while (piVar5 != (int *)0x40 && piVar5 != DAT_08048108 ||
                 (int *)(int)cVar1 != DAT_080480fc);
        if (piVar5 == DAT_08048108) {
          FUN_08048227();
          DAT_080480fc = (int *)0x1;
        }
      }
    }
  }
  else {
    FUN_08048205(0x20);
    DAT_08048138 = DAT_0804812c;
    while (iVar3 = FUN_080482b5(), iVar3 != 0) {
      FUN_08048205(DAT_08048108);
      FUN_08048227();
    }
    iVar3 = isdigit((int)DAT_080480fc);
    if (iVar3 == 0) {
      *DAT_0804812c = ' ';
      pcVar4 = strstr(DAT_08048128,(char *)-(1 - (int)DAT_08048138));
      DAT_080480fc = (int *)-(int)(DAT_08048128 + -(int)pcVar4);
      *DAT_0804812c = '\0';
      DAT_080480fc = (int *)((int)DAT_080480fc * 8 + 0x100);
      if ((0x218 < (int)DAT_080480fc) &&
         (DAT_080480fc = (int *)((int)DAT_080480fc + DAT_0804810c), *DAT_080480fc == 1)) {
        DAT_08048130 = DAT_080480fc[1];
        DAT_08048134 = DAT_08048108;
        FUN_08048227();
        FUN_0804835d();
      }
    }
    else {
      DAT_08048100 = (int *)strtol(DAT_08048138,(char **)0x0,0);
      DAT_080480fc = (int *)0x2;
    }
  }
  return;
}



void FUN_0804898b(int param_1)

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



void FUN_08048a15(int **param_1)

{
  int **ppiVar1;
  
  while (param_1 != (int **)0x0) {
    ppiVar1 = (int **)*param_1;
    *param_1 = (int *)-((int)param_1 + (4 - DAT_08048118));
    param_1 = ppiVar1;
  }
  return;
}



undefined4 * FUN_08048a74(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_0804898b(param_1);
  *DAT_08048118 = param_2;
  puVar1 = DAT_08048118;
  DAT_08048118 = DAT_08048118 + 1;
  return puVar1;
}



void FUN_08048ad9(undefined4 param_1)

{
  FUN_08048a74(0xb8,param_1);
  return;
}



void FUN_08048b0e(undefined4 param_1)

{
  FUN_08048a74(0xe9,param_1);
  return;
}



void FUN_08048b48(int param_1,undefined4 param_2)

{
  FUN_0804898b(0xfc085);
  FUN_08048a74(param_1 + 0x84,param_2);
  return;
}



void FUN_08048ba9(int param_1)

{
  FUN_0804898b(0xc139);
  FUN_08048ad9(0);
  FUN_0804898b(0xf);
  FUN_0804898b(param_1 + 0x90);
  FUN_0804898b(0xc0);
  return;
}



void FUN_08048c4f(int param_1,int param_2)

{
  FUN_0804898b(param_1 + 0x83);
  FUN_08048a74((uint)(param_2 < 0x200) << 7 | 5,param_2);
  return;
}



void FUN_08048cd0(byte param_1)

{
  undefined *puVar1;
  int local_14;
  int *local_18;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  local_18 = DAT_080480fc;
  local_8 = 1;
  if (DAT_080480fc == (int *)0x22) {
    FUN_08048ad9(DAT_08048120);
    while (DAT_08048108 != 0x22) {
      FUN_080482fe();
      puVar1 = DAT_08048120;
      DAT_08048120 = DAT_08048120 + 1;
      *puVar1 = (char)DAT_08048108;
      FUN_08048227();
    }
    *DAT_08048120 = 0;
    DAT_08048120 = (undefined *)((uint)(DAT_08048120 + 4) & 0xfffffffc);
    FUN_08048227();
    FUN_0804835d();
  }
  else {
    local_c = DAT_080480fc;
    local_14 = DAT_08048104;
    local_10 = DAT_08048100;
    FUN_0804835d(DAT_08048104,DAT_08048100);
    if (local_18 == (int *)0x2) {
      FUN_08048ad9(local_10);
    }
    else {
      if (local_14 == 2) {
        FUN_08048cd0(0);
        FUN_08048a74(0xb9,0);
        if (local_18 == (int *)0x21) {
          FUN_08048ba9(local_10);
        }
        else {
          FUN_0804898b(local_10);
        }
      }
      else {
        if (local_18 == (int *)0x28) {
          FUN_080498e4();
          FUN_0804835d(local_14,local_10);
        }
        else {
          if (local_18 == (int *)0x2a) {
            FUN_0804835d(local_14,local_10);
            local_c = DAT_080480fc;
            FUN_0804835d();
            FUN_0804835d();
            if (DAT_080480fc == (int *)0x2a) {
              FUN_0804835d(local_14,local_10);
              FUN_0804835d();
              FUN_0804835d();
              FUN_0804835d();
              local_c = (int *)0x0;
            }
            FUN_0804835d();
            FUN_08048cd0(0);
            if (DAT_080480fc == (int *)0x3d) {
              FUN_0804835d();
              FUN_0804898b(0x50);
              FUN_080498e4();
              FUN_0804898b(0x59);
              FUN_0804898b((uint)(local_c == (int *)0x100) + 0x188);
            }
            else {
              if (local_c != (int *)0x0) {
                if (local_c == (int *)0x100) {
                  FUN_0804898b(0x8b);
                }
                else {
                  FUN_0804898b(0xbe0f);
                }
                DAT_08048118 = DAT_08048118 + 1;
              }
            }
          }
          else {
            if (local_18 == (int *)0x26) {
              FUN_08048c4f(10,*DAT_080480fc);
              FUN_0804835d(local_14,local_10);
            }
            else {
              local_8 = *local_18;
              if (local_8 == 0) {
                local_8 = dlsym(0,DAT_08048138);
              }
              if ((param_1 & DAT_080480fc == (int *)0x3d) == 0) {
                if ((DAT_080480fc != (int *)0x28) && (FUN_08048c4f(8,local_8), DAT_08048104 == 0xb))
                {
                  FUN_08048c4f(0,local_8);
                  FUN_0804898b(DAT_08048100);
                  FUN_0804835d();
                }
              }
              else {
                FUN_0804835d(local_14,local_10);
                FUN_080498e4();
                FUN_08048c4f(6,local_8);
              }
            }
          }
        }
      }
    }
  }
  if (DAT_080480fc == (int *)0x28) {
    if (local_8 == 1) {
      FUN_0804898b(0x50);
    }
    local_18 = (int *)FUN_08048a74(0xec81,0);
    FUN_0804835d();
    _param_1 = 0;
    while (DAT_080480fc != (int *)0x29) {
      FUN_080498e4();
      FUN_08048a74(0x248489,_param_1);
      if (DAT_080480fc == (int *)0x2c) {
        FUN_0804835d();
      }
      _param_1 = _param_1 + 4;
    }
    *local_18 = _param_1;
    FUN_0804835d();
    if (local_8 == 0) {
      local_18 = local_c + 1;
      local_14 = FUN_08048a74(0xe8,*local_18);
      *local_18 = local_14;
    }
    else {
      if (local_8 == 1) {
        FUN_08048a74(0x2494ff,_param_1);
        _param_1 = _param_1 + 4;
      }
      else {
        FUN_08048a74(0xe8,-((DAT_08048118 - local_8) + 5));
      }
    }
    if (_param_1 != 0) {
      FUN_08048a74(0xc481,_param_1);
    }
  }
  return;
}



void FUN_080495a9(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_10;
  uint local_8;
  
  iVar1 = param_1 + -1;
  if (param_1 == 1) {
    FUN_08048cd0(1);
  }
  else {
    FUN_080495a9(iVar1);
    local_10 = 0;
    while (uVar4 = DAT_08048100, iVar3 = DAT_080480fc, iVar1 == DAT_08048104) {
      local_8 = DAT_08048100;
      FUN_0804835d();
      if (iVar1 < 9) {
        FUN_0804898b(0x50);
        FUN_080495a9(iVar1);
        FUN_0804898b(0x59);
        if (iVar1 == 5 || iVar1 == 4) {
          FUN_08048ba9(uVar4);
        }
        else {
          FUN_0804898b(uVar4);
          if (iVar3 == 0x25) {
            FUN_0804898b(0x92);
          }
        }
      }
      else {
        local_10 = FUN_08048b48(uVar4,local_10);
        FUN_080495a9(iVar1);
      }
    }
    if ((local_10 == 0) || (iVar1 < 9)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar5 = FUN_08048b48(local_8,local_10);
      FUN_08048ad9(local_8 ^ 1,uVar5);
      FUN_08048b0e(5);
      FUN_08048a15(uVar5);
      FUN_08048ad9(local_8);
    }
  }
  return;
}



void FUN_080498e4(void)

{
  FUN_080495a9(0xb);
  return;
}



void FUN_0804990c(void)

{
  FUN_080498e4();
  FUN_08048b48(0,0);
  return;
}



void FUN_08049950(undefined4 *param_1)

{
  undefined4 local_c;
  int local_10;
  int iVar1;
  undefined4 local_8;
  
  if (DAT_080480fc == 0x120) {
    FUN_0804835d();
    FUN_0804835d();
    local_8 = FUN_0804990c();
    FUN_0804835d();
    FUN_08049950(param_1);
    if (DAT_080480fc == 0x138) {
      FUN_0804835d();
      local_c = FUN_08048b0e(0);
      FUN_08048a15(local_8);
      FUN_08049950(param_1);
      FUN_08048a15(local_c);
    }
    else {
      FUN_08048a15(local_8);
    }
  }
  else {
    if (DAT_080480fc == 0x1f8 || DAT_080480fc == 0x160) {
      local_10 = DAT_080480fc;
      FUN_0804835d();
      FUN_0804835d();
      if (local_10 == 0x160) {
        iVar1 = DAT_08048118;
        local_8 = FUN_0804990c(0x160,DAT_08048118);
      }
      else {
        if (DAT_080480fc != 0x3b) {
          FUN_080498e4();
        }
        FUN_0804835d();
        local_8 = 0;
        iVar1 = DAT_08048118;
        if (DAT_080480fc != 0x3b) {
          local_8 = FUN_0804990c(local_10,DAT_08048118);
        }
        FUN_0804835d();
        if (DAT_080480fc != 0x29) {
          local_10 = FUN_08048b0e(0);
          FUN_080498e4(local_10);
          FUN_08048b0e(-((DAT_08048118 - iVar1) + 5));
          FUN_08048a15(local_10);
          iVar1 = local_10 + 4;
        }
      }
      FUN_0804835d(local_10,iVar1);
      FUN_08049950(&local_8);
      FUN_08048b0e(-((DAT_08048118 - iVar1) + 5));
      FUN_08048a15(local_8);
    }
    else {
      if (DAT_080480fc == 0x7b) {
        FUN_0804835d();
        FUN_08049e97(1);
        while (DAT_080480fc != 0x7d) {
          FUN_08049950(param_1);
        }
        FUN_0804835d();
      }
      else {
        if (DAT_080480fc == 0x1c0) {
          FUN_0804835d();
          if (DAT_080480fc != 0x3b) {
            FUN_080498e4();
          }
          DAT_08048110 = FUN_08048b0e(DAT_08048110);
        }
        else {
          if (DAT_080480fc == 400) {
            FUN_0804835d();
            local_c = FUN_08048b0e(*param_1);
            *param_1 = local_c;
          }
          else {
            if (DAT_080480fc != 0x3b) {
              FUN_080498e4();
            }
          }
        }
        FUN_0804835d();
      }
    }
  }
  return;
}



void FUN_08049e97(int param_1)

{
  int *piVar1;
  int local_8;
  
  while (param_1 == 0 && DAT_080480fc != (int *)0xffffffff || DAT_080480fc == (int *)0x100) {
    if (DAT_080480fc == (int *)0x100) {
      FUN_0804835d();
      while (DAT_080480fc != (int *)0x3b) {
        if (param_1 == 0) {
          *DAT_080480fc = DAT_08048120;
          DAT_08048120 = DAT_08048120 + 4;
        }
        else {
          DAT_0804811c = DAT_0804811c + 4;
          *DAT_080480fc = -DAT_0804811c;
        }
        FUN_0804835d();
        if (DAT_080480fc == (int *)0x2c) {
          FUN_0804835d();
        }
      }
      FUN_0804835d();
    }
    else {
      FUN_08048a15(DAT_080480fc[1]);
      *DAT_080480fc = DAT_08048118;
      FUN_0804835d();
      FUN_0804835d();
      local_8 = 8;
      while (DAT_080480fc != (int *)0x29) {
        *DAT_080480fc = local_8;
        local_8 = local_8 + 4;
        FUN_0804835d();
        if (DAT_080480fc == (int *)0x2c) {
          FUN_0804835d();
        }
      }
      FUN_0804835d();
      DAT_0804811c = 0;
      DAT_08048110 = 0;
      FUN_0804898b(0xe58955);
      piVar1 = (int *)FUN_08048a74(0xec81,0);
      FUN_08049950(0);
      FUN_08048a15(DAT_08048110);
      FUN_0804898b(0xc3c9);
      *piVar1 = DAT_0804811c;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804a1a4(int param_1,char **param_2)

{
  DAT_08048124 = stdin;
  if (1 < param_1) {
    param_2 = param_2 + 1;
    DAT_08048124 = fopen(*param_2,&DAT_080481bc);
  }
  DAT_08048128 = (char *)calloc(1,99999);
  DAT_0804812c = strcpy(DAT_08048128,s__int_if_else_while_break_return_f_080481c0);
  DAT_0804812c = DAT_0804812c + 0x30;
  DAT_08048120 = calloc(1,99999);
  _DAT_08048114 = calloc(1,99999);
  DAT_08048118 = _DAT_08048114;
  DAT_0804810c = calloc(1,99999);
  FUN_08048227();
  FUN_0804835d();
  FUN_08049e97(0);
  (**(code **)((int)DAT_0804810c + 0x250))(param_1 + -1,param_2);
  return;
}


