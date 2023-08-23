typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
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
    char _unused2[20];
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

typedef long __syscall_slong_t;


// WARNING! conflicting data type names: /DWARF/__off64_t - /types.h/__off64_t

typedef ulong sizetype;


// WARNING! conflicting data type names: /DWARF/__nlink_t - /types.h/__nlink_t


// WARNING! conflicting data type names: /DWARF/__blksize_t - /types.h/__blksize_t


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE


// WARNING! conflicting data type names: /DWARF/stat.h/stat - /stat.h/stat


// WARNING! conflicting data type names: /DWARF/time.h/timespec - /time.h/timespec

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
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
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
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
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
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

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
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
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100800(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention

int main(int argc,char **argv)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  FILE *fp;
  int cnt;
  char *__filename;
  ulong offset;
  long lVar4;
  int iVar5;
  uchar buff [16];
  stat st;
  
  if (argc < 2) {
    iVar5 = 0;
  }
  else {
    lVar4 = 1;
    iVar5 = 0;
    do {
      __filename = argv[lVar4];
      iVar2 = __xstat(0,__filename,(stat *)&st);
      if ((iVar2 == 0) && (__stream = fopen(__filename,"rb"), __stream != (FILE *)0x0)) {
        offset = 0;
        if (st.st_size != 0) {
          do {
            sVar3 = fread(buff,1,0x10,__stream);
            iVar2 = (int)sVar3;
            uVar1 = offset + (long)iVar2;
            if (iVar2 == 0) break;
            dumpline(buff,offset,iVar2);
            offset = uVar1;
          } while (uVar1 < (ulong)st.st_size);
        }
        fclose(__stream);
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
        perror(__filename);
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + iVar2;
    } while ((ulong)(argc - 2) + 2 != lVar4);
  }
  return iVar5;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100a40)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100a68)
// WARNING: Removing unreachable block (ram,0x00100a74)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100aa4)
// WARNING: Removing unreachable block (ram,0x00100ab0)

void register_tm_clones(void)

{
  return;
}



void FUN_00100abc(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b20)
// WARNING: Removing unreachable block (ram,0x00100b2c)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

