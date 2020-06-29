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

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef long __jmp_buf[8];

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[128];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct _IO_FILE FILE;

typedef void (* __sighandler_t)(int);

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
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
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00400960(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void flockfile(FILE *__stream)

{
  flockfile(__stream);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memchr(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = _setjmp(__env);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void clearerr(FILE *__stream)

{
  clearerr(__stream);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    // WARNING: Subroutine does not return
  longjmp(__env,__val);
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



ulong main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  cmdCount = param_1;
  cmdLine = param_2;
  gEnv = param_3;
  NimMain();
  return (ulong)(uint)nim_program_result;
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



// WARNING: Removing unreachable block (ram,0x00400afd)
// WARNING: Removing unreachable block (ram,0x00400b07)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400b3f)
// WARNING: Removing unreachable block (ram,0x00400b49)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7260 == '\0') {
    deregister_tm_clones();
    completed_7260 = 1;
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400b3f)
// WARNING: Removing unreachable block (ram,0x00400b49)

void frame_dummy(void)

{
  return;
}



void PreMainInner(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  long lVar47;
  long lVar48;
  undefined8 ***apppuStack16 [2];
  
  if (threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw < 0xdac) {
    *(undefined8 *)
     (threadLocalMarkers_pC47Nqd8F629cuTchphM5YA + threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw * 8)
         = 0x405800;
    threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw + 1;
    nimvm_IAxmsqnME4Jmed24hOgrFQ = 0;
    genericReset(strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,NTI_TuG1vdYwChKtx4TOkRnAjw_);
    strDesc_D0UzA4zsDu5tgpJQ9a9clXPg._8_2_ = 0x21c;
    apppuStack16[0] = apppuStack16;
    strDesc_D0UzA4zsDu5tgpJQ9a9clXPg._0_8_ = 8;
    nimGC_setStackBottom(apppuStack16[0]);
    initGC_njssp69aa7hvxte9bJ8uuDcg();
    signal(2,signalHandler);
    signal(0xb,signalHandler);
    signal(6,signalHandler);
    signal(8,signalHandler);
    signal(4,signalHandler);
    signal(0xb,signalHandler);
    signal(0xd,signalHandler);
    return;
  }
  nimRegisterThreadLocalMarker_part_14();
  auVar6 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a177);
  NTI_TuG1vdYwChKtx4TOkRnAjw_._8_2_ = 0x312;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._64_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._68_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._72_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._76_4_ = SUB164(auVar6 >> 0x60,0);
  auVar6 = movhps(ZEXT816(0x60d410),0x60d440);
  NTI_TuG1vdYwChKtx4TOkRnAjw_._16_8_ = 0;
  NTI_TuG1vdYwChKtx4TOkRnAjw_._0_8_ = 0x38;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._16_8_ = 0;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._0_8_ = 8;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._8_2_ = 799;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[48] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._56_8_ = 0;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._16_8_ = 0;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._0_8_ = 1;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._8_2_ = 0x30e;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._0_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._4_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._8_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._12_4_ = SUB164(auVar6 >> 0x60,0);
  auVar6 = (undefined  [16])0x0;
  puVar3 = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141;
  lVar4 = 0;
  do {
    lVar5 = lVar4 + 0x80;
    lVar47 = SUB168(auVar6,0);
    lVar48 = SUB168(auVar6 >> 0x40,0);
    *(long *)(puVar3 + 0x98) = lVar47;
    puVar3[0x2a0] = 1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 200),auVar6);
    *(undefined8 *)(puVar3 + 200) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x188),CONCAT88(lVar48 + 4,lVar47 + 4));
    *(undefined8 *)(puVar3 + 0x188) = uVar1;
    *(long *)(puVar3 + 0xf8) = lVar47 + 2;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x128),CONCAT88(lVar48 + 2,lVar47 + 2));
    *(undefined8 *)(puVar3 + 0x128) = uVar1;
    *(long *)(puVar3 + 0x158) = lVar47 + 4;
    *(long *)(puVar3 + 0x1b8) = lVar47 + 6;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x1e8),CONCAT88(lVar48 + 6,lVar47 + 6));
    *(undefined8 *)(puVar3 + 0x1e8) = uVar1;
    *(long *)(puVar3 + 0x218) = lVar47 + 8;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x248),CONCAT88(lVar48 + 8,lVar47 + 8));
    *(undefined8 *)(puVar3 + 0x248) = uVar1;
    *(long *)(puVar3 + 0x278) = lVar47 + 10;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x2a8),CONCAT88(lVar48 + 10,lVar47 + 10));
    *(undefined8 *)(puVar3 + 0x2a8) = uVar1;
    *(long *)(puVar3 + 0x2d8) = lVar47 + 0xc;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x308),CONCAT88(lVar48 + 0xc,lVar47 + 0xc));
    *(undefined8 *)(puVar3 + 0x308) = uVar1;
    *(long *)(puVar3 + 0x338) = lVar47 + 0xe;
    puVar3[0x90] = 1;
    puVar3[0xc0] = 1;
    puVar3[0xf0] = 1;
    puVar3[0x120] = 1;
    puVar3[0x150] = 1;
    puVar3[0x180] = 1;
    puVar3[0x1b0] = 1;
    puVar3[0x1e0] = 1;
    puVar3[0x210] = 1;
    puVar3[0x240] = 1;
    puVar3[0x270] = 1;
    puVar3[0x2d0] = 1;
    puVar3[0x300] = 1;
    puVar3[0x330] = 1;
    puVar3[0x360] = 1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x368),CONCAT88(lVar48 + 0xe,lVar47 + 0xe));
    *(undefined8 *)(puVar3 + 0x368) = uVar1;
                    // WARNING: Load size is inaccurate
    auVar6 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x50);
                    // WARNING: Load size is inaccurate
    auVar33 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x60);
                    // WARNING: Load size is inaccurate
    auVar34 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x20);
                    // WARNING: Load size is inaccurate
    auVar7 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x10);
    *(long *)(puVar3 + 0x288) = SUB168(auVar6,0);
                    // WARNING: Load size is inaccurate
    auVar8 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x30);
                    // WARNING: Load size is inaccurate
    auVar9 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x2b8),auVar6);
    *(undefined8 *)(puVar3 + 0x2b8) = uVar1;
    uVar2 = *(undefined8 *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x70);
    *(long *)(puVar3 + 0x2e8) = SUB168(auVar33,0);
                    // WARNING: Load size is inaccurate
    auVar6 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x40);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x318),auVar33);
    *(undefined8 *)(puVar3 + 0x318) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x198),auVar34);
    *(undefined8 *)(puVar3 + 0x198) = uVar1;
    auVar33 = psllq(CONCAT88(lVar48 + 3,lVar47 + 3),1);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0xd8),auVar9);
    *(undefined8 *)(puVar3 + 0xd8) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x138),auVar7);
    *(undefined8 *)(puVar3 + 0x138) = uVar1;
    *(long *)(puVar3 + 0x168) = SUB168(auVar34,0);
    auVar34 = psllq(CONCAT88(SUB168(auVar33 >> 0x40,0) + lVar48 + 3,SUB168(auVar33,0) + lVar47 + 3),
                    4);
                    // WARNING: Load size is inaccurate
    auVar33 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x70);
    *(long *)(puVar3 + 0xa8) = SUB168(auVar9,0);
    *(long *)(puVar3 + 0x108) = SUB168(auVar7,0);
    *(long *)(puVar3 + 0x1c8) = SUB168(auVar8,0);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x1f8),auVar8);
    *(undefined8 *)(puVar3 + 0x1f8) = uVar1;
    *(long *)(puVar3 + 0x228) = SUB168(auVar6,0);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 600),auVar6);
    *(undefined8 *)(puVar3 + 600) = uVar1;
    *(undefined8 *)(puVar3 + 0x348) = uVar2;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x378),auVar33);
    *(undefined8 *)(puVar3 + 0x378) = uVar1;
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 4) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 8) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0xc) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 5,lVar47 + 5),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 5,SUB168(auVar6,0) + lVar47 + 5),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x10) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x14) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x18) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x1c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 7,lVar47 + 7),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 7,SUB168(auVar6,0) + lVar47 + 7),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x20) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x24) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x28) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x2c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 9,lVar47 + 9),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 9,SUB168(auVar6,0) + lVar47 + 9),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x30) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x34) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x38) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x3c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xb,lVar47 + 0xb),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xb,SUB168(auVar6,0) + lVar47 + 0xb)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x40) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x44) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x48) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x4c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xd,lVar47 + 0xd),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xd,SUB168(auVar6,0) + lVar47 + 0xd)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x50) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x54) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x58) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x5c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xf,lVar47 + 0xf),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xf,SUB168(auVar6,0) + lVar47 + 0xf)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x60) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 100) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x68) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x6c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = CONCAT88(lVar48 + 0x10,lVar47 + 0x10);
    auVar33 = psllq(CONCAT88(lVar48 + 0x11,lVar47 + 0x11),1);
    auVar33 = psllq(CONCAT88(SUB168(auVar33 >> 0x40,0) + lVar48 + 0x11,
                             SUB168(auVar33,0) + lVar47 + 0x11),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x70) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x74) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x78) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x7c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33 >> 0x40,0)) >> 0x20);
    puVar3 = puVar3 + 0x300;
    lVar4 = lVar5;
  } while (lVar5 != 0x200);
  auVar31 = ZEXT816(0x60ede0);
  auVar37 = movhps(auVar31,"name");
  auVar38 = movhps(ZEXT816(0x612560),&DAT_0040a17c);
  auVar39 = movhps(ZEXT816(0x60e0d0),0x60e100);
  auVar40 = movhps(ZEXT816(0x60eca0),0x60e190);
  auVar41 = movhps(ZEXT816(0x60efc0),"flags");
  auVar42 = movhps(ZEXT816(0x612760),&DAT_0040a1a8);
  auVar43 = movhps(ZEXT816(0x60e280),0x60e2b0);
  auVar44 = movhps(ZEXT816(0x60e2e0),0x60e310);
  auVar45 = movhps(ZEXT816(0x6195a0),&DAT_0040a17c);
  auVar6 = movhps(ZEXT816(0x612760),&DAT_0040a1d0);
  auVar46 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),"offset");
  auVar33 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a1d4);
  auVar34 = movhps(ZEXT816(0x60e250),0x60e370);
  auVar7 = movhps(ZEXT816(0x60e3a0),0x60e3d0);
  auVar8 = movhps(ZEXT816(0x60e400),0x60e430);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4100_4_ = SUB164(auVar37 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4104_4_ = SUB164(auVar37 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4108_4_ = SUB164(auVar37 >> 0x60,0);
  auVar9 = movhps(ZEXT816(0x6126e0),&DAT_0040a1d8);
  auVar10 = movhps(ZEXT816(0x6125a0),&DAT_0040a1dd);
  auVar11 = movhps(ZEXT816(0x6127c0),"finalizer");
  auVar12 = movhps(ZEXT816(0x612660),"marker");
  auVar13 = movhps(ZEXT816(0x60e0a0),0x60e1c0);
  auVar14 = movhps(ZEXT816(0x60e1f0),0x60e460);
  auVar15 = movhps(ZEXT816(0x60e490),0x60e4c0);
  auVar16 = movhps(ZEXT816(0x612420),"deepcopy");
  auVar17 = movhps(ZEXT816(0x60ee20),"parent");
  auVar18 = movhps(ZEXT816(0x6125e0),&DAT_0040a203);
  auVar19 = movhps(auVar31,"procname");
  auVar20 = movhps(ZEXT816(0x60e640),0x60e670);
  auVar32 = movhps(auVar31,"filename");
  auVar31 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a210);
  auVar21 = movhps(ZEXT816(0x6123e0),"trace");
  auVar36 = movhps(ZEXT816(0x60ee20),&DAT_0040a22d);
  auVar22 = movhps(ZEXT816(0x612460),"raise_id");
  auVar23 = movhps(ZEXT816(0x60e550),0x60e580);
  auVar24 = movhps(ZEXT816(0x60e5b0),0x60e5e0);
  auVar25 = movhps(ZEXT816(0x60e6d0),0x60e700);
  auVar26 = movhps(ZEXT816(0x6124a0),0x60e520);
  auVar27 = movhps(ZEXT816(0x612720),0x60e730);
  auVar35 = movhps(ZEXT816(0x612720),0x60e790);
  auVar28 = movhps(ZEXT816(0x60eda0),0x60e760);
  auVar29 = movhps(ZEXT816(0x60ef60),0x60e7c0);
  auVar30 = movhps(ZEXT816(0x612620),0x60e7f0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._0_4_ = SUB164(auVar20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._4_4_ = SUB164(auVar20 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._8_4_ = SUB164(auVar20 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._12_4_ = SUB164(auVar20 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._16_8_ = 0x60e6a0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._0_4_ = SUB164(auVar23,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._4_4_ = SUB164(auVar23 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._8_4_ = SUB164(auVar23 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._12_4_ = SUB164(auVar23 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._16_4_ = SUB164(auVar24,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._20_4_ = SUB164(auVar24 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._24_4_ = SUB164(auVar24 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._28_4_ = SUB164(auVar24 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._32_4_ = SUB164(auVar25,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._36_4_ = SUB164(auVar25 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._40_4_ = SUB164(auVar25 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._44_4_ = SUB164(auVar25 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._0_4_ = SUB164(auVar43,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._4_4_ = SUB164(auVar43 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._8_4_ = SUB164(auVar43 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._12_4_ = SUB164(auVar43 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._16_4_ = SUB164(auVar44,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._20_4_ = SUB164(auVar44 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._24_4_ = SUB164(auVar44 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._28_4_ = SUB164(auVar44 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._0_4_ = SUB164(auVar34,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._4_4_ = SUB164(auVar34 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._8_4_ = SUB164(auVar34 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._12_4_ = SUB164(auVar34 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._16_4_ = SUB164(auVar7,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._20_4_ = SUB164(auVar7 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._24_4_ = SUB164(auVar7 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._28_4_ = SUB164(auVar7 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._32_4_ = SUB164(auVar8,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._36_4_ = SUB164(auVar8 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._40_4_ = SUB164(auVar8 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._44_4_ = SUB164(auVar8 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._0_4_ = SUB164(auVar39,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._4_4_ = SUB164(auVar39 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._8_4_ = SUB164(auVar39 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._12_4_ = SUB164(auVar39 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._16_8_ = 0x60e130;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[0] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._32_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._40_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[96] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._104_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._112_4_ = SUB164(auVar38,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._116_4_ = SUB164(auVar38 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._120_4_ = SUB164(auVar38 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._124_4_ = SUB164(auVar38 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3216] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3248_8_ = 0x40;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3256_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3264] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3272_8_ = 9;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3280_4_ = SUB164(auVar41,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3284_4_ = SUB164(auVar41 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3288_4_ = SUB164(auVar41 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3292_4_ = SUB164(auVar41 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3312] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3320_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3336_8_ = "ntfNoRefs";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3360] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3368_8_ = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3384_8_ = "ntfAcyclic";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3408] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3416_8_ = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3432_8_ = "ntfEnumHole";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3456] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3488_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3496_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3504] = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3536_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3552] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3560_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3568_4_ = SUB164(auVar42,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3572_4_ = SUB164(auVar42 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3576_4_ = SUB164(auVar42 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3580_4_ = SUB164(auVar42 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3600] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3608_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3616_4_ = SUB164(auVar10,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3620_4_ = SUB164(auVar10 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3624_4_ = SUB164(auVar10 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3628_4_ = SUB164(auVar10 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3648] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3680_8_ = 6;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3688_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3696] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3704_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3712_4_ = SUB164(auVar45,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3716_4_ = SUB164(auVar45 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3720_4_ = SUB164(auVar45 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3724_4_ = SUB164(auVar45 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3744] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3752_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3768_8_ = "nkNone";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3792] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3800_8_ = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3816_8_ = "nkSlot";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3840] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3848_8_ = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3864_8_ = "nkList";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3888] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3896_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3912_8_ = "nkCase";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3936] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3968_8_ = 4;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3976_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3984] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3992_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4000_4_ = SUB164(auVar46,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4004_4_ = SUB164(auVar46 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4008_4_ = SUB164(auVar46 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4012_4_ = SUB164(auVar46 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4032] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4040_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4048_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4052_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4056_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4060_4_ = SUB164(auVar6 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4080] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4088_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4096_4_ = SUB164(auVar37,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4128] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4136_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4144_4_ = SUB164(auVar33,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4148_4_ = SUB164(auVar33 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4152_4_ = SUB164(auVar33 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4156_4_ = SUB164(auVar33 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4176] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4184_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4192_4_ = SUB164(auVar9,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4196_4_ = SUB164(auVar9 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4200_4_ = SUB164(auVar9 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4204_4_ = SUB164(auVar9 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4224] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4232_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4240_4_ = SUB164(auVar11,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4244_4_ = SUB164(auVar11 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4248_4_ = SUB164(auVar11 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4252_4_ = SUB164(auVar11 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4272] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4280_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4288_4_ = SUB164(auVar12,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4292_4_ = SUB164(auVar12 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4296_4_ = SUB164(auVar12 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4300_4_ = SUB164(auVar12 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4320] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4328_8_ = 0x30;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4336_4_ = SUB164(auVar16,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4340_4_ = SUB164(auVar16 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4344_4_ = SUB164(auVar16 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4348_4_ = SUB164(auVar16 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4368] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4400_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4416] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4448_8_ = 6;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4456_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4464] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4472_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4480_4_ = SUB164(auVar17,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4484_4_ = SUB164(auVar17 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4488_4_ = SUB164(auVar17 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4492_4_ = SUB164(auVar17 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4512] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4520_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4528_4_ = SUB164(auVar37,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4532_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4100_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4536_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4104_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4540_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4108_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4560] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4568_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4576_4_ = SUB164(auVar18,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4580_4_ = SUB164(auVar18 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4584_4_ = SUB164(auVar18 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4588_4_ = SUB164(auVar18 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4608] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4616_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4624_4_ = SUB164(auVar21,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4628_4_ = SUB164(auVar21 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4632_4_ = SUB164(auVar21 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4636_4_ = SUB164(auVar21 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4656] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4688_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4696_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4704] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4712_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4720_4_ = SUB164(auVar19,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4724_4_ = SUB164(auVar19 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4728_4_ = SUB164(auVar19 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4732_4_ = SUB164(auVar19 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4752] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4760_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4768_4_ = SUB164(auVar31,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4772_4_ = SUB164(auVar31 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4776_4_ = SUB164(auVar31 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4780_4_ = SUB164(auVar31 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4800] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4808_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4816_4_ = SUB164(auVar32,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4820_4_ = SUB164(auVar32 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4824_4_ = SUB164(auVar32 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4828_4_ = SUB164(auVar32 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4848] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4856_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4864_4_ = SUB164(auVar22,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4868_4_ = SUB164(auVar22 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4872_4_ = SUB164(auVar22 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4876_4_ = SUB164(auVar22 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4896] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4904_8_ = 0x30;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4912_4_ = SUB164(auVar36,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4916_4_ = SUB164(auVar36 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4920_4_ = SUB164(auVar36 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4924_4_ = SUB164(auVar36 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4944] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4976_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4992] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5024_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5040] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5072_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5088] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5120_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5136] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5168_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._16_4_ = SUB164(auVar13,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._20_4_ = SUB164(auVar13 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._24_4_ = SUB164(auVar13 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._28_4_ = SUB164(auVar13 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._32_4_ = SUB164(auVar14,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._36_4_ = SUB164(auVar14 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._40_4_ = SUB164(auVar14 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._44_4_ = SUB164(auVar14 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._48_4_ = SUB164(auVar15,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._52_4_ = SUB164(auVar15 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._56_4_ = SUB164(auVar15 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._60_4_ = SUB164(auVar15 >> 0x60,0);
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._0_8_ = 1;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._8_2_ = 0x30e;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._16_8_ = 0;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._24_8_ = 0x60e160;
  NTI_oLyohQ7O2XOvGnflOss8EA_._0_8_ = 0x18;
  NTI_oLyohQ7O2XOvGnflOss8EA_._8_2_ = 0x312;
  NTI_oLyohQ7O2XOvGnflOss8EA_._16_8_ = 0;
  NTI_oLyohQ7O2XOvGnflOss8EA_._24_8_ = 0x60e610;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._0_8_ = 8;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_[8] = 0x16;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._16_8_ = NTI_iLZrPn9anoh9ad1MmO0RczFw_;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._40_8_ = Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ;
  NTI_pPliadsJkoxIPLiuFLcL3g_._0_8_ = 0x3fff8;
  NTI_pPliadsJkoxIPLiuFLcL3g_._8_2_ = 0x310;
  NTI_pPliadsJkoxIPLiuFLcL3g_._16_8_ = NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._0_8_ = 0x38;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_[8] = 0x11;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._16_4_ = SUB164(auVar27,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._20_4_ = SUB164(auVar27 >> 0x20,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._24_4_ = SUB164(auVar27 >> 0x40,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._28_4_ = SUB164(auVar27 >> 0x60,0);
  NTI_S9agCYBinaYZnGWcjTdxclg_._0_8_ = 8;
  NTI_S9agCYBinaYZnGWcjTdxclg_._8_2_ = 0x31d;
  NTI_S9agCYBinaYZnGWcjTdxclg_._16_8_ = 0;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._0_8_ = 8;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_[8] = 0x16;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._16_8_ = NTI_XEycrCsme5C8CVWAYEcdBQ_;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._40_8_ = Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw;
  NTI_TuG1vdYwChKtx4TOkRnAjw_._24_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._0_8_ = 0x38;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_[8] = 0x11;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._16_4_ = SUB164(auVar29,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._20_4_ = SUB164(auVar29 >> 0x20,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._24_4_ = SUB164(auVar29 >> 0x40,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._28_4_ = SUB164(auVar29 >> 0x60,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._0_8_ = 0x38;
  NTI_LbeSGvgPzGzXnW9caIkJqMA_[8] = 0x11;
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._16_4_ = SUB164(auVar35,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._20_4_ = SUB164(auVar35 >> 0x20,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._24_4_ = SUB164(auVar35 >> 0x40,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._28_4_ = SUB164(auVar35 >> 0x60,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._0_8_ = 1;
  NTI_MbMVByo9a9ck632Se8onTXew_._8_2_ = 0x313;
  NTI_MbMVByo9a9ck632Se8onTXew_._16_4_ = SUB164(auVar40,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._20_4_ = SUB164(auVar40 >> 0x20,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._24_4_ = SUB164(auVar40 >> 0x40,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._28_4_ = SUB164(auVar40 >> 0x60,0);
  NTI_uB9b75OUPRENsBAu4AnoePA_._0_8_ = 8;
  NTI_uB9b75OUPRENsBAu4AnoePA_._8_2_ = 0x218;
  NTI_uB9b75OUPRENsBAu4AnoePA_._16_8_ = NTI_oLyohQ7O2XOvGnflOss8EA_;
  NTI_uB9b75OUPRENsBAu4AnoePA_._40_8_ = Marker_tySequence_uB9b75OUPRENsBAu4AnoePA;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._0_8_ = 8;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._8_2_ = 0x319;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._16_8_ = 0;
  NTI_hMQEc0FMry7Up7EoPki79aA_._0_8_ = 8;
  NTI_hMQEc0FMry7Up7EoPki79aA_._8_2_ = 0x328;
  NTI_hMQEc0FMry7Up7EoPki79aA_._16_8_ = 0;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._0_8_ = 8;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._8_2_ = 0x111;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._16_8_ = 0;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._24_8_ = 0x60e4f0;
  NTI_kT45dHShde6Al0PdS4U9aGA_._0_8_ = 0x30;
  NTI_kT45dHShde6Al0PdS4U9aGA_._8_2_ = 0x312;
  NTI_kT45dHShde6Al0PdS4U9aGA_._16_8_ = 0;
  NTI_kT45dHShde6Al0PdS4U9aGA_._24_8_ = 0x60e220;
  NTI_LEclZrWX2FQAodlapxGITw_._0_8_ = 8;
  NTI_LEclZrWX2FQAodlapxGITw_[8] = 0x16;
  NTI_LEclZrWX2FQAodlapxGITw_._16_8_ = NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
  NTI_LEclZrWX2FQAodlapxGITw_._40_8_ = Marker_tyRef_LEclZrWX2FQAodlapxGITw;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._24_8_ = 0x60e070;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._0_8_ = 8;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._8_2_ = 0x315;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._16_8_ = NTI_kT45dHShde6Al0PdS4U9aGA_;
  NTI_77mFvmsOLKik79ci2hXkHEg_._0_8_ = 8;
  NTI_77mFvmsOLKik79ci2hXkHEg_._8_2_ = 0x21c;
  NTI_77mFvmsOLKik79ci2hXkHEg_._16_8_ = 0;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._0_8_ = 0x38;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_[8] = 0x11;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._16_4_ = SUB164(auVar28,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._20_4_ = SUB164(auVar28 >> 0x20,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._24_4_ = SUB164(auVar28 >> 0x40,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._28_4_ = SUB164(auVar28 >> 0x60,0);
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._0_8_ = 8;
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._8_2_ = 0x319;
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._16_8_ = 0;
  NTI_uNps8ABY788DreuZn29bmIg_._0_8_ = 8;
  NTI_uNps8ABY788DreuZn29bmIg_._8_2_ = 0x315;
  NTI_uNps8ABY788DreuZn29bmIg_._16_8_ = NTI_pPliadsJkoxIPLiuFLcL3g_;
  NTI_XEycrCsme5C8CVWAYEcdBQ_._0_8_ = 0x38;
  NTI_XEycrCsme5C8CVWAYEcdBQ_[8] = 0x11;
  NTI_XEycrCsme5C8CVWAYEcdBQ_._16_4_ = SUB164(auVar26,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._20_4_ = SUB164(auVar26 >> 0x20,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._24_4_ = SUB164(auVar26 >> 0x40,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._28_4_ = SUB164(auVar26 >> 0x60,0);
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._0_8_ = 8;
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._8_2_ = 0x315;
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._16_8_ = NTI_TuG1vdYwChKtx4TOkRnAjw_;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._0_8_ = 8;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._8_2_ = 0x31a;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._16_8_ = 0;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._0_8_ = 0x38;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_[8] = 0x11;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._16_4_ = SUB164(auVar30,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._20_4_ = SUB164(auVar30 >> 0x20,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._24_4_ = SUB164(auVar30 >> 0x40,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._28_4_ = SUB164(auVar30 >> 0x60,0);
  NTI_unfNsxrcATrufDZmpBq4HQ_._0_8_ = 1;
  NTI_unfNsxrcATrufDZmpBq4HQ_._8_2_ = 0x30e;
  NTI_unfNsxrcATrufDZmpBq4HQ_._16_8_ = 0;
  NTI_unfNsxrcATrufDZmpBq4HQ_._24_8_ = 0x60e340;
  return;
}



void TM_2lQWYPc4hWuvSK7bVeWxSA_4(void)

{
  nimGCvisit(name_6AZmjR50AehluhCwumgXmw,0);
  return;
}



void PreMain(void)

{
  code *local_10 [2];
  
  systemDatInit000();
  local_10[0] = PreMainInner;
  nimGC_setStackBottom(local_10);
  (*local_10[0])();
  return;
}



void NimMain(void)

{
  code *local_18;
  code *local_10 [2];
  
  systemDatInit000();
  local_10[0] = PreMainInner;
  nimGC_setStackBottom(local_10);
  (*local_10[0])();
  local_18 = NimMainInner;
  nimGC_setStackBottom(&local_18);
  (*local_18)();
  return;
}



void NimMainModule(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  nimRegisterGlobalMarker(TM_2lQWYPc4hWuvSK7bVeWxSA_4);
  echoBinSafe(&TM_2lQWYPc4hWuvSK7bVeWxSA_2,1);
  lVar3 = readLine_fPRnXwDTqtynUYGl4OixAg(stdin);
  if (lVar3 != 0) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 8;
  }
  if (name_6AZmjR50AehluhCwumgXmw != 0) {
    lVar1 = name_6AZmjR50AehluhCwumgXmw + -0x10;
    uVar2 = *(long *)(name_6AZmjR50AehluhCwumgXmw + -0x10) - 8;
    *(ulong *)(name_6AZmjR50AehluhCwumgXmw + -0x10) = uVar2;
    if (uVar2 < 8) {
      addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
    }
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  name_6AZmjR50AehluhCwumgXmw = lVar3;
  local_28 = copyString(0,TM_2lQWYPc4hWuvSK7bVeWxSA_5);
  local_20 = copyString(name_6AZmjR50AehluhCwumgXmw);
  local_18 = copyString(TM_2lQWYPc4hWuvSK7bVeWxSA_6);
  echoBinSafe(&local_28,3);
  return;
}



void NimMainInner(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack40;
  undefined8 uStack32;
  undefined8 uStack24;
  
  nimRegisterGlobalMarker(TM_2lQWYPc4hWuvSK7bVeWxSA_4);
  echoBinSafe(&TM_2lQWYPc4hWuvSK7bVeWxSA_2,1);
  lVar3 = readLine_fPRnXwDTqtynUYGl4OixAg(stdin);
  if (lVar3 != 0) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 8;
  }
  if (name_6AZmjR50AehluhCwumgXmw != 0) {
    lVar1 = name_6AZmjR50AehluhCwumgXmw + -0x10;
    uVar2 = *(long *)(name_6AZmjR50AehluhCwumgXmw + -0x10) - 8;
    *(ulong *)(name_6AZmjR50AehluhCwumgXmw + -0x10) = uVar2;
    if (uVar2 < 8) {
      addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
    }
  }
  uStack40 = 0;
  uStack32 = 0;
  uStack24 = 0;
  name_6AZmjR50AehluhCwumgXmw = lVar3;
  uStack40 = copyString(0,TM_2lQWYPc4hWuvSK7bVeWxSA_5);
  uStack32 = copyString(name_6AZmjR50AehluhCwumgXmw);
  uStack24 = copyString(TM_2lQWYPc4hWuvSK7bVeWxSA_6);
  echoBinSafe(&uStack40,3);
  return;
}



void sourceDatInit000(void)

{
  return;
}



void Marker_tySequence_uB9b75OUPRENsBAu4AnoePA(void)

{
  return;
}



void del_C66us4UEWCXp84lHW4tDLA_part_8(long param_1,long **param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long **pplVar7;
  undefined4 uVar8;
  
  plVar6 = *param_2;
  if (((plVar6 == *(long **)(param_1 + 0x30b8)) &&
      (plVar3 = *(long **)(param_1 + 0x30b0), plVar3 != (long *)*plVar3)) && (plVar3[2] == param_3))
  {
    plVar3[2] = plVar6[2];
    *(long *)(*(long *)(param_1 + 0x30b0) + 0x18) = (*param_2)[3];
    lVar1 = param_1 + 0x30d8;
    if (*(long *)(param_1 + 0x30d8) == 0) {
      *(undefined4 *)(param_1 + 0x30d8) = (int)lVar1;
      uVar8 = (undefined4)((ulong)lVar1 >> 0x20);
      *(undefined4 *)(param_1 + 0x30dc) = uVar8;
      *(undefined4 *)(param_1 + 0x30e0) = (int)lVar1;
      *(undefined4 *)(param_1 + 0x30e4) = uVar8;
    }
    *(long *)(param_1 + 0x30b0) = lVar1;
    *param_2 = (long *)(*param_2)[1];
    puVar2 = *(undefined8 **)(param_1 + 0x30b8);
    *puVar2 = *(undefined8 *)(param_1 + 0x30c0);
    *(undefined8 **)(param_1 + 0x30c0) = puVar2;
    return;
  }
  lVar1 = plVar6[4] + -1;
  if ((lVar1 <= *(long *)(*plVar6 + 0x20)) && (lVar1 <= *(long *)(plVar6[1] + 0x20))) {
    return;
  }
  plVar6[4] = lVar1;
  pplVar4 = (long **)*param_2;
  plVar6 = pplVar4[4];
  if ((long)plVar6 < pplVar4[1][4]) {
    *(long **)(pplVar4[1] + 4) = plVar6;
    pplVar4 = (long **)*param_2;
    plVar6 = pplVar4[4];
  }
  plVar3 = *pplVar4;
  if ((long *)plVar3[4] == plVar6) {
    *param_2 = plVar3;
    *pplVar4 = (long *)plVar3[1];
    *(long ***)(*param_2 + 1) = pplVar4;
    pplVar4 = (long **)*param_2;
  }
  pplVar7 = (long **)pplVar4[1];
  plVar6 = *pplVar7;
  if ((long *)plVar6[4] == pplVar7[4]) {
    pplVar4[1] = plVar6;
    *pplVar7 = (long *)plVar6[1];
    *(long ***)(pplVar4[1] + 1) = pplVar7;
    pplVar4 = (long **)*param_2;
    pplVar7 = (long **)pplVar4[1];
  }
  pplVar5 = (long **)pplVar7[1];
  plVar6 = *pplVar5;
  if ((long *)plVar6[4] == pplVar5[4]) {
    pplVar7[1] = plVar6;
    *pplVar5 = (long *)plVar6[1];
    *(long ***)(pplVar7[1] + 1) = pplVar5;
    pplVar4 = (long **)*param_2;
    pplVar7 = (long **)pplVar4[1];
    pplVar5 = (long **)pplVar7[1];
    if (pplVar4[4] == pplVar5[4]) goto LAB_00400e80;
  }
  else {
    if (pplVar4[4] == pplVar5[4]) {
LAB_00400e80:
      *(long ***)param_2 = pplVar7;
      pplVar4[1] = *pplVar7;
      *(long ***)*param_2 = pplVar4;
      (*param_2)[4] = (*param_2)[4] + 1;
      pplVar4 = (long **)*param_2;
      pplVar7 = (long **)pplVar4[1];
      pplVar5 = (long **)pplVar7[1];
      if ((long *)pplVar5[1][4] != pplVar7[4]) {
        return;
      }
      goto LAB_00400e5b;
    }
  }
  if ((long *)pplVar5[1][4] != pplVar7[4]) {
    return;
  }
LAB_00400e5b:
  *(long ***)(pplVar4 + 1) = pplVar5;
  pplVar7[1] = *pplVar5;
  *(long ***)pplVar4[1] = pplVar7;
  pplVar4[1][4] = pplVar4[1][4] + 1;
  return;
}



void echoBinSafe_constprop_24(size_t **param_1)

{
  size_t __size;
  size_t *__ptr;
  
  flockfile(stdout);
  __ptr = *param_1;
  if (__ptr == (size_t *)0x0) {
    __size = 0;
    __ptr = (size_t *)0x40a16d;
  }
  else {
    __size = *__ptr;
    __ptr = __ptr + 2;
    if (__size == 0) {
      __ptr = (size_t *)0x40a16d;
    }
  }
  fwrite(__ptr,__size,1,stdout);
  fwrite("\n",1,1,stdout);
  fflush(stdout);
  funlockfile(stdout);
  return;
}



void nimRegisterThreadLocalMarker_part_14(void)

{
  echoBinSafe_constprop_24(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_18);
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined8 getActiveStack_2XtoPjgvlHPkHLitAW2flw(undefined8 param_1)

{
  return param_1;
}



ulong isOnStack_dJJW59cIgsBmT59aZrOM71Mg(undefined *param_1)

{
  ulong uVar1;
  undefined local_8 [8];
  
  uVar1 = 0;
  if (local_8 <= param_1) {
    uVar1 = (ulong)(param_1 <= gch_IcYaEuuWivYAS86vFMTS3Q._0_8_);
  }
  return uVar1;
}



void echoBinSafe(size_t **param_1,long param_2)

{
  size_t **ppsVar1;
  size_t *psVar2;
  size_t __size;
  size_t *__ptr;
  
  ppsVar1 = param_1 + param_2;
  flockfile(stdout);
  if (0 < param_2) {
    do {
      psVar2 = *param_1;
      if (psVar2 == (size_t *)0x0) {
        __size = 0;
        __ptr = (size_t *)0x40a16d;
      }
      else {
        __size = *psVar2;
        __ptr = (size_t *)0x40a16d;
        if (__size != 0) {
          __ptr = psVar2 + 2;
        }
      }
      param_1 = param_1 + 1;
      fwrite(__ptr,__size,1,stdout);
    } while (ppsVar1 != param_1);
  }
  fwrite("\n",1,1,stdout);
  fflush(stdout);
  funlockfile(stdout);
  return;
}



void raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g(void)

{
  if (outOfMemHook_kZNaA7u1MfSW5ZeoGvw8xg != (code *)0x0) {
    (*outOfMemHook_kZNaA7u1MfSW5ZeoGvw8xg)();
  }
  echoBinSafe_constprop_24(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_13);
                    // WARNING: Subroutine does not return
  exit(1);
}



void llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(long param_1,size_t param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x2878);
  if ((plVar5 == (long *)0x0) || (lVar3 = *plVar5, lVar3 < (long)param_2)) {
    puVar4 = (undefined8 *)mmap((void *)0x0,0x1000,3,0x22,-1,0);
    if (0xfffffffffffffffd < (long)puVar4 - 1U) {
                    // WARNING: Subroutine does not return
      raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
    }
    *(undefined8 **)(param_1 + 0x2878) = puVar4;
    *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) + 0x1000;
    *puVar4 = 0xfe8;
    *(undefined8 *)(*(long *)(param_1 + 0x2878) + 8) = 0x18;
    *(long **)(*(long *)(param_1 + 0x2878) + 0x10) = plVar5;
    plVar5 = *(long **)(param_1 + 0x2878);
    lVar3 = *plVar5;
  }
  lVar2 = plVar5[1];
  *plVar5 = lVar3 - param_2;
  plVar1 = (long *)(*(long *)(param_1 + 0x2878) + 8);
  *plVar1 = *plVar1 + param_2;
  memset((void *)(lVar2 + (long)plVar5),0,param_2);
  return;
}



void addHeapLink_fJbggoVEhxEYh2HdNULF3Q(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)(param_1 + 0x3100);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x1f0);
      puVar3[0x3d] = *(undefined8 *)(param_1 + 0x32e8);
      *(undefined8 **)(param_1 + 0x32e8) = puVar3;
      puVar3[1] = param_2;
      puVar3[2] = param_3;
      *puVar3 = 1;
      return;
    }
    if (*plVar2 < 0x1e) break;
    plVar2 = (long *)plVar2[0x3d];
  }
  lVar1 = *plVar2;
  (plVar2 + lVar1 * 2)[1] = param_2;
  (plVar2 + lVar1 * 2)[2] = param_3;
  *plVar2 = lVar1 + 1;
  return;
}



void intSetGet_FhOZKj4Gih3qQ5OimZYOrg(long param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (param_2 & 0xff) * 8);
  if (plVar1 != (long *)0x0) {
    if (param_2 == plVar1[1]) {
      return;
    }
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return;
      }
    } while (plVar1[1] != param_2);
  }
  return;
}



ulong contains_tGsWrN4DY41H9btt3FhjrNA(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = *(long **)(param_1 + (param_2 >> 9 & 0xff) * 8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  do {
    if (param_2 >> 9 == plVar1[1]) {
      uVar2 = (uint)param_2 & 0x1ff;
      return (ulong)plVar1 & 0xffffffffffffff00 |
             (ulong)((plVar1[(ulong)(uVar2 >> 6) + 2] & 1 << ((byte)uVar2 & 0x3f)) != 0);
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  return (long)plVar1;
}



ulong * requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  uint uVar5;
  ulong *puVar6;
  size_t __len;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  if (*(char *)(param_1 + 0x30c9) == '\0') {
    if ((long)*(ulong *)(param_1 + 0x2898) < 0x10000) {
      *(undefined8 *)(param_1 + 0x30d0) = 0x4000;
      __len = 0x4000;
    }
    else {
      __len = (*(ulong *)(param_1 + 0x2898) >> 2) + 0xfff & 0xfffffffffffff000;
      sVar4 = *(long *)(param_1 + 0x30d0) * 2;
      if (0x3f000000 < (long)sVar4) {
        sVar4 = 0x3f000000;
      }
      if ((long)sVar4 < (long)__len) {
        __len = sVar4;
      }
      *(size_t *)(param_1 + 0x30d0) = __len;
    }
  }
  else {
    __len = *(size_t *)(param_1 + 0x30d0);
  }
  if ((long)__len < (long)param_2) {
    puVar6 = (ulong *)mmap((void *)0x0,param_2,3,0x22,-1,0);
    if (0xfffffffffffffffd < (long)puVar6 - 1U) {
LAB_0040152b:
                    // WARNING: Subroutine does not return
      raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
    }
  }
  else {
    puVar6 = (ulong *)mmap((void *)0x0,__len,3,0x22,-1,0);
    if ((long)puVar6 - 1U < 0xfffffffffffffffe) {
      param_2 = *(ulong *)(param_1 + 0x30d0);
    }
    else {
      puVar6 = (ulong *)mmap((void *)0x0,param_2,3,0x22,-1,0);
      if (0xfffffffffffffffd < (long)puVar6 - 1U) goto LAB_0040152b;
      *(undefined *)(param_1 + 0x30c9) = 1;
    }
  }
  *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) + param_2;
  plVar2 = (long *)(param_1 + 0x3100);
  *(long *)(param_1 + 0x2890) = *(long *)(param_1 + 0x2890) + param_2;
  do {
    if (*plVar2 < 0x1e) {
      lVar1 = *plVar2;
      *(ulong **)(plVar2 + lVar1 * 2 + 1) = puVar6;
      (plVar2 + lVar1 * 2)[2] = param_2;
      *plVar2 = lVar1 + 1;
      goto LAB_0040140c;
    }
    plVar2 = (long *)plVar2[0x3d];
  } while (plVar2 != (long *)0x0);
  puVar3 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x1f0);
  puVar3[0x3d] = *(undefined8 *)(param_1 + 0x32e8);
  *(undefined8 **)(param_1 + 0x32e8) = puVar3;
  *(ulong **)(puVar3 + 1) = puVar6;
  puVar3[2] = param_2;
  *puVar3 = 1;
LAB_0040140c:
  puVar9 = (ulong *)((long)puVar6 + param_2);
  puVar6[1] = param_2;
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)puVar9 >> 0x15 & 0xff) * 8);
  while (puVar3 != (undefined8 *)0x0) {
    if ((ulong)puVar9 >> 0x15 == puVar3[1]) {
      uVar5 = (uint)((ulong)puVar9 >> 0xc) & 0x1ff;
      if ((puVar3[(ulong)(uVar5 >> 6) + 2] & 1 << ((byte)uVar5 & 0x3f)) != 0) {
        *puVar9 = (uint)*puVar9 & 1 | param_2;
      }
      break;
    }
    puVar3 = (undefined8 *)*puVar3;
  }
  uVar8 = *(ulong *)(param_1 + 0x28a0);
  if (uVar8 == 0) {
    uVar8 = 0x1000;
  }
  puVar9 = (ulong *)((long)puVar6 - uVar8);
  uVar7 = (ulong)((uint)*puVar6 & 1);
  puVar3 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)puVar9 >> 0x15 & 0xff) * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
LAB_004014fa:
      *puVar6 = uVar7;
      *(ulong *)(param_1 + 0x28a0) = param_2;
      return puVar6;
    }
    if ((ulong)puVar9 >> 0x15 == puVar3[1]) {
      uVar5 = (uint)((ulong)puVar9 >> 0xc) & 0x1ff;
      if (((puVar3[(ulong)(uVar5 >> 6) + 2] & 1 << ((byte)uVar5 & 0x3f)) != 0) &&
         (puVar9[1] == uVar8)) {
        uVar7 = uVar7 | uVar8;
      }
      goto LAB_004014fa;
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



void intSetPut_KWgRM9bUk6rwhAaHSiuK9aYA(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_2 + (param_3 & 0xff) * 8);
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x50);
      *puVar2 = *puVar1;
      *(undefined8 **)puVar1 = puVar2;
      puVar2[1] = param_3;
      return;
    }
    if (param_3 == puVar2[1]) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return;
}



void incl_Iz1GYiOVKwItgr5CdCm0dQ(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = param_3 >> 9;
  puVar1 = (undefined8 *)(param_2 + (uVar4 & 0xff) * 8);
  puVar2 = (undefined8 *)*puVar1;
  while (puVar2 != (undefined8 *)0x0) {
    if (uVar4 == puVar2[1]) goto LAB_00401616;
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar2 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x50);
  *puVar2 = *puVar1;
  *(undefined8 **)puVar1 = puVar2;
  puVar2[1] = uVar4;
LAB_00401616:
  uVar3 = (uint)param_3 & 0x1ff;
  puVar2[(ulong)(uVar3 >> 6) + 2] = puVar2[(ulong)(uVar3 >> 6) + 2] | 1 << ((byte)uVar3 & 0x3f);
  return;
}



long * splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  plVar1 = (long *)(param_3 + param_2);
  lVar2 = *(long *)(param_2 + 8);
  *(undefined4 *)(plVar1 + 2) = 0;
  *(undefined4 *)((long)plVar1 + 0x14) = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  *(undefined4 *)((long)plVar1 + 0x1c) = 0;
  *plVar1 = param_3;
  uVar5 = lVar2 - param_3;
  plVar1[1] = uVar5;
  puVar6 = (ulong *)(*(long *)(param_2 + 8) + param_2);
  puVar3 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)puVar6 >> 0x15 & 0xff) * 8);
  while (puVar3 != (undefined8 *)0x0) {
    if ((ulong)puVar6 >> 0x15 == puVar3[1]) {
      uVar4 = (uint)((ulong)puVar6 >> 0xc) & 0x1ff;
      if ((puVar3[(ulong)(uVar4 >> 6) + 2] & 1 << ((byte)uVar4 & 0x3f)) != 0) {
        *puVar6 = uVar5 | (uint)*puVar6 & 1;
      }
      break;
    }
    puVar3 = (undefined8 *)*puVar3;
  }
  *(long *)(param_2 + 8) = param_3;
  uVar5 = (ulong)plVar1 >> 0x15;
  lVar2 = param_1 + (uVar5 & 0xff) * 8;
  puVar3 = *(undefined8 **)(lVar2 + 0x28a8);
  while (puVar3 != (undefined8 *)0x0) {
    if (uVar5 == puVar3[1]) goto LAB_0040171e;
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar3 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(0,param_1,0x50);
  *puVar3 = *(undefined8 *)(lVar2 + 0x28a8);
  *(undefined8 **)(lVar2 + 0x28a8) = puVar3;
  puVar3[1] = uVar5;
LAB_0040171e:
  uVar4 = (uint)((ulong)plVar1 >> 0xc) & 0x1ff;
  puVar3[(ulong)(uVar4 >> 6) + 2] = puVar3[(ulong)(uVar4 >> 6) + 2] | 1 << ((byte)uVar4 & 0x3f);
  return plVar1;
}



void addChunkToMatrix_v9bekLOkesgfrZC4aumfLXw(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar5 = *(ulong *)(param_2 + 8);
  uVar7 = (uint)uVar5;
  uVar8 = uVar5 & 0xffffffff;
  if (uVar7 < 0x10000) {
    lVar9 = 0;
    if (0xff < uVar7) {
      lVar9 = 8;
      uVar8 = (uVar5 & 0xffffffff) >> 8;
    }
  }
  else {
    if (uVar7 < 0x1000000) {
      uVar8 = uVar8 >> 0x10;
      lVar9 = 0x10;
    }
    else {
      lVar9 = 0x18;
      uVar8 = (uVar5 & 0xffffffff) >> 0x18;
    }
  }
  cVar4 = fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar8];
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar9 = lVar9 + cVar4;
  lVar1 = (uVar5 >> ((char)lVar9 - 5U & 0x3f)) - 0x20;
  lVar2 = param_1 + ((lVar9 + -6) * 0x20 + lVar1) * 8;
  lVar6 = *(long *)(lVar2 + 0x1078);
  *(long *)(param_2 + 0x10) = lVar6;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = param_2;
  }
  *(long *)(lVar2 + 0x1078) = param_2;
  puVar3 = (uint *)(param_1 + 0xffc + lVar9 * 4);
  *puVar3 = *puVar3 | (uint)(1 << ((byte)lVar1 & 0x1f));
  *(uint *)(param_1 + 0x1010) =
       *(uint *)(param_1 + 0x1010) | (uint)(1 << ((byte)(lVar9 + -6) & 0x1f));
  return;
}



void splitChunk_8QXhiy717OAl8WNA2X27EA(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  
  lVar10 = *(long *)(param_2 + 8);
  plVar2 = (long *)(param_3 + param_2);
  *(undefined4 *)(plVar2 + 2) = 0;
  *(undefined4 *)((long)plVar2 + 0x14) = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar11 = lVar10 - param_3;
  *plVar2 = param_3;
  plVar2[1] = uVar11;
  puVar12 = (ulong *)(*(long *)(param_2 + 8) + param_2);
  puVar7 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)puVar12 >> 0x15 & 0xff) * 8);
  while (puVar7 != (undefined8 *)0x0) {
    if ((ulong)puVar12 >> 0x15 == puVar7[1]) {
      uVar8 = (uint)((ulong)puVar12 >> 0xc) & 0x1ff;
      if ((puVar7[(ulong)(uVar8 >> 6) + 2] & 1 << ((byte)uVar8 & 0x3f)) != 0) {
        *puVar12 = uVar11 | (uint)*puVar12 & 1;
      }
      break;
    }
    puVar7 = (undefined8 *)*puVar7;
  }
  *(long *)(param_2 + 8) = param_3;
  uVar11 = (ulong)plVar2 >> 0x15;
  lVar10 = param_1 + (uVar11 & 0xff) * 8;
  puVar7 = *(undefined8 **)(lVar10 + 0x28a8);
  while (puVar7 != (undefined8 *)0x0) {
    if (uVar11 == puVar7[1]) goto LAB_0040190a;
    puVar7 = (undefined8 *)*puVar7;
  }
  puVar7 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(0,param_1,0x50);
  *puVar7 = *(undefined8 *)(lVar10 + 0x28a8);
  *(undefined8 **)(lVar10 + 0x28a8) = puVar7;
  puVar7[1] = uVar11;
LAB_0040190a:
  uVar8 = (uint)((ulong)plVar2 >> 0xc) & 0x1ff;
  puVar7[(ulong)(uVar8 >> 6) + 2] = puVar7[(ulong)(uVar8 >> 6) + 2] | 1 << ((byte)uVar8 & 0x3f);
  uVar11 = plVar2[1];
  uVar8 = (uint)uVar11;
  uVar9 = uVar11 & 0xffffffff;
  if (uVar8 < 0x10000) {
    lVar10 = 0;
    if (0xff < uVar8) {
      lVar10 = 8;
      uVar9 = (uVar11 & 0xffffffff) >> 8;
    }
  }
  else {
    if (uVar8 < 0x1000000) {
      uVar9 = uVar9 >> 0x10;
      lVar10 = 0x10;
    }
    else {
      lVar10 = 0x18;
      uVar9 = (uVar11 & 0xffffffff) >> 0x18;
    }
  }
  cVar5 = fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar9];
  plVar2[3] = 0;
  lVar10 = lVar10 + cVar5;
  lVar1 = (uVar11 >> ((char)lVar10 - 5U & 0x3f)) - 0x20;
  lVar3 = param_1 + ((lVar10 + -6) * 0x20 + lVar1) * 8;
  lVar6 = *(long *)(lVar3 + 0x1078);
  plVar2[2] = lVar6;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 0x18) = plVar2;
  }
  *(long **)(lVar3 + 0x1078) = plVar2;
  puVar4 = (uint *)(param_1 + 0xffc + lVar10 * 4);
  *puVar4 = *puVar4 | (uint)(1 << ((byte)lVar1 & 0x1f));
  *(uint *)(param_1 + 0x1010) =
       *(uint *)(param_1 + 0x1010) | (uint)(1 << ((byte)(lVar10 + -6) & 0x1f));
  return;
}



void removeChunkFromMatrix2_NyesLqu7hqkgfLqcLrQpjw
               (long param_1,long param_2,long param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_1 + 8 + (param_4 + 0x20e + param_3 * 0x20) * 8) = lVar2;
  if (lVar2 == 0) {
    puVar1 = (uint *)(param_1 + param_3 * 4 + 0x1014);
    *puVar1 = *puVar1 & ~(uint)(1 << ((byte)param_4 & 0x1f));
    if (*puVar1 == 0) {
      *(uint *)(param_1 + 0x1010) =
           *(uint *)(param_1 + 0x1010) & ~(uint)(1 << ((byte)param_3 & 0x1f));
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      return;
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}



undefined8 * getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(long param_1,ulong param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char cVar12;
  undefined8 *puVar13;
  
  uVar8 = (uint)param_2;
  uVar5 = param_2 & 0xffffffff;
  if (uVar8 < 0x10000) {
    cVar12 = '\0';
    if (0xff < uVar8) {
      cVar12 = '\b';
      uVar5 = (param_2 & 0xffffffff) >> 8;
    }
  }
  else {
    if (uVar8 < 0x1000000) {
      uVar5 = uVar5 >> 0x10;
      cVar12 = '\x10';
    }
    else {
      cVar12 = '\x18';
      uVar5 = (param_2 & 0xffffffff) >> 0x18;
    }
  }
  uVar5 = (1 << (fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar5] + -5 + cVar12 & 0x3fU)) + 0xfffU &
          0xfffffffffffff000;
  uVar6 = -uVar5 & (uVar5 - 1) + param_2;
  uVar5 = 0x3f000000;
  if ((long)uVar6 < 0x3f000001) {
    uVar5 = uVar6;
  }
  uVar8 = (uint)uVar5;
  uVar11 = uVar5 & 0xffffffff;
  if (uVar8 < 0x10000) {
    lVar9 = 0;
    if (0xff < uVar8) {
      lVar9 = 8;
      uVar11 = (uVar5 & 0xffffffff) >> 8;
    }
  }
  else {
    if (uVar8 < 0x1000000) {
      uVar11 = uVar11 >> 0x10;
      lVar9 = 0x10;
    }
    else {
      lVar9 = 0x18;
      uVar11 = (uVar5 & 0xffffffff) >> 0x18;
    }
  }
  lVar9 = (char)fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar11] + lVar9;
  lVar10 = lVar9 + -6;
  uVar8 = (uint)(0xffffffff << ((char)(uVar5 >> ((char)lVar9 - 5U & 0x3f)) - 0x20U & 0x3f)) &
          *(uint *)(param_1 + 0xffc + lVar9 * 4);
  if (uVar8 == 0) {
    uVar8 = (uint)(0xffffffff << ((char)lVar10 + 1U & 0x3f)) & *(uint *)(param_1 + 0x1010);
    uVar8 = uVar8 & -uVar8;
    uVar11 = (ulong)uVar8;
    if (uVar8 < 0x10000) {
      lVar10 = 0;
      if (0xff < uVar8) {
        uVar11 = (ulong)(uVar8 >> 8);
        lVar10 = 8;
      }
    }
    else {
      if (uVar8 < 0x1000000) {
        uVar11 = (ulong)(uVar8 >> 0x10);
        lVar10 = 0x10;
      }
      else {
        uVar11 = (ulong)(uVar8 >> 0x18);
        lVar10 = 0x18;
      }
    }
    lVar10 = (char)fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar11] + lVar10;
    if (0 < lVar10) {
      uVar8 = *(uint *)(param_1 + 0x1014 + lVar10 * 4);
      uVar8 = -uVar8 & uVar8;
      uVar11 = (ulong)uVar8;
      if (uVar8 < 0x10000) {
        lVar9 = 0;
        if (0xff < uVar8) {
          uVar11 = (ulong)(uVar8 >> 8);
          lVar9 = 8;
        }
      }
      else {
        if (uVar8 < 0x1000000) {
          uVar11 = (ulong)(uVar8 >> 0x10);
          lVar9 = 0x10;
        }
        else {
          uVar11 = (ulong)(uVar8 >> 0x18);
          lVar9 = 0x18;
        }
      }
      lVar9 = (char)fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar11] + lVar9;
      puVar13 = *(undefined8 **)(param_1 + 8 + (lVar9 + 0x20e + lVar10 * 0x20) * 8);
      if (puVar13 != (undefined8 *)0x0) goto LAB_00401d2e;
    }
LAB_00401bf4:
    if ((long)uVar6 < 0x80000) {
      puVar13 = (undefined8 *)requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(param_1,0x80000);
    }
    else {
      puVar13 = (undefined8 *)requestOsChunks_z9bCNjXTYllZ3pI24nEsw2g_2(param_1,uVar5);
      if (puVar13[1] == uVar5 || (long)puVar13[1] < (long)uVar5) goto LAB_00401c20;
    }
  }
  else {
    uVar8 = uVar8 & -uVar8;
    uVar11 = (ulong)uVar8;
    if (uVar8 < 0x10000) {
      lVar9 = 0;
      if (0xff < uVar8) {
        uVar11 = (ulong)(uVar8 >> 8);
        lVar9 = 8;
      }
    }
    else {
      if (uVar8 < 0x1000000) {
        uVar11 = (ulong)(uVar8 >> 0x10);
        lVar9 = 0x10;
      }
      else {
        uVar11 = (ulong)(uVar8 >> 0x18);
        lVar9 = 0x18;
      }
    }
    lVar9 = (char)fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar11] + lVar9;
    puVar13 = *(undefined8 **)(param_1 + 8 + (lVar9 + 0x20e + lVar10 * 0x20) * 8);
    if (puVar13 == (undefined8 *)0x0) goto LAB_00401bf4;
LAB_00401d2e:
    lVar1 = puVar13[2];
    *(long *)(param_1 + 8 + (lVar9 + 0x20e + lVar10 * 0x20) * 8) = lVar1;
    if (lVar1 == 0) {
      puVar2 = (uint *)(param_1 + lVar10 * 4 + 0x1014);
      *puVar2 = *puVar2 & ~(uint)(1 << ((byte)lVar9 & 0x1f));
      if (*puVar2 == 0) {
        *(uint *)(param_1 + 0x1010) =
             *(uint *)(param_1 + 0x1010) & ~(uint)(1 << ((byte)lVar10 & 0x1f));
      }
    }
    else {
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    *(undefined4 *)(puVar13 + 2) = 0;
    *(undefined4 *)((long)puVar13 + 0x14) = 0;
    *(undefined4 *)(puVar13 + 3) = 0;
    *(undefined4 *)((long)puVar13 + 0x1c) = 0;
    if ((long)puVar13[1] <= (long)(uVar5 + 0xfff)) goto LAB_00401c20;
  }
  lVar9 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(param_1,puVar13,uVar5);
  uVar6 = *(ulong *)(lVar9 + 8);
  uVar8 = (uint)uVar6;
  uVar11 = uVar6 & 0xffffffff;
  if (uVar8 < 0x10000) {
    lVar10 = 0;
    if (0xff < uVar8) {
      lVar10 = 8;
      uVar11 = (uVar6 & 0xffffffff) >> 8;
    }
  }
  else {
    if (uVar8 < 0x1000000) {
      uVar11 = uVar11 >> 0x10;
      lVar10 = 0x10;
    }
    else {
      lVar10 = 0x18;
      uVar11 = (uVar6 & 0xffffffff) >> 0x18;
    }
  }
  cVar12 = fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar11];
  *(undefined8 *)(lVar9 + 0x18) = 0;
  lVar10 = lVar10 + cVar12;
  lVar1 = (uVar6 >> ((char)lVar10 - 5U & 0x3f)) - 0x20;
  lVar3 = param_1 + ((lVar10 + -6) * 0x20 + lVar1) * 8;
  lVar4 = *(long *)(lVar3 + 0x1078);
  *(long *)(lVar9 + 0x10) = lVar4;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = lVar9;
  }
  *(long *)(lVar3 + 0x1078) = lVar9;
  puVar2 = (uint *)(param_1 + 0xffc + lVar10 * 4);
  *puVar2 = *puVar2 | (uint)(1 << ((byte)lVar1 & 0x1f));
  *(uint *)(param_1 + 0x1010) =
       *(uint *)(param_1 + 0x1010) | (uint)(1 << ((byte)(lVar10 + -6) & 0x1f));
LAB_00401c20:
  *puVar13 = 1;
  uVar6 = (ulong)puVar13 >> 0x15;
  lVar9 = param_1 + (uVar6 & 0xff) * 8;
  puVar7 = *(undefined8 **)(lVar9 + 0x28a8);
  while (puVar7 != (undefined8 *)0x0) {
    if (uVar6 == puVar7[1]) goto LAB_00401c62;
    puVar7 = (undefined8 *)*puVar7;
  }
  puVar7 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x50);
  *puVar7 = *(undefined8 *)(lVar9 + 0x28a8);
  *(undefined8 **)(lVar9 + 0x28a8) = puVar7;
  puVar7[1] = uVar6;
LAB_00401c62:
  uVar8 = (uint)((ulong)puVar13 >> 0xc) & 0x1ff;
  puVar7[(ulong)(uVar8 >> 6) + 2] = puVar7[(ulong)(uVar8 >> 6) + 2] | 1 << ((byte)uVar8 & 0x3f);
  *(long *)(param_1 + 0x2890) = *(long *)(param_1 + 0x2890) - uVar5;
  return puVar13;
}



void getSmallChunk_h6cvXbfQjxIdThM5GthosA(undefined8 param_1)

{
  getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param_1,0x1000);
  return;
}



undefined8 * getHugeChunk_z9bCNjXTYllZ3pI24nEsw2g_3(long param_1,size_t param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar2 = (undefined8 *)mmap((void *)0x0,param_2,3,0x22,-1,0);
  if (0xfffffffffffffffd < (long)puVar2 - 1U) {
                    // WARNING: Subroutine does not return
    raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
  }
  *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) + param_2;
  uVar5 = (ulong)puVar2 >> 0x15;
  puVar2[1] = param_2;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  lVar1 = param_1 + (uVar5 & 0xff) * 8;
  *puVar2 = 1;
  puVar3 = *(undefined8 **)(lVar1 + 0x28a8);
  while (puVar3 != (undefined8 *)0x0) {
    if (uVar5 == puVar3[1]) goto LAB_0040201e;
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar3 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(0,param_1,0x50);
  *puVar3 = *(undefined8 *)(lVar1 + 0x28a8);
  *(undefined8 **)(lVar1 + 0x28a8) = puVar3;
  puVar3[1] = uVar5;
LAB_0040201e:
  uVar4 = (uint)((ulong)puVar2 >> 0xc) & 0x1ff;
  puVar3[(ulong)(uVar4 >> 6) + 2] = puVar3[(ulong)(uVar4 >> 6) + 2] | 1 << ((byte)uVar4 & 0x3f);
  return puVar2;
}



void getBottom_QXg9anCfFuhk3avAkOOKNhQ(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x30d8) != 0) {
    return;
  }
  uVar1 = (undefined4)(param_1 + 0x30d8);
  *(undefined4 *)(param_1 + 0x30d8) = uVar1;
  uVar2 = (undefined4)((ulong)(param_1 + 0x30d8) >> 0x20);
  *(undefined4 *)(param_1 + 0x30dc) = uVar2;
  *(undefined4 *)(param_1 + 0x30e0) = uVar1;
  *(undefined4 *)(param_1 + 0x30e4) = uVar2;
  return;
}



void allocAvlNode_neSuioWH6NDTp8E9cNgBmjg(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined auVar3 [16];
  
  puVar1 = *(undefined8 **)(param_1 + 0x30c0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x28);
  }
  else {
    *(undefined8 *)(param_1 + 0x30c0) = *puVar1;
  }
  auVar3 = movhps(ZEXT816(param_2),param_3);
  *(int *)(puVar1 + 2) = SUB164(auVar3,0);
  *(undefined4 *)((long)puVar1 + 0x14) = SUB164(auVar3 >> 0x20,0);
  *(int *)(puVar1 + 3) = SUB164(auVar3 >> 0x40,0);
  *(undefined4 *)((long)puVar1 + 0x1c) = SUB164(auVar3 >> 0x60,0);
  uVar2 = (undefined4)(param_1 + 0x30d8);
  uVar4 = (undefined4)((ulong)(param_1 + 0x30d8) >> 0x20);
  if (*(long *)(param_1 + 0x30d8) == 0) {
    *(undefined4 *)(param_1 + 0x30d8) = uVar2;
    *(undefined4 *)(param_1 + 0x30dc) = uVar4;
    *(undefined4 *)(param_1 + 0x30e0) = uVar2;
    *(undefined4 *)(param_1 + 0x30e4) = uVar4;
  }
  *(undefined4 *)puVar1 = uVar2;
  *(undefined4 *)((long)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar2;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar4;
  puVar1[4] = 1;
  return;
}



void skew_Cfx7NvEVZIhBjBm7i89boSg(long **param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *param_1;
  plVar2 = (long *)*plVar1;
  if (plVar2[4] == plVar1[4]) {
    *param_1 = plVar2;
    *plVar1 = plVar2[1];
    *(long **)(*param_1 + 1) = plVar1;
  }
  return;
}



void split_Cfx7NvEVZIhBjBm7i89boSg_2(long **param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *param_1;
  plVar2 = (long *)plVar1[1];
  if (*(long *)(plVar2[1] + 0x20) == plVar1[4]) {
    *param_1 = plVar2;
    plVar1[1] = *plVar2;
    *(long **)*param_1 = plVar1;
    (*param_1)[4] = (*param_1)[4] + 1;
  }
  return;
}



void add_Xuf47u3imOz8BOk5HURLWQ(long param_1,long **param_2,long *param_3,undefined8 param_4)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined auVar7 [16];
  
  pplVar4 = (long **)*param_2;
  plVar2 = *pplVar4;
  if (pplVar4 == (long **)plVar2) {
    plVar2 = *(long **)(param_1 + 0x30c0);
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(param_1,0x28);
    }
    else {
      *(long *)(param_1 + 0x30c0) = *plVar2;
    }
    auVar7 = movhps(ZEXT816(param_3),param_4);
    *(int *)(plVar2 + 2) = SUB164(auVar7,0);
    *(undefined4 *)((long)plVar2 + 0x14) = SUB164(auVar7 >> 0x20,0);
    *(int *)(plVar2 + 3) = SUB164(auVar7 >> 0x40,0);
    *(undefined4 *)((long)plVar2 + 0x1c) = SUB164(auVar7 >> 0x60,0);
    uVar6 = (undefined4)(param_1 + 0x30d8);
    uVar8 = (undefined4)((ulong)(param_1 + 0x30d8) >> 0x20);
    if (*(long *)(param_1 + 0x30d8) == 0) {
      *(undefined4 *)(param_1 + 0x30d8) = uVar6;
      *(undefined4 *)(param_1 + 0x30dc) = uVar8;
      *(undefined4 *)(param_1 + 0x30e0) = uVar6;
      *(undefined4 *)(param_1 + 0x30e4) = uVar8;
    }
    *(undefined4 *)plVar2 = uVar6;
    *(undefined4 *)((long)plVar2 + 4) = uVar8;
    *(undefined4 *)(plVar2 + 1) = uVar6;
    *(undefined4 *)((long)plVar2 + 0xc) = uVar8;
    plVar2[4] = 1;
    *param_2 = plVar2;
    return;
  }
  bVar5 = pplVar4[2] != param_3;
  if (param_3 <= pplVar4[2] && bVar5) {
LAB_00402244:
    add_Xuf47u3imOz8BOk5HURLWQ(param_1,pplVar4);
    pplVar4 = (long **)*param_2;
    plVar2 = *pplVar4;
    plVar3 = pplVar4[4];
    if ((long *)plVar2[4] == plVar3) {
LAB_00402210:
      *param_2 = plVar2;
      *pplVar4 = (long *)plVar2[1];
      *(long ***)(*param_2 + 1) = pplVar4;
      pplVar4 = (long **)*param_2;
      pplVar1 = (long **)pplVar4[1];
      if ((long *)pplVar1[1][4] != pplVar4[4]) {
        return;
      }
      goto LAB_004021f0;
    }
  }
  else {
    if (bVar5) {
      pplVar4 = pplVar4 + 1;
      goto LAB_00402244;
    }
    plVar3 = pplVar4[4];
    if ((long *)plVar2[4] == plVar3) goto LAB_00402210;
  }
  pplVar1 = (long **)pplVar4[1];
  if ((long *)pplVar1[1][4] != plVar3) {
    return;
  }
LAB_004021f0:
  *(long ***)param_2 = pplVar1;
  pplVar4[1] = *pplVar1;
  *(long ***)*param_2 = pplVar4;
  (*param_2)[4] = (*param_2)[4] + 1;
  return;
}



undefined8 * rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(long param_1,long param_2)

{
  size_t __len;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  uVar7 = param_2 + 7U & 0xfffffffffffffff8;
  if (0xfc8 < (long)uVar7) {
    __len = param_2 + 0x20;
    if ((long)__len < 0x3f000001) {
      puVar6 = (undefined8 *)getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param_1,__len);
      lVar1 = *(long *)(param_1 + 0x30a8);
    }
    else {
      puVar6 = (undefined8 *)mmap((void *)0x0,__len,3,0x22,-1,0);
      if (0xfffffffffffffffd < (long)puVar6 - 1U) {
                    // WARNING: Subroutine does not return
        raiseOutOfMem_II46IjNZztN9bmbxUD8dt8g();
      }
      *(long *)(param_1 + 0x2880) = *(long *)(param_1 + 0x2880) + __len;
      uVar7 = (ulong)puVar6 >> 0x15;
      *(undefined4 *)(puVar6 + 2) = 0;
      *(undefined4 *)((long)puVar6 + 0x14) = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      puVar6[1] = __len;
      lVar1 = param_1 + (uVar7 & 0xff) * 8;
      *puVar6 = 1;
      puVar3 = *(undefined8 **)(lVar1 + 0x28a8);
      while (puVar3 != (undefined8 *)0x0) {
        if (uVar7 == puVar3[1]) goto LAB_00402482;
        puVar3 = (undefined8 *)*puVar3;
      }
      puVar3 = (undefined8 *)llAlloc_fTkVQ4Gj2glm9btLqR9bdQDQ(0,param_1,0x50);
      *puVar3 = *(undefined8 *)(lVar1 + 0x28a8);
      *(undefined8 **)(lVar1 + 0x28a8) = puVar3;
      puVar3[1] = uVar7;
LAB_00402482:
      uVar5 = (uint)((ulong)puVar6 >> 0xc) & 0x1ff;
      puVar3[(ulong)(uVar5 >> 6) + 2] = puVar3[(ulong)(uVar5 >> 6) + 2] | 1 << ((byte)uVar5 & 0x3f);
      lVar1 = *(long *)(param_1 + 0x30a8);
    }
    puVar3 = puVar6 + 4;
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x30d8;
      if (*(long *)(param_1 + 0x30d8) == 0) {
        *(long *)(param_1 + 0x30a8) = lVar1;
        *(undefined4 *)(param_1 + 0x30d8) = (int)lVar1;
        uVar8 = (undefined4)((ulong)lVar1 >> 0x20);
        *(undefined4 *)(param_1 + 0x30dc) = uVar8;
        *(undefined4 *)(param_1 + 0x30e0) = (int)lVar1;
        *(undefined4 *)(param_1 + 0x30e4) = uVar8;
      }
      else {
        *(long *)(param_1 + 0x30a8) = lVar1;
      }
    }
    add_Xuf47u3imOz8BOk5HURLWQ(param_1,param_1 + 0x30a8,puVar3,(long)puVar3 + __len);
    *(long *)(param_1 + 0x2898) = *(long *)(param_1 + 0x2898) + puVar6[1];
    return puVar3;
  }
  lVar1 = param_1 + (param_2 + 7U & 0xfffffffffffffff8);
  lVar4 = *(long *)(lVar1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(param_1,0x1000);
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(ulong *)(lVar4 + 8) = uVar7;
    *(ulong *)(lVar4 + 0x30) = uVar7;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0x14) = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(undefined4 *)(lVar4 + 0x1c) = 0;
    *(long *)(lVar4 + 0x28) = 0xfc8 - uVar7;
    lVar2 = *(long *)(lVar1 + 0x10);
    *(long *)(lVar4 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x18) = lVar4;
    }
    *(long *)(lVar1 + 0x10) = lVar4;
    puVar6 = (undefined8 *)(lVar4 + 0x38);
    if ((long)uVar7 <= *(long *)(lVar4 + 0x28)) goto LAB_004023e9;
    lVar2 = *(long *)(lVar4 + 0x10);
LAB_00402550:
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
  }
  else {
    puVar6 = *(undefined8 **)(lVar4 + 0x20);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(lVar4 + 0x38 + *(long *)(lVar4 + 0x30));
      *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + uVar7;
    }
    else {
      *(undefined8 *)(lVar4 + 0x20) = *puVar6;
    }
    lVar2 = *(long *)(lVar4 + 0x28) - uVar7;
    *(long *)(lVar4 + 0x28) = lVar2;
    if ((long)uVar7 <= lVar2) goto LAB_004023e9;
    lVar2 = *(long *)(lVar4 + 0x10);
    if (lVar4 == *(long *)(lVar1 + 0x10)) goto LAB_00402550;
    *(long *)(*(long *)(lVar4 + 0x18) + 0x10) = lVar2;
    if (*(long *)(lVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18) = *(undefined8 *)(lVar4 + 0x18);
    }
  }
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(undefined4 *)(lVar4 + 0x14) = 0;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 0x1c) = 0;
LAB_004023e9:
  *(long *)(param_1 + 0x2898) = *(long *)(param_1 + 0x2898) + uVar7;
  return puVar6;
}



long alloc_1iQ1Xo9cXsxq509b5gmDHLoQ(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(param_1,param_2 + 0x10);
  *(undefined8 *)(lVar1 + 8) = 1;
  return lVar1 + 0x10;
}



long alloc_sVm4rDImKK2ZDdylByayiA(long param_1)

{
  long lVar1;
  
  lVar1 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,param_1 + 0x10);
  *(undefined8 *)(lVar1 + 8) = 1;
  return lVar1 + 0x10;
}



void removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = *(ulong *)(param_2 + 8);
  uVar5 = (uint)uVar3;
  uVar7 = uVar3 & 0xffffffff;
  if (uVar5 < 0x10000) {
    lVar8 = 0;
    if (0xff < uVar5) {
      lVar8 = 8;
      uVar7 = (uVar3 & 0xffffffff) >> 8;
    }
  }
  else {
    if (uVar5 < 0x1000000) {
      uVar7 = uVar7 >> 0x10;
      lVar8 = 0x10;
    }
    else {
      lVar8 = 0x18;
      uVar7 = (uVar3 & 0xffffffff) >> 0x18;
    }
  }
  lVar8 = lVar8 + (char)fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar7];
  lVar1 = (uVar3 >> ((char)lVar8 - 5U & 0x3f)) - 0x20;
  lVar6 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(*(long *)(param_2 + 0x10) + 0x18) = lVar6;
    lVar6 = *(long *)(param_2 + 0x18);
  }
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  lVar6 = param_1 + ((lVar8 + -6) * 0x20 + lVar1) * 8;
  if ((*(long *)(lVar6 + 0x1078) == param_2) &&
     (lVar4 = *(long *)(param_2 + 0x10), *(long *)(lVar6 + 0x1078) = lVar4, lVar4 == 0)) {
    puVar2 = (uint *)(param_1 + lVar8 * 4 + 0xffc);
    *puVar2 = *puVar2 & ~(uint)(1 << ((byte)lVar1 & 0x1f));
    if (*puVar2 == 0) {
      *(uint *)(param_1 + 0x1010) =
           *(uint *)(param_1 + 0x1010) & ~(uint)(1 << ((byte)(lVar8 + -6) & 0x1f));
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}



void excl_Z9cZKmN1jjRFCzU0lgW9a1XA(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = *(long **)(param_1 + (param_2 >> 9 & 0xff) * 8);
  if (plVar1 != (long *)0x0) {
    while (param_2 >> 9 != plVar1[1]) {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return;
      }
    }
    uVar2 = (uint)param_2 & 0x1ff;
    plVar1[(ulong)(uVar2 >> 6) + 2] = plVar1[(ulong)(uVar2 >> 6) + 2] & ~(1 << ((byte)uVar2 & 0x3f))
    ;
  }
  return;
}



void freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA(long param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  ulong *puVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  *(long *)(param_1 + 0x2890) = *(long *)(param_1 + 0x2890) + param_2[1];
  uVar10 = *param_2 & 0xfffffffffffffffe;
  *param_2 = uVar10;
  if (uVar10 != 0) {
    puVar15 = (ulong *)((long)param_2 - uVar10);
    puVar8 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)puVar15 >> 0x15 & 0xff) * 8);
    while (puVar8 != (undefined8 *)0x0) {
      if ((ulong)puVar15 >> 0x15 == puVar8[1]) {
        uVar13 = (uint)((ulong)puVar15 >> 0xc) & 0x1ff;
        if (((((puVar8[(ulong)(uVar13 >> 6) + 2] & 1 << ((byte)uVar13 & 0x3f)) != 0) &&
             ((*(byte *)puVar15 & 1) == 0)) && (0xfc8 < (long)puVar15[1])) &&
           ((long)puVar15[1] < 0x3f000000)) {
          removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(param_1,puVar15);
          uVar10 = param_2[1] + puVar15[1];
          puVar15[1] = uVar10;
          puVar8 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)param_2 >> 0x15 & 0xff) * 8);
          goto joined_r0x00402abb;
        }
        break;
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  uVar10 = param_2[1];
  puVar15 = param_2;
LAB_004027a0:
  pbVar16 = (byte *)((long)puVar15 + uVar10);
  uVar17 = (ulong)pbVar16 >> 0x15;
  lVar11 = param_1 + (uVar17 & 0xff) * 8;
  plVar5 = *(long **)(lVar11 + 0x28a8);
  if (plVar5 != (long *)0x0) {
    uVar18 = plVar5[1];
    while (uVar18 != uVar17) {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_004027e2;
      uVar18 = plVar5[1];
    }
    uVar13 = (uint)((ulong)pbVar16 >> 0xc) & 0x1ff;
    uVar18 = 1 << ((byte)uVar13 & 0x3f);
    uVar19 = (ulong)(uVar13 >> 6);
    if ((((plVar5[uVar19 + 2] & uVar18) != 0) && ((*pbVar16 & 1) == 0)) &&
       ((0xfc8 < *(long *)(pbVar16 + 8) && ((long)uVar10 < 0x3f000000)))) {
      removeChunkFromMatrix_v9bekLOkesgfrZC4aumfLXw_2(param_1,pbVar16);
      uVar10 = *(long *)(pbVar16 + 8) + puVar15[1];
      puVar15[1] = uVar10;
      plVar5 = *(long **)(lVar11 + 0x28a8);
      if (plVar5 != (long *)0x0) {
        uVar6 = plVar5[1];
        while (uVar6 != uVar17) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto joined_r0x00402918;
          uVar6 = plVar5[1];
        }
        plVar5[uVar19 + 2] = plVar5[uVar19 + 2] & ~uVar18;
        uVar10 = puVar15[1];
      }
joined_r0x00402918:
      if (0x3f000000 < (long)uVar10) {
        lVar11 = splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(param_1,puVar15,0x3f000000);
        uVar10 = *(ulong *)(lVar11 + 8);
        uVar13 = (uint)uVar10;
        uVar17 = uVar10 & 0xffffffff;
        if (uVar13 < 0x10000) {
          lVar14 = 0;
          if (0xff < uVar13) {
            lVar14 = 8;
            uVar17 = (uVar10 & 0xffffffff) >> 8;
          }
        }
        else {
          if (uVar13 < 0x1000000) {
            uVar17 = uVar17 >> 0x10;
            lVar14 = 0x10;
          }
          else {
            lVar14 = 0x18;
            uVar17 = (uVar10 & 0xffffffff) >> 0x18;
          }
        }
        cVar4 = fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar17];
        *(undefined8 *)(lVar11 + 0x18) = 0;
        lVar14 = lVar14 + cVar4;
        lVar1 = (uVar10 >> ((char)lVar14 - 5U & 0x3f)) - 0x20;
        lVar2 = param_1 + ((lVar14 + -6) * 0x20 + lVar1) * 8;
        lVar7 = *(long *)(lVar2 + 0x1078);
        *(long *)(lVar11 + 0x10) = lVar7;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x18) = lVar11;
        }
        *(long *)(lVar2 + 0x1078) = lVar11;
        puVar3 = (uint *)(param_1 + 0xffc + lVar14 * 4);
        *puVar3 = *puVar3 | (uint)(1 << ((byte)lVar1 & 0x1f));
        *(uint *)(param_1 + 0x1010) =
             *(uint *)(param_1 + 0x1010) | (uint)(1 << ((byte)(lVar14 + -6) & 0x1f));
        uVar10 = puVar15[1];
        uVar9 = (uint)uVar10;
        uVar17 = uVar10 & 0xffffffff;
        uVar13 = (uint)uVar17;
        goto joined_r0x004027e9;
      }
    }
  }
LAB_004027e2:
  uVar9 = (uint)uVar10;
  uVar17 = uVar10 & 0xffffffff;
  uVar13 = (uint)uVar17;
joined_r0x004027e9:
  if (uVar9 < 0x10000) {
    lVar11 = 0;
    if (0xff < (uint)uVar10) {
      uVar17 = uVar17 >> 8;
      lVar11 = 8;
    }
  }
  else {
    if ((uint)uVar10 < 0x1000000) {
      uVar17 = (ulong)(uVar13 >> 0x10);
      lVar11 = 0x10;
    }
    else {
      uVar17 = (ulong)(uVar13 >> 0x18);
      lVar11 = 0x18;
    }
  }
  cVar4 = fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar17];
  puVar15[3] = 0;
  lVar11 = lVar11 + cVar4;
  lVar14 = (uVar10 >> ((char)lVar11 - 5U & 0x3f)) - 0x20;
  lVar1 = param_1 + ((lVar11 + -6) * 0x20 + lVar14) * 8;
  uVar10 = *(ulong *)(lVar1 + 0x1078);
  puVar15[2] = uVar10;
  if (uVar10 != 0) {
    *(ulong **)(uVar10 + 0x18) = puVar15;
  }
  *(ulong **)(lVar1 + 0x1078) = puVar15;
  puVar3 = (uint *)(param_1 + 0xffc + lVar11 * 4);
  *puVar3 = *puVar3 | (uint)(1 << ((byte)lVar14 & 0x1f));
  *(uint *)(param_1 + 0x1010) =
       *(uint *)(param_1 + 0x1010) | (uint)(1 << ((byte)(lVar11 + -6) & 0x1f));
  return;
joined_r0x00402abb:
  if (puVar8 == (undefined8 *)0x0) goto LAB_00402af0;
  if ((ulong)param_2 >> 0x15 == puVar8[1]) {
    uVar13 = (uint)((ulong)param_2 >> 0xc) & 0x1ff;
    puVar8[(ulong)(uVar13 >> 6) + 2] =
         puVar8[(ulong)(uVar13 >> 6) + 2] & ~(1 << ((byte)uVar13 & 0x3f));
    uVar10 = puVar15[1];
    goto LAB_00402af0;
  }
  puVar8 = (undefined8 *)*puVar8;
  goto joined_r0x00402abb;
LAB_00402af0:
  if (0x3f000000 < (long)uVar10) {
    puVar12 = (ulong *)splitChunk2_UxUTh1oy39boKK4NPJIGnLQ(param_1,puVar15,0x3f000000);
    uVar10 = puVar15[1];
    uVar13 = (uint)uVar10;
    uVar17 = uVar10 & 0xffffffff;
    if (uVar13 < 0x10000) {
      lVar11 = 0;
      if (0xff < uVar13) {
        lVar11 = 8;
        uVar17 = (uVar10 & 0xffffffff) >> 8;
      }
    }
    else {
      if (uVar13 < 0x1000000) {
        uVar17 = uVar17 >> 0x10;
        lVar11 = 0x10;
      }
      else {
        lVar11 = 0x18;
        uVar17 = (uVar10 & 0xffffffff) >> 0x18;
      }
    }
    cVar4 = fsLookupTable_Gn52IZvqY4slyBTOYwGNRQ[uVar17];
    puVar15[3] = 0;
    lVar11 = lVar11 + cVar4;
    lVar14 = (uVar10 >> ((char)lVar11 - 5U & 0x3f)) - 0x20;
    lVar1 = param_1 + ((lVar11 + -6) * 0x20 + lVar14) * 8;
    uVar10 = *(ulong *)(lVar1 + 0x1078);
    puVar15[2] = uVar10;
    if (uVar10 != 0) {
      *(ulong **)(uVar10 + 0x18) = puVar15;
    }
    *(ulong **)(lVar1 + 0x1078) = puVar15;
    puVar3 = (uint *)(param_1 + 0xffc + lVar11 * 4);
    *puVar3 = *puVar3 | (uint)(1 << ((byte)lVar14 & 0x1f));
    *(uint *)(param_1 + 0x1010) =
         *(uint *)(param_1 + 0x1010) | (uint)(1 << ((byte)(lVar11 + -6) & 0x1f));
    uVar10 = puVar12[1];
    puVar15 = puVar12;
  }
  goto LAB_004027a0;
}



void del_C66us4UEWCXp84lHW4tDLA(long param_1,long **param_2,ulong param_3)

{
  long *plVar1;
  
  plVar1 = *param_2;
  if (plVar1 != (long *)*plVar1) {
    *(long **)(param_1 + 0x30b8) = plVar1;
    if ((ulong)plVar1[2] < param_3 || plVar1[2] == param_3) {
      *(long **)(param_1 + 0x30b0) = plVar1;
      del_C66us4UEWCXp84lHW4tDLA(param_1,*param_2 + 1);
    }
    else {
      del_C66us4UEWCXp84lHW4tDLA(param_1,plVar1);
    }
    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,param_2,param_3);
    return;
  }
  return;
}



void freeHugeChunk_jnrbguyViYONI3PJ1RZJjQ(long param_1,void *param_2)

{
  size_t __len;
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  __len = *(size_t *)((long)param_2 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)param_2 >> 0x15 & 0xff) * 8);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_00402d0c:
      lVar2 = *(long *)(param_1 + 0x2880);
      lVar4 = lVar2;
      if (lVar2 <= *(long *)(param_1 + 0x2888)) {
        lVar4 = *(long *)(param_1 + 0x2888);
      }
      *(long *)(param_1 + 0x2880) = lVar2 - __len;
      *(long *)(param_1 + 0x2888) = lVar4;
      munmap(param_2,__len);
      return;
    }
    if ((ulong)param_2 >> 0x15 == puVar1[1]) {
      uVar3 = (uint)((ulong)param_2 >> 0xc) & 0x1ff;
      puVar1[(ulong)(uVar3 >> 6) + 2] =
           puVar1[(ulong)(uVar3 >> 6) + 2] & ~(1 << ((byte)uVar3 & 0x3f));
      goto LAB_00402d0c;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



void rawDealloc_DA62HrGC5sdfCED505KyyQ(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  long *plVar5;
  size_t __len;
  undefined8 *puVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  long **pplVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  void *__addr;
  long **pplVar16;
  undefined4 uVar17;
  
  __addr = (void *)((ulong)param_2 & 0xfffffffffffff000);
  uVar11 = *(ulong *)((long)__addr + 8);
  lVar14 = *(long *)(param_1 + 0x2898) - uVar11;
  if ((long)uVar11 < 0xfc9) {
    *(long *)(param_1 + 0x2898) = lVar14;
    param_2[1] = 0;
    *param_2 = *(undefined8 *)((long)__addr + 0x20);
    *(undefined8 **)((long)__addr + 0x20) = param_2;
    if (*(long *)((long)__addr + 0x28) < (long)uVar11) {
      uVar15 = uVar11 + 7;
      if (-1 < (long)uVar11) {
        uVar15 = uVar11;
      }
      param_1 = param_1 + (uVar15 & 0xfffffffffffffff8);
      lVar14 = *(long *)(param_1 + 0x10);
      *(long *)((long)__addr + 0x10) = lVar14;
      if (lVar14 != 0) {
        *(void **)(lVar14 + 0x18) = __addr;
      }
      *(void **)(param_1 + 0x10) = __addr;
      *(long *)((long)__addr + 0x28U) = *(long *)((long)__addr + 0x28U) + uVar11;
      return;
    }
    lVar14 = *(long *)((long)__addr + 0x28) + uVar11;
    *(long *)((long)__addr + 0x28) = lVar14;
    if (lVar14 == 0xfc8) {
      if ((long)uVar11 < 0) {
        uVar11 = uVar11 + 7;
      }
      lVar14 = *(long *)((long)__addr + 0x10);
      lVar12 = (uVar11 & 0xfffffffffffffff8) + param_1;
      if (__addr == *(void **)(lVar12 + 0x10)) {
        *(long *)(lVar12 + 0x10) = lVar14;
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
        }
      }
      else {
        *(long *)(*(long *)((long)__addr + 0x18) + 0x10) = lVar14;
        if (*(long *)((long)__addr + 0x10) != 0) {
          *(undefined8 *)(*(long *)((long)__addr + 0x10) + 0x18) =
               *(undefined8 *)((long)__addr + 0x18);
        }
      }
      *(undefined8 *)((long)__addr + 8) = 0x1000;
      *(undefined4 *)((long)__addr + 0x10) = 0;
      *(undefined4 *)((long)__addr + 0x14) = 0;
      *(undefined4 *)((long)__addr + 0x18) = 0;
      *(undefined4 *)((long)__addr + 0x1c) = 0;
      freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA(0,param_1,__addr);
      return;
    }
    return;
  }
  lVar12 = param_1 + 0x30d8;
  *(long *)(param_1 + 0x2898) = lVar14;
  if (*(long *)(param_1 + 0x30d8) == 0) {
    *(undefined4 *)(param_1 + 0x30d8) = (int)lVar12;
    uVar17 = (undefined4)((ulong)lVar12 >> 0x20);
    *(undefined4 *)(param_1 + 0x30dc) = uVar17;
    *(undefined4 *)(param_1 + 0x30e0) = (int)lVar12;
    *(undefined4 *)(param_1 + 0x30e4) = uVar17;
  }
  pplVar16 = *(long ***)(param_1 + 0x30a8);
  *(long *)(param_1 + 0x30b0) = lVar12;
  if (pplVar16 != (long **)*pplVar16) {
    plVar1 = (long *)((long)__addr + 0x20);
    *(long ***)(param_1 + 0x30b8) = pplVar16;
    if (pplVar16[2] < plVar1 || pplVar16[2] == plVar1) {
      *(long ***)(param_1 + 0x30b0) = pplVar16;
      pplVar3 = (long **)pplVar16[1];
      if (pplVar3 != (long **)*pplVar3) {
        *(long ***)(param_1 + 0x30b8) = pplVar3;
        if (plVar1 < pplVar3[2]) {
          pplVar7 = (long **)*pplVar3;
          if (pplVar7 != (long **)*pplVar7) {
            *(long ***)(param_1 + 0x30b8) = pplVar7;
            if (plVar1 < pplVar7[2]) {
              pplVar8 = (long **)*pplVar7;
              if (pplVar8 != (long **)*pplVar8) {
                *(long ***)(param_1 + 0x30b8) = pplVar8;
                if (plVar1 < pplVar8[2]) {
                  pplVar10 = (long **)*pplVar8;
                  if (pplVar10 != (long **)*pplVar10) {
                    *(long ***)(param_1 + 0x30b8) = pplVar10;
                    if (plVar1 < pplVar10[2]) {
                      plVar2 = *pplVar10;
                      if (plVar2 != (long *)*plVar2) {
                        *(long **)(param_1 + 0x30b8) = plVar2;
                        if (plVar1 < (long *)plVar2[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar2,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar2;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar10 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar10,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar10;
                      plVar2 = *pplVar8;
                      plVar5 = (long *)plVar2[1];
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar2[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar8;
                  plVar2 = *pplVar7;
                  pplVar8 = (long **)plVar2[1];
                  if (pplVar8 != (long **)*pplVar8) {
                    *(long ***)(param_1 + 0x30b8) = pplVar8;
                    if (plVar1 < pplVar8[2]) {
                      plVar5 = *pplVar8;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar8 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar8;
                      lVar14 = plVar2[1];
                      plVar5 = *(long **)(lVar14 + 8);
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar14 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
              }
            }
            else {
              *(long ***)(param_1 + 0x30b0) = pplVar7;
              plVar2 = *pplVar3;
              pplVar7 = (long **)plVar2[1];
              if (pplVar7 != (long **)*pplVar7) {
                *(long ***)(param_1 + 0x30b8) = pplVar7;
                if (plVar1 < pplVar7[2]) {
                  pplVar8 = (long **)*pplVar7;
                  if (pplVar8 != (long **)*pplVar8) {
                    *(long ***)(param_1 + 0x30b8) = pplVar8;
                    if (plVar1 < pplVar8[2]) {
                      plVar5 = *pplVar8;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar8 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar8;
                      plVar5 = *pplVar7;
                      plVar9 = (long *)plVar5[1];
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar7;
                  lVar14 = plVar2[1];
                  pplVar7 = *(long ***)(lVar14 + 8);
                  if (pplVar7 != (long **)*pplVar7) {
                    *(long ***)(param_1 + 0x30b8) = pplVar7;
                    if (plVar1 < pplVar7[2]) {
                      plVar5 = *pplVar7;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar7 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar7;
                      lVar12 = *(long *)(lVar14 + 8);
                      plVar5 = *(long **)(lVar12 + 8);
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar12 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar12 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
              }
            }
            del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
          }
        }
        else {
          *(long ***)(param_1 + 0x30b0) = pplVar3;
          plVar2 = pplVar16[1];
          pplVar3 = (long **)plVar2[1];
          if (pplVar3 != (long **)*pplVar3) {
            *(long ***)(param_1 + 0x30b8) = pplVar3;
            if (plVar1 < pplVar3[2]) {
              pplVar7 = (long **)*pplVar3;
              if (pplVar7 != (long **)*pplVar7) {
                *(long ***)(param_1 + 0x30b8) = pplVar7;
                if (plVar1 < pplVar7[2]) {
                  pplVar8 = (long **)*pplVar7;
                  if (pplVar8 != (long **)*pplVar8) {
                    *(long ***)(param_1 + 0x30b8) = pplVar8;
                    if (plVar1 < pplVar8[2]) {
                      plVar5 = *pplVar8;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar8 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar8;
                      plVar5 = *pplVar7;
                      plVar9 = (long *)plVar5[1];
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar7;
                  plVar5 = *pplVar3;
                  pplVar7 = (long **)plVar5[1];
                  if (pplVar7 != (long **)*pplVar7) {
                    *(long ***)(param_1 + 0x30b8) = pplVar7;
                    if (plVar1 < pplVar7[2]) {
                      plVar9 = *pplVar7;
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar7 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar7;
                      lVar14 = plVar5[1];
                      plVar9 = *(long **)(lVar14 + 8);
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar14 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
              }
            }
            else {
              *(long ***)(param_1 + 0x30b0) = pplVar3;
              lVar14 = plVar2[1];
              pplVar3 = *(long ***)(lVar14 + 8);
              if (pplVar3 != (long **)*pplVar3) {
                *(long ***)(param_1 + 0x30b8) = pplVar3;
                if (plVar1 < pplVar3[2]) {
                  pplVar7 = (long **)*pplVar3;
                  if (pplVar7 != (long **)*pplVar7) {
                    *(long ***)(param_1 + 0x30b8) = pplVar7;
                    if (plVar1 < pplVar7[2]) {
                      plVar5 = *pplVar7;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar7 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar7;
                      plVar5 = *pplVar3;
                      plVar9 = (long *)plVar5[1];
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar3;
                  lVar12 = *(long *)(lVar14 + 8);
                  pplVar3 = *(long ***)(lVar12 + 8);
                  if (pplVar3 != (long **)*pplVar3) {
                    *(long ***)(param_1 + 0x30b8) = pplVar3;
                    if (plVar1 < pplVar3[2]) {
                      plVar5 = *pplVar3;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar3 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar3;
                      lVar4 = *(long *)(lVar12 + 8);
                      plVar5 = *(long **)(lVar4 + 8);
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar4 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar4 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar12 + 8,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
              }
            }
            del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
          }
        }
        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar16 + 1,plVar1);
      }
    }
    else {
      pplVar3 = (long **)*pplVar16;
      if (pplVar3 != (long **)*pplVar3) {
        *(long ***)(param_1 + 0x30b8) = pplVar3;
        if (plVar1 < pplVar3[2]) {
          pplVar7 = (long **)*pplVar3;
          if (pplVar7 != (long **)*pplVar7) {
            *(long ***)(param_1 + 0x30b8) = pplVar7;
            if (plVar1 < pplVar7[2]) {
              pplVar8 = (long **)*pplVar7;
              if (pplVar8 != (long **)*pplVar8) {
                *(long ***)(param_1 + 0x30b8) = pplVar8;
                if (plVar1 < pplVar8[2]) {
                  pplVar10 = (long **)*pplVar8;
                  if (pplVar10 != (long **)*pplVar10) {
                    *(long ***)(param_1 + 0x30b8) = pplVar10;
                    if (plVar1 < pplVar10[2]) {
                      plVar2 = *pplVar10;
                      if (plVar2 != (long *)*plVar2) {
                        *(long **)(param_1 + 0x30b8) = plVar2;
                        if (plVar1 < (long *)plVar2[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar2,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar2;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar10 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar10,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar10;
                      plVar2 = *pplVar8;
                      plVar5 = (long *)plVar2[1];
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar2[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar8;
                  plVar2 = *pplVar7;
                  pplVar8 = (long **)plVar2[1];
                  if (pplVar8 != (long **)*pplVar8) {
                    *(long ***)(param_1 + 0x30b8) = pplVar8;
                    if (plVar1 < pplVar8[2]) {
                      plVar5 = *pplVar8;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar8 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar8;
                      lVar14 = plVar2[1];
                      plVar5 = *(long **)(lVar14 + 8);
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar14 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
              }
            }
            else {
              *(long ***)(param_1 + 0x30b0) = pplVar7;
              plVar2 = *pplVar3;
              pplVar7 = (long **)plVar2[1];
              if (pplVar7 != (long **)*pplVar7) {
                *(long ***)(param_1 + 0x30b8) = pplVar7;
                if (plVar1 < pplVar7[2]) {
                  pplVar8 = (long **)*pplVar7;
                  if (pplVar8 != (long **)*pplVar8) {
                    *(long ***)(param_1 + 0x30b8) = pplVar8;
                    if (plVar1 < pplVar8[2]) {
                      plVar5 = *pplVar8;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar8 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar8;
                      plVar5 = *pplVar7;
                      plVar9 = (long *)plVar5[1];
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar7;
                  lVar14 = plVar2[1];
                  pplVar7 = *(long ***)(lVar14 + 8);
                  if (pplVar7 != (long **)*pplVar7) {
                    *(long ***)(param_1 + 0x30b8) = pplVar7;
                    if (plVar1 < pplVar7[2]) {
                      plVar5 = *pplVar7;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar7 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar7;
                      lVar12 = *(long *)(lVar14 + 8);
                      plVar5 = *(long **)(lVar12 + 8);
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar12 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar12 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
              }
            }
            del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
          }
        }
        else {
          *(long ***)(param_1 + 0x30b0) = pplVar3;
          plVar2 = *pplVar16;
          pplVar3 = (long **)plVar2[1];
          if (pplVar3 != (long **)*pplVar3) {
            *(long ***)(param_1 + 0x30b8) = pplVar3;
            if (plVar1 < pplVar3[2]) {
              pplVar7 = (long **)*pplVar3;
              if (pplVar7 != (long **)*pplVar7) {
                *(long ***)(param_1 + 0x30b8) = pplVar7;
                if (plVar1 < pplVar7[2]) {
                  pplVar8 = (long **)*pplVar7;
                  if (pplVar8 != (long **)*pplVar8) {
                    *(long ***)(param_1 + 0x30b8) = pplVar8;
                    if (plVar1 < pplVar8[2]) {
                      plVar5 = *pplVar8;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar8 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar8,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar8;
                      plVar5 = *pplVar7;
                      plVar9 = (long *)plVar5[1];
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar7;
                  plVar5 = *pplVar3;
                  pplVar7 = (long **)plVar5[1];
                  if (pplVar7 != (long **)*pplVar7) {
                    *(long ***)(param_1 + 0x30b8) = pplVar7;
                    if (plVar1 < pplVar7[2]) {
                      plVar9 = *pplVar7;
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar7 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar7;
                      lVar14 = plVar5[1];
                      plVar9 = *(long **)(lVar14 + 8);
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar14 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
              }
            }
            else {
              *(long ***)(param_1 + 0x30b0) = pplVar3;
              lVar14 = plVar2[1];
              pplVar3 = *(long ***)(lVar14 + 8);
              if (pplVar3 != (long **)*pplVar3) {
                *(long ***)(param_1 + 0x30b8) = pplVar3;
                if (plVar1 < pplVar3[2]) {
                  pplVar7 = (long **)*pplVar3;
                  if (pplVar7 != (long **)*pplVar7) {
                    *(long ***)(param_1 + 0x30b8) = pplVar7;
                    if (plVar1 < pplVar7[2]) {
                      plVar5 = *pplVar7;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar7 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar7,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar7;
                      plVar5 = *pplVar3;
                      plVar9 = (long *)plVar5[1];
                      if (plVar9 != (long *)*plVar9) {
                        *(long **)(param_1 + 0x30b8) = plVar9;
                        if (plVar1 < (long *)plVar9[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar9,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar9;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5[1] + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar5 + 1,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
                  }
                }
                else {
                  *(long ***)(param_1 + 0x30b0) = pplVar3;
                  lVar12 = *(long *)(lVar14 + 8);
                  pplVar3 = *(long ***)(lVar12 + 8);
                  if (pplVar3 != (long **)*pplVar3) {
                    *(long ***)(param_1 + 0x30b8) = pplVar3;
                    if (plVar1 < pplVar3[2]) {
                      plVar5 = *pplVar3;
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*pplVar3 + 1,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar3,plVar1);
                      }
                    }
                    else {
                      *(long ***)(param_1 + 0x30b0) = pplVar3;
                      lVar4 = *(long *)(lVar12 + 8);
                      plVar5 = *(long **)(lVar4 + 8);
                      if (plVar5 != (long *)*plVar5) {
                        *(long **)(param_1 + 0x30b8) = plVar5;
                        if (plVar1 < (long *)plVar5[2]) {
                          del_C66us4UEWCXp84lHW4tDLA(param_1,plVar5,plVar1);
                        }
                        else {
                          *(long **)(param_1 + 0x30b0) = plVar5;
                          del_C66us4UEWCXp84lHW4tDLA(param_1,*(long *)(lVar4 + 8) + 8,plVar1);
                        }
                        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar4 + 8,plVar1);
                      }
                    }
                    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar12 + 8,plVar1);
                  }
                }
                del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,lVar14 + 8,plVar1);
              }
            }
            del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,plVar2 + 1,plVar1);
          }
        }
        del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,pplVar16,plVar1);
      }
    }
    del_C66us4UEWCXp84lHW4tDLA_part_8(param_1,param_1 + 0x30a8,plVar1);
  }
  __len = *(size_t *)((long)__addr + 8);
  if ((long)__len < 0x3f000001) {
    freeBigChunk_CAqFS1jFL1RxG80t9bOGmAA(param_1,__addr);
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x28a8 + ((ulong)__addr >> 0x15 & 0xff) * 8);
  do {
    if (puVar6 == (undefined8 *)0x0) {
LAB_0040315b:
      lVar14 = *(long *)(param_1 + 0x2880);
      lVar12 = lVar14;
      if (lVar14 <= *(long *)(param_1 + 0x2888)) {
        lVar12 = *(long *)(param_1 + 0x2888);
      }
      *(long *)(param_1 + 0x2880) = lVar14 - __len;
      *(long *)(param_1 + 0x2888) = lVar12;
      munmap(__addr,__len);
      return;
    }
    if ((ulong)__addr >> 0x15 == puVar6[1]) {
      uVar13 = (uint)((ulong)__addr >> 0xc) & 0x1ff;
      puVar6[(ulong)(uVar13 >> 6) + 2] =
           puVar6[(ulong)(uVar13 >> 6) + 2] & ~(1 << ((byte)uVar13 & 0x3f));
      goto LAB_0040315b;
    }
    puVar6 = (undefined8 *)*puVar6;
  } while( true );
}



void dealloc_jqYVOi4APb9cRx3G9a57AkRw(undefined8 param_1,long param_2)

{
  rawDealloc_DA62HrGC5sdfCED505KyyQ(param_1,param_2 + -0x10);
  return;
}



void dealloc_RCjNtRnHdRYntrcE7YtwWw(long param_1)

{
  rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1 + -0x10);
  return;
}



void addZCT_fCDI7oO1NNVXXURtxSzsRw(long *param_1,ulong *param_2)

{
  void *__dest;
  long lVar1;
  
  if ((*param_2 & 4) != 0) {
    return;
  }
  *param_2 = *param_2 | 4;
  if (*param_1 < param_1[1]) {
    *(ulong **)(param_1[2] + *param_1 * 8) = param_2;
    *param_1 = *param_1 + 1;
    return;
  }
  lVar1 = (param_1[1] * 3) / 2;
  param_1[1] = lVar1;
  lVar1 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,lVar1 * 8 + 0x10);
  __dest = (void *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 8) = 1;
  memcpy(__dest,(void *)param_1[2],*param_1 * 8);
  rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[2] + -0x10);
  *(void **)(param_1 + 2) = __dest;
  *(ulong **)((long)__dest + *param_1 * 8) = param_2;
  *param_1 = *param_1 + 1;
  return;
}



void unsureAsgnRef(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = param_2;
  cVar2 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg();
  if (cVar2 == '\0') {
    if (uVar3 != 0) {
      *(long *)(uVar3 - 0x10) = *(long *)(uVar3 - 0x10) + 8;
    }
    uVar3 = *param_1;
    if (0xfff < uVar3) {
      uVar1 = *(long *)(uVar3 - 0x10) - 8;
      *(ulong *)(uVar3 - 0x10) = uVar1;
      if (uVar1 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,uVar3 - 0x10);
        *param_1 = param_2;
        return;
      }
    }
  }
  *param_1 = param_2;
  return;
}



ulong getDiscriminant_MBlSP9aCmxWSBuDOxawp8Sg(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(param_2 + 0x10);
  if (lVar1 == 2) {
    return (ulong)*(ushort *)(param_1 + *(long *)(param_2 + 8));
  }
  if (lVar1 != 4) {
    if (lVar1 != 1) {
      return 0;
    }
    return (ulong)*(byte *)(param_1 + *(long *)(param_2 + 8));
  }
  return (long)*(int *)(param_1 + *(long *)(param_2 + 8));
}



long selectBranch_yDNUA0V9a9a9bVLtZ9bXPT0aEg(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = **(long **)(param_2 + 0x10);
  if (lVar1 == 2) {
    uVar2 = (ulong)*(ushort *)(param_1 + *(long *)(param_2 + 8));
  }
  else {
    if (lVar1 == 4) {
      uVar2 = SEXT48(*(int *)(param_1 + *(long *)(param_2 + 8)));
    }
    else {
      uVar2 = 0;
      if (lVar1 == 1) {
        uVar2 = (ulong)*(byte *)(param_1 + *(long *)(param_2 + 8));
      }
    }
  }
  if ((uVar2 < *(ulong *)(param_2 + 0x20)) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x28) + uVar2 * 8), lVar1 != 0)) {
    return lVar1;
  }
  return *(undefined8 *)(*(long *)(param_2 + 0x28) + *(ulong *)(param_2 + 0x20) * 8);
}



void genericReset(ulong *param_1,size_t *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  
  switch(*(undefined *)(param_2 + 1)) {
  case 4:
  case 0x10:
    lVar5 = 0;
    lVar7 = *(long *)param_2[2];
    lVar4 = (long)*param_2 / lVar7;
    if (0 < lVar4) {
      while( true ) {
        lVar7 = lVar7 * lVar5;
        lVar5 = lVar5 + 1;
        genericReset((ulong *)(lVar7 + (long)param_1));
        if (lVar4 == lVar5) break;
        lVar7 = *(long *)param_2[2];
      }
      return;
    }
    return;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    memset(param_1,0,*param_2);
    return;
  case 0x11:
    genericResetAux_ruA1rosalqf8AhzZPPTBQg(param_1,param_2[3]);
    break;
  case 0x12:
    genericResetAux_ruA1rosalqf8AhzZPPTBQg(param_1,param_2[3]);
    return;
  case 0x16:
  case 0x18:
  case 0x1c:
  case 0x2d:
    puVar6 = param_1;
    cVar3 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg();
    if ((cVar3 == '\0') && (uVar2 = *puVar6, 0xfff < uVar2)) {
      uVar1 = *(long *)(uVar2 - 0x10) - 8;
      *(ulong *)(uVar2 - 0x10) = uVar1;
      if (uVar1 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,uVar2 - 0x10);
      }
    }
    break;
  default:
    memset(param_1,0,*param_2);
    return;
  }
  *param_1 = 0;
  return;
}



void genericResetAux_ruA1rosalqf8AhzZPPTBQg(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    lVar3 = *(long *)(param_2 + 0x20);
    lVar5 = 0;
    if (0 < lVar3) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        genericResetAux_ruA1rosalqf8AhzZPPTBQg
                  (param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar1));
      } while (lVar3 != lVar5);
    }
  }
  else {
    if (cVar2 == '\x03') {
      __n = **(size_t **)(param_2 + 0x10);
      if (__n == 2) {
        uVar4 = (ulong)*(ushort *)(*(long *)(param_2 + 8) + param_1);
      }
      else {
        if (__n == 4) {
          uVar4 = SEXT48(*(int *)(param_1 + *(long *)(param_2 + 8)));
        }
        else {
          uVar4 = 0;
          if (__n == 1) {
            uVar4 = (ulong)*(byte *)(*(long *)(param_2 + 8) + param_1);
          }
        }
      }
      if (((uVar4 < *(ulong *)(param_2 + 0x20)) &&
          (*(long *)(*(long *)(param_2 + 0x28) + uVar4 * 8) != 0)) ||
         (*(long *)(*(long *)(param_2 + 0x28) + *(ulong *)(param_2 + 0x20) * 8) != 0)) {
        genericResetAux_ruA1rosalqf8AhzZPPTBQg(param_1);
        __n = **(size_t **)(param_2 + 0x10);
      }
      memset((void *)(*(long *)(param_2 + 8) + param_1),0,__n);
      return;
    }
    if (cVar2 == '\x01') {
      genericReset(*(long *)(param_2 + 8) + param_1,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  return;
}



void setPosition_plJQLEbXvFqZv6Phpo1t1w(void)

{
  return;
}



void nimGC_setStackBottom(long param_1)

{
  if (gch_IcYaEuuWivYAS86vFMTS3Q._0_8_ != 0) {
    if (gch_IcYaEuuWivYAS86vFMTS3Q._0_8_ == param_1) {
      return;
    }
    if (param_1 < gch_IcYaEuuWivYAS86vFMTS3Q._0_8_) {
      param_1 = gch_IcYaEuuWivYAS86vFMTS3Q._0_8_;
    }
  }
  gch_IcYaEuuWivYAS86vFMTS3Q._0_8_ = param_1;
  return;
}



void alloc0_1iQ1Xo9cXsxq509b5gmDHLoQ_2(undefined8 param_1,size_t param_2)

{
  long lVar1;
  
  lVar1 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg();
  *(undefined8 *)(lVar1 + 8) = 1;
  memset((void *)(lVar1 + 0x10),0,param_2);
  return;
}



void alloc0_sVm4rDImKK2ZDdylByayiA_2(size_t param_1)

{
  long lVar1;
  
  lVar1 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060);
  *(undefined8 *)(lVar1 + 8) = 1;
  memset((void *)(lVar1 + 0x10),0,param_1);
  return;
}



void init_E1QNZGuo0DGFXyt4Y3MfqA(undefined8 *param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  
  param_1[1] = param_2;
  *param_1 = 0;
  lVar1 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060);
  *(undefined8 *)(lVar1 + 8) = 1;
  pvVar2 = memset((void *)(lVar1 + 0x10),0,param_2 * 8);
  *(void **)(param_1 + 2) = pvVar2;
  return;
}



void init_WHgd5C59bkXWDz3vnAxfzXQ(undefined4 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  lVar1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar1 + 0x20,lVar1 + 0x2050);
  puVar3 = (undefined8 *)(lVar1 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar1 + 8)
  ;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x2028) = 0;
  uVar2 = (ulong)(((int)(lVar1 + 0x30) - (int)puVar3) + 0x2000U >> 3);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  *(long *)(param_1 + 6) = lVar1 + 0x30;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



void initGC_njssp69aa7hvxte9bJ8uuDcg(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13136_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13140_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13144_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13148_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13152_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13156_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13160_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13164_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13168_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13172_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13176_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13180_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._24_8_ = 0x400;
  gch_IcYaEuuWivYAS86vFMTS3Q._8_4_ = 0x400000;
  gch_IcYaEuuWivYAS86vFMTS3Q._12_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._16_4_ = 0x400000;
  gch_IcYaEuuWivYAS86vFMTS3Q._20_4_ = 0;
  lVar1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x400000,0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar1 + 0x20,lVar1 + 0x2050);
  gch_IcYaEuuWivYAS86vFMTS3Q._32_8_ = lVar1 + 0x30;
  puVar3 = (undefined8 *)(lVar1 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar1 + 8)
  ;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x2028) = 0;
  uVar2 = (ulong)(((int)gch_IcYaEuuWivYAS86vFMTS3Q._32_8_ - (int)puVar3) + 0x2000U >> 3);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  gch_IcYaEuuWivYAS86vFMTS3Q._64_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._68_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._72_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._76_4_ = 0;
  lVar1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar1 + 0x20,lVar1 + 0x2050);
  gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = lVar1 + 0x30;
  puVar3 = (undefined8 *)(lVar1 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar1 + 8)
  ;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x2028) = 0;
  uVar2 = (ulong)(((int)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ - (int)puVar3) + 0x2000U >> 3);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  gch_IcYaEuuWivYAS86vFMTS3Q._40_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._44_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._48_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._52_4_ = 0;
  lVar1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar1 + 0x20,lVar1 + 0x2050);
  gch_IcYaEuuWivYAS86vFMTS3Q._56_8_ = lVar1 + 0x30;
  puVar3 = (undefined8 *)(lVar1 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar1 + 8)
  ;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x2028) = 0;
  uVar2 = (ulong)(((int)gch_IcYaEuuWivYAS86vFMTS3Q._56_8_ - (int)puVar3) + 0x2000U >> 3);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  lVar1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar1 + 0x20,lVar1 + 0x2050);
  gch_IcYaEuuWivYAS86vFMTS3Q._13216_8_ = lVar1 + 0x30;
  puVar3 = (undefined8 *)(lVar1 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar1 + 8)
  ;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x2028) = 0;
  uVar2 = (ulong)(((int)gch_IcYaEuuWivYAS86vFMTS3Q._13216_8_ - (int)puVar3) + 0x2000U >> 3);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  gch_IcYaEuuWivYAS86vFMTS3Q._13192_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13196_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13200_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13204_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13208_8_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13224_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13228_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13232_4_ = 0;
  gch_IcYaEuuWivYAS86vFMTS3Q._13236_4_ = 0;
  lVar1 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0,0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar1 + 0x20,lVar1 + 0x2050);
  puVar3 = (undefined8 *)(lVar1 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar1 + 8)
  ;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x2028) = 0;
  uVar2 = (ulong)(((int)(lVar1 + 0x30) - (int)puVar3) + 0x2000U >> 3);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  gch_IcYaEuuWivYAS86vFMTS3Q._13240_8_ = lVar1 + 0x30;
  gch_IcYaEuuWivYAS86vFMTS3Q._13248_8_ = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg;
  gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg = gHeapidGenerator_hd54mEUTGcVuZLChYgtR9bg + 1;
  return;
}



void cellSetRawInsert_wqizyapnzNjHA3SIFqE8ow(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_3 + 8) & *(ulong *)(param_1 + 8);
  plVar2 = (long *)(param_2 + uVar3 * 8);
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    uVar3 = uVar3 * 5 + 1 & *(ulong *)(param_1 + 8);
    plVar2 = (long *)(param_2 + uVar3 * 8);
    lVar1 = *plVar2;
  }
  *plVar2 = param_3;
  return;
}



void cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(long param_1)

{
  long lVar1;
  void *__s;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = lVar2 + 1;
  *(long *)(param_1 + 8) = lVar2 + lVar1;
  lVar4 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060);
  *(undefined8 *)(lVar4 + 8) = 1;
  __s = (void *)(lVar4 + 0x10);
  memset(__s,0,lVar1 * 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar6 = 0;
  if (-1 < lVar2) {
    do {
      lVar2 = *(long *)(lVar4 + lVar6 * 8);
      if (lVar2 != 0) {
        uVar5 = *(ulong *)(lVar2 + 8) & *(ulong *)(param_1 + 8);
        plVar3 = (long *)((long)__s + uVar5 * 8);
        lVar4 = *plVar3;
        while (lVar4 != 0) {
          uVar5 = uVar5 * 5 + 1 & *(ulong *)(param_1 + 8);
          plVar3 = (long *)((long)__s + uVar5 * 8);
          lVar4 = *plVar3;
        }
        *plVar3 = lVar2;
        lVar4 = *(long *)(param_1 + 0x18);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar1);
  }
  rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,lVar4 + -0x10);
  *(void **)(param_1 + 0x18) = __s;
  return;
}



void cellSetPut_mFUFZ7eVLRT9bMaHzrsxFrQ(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  uVar8 = param_1[1];
  lVar7 = param_1[3];
  uVar4 = uVar8 & param_2;
  lVar10 = uVar4 * 8;
  plVar9 = (long *)(lVar7 + lVar10);
  if (*plVar9 == 0) {
LAB_00404d03:
    lVar2 = *param_1;
    lVar3 = (uVar8 + 1) * 2;
    if ((SBORROW8(lVar3,lVar2 * 3) != lVar3 + lVar2 * -3 < 0) || ((long)((uVar8 + 1) - lVar2) < 4))
    {
      cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(param_1);
      uVar8 = param_1[1];
      lVar7 = param_1[3];
      lVar2 = *param_1;
      uVar4 = param_2 & uVar8;
      lVar10 = uVar4 * 8;
      plVar9 = (long *)(lVar7 + lVar10);
    }
    *param_1 = lVar2 + 1;
    lVar3 = gch_IcYaEuuWivYAS86vFMTS3Q._208_8_;
    lVar2 = *plVar9;
    while (lVar2 != 0) {
      uVar4 = uVar4 * 5 + 1 & uVar8;
      lVar2 = *(long *)(lVar7 + uVar4 * 8);
      lVar10 = uVar4 * 8;
    }
    if (gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ == 0) {
      lVar3 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x1000);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0xf68;
      *(undefined4 *)(lVar3 + 0x2c) = 0;
      *(undefined4 *)(lVar3 + 0x30) = 0xf68;
      *(undefined4 *)(lVar3 + 0x34) = 0;
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      *(undefined8 *)(lVar3 + 8) = 0x60;
      *(long *)(lVar3 + 0x10) = gch_IcYaEuuWivYAS86vFMTS3Q._208_8_;
      if (gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ != 0) {
        *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x18) = lVar3;
      }
      puVar6 = (undefined8 *)(lVar3 + 0x38);
      lVar7 = *(long *)(lVar3 + 0x28);
      gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ = lVar3;
    }
    else {
      puVar6 = *(undefined8 **)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x20);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)
                 (gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x38 +
                 *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x30));
        *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x30) =
             *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x30) + 0x60;
      }
      else {
        *(undefined8 *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x20) = *puVar6;
      }
      lVar7 = *(long *)(lVar3 + 0x28) + -0x60;
      *(long *)(lVar3 + 0x28) = lVar7;
    }
    if (lVar7 < 0x60) {
      lVar7 = *(long *)(lVar3 + 0x10);
      if (lVar3 == gch_IcYaEuuWivYAS86vFMTS3Q._208_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
        }
      }
      else {
        *(long *)(*(long *)(lVar3 + 0x18) + 0x10) = lVar7;
        if (*(long *)(lVar3 + 0x10) != 0) {
          *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x18) = *(undefined8 *)(lVar3 + 0x18);
        }
      }
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
    }
    gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + 0x60;
    puVar6[1] = 1;
    *(undefined4 *)(puVar6 + 2) = 0;
    *(undefined4 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((long)puVar6 + 0x24) = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined4 *)((long)puVar6 + 0x34) = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((long)puVar6 + 0x3c) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)((long)puVar6 + 0x44) = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined4 *)((long)puVar6 + 0x4c) = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined4 *)((long)puVar6 + 0x54) = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    *(undefined4 *)((long)puVar6 + 0x5c) = 0;
    puVar6[2] = param_1[2];
    puVar6[3] = param_2;
    *(undefined8 **)(param_1 + 2) = puVar6 + 2;
    *(undefined8 **)(param_1[3] + lVar10) = puVar6 + 2;
  }
  else {
    uVar1 = *(ulong *)(*plVar9 + 8);
    uVar5 = uVar4;
    while (param_2 != uVar1) {
      uVar5 = uVar5 * 5 + 1 & uVar8;
      lVar2 = *(long *)(lVar7 + uVar5 * 8);
      if (lVar2 == 0) goto LAB_00404d03;
      uVar1 = *(ulong *)(lVar2 + 8);
    }
  }
  return;
}



void incl_m4q9b16kJJcoKe9c4ERtlpCg(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  uVar12 = param_2 >> 0xc;
  uVar9 = param_1[1];
  lVar10 = param_1[3];
  uVar7 = uVar12 & uVar9;
  lVar13 = uVar7 * 8;
  plVar11 = (long *)(lVar10 + lVar13);
  puVar3 = (undefined8 *)*plVar11;
  if (puVar3 == (undefined8 *)0x0) {
LAB_00404f3b:
    lVar2 = *param_1;
    lVar4 = (uVar9 + 1) * 2;
    if ((SBORROW8(lVar4,lVar2 * 3) != lVar4 + lVar2 * -3 < 0) || ((long)((uVar9 + 1) - lVar2) < 4))
    {
      cellSetEnlarge_ZCqaZEiX9aUtDCRoknrJ9bpQ(param_1);
      uVar9 = param_1[1];
      lVar10 = param_1[3];
      lVar2 = *param_1;
      uVar7 = uVar12 & uVar9;
      lVar13 = uVar7 * 8;
      plVar11 = (long *)(lVar10 + lVar13);
    }
    *param_1 = lVar2 + 1;
    lVar4 = gch_IcYaEuuWivYAS86vFMTS3Q._208_8_;
    lVar2 = *plVar11;
    while (lVar2 != 0) {
      uVar7 = uVar7 * 5 + 1 & uVar9;
      lVar2 = *(long *)(lVar10 + uVar7 * 8);
      lVar13 = uVar7 * 8;
    }
    if (gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ == 0) {
      lVar4 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x1000);
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined4 *)(lVar4 + 0x28) = 0xf68;
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      *(undefined4 *)(lVar4 + 0x30) = 0xf68;
      *(undefined4 *)(lVar4 + 0x34) = 0;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(undefined4 *)(lVar4 + 0x14) = 0;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      *(undefined8 *)(lVar4 + 8) = 0x60;
      *(long *)(lVar4 + 0x10) = gch_IcYaEuuWivYAS86vFMTS3Q._208_8_;
      if (gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ != 0) {
        *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x18) = lVar4;
      }
      puVar8 = (undefined8 *)(lVar4 + 0x38);
      lVar10 = *(long *)(lVar4 + 0x28);
      gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ = lVar4;
    }
    else {
      puVar8 = *(undefined8 **)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x20);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)
                 (gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x38 +
                 *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x30));
        *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x30) =
             *(long *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x30) + 0x60;
      }
      else {
        *(undefined8 *)(gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ + 0x20) = *puVar8;
      }
      lVar10 = *(long *)(lVar4 + 0x28) + -0x60;
      *(long *)(lVar4 + 0x28) = lVar10;
    }
    if (lVar10 < 0x60) {
      lVar10 = *(long *)(lVar4 + 0x10);
      if (lVar4 == gch_IcYaEuuWivYAS86vFMTS3Q._208_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._208_8_ = lVar10;
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
        }
      }
      else {
        *(long *)(*(long *)(lVar4 + 0x18) + 0x10) = lVar10;
        if (*(long *)(lVar4 + 0x10) != 0) {
          *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18) = *(undefined8 *)(lVar4 + 0x18);
        }
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(undefined4 *)(lVar4 + 0x14) = 0;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
    }
    puVar3 = puVar8 + 2;
    gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + 0x60;
    puVar8[1] = 1;
    *(undefined4 *)(puVar8 + 2) = 0;
    *(undefined4 *)((long)puVar8 + 0x14) = 0;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((long)puVar8 + 0x1c) = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((long)puVar8 + 0x24) = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(undefined4 *)((long)puVar8 + 0x2c) = 0;
    *(undefined4 *)(puVar8 + 6) = 0;
    *(undefined4 *)((long)puVar8 + 0x34) = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *(undefined4 *)((long)puVar8 + 0x3c) = 0;
    *(undefined4 *)(puVar8 + 8) = 0;
    *(undefined4 *)((long)puVar8 + 0x44) = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
    *(undefined4 *)((long)puVar8 + 0x4c) = 0;
    *(undefined4 *)(puVar8 + 10) = 0;
    *(undefined4 *)((long)puVar8 + 0x54) = 0;
    *(undefined4 *)(puVar8 + 0xb) = 0;
    *(undefined4 *)((long)puVar8 + 0x5c) = 0;
    puVar8[2] = param_1[2];
    puVar8[3] = uVar12;
    *(undefined8 **)(param_1 + 2) = puVar3;
    *(undefined8 **)(param_1[3] + lVar13) = puVar3;
  }
  else {
    uVar1 = puVar3[1];
    uVar6 = uVar7;
    while (uVar12 != uVar1) {
      uVar6 = uVar6 * 5 + 1 & uVar9;
      puVar3 = *(undefined8 **)(lVar10 + uVar6 * 8);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00404f3b;
      uVar1 = puVar3[1];
    }
  }
  uVar5 = (uint)(param_2 >> 3) & 0x1ff;
  puVar3[(ulong)(uVar5 >> 6) + 2] = puVar3[(ulong)(uVar5 >> 6) + 2] | 1 << ((byte)uVar5 & 0x3f);
  return;
}



void cellSetGet_X4WTfs0wkld8wp8XcE9b8BA(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8) & param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
  if (lVar1 != 0) {
    if (param_2 == *(ulong *)(lVar1 + 8)) {
      return;
    }
    do {
      uVar2 = uVar2 * 5 + 1 & *(ulong *)(param_1 + 8);
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
      if (lVar1 == 0) {
        return;
      }
    } while (*(ulong *)(lVar1 + 8) != param_2);
  }
  return;
}



undefined8 containsOrIncl_CbGEjIBKJIi7knlaDzUluA(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = param_2 >> 0xc & *(ulong *)(param_1 + 8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
  while( true ) {
    if (lVar1 == 0) {
      incl_m4q9b16kJJcoKe9c4ERtlpCg();
      return 0;
    }
    if (param_2 >> 0xc == *(ulong *)(lVar1 + 8)) break;
    uVar2 = uVar2 * 5 + 1 & *(ulong *)(param_1 + 8);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
  }
  uVar3 = (uint)(param_2 >> 3) & 0x1ff;
  lVar1 = lVar1 + (ulong)(uVar3 >> 6) * 8;
  uVar2 = *(ulong *)(lVar1 + 0x10);
  uVar4 = 1 << ((byte)uVar3 & 0x3f);
  if ((uVar2 & uVar4) == 0) {
    *(ulong *)(lVar1 + 0x10) = uVar4 | uVar2;
    return 0;
  }
  return 1;
}



void doOperation_3F8QeaTyYrJJF2gjBr6b8A(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + -0x10;
  if (param_2 != '\x01') {
    if (param_2 == '\0') {
      markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,lVar1);
      return;
    }
    if (param_2 == '\x02') {
      uVar3 = *(long *)(param_1 + -0x10) - 8;
      *(ulong *)(param_1 + -0x10) = uVar3;
      if (uVar3 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
        return;
      }
    }
    else {
      if (param_2 == '\x03') {
        if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
          gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
          lVar2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                            (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
          *(undefined8 *)(lVar2 + 8) = 1;
          memcpy((void *)(lVar2 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
                 gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
          rawDealloc_DA62HrGC5sdfCED505KyyQ
                    (0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
          gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar2 + 0x10);
        }
        *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
             lVar1;
        gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
      }
    }
    return;
  }
  if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
    gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
    lVar2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
    *(undefined8 *)(lVar2 + 8) = 1;
    memcpy((void *)(lVar2 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
           gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
    gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar2 + 0x10);
  }
  *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) = lVar1
  ;
  gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
  return;
}



void forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (((param_1 != (undefined8 *)0x0) && ((*(byte *)((long)param_2 + 9) & 1) == 0)) &&
     (*(byte *)(param_2 + 1) < 0x2e)) {
    uVar1 = 1 << (*(byte *)(param_2 + 1) & 0x3f);
    if ((uVar1 & 0x200011400000) != 0) {
      doOperation_3F8QeaTyYrJJF2gjBr6b8A(*param_1,param_3 & 0xff);
      return;
    }
    if ((uVar1 & 0x8010010) != 0) {
      plVar4 = (long *)param_2[2];
      lVar3 = *plVar4;
      lVar2 = *param_2 / lVar3;
      if (0 < lVar2) {
        lVar5 = 0;
        while( true ) {
          lVar3 = lVar3 * lVar5;
          lVar5 = lVar5 + 1;
          forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA
                    ((undefined8 *)((long)param_1 + lVar3),plVar4,param_3 & 0xff,lVar3);
          if (lVar2 == lVar5) break;
          plVar4 = (long *)param_2[2];
          lVar3 = *plVar4;
        }
      }
      return;
    }
    if ((uVar1 & 0x60000) != 0) {
      forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(param_1,param_2[3],param_3 & 0xff);
      return;
    }
  }
  return;
}



void forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(long param_1,char *param_2,byte param_3)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    lVar5 = 0;
    lVar4 = *(long *)(param_2 + 0x20);
    if (0 < lVar4) {
      do {
        pcVar2 = *(char **)(*(long *)(param_2 + 0x28) + lVar5 * 8);
        if (*pcVar2 == '\x01') {
          if ((0x200011400000U >> (*(byte *)(*(long *)(pcVar2 + 0x10) + 8) & 0x3f) & 1) == 0) {
            forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA
                      ((undefined8 *)(*(long *)(pcVar2 + 8) + param_1),*(long *)(pcVar2 + 0x10),
                       (ulong)(uint)param_3);
          }
          else {
            doOperation_3F8QeaTyYrJJF2gjBr6b8A
                      (*(undefined8 *)(*(long *)(pcVar2 + 8) + param_1),(ulong)(uint)param_3);
          }
        }
        else {
          forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(param_1,pcVar2,(ulong)param_3);
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    return;
  }
  if (cVar1 == '\x03') {
    lVar4 = **(long **)(param_2 + 0x10);
    if (lVar4 == 2) {
      uVar3 = (ulong)*(ushort *)(param_1 + *(long *)(param_2 + 8));
    }
    else {
      if (lVar4 == 4) {
        uVar3 = SEXT48(*(int *)(param_1 + *(long *)(param_2 + 8)));
      }
      else {
        uVar3 = 0;
        if (lVar4 == 1) {
          uVar3 = (ulong)*(byte *)(param_1 + *(long *)(param_2 + 8));
        }
      }
    }
    if (((uVar3 < *(ulong *)(param_2 + 0x20)) &&
        (lVar4 = *(long *)(*(long *)(param_2 + 0x28) + uVar3 * 8), lVar4 != 0)) ||
       (lVar4 = *(long *)(*(long *)(param_2 + 0x28) + *(ulong *)(param_2 + 0x20) * 8), lVar4 != 0))
    {
      forAllSlotsAux_yZE4CUR3NNCoSMnkWbtJrQ(param_1,lVar4,(ulong)param_3);
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA
                (param_1 + *(long *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),(ulong)param_3);
      return;
    }
  }
  return;
}



void forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(long param_1,byte param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00405625. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(lVar3 + 0x28))(param_1 + 0x10,(ulong)param_2);
    return;
  }
  cVar1 = *(char *)(lVar3 + 8);
  if (cVar1 == '\x18') {
    if (param_1 != -0x10) {
      lVar2 = *(long *)(param_1 + 0x10);
      if (0 < lVar2) {
        lVar5 = 0;
        while( true ) {
          lVar4 = **(long **)(lVar3 + 0x10) * lVar5;
          lVar5 = lVar5 + 1;
          forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA
                    (lVar4 + param_1 + 0x20,*(long **)(lVar3 + 0x10),(ulong)param_2);
          if (lVar2 == lVar5) break;
          lVar3 = *(long *)(param_1 + 8);
        }
      }
      return;
    }
  }
  else {
    if ((cVar1 == '-') || (cVar1 == '\x16')) {
      forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA
                (param_1 + 0x10,*(undefined8 *)(lVar3 + 0x10),(ulong)param_2);
      return;
    }
  }
  return;
}



void markS_NZr5o3Ubzrci4OmK29cHBJA(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  incl_m4q9b16kJJcoKe9c4ERtlpCg(param_1 + 0x3388);
  forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(param_2,1);
  lVar8 = *(long *)(param_1 + 0x40);
  do {
    if (lVar8 < 1) {
      return;
    }
    lVar8 = lVar8 + -1;
    uVar1 = *(ulong *)(param_1 + 0x3390);
    *(long *)(param_1 + 0x40) = lVar8;
    lVar2 = *(long *)(param_1 + 0x33a0);
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x50) + lVar8 * 8);
    uVar6 = uVar9 >> 0xc;
    uVar3 = uVar1 & uVar6;
    lVar7 = *(long *)(lVar2 + uVar3 * 8);
    while (lVar7 != 0) {
      while (*(ulong *)(lVar7 + 8) == uVar6) {
        uVar5 = (uint)(uVar9 >> 3) & 0x1ff;
        uVar3 = 1 << ((byte)uVar5 & 0x3f);
        lVar4 = (ulong)(uVar5 >> 6) + 2;
        uVar6 = *(ulong *)(lVar7 + lVar4 * 8);
        if ((uVar6 & uVar3) == 0) {
          *(ulong *)(lVar7 + lVar4 * 8) = uVar6 | uVar3;
          goto LAB_0040578c;
        }
        if (lVar8 == 0) {
          return;
        }
        lVar8 = lVar8 + -1;
        *(long *)(param_1 + 0x40) = lVar8;
        uVar9 = *(ulong *)(*(long *)(param_1 + 0x50) + lVar8 * 8);
        uVar6 = uVar9 >> 0xc;
        uVar3 = uVar6 & uVar1;
        lVar7 = *(long *)(lVar2 + uVar3 * 8);
        if (lVar7 == 0) goto LAB_004057e8;
      }
      uVar3 = uVar3 * 5 + 1 & uVar1;
      lVar7 = *(long *)(lVar2 + uVar3 * 8);
    }
LAB_004057e8:
    incl_m4q9b16kJJcoKe9c4ERtlpCg(param_1 + 0x3388,uVar9);
LAB_0040578c:
    forAllChildren_yHFnLgI7q81iFxRlb3Iqlw(uVar9,1);
    lVar8 = *(long *)(param_1 + 0x40);
  } while( true );
}



void TM_Q5wkpxktOdTGvlSRo9bzt9aw_17(void)

{
  if (currException_9bVPeDJlYTi9bQApZpfH8wjg != 0) {
    markS_NZr5o3Ubzrci4OmK29cHBJA
              (gch_IcYaEuuWivYAS86vFMTS3Q,currException_9bVPeDJlYTi9bQApZpfH8wjg + -0x10);
    return;
  }
  return;
}



void Marker_tyRef_LEclZrWX2FQAodlapxGITw(long param_1,byte param_2)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
LAB_00405874:
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),(ulong)param_2);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_004058b0;
    puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
    if (param_2 != 1) {
      if (param_2 == 0) goto LAB_00405ae9;
      if (param_2 == 2) goto LAB_004059fe;
      if (param_2 != 3) goto LAB_004058b0;
    }
  }
  else {
    lVar1 = lVar3 + -0x10;
    if (param_2 == 1) {
      if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
               gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
      }
      uVar4 = 1;
      *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
           lVar1;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      if (param_2 == 0) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,lVar1);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),0);
        puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_004058b0;
LAB_00405ae9:
        markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,puVar6);
        goto LAB_004058b0;
      }
      if (param_2 == 2) {
        uVar2 = *(long *)(lVar3 + -0x10) - 8;
        *(ulong *)(lVar3 + -0x10) = uVar2;
        if (uVar2 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
        }
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),2);
        puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_004058b0;
LAB_004059fe:
        uVar2 = *puVar6;
        *puVar6 = uVar2 - 8;
        if (uVar2 - 8 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,puVar6);
        }
        goto LAB_004058b0;
      }
      if (param_2 != 3) goto LAB_00405874;
      if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
               gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
      }
      *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
           lVar1;
      uVar4 = 3;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(uVar5,uVar4);
    puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_004058b0;
  }
  if (gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ < gch_IcYaEuuWivYAS86vFMTS3Q._72_8_) {
    *(ulong **)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
         puVar6;
    gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
  }
  else {
    gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
    lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
    __dest = (void *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 8) = 1;
    memcpy(__dest,gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
    gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = __dest;
    *(ulong **)((long)__dest + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) = puVar6;
    gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
  }
LAB_004058b0:
  doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x30),(ulong)param_2);
  return;
}



void Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ(long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  
  doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 8),(ulong)param_2);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
LAB_00405d58:
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00405d84;
    puVar4 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
    if (param_2 != 1) {
      if (param_2 == 0) goto LAB_00405e0e;
      if (param_2 == 2) goto LAB_00405dcc;
      if (param_2 != 3) goto LAB_00405d84;
    }
  }
  else {
    lVar1 = lVar3 + -0x10;
    if (param_2 == 1) {
      if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
               gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
      }
      *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
           lVar1;
    }
    else {
      if (param_2 == 0) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,lVar1);
        puVar4 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_00405d84;
LAB_00405e0e:
        markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,puVar4);
        goto LAB_00405d84;
      }
      if (param_2 == 2) {
        uVar2 = *(long *)(lVar3 + -0x10) - 8;
        *(ulong *)(lVar3 + -0x10) = uVar2;
        if (uVar2 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
        }
        puVar4 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_00405d84;
LAB_00405dcc:
        uVar2 = *puVar4;
        *puVar4 = uVar2 - 8;
        if (uVar2 - 8 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,puVar4);
        }
        goto LAB_00405d84;
      }
      if (param_2 != 3) goto LAB_00405d58;
      if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
               gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
      }
      *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
           lVar1;
    }
    gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
    puVar4 = (ulong *)(*(long *)(param_1 + 0x20) + -0x10);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00405d84;
  }
  if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
    gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
    lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
    *(undefined8 *)(lVar3 + 8) = 1;
    memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
           gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
    gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
  }
  *(ulong **)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
       puVar4;
  gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
LAB_00405d84:
  doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x30),(ulong)param_2);
  return;
}



void Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw(long param_1,byte param_2)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
LAB_00405f14:
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),(ulong)param_2);
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x20),(ulong)param_2);
    if (*(long *)(param_1 + 0x30) == 0) {
      return;
    }
    puVar4 = (ulong *)(*(long *)(param_1 + 0x30) + -0x10);
    if (param_2 == 1) goto LAB_0040603a;
    if (param_2 == 0) {
LAB_004061b4:
      markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,puVar4);
      return;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return;
      }
      goto LAB_0040603a;
    }
LAB_004060bc:
    uVar2 = *puVar4;
    *puVar4 = uVar2 - 8;
    if (uVar2 - 8 < 8) {
      addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,puVar4);
      return;
    }
  }
  else {
    lVar1 = lVar3 + -0x10;
    if (param_2 == 1) {
      if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
               gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
      }
      *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
           lVar1;
      gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
      doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),1);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = 1;
    }
    else {
      if (param_2 == 0) {
        markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,lVar1);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),0);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x20),0);
        puVar4 = (ulong *)(*(long *)(param_1 + 0x30) + -0x10);
        if (*(long *)(param_1 + 0x30) == 0) {
          return;
        }
        goto LAB_004061b4;
      }
      if (param_2 == 2) {
        uVar2 = *(long *)(lVar3 + -0x10) - 8;
        *(ulong *)(lVar3 + -0x10) = uVar2;
        if (uVar2 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
        }
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),2);
        doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x20),2);
        puVar4 = (ulong *)(*(long *)(param_1 + 0x30) + -0x10);
        if (*(long *)(param_1 + 0x30) == 0) {
          return;
        }
        goto LAB_004060bc;
      }
      if (param_2 != 3) goto LAB_00405f14;
      if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy((void *)(lVar3 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
               gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar3 + 0x10);
      }
      *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
           lVar1;
      gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
      doOperation_3F8QeaTyYrJJF2gjBr6b8A(*(undefined8 *)(param_1 + 0x18),3);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = 3;
    }
    doOperation_3F8QeaTyYrJJF2gjBr6b8A(uVar6,uVar5);
    puVar4 = (ulong *)(*(long *)(param_1 + 0x30) + -0x10);
    if (*(long *)(param_1 + 0x30) != 0) {
LAB_0040603a:
      if (gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ < gch_IcYaEuuWivYAS86vFMTS3Q._72_8_) {
        *(ulong **)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8)
             = puVar4;
      }
      else {
        gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
        lVar3 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                          (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
        __dest = (void *)(lVar3 + 0x10);
        *(undefined8 *)(lVar3 + 8) = 1;
        memcpy(__dest,gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
        rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
        gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = __dest;
        *(ulong **)((long)__dest + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) = puVar4;
      }
      gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
      return;
    }
  }
  return;
}



