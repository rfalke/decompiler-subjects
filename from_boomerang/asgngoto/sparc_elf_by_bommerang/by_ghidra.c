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
    char _unused2[15];
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
  undefined auStackX68 [4];
  undefined auStackX72 [20];
  
  if (unaff_g1 != (__func *)0x0) {
    atexit(unaff_g1);
  }
  ctx = (EVP_PKEY_CTX *)atexit(_fini);
  _init(ctx);
  environ = auStackX68 + local_res40 * 4 + 4;
  __status = main(local_res40,auStackX68);
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
    iVar2 = *(int *)force_to_data;
    ppcVar1 = (code **)force_to_data;
    while (iVar2 != 0) {
      force_to_data = (undefined *)(ppcVar1 + 1);
      (**ppcVar1)();
      iVar2 = *(int *)force_to_data;
      ppcVar1 = (code **)force_to_data;
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
  code *UNRECOVERED_JUMPTABLE;
  int local_14 [5];
  
  s_wsle(force_to_data);
  do_lio(&DAT_00019fd8,&DAT_00019fdc,"Input num:",10);
  e_wsle();
  s_rsle(__g77_cilist_1_1);
  do_lio(&DAT_00019fe0,&DAT_00019fdc,local_14,4);
  e_rsle();
  UNRECOVERED_JUMPTABLE = (code *)&DAT_00011b24;
  if (local_14[0] == 2) {
    UNRECOVERED_JUMPTABLE = (code *)&DAT_00011b68;
  }
  if (local_14[0] == 3) {
    UNRECOVERED_JUMPTABLE = (code *)&DAT_00011bac;
  }
  if (local_14[0] == 4) {
    UNRECOVERED_JUMPTABLE = (code *)&LAB_00011bf0;
  }
                    // WARNING: Could not recover jumptable at 0x00011b1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
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
      *(byte **)(piVar1 + 1) = (byte *)piVar1[1] + 1;
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
// WARNING: Heritage AFTER dead removal. Example location: o1 : 0x000120e8
// WARNING: Restarted to delay deadcode elimination for space: register

void l_R(void)

{
  char cVar1;
  code cVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_o0_1;
  ulonglong uVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  code *pcVar17;
  bool bVar18;
  char local_48;
  char local_47 [39];
  char cStack32;
  char acStack31 [31];
  
  iVar16 = (int)(in_o0_1 >> 0x20);
  if (iVar16 == 0) {
    if (0 < f__lcount) {
      return;
    }
    f__lcount = 1;
  }
  f__llx = 0;
  f__ltype = 0;
  pcVar12 = (code *)0x0;
  bVar3 = false;
  uVar6 = in_o0_1;
  while( true ) {
    pcVar9 = l_getc;
    (*l_getc)(l_getc);
    uVar6 = uVar6 & 0xffffffff;
    iVar14 = 0;
    pcVar10 = &local_48;
    pcVar13 = &local_48;
    pcVar15 = &cStack32;
    if (pcVar9 != (code *)0x2b) {
      if (pcVar9 != (code *)0x2d) goto LAB_00011e34;
      pcVar10 = local_47;
      local_48 = '-';
      pcVar15 = acStack31;
      pcVar13 = pcVar10;
    }
    while( true ) {
      pcVar9 = l_getc;
      (*l_getc)(l_getc);
LAB_00011e34:
      if (pcVar9 != (code *)0x30) break;
      iVar14 = iVar14 + 1;
    }
    cVar2 = pcVar9[0x2c511];
    while (((byte)cVar2 & 4) != 0) {
      if (pcVar10 < pcVar15) {
        *pcVar10 = (char)pcVar9;
        pcVar10 = pcVar10 + 1;
      }
      else {
        pcVar12 = pcVar12 + 1;
      }
      pcVar9 = l_getc;
      (*l_getc)(l_getc);
      cVar2 = pcVar9[0x2c511];
    }
    if ((pcVar9 != (code *)0x2a) || (iVar16 != 0)) break;
    if (((pcVar10 == pcVar13) || (pcVar12 != (code *)0x0)) || (iVar16 = 1, local_48 == '-')) {
      fVar5 = *f__elist;
LAB_00012310:
      lVar7 = 0x70;
LAB_00012314:
      err(fVar5,lVar7);
      return;
    }
    *pcVar10 = '\0';
    f__lcount = atoi(&local_48);
    bVar3 = true;
  }
  if (pcVar9 != (code *)0x2e) goto LAB_00011fb8;
  if ((int)in_o0_1 == 0) {
    pcVar9 = l_getc;
    (*l_getc)(l_getc);
    if (pcVar10 == pcVar13) {
      while (pcVar9 == (code *)0x30) {
        iVar14 = iVar14 + 1;
        pcVar9 = l_getc;
        (*l_getc)(l_getc);
        pcVar12 = pcVar12 + -1;
      }
    }
    cVar2 = pcVar9[0x2c511];
    while (((byte)cVar2 & 4) != 0) {
      if (pcVar10 < pcVar15) {
        *pcVar10 = (char)pcVar9;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + -1;
      }
      pcVar9 = l_getc;
      (*l_getc)(l_getc);
      cVar2 = pcVar9[0x2c511];
    }
LAB_00011fb8:
    pcVar15 = pcVar10 + (iVar14 - (int)pcVar13);
    bVar18 = false;
    if (((byte)pcVar9[0x2ac79] & 0x10) == 0) {
      if ((pcVar15 != (char *)0x0) && (((byte)pcVar9[0x2ac79] & 8) != 0)) {
        if ((int)in_o0_1 != 0) {
          fVar5 = *f__elist;
          lVar7 = 0x73;
          goto LAB_00012314;
        }
        pcVar9 = l_getc;
        (*l_getc)(l_getc);
        if (((byte)pcVar9[0x2ac79] & 0x10) != 0) goto LAB_00012030;
        goto LAB_00012050;
      }
LAB_000120d8:
      (*l_ungetc)(pcVar9,(int)uVar6,0x2c400);
      pcVar11 = pcVar10 + -1;
      if (pcVar13 < pcVar10) {
        cVar1 = *pcVar11;
        pcVar15 = pcVar15 + 1;
        while (cVar1 == '0') {
          pcVar11 = pcVar11 + -1;
          cVar1 = *pcVar11;
          pcVar12 = pcVar12 + 1;
        }
        if (pcVar12 == (code *)0x0) {
          pcVar11[1] = '\0';
        }
        else {
          sprintf(pcVar11 + 1,"e%ld",pcVar12);
        }
        f__lx = atof(&local_48);
        if (((in_o0_1 & 2) == 0) || ((int)(pcVar11 + (int)(pcVar12 + -(int)pcVar13)) < 0xf))
        goto LAB_0001228c;
        bVar18 = pcVar15 == (char *)0x0;
        if ((int)(pcVar11 + (int)(pcVar12 + -(int)pcVar13)) < 0x14) {
          if ((int)pcVar12 < 0) {
            pcVar11 = pcVar11 + (int)pcVar12;
          }
          if (pcVar13 <= pcVar11) {
            f__llx = SEXT48((int)*pcVar13 + -0x30);
            while (pcVar13 = pcVar13 + 1, pcVar13 <= pcVar11) {
              uVar8 = (uint)f__llx;
              iVar16 = (int)(f__llx >> 0x20);
              uVar4 = (int)*pcVar13 - 0x30;
              f__llx = CONCAT44((uVar8 * 5 >> 0x1f |
                                ((uVar8 >> 0x1e | iVar16 << 2) + iVar16 +
                                (uint)CARRY4(uVar8 * 4,uVar8)) * 2) + ((int)uVar4 >> 0x1f) +
                                (uint)CARRY4(uVar8 * 10,uVar4),uVar8 * 10 + uVar4);
            }
          }
          while( true ) {
            pcVar12 = pcVar12 + -1;
            uVar4 = (uint)f__llx;
            iVar16 = (int)(f__llx >> 0x20);
            if ((int)pcVar12 < 0) break;
            f__llx = CONCAT44(uVar4 * 5 >> 0x1f |
                              ((uVar4 >> 0x1e | iVar16 << 2) + iVar16 +
                              (uint)CARRY4(uVar4 * 4,uVar4)) * 2,uVar4 * 10);
          }
          bVar18 = pcVar15 == (char *)0x0;
          if (local_48 == '-') {
            f__llx = CONCAT44(-(uint)(uVar4 != 0) - iVar16,-uVar4);
            goto LAB_0001228c;
          }
        }
      }
      else {
        f__lx = 0.00000000;
LAB_0001228c:
        bVar18 = pcVar15 == (char *)0x0;
      }
      if (!bVar18) {
        f__ltype = 3;
        return;
      }
      if (pcVar9 == (code *)0x2c) {
        return;
      }
      if (pcVar9 == (code *)0x2f) {
        return;
      }
      if (bVar3) {
        if (pcVar9 == (code *)0x20) {
          return;
        }
        if (pcVar9 == (code *)0x9) {
          return;
        }
        if (pcVar9 == (code *)0xa) {
          return;
        }
      }
      if (1 < nml_read) {
        f__lquit = 2;
        return;
      }
      fVar5 = *f__elist;
    }
    else {
LAB_00012030:
      bVar18 = pcVar9 == (code *)0x2d;
      pcVar9 = l_getc;
      (*l_getc)(l_getc);
LAB_00012050:
      if (((byte)pcVar9[0x2c511] & 4) != 0) {
        pcVar17 = pcVar9 + -0x30;
        do {
          pcVar9 = l_getc;
          (*l_getc)(l_getc);
          if (((byte)pcVar9[0x2c511] & 4) == 0) {
            if (bVar18) {
              pcVar12 = pcVar12 + -(int)pcVar17;
            }
            else {
              pcVar12 = pcVar17 + (int)pcVar12;
            }
            goto LAB_000120d8;
          }
          pcVar17 = pcVar9 + (int)pcVar17 * 10 + -0x30;
        } while ((int)pcVar17 < 100000000);
      }
      fVar5 = *f__elist;
    }
    goto LAB_00012310;
  }
  fVar5 = *f__elist;
  lVar7 = 0x73;
  goto LAB_00012314;
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
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (0 < f__lcount) {
    return 0;
  }
  f__ltype = 0;
  iVar2 = (*l_getc)(l_getc,0x2d800,0x2c400);
  if (iVar2 == 0x28) {
    f__lcount = 1;
  }
  else {
    if ((1 < nml_read) && (9 < iVar2 - 0x30U)) {
      (*l_ungetc)(iVar2,f__cf,0x2c400);
      f__lquit = 2;
      return 0;
    }
    iVar2 = rd_count(iVar2);
    if (iVar2 != 0) {
      if ((f__cf != 0) && ((*(byte *)(f__cf + 0xc) & 0x10) != 0)) {
        fVar3 = *f__elist;
joined_r0x00012514:
        if (fVar3 == 0.00000000) {
          f__fatal(0xffffffff,"lread",0x2d800);
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0xffffffff;
        }
        return 0xffffffff;
      }
      fVar3 = *f__elist;
      goto LAB_00012768;
    }
    iVar2 = (*l_getc)();
    if (iVar2 != 0x2a) {
      if ((f__cf != 0) && ((*(byte *)(f__cf + 0xc) & 0x10) != 0)) {
        fVar3 = *f__elist;
        goto joined_r0x00012514;
      }
      fVar3 = *f__elist;
      goto LAB_00012768;
    }
    iVar2 = (*l_getc)();
    if (iVar2 != 0x28) {
      (*l_ungetc)(iVar2,f__cf,0x2c400);
      return 0;
    }
  }
  do {
    iVar2 = (*l_getc)();
  } while ((f__ltab[iVar2 + 1] & 0x20) != 0);
  (*l_ungetc)(iVar2,f__cf,l_ungetc);
  iVar2 = nml_read;
  nml_read = 0;
  iVar4 = l_R(1,0);
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar6 = f__lx;
  if (f__ltype == 0) {
    fVar3 = *f__elist;
  }
  else {
    do {
      iVar4 = (*l_getc)();
    } while ((f__ltab[iVar4 + 1] & 0x20) != 0);
    if (iVar4 == 0x2c) {
      do {
        iVar4 = (*l_getc)();
      } while ((f__ltab[iVar4 + 1] & 0x20) != 0);
      (*l_ungetc)(iVar4,f__cf,l_ungetc);
      iVar4 = l_R(1,0);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (f__ltype == 0) {
        fVar3 = *f__elist;
      }
      else {
        do {
          iVar4 = (*l_getc)();
          uVar1 = f__lx;
        } while ((f__ltab[iVar4 + 1] & 0x20) != 0);
        if (iVar4 == 0x29) {
          f__llx = 0;
          f__lx = uVar6;
          f__ly = uVar1;
          nml_read = iVar2;
          return 0;
        }
        fVar3 = *f__elist;
      }
    }
    else {
      (*l_ungetc)(iVar4,f__cf,l_ungetc);
      fVar3 = *f__elist;
    }
  }
LAB_00012768:
  uVar5 = err(fVar3,0x70);
  return uVar5;
}



// WARNING: Removing unreachable block (ram,0x00012990)
// WARNING: Removing unreachable block (ram,0x0001277c)
// WARNING: Removing unreachable block (ram,0x00012860)
// WARNING: Removing unreachable block (ram,0x000127d4)

undefined4 l_L(void)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  
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
        if (*f__elist == 0.00000000) {
          f__fatal(0xffffffff,"lread");
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = 0xffffffff;
        }
        return 0xffffffff;
      }
      fVar2 = *f__elist;
      goto LAB_00012990;
    }
    iVar1 = (*l_getc)();
  }
  if (iVar1 == 0x2e) {
    iVar1 = (*l_getc)();
  }
  if (iVar1 == 0x54) {
LAB_000128d8:
    uVar3 = 0x3ff00000;
    goto LAB_000128e8;
  }
  if (iVar1 < 0x55) {
    if (iVar1 == 0x46) {
LAB_000128e4:
      uVar3 = 0;
LAB_000128e8:
      f__lx = (ulonglong)uVar3 << 0x20;
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
  fVar2 = *f__elist;
LAB_00012990:
  uVar4 = err(fVar2,0x70);
  return uVar4;
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
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  size_t sVar10;
  size_t __size;
  char cVar11;
  
  if (0 < f__lcount) {
    return 0;
  }
  f__ltype = 0;
  if (f__lchar != (char *)0x0) {
    free(f__lchar);
  }
  pcVar8 = (char *)malloc(0x80);
  __size = 0x80;
  f__lchar = pcVar8;
  if (pcVar8 != (char *)0x0) {
    iVar3 = (*l_getc)();
    if ((__ctype[iVar3 + 1] & 4) == 0) {
      (*l_ungetc)(iVar3,f__cf);
LAB_00012c00:
      iVar3 = (*l_getc)();
      cVar11 = (char)iVar3;
      if ((iVar3 != 0x27) && (iVar3 != 0x22)) {
        if (((f__ltab[iVar3 + 1] & 2) == 0) &&
           ((((f__ltab[iVar3 + 1] & 1) == 0 || (iVar3 == 10)) && (iVar3 != -1)))) {
          if (1 < nml_read) {
            (*l_ungetc)(iVar3,f__cf);
            f__lquit = 2;
            return 0;
          }
          *pcVar8 = cVar11;
          pcVar7 = pcVar8 + 1;
          sVar9 = 1;
          goto LAB_00012cc8;
        }
        (*l_ungetc)(iVar3,f__cf);
        return 0;
      }
      f__ltype = 9;
      iVar3 = 0;
LAB_00012d74:
      do {
LAB_00012d80:
        do {
          iVar4 = (*l_getc)();
          iVar4._3_1_ = (char)iVar4;
          if ((iVar4 == (int)cVar11) || (iVar4 == 10)) {
LAB_00012dbc:
            iVar1 = iVar3 - __size;
          }
          else {
            iVar1 = iVar3 - __size;
            if (iVar4 != -1) {
              iVar3 = iVar3 + 1;
              if ((int)__size <= iVar3) goto LAB_00012dbc;
              *pcVar8 = (char)iVar4;
              pcVar8 = pcVar8 + 1;
              goto LAB_00012d80;
            }
          }
          if (iVar1 == 0) goto LAB_00012dcc;
          if (iVar4 == -1) {
            return 0xffffffff;
          }
          if (iVar4 != 10) {
            iVar4 = (*l_getc)();
            iVar4._3_1_ = (char)iVar4;
            if (iVar4 != (int)cVar11) {
              (*l_ungetc)(iVar4,f__cf);
              *pcVar8 = '\0';
              return 0;
            }
            iVar3 = iVar3 + 1;
            goto LAB_00012e70;
          }
        } while (pcVar8[-1] != '\\');
        pcVar8 = pcVar8 + -1;
LAB_00012e70:
        if ((int)__size <= iVar3) {
LAB_00012dcc:
          __size = __size + 0x80;
          f__lchar = (char *)realloc(f__lchar,__size);
          if (f__lchar != (char *)0x0) {
            pcVar8 = f__lchar + iVar3;
            pcVar8[-1] = (char)iVar4;
            goto LAB_00012d74;
          }
          goto LAB_00012de4;
        }
        *pcVar8 = (char)iVar4;
        pcVar8 = pcVar8 + 1;
      } while( true );
    }
    f__lcount = iVar3 + -0x30;
    *pcVar8 = (char)iVar3;
    pcVar7 = pcVar8 + 1;
    sVar9 = 1;
LAB_00012abc:
    sVar10 = sVar9;
    iVar3 = (*l_getc)();
    switch(iVar3) {
    default:
      if ((__ctype[iVar3 + 1] & 4) == 0) {
        f__lcount = 1;
        if (nml_read != 0) goto LAB_00012b78;
        goto switchD_00012cf4_caseD_0;
      }
      *pcVar7 = (char)iVar3;
      sVar9 = sVar10 + 1;
      f__lcount = f__lcount * 10 + iVar3 + -0x30;
      pcVar7 = pcVar7 + 1;
      if (sVar9 == __size) {
        __size = sVar10 + 0x81;
        f__lchar = (char *)realloc(f__lchar,__size);
        if (f__lchar == (char *)0x0) goto LAB_00012de4;
        pcVar7 = f__lchar + sVar9;
      }
      goto LAB_00012abc;
    case 9:
    case 10:
    case 0x20:
    case 0x2c:
    case 0x2f:
      (*l_ungetc)(iVar3,f__cf);
    case -1:
      f__lcount = 1;
      break;
    case 0x2a:
      pcVar8 = f__lchar;
      if (f__lcount != 0) goto LAB_00012c00;
      f__lcount = 1;
      if (nml_read == 0) {
        *pcVar7 = (char)iVar3;
        goto LAB_00012d2c;
      }
LAB_00012b78:
      f__lcount = 1;
      fVar2 = *f__elist;
      lVar6 = 0x70;
      goto LAB_00012dfc;
    }
LAB_00012d1c:
    f__ltype = 9;
    *pcVar7 = '\0';
    return 0;
  }
  fVar2 = *f__elist;
LAB_00012df8:
  lVar6 = 0x71;
LAB_00012dfc:
  uVar5 = err(fVar2,lVar6);
  return uVar5;
LAB_00012cc8:
  do {
    iVar3 = (*l_getc)();
    sVar10 = sVar9;
    switch(iVar3) {
    default:
switchD_00012cf4_caseD_0:
      *pcVar7 = (char)iVar3;
LAB_00012d2c:
      sVar9 = sVar10 + 1;
      pcVar7 = pcVar7 + 1;
      if (sVar9 == __size) {
        __size = sVar10 + 0x81;
        f__lchar = (char *)realloc(f__lchar,__size);
        if (f__lchar == (char *)0x0) goto LAB_00012de4;
        pcVar7 = f__lchar + sVar9;
      }
      break;
    case 9:
    case 10:
    case 0x20:
    case 0x2c:
    case 0x2f:
      (*l_ungetc)(iVar3,f__cf);
    case -1:
      goto LAB_00012d1c;
    }
  } while( true );
LAB_00012de4:
  fVar2 = *f__elist;
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
  f__curunit = (int *)(f__units + param_1[1] * 0x30);
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
// WARNING: Heritage AFTER dead removal. Example location: o1 : 0x000132f8
// WARNING: Restarted to delay deadcode elimination for space: register

void l_read(void)

{
  ulonglong uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  double in_o0_1;
  double *pdVar7;
  double dVar6;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined *puVar12;
  undefined8 in_o2_3;
  int iVar13;
  int iVar14;
  
  piVar2 = (int *)((ulonglong)in_o0_1 >> 0x20);
  pdVar7 = SUB84(in_o0_1,0);
  iVar10 = (int)((ulonglong)in_o2_3 >> 0x20);
  iVar13 = (int)in_o2_3;
  iVar14 = 0;
  if (*piVar2 < 1) {
    return;
  }
LAB_000131f0:
  uVar8 = SUB84(in_o0_1,0);
  if (f__lquit != 0) {
    return;
  }
  if (l_eof != 0) {
    fVar11 = f__elist[2];
joined_r0x00013294:
    if (fVar11 == 0.00000000) {
      f__fatal(0xffffffff,uVar8,0x2d800);
      return;
    }
    errno = -1;
    f__init = f__init & 0xfffffffd;
    return;
  }
  dVar6 = in_o0_1;
  if (f__lcount != 0) {
LAB_00013300:
    uVar8 = SUB84(dVar6,0);
    ppuVar5 = &switchdataD_00013610;
    in_o0_1 = (double)CONCAT44(0x13610,uVar8);
    puVar12 = (&switchdataD_00013610)[iVar13 + -2];
    switch(iVar13) {
    case 2:
    case 3:
    case 0xb:
      ppuVar5 = (undefined **)0x0;
      l_R(0,uVar8,puVar12);
      break;
    case 4:
    case 5:
      ppuVar5 = (undefined **)0x0;
      l_R(0,uVar8,puVar12);
      break;
    case 6:
    case 7:
      l_C(&switchdataD_00013610,uVar8,puVar12);
      break;
    case 8:
    case 0xc:
    case 0xd:
      l_L(&switchdataD_00013610,uVar8,puVar12);
      break;
    case 9:
      l_CHAR(&switchdataD_00013610,uVar8,puVar12);
      break;
    default:
      goto LAB_000133b8;
    case 0xe:
      iVar4 = 0;
      l_R(0,uVar8,puVar12);
      in_o0_1 = (double)((ulonglong)dVar6 & 0xffffffff);
      if (iVar4 != 0) {
        return;
      }
      goto LAB_000133b8;
    }
    in_o0_1 = (double)((ulonglong)dVar6 & 0xffffffff);
    if (ppuVar5 != (undefined **)0x0) {
      f__init = f__init & 0xfffffffd;
      return;
    }
LAB_000133b8:
    do {
      do {
        pcVar3 = l_getc;
        (*l_getc)(l_getc);
        in_o0_1 = (double)((ulonglong)in_o0_1 & 0xffffffff);
      } while (pcVar3 == (code *)0x20);
    } while (pcVar3 == (code *)0x9);
    if ((pcVar3 != (code *)0x2c) || (1 < f__lcount)) {
      (*l_ungetc)(pcVar3,SUB84(in_o0_1,0),0x2c400);
    }
    goto LAB_0001340c;
  }
  f__ltype = 0;
switchD_0001327c_caseD_9:
  pcVar3 = l_getc;
  (*l_getc)(l_getc);
  in_o0_1 = (double)((ulonglong)in_o0_1 & 0xffffffff);
  uVar8 = SUB84(in_o0_1,0);
  switch(pcVar3) {
  default:
    (*l_ungetc)(pcVar3,uVar8,0x2c400);
    dVar6 = in_o0_1;
    goto LAB_00013300;
  case (code *)0x9:
  case (code *)0xa:
  case (code *)0x20:
    goto switchD_0001327c_caseD_9;
  case (code *)0x2c:
    f__lcount = 1;
    goto LAB_0001340c;
  case (code *)0x2f:
    f__lquit = 1;
LAB_0001340c:
    if (f__lquit != 0) {
      return;
    }
    if ((f__cf != 0) &&
       (in_o0_1 = (double)(CONCAT44(f__cf,(uint)*(byte *)(f__cf + 0xc)) & 0xffffffff000000cf),
       (*(byte *)(f__cf + 0xc) & 0x20) != 0)) {
      *(undefined *)((int)((ulonglong)in_o0_1 >> 0x20) + 0xc) = SUB81(in_o0_1,0);
      err(*f__elist,errno);
      return;
    }
    if (f__ltype != 0) {
      uVar8 = SUB84(in_o0_1,0);
      switch(iVar13) {
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
        b_char(f__lchar,uVar8,iVar10);
        break;
      case 0xb:
      case 0xc:
        *(char *)pdVar7 = (char)((ulonglong)(longlong)f__lx >> 0x20);
        break;
      case 0xe:
        uVar1 = (ulonglong)f__llx >> 0x20;
        uVar9 = SUB84(f__llx,0);
        *pdVar7 = f__llx;
        if (((uint)uVar1 | uVar9) == 0) {
          in_o0_1 = f__lx;
          __dtoll((int)((ulonglong)f__lx >> 0x20),uVar8,0x2c400);
          *pdVar7 = in_o0_1;
        }
      }
    }
    if (0 < f__lcount) {
      f__lcount = f__lcount + -1;
    }
    pdVar7 = (double *)((int)pdVar7 + iVar10);
    if (nml_read != 0) {
      nml_read = nml_read + 1;
    }
    iVar14 = iVar14 + 1;
    if (*piVar2 <= iVar14) {
      return;
    }
    goto LAB_000131f0;
  case (code *)0xffffffff:
    fVar11 = f__elist[2];
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
    else {
      if (*param_1 == 0) {
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



// WARNING: Removing unreachable block (ram,0x00013928)
// WARNING: Removing unreachable block (ram,0x00013870)
// WARNING: Removing unreachable block (ram,0x000138e0)
// WARNING: Removing unreachable block (ram,0x000138c4)

undefined * f__bufadj(int param_1,int param_2)

{
  undefined uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (f__buf == f__buf0) {
    f__buflen = 0x400;
  }
  if ((int)f__buflen <= param_1) {
    do {
      f__buflen = f__buflen * 2;
    } while (f__buflen - param_1 == 0 || (int)f__buflen < param_1);
  }
  puVar2 = (undefined *)malloc(f__buflen);
  if (puVar2 == (undefined *)0x0) {
    f__fatal(0x71,"malloc failure");
  }
  puVar5 = f__buf + param_2;
  puVar4 = puVar2;
  puVar3 = f__buf;
  while (puVar3 < puVar5) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  }
  if (f__buf != f__buf0) {
    free(f__buf);
  }
  f__buf = puVar2;
  return puVar2;
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
  char *__s;
  char *pcVar4;
  char *pcVar5;
  
  if (f__recpos < f__hiwater) {
    f__recpos = f__hiwater;
  }
  if (f__buflen <= f__recpos + 1) {
    f__bufadj(f__recpos + 1,f__recpos);
  }
  __s = f__buf;
  pcVar5 = f__buf + f__recpos;
  if (param_1 != 0) {
    f__buf[f__recpos] = (char)param_1;
    pcVar5 = pcVar5 + 1;
  }
  *pcVar5 = '\0';
  while( true ) {
    fputs(__s,f__cf);
    sVar3 = strlen(__s);
    pFVar1 = f__cf;
    pcVar4 = __s + sVar3;
    if (pcVar5 <= pcVar4) break;
    iVar2 = f__cf->_flags + -1;
    f__cf->_flags = iVar2;
    if (iVar2 < 0) {
      __s = pcVar4 + 1;
      __flsbuf((int)*pcVar4,pFVar1);
    }
    else {
      __s = pFVar1->_IO_read_ptr;
      *__s = *pcVar4;
      pFVar1->_IO_read_ptr = __s + 1;
      __s = pcVar4 + 1;
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
  int iVar3;
  char *__s;
  size_t sVar4;
  void *pvVar5;
  FILE *__stream;
  undefined4 uVar6;
  FILE **ppFVar7;
  uint uVar8;
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
  iVar2 = param_1[1] * 0x30;
  ppFVar7 = (FILE **)(f__units + iVar2);
  f__curunit = ppFVar7;
  if (*(int *)(f__units + iVar2) == 0) {
    iVar3 = param_1[7];
  }
  else {
    if (param_1[2] == 0) {
      __s = (char *)param_1[8];
LAB_00013b88:
      if (__s == (char *)0x0) {
        return 0;
      }
      if ((*__s == 'z') || (*__s == 'Z')) {
        *(undefined4 *)(f__units + iVar2 + 0x20) = 1;
      }
      else {
        *(undefined4 *)(f__units + iVar2 + 0x20) = 0;
      }
      return 0;
    }
    g_char(param_1[2],param_1[3],local_110);
    iVar3 = f__inode(local_110,&local_124);
    if (iVar3 == *(int *)(f__units + iVar2 + 8)) {
      if (local_124 == *(int *)(f__units + iVar2 + 0xc)) {
        __s = (char *)param_1[8];
        goto LAB_00013b88;
      }
      iVar3 = param_1[1];
    }
    else {
      iVar3 = param_1[1];
    }
    local_118 = 0;
    local_120 = CONCAT44(*param_1,iVar3);
    iVar3 = f_clos(&local_120);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = param_1[7];
  }
  *(int *)(f__units + iVar2 + 0x10) = iVar3;
  uVar6 = 0;
  if ((char *)param_1[8] == (char *)0x0) {
LAB_00013c58:
    *(undefined4 *)(f__units + iVar2 + 0x20) = uVar6;
  }
  else {
    cVar1 = *(char *)param_1[8];
    if ((cVar1 == 'z') || (cVar1 == 'Z')) {
      uVar6 = 1;
      goto LAB_00013c58;
    }
    *(undefined4 *)(f__units + iVar2 + 0x20) = 0;
  }
  if ((char *)param_1[6] == (char *)0x0) {
    if (*(int *)(f__units + iVar2 + 0x10) < 1) goto LAB_00013c9c;
    *(undefined4 *)(f__units + iVar2 + 0x18) = 0;
  }
  else {
    cVar1 = *(char *)param_1[6];
    if ((cVar1 == 'f') || (cVar1 == 'F')) {
LAB_00013c9c:
      *(undefined4 *)(f__units + iVar2 + 0x18) = 1;
    }
    else {
      *(undefined4 *)(f__units + iVar2 + 0x18) = 0;
    }
  }
  uVar8 = *(uint *)(f__units + iVar2 + 0x18);
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
  *(undefined4 *)(f__units + iVar2 + 0x1c) = 3;
  *(undefined4 *)(f__units + iVar2 + 0x2c) = 0;
  *(undefined4 *)(f__units + iVar2 + 0x24) = 0;
  *(undefined4 *)(f__units + iVar2 + 0x28) = 0;
  *ppFVar7 = (FILE *)0x0;
  iVar3 = 0x27;
  if ((char *)param_1[4] != (char *)0x0) {
    iVar3 = (int)*(char *)param_1[4] + -0x4e;
  }
  switch(iVar3) {
  case 0:
  case 0x20:
    iVar3 = access(local_110,0);
    if (iVar3 == 0) {
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
    iVar3 = access(local_110,0);
    if (iVar3 != 0) {
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
    *(undefined4 *)(f__units + iVar2 + 0x2c) = 1;
    __s = tempnam((char *)0x0,local_110);
    sVar4 = strlen(__s);
    if (0xff < sVar4) {
      if (*param_1 == 0) {
        f__fatal(0x84,&DAT_0001a128);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x84;
      }
      return 0x84;
    }
    strcpy(local_110,__s);
    free(__s);
  }
  __stream = fopen(local_110,f__w_mode._0_4_);
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
switchD_00013d78_caseD_2:
  sVar4 = strlen(local_110);
  pvVar5 = malloc(sVar4 + 1);
  *(void **)(f__units + iVar2 + 4) = pvVar5;
  if (pvVar5 == (void *)0x0) {
    if (*param_1 == 0) {
      opn_err(0x71,"no space",param_1);
    }
    else {
      f__init = f__init & 0xfffffffd;
      errno = 0x71;
    }
    uVar6 = 0x71;
  }
  else {
    strcpy(*(char **)(f__units + iVar2 + 4),local_110);
    if ((param_1[5] != 0) && (*(int *)(f__units + iVar2 + 0x10) != 0)) {
      uVar8 = 0;
    }
    __stream = fopen(local_110,*(char **)(f__w_mode + (uVar8 | 2) * 4));
    if (__stream == (FILE *)0x0) {
      __stream = fopen(local_110,(&f__r_mode)[uVar8]);
      if (__stream == (FILE *)0x0) {
        __stream = fopen(local_110,*(char **)(f__w_mode + uVar8 * 4));
        if (__stream == (FILE *)0x0) {
          if (*param_1 == 0) {
            f__fatal(errno,&DAT_0001a128);
            return errno;
          }
LAB_00013fe0:
          f__init = f__init & 0xfffffffd;
          return errno;
        }
        *(undefined4 *)(f__units + iVar2 + 0x28) = 1;
        *(undefined4 *)(f__units + iVar2 + 0x1c) = 2;
      }
      else {
        *(undefined4 *)(f__units + iVar2 + 0x1c) = 1;
      }
    }
    *ppFVar7 = __stream;
    uVar6 = f__canseek(__stream);
    *(undefined4 *)(f__units + iVar2 + 0x14) = uVar6;
    iVar3 = f__inode(local_110,iVar2 + 0x2c748);
    *(int *)(f__units + iVar2 + 8) = iVar3;
    if (iVar3 == -1) {
      if (*param_1 == 0) {
        opn_err(0x6c,&DAT_0001a128,param_1);
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 0x6c;
      }
      uVar6 = 0x6c;
    }
    else {
      if (*(int *)(f__units + iVar2 + 0x14) == 0) {
        uVar6 = 0;
      }
      else {
        if (param_1[7] == 0) {
          if ((char *)param_1[5] == (char *)0x0) {
            uVar6 = 0;
          }
          else {
            cVar1 = *(char *)param_1[5];
            if ((cVar1 == 'a') || (cVar1 == 'A')) {
              iVar2 = fseek(*ppFVar7,0,2);
              if (iVar2 == 0) {
                uVar6 = 0;
              }
              else {
                if (*param_1 == 0) {
                  opn_err(0x81,&DAT_0001a128,param_1);
                }
                else {
                  f__init = f__init & 0xfffffffd;
                  errno = 0x81;
                }
                uVar6 = 0x81;
              }
            }
            else {
              uVar6 = 0;
            }
          }
        }
        else {
          rewind(*ppFVar7);
          uVar6 = 0;
        }
      }
    }
  }
  return uVar6;
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
  char acStack32 [32];
  
  local_40 = acStack32;
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
        *(byte **)(piVar1 + 1) = (byte *)piVar1[1] + 1;
      }
      if (uVar3 == 10) {
        f__cursor = 0;
        f__recpos = 0;
        return 1;
      }
    } while (uVar3 != 0xffffffff);
    *(undefined4 *)(f__curunit + 0x24) = 1;
  }
  f__cursor = 0;
  f__recpos = 0;
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
    f__cf = *(undefined4 *)(f__units + param_1[1] * 0x30);
    f__fmtbuf = param_1[3];
    f__curunit = f__units + param_1[1] * 0x30;
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
      f__cblank = *(undefined4 *)(f__curunit + 0x20);
      f__doend = x_endp;
      f__donewrec = xrd_SL;
      f__dorevert = x_rev;
      f__cplus = 0;
      if ((*(int *)(f__curunit + 0x28) == 0) || (iVar1 = f__nowreading(f__curunit), iVar1 == 0)) {
        if (*(int *)(f__curunit + 0x24) == 0) {
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
      else {
        if (*param_1 == 0) {
          f__fatal(errno,"read start");
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
    iVar2 = param_1[1] * 0x30;
    if (*(int *)(f__units + iVar2) == 0) {
      iVar1 = fk_open(3,5,param_1[1]);
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
      iVar2 = *(int *)(f__units + iVar2 + 0x18);
    }
    else {
      iVar2 = *(int *)(f__units + iVar2 + 0x18);
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
  undefined4 local_98 [4];
  __mode_t local_88;
  
  iVar1 = stat(param_1,(stat *)local_98);
  if (iVar1 < 0) {
    local_88 = 0xffffffff;
  }
  else {
    *param_2 = local_98[0];
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
      else {
        if (*param_1 == 0) {
          f__fatal(errno,"list output start");
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
  FILE **ppFVar4;
  
  if ((f__init & 2) != 0) {
    f__fatal(0x83,"I/O recursion");
  }
  if (99 < *(int *)(param_1 + 4)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4) * 0x30;
  ppFVar4 = (FILE **)(f__units + iVar2);
  if (*(int *)(f__units + iVar2) == 0) goto LAB_00014c9c;
  if (*(int *)(f__units + iVar2 + 0x2c) == 1) {
LAB_00014c70:
    fclose(*ppFVar4);
    if (*(char **)(f__units + iVar2 + 4) == (char *)0x0) {
      *ppFVar4 = (FILE *)0x0;
    }
    else {
      unlink(*(char **)(f__units + iVar2 + 4));
      free(*(void **)(f__units + iVar2 + 4));
      *ppFVar4 = (FILE *)0x0;
    }
  }
  else {
    if (*(char **)(param_1 + 8) == (char *)0x0) {
      iVar3 = *(int *)(f__units + iVar2 + 0x28);
    }
    else {
      iVar3 = (int)**(char **)(param_1 + 8);
      if (iVar3 == 0x4b) {
        iVar3 = *(int *)(f__units + iVar2 + 0x28);
      }
      else {
        iVar1 = iVar3 + -100;
        if (iVar3 < 0x4c) {
          iVar1 = iVar3 + -0x44;
        }
        if (iVar1 == 0) goto LAB_00014c70;
        iVar3 = *(int *)(f__units + iVar2 + 0x28);
      }
    }
    if (iVar3 == 1) {
      t_runc(param_1);
      iVar3 = *(int *)(f__units + iVar2 + 4);
    }
    else {
      iVar3 = *(int *)(f__units + iVar2 + 4);
    }
    if (iVar3 == 0) {
      *ppFVar4 = (FILE *)0x0;
    }
    else {
      fclose(*ppFVar4);
      free(*(void **)(f__units + iVar2 + 4));
      *ppFVar4 = (FILE *)0x0;
    }
  }
LAB_00014c9c:
  *(undefined4 *)(f__units + iVar2 + 4) = 0;
  *(undefined4 *)(f__units + iVar2 + 0x24) = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00014cac)
// WARNING: Removing unreachable block (ram,0x00014cf4)

undefined4 f_exit(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (((f__init & 1) != 0) && (f__init = f__init & 0xfffffffd, xx_6._0_4_ == 0)) {
    xx_6._0_4_ = 1;
    xx_6._8_4_ = 0;
    xx_6._4_4_ = 0;
    iVar2 = xx_6._4_4_;
    do {
      xx_6._4_4_ = iVar2;
      iVar1 = xx_6._4_4_;
      f_clos(xx_6);
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
  undefined1 *puVar2;
  bool bVar3;
  
  puVar2 = f__units;
  iVar1 = 99;
  do {
    if (*(FILE **)puVar2 == (FILE *)0x0) {
      bVar3 = iVar1 + -1 < 0;
    }
    else {
      if (((FILE **)puVar2)[10] == (FILE *)0x0) {
        bVar3 = iVar1 + -1 < 0;
      }
      else {
        fflush(*(FILE **)puVar2);
        bVar3 = iVar1 + -1 < 0;
      }
    }
    iVar1 = iVar1 + -1;
    puVar2 = (undefined1 *)((FILE **)puVar2 + 0xc);
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
  undefined1 *puVar2;
  undefined4 uVar3;
  char acStack32 [32];
  
  if ((f__init & 2) != 0) {
    f__fatal(0x83,"I/O recursion");
  }
  uVar1 = param_1[1];
  if (uVar1 < 100) {
    puVar2 = f__units + uVar1 * 0x30;
    if (*(int *)(f__units + uVar1 * 0x30) == 0) {
      sprintf(acStack32,"fort.%ld",uVar1);
      __stream = fopen(acStack32,f__w_mode._0_4_);
      param_1 = (int *)0x0;
      if (__stream == (FILE *)0x0) {
        return 0;
      }
      fclose(__stream);
    }
    *(undefined4 *)(puVar2 + 0x24) = 1;
    if (*(int *)(puVar2 + 0x14) == 0) {
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
  undefined auStack1040 [1040];
  
  do {
    __size = src;
    if (0x400 < (int)src) {
      __size = (EVP_PKEY_CTX *)0x400;
    }
    sVar1 = fread(auStack1040,(size_t)__size,1,(FILE *)dst);
    if (sVar1 == 0) {
      return 0;
    }
    sVar1 = fwrite(auStack1040,(size_t)__size,1,in_o2);
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
  FILE *__stream_00;
  int iVar3;
  bool bVar4;
  
  iVar3 = param_1[1] * 0x30;
  bVar4 = false;
  if (*(int *)(f__units + iVar3 + 0x10) == 0) {
    __stream_00 = *(FILE **)(f__units + iVar3);
    src = (EVP_PKEY_CTX *)ftell(__stream_00);
    fseek(__stream_00,0,2);
    lVar1 = ftell(__stream_00);
    if (lVar1 <= (int)src) {
      return 0;
    }
    if (*(int *)(f__units + iVar3 + 0x14) == 0) {
      return 0;
    }
    if (*(int *)(f__units + iVar3 + 4) == 0) {
      return 0;
    }
    fclose(*(FILE **)(f__units + iVar3));
    if (src == (EVP_PKEY_CTX *)0x0) {
      __stream_00 = fopen(*(char **)(f__units + iVar3 + 4),
                          *(char **)(f__w_mode + *(int *)(f__units + iVar3 + 0x18) * 4));
      bVar4 = __stream_00 == (FILE *)0x0;
      if (*(int *)(f__units + iVar3 + 0x28) != 0) {
        *(undefined4 *)(f__units + iVar3 + 0x28) = 1;
      }
    }
    else {
      __stream_00 = fopen(*(char **)(f__units + iVar3 + 4),f__r_mode);
      if (__stream_00 == (FILE *)0x0) {
        bVar4 = true;
      }
      else {
        __stream = tmpfile();
        if (__stream == (FILE *)0x0) {
          bVar4 = true;
        }
        else {
          iVar2 = copy((EVP_PKEY_CTX *)__stream_00,src);
          if (iVar2 == 0) {
            __stream_00 = freopen(*(char **)(f__units + iVar3 + 4),f__w_mode._0_4_,__stream_00);
            if (__stream_00 == (FILE *)0x0) {
              bVar4 = true;
            }
            else {
              rewind(__stream);
              iVar2 = copy((EVP_PKEY_CTX *)__stream,src);
              if (iVar2 == 0) {
                *(undefined4 *)(f__units + iVar3 + 0x1c) = 2;
              }
              else {
                bVar4 = true;
              }
            }
          }
          else {
            bVar4 = true;
          }
          fclose(__stream);
        }
      }
    }
    f__cf = __stream_00;
    *(FILE **)(f__units + iVar3) = __stream_00;
    if (bVar4) {
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

uint f__canseek(FILE *param_1)

{
  int __fd;
  stat sStack152;
  
  __fd = fileno(param_1);
  __fd = fstat(__fd,&sStack152);
  if (__fd < 0) {
    return 0;
  }
  sStack152.st_nlink = sStack152.st_nlink & 0xf000;
  if (sStack152.st_nlink != 0x4000) {
    if (sStack152.st_nlink < 0x4001) {
      if (sStack152.st_nlink != 0x2000) {
        return 0;
      }
      __fd = fileno(param_1);
      __fd = isatty(__fd);
      return (uint)(__fd == 0);
    }
    if (sStack152.st_nlink == 0x6000) {
      return 1;
    }
    if (sStack152.st_nlink != 0x8000) {
      return 0;
    }
  }
  return (uint)(sStack152.st_uid != 0);
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
  char *__format;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 < 100) {
    perror(param_2);
  }
  else {
    if (param_1 + 1 < 0x86) {
      if (param_1 == 0xffffffff) {
        fprintf((FILE *)(_iob + 0x20),"%s: end of file\n");
      }
      else {
        fprintf((FILE *)(_iob + 0x20),"%s: %s\n",param_2,
                *(undefined4 *)(F_err + (param_1 - 100) * 4));
      }
    }
    else {
      fprintf((FILE *)(_iob + 0x20),"%s: illegal error number %d\n");
    }
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
          __format = "(unnamed)\n";
        }
        else {
          __format = "named %s\n";
        }
        fprintf((FILE *)(_iob + 0x20),__format,*(undefined4 *)(f__curunit + 4));
      }
      if (f__fmtbuf != 0) {
        fprintf((FILE *)(_iob + 0x20),"last format: %.*s\n",f__fmtlen);
      }
      if (f__reading == 0) {
        __format = "writing";
      }
      else {
        __format = "reading";
      }
      if (f__sequential == 0) {
        pcVar1 = "direct";
      }
      else {
        pcVar1 = "sequential";
      }
      if (f__formatted == 0) {
        pcVar2 = "unformatted";
      }
      else {
        pcVar2 = "formatted";
      }
      if (f__external == 0) {
        pcVar3 = "internal";
      }
      else {
        pcVar3 = "external";
      }
      fprintf((FILE *)(_iob + 0x20),"lately %s %s %s %s",__format,pcVar1,pcVar2,pcVar3);
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
  f__units._0_4_ = 0x2c3b8;
  f__init = 1;
  f__units._20_4_ = f__canseek(0x2c3b8);
  f__units._24_4_ = 1;
  f__units._40_4_ = 1;
  f__units._240_4_ = _iob;
  f__units._260_4_ = f__canseek(_iob);
  f__units._264_4_ = 1;
  f__units._280_4_ = 0;
  f__units._288_4_ = 0x2c3a8;
  f__units._308_4_ = f__canseek(0x2c3a8);
  f__units._312_4_ = 1;
  f__units._328_4_ = 1;
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
  FILE *__stream;
  FILE *pFVar2;
  
  if (((uint)param_1[7] & 1) == 0) {
    if (param_1[1] == (FILE *)0x0) {
      errno = 0x7e;
      return 1;
    }
    __stream = (FILE *)0x0;
    if (param_1[4] == (FILE *)0x0) {
      __stream = param_1[6];
    }
    pFVar2 = (FILE *)0x3;
    __off = ftell(*param_1);
    pFVar1 = freopen((char *)param_1[1],*(char **)(f__w_mode + ((uint)__stream | 2) * 4),*param_1);
    if (pFVar1 == (FILE *)0x0) {
      pFVar2 = (FILE *)0x1;
      __stream = freopen((char *)param_1[1],(&f__r_mode)[(int)__stream],*param_1);
      if (__stream == (FILE *)0x0) {
        errno = 0x7e;
        return 1;
      }
      __stream = *param_1;
    }
    else {
      __stream = *param_1;
    }
    fseek(__stream,__off,0);
    param_1[7] = pFVar2;
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
  FILE *__stream;
  
  if (((uint)param_1[7] & 2) != 0) goto LAB_0001565c;
  if (param_1[1] != (FILE *)0x0) {
    __stream = (FILE *)0x0;
    if (param_1[4] == (FILE *)0x0) {
      __stream = param_1[6];
    }
    if (param_1[10] == (FILE *)0x3) {
      f__cf = freopen((char *)param_1[1],*(char **)(f__w_mode + (int)__stream * 4),*param_1);
      *param_1 = f__cf;
      if (f__cf != (FILE *)0x0) {
        param_1[7] = (FILE *)0x2;
        goto LAB_0001565c;
      }
    }
    else {
      __off = ftell(*param_1);
      __stream = freopen((char *)param_1[1],*(char **)(f__w_mode + ((uint)__stream | 2) * 4),
                         *param_1);
      *param_1 = __stream;
      f__cf = __stream;
      if (__stream != (FILE *)0x0) {
        param_1[7] = (FILE *)0x3;
        fseek(__stream,__off,0);
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
// err(float, long)

long err(float param_1,long param_2)

{
  undefined4 in_o2;
  
  if (param_1 == 0.00000000) {
    f__fatal(param_2,in_o2);
  }
  if (f__doend != (code *)0x0) {
    (*f__doend)();
  }
  errno = param_2;
  f__init = f__init & 0xfffffffd;
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
      return (char *)0;
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
    if ((int)cVar1 != 0x20) {
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

uint ne_d(byte *param_1,byte **param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14 [5];
  
  bVar2 = false;
  switch((int)(((uint)*param_1 - 2) * 0x1000000) >> 0x18) {
  case 0:
  case 0x20:
  case 0x25:
    iVar4 = op_gen(0xb,0,0,0);
    *(byte **)(f__syl + iVar4 * 0x10 + 8) = param_1;
    pbVar3 = (byte *)ap_end(param_1);
    *param_2 = pbVar3;
    return (uint)(pbVar3 != (byte *)0x0);
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
    else {
      if ((bVar1 == 0x70) || (uVar5 = 0x11, bVar1 == 0x50)) {
        uVar5 = 0x12;
        param_1 = param_1 + 1;
      }
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
    else {
      if ((bVar1 == 0x72) || (uVar5 = 0xf, bVar1 == 0x52)) {
        uVar5 = 0xe;
        param_1 = param_1 + 1;
      }
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
  return 1;
switchD_00015900_caseD_2e:
  param_1 = (byte *)gt_num(param_1,local_14,0);
  if (param_1 == (byte *)0x0) {
LAB_000159c8:
    *param_2 = (byte *)0x0;
    return 1;
  }
  switch((int)(((uint)*param_1 - 0x48) * 0x1000000) >> 0x18) {
  case 0:
  case 0x20:
    iVar4 = op_gen(0xc,local_14[0],0,0);
    *(byte **)(f__syl + iVar4 * 0x10 + 8) = param_1 + 1;
    param_1 = param_1 + local_14[0];
    goto LAB_00015b40;
  default:
LAB_00015b48:
    return 0;
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

uint e_d(byte *param_1,byte **param_2)

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
  switch((int)(((uint)*pbVar3 - 0x41) * 0x1000000) >> 0x18) {
  case 0:
  case 0x20:
    bVar7 = true;
    if (*pbVar6 == 0x20) {
      pbVar6 = pbVar3 + 2;
      while (*pbVar6 == 0x20) {
        pbVar6 = pbVar6 + 1;
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
          return 1;
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
      return 1;
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
  return (uint)!bVar7;
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
      return (char *)0;
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
  return (char *)0;
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
      *(undefined4 *)(f__ret + f__rp * 4) = *(undefined4 *)(f__syl + iVar4 + 4);
      f__pc = f__pc + 1;
      goto LAB_000165c4;
    case 2:
      f__pc = *(int *)(f__syl + iVar4 + 4);
      f__cp = 0;
      f__rp = 0;
      if (param_2 == 0) {
LAB_000168f0:
        uVar2 = (*f__doend)();
        return uVar2;
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
      iVar4 = *(int *)(f__cnt + f__cp * 4);
      *(int *)(f__cnt + f__cp * 4) = iVar4 + -1;
      if (iVar4 + -1 < 1) {
        f__cp = iVar3 + -1;
        f__rp = f__rp + -1;
        f__pc = f__pc + 1;
      }
      else {
        f__pc = *(int *)(f__ret + f__rp * 4) + 1;
        f__rp = f__rp + -1;
      }
      goto LAB_000165c4;
    default:
      fprintf((FILE *)(_iob + 0x20),"unknown code in do_fio: %d\n%.*s\n",*puVar5,f__fmtlen,f__fmtbuf
             );
      if (*f__elist == 0.00000000) {
        f__fatal(100,"do_fio");
      }
      else {
        f__init = f__init & 0xfffffffd;
        errno = 100;
      }
      return 100;
    case 6:
      f__cp = f__cp + 1;
      *(undefined4 *)(f__cnt + f__cp * 4) = *(undefined4 *)(f__syl + iVar4 + 4);
      f__pc = f__pc + 1;
      goto LAB_000165c4;
    case 8:
      if (*(int *)(f__cnt + f__cp * 4) < 1) {
        f__cp = f__cp + -1;
        f__pc = f__pc + 1;
        goto LAB_000165c4;
      }
      if (param_2 == 0) goto LAB_000168f0;
      *(int *)(f__cnt + f__cp * 4) = *(int *)(f__cnt + f__cp * 4) + -1;
      f__workdone = 1;
      iVar3 = (*pcVar1)(puVar5,param_2,param_3);
      if (0 < iVar3) {
        uVar2 = err(*f__elist,errno);
        return uVar2;
      }
      if (iVar3 < 0) {
        if (f__elist[2] == 0.00000000) {
          f__fatal(0xffffffff,&DAT_0001a770);
        }
        else {
          f__init = f__init & 0xfffffffd;
          errno = -1;
        }
        return 0xffffffff;
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
  f__cp = 0;
  f__pc = 0;
  f__rp = 0;
  f__cursor = 0;
  f__cnt._0_4_ = 0;
  f__ret._0_4_ = 0;
  f__workdone = 0;
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
  char cVar1;
  char *pcVar2;
  int local_18;
  int local_14 [5];
  
  pcVar2 = (char *)f__icvt(param_1,param_2,local_14,&local_18,10);
  if (L_len <= f__recpos + local_14[0]) {
    donewrec();
  }
  (*f__putn)(0x20);
  if (local_18 == 0) {
    cVar1 = *pcVar2;
  }
  else {
    (*f__putn)(0x2d);
    cVar1 = *pcVar2;
  }
  while (cVar1 != '\0') {
    (*f__putn)((int)*pcVar2);
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return pcVar2;
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
    while ((*f__putn)(iVar6), param_1 < pcVar5) {
      iVar6 = (int)*param_1;
      if (iVar6 == 0x27) {
        (*f__putn)(0x27);
        iVar6 = (int)*param_1;
      }
      param_1 = param_1 + 1;
    }
    (*f__putn)(0x27);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00016d64)
// WARNING: Removing unreachable block (ram,0x00016df0)

char * l_g(undefined *param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  undefined uVar2;
  char cVar3;
  char *__s;
  bool bVar4;
  double local_18;
  
  local_18 = (double)CONCAT44(param_2,param_3);
  uVar2 = 0x20;
  cVar3 = (local_18 < 0.00000000) + (0.00000000 < local_18) * '\x02';
  *param_1 = 0x20;
  if ((cVar3 != '\0' && cVar3 != '\x02') && cVar3 != '\x03') {
    param_2 = -param_2;
    uVar2 = 0x2d;
  }
  param_1[1] = uVar2;
  cVar3 = ((double)CONCAT44(param_2,param_3) < 0.00000000) +
          (0.00000000 < (double)CONCAT44(param_2,param_3)) * '\x02';
  __s = param_1 + 2;
  if ((cVar3 != '\x01' && cVar3 != '\x02') && cVar3 != '\x03') {
    *__s = '0';
    __s = param_1 + 3;
    *__s = '.';
LAB_00016e8c:
    __s[1] = '\0';
    return __s + 1 + -(int)param_1;
  }
  sprintf(__s,"%.9G",param_2,param_3,param_2);
  cVar3 = *__s;
  if (cVar3 == 'N') {
    __s = param_1 + 3;
  }
  else {
    if (cVar3 < 'O') {
      if (cVar3 != 'I') {
        while( true ) {
          while( true ) {
            if (cVar3 == 'E') {
              *__s = '.';
              cVar3 = 'E';
              do {
                __s = __s + 1;
                cVar1 = *__s;
                bVar4 = cVar3 != '\0';
                *__s = cVar3;
                cVar3 = cVar1;
              } while (bVar4);
              return __s + -(int)param_1;
            }
            if (cVar3 < 'F') break;
            __s = __s + 1;
LAB_00016e54:
            cVar3 = *__s;
          }
          if (cVar3 == '\0') break;
          __s = __s + 1;
          if (cVar3 == '.') {
            while (*__s != '\0') {
              __s = __s + 1;
            }
            return __s + -(int)param_1;
          }
          cVar3 = *__s;
        }
        *__s = '.';
        goto LAB_00016e8c;
      }
      __s = param_1 + 3;
    }
    else {
      if (cVar3 == 'i') {
        __s = param_1 + 3;
      }
      else {
        if (cVar3 != 'n') goto LAB_00016e54;
        __s = param_1 + 3;
      }
    }
  }
  while (*__s != '\0') {
    __s = __s + 1;
  }
  return __s + -(int)param_1;
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
    if ((int)cVar1 == 0) break;
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
  undefined auStack40 [40];
  
  iVar1 = l_g(auStack40,param_1,param_2);
  if (L_len <= f__recpos + iVar1) {
    donewrec();
  }
  l_put(auStack40);
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
    local_28 = *pcVar3;
    iVar1 = iVar1 + -1;
  }
  iVar2 = l_g(pcVar4,param_3,param_4);
  iVar2 = iVar2 + 1;
  while (local_40 == ' ') {
    pcVar4 = pcVar4 + 1;
    local_40 = *pcVar4;
    iVar2 = iVar2 + -1;
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
// WARNING: Heritage AFTER dead removal. Example location: o1 : 0x000171a0
// WARNING: Restarted to delay deadcode elimination for space: register

void l_write(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_o0_1;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 in_o2_3;
  int iVar8;
  
  piVar1 = (int *)((ulonglong)in_o0_1 >> 0x20);
  puVar4 = (undefined8 *)in_o0_1;
  iVar8 = 0;
  if (0 < *piVar1) {
    do {
      uVar5 = (undefined4)in_o0_1;
      puVar6 = (&switchdataD_000171c4)[(int)in_o2_3 + -2];
      switch((int)in_o2_3) {
      case 2:
        iVar2 = (uint)*(ushort *)puVar4 << 0x10;
        goto LAB_0001710c;
      case 3:
        iVar2 = *(int *)puVar4;
        goto LAB_0001710c;
      case 4:
        uVar3 = (undefined4)((ulonglong)(double)*(float *)puVar4 >> 0x20);
        uVar5 = SUB84((double)*(float *)puVar4,0);
        goto LAB_0001713c;
      case 5:
        uVar3 = (undefined4)((ulonglong)*puVar4 >> 0x20);
        uVar5 = (undefined4)*puVar4;
LAB_0001713c:
        lwrt_F(uVar3,uVar5,puVar6);
        iVar2 = *piVar1;
        break;
      case 6:
        uVar3 = (undefined4)((ulonglong)(double)*(float *)puVar4 >> 0x20);
        uVar5 = SUB84((double)*(float *)puVar4,0);
        uVar7 = (undefined4)((ulonglong)(double)*(float *)((int)puVar4 + 4) >> 0x20);
        goto LAB_00017178;
      case 7:
        uVar3 = (undefined4)((ulonglong)*puVar4 >> 0x20);
        uVar5 = (undefined4)*puVar4;
        uVar7 = (undefined4)((ulonglong)puVar4[1] >> 0x20);
LAB_00017178:
        lwrt_C(uVar3,uVar5,uVar7);
        iVar2 = *piVar1;
        break;
      case 8:
      case 0xc:
      case 0xd:
        lwrt_L(*(int *)puVar4,uVar5,puVar6);
        iVar2 = *piVar1;
        break;
      case 9:
        lwrt_A(puVar4,uVar5,puVar6);
        iVar2 = *piVar1;
        break;
      default:
        f__fatal(0xcc);
      case 0xb:
        iVar2 = (uint)*(byte *)puVar4 << 0x18;
LAB_0001710c:
        iVar2 = iVar2 >> 0x1f;
LAB_00017110:
        lwrt_I(iVar2,uVar5,iVar2);
        iVar2 = *piVar1;
        break;
      case 0xe:
        iVar2 = (int)((ulonglong)*puVar4 >> 0x20);
        goto LAB_00017110;
      }
      in_o0_1 = CONCAT44(iVar2,uVar5);
      iVar8 = iVar8 + 1;
      puVar4 = (undefined8 *)((int)puVar4 + (int)((ulonglong)in_o2_3 >> 0x20));
    } while (iVar8 < iVar2);
  }
  return;
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
  byte abStack24 [24];
  
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
        iVar9 = (int)(pbVar6 + -(int)pbVar8 + 1) >> 1;
        if (one_4._0_1_ == '\0') {
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
          else {
            if (((uint)(pbVar6 + -(int)pbVar8) & 1) != 0) {
              pbVar8 = local_38 + 1;
              param_3 = param_3 - 1;
              *param_1 = hex_3[local_38[0]] - 1;
              if (param_3 == 0) {
                return 0;
              }
              param_1 = param_1 + iVar10;
            }
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
    } while ((pbVar6 != abStack24) ||
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
          else {
            if (uVar3 == 0x2d) {
              bVar2 = true;
              goto joined_r0x00017510;
            }
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
  else {
    if (param_3 == 1) {
      *(undefined *)param_1 = uVar10;
    }
    else {
      if (param_3 == 8) {
        *param_1 = CONCAT71(CONCAT61(CONCAT42(iVar7,uVar8),uVar9),uVar10);
      }
      else {
        *(ushort *)param_1 = CONCAT11(uVar9,uVar10);
      }
    }
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
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = param_2 == 0;
  bVar4 = param_2 < 0;
  if (0 < param_2) {
    do {
      iVar1 = (*f__getn)();
      if (iVar1 < 0) {
        return iVar1;
      }
      param_2 = param_2 + -1;
      if (iVar1 != 0x20) {
        iVar3 = 0;
        goto LAB_000176a0;
      }
      bVar5 = param_2 == 0;
      bVar4 = param_2 < 0;
    } while (!bVar5);
  }
LAB_00017740:
  if (!bVar5 && !bVar4) {
    do {
      iVar1 = (*f__getn)();
      param_2 = param_2 + -1;
      if (iVar1 < 0) {
        return iVar1;
      }
    } while (0 < param_2);
  }
  errno = 0x74;
  return 0x74;
LAB_000176a0:
  if (iVar1 == 0x54) {
    uVar2 = 1;
    goto LAB_00017780;
  }
  if (0x54 < iVar1) {
    if (iVar1 == 0x66) {
LAB_00017738:
      uVar2 = 0;
LAB_00017780:
      if (param_3 == 1) {
        *(char *)param_1 = (char)uVar2;
      }
      else {
        if (param_3 == 2) {
          *(short *)param_1 = (short)uVar2;
        }
        else {
          *param_1 = uVar2;
        }
      }
      do {
        bVar4 = param_2 < 1;
        param_2 = param_2 + -1;
        if (bVar4) {
          return 0;
        }
        iVar1 = (*f__getn)();
        if (iVar1 < 0) {
          return iVar1;
        }
        if (iVar1 == 0x2c) {
          return 0;
        }
      } while (iVar1 != 10);
      return 0;
    }
    bVar5 = param_2 == 0;
    bVar4 = param_2 < 0;
    if (iVar1 == 0x74) {
      uVar2 = 1;
      goto LAB_00017780;
    }
    goto LAB_00017740;
  }
  if (iVar1 != 0x2e) {
    if (iVar1 < 0x2f) {
      if (iVar1 == 10) {
        errno = 0x74;
        return 0x74;
      }
      bVar5 = param_2 == 0;
      bVar4 = param_2 < 0;
      if (iVar1 == 0x2c) {
        errno = 0x74;
        return 0x74;
      }
    }
    else {
      bVar5 = param_2 == 0;
      bVar4 = param_2 < 0;
      if (iVar1 == 0x46) goto LAB_00017738;
    }
    goto LAB_00017740;
  }
  iVar3 = iVar3 + 1;
  bVar5 = param_2 == 0;
  bVar4 = param_2 < 0;
  if ((iVar3 != 1) || (bVar5)) goto LAB_00017740;
  iVar1 = (*f__getn)();
  param_2 = param_2 + -1;
  if (iVar1 < 0) {
    return iVar1;
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
  undefined uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = (*f__getn)();
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar2 = 0x20;
      if (iVar1 != 10) {
        uVar2 = (char)iVar1;
      }
      iVar3 = iVar3 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    } while (iVar3 < param_2);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00017de8)

int rd_AW(undefined *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined uVar2;
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
        uVar2 = 0x20;
        if (iVar1 != 10) {
          uVar2 = (char)iVar1;
        }
        iVar4 = iVar4 + 1;
        *puVar3 = uVar2;
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
        uVar2 = 0x20;
        if (iVar1 != 10) {
          uVar2 = (char)iVar1;
        }
        iVar4 = iVar4 + 1;
        *param_1 = uVar2;
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
  undefined uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1) {
    do {
      iVar1 = (*f__getn)();
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar2 = 0x20;
      if (iVar1 != 10) {
        uVar2 = (char)iVar1;
      }
      iVar3 = iVar3 + 1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    } while (iVar3 < param_1);
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00017f80)

int rd_POS(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  param_1 = param_1 + 1;
  iVar2._3_1_ = *param_1;
  while (((char)iVar2 != '\0' && (((char)iVar2 != cVar1 || (param_1[1] == (char)iVar2))))) {
    iVar2 = (*f__getn)();
    iVar2._3_1_ = (char)iVar2;
    if (iVar2 < 0) {
      return iVar2;
    }
    if (iVar2 == 10) {
      iVar2._3_1_ = ' ';
    }
    *param_1 = (char)iVar2;
    param_1 = param_1 + 1;
    iVar2._3_1_ = *param_1;
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
    iVar1 = rd_Z(param_2,param_1[1],param_3,uVar2);
    bVar3 = iVar1 == 0;
  }
  if (bVar3) {
    uVar2 = 0;
  }
  else {
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = errno;
      if (f__cf != (FILE *)0x0) {
        *(byte *)&f__cf->_IO_read_base = *(byte *)&f__cf->_IO_read_base & 0xcf;
        uVar2 = errno;
      }
    }
  }
  return uVar2;
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
  
  if (one_6._0_1_ == '\0') {
    pbVar3 = param_1 + param_4 + -1;
    iVar4 = 1;
  }
  else {
    iVar4 = -1;
    pbVar3 = param_1;
    param_1 = param_1 + param_4 + -1;
  }
  while ((param_1 != pbVar3 && (*param_1 == 0))) {
    param_1 = param_1 + iVar4;
  }
  iVar2 = umul(iVar4,pbVar3 + -(int)param_1);
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
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    while (iVar5 <= param_2) {
      (*f__putn)(0x20);
      param_2 = param_2 + -1;
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
      (*f__putn)((int)hex_7[(uint)*param_1 & 0xf]);
      if (param_1 == pbVar3) {
        return 0;
      }
      param_1 = param_1 + iVar4;
    }
    while( true ) {
      (*f__putn)((int)hex_7[*param_1 >> 4]);
      (*f__putn)((int)hex_7[(uint)*param_1 & 0xf]);
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

void wrt_I(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_o0_1;
  undefined8 in_o2_3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int local_18;
  int aiStack20 [5];
  
  iVar6 = (int)in_o0_1;
  puVar2 = (undefined8 *)((ulonglong)in_o0_1 >> 0x20);
  iVar3 = (int)((ulonglong)in_o2_3 >> 0x20);
  if (iVar3 == 4) {
    iVar3 = *(int *)puVar2;
  }
  else {
    if (iVar3 == 1) {
      iVar3 = (int)(((ulonglong)*(byte *)puVar2 << 0x38) >> 0x20);
    }
    else {
      if (iVar3 == 8) {
        pcVar5 = (char *)((ulonglong)*puVar2 >> 0x20);
        uVar4 = (undefined4)*puVar2;
        goto LAB_000188d8;
      }
      iVar3 = (int)(((ulonglong)*(ushort *)puVar2 << 0x30) >> 0x20);
    }
  }
  pcVar5 = (char *)(iVar3 >> 0x1f);
  uVar4 = (int)in_o2_3;
LAB_000188d8:
  f__icvt(pcVar5,iVar6,aiStack20,uVar4,(int)in_o2_3);
  iVar3 = iVar6 - aiStack20[0];
  if ((local_18 != 0) || (f__cplus != 0)) {
    iVar3 = iVar3 + -1;
  }
  if (iVar3 < 0) {
    if (0 < iVar6) {
      do {
        (*f__putn)(0x2a);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    if (0 < iVar3) {
      do {
        (*f__putn)(0x20);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_18 == 0) {
      if (f__cplus != 0) {
        (*f__putn)(0x2b);
      }
    }
    else {
      (*f__putn)(0x2d);
    }
    iVar6 = 0;
    if (0 < aiStack20[0]) {
      cVar1 = *pcVar5;
      while( true ) {
        iVar6 = iVar6 + 1;
        pcVar5 = pcVar5 + 1;
        (*f__putn)((int)cVar1);
        if (aiStack20[0] <= iVar6) break;
        cVar1 = *pcVar5;
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000189f8)
// WARNING: Removing unreachable block (ram,0x00018a5c)

undefined4 wrt_IM(undefined8 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  int local_18;
  int local_14 [5];
  
  if (param_4 == 4) {
    iVar2 = *(int *)param_1;
    iVar3 = iVar2;
  }
  else {
    if (param_4 == 1) {
      iVar2 = (uint)*(byte *)param_1 << 0x18;
      iVar3 = iVar2 >> 0x18;
    }
    else {
      if (param_4 == 8) {
        uVar5 = *param_1;
        goto LAB_00018a50;
      }
      iVar2 = (uint)*(ushort *)param_1 << 0x10;
      iVar3 = iVar2 >> 0x10;
    }
  }
  uVar5 = CONCAT44(iVar2 >> 0x1f,iVar3);
LAB_00018a50:
  pcVar7 = (char *)f__icvt((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,local_14,&local_18,param_5);
  if ((local_18 != 0) || (iVar3 = 0, f__cplus != 0)) {
    iVar3 = 1;
  }
  if ((param_2 < local_14[0] + iVar3) || (param_2 < param_3 + iVar3)) {
    if (0 < param_2) {
      iVar3 = 0x2d800;
      pcVar4 = f__putn;
      do {
        (*pcVar4)(0x2a);
        param_2 = param_2 + -1;
        pcVar4 = *(code **)(iVar3 + 0x2a4);
      } while (param_2 != 0);
    }
  }
  else {
    if ((((uint)((ulonglong)uVar5 >> 0x20) | (uint)uVar5) == 0) && (param_3 == 0)) {
      if (0 < param_2) {
        iVar3 = 0x2d800;
        pcVar4 = f__putn;
        do {
          (*pcVar4)(0x20);
          param_2 = param_2 + -1;
          pcVar4 = *(code **)(iVar3 + 0x2a4);
        } while (param_2 != 0);
      }
    }
    else {
      iVar2 = local_14[0];
      if (local_14[0] < param_3) {
        iVar2 = param_3;
      }
      iVar3 = (param_2 - iVar2) - iVar3;
      if (0 < iVar3) {
        iVar2 = 0x2d800;
        pcVar4 = f__putn;
        do {
          (*pcVar4)(0x20);
          iVar3 = iVar3 + -1;
          pcVar4 = *(code **)(iVar2 + 0x2a4);
        } while (iVar3 != 0);
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
      if (0 < param_3 - local_14[0]) {
        do {
          (*f__putn)(0x30);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_3 - local_14[0]);
      }
      uVar6 = 0;
      if (0 < local_14[0]) {
        cVar1 = *pcVar7;
        while( true ) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          pcVar7 = pcVar7 + 1;
          (*f__putn)((int)cVar1);
          if (local_14[0] <= (int)uVar6) break;
          cVar1 = *pcVar7;
        }
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
  else {
    if (param_3 == 1) {
      iVar1 = (int)*(char *)param_1;
    }
    else {
      iVar1 = (int)*(short *)param_1;
    }
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
  while (0 < param_2) {
    param_2 = param_2 + -1;
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
  dVar7 = 1.00000000;
  iVar5 = 0;
  if (param_5 == 4) {
    dVar6 = (double)*(float *)param_1;
  }
  else {
    dVar6 = *param_1;
  }
  if ((char)((dVar6 < 0.00000000) + (0.00000000 < dVar6) * '\x02') == '\x01') {
    dVar6 = (double)((ulonglong)dVar6 & 0xffffffff |
                    (ulonglong)(uint)-(float)((ulonglong)dVar6 >> 0x20) << 0x20);
  }
  cVar1 = (dVar6 < 0.10000000) + (0.10000000 < dVar6) * '\x02';
  bVar8 = false;
  iVar4 = -param_3;
  if ((cVar1 == '\0' || cVar1 == '\x02') || cVar1 == '\x03') {
    while (cVar1 = (dVar6 < dVar7) + (dVar7 < dVar6) * '\x02', iVar4 == 0 || iVar4 < 0 != bVar8) {
      if (cVar1 != '\0' && cVar1 != '\x02') goto LAB_00018ef0;
      dVar7 = dVar7 * 10.00000000;
      iVar5 = iVar5 + 1;
      bVar8 = SBORROW4(iVar5,param_3);
      iVar4 = iVar5 - param_3;
    }
  }
  else {
    cVar1 = (dVar6 < 0.00000000) + (0.00000000 < dVar6) * '\x02';
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
  uVar3 = wrt_E(param_1,param_2);
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
    uVar1 = wrt_I(param_2,param_1[1],param_3,10);
    break;
  case 10:
    uVar1 = wrt_IM(param_2,param_1[1],param_1[2],param_3,10);
    break;
  case 0x17:
    uVar1 = wrt_F(param_2,param_1[1],param_1[2],param_3);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
    uVar1 = wrt_E(param_2,param_1[1],param_1[2],param_1[3],param_3);
    break;
  case 0x1b:
  case 0x1c:
    uVar1 = wrt_G(param_2,param_1[1],param_1[2],param_1[3],param_3);
    break;
  case 0x1d:
    uVar1 = wrt_L(param_2,param_1[1],param_3);
    break;
  case 0x1e:
    uVar1 = wrt_A(param_2,param_3);
    break;
  case 0x1f:
    uVar1 = wrt_AW(param_2,param_1[1],param_3,uVar1);
    break;
  case 0x20:
    uVar1 = wrt_I(param_2,param_1[1],param_3,8);
    break;
  case 0x22:
    uVar1 = wrt_IM(param_2,param_1[1],param_1[2],param_3,8);
    break;
  case 0x23:
    uVar1 = param_1[1];
    uVar3 = 0;
    goto LAB_00019114;
  case 0x24:
    uVar3 = param_1[2];
    uVar1 = param_1[1];
LAB_00019114:
    uVar1 = wrt_Z(param_2,uVar1,uVar3,param_3);
  }
  return uVar1;
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

uint x_wSL(void)

{
  int iVar1;
  
  iVar1 = f__putbuf(10);
  f__cursor = 0;
  f__recpos = 0;
  f__hiwater = 0;
  return (uint)(iVar1 == 0);
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
    f__cf = *(undefined4 *)(f__units + param_1[1] * 0x30);
    f__fmtbuf = param_1[3];
    f__curunit = f__units + param_1[1] * 0x30;
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
      f__cblank = *(undefined4 *)(f__curunit + 0x20);
      f__cplus = 0;
      if (*(int *)(f__curunit + 0x28) == 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = f__nowwriting(f__curunit);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          if (*param_1 == 0) {
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
  char cVar2;
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
    cVar2 = (char)param_2;
    __urem64(param_1,param_2,param_5 >> 0x1f,param_5);
    hex_3[iVar3 + 0xff] = cVar2 + '0';
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
  cVar2 = (dVar14 < 0.00000000) + (0.00000000 < dVar14) * '\x02';
  if ((cVar2 == '\0' || cVar2 == '\x02') || cVar2 == '\x03') {
    cVar2 = (dVar14 < 0.00000000) + (0.00000000 < dVar14) * '\x02';
    bVar3 = false;
    iVar11 = f__cplus;
    if ((cVar2 != '\x01' && cVar2 != '\x02') && cVar2 != '\x03') {
      dVar14 = 0.00000000;
    }
  }
  else {
    bVar3 = true;
    iVar11 = 1;
    dVar14 = (double)((ulonglong)dVar14 & 0xffffffff |
                     (ulonglong)(uint)-(float)((ulonglong)dVar14 >> 0x20) << 0x20);
  }
  iVar12 = param_2 - (iVar11 + param_3 + 4 + iVar13);
  if ((f__scale < 1) && (0 < iVar12)) {
    iVar12 = iVar12 + -1;
    bVar15 = true;
  }
  else {
    if (iVar12 < 0) {
LAB_000197ec:
      bVar15 = param_2 + -1 < 0;
      goto LAB_000197f0;
    }
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
  if ((char)((dVar14 < 0.00000000) + (0.00000000 < dVar14) * '\x02') == '\0') {
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
  cVar2 = *pcVar9;
  iVar6 = 2;
  while (cVar2 != '\0') {
    pcVar9 = pcVar9 + 1;
    if (iVar13 <= iVar6) goto LAB_000197ec;
    cVar2 = *pcVar9;
    iVar6 = iVar6 + 1;
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
    while (iVar11 < 0) {
      (*f__putn)(0x30);
      iVar11 = iVar11 + 1;
    }
    (*f__putn)((int)local_48);
  }
  else {
    if (1 < f__scale) {
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
    cVar2 = *__s;
    cVar1 = *__s;
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
  cVar2 = (local_10 < 0.00000000) + (0.00000000 < local_10) * '\x02';
  cVar3 = (local_10 < 0.00000000) + (0.00000000 < local_10) * '\x02';
  if ((cVar2 == '\0' || cVar2 == '\x02') || cVar2 == '\x03') {
    bVar4 = false;
    if ((cVar3 != '\x01' && cVar3 != '\x02') && cVar3 != '\x03') {
      local_10 = 0.00000000;
    }
  }
  else {
    bVar4 = true;
    local_10 = (double)((ulonglong)local_10 & 0xffffffff |
                       (ulonglong)(uint)-(float)((ulonglong)local_10 >> 0x20) << 0x20);
  }
  __s = local_2a0;
  if (f__scale != 0) {
    iVar6 = f__scale;
    if (f__scale < 1) {
      do {
        iVar6 = iVar6 + 1;
        local_10 = local_10 * 0.10000000;
      } while (iVar6 < 0);
    }
    else {
      do {
        iVar6 = iVar6 + -1;
        local_10 = local_10 * 10.00000000;
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
        param_2 = param_2 + -1;
        while (-1 < param_2) {
          (*f__putn)(0x2a);
          param_2 = param_2 + -1;
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
    else {
      if (f__cplus == 0) {
        iVar6 = (int)*__s;
      }
      else {
        (*f__putn)(0x2b);
        iVar6 = (int)*__s;
      }
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



// WARNING: Unknown calling convention yet parameter storage is locked

int atexit(__func *__func)

{
  IllegalInstructionTrap(0x2a930);
  return (int)__func;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  IllegalInstructionTrap(0x2a93c);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  IllegalInstructionTrap(0x2a978);
  return (int)__nptr;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  IllegalInstructionTrap(0x2a984);
  return (int)__s;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double atof(char *__nptr)

{
  double in_fd0;
  
  IllegalInstructionTrap(0x2a990);
  return in_fd0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  IllegalInstructionTrap(0x2a99c);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  IllegalInstructionTrap(0x2a9a8);
  return (void *)__size;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  IllegalInstructionTrap(0x2a9e4);
  return (int)__s;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  IllegalInstructionTrap(0x2a9f0);
  return (size_t)__s;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int access(char *__name,int __type)

{
  IllegalInstructionTrap(0x2a9fc);
  return (int)__name;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * tempnam(char *__dir,char *__pfx)

{
  IllegalInstructionTrap(0x2aa08);
  return __dir;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  IllegalInstructionTrap(0x2aa14);
  return __dest;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  IllegalInstructionTrap(0x2aa20);
  return (FILE *)__filename;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa2c);
  return (int)__stream;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void rewind(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa38);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  IllegalInstructionTrap(0x2aa44);
  return (int)__stream;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int stat(char *__file,stat *__buf)

{
  IllegalInstructionTrap(0x2aa50);
  return (int)__file;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  IllegalInstructionTrap(0x2aa5c);
  return (__sighandler_t)__sig;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int unlink(char *__name)

{
  IllegalInstructionTrap(0x2aa68);
  return (int)__name;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa74);
  return (int)__stream;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  IllegalInstructionTrap(0x2aa80);
  return (size_t)__ptr;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  IllegalInstructionTrap(0x2aa8c);
  return (size_t)__ptr;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long ftell(FILE *__stream)

{
  IllegalInstructionTrap(0x2aa98);
  return (long)__stream;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * tmpfile(void)

{
  FILE *in_o0;
  
  IllegalInstructionTrap(0x2aaa4);
  return in_o0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * freopen(char *__filename,char *__modes,FILE *__stream)

{
  IllegalInstructionTrap(0x2aab0);
  return (FILE *)__filename;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fileno(FILE *__stream)

{
  IllegalInstructionTrap(0x2aabc);
  return (int)__stream;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fstat(int __fd,stat *__buf)

{
  IllegalInstructionTrap(0x2aac8);
  return __fd;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isatty(int __fd)

{
  IllegalInstructionTrap(0x2aad4);
  return __fd;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void perror(char *__s)

{
  IllegalInstructionTrap(0x2aae0);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  IllegalInstructionTrap(0x2aaec);
  return (int)__stream;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



void umul(void)

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