void dumpline(uchar *p,ulong offset,int cnt)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uchar uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  int len;
  size_t sVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  char *__s;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char buff [80];
  
  sprintf(buff,"%08lX:",offset);
  if (0x10 < cnt) {
    cnt = 0x10;
  }
  if (cnt < 1) {
    iVar16 = 1;
LAB_00100bd0:
    do {
      sVar12 = strlen(buff);
      *(undefined4 *)(buff + sVar12) = 0x202020;
      bVar1 = iVar16 < 0x10;
      iVar16 = iVar16 + 1;
    } while (bVar1);
    iVar3 = (int)sVar12;
    lVar17 = (long)(iVar3 + 3);
    iVar16 = iVar3 + 6;
    *(undefined4 *)(buff + lVar17) = 0x7c2020;
    if (0 < cnt) goto LAB_00100c10;
    iVar15 = 2;
    buff[iVar16] = ' ';
    buff[iVar3 + 7] = ' ';
  }
  else {
    lVar17 = 0;
    __s = buff + 9;
    do {
      pbVar2 = p + lVar17;
      lVar17 = lVar17 + 1;
      sprintf(__s," %02lX",(ulong)*pbVar2);
      __s = __s + 3;
    } while ((int)lVar17 < cnt);
    iVar16 = cnt + 1;
    if (cnt != 0x10) goto LAB_00100bd0;
    sVar12 = strlen(buff);
    lVar17 = (long)(int)sVar12;
    iVar16 = (int)sVar12 + 3;
    *(undefined4 *)(buff + lVar17) = 0x7c2020;
LAB_00100c10:
    uVar4 = -(int)p & 0xf;
    if ((uint)cnt < uVar4) {
      uVar4 = cnt;
    }
    if ((uint)cnt < 0x11) {
      uVar4 = cnt;
    }
    if (uVar4 == 0) {
      uVar13 = 0;
LAB_00100e74:
      uVar14 = (ulong)uVar4;
      iVar3 = ((cnt - uVar4) - 0x10 >> 4) + 1;
      if (0xe < (cnt - 1U) - uVar4) {
        uVar11 = *(undefined8 *)((long)(p + uVar4) + 8);
        cVar25 = (char)((ulong)uVar11 >> 8);
        cVar26 = (char)((ulong)uVar11 >> 0x10);
        cVar27 = (char)((ulong)uVar11 >> 0x18);
        cVar28 = (char)((ulong)uVar11 >> 0x20);
        cVar29 = (char)((ulong)uVar11 >> 0x28);
        cVar30 = (char)((ulong)uVar11 >> 0x30);
        cVar31 = (char)((ulong)uVar11 >> 0x38);
        uVar10 = *(undefined8 *)(p + uVar4);
        lVar17 = lVar17 + 3 + uVar14;
        auVar19[8] = 0x5e;
        auVar19._0_8_ = 0x5e5e5e5e5e5e5e5e;
        auVar19[9] = 0x5e;
        auVar19[10] = 0x5e;
        auVar19[11] = 0x5e;
        auVar19[12] = 0x5e;
        auVar19[13] = 0x5e;
        auVar19[14] = 0x5e;
        auVar19[15] = 0x5e;
        auVar18[8] = 0x2e;
        auVar18._0_8_ = 0x2e2e2e2e2e2e2e2e;
        auVar18[9] = 0x2e;
        auVar18[10] = 0x2e;
        auVar18[11] = 0x2e;
        auVar18[12] = 0x2e;
        auVar18[13] = 0x2e;
        auVar18[14] = 0x2e;
        auVar18[15] = 0x2e;
        auVar20[0] = (char)uVar10 + -0x20;
        auVar20[1] = (char)((ulong)uVar10 >> 8) + -0x20;
        auVar20[2] = (char)((ulong)uVar10 >> 0x10) + -0x20;
        auVar20[3] = (char)((ulong)uVar10 >> 0x18) + -0x20;
        auVar20[4] = (char)((ulong)uVar10 >> 0x20) + -0x20;
        auVar20[5] = (char)((ulong)uVar10 >> 0x28) + -0x20;
        auVar20[6] = (char)((ulong)uVar10 >> 0x30) + -0x20;
        auVar20[7] = (char)((ulong)uVar10 >> 0x38) + -0x20;
        auVar20[8] = (char)uVar11 + -0x20;
        auVar20[9] = cVar25 + -0x20;
        auVar20[10] = cVar26 + -0x20;
        auVar20[11] = cVar27 + -0x20;
        auVar20[12] = cVar28 + -0x20;
        auVar20[13] = cVar29 + -0x20;
        auVar20[14] = cVar30 + -0x20;
        auVar20[15] = cVar31 + -0x20;
        auVar20 = NEON_cmhs(auVar19,auVar20,1);
        auVar21[8] = (char)uVar11;
        auVar21._0_8_ = uVar10;
        auVar21[9] = cVar25;
        auVar21[10] = cVar26;
        auVar21[11] = cVar27;
        auVar21[12] = cVar28;
        auVar21[13] = cVar29;
        auVar21[14] = cVar30;
        auVar21[15] = cVar31;
        auVar21 = NEON_bsl(auVar20,auVar21,auVar18,1);
        *(long *)(buff + lVar17 + 8) = auVar21._8_8_;
        *(long *)(buff + lVar17) = auVar21._0_8_;
        if (iVar3 != 1) {
          uVar11 = *(undefined8 *)(p + uVar14 + 0x18);
          cVar25 = (char)((ulong)uVar11 >> 8);
          cVar26 = (char)((ulong)uVar11 >> 0x10);
          cVar27 = (char)((ulong)uVar11 >> 0x18);
          cVar28 = (char)((ulong)uVar11 >> 0x20);
          cVar29 = (char)((ulong)uVar11 >> 0x28);
          cVar30 = (char)((ulong)uVar11 >> 0x30);
          cVar31 = (char)((ulong)uVar11 >> 0x38);
          uVar10 = *(undefined8 *)(p + uVar14 + 0x10);
          auVar22[0] = (char)uVar10 + -0x20;
          auVar22[1] = (char)((ulong)uVar10 >> 8) + -0x20;
          auVar22[2] = (char)((ulong)uVar10 >> 0x10) + -0x20;
          auVar22[3] = (char)((ulong)uVar10 >> 0x18) + -0x20;
          auVar22[4] = (char)((ulong)uVar10 >> 0x20) + -0x20;
          auVar22[5] = (char)((ulong)uVar10 >> 0x28) + -0x20;
          auVar22[6] = (char)((ulong)uVar10 >> 0x30) + -0x20;
          auVar22[7] = (char)((ulong)uVar10 >> 0x38) + -0x20;
          auVar22[8] = (char)uVar11 + -0x20;
          auVar22[9] = cVar25 + -0x20;
          auVar22[10] = cVar26 + -0x20;
          auVar22[11] = cVar27 + -0x20;
          auVar22[12] = cVar28 + -0x20;
          auVar22[13] = cVar29 + -0x20;
          auVar22[14] = cVar30 + -0x20;
          auVar22[15] = cVar31 + -0x20;
          auVar21 = NEON_cmhs(auVar19,auVar22,1);
          auVar7[8] = (char)uVar11;
          auVar7._0_8_ = uVar10;
          auVar7[9] = cVar25;
          auVar7[10] = cVar26;
          auVar7[11] = cVar27;
          auVar7[12] = cVar28;
          auVar7[13] = cVar29;
          auVar7[14] = cVar30;
          auVar7[15] = cVar31;
          auVar21 = NEON_bsl(auVar21,auVar7,auVar18,1);
          *(long *)(buff + lVar17 + 0x18) = auVar21._8_8_;
          *(long *)(buff + lVar17 + 0x10) = auVar21._0_8_;
          if (iVar3 != 2) {
            uVar11 = *(undefined8 *)(p + uVar14 + 0x28);
            cVar25 = (char)((ulong)uVar11 >> 8);
            cVar26 = (char)((ulong)uVar11 >> 0x10);
            cVar27 = (char)((ulong)uVar11 >> 0x18);
            cVar28 = (char)((ulong)uVar11 >> 0x20);
            cVar29 = (char)((ulong)uVar11 >> 0x28);
            cVar30 = (char)((ulong)uVar11 >> 0x30);
            cVar31 = (char)((ulong)uVar11 >> 0x38);
            uVar10 = *(undefined8 *)(p + uVar14 + 0x20);
            auVar23[0] = (char)uVar10 + -0x20;
            auVar23[1] = (char)((ulong)uVar10 >> 8) + -0x20;
            auVar23[2] = (char)((ulong)uVar10 >> 0x10) + -0x20;
            auVar23[3] = (char)((ulong)uVar10 >> 0x18) + -0x20;
            auVar23[4] = (char)((ulong)uVar10 >> 0x20) + -0x20;
            auVar23[5] = (char)((ulong)uVar10 >> 0x28) + -0x20;
            auVar23[6] = (char)((ulong)uVar10 >> 0x30) + -0x20;
            auVar23[7] = (char)((ulong)uVar10 >> 0x38) + -0x20;
            auVar23[8] = (char)uVar11 + -0x20;
            auVar23[9] = cVar25 + -0x20;
            auVar23[10] = cVar26 + -0x20;
            auVar23[11] = cVar27 + -0x20;
            auVar23[12] = cVar28 + -0x20;
            auVar23[13] = cVar29 + -0x20;
            auVar23[14] = cVar30 + -0x20;
            auVar23[15] = cVar31 + -0x20;
            auVar21 = NEON_cmhs(auVar19,auVar23,1);
            auVar8[8] = (char)uVar11;
            auVar8._0_8_ = uVar10;
            auVar8[9] = cVar25;
            auVar8[10] = cVar26;
            auVar8[11] = cVar27;
            auVar8[12] = cVar28;
            auVar8[13] = cVar29;
            auVar8[14] = cVar30;
            auVar8[15] = cVar31;
            auVar21 = NEON_bsl(auVar21,auVar8,auVar18,1);
            *(long *)(buff + lVar17 + 0x28) = auVar21._8_8_;
            *(long *)(buff + lVar17 + 0x20) = auVar21._0_8_;
            if (iVar3 != 3) {
              uVar11 = *(undefined8 *)(p + uVar14 + 0x38);
              cVar25 = (char)((ulong)uVar11 >> 8);
              cVar26 = (char)((ulong)uVar11 >> 0x10);
              cVar27 = (char)((ulong)uVar11 >> 0x18);
              cVar28 = (char)((ulong)uVar11 >> 0x20);
              cVar29 = (char)((ulong)uVar11 >> 0x28);
              cVar30 = (char)((ulong)uVar11 >> 0x30);
              cVar31 = (char)((ulong)uVar11 >> 0x38);
              uVar10 = *(undefined8 *)(p + uVar14 + 0x30);
              auVar24[0] = (char)uVar10 + -0x20;
              auVar24[1] = (char)((ulong)uVar10 >> 8) + -0x20;
              auVar24[2] = (char)((ulong)uVar10 >> 0x10) + -0x20;
              auVar24[3] = (char)((ulong)uVar10 >> 0x18) + -0x20;
              auVar24[4] = (char)((ulong)uVar10 >> 0x20) + -0x20;
              auVar24[5] = (char)((ulong)uVar10 >> 0x28) + -0x20;
              auVar24[6] = (char)((ulong)uVar10 >> 0x30) + -0x20;
              auVar24[7] = (char)((ulong)uVar10 >> 0x38) + -0x20;
              auVar24[8] = (char)uVar11 + -0x20;
              auVar24[9] = cVar25 + -0x20;
              auVar24[10] = cVar26 + -0x20;
              auVar24[11] = cVar27 + -0x20;
              auVar24[12] = cVar28 + -0x20;
              auVar24[13] = cVar29 + -0x20;
              auVar24[14] = cVar30 + -0x20;
              auVar24[15] = cVar31 + -0x20;
              auVar21 = NEON_cmhs(auVar19,auVar24,1);
              auVar9[8] = (char)uVar11;
              auVar9._0_8_ = uVar10;
              auVar9[9] = cVar25;
              auVar9[10] = cVar26;
              auVar9[11] = cVar27;
              auVar9[12] = cVar28;
              auVar9[13] = cVar29;
              auVar9[14] = cVar30;
              auVar9[15] = cVar31;
              auVar21 = NEON_bsl(auVar21,auVar9,auVar18,1);
              *(long *)(buff + lVar17 + 0x38) = auVar21._8_8_;
              *(long *)(buff + lVar17 + 0x30) = auVar21._0_8_;
              if (iVar3 != 4) {
                auVar21 = *(undefined (*) [16])(p + uVar14 + 0x40);
                auVar6[1] = auVar21[1] + -0x20;
                auVar6[0] = auVar21[0] + -0x20;
                auVar6[2] = auVar21[2] + -0x20;
                auVar6[3] = auVar21[3] + -0x20;
                auVar6[4] = auVar21[4] + -0x20;
                auVar6[5] = auVar21[5] + -0x20;
                auVar6[6] = auVar21[6] + -0x20;
                auVar6[7] = auVar21[7] + -0x20;
                auVar6[8] = auVar21[8] + -0x20;
                auVar6[9] = auVar21[9] + -0x20;
                auVar6[10] = auVar21[10] + -0x20;
                auVar6[11] = auVar21[11] + -0x20;
                auVar6[12] = auVar21[12] + -0x20;
                auVar6[13] = auVar21[13] + -0x20;
                auVar6[14] = auVar21[14] + -0x20;
                auVar6[15] = auVar21[15] + -0x20;
                auVar19 = NEON_cmhs(auVar19,auVar6,1);
                auVar21 = NEON_bit(auVar18,auVar21,auVar19,1);
                *(long *)(buff + lVar17 + 0x48) = auVar21._8_8_;
                *(long *)(buff + lVar17 + 0x40) = auVar21._0_8_;
              }
            }
          }
        }
        uVar13 = uVar13 + iVar3 * 0x10;
        if (iVar3 * 0x10 == cnt - uVar4) goto LAB_0010119c;
      }
      iVar3 = uVar13 + 1;
      uVar5 = p[(int)uVar13];
      if (0x5e < (byte)(p[(int)uVar13] - 0x20)) {
        uVar5 = '.';
      }
      buff[(int)(uVar13 + iVar16)] = uVar5;
      if (iVar3 < cnt) {
        uVar5 = p[iVar3];
        iVar15 = uVar13 + 2;
        if (0x5e < (byte)(uVar5 - 0x20)) {
          uVar5 = '.';
        }
        buff[iVar3 + iVar16] = uVar5;
        if (iVar15 < cnt) {
          uVar5 = p[iVar15];
          iVar3 = uVar13 + 3;
          if (0x5e < (byte)(uVar5 - 0x20)) {
            uVar5 = '.';
          }
          buff[iVar15 + iVar16] = uVar5;
          if (iVar3 < cnt) {
            uVar5 = p[iVar3];
            iVar15 = uVar13 + 4;
            if (0x5e < (byte)(uVar5 - 0x20)) {
              uVar5 = '.';
            }
            buff[iVar3 + iVar16] = uVar5;
            if (iVar15 < cnt) {
              iVar3 = uVar13 + 5;
              uVar5 = p[iVar15];
              if (0x5e < (byte)(p[iVar15] - 0x20)) {
                uVar5 = '.';
              }
              buff[iVar15 + iVar16] = uVar5;
              if (iVar3 < cnt) {
                uVar5 = p[iVar3];
                iVar15 = uVar13 + 6;
                if (0x5e < (byte)(uVar5 - 0x20)) {
                  uVar5 = '.';
                }
                buff[iVar3 + iVar16] = uVar5;
                if (iVar15 < cnt) {
                  uVar5 = p[iVar15];
                  iVar3 = uVar13 + 7;
                  if (0x5e < (byte)(uVar5 - 0x20)) {
                    uVar5 = '.';
                  }
                  buff[iVar15 + iVar16] = uVar5;
                  if (iVar3 < cnt) {
                    uVar5 = p[iVar3];
                    iVar15 = uVar13 + 8;
                    if (0x5e < (byte)(uVar5 - 0x20)) {
                      uVar5 = '.';
                    }
                    buff[iVar3 + iVar16] = uVar5;
                    if (iVar15 < cnt) {
                      uVar5 = p[iVar15];
                      iVar3 = uVar13 + 9;
                      if (0x5e < (byte)(uVar5 - 0x20)) {
                        uVar5 = '.';
                      }
                      buff[iVar15 + iVar16] = uVar5;
                      if (iVar3 < cnt) {
                        uVar5 = p[iVar3];
                        iVar15 = uVar13 + 10;
                        if (0x5e < (byte)(uVar5 - 0x20)) {
                          uVar5 = '.';
                        }
                        buff[iVar3 + iVar16] = uVar5;
                        if (iVar15 < cnt) {
                          iVar3 = uVar13 + 0xb;
                          uVar5 = p[iVar15];
                          if (0x5e < (byte)(p[iVar15] - 0x20)) {
                            uVar5 = '.';
                          }
                          buff[iVar15 + iVar16] = uVar5;
                          if (iVar3 < cnt) {
                            uVar5 = p[iVar3];
                            iVar15 = uVar13 + 0xc;
                            if (0x5e < (byte)(uVar5 - 0x20)) {
                              uVar5 = '.';
                            }
                            buff[iVar3 + iVar16] = uVar5;
                            if (iVar15 < cnt) {
                              uVar5 = p[iVar15];
                              iVar3 = uVar13 + 0xd;
                              if (0x5e < (byte)(uVar5 - 0x20)) {
                                uVar5 = '.';
                              }
                              buff[iVar15 + iVar16] = uVar5;
                              if (iVar3 < cnt) {
                                uVar5 = p[iVar3];
                                iVar15 = uVar13 + 0xe;
                                if (0x5e < (byte)(uVar5 - 0x20)) {
                                  uVar5 = '.';
                                }
                                buff[iVar3 + iVar16] = uVar5;
                                if (iVar15 < cnt) {
                                  uVar5 = p[iVar15];
                                  if (0x5e < (byte)(uVar5 - 0x20)) {
                                    uVar5 = '.';
                                  }
                                  buff[iVar15 + iVar16] = uVar5;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar5 = *p;
      if (0x5e < (byte)(*p - 0x20)) {
        uVar5 = '.';
      }
      buff[iVar16] = uVar5;
      uVar13 = uVar4;
      if (uVar4 != 1) {
        uVar5 = p[1];
        if (0x5e < (byte)(uVar5 - 0x20)) {
          uVar5 = '.';
        }
        buff[iVar16 + 1] = uVar5;
        if (uVar4 != 2) {
          uVar5 = p[2];
          if (0x5e < (byte)(uVar5 - 0x20)) {
            uVar5 = '.';
          }
          buff[iVar16 + 2] = uVar5;
          if (uVar4 != 3) {
            uVar5 = p[3];
            if (0x5e < (byte)(uVar5 - 0x20)) {
              uVar5 = '.';
            }
            buff[iVar16 + 3] = uVar5;
            if (uVar4 != 4) {
              uVar5 = p[4];
              if (0x5e < (byte)(p[4] - 0x20)) {
                uVar5 = '.';
              }
              buff[iVar16 + 4] = uVar5;
              if (uVar4 != 5) {
                uVar5 = p[5];
                if (0x5e < (byte)(uVar5 - 0x20)) {
                  uVar5 = '.';
                }
                buff[iVar16 + 5] = uVar5;
                if (uVar4 != 6) {
                  uVar5 = p[6];
                  if (0x5e < (byte)(uVar5 - 0x20)) {
                    uVar5 = '.';
                  }
                  buff[iVar16 + 6] = uVar5;
                  if (uVar4 != 7) {
                    uVar5 = p[7];
                    if (0x5e < (byte)(uVar5 - 0x20)) {
                      uVar5 = '.';
                    }
                    buff[iVar16 + 7] = uVar5;
                    if (uVar4 != 8) {
                      uVar5 = p[8];
                      if (0x5e < (byte)(uVar5 - 0x20)) {
                        uVar5 = '.';
                      }
                      buff[iVar16 + 8] = uVar5;
                      if (uVar4 == 9) {
                        uVar13 = 9;
                      }
                      else {
                        uVar5 = p[9];
                        if (0x5e < (byte)(p[9] - 0x20)) {
                          uVar5 = '.';
                        }
                        buff[iVar16 + 9] = uVar5;
                        if (uVar4 != 10) {
                          uVar5 = p[10];
                          if (0x5e < (byte)(uVar5 - 0x20)) {
                            uVar5 = '.';
                          }
                          buff[iVar16 + 10] = uVar5;
                          if (uVar4 != 0xb) {
                            uVar5 = p[0xb];
                            if (0x5e < (byte)(uVar5 - 0x20)) {
                              uVar5 = '.';
                            }
                            buff[iVar16 + 0xb] = uVar5;
                            if (uVar4 != 0xc) {
                              uVar5 = p[0xc];
                              if (0x5e < (byte)(uVar5 - 0x20)) {
                                uVar5 = '.';
                              }
                              buff[iVar16 + 0xc] = uVar5;
                              if (uVar4 != 0xd) {
                                uVar5 = p[0xd];
                                if (0x5e < (byte)(p[0xd] - 0x20)) {
                                  uVar5 = '.';
                                }
                                buff[iVar16 + 0xd] = uVar5;
                                if (uVar4 != 0xe) {
                                  uVar5 = p[0xe];
                                  if (0x5e < (byte)(uVar5 - 0x20)) {
                                    uVar5 = '.';
                                  }
                                  buff[iVar16 + 0xe] = uVar5;
                                  if (uVar4 == 0x10) {
                                    uVar5 = p[0xf];
                                    if (0x5e < (byte)(uVar5 - 0x20)) {
                                      uVar5 = '.';
                                    }
                                    buff[iVar16 + 0xf] = uVar5;
                                  }
                                  else {
                                    uVar13 = 0xf;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (uVar4 != cnt) goto LAB_00100e74;
    }
LAB_0010119c:
    if (cnt == 0x10) goto LAB_001012dc;
    buff[cnt + iVar16] = ' ';
    if (cnt + 1U == 0x10) goto LAB_001012dc;
    iVar15 = cnt + 2;
    buff[(int)(cnt + 1U + iVar16)] = ' ';
    if (iVar15 == 0x10) goto LAB_001012dc;
  }
  buff[iVar15 + iVar16] = ' ';
  if (iVar15 + 1 != 0x10) {
    buff[iVar15 + 1 + iVar16] = ' ';
    if (iVar15 + 2 != 0x10) {
      buff[iVar15 + 2 + iVar16] = ' ';
      if (iVar15 + 3 != 0x10) {
        buff[iVar15 + 3 + iVar16] = ' ';
        if (iVar15 + 4 != 0x10) {
          buff[iVar15 + 4 + iVar16] = ' ';
          if (iVar15 + 5 != 0x10) {
            buff[iVar15 + 5 + iVar16] = ' ';
            if (iVar15 + 6 != 0x10) {
              buff[iVar15 + 6 + iVar16] = ' ';
              if (iVar15 + 7 != 0x10) {
                buff[iVar15 + 7 + iVar16] = ' ';
                if (iVar15 + 8 != 0x10) {
                  buff[iVar15 + 8 + iVar16] = ' ';
                  if (iVar15 + 9 != 0x10) {
                    buff[iVar15 + 9 + iVar16] = ' ';
                    if (iVar15 + 10 != 0x10) {
                      buff[iVar15 + 10 + iVar16] = ' ';
                      if (iVar15 + 0xb != 0x10) {
                        buff[iVar15 + 0xb + iVar16] = ' ';
                        if ((iVar15 + 0xc != 0x10) &&
                           (buff[iVar15 + 0xc + iVar16] = ' ', iVar15 == 2)) {
                          buff[iVar16 + 0xf] = ' ';
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001012dc:
  *(undefined2 *)(buff + (long)iVar16 + 0x10) = 0x7c;
  puts(buff);
  return;
}



undefined8 FUN_00101374(char *param_1)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  ulong offset;
  uchar auStack_90 [16];
  ulong uStack_50;
  
  iVar2 = __xstat(0,param_1,(stat *)&stack0xffffffffffffff80);
  if ((iVar2 != 0) || (__stream = fopen(param_1,"rb"), __stream == (FILE *)0x0)) {
    perror(param_1);
    return 1;
  }
  offset = 0;
  if (uStack_50 != 0) {
    do {
      sVar3 = fread(auStack_90,1,0x10,__stream);
      iVar2 = (int)sVar3;
      uVar1 = offset + (long)iVar2;
      if (iVar2 == 0) break;
      dumpline(auStack_90,offset,iVar2);
      offset = uVar1;
    } while (uVar1 < uStack_50);
  }
  fclose(__stream);
  return 0;
}



// WARNING: Unknown calling convention

int hexdump(char *fname)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  FILE *fp;
  size_t sVar3;
  int cnt;
  ulong offset;
  uchar buff [16];
  stat st;
  
  iVar2 = __xstat(0,fname,(stat *)&st);
  if ((iVar2 != 0) || (__stream = fopen(fname,"rb"), __stream == (FILE *)0x0)) {
    perror(fname);
    return 1;
  }
  offset = 0;
  if (st.st_size != 0) {
    do {
      sVar3 = fread(buff,1,0x10,__stream);
      iVar2 = (int)sVar3;
      uVar1 = offset + (long)iVar2;
      if (iVar2 == 0) break;
      dumpline(buff,offset,iVar2);
      offset = uVar1;
    } while (uVar1 < (ulong)st.st_size);
  }
  fclose(__stream);
  return 0;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