void nimGCvisit(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + -0x10;
  if (param_2 != '\x01') {
    if (param_2 == '\0') {
      markS_NZr5o3Ubzrci4OmK29cHBJA(gch_IcYaEuuWivYAS86vFMTS3Q,lVar1);
      return;
    }
    if (param_2 == '\x02') {
      uVar3 = *(long *)(param_1 + -0x10) - 8;
      *(ulong *)(param_1 + -0x10) = uVar3;
      if (uVar3 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar1);
        return;
      }
    }
    else {
      if (param_2 == '\x03') {
        if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
          gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
          lVar2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg
                            (0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
          *(undefined8 *)(lVar2 + 8) = 1;
          memcpy((void *)(lVar2 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
                 gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
          rawDealloc_DA62HrGC5sdfCED505KyyQ
                    (0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
          gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar2 + 0x10);
        }
        *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) =
             lVar1;
        gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
      }
    }
    return;
  }
  if (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._64_8_) {
    gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ = (gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 3) / 2;
    lVar2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,gch_IcYaEuuWivYAS86vFMTS3Q._72_8_ * 8 + 0x10);
    *(undefined8 *)(lVar2 + 8) = 1;
    memcpy((void *)(lVar2 + 0x10),gch_IcYaEuuWivYAS86vFMTS3Q._80_8_,
           gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8);
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,(long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + -0x10);
    gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ = (void *)(lVar2 + 0x10);
  }
  *(long *)((long)gch_IcYaEuuWivYAS86vFMTS3Q._80_8_ + gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ * 8) = lVar1
  ;
  gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._64_8_ + 1;
  return;
}



