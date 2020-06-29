typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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
    char _unused2[15];
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

typedef longlong long int;

typedef ulonglong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE


// WARNING! conflicting data type names: /DWARF/stat.h/stat - /stat.h/stat


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

typedef long int __syscall_slong_t;


// WARNING! conflicting data type names: /DWARF/types.h/__blkcnt_t - /types.h/__blkcnt_t


// WARNING! conflicting data type names: /DWARF/types.h/__time_t - /types.h/__time_t


// WARNING! conflicting data type names: /DWARF/types.h/__off64_t - /types.h/__off64_t


// WARNING! conflicting data type names: /DWARF/types.h/__nlink_t - /types.h/__nlink_t


// WARNING! conflicting data type names: /DWARF/types.h/__dev_t - /types.h/__dev_t


// WARNING! conflicting data type names: /DWARF/types.h/__ino_t - /types.h/__ino_t


// WARNING! conflicting data type names: /DWARF/types.h/__off_t - /types.h/__off_t


// WARNING! conflicting data type names: /DWARF/types.h/__blksize_t - /types.h/__blksize_t


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
    SHT_AARCH64_ATTRIBUTES=1879048195,
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
    PT_AARCH64_ARCHEXT=1879048192,
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
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
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100800(void)

{
  (*(code *)(undefined *)0x0)();
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



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
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



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
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

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



int main(int argc,char **argv)

{
  ulonglong uVar1;
  int iVar2;
  size_t cnt;
  FILE *__stream;
  char *__filename;
  long_unsigned_int offset;
  longlong lVar3;
  int iVar4;
  uchar buff [16];
  stat st;
  
  if (argc < 2) {
    iVar4 = 0;
  }
  else {
    lVar3 = 1;
    iVar4 = 0;
    do {
      __filename = argv[lVar3];
      iVar2 = __xstat(0,__filename,(stat *)&st);
      if ((iVar2 == 0) || (__stream = fopen(__filename,"rb"), __stream == (FILE *)0x0)) {
        perror(__filename);
        iVar2 = 1;
      }
      else {
        offset = 0;
        if (st.st_size != 0) {
          do {
            cnt = fread(buff,1,0x10,__stream);
            uVar1 = offset + (longlong)(int)cnt;
            if (cnt == 0) break;
            dumpline(buff,offset,cnt);
            offset = uVar1;
          } while (uVar1 < (ulonglong)st.st_size);
        }
        fclose(__stream);
        iVar2 = 0;
      }
      lVar3 = lVar3 + 1;
      iVar4 = iVar4 + iVar2;
    } while ((ulonglong)(argc - 2) + 2 != lVar3);
  }
  return iVar4;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: register
// WARNING: Restarted to delay deadcode elimination for space: stack

void dumpline(uchar *p,long_unsigned_int offset,int cnt)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  uint uVar6;
  uchar uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  size_t sVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  char *__s;
  undefined auVar14 [16];
  undefined in_z0 [32];
  undefined auVar15 [16];
  undefined in_z1 [32];
  char cVar16;
  undefined auVar17 [16];
  undefined uVar19;
  undefined in_z2 [32];
  undefined auVar18 [32];
  char cVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  undefined in_q3 [16];
  char cVar36;
  undefined auVar21 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  char buff [80];
  
  sprintf(buff,"%08lX:",offset);
  if (0x10 < cnt) {
    cnt = 0x10;
  }
  if (cnt < 1) {
    iVar12 = 1;
LAB_00100bd0:
    do {
      sVar9 = strlen(buff);
      auVar14 = SUB3216(in_z0,0);
      auVar15 = SUB3216(in_z1,0);
      auVar17 = SUB3216(in_z2,0);
      *(undefined4 *)(buff + sVar9) = 0x202020;
      bVar1 = iVar12 < 0x10;
      iVar12 = iVar12 + 1;
    } while (bVar1);
    sVar10 = sVar9 + 3;
    lVar13 = (longlong)(int)sVar10;
    *(undefined4 *)(buff + lVar13) = 0x7c2020;
    if (0 < cnt) goto LAB_00100c10;
    cnt = 2;
    buff[lVar13] = ' ';
    buff[(int)(sVar9 + 4)] = ' ';
  }
  else {
    lVar13 = 0;
    __s = buff + 9;
    do {
      pbVar2 = p + lVar13;
      lVar13 = lVar13 + 1;
      sprintf(__s," %02lX",(ulonglong)*pbVar2);
      auVar14 = SUB3216(in_z0,0);
      auVar15 = SUB3216(in_z1,0);
      auVar17 = SUB3216(in_z2,0);
      __s = __s + 3;
    } while ((int)lVar13 < cnt);
    iVar12 = cnt + 1;
    if (cnt != 0x10) goto LAB_00100bd0;
    sVar10 = strlen(buff);
    lVar13 = (longlong)(int)sVar10;
    *(undefined4 *)(buff + lVar13) = 0x7c2020;
LAB_00100c10:
    uVar6 = -(int)p & 0xf;
    if ((uint)cnt < uVar6) {
      uVar6 = cnt;
    }
    if ((uint)cnt < 0x11) {
      uVar6 = cnt;
    }
    if (uVar6 == 0) {
      uVar11 = 0;
LAB_00100e74:
      iVar12 = ((cnt - uVar6) - 0x10 >> 4) + 1;
      if (0xe < (cnt - 1U) - uVar6) {
                    // WARNING: Load size is inaccurate
        puVar8 = (undefined8 *)(p + uVar6);
        uVar38 = puVar8[1];
        uVar37 = *puVar8;
        lVar4 = (ulonglong)uVar6 + lVar13;
        auVar17 = SIMD_COPY(auVar17,0xe0);
        auVar18 = ZEXT1632(auVar17);
        auVar15 = SIMD_COPY(auVar15,0x5e);
        puVar5 = p + (ulonglong)uVar6;
        auVar14 = SIMD_COPY(auVar14,0x2e);
        cVar16 = SUB161(auVar17,0);
                    // WARNING: Ignoring partial resolution of indirect
        cVar20 = (char)uVar37 + cVar16;
        cVar20 = SUB321(auVar18 >> 8,0);
        cVar22 = (char)((ulonglong)uVar37 >> 8) + cVar20;
        cVar22 = SUB321(auVar18 >> 0x10,0);
        cVar23 = (char)((ulonglong)uVar37 >> 0x10) + cVar22;
        cVar23 = SUB321(auVar18 >> 0x18,0);
        cVar24 = (char)((ulonglong)uVar37 >> 0x18) + cVar23;
        cVar24 = SUB321(auVar18 >> 0x20,0);
        cVar25 = (char)((ulonglong)uVar37 >> 0x20) + cVar24;
        cVar25 = SUB321(auVar18 >> 0x28,0);
        cVar26 = (char)((ulonglong)uVar37 >> 0x28) + cVar25;
        cVar26 = SUB321(auVar18 >> 0x30,0);
        cVar27 = (char)((ulonglong)uVar37 >> 0x30) + cVar26;
        cVar27 = SUB321(auVar18 >> 0x38,0);
        cVar28 = (char)((ulonglong)uVar37 >> 0x38) + cVar27;
        cVar28 = SUB321(auVar18 >> 0x40,0);
        cVar29 = (char)uVar38 + cVar28;
        cVar29 = SUB321(auVar18 >> 0x48,0);
        cVar30 = (char)((ulonglong)uVar38 >> 8) + cVar29;
        cVar30 = SUB321(auVar18 >> 0x50,0);
        cVar31 = (char)((ulonglong)uVar38 >> 0x10) + cVar30;
        cVar31 = SUB321(auVar18 >> 0x58,0);
        cVar32 = (char)((ulonglong)uVar38 >> 0x18) + cVar31;
        cVar32 = SUB321(auVar18 >> 0x60,0);
        cVar33 = (char)((ulonglong)uVar38 >> 0x20) + cVar32;
        cVar33 = SUB321(auVar18 >> 0x68,0);
        cVar34 = (char)((ulonglong)uVar38 >> 0x28) + cVar33;
        cVar34 = SUB321(auVar18 >> 0x70,0);
        cVar35 = (char)((ulonglong)uVar38 >> 0x30) + cVar34;
        cVar35 = SUB321(auVar18 >> 0x78,0);
        cVar36 = (char)((ulonglong)uVar38 >> 0x38) + cVar35;
        auVar21 = NEON_cmhs(auVar15,in_q3,1);
        auVar21 = NEON_bsl(auVar21,*(undefined *)puVar8,auVar14,1);
        *(longlong *)(buff + lVar4 + 8) = SUB168(auVar21 >> 0x40,0);
        *(longlong *)(buff + lVar4) = SUB168(auVar21,0);
        if (iVar12 != 1) {
                    // WARNING: Load size is inaccurate
          uVar38 = *(undefined8 *)(puVar5 + 0x18);
          uVar37 = *(undefined8 *)(puVar5 + 0x10);
                    // WARNING: Ignoring partial resolution of indirect
          cVar36 = (char)uVar37 + cVar16;
          cVar36 = (char)((ulonglong)uVar37 >> 8) + cVar20;
          cVar36 = (char)((ulonglong)uVar37 >> 0x10) + cVar22;
          cVar36 = (char)((ulonglong)uVar37 >> 0x18) + cVar23;
          cVar36 = (char)((ulonglong)uVar37 >> 0x20) + cVar24;
          cVar36 = (char)((ulonglong)uVar37 >> 0x28) + cVar25;
          cVar36 = (char)((ulonglong)uVar37 >> 0x30) + cVar26;
          cVar36 = (char)((ulonglong)uVar37 >> 0x38) + cVar27;
          cVar36 = (char)uVar38 + cVar28;
          cVar36 = (char)((ulonglong)uVar38 >> 8) + cVar29;
          cVar36 = (char)((ulonglong)uVar38 >> 0x10) + cVar30;
          cVar36 = (char)((ulonglong)uVar38 >> 0x18) + cVar31;
          cVar36 = (char)((ulonglong)uVar38 >> 0x20) + cVar32;
          cVar36 = (char)((ulonglong)uVar38 >> 0x28) + cVar33;
          cVar36 = (char)((ulonglong)uVar38 >> 0x30) + cVar34;
          cVar36 = (char)((ulonglong)uVar38 >> 0x38) + cVar35;
          auVar21 = NEON_cmhs(auVar15,auVar21,1);
          auVar21 = NEON_bsl(auVar21,*(undefined *)(puVar5 + 0x10),auVar14,1);
          *(longlong *)(buff + lVar4 + 0x18) = SUB168(auVar21 >> 0x40,0);
          *(longlong *)(buff + lVar4 + 0x10) = SUB168(auVar21,0);
          if (iVar12 != 2) {
                    // WARNING: Load size is inaccurate
            uVar38 = *(undefined8 *)(puVar5 + 0x28);
            uVar37 = *(undefined8 *)(puVar5 + 0x20);
                    // WARNING: Ignoring partial resolution of indirect
            cVar36 = (char)uVar37 + cVar16;
            cVar36 = (char)((ulonglong)uVar37 >> 8) + cVar20;
            cVar36 = (char)((ulonglong)uVar37 >> 0x10) + cVar22;
            cVar36 = (char)((ulonglong)uVar37 >> 0x18) + cVar23;
            cVar36 = (char)((ulonglong)uVar37 >> 0x20) + cVar24;
            cVar36 = (char)((ulonglong)uVar37 >> 0x28) + cVar25;
            cVar36 = (char)((ulonglong)uVar37 >> 0x30) + cVar26;
            cVar36 = (char)((ulonglong)uVar37 >> 0x38) + cVar27;
            cVar36 = (char)uVar38 + cVar28;
            cVar36 = (char)((ulonglong)uVar38 >> 8) + cVar29;
            cVar36 = (char)((ulonglong)uVar38 >> 0x10) + cVar30;
            cVar36 = (char)((ulonglong)uVar38 >> 0x18) + cVar31;
            cVar36 = (char)((ulonglong)uVar38 >> 0x20) + cVar32;
            cVar36 = (char)((ulonglong)uVar38 >> 0x28) + cVar33;
            cVar36 = (char)((ulonglong)uVar38 >> 0x30) + cVar34;
            cVar36 = (char)((ulonglong)uVar38 >> 0x38) + cVar35;
            auVar21 = NEON_cmhs(auVar15,auVar21,1);
            auVar21 = NEON_bsl(auVar21,*(undefined *)(puVar5 + 0x20),auVar14,1);
            *(longlong *)(buff + lVar4 + 0x28) = SUB168(auVar21 >> 0x40,0);
            *(longlong *)(buff + lVar4 + 0x20) = SUB168(auVar21,0);
            if (iVar12 != 3) {
                    // WARNING: Load size is inaccurate
              uVar38 = *(undefined8 *)(puVar5 + 0x38);
              uVar37 = *(undefined8 *)(puVar5 + 0x30);
                    // WARNING: Ignoring partial resolution of indirect
              cVar36 = (char)uVar37 + cVar16;
              cVar20 = (char)((ulonglong)uVar37 >> 8) + cVar20;
              cVar20 = (char)((ulonglong)uVar37 >> 0x10) + cVar22;
              cVar20 = (char)((ulonglong)uVar37 >> 0x18) + cVar23;
              cVar20 = (char)((ulonglong)uVar37 >> 0x20) + cVar24;
              cVar20 = (char)((ulonglong)uVar37 >> 0x28) + cVar25;
              cVar20 = (char)((ulonglong)uVar37 >> 0x30) + cVar26;
              cVar20 = (char)((ulonglong)uVar37 >> 0x38) + cVar27;
              cVar20 = (char)uVar38 + cVar28;
              cVar20 = (char)((ulonglong)uVar38 >> 8) + cVar29;
              cVar20 = (char)((ulonglong)uVar38 >> 0x10) + cVar30;
              cVar20 = (char)((ulonglong)uVar38 >> 0x18) + cVar31;
              cVar20 = (char)((ulonglong)uVar38 >> 0x20) + cVar32;
              cVar20 = (char)((ulonglong)uVar38 >> 0x28) + cVar33;
              cVar20 = (char)((ulonglong)uVar38 >> 0x30) + cVar34;
              cVar20 = (char)((ulonglong)uVar38 >> 0x38) + cVar35;
              auVar21 = NEON_cmhs(auVar15,auVar21,1);
              auVar21 = NEON_bsl(auVar21,*(undefined *)(puVar5 + 0x30),auVar14,1);
              *(longlong *)(buff + lVar4 + 0x38) = SUB168(auVar21 >> 0x40,0);
              *(longlong *)(buff + lVar4 + 0x30) = SUB168(auVar21,0);
              if (iVar12 != 4) {
                    // WARNING: Load size is inaccurate
                auVar21 = *(undefined *)(puVar5 + 0x40);
                    // WARNING: Ignoring partial resolution of indirect
                _cVar16 = auVar17;
                cVar16 = SUB161(auVar21,0) + cVar16;
                cVar16 = SUB161(auVar21 >> 8,0) + SUB161(auVar17 >> 8,0);
                auVar18 = ZEXT1432(SUB1614(auVar17 >> 0x10,0)) << 0x10;
                cVar16 = SUB161(auVar21 >> 0x10,0) + SUB161(auVar17 >> 0x10,0);
                cVar16 = SUB161(auVar21 >> 0x18,0) + SUB321(auVar18 >> 0x18,0);
                cVar16 = SUB161(auVar21 >> 0x20,0) + SUB321(auVar18 >> 0x20,0);
                cVar16 = SUB161(auVar21 >> 0x28,0) + SUB321(auVar18 >> 0x28,0);
                cVar16 = SUB161(auVar21 >> 0x30,0) + SUB321(auVar18 >> 0x30,0);
                cVar16 = SUB161(auVar21 >> 0x38,0) + SUB321(auVar18 >> 0x38,0);
                uVar19 = SUB161(auVar21 >> 0x40,0);
                uVar19 = SUB161(auVar21 >> 0x48,0);
                uVar19 = SUB161(auVar21 >> 0x50,0);
                uVar19 = SUB161(auVar21 >> 0x58,0);
                uVar19 = SUB161(auVar21 >> 0x60,0);
                uVar19 = SUB161(auVar21 >> 0x68,0);
                uVar19 = SUB161(auVar21 >> 0x70,0);
                uVar19 = SUB161(auVar21 >> 0x78,0);
                auVar15 = NEON_cmhs(auVar15,_cVar16,1);
                auVar14 = NEON_bit(auVar14,auVar21,auVar15,1);
                *(longlong *)(buff + lVar4 + 0x48) = SUB168(auVar14 >> 0x40,0);
                *(longlong *)(buff + lVar4 + 0x40) = SUB168(auVar14,0);
              }
            }
          }
        }
        uVar11 = uVar11 + iVar12 * 0x10;
        if (iVar12 * 0x10 == cnt - uVar6) goto LAB_00101198;
      }
      iVar12 = uVar11 + 1;
      uVar7 = p[(int)uVar11];
      if (0x5e < (byte)(p[(int)uVar11] - 0x20)) {
        uVar7 = '.';
      }
      buff[(int)(uVar11 + sVar10)] = uVar7;
      if (iVar12 < cnt) {
        uVar7 = p[iVar12];
        iVar3 = uVar11 + 2;
        if (0x5e < (byte)(uVar7 - 0x20)) {
          uVar7 = '.';
        }
        buff[(int)(iVar12 + sVar10)] = uVar7;
        if (iVar3 < cnt) {
          uVar7 = p[iVar3];
          iVar12 = uVar11 + 3;
          if (0x5e < (byte)(uVar7 - 0x20)) {
            uVar7 = '.';
          }
          buff[(int)(iVar3 + sVar10)] = uVar7;
          if (iVar12 < cnt) {
            uVar7 = p[iVar12];
            iVar3 = uVar11 + 4;
            if (0x5e < (byte)(uVar7 - 0x20)) {
              uVar7 = '.';
            }
            buff[(int)(iVar12 + sVar10)] = uVar7;
            if (iVar3 < cnt) {
              iVar12 = uVar11 + 5;
              uVar7 = p[iVar3];
              if (0x5e < (byte)(p[iVar3] - 0x20)) {
                uVar7 = '.';
              }
              buff[(int)(iVar3 + sVar10)] = uVar7;
              if (iVar12 < cnt) {
                uVar7 = p[iVar12];
                iVar3 = uVar11 + 6;
                if (0x5e < (byte)(uVar7 - 0x20)) {
                  uVar7 = '.';
                }
                buff[(int)(iVar12 + sVar10)] = uVar7;
                if (iVar3 < cnt) {
                  uVar7 = p[iVar3];
                  iVar12 = uVar11 + 7;
                  if (0x5e < (byte)(uVar7 - 0x20)) {
                    uVar7 = '.';
                  }
                  buff[(int)(iVar3 + sVar10)] = uVar7;
                  if (iVar12 < cnt) {
                    uVar7 = p[iVar12];
                    iVar3 = uVar11 + 8;
                    if (0x5e < (byte)(uVar7 - 0x20)) {
                      uVar7 = '.';
                    }
                    buff[(int)(iVar12 + sVar10)] = uVar7;
                    if (iVar3 < cnt) {
                      uVar7 = p[iVar3];
                      iVar12 = uVar11 + 9;
                      if (0x5e < (byte)(uVar7 - 0x20)) {
                        uVar7 = '.';
                      }
                      buff[(int)(iVar3 + sVar10)] = uVar7;
                      if (iVar12 < cnt) {
                        uVar7 = p[iVar12];
                        iVar3 = uVar11 + 10;
                        if (0x5e < (byte)(uVar7 - 0x20)) {
                          uVar7 = '.';
                        }
                        buff[(int)(iVar12 + sVar10)] = uVar7;
                        if (iVar3 < cnt) {
                          iVar12 = uVar11 + 0xb;
                          uVar7 = p[iVar3];
                          if (0x5e < (byte)(p[iVar3] - 0x20)) {
                            uVar7 = '.';
                          }
                          buff[(int)(iVar3 + sVar10)] = uVar7;
                          if (iVar12 < cnt) {
                            uVar7 = p[iVar12];
                            iVar3 = uVar11 + 0xc;
                            if (0x5e < (byte)(uVar7 - 0x20)) {
                              uVar7 = '.';
                            }
                            buff[(int)(iVar12 + sVar10)] = uVar7;
                            if (iVar3 < cnt) {
                              uVar7 = p[iVar3];
                              iVar12 = uVar11 + 0xd;
                              if (0x5e < (byte)(uVar7 - 0x20)) {
                                uVar7 = '.';
                              }
                              buff[(int)(iVar3 + sVar10)] = uVar7;
                              if (iVar12 < cnt) {
                                uVar7 = p[iVar12];
                                iVar3 = uVar11 + 0xe;
                                if (0x5e < (byte)(uVar7 - 0x20)) {
                                  uVar7 = '.';
                                }
                                buff[(int)(iVar12 + sVar10)] = uVar7;
                                if (iVar3 < cnt) {
                                  uVar7 = p[iVar3];
                                  if (0x5e < (byte)(uVar7 - 0x20)) {
                                    uVar7 = '.';
                                  }
                                  buff[(int)(iVar3 + sVar10)] = uVar7;
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
      uVar7 = *p;
      if (0x5e < (byte)(*p - 0x20)) {
        uVar7 = '.';
      }
      buff[(int)sVar10] = uVar7;
      uVar11 = uVar6;
      if (uVar6 != 1) {
        uVar7 = p[1];
        if (0x5e < (byte)(uVar7 - 0x20)) {
          uVar7 = '.';
        }
        buff[(int)(sVar10 + 1)] = uVar7;
        if (uVar6 != 2) {
          uVar7 = p[2];
          if (0x5e < (byte)(uVar7 - 0x20)) {
            uVar7 = '.';
          }
          buff[(int)(sVar10 + 2)] = uVar7;
          if (uVar6 != 3) {
            uVar7 = p[3];
            if (0x5e < (byte)(uVar7 - 0x20)) {
              uVar7 = '.';
            }
            buff[(int)(sVar10 + 3)] = uVar7;
            if (uVar6 != 4) {
              uVar7 = p[4];
              if (0x5e < (byte)(p[4] - 0x20)) {
                uVar7 = '.';
              }
              buff[(int)(sVar10 + 4)] = uVar7;
              if (uVar6 != 5) {
                uVar7 = p[5];
                if (0x5e < (byte)(uVar7 - 0x20)) {
                  uVar7 = '.';
                }
                buff[(int)(sVar10 + 5)] = uVar7;
                if (uVar6 != 6) {
                  uVar7 = p[6];
                  if (0x5e < (byte)(uVar7 - 0x20)) {
                    uVar7 = '.';
                  }
                  buff[(int)(sVar10 + 6)] = uVar7;
                  if (uVar6 != 7) {
                    uVar7 = p[7];
                    if (0x5e < (byte)(uVar7 - 0x20)) {
                      uVar7 = '.';
                    }
                    buff[(int)(sVar10 + 7)] = uVar7;
                    if (uVar6 != 8) {
                      uVar7 = p[8];
                      if (0x5e < (byte)(uVar7 - 0x20)) {
                        uVar7 = '.';
                      }
                      buff[(int)(sVar10 + 8)] = uVar7;
                      if (uVar6 == 9) {
                        uVar11 = 9;
                      }
                      else {
                        uVar7 = p[9];
                        if (0x5e < (byte)(p[9] - 0x20)) {
                          uVar7 = '.';
                        }
                        buff[(int)(sVar10 + 9)] = uVar7;
                        if (uVar6 != 10) {
                          uVar7 = p[10];
                          if (0x5e < (byte)(uVar7 - 0x20)) {
                            uVar7 = '.';
                          }
                          buff[(int)(sVar10 + 10)] = uVar7;
                          if (uVar6 != 0xb) {
                            uVar7 = p[0xb];
                            if (0x5e < (byte)(uVar7 - 0x20)) {
                              uVar7 = '.';
                            }
                            buff[(int)(sVar10 + 0xb)] = uVar7;
                            if (uVar6 != 0xc) {
                              uVar7 = p[0xc];
                              if (0x5e < (byte)(uVar7 - 0x20)) {
                                uVar7 = '.';
                              }
                              buff[(int)(sVar10 + 0xc)] = uVar7;
                              if (uVar6 != 0xd) {
                                uVar7 = p[0xd];
                                if (0x5e < (byte)(p[0xd] - 0x20)) {
                                  uVar7 = '.';
                                }
                                buff[(int)(sVar10 + 0xd)] = uVar7;
                                if (uVar6 != 0xe) {
                                  uVar7 = p[0xe];
                                  if (0x5e < (byte)(uVar7 - 0x20)) {
                                    uVar7 = '.';
                                  }
                                  buff[(int)(sVar10 + 0xe)] = uVar7;
                                  if (uVar6 == 0x10) {
                                    uVar7 = p[0xf];
                                    if (0x5e < (byte)(uVar7 - 0x20)) {
                                      uVar7 = '.';
                                    }
                                    buff[(int)(sVar10 + 0xf)] = uVar7;
                                    uVar11 = 0x10;
                                  }
                                  else {
                                    uVar11 = 0xf;
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
      if (uVar6 != cnt) goto LAB_00100e74;
    }
LAB_00101198:
    if (cnt == 0x10) goto LAB_001012d8;
    buff[(int)(cnt + sVar10)] = ' ';
    if (cnt + 1U == 0x10) goto LAB_001012d8;
    cnt = cnt + 2;
    buff[(int)(cnt + 1U + sVar10)] = ' ';
    if (cnt == 0x10) goto LAB_001012d8;
  }
  buff[(int)(cnt + sVar10)] = ' ';
  if (cnt + 1 != 0x10) {
    buff[(int)(cnt + 1 + sVar10)] = ' ';
    if (cnt + 2 != 0x10) {
      buff[(int)(cnt + 2 + sVar10)] = ' ';
      if (cnt + 3 != 0x10) {
        buff[(int)(cnt + 3 + sVar10)] = ' ';
        if (cnt + 4 != 0x10) {
          buff[(int)(cnt + 4 + sVar10)] = ' ';
          if (cnt + 5 != 0x10) {
            buff[(int)(cnt + 5 + sVar10)] = ' ';
            if (cnt + 6 != 0x10) {
              buff[(int)(cnt + 6 + sVar10)] = ' ';
              if (cnt + 7 != 0x10) {
                buff[(int)(cnt + 7 + sVar10)] = ' ';
                if (cnt + 8 != 0x10) {
                  buff[(int)(cnt + 8 + sVar10)] = ' ';
                  if (cnt + 9 != 0x10) {
                    buff[(int)(cnt + 9 + sVar10)] = ' ';
                    if (cnt + 10 != 0x10) {
                      buff[(int)(cnt + 10 + sVar10)] = ' ';
                      if (cnt + 0xb != 0x10) {
                        buff[(int)(cnt + 0xb + sVar10)] = ' ';
                        if ((cnt + 0xc != 0x10) && (buff[(int)(cnt + 0xc + sVar10)] = ' ', cnt == 2)
                           ) {
                          buff[(int)(sVar10 + 0xf)] = ' ';
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
LAB_001012d8:
  *(undefined2 *)(buff + lVar13 + 0x10) = 0x7c;
  puts(buff);
  return;
}



undefined8 FUN_0010136c(char *param_1)

{
  ulonglong uVar1;
  int iVar2;
  size_t cnt;
  FILE *__stream;
  long_unsigned_int offset;
  uchar auStack144 [16];
  undefined auStack128 [48];
  ulonglong uStack80;
  
  iVar2 = __xstat(0,param_1,(stat *)auStack128);
  if ((iVar2 == 0) || (__stream = fopen(param_1,"rb"), __stream == (FILE *)0x0)) {
    perror(param_1);
    return 1;
  }
  offset = 0;
  if (uStack80 != 0) {
    do {
      cnt = fread(auStack144,1,0x10,__stream);
      uVar1 = offset + (longlong)(int)cnt;
      if (cnt == 0) break;
      dumpline(auStack144,offset,cnt);
      offset = uVar1;
    } while (uVar1 < uStack80);
  }
  fclose(__stream);
  return 0;
}



int hexdump(char *fname)

{
  ulonglong uVar1;
  int iVar2;
  size_t cnt;
  FILE *__stream;
  long_unsigned_int offset;
  uchar auStack144 [16];
  undefined auStack128 [48];
  ulonglong local_50;
  
  iVar2 = __xstat(0,fname,(stat *)auStack128);
  if ((iVar2 == 0) || (__stream = fopen(fname,"rb"), __stream == (FILE *)0x0)) {
    perror(fname);
    return 1;
  }
  offset = 0;
  if (local_50 != 0) {
    do {
      cnt = fread(auStack144,1,0x10,__stream);
      uVar1 = offset + (longlong)(int)cnt;
      if (cnt == 0) break;
      dumpline(auStack144,offset,cnt);
      offset = uVar1;
    } while (uVar1 < local_50);
  }
  fclose(__stream);
  return 0;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulonglong)param_1 & 0xffffffff,param_2,param_3);
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


