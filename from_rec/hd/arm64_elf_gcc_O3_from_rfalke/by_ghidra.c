typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
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

typedef ulong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE


// WARNING! conflicting data type names: /DWARF/stat.h/stat - /stat.h/stat

typedef long __syscall_slong_t;


// WARNING! conflicting data type names: /DWARF/types.h/__nlink_t - /types.h/__nlink_t


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
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_AARCH64_ATTRIBUTES=1879048195,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_AARCH64_ARCHEXT=1879048192,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
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
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
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
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
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
      if ((iVar2 == 0) || (__stream = fopen(__filename,"rb"), __stream == (FILE *)0x0)) {
        perror(__filename);
        iVar2 = 1;
      }
      else {
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
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + iVar2;
    } while ((ulong)(argc - 2) + 2 != lVar4);
  }
  return iVar5;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
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



void dumpline(uchar *p,ulong offset,int cnt)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  uchar *puVar5;
  uint uVar6;
  uchar uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  size_t sVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  char *__s;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char buff [80];
  
  sprintf(buff,"%08lX:",offset);
  if (0x10 < cnt) {
    cnt = 0x10;
  }
  if (cnt < 1) {
    iVar10 = 1;
LAB_00100bd0:
    do {
      sVar11 = strlen(buff);
      *(undefined4 *)(buff + sVar11) = 0x202020;
      bVar1 = iVar10 < 0x10;
      iVar10 = iVar10 + 1;
    } while (bVar1);
    iVar10 = (int)sVar11 + 3;
    lVar14 = (long)iVar10;
    *(undefined4 *)(buff + lVar14) = 0x7c2020;
    if (0 < cnt) goto LAB_00100c10;
    iVar13 = 2;
    buff[lVar14] = ' ';
    buff[(int)sVar11 + 4] = ' ';
  }
  else {
    lVar14 = 0;
    __s = buff + 9;
    do {
      pbVar2 = p + lVar14;
      lVar14 = lVar14 + 1;
      sprintf(__s," %02lX",(ulong)*pbVar2);
      __s = __s + 3;
    } while ((int)lVar14 < cnt);
    iVar10 = cnt + 1;
    if (cnt != 0x10) goto LAB_00100bd0;
    sVar11 = strlen(buff);
    iVar10 = (int)sVar11;
    lVar14 = (long)iVar10;
    *(undefined4 *)(buff + lVar14) = 0x7c2020;
LAB_00100c10:
    uVar6 = -(int)p & 0xf;
    if ((uint)cnt < uVar6) {
      uVar6 = cnt;
    }
    if ((uint)cnt < 0x11) {
      uVar6 = cnt;
    }
    if (uVar6 == 0) {
      uVar12 = 0;
LAB_00100e74:
      iVar13 = ((cnt - uVar6) - 0x10 >> 4) + 1;
      if (0xe < (cnt - 1U) - uVar6) {
        uVar9 = *(undefined8 *)((long)(p + uVar6) + 8);
        cVar18 = (char)((ulong)uVar9 >> 8);
        cVar19 = (char)((ulong)uVar9 >> 0x10);
        cVar20 = (char)((ulong)uVar9 >> 0x18);
        cVar21 = (char)((ulong)uVar9 >> 0x20);
        cVar22 = (char)((ulong)uVar9 >> 0x28);
        cVar23 = (char)((ulong)uVar9 >> 0x30);
        cVar24 = (char)((ulong)uVar9 >> 0x38);
        uVar8 = *(undefined8 *)(p + uVar6);
        lVar4 = (ulong)uVar6 + lVar14;
        auVar16 = CONCAT115(0x5e,CONCAT114(0x5e,CONCAT113(0x5e,CONCAT112(0x5e,CONCAT111(0x5e,
                                                  CONCAT110(0x5e,CONCAT19(0x5e,CONCAT18(0x5e,
                                                  0x5e5e5e5e5e5e5e5e))))))));
        puVar5 = p + uVar6;
        auVar15 = CONCAT115(0x2e,CONCAT114(0x2e,CONCAT113(0x2e,CONCAT112(0x2e,CONCAT111(0x2e,
                                                  CONCAT110(0x2e,CONCAT19(0x2e,CONCAT18(0x2e,
                                                  0x2e2e2e2e2e2e2e2e))))))));
        auVar17 = NEON_cmhs(auVar16,CONCAT115(cVar24 + -0x20,
                                              CONCAT114(cVar23 + -0x20,
                                                        CONCAT113(cVar22 + -0x20,
                                                                  CONCAT112(cVar21 + -0x20,
                                                                            CONCAT111(cVar20 + -0x20
                                                                                      ,CONCAT110(
                                                  cVar19 + -0x20,
                                                  CONCAT19(cVar18 + -0x20,
                                                           CONCAT18((char)uVar9 + -0x20,
                                                                    CONCAT17((char)((ulong)uVar8 >>
                                                                                   0x38) + -0x20,
                                                                             CONCAT16((char)((ulong)
                                                  uVar8 >> 0x30) + -0x20,
                                                  CONCAT15((char)((ulong)uVar8 >> 0x28) + -0x20,
                                                           CONCAT14((char)((ulong)uVar8 >> 0x20) +
                                                                    -0x20,CONCAT13((char)((ulong)
                                                  uVar8 >> 0x18) + -0x20,
                                                  CONCAT12((char)((ulong)uVar8 >> 0x10) + -0x20,
                                                           CONCAT11((char)((ulong)uVar8 >> 8) +
                                                                    -0x20,(char)uVar8 + -0x20)))))))
                                                  )))))))),1);
        auVar17 = NEON_bsl(auVar17,CONCAT115(cVar24,CONCAT114(cVar23,CONCAT113(cVar22,CONCAT112(
                                                  cVar21,CONCAT111(cVar20,CONCAT110(cVar19,CONCAT19(
                                                  cVar18,CONCAT18((char)uVar9,uVar8)))))))),auVar15,
                           1);
        *(long *)(buff + lVar4 + 8) = SUB168(auVar17 >> 0x40,0);
        *(long *)(buff + lVar4) = SUB168(auVar17,0);
        if (iVar13 != 1) {
          uVar9 = *(undefined8 *)(puVar5 + 0x18);
          cVar18 = (char)((ulong)uVar9 >> 8);
          cVar19 = (char)((ulong)uVar9 >> 0x10);
          cVar20 = (char)((ulong)uVar9 >> 0x18);
          cVar21 = (char)((ulong)uVar9 >> 0x20);
          cVar22 = (char)((ulong)uVar9 >> 0x28);
          cVar23 = (char)((ulong)uVar9 >> 0x30);
          cVar24 = (char)((ulong)uVar9 >> 0x38);
          uVar8 = *(undefined8 *)(puVar5 + 0x10);
          auVar17 = NEON_cmhs(auVar16,CONCAT115(cVar24 + -0x20,
                                                CONCAT114(cVar23 + -0x20,
                                                          CONCAT113(cVar22 + -0x20,
                                                                    CONCAT112(cVar21 + -0x20,
                                                                              CONCAT111(cVar20 + 
                                                  -0x20,CONCAT110(cVar19 + -0x20,
                                                                  CONCAT19(cVar18 + -0x20,
                                                                           CONCAT18((char)uVar9 +
                                                                                    -0x20,CONCAT17((
                                                  char)((ulong)uVar8 >> 0x38) + -0x20,
                                                  CONCAT16((char)((ulong)uVar8 >> 0x30) + -0x20,
                                                           CONCAT15((char)((ulong)uVar8 >> 0x28) +
                                                                    -0x20,CONCAT14((char)((ulong)
                                                  uVar8 >> 0x20) + -0x20,
                                                  CONCAT13((char)((ulong)uVar8 >> 0x18) + -0x20,
                                                           CONCAT12((char)((ulong)uVar8 >> 0x10) +
                                                                    -0x20,CONCAT11((char)((ulong)
                                                  uVar8 >> 8) + -0x20,(char)uVar8 + -0x20)))))))))))
                                                  )))),1);
          auVar17 = NEON_bsl(auVar17,CONCAT115(cVar24,CONCAT114(cVar23,CONCAT113(cVar22,CONCAT112(
                                                  cVar21,CONCAT111(cVar20,CONCAT110(cVar19,CONCAT19(
                                                  cVar18,CONCAT18((char)uVar9,uVar8)))))))),auVar15,
                             1);
          *(long *)(buff + lVar4 + 0x18) = SUB168(auVar17 >> 0x40,0);
          *(long *)(buff + lVar4 + 0x10) = SUB168(auVar17,0);
          if (iVar13 != 2) {
            uVar9 = *(undefined8 *)(puVar5 + 0x28);
            cVar18 = (char)((ulong)uVar9 >> 8);
            cVar19 = (char)((ulong)uVar9 >> 0x10);
            cVar20 = (char)((ulong)uVar9 >> 0x18);
            cVar21 = (char)((ulong)uVar9 >> 0x20);
            cVar22 = (char)((ulong)uVar9 >> 0x28);
            cVar23 = (char)((ulong)uVar9 >> 0x30);
            cVar24 = (char)((ulong)uVar9 >> 0x38);
            uVar8 = *(undefined8 *)(puVar5 + 0x20);
            auVar17 = NEON_cmhs(auVar16,CONCAT115(cVar24 + -0x20,
                                                  CONCAT114(cVar23 + -0x20,
                                                            CONCAT113(cVar22 + -0x20,
                                                                      CONCAT112(cVar21 + -0x20,
                                                                                CONCAT111(cVar20 + 
                                                  -0x20,CONCAT110(cVar19 + -0x20,
                                                                  CONCAT19(cVar18 + -0x20,
                                                                           CONCAT18((char)uVar9 +
                                                                                    -0x20,CONCAT17((
                                                  char)((ulong)uVar8 >> 0x38) + -0x20,
                                                  CONCAT16((char)((ulong)uVar8 >> 0x30) + -0x20,
                                                           CONCAT15((char)((ulong)uVar8 >> 0x28) +
                                                                    -0x20,CONCAT14((char)((ulong)
                                                  uVar8 >> 0x20) + -0x20,
                                                  CONCAT13((char)((ulong)uVar8 >> 0x18) + -0x20,
                                                           CONCAT12((char)((ulong)uVar8 >> 0x10) +
                                                                    -0x20,CONCAT11((char)((ulong)
                                                  uVar8 >> 8) + -0x20,(char)uVar8 + -0x20)))))))))))
                                                  )))),1);
            auVar17 = NEON_bsl(auVar17,CONCAT115(cVar24,CONCAT114(cVar23,CONCAT113(cVar22,CONCAT112(
                                                  cVar21,CONCAT111(cVar20,CONCAT110(cVar19,CONCAT19(
                                                  cVar18,CONCAT18((char)uVar9,uVar8)))))))),auVar15,
                               1);
            *(long *)(buff + lVar4 + 0x28) = SUB168(auVar17 >> 0x40,0);
            *(long *)(buff + lVar4 + 0x20) = SUB168(auVar17,0);
            if (iVar13 != 3) {
              uVar9 = *(undefined8 *)(puVar5 + 0x38);
              cVar18 = (char)((ulong)uVar9 >> 8);
              cVar19 = (char)((ulong)uVar9 >> 0x10);
              cVar20 = (char)((ulong)uVar9 >> 0x18);
              cVar21 = (char)((ulong)uVar9 >> 0x20);
              cVar22 = (char)((ulong)uVar9 >> 0x28);
              cVar23 = (char)((ulong)uVar9 >> 0x30);
              cVar24 = (char)((ulong)uVar9 >> 0x38);
              uVar8 = *(undefined8 *)(puVar5 + 0x30);
              auVar17 = NEON_cmhs(auVar16,CONCAT115(cVar24 + -0x20,
                                                    CONCAT114(cVar23 + -0x20,
                                                              CONCAT113(cVar22 + -0x20,
                                                                        CONCAT112(cVar21 + -0x20,
                                                                                  CONCAT111(cVar20 +
                                                                                            -0x20,
                                                  CONCAT110(cVar19 + -0x20,
                                                            CONCAT19(cVar18 + -0x20,
                                                                     CONCAT18((char)uVar9 + -0x20,
                                                                              CONCAT17((char)((ulong
                                                  )uVar8 >> 0x38) + -0x20,
                                                  CONCAT16((char)((ulong)uVar8 >> 0x30) + -0x20,
                                                           CONCAT15((char)((ulong)uVar8 >> 0x28) +
                                                                    -0x20,CONCAT14((char)((ulong)
                                                  uVar8 >> 0x20) + -0x20,
                                                  CONCAT13((char)((ulong)uVar8 >> 0x18) + -0x20,
                                                           CONCAT12((char)((ulong)uVar8 >> 0x10) +
                                                                    -0x20,CONCAT11((char)((ulong)
                                                  uVar8 >> 8) + -0x20,(char)uVar8 + -0x20)))))))))))
                                                  )))),1);
              auVar17 = NEON_bsl(auVar17,CONCAT115(cVar24,CONCAT114(cVar23,CONCAT113(cVar22,
                                                  CONCAT112(cVar21,CONCAT111(cVar20,CONCAT110(cVar19
                                                  ,CONCAT19(cVar18,CONCAT18((char)uVar9,uVar8)))))))
                                                  ),auVar15,1);
              *(long *)(buff + lVar4 + 0x38) = SUB168(auVar17 >> 0x40,0);
              *(long *)(buff + lVar4 + 0x30) = SUB168(auVar17,0);
              if (iVar13 != 4) {
                auVar17 = *(undefined (*) [16])(puVar5 + 0x40);
                auVar16 = NEON_cmhs(auVar16,CONCAT115(SUB161(auVar17 >> 0x78,0) + -0x20,
                                                      CONCAT114(SUB161(auVar17 >> 0x70,0) + -0x20,
                                                                CONCAT113(SUB161(auVar17 >> 0x68,0)
                                                                          + -0x20,CONCAT112(SUB161(
                                                  auVar17 >> 0x60,0) + -0x20,
                                                  CONCAT111(SUB161(auVar17 >> 0x58,0) + -0x20,
                                                            CONCAT110(SUB161(auVar17 >> 0x50,0) +
                                                                      -0x20,CONCAT19(SUB161(auVar17 
                                                  >> 0x48,0) + -0x20,
                                                  CONCAT18(SUB161(auVar17 >> 0x40,0) + -0x20,
                                                           CONCAT17(SUB161(auVar17 >> 0x38,0) +
                                                                    -0x20,CONCAT16(SUB161(auVar17 >>
                                                                                          0x30,0) +
                                                                                   -0x20,CONCAT15(
                                                  SUB161(auVar17 >> 0x28,0) + -0x20,
                                                  CONCAT14(SUB161(auVar17 >> 0x20,0) + -0x20,
                                                           CONCAT13(SUB161(auVar17 >> 0x18,0) +
                                                                    -0x20,CONCAT12(SUB161(auVar17 >>
                                                                                          0x10,0) +
                                                                                   -0x20,CONCAT11(
                                                  SUB161(auVar17 >> 8,0) + -0x20,
                                                  SUB161(auVar17,0) + -0x20))))))))))))))),1);
                auVar15 = NEON_bit(auVar15,auVar17,auVar16,1);
                *(long *)(buff + lVar4 + 0x48) = SUB168(auVar15 >> 0x40,0);
                *(long *)(buff + lVar4 + 0x40) = SUB168(auVar15,0);
              }
            }
          }
        }
        uVar12 = uVar12 + iVar13 * 0x10;
        if (iVar13 * 0x10 == cnt - uVar6) goto LAB_00101198;
      }
      iVar13 = uVar12 + 1;
      uVar7 = p[(int)uVar12];
      if (0x5e < (byte)(p[(int)uVar12] - 0x20)) {
        uVar7 = '.';
      }
      buff[(int)(uVar12 + iVar10)] = uVar7;
      if (iVar13 < cnt) {
        uVar7 = p[iVar13];
        iVar3 = uVar12 + 2;
        if (0x5e < (byte)(uVar7 - 0x20)) {
          uVar7 = '.';
        }
        buff[iVar13 + iVar10] = uVar7;
        if (iVar3 < cnt) {
          uVar7 = p[iVar3];
          iVar13 = uVar12 + 3;
          if (0x5e < (byte)(uVar7 - 0x20)) {
            uVar7 = '.';
          }
          buff[iVar3 + iVar10] = uVar7;
          if (iVar13 < cnt) {
            uVar7 = p[iVar13];
            iVar3 = uVar12 + 4;
            if (0x5e < (byte)(uVar7 - 0x20)) {
              uVar7 = '.';
            }
            buff[iVar13 + iVar10] = uVar7;
            if (iVar3 < cnt) {
              iVar13 = uVar12 + 5;
              uVar7 = p[iVar3];
              if (0x5e < (byte)(p[iVar3] - 0x20)) {
                uVar7 = '.';
              }
              buff[iVar3 + iVar10] = uVar7;
              if (iVar13 < cnt) {
                uVar7 = p[iVar13];
                iVar3 = uVar12 + 6;
                if (0x5e < (byte)(uVar7 - 0x20)) {
                  uVar7 = '.';
                }
                buff[iVar13 + iVar10] = uVar7;
                if (iVar3 < cnt) {
                  uVar7 = p[iVar3];
                  iVar13 = uVar12 + 7;
                  if (0x5e < (byte)(uVar7 - 0x20)) {
                    uVar7 = '.';
                  }
                  buff[iVar3 + iVar10] = uVar7;
                  if (iVar13 < cnt) {
                    uVar7 = p[iVar13];
                    iVar3 = uVar12 + 8;
                    if (0x5e < (byte)(uVar7 - 0x20)) {
                      uVar7 = '.';
                    }
                    buff[iVar13 + iVar10] = uVar7;
                    if (iVar3 < cnt) {
                      uVar7 = p[iVar3];
                      iVar13 = uVar12 + 9;
                      if (0x5e < (byte)(uVar7 - 0x20)) {
                        uVar7 = '.';
                      }
                      buff[iVar3 + iVar10] = uVar7;
                      if (iVar13 < cnt) {
                        uVar7 = p[iVar13];
                        iVar3 = uVar12 + 10;
                        if (0x5e < (byte)(uVar7 - 0x20)) {
                          uVar7 = '.';
                        }
                        buff[iVar13 + iVar10] = uVar7;
                        if (iVar3 < cnt) {
                          iVar13 = uVar12 + 0xb;
                          uVar7 = p[iVar3];
                          if (0x5e < (byte)(p[iVar3] - 0x20)) {
                            uVar7 = '.';
                          }
                          buff[iVar3 + iVar10] = uVar7;
                          if (iVar13 < cnt) {
                            uVar7 = p[iVar13];
                            iVar3 = uVar12 + 0xc;
                            if (0x5e < (byte)(uVar7 - 0x20)) {
                              uVar7 = '.';
                            }
                            buff[iVar13 + iVar10] = uVar7;
                            if (iVar3 < cnt) {
                              uVar7 = p[iVar3];
                              iVar13 = uVar12 + 0xd;
                              if (0x5e < (byte)(uVar7 - 0x20)) {
                                uVar7 = '.';
                              }
                              buff[iVar3 + iVar10] = uVar7;
                              if (iVar13 < cnt) {
                                uVar7 = p[iVar13];
                                iVar3 = uVar12 + 0xe;
                                if (0x5e < (byte)(uVar7 - 0x20)) {
                                  uVar7 = '.';
                                }
                                buff[iVar13 + iVar10] = uVar7;
                                if (iVar3 < cnt) {
                                  uVar7 = p[iVar3];
                                  if (0x5e < (byte)(uVar7 - 0x20)) {
                                    uVar7 = '.';
                                  }
                                  buff[iVar3 + iVar10] = uVar7;
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
      buff[iVar10] = uVar7;
      uVar12 = uVar6;
      if (uVar6 != 1) {
        uVar7 = p[1];
        if (0x5e < (byte)(uVar7 - 0x20)) {
          uVar7 = '.';
        }
        buff[iVar10 + 1] = uVar7;
        if (uVar6 != 2) {
          uVar7 = p[2];
          if (0x5e < (byte)(uVar7 - 0x20)) {
            uVar7 = '.';
          }
          buff[iVar10 + 2] = uVar7;
          if (uVar6 != 3) {
            uVar7 = p[3];
            if (0x5e < (byte)(uVar7 - 0x20)) {
              uVar7 = '.';
            }
            buff[iVar10 + 3] = uVar7;
            if (uVar6 != 4) {
              uVar7 = p[4];
              if (0x5e < (byte)(p[4] - 0x20)) {
                uVar7 = '.';
              }
              buff[iVar10 + 4] = uVar7;
              if (uVar6 != 5) {
                uVar7 = p[5];
                if (0x5e < (byte)(uVar7 - 0x20)) {
                  uVar7 = '.';
                }
                buff[iVar10 + 5] = uVar7;
                if (uVar6 != 6) {
                  uVar7 = p[6];
                  if (0x5e < (byte)(uVar7 - 0x20)) {
                    uVar7 = '.';
                  }
                  buff[iVar10 + 6] = uVar7;
                  if (uVar6 != 7) {
                    uVar7 = p[7];
                    if (0x5e < (byte)(uVar7 - 0x20)) {
                      uVar7 = '.';
                    }
                    buff[iVar10 + 7] = uVar7;
                    if (uVar6 != 8) {
                      uVar7 = p[8];
                      if (0x5e < (byte)(uVar7 - 0x20)) {
                        uVar7 = '.';
                      }
                      buff[iVar10 + 8] = uVar7;
                      if (uVar6 == 9) {
                        uVar12 = 9;
                      }
                      else {
                        uVar7 = p[9];
                        if (0x5e < (byte)(p[9] - 0x20)) {
                          uVar7 = '.';
                        }
                        buff[iVar10 + 9] = uVar7;
                        if (uVar6 != 10) {
                          uVar7 = p[10];
                          if (0x5e < (byte)(uVar7 - 0x20)) {
                            uVar7 = '.';
                          }
                          buff[iVar10 + 10] = uVar7;
                          if (uVar6 != 0xb) {
                            uVar7 = p[0xb];
                            if (0x5e < (byte)(uVar7 - 0x20)) {
                              uVar7 = '.';
                            }
                            buff[iVar10 + 0xb] = uVar7;
                            if (uVar6 != 0xc) {
                              uVar7 = p[0xc];
                              if (0x5e < (byte)(uVar7 - 0x20)) {
                                uVar7 = '.';
                              }
                              buff[iVar10 + 0xc] = uVar7;
                              if (uVar6 != 0xd) {
                                uVar7 = p[0xd];
                                if (0x5e < (byte)(p[0xd] - 0x20)) {
                                  uVar7 = '.';
                                }
                                buff[iVar10 + 0xd] = uVar7;
                                if (uVar6 != 0xe) {
                                  uVar7 = p[0xe];
                                  if (0x5e < (byte)(uVar7 - 0x20)) {
                                    uVar7 = '.';
                                  }
                                  buff[iVar10 + 0xe] = uVar7;
                                  if (uVar6 == 0x10) {
                                    uVar7 = p[0xf];
                                    if (0x5e < (byte)(uVar7 - 0x20)) {
                                      uVar7 = '.';
                                    }
                                    buff[iVar10 + 0xf] = uVar7;
                                  }
                                  else {
                                    uVar12 = 0xf;
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
    buff[cnt + iVar10] = ' ';
    if (cnt + 1U == 0x10) goto LAB_001012d8;
    iVar13 = cnt + 2;
    buff[(int)(cnt + 1U + iVar10)] = ' ';
    if (iVar13 == 0x10) goto LAB_001012d8;
  }
  buff[iVar13 + iVar10] = ' ';
  if (iVar13 + 1 != 0x10) {
    buff[iVar13 + 1 + iVar10] = ' ';
    if (iVar13 + 2 != 0x10) {
      buff[iVar13 + 2 + iVar10] = ' ';
      if (iVar13 + 3 != 0x10) {
        buff[iVar13 + 3 + iVar10] = ' ';
        if (iVar13 + 4 != 0x10) {
          buff[iVar13 + 4 + iVar10] = ' ';
          if (iVar13 + 5 != 0x10) {
            buff[iVar13 + 5 + iVar10] = ' ';
            if (iVar13 + 6 != 0x10) {
              buff[iVar13 + 6 + iVar10] = ' ';
              if (iVar13 + 7 != 0x10) {
                buff[iVar13 + 7 + iVar10] = ' ';
                if (iVar13 + 8 != 0x10) {
                  buff[iVar13 + 8 + iVar10] = ' ';
                  if (iVar13 + 9 != 0x10) {
                    buff[iVar13 + 9 + iVar10] = ' ';
                    if (iVar13 + 10 != 0x10) {
                      buff[iVar13 + 10 + iVar10] = ' ';
                      if (iVar13 + 0xb != 0x10) {
                        buff[iVar13 + 0xb + iVar10] = ' ';
                        if ((iVar13 + 0xc != 0x10) &&
                           (buff[iVar13 + 0xc + iVar10] = ' ', iVar13 == 2)) {
                          buff[iVar10 + 0xf] = ' ';
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
  *(undefined2 *)(buff + lVar14 + 0x10) = 0x7c;
  puts(buff);
  return;
}



undefined8 FUN_0010136c(char *param_1)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  ulong offset;
  uchar auStack144 [16];
  ulong uStack80;
  
  iVar2 = __xstat(0,param_1,(stat *)&stack0xffffffffffffff80);
  if ((iVar2 == 0) || (__stream = fopen(param_1,"rb"), __stream == (FILE *)0x0)) {
    perror(param_1);
    return 1;
  }
  offset = 0;
  if (uStack80 != 0) {
    do {
      sVar3 = fread(auStack144,1,0x10,__stream);
      iVar2 = (int)sVar3;
      uVar1 = offset + (long)iVar2;
      if (iVar2 == 0) break;
      dumpline(auStack144,offset,iVar2);
      offset = uVar1;
    } while (uVar1 < uStack80);
  }
  fclose(__stream);
  return 0;
}



int hexdump(char *fname)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  ulong offset;
  uchar auStack144 [16];
  ulong uStack80;
  
  iVar2 = __xstat(0,fname,(stat *)&stack0xffffffffffffff80);
  if ((iVar2 == 0) || (__stream = fopen(fname,"rb"), __stream == (FILE *)0x0)) {
    perror(fname);
    return 1;
  }
  offset = 0;
  if (uStack80 != 0) {
    do {
      sVar3 = fread(auStack144,1,0x10,__stream);
      iVar2 = (int)sVar3;
      uVar1 = offset + (long)iVar2;
      if (iVar2 == 0) break;
      dumpline(auStack144,offset,iVar2);
      offset = uVar1;
    } while (uVar1 < uStack80);
  }
  fclose(__stream);
  return 0;
}



void FUN_0010143c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0010143c. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x10143c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
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