long nimRegisterThreadLocalMarker(long *param_1)

{
  long lVar1;
  undefined8 uStack16;
  long lStack8;
  
  if (threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw < 0xdac) {
    *(long **)(threadLocalMarkers_pC47Nqd8F629cuTchphM5YA +
              threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw * 8) = param_1;
    threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw + 1;
    return threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
  }
  lStack8 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
  uStack16 = 0x406489;
  nimRegisterThreadLocalMarker_part_14();
  lVar1 = 0;
  if ((undefined *)register0x00000020 != (undefined *)0x10) {
    lVar1 = *param_1 - (long)&uStack16;
  }
  return lVar1;
}



long stackSize_61foY5fGmU9c2fC9c6wRIsrA(long *param_1)

{
  long lVar1;
  undefined local_8 [8];
  
  lVar1 = 0;
  if (local_8 != (undefined *)0x0) {
    lVar1 = *param_1 - (long)local_8;
  }
  return lVar1;
}



void stackSize_IV9bgfYkinlae0WZ2NZi5JA(void)

{
  stackSize_61foY5fGmU9c2fC9c6wRIsrA(gch_IcYaEuuWivYAS86vFMTS3Q);
  return;
}



long * lowGauge_3mwQtFaBTgevFrybZdgUNw(long **param_1)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  
  pplVar2 = (long **)*param_1;
  if (param_1 != (long **)*param_1) {
    do {
      pplVar3 = pplVar2;
      pplVar1 = param_1 + 2;
      pplVar2 = (long **)*pplVar3;
      param_1 = pplVar3;
    } while ((long **)*pplVar3 != pplVar3);
    return *pplVar1;
  }
  return (long *)0;
}



