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
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct stat stat, *Pstat;

typedef ulong __dev_t;

typedef ulong __ino_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

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
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
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
  
  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
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



void call_gmon_start(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00400652)
// WARNING: Removing unreachable block (ram,0x00400658)

void __do_global_dtors_aux(void)

{
  if (completed_6341 == '\0') {
    completed_6341 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004006a8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  return;
}



void dumpline(byte *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined auStack144 [8];
  undefined4 local_88 [2];
  char local_7f [79];
  
  bVar11 = 0;
  auStack144 = 0x4006e8;
  sprintf((char *)local_88,"%08lX:",param_2);
  iVar9 = 0x10;
  if (param_3 < 0x11) {
    iVar9 = param_3;
  }
  iVar6 = 1;
  iVar10 = (int)param_1;
  if (iVar9 < 1) {
LAB_00400759:
    do {
      uVar3 = 0xffffffffffffffff;
      puVar8 = local_88;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *(char *)puVar8;
        puVar8 = (undefined4 *)((long)puVar8 + (ulong)bVar11 * -2 + 1);
      } while (cVar1 != '\0');
      *(undefined4 *)((long)local_88 + (~uVar3 - 1)) = 0x202020;
      bVar2 = iVar6 < 0x10;
      iVar6 = iVar6 + 1;
    } while (bVar2);
    lVar4 = -1;
    puVar8 = local_88;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *(char *)puVar8;
      puVar8 = (undefined4 *)((long)puVar8 + (ulong)bVar11 * -2 + 1);
    } while (cVar1 != '\0');
    iVar6 = ~(uint)lVar4 - 1;
    *(undefined4 *)((long)local_88 + (long)iVar6) = 0x7c2020;
    iVar7 = ~(uint)lVar4 + 2;
    if (0 < iVar9) goto LAB_004007af;
    iVar9 = 0;
  }
  else {
    iVar6 = 0;
    pbVar5 = param_1;
    do {
      auStack144 = 0x400727;
      sprintf(local_7f + iVar6," %02lX",(ulong)*pbVar5);
      pbVar5 = pbVar5 + 1;
      iVar6 = iVar6 + 3;
    } while ((int)pbVar5 - iVar10 < iVar9);
    if (iVar9 < 0x10) {
      iVar6 = iVar9 + 1;
      goto LAB_00400759;
    }
    lVar4 = -1;
    puVar8 = local_88;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *(char *)puVar8;
      puVar8 = (undefined4 *)((long)puVar8 + (ulong)bVar11 * -2 + 1);
    } while (cVar1 != '\0');
    iVar6 = ~(uint)lVar4 - 1;
    *(undefined4 *)((long)local_88 + (long)iVar6) = 0x7c2020;
    iVar7 = ~(uint)lVar4 + 2;
LAB_004007af:
    pbVar5 = param_1 + (ulong)(iVar9 - 1) + 1;
    do {
      bVar11 = *param_1;
      if (0x5e < (byte)(bVar11 - 0x20)) {
        bVar11 = 0x2e;
      }
      *(byte *)((long)local_88 + (long)((iVar6 - iVar10) + 3 + (int)param_1)) = bVar11;
      param_1 = param_1 + 1;
    } while (param_1 != pbVar5);
    if (0xf < iVar9) goto LAB_00400801;
  }
  iVar6 = iVar9 + iVar7;
  do {
    *(undefined *)((long)local_88 + (long)iVar6) = 0x20;
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar9 < 0x10);
LAB_00400801:
  *(undefined2 *)((long)local_88 + (long)iVar9 + (long)iVar7) = 0x7c;
  auStack144 = 0x400818;
  puts((char *)local_88);
  return;
}



undefined8 hexdump(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  FILE *__stream;
  size_t sVar3;
  ulong uVar4;
  stat sStack200;
  undefined local_38 [24];
  
  iVar1 = __xstat(1,param_1,&sStack200);
  if (iVar1 == 0) {
    __stream = fopen(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      perror(param_1);
      uVar2 = 1;
    }
    else {
      uVar4 = 0;
      if (sStack200.st_size != 0) {
        do {
          sVar3 = fread(local_38,1,0x10,__stream);
          if ((int)sVar3 == 0) break;
          dumpline(local_38,uVar4,sVar3 & 0xffffffff);
          uVar4 = uVar4 + (long)(int)sVar3;
        } while (uVar4 < (ulong)sStack200.st_size);
      }
      fclose(__stream);
      uVar2 = 0;
    }
  }
  else {
    perror(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



int main(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (1 < param_1) {
    iVar2 = 1;
    do {
      iVar1 = hexdump(*(undefined8 *)(param_2 + 8));
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 8;
    } while (iVar2 < param_1);
  }
  return iVar3;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004009ba)
// WARNING: Removing unreachable block (ram,0x004009c0)

void __libc_csu_init(EVP_PKEY_CTX *param_1)

{
  _init(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (___CTOR_LIST__ != (code *)0xffffffffffffffff) {
    ppcVar2 = (code **)&__CTOR_LIST__;
    pcVar1 = ___CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffffffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


