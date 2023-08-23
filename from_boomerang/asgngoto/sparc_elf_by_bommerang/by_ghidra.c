typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct stat stat, *Pstat;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};

typedef void (* __sighandler_t)(int);

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef enum Elf32_DynTag {
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
} Elf32_DynTag;

typedef struct Elf32_Dyn Elf32_Dyn, *PElf32_Dyn;

struct Elf32_Dyn {
    enum Elf32_DynTag d_tag;
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




// WARNING: Removing unreachable block (ram,0x000118dc)
// WARNING: Removing unreachable block (ram,0x000118d4)
// WARNING: Removing unreachable block (ram,0x00011904)
// WARNING: Removing unreachable block (ram,0x000118c4)

void _start(void)

{
  __func *unaff_g1;
  EVP_PKEY_CTX *ctx;
  int __status;
  int local_res40;
  undefined auStackX_44 [4];
  undefined auStackX_48 [20];
  
  if (unaff_g1 != (__func *)0x0) {
    atexit(unaff_g1);
  }
  ctx = (EVP_PKEY_CTX *)atexit(_fini);
  _init(ctx);
  environ = auStackX_44 + local_res40 * 4 + 4;
  __status = main(local_res40,auStackX_44);
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: This is an inlined function

void gcc2_compiled_(void)

{
  return;
}



// WARNING: Inlined function: gcc2_compiled.
// WARNING: Removing unreachable block (ram,0x000119bc)
// WARNING: Removing unreachable block (ram,0x00011924)
// WARNING: Removing unreachable block (ram,0x0001192c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  code **ppcVar1;
  int iVar2;
  
  if (_completed_4 == 0) {
    _completed_4 = 0;
    iVar2 = *(int *)force_to_data;
    ppcVar1 = (code **)force_to_data;
    while (iVar2 != 0) {
      force_to_data = (undefined *)(ppcVar1 + 1);
      (**ppcVar1)();
      ppcVar1 = (code **)force_to_data;
      iVar2 = *(int *)force_to_data;
    }
    force_to_data = (undefined *)ppcVar1;
    FUN_0002a954(&__FRAME_END__);
    _completed_4 = 1;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000119e0)
// WARNING: Removing unreachable block (ram,0x000119e4)

undefined4 fini_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Inlined function: gcc2_compiled.
// WARNING: Removing unreachable block (ram,0x00011a24)
// WARNING: Removing unreachable block (ram,0x000119ec)
// WARNING: Removing unreachable block (ram,0x000119f4)

undefined4 frame_dummy(undefined4 param_1)

{
  FUN_0002a960(&__FRAME_END__,object_11);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00011a34)
// WARNING: Removing unreachable block (ram,0x00011a38)

undefined4 init_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00011a70)
// WARNING: Removing unreachable block (ram,0x00011a88)
// WARNING: Removing unreachable block (ram,0x00011ab0)
// WARNING: Removing unreachable block (ram,0x00011a40)
// WARNING: Removing unreachable block (ram,0x00011aa8)
// WARNING: Removing unreachable block (ram,0x00011a78)
// WARNING: Removing unreachable block (ram,0x00011a4c)

void MAIN__(void)

{
  code *local_18;
  int local_14 [5];
  
  s_wsle(force_to_data);
  do_lio(&DAT_00019fd8,&DAT_00019fdc,"Input num:",10);
  e_wsle();
  s_rsle(__g77_cilist_1_1);
  do_lio(&DAT_00019fe0,&DAT_00019fdc,local_14,4);
  e_rsle();
  local_18 = (code *)&DAT_00011b24;
  if (local_14[0] == 2) {
    local_18 = (code *)&DAT_00011b68;
  }
  if (local_14[0] == 3) {
    local_18 = (code *)&LAB_00011bac;
  }
  if (local_14[0] == 4) {
    local_18 = (code *)&LAB_00011bf0;
  }
                    // WARNING: Could not recover jumptable at 0x00011b1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*local_18)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00011c3c)

undefined4 do_lio(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (*f__lioproc)(param_2,param_3,param_4,*param_1);
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00011c64)
// WARNING: Removing unreachable block (ram,0x00011ca0)

uint t_getc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = f__cf;
  if (*(int *)(f__curunit + 0x24) == 0) {
    iVar2 = *f__cf;
    *f__cf = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      uVar3 = __filbuf(piVar1);
    }
    else {
      uVar3 = (uint)*(byte *)piVar1[1];
      piVar1[1] = (int)((byte *)piVar1[1] + 1);
    }
    if (uVar3 != 0xffffffff) {
      return uVar3;
    }
    if ((*(byte *)(f__cf + 3) & 0x10) != 0) {
      l_eof = 1;
      *(undefined4 *)(f__curunit + 0x24) = 1;
    }
  }
  return 0xffffffff;
}



// WARNING: Removing unreachable block (ram,0x00011cf8)
// WARNING: Removing unreachable block (ram,0x00011d58)

undefined4 e_rsle(void)