long * highGauge_3mwQtFaBTgevFrybZdgUNw_2(long **param_1)

{
  long **pplVar1;
  
  if (param_1 != (long **)*param_1) {
    do {
      pplVar1 = param_1 + 3;
      param_1 = (long **)param_1[1];
    } while ((long **)*param_1 != param_1);
    return *pplVar1;
  }
  return (long *)0xffffffffffffffff;
}



void setPosition_kuKlONPws1O0vpPB9adzcQw(void)

{
  return;
}



undefined8 isActiveStack_deIRQymTVHcVwfHBKDbqEA(void)

{
  return 1;
}



long ** inRange_Bc4Ua6HOMCIDGx9b15HSY4g(long **param_1,long *param_2)

{
  if (param_1 != (long **)*param_1) {
    do {
      if ((param_1[2] <= param_2) && (param_2 <= param_1[3] && param_1[3] != param_2)) {
        return param_1;
      }
      param_1 = (long **)param_1[param_1[2] < param_2];
    } while ((long **)*param_1 != param_1);
  }
  return (long **)0;
}



byte * interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(byte **param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte **ppbVar4;
  ulong uVar5;
  ulong uVar6;
  
  ppbVar4 = (byte **)param_1[((ulong)(byte *)((ulong)param_2 >> 0x15) & 0xff) + 0x515];
  do {
    if (ppbVar4 == (byte **)0x0) {
LAB_00406620:
      if (((*param_1 <= param_2) && (param_2 < param_1[1] || param_2 == param_1[1])) &&
         (ppbVar4 = (byte **)param_1[0x615], (byte **)*ppbVar4 != ppbVar4)) {
        while ((pbVar2 = ppbVar4[2], param_2 < pbVar2 || (ppbVar4[3] <= param_2))) {
          ppbVar4 = (byte **)ppbVar4[pbVar2 < param_2];
          if ((byte **)*ppbVar4 == ppbVar4) {
            return (byte *)0;
          }
        }
        if (*(ulong *)(pbVar2 + 8) < 2) {
          pbVar2 = (byte *)0x0;
        }
        return pbVar2;
      }
      return (byte *)0;
    }
    if ((byte *)((ulong)param_2 >> 0x15) == ppbVar4[1]) {
      uVar3 = (uint)((ulong)param_2 >> 0xc) & 0x1ff;
      if (((ulong)ppbVar4[(ulong)(uVar3 >> 6) + 2] & 1 << ((byte)uVar3 & 0x3f)) != 0) {
        pbVar2 = (byte *)((ulong)param_2 & 0xfffffffffffff000);
        if ((*pbVar2 & 1) == 0) {
          return (byte *)0;
        }
        if ((long)*(ulong *)(pbVar2 + 8) < 0xfc9) {
          uVar5 = (ulong)((uint)param_2 & 0xfff);
          uVar6 = uVar5 - 0x38;
          if (*(ulong *)(pbVar2 + 0x30) <= uVar6) {
            return (byte *)0;
          }
          pbVar2 = pbVar2 + (uVar5 - uVar6 % *(ulong *)(pbVar2 + 8));
          if (*(ulong *)(pbVar2 + 8) < 2) {
            pbVar2 = (byte *)0x0;
          }
          return pbVar2;
        }
        pbVar1 = pbVar2 + 0x20;
        if (param_2 < pbVar1) {
          return (byte *)0;
        }
        if (*(ulong *)(pbVar2 + 0x28) < 2) {
          pbVar1 = (byte *)0x0;
        }
        return pbVar1;
      }
      goto LAB_00406620;
    }
    ppbVar4 = (byte **)*ppbVar4;
  } while( true );
}



void markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(long **param_1)

{
  long **pplVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *__dest;
  undefined local_108 [200];
  long local_40 [2];
  
  iVar3 = _setjmp((__jmp_buf_tag *)local_108);
  if (iVar3 == 0) {
    plVar7 = (long *)local_108;
    plVar2 = *param_1;
    while (plVar7 < local_40) {
      if ((0x1000 < *plVar7 - 0x10U) &&
         (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(param_1 + 0xc),
         plVar4 != (long *)0x0)) {
        *plVar4 = *plVar4 + 8;
        plVar5 = param_1[5];
        if ((long)plVar5 < (long)param_1[6]) {
          __dest = param_1[7];
        }
        else {
          plVar5 = (long *)(((long)param_1[6] * 3) / 2);
          param_1[6] = plVar5;
          lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
          __dest = (long *)(lVar6 + 0x10);
          *(undefined8 *)(lVar6 + 8) = 1;
          memcpy(__dest,param_1[7],(long)param_1[5] * 8);
          rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
          param_1[7] = __dest;
          plVar5 = param_1[5];
        }
        *(long **)(__dest + (long)plVar5) = plVar4;
        param_1[5] = (long *)((long)param_1[5] + 1);
      }
      if ((0x1000 < *(long *)((long)plVar7 + 4) - 0x10U) &&
         (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(param_1 + 0xc),
         plVar4 != (long *)0x0)) {
        *plVar4 = *plVar4 + 8;
        plVar5 = param_1[5];
        if ((long)plVar5 < (long)param_1[6]) {
          __dest = param_1[7];
        }
        else {
          plVar5 = (long *)(((long)param_1[6] * 3) / 2);
          param_1[6] = plVar5;
          lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
          __dest = (long *)(lVar6 + 0x10);
          *(undefined8 *)(lVar6 + 8) = 1;
          memcpy(__dest,param_1[7],(long)param_1[5] * 8);
          rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
          param_1[7] = __dest;
          plVar5 = param_1[5];
        }
        *(long **)(__dest + (long)plVar5) = plVar4;
        param_1[5] = (long *)((long)param_1[5] + 1);
      }
      plVar7 = plVar7 + 1;
    }
    if (plVar7 < plVar2 + -8) {
      pplVar1 = param_1 + 0xc;
      do {
        if ((0x1000 < *plVar7 - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] << 3);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[1] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] << 3);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[2] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] * 8);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[3] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] * 8);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[4] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] << 3);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[5] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] * 8);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[6] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] * 8);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        if ((0x1000 < plVar7[7] - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(pplVar1),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            __dest = (long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            memcpy(__dest,param_1[7],(long)param_1[5] << 3);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        plVar7 = plVar7 + 8;
      } while (plVar7 < plVar2 + -8);
    }
    if (plVar7 <= plVar2) {
      do {
        if ((0x1000 < *plVar7 - 0x10U) &&
           (plVar4 = (long *)interiorAllocatedPtr_N7XNyRgfMLnCjS9bVeVc3bA(param_1 + 0xc),
           plVar4 != (long *)0x0)) {
          *plVar4 = *plVar4 + 8;
          plVar5 = param_1[5];
          if ((long)plVar5 < (long)param_1[6]) {
            __dest = param_1[7];
          }
          else {
            plVar5 = (long *)(((long)param_1[6] * 3) / 2);
            param_1[6] = plVar5;
            lVar6 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,(long)plVar5 * 8 + 0x10);
            *(undefined8 *)(lVar6 + 8) = 1;
            __dest = (long *)(lVar6 + 0x10);
            memcpy(__dest,param_1[7],(long)param_1[5] * 8);
            rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[7] + -2);
            param_1[7] = __dest;
            plVar5 = param_1[5];
          }
          *(long **)(__dest + (long)plVar5) = plVar4;
          param_1[5] = (long *)((long)param_1[5] + 1);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 <= plVar2);
    }
  }
  return;
}



void prepareDealloc_0Ao1u9cpV0dTuUB5G9cEQ8eQ(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + 0x20) != 0) {
    gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + 1;
    (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1 + 0x10);
    gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + -1;
    return;
  }
  return;
}



undefined8 collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(long param_1)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  do {
    if (*(long *)(param_1 + 0x10) < 1) {
      return 1;
    }
    while( true ) {
      puVar2 = **(ulong ***)(param_1 + 0x20);
      *puVar2 = *puVar2 & 0xfffffffffffffffb;
      **(undefined8 **)(param_1 + 0x20) =
           (*(undefined8 **)(param_1 + 0x20))[*(long *)(param_1 + 0x10) + -1];
      lVar4 = *(long *)(param_1 + 0x10) + -1;
      *(long *)(param_1 + 0x10) = lVar4;
      if (*puVar2 < 8) break;
      if (lVar4 < 1) {
        return 1;
      }
    }
    uVar5 = puVar2[1];
    if (*(long *)(uVar5 + 0x20) != 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + 1;
      (**(code **)(uVar5 + 0x20))(puVar2 + 2);
      gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + -1;
      uVar5 = puVar2[1];
    }
    if (*(code **)(uVar5 + 0x28) == (code *)0x0) {
      cVar1 = *(char *)(uVar5 + 8);
      if (cVar1 == '\x18') {
        if ((puVar2 != (ulong *)0xfffffffffffffff0) && (uVar3 = puVar2[2], 0 < (long)uVar3)) {
          uVar6 = 0;
          while( true ) {
            lVar4 = **(long **)(uVar5 + 0x10) * uVar6;
            uVar6 = uVar6 + 1;
            forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA
                      ((long)puVar2 + lVar4 + 0x20,*(long **)(uVar5 + 0x10),2);
            if (uVar3 == uVar6) break;
            uVar5 = puVar2[1];
          }
        }
      }
      else {
        if ((cVar1 == '-') || (cVar1 == '\x16')) {
          forAllChildrenAux_7ozEvYoq4I7fwvXfiSWM9aA(puVar2 + 2,*(undefined8 *)(uVar5 + 0x10),2);
        }
      }
    }
    else {
      (**(code **)(uVar5 + 0x28))(puVar2 + 2,2);
    }
    rawDealloc_DA62HrGC5sdfCED505KyyQ(param_1 + 0x60,puVar2);
  } while( true );
}



void deinit_WHgd5C59bkXWDz3vnAxfzXQ_3(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,puVar2 + -2);
    puVar2 = puVar1;
  }
  param_1[2] = 0;
  rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[3] + -0x10);
  param_1[3] = 0;
  *param_1 = 0;
  return;
}



void cellsetReset_WHgd5C59bkXWDz3vnAxfzXQ_2(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  puVar4 = (undefined8 *)param_1[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar4;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,puVar4 + -2);
    puVar4 = puVar1;
  }
  param_1[2] = 0;
  rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,param_1[3] + -0x10);
  param_1[3] = 0;
  *param_1 = 0;
  lVar2 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar2 + 0x20,lVar2 + 0x2050);
  puVar4 = (undefined8 *)(lVar2 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar2 + 8)
  ;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x2028) = 0;
  uVar3 = (ulong)(((int)(lVar2 + 0x30) - (int)puVar4) + 0x2000U >> 3);
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
  }
  param_1[3] = lVar2 + 0x30;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  return;
}



void markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar3 = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA;
  if ((*(long *)(param_1 + 0x33c0) == 0) && (0 < globalMarkersLen_hgEFy3UCOBoalBh29asu5MA)) {
    lVar4 = 0;
    do {
      (**(code **)(globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ + lVar4 * 8))();
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  lVar3 = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw;
  lVar4 = 0;
  if (0 < threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw) {
    do {
      (**(code **)(threadLocalMarkers_pC47Nqd8F629cuTchphM5YA + lVar4 * 8))();
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x33b8);
  puVar1 = puVar5 + *(long *)(param_1 + 0x33a8);
  if (0 < *(long *)(param_1 + 0x33a8)) {
    do {
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      markS_NZr5o3Ubzrci4OmK29cHBJA(param_1,uVar2);
    } while (puVar1 != puVar5);
  }
  return;
}



ulong contains_9c4TZ2Zl3sU4TUeK9bR8E9ciw(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_2 >> 0xc & *(ulong *)(param_1 + 8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (param_2 >> 0xc == *(ulong *)(lVar1 + 8)) break;
    uVar2 = uVar2 * 5 + 1 & *(ulong *)(param_1 + 8);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
  }
  uVar3 = (uint)(param_2 >> 3) & 0x1ff;
  uVar2 = 1 << ((byte)uVar3 & 0x3f);
  return uVar2 & 0xffffffffffffff00 |
         (ulong)((*(ulong *)(lVar1 + 0x10 + (ulong)(uVar3 >> 6) * 8) & uVar2) != 0);
}



void freeCyclicCell_NZr5o3Ubzrci4OmK29cHBJA_2(long param_1,long param_2)

{
  if (*(long *)(*(long *)(param_2 + 8) + 0x20) != 0) {
    gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + 1;
    (**(code **)(*(long *)(param_2 + 8) + 0x20))(param_2 + 0x10);
    gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + -1;
  }
  rawDealloc_DA62HrGC5sdfCED505KyyQ(param_1 + 0x60,param_2);
  return;
}



void sweep_zoTIuavlrCHyw3B8MBaLJA_5(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *local_840;
  undefined8 local_838 [256];
  undefined8 local_38;
  
  lVar4 = 0x100;
  *(undefined *)(param_1 + 0x3128) = 1;
  local_840 = local_838;
  puVar7 = (undefined8 *)(param_1 + 0x2908);
  puVar9 = local_838;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  do {
    puVar7 = (undefined8 *)*local_840;
    while (puVar7 != (undefined8 *)0x0) {
      lVar4 = 0;
      do {
        uVar5 = puVar7[lVar4 + 2];
        uVar6 = lVar4 << 6;
        while (uVar5 != 0) {
          while( true ) {
            if ((uVar5 & 1) == 0) goto LAB_004075e0;
            uVar8 = puVar7[1] << 9 | uVar6;
            puVar9 = *(undefined8 **)(param_1 + 0x2908 + (uVar8 >> 9 & 0xff) * 8);
            while( true ) {
              if (puVar9 == (undefined8 *)0x0) goto LAB_004075e0;
              if (uVar8 >> 9 == puVar9[1]) break;
              puVar9 = (undefined8 *)*puVar9;
            }
            uVar3 = (uint)uVar8 & 0x1ff;
            if (((puVar9[(ulong)(uVar3 >> 6) + 2] & 1 << ((byte)uVar3 & 0x3f)) == 0) ||
               (pbVar11 = (byte *)(uVar8 * 0x1000), (*pbVar11 & 1) == 0)) goto LAB_004075e0;
            lVar1 = *(long *)(pbVar11 + 8);
            if (lVar1 < 0xfc9) break;
            if (*(ulong *)(pbVar11 + 0x28) < 2) goto LAB_004075e0;
            uVar10 = (ulong)(pbVar11 + 0x20) >> 0xc;
            uVar8 = uVar10 & *(ulong *)(param_1 + 0x3390);
            lVar1 = *(long *)(*(long *)(param_1 + 0x33a0) + uVar8 * 8);
            while (lVar1 != 0) {
              if (uVar10 == *(ulong *)(lVar1 + 8)) {
                if ((*(byte *)(lVar1 + 0x10) & 0x10) != 0) goto LAB_004075e0;
                break;
              }
              uVar8 = uVar8 * 5 + 1 & *(ulong *)(param_1 + 0x3390);
              lVar1 = *(long *)(*(long *)(param_1 + 0x33a0) + uVar8 * 8);
            }
            if (*(long *)(*(long *)(pbVar11 + 0x28) + 0x20) != 0) {
              gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + 1;
              (**(code **)(*(long *)(pbVar11 + 0x28) + 0x20))(pbVar11 + 0x30);
              gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + -1;
            }
            uVar6 = uVar6 + 1;
            rawDealloc_DA62HrGC5sdfCED505KyyQ(param_1 + 0x60,pbVar11 + 0x20);
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) goto LAB_00407705;
          }
          pbVar12 = pbVar11 + 0x38;
          pbVar11 = pbVar12 + *(long *)(pbVar11 + 0x30);
          while (pbVar12 < pbVar11) {
            if (1 < *(ulong *)(pbVar12 + 8)) {
              uVar8 = (ulong)pbVar12 >> 0xc & *(ulong *)(param_1 + 0x3390);
              lVar2 = *(long *)(*(long *)(param_1 + 0x33a0) + uVar8 * 8);
              while (lVar2 != 0) {
                if ((ulong)pbVar12 >> 0xc == *(ulong *)(lVar2 + 8)) {
                  uVar3 = (uint)((ulong)pbVar12 >> 3) & 0x1ff;
                  if ((*(ulong *)(lVar2 + 0x10 + (ulong)(uVar3 >> 6) * 8) &
                      1 << ((byte)uVar3 & 0x3f)) != 0) goto LAB_004077ea;
                  break;
                }
                uVar8 = uVar8 * 5 + 1 & *(ulong *)(param_1 + 0x3390);
                lVar2 = *(long *)(*(long *)(param_1 + 0x33a0) + uVar8 * 8);
              }
              if (*(long *)(*(long *)(pbVar12 + 8) + 0x20) != 0) {
                gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + 1;
                (**(code **)(*(long *)(pbVar12 + 8) + 0x20))(pbVar12 + 0x10);
                gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ + -1;
              }
              rawDealloc_DA62HrGC5sdfCED505KyyQ(param_1 + 0x60,pbVar12);
            }
LAB_004077ea:
            pbVar12 = pbVar12 + lVar1;
          }
LAB_004075e0:
          uVar6 = uVar6 + 1;
          uVar5 = uVar5 >> 1;
        }
LAB_00407705:
        lVar4 = lVar4 + 1;
      } while (lVar4 != 8);
      puVar7 = (undefined8 *)*puVar7;
    }
    local_840 = local_840 + 1;
    if (&local_38 == local_840) {
      *(undefined *)(param_1 + 0x3128) = 0;
      return;
    }
  } while( true );
}



void collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  while (0 < lVar2) {
    collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(param_1);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x3398);
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,puVar5 + -2);
    puVar5 = puVar4;
  }
  *(undefined8 *)(param_1 + 0x3398) = 0;
  rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,*(long *)(param_1 + 0x33a0) + -0x10);
  *(undefined8 *)(param_1 + 0x33a0) = 0;
  *(undefined8 *)(param_1 + 0x3388) = 0;
  lVar2 = getBigChunk_z9bCNjXTYllZ3pI24nEsw2g(0x60f060,0x2030);
  if (gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ == 0) {
    if (CONCAT44(gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_,gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_) == 0) {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_ = 0x612138;
      gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_ = 0;
      gch_IcYaEuuWivYAS86vFMTS3Q._12608_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12600_4_;
      gch_IcYaEuuWivYAS86vFMTS3Q._12612_4_ = gch_IcYaEuuWivYAS86vFMTS3Q._12604_4_;
    }
    else {
      gch_IcYaEuuWivYAS86vFMTS3Q._12552_8_ = 0x612138;
    }
  }
  add_Xuf47u3imOz8BOk5HURLWQ(0x60f060,0x612108,lVar2 + 0x20,lVar2 + 0x2050);
  puVar5 = (undefined8 *)(lVar2 + 0x38U & 0xfffffffffffffff8);
  gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_ + *(long *)(lVar2 + 8)
  ;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x2028) = 0;
  uVar3 = (ulong)(((int)(lVar2 + 0x30) - (int)puVar5) + 0x2000U >> 3);
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *(long *)(param_1 + 0x33a0) = lVar2 + 0x30;
  *(undefined4 *)(param_1 + 0x3388) = 0;
  *(undefined4 *)(param_1 + 0x338c) = 0;
  *(undefined4 *)(param_1 + 0x3390) = 0;
  *(undefined4 *)(param_1 + 0x3394) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x3398) = 0;
  puVar5 = puVar4 + *(long *)(param_1 + 0x28);
  if (0 < *(long *)(param_1 + 0x28)) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      markS_NZr5o3Ubzrci4OmK29cHBJA(param_1,uVar1);
    } while (puVar5 != puVar4);
  }
  markGlobals_zoTIuavlrCHyw3B8MBaLJA_4(param_1);
  sweep_zoTIuavlrCHyw3B8MBaLJA_5(param_1);
  return;
}



