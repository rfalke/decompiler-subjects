typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong sizetype;

typedef dword uint32_t;

typedef uchar uint8_t;

typedef ulong size_t;

typedef long __off_t;

typedef sqword __off64_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

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

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100680(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
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

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention

int main(void)

{
  uint32_t uVar1;
  
  uVar1 = rc_crc32(0,"The quick brown fox jumps over the lazy dog",0x2b);
  printf("%X\n",(ulong)uVar1);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100770)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100798)
// WARNING: Removing unreachable block (ram,0x001007a4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001007d4)
// WARNING: Removing unreachable block (ram,0x001007e0)

void register_tm_clones(void)

{
  return;
}



void FUN_001007ec(void)

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



// WARNING: Removing unreachable block (ram,0x00100850)
// WARNING: Removing unreachable block (ram,0x0010085c)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

uint32_t rc_crc32(uint32_t crc,char *buf,size_t len)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined3 uVar9;
  uint uVar10;
  char *p;
  uint8_t *octet;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *q;
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
  uint uVar31;
  undefined8 uVar32;
  uint uVar33;
  undefined8 uVar34;
  uint uVar35;
  byte bVar36;
  undefined uVar37;
  undefined uVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  
  if (have_table_3572 == 0) {
    uVar34 = 0x300000002;
    uVar32 = 0x100000000;
    puVar11 = (undefined8 *)table_3571;
    do {
      uVar31 = (uint)uVar32;
      bVar36 = (byte)((ulong)uVar32 >> 0x18) >> 1;
      uVar33 = (uint)((ulong)uVar32 >> 0x20);
      uVar10 = uVar33 >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = (byte)((ulong)uVar32 >> 0x39);
      uVar7 = (uint)uVar34 >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = (byte)((ulong)uVar34 >> 0x18) >> 1;
      uVar35 = (uint)((ulong)uVar34 >> 0x20);
      uVar8 = uVar35 >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = (byte)((ulong)uVar34 >> 0x39);
      auVar13._0_5_ = ((uint5)(byte)((ulong)uVar32 >> 0x20) & 1) << 0x20;
      auVar13._5_7_ = 0;
      auVar13[12] = (byte)((ulong)uVar34 >> 0x20) & 1;
      auVar13._13_3_ = 0;
      uVar32 = CONCAT44(uVar33 + 4,uVar31 + 4);
      uVar34 = CONCAT44(uVar35 + 4,(uint)uVar34 + 4);
      uVar9 = (undefined3)(uVar31 >> 1);
      auVar23._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar23[8] = (byte)uVar7 ^ 0x20;
      auVar23[9] = bVar40 ^ 0x83;
      auVar23[10] = bVar41 ^ 0xb8;
      auVar23[11] = bVar42 ^ 0xed;
      auVar23[12] = (byte)uVar8 ^ 0x20;
      auVar23[13] = bVar43 ^ 0x83;
      auVar23[14] = bVar44 ^ 0xb8;
      auVar23[15] = bVar45 ^ 0xed;
      auVar14 = NEON_cmeq(auVar13,0,2);
      auVar15[3] = bVar36;
      auVar15._0_3_ = uVar9;
      auVar15[4] = (char)uVar10;
      auVar15[5] = uVar37;
      auVar15[6] = uVar38;
      auVar15[7] = bVar39;
      auVar15[8] = (byte)uVar7;
      auVar15[9] = bVar40;
      auVar15[10] = bVar41;
      auVar15[11] = bVar42;
      auVar15[12] = (byte)uVar8;
      auVar15[13] = bVar43;
      auVar15[14] = bVar44;
      auVar15[15] = bVar45;
      auVar15 = NEON_bsl(auVar14,auVar15,auVar23,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar24._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar24._5_3_ = 0;
      auVar24[8] = auVar15[8] & 1;
      auVar24._9_3_ = 0;
      auVar24[12] = auVar15[12] & 1;
      auVar24._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar16._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar16[8] = (byte)uVar7 ^ 0x20;
      auVar16[9] = bVar40 ^ 0x83;
      auVar16[10] = bVar41 ^ 0xb8;
      auVar16[11] = bVar42 ^ 0xed;
      auVar16[12] = (byte)uVar8 ^ 0x20;
      auVar16[13] = bVar43 ^ 0x83;
      auVar16[14] = bVar44 ^ 0xb8;
      auVar16[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar24,0,2);
      auVar14[3] = bVar36;
      auVar14._0_3_ = uVar9;
      auVar14[4] = (char)uVar10;
      auVar14[5] = uVar37;
      auVar14[6] = uVar38;
      auVar14[7] = bVar39;
      auVar14[8] = (byte)uVar7;
      auVar14[9] = bVar40;
      auVar14[10] = bVar41;
      auVar14[11] = bVar42;
      auVar14[12] = (byte)uVar8;
      auVar14[13] = bVar43;
      auVar14[14] = bVar44;
      auVar14[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar14,auVar16,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar17._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar17._5_3_ = 0;
      auVar17[8] = auVar15[8] & 1;
      auVar17._9_3_ = 0;
      auVar17[12] = auVar15[12] & 1;
      auVar17._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar25._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar25[8] = (byte)uVar7 ^ 0x20;
      auVar25[9] = bVar40 ^ 0x83;
      auVar25[10] = bVar41 ^ 0xb8;
      auVar25[11] = bVar42 ^ 0xed;
      auVar25[12] = (byte)uVar8 ^ 0x20;
      auVar25[13] = bVar43 ^ 0x83;
      auVar25[14] = bVar44 ^ 0xb8;
      auVar25[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar17,0,2);
      auVar1[3] = bVar36;
      auVar1._0_3_ = uVar9;
      auVar1[4] = (char)uVar10;
      auVar1[5] = uVar37;
      auVar1[6] = uVar38;
      auVar1[7] = bVar39;
      auVar1[8] = (byte)uVar7;
      auVar1[9] = bVar40;
      auVar1[10] = bVar41;
      auVar1[11] = bVar42;
      auVar1[12] = (byte)uVar8;
      auVar1[13] = bVar43;
      auVar1[14] = bVar44;
      auVar1[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar1,auVar25,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar26._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar26._5_3_ = 0;
      auVar26[8] = auVar15[8] & 1;
      auVar26._9_3_ = 0;
      auVar26[12] = auVar15[12] & 1;
      auVar26._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar18._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar18[8] = (byte)uVar7 ^ 0x20;
      auVar18[9] = bVar40 ^ 0x83;
      auVar18[10] = bVar41 ^ 0xb8;
      auVar18[11] = bVar42 ^ 0xed;
      auVar18[12] = (byte)uVar8 ^ 0x20;
      auVar18[13] = bVar43 ^ 0x83;
      auVar18[14] = bVar44 ^ 0xb8;
      auVar18[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar26,0,2);
      auVar2[3] = bVar36;
      auVar2._0_3_ = uVar9;
      auVar2[4] = (char)uVar10;
      auVar2[5] = uVar37;
      auVar2[6] = uVar38;
      auVar2[7] = bVar39;
      auVar2[8] = (byte)uVar7;
      auVar2[9] = bVar40;
      auVar2[10] = bVar41;
      auVar2[11] = bVar42;
      auVar2[12] = (byte)uVar8;
      auVar2[13] = bVar43;
      auVar2[14] = bVar44;
      auVar2[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar2,auVar18,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar19._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar19._5_3_ = 0;
      auVar19[8] = auVar15[8] & 1;
      auVar19._9_3_ = 0;
      auVar19[12] = auVar15[12] & 1;
      auVar19._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar27._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar27[8] = (byte)uVar7 ^ 0x20;
      auVar27[9] = bVar40 ^ 0x83;
      auVar27[10] = bVar41 ^ 0xb8;
      auVar27[11] = bVar42 ^ 0xed;
      auVar27[12] = (byte)uVar8 ^ 0x20;
      auVar27[13] = bVar43 ^ 0x83;
      auVar27[14] = bVar44 ^ 0xb8;
      auVar27[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar19,0,2);
      auVar3[3] = bVar36;
      auVar3._0_3_ = uVar9;
      auVar3[4] = (char)uVar10;
      auVar3[5] = uVar37;
      auVar3[6] = uVar38;
      auVar3[7] = bVar39;
      auVar3[8] = (byte)uVar7;
      auVar3[9] = bVar40;
      auVar3[10] = bVar41;
      auVar3[11] = bVar42;
      auVar3[12] = (byte)uVar8;
      auVar3[13] = bVar43;
      auVar3[14] = bVar44;
      auVar3[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar3,auVar27,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar28._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar28._5_3_ = 0;
      auVar28[8] = auVar15[8] & 1;
      auVar28._9_3_ = 0;
      auVar28[12] = auVar15[12] & 1;
      auVar28._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar20._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar20[8] = (byte)uVar7 ^ 0x20;
      auVar20[9] = bVar40 ^ 0x83;
      auVar20[10] = bVar41 ^ 0xb8;
      auVar20[11] = bVar42 ^ 0xed;
      auVar20[12] = (byte)uVar8 ^ 0x20;
      auVar20[13] = bVar43 ^ 0x83;
      auVar20[14] = bVar44 ^ 0xb8;
      auVar20[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar28,0,2);
      auVar4[3] = bVar36;
      auVar4._0_3_ = uVar9;
      auVar4[4] = (char)uVar10;
      auVar4[5] = uVar37;
      auVar4[6] = uVar38;
      auVar4[7] = bVar39;
      auVar4[8] = (byte)uVar7;
      auVar4[9] = bVar40;
      auVar4[10] = bVar41;
      auVar4[11] = bVar42;
      auVar4[12] = (byte)uVar8;
      auVar4[13] = bVar43;
      auVar4[14] = bVar44;
      auVar4[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar4,auVar20,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar21._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar21._5_3_ = 0;
      auVar21[8] = auVar15[8] & 1;
      auVar21._9_3_ = 0;
      auVar21[12] = auVar15[12] & 1;
      auVar21._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar29._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar29[8] = (byte)uVar7 ^ 0x20;
      auVar29[9] = bVar40 ^ 0x83;
      auVar29[10] = bVar41 ^ 0xb8;
      auVar29[11] = bVar42 ^ 0xed;
      auVar29[12] = (byte)uVar8 ^ 0x20;
      auVar29[13] = bVar43 ^ 0x83;
      auVar29[14] = bVar44 ^ 0xb8;
      auVar29[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar21,0,2);
      auVar5[3] = bVar36;
      auVar5._0_3_ = uVar9;
      auVar5[4] = (char)uVar10;
      auVar5[5] = uVar37;
      auVar5[6] = uVar38;
      auVar5[7] = bVar39;
      auVar5[8] = (byte)uVar7;
      auVar5[9] = bVar40;
      auVar5[10] = bVar41;
      auVar5[11] = bVar42;
      auVar5[12] = (byte)uVar8;
      auVar5[13] = bVar43;
      auVar5[14] = bVar44;
      auVar5[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar5,auVar29,1);
      bVar36 = auVar15[3] >> 1;
      uVar10 = auVar15._4_4_ >> 1;
      uVar37 = (undefined)(uVar10 >> 8);
      uVar38 = (undefined)(uVar10 >> 0x10);
      bVar39 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar40 = (byte)(uVar7 >> 8);
      bVar41 = (byte)(uVar7 >> 0x10);
      bVar42 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar43 = (byte)(uVar8 >> 8);
      bVar44 = (byte)(uVar8 >> 0x10);
      bVar45 = auVar15[15] >> 1;
      auVar22._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar22._5_3_ = 0;
      auVar22[8] = auVar15[8] & 1;
      auVar22._9_3_ = 0;
      auVar22[12] = auVar15[12] & 1;
      auVar22._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar30._0_8_ =
           CONCAT17(bVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar10,
                                                                    CONCAT13(bVar36,uVar9))))) ^
           0xedb88320edb88320;
      auVar30[8] = (byte)uVar7 ^ 0x20;
      auVar30[9] = bVar40 ^ 0x83;
      auVar30[10] = bVar41 ^ 0xb8;
      auVar30[11] = bVar42 ^ 0xed;
      auVar30[12] = (byte)uVar8 ^ 0x20;
      auVar30[13] = bVar43 ^ 0x83;
      auVar30[14] = bVar44 ^ 0xb8;
      auVar30[15] = bVar45 ^ 0xed;
      auVar15 = NEON_cmeq(auVar22,0,2);
      auVar6[3] = bVar36;
      auVar6._0_3_ = uVar9;
      auVar6[4] = (char)uVar10;
      auVar6[5] = uVar37;
      auVar6[6] = uVar38;
      auVar6[7] = bVar39;
      auVar6[8] = (byte)uVar7;
      auVar6[9] = bVar40;
      auVar6[10] = bVar41;
      auVar6[11] = bVar42;
      auVar6[12] = (byte)uVar8;
      auVar6[13] = bVar43;
      auVar6[14] = bVar44;
      auVar6[15] = bVar45;
      auVar15 = NEON_bsl(auVar15,auVar6,auVar30,1);
      puVar12 = puVar11 + 2;
      puVar11[1] = auVar15._8_8_;
      *puVar11 = auVar15._0_8_;
      puVar11 = puVar12;
    } while (puVar12 != (undefined8 *)&_bss_end__);
    have_table_3572 = 1;
  }
  uVar10 = ~crc;
  octet = (uint8_t *)buf;
  if (buf < buf + len) {
    do {
      octet = octet + 1;
      uVar10 = *(uint *)(table_3571 + (ulong)(byte)((byte)uVar10 ^ *octet) * 4) ^ uVar10 >> 8;
      octet = octet;
    } while ((uint8_t *)(buf + len) != octet);
  }
  return ~uVar10;
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