{
  int iVar1;
  undefined4 uVar2;
  
  f__init = 1;
  if (*(int *)(f__curunit + 0x24) == 0) {
    do {
      iVar1 = t_getc();
      if (iVar1 == 10) goto LAB_00011d6c;
    } while (iVar1 != -1);
    if ((*(byte *)(f__cf + 0xc) & 0x10) != 0) {
      l_eof = 1;
      *(undefined4 *)(f__curunit + 0x24) = 1;
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_00011d6c:
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00012148)
// WARNING: Removing unreachable block (ram,0x00011ee0)
// WARNING: Removing unreachable block (ram,0x00011d78)
// WARNING: Removing unreachable block (ram,0x00012314)
// WARNING: Removing unreachable block (ram,0x00012138)

undefined4 l_R(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong in_o0_1;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  char local_48;
  char local_47 [39];
  char cStack_20;
  char acStack_1f [31];
  
  iVar14 = (int)(in_o0_1 >> 0x20);
  if (iVar14 == 0) {
    if (0 < f__lcount) {
      return 0;
    }
    f__lcount = 1;
  }
  f__llx = 0;
  f__ltype = 0;
  iVar10 = 0;
  bVar3 = false;
  while( true ) {
    iVar5 = (*l_getc)();
    iVar12 = 0;
    pcVar8 = &local_48;
    pcVar11 = &local_48;
    pcVar13 = &cStack_20;
    if (iVar5 != 0x2b) {
      if (iVar5 != 0x2d) goto LAB_00011e34;
      pcVar8 = local_47;
      local_48 = '-';
      pcVar13 = acStack_1f;
      pcVar11 = pcVar8;
    }
    while( true ) {
      iVar5 = (*(code *)0x0)();
LAB_00011e34:
      if (iVar5 != 0x30) break;
      iVar12 = iVar12 + 1;
    }
    bVar2 = __ctype[iVar5 + 1];
    while ((bVar2 & 4) != 0) {
      if (pcVar8 < pcVar13) {
        *pcVar8 = (char)iVar5;
        pcVar8 = pcVar8 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
      }
      iVar5 = (*l_getc)();
      bVar2 = __ctype[iVar5 + 1];
    }
    if ((iVar5 != 0x2a) || (iVar14 != 0)) break;
    if (((pcVar8 == pcVar11) || (iVar10 != 0)) || (iVar14 = 1, local_48 == '-')) goto LAB_00012314;
    *pcVar8 = '\0';
    f__lcount = atoi(&local_48);
    bVar3 = true;
  }
  if (iVar5 != 0x2e) goto LAB_00011fb8;
  if ((int)in_o0_1 == 0) {
    iVar5 = (*l_getc)();
    if (pcVar8 == pcVar11) {
      while (iVar5 == 0x30) {
        iVar12 = iVar12 + 1;
        iVar5 = (*l_getc)();
        iVar10 = iVar10 + -1;
      }
    }
    bVar2 = __ctype[iVar5 + 1];
    while ((bVar2 & 4) != 0) {
      if (pcVar8 < pcVar13) {
        *pcVar8 = (char)iVar5;
        pcVar8 = pcVar8 + 1;
        iVar10 = iVar10 + -1;
      }
      iVar5 = (*l_getc)();
      bVar2 = __ctype[iVar5 + 1];
    }
LAB_00011fb8:
    pcVar13 = pcVar8 + (iVar12 - (int)pcVar11);
    bVar15 = false;
    if ((f__ltab[iVar5 + 1] & 0x10) == 0) {
      if ((pcVar13 != (char *)0x0) && ((f__ltab[iVar5 + 1] & 8) != 0)) {
        if ((int)in_o0_1 != 0) goto LAB_00012314;
        iVar5 = (*l_getc)();
        if ((f__ltab[iVar5 + 1] & 0x10) != 0) goto LAB_00012030;
        goto LAB_00012050;
      }
    }
    else {
LAB_00012030:
      bVar15 = iVar5 == 0x2d;
      iVar5 = (*l_getc)();
LAB_00012050:
      if ((__ctype[iVar5 + 1] & 4) == 0) goto LAB_00012314;
      iVar14 = iVar5 + -0x30;
      while (iVar5 = (*l_getc)(), (__ctype[iVar5 + 1] & 4) != 0) {
        iVar14 = iVar14 * 10 + iVar5 + -0x30;
        if (99999999 < iVar14) goto LAB_00012314;
      }
      if (bVar15) {
        iVar10 = iVar10 - iVar14;
      }
      else {
        iVar10 = iVar10 + iVar14;
      }
    }
    (*l_ungetc)(iVar5);
    pcVar9 = pcVar8 + -1;
    if (pcVar11 < pcVar8) {
      pcVar13 = pcVar13 + 1;
      cVar1 = *pcVar9;
      while (cVar1 == '0') {
        pcVar9 = pcVar9 + -1;
        iVar10 = iVar10 + 1;
        cVar1 = *pcVar9;
      }
      if (iVar10 == 0) {
        pcVar9[1] = '\0';
      }
      else {
        sprintf(pcVar9 + 1,"e%ld");
      }
      f__lx = atof(&local_48);
      if (((in_o0_1 & 2) == 0) || ((int)(pcVar9 + (iVar10 - (int)pcVar11)) < 0xf))
      goto LAB_0001228c;
      bVar15 = pcVar13 == (char *)0x0;
      if ((int)(pcVar9 + (iVar10 - (int)pcVar11)) < 0x14) {
        if (iVar10 < 0) {
          pcVar9 = pcVar9 + iVar10;
        }
        if (pcVar11 <= pcVar9) {
          f__llx = (ulonglong)(*pcVar11 + -0x30);
          while (pcVar11 = pcVar11 + 1, pcVar11 <= pcVar9) {
            iVar14 = (int)(f__llx >> 0x20);
            uVar7 = (uint)f__llx;
            uVar4 = (int)*pcVar11 - 0x30;
            f__llx = CONCAT44((uVar7 * 5 >> 0x1f |
                              (((uint)(f__llx >> 0x1e) & 3 | iVar14 << 2) + iVar14 +
                              (uint)CARRY4(uVar7 * 4,uVar7)) * 2) + ((int)uVar4 >> 0x1f) +
                              (uint)CARRY4(uVar7 * 10,uVar4),uVar7 * 10 + uVar4);
          }
        }
        while( true ) {
          iVar10 = iVar10 + -1;
          uVar4 = (uint)f__llx;
          iVar14 = (int)(f__llx >> 0x20);
          if (iVar10 < 0) break;
          f__llx = CONCAT44(uVar4 * 5 >> 0x1f |
                            (((uint)(f__llx >> 0x1e) & 3 | iVar14 << 2) + iVar14 +
                            (uint)CARRY4(uVar4 * 4,uVar4)) * 2,uVar4 * 10);
        }
        bVar15 = pcVar13 == (char *)0x0;
        if (local_48 == '-') {
          f__llx = CONCAT44(-(uint)(uVar4 != 0) - iVar14,-uVar4);
          goto LAB_0001228c;
        }
      }
    }
    else {
      f__lx = 0.0;
LAB_0001228c:
      bVar15 = pcVar13 == (char *)0x0;
    }
    if (bVar15) {
      if ((iVar5 != 0x2c) && (iVar5 != 0x2f)) {
        if (bVar3) {
          if (iVar5 == 0x20) {
            return 0;
          }
          if (iVar5 == 9) {
            return 0;
          }
          if (iVar5 == 10) {
            return 0;
          }
        }
        if (nml_read < 2) goto LAB_00012314;
        f__lquit = 2;
      }
    }
    else {
      f__ltype = 3;
    }
    return 0;
  }
LAB_00012314:
  uVar6 = err__fl();
  return uVar6;
}



// WARNING: Removing unreachable block (ram,0x00012330)

undefined4 rd_count(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_1 - 0x30U;
  if (param_1 - 0x30U < 10) {
    while ((f__lcount = uVar1, iVar2 = (*l_getc)(), 0x2f < iVar2 && (iVar2 < 0x3a))) {
      uVar1 = (f__lcount * 10 + iVar2) - 0x30;
    }
    (*l_ungetc)(iVar2,f__cf);
    uVar3 = 1;
    if (0 < (int)f__lcount) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x000126c0)
// WARNING: Removing unreachable block (ram,0x00012768)
// WARNING: Removing unreachable block (ram,0x000123cc)
// WARNING: Removing unreachable block (ram,0x00012540)
// WARNING: Removing unreachable block (ram,0x000125e4)
// WARNING: Removing unreachable block (ram,0x00012458)

int l_C(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (0 < f__lcount) {
    return 0;
  }
  f__ltype = 0;
  iVar2 = (*l_getc)();
  if (iVar2 == 0x28) {
    f__lcount = 1;
  }
  else {
    if ((1 < nml_read) && (9 < iVar2 - 0x30U)) {
      (*l_ungetc)(iVar2,f__cf);
      f__lquit = 2;
      return 0;
    }
    iVar2 = rd_count(iVar2);
    if (iVar2 != 0) {
      if ((f__cf != 0) && ((*(byte *)(f__cf + 0xc) & 0x10) != 0)) {
        iVar2 = *f__elist;
joined_r0x00012514:
        if (iVar2 == 0) {
          f__fatal(0xffffffff,"lread");
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0xffffffff;
        }
        return -1;
      }
      iVar2 = *f__elist;
      goto LAB_00012768;
    }
    iVar2 = (*l_getc)();
    if (iVar2 != 0x2a) {
      if ((f__cf != 0) && ((*(byte *)(f__cf + 0xc) & 0x10) != 0)) {
        iVar2 = *f__elist;
        goto joined_r0x00012514;
      }
      iVar2 = *f__elist;
      goto LAB_00012768;
    }
    iVar2 = (*l_getc)();
    if (iVar2 != 0x28) {
      (*l_ungetc)(iVar2,f__cf);
      return 0;
    }
  }
  do {
    iVar2 = (*l_getc)();
  } while ((f__ltab[iVar2 + 1] & 0x20) != 0);
  (*l_ungetc)(iVar2,f__cf);
  iVar2 = nml_read;
  nml_read = 0;
  iVar3 = l_R(1,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar4 = f__lx;
  if (f__ltype == 0) {
    iVar2 = *f__elist;
  }
  else {
    do {
      iVar3 = (*l_getc)();
    } while ((f__ltab[iVar3 + 1] & 0x20) != 0);
    if (iVar3 == 0x2c) {
      do {
        iVar3 = (*l_getc)();
      } while ((f__ltab[iVar3 + 1] & 0x20) != 0);
      (*l_ungetc)(iVar3,f__cf);
      iVar3 = l_R(1,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (f__ltype == 0) {
        iVar2 = *f__elist;
      }
      else {
        do {
          iVar3 = (*l_getc)();
          uVar1 = f__lx;
        } while ((f__ltab[iVar3 + 1] & 0x20) != 0);
        if (iVar3 == 0x29) {
          f__llx = 0;
          f__lx = uVar4;
          f__ly = uVar1;
          nml_read = iVar2;
          return 0;
        }
        iVar2 = *f__elist;
      }
    }
    else {
      (*l_ungetc)(iVar3,f__cf);
      iVar2 = *f__elist;
    }
  }
LAB_00012768:
  iVar2 = err__fl(iVar2,0x70);
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x00012990)
// WARNING: Removing unreachable block (ram,0x0001277c)
// WARNING: Removing unreachable block (ram,0x00012860)
// WARNING: Removing unreachable block (ram,0x000127d4)

undefined4 l_L(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (0 < f__lcount) {
    return 0;
  }
  f__lcount = 1;
  f__ltype = 0;
  iVar1 = (*l_getc)();
  if ((__ctype[iVar1 + 1] & 4) != 0) {
    rd_count(iVar1);
    iVar1 = (*l_getc)();
    if (iVar1 != 0x2a) {
      if ((f__cf != 0) && ((*(byte *)(f__cf + 0xc) & 0x10) != 0)) {
        if (*f__elist == 0) {
          f__fatal(0xffffffff,"lread");
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0xffffffff;
        }
        return 0xffffffff;
      }
      iVar1 = *f__elist;
      pcVar4 = "no star";
      goto LAB_00012990;
    }
    iVar1 = (*l_getc)();
  }
  if (iVar1 == 0x2e) {
    iVar1 = (*l_getc)();
  }
  if (iVar1 == 0x54) {
LAB_000128d8:
    uVar2 = 0x3ff00000;
    goto LAB_000128e8;
  }
  if (iVar1 < 0x55) {
    if (iVar1 == 0x46) {
LAB_000128e4:
      uVar2 = 0;
LAB_000128e8:
      f__lx = (ulonglong)uVar2 << 0x20;
      f__ltype = 3;
      do {
        iVar1 = (*l_getc)();
        if ((f__ltab[iVar1 + 1] & 1) != 0) break;
      } while (iVar1 != -1);
      (*l_ungetc)(iVar1,f__cf);
      return 0;
    }
  }
  else {
    if (iVar1 == 0x66) goto LAB_000128e4;
    if (iVar1 == 0x74) goto LAB_000128d8;
  }
  if ((((f__ltab[iVar1 + 1] & 2) != 0) || ((f__ltab[iVar1 + 1] & 1) != 0)) || (iVar1 == -1)) {
    (*l_ungetc)(iVar1,f__cf);
    return 0;
  }
  if (1 < nml_read) {
    (*l_ungetc)(iVar1,f__cf);
    f__lquit = 2;
    return 0;
  }
  iVar1 = *f__elist;
  pcVar4 = "logical";
LAB_00012990:
  uVar3 = err__fl(iVar1,0x70,pcVar4);
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00012a48)
// WARNING: Removing unreachable block (ram,0x00012bc8)
// WARNING: Removing unreachable block (ram,0x00012dfc)
// WARNING: Removing unreachable block (ram,0x00012a00)
// WARNING: Removing unreachable block (ram,0x00012d44)
// WARNING: Removing unreachable block (ram,0x00012dd0)
// WARNING: Removing unreachable block (ram,0x00012a40)

undefined4 l_CHAR(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  size_t sVar8;
  size_t sVar9;
  size_t __size;
  char cVar10;
  
  if (0 < f__lcount) {
    return 0;
  }
  f__ltype = 0;
  if (f__lchar != (char *)0x0) {
    free(f__lchar);
  }
  pcVar2 = (char *)malloc(0x80);
  __size = 0x80;
  f__lchar = pcVar2;
  if (pcVar2 != (char *)0x0) {
    iVar4 = (*l_getc)();
    if ((__ctype[iVar4 + 1] & 4) == 0) {
      (*l_ungetc)(iVar4,f__cf);
LAB_00012c00:
      iVar4 = (*l_getc)();
      cVar10 = (char)iVar4;
      if ((iVar4 != 0x27) && (iVar4 != 0x22)) {
        if (((f__ltab[iVar4 + 1] & 2) == 0) &&
           ((((f__ltab[iVar4 + 1] & 1) == 0 || (iVar4 == 10)) && (iVar4 != -1)))) {
          if (1 < nml_read) {
            (*l_ungetc)(iVar4,f__cf);
            f__lquit = 2;
            return 0;
          }
          *pcVar2 = cVar10;
          pcVar7 = pcVar2 + 1;
          sVar8 = 1;
          goto LAB_00012cc8;
        }
        (*l_ungetc)(iVar4,f__cf);
        return 0;
      }
      f__ltype = 9;
      iVar4 = 0;
LAB_00012d74:
      do {
LAB_00012d80:
        do {
          iVar5 = (*l_getc)();
          if ((iVar5 == cVar10) || (iVar5 == 10)) {
LAB_00012dbc:
            iVar1 = iVar4 - __size;
          }
          else {
            iVar1 = iVar4 - __size;
            if (iVar5 != -1) {
              iVar4 = iVar4 + 1;
              if ((int)__size <= iVar4) goto LAB_00012dbc;
              *pcVar2 = (char)iVar5;
              pcVar2 = pcVar2 + 1;
              goto LAB_00012d80;
            }
          }
          if (iVar1 == 0) goto LAB_00012dcc;
          if (iVar5 == -1) {
            return 0xffffffff;
          }
          if (iVar5 != 10) {
            iVar5 = (*l_getc)();
            if (iVar5 != cVar10) {
              (*l_ungetc)(iVar5,f__cf);
              *pcVar2 = '\0';
              return 0;
            }
            iVar4 = iVar4 + 1;
            goto LAB_00012e70;
          }
        } while (pcVar2[-1] != '\\');
        pcVar2 = pcVar2 + -1;
LAB_00012e70:
        if ((int)__size <= iVar4) {
LAB_00012dcc:
          __size = __size + 0x80;
          f__lchar = (char *)realloc(f__lchar,__size);
          if (f__lchar != (char *)0x0) {
            pcVar2 = f__lchar + iVar4;
            pcVar2[-1] = (char)iVar5;
            goto LAB_00012d74;
          }
          goto LAB_00012de4;
        }
        *pcVar2 = (char)iVar5;
        pcVar2 = pcVar2 + 1;
      } while( true );
    }
    f__lcount = iVar4 + -0x30;
    *pcVar2 = (char)iVar4;
    pcVar7 = pcVar2 + 1;
    sVar8 = 1;
LAB_00012abc:
    sVar9 = sVar8;
    iVar4 = (*l_getc)();
    switch(iVar4) {
    default:
      if ((__ctype[iVar4 + 1] & 4) == 0) {
        f__lcount = 1;
        if (nml_read != 0) goto LAB_00012b78;
        goto switchD_00012cf4_caseD_0;
      }
      *pcVar7 = (char)iVar4;
      sVar8 = sVar9 + 1;
      f__lcount = f__lcount * 10 + iVar4 + -0x30;
      pcVar7 = pcVar7 + 1;
      if (sVar8 == __size) {
        __size = sVar9 + 0x81;
        f__lchar = (char *)realloc(f__lchar,__size);
        if (f__lchar == (char *)0x0) goto LAB_00012de4;
        pcVar7 = f__lchar + sVar8;
      }
      goto LAB_00012abc;
    case 9:
    case 10:
    case 0x20:
    case 0x2c:
    case 0x2f:
      (*l_ungetc)(iVar4,f__cf);
    case -1:
      f__lcount = 1;
      break;
    case 0x2a:
      pcVar2 = f__lchar;
      if (f__lcount != 0) goto LAB_00012c00;
      f__lcount = 1;
      if (nml_read == 0) {
        *pcVar7 = (char)iVar4;
        goto LAB_00012d2c;
      }
LAB_00012b78:
      f__lcount = 1;
      uVar3 = *f__elist;
      pcVar2 = "undelimited character string";
      uVar6 = 0x70;
      goto LAB_00012dfc;
    }
LAB_00012d1c:
    f__ltype = 9;
    *pcVar7 = '\0';
    return 0;
  }
  uVar3 = *f__elist;
  pcVar2 = "no space";
LAB_00012df8:
  uVar6 = 0x71;
LAB_00012dfc:
  uVar3 = err__fl(uVar3,uVar6,pcVar2);
  return uVar3;
LAB_00012cc8:
  do {
    iVar4 = (*l_getc)();
    sVar9 = sVar8;
    switch(iVar4) {
    default:
switchD_00012cf4_caseD_0:
      *pcVar7 = (char)iVar4;
LAB_00012d2c:
      sVar8 = sVar9 + 1;
      pcVar7 = pcVar7 + 1;
      if (sVar8 == __size) {
        __size = sVar9 + 0x81;
        f__lchar = (char *)realloc(f__lchar,__size);
        if (f__lchar == (char *)0x0) goto LAB_00012de4;
        pcVar7 = f__lchar + sVar8;
      }
      break;
    case 9:
    case 10:
    case 0x20:
    case 0x2c:
    case 0x2f:
      (*l_ungetc)(iVar4,f__cf);
    case -1:
      goto LAB_00012d1c;
    }
  } while( true );
LAB_00012de4:
  uVar3 = *f__elist;
  pcVar2 = rafail_21;
  goto LAB_00012df8;
}



// WARNING: Removing unreachable block (ram,0x00013158)
// WARNING: Removing unreachable block (ram,0x000130d4)
// WARNING: Removing unreachable block (ram,0x00013034)
// WARNING: Removing unreachable block (ram,0x000131b4)
// WARNING: Removing unreachable block (ram,0x00013114)
// WARNING: Removing unreachable block (ram,0x0001304c)

undefined4 c_le(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (f__init != 1) {
    f_init();
  }
  f__curunit = &f__units + param_1[1] * 0xc;
  f__fmtbuf = "list io";
  f__fmtlen = 7;
  f__init = 3;
  if ((uint)param_1[1] < 100) {
    f__recpos = 0;
    f__scale = 0;
    f__elist = param_1;
    if ((*f__curunit == 0) && (iVar1 = fk_open(3,5,param_1[1]), iVar1 != 0)) {
      if (*param_1 == 0) {
        f__fatal(0x66,&DAT_0001a0e0);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x66;
      }
      uVar2 = 0x66;
    }
    else {
      f__cf = *f__curunit;
      if (f__curunit[6] == 0) {
        if (*param_1 == 0) {
          f__fatal(0x67,&DAT_0001a0e0);
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0x67;
        }
        uVar2 = 0x67;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    if (*param_1 == 0) {
      f__fatal(0x65,"stler");
    }
    else {
      f__init = 1;
      errno = 0x65;
    }
    uVar2 = 0x65;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00013388)
// WARNING: Removing unreachable block (ram,0x00013368)
// WARNING: Removing unreachable block (ram,0x00013328)
// WARNING: Removing unreachable block (ram,0x00013504)
// WARNING: Removing unreachable block (ram,0x000132c0)
// WARNING: Removing unreachable block (ram,0x000131d0)
// WARNING: Removing unreachable block (ram,0x00013584)
// WARNING: Removing unreachable block (ram,0x0001345c)
// WARNING: Removing unreachable block (ram,0x0001333c)
// WARNING: Removing unreachable block (ram,0x00013378)
// WARNING: Removing unreachable block (ram,0x00013350)
// WARNING: Heritage AFTER dead removal. Example location: r0x0002da9c : 0x0001329c
// WARNING: Heritage AFTER dead removal. Example location: o1 : 0x0001345c
// WARNING: Restarted to delay deadcode elimination for space: ram
// WARNING: Restarted to delay deadcode elimination for space: register
// WARNING: Exceeded maximum restarts with more pending

int l_read(void)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  double in_o0_1;
  uint uVar5;
  undefined8 in_o2_3;
  int iVar6;
  double *pdVar7;
  
  piVar2 = (int *)((ulonglong)in_o0_1 >> 0x20);
  pdVar7 = SUB84(in_o0_1,0);
  iVar6 = 0;
  if (*piVar2 < 1) {
    return 0;
  }
LAB_000131f0:
  if (f__lquit != 0) {
    return 0;
  }
  if (l_eof != 0) {
    iVar6 = f__elist[2];
joined_r0x00013294:
    if (iVar6 == 0) {
      f__fatal(0xffffffff);
    }
    else {
      f__init = f__init & 0xfffffffd;
      errno = 0xffffffff;
    }
    return -1;
  }
  iVar3 = (int)((ulonglong)in_o0_1 >> 0x20);
  if (f__lcount == 0) {
    f__ltype = 0;
    goto switchD_0001327c_caseD_9;
  }
LAB_00013300:
  switch((int)in_o2_3) {
  case 2:
  case 3:
  case 0xb:
    l_R(0);
    break;
  case 4:
  case 5:
    l_R(0);
    break;
  case 6:
  case 7:
    l_C();
    break;
  case 8:
  case 0xc:
  case 0xd:
    l_L();
    break;
  case 9:
    l_CHAR();
    break;
  default:
    goto LAB_000133b8;
  case 0xe:
    l_R(0);
    if (iVar3 != 0) {
      return iVar3;
    }
    goto LAB_000133b8;
  }
  if (iVar3 != 0) {
    f__init = f__init & 0xfffffffd;
    return iVar3;
  }
LAB_000133b8:
  do {
    do {
      (*l_getc)();
    } while (iVar3 == 0x20);
  } while (iVar3 == 9);
  if ((iVar3 != 0x2c) || (1 < f__lcount)) {
    (*l_ungetc)(iVar3);
  }
  goto LAB_0001340c;
switchD_0001327c_caseD_9:
  (*l_getc)();
  switch(iVar3) {
  default:
    (*l_ungetc)(iVar3);
    goto LAB_00013300;
  case 9:
  case 10:
  case 0x20:
    goto switchD_0001327c_caseD_9;
  case 0x2c:
    f__lcount = 1;
    goto LAB_0001340c;
  case 0x2f:
    f__lquit = 1;
LAB_0001340c:
    if (f__lquit != 0) {
      return 0;
    }
    if ((f__cf != 0) &&
       (in_o0_1 = (double)(CONCAT44(f__cf,(uint)*(byte *)(f__cf + 0xc)) & 0xffffffff000000cf),
       (*(byte *)(f__cf + 0xc) & 0x20) != 0)) {
      iVar6 = (int)((ulonglong)in_o0_1 >> 0x20);
      *(char *)(iVar6 + 0xc) = SUB81(in_o0_1,0);
      err__fl(*f__elist,SUB84(in_o0_1,0),"list in");
      return iVar6;
    }
    if (f__ltype != 0) {
      switch((int)in_o2_3) {
      case 2:
      case 0xd:
        *(short *)pdVar7 = (short)((ulonglong)(longlong)f__lx >> 0x20);
        break;
      case 3:
      case 8:
        *(int *)pdVar7 = (int)((ulonglong)(longlong)f__lx >> 0x20);
        break;
      case 4:
        *(float *)pdVar7 = (float)f__lx;
        break;
      case 5:
        *pdVar7 = f__lx;
        break;
      case 6:
        *(float *)pdVar7 = (float)f__lx;
        *(float *)((int)pdVar7 + 4) = (float)f__ly;
        break;
      case 7:
        *pdVar7 = f__lx;
        pdVar7[1] = f__ly;
        break;
      case 9:
        b_char(f__lchar);
        break;
      case 0xb:
      case 0xc:
        *(char *)pdVar7 = (char)((ulonglong)(longlong)f__lx >> 0x20);
        break;
      case 0xe:
        uVar1 = (ulonglong)f__llx >> 0x20;
        uVar5 = SUB84(f__llx,0);
        *pdVar7 = f__llx;
        if (((uint)uVar1 | uVar5) == 0) {
          uVar4 = (undefined4)((ulonglong)f__lx >> 0x20);
          __dtoll(uVar4);
          in_o0_1 = (double)CONCAT44(uVar4,SUB84(in_o0_1,0));
          *pdVar7 = in_o0_1;
        }
      }
    }
    if (0 < f__lcount) {
      f__lcount = f__lcount + -1;
    }
    pdVar7 = (double *)((int)pdVar7 + (int)((ulonglong)in_o2_3 >> 0x20));
    if (nml_read != 0) {
      nml_read = nml_read + 1;
    }
    iVar6 = iVar6 + 1;
    if (*piVar2 <= iVar6) {
      return 0;
    }
    goto LAB_000131f0;
  case -1:
    iVar6 = f__elist[2];
    goto joined_r0x00013294;
  }
}



// WARNING: Removing unreachable block (ram,0x00013780)
// WARNING: Removing unreachable block (ram,0x00013824)
// WARNING: Removing unreachable block (ram,0x00013708)
// WARNING: Removing unreachable block (ram,0x000137c8)
// WARNING: Removing unreachable block (ram,0x00013728)

int s_rsle(int *param_1)

{
  int iVar1;
  
  f__formatted = 1;
  f__reading = 1;
  f__external = 1;
  iVar1 = c_le(param_1);
  if (iVar1 == 0) {
    f__lioproc = l_read;
    f__lquit = 0;
    f__lcount = 0;
    l_eof = 0;
    if ((*(int *)(f__curunit + 0x28) == 0) || (iVar1 = f__nowreading(f__curunit), iVar1 == 0)) {
      if (*(int *)(f__curunit + 0x24) == 0) {
        l_getc = t_getc;
        l_ungetc = ungetc;
        f__doend = xrd_SL;
        iVar1 = 0;
      }
      else {
        if (*(int *)(f__elist + 8) == 0) {
          f__fatal(0xffffffff,"read start");
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = -1;
        }
        iVar1 = -1;
      }
    }
    else if (*param_1 == 0) {
      f__fatal(errno,"read start");
      iVar1 = errno;
    }
    else {
      f__init = f__init & 0xfffffffd;
      iVar1 = errno;
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x00013928)
// WARNING: Removing unreachable block (ram,0x00013870)
// WARNING: Removing unreachable block (ram,0x000138e0)
// WARNING: Removing unreachable block (ram,0x000138c4)

undefined * f__bufadj(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (f__buf == &f__buf0) {
    f__buflen = 0x400;
  }
  if ((int)f__buflen <= param_1) {
    do {
      f__buflen = f__buflen * 2;
    } while (f__buflen - param_1 == 0 || (int)f__buflen < param_1);
  }
  puVar1 = (undefined *)malloc(f__buflen);
  if (puVar1 == (undefined *)0x0) {
    f__fatal(0x71,"malloc failure");
  }
  puVar4 = f__buf + param_2;
  puVar3 = puVar1;
  for (puVar2 = f__buf; puVar2 < puVar4; puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  if (f__buf != &f__buf0) {
    free(f__buf);
  }
  f__buf = puVar1;
  return puVar1;
}



// WARNING: Removing unreachable block (ram,0x000139f4)
// WARNING: Removing unreachable block (ram,0x000139c8)
// WARNING: Removing unreachable block (ram,0x0001393c)
// WARNING: Removing unreachable block (ram,0x000139fc)
// WARNING: Removing unreachable block (ram,0x00013978)

undefined4 f__putbuf(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (f__recpos < f__hiwater) {
    f__recpos = f__hiwater;
  }
  if (f__buflen <= f__recpos + 1) {
    f__bufadj(f__recpos + 1,f__recpos);
  }
  pcVar4 = f__buf;
  pcVar6 = f__buf + f__recpos;
  if (param_1 != 0) {
    f__buf[f__recpos] = (char)param_1;
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = '\0';
  while( true ) {
    fputs(pcVar4,f__cf);
    sVar3 = strlen(pcVar4);
    pFVar1 = f__cf;
    pcVar5 = pcVar4 + sVar3;
    if (pcVar6 <= pcVar5) break;
    iVar2 = f__cf->_flags + -1;
    f__cf->_flags = iVar2;
    if (iVar2 < 0) {
      pcVar4 = pcVar5 + 1;
      __flsbuf((int)*pcVar5,pFVar1);
    }
    else {
      pcVar4 = pFVar1->_IO_read_ptr;
      *pcVar4 = *pcVar5;
      pFVar1->_IO_read_ptr = pcVar4 + 1;
      pcVar4 = pcVar5 + 1;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00013a1c)
// WARNING: Removing unreachable block (ram,0x00013a3c)

undefined4 x_putc(undefined4 param_1)

{
  if (f__buflen <= f__recpos) {
    f__bufadj();
  }
  f__buf[f__recpos] = (char)param_1;
  f__recpos = f__recpos + 1;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00013abc)
// WARNING: Removing unreachable block (ram,0x00013a64)
// WARNING: Removing unreachable block (ram,0x00013ab0)
// WARNING: Removing unreachable block (ram,0x00013a8c)

undefined4 opn_err(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_3 + 8) != 0) {
    if (f__buflen <= *(int *)(param_3 + 0xc)) {
      f__bufadj(*(int *)(param_3 + 0xc),0);
    }
    puVar1 = f__buf;
    uVar3 = *(undefined4 *)(param_3 + 0xc);
    uVar2 = *(undefined4 *)(param_3 + 8);
    *(undefined **)(f__curunit + 4) = f__buf;
    g_char(uVar2,uVar3,puVar1);
  }
  f__fatal(param_1,param_2);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00013bc0)
// WARNING: Removing unreachable block (ram,0x00013c08)
// WARNING: Removing unreachable block (ram,0x00013cb8)
// WARNING: Removing unreachable block (ram,0x00013dd4)
// WARNING: Removing unreachable block (ram,0x00013e20)
// WARNING: Removing unreachable block (ram,0x00013e38)
// WARNING: Removing unreachable block (ram,0x00013db8)
// WARNING: Removing unreachable block (ram,0x00013e94)
// WARNING: Removing unreachable block (ram,0x00013ec0)
// WARNING: Removing unreachable block (ram,0x00013ed0)
// WARNING: Removing unreachable block (ram,0x00013f68)
// WARNING: Removing unreachable block (ram,0x00013fac)
// WARNING: Removing unreachable block (ram,0x00014014)
// WARNING: Removing unreachable block (ram,0x0001409c)
// WARNING: Removing unreachable block (ram,0x00014120)
// WARNING: Removing unreachable block (ram,0x00013f18)
// WARNING: Removing unreachable block (ram,0x00013acc)
// WARNING: Removing unreachable block (ram,0x0001406c)
// WARNING: Removing unreachable block (ram,0x000140d8)
// WARNING: Removing unreachable block (ram,0x00014024)
// WARNING: Removing unreachable block (ram,0x00014000)
// WARNING: Removing unreachable block (ram,0x00013f8c)
// WARNING: Removing unreachable block (ram,0x00013f2c)
// WARNING: Removing unreachable block (ram,0x00013ec8)
// WARNING: Removing unreachable block (ram,0x00013eac)
// WARNING: Removing unreachable block (ram,0x00013e4c)
// WARNING: Removing unreachable block (ram,0x00013d84)
// WARNING: Removing unreachable block (ram,0x00013e30)
// WARNING: Removing unreachable block (ram,0x00013ddc)
// WARNING: Removing unreachable block (ram,0x00013d04)
// WARNING: Removing unreachable block (ram,0x00013d24)
// WARNING: Removing unreachable block (ram,0x00013bcc)
// WARNING: Removing unreachable block (ram,0x00013b34)
// WARNING: Removing unreachable block (ram,0x00013ae4)

int f_open(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  FILE *pFVar7;
  int iVar8;
  undefined4 uVar9;
  FILE **ppFVar10;
  uint uVar11;
  int local_124;
  undefined8 local_120;
  undefined4 local_118;
  char local_110 [272];
  
  if (f__init != 1) {
    f_init();
  }
  f__external = 1;
  if (99 < (uint)param_1[1]) {
    if (*param_1 == 0) {
      f__fatal(0x65,&DAT_0001a128);
    }
    else {
      f__init = f__init & 0xfffffffd;
      errno = 0x65;
    }
    return 0x65;
  }
  iVar8 = param_1[1];
  iVar2 = iVar8 * 0x30;
  ppFVar10 = (FILE **)(&f__units + iVar8 * 0xc);
  f__curunit = ppFVar10;
  if ((&f__units)[iVar8 * 0xc] == 0) {
    iVar4 = param_1[7];
  }
  else {
    if (param_1[2] == 0) {
      pcVar3 = (char *)param_1[8];
LAB_00013b88:
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
      if ((*pcVar3 == 'z') || (*pcVar3 == 'Z')) {
        *(undefined4 *)(&DAT_0002c75c + iVar2) = 1;
      }
      else {
        *(undefined4 *)(&DAT_0002c75c + iVar2) = 0;
      }
      return 0;
    }
    g_char(param_1[2],param_1[3],local_110);
    iVar4 = f__inode(local_110,&local_124);
    if (iVar4 == *(int *)(&DAT_0002c744 + iVar2)) {
      if (local_124 == *(int *)(&DAT_0002c748 + iVar2)) {
        pcVar3 = (char *)param_1[8];
        goto LAB_00013b88;
      }
      iVar4 = param_1[1];
    }
    else {
      iVar4 = param_1[1];
    }
    local_118 = 0;
    local_120 = CONCAT44(*param_1,iVar4);
    iVar4 = f_clos(&local_120);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = param_1[7];
  }
  *(int *)(&DAT_0002c74c + iVar2) = iVar4;
  uVar9 = 0;
  if ((char *)param_1[8] == (char *)0x0) {
LAB_00013c58:
    *(undefined4 *)(&DAT_0002c75c + iVar2) = uVar9;
  }
  else {
    cVar1 = *(char *)param_1[8];
    if ((cVar1 == 'z') || (cVar1 == 'Z')) {
      uVar9 = 1;
      goto LAB_00013c58;
    }
    *(undefined4 *)(&DAT_0002c75c + iVar2) = 0;
  }
  if ((char *)param_1[6] == (char *)0x0) {
    if (*(int *)(&DAT_0002c74c + iVar2) < 1) goto LAB_00013c9c;
    (&DAT_0002c754)[iVar8 * 0xc] = 0;
  }
  else {
    cVar1 = *(char *)param_1[6];
    if ((cVar1 == 'f') || (cVar1 == 'F')) {
LAB_00013c9c:
      (&DAT_0002c754)[iVar8 * 0xc] = 1;
    }
    else {
      (&DAT_0002c754)[iVar8 * 0xc] = 0;
    }
  }
  uVar11 = (&DAT_0002c754)[iVar8 * 0xc];
  if (param_1[2] == 0) {
    sprintf(local_110,"fort.%ld",param_1[1]);
  }
  else {
    g_char(param_1[2],param_1[3],local_110);
    if (local_110[0] == '\0') {
      if (*param_1 == 0) {
        opn_err(0x6b,&DAT_0001a128,param_1);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x6b;
      }
      return 0x6b;
    }
  }
  *(undefined4 *)(&DAT_0002c758 + iVar2) = 3;
  *(undefined4 *)(&DAT_0002c768 + iVar2) = 0;
  *(undefined4 *)(&DAT_0002c760 + iVar2) = 0;
  (&DAT_0002c764)[iVar8 * 0xc] = 0;
  *ppFVar10 = (FILE *)0x0;
  iVar4 = 0x27;
  if ((char *)param_1[4] != (char *)0x0) {
    iVar4 = *(char *)param_1[4] + -0x4e;
  }
  switch(iVar4) {
  case 0:
  case 0x20:
    iVar4 = access(local_110,0);
    if (iVar4 == 0) {
      if (*param_1 == 0) {
        opn_err(0x80,&DAT_0001a128,param_1);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x80;
      }
      return 0x80;
    }
    break;
  case 1:
  case 0x21:
    iVar4 = access(local_110,0);
    if (iVar4 != 0) {
      if (*param_1 == 0) {
        opn_err(errno,&DAT_0001a128,param_1);
        return errno;
      }
      goto LAB_00013fe0;
    }
  default:
    goto switchD_00013d78_caseD_2;
  case 4:
  case 0x24:
    break;
  case 5:
  case 0x25:
    *(undefined4 *)(&DAT_0002c768 + iVar2) = 1;
    pcVar3 = tempnam((char *)0x0,local_110);
    sVar5 = strlen(pcVar3);
    if (0xff < sVar5) {
      if (*param_1 == 0) {
        f__fatal(0x84,&DAT_0001a128);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x84;
      }
      return 0x84;
    }
    strcpy(local_110,pcVar3);
    free(pcVar3);
  }
  pFVar7 = fopen(local_110,f__w_mode);
  if (pFVar7 != (FILE *)0x0) {
    fclose(pFVar7);
  }
switchD_00013d78_caseD_2:
  sVar5 = strlen(local_110);
  pvVar6 = malloc(sVar5 + 1);
  *(void **)(&DAT_0002c740 + iVar2) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    if (*param_1 == 0) {
      opn_err(0x71,"no space",param_1);
    }
    else {
      f__init = f__init & 0xfffffffd;
      errno = 0x71;
    }
    iVar2 = 0x71;
  }
  else {
    strcpy(*(char **)(&DAT_0002c740 + iVar2),local_110);
    if ((param_1[5] != 0) && (*(int *)(&DAT_0002c74c + iVar2) != 0)) {
      uVar11 = 0;
    }
    pFVar7 = fopen(local_110,(&f__w_mode)[uVar11 | 2]);
    if (pFVar7 == (FILE *)0x0) {
      pFVar7 = fopen(local_110,(&f__r_mode)[uVar11]);
      if (pFVar7 == (FILE *)0x0) {
        pFVar7 = fopen(local_110,(&f__w_mode)[uVar11]);
        if (pFVar7 == (FILE *)0x0) {
          if (*param_1 == 0) {
            f__fatal(errno,&DAT_0001a128);
            return errno;
          }
LAB_00013fe0:
          f__init = f__init & 0xfffffffd;
          return errno;
        }
        (&DAT_0002c764)[iVar8 * 0xc] = 1;
        *(undefined4 *)(&DAT_0002c758 + iVar2) = 2;
      }
      else {
        *(undefined4 *)(&DAT_0002c758 + iVar2) = 1;
      }
    }
    *ppFVar10 = pFVar7;
    uVar9 = f__canseek(pFVar7);
    (&DAT_0002c750)[iVar8 * 0xc] = uVar9;
    iVar4 = f__inode(local_110,&DAT_0002c748 + iVar2);
    *(int *)(&DAT_0002c744 + iVar2) = iVar4;
    if (iVar4 == -1) {
      if (*param_1 == 0) {
        opn_err(0x6c,&DAT_0001a128,param_1);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x6c;
      }
      iVar2 = 0x6c;
    }
    else if ((&DAT_0002c750)[iVar8 * 0xc] == 0) {
      iVar2 = 0;
    }
    else if (param_1[7] == 0) {
      if ((char *)param_1[5] == (char *)0x0) {
        iVar2 = 0;
      }
      else {
        cVar1 = *(char *)param_1[5];
        if ((cVar1 == 'a') || (cVar1 == 'A')) {
          iVar2 = fseek(*ppFVar10,0,2);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            if (*param_1 == 0) {
              opn_err(0x81,&DAT_0001a128,param_1);
            }
            else {
              f__init = f__init & 0xfffffffd;
              errno = 0x81;
            }
            iVar2 = 0x81;
          }
        }
        else {
          iVar2 = 0;
        }
      }
    }
    else {
      rewind(*ppFVar10);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x00014274)
// WARNING: Removing unreachable block (ram,0x000141d4)
// WARNING: Removing unreachable block (ram,0x00014200)
// WARNING: Removing unreachable block (ram,0x000141e8)

undefined4 fk_open(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  char *local_40;
  size_t local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  char acStack_20 [32];
  
  local_40 = acStack_20;
  sprintf(local_40,"fort.%ld",param_3);
  local_48 = 1;
  local_44 = param_3;
  local_3c = strlen(local_40);
  uVar1 = f__init;
  local_38 = 0;
  if (param_1 == 3) {
    local_34 = &DAT_0001a150;
  }
  else {
    local_34 = &DAT_0001a158;
  }
  if (param_2 == 5) {
    local_30 = &DAT_0001a160;
  }
  else {
    local_30 = &DAT_0001a168;
  }
  f__init = f__init & 0xfffffffd;
  local_2c = (uint)(param_1 == 4);
  local_28 = 0;
  uVar2 = f_open(&local_48);
  f__init = uVar1 | 1;
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0001428c)
// WARNING: Removing unreachable block (ram,0x000142e8)

undefined4 xrd_SL(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(f__curunit + 0x24) == 0) {
    do {
      piVar1 = f__cf;
      iVar2 = *f__cf;
      *f__cf = iVar2 + -1;
      if (iVar2 + -1 < 0) {
        uVar3 = __filbuf(piVar1);
      }
      else {
        uVar3 = (uint)*(byte *)piVar1[1];
        piVar1[1] = (int)((byte *)piVar1[1] + 1);
      }
      if (uVar3 == 10) {
        f__cursor = 0;
        f__recpos = 0;
        return 1;
      }
    } while (uVar3 != 0xffffffff);
    *(undefined4 *)(f__curunit + 0x24) = 1;
  }
  f__recpos = 0;
  f__cursor = 0;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000143b0)
// WARNING: Removing unreachable block (ram,0x00014324)
// WARNING: Removing unreachable block (ram,0x00014360)

uint x_getc(void)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar3;
  
  pFVar1 = f__cf;
  if (*(int *)(f__curunit + 0x24) == 0) {
    iVar2 = f__cf->_flags + -1;
    f__cf->_flags = iVar2;
    if (iVar2 < 0) {
      uVar3 = __filbuf(pFVar1);
    }
    else {
      uVar3 = (uint)(byte)*pFVar1->_IO_read_ptr;
      pFVar1->_IO_read_ptr = pFVar1->_IO_read_ptr + 1;
    }
    if ((uVar3 != 0xffffffff) && (uVar3 != 10)) {
      f__recpos = f__recpos + 1;
      return uVar3;
    }
    if (uVar3 == 10) {
      ungetc(10,f__cf);
      return 10;
    }
    if ((*(int *)(f__curunit + 0x24) != 0) || ((*(byte *)&f__cf->_IO_read_base & 0x10) != 0)) {
      errno = 0;
      *(undefined4 *)(f__curunit + 0x24) = 1;
    }
  }
  return 0xffffffff;
}



// WARNING: Removing unreachable block (ram,0x000143fc)
// WARNING: Removing unreachable block (ram,0x00014400)

undefined4 x_endp(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  xrd_SL();
  if (*(int *)(f__curunit + 0x24) == 1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00014428)
// WARNING: Removing unreachable block (ram,0x0001442c)

undefined4 x_rev(void)

{
  xrd_SL();
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00014488)
// WARNING: Removing unreachable block (ram,0x0001457c)
// WARNING: Removing unreachable block (ram,0x0001461c)
// WARNING: Removing unreachable block (ram,0x00014540)
// WARNING: Removing unreachable block (ram,0x0001443c)
// WARNING: Removing unreachable block (ram,0x00014670)
// WARNING: Removing unreachable block (ram,0x000145d8)
// WARNING: Removing unreachable block (ram,0x000144fc)
// WARNING: Removing unreachable block (ram,0x00014454)

int s_rsfe(int *param_1)

{
  int iVar1;
  
  if (f__init != 1) {
    f_init();
  }
  f__external = 1;
  f__init = 3;
  f__reading = 1;
  f__sequential = 1;
  f__formatted = 1;
  iVar1 = c_sfe(param_1);
  if (iVar1 == 0) {
    f__cf = (&f__units)[param_1[1] * 0xc];
    f__fmtbuf = param_1[3];
    f__curunit = &f__units + param_1[1] * 0xc;
    f__recpos = 0;
    f__cursor = 0;
    f__scale = 0;
    f__elist = param_1;
    iVar1 = pars_f();
    if (iVar1 < 0) {
      if (*param_1 == 0) {
        f__fatal(100,"startio");
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 100;
      }
      iVar1 = 100;
    }
    else {
      f__getn = x_getc;
      f__doed = rd_ed;
      f__doned = rd_ned;
      fmt_bg();
      f__cblank = f__curunit[8];
      f__doend = x_endp;
      f__donewrec = xrd_SL;
      f__dorevert = x_rev;
      f__cplus = 0;
      if ((f__curunit[10] == 0) || (iVar1 = f__nowreading(f__curunit), iVar1 == 0)) {
        if (f__curunit[9] == 0) {
          iVar1 = 0;
        }
        else {
          if (f__elist[2] == 0) {
            f__fatal(0xffffffff,"read start");
          }
          else {
            f__init = f__init & 0xfffffffd;
            errno = -1;
          }
          iVar1 = -1;
        }
      }
      else if (*param_1 == 0) {
        f__fatal(errno,"read start");
        iVar1 = errno;
      }
      else {
        f__init = f__init & 0xfffffffd;
        iVar1 = errno;
      }
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0001468c)
// WARNING: Removing unreachable block (ram,0x00014698)

undefined4 e_rsfe(void)

{
  undefined4 uVar1;
  
  f__init = 1;
  uVar1 = en_fio();
  f__fmtbuf = 0;
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00014734)
// WARNING: Removing unreachable block (ram,0x000147d0)
// WARNING: Removing unreachable block (ram,0x000146b0)
// WARNING: Removing unreachable block (ram,0x0001477c)
// WARNING: Removing unreachable block (ram,0x000146f8)

undefined4 c_sfe(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((uint)param_1[1] < 100) {
    iVar2 = param_1[1];
    if ((&f__units)[iVar2 * 0xc] == 0) {
      iVar1 = fk_open(3,5,iVar2);
      if (iVar1 != 0) {
        if (*param_1 == 0) {
          f__fatal(0x72,&DAT_0001a190);
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0x72;
        }
        return 0x72;
      }
      iVar2 = (&DAT_0002c754)[iVar2 * 0xc];
    }
    else {
      iVar2 = (&DAT_0002c754)[iVar2 * 0xc];
    }
    if (iVar2 == 0) {
      if (*param_1 == 0) {
        f__fatal(0x66,&DAT_0001a190);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x66;
      }
      uVar3 = 0x66;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    if (*param_1 == 0) {
      f__fatal(0x65,"startio");
    }
    else {
      f__init = f__init & 0xfffffffd;
      errno = 0x65;
    }
    uVar3 = 0x65;
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x000147e4)
// WARNING: Removing unreachable block (ram,0x000147f0)

undefined4 e_wsfe(void)

{
  undefined4 uVar1;
  
  f__init = 1;
  uVar1 = en_fio();
  f__fmtbuf = 0;
  return uVar1;
}



void g_char(char *param_1,int param_2,undefined *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_3 + param_2;
  pcVar2 = param_1 + param_2;
  while( true ) {
    bVar1 = pcVar2 <= param_1;
    pcVar2 = pcVar2 + -1;
    if (bVar1) {
      *param_3 = 0;
      return;
    }
    if (*pcVar2 != ' ') break;
    pcVar3 = pcVar3 + -1;
  }
  *pcVar3 = '\0';
  do {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = *pcVar2;
    bVar1 = param_1 < pcVar2;
    pcVar2 = pcVar2 + -1;
  } while (bVar1);
  return;
}



void b_char(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (param_3 <= iVar1) {
      return;
    }
    if (*param_1 == '\0') break;
    *param_2 = *param_1;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  iVar2 = param_3 - iVar1;
  if (param_3 <= iVar1) {
    return;
  }
  do {
    *param_2 = ' ';
    iVar2 = iVar2 + -1;
    param_2 = param_2 + 1;
  } while (iVar2 != 0);
  return;
}



// WARNING: Removing unreachable block (ram,0x000148bc)
// WARNING: Removing unreachable block (ram,0x000148c4)

__mode_t f__inode(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_98;
  __mode_t local_88;
  
  iVar1 = stat(param_1,(stat *)&local_98);
  if (iVar1 < 0) {
    local_88 = 0xffffffff;
  }
  else {
    *param_2 = local_98;
  }
  return local_88;
}



// WARNING: Removing unreachable block (ram,0x000149c0)
// WARNING: Removing unreachable block (ram,0x000148f0)
// WARNING: Removing unreachable block (ram,0x00014978)
// WARNING: Removing unreachable block (ram,0x000148f4)

int s_wsle(int *param_1)

{
  int iVar1;
  
  iVar1 = c_le(param_1);
  if (iVar1 == 0) {
    f__formatted = 1;
    f__putn = x_putc;
    f__lioproc = l_write;
    L_len = 0x50;
    f__donewrec = x_wSL;
    f__reading = 0;
    f__external = 1;
    if (*(int *)(f__curunit + 0x28) == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = f__nowwriting(f__curunit);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else if (*param_1 == 0) {
        f__fatal(errno,"list output start");
        iVar1 = errno;
      }
      else {
        f__init = f__init & 0xfffffffd;
        iVar1 = errno;
      }
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x000149dc)
// WARNING: Removing unreachable block (ram,0x000149ec)

undefined4 e_wsle(void)

{
  undefined4 uVar1;
  
  f__init = 1;
  uVar1 = f__putbuf(10);
  f__recpos = 0;
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00014a1c)
// WARNING: Removing unreachable block (ram,0x00014a30)
// WARNING: Removing unreachable block (ram,0x00014a04)
// WARNING: Removing unreachable block (ram,0x00014a28)
// WARNING: Removing unreachable block (ram,0x00014a14)
// WARNING: Removing unreachable block (ram,0x00014a0c)

void main(undefined4 param_1,undefined4 param_2)

{
  f_setarg(param_1,param_2);
  f_setsig();
  f_init();
  atexit(f_exit);
  MAIN__();
                    // WARNING: Subroutine does not return
  exit(0);
}



void f_setarg(undefined4 param_1,undefined4 param_2)

{
  f__xargc = param_1;
  f__xargv = param_2;
  return;
}



// WARNING: Removing unreachable block (ram,0x00014a54)
// WARNING: Removing unreachable block (ram,0x00014a60)

undefined4 sigfdie(undefined4 param_1)

{
  sig_die("Floating Exception",1);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014a70)
// WARNING: Removing unreachable block (ram,0x00014a7c)

undefined4 sigidie(undefined4 param_1)

{
  sig_die("IOT Trap",1);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014a8c)
// WARNING: Removing unreachable block (ram,0x00014a98)

undefined4 sigqdie(undefined4 param_1)

{
  sig_die("Quit signal",1);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014aa8)
// WARNING: Removing unreachable block (ram,0x00014ab4)

undefined4 sigindie(undefined4 param_1)

{
  sig_die("Interrupt",0);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014ac4)
// WARNING: Removing unreachable block (ram,0x00014ad0)

undefined4 sigtdie(undefined4 param_1)

{
  sig_die("Killed",0);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014ae0)
// WARNING: Removing unreachable block (ram,0x00014aec)

undefined4 sigtrdie(undefined4 param_1)

{
  sig_die("Trace trap",1);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014b18)
// WARNING: Removing unreachable block (ram,0x00014b38)
// WARNING: Removing unreachable block (ram,0x00014b60)
// WARNING: Removing unreachable block (ram,0x00014b88)
// WARNING: Removing unreachable block (ram,0x00014afc)
// WARNING: Removing unreachable block (ram,0x00014b78)
// WARNING: Removing unreachable block (ram,0x00014b50)
// WARNING: Removing unreachable block (ram,0x00014b28)
// WARNING: Removing unreachable block (ram,0x00014b08)

undefined4 f_setsig(undefined4 param_1)

{
  __sighandler_t p_Var1;
  
  signal(8,sigfdie);
  signal(6,sigidie);
  signal(5,sigtrdie);
  p_Var1 = signal(3,sigqdie);
  if (p_Var1 == (__sighandler_t)0x1) {
    signal(3,(__sighandler_t)0x1);
  }
  p_Var1 = signal(2,sigindie);
  if (p_Var1 == (__sighandler_t)0x1) {
    signal(2,(__sighandler_t)0x1);
  }
  signal(0xf,sigtdie);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014c88)
// WARNING: Removing unreachable block (ram,0x00014c40)
// WARNING: Removing unreachable block (ram,0x00014c60)
// WARNING: Removing unreachable block (ram,0x00014b98)
// WARNING: Removing unreachable block (ram,0x00014c58)
// WARNING: Removing unreachable block (ram,0x00014c90)
// WARNING: Removing unreachable block (ram,0x00014c70)
// WARNING: Removing unreachable block (ram,0x00014bb4)

undefined4 f_clos(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FILE **ppFVar5;
  
  if ((f__init & 2) != 0) {
    f__fatal(0x83,"I/O recursion");
  }
  iVar4 = *(int *)(param_1 + 4);
  if (99 < iVar4) {
    return 0;
  }
  iVar2 = iVar4 * 0x30;
  ppFVar5 = (FILE **)(&f__units + iVar4 * 0xc);
  if ((&f__units)[iVar4 * 0xc] == 0) goto LAB_00014c9c;
  if (*(int *)(&DAT_0002c768 + iVar2) == 1) {
LAB_00014c70:
    fclose(*ppFVar5);
    if (*(char **)(&DAT_0002c740 + iVar2) == (char *)0x0) {
      *ppFVar5 = (FILE *)0x0;
    }
    else {
      unlink(*(char **)(&DAT_0002c740 + iVar2));
      free(*(void **)(&DAT_0002c740 + iVar2));
      *ppFVar5 = (FILE *)0x0;
    }
  }
  else {
    if (*(char **)(param_1 + 8) == (char *)0x0) {
      iVar4 = (&DAT_0002c764)[iVar4 * 0xc];
    }
    else {
      iVar3 = (int)**(char **)(param_1 + 8);
      if (iVar3 == 0x4b) {
        iVar4 = (&DAT_0002c764)[iVar4 * 0xc];
      }
      else {
        iVar1 = iVar3 + -100;
        if (iVar3 < 0x4c) {
          iVar1 = iVar3 + -0x44;
        }
        if (iVar1 == 0) goto LAB_00014c70;
        iVar4 = (&DAT_0002c764)[iVar4 * 0xc];
      }
    }
    if (iVar4 == 1) {
      t_runc(param_1);
      iVar4 = *(int *)(&DAT_0002c740 + iVar2);
    }
    else {
      iVar4 = *(int *)(&DAT_0002c740 + iVar2);
    }
    if (iVar4 == 0) {
      *ppFVar5 = (FILE *)0x0;
    }
    else {
      fclose(*ppFVar5);
      free(*(void **)(&DAT_0002c740 + iVar2));
      *ppFVar5 = (FILE *)0x0;
    }
  }
LAB_00014c9c:
  *(undefined4 *)(&DAT_0002c740 + iVar2) = 0;
  *(undefined4 *)(&DAT_0002c760 + iVar2) = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00014cac)
// WARNING: Removing unreachable block (ram,0x00014cf4)

undefined4 f_exit(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (((f__init & 1) != 0) && (f__init = f__init & 0xfffffffd, xx_6 == 0)) {
    xx_6 = 1;
    DAT_0002afb0 = 0;
    DAT_0002afac = 0;
    iVar2 = DAT_0002afac;
    do {
      DAT_0002afac = iVar2;
      iVar1 = DAT_0002afac;
      f_clos(&xx_6);
      iVar2 = iVar1 + 1;
    } while (iVar1 + 1 < 100);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014d14)
// WARNING: Removing unreachable block (ram,0x00014d44)

undefined4 G77_flush_0(void)

{
  int iVar1;
  FILE **ppFVar2;
  bool bVar3;
  
  ppFVar2 = (FILE **)&f__units;
  iVar1 = 99;
  do {
    if (*ppFVar2 == (FILE *)0x0) {
      bVar3 = iVar1 + -1 < 0;
    }
    else if (ppFVar2[10] == (FILE *)0x0) {
      bVar3 = iVar1 + -1 < 0;
    }
    else {
      fflush(*ppFVar2);
      bVar3 = iVar1 + -1 < 0;
    }
    iVar1 = iVar1 + -1;
    ppFVar2 = ppFVar2 + 0xc;
  } while (!bVar3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00014e08)
// WARNING: Removing unreachable block (ram,0x00014e2c)
// WARNING: Removing unreachable block (ram,0x00014dc4)
// WARNING: Removing unreachable block (ram,0x00014d60)
// WARNING: Removing unreachable block (ram,0x00014e48)
// WARNING: Removing unreachable block (ram,0x00014e18)
// WARNING: Removing unreachable block (ram,0x00014d7c)

undefined4 f_end(int *param_1)

{
  uint uVar1;
  FILE *__stream;
  undefined4 *puVar2;
  undefined4 uVar3;
  char acStack_20 [32];
  
  if ((f__init & 2) != 0) {
    f__fatal(0x83,"I/O recursion");
  }
  uVar1 = param_1[1];
  if (uVar1 < 100) {
    puVar2 = &f__units + uVar1 * 0xc;
    if ((&f__units)[uVar1 * 0xc] == 0) {
      sprintf(acStack_20,"fort.%ld",uVar1);
      __stream = fopen(acStack_20,f__w_mode);
      param_1 = (int *)0x0;
      if (__stream == (FILE *)0x0) {
        return 0;
      }
      fclose(__stream);
    }
    puVar2[9] = 1;
    if (puVar2[5] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = t_runc(param_1);
    }
  }
  else {
    if (*param_1 == 0) {
      f__fatal(0x65,"endfile");
    }
    else {
      f__init = f__init & 0xfffffffd;
      errno = 0x65;
    }
    uVar3 = 0x65;
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00014ea8)
// WARNING: Removing unreachable block (ram,0x00014e68)
// WARNING: Removing unreachable block (ram,0x00014e8c)

int copy(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src)

{
  size_t sVar1;
  FILE *in_o2;
  EVP_PKEY_CTX *__size;
  undefined auStack_410 [1040];
  
  do {
    __size = src;
    if (0x400 < (int)src) {
      __size = (EVP_PKEY_CTX *)0x400;
    }
    sVar1 = fread(auStack_410,(size_t)__size,1,(FILE *)dst);
    if (sVar1 == 0) {
      return 0;
    }
    sVar1 = fwrite(auStack_410,(size_t)__size,1,in_o2);
    src = src + -(int)__size;
    if (sVar1 == 0) {
      return 1;
    }
  } while (0 < (int)src);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00014f2c)
// WARNING: Removing unreachable block (ram,0x00014f88)
// WARNING: Removing unreachable block (ram,0x00014fcc)
// WARNING: Removing unreachable block (ram,0x00015010)
// WARNING: Removing unreachable block (ram,0x00015034)
// WARNING: Removing unreachable block (ram,0x000150a0)
// WARNING: Removing unreachable block (ram,0x00014edc)
// WARNING: Removing unreachable block (ram,0x00015050)
// WARNING: Removing unreachable block (ram,0x00015024)
// WARNING: Removing unreachable block (ram,0x00014fec)
// WARNING: Removing unreachable block (ram,0x00014fb8)
// WARNING: Removing unreachable block (ram,0x00014f60)
// WARNING: Removing unreachable block (ram,0x00014f24)
// WARNING: Removing unreachable block (ram,0x00014f10)

undefined4 t_runc(int *param_1)

{
  EVP_PKEY_CTX *src;
  long lVar1;
  FILE *__stream;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = param_1[1];
  iVar5 = iVar3 * 0x30;
  bVar6 = false;
  if (*(int *)(&DAT_0002c74c + iVar5) == 0) {
    pFVar4 = (FILE *)(&f__units)[iVar3 * 0xc];
    src = (EVP_PKEY_CTX *)ftell(pFVar4);
    fseek(pFVar4,0,2);
    lVar1 = ftell(pFVar4);
    if (lVar1 <= (int)src) {
      return 0;
    }
    if ((&DAT_0002c750)[iVar3 * 0xc] == 0) {
      return 0;
    }
    if (*(int *)(&DAT_0002c740 + iVar5) == 0) {
      return 0;
    }
    fclose((FILE *)(&f__units)[iVar3 * 0xc]);
    if (src == (EVP_PKEY_CTX *)0x0) {
      pFVar4 = fopen(*(char **)(&DAT_0002c740 + iVar5),(&f__w_mode)[(&DAT_0002c754)[iVar3 * 0xc]]);
      bVar6 = pFVar4 == (FILE *)0x0;
      if ((&DAT_0002c764)[iVar3 * 0xc] != 0) {
        (&DAT_0002c764)[iVar3 * 0xc] = 1;
      }
    }
    else {
      pFVar4 = fopen(*(char **)(&DAT_0002c740 + iVar5),f__r_mode);
      if (pFVar4 == (FILE *)0x0) {
        bVar6 = true;
      }
      else {
        __stream = tmpfile();
        if (__stream == (FILE *)0x0) {
          bVar6 = true;
        }
        else {
          iVar2 = copy((EVP_PKEY_CTX *)pFVar4,src);
          if (iVar2 == 0) {
            pFVar4 = freopen(*(char **)(&DAT_0002c740 + iVar5),f__w_mode,pFVar4);
            if (pFVar4 == (FILE *)0x0) {
              bVar6 = true;
            }
            else {
              rewind(__stream);
              iVar2 = copy((EVP_PKEY_CTX *)__stream,src);
              if (iVar2 == 0) {
                *(undefined4 *)(&DAT_0002c758 + iVar5) = 2;
              }
              else {
                bVar6 = true;
              }
            }
          }
          else {
            bVar6 = true;
          }
          fclose(__stream);
        }
      }
    }
    f__cf = pFVar4;
    (&f__units)[iVar3 * 0xc] = pFVar4;
    if (bVar6) {
      if (*param_1 == 0) {
        f__fatal(0x6f,"endfile");
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x6f;
      }
      return 0x6f;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000150c8)
// WARNING: Removing unreachable block (ram,0x00015144)
// WARNING: Removing unreachable block (ram,0x000150bc)
// WARNING: Removing unreachable block (ram,0x0001513c)
// WARNING: Removing unreachable block (ram,0x000150c0)

bool f__canseek(FILE *param_1)

{
  int iVar1;
  stat sStack_98;
  
  iVar1 = fileno(param_1);
  iVar1 = fstat(iVar1,&sStack_98);
  if (iVar1 < 0) {
    return false;
  }
  sStack_98.st_nlink = sStack_98.st_nlink & 0xf000;
  if (sStack_98.st_nlink != 0x4000) {
    if (sStack_98.st_nlink < 0x4001) {
      if (sStack_98.st_nlink != 0x2000) {
        return false;
      }
      iVar1 = fileno(param_1);
      iVar1 = isatty(iVar1);
      return iVar1 == 0;
    }
    if (sStack_98.st_nlink == 0x6000) {
      return true;
    }
    if (sStack_98.st_nlink != 0x8000) {
      return false;
    }
  }
  return sStack_98.st_uid != 0;
}



// WARNING: Removing unreachable block (ram,0x000151a8)
// WARNING: Removing unreachable block (ram,0x00015224)
// WARNING: Removing unreachable block (ram,0x000152a4)
// WARNING: Removing unreachable block (ram,0x00015320)
// WARNING: Removing unreachable block (ram,0x000153e4)
// WARNING: Removing unreachable block (ram,0x0001516c)
// WARNING: Removing unreachable block (ram,0x000153c8)
// WARNING: Removing unreachable block (ram,0x000152dc)
// WARNING: Removing unreachable block (ram,0x000152f8)
// WARNING: Removing unreachable block (ram,0x00015180)
// WARNING: Removing unreachable block (ram,0x000151d0)
// WARNING: Removing unreachable block (ram,0x000151fc)

uint f__fatal(uint param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 < 100) {
    perror(param_2);
  }
  else if (param_1 + 1 < 0x86) {
    if (param_1 == 0xffffffff) {
      fprintf((FILE *)(_iob + 0x20),"%s: end of file\n");
    }
    else {
      fprintf((FILE *)(_iob + 0x20),"%s: %s\n",param_2,*(undefined4 *)(F_err + (param_1 - 100) * 4))
      ;
    }
  }
  else {
    fprintf((FILE *)(_iob + 0x20),"%s: illegal error number %d\n");
  }
  if (dead_6 == 0) {
    dead_6 = 1;
    if ((f__init & 1) != 0) {
      if (f__curunit == 0) {
        fprintf((FILE *)(_iob + 0x20),"apparent state: internal I/O\n");
      }
      else {
        param_1 = 0x2c3b8;
        fprintf((FILE *)(_iob + 0x20),"apparent state: unit %d ",
                (f__curunit + -0x2c73c) * -0x55555555 >> 4);
        if (*(int *)(f__curunit + 4) == 0) {
          pcVar1 = "(unnamed)\n";
        }
        else {
          pcVar1 = "named %s\n";
        }
        fprintf((FILE *)(_iob + 0x20),pcVar1,*(undefined4 *)(f__curunit + 4));
      }
      if (f__fmtbuf != 0) {
        fprintf((FILE *)(_iob + 0x20),"last format: %.*s\n",f__fmtlen);
      }
      if (f__reading == 0) {
        pcVar1 = "writing";
      }
      else {
        pcVar1 = "reading";
      }
      if (f__sequential == 0) {
        pcVar2 = "direct";
      }
      else {
        pcVar2 = "sequential";
      }
      if (f__formatted == 0) {
        pcVar3 = "unformatted";
      }
      else {
        pcVar3 = "formatted";
      }
      if (f__external == 0) {
        pcVar4 = "internal";
      }
      else {
        pcVar4 = "external";
      }
      fprintf((FILE *)(_iob + 0x20),"lately %s %s %s %s",pcVar1,pcVar2,pcVar3,pcVar4);
    }
    f__init = f__init & 0xfffffffd;
    sig_die(&DAT_0001a6f8,1);
    return param_1;
  }
  fprintf((FILE *)(_iob + 0x20),"(libf2c f__fatal already called, aborting.)");
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00015434)
// WARNING: Removing unreachable block (ram,0x00015474)
// WARNING: Removing unreachable block (ram,0x000153f4)
// WARNING: Removing unreachable block (ram,0x00015454)
// WARNING: Removing unreachable block (ram,0x00015410)

undefined4 f_init(undefined4 param_1)

{
  if ((f__init & 2) != 0) {
    f__fatal(0x83,"I/O recursion");
  }
  f__units = 0x2c3b8;
  f__init = 1;
  DAT_0002c750 = f__canseek(0x2c3b8);
  DAT_0002c754 = 1;
  DAT_0002c764 = 1;
  DAT_0002c82c = _iob;
  DAT_0002c840 = f__canseek(_iob);
  DAT_0002c844 = 1;
  DAT_0002c854 = 0;
  DAT_0002c85c = 0x2c3a8;
  DAT_0002c870 = f__canseek(0x2c3a8);
  DAT_0002c884 = 1;
  DAT_0002c874 = 1;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000154f0)
// WARNING: Removing unreachable block (ram,0x00015548)
// WARNING: Removing unreachable block (ram,0x00015490)
// WARNING: Removing unreachable block (ram,0x0001551c)
// WARNING: Removing unreachable block (ram,0x000154cc)

undefined4 f__nowreading(FILE **param_1)

{
  long __off;
  FILE *pFVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  
  if (((uint)param_1[7] & 1) == 0) {
    if (param_1[1] == (FILE *)0x0) {
      errno = 0x7e;
      return 1;
    }
    pFVar2 = (FILE *)0x0;
    if (param_1[4] == (FILE *)0x0) {
      pFVar2 = param_1[6];
    }
    pFVar3 = (FILE *)0x3;
    __off = ftell(*param_1);
    pFVar1 = freopen((char *)param_1[1],(&f__w_mode)[(uint)pFVar2 | 2],*param_1);
    if (pFVar1 == (FILE *)0x0) {
      pFVar3 = (FILE *)0x1;
      pFVar2 = freopen((char *)param_1[1],(&f__r_mode)[(int)pFVar2],*param_1);
      if (pFVar2 == (FILE *)0x0) {
        errno = 0x7e;
        return 1;
      }
      pFVar2 = *param_1;
    }
    else {
      pFVar2 = *param_1;
    }
    fseek(pFVar2,__off,0);
    param_1[7] = pFVar3;
    param_1[10] = (FILE *)0x0;
  }
  else {
    param_1[10] = (FILE *)0x0;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000155e8)
// WARNING: Removing unreachable block (ram,0x00015650)
// WARNING: Removing unreachable block (ram,0x00015564)
// WARNING: Removing unreachable block (ram,0x0001560c)
// WARNING: Removing unreachable block (ram,0x000155c4)

undefined4 f__nowwriting(FILE **param_1)

{
  long __off;
  FILE *pFVar1;
  
  if (((uint)param_1[7] & 2) != 0) goto LAB_0001565c;
  if (param_1[1] != (FILE *)0x0) {
    pFVar1 = (FILE *)0x0;
    if (param_1[4] == (FILE *)0x0) {
      pFVar1 = param_1[6];
    }
    if (param_1[10] == (FILE *)0x3) {
      f__cf = freopen((char *)param_1[1],(&f__w_mode)[(int)pFVar1],*param_1);
      *param_1 = f__cf;
      if (f__cf != (FILE *)0x0) {
        param_1[7] = (FILE *)0x2;
        goto LAB_0001565c;
      }
    }
    else {
      __off = ftell(*param_1);
      pFVar1 = freopen((char *)param_1[1],(&f__w_mode)[(uint)pFVar1 | 2],*param_1);
      *param_1 = pFVar1;
      f__cf = pFVar1;
      if (pFVar1 != (FILE *)0x0) {
        param_1[7] = (FILE *)0x3;
        fseek(pFVar1,__off,0);
LAB_0001565c:
        param_1[10] = (FILE *)0x1;
        return 0;
      }
      *param_1 = (FILE *)0x0;
    }
  }
  errno = 0x7f;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0001566c)
// WARNING: Removing unreachable block (ram,0x0001567c)

undefined4 err__fl(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    f__fatal(param_2,param_3);
  }
  if (f__doend != (code *)0x0) {
    (*f__doend)();
  }
  f__init = f__init & 0xfffffffd;
  errno = param_2;
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000156c0)
// WARNING: Removing unreachable block (ram,0x0001573c)

char * ap_end(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_1 + 1;
  cVar1 = *pcVar3;
  cVar2 = *pcVar3;
  do {
    if (cVar1 == '\0') {
      if (*f__elist == 0) {
        f__fatal(100,"bad string");
      }
      else {
        errno = 100;
      }
      return (char *)0x0;
    }
    pcVar4 = pcVar3 + 1;
    if (cVar2 == *param_1) {
      if (*pcVar4 != cVar2) {
        return pcVar4;
      }
      pcVar4 = pcVar3 + 2;
    }
    cVar1 = *pcVar4;
    cVar2 = *pcVar4;
    pcVar3 = pcVar4;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000157a0)
// WARNING: Removing unreachable block (ram,0x00015760)
// WARNING: Removing unreachable block (ram,0x00015790)

int op_gen(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = f__pc * 0x10;
  if (299 < f__pc) {
    fprintf((FILE *)(_iob + 0x20),"format too complicated:\n");
    sig_die(f__fmtbuf,1);
  }
  iVar1 = f__pc;
  *(undefined4 *)(f__syl + iVar2) = param_1;
  f__pc = f__pc + 1;
  *(undefined4 *)(f__syl + iVar2 + 0xc) = param_4;
  *(undefined4 *)(f__syl + iVar2 + 4) = param_2;
  *(undefined4 *)(f__syl + iVar2 + 8) = param_3;
  return iVar1;
}



char * gt_num(char *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_1;
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (cVar1 != 0x20) {
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (iVar3 == 0) {
          if (param_3 == 0) {
            param_1 = (char *)0x0;
          }
          *param_2 = param_3;
        }
        else {
          *param_2 = iVar2;
        }
        return param_1;
      }
      iVar2 = iVar2 * 10 + (int)cVar1 + -0x30;
      iVar3 = iVar3 + 1;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000158b0)
// WARNING: Removing unreachable block (ram,0x00015844)
// WARNING: Removing unreachable block (ram,0x0001589c)

int f_s(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (*param_1 == '(') {
    f__parenlvl = f__parenlvl + 1;
    if (f__parenlvl == 2) {
      f__revloc = param_2;
    }
    iVar2 = op_gen(1,param_2,0,0);
    if (iVar2 < 0) {
      return 0;
    }
    iVar2 = f_list(param_1 + 1);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000159b4)
// WARNING: Removing unreachable block (ram,0x00015b18)
// WARNING: Removing unreachable block (ram,0x00015a90)
// WARNING: Removing unreachable block (ram,0x000158d0)
// WARNING: Removing unreachable block (ram,0x00015a74)
// WARNING: Removing unreachable block (ram,0x00015a3c)
// WARNING: Removing unreachable block (ram,0x00015b34)
// WARNING: Removing unreachable block (ram,0x00015aec)

bool ne_d(byte *param_1,byte **param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14 [5];
  
  bVar2 = false;
  switch((int)((*param_1 - 2) * 0x1000000) >> 0x18) {
  case 0:
  case 0x20:
  case 0x25:
    iVar4 = op_gen(0xb,0,0,0);
    *(byte **)(f__syl + iVar4 * 0x10 + 8) = param_1;
    pbVar3 = (byte *)ap_end(param_1);
    *param_2 = pbVar3;
    return pbVar3 != (byte *)0x0;
  default:
    goto LAB_00015b48;
  case 0x22:
    uVar5 = 0x21;
    iVar4 = 0;
    break;
  case 0x2b:
    bVar2 = true;
  case 0x29:
    param_1 = param_1 + 1;
    goto switchD_00015900_caseD_2e;
  case 0x2d:
    uVar5 = 5;
    iVar4 = 0;
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    goto switchD_00015900_caseD_2e;
  case 0x38:
    uVar5 = 0x10;
    iVar4 = 0;
    break;
  case 0x40:
  case 0x60:
    param_1 = param_1 + 1;
    if ((*param_1 == 0x7a) || (uVar5 = 0x15, *param_1 == 0x5a)) {
      uVar5 = 0x16;
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
    }
    break;
  case 0x4e:
  case 0x6e:
    op_gen(0x14,1,0,0);
    goto LAB_00015b40;
  case 0x51:
  case 0x71:
    bVar1 = param_1[1];
    if ((bVar1 == 0x73) || (bVar1 == 0x53)) {
      uVar5 = 0x13;
      param_1 = param_1 + 1;
    }
    else if ((bVar1 == 0x70) || (uVar5 = 0x11, bVar1 == 0x50)) {
      uVar5 = 0x12;
      param_1 = param_1 + 1;
    }
    iVar4 = 0;
    break;
  case 0x52:
  case 0x72:
    bVar1 = param_1[1];
    if ((bVar1 == 0x6c) || (bVar1 == 0x4c)) {
      uVar5 = 0xd;
      param_1 = param_1 + 1;
    }
    else if ((bVar1 == 0x72) || (uVar5 = 0xf, bVar1 == 0x52)) {
      uVar5 = 0xe;
      param_1 = param_1 + 1;
    }
    iVar4 = gt_num(param_1 + 1,local_14,0);
    if (iVar4 == 0) goto LAB_000159c8;
    param_1 = (byte *)(iVar4 + -1);
    iVar4 = local_14[0];
    break;
  case 0x56:
  case 0x76:
    uVar5 = 4;
    iVar4 = 1;
  }
LAB_00015b14:
  op_gen(uVar5,iVar4,0,0);
LAB_00015b40:
  *param_2 = param_1 + 1;
  return true;
switchD_00015900_caseD_2e:
  param_1 = (byte *)gt_num(param_1,local_14,0);
  if (param_1 == (byte *)0x0) {
LAB_000159c8:
    *param_2 = (byte *)0x0;
    return true;
  }
  switch((int)((*param_1 - 0x48) * 0x1000000) >> 0x18) {
  case 0:
  case 0x20:
    iVar4 = op_gen(0xc,local_14[0],0,0);
    *(byte **)(f__syl + iVar4 * 0x10 + 8) = param_1 + 1;
    param_1 = param_1 + local_14[0];
    goto LAB_00015b40;
  default:
LAB_00015b48:
    return false;
  case 8:
  case 0x28:
    if (bVar2) {
      local_14[0] = -local_14[0];
    }
    uVar5 = 0x14;
    iVar4 = local_14[0];
    break;
  case 0x10:
  case 0x30:
    uVar5 = 4;
    iVar4 = local_14[0];
  }
  goto LAB_00015b14;
}



// WARNING: Removing unreachable block (ram,0x00015f68)
// WARNING: Removing unreachable block (ram,0x00016138)
// WARNING: Removing unreachable block (ram,0x00016008)
// WARNING: Removing unreachable block (ram,0x00015e68)
// WARNING: Removing unreachable block (ram,0x00015f10)
// WARNING: Removing unreachable block (ram,0x00015ef8)
// WARNING: Removing unreachable block (ram,0x000160b0)
// WARNING: Removing unreachable block (ram,0x00016120)
// WARNING: Removing unreachable block (ram,0x00015df0)
// WARNING: Removing unreachable block (ram,0x00015fd4)
// WARNING: Removing unreachable block (ram,0x00016074)
// WARNING: Removing unreachable block (ram,0x00015f38)
// WARNING: Removing unreachable block (ram,0x00015eb0)
// WARNING: Removing unreachable block (ram,0x00016040)
// WARNING: Removing unreachable block (ram,0x00016154)
// WARNING: Removing unreachable block (ram,0x000160ec)
// WARNING: Removing unreachable block (ram,0x00015e18)
// WARNING: Removing unreachable block (ram,0x00015e00)

bool e_d(byte *param_1,byte **param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14 [5];
  
  pbVar3 = (byte *)gt_num(param_1,local_14,1);
  op_gen(6,local_14[0],0,0);
  bVar7 = false;
  bVar2 = false;
  pbVar6 = pbVar3 + 1;
  switch((int)((*pbVar3 - 0x41) * 0x1000000) >> 0x18) {
  case 0:
  case 0x20:
    bVar7 = true;
    if (*pbVar6 == 0x20) {
      for (pbVar6 = pbVar3 + 2; *pbVar6 == 0x20; pbVar6 = pbVar6 + 1) {
      }
    }
    if ((byte)(*pbVar6 - 0x30) < 10) {
      pbVar6 = (byte *)gt_num(pbVar6,&local_18,1);
      if (local_18 == 0) goto switchD_00015e54_caseD_1;
      uVar4 = 0x1f;
    }
    else {
      uVar4 = 0x1e;
      local_18 = 0;
    }
    goto LAB_0001611c;
  default:
    goto switchD_00015e54_caseD_1;
  case 3:
  case 0x23:
    pbVar6 = (byte *)gt_num(pbVar6,&local_18,0);
    if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
    bVar7 = false;
    if (local_18 == 0) goto LAB_00016160;
    if (*pbVar6 == 0x2e) {
      pbVar6 = (byte *)gt_num(pbVar6 + 1,&local_1c,0);
      if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
    }
    else {
      local_1c = 0;
    }
    uVar4 = 0x1a;
    uVar5 = local_1c;
    break;
  case 4:
  case 0x24:
    bVar2 = true;
  case 6:
  case 0x26:
    pbVar6 = (byte *)gt_num(pbVar6,&local_18,0);
    if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
    bVar7 = false;
    if (local_18 != 0) {
      if (*pbVar6 == 0x2e) {
        pbVar6 = (byte *)gt_num(pbVar6 + 1,&local_1c,0);
        if (pbVar6 == (byte *)0x0) {
          *param_2 = (byte *)0x0;
          return true;
        }
        bVar1 = *pbVar6;
      }
      else {
        local_1c = 0;
        bVar1 = *pbVar6;
      }
      if ((bVar1 == 0x45) || (bVar1 == 0x65)) {
        pbVar6 = (byte *)gt_num(pbVar6 + 1,&local_20,0);
        if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
        uVar4 = 0x1c;
        if (bVar2) {
          uVar4 = 0x19;
        }
        op_gen(uVar4,local_18,local_1c,local_20);
        bVar7 = false;
      }
      else {
        uVar4 = 0x1b;
        if (bVar2) {
          uVar4 = 0x18;
        }
        op_gen(uVar4,local_18,local_1c,0);
        bVar7 = false;
      }
    }
    goto LAB_00016160;
  case 5:
  case 0x25:
    pbVar6 = (byte *)gt_num(pbVar6,&local_18,0);
    if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
    bVar7 = true;
    if (local_18 == 0) goto switchD_00015e54_caseD_1;
    if (*pbVar6 == 0x2e) {
      pbVar6 = (byte *)gt_num(pbVar6 + 1,&local_1c,0);
      if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
    }
    else {
      local_1c = 0;
    }
    uVar4 = 0x17;
    uVar5 = local_1c;
    break;
  case 8:
  case 0x28:
    uVar4 = 7;
    uVar5 = 10;
    goto LAB_000160e4;
  case 0xb:
  case 0x2b:
    pbVar6 = (byte *)gt_num(pbVar6,&local_18,0);
    bVar7 = true;
    if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
    uVar4 = 0x1d;
    if (local_18 == 0) goto switchD_00015e54_caseD_1;
    uVar5 = 0;
    break;
  case 0xe:
  case 0x2e:
    uVar4 = 0x20;
    uVar5 = 0x22;
    goto LAB_000160e4;
  case 0x19:
  case 0x39:
    uVar4 = 0x23;
    uVar5 = 0x24;
LAB_000160e4:
    pbVar6 = (byte *)gt_num(pbVar6,&local_18,0);
    if (pbVar6 == (byte *)0x0) {
LAB_00015e7c:
      *param_2 = (byte *)0x0;
      return true;
    }
    bVar7 = true;
    if (local_18 != 0) {
      if (*pbVar6 != 0x2e) {
LAB_0001611c:
        uVar5 = 0;
        break;
      }
      pbVar6 = (byte *)gt_num(pbVar6 + 1,&local_1c,0);
      if (pbVar6 == (byte *)0x0) goto LAB_00015e7c;
      op_gen(uVar5,local_18,local_1c,0);
    }
switchD_00015e54_caseD_1:
    bVar7 = !bVar7;
    goto LAB_00016160;
  }
  op_gen(uVar4,local_18,uVar5,0);
  bVar7 = false;
LAB_00016160:
  if (bVar7) {
    f__pc = f__pc + -1;
    *param_2 = param_1;
  }
  else {
    *param_2 = pbVar6;
  }
  return !bVar7;
}



// WARNING: Removing unreachable block (ram,0x000162c8)
// WARNING: Removing unreachable block (ram,0x000162f4)
// WARNING: Removing unreachable block (ram,0x00016278)
// WARNING: Removing unreachable block (ram,0x000162e0)
// WARNING: Removing unreachable block (ram,0x000162a8)
// WARNING: Removing unreachable block (ram,0x00016290)

char * i_tem(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_18;
  char *local_14 [5];
  
  pcVar3 = param_1;
  if (((*param_1 != ')') && (iVar1 = ne_d(param_1,local_14), pcVar3 = local_14[0], iVar1 == 0)) &&
     (iVar1 = e_d(param_1,local_14), pcVar3 = local_14[0], iVar1 == 0)) {
    uVar2 = gt_num(param_1,&local_18,1);
    iVar1 = op_gen(6,local_18,0,0);
    if (iVar1 < 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)f_s(uVar2);
    }
  }
  return pcVar3;
}



// WARNING: Removing unreachable block (ram,0x000163c0)
// WARNING: Removing unreachable block (ram,0x00016308)
// WARNING: Removing unreachable block (ram,0x00016340)

char * f_list(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = *param_1;
  cVar2 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    while (cVar2 == ' ') {
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    }
    param_1 = (char *)i_tem(param_1);
    if (param_1 == (char *)0x0) break;
    cVar1 = *param_1;
    while (cVar1 == ' ') {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    if (*param_1 == ',') {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    else {
      if (*param_1 == ')') {
        f__parenlvl = f__parenlvl + -1;
        if (f__parenlvl == 0) {
          uVar3 = 2;
          uVar4 = f__revloc;
        }
        else {
          uVar3 = 3;
          uVar4 = 0;
        }
        op_gen(uVar3,uVar4,0,0);
        return param_1 + 1;
      }
      cVar1 = *param_1;
    }
    cVar2 = *param_1;
  }
  return (char *)0x0;
}



// WARNING: Removing unreachable block (ram,0x000163ec)
// WARNING: Removing unreachable block (ram,0x0001640c)

undefined4 pars_f(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  f__pc = 0;
  f__revloc = 0;
  f__parenlvl = 0;
  iVar2 = f_s(param_1,0);
  f__fmtlen = iVar2 - (int)param_1;
  if (iVar2 == 0) {
    iVar2 = 0;
    f__fmtlen = 0;
    while( true ) {
      cVar1 = *param_1;
      if ((((cVar1 == ')') && (iVar2 = iVar2 + -1, iVar2 < 1)) || (cVar1 == '\0')) ||
         (0x4f < f__fmtlen)) break;
      if (cVar1 == '(') {
        iVar2 = iVar2 + 1;
      }
      f__fmtlen = f__fmtlen + 1;
      param_1 = param_1 + 1;
    }
    uVar3 = 0xffffffff;
    if (*param_1 == ')') {
      f__fmtlen = f__fmtlen + 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 type_f(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    param_1 = 1;
    break;
  case 2:
    param_1 = 2;
    break;
  case 3:
    param_1 = 3;
    break;
  case 4:
  case 5:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    param_1 = 9;
    break;
  case 6:
    param_1 = 6;
    break;
  case 7:
  case 10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
    param_1 = 8;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00016738)
// WARNING: Removing unreachable block (ram,0x0001666c)
// WARNING: Removing unreachable block (ram,0x000165a8)
// WARNING: Removing unreachable block (ram,0x00016628)
// WARNING: Removing unreachable block (ram,0x0001678c)
// WARNING: Removing unreachable block (ram,0x000165dc)

int do_fio(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*param_1 < 1) {
    return 0;
  }
LAB_000165c4:
  do {
    iVar4 = f__pc * 0x10;
    puVar5 = (undefined4 *)(f__syl + iVar4);
    uVar2 = type_f(*(undefined4 *)(f__syl + iVar4));
    pcVar1 = f__doed;
    iVar3 = f__cp;
    switch(uVar2) {
    case 1:
      f__rp = f__rp + 1;
      (&f__ret)[f__rp] = *(undefined4 *)(f__syl + iVar4 + 4);
      f__pc = f__pc + 1;
      goto LAB_000165c4;
    case 2:
      f__pc = *(int *)(f__syl + iVar4 + 4);
      f__cp = 0;
      f__rp = 0;
      if (param_2 == 0) {
LAB_000168f0:
        iVar6 = (*f__doend)();
        return iVar6;
      }
      if (f__workdone == 0) {
        f__cp = 0;
        f__rp = 0;
        return 0;
      }
      iVar3 = (*f__dorevert)();
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_000165c4;
    case 3:
      iVar4 = (&f__cnt)[f__cp];
      (&f__cnt)[f__cp] = iVar4 + -1;
      if (iVar4 + -1 < 1) {
        f__cp = iVar3 + -1;
        f__rp = f__rp + -1;
        f__pc = f__pc + 1;
      }
      else {
        f__pc = (&f__ret)[f__rp] + 1;
        f__rp = f__rp + -1;
      }
      goto LAB_000165c4;
    default:
      fprintf((FILE *)(_iob + 0x20),"unknown code in do_fio: %d\n%.*s\n",*puVar5,f__fmtlen,f__fmtbuf
             );
      if (*f__elist == 0) {
        f__fatal(100,"do_fio");
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 100;
      }
      return 100;
    case 6:
      f__cp = f__cp + 1;
      (&f__cnt)[f__cp] = *(undefined4 *)(f__syl + iVar4 + 4);
      f__pc = f__pc + 1;
      goto LAB_000165c4;
    case 8:
      if ((int)(&f__cnt)[f__cp] < 1) {
        f__cp = f__cp + -1;
        f__pc = f__pc + 1;
        goto LAB_000165c4;
      }
      if (param_2 == 0) goto LAB_000168f0;
      (&f__cnt)[f__cp] = (&f__cnt)[f__cp] + -1;
      f__workdone = 1;
      iVar3 = (*pcVar1)(puVar5,param_2,param_3);
      if (0 < iVar3) {
        iVar6 = err__fl(*f__elist,errno,&DAT_0001a770);
        return iVar6;
      }
      if (iVar3 < 0) {
        if (f__elist[2] == 0) {
          f__fatal(0xffffffff,&DAT_0001a770);
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0xffffffff;
        }
        return -1;
      }
      iVar3 = *param_1;
      break;
    case 9:
      iVar3 = (*f__doned)(puVar5);
      if (iVar3 != 0) goto LAB_00016908;
      f__pc = f__pc + 1;
      iVar3 = *param_1;
      break;
    case 0x10:
      if (param_2 == 0) goto LAB_000168f0;
LAB_00016908:
      f__pc = f__pc + 1;
      goto LAB_000165c4;
    case 0x11:
    case 0x13:
      f__pc = f__pc + 1;
      f__cplus = 0;
      goto LAB_000165c4;
    case 0x12:
      f__pc = f__pc + 1;
      f__cplus = 1;
      goto LAB_000165c4;
    case 0x14:
      f__scale = *(undefined4 *)(f__syl + iVar4 + 4);
      f__pc = f__pc + 1;
      goto LAB_000165c4;
    case 0x15:
      f__pc = f__pc + 1;
      f__cblank = 0;
      goto LAB_000165c4;
    case 0x16:
      f__pc = f__pc + 1;
      f__cblank = 1;
      goto LAB_000165c4;
    case 0x21:
      f__pc = f__pc + 1;
      f__nonl = 1;
      goto LAB_000165c4;
    }
    iVar6 = iVar6 + 1;
    param_2 = param_2 + param_3;
    if (iVar3 <= iVar6) {
      return 0;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00016a74)
// WARNING: Removing unreachable block (ram,0x00016a88)

undefined4 en_fio(void)

{
  undefined4 uVar1;
  undefined4 local_14 [5];
  
  local_14[0] = 1;
  uVar1 = do_fio(local_14,0,0);
  return uVar1;
}



void fmt_bg(void)

{
  f__cursor = 0;
  f__pc = 0;
  f__rp = 0;
  f__cp = 0;
  f__workdone = 0;
  f__ret = 0;
  f__cnt = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x00016ad4)

undefined4 donewrec(undefined4 param_1)

{
  if (f__recpos != 0) {
    (*f__donewrec)();
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00016b44)
// WARNING: Removing unreachable block (ram,0x00016b00)
// WARNING: Removing unreachable block (ram,0x00016b14)

char * lwrt_I(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int local_18;
  int local_14 [5];
  
  pcVar1 = (char *)f__icvt(param_1,param_2,local_14,&local_18,10);
  if (L_len <= f__recpos + local_14[0]) {
    donewrec();
  }
  (*f__putn)(0x20);
  if (local_18 == 0) {
    cVar2 = *pcVar1;
  }
  else {
    (*f__putn)(0x2d);
    cVar2 = *pcVar1;
  }
  while (cVar2 != '\0') {
    (*f__putn)((int)*pcVar1);
    pcVar1 = pcVar1 + 1;
    cVar2 = *pcVar1;
  }
  return pcVar1;
}



// WARNING: Removing unreachable block (ram,0x00016be4)
// WARNING: Removing unreachable block (ram,0x00016bb0)
// WARNING: Removing unreachable block (ram,0x00016bd4)

undefined4 lwrt_L(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_res44 [6];
  
  local_res44[0] = param_1;
  if (L_len <= f__recpos + 2) {
    donewrec();
  }
  wrt_L(local_res44,2,param_2);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00016bf4)
// WARNING: Removing unreachable block (ram,0x00016ca0)

char * lwrt_A(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  pcVar5 = param_1 + param_2;
  if (f__Aquote != 0) {
    iVar6 = 3;
    if ((1 < param_2) && (iVar2 = param_2, pcVar5[-1] == ' ')) {
      do {
        param_2 = iVar2 + -1;
        if (param_2 < 2) break;
        iVar3 = iVar2 + -2;
        iVar2 = param_2;
      } while (param_1[iVar3] == ' ');
      pcVar5 = param_1 + param_2;
    }
    if (param_1 < pcVar5) {
      cVar1 = *param_1;
      pcVar4 = param_1;
      while( true ) {
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\'') {
          iVar6 = iVar6 + 1;
        }
        if (pcVar5 <= pcVar4) break;
        cVar1 = *pcVar4;
      }
    }
  }
  if (L_len <= f__recpos + param_2 + iVar6) {
    donewrec();
  }
  if ((iVar6 != 0) || (f__recpos == 0)) {
    (*f__putn)(0x20);
  }
  if (iVar6 == 0) {
    if (param_1 < pcVar5) {
      cVar1 = *param_1;
      while( true ) {
        param_1 = param_1 + 1;
        (*f__putn)((int)cVar1);
        if (pcVar5 <= param_1) break;
        cVar1 = *param_1;
      }
    }
  }
  else {
    iVar6 = 0x27;
    for (; (*f__putn)(iVar6), param_1 < pcVar5; param_1 = param_1 + 1) {
      iVar6 = (int)*param_1;
      if (iVar6 == 0x27) {
        (*f__putn)(0x27);
        iVar6 = (int)*param_1;
      }
    }
    (*f__putn)(0x27);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00016d64)
// WARNING: Removing unreachable block (ram,0x00016df0)

int l_g(undefined *param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  undefined uVar2;
  char cVar3;
  char *pcVar4;
  bool bVar5;
  double local_18;
  
  local_18 = (double)CONCAT44(param_2,param_3);
  uVar2 = 0x20;
  cVar3 = (local_18 < 0.0) + (0.0 < local_18) * '\x02';
  *param_1 = 0x20;
  if ((cVar3 != '\0' && cVar3 != '\x02') && cVar3 != '\x03') {
    param_2 = -param_2;
    uVar2 = 0x2d;
  }
  param_1[1] = uVar2;
  cVar3 = ((double)CONCAT44(param_2,param_3) < 0.0) +
          (0.0 < (double)CONCAT44(param_2,param_3)) * '\x02';
  pcVar4 = param_1 + 2;
  if ((cVar3 != '\x01' && cVar3 != '\x02') && cVar3 != '\x03') {
    *pcVar4 = '0';
    pcVar4 = param_1 + 3;
    *pcVar4 = '.';
LAB_00016e8c:
    pcVar4[1] = '\0';
    return (int)(pcVar4 + 1) - (int)param_1;
  }
  sprintf(pcVar4,"%.9G",param_2,param_3);
  cVar3 = *pcVar4;
  if (cVar3 == 'N') {
    pcVar4 = param_1 + 3;
  }
  else if (cVar3 < 'O') {
    if (cVar3 != 'I') {
      while( true ) {
        while( true ) {
          if (cVar3 == 'E') {
            *pcVar4 = '.';
            cVar3 = 'E';
            do {
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar4;
              bVar5 = cVar3 != '\0';
              *pcVar4 = cVar3;
              cVar3 = cVar1;
            } while (bVar5);
            return (int)pcVar4 - (int)param_1;
          }
          if (cVar3 < 'F') break;
          pcVar4 = pcVar4 + 1;
LAB_00016e54:
          cVar3 = *pcVar4;
        }
        if (cVar3 == '\0') break;
        pcVar4 = pcVar4 + 1;
        if (cVar3 == '.') {
          for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
          }
          return (int)pcVar4 - (int)param_1;
        }
        cVar3 = *pcVar4;
      }
      *pcVar4 = '.';
      goto LAB_00016e8c;
    }
    pcVar4 = param_1 + 3;
  }
  else if (cVar3 == 'i') {
    pcVar4 = param_1 + 3;
  }
  else {
    if (cVar3 != 'n') goto LAB_00016e54;
    pcVar4 = param_1 + 3;
  }
  for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
  }
  return (int)pcVar4 - (int)param_1;
}



// WARNING: Removing unreachable block (ram,0x00016ee8)

char * l_put(char *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = f__putn;
  cVar1 = *param_1;
  while( true ) {
    param_1 = param_1 + 1;
    if (cVar1 == 0) break;
    (*pcVar2)((int)cVar1);
    cVar1 = *param_1;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00016f5c)
// WARNING: Removing unreachable block (ram,0x00016f1c)
// WARNING: Removing unreachable block (ram,0x00016f54)
// WARNING: Removing unreachable block (ram,0x00016f2c)

undefined4 lwrt_F(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_28 [40];
  
  iVar1 = l_g(auStack_28,param_1,param_2);
  if (L_len <= f__recpos + iVar1) {
    donewrec();
  }
  l_put(auStack_28);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00017010)
// WARNING: Removing unreachable block (ram,0x00017074)
// WARNING: Removing unreachable block (ram,0x00016f6c)
// WARNING: Removing unreachable block (ram,0x00017030)
// WARNING: Removing unreachable block (ram,0x00016fc0)
// WARNING: Removing unreachable block (ram,0x00016f7c)

int lwrt_C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_40;
  char local_3f [23];
  char local_28;
  char local_27 [39];
  
  pcVar3 = &local_28;
  iVar1 = l_g(pcVar3,param_1,param_2);
  pcVar4 = &local_40;
  while (local_28 == ' ') {
    pcVar3 = pcVar3 + 1;
    iVar1 = iVar1 + -1;
    local_28 = *pcVar3;
  }
  iVar2 = l_g(pcVar4,param_3,param_4);
  iVar2 = iVar2 + 1;
  while (local_40 == ' ') {
    pcVar4 = pcVar4 + 1;
    iVar2 = iVar2 + -1;
    local_40 = *pcVar4;
  }
  if (L_len <= f__recpos + iVar1 + iVar2 + 3) {
    donewrec();
  }
  (*f__putn)(0x20);
  (*f__putn)(0x28);
  l_put(pcVar3);
  (*f__putn)(0x2c);
  if (L_len <= f__recpos + iVar2) {
    (*f__donewrec)();
    (*f__putn)(0x20);
  }
  l_put(pcVar4);
  (*f__putn)(0x29);
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x000171a0)
// WARNING: Removing unreachable block (ram,0x00017178)
// WARNING: Removing unreachable block (ram,0x00017114)
// WARNING: Removing unreachable block (ram,0x00017090)
// WARNING: Removing unreachable block (ram,0x0001713c)
// WARNING: Removing unreachable block (ram,0x0001718c)
// WARNING: Removing unreachable block (ram,0x000170d4)

undefined4 l_write(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 in_o0_1;
  int iVar3;
  undefined8 in_o2_3;
  int iVar4;
  undefined8 *puVar5;
  
  piVar1 = (int *)((ulonglong)in_o0_1 >> 0x20);
  puVar5 = (undefined8 *)in_o0_1;
  iVar4 = 0;
  if (0 < *piVar1) {
    do {
      switch((int)in_o2_3) {
      case 2:
        iVar3 = (uint)*(ushort *)puVar5 << 0x10;
        goto LAB_0001710c;
      case 3:
        iVar3 = *(int *)puVar5;
        goto LAB_0001710c;
      case 4:
        uVar2 = (undefined4)((ulonglong)(double)*(float *)puVar5 >> 0x20);
        goto LAB_0001713c;
      case 5:
        uVar2 = (undefined4)((ulonglong)*puVar5 >> 0x20);
LAB_0001713c:
        lwrt_F(uVar2);
        iVar3 = *piVar1;
        break;
      case 6:
        uVar2 = (undefined4)((ulonglong)(double)*(float *)puVar5 >> 0x20);
        goto LAB_00017178;
      case 7:
        uVar2 = (undefined4)((ulonglong)*puVar5 >> 0x20);
LAB_00017178:
        lwrt_C(uVar2);
        iVar3 = *piVar1;
        break;
      case 8:
      case 0xc:
      case 0xd:
        lwrt_L(*(int *)puVar5);
        iVar3 = *piVar1;
        break;
      case 9:
        lwrt_A(puVar5);
        iVar3 = *piVar1;
        break;
      default:
        f__fatal(0xcc);
      case 0xb:
        iVar3 = (uint)*(byte *)puVar5 << 0x18;
LAB_0001710c:
        iVar3 = iVar3 >> 0x1f;
LAB_00017110:
        lwrt_I(iVar3);
        iVar3 = *piVar1;
        break;
      case 0xe:
        iVar3 = (int)((ulonglong)*puVar5 >> 0x20);
        goto LAB_00017110;
      }
      iVar4 = iVar4 + 1;
      puVar5 = (undefined8 *)((int)puVar5 + (int)((ulonglong)in_o2_3 >> 0x20));
    } while (iVar4 < iVar3);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000171f8)

uint rd_Z(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  byte local_38 [16];
  byte local_28 [16];
  byte abStack_18 [24];
  
  iVar9 = 0;
  pbVar8 = local_38;
  if (hex_3[48] == '\0') {
    iVar10 = 0x30;
    pcVar5 = "0123456789";
    do {
      pcVar5 = pcVar5 + 1;
      hex_3[iVar10] = (char)iVar10 + -0x2f;
      iVar10 = (int)*pcVar5;
    } while (iVar10 != 0);
    iVar10 = 0x41;
    pcVar5 = "ABCDEF";
    do {
      pcVar5 = pcVar5 + 1;
      cVar3 = (char)iVar10 + -0x36;
      hex_3[iVar10 + 0x20] = cVar3;
      hex_3[iVar10] = cVar3;
      iVar10 = (int)*pcVar5;
    } while (iVar10 != 0);
  }
  pbVar6 = pbVar8;
  if (0x10 < param_3) {
    errno = 0x75;
    return 0x75;
  }
LAB_00017330:
  do {
    bVar11 = param_2 == 0;
    do {
      if (bVar11) {
LAB_00017360:
        if (iVar9 != 0) {
          errno = 0x73;
          return 0x73;
        }
        iVar9 = (int)(((int)pbVar6 - (int)pbVar8) + 1U) >> 1;
        if (one_4 == '\0') {
          iVar10 = 1;
        }
        else {
          param_1 = param_1 + (param_3 - 1);
          iVar10 = -1;
        }
        if (iVar9 < (int)param_3) {
          do {
            *param_1 = 0;
            param_3 = param_3 - 1;
            param_1 = param_1 + iVar10;
          } while (iVar9 < (int)param_3);
        }
        if (param_3 != 0) {
          if ((int)param_3 < iVar9) {
            pbVar8 = pbVar6 + param_3 * -2;
          }
          else if (((int)pbVar6 - (int)pbVar8 & 1U) != 0) {
            pbVar8 = local_38 + 1;
            param_3 = param_3 - 1;
            *param_1 = hex_3[local_38[0]] - 1;
            if (param_3 == 0) {
              return 0;
            }
            param_1 = param_1 + iVar10;
          }
          do {
            bVar1 = *pbVar8;
            param_3 = param_3 - 1;
            pbVar6 = pbVar8 + 1;
            pbVar8 = pbVar8 + 2;
            *param_1 = (hex_3[bVar1] + -1) * '\x10' | hex_3[*pbVar6] - 1;
            param_1 = param_1 + iVar10;
          } while (param_3 != 0);
        }
        return 0;
      }
      uVar2 = (*f__getn)();
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if ((uVar2 == 0x2c) || (uVar2 == 10)) goto LAB_00017360;
      param_2 = param_2 + -1;
      if ((int)uVar2 < 0x21) goto LAB_00017330;
      if (hex_3[uVar2 & 0xff] == '\0') {
        iVar9 = iVar9 + 1;
      }
      *pbVar6 = (byte)uVar2;
      pbVar6 = pbVar6 + 1;
      bVar11 = param_2 == 0;
    } while ((pbVar6 != abStack_18) ||
            (bVar11 = param_2 == 0, pbVar4 = pbVar8, pbVar7 = local_28, pbVar6 = local_28,
            local_28 <= pbVar8));
    do {
      *pbVar4 = *pbVar7;
      pbVar4 = pbVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar4 < local_28);
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00017548)
// WARNING: Removing unreachable block (ram,0x00017464)
// WARNING: Removing unreachable block (ram,0x000175a8)
// WARNING: Type propagation algorithm not settling

uint rd_I(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined uVar9;
  undefined uVar10;
  
  iVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  if (0 < param_2) {
    do {
      uVar3 = (*f__getn)();
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (uVar3 != 0x20) {
        bVar2 = false;
        if (uVar3 == 0x2c) {
LAB_000174ec:
          param_2 = 0;
        }
        else {
          if ((int)uVar3 < 0x2d) {
            if (uVar3 == 10) goto LAB_000174ec;
            if (uVar3 == 0x2b) goto joined_r0x00017510;
          }
          else if (uVar3 == 0x2d) {
            bVar2 = true;
            goto joined_r0x00017510;
          }
          uVar4 = uVar3 - 0x30;
          if (uVar4 < 9 || uVar3 == 0x39) {
            uVar8 = (undefined2)(uVar4 >> 0x10);
            uVar9 = (undefined)(uVar4 >> 8);
            uVar10 = (undefined)uVar4;
            iVar7 = (int)uVar4 >> 0x1f;
            goto joined_r0x00017510;
          }
        }
        break;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  goto LAB_000175dc;
joined_r0x00017510:
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    uVar3 = (*f__getn)();
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (uVar3 - 0x30 < 10) {
      uVar4 = CONCAT31(CONCAT21(uVar8,uVar9),uVar10);
      iVar5 = __mul64(iVar7,uVar4,param_4 >> 0x1f,param_4);
      iVar7 = (uVar4 + uVar3) - 0x30;
      uVar8 = (undefined2)((uint)iVar7 >> 0x10);
      uVar9 = (undefined)((uint)iVar7 >> 8);
      uVar10 = (undefined)iVar7;
      iVar7 = iVar5 + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3) + -1 +
              (uint)(0x2f < uVar4 + uVar3);
    }
    else {
      if (uVar3 != 0x20) {
        if ((uVar3 == 10) || (uVar3 == 0x2c)) {
          param_2 = 0;
        }
        goto LAB_000175c8;
      }
      if (f__cblank != 0) {
        uVar6 = CONCAT31(CONCAT21(uVar8,uVar9),uVar10);
        iVar7 = __mul64(iVar7,uVar6,param_4 >> 0x1f,param_4);
        uVar8 = (undefined2)((uint)uVar6 >> 0x10);
        uVar9 = (undefined)((uint)uVar6 >> 8);
        uVar10 = (undefined)uVar6;
      }
    }
    goto joined_r0x00017510;
  }
LAB_000175c8:
  if (bVar2) {
    iVar5 = CONCAT31(CONCAT21(uVar8,uVar9),uVar10);
    iVar1 = -CONCAT31(CONCAT21(uVar8,uVar9),uVar10);
    uVar8 = (undefined2)((uint)iVar1 >> 0x10);
    uVar9 = (undefined)((uint)iVar1 >> 8);
    uVar10 = (undefined)iVar1;
    iVar7 = -(uint)(iVar5 != 0) - iVar7;
  }
LAB_000175dc:
  if (param_3 == 4) {
    *(uint *)param_1 = CONCAT31(CONCAT21(uVar8,uVar9),uVar10);
  }
  else if (param_3 == 1) {
    *(undefined *)param_1 = uVar10;
  }
  else if (param_3 == 8) {
    *param_1 = CONCAT71(CONCAT61(CONCAT42(iVar7,uVar8),uVar9),uVar10);
  }
  else {
    *(ushort *)param_1 = CONCAT11(uVar9,uVar10);
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        errno = 0x73;
        return 0x73;
      }
      uVar3 = (*f__getn)();
    } while (-1 < (int)uVar3);
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x0001765c)

int rd_L(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = param_2 == 0;
  bVar4 = param_2 < 0;
  if (0 < param_2) {
    do {
      iVar2 = (*f__getn)();
      if (iVar2 < 0) {
        return iVar2;
      }
      param_2 = param_2 + -1;
      if (iVar2 != 0x20) {
        bVar1 = false;
        goto LAB_000176a0;
      }
      bVar5 = param_2 == 0;
      bVar4 = param_2 < 0;
    } while (!bVar5);
  }
LAB_00017740:
  if (!bVar5 && !bVar4) {
    do {
      iVar2 = (*f__getn)();
      param_2 = param_2 + -1;
      if (iVar2 < 0) {
        return iVar2;
      }
    } while (0 < param_2);
  }
  errno = 0x74;
  return 0x74;
LAB_000176a0:
  if (iVar2 == 0x54) {
    uVar3 = 1;
    goto LAB_00017780;
  }
  if (0x54 < iVar2) {
    if (iVar2 == 0x66) {
LAB_00017738:
      uVar3 = 0;
LAB_00017780:
      if (param_3 == 1) {
        *(char *)param_1 = (char)uVar3;
      }
      else if (param_3 == 2) {
        *(short *)param_1 = (short)uVar3;
      }
      else {
        *param_1 = uVar3;
      }
      do {
        bVar4 = param_2 < 1;
        param_2 = param_2 + -1;
        if (bVar4) {
          return 0;
        }
        iVar2 = (*f__getn)();
        if (iVar2 < 0) {
          return iVar2;
        }
        if (iVar2 == 0x2c) {
          return 0;
        }
      } while (iVar2 != 10);
      return 0;
    }
    bVar5 = param_2 == 0;
    bVar4 = param_2 < 0;
    if (iVar2 == 0x74) {
      uVar3 = 1;
      goto LAB_00017780;
    }
    goto LAB_00017740;
  }
  if (iVar2 != 0x2e) {
    if (iVar2 < 0x2f) {
      if (iVar2 == 10) {
        errno = 0x74;
        return 0x74;
      }
      bVar5 = param_2 == 0;
      bVar4 = param_2 < 0;
      if (iVar2 == 0x2c) {
        errno = 0x74;
        return 0x74;
      }
    }
    else {
      bVar5 = param_2 == 0;
      bVar4 = param_2 < 0;
      if (iVar2 == 0x46) goto LAB_00017738;
    }
    goto LAB_00017740;
  }
  bVar5 = param_2 == 0;
  bVar4 = param_2 < 0;
  if ((bVar1) || (bVar5)) goto LAB_00017740;
  iVar2 = (*f__getn)();
  param_2 = param_2 + -1;
  bVar1 = true;
  if (iVar2 < 0) {
    return iVar2;
  }
  goto LAB_000176a0;
}


/*
Unable to decompile 'rd_F'
Cause: 
Low-level Error: Overlapping input varnodes
*/


// WARNING: Removing unreachable block (ram,0x00017d80)

int rd_A(undefined *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = (*f__getn)();
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = 0x20;
      if (iVar1 != 10) {
        iVar2 = iVar1;
      }
      iVar3 = iVar3 + 1;
      *param_1 = (char)iVar2;
      param_1 = param_1 + 1;
    } while (iVar3 < param_2);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00017de8)

int rd_AW(undefined *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if (param_2 < param_3) {
    iVar4 = 0;
    puVar3 = param_1;
    if (0 < param_2) {
      do {
        iVar1 = (*f__getn)();
        if (iVar1 < 0) {
          return iVar1;
        }
        param_1 = puVar3 + 1;
        iVar2 = 0x20;
        if (iVar1 != 10) {
          iVar2 = iVar1;
        }
        iVar4 = iVar4 + 1;
        *puVar3 = (char)iVar2;
        puVar3 = param_1;
      } while (iVar4 < param_2);
    }
    param_3 = param_3 - param_2;
    if (0 < param_3) {
      do {
        *param_1 = 0x20;
        param_3 = param_3 + -1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_2 - param_3) {
      do {
        iVar1 = (*f__getn)();
        iVar4 = iVar4 + 1;
        if (iVar1 < 0) {
          return iVar1;
        }
      } while (iVar4 < param_2 - param_3);
    }
    iVar4 = 0;
    if (0 < param_3) {
      do {
        iVar1 = (*f__getn)();
        if (iVar1 < 0) {
          return iVar1;
        }
        iVar2 = 0x20;
        if (iVar1 != 10) {
          iVar2 = iVar1;
        }
        iVar4 = iVar4 + 1;
        *param_1 = (char)iVar2;
        param_1 = param_1 + 1;
      } while (iVar4 < param_3);
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00017f18)

int rd_H(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1) {
    do {
      iVar1 = (*f__getn)();
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = 0x20;
      if (iVar1 != 10) {
        iVar2 = iVar1;
      }
      iVar3 = iVar3 + 1;
      *param_2 = (char)iVar2;
      param_2 = param_2 + 1;
    } while (iVar3 < param_1);
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00017f80)

int rd_POS(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_1;
  param_1 = param_1 + 1;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && ((cVar1 != cVar2 || (param_1[1] == cVar1))))) {
    iVar3 = (*f__getn)();
    if (iVar3 < 0) {
      return iVar3;
    }
    if (iVar3 == 10) {
      iVar3 = 0x20;
    }
    *param_1 = (char)iVar3;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00018244)
// WARNING: Removing unreachable block (ram,0x00018210)
// WARNING: Removing unreachable block (ram,0x000181e4)
// WARNING: Removing unreachable block (ram,0x0001818c)
// WARNING: Removing unreachable block (ram,0x000181b0)
// WARNING: Removing unreachable block (ram,0x00018010)
// WARNING: Removing unreachable block (ram,0x0001819c)
// WARNING: Removing unreachable block (ram,0x0001822c)
// WARNING: Removing unreachable block (ram,0x000181f8)
// WARNING: Removing unreachable block (ram,0x000181cc)
// WARNING: Removing unreachable block (ram,0x0001812c)
// WARNING: Removing unreachable block (ram,0x000180e0)

int rd_ed(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (0 < f__cursor) {
    do {
      iVar1 = (*f__getn)();
      if (iVar1 < 0) {
        return iVar1;
      }
      f__cursor = f__cursor + -1;
    } while (0 < f__cursor);
  }
  if (f__cursor < 0) {
    if (f__recpos + f__cursor < 0) {
      f__cursor = -f__recpos;
    }
    if (f__external == 0) {
      f__icptr = f__icptr + f__cursor;
    }
    else {
      if ((f__curunit == 0) || (*(int *)(f__curunit + 0x14) == 0)) {
        if (*f__elist == 0) {
          f__fatal(0x6a,&DAT_0001a7c0);
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0x6a;
        }
        return 0x6a;
      }
      fseek(f__cf,f__cursor,1);
    }
    f__recpos = f__recpos + f__cursor;
    f__cursor = 0;
    uVar2 = *param_1;
  }
  else {
    uVar2 = *param_1;
  }
  switch(uVar2) {
  default:
    fprintf((FILE *)(_iob + 0x20),"rd_ed, unexpected code: %d\n",uVar2);
    sig_die(f__fmtbuf,1);
  case 7:
  case 10:
    iVar1 = rd_I(param_2,param_1[1],param_3,10);
    bVar3 = iVar1 == 0;
    break;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    iVar1 = rd_F(param_2,param_1[1],param_1[2],param_3);
    bVar3 = iVar1 == 0;
    break;
  case 0x1d:
    iVar1 = rd_L(param_2,param_1[1],param_3);
    bVar3 = iVar1 == 0;
    break;
  case 0x1e:
    iVar1 = rd_A(param_2,param_3);
    bVar3 = iVar1 == 0;
    break;
  case 0x1f:
    iVar1 = rd_AW(param_2,param_1[1],param_3);
    bVar3 = iVar1 == 0;
    break;
  case 0x20:
  case 0x22:
    iVar1 = rd_I(param_2,param_1[1],param_3,8);
    bVar3 = iVar1 == 0;
    break;
  case 0x23:
  case 0x24:
    iVar1 = rd_Z(param_2,param_1[1],param_3);
    bVar3 = iVar1 == 0;
  }
  if (bVar3) {
    iVar1 = 0;
  }
  else if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    iVar1 = errno;
    if (f__cf != (FILE *)0x0) {
      *(byte *)&f__cf->_IO_read_base = *(byte *)&f__cf->_IO_read_base & 0xcf;
      iVar1 = errno;
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x00018350)
// WARNING: Removing unreachable block (ram,0x00018368)
// WARNING: Removing unreachable block (ram,0x00018314)
// WARNING: Removing unreachable block (ram,0x00018360)
// WARNING: Removing unreachable block (ram,0x0001837c)

undefined4 rd_ned(undefined4 *param_1)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 4:
  case 0xe:
    uVar1 = 1;
    f__cursor = f__cursor + param_1[1];
    break;
  case 5:
    uVar1 = (*f__donewrec)();
    break;
  default:
    fprintf((FILE *)(_iob + 0x20),"rd_ned, unexpected code: %d\n",*param_1);
    sig_die(f__fmtbuf,1);
  case 0xb:
    uVar1 = rd_POS(param_1[2]);
    break;
  case 0xc:
    uVar1 = rd_H(param_1[1],param_1[2]);
    break;
  case 0xd:
    f__cursor = f__cursor - param_1[1];
    if (f__cursor + f__recpos < 0 != SBORROW4(f__cursor,-f__recpos)) {
      f__cursor = -f__recpos;
    }
    uVar1 = 1;
    break;
  case 0xf:
    uVar1 = 1;
    f__cursor = (param_1[1] - f__recpos) + -1;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001844c)
// WARNING: Removing unreachable block (ram,0x000186bc)

undefined4 mv_cur(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = f__cursor;
  f__cursor = 0;
  if (f__external == 0) {
    if (-1 < iVar3) {
      if (iVar3 < 1) {
        f__cursor = 0;
        return 0;
      }
      if (f__recpos + iVar3 < *(int *)(f__svic + 0x10)) {
        if (f__hiwater <= f__recpos) {
          if (iVar3 < 1) {
            f__cursor = 0;
            return 0;
          }
          do {
            (*f__putn)(0x20);
            iVar3 = iVar3 + -1;
          } while (0 < iVar3);
          return 0;
        }
        if (f__recpos + iVar3 < f__hiwater) {
          f__icptr = f__icptr + iVar3;
          f__cursor = 0;
          f__recpos = f__recpos + iVar3;
          return 0;
        }
        f__icptr = f__icptr + (f__hiwater - f__recpos);
        iVar3 = iVar3 - (f__hiwater - f__recpos);
        f__recpos = f__hiwater;
        if (iVar3 < 1) {
          f__cursor = 0;
          return 0;
        }
        do {
          (*f__putn)(0x20);
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        return 0;
      }
      if (*f__elist != 0) goto LAB_00018698;
      pcVar2 = "recend";
      goto LAB_000186bc;
    }
    if (f__hiwater < f__recpos) {
      f__hiwater = f__recpos;
    }
    f__recpos = f__recpos + iVar3;
    f__icptr = f__icptr + iVar3;
    if (-1 < f__recpos) {
      f__cursor = 0;
      return 0;
    }
    iVar3 = *f__elist;
  }
  else {
    if (0 < iVar3) {
      if (f__hiwater <= f__recpos) {
        do {
          (*f__putn)(0x20);
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        return 0;
      }
      iVar1 = f__recpos + iVar3;
      if (f__hiwater <= f__recpos + iVar3) {
        iVar3 = iVar3 - (f__hiwater - f__recpos);
        f__recpos = f__hiwater;
        iVar1 = f__recpos;
        if (0 < iVar3) {
          do {
            (*f__putn)(0x20);
            iVar3 = iVar3 + -1;
          } while (0 < iVar3);
          return 0;
        }
      }
      f__recpos = iVar1;
      f__cursor = 0;
      return 0;
    }
    if (-1 < iVar3) {
      f__cursor = 0;
      return 0;
    }
    if (-1 < iVar3 + f__recpos) {
      if (f__hiwater < f__recpos) {
        f__hiwater = f__recpos;
      }
      f__cursor = 0;
      f__recpos = f__recpos + iVar3;
      return 0;
    }
    iVar3 = *f__elist;
  }
  if (iVar3 != 0) {
LAB_00018698:
    errno = 0x6e;
    f__cursor = 0;
    f__init = f__init & 0xfffffffd;
    return 0x6e;
  }
  pcVar2 = "left off";
LAB_000186bc:
  f__fatal(0x6e,pcVar2);
  return 0x6e;
}



// WARNING: Removing unreachable block (ram,0x000186f8)
// WARNING: Removing unreachable block (ram,0x00018748)

undefined4 wrt_Z(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  if (one_6 == '\0') {
    pbVar3 = param_1 + param_4 + -1;
    iVar4 = 1;
  }
  else {
    iVar4 = -1;
    pbVar3 = param_1;
    param_1 = param_1 + param_4 + -1;
  }
  for (; (param_1 != pbVar3 && (*param_1 == 0)); param_1 = param_1 + iVar4) {
  }
  iVar2 = _umul(iVar4,(int)pbVar3 - (int)param_1);
  iVar5 = iVar2 * 2 + 1;
  if (((int)(char)*param_1 & 0xf0U) != 0) {
    iVar5 = iVar2 * 2 + 2;
  }
  if (param_2 < iVar5) {
    if (0 < param_2) {
      do {
        (*f__putn)(0x2a);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else {
    param_3 = param_3 - iVar5;
    if (0 < param_3) {
      iVar5 = iVar5 + param_3;
    }
    param_3 = param_3 + -1;
    for (param_2 = param_2 + -1; iVar5 <= param_2; param_2 = param_2 + -1) {
      (*f__putn)(0x20);
    }
    if (param_3 < 0) {
      bVar1 = *param_1;
    }
    else {
      do {
        (*f__putn)(0x30);
        param_3 = param_3 + -1;
      } while (-1 < param_3);
      bVar1 = *param_1;
    }
    if (((int)(char)bVar1 & 0xf0U) == 0) {
      (*f__putn)((int)hex_7[*param_1 & 0xf]);
      if (param_1 == pbVar3) {
        return 0;
      }
      param_1 = param_1 + iVar4;
    }
    while( true ) {
      (*f__putn)((int)hex_7[*param_1 >> 4]);
      (*f__putn)((int)hex_7[*param_1 & 0xf]);
      if (param_1 == pbVar3) break;
      param_1 = param_1 + iVar4;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018880)
// WARNING: Removing unreachable block (ram,0x000188e4)
// WARNING: Heritage AFTER dead removal. Example location: o1 : 0x000188e4
// WARNING: Restarted to delay deadcode elimination for space: register

undefined4 wrt_I(void)

{
  undefined8 in_o0_1;
  undefined8 in_o2_3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int aiStack_14 [5];
  
  iVar3 = (int)in_o0_1;
  iVar2 = (int)((ulonglong)in_o2_3 >> 0x20);
  uVar1 = (undefined4)in_o2_3;
  if (((iVar2 != 4) && (iVar2 != 1)) && (iVar2 == 8)) {
    in_o2_3 = *(undefined8 *)((ulonglong)in_o0_1 >> 0x20);
  }
  f__icvt((int)((ulonglong)in_o2_3 >> 0x20),iVar3,aiStack_14,(int)in_o2_3,uVar1);
  iVar2 = iVar3 - aiStack_14[0];
  if ((local_18 != 0) || (f__cplus != 0)) {
    iVar2 = iVar2 + -1;
  }
  if (iVar2 < 0) {
    if (0 < iVar3) {
      do {
        (*f__putn)(0x2a);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    if (0 < iVar2) {
      do {
        (*f__putn)(0x20);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_18 == 0) {
      if (f__cplus != 0) {
        (*f__putn)(0x2b);
      }
    }
    else {
      (*f__putn)(0x2d);
    }
    iVar3 = 0;
    if (0 < local_18) {
      do {
        iVar3 = iVar3 + 1;
        (*f__putn)();
      } while (iVar3 < aiStack_14[0]);
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000189f8)
// WARNING: Removing unreachable block (ram,0x00018a5c)

undefined4 wrt_IM(undefined8 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int local_18;
  int local_14 [5];
  
  if (param_4 == 4) {
    iVar2 = *(int *)param_1;
    iVar4 = iVar2;
  }
  else if (param_4 == 1) {
    iVar2 = (uint)*(byte *)param_1 << 0x18;
    iVar4 = iVar2 >> 0x18;
  }
  else {
    if (param_4 == 8) {
      uVar7 = *param_1;
      goto LAB_00018a50;
    }
    iVar2 = (uint)*(ushort *)param_1 << 0x10;
    iVar4 = iVar2 >> 0x10;
  }
  uVar7 = CONCAT44(iVar2 >> 0x1f,iVar4);
LAB_00018a50:
  pcVar3 = (char *)f__icvt((int)((ulonglong)uVar7 >> 0x20),(int)uVar7,local_14,&local_18,param_5);
  if ((local_18 != 0) || (iVar4 = 0, f__cplus != 0)) {
    iVar4 = 1;
  }
  if ((param_2 < local_14[0] + iVar4) || (param_2 < param_3 + iVar4)) {
    if (0 < param_2) {
      puVar6 = &DAT_0002d800;
      pcVar5 = f__putn;
      do {
        (*pcVar5)(0x2a);
        param_2 = param_2 + -1;
        pcVar5 = *(code **)(puVar6 + 0x2a4);
      } while (param_2 != 0);
    }
  }
  else if ((((uint)((ulonglong)uVar7 >> 0x20) | (uint)uVar7) == 0) && (param_3 == 0)) {
    if (0 < param_2) {
      puVar6 = &DAT_0002d800;
      pcVar5 = f__putn;
      do {
        (*pcVar5)(0x20);
        param_2 = param_2 + -1;
        pcVar5 = *(code **)(puVar6 + 0x2a4);
      } while (param_2 != 0);
    }
  }
  else {
    iVar2 = local_14[0];
    if (local_14[0] < param_3) {
      iVar2 = param_3;
    }
    iVar4 = (param_2 - iVar2) - iVar4;
    if (0 < iVar4) {
      puVar6 = &DAT_0002d800;
      pcVar5 = f__putn;
      do {
        (*pcVar5)(0x20);
        iVar4 = iVar4 + -1;
        pcVar5 = *(code **)(puVar6 + 0x2a4);
      } while (iVar4 != 0);
    }
    if (local_18 == 0) {
      if (f__cplus != 0) {
        (*f__putn)(0x2b);
      }
    }
    else {
      (*f__putn)(0x2d);
    }
    iVar4 = 0;
    if (0 < param_3 - local_14[0]) {
      do {
        (*f__putn)(0x30);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3 - local_14[0]);
    }
    uVar8 = 0;
    if (0 < local_14[0]) {
      cVar1 = *pcVar3;
      while( true ) {
        uVar8 = (ulonglong)((int)uVar8 + 1);
        pcVar3 = pcVar3 + 1;
        (*f__putn)((int)cVar1);
        if (local_14[0] <= (int)uVar8) break;
        cVar1 = *pcVar3;
      }
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018c1c)
// WARNING: Removing unreachable block (ram,0x00018c34)

int wrt_AP(char *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if (f__cursor == 0) {
    cVar2 = *param_1;
  }
  else {
    iVar4 = mv_cur();
    if (iVar4 != 0) {
      return iVar4;
    }
    cVar2 = *param_1;
  }
  param_1 = param_1 + 1;
  cVar3 = *param_1;
  if (*param_1 != '\0') {
    do {
      if ((int)cVar3 == (int)cVar2) {
        if ((int)param_1[1] != (int)cVar3) {
          return 1;
        }
        (*f__putn)((int)param_1[1]);
        param_1 = param_1 + 2;
        cVar1 = *param_1;
      }
      else {
        param_1 = param_1 + 1;
        (*f__putn)();
        cVar1 = *param_1;
      }
      cVar3 = *param_1;
    } while (cVar1 != '\0');
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00018cd4)
// WARNING: Removing unreachable block (ram,0x00018cec)

int wrt_H(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + -1;
  if ((f__cursor == 0) || (iVar2 = mv_cur(), iVar2 == 0)) {
    if (param_1 == 0) {
      iVar2 = 1;
    }
    else {
      cVar1 = *param_2;
      while( true ) {
        param_2 = param_2 + 1;
        (*f__putn)((int)cVar1);
        iVar3 = iVar3 + -1;
        if (iVar3 == -1) break;
        cVar1 = *param_2;
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x00018d44)

undefined4 wrt_L(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 4) {
    iVar1 = *param_1;
  }
  else if (param_3 == 1) {
    iVar1 = (int)*(char *)param_1;
  }
  else {
    iVar1 = (int)*(short *)param_1;
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    do {
      (*f__putn)(0x20);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (iVar1 == 0) {
    (*f__putn)(0x46);
  }
  else {
    (*f__putn)(0x54);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018dbc)

undefined4 wrt_A(char *param_1,int param_2)

{
  char cVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      (*f__putn)((int)cVar1);
    } while (0 < param_2);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018df4)

undefined4 wrt_AW(char *param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_3 < param_2) {
    do {
      param_2 = param_2 + -1;
      (*f__putn)(0x20);
    } while (param_3 < param_2);
  }
  for (; 0 < param_2; param_2 = param_2 + -1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    (*f__putn)((int)cVar1);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018f6c)
// WARNING: Removing unreachable block (ram,0x00018e5c)
// WARNING: Removing unreachable block (ram,0x00018f18)

undefined4 wrt_G(double *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  
  uVar3 = f__scale;
  dVar7 = 1.0;
  iVar5 = 0;
  if (param_5 == 4) {
    dVar6 = (double)*(float *)param_1;
  }
  else {
    dVar6 = *param_1;
  }
  if ((char)((dVar6 < 0.0) + (0.0 < dVar6) * '\x02') == '\x01') {
    dVar6 = (double)CONCAT44(-(float)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0));
  }
  cVar1 = (dVar6 < 0.1) + (0.1 < dVar6) * '\x02';
  bVar8 = false;
  iVar4 = -param_3;
  if ((cVar1 == '\0' || cVar1 == '\x02') || cVar1 == '\x03') {
    while (cVar1 = (dVar6 < dVar7) + (dVar7 < dVar6) * '\x02', iVar4 == 0 || iVar4 < 0 != bVar8) {
      if (cVar1 != '\0' && cVar1 != '\x02') goto LAB_00018ef0;
      dVar7 = dVar7 * 10.0;
      iVar5 = iVar5 + 1;
      bVar8 = SBORROW4(iVar5,param_3);
      iVar4 = iVar5 - param_3;
    }
  }
  else {
    cVar1 = (dVar6 < 0.0) + (0.0 < dVar6) * '\x02';
    iVar5 = 1;
    if ((cVar1 != '\x01' && cVar1 != '\x02') && cVar1 != '\x03') {
LAB_00018ef0:
      iVar4 = param_4 + 2;
      f__scale = 0;
      if (param_4 == 0) {
        iVar4 = 4;
      }
      uVar2 = wrt_F(param_1,param_2 - iVar4,param_3 - iVar5,param_5);
      if (iVar4 < 1) {
        f__scale = uVar3;
        return uVar2;
      }
      do {
        (*f__putn)(0x20);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      f__scale = uVar3;
      return uVar2;
    }
  }
  uVar3 = wrt_E(param_1);
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00019114)
// WARNING: Removing unreachable block (ram,0x00019040)
// WARNING: Removing unreachable block (ram,0x00019080)
// WARNING: Removing unreachable block (ram,0x000190cc)
// WARNING: Removing unreachable block (ram,0x000190e4)
// WARNING: Removing unreachable block (ram,0x00018fe8)
// WARNING: Removing unreachable block (ram,0x0001900c)
// WARNING: Removing unreachable block (ram,0x00018f80)
// WARNING: Removing unreachable block (ram,0x00018ff8)
// WARNING: Removing unreachable block (ram,0x00019028)
// WARNING: Removing unreachable block (ram,0x000190b0)
// WARNING: Removing unreachable block (ram,0x00019070)
// WARNING: Removing unreachable block (ram,0x00019094)
// WARNING: Removing unreachable block (ram,0x0001905c)
// WARNING: Removing unreachable block (ram,0x00018f98)

int w_ed(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (f__cursor == 0) {
    uVar1 = *param_1;
  }
  else {
    iVar2 = mv_cur();
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar1 = *param_1;
  }
  switch(uVar1) {
  default:
    fprintf((FILE *)(_iob + 0x20),"w_ed, unexpected code: %d\n",uVar1);
    sig_die(f__fmtbuf,1);
  case 7:
    iVar2 = wrt_I(param_2,param_1[1],param_3,10);
    break;
  case 10:
    iVar2 = wrt_IM(param_2,param_1[1],param_1[2],param_3,10);
    break;
  case 0x17:
    iVar2 = wrt_F(param_2,param_1[1],param_1[2],param_3);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
    iVar2 = wrt_E(param_2,param_1[1],param_1[2],param_1[3],param_3);
    break;
  case 0x1b:
  case 0x1c:
    iVar2 = wrt_G(param_2,param_1[1],param_1[2],param_1[3],param_3);
    break;
  case 0x1d:
    iVar2 = wrt_L(param_2,param_1[1],param_3);
    break;
  case 0x1e:
    iVar2 = wrt_A(param_2,param_3);
    break;
  case 0x1f:
    iVar2 = wrt_AW(param_2,param_1[1],param_3);
    break;
  case 0x20:
    iVar2 = wrt_I(param_2,param_1[1],param_3,8);
    break;
  case 0x22:
    iVar2 = wrt_IM(param_2,param_1[1],param_1[2],param_3,8);
    break;
  case 0x23:
    uVar1 = param_1[1];
    uVar3 = 0;
    goto LAB_00019114;
  case 0x24:
    uVar3 = param_1[2];
    uVar1 = param_1[1];
LAB_00019114:
    iVar2 = wrt_Z(param_2,uVar1,uVar3,param_3);
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x0001927c)
// WARNING: Removing unreachable block (ram,0x000191e8)
// WARNING: Removing unreachable block (ram,0x0001919c)
// WARNING: Removing unreachable block (ram,0x000191d8)
// WARNING: Removing unreachable block (ram,0x00019290)

undefined4 w_ned(undefined4 *param_1)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 4:
  case 0xe:
    uVar1 = 1;
    f__cursor = f__cursor + param_1[1];
    break;
  default:
    fprintf((FILE *)(_iob + 0x20),"w_ned, unexpected code: %d\n",*param_1);
    sig_die(f__fmtbuf,1);
  case 5:
    uVar1 = (*f__donewrec)();
    break;
  case 0xb:
    uVar1 = wrt_AP(param_1[2]);
    break;
  case 0xc:
    uVar1 = wrt_H(param_1[1],param_1[2]);
    break;
  case 0xd:
    f__cursor = f__cursor - param_1[1];
    if (f__cursor + f__recpos < 0 != SBORROW4(f__cursor,-f__recpos)) {
      f__cursor = -f__recpos;
    }
    uVar1 = 1;
    break;
  case 0xf:
    uVar1 = 1;
    f__cursor = (param_1[1] - f__recpos) + -1;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x000192d4)
// WARNING: Removing unreachable block (ram,0x000192d8)

bool x_wSL(void)

{
  int iVar1;
  
  iVar1 = f__putbuf(10);
  f__cursor = 0;
  f__recpos = 0;
  f__hiwater = 0;
  return iVar1 == 0;
}



// WARNING: Removing unreachable block (ram,0x00019330)
// WARNING: Removing unreachable block (ram,0x00019308)
// WARNING: Removing unreachable block (ram,0x00019320)
// WARNING: Removing unreachable block (ram,0x00019340)

undefined4 xw_end(void)

{
  undefined4 uVar1;
  
  if (f__nonl == 0) {
    uVar1 = f__putbuf(10);
  }
  else {
    f__putbuf(0);
    uVar1 = 0;
    fflush(f__cf);
  }
  f__cursor = 0;
  f__recpos = 0;
  f__hiwater = 0;
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001936c)
// WARNING: Removing unreachable block (ram,0x00019384)

undefined4 xw_rev(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (f__workdone != 0) {
    uVar1 = f__putbuf(10);
    f__workdone = 0;
  }
  f__cursor = 0;
  f__recpos = 0;
  f__hiwater = 0;
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00019480)
// WARNING: Removing unreachable block (ram,0x0001955c)
// WARNING: Removing unreachable block (ram,0x000194c4)
// WARNING: Removing unreachable block (ram,0x000193b4)
// WARNING: Removing unreachable block (ram,0x000195a0)
// WARNING: Removing unreachable block (ram,0x00019530)
// WARNING: Removing unreachable block (ram,0x00019400)
// WARNING: Removing unreachable block (ram,0x000193cc)

int s_wsfe(int *param_1)

{
  int iVar1;
  
  if (f__init != 1) {
    f_init();
  }
  f__external = 1;
  f__init = 3;
  f__reading = 0;
  f__sequential = 1;
  f__formatted = 1;
  iVar1 = c_sfe(param_1);
  if (iVar1 == 0) {
    f__cf = (&f__units)[param_1[1] * 0xc];
    f__fmtbuf = param_1[3];
    f__curunit = &f__units + param_1[1] * 0xc;
    f__recpos = 0;
    f__cursor = 0;
    f__hiwater = 0;
    f__nonl = 0;
    f__scale = 0;
    f__elist = param_1;
    iVar1 = pars_f();
    if (iVar1 < 0) {
      if (*param_1 == 0) {
        f__fatal(100,"startio");
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 100;
      }
      iVar1 = 100;
    }
    else {
      f__putn = x_putc;
      f__doed = w_ed;
      f__doned = w_ned;
      f__doend = xw_end;
      f__donewrec = x_wSL;
      f__dorevert = xw_rev;
      fmt_bg();
      f__cblank = f__curunit[8];
      f__cplus = 0;
      if (f__curunit[10] == 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = f__nowwriting(f__curunit);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (*param_1 == 0) {
          f__fatal(errno,"write start");
          iVar1 = errno;
        }
        else {
          f__init = f__init & 0xfffffffd;
          iVar1 = errno;
        }
      }
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x000195f0)
// WARNING: Removing unreachable block (ram,0x00019604)
// WARNING: Removing unreachable block (ram,0x000195bc)
// WARNING: Removing unreachable block (ram,0x000195f8)
// WARNING: Removing unreachable block (ram,0x000195e8)
// WARNING: Removing unreachable block (ram,0x000195d4)

void sig_die(undefined4 param_1,int param_2)

{
  fprintf((FILE *)(_iob + 0x20),"%s\n",param_1);
  if (param_2 != 0) {
    fflush((FILE *)(_iob + 0x20));
    f_exit();
    fflush((FILE *)(_iob + 0x20));
    signal(6,(__sighandler_t)0x0);
                    // WARNING: Subroutine does not return
    abort();
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



// WARNING: Removing unreachable block (ram,0x000196c8)
// WARNING: Removing unreachable block (ram,0x0001961c)
// WARNING: Removing unreachable block (ram,0x000196a8)

int f__icvt(uint param_1,uint param_2,int *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if ((int)param_1 < 1) {
    if ((param_1 == 0) && (param_2 != 0)) {
      *param_4 = 0;
    }
    else {
      if (-1 < (int)param_1) {
        *param_4 = 0;
        *param_3 = 1;
        buf_3[22] = 0x30;
        return 0x2c38e;
      }
      bVar4 = param_2 != 0;
      param_2 = -param_2;
      *param_4 = 1;
      param_1 = -(uint)bVar4 - param_1;
    }
  }
  else {
    *param_4 = 0;
  }
  iVar1 = 0x17;
  do {
    iVar3 = iVar1;
    uVar2 = param_2;
    __urem64(param_1,param_2,param_5 >> 0x1f,param_5);
    hex_3[iVar3 + 0xff] = (char)uVar2 + '0';
    param_1 = __udiv64(param_1,param_2,param_5 >> 0x1f,param_5);
    iVar1 = iVar3 + -1;
  } while ((param_1 | param_2) != 0);
  *param_3 = 0x17 - (iVar3 + -1);
  return iVar3 + 0x2c377;
}



// WARNING: Removing unreachable block (ram,0x00019960)
// WARNING: Removing unreachable block (ram,0x0001989c)
// WARNING: Removing unreachable block (ram,0x00019700)
// WARNING: Removing unreachable block (ram,0x00019978)
// WARNING: Removing unreachable block (ram,0x00019860)

undefined4 wrt_E(double *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  undefined4 uVar7;
  char *__s;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  bool bVar15;
  char local_48;
  char local_47 [55];
  double local_10;
  
  bVar15 = false;
  iVar13 = param_4;
  if (param_4 < 1) {
    iVar13 = 2;
  }
  if (f__scale != 0) {
    if (param_3 + 2 <= f__scale) {
      bVar15 = param_2 + -1 < 0;
      goto LAB_000197f0;
    }
    if (f__scale == -param_3 || f__scale + param_3 < 0 != SBORROW4(f__scale,-param_3)) {
      bVar15 = param_2 + -1 < 0;
      goto LAB_000197f0;
    }
  }
  if (f__scale < 1) {
    param_3 = param_3 + -1;
  }
  if (param_5 == 4) {
    dVar14 = (double)*(float *)param_1;
  }
  else {
    dVar14 = *param_1;
  }
  cVar2 = (dVar14 < 0.0) + (0.0 < dVar14) * '\x02';
  if ((cVar2 == '\0' || cVar2 == '\x02') || cVar2 == '\x03') {
    cVar2 = (dVar14 < 0.0) + (0.0 < dVar14) * '\x02';
    bVar3 = false;
    iVar11 = f__cplus;
    if ((cVar2 != '\x01' && cVar2 != '\x02') && cVar2 != '\x03') {
      dVar14 = 0.0;
    }
  }
  else {
    bVar3 = true;
    iVar11 = 1;
    dVar14 = (double)CONCAT44(-(float)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0));
  }
  iVar12 = param_2 - (iVar11 + param_3 + 4 + iVar13);
  if ((f__scale < 1) && (0 < iVar12)) {
    iVar12 = iVar12 + -1;
    bVar15 = true;
  }
  else if (iVar12 < 0) {
LAB_000197ec:
    bVar15 = param_2 + -1 < 0;
    goto LAB_000197f0;
  }
  if (f__scale < 0) {
    param_3 = param_3 + f__scale;
  }
  iVar10 = param_3 + -0x28;
  if (param_3 < 0x29) {
    iVar10 = 0;
  }
  else {
    param_3 = 0x28;
  }
  __s = &local_48;
  local_10 = dVar14;
  sprintf(__s,"%#.*E",param_3,(int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0));
  iVar6 = (int)local_48;
  if ((__ctype[iVar6 + 1] & 4) == 0) {
    if ((iVar6 == 0x4e) || (iVar6 == 0x6e)) {
      iVar11 = 0;
    }
    sVar5 = strlen(__s);
    iVar13 = (param_2 - sVar5) - iVar11;
    if (-1 < iVar13) {
      iVar13 = iVar13 + -1;
      iVar12 = iVar11;
      while (-1 < iVar12) {
        (*f__putn)(0x20);
        iVar13 = iVar13 + -1;
        iVar12 = iVar13;
      }
      if (iVar11 != 0) {
        uVar7 = 0x2b;
        if (bVar3) {
          uVar7 = 0x2d;
        }
        (*f__putn)(uVar7);
      }
      if (local_48 == '\0') {
        return 0;
      }
      iVar13 = (int)local_48;
      do {
        __s = __s + 1;
        (*f__putn)(iVar13);
        iVar13 = (int)*__s;
      } while (iVar13 != 0);
      return 0;
    }
    bVar15 = param_2 + -1 < 0;
LAB_000197f0:
    param_2 = param_2 + -1;
    if (!bVar15) {
      do {
        (*f__putn)(0x2a);
        param_2 = param_2 + -1;
      } while (-1 < param_2);
    }
    return 0;
  }
  if ((char)((dVar14 < 0.0) + (0.0 < dVar14) * '\x02') == '\0') {
    local_47[param_3 + 2] = '+';
    local_47[param_3 + 3] = '0';
    local_47[param_3 + 4] = '0';
    local_47[param_3 + 5] = '\0';
  }
  else {
    iVar6 = atoi(local_47 + param_3 + 2);
    sprintf(local_47 + param_3 + 2,"%+.2d",iVar6 - (f__scale + -1));
  }
  pcVar8 = local_47 + param_3 + 3;
  if ((iVar13 < 2) && (*pcVar8 != '0')) {
    bVar15 = param_2 + -1 < 0;
    goto LAB_000197f0;
  }
  if (local_47[param_3 + 5] != '\0') {
    if (param_4 == 0) {
      cVar2 = local_47[param_3 + 2];
      local_47[param_3 + 1] = cVar2;
      pcVar9 = local_47 + param_3 + 1;
      while (iVar6 = 2, cVar2 != '\0') {
        cVar2 = pcVar9[2];
        pcVar9[1] = cVar2;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_00019a64;
    }
    iVar6 = iVar13;
    if (param_4 < 0) goto LAB_00019a64;
  }
  pcVar9 = local_47 + param_3 + 5;
  iVar6 = 2;
  cVar2 = *pcVar9;
  while (cVar2 != '\0') {
    pcVar9 = pcVar9 + 1;
    if (iVar13 <= iVar6) goto LAB_000197ec;
    iVar6 = iVar6 + 1;
    cVar2 = *pcVar9;
  }
LAB_00019a64:
  iVar12 = iVar12 + -1;
  iVar4 = iVar11;
  while (-1 < iVar4) {
    (*f__putn)(0x20);
    iVar12 = iVar12 + -1;
    iVar4 = iVar12;
  }
  if (iVar11 != 0) {
    uVar7 = 0x2b;
    if (bVar3) {
      uVar7 = 0x2d;
    }
    (*f__putn)(uVar7);
  }
  iVar11 = f__scale;
  if (f__scale < 1) {
    if (bVar15) {
      (*f__putn)(0x30);
    }
    (*f__putn)(0x2e);
    __s = local_47 + 1;
    for (; iVar11 < 0; iVar11 = iVar11 + 1) {
      (*f__putn)(0x30);
    }
    (*f__putn)((int)local_48);
  }
  else if (1 < f__scale) {
    iVar11 = f__scale + -1;
    (*f__putn)((int)local_48);
    __s = local_47 + 1;
    if (0 < iVar11) {
      while( true ) {
        iVar11 = iVar11 + -1;
        __s = __s + 1;
        (*f__putn)((int)local_47[1]);
        if (iVar11 < 1) break;
        local_47[1] = *__s;
      }
    }
    (*f__putn)(0x2e);
  }
  if (iVar10 != 0) {
    if (__s < local_47 + param_3 + 1) {
      cVar2 = *__s;
      while( true ) {
        __s = __s + 1;
        (*f__putn)((int)cVar2);
        if (local_47 + param_3 + 1 <= __s) break;
        cVar2 = *__s;
      }
    }
    do {
      (*f__putn)(0x30);
      iVar10 = iVar10 + -1;
    } while (0 < iVar10);
  }
  if (__s < pcVar8) {
    cVar2 = *__s;
    while( true ) {
      __s = __s + 1;
      (*f__putn)((int)cVar2);
      if (pcVar8 <= __s) break;
      cVar2 = *__s;
    }
  }
  iVar6 = iVar6 + 1;
  if (iVar13 < 2) {
    (*f__putn)((int)__s[1]);
    return 0;
  }
  if (iVar13 < iVar6) {
    cVar2 = *__s;
  }
  else {
    do {
      (*f__putn)(0x30);
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar13);
    cVar2 = *__s;
  }
  cVar1 = *__s;
  while (cVar2 != '\0') {
    (*f__putn)((int)cVar1);
    __s = __s + 1;
    cVar1 = *__s;
    cVar2 = *__s;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00019c84)
// WARNING: Removing unreachable block (ram,0x00019d58)

undefined4 wrt_F(double *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  char *__s;
  int iVar7;
  bool bVar8;
  char local_2a0 [656];
  double local_10;
  
  if (param_4 == 4) {
    local_10 = (double)*(float *)param_1;
  }
  else {
    local_10 = *param_1;
  }
  iVar7 = 0;
  if (0x157 < param_3) {
    iVar7 = param_3 + -0x158;
    param_3 = 0x158;
  }
  cVar2 = (local_10 < 0.0) + (0.0 < local_10) * '\x02';
  cVar3 = (local_10 < 0.0) + (0.0 < local_10) * '\x02';
  if ((cVar2 == '\0' || cVar2 == '\x02') || cVar2 == '\x03') {
    bVar4 = false;
    if ((cVar3 != '\x01' && cVar3 != '\x02') && cVar3 != '\x03') {
      local_10 = 0.0;
    }
  }
  else {
    bVar4 = true;
    local_10 = (double)CONCAT44(-(float)((ulonglong)local_10 >> 0x20),SUB84(local_10,0));
  }
  __s = local_2a0;
  if (f__scale != 0) {
    iVar6 = f__scale;
    if (f__scale < 1) {
      do {
        iVar6 = iVar6 + 1;
        local_10 = local_10 * 0.1;
      } while (iVar6 < 0);
    }
    else {
      do {
        iVar6 = iVar6 + -1;
        local_10 = local_10 * 10.0;
      } while (0 < iVar6);
    }
  }
  iVar6 = sprintf(__s,"%#.*f",param_3,(int)((ulonglong)local_10 >> 0x20),SUB84(local_10,0));
  bVar8 = !bVar4;
  iVar6 = iVar6 + iVar7;
  pcVar5 = __s;
  if (bVar8) {
LAB_00019da8:
    if ((!bVar8) || (iVar1 = iVar6 - param_2, f__cplus != 0)) {
      iVar6 = iVar6 + 1;
      iVar1 = iVar6 - param_2;
    }
    if (iVar1 != 0 && iVar1 < 0 == SBORROW4(iVar6,param_2)) {
      if ((local_2a0[0] != '0') || (iVar6 = iVar6 + -1, iVar6 != param_2)) {
        for (param_2 = param_2 + -1; -1 < param_2; param_2 = param_2 + -1) {
          (*f__putn)(0x2a);
        }
        return 0;
      }
      __s = local_2a0 + 1;
    }
    param_2 = param_2 - iVar6;
    while (param_2 = param_2 + -1, -1 < param_2) {
      (*f__putn)(0x20);
    }
    if (bVar4) {
      (*f__putn)(0x2d);
      iVar6 = (int)*__s;
    }
    else if (f__cplus == 0) {
      iVar6 = (int)*__s;
    }
    else {
      (*f__putn)(0x2b);
      iVar6 = (int)*__s;
    }
    while (iVar6 != 0) {
      __s = __s + 1;
      (*f__putn)(iVar6);
      iVar6 = (int)*__s;
    }
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      (*f__putn)(0x30);
    }
    return 0;
  }
  do {
    cVar2 = *pcVar5;
    while (cVar2 != '0') {
      cVar2 = *pcVar5;
      if (cVar2 == '\0') {
        bVar4 = false;
LAB_00019da4:
        bVar8 = !bVar4;
        goto LAB_00019da8;
      }
      pcVar5 = pcVar5 + 1;
      if (cVar2 != '.') goto LAB_00019da4;
      cVar2 = *pcVar5;
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
}



// WARNING: This is an inlined function

void Letext(void)

{
  return;
}



// WARNING: Inlined function: Letext
// WARNING: Removing unreachable block (ram,0x00019efc)
// WARNING: Removing unreachable block (ram,0x00019f04)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __do_global_ctors_aux(undefined4 param_1)

{
  code *pcVar1;
  code **ppcVar2;
  bool bVar3;
  
  ppcVar2 = (code **)&__CTOR_LIST__;
  bVar3 = ___CTOR_LIST__ != -1;
  while (bVar3) {
    pcVar1 = *ppcVar2;
    ppcVar2 = ppcVar2 + -1;
    (*pcVar1)();
    bVar3 = *ppcVar2 != (code *)0xffffffff;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00019f50)
// WARNING: Removing unreachable block (ram,0x00019f54)

undefined4 init_dummy(undefined4 param_1)

{
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00019f68)
// WARNING: Removing unreachable block (ram,0x00019f5c)
// WARNING: Removing unreachable block (ram,0x00019f60)

int _init(EVP_PKEY_CTX *ctx)

{
  frame_dummy();
  __do_global_ctors_aux();
  return (int)ctx;
}



// WARNING: Removing unreachable block (ram,0x00019f78)
// WARNING: Removing unreachable block (ram,0x00019f7c)

undefined4 _fini(undefined4 param_1)

{
  __do_global_dtors_aux();
  return param_1;
}



void _PROCEDURE_LINKAGE_TABLE_(void)

{
  IllegalInstructionTrap(0);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atexit(__func *__func)

{
  IllegalInstructionTrap(0x2a930);
  return (int)__func;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
  IllegalInstructionTrap(0x2a93c);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int __status)

{
  IllegalInstructionTrap(0x2a948);
  return;
}



void FUN_0002a954(void)

{
  IllegalInstructionTrap(0x2e000);
  return;
}



void FUN_0002a960(void)

{
  IllegalInstructionTrap(0x2e004);
  return;
}



void __filbuf(void)

{
  IllegalInstructionTrap(0x2a96c);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  IllegalInstructionTrap(0x2a978);
  return (int)__nptr;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  IllegalInstructionTrap(0x2a984);
  return (int)__s;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double atof(char *__nptr)

{
  double in_fd0;
  
  IllegalInstructionTrap(0x2a990);
  return in_fd0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  IllegalInstructionTrap(0x2a99c);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  IllegalInstructionTrap(0x2a9a8);
  return (void *)__size;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  IllegalInstructionTrap(0x2a9b4);
  return __ptr;
}



void __dtoll(void)

{
  IllegalInstructionTrap(0x2a9c0);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ungetc(int __c,FILE *__stream)

{
  IllegalInstructionTrap(0x2a9cc);
  return __c;
}



void __flsbuf(void)

{
  IllegalInstructionTrap(0x2a9d8);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  IllegalInstructionTrap(0x2a9e4);
  return (int)__s;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  IllegalInstructionTrap(0x2a9f0);
  return (size_t)__s;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int access(char *__name,int __type)

{
  IllegalInstructionTrap(0x2a9fc);
  return (int)__name;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * tempnam(char *__dir,char *__pfx)

{
  IllegalInstructionTrap(0x2aa08);
  return __dir;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  IllegalInstructionTrap(0x2aa14);
  return __dest;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  IllegalInstructionTrap(0x2aa20);
  return (FILE *)__filename;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa2c);
  return (int)__stream;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void rewind(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa38);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  IllegalInstructionTrap(0x2aa44);
  return (int)__stream;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int stat(char *__file,stat *__buf)

{
  IllegalInstructionTrap(0x2aa50);
  return (int)__file;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  IllegalInstructionTrap(0x2aa5c);
  return (__sighandler_t)__sig;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unlink(char *__name)

{
  IllegalInstructionTrap(0x2aa68);
  return (int)__name;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa74);
  return (int)__stream;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  IllegalInstructionTrap(0x2aa80);
  return (size_t)__ptr;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  IllegalInstructionTrap(0x2aa8c);
  return (size_t)__ptr;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long ftell(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa98);
  return (long)__stream;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * tmpfile(void)

{
  FILE *in_o0;
  
  IllegalInstructionTrap(0x2aaa4);
  return in_o0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * freopen(char *__filename,char *__modes,FILE *__stream)

{
  IllegalInstructionTrap(0x2aab0);
  return (FILE *)__filename;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fileno(FILE *__stream)

{
  IllegalInstructionTrap(0x2aabc);
  return (int)__stream;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fstat(int __fd,stat *__buf)

{
  IllegalInstructionTrap(0x2aac8);
  return __fd;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int isatty(int __fd)

{
  IllegalInstructionTrap(0x2aad4);
  return __fd;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  IllegalInstructionTrap(0x2aae0);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  IllegalInstructionTrap(0x2aaec);
  return (int)__stream;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
  IllegalInstructionTrap(0x2aaf8);
  return;
}



void __mul64(void)

{
  IllegalInstructionTrap(0x2ab04);
  return;
}



void _umul(void)

{
  IllegalInstructionTrap(0x2ab10);
  return;
}



void __urem64(void)

{
  IllegalInstructionTrap(0x2ab1c);
  return;
}



void __udiv64(void)

{
  IllegalInstructionTrap(0x2ab28);
  return;
}