undefined8 getOccupiedMem_9bFvoxSITMVCg7RY8KIar1Q(void)

{
  return gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_;
}



void unmarkStackAndRegisters_zoTIuavlrCHyw3B8MBaLJA_6(long param_1)

{
  ulong **ppuVar1;
  ulong uVar2;
  ulong **ppuVar3;
  
  ppuVar3 = *(ulong ***)(param_1 + 0x38);
  ppuVar1 = ppuVar3 + *(long *)(param_1 + 0x28);
  if (0 < *(long *)(param_1 + 0x28)) {
    do {
      uVar2 = **ppuVar3 - 8;
      **ppuVar3 = uVar2;
      if (uVar2 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010);
      }
      ppuVar3 = ppuVar3 + 1;
    } while (ppuVar1 != ppuVar3);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



void collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(long param_1)

{
  ulong **ppuVar1;
  char cVar2;
  long lVar3;
  long **pplVar4;
  ulong uVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  ulong **ppuVar9;
  bool bVar10;
  
  lVar3 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
  if (lVar3 <= *(long *)(param_1 + 0x3368)) {
    lVar3 = *(long *)(param_1 + 0x3368);
  }
  *(long *)(param_1 + 0x3368) = lVar3;
  pplVar4 = *(long ***)(param_1 + 0x3108);
  pplVar6 = pplVar4;
  pplVar7 = (long **)*pplVar4;
  if (pplVar4 == (long **)*pplVar4) {
    plVar8 = (long *)0x0;
  }
  else {
    do {
      plVar8 = pplVar6[2];
      bVar10 = (long **)*pplVar7 != pplVar7;
      pplVar6 = pplVar7;
      pplVar7 = (long **)*pplVar7;
    } while (bVar10);
  }
  *(long **)(param_1 + 0x60) = plVar8;
  plVar8 = (long *)0xffffffffffffffff;
  if (pplVar4 != (long **)*pplVar4) {
    do {
      plVar8 = pplVar4[3];
      pplVar4 = (long **)pplVar4[1];
    } while ((long **)*pplVar4 != pplVar4);
  }
  *(long **)(param_1 + 0x68) = plVar8;
  markStackAndRegisters_LdwvBL9bC9c0lik7K9bau9bX0Q(param_1);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 <= *(long *)(param_1 + 0x3370)) {
    lVar3 = *(long *)(param_1 + 0x3370);
  }
  *(long *)(param_1 + 0x3350) = *(long *)(param_1 + 0x3350) + 1;
  *(long *)(param_1 + 0x3370) = lVar3;
  cVar2 = collectZCT_evVbQ9bNF7LYMhoG9aWXu9bKw(param_1);
  if ((cVar2 != '\0') &&
     (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x28f8) ||
      *(long *)(param_1 + 8) < *(long *)(param_1 + 0x28f8))) {
    collectCycles_zoTIuavlrCHyw3B8MBaLJA_3(param_1);
    lVar3 = gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_;
    *(long *)(param_1 + 0x3358) = *(long *)(param_1 + 0x3358) + 1;
    lVar3 = lVar3 * 2;
    if (lVar3 < 0x400000) {
      lVar3 = 0x400000;
    }
    *(long *)(param_1 + 8) = lVar3;
    if (lVar3 <= *(long *)(param_1 + 0x3360)) {
      lVar3 = *(long *)(param_1 + 0x3360);
    }
    *(long *)(param_1 + 0x3360) = lVar3;
  }
  ppuVar9 = *(ulong ***)(param_1 + 0x38);
  ppuVar1 = ppuVar9 + *(long *)(param_1 + 0x28);
  if (0 < *(long *)(param_1 + 0x28)) {
    do {
      uVar5 = **ppuVar9 - 8;
      **ppuVar9 = uVar5;
      if (uVar5 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010);
      }
      ppuVar9 = ppuVar9 + 1;
    } while (ppuVar1 != ppuVar9);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



void collectCT_zoTIuavlrCHyw3B8MBaLJA(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
  lVar2 = lVar1 >> 7;
  if (lVar1 < 64000) {
    lVar2 = 500;
  }
  if (((lVar2 <= *(long *)(param_1 + 0x10)) ||
      (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x28f8) ||
       *(long *)(param_1 + 8) < *(long *)(param_1 + 0x28f8))) && (*(long *)(param_1 + 0x58) == 0)) {
    collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(param_1);
    return;
  }
  return;
}



ulong * rawNewObj_BpNS5yt3b9cMOponsUKh8aw(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  
  lVar2 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
  lVar5 = lVar2 >> 7;
  if (lVar2 < 64000) {
    lVar5 = 500;
  }
  if (((lVar5 <= *(long *)(param_3 + 0x10)) ||
      (*(long *)(param_3 + 8) <= *(long *)(param_3 + 0x28f8))) && (*(long *)(param_3 + 0x58) == 0))
  {
    collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(param_3);
  }
  puVar3 = (ulong *)rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(param_3 + 0x60,param_2 + 0x10);
  puVar3[1] = param_1;
  *puVar3 = 4;
  lVar2 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x20);
  if (lVar2 < 9) {
    *(ulong **)(lVar5 + lVar2 * 8) = puVar3;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
    return puVar3 + 2;
  }
  lVar1 = lVar2 * 8 + -8;
  ppuVar6 = (ulong **)(lVar5 + lVar1);
  puVar7 = *ppuVar6;
  uVar4 = *puVar7;
  if (uVar4 < 8) {
    ppuVar6 = (ulong **)(lVar5 + -8 + lVar1);
    puVar7 = *ppuVar6;
    uVar4 = *puVar7;
    if (uVar4 < 8) {
      ppuVar6 = (ulong **)(lVar5 + -0x10 + lVar1);
      puVar7 = *ppuVar6;
      uVar4 = *puVar7;
      if (uVar4 < 8) {
        ppuVar6 = (ulong **)(lVar5 + -0x18 + lVar1);
        puVar7 = *ppuVar6;
        uVar4 = *puVar7;
        if (uVar4 < 8) {
          ppuVar6 = (ulong **)(lVar5 + -0x20 + lVar1);
          puVar7 = *ppuVar6;
          uVar4 = *puVar7;
          if (uVar4 < 8) {
            ppuVar6 = (ulong **)(lVar5 + -0x28 + lVar1);
            puVar7 = *ppuVar6;
            uVar4 = *puVar7;
            if (uVar4 < 8) {
              ppuVar6 = (ulong **)(lVar5 + -0x30 + lVar1);
              puVar7 = *ppuVar6;
              uVar4 = *puVar7;
              if (uVar4 < 8) {
                ppuVar6 = (ulong **)(lVar5 + -0x38 + lVar1);
                puVar7 = *ppuVar6;
                uVar4 = *puVar7;
                if (uVar4 < 8) {
                  if (*(long *)(param_3 + 0x18) <= lVar2) {
                    lVar2 = *(long *)(param_3 + 0x18) * 3;
                    lVar5 = lVar2 / 2;
                    *(long *)(param_3 + 0x18) = lVar5;
                    lVar2 = rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060,lVar5 * 8 + 0x10,lVar2 % 2);
                    *(undefined8 *)(lVar2 + 8) = 1;
                    memcpy((void *)(lVar2 + 0x10),*(void **)(param_3 + 0x20),
                           *(long *)(param_3 + 0x10) * 8);
                    rawDealloc_DA62HrGC5sdfCED505KyyQ(0x60f060,*(long *)(param_3 + 0x20) + -0x10);
                    *(void **)(param_3 + 0x20) = (void *)(lVar2 + 0x10);
                  }
                  *(ulong **)(*(long *)(param_3 + 0x20) + *(long *)(param_3 + 0x10) * 8) = puVar3;
                  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
                }
                else {
                  *puVar7 = uVar4 & 0xfffffffffffffffb;
                  *ppuVar6 = puVar3;
                }
                goto LAB_00407cd2;
              }
            }
          }
        }
      }
    }
  }
  *puVar7 = uVar4 & 0xfffffffffffffffb;
  *ppuVar6 = puVar3;
LAB_00407cd2:
  return puVar3 + 2;
}



void newObjNoInit(undefined8 param_1,undefined8 param_2)

{
  rawNewObj_BpNS5yt3b9cMOponsUKh8aw(param_1,param_2,gch_IcYaEuuWivYAS86vFMTS3Q);
  return;
}



void rawNewStringNoInit(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 7;
  if (6 < param_1) {
    lVar2 = param_1;
  }
  puVar1 = (undefined8 *)
           rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                     (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar2 + 0x11,gch_IcYaEuuWivYAS86vFMTS3Q);
  puVar1[1] = lVar2;
  *puVar1 = 0;
  return;
}



undefined4 * toNimStr(void *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  uVar2 = 7;
  if (6 < (long)param_2) {
    uVar2 = param_2;
  }
  puVar1 = (undefined4 *)
           rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                     (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,uVar2 + 0x11,gch_IcYaEuuWivYAS86vFMTS3Q);
  auVar3 = movhps(ZEXT816(param_2),uVar2);
  *puVar1 = SUB164(auVar3,0);
  puVar1[1] = SUB164(auVar3 >> 0x20,0);
  puVar1[2] = SUB164(auVar3 >> 0x40,0);
  puVar1[3] = SUB164(auVar3 >> 0x60,0);
  memcpy(puVar1 + 4,param_1,param_2 + 1);
  return puVar1;
}



undefined4 * cstrToNimstr(char *param_1)

{
  size_t sVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined auVar4 [16];
  size_t local_28;
  
  puVar3 = (undefined4 *)0x0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    lVar2 = 0x18;
    local_28 = 7;
    if (6 < sVar1) {
      lVar2 = sVar1 + 0x11;
      local_28 = sVar1;
    }
    puVar3 = (undefined4 *)
             rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                       (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar2,gch_IcYaEuuWivYAS86vFMTS3Q);
    auVar4 = movhps(ZEXT816(sVar1),local_28);
    *puVar3 = SUB164(auVar4,0);
    puVar3[1] = SUB164(auVar4 >> 0x20,0);
    puVar3[2] = SUB164(auVar4 >> 0x40,0);
    puVar3[3] = SUB164(auVar4 >> 0x60,0);
    memcpy(puVar3 + 4,param_1,sVar1 + 1);
  }
  return puVar3;
}



void newObj(undefined8 param_1,size_t param_2)

{
  void *__s;
  
  __s = (void *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw(param_1,param_2,gch_IcYaEuuWivYAS86vFMTS3Q);
  memset(__s,0,param_2);
  return;
}



void newObjRC1(undefined8 param_1,size_t param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
  lVar3 = lVar1 >> 7;
  if (lVar1 < 64000) {
    lVar3 = 500;
  }
  if (((lVar3 <= gch_IcYaEuuWivYAS86vFMTS3Q._16_8_) ||
      (gch_IcYaEuuWivYAS86vFMTS3Q._8_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_)) &&
     (gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ == 0)) {
    collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(gch_IcYaEuuWivYAS86vFMTS3Q);
  }
  puVar2 = (undefined8 *)rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060);
  puVar2[1] = param_1;
  *puVar2 = 8;
  memset(puVar2 + 2,0,param_2);
  return;
}



undefined8 * copyStringRC1(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *__s;
  
  if (param_1 == (long *)0x0) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar4 = *param_1;
    if (lVar4 < 7) {
      lVar4 = 7;
    }
    lVar1 = stackSize_IV9bgfYkinlae0WZ2NZi5JA();
    lVar3 = lVar1 >> 7;
    if (lVar1 < 64000) {
      lVar3 = 500;
    }
    if (((lVar3 <= gch_IcYaEuuWivYAS86vFMTS3Q._16_8_) ||
        (gch_IcYaEuuWivYAS86vFMTS3Q._8_8_ <= gch_IcYaEuuWivYAS86vFMTS3Q._10488_8_)) &&
       (gch_IcYaEuuWivYAS86vFMTS3Q._88_8_ == 0)) {
      collectCTBody_zoTIuavlrCHyw3B8MBaLJA_2(gch_IcYaEuuWivYAS86vFMTS3Q);
    }
    puVar2 = (undefined8 *)rawAlloc_yn9c8RLaS8vgVBeMBfmkdUg(0x60f060);
    puVar2[1] = 0x6126a0;
    __s = puVar2 + 2;
    *puVar2 = 8;
    memset(__s,0,lVar4 + 0x11);
    puVar2[3] = lVar4;
    lVar4 = *param_1;
    puVar2[2] = lVar4;
    memcpy(puVar2 + 4,param_1 + 2,lVar4 + 1);
  }
  return __s;
}



undefined8 isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar1 == param_2) {
      param_3[1] = param_1;
      return 1;
    }
    if (lVar1 == 0) break;
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  *param_3 = param_1;
  return 0;
}



void showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(char *param_1)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined auVar5 [16];
  size_t local_28;
  
  __stream = stderr;
  if (errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A != (code *)0x0) {
    puVar4 = (undefined4 *)0x0;
    if (param_1 != (char *)0x0) {
      sVar2 = strlen(param_1);
      lVar3 = 0x18;
      local_28 = 7;
      if (6 < sVar2) {
        lVar3 = sVar2 + 0x11;
        local_28 = sVar2;
      }
      puVar4 = (undefined4 *)
               rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                         (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar3,gch_IcYaEuuWivYAS86vFMTS3Q);
      auVar5 = movhps(ZEXT816(sVar2),local_28);
      *puVar4 = SUB164(auVar5,0);
      puVar4[1] = SUB164(auVar5 >> 0x20,0);
      puVar4[2] = SUB164(auVar5 >> 0x40,0);
      puVar4[3] = SUB164(auVar5 >> 0x60,0);
      memcpy(puVar4 + 4,param_1,sVar2 + 1);
    }
                    // WARNING: Could not recover jumptable at 0x004081b0. Too many branches
                    // WARNING: Treating indirect jump as call
    (*errorMessageWriter_ZXnv0JyrWe3HTd07wpSr7A)(puVar4);
    return;
  }
  fputs(param_1,stderr);
  iVar1 = ferror(__stream);
  if (iVar1 == 0) {
    return;
  }
  clearerr(__stream);
                    // WARNING: Subroutine does not return
  raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
}



// WARNING: Could not reconcile some variable overlaps

void raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw_part_16(long *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  char *__s;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  byte bVar13;
  undefined auVar14 [16];
  ulong local_818;
  ulong local_810;
  undefined4 local_808;
  undefined4 uStack2052;
  undefined4 uStack2048;
  undefined4 uStack2044;
  undefined8 local_7f8;
  undefined4 local_7f0;
  undefined8 local_7ec;
  
  bVar13 = 0;
  if (excHandler_rqLlY5bs9atDw2OXYqJEn5g != 0) {
    if (*(char *)(excHandler_rqLlY5bs9atDw2OXYqJEn5g + 0xd8) != '\0') {
      if (*(long *)(excHandler_rqLlY5bs9atDw2OXYqJEn5g + 0xe8) == 0) {
        cVar3 = (**(code **)(excHandler_rqLlY5bs9atDw2OXYqJEn5g + 0xe0))();
      }
      else {
        cVar3 = (**(code **)(excHandler_rqLlY5bs9atDw2OXYqJEn5g + 0xe0))();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    lVar9 = (long)currException_9bVPeDJlYTi9bQApZpfH8wjg;
    if (currException_9bVPeDJlYTi9bQApZpfH8wjg != (long *)0x0) {
      *(long *)((long)currException_9bVPeDJlYTi9bQApZpfH8wjg + -0x10) =
           *(long *)((long)currException_9bVPeDJlYTi9bQApZpfH8wjg + -0x10) + 8;
    }
    lVar7 = param_1[6];
    if (lVar7 != 0) {
      uVar6 = *(long *)(lVar7 + -0x10) - 8;
      *(ulong *)(lVar7 + -0x10) = uVar6;
      if (uVar6 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar7 + -0x10);
      }
    }
    param_1[-2] = param_1[-2] + 8;
    lVar7 = (long)currException_9bVPeDJlYTi9bQApZpfH8wjg;
    param_1[6] = lVar9;
    if (lVar7 != 0) {
      uVar6 = *(long *)(lVar7 + -0x10) - 8;
      *(ulong *)(lVar7 + -0x10) = uVar6;
      if (uVar6 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,lVar7 + -0x10);
      }
    }
    currException_9bVPeDJlYTi9bQApZpfH8wjg = param_1;
                    // WARNING: Subroutine does not return
    longjmp((__jmp_buf_tag *)(excHandler_rqLlY5bs9atDw2OXYqJEn5g + 0x10),1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (((puVar1 == NTI_vyjC2ukVFYc78nQPrSCc9bA_) ||
      (*(undefined1 **)(puVar1 + 0x10) == NTI_vyjC2ukVFYc78nQPrSCc9bA_)) ||
     ((puVar1 != Nim_OfCheck_CACHE22._0_8_ &&
      ((puVar1 == Nim_OfCheck_CACHE22._8_8_ ||
       (cVar3 = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg
                          (puVar1,NTI_vyjC2ukVFYc78nQPrSCc9bA_,Nim_OfCheck_CACHE22), cVar3 != '\0'))
      )))) {
    showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(param_1[2]);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  lVar9 = 0xfa;
  puVar2 = (ulong *)param_1[3];
  __s = (char *)param_1[2];
  puVar10 = &local_808;
  while (lVar9 != 0) {
    lVar9 = lVar9 + -1;
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar13 * 0x1ffffffffffffffe + 1;
  }
  local_7f0 = 0x203a6e6f;
  local_808 = 0x6f727245;
  uStack2052 = 0x75203a72;
  uStack2048 = 0x6f727245;
  uStack2044 = 0x75203a72;
  local_7f8 = 0x6974706563786520;
  *(undefined *)puVar10 = 0;
  if ((puVar2 == (ulong *)0x0) || (uVar6 = *puVar2, 0x7b3 < (long)uVar6)) {
    lVar9 = 0x1e;
    lVar7 = 0x1c;
LAB_00408518:
    *(undefined2 *)((long)&local_808 + lVar7) = 0x5b20;
    if (__s == (char *)0x0) goto LAB_004085c0;
    __n = strlen(__s);
    if ((long)(__n + lVar9) < 2000) goto LAB_00408400;
  }
  else {
    if (uVar6 == 0) {
      lVar7 = 0x1c;
LAB_004085a2:
      lVar9 = lVar7 + 2;
      goto LAB_00408518;
    }
    if (uVar6 < 8) {
      if ((uVar6 & 4) == 0) {
        if (uVar6 != 0) {
          local_7ec = local_7ec & 0xffffffffffffff00 | (ulong)*(byte *)(puVar2 + 2);
          if ((uVar6 & 2) == 0) goto LAB_004083cc;
          *(undefined2 *)((long)&local_7f0 + uVar6 + 2) =
               *(undefined2 *)((long)puVar2 + uVar6 + 0xe);
          uVar6 = *puVar2;
        }
      }
      else {
        local_7ec = local_7ec & 0xffffffff00000000 | (ulong)*(uint *)(puVar2 + 2);
        *(undefined4 *)((long)&local_7f0 + uVar6) = *(undefined4 *)((long)puVar2 + uVar6 + 0xc);
        uVar6 = *puVar2;
      }
    }
    else {
      local_7ec = puVar2[2];
      *(undefined8 *)(&local_7f8 + uVar6 + 4) = *(undefined8 *)((long)puVar2 + uVar6 + 8);
      uVar6 = (ulong)(&local_7ec + -(long)(&local_7ec + 4) + uVar6) >> 3;
      puVar10 = (undefined8 *)((long)puVar2 + (0x10 - (long)(&local_7ec + -(long)(&local_7ec + 4))))
      ;
      puVar11 = (undefined8 *)(&local_7ec + 4);
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar13 * 0x1ffffffffffffffe + 1;
        puVar11 = puVar11 + (ulong)bVar13 * 0x1ffffffffffffffe + 1;
      }
LAB_004083cc:
      uVar6 = *puVar2;
    }
    lVar7 = uVar6 + 0x1c;
    if (lVar7 < 0x7ce) goto LAB_004085a2;
    lVar9 = lVar7;
    if (__s != (char *)0x0) {
      __n = strlen(__s);
      if (1999 < (long)(__n + lVar7)) goto LAB_00408432;
      goto LAB_00408400;
    }
    if (1999 < lVar7) goto LAB_00408432;
LAB_004085c0:
    __n = 0;
LAB_00408400:
    memcpy((void *)((long)&local_808 + lVar9),__s,__n);
    __n = strlen(__s);
    lVar9 = lVar9 + __n;
  }
  if (lVar9 < 0x7ce) {
    *(undefined2 *)((long)&local_808 + lVar9) = 0xa5d;
  }
LAB_00408432:
  puVar10 = &local_808;
  if (onUnhandledException_bFrawQlTKZhLweDD36j9b8g != (code *)0x0) {
    do {
      puVar11 = puVar10;
      uVar4 = *(uint *)puVar11 + 0xfefefeff & ~*(uint *)puVar11;
      uVar5 = uVar4 & 0x80808080;
      puVar10 = (undefined8 *)((long)puVar11 + 4);
    } while (uVar5 == 0);
    lVar9 = 0x18;
    local_818 = 7;
    bVar12 = (uVar4 & 0x8080) == 0;
    if (bVar12) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar12) {
      puVar10 = (undefined8 *)((long)puVar11 + 6);
    }
    local_810 = (long)puVar10 + ((-3 - (ulong)CARRY1((byte)uVar5,(byte)uVar5)) - (long)&local_808);
    if (6 < local_810) {
      lVar9 = local_810 + 0x11;
      local_818 = local_810;
    }
    puVar8 = (undefined4 *)
             rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                       (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar9,gch_IcYaEuuWivYAS86vFMTS3Q,
                        (ulong)(uVar5 & 0xffffff00));
    uVar6 = local_810 + 1;
    auVar14 = movhps(ZEXT816(local_810),local_818);
    *puVar8 = SUB164(auVar14,0);
    puVar8[1] = SUB164(auVar14 >> 0x20,0);
    puVar8[2] = SUB164(auVar14 >> 0x40,0);
    puVar8[3] = SUB164(auVar14 >> 0x60,0);
    uVar5 = (uint)uVar6;
    if (uVar5 < 8) {
      if ((uVar6 & 4) == 0) {
        if (uVar5 != 0) {
          *(undefined *)(puVar8 + 4) = (undefined)local_808;
          if ((uVar6 & 2) != 0) {
            *(undefined2 *)((long)puVar8 + (uVar6 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)&local_810 + (uVar6 & 0xffffffff) + 6);
          }
        }
      }
      else {
        puVar8[4] = local_808;
        *(undefined4 *)((long)puVar8 + (uVar6 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)&local_810 + (uVar6 & 0xffffffff) + 4);
      }
    }
    else {
      *(ulong *)(puVar8 + 4) = CONCAT44(uStack2052,local_808);
      *(undefined8 *)((long)puVar8 + (uVar6 & 0xffffffff) + 8) =
           *(undefined8 *)((long)&local_810 + (uVar6 & 0xffffffff));
      lVar9 = (long)puVar8 + (0x10 - (long)(undefined8 *)((ulong)(puVar8 + 6) & 0xfffffffffffffff8))
      ;
      uVar6 = (ulong)(uVar5 + (int)lVar9 >> 3);
      puVar10 = (undefined8 *)((long)&local_808 - lVar9);
      puVar11 = (undefined8 *)((ulong)(puVar8 + 6) & 0xfffffffffffffff8);
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar13 * 0x1ffffffffffffffe + 1;
        puVar11 = puVar11 + (ulong)bVar13 * 0x1ffffffffffffffe + 1;
      }
    }
    (*onUnhandledException_bFrawQlTKZhLweDD36j9b8g)(SUB168(auVar14,0),puVar8);
    return;
  }
  showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(&local_808);
                    // WARNING: Subroutine does not return
  exit(1);
}



void raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(undefined8 param_1)

{
  char cVar1;
  
  if ((localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg != (code *)0x0) &&
     (cVar1 = (*localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg)(), cVar1 == '\0')) {
    return;
  }
  if ((globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA != (code *)0x0) &&
     (cVar1 = (*globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA)(param_1), cVar1 == '\0')) {
    return;
  }
  raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw_part_16(param_1);
  return;
}



void raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = (undefined8 *)newObj(NTI_HMIVdYjdZYWskTmTQVo5BQ_,0x38);
  *puVar2 = 0x612620;
  lVar1 = puVar2[3];
  uVar3 = copyStringRC1(param_1);
  puVar2[3] = uVar3;
  if ((lVar1 != 0) &&
     (uVar4 = *(long *)(lVar1 + -0x10) - 8, *(ulong *)(lVar1 + -0x10) = uVar4, uVar4 < 8))
  goto LAB_00408702;
  do {
    if (puVar2[2] == 0) {
      puVar2[2] = 0x40a108;
    }
    raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(puVar2);
LAB_00408702:
    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010);
  } while( true );
}



void checkErr_BWnr8V7RERYno9bIdPmw8Hw(FILE *param_1)

{
  int iVar1;
  
  iVar1 = ferror(param_1);
  if (iVar1 == 0) {
    return;
  }
  clearerr(param_1);
                    // WARNING: Subroutine does not return
  raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
}



void write_ADGLlEJAOtGNWWur8rrJfg(FILE *param_1,char *param_2)

{
  int iVar1;
  
  fputs(param_2,param_1);
  iVar1 = ferror(param_1);
  if (iVar1 == 0) {
    return;
  }
  clearerr(param_1);
                    // WARNING: Subroutine does not return
  raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
}



void writeToStdErr_7HRVfGfZT2rSmBdcLxl8TA(char *param_1)

{
  FILE *__stream;
  int iVar1;
  
  __stream = stderr;
  fputs(param_1,stderr);
  iVar1 = ferror(__stream);
  if (iVar1 == 0) {
    return;
  }
  clearerr(__stream);
                    // WARNING: Subroutine does not return
  raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
}



void raiseException(long param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  if ((localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg != (code *)0x0) &&
     (cVar1 = (*localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg)(param_1), cVar1 == '\0')) {
    return;
  }
  if ((globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA != (code *)0x0) &&
     (cVar1 = (*globalRaiseHook_JbO1ti4ULxrw54m4zNPbpA)(param_1), cVar1 == '\0')) {
    return;
  }
  raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw_part_16(param_1);
  return;
}



void signalHandler(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "SIGINT: Interrupted by Ctrl-C.\n";
  if (param_1 != 2) {
    if (param_1 == 0xb) {
      pcVar1 = "SIGSEGV: Illegal storage access. (Attempt to read from nil?)\n";
    }
    else {
      if (param_1 == 6) {
        pcVar1 = "SIGABRT: Abnormal termination.\n";
      }
      else {
        if (param_1 == 8) {
          pcVar1 = "SIGFPE: Arithmetic error.\n";
        }
        else {
          if (param_1 == 4) {
            pcVar1 = "SIGILL: Illegal operation.\n";
          }
          else {
            pcVar1 = "unknown signal\n";
            if (param_1 == 0xd) {
              pcVar1 = "SIGPIPE: Pipe closed.\n";
            }
          }
        }
      }
    }
  }
  showErrorMessage_rsUJ87b89bH0GlWKYL9c8wUQ(pcVar1);
                    // WARNING: Subroutine does not return
  exit(1);
}



void registerSignalHandler_njssp69aa7hvxte9bJ8uuDcg_2(void)

{
  signal(2,signalHandler);
  signal(0xb,signalHandler);
  signal(6,signalHandler);
  signal(8,signalHandler);
  signal(4,signalHandler);
  signal(0xb,signalHandler);
  signal(0xd,signalHandler);
  return;
}



ulong getRefcount(long param_1)

{
  return *(ulong *)(param_1 + -0x10) >> 3;
}



void nimRegisterGlobalMarker(undefined8 param_1)

