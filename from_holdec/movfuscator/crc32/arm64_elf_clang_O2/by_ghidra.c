typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef ulong sizetype;

typedef ulong size_t;

typedef uint uint32_t;

typedef uchar uint8_t;

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



void FUN_00400430(void)

{
  (*(code *)(undefined *)0x0)();
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



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x004004e8)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00400510)
// WARNING: Removing unreachable block (ram,0x00400518)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400554)
// WARNING: Removing unreachable block (ram,0x0040055c)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004005c0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



uint32_t rc_crc32(uint32_t crc,char *buf,size_t len)

{
  byte *pbVar1;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  byte *pbVar2;
  
  if ((rc_crc32_have_table & 1) == 0) {
    lVar3 = 0;
    puVar4 = (undefined8 *)rc_crc32::table;
    do {
      uVar11 = (uint)lVar3;
      uVar5 = uVar11 + 1;
      uVar7 = uVar11 + 2;
      uVar9 = uVar11 + 3;
      uVar6 = uVar5 >> 1;
      uVar8 = uVar7 >> 1;
      uVar10 = uVar9 >> 1;
      auVar12 = NEON_cmeq(ZEXT1316(CONCAT112((char)uVar9,
                                             ZEXT912(CONCAT18((char)uVar7,
                                                              (ulong)(((uint5)(byte)uVar5 & 1) <<
                                                                     0x20)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar13 = NEON_bsl(auVar12,CONCAT412(uVar10,CONCAT48(uVar8,CONCAT44(uVar6,uVar11 >> 1))),
                         CONCAT115((byte)(uVar9 >> 0x19),
                                   CONCAT114((char)(uVar10 >> 0x10),
                                             CONCAT113((char)(uVar10 >> 8),
                                                       CONCAT112((char)uVar10,
                                                                 CONCAT111((byte)(uVar7 >> 0x19),
                                                                           CONCAT110((char)(uVar8 >>
                                                                                           0x10),
                                                                                     CONCAT19((char)
                                                  (uVar8 >> 8),
                                                  CONCAT18((char)uVar8,
                                                           CONCAT17((byte)(uVar5 >> 0x19),
                                                                    CONCAT16((char)(uVar6 >> 0x10),
                                                                             CONCAT15((char)(uVar6 
                                                  >> 8),CONCAT14((char)uVar6,
                                                                 uVar11 >> 1 & 0xffffff |
                                                                 (uVar11 >> 0x19) << 0x18)))))))))))
                                  ),1);
      uVar11 = SUB164(auVar13,0) >> 1;
      uVar5 = SUB164(auVar13 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar13 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar13 >> 0x61,0);
      auVar12 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar13 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar13 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar13 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar13
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar12 = NEON_bsl(auVar12,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar13 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar13 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar13 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar13 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      uVar11 = SUB164(auVar12,0) >> 1;
      uVar5 = SUB164(auVar12 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar12 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar12 >> 0x61,0);
      auVar13 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar12 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar12 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar12 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar12
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar13 = NEON_bsl(auVar13,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar12 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar12 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar12 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar12 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      uVar11 = SUB164(auVar13,0) >> 1;
      uVar5 = SUB164(auVar13 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar13 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar13 >> 0x61,0);
      auVar12 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar13 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar13 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar13 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar13
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar12 = NEON_bsl(auVar12,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar13 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar13 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar13 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar13 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      uVar11 = SUB164(auVar12,0) >> 1;
      uVar5 = SUB164(auVar12 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar12 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar12 >> 0x61,0);
      auVar13 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar12 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar12 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar12 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar12
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar13 = NEON_bsl(auVar13,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar12 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar12 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar12 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar12 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      uVar11 = SUB164(auVar13,0) >> 1;
      uVar5 = SUB164(auVar13 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar13 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar13 >> 0x61,0);
      auVar12 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar13 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar13 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar13 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar13
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar12 = NEON_bsl(auVar12,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar13 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar13 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar13 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar13 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      uVar11 = SUB164(auVar12,0) >> 1;
      uVar5 = SUB164(auVar12 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar12 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar12 >> 0x61,0);
      auVar13 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar12 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar12 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar12 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar12
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar13 = NEON_bsl(auVar13,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar12 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar12 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar12 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar12 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      uVar11 = SUB164(auVar13,0) >> 1;
      uVar5 = SUB164(auVar13 >> 0x20,0) >> 1;
      uVar6 = SUB164(auVar13 >> 0x40,0) >> 1;
      uVar7 = SUB164(auVar13 >> 0x61,0);
      auVar12 = NEON_cmeq(ZEXT1316(CONCAT112(SUB161(auVar13 >> 0x60,0),
                                             ZEXT912(CONCAT18(SUB161(auVar13 >> 0x40,0),
                                                              (ulong)(CONCAT14(SUB161(auVar13 >>
                                                                                      0x20,0),
                                                                               (uint)(SUB161(auVar13
                                                  ,0) & 1)) & 0x1ffffffff)) & 0xffffffffffffffff)) &
                                   (undefined  [13])0xffffffffffffffff),0,2);
      auVar12 = NEON_bsl(auVar12,CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar11))),
                         CONCAT115(SUB161(auVar13 >> 0x79,0),
                                   CONCAT114((char)(uVar7 >> 0x10),
                                             CONCAT113((char)(uVar7 >> 8),
                                                       CONCAT112((char)uVar7,
                                                                 CONCAT111(SUB161(auVar13 >> 0x58,0)
                                                                           >> 1,CONCAT110((char)(
                                                  uVar6 >> 0x10),
                                                  CONCAT19((char)(uVar6 >> 8),
                                                           CONCAT18((char)uVar6,
                                                                    CONCAT17(SUB161(auVar13 >> 0x38,
                                                                                    0) >> 1,
                                                                             CONCAT16((char)(uVar5 
                                                  >> 0x10),CONCAT15((char)(uVar5 >> 8),
                                                                    CONCAT14((char)uVar5,
                                                                             uVar11 & 0xffffff |
                                                                             (uint)(byte)(SUB161(
                                                  auVar13 >> 0x18,0) >> 1) << 0x18)))))))))))),1);
      lVar3 = lVar3 + 4;
      puVar4[1] = SUB168(auVar12 >> 0x40,0);
      *puVar4 = SUB168(auVar12,0);
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x100);
    rc_crc32_have_table = 1;
  }
  uVar11 = ~crc;
  if (0 < (long)len) {
    pbVar2 = (byte *)buf;
    do {
      pbVar1 = pbVar2 + 1;
      uVar11 = rc_crc32::table[(uint)*pbVar2 ^ uVar11 & 0xff] ^ uVar11 >> 8;
      pbVar2 = pbVar1;
    } while (pbVar1 < buf + len);
  }
  return ~uVar11;
}



int main(void)

{
  uint32_t uVar1;
  
  uVar1 = rc_crc32(0,"The quick brown fox jumps over the lazy dog",0x2b);
  printf("%X\n",(ulong)uVar1);
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