{
  if (globalMarkersLen_hgEFy3UCOBoalBh29asu5MA < 0xdac) {
    *(undefined8 *)
     (globalMarkers_5ghwSgpo9cT9bT7YStQDJHVQ + globalMarkersLen_hgEFy3UCOBoalBh29asu5MA * 8) =
         param_1;
    globalMarkersLen_hgEFy3UCOBoalBh29asu5MA = globalMarkersLen_hgEFy3UCOBoalBh29asu5MA + 1;
    return;
  }
  echoBinSafe_constprop_24(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_23);
                    // WARNING: Subroutine does not return
  exit(1);
}



void rawNewString(long param_1)

{
  void *__s;
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 7;
  if (6 < param_1) {
    lVar2 = param_1;
  }
  __s = (void *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                          (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar2 + 0x11U,gch_IcYaEuuWivYAS86vFMTS3Q
                          );
  puVar1 = (undefined8 *)memset(__s,0,lVar2 + 0x11U);
  puVar1[1] = lVar2;
  *puVar1 = 0;
  return;
}



void mnewString(ulong param_1)

{
  void *__s;
  undefined4 *puVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  uVar2 = 7;
  if (6 < (long)param_1) {
    uVar2 = param_1;
  }
  __s = (void *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                          (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,uVar2 + 0x11,gch_IcYaEuuWivYAS86vFMTS3Q)
  ;
  puVar1 = (undefined4 *)memset(__s,0,uVar2 + 0x11);
  auVar3 = movhps(ZEXT816(param_1),uVar2);
  *puVar1 = SUB164(auVar3,0);
  puVar1[1] = SUB164(auVar3 >> 0x20,0);
  puVar1[2] = SUB164(auVar3 >> 0x40,0);
  puVar1[3] = SUB164(auVar3 >> 0x60,0);
  return;
}



ulong * setLengthStr(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *__s;
  ulong uVar3;
  undefined auVar4 [16];
  
  uVar3 = 0;
  if (-1 < (long)param_2) {
    uVar3 = param_2;
  }
  if (param_1 == (ulong *)0x0) {
    uVar1 = 7;
    if (6 < (long)param_2) {
      uVar1 = param_2;
    }
    __s = (ulong *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                             (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,uVar1 + 0x11,
                              gch_IcYaEuuWivYAS86vFMTS3Q);
    memset(__s,0,uVar1 + 0x11);
    auVar4 = movhps(ZEXT816(param_2),uVar1);
    *(int *)__s = SUB164(auVar4,0);
    *(undefined4 *)((long)__s + 4) = SUB164(auVar4 >> 0x20,0);
    *(int *)(__s + 1) = SUB164(auVar4 >> 0x40,0);
    *(undefined4 *)((long)__s + 0xc) = SUB164(auVar4 >> 0x60,0);
  }
  else {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
    __s = param_1;
    if ((long)uVar1 < (long)uVar3) {
      uVar2 = 4;
      if ((uVar1 != 0) && (uVar2 = uVar1 * 2, (param_1[1] & 0x3fffffffffff0000) != 0)) {
        uVar2 = (long)(uVar1 * 3) >> 1;
      }
      if ((long)uVar2 <= (long)param_2) {
        uVar2 = param_2;
      }
      uVar1 = 7;
      if (6 < (long)uVar2) {
        uVar1 = uVar2;
      }
      __s = (ulong *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                               (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,uVar1 + 0x11,
                                gch_IcYaEuuWivYAS86vFMTS3Q);
      *__s = 0;
      __s[1] = uVar1;
      uVar1 = *param_1;
      *__s = uVar1;
      memcpy(__s + 2,param_1 + 2,uVar1 + 1);
      memset((void *)((long)__s + *param_1 + 0x10),0,param_2 - *param_1);
      __s[1] = uVar2;
    }
  }
  *__s = uVar3;
  *(undefined *)((long)__s + uVar3 + 0x10) = 0;
  return __s;
}



ulong readLine_sO1bQXVRA6RP9cdYJXNKeSw(FILE *param_1,size_t **param_2)

{
  long lVar1;
  size_t *psVar2;
  size_t sVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  size_t *psVar8;
  size_t __n;
  long lVar9;
  bool local_39;
  
  __n = 0x50;
  psVar8 = *param_2;
  if ((psVar8 != (size_t *)0x0) && (0x4f < (long)*psVar8)) {
    __n = *psVar8;
  }
  psVar8 = (size_t *)setLengthStr(psVar8,__n);
  cVar4 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(param_2);
  if (cVar4 == '\0') {
    if (psVar8 != (size_t *)0x0) {
      psVar8[-2] = psVar8[-2] + 8;
    }
    psVar2 = *param_2;
    if ((size_t *)0xfff < psVar2) {
      sVar3 = psVar2[-2];
      psVar2[-2] = sVar3 - 8;
      if (sVar3 - 8 < 8) {
        addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,psVar2 + -2);
      }
    }
  }
  *param_2 = psVar8;
  lVar9 = 0;
  while( true ) {
    lVar1 = lVar9 + 0x10;
    memset((void *)((long)psVar8 + lVar1),10,__n);
    pcVar7 = fgets((char *)((long)*param_2 + lVar1),(int)__n,param_1);
    local_39 = pcVar7 != (char *)0x0;
    if ((!local_39) && (iVar5 = ferror(param_1), iVar5 != 0)) {
      clearerr(param_1);
                    // WARNING: Subroutine does not return
      raiseEIO_PpfSiTIeNpMAb9a5o6SglJw(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_22);
    }
    psVar8 = *param_2;
    pvVar6 = memchr((void *)((long)psVar8 + lVar1),10,__n);
    if (pvVar6 != (void *)0x0) break;
    lVar9 = (__n - 1) + lVar9;
    psVar8 = (size_t *)setLengthStr(psVar8,lVar9 + 0x80);
    cVar4 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(param_2);
    if (cVar4 == '\0') {
      if (psVar8 != (size_t *)0x0) {
        psVar8[-2] = psVar8[-2] + 8;
      }
      psVar2 = *param_2;
      if ((size_t *)0xfff < psVar2) {
        __n = psVar2[-2];
        psVar2[-2] = __n - 8;
        if (__n - 8 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,psVar2 + -2);
        }
      }
    }
    *param_2 = psVar8;
    __n = 0x80;
  }
  pvVar6 = (void *)((long)pvVar6 - (long)(psVar8 + 2));
  if ((long)pvVar6 < 1) {
LAB_00408cc0:
    psVar8 = (size_t *)setLengthStr(psVar8,pvVar6);
    cVar4 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(param_2);
    if (cVar4 == '\0') {
      if (psVar8 != (size_t *)0x0) {
        psVar8[-2] = psVar8[-2] + 8;
      }
      psVar2 = *param_2;
      if (psVar2 < (size_t *)0x1000) goto LAB_00408d0b;
      __n = psVar2[-2];
      psVar2[-2] = __n - 8;
      if (7 < __n - 8) goto LAB_00408d0b;
      addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,psVar2 + -2);
      *param_2 = psVar8;
    }
    else {
LAB_00408d0b:
      *param_2 = psVar8;
    }
    if ((long)pvVar6 < 1) goto LAB_00408d14;
  }
  else {
    cVar4 = *(char *)((long)((long)psVar8 + 0x10U) + (long)(void *)((long)pvVar6 + -1));
    if (cVar4 != '\r') {
      if (((cVar4 == '\0') && ((long)pvVar6 < (long)((__n - 1) + lVar9))) &&
         (*(char *)((long)psVar8 + 0x11U + (long)pvVar6) != '\0')) {
        pvVar6 = (void *)((long)pvVar6 + -1);
      }
      goto LAB_00408cc0;
    }
    psVar8 = (size_t *)setLengthStr(psVar8);
    cVar4 = isOnStack_dJJW59cIgsBmT59aZrOM71Mg(param_2);
    if (cVar4 == '\0') {
      if (psVar8 != (size_t *)0x0) {
        psVar8[-2] = psVar8[-2] + 8;
      }
      psVar2 = *param_2;
      if ((size_t *)0xfff < psVar2) {
        __n = psVar2[-2];
        psVar2[-2] = __n - 8;
        if (__n - 8 < 8) {
          addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010,psVar2 + -2);
        }
      }
    }
    *param_2 = psVar8;
    if (pvVar6 == (void *)0x1) goto LAB_00408d14;
  }
  local_39 = true;
LAB_00408d14:
  return (ulong)local_39;
}



void raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = (undefined8 *)newObj(NTI_LEclZrWX2FQAodlapxGITw_,0x38);
  *puVar2 = 0x612800;
  lVar1 = puVar2[3];
  uVar3 = copyStringRC1(&TM_Q5wkpxktOdTGvlSRo9bzt9aw_25);
  puVar2[3] = uVar3;
  if ((lVar1 != 0) &&
     (uVar4 = *(long *)(lVar1 + -0x10) - 8, *(ulong *)(lVar1 + -0x10) = uVar4, uVar4 < 8))
  goto LAB_00408e33;
  do {
    if (puVar2[2] == 0) {
      puVar2[2] = 0x40a16e;
    }
    raiseExceptionAux_na8C8pUZ9cLQWVwk35l5vfw(puVar2);
LAB_00408e33:
    addZCT_fCDI7oO1NNVXXURtxSzsRw(0x60f010);
  } while( true );
}



long * readLine_fPRnXwDTqtynUYGl4OixAg(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  undefined4 *local_10;
  
  bVar6 = 0;
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)
             rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                       (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,0x61,gch_IcYaEuuWivYAS86vFMTS3Q);
  *(undefined8 *)(local_10 + 4) = 0;
  *(undefined8 *)((long)local_10 + 0x59) = 0;
  uVar2 = (ulong)(((int)local_10 - (int)(undefined8 *)((ulong)(local_10 + 6) & 0xfffffffffffffff8))
                  + 0x61U >> 3);
  puVar4 = (undefined8 *)((ulong)(local_10 + 6) & 0xfffffffffffffff8);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
  }
  *local_10 = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  cVar1 = readLine_sO1bQXVRA6RP9cdYJXNKeSw(0,param_1,&local_10);
  if (cVar1 != '\0') {
    return (long *)local_10;
  }
  raiseEOF_9b10LwJKWsyrZIEKTB9b6PGQ();
  if (param_1 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_1;
    if (-1 < param_1[1]) {
      lVar5 = 7;
      if (6 < *param_1) {
        lVar5 = *param_1;
      }
      plVar3 = (long *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                                 (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar5 + 0x11,
                                  gch_IcYaEuuWivYAS86vFMTS3Q);
      *plVar3 = 0;
      plVar3[1] = lVar5;
      lVar5 = *param_1;
      *plVar3 = lVar5;
      memcpy(plVar3 + 2,param_1 + 2,lVar5 + 1);
    }
  }
  return plVar3;
}



long * copyString(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    if (-1 < param_1[1]) {
      lVar2 = 7;
      if (6 < *param_1) {
        lVar2 = *param_1;
      }
      plVar1 = (long *)rawNewObj_BpNS5yt3b9cMOponsUKh8aw
                                 (strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,lVar2 + 0x11,
                                  gch_IcYaEuuWivYAS86vFMTS3Q);
      *plVar1 = 0;
      plVar1[1] = lVar2;
      lVar2 = *param_1;
      *plVar1 = lVar2;
      memcpy(plVar1 + 2,param_1 + 2,lVar2 + 1);
    }
  }
  return plVar1;
}



void systemInit000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  long lVar47;
  long lVar48;
  undefined8 ***local_10 [2];
  
  if (threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw < 0xdac) {
    *(undefined8 *)
     (threadLocalMarkers_pC47Nqd8F629cuTchphM5YA + threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw * 8)
         = 0x405800;
    threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw = threadLocalMarkersLen_0RZOktgt14ljJsHMSX0iCw + 1;
    nimvm_IAxmsqnME4Jmed24hOgrFQ = 0;
    genericReset(strDesc_D0UzA4zsDu5tgpJQ9a9clXPg,NTI_TuG1vdYwChKtx4TOkRnAjw_);
    strDesc_D0UzA4zsDu5tgpJQ9a9clXPg._8_2_ = 0x21c;
    local_10[0] = local_10;
    strDesc_D0UzA4zsDu5tgpJQ9a9clXPg._0_8_ = 8;
    nimGC_setStackBottom(local_10[0]);
    initGC_njssp69aa7hvxte9bJ8uuDcg();
    signal(2,signalHandler);
    signal(0xb,signalHandler);
    signal(6,signalHandler);
    signal(8,signalHandler);
    signal(4,signalHandler);
    signal(0xb,signalHandler);
    signal(0xd,signalHandler);
    return;
  }
  nimRegisterThreadLocalMarker_part_14();
  auVar6 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a177);
  NTI_TuG1vdYwChKtx4TOkRnAjw_._8_2_ = 0x312;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._64_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._68_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._72_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._76_4_ = SUB164(auVar6 >> 0x60,0);
  auVar6 = movhps(ZEXT816(0x60d410),0x60d440);
  NTI_TuG1vdYwChKtx4TOkRnAjw_._16_8_ = 0;
  NTI_TuG1vdYwChKtx4TOkRnAjw_._0_8_ = 0x38;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._16_8_ = 0;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._0_8_ = 8;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._8_2_ = 799;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[48] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._56_8_ = 0;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._16_8_ = 0;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._0_8_ = 1;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._8_2_ = 0x30e;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._0_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._4_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._8_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._12_4_ = SUB164(auVar6 >> 0x60,0);
  auVar6 = (undefined  [16])0x0;
  puVar3 = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141;
  lVar4 = 0;
  do {
    lVar5 = lVar4 + 0x80;
    lVar47 = SUB168(auVar6,0);
    lVar48 = SUB168(auVar6 >> 0x40,0);
    *(long *)(puVar3 + 0x98) = lVar47;
    puVar3[0x2a0] = 1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 200),auVar6);
    *(undefined8 *)(puVar3 + 200) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x188),CONCAT88(lVar48 + 4,lVar47 + 4));
    *(undefined8 *)(puVar3 + 0x188) = uVar1;
    *(long *)(puVar3 + 0xf8) = lVar47 + 2;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x128),CONCAT88(lVar48 + 2,lVar47 + 2));
    *(undefined8 *)(puVar3 + 0x128) = uVar1;
    *(long *)(puVar3 + 0x158) = lVar47 + 4;
    *(long *)(puVar3 + 0x1b8) = lVar47 + 6;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x1e8),CONCAT88(lVar48 + 6,lVar47 + 6));
    *(undefined8 *)(puVar3 + 0x1e8) = uVar1;
    *(long *)(puVar3 + 0x218) = lVar47 + 8;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x248),CONCAT88(lVar48 + 8,lVar47 + 8));
    *(undefined8 *)(puVar3 + 0x248) = uVar1;
    *(long *)(puVar3 + 0x278) = lVar47 + 10;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x2a8),CONCAT88(lVar48 + 10,lVar47 + 10));
    *(undefined8 *)(puVar3 + 0x2a8) = uVar1;
    *(long *)(puVar3 + 0x2d8) = lVar47 + 0xc;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x308),CONCAT88(lVar48 + 0xc,lVar47 + 0xc));
    *(undefined8 *)(puVar3 + 0x308) = uVar1;
    *(long *)(puVar3 + 0x338) = lVar47 + 0xe;
    puVar3[0x90] = 1;
    puVar3[0xc0] = 1;
    puVar3[0xf0] = 1;
    puVar3[0x120] = 1;
    puVar3[0x150] = 1;
    puVar3[0x180] = 1;
    puVar3[0x1b0] = 1;
    puVar3[0x1e0] = 1;
    puVar3[0x210] = 1;
    puVar3[0x240] = 1;
    puVar3[0x270] = 1;
    puVar3[0x2d0] = 1;
    puVar3[0x300] = 1;
    puVar3[0x330] = 1;
    puVar3[0x360] = 1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x368),CONCAT88(lVar48 + 0xe,lVar47 + 0xe));
    *(undefined8 *)(puVar3 + 0x368) = uVar1;
                    // WARNING: Load size is inaccurate
    auVar6 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x50);
                    // WARNING: Load size is inaccurate
    auVar33 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x60);
                    // WARNING: Load size is inaccurate
    auVar34 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x20);
                    // WARNING: Load size is inaccurate
    auVar7 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x10);
    *(long *)(puVar3 + 0x288) = SUB168(auVar6,0);
                    // WARNING: Load size is inaccurate
    auVar8 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x30);
                    // WARNING: Load size is inaccurate
    auVar9 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x2b8),auVar6);
    *(undefined8 *)(puVar3 + 0x2b8) = uVar1;
    uVar2 = *(undefined8 *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x70);
    *(long *)(puVar3 + 0x2e8) = SUB168(auVar33,0);
                    // WARNING: Load size is inaccurate
    auVar6 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x40);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x318),auVar33);
    *(undefined8 *)(puVar3 + 0x318) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x198),auVar34);
    *(undefined8 *)(puVar3 + 0x198) = uVar1;
    auVar33 = psllq(CONCAT88(lVar48 + 3,lVar47 + 3),1);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0xd8),auVar9);
    *(undefined8 *)(puVar3 + 0xd8) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x138),auVar7);
    *(undefined8 *)(puVar3 + 0x138) = uVar1;
    *(long *)(puVar3 + 0x168) = SUB168(auVar34,0);
    auVar34 = psllq(CONCAT88(SUB168(auVar33 >> 0x40,0) + lVar48 + 3,SUB168(auVar33,0) + lVar47 + 3),
                    4);
                    // WARNING: Load size is inaccurate
    auVar33 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x70);
    *(long *)(puVar3 + 0xa8) = SUB168(auVar9,0);
    *(long *)(puVar3 + 0x108) = SUB168(auVar7,0);
    *(long *)(puVar3 + 0x1c8) = SUB168(auVar8,0);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x1f8),auVar8);
    *(undefined8 *)(puVar3 + 0x1f8) = uVar1;
    *(long *)(puVar3 + 0x228) = SUB168(auVar6,0);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 600),auVar6);
    *(undefined8 *)(puVar3 + 600) = uVar1;
    *(undefined8 *)(puVar3 + 0x348) = uVar2;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x378),auVar33);
    *(undefined8 *)(puVar3 + 0x378) = uVar1;
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 4) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 8) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0xc) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 5,lVar47 + 5),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 5,SUB168(auVar6,0) + lVar47 + 5),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x10) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x14) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x18) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x1c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 7,lVar47 + 7),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 7,SUB168(auVar6,0) + lVar47 + 7),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x20) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x24) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x28) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x2c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 9,lVar47 + 9),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 9,SUB168(auVar6,0) + lVar47 + 9),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x30) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x34) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x38) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x3c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xb,lVar47 + 0xb),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xb,SUB168(auVar6,0) + lVar47 + 0xb)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x40) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x44) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x48) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x4c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xd,lVar47 + 0xd),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xd,SUB168(auVar6,0) + lVar47 + 0xd)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x50) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x54) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x58) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x5c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xf,lVar47 + 0xf),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xf,SUB168(auVar6,0) + lVar47 + 0xf)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x60) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 100) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x68) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x6c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = CONCAT88(lVar48 + 0x10,lVar47 + 0x10);
    auVar33 = psllq(CONCAT88(lVar48 + 0x11,lVar47 + 0x11),1);
    auVar33 = psllq(CONCAT88(SUB168(auVar33 >> 0x40,0) + lVar48 + 0x11,
                             SUB168(auVar33,0) + lVar47 + 0x11),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x70) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x74) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x78) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x7c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33 >> 0x40,0)) >> 0x20);
    puVar3 = puVar3 + 0x300;
    lVar4 = lVar5;
  } while (lVar5 != 0x200);
  auVar31 = ZEXT816(0x60ede0);
  auVar37 = movhps(auVar31,"name");
  auVar38 = movhps(ZEXT816(0x612560),&DAT_0040a17c);
  auVar39 = movhps(ZEXT816(0x60e0d0),0x60e100);
  auVar40 = movhps(ZEXT816(0x60eca0),0x60e190);
  auVar41 = movhps(ZEXT816(0x60efc0),"flags");
  auVar42 = movhps(ZEXT816(0x612760),&DAT_0040a1a8);
  auVar43 = movhps(ZEXT816(0x60e280),0x60e2b0);
  auVar44 = movhps(ZEXT816(0x60e2e0),0x60e310);
  auVar45 = movhps(ZEXT816(0x6195a0),&DAT_0040a17c);
  auVar6 = movhps(ZEXT816(0x612760),&DAT_0040a1d0);
  auVar46 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),"offset");
  auVar33 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a1d4);
  auVar34 = movhps(ZEXT816(0x60e250),0x60e370);
  auVar7 = movhps(ZEXT816(0x60e3a0),0x60e3d0);
  auVar8 = movhps(ZEXT816(0x60e400),0x60e430);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4100_4_ = SUB164(auVar37 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4104_4_ = SUB164(auVar37 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4108_4_ = SUB164(auVar37 >> 0x60,0);
  auVar9 = movhps(ZEXT816(0x6126e0),&DAT_0040a1d8);
  auVar10 = movhps(ZEXT816(0x6125a0),&DAT_0040a1dd);
  auVar11 = movhps(ZEXT816(0x6127c0),"finalizer");
  auVar12 = movhps(ZEXT816(0x612660),"marker");
  auVar13 = movhps(ZEXT816(0x60e0a0),0x60e1c0);
  auVar14 = movhps(ZEXT816(0x60e1f0),0x60e460);
  auVar15 = movhps(ZEXT816(0x60e490),0x60e4c0);
  auVar16 = movhps(ZEXT816(0x612420),"deepcopy");
  auVar17 = movhps(ZEXT816(0x60ee20),"parent");
  auVar18 = movhps(ZEXT816(0x6125e0),&DAT_0040a203);
  auVar19 = movhps(auVar31,"procname");
  auVar20 = movhps(ZEXT816(0x60e640),0x60e670);
  auVar32 = movhps(auVar31,"filename");
  auVar31 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a210);
  auVar21 = movhps(ZEXT816(0x6123e0),"trace");
  auVar36 = movhps(ZEXT816(0x60ee20),&DAT_0040a22d);
  auVar22 = movhps(ZEXT816(0x612460),"raise_id");
  auVar23 = movhps(ZEXT816(0x60e550),0x60e580);
  auVar24 = movhps(ZEXT816(0x60e5b0),0x60e5e0);
  auVar25 = movhps(ZEXT816(0x60e6d0),0x60e700);
  auVar26 = movhps(ZEXT816(0x6124a0),0x60e520);
  auVar27 = movhps(ZEXT816(0x612720),0x60e730);
  auVar35 = movhps(ZEXT816(0x612720),0x60e790);
  auVar28 = movhps(ZEXT816(0x60eda0),0x60e760);
  auVar29 = movhps(ZEXT816(0x60ef60),0x60e7c0);
  auVar30 = movhps(ZEXT816(0x612620),0x60e7f0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._0_4_ = SUB164(auVar20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._4_4_ = SUB164(auVar20 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._8_4_ = SUB164(auVar20 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._12_4_ = SUB164(auVar20 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._16_8_ = 0x60e6a0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._0_4_ = SUB164(auVar23,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._4_4_ = SUB164(auVar23 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._8_4_ = SUB164(auVar23 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._12_4_ = SUB164(auVar23 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._16_4_ = SUB164(auVar24,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._20_4_ = SUB164(auVar24 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._24_4_ = SUB164(auVar24 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._28_4_ = SUB164(auVar24 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._32_4_ = SUB164(auVar25,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._36_4_ = SUB164(auVar25 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._40_4_ = SUB164(auVar25 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._44_4_ = SUB164(auVar25 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._0_4_ = SUB164(auVar43,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._4_4_ = SUB164(auVar43 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._8_4_ = SUB164(auVar43 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._12_4_ = SUB164(auVar43 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._16_4_ = SUB164(auVar44,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._20_4_ = SUB164(auVar44 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._24_4_ = SUB164(auVar44 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._28_4_ = SUB164(auVar44 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._0_4_ = SUB164(auVar34,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._4_4_ = SUB164(auVar34 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._8_4_ = SUB164(auVar34 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._12_4_ = SUB164(auVar34 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._16_4_ = SUB164(auVar7,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._20_4_ = SUB164(auVar7 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._24_4_ = SUB164(auVar7 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._28_4_ = SUB164(auVar7 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._32_4_ = SUB164(auVar8,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._36_4_ = SUB164(auVar8 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._40_4_ = SUB164(auVar8 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._44_4_ = SUB164(auVar8 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._0_4_ = SUB164(auVar39,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._4_4_ = SUB164(auVar39 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._8_4_ = SUB164(auVar39 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._12_4_ = SUB164(auVar39 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._16_8_ = 0x60e130;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[0] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._32_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._40_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[96] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._104_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._112_4_ = SUB164(auVar38,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._116_4_ = SUB164(auVar38 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._120_4_ = SUB164(auVar38 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._124_4_ = SUB164(auVar38 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3216] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3248_8_ = 0x40;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3256_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3264] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3272_8_ = 9;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3280_4_ = SUB164(auVar41,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3284_4_ = SUB164(auVar41 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3288_4_ = SUB164(auVar41 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3292_4_ = SUB164(auVar41 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3312] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3320_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3336_8_ = "ntfNoRefs";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3360] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3368_8_ = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3384_8_ = "ntfAcyclic";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3408] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3416_8_ = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3432_8_ = "ntfEnumHole";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3456] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3488_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3496_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3504] = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3536_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3552] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3560_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3568_4_ = SUB164(auVar42,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3572_4_ = SUB164(auVar42 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3576_4_ = SUB164(auVar42 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3580_4_ = SUB164(auVar42 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3600] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3608_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3616_4_ = SUB164(auVar10,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3620_4_ = SUB164(auVar10 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3624_4_ = SUB164(auVar10 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3628_4_ = SUB164(auVar10 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3648] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3680_8_ = 6;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3688_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3696] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3704_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3712_4_ = SUB164(auVar45,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3716_4_ = SUB164(auVar45 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3720_4_ = SUB164(auVar45 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3724_4_ = SUB164(auVar45 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3744] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3752_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3768_8_ = "nkNone";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3792] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3800_8_ = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3816_8_ = "nkSlot";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3840] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3848_8_ = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3864_8_ = "nkList";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3888] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3896_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3912_8_ = "nkCase";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3936] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3968_8_ = 4;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3976_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3984] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3992_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4000_4_ = SUB164(auVar46,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4004_4_ = SUB164(auVar46 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4008_4_ = SUB164(auVar46 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4012_4_ = SUB164(auVar46 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4032] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4040_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4048_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4052_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4056_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4060_4_ = SUB164(auVar6 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4080] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4088_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4096_4_ = SUB164(auVar37,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4128] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4136_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4144_4_ = SUB164(auVar33,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4148_4_ = SUB164(auVar33 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4152_4_ = SUB164(auVar33 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4156_4_ = SUB164(auVar33 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4176] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4184_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4192_4_ = SUB164(auVar9,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4196_4_ = SUB164(auVar9 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4200_4_ = SUB164(auVar9 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4204_4_ = SUB164(auVar9 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4224] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4232_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4240_4_ = SUB164(auVar11,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4244_4_ = SUB164(auVar11 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4248_4_ = SUB164(auVar11 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4252_4_ = SUB164(auVar11 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4272] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4280_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4288_4_ = SUB164(auVar12,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4292_4_ = SUB164(auVar12 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4296_4_ = SUB164(auVar12 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4300_4_ = SUB164(auVar12 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4320] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4328_8_ = 0x30;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4336_4_ = SUB164(auVar16,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4340_4_ = SUB164(auVar16 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4344_4_ = SUB164(auVar16 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4348_4_ = SUB164(auVar16 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4368] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4400_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4416] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4448_8_ = 6;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4456_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4464] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4472_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4480_4_ = SUB164(auVar17,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4484_4_ = SUB164(auVar17 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4488_4_ = SUB164(auVar17 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4492_4_ = SUB164(auVar17 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4512] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4520_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4528_4_ = SUB164(auVar37,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4532_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4100_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4536_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4104_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4540_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4108_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4560] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4568_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4576_4_ = SUB164(auVar18,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4580_4_ = SUB164(auVar18 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4584_4_ = SUB164(auVar18 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4588_4_ = SUB164(auVar18 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4608] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4616_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4624_4_ = SUB164(auVar21,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4628_4_ = SUB164(auVar21 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4632_4_ = SUB164(auVar21 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4636_4_ = SUB164(auVar21 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4656] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4688_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4696_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4704] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4712_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4720_4_ = SUB164(auVar19,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4724_4_ = SUB164(auVar19 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4728_4_ = SUB164(auVar19 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4732_4_ = SUB164(auVar19 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4752] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4760_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4768_4_ = SUB164(auVar31,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4772_4_ = SUB164(auVar31 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4776_4_ = SUB164(auVar31 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4780_4_ = SUB164(auVar31 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4800] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4808_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4816_4_ = SUB164(auVar32,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4820_4_ = SUB164(auVar32 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4824_4_ = SUB164(auVar32 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4828_4_ = SUB164(auVar32 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4848] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4856_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4864_4_ = SUB164(auVar22,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4868_4_ = SUB164(auVar22 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4872_4_ = SUB164(auVar22 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4876_4_ = SUB164(auVar22 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4896] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4904_8_ = 0x30;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4912_4_ = SUB164(auVar36,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4916_4_ = SUB164(auVar36 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4920_4_ = SUB164(auVar36 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4924_4_ = SUB164(auVar36 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4944] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4976_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4992] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5024_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5040] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5072_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5088] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5120_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5136] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5168_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._16_4_ = SUB164(auVar13,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._20_4_ = SUB164(auVar13 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._24_4_ = SUB164(auVar13 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._28_4_ = SUB164(auVar13 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._32_4_ = SUB164(auVar14,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._36_4_ = SUB164(auVar14 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._40_4_ = SUB164(auVar14 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._44_4_ = SUB164(auVar14 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._48_4_ = SUB164(auVar15,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._52_4_ = SUB164(auVar15 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._56_4_ = SUB164(auVar15 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._60_4_ = SUB164(auVar15 >> 0x60,0);
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._0_8_ = 1;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._8_2_ = 0x30e;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._16_8_ = 0;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._24_8_ = 0x60e160;
  NTI_oLyohQ7O2XOvGnflOss8EA_._0_8_ = 0x18;
  NTI_oLyohQ7O2XOvGnflOss8EA_._8_2_ = 0x312;
  NTI_oLyohQ7O2XOvGnflOss8EA_._16_8_ = 0;
  NTI_oLyohQ7O2XOvGnflOss8EA_._24_8_ = 0x60e610;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._0_8_ = 8;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_[8] = 0x16;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._16_8_ = NTI_iLZrPn9anoh9ad1MmO0RczFw_;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._40_8_ = Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ;
  NTI_pPliadsJkoxIPLiuFLcL3g_._0_8_ = 0x3fff8;
  NTI_pPliadsJkoxIPLiuFLcL3g_._8_2_ = 0x310;
  NTI_pPliadsJkoxIPLiuFLcL3g_._16_8_ = NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._0_8_ = 0x38;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_[8] = 0x11;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._16_4_ = SUB164(auVar27,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._20_4_ = SUB164(auVar27 >> 0x20,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._24_4_ = SUB164(auVar27 >> 0x40,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._28_4_ = SUB164(auVar27 >> 0x60,0);
  NTI_S9agCYBinaYZnGWcjTdxclg_._0_8_ = 8;
  NTI_S9agCYBinaYZnGWcjTdxclg_._8_2_ = 0x31d;
  NTI_S9agCYBinaYZnGWcjTdxclg_._16_8_ = 0;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._0_8_ = 8;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_[8] = 0x16;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._16_8_ = NTI_XEycrCsme5C8CVWAYEcdBQ_;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._40_8_ = Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw;
  NTI_TuG1vdYwChKtx4TOkRnAjw_._24_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._0_8_ = 0x38;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_[8] = 0x11;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._16_4_ = SUB164(auVar29,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._20_4_ = SUB164(auVar29 >> 0x20,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._24_4_ = SUB164(auVar29 >> 0x40,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._28_4_ = SUB164(auVar29 >> 0x60,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._0_8_ = 0x38;
  NTI_LbeSGvgPzGzXnW9caIkJqMA_[8] = 0x11;
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._16_4_ = SUB164(auVar35,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._20_4_ = SUB164(auVar35 >> 0x20,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._24_4_ = SUB164(auVar35 >> 0x40,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._28_4_ = SUB164(auVar35 >> 0x60,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._0_8_ = 1;
  NTI_MbMVByo9a9ck632Se8onTXew_._8_2_ = 0x313;
  NTI_MbMVByo9a9ck632Se8onTXew_._16_4_ = SUB164(auVar40,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._20_4_ = SUB164(auVar40 >> 0x20,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._24_4_ = SUB164(auVar40 >> 0x40,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._28_4_ = SUB164(auVar40 >> 0x60,0);
  NTI_uB9b75OUPRENsBAu4AnoePA_._0_8_ = 8;
  NTI_uB9b75OUPRENsBAu4AnoePA_._8_2_ = 0x218;
  NTI_uB9b75OUPRENsBAu4AnoePA_._16_8_ = NTI_oLyohQ7O2XOvGnflOss8EA_;
  NTI_uB9b75OUPRENsBAu4AnoePA_._40_8_ = Marker_tySequence_uB9b75OUPRENsBAu4AnoePA;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._0_8_ = 8;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._8_2_ = 0x319;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._16_8_ = 0;
  NTI_hMQEc0FMry7Up7EoPki79aA_._0_8_ = 8;
  NTI_hMQEc0FMry7Up7EoPki79aA_._8_2_ = 0x328;
  NTI_hMQEc0FMry7Up7EoPki79aA_._16_8_ = 0;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._0_8_ = 8;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._8_2_ = 0x111;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._16_8_ = 0;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._24_8_ = 0x60e4f0;
  NTI_kT45dHShde6Al0PdS4U9aGA_._0_8_ = 0x30;
  NTI_kT45dHShde6Al0PdS4U9aGA_._8_2_ = 0x312;
  NTI_kT45dHShde6Al0PdS4U9aGA_._16_8_ = 0;
  NTI_kT45dHShde6Al0PdS4U9aGA_._24_8_ = 0x60e220;
  NTI_LEclZrWX2FQAodlapxGITw_._0_8_ = 8;
  NTI_LEclZrWX2FQAodlapxGITw_[8] = 0x16;
  NTI_LEclZrWX2FQAodlapxGITw_._16_8_ = NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
  NTI_LEclZrWX2FQAodlapxGITw_._40_8_ = Marker_tyRef_LEclZrWX2FQAodlapxGITw;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._24_8_ = 0x60e070;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._0_8_ = 8;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._8_2_ = 0x315;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._16_8_ = NTI_kT45dHShde6Al0PdS4U9aGA_;
  NTI_77mFvmsOLKik79ci2hXkHEg_._0_8_ = 8;
  NTI_77mFvmsOLKik79ci2hXkHEg_._8_2_ = 0x21c;
  NTI_77mFvmsOLKik79ci2hXkHEg_._16_8_ = 0;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._0_8_ = 0x38;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_[8] = 0x11;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._16_4_ = SUB164(auVar28,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._20_4_ = SUB164(auVar28 >> 0x20,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._24_4_ = SUB164(auVar28 >> 0x40,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._28_4_ = SUB164(auVar28 >> 0x60,0);
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._0_8_ = 8;
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._8_2_ = 0x319;
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._16_8_ = 0;
  NTI_uNps8ABY788DreuZn29bmIg_._0_8_ = 8;
  NTI_uNps8ABY788DreuZn29bmIg_._8_2_ = 0x315;
  NTI_uNps8ABY788DreuZn29bmIg_._16_8_ = NTI_pPliadsJkoxIPLiuFLcL3g_;
  NTI_XEycrCsme5C8CVWAYEcdBQ_._0_8_ = 0x38;
  NTI_XEycrCsme5C8CVWAYEcdBQ_[8] = 0x11;
  NTI_XEycrCsme5C8CVWAYEcdBQ_._16_4_ = SUB164(auVar26,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._20_4_ = SUB164(auVar26 >> 0x20,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._24_4_ = SUB164(auVar26 >> 0x40,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._28_4_ = SUB164(auVar26 >> 0x60,0);
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._0_8_ = 8;
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._8_2_ = 0x315;
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._16_8_ = NTI_TuG1vdYwChKtx4TOkRnAjw_;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._0_8_ = 8;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._8_2_ = 0x31a;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._16_8_ = 0;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._0_8_ = 0x38;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_[8] = 0x11;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._16_4_ = SUB164(auVar30,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._20_4_ = SUB164(auVar30 >> 0x20,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._24_4_ = SUB164(auVar30 >> 0x40,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._28_4_ = SUB164(auVar30 >> 0x60,0);
  NTI_unfNsxrcATrufDZmpBq4HQ_._0_8_ = 1;
  NTI_unfNsxrcATrufDZmpBq4HQ_._8_2_ = 0x30e;
  NTI_unfNsxrcATrufDZmpBq4HQ_._16_8_ = 0;
  NTI_unfNsxrcATrufDZmpBq4HQ_._24_8_ = 0x60e340;
  return;
}



void systemDatInit000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  long lVar47;
  long lVar48;
  
  auVar6 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a177);
  NTI_TuG1vdYwChKtx4TOkRnAjw_._8_2_ = 0x312;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._64_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._68_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._72_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._76_4_ = SUB164(auVar6 >> 0x60,0);
  auVar6 = movhps(ZEXT816(0x60d410),0x60d440);
  NTI_TuG1vdYwChKtx4TOkRnAjw_._16_8_ = 0;
  NTI_TuG1vdYwChKtx4TOkRnAjw_._0_8_ = 0x38;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._16_8_ = 0;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._0_8_ = 8;
  NTI_rR5Bzr1D5krxoo1NcNyeMA_._8_2_ = 799;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[48] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._56_8_ = 0;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._16_8_ = 0;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._0_8_ = 1;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._8_2_ = 0x30e;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._0_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._4_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._8_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._12_4_ = SUB164(auVar6 >> 0x60,0);
  auVar6 = (undefined  [16])0x0;
  puVar3 = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141;
  lVar4 = 0;
  do {
    lVar5 = lVar4 + 0x80;
    lVar47 = SUB168(auVar6,0);
    lVar48 = SUB168(auVar6 >> 0x40,0);
    *(long *)(puVar3 + 0x98) = lVar47;
    puVar3[0x2a0] = 1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 200),auVar6);
    *(undefined8 *)(puVar3 + 200) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x188),CONCAT88(lVar48 + 4,lVar47 + 4));
    *(undefined8 *)(puVar3 + 0x188) = uVar1;
    *(long *)(puVar3 + 0xf8) = lVar47 + 2;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x128),CONCAT88(lVar48 + 2,lVar47 + 2));
    *(undefined8 *)(puVar3 + 0x128) = uVar1;
    *(long *)(puVar3 + 0x158) = lVar47 + 4;
    *(long *)(puVar3 + 0x1b8) = lVar47 + 6;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x1e8),CONCAT88(lVar48 + 6,lVar47 + 6));
    *(undefined8 *)(puVar3 + 0x1e8) = uVar1;
    *(long *)(puVar3 + 0x218) = lVar47 + 8;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x248),CONCAT88(lVar48 + 8,lVar47 + 8));
    *(undefined8 *)(puVar3 + 0x248) = uVar1;
    *(long *)(puVar3 + 0x278) = lVar47 + 10;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x2a8),CONCAT88(lVar48 + 10,lVar47 + 10));
    *(undefined8 *)(puVar3 + 0x2a8) = uVar1;
    *(long *)(puVar3 + 0x2d8) = lVar47 + 0xc;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x308),CONCAT88(lVar48 + 0xc,lVar47 + 0xc));
    *(undefined8 *)(puVar3 + 0x308) = uVar1;
    *(long *)(puVar3 + 0x338) = lVar47 + 0xe;
    puVar3[0x90] = 1;
    puVar3[0xc0] = 1;
    puVar3[0xf0] = 1;
    puVar3[0x120] = 1;
    puVar3[0x150] = 1;
    puVar3[0x180] = 1;
    puVar3[0x1b0] = 1;
    puVar3[0x1e0] = 1;
    puVar3[0x210] = 1;
    puVar3[0x240] = 1;
    puVar3[0x270] = 1;
    puVar3[0x2d0] = 1;
    puVar3[0x300] = 1;
    puVar3[0x330] = 1;
    puVar3[0x360] = 1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x368),CONCAT88(lVar48 + 0xe,lVar47 + 0xe));
    *(undefined8 *)(puVar3 + 0x368) = uVar1;
                    // WARNING: Load size is inaccurate
    auVar6 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x50);
                    // WARNING: Load size is inaccurate
    auVar33 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x60);
                    // WARNING: Load size is inaccurate
    auVar34 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x20);
                    // WARNING: Load size is inaccurate
    auVar7 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x10);
    *(long *)(puVar3 + 0x288) = SUB168(auVar6,0);
                    // WARNING: Load size is inaccurate
    auVar8 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x30);
                    // WARNING: Load size is inaccurate
    auVar9 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x2b8),auVar6);
    *(undefined8 *)(puVar3 + 0x2b8) = uVar1;
    uVar2 = *(undefined8 *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x70);
    *(long *)(puVar3 + 0x2e8) = SUB168(auVar33,0);
                    // WARNING: Load size is inaccurate
    auVar6 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x40);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x318),auVar33);
    *(undefined8 *)(puVar3 + 0x318) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x198),auVar34);
    *(undefined8 *)(puVar3 + 0x198) = uVar1;
    auVar33 = psllq(CONCAT88(lVar48 + 3,lVar47 + 3),1);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0xd8),auVar9);
    *(undefined8 *)(puVar3 + 0xd8) = uVar1;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x138),auVar7);
    *(undefined8 *)(puVar3 + 0x138) = uVar1;
    *(long *)(puVar3 + 0x168) = SUB168(auVar34,0);
    auVar34 = psllq(CONCAT88(SUB168(auVar33 >> 0x40,0) + lVar48 + 3,SUB168(auVar33,0) + lVar47 + 3),
                    4);
                    // WARNING: Load size is inaccurate
    auVar33 = *(undefined *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_4_6131 + lVar4 + 0x70);
    *(long *)(puVar3 + 0xa8) = SUB168(auVar9,0);
    *(long *)(puVar3 + 0x108) = SUB168(auVar7,0);
    *(long *)(puVar3 + 0x1c8) = SUB168(auVar8,0);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x1f8),auVar8);
    *(undefined8 *)(puVar3 + 0x1f8) = uVar1;
    *(long *)(puVar3 + 0x228) = SUB168(auVar6,0);
    uVar1 = movhps(*(undefined8 *)(puVar3 + 600),auVar6);
    *(undefined8 *)(puVar3 + 600) = uVar1;
    *(undefined8 *)(puVar3 + 0x348) = uVar2;
    uVar1 = movhps(*(undefined8 *)(puVar3 + 0x378),auVar33);
    *(undefined8 *)(puVar3 + 0x378) = uVar1;
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 4) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 8) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0xc) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar34 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 5,lVar47 + 5),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 5,SUB168(auVar6,0) + lVar47 + 5),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x10) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x14) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x18) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x1c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 7,lVar47 + 7),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 7,SUB168(auVar6,0) + lVar47 + 7),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x20) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x24) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x28) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x2c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 9,lVar47 + 9),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 9,SUB168(auVar6,0) + lVar47 + 9),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x30) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x34) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x38) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x3c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xb,lVar47 + 0xb),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xb,SUB168(auVar6,0) + lVar47 + 0xb)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x40) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x44) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x48) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x4c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xd,lVar47 + 0xd),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xd,SUB168(auVar6,0) + lVar47 + 0xd)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x50) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x54) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x58) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x5c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = psllq(CONCAT88(lVar48 + 0xf,lVar47 + 0xf),1);
    auVar6 = psllq(CONCAT88(SUB168(auVar6 >> 0x40,0) + lVar48 + 0xf,SUB168(auVar6,0) + lVar47 + 0xf)
                   ,4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x60) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 100) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x68) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x6c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar6 >> 0x40,0)) >> 0x20);
    auVar6 = CONCAT88(lVar48 + 0x10,lVar47 + 0x10);
    auVar33 = psllq(CONCAT88(lVar48 + 0x11,lVar47 + 0x11),1);
    auVar33 = psllq(CONCAT88(SUB168(auVar33 >> 0x40,0) + lVar48 + 0x11,
                             SUB168(auVar33,0) + lVar47 + 0x11),4);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x70) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x74) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33,0)) >> 0x20);
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x78) =
         (int)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33 >> 0x40,0));
    *(int *)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129 + lVar4 + 0x7c) =
         (int)((ulong)(TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141 + SUB168(auVar33 >> 0x40,0)) >> 0x20);
    puVar3 = puVar3 + 0x300;
    lVar4 = lVar5;
  } while (lVar5 != 0x200);
  auVar31 = ZEXT816(0x60ede0);
  auVar37 = movhps(auVar31,"name");
  auVar38 = movhps(ZEXT816(0x612560),&DAT_0040a17c);
  auVar39 = movhps(ZEXT816(0x60e0d0),0x60e100);
  auVar40 = movhps(ZEXT816(0x60eca0),0x60e190);
  auVar41 = movhps(ZEXT816(0x60efc0),"flags");
  auVar42 = movhps(ZEXT816(0x612760),&DAT_0040a1a8);
  auVar43 = movhps(ZEXT816(0x60e280),0x60e2b0);
  auVar44 = movhps(ZEXT816(0x60e2e0),0x60e310);
  auVar45 = movhps(ZEXT816(0x6195a0),&DAT_0040a17c);
  auVar6 = movhps(ZEXT816(0x612760),&DAT_0040a1d0);
  auVar46 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),"offset");
  auVar33 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a1d4);
  auVar34 = movhps(ZEXT816(0x60e250),0x60e370);
  auVar7 = movhps(ZEXT816(0x60e3a0),0x60e3d0);
  auVar8 = movhps(ZEXT816(0x60e400),0x60e430);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4100_4_ = SUB164(auVar37 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4104_4_ = SUB164(auVar37 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4108_4_ = SUB164(auVar37 >> 0x60,0);
  auVar9 = movhps(ZEXT816(0x6126e0),&DAT_0040a1d8);
  auVar10 = movhps(ZEXT816(0x6125a0),&DAT_0040a1dd);
  auVar11 = movhps(ZEXT816(0x6127c0),"finalizer");
  auVar12 = movhps(ZEXT816(0x612660),"marker");
  auVar13 = movhps(ZEXT816(0x60e0a0),0x60e1c0);
  auVar14 = movhps(ZEXT816(0x60e1f0),0x60e460);
  auVar15 = movhps(ZEXT816(0x60e490),0x60e4c0);
  auVar16 = movhps(ZEXT816(0x612420),"deepcopy");
  auVar17 = movhps(ZEXT816(0x60ee20),"parent");
  auVar18 = movhps(ZEXT816(0x6125e0),&DAT_0040a203);
  auVar19 = movhps(auVar31,"procname");
  auVar20 = movhps(ZEXT816(0x60e640),0x60e670);
  auVar32 = movhps(auVar31,"filename");
  auVar31 = movhps(ZEXT816(NTI_rR5Bzr1D5krxoo1NcNyeMA_),&DAT_0040a210);
  auVar21 = movhps(ZEXT816(0x6123e0),"trace");
  auVar36 = movhps(ZEXT816(0x60ee20),&DAT_0040a22d);
  auVar22 = movhps(ZEXT816(0x612460),"raise_id");
  auVar23 = movhps(ZEXT816(0x60e550),0x60e580);
  auVar24 = movhps(ZEXT816(0x60e5b0),0x60e5e0);
  auVar25 = movhps(ZEXT816(0x60e6d0),0x60e700);
  auVar26 = movhps(ZEXT816(0x6124a0),0x60e520);
  auVar27 = movhps(ZEXT816(0x612720),0x60e730);
  auVar35 = movhps(ZEXT816(0x612720),0x60e790);
  auVar28 = movhps(ZEXT816(0x60eda0),0x60e760);
  auVar29 = movhps(ZEXT816(0x60ef60),0x60e7c0);
  auVar30 = movhps(ZEXT816(0x612620),0x60e7f0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._0_4_ = SUB164(auVar20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._4_4_ = SUB164(auVar20 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._8_4_ = SUB164(auVar20 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._12_4_ = SUB164(auVar20 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140._16_8_ = 0x60e6a0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._0_4_ = SUB164(auVar23,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._4_4_ = SUB164(auVar23 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._8_4_ = SUB164(auVar23 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._12_4_ = SUB164(auVar23 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._16_4_ = SUB164(auVar24,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._20_4_ = SUB164(auVar24 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._24_4_ = SUB164(auVar24 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._28_4_ = SUB164(auVar24 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._32_4_ = SUB164(auVar25,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._36_4_ = SUB164(auVar25 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._40_4_ = SUB164(auVar25 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139._44_4_ = SUB164(auVar25 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._0_4_ = SUB164(auVar43,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._4_4_ = SUB164(auVar43 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._8_4_ = SUB164(auVar43 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._12_4_ = SUB164(auVar43 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._16_4_ = SUB164(auVar44,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._20_4_ = SUB164(auVar44 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._24_4_ = SUB164(auVar44 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136._28_4_ = SUB164(auVar44 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._0_4_ = SUB164(auVar34,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._4_4_ = SUB164(auVar34 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._8_4_ = SUB164(auVar34 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._12_4_ = SUB164(auVar34 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._16_4_ = SUB164(auVar7,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._20_4_ = SUB164(auVar7 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._24_4_ = SUB164(auVar7 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._28_4_ = SUB164(auVar7 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._32_4_ = SUB164(auVar8,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._36_4_ = SUB164(auVar8 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._40_4_ = SUB164(auVar8 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135._44_4_ = SUB164(auVar8 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._0_4_ = SUB164(auVar39,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._4_4_ = SUB164(auVar39 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._8_4_ = SUB164(auVar39 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._12_4_ = SUB164(auVar39 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132._16_8_ = 0x60e130;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[0] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._32_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._40_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[96] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._104_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._112_4_ = SUB164(auVar38,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._116_4_ = SUB164(auVar38 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._120_4_ = SUB164(auVar38 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._124_4_ = SUB164(auVar38 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3216] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3248_8_ = 0x40;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3256_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_3_6129;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3264] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3272_8_ = 9;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3280_4_ = SUB164(auVar41,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3284_4_ = SUB164(auVar41 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3288_4_ = SUB164(auVar41 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3292_4_ = SUB164(auVar41 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3312] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3320_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3336_8_ = "ntfNoRefs";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3360] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3368_8_ = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3384_8_ = "ntfAcyclic";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3408] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3416_8_ = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3432_8_ = "ntfEnumHole";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3456] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3488_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3496_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_6_6132;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3504] = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3536_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3552] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3560_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3568_4_ = SUB164(auVar42,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3572_4_ = SUB164(auVar42 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3576_4_ = SUB164(auVar42 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3580_4_ = SUB164(auVar42 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3600] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3608_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3616_4_ = SUB164(auVar10,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3620_4_ = SUB164(auVar10 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3624_4_ = SUB164(auVar10 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3628_4_ = SUB164(auVar10 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3648] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3680_8_ = 6;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3688_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_9_6135;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3696] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3704_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3712_4_ = SUB164(auVar45,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3716_4_ = SUB164(auVar45 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3720_4_ = SUB164(auVar45 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3724_4_ = SUB164(auVar45 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3744] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3752_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3768_8_ = "nkNone";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3792] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3800_8_ = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3816_8_ = "nkSlot";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3840] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3848_8_ = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3864_8_ = "nkList";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3888] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3896_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3912_8_ = "nkCase";
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3936] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3968_8_ = 4;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3976_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_10_6136;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[3984] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._3992_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4000_4_ = SUB164(auVar46,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4004_4_ = SUB164(auVar46 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4008_4_ = SUB164(auVar46 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4012_4_ = SUB164(auVar46 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4032] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4040_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4048_4_ = SUB164(auVar6,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4052_4_ = SUB164(auVar6 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4056_4_ = SUB164(auVar6 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4060_4_ = SUB164(auVar6 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4080] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4088_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4096_4_ = SUB164(auVar37,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4128] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4136_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4144_4_ = SUB164(auVar33,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4148_4_ = SUB164(auVar33 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4152_4_ = SUB164(auVar33 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4156_4_ = SUB164(auVar33 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4176] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4184_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4192_4_ = SUB164(auVar9,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4196_4_ = SUB164(auVar9 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4200_4_ = SUB164(auVar9 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4204_4_ = SUB164(auVar9 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4224] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4232_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4240_4_ = SUB164(auVar11,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4244_4_ = SUB164(auVar11 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4248_4_ = SUB164(auVar11 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4252_4_ = SUB164(auVar11 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4272] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4280_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4288_4_ = SUB164(auVar12,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4292_4_ = SUB164(auVar12 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4296_4_ = SUB164(auVar12 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4300_4_ = SUB164(auVar12 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4320] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4328_8_ = 0x30;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4336_4_ = SUB164(auVar16,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4340_4_ = SUB164(auVar16 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4344_4_ = SUB164(auVar16 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4348_4_ = SUB164(auVar16 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4368] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4400_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4416] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4448_8_ = 6;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4456_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_15_6139;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4464] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4472_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4480_4_ = SUB164(auVar17,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4484_4_ = SUB164(auVar17 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4488_4_ = SUB164(auVar17 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4492_4_ = SUB164(auVar17 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4512] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4520_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4528_4_ = SUB164(auVar37,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4532_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4100_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4536_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4104_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4540_4_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4108_4_;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4560] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4568_8_ = 0x18;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4576_4_ = SUB164(auVar18,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4580_4_ = SUB164(auVar18 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4584_4_ = SUB164(auVar18 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4588_4_ = SUB164(auVar18 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4608] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4616_8_ = 0x20;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4624_4_ = SUB164(auVar21,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4628_4_ = SUB164(auVar21 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4632_4_ = SUB164(auVar21 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4636_4_ = SUB164(auVar21 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4656] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4688_8_ = 3;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4696_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_16_6140;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4704] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4712_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4720_4_ = SUB164(auVar19,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4724_4_ = SUB164(auVar19 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4728_4_ = SUB164(auVar19 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4732_4_ = SUB164(auVar19 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4752] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4760_8_ = 8;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4768_4_ = SUB164(auVar31,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4772_4_ = SUB164(auVar31 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4776_4_ = SUB164(auVar31 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4780_4_ = SUB164(auVar31 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4800] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4808_8_ = 0x10;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4816_4_ = SUB164(auVar32,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4820_4_ = SUB164(auVar32 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4824_4_ = SUB164(auVar32 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4828_4_ = SUB164(auVar32 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4848] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4856_8_ = 0x28;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4864_4_ = SUB164(auVar22,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4868_4_ = SUB164(auVar22 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4872_4_ = SUB164(auVar22 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4876_4_ = SUB164(auVar22 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4896] = 1;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4904_8_ = 0x30;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4912_4_ = SUB164(auVar36,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4916_4_ = SUB164(auVar36 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4920_4_ = SUB164(auVar36 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4924_4_ = SUB164(auVar36 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4944] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._4976_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[4992] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5024_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5040] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5072_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5088] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5120_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141[5136] = 2;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141._5168_8_ = 0;
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._16_4_ = SUB164(auVar13,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._20_4_ = SUB164(auVar13 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._24_4_ = SUB164(auVar13 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._28_4_ = SUB164(auVar13 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._32_4_ = SUB164(auVar14,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._36_4_ = SUB164(auVar14 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._40_4_ = SUB164(auVar14 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._44_4_ = SUB164(auVar14 >> 0x60,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._48_4_ = SUB164(auVar15,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._52_4_ = SUB164(auVar15 >> 0x20,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._56_4_ = SUB164(auVar15 >> 0x40,0);
  TM_Q5wkpxktOdTGvlSRo9bzt9aw_2_6128._60_4_ = SUB164(auVar15 >> 0x60,0);
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._0_8_ = 1;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._8_2_ = 0x30e;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._16_8_ = 0;
  NTI_v8QUszD1sWlSIWZz7mC4bQ_._24_8_ = 0x60e160;
  NTI_oLyohQ7O2XOvGnflOss8EA_._0_8_ = 0x18;
  NTI_oLyohQ7O2XOvGnflOss8EA_._8_2_ = 0x312;
  NTI_oLyohQ7O2XOvGnflOss8EA_._16_8_ = 0;
  NTI_oLyohQ7O2XOvGnflOss8EA_._24_8_ = 0x60e610;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._0_8_ = 8;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_[8] = 0x16;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._16_8_ = NTI_iLZrPn9anoh9ad1MmO0RczFw_;
  NTI_HMIVdYjdZYWskTmTQVo5BQ_._40_8_ = Marker_tyRef_HMIVdYjdZYWskTmTQVo5BQ;
  NTI_pPliadsJkoxIPLiuFLcL3g_._0_8_ = 0x3fff8;
  NTI_pPliadsJkoxIPLiuFLcL3g_._8_2_ = 0x310;
  NTI_pPliadsJkoxIPLiuFLcL3g_._16_8_ = NTI_mCkh9bHWX9bgGIYpwKekBD2Q_;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._0_8_ = 0x38;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_[8] = 0x11;
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._16_4_ = SUB164(auVar27,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._20_4_ = SUB164(auVar27 >> 0x20,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._24_4_ = SUB164(auVar27 >> 0x40,0);
  NTI_qrLSDoe2oBoAqNtJ9badtnA_._28_4_ = SUB164(auVar27 >> 0x60,0);
  NTI_S9agCYBinaYZnGWcjTdxclg_._0_8_ = 8;
  NTI_S9agCYBinaYZnGWcjTdxclg_._8_2_ = 0x31d;
  NTI_S9agCYBinaYZnGWcjTdxclg_._16_8_ = 0;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._0_8_ = 8;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_[8] = 0x16;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._16_8_ = NTI_XEycrCsme5C8CVWAYEcdBQ_;
  NTI_vU9aO9cTqOMn6CBzhV8rX7Sw_._40_8_ = Marker_tyRef_vU9aO9cTqOMn6CBzhV8rX7Sw;
  NTI_TuG1vdYwChKtx4TOkRnAjw_._24_8_ = TM_Q5wkpxktOdTGvlSRo9bzt9aw_0_6141;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._0_8_ = 0x38;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_[8] = 0x11;
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._16_4_ = SUB164(auVar29,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._20_4_ = SUB164(auVar29 >> 0x20,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._24_4_ = SUB164(auVar29 >> 0x40,0);
  NTI_vyjC2ukVFYc78nQPrSCc9bA_._28_4_ = SUB164(auVar29 >> 0x60,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._0_8_ = 0x38;
  NTI_LbeSGvgPzGzXnW9caIkJqMA_[8] = 0x11;
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._16_4_ = SUB164(auVar35,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._20_4_ = SUB164(auVar35 >> 0x20,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._24_4_ = SUB164(auVar35 >> 0x40,0);
  NTI_LbeSGvgPzGzXnW9caIkJqMA_._28_4_ = SUB164(auVar35 >> 0x60,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._0_8_ = 1;
  NTI_MbMVByo9a9ck632Se8onTXew_._8_2_ = 0x313;
  NTI_MbMVByo9a9ck632Se8onTXew_._16_4_ = SUB164(auVar40,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._20_4_ = SUB164(auVar40 >> 0x20,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._24_4_ = SUB164(auVar40 >> 0x40,0);
  NTI_MbMVByo9a9ck632Se8onTXew_._28_4_ = SUB164(auVar40 >> 0x60,0);
  NTI_uB9b75OUPRENsBAu4AnoePA_._0_8_ = 8;
  NTI_uB9b75OUPRENsBAu4AnoePA_._8_2_ = 0x218;
  NTI_uB9b75OUPRENsBAu4AnoePA_._16_8_ = NTI_oLyohQ7O2XOvGnflOss8EA_;
  NTI_uB9b75OUPRENsBAu4AnoePA_._40_8_ = Marker_tySequence_uB9b75OUPRENsBAu4AnoePA;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._0_8_ = 8;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._8_2_ = 0x319;
  NTI_WSm2xU5ARYv9aAR4l0z9c9auQ_._16_8_ = 0;
  NTI_hMQEc0FMry7Up7EoPki79aA_._0_8_ = 8;
  NTI_hMQEc0FMry7Up7EoPki79aA_._8_2_ = 0x328;
  NTI_hMQEc0FMry7Up7EoPki79aA_._16_8_ = 0;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._0_8_ = 8;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._8_2_ = 0x111;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._16_8_ = 0;
  NTI_ytyiCJqK439aF9cIibuRVpAg_._24_8_ = 0x60e4f0;
  NTI_kT45dHShde6Al0PdS4U9aGA_._0_8_ = 0x30;
  NTI_kT45dHShde6Al0PdS4U9aGA_._8_2_ = 0x312;
  NTI_kT45dHShde6Al0PdS4U9aGA_._16_8_ = 0;
  NTI_kT45dHShde6Al0PdS4U9aGA_._24_8_ = 0x60e220;
  NTI_LEclZrWX2FQAodlapxGITw_._0_8_ = 8;
  NTI_LEclZrWX2FQAodlapxGITw_[8] = 0x16;
  NTI_LEclZrWX2FQAodlapxGITw_._16_8_ = NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
  NTI_LEclZrWX2FQAodlapxGITw_._40_8_ = Marker_tyRef_LEclZrWX2FQAodlapxGITw;
  NTI_jIBKr1ejBgsfM33Kxw4j7A_._24_8_ = 0x60e070;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._0_8_ = 8;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._8_2_ = 0x315;
  NTI_mCkh9bHWX9bgGIYpwKekBD2Q_._16_8_ = NTI_kT45dHShde6Al0PdS4U9aGA_;
  NTI_77mFvmsOLKik79ci2hXkHEg_._0_8_ = 8;
  NTI_77mFvmsOLKik79ci2hXkHEg_._8_2_ = 0x21c;
  NTI_77mFvmsOLKik79ci2hXkHEg_._16_8_ = 0;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._0_8_ = 0x38;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_[8] = 0x11;
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._16_4_ = SUB164(auVar28,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._20_4_ = SUB164(auVar28 >> 0x20,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._24_4_ = SUB164(auVar28 >> 0x40,0);
  NTI_iLZrPn9anoh9ad1MmO0RczFw_._28_4_ = SUB164(auVar28 >> 0x60,0);
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._0_8_ = 8;
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._8_2_ = 0x319;
  NTI_ojoeKfW4VYIm36I9cpDTQIg_._16_8_ = 0;
  NTI_uNps8ABY788DreuZn29bmIg_._0_8_ = 8;
  NTI_uNps8ABY788DreuZn29bmIg_._8_2_ = 0x315;
  NTI_uNps8ABY788DreuZn29bmIg_._16_8_ = NTI_pPliadsJkoxIPLiuFLcL3g_;
  NTI_XEycrCsme5C8CVWAYEcdBQ_._0_8_ = 0x38;
  NTI_XEycrCsme5C8CVWAYEcdBQ_[8] = 0x11;
  NTI_XEycrCsme5C8CVWAYEcdBQ_._16_4_ = SUB164(auVar26,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._20_4_ = SUB164(auVar26 >> 0x20,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._24_4_ = SUB164(auVar26 >> 0x40,0);
  NTI_XEycrCsme5C8CVWAYEcdBQ_._28_4_ = SUB164(auVar26 >> 0x60,0);
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._0_8_ = 8;
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._8_2_ = 0x315;
  NTI_7JWFFgr9aqaR3U4iXEpLCag_._16_8_ = NTI_TuG1vdYwChKtx4TOkRnAjw_;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._0_8_ = 8;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._8_2_ = 0x31a;
  NTI_vr5DoT1jILTGdRlYv1OYpw_._16_8_ = 0;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._0_8_ = 0x38;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_[8] = 0x11;
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._16_4_ = SUB164(auVar30,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._20_4_ = SUB164(auVar30 >> 0x20,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._24_4_ = SUB164(auVar30 >> 0x40,0);
  NTI_KGSY1JdrNB7Xi8KDhXFhSg_._28_4_ = SUB164(auVar30 >> 0x60,0);
  NTI_unfNsxrcATrufDZmpBq4HQ_._0_8_ = 1;
  NTI_unfNsxrcATrufDZmpBq4HQ_._8_2_ = 0x30e;
  NTI_unfNsxrcATrufDZmpBq4HQ_._16_8_ = 0;
  NTI_unfNsxrcATrufDZmpBq4HQ_._24_8_ = 0x60e340;
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
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


