typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ulong size_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
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
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void processEntry _start(int __status)

{
  undefined4 in_register_00000014;
  undefined8 in_stack_00000000;
  undefined auStack_8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,
                    CONCAT44(in_register_00000014,__status),auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040109d)
// WARNING: Removing unreachable block (ram,0x004010a7)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004010df)
// WARNING: Removing unreachable block (ram,0x004010e9)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 main(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ssize_t sVar20;
  char *pcVar21;
  undefined2 *puVar22;
  char cVar23;
  long lVar24;
  long lVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  size_t __n;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined2 *puVar38;
  undefined2 *puVar39;
  
  puVar38 = &main_buf;
  do {
    for (; 0xffff < (long)(puVar38 + -0x203800); puVar38 = puVar38 + -0x8000) {
      __n = 0x10000;
      puVar26 = &main_buf;
      do {
        sVar20 = write(1,puVar26,__n);
        if (-1 < sVar20) {
          puVar26 = (undefined2 *)((long)puVar26 + sVar20);
        }
        uVar31 = (int)__n - (~(uint)(sVar20 >> 0x3f) & (uint)sVar20);
        __n = (size_t)uVar31;
      } while (uVar31 != 0);
      memcpy(&main_buf,&DAT_00417000,(long)(puVar38 + -0x203800) % 0x10000);
    }
    uVar31 = (uint)(byte)main_counter[0];
    uVar36 = 0x3e - uVar31;
    puVar26 = (undefined2 *)(main_counter + (ulong)uVar31 + 1);
    uVar37 = uVar36 & 3;
    if (uVar37 == 1) {
      *(undefined *)puVar38 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
      puVar39 = (undefined2 *)((long)puVar38 + 1);
    }
    else {
      puVar39 = puVar38;
      puVar22 = puVar26;
      if (uVar37 != 2) {
        puVar27 = puVar26;
        if (uVar37 != 3) goto joined_r0x00401515;
        puVar22 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
        puVar39 = (undefined2 *)((long)puVar38 + 1);
        *(undefined *)puVar38 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar39 = *puVar22;
      puVar39 = puVar39 + 1;
    }
joined_r0x00401515:
    if ((uVar36 & 0xfffffffc) != 0) {
      uVar33 = uVar36 & 0xfffffffc;
      uVar35 = uVar33 - 4;
      if ((0x3b < uVar35) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar35 + 4) <= puVar39 ||
          ((undefined2 *)((long)puVar39 + (ulong)uVar35 + 4) <= puVar27)))) {
        uVar28 = 0;
        uVar32 = (uVar35 >> 2) + 1;
        uVar35 = uVar32 & 0xfffffff0;
        uVar30 = (ulong)uVar35;
        uVar33 = uVar33 + uVar35 * -4;
        do {
          puVar2 = (undefined4 *)(puVar27 + uVar28 * 2);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          uVar8 = puVar2[4];
          uVar9 = puVar2[5];
          uVar10 = puVar2[6];
          uVar11 = puVar2[7];
          puVar1 = (undefined4 *)(puVar27 + uVar28 * 2 + 0x10);
          uVar12 = *puVar1;
          uVar13 = puVar1[1];
          uVar14 = puVar1[2];
          uVar15 = puVar1[3];
          uVar16 = puVar1[4];
          uVar17 = puVar1[5];
          uVar18 = puVar1[6];
          uVar19 = puVar1[7];
          puVar1 = (undefined4 *)(puVar39 + uVar28 * 2);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          puVar1[4] = uVar8;
          puVar1[5] = uVar9;
          puVar1[6] = uVar10;
          puVar1[7] = uVar11;
          puVar1 = (undefined4 *)(puVar39 + uVar28 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar28 = uVar28 + 0x10;
        } while (uVar30 != uVar28);
        puVar39 = puVar39 + uVar30 * 2;
        puVar27 = puVar27 + uVar30 * 2;
        if (uVar30 == uVar32) goto LAB_004012ce;
      }
      lVar24 = 0;
      do {
        *(undefined4 *)((long)puVar39 + lVar24) = *(undefined4 *)((long)puVar27 + lVar24);
        lVar24 = lVar24 + 4;
      } while (uVar33 != (uint)lVar24);
    }
LAB_004012ce:
    uVar35 = uVar36 & 0xfffffffc;
    uVar30 = (ulong)uVar36;
    puVar39 = (undefined2 *)((long)puVar38 + uVar30 + 2);
    *(undefined2 *)((long)puVar38 + uVar30) = 0xa31;
    if (uVar37 == 1) {
      *(undefined *)puVar39 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
      puVar38 = (undefined2 *)((long)puVar39 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar39;
      if (uVar37 != 2) {
        puVar27 = puVar26;
        if (uVar37 != 3) goto joined_r0x00401534;
        puVar22 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
        puVar38 = (undefined2 *)((long)puVar39 + 1);
        *(undefined *)puVar39 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401534:
    if (uVar35 != 0) {
      uVar36 = uVar35 - 4;
      uVar33 = uVar35;
      if ((0x3b < uVar36) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar36 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar36 + 4) <= puVar27)))) {
        uVar34 = 0;
        uVar32 = (uVar36 >> 2) + 1;
        uVar36 = uVar32 & 0xfffffff0;
        uVar28 = (ulong)uVar36;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar34 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar34 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar34 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar34 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar34 = uVar34 + 0x10;
        } while (uVar28 != uVar34);
        puVar27 = puVar27 + uVar28 * 2;
        puVar38 = puVar38 + uVar28 * 2;
        uVar33 = uVar35 + uVar36 * -4;
        if (uVar28 == uVar32) goto LAB_0040136e;
      }
      lVar24 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar24) = *(undefined4 *)((long)puVar27 + lVar24);
        lVar24 = lVar24 + 4;
      } while (uVar33 != (uint)lVar24);
    }
LAB_0040136e:
    lVar24 = uVar30 + 2;
    puVar38 = (undefined2 *)((long)puVar39 + uVar30 + 7);
    *(undefined2 *)((long)puVar39 + uVar30) = 0xa32;
    *(undefined *)((long)puVar39 + uVar30 + 6) = 10;
    *(undefined4 *)((long)puVar39 + lVar24) = 0x7a7a6946;
    if (uVar37 == 1) {
      *(undefined *)puVar38 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
      puVar39 = (undefined2 *)((long)puVar38 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar39 = puVar38;
      if (uVar37 != 2) {
        puVar27 = puVar26;
        if (uVar37 != 3) goto joined_r0x00401550;
        puVar22 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
        puVar39 = (undefined2 *)((long)puVar38 + 1);
        *(undefined *)puVar38 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar39 = *puVar22;
      puVar39 = puVar39 + 1;
    }
joined_r0x00401550:
    if (uVar35 != 0) {
      uVar36 = uVar35 - 4;
      uVar33 = uVar35;
      if ((0x3b < uVar36) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar36 + 4) <= puVar39 ||
          ((undefined2 *)((long)puVar39 + (ulong)uVar36 + 4) <= puVar27)))) {
        uVar34 = 0;
        uVar32 = (uVar36 >> 2) + 1;
        uVar36 = uVar32 & 0xfffffff0;
        uVar28 = (ulong)uVar36;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar34 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar34 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar39 + uVar34 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar39 + uVar34 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar34 = uVar34 + 0x10;
        } while (uVar28 != uVar34);
        puVar27 = puVar27 + uVar28 * 2;
        puVar39 = puVar39 + uVar28 * 2;
        uVar33 = uVar35 + uVar36 * -4;
        if (uVar28 == uVar32) goto LAB_0040140e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar39 + lVar25) = *(undefined4 *)((long)puVar27 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar33 != (uint)lVar25);
    }
LAB_0040140e:
    puVar39 = (undefined2 *)((long)puVar38 + uVar30 + 0xc);
    *(undefined2 *)((long)puVar38 + uVar30) = 0xa34;
    *(undefined2 *)((long)puVar38 + uVar30 + 10) = 0xa7a;
    *(undefined8 *)((long)puVar38 + lVar24) = 0x7a69460a7a7a7542;
    if (uVar37 == 1) {
      *(undefined *)puVar39 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
      puVar38 = (undefined2 *)((long)puVar39 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar39;
      if (uVar37 != 2) {
        puVar27 = puVar26;
        if (uVar37 != 3) goto joined_r0x00401571;
        puVar22 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
        puVar38 = (undefined2 *)((long)puVar39 + 1);
        *(undefined *)puVar39 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401571:
    if (uVar35 != 0) {
      uVar36 = uVar35 - 4;
      uVar33 = uVar35;
      if ((0x3b < uVar36) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar36 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar36 + 4) <= puVar27)))) {
        uVar34 = 0;
        uVar32 = (uVar36 >> 2) + 1;
        uVar36 = uVar32 & 0xfffffff0;
        uVar28 = (ulong)uVar36;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar34 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar34 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar34 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar34 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar34 = uVar34 + 0x10;
        } while (uVar28 != uVar34);
        puVar27 = puVar27 + uVar28 * 2;
        puVar38 = puVar38 + uVar28 * 2;
        uVar33 = uVar35 + uVar36 * -4;
        if (uVar28 == uVar32) goto LAB_004014be;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar27 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar33 != (uint)lVar25);
    }
LAB_004014be:
    *(undefined2 *)((long)puVar39 + uVar30) = 0xa37;
    puVar39 = (undefined2 *)((long)puVar39 + lVar24);
    if (uVar37 == 1) {
      uVar3 = *(undefined *)puVar26;
      puVar26 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
      *(undefined *)puVar39 = uVar3;
      puVar38 = (undefined2 *)((long)puVar39 + 1);
    }
    else {
      puVar38 = puVar39;
      if (uVar37 != 2) {
        if (uVar37 != 3) goto joined_r0x004015c6;
        uVar3 = *(undefined *)puVar26;
        puVar26 = (undefined2 *)(main_counter + (ulong)uVar31 + 2);
        *(undefined *)puVar39 = uVar3;
        puVar38 = (undefined2 *)((long)puVar39 + 1);
      }
      uVar4 = *puVar26;
      puVar26 = puVar26 + 1;
      *puVar38 = uVar4;
      puVar38 = puVar38 + 1;
    }
joined_r0x004015c6:
    if (uVar35 != 0) {
      uVar31 = uVar35 - 4;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar26 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar26)))) {
        uVar28 = 0;
        uVar31 = (uVar31 >> 2) + 1;
        uVar36 = uVar31 & 0xfffffff0;
        uVar34 = (ulong)uVar36;
        uVar35 = uVar35 + uVar36 * -4;
        do {
          puVar1 = (undefined4 *)(puVar26 + uVar28 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar26 + uVar28 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar28 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar28 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar28 = uVar28 + 0x10;
        } while (uVar34 != uVar28);
        puVar26 = puVar26 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        if (uVar34 == uVar31) goto LAB_0040160e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar26 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_0040160e:
    *(undefined2 *)((long)puVar39 + uVar30) = 0xa38;
    *(undefined2 *)((long)puVar39 + uVar30 + 10) = 0xa7a;
    *(undefined8 *)((long)puVar39 + lVar24) = 0x7a75420a7a7a6946;
    pcVar21 = main_counter + 0x3e;
    cVar23 = main_counter[62];
    if (main_counter[62] == '9') {
      pcVar21 = main_counter + 0x3e;
      uVar28 = 0x3c;
      do {
        *pcVar21 = '0';
        pcVar21 = main_counter + uVar28 + 1;
        cVar23 = main_counter[uVar28 + 1];
        uVar28 = (ulong)((int)uVar28 - 1);
      } while (cVar23 == '9');
    }
    puVar39 = (undefined2 *)((long)puVar39 + uVar30 + 0xc);
    *pcVar21 = cVar23 + '\x01';
    uVar30 = (ulong)(byte)main_counter[0];
    if (main_counter[uVar30] != '0') {
      if (main_counter[0] == '\x01') {
        puVar38 = &main_buf;
        main_counter[0] = '\x01';
        for (uVar31 = (int)puVar39 - 0x407000; uVar31 != 0;
            uVar31 = uVar31 - (~(uint)(sVar20 >> 0x3f) & (uint)sVar20)) {
          sVar20 = write(1,puVar38,(ulong)uVar31);
          if (-1 < sVar20) {
            puVar38 = (undefined2 *)((long)puVar38 + sVar20);
          }
        }
        return 0;
      }
      main_counter[0] = main_counter[0] - 1;
      uVar30 = (ulong)(byte)main_counter[0];
    }
    puVar26 = (undefined2 *)(main_counter + uVar30 + 1);
    uVar31 = 0x3e - (byte)main_counter[0];
    uVar36 = uVar31 & 3;
    if (uVar36 == 1) {
      *(undefined *)puVar39 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar39 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar39;
      if (uVar36 != 2) {
        puVar27 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401d65;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar39 + 1);
        *(undefined *)puVar39 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401d65:
    if ((uVar31 & 0xfffffffc) != 0) {
      uVar35 = uVar31 & 0xfffffffc;
      uVar37 = uVar35 - 4;
      if ((0x3b < uVar37) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar37 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar37 + 4) <= puVar27)))) {
        uVar34 = 0;
        uVar33 = (uVar37 >> 2) + 1;
        uVar37 = uVar33 & 0xfffffff0;
        uVar28 = (ulong)uVar37;
        uVar35 = uVar35 + uVar37 * -4;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar34 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar34 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar34 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar34 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar34 = uVar34 + 0x10;
        } while (uVar28 != uVar34);
        puVar38 = puVar38 + uVar28 * 2;
        puVar27 = puVar27 + uVar28 * 2;
        if (uVar28 == uVar33) goto LAB_0040172e;
      }
      lVar24 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar24) = *(undefined4 *)((long)puVar27 + lVar24);
        lVar24 = lVar24 + 4;
      } while (uVar35 != (uint)lVar24);
    }
LAB_0040172e:
    uVar37 = uVar31 & 0xfffffffc;
    uVar28 = (ulong)uVar31;
    puVar38 = (undefined2 *)((long)puVar39 + uVar28 + 7);
    *(undefined2 *)((long)puVar39 + uVar28) = 0xa31;
    *(undefined4 *)((long)puVar39 + uVar28 + 2) = 0x7a7a6946;
    *(undefined *)((long)puVar39 + uVar28 + 6) = 10;
    if (uVar36 == 1) {
      *(undefined *)puVar38 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar39 = (undefined2 *)((long)puVar38 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar39 = puVar38;
      if (uVar36 != 2) {
        puVar27 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401d85;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar39 = (undefined2 *)((long)puVar38 + 1);
        *(undefined *)puVar38 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar39 = *puVar22;
      puVar39 = puVar39 + 1;
    }
joined_r0x00401d85:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar31 + 4) <= puVar39 ||
          ((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar27)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar27 = puVar27 + uVar34 * 2;
        puVar39 = puVar39 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_004017de;
      }
      lVar24 = 0;
      do {
        *(undefined4 *)((long)puVar39 + lVar24) = *(undefined4 *)((long)puVar27 + lVar24);
        lVar24 = lVar24 + 4;
      } while (uVar35 != (uint)lVar24);
    }
LAB_004017de:
    lVar24 = uVar28 + 2;
    *(undefined2 *)((long)puVar38 + uVar28) = 0xa33;
    puVar38 = (undefined2 *)((long)puVar38 + lVar24);
    if (uVar36 == 1) {
      *(undefined *)puVar38 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar39 = (undefined2 *)((long)puVar38 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar39 = puVar38;
      if (uVar36 != 2) {
        puVar27 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401da1;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar39 = (undefined2 *)((long)puVar38 + 1);
        *(undefined *)puVar38 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar39 = *puVar22;
      puVar39 = puVar39 + 1;
    }
joined_r0x00401da1:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar31 + 4) <= puVar39 ||
          ((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar27)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar27 = puVar27 + uVar34 * 2;
        puVar39 = puVar39 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_0040186e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar39 + lVar25) = *(undefined4 *)((long)puVar27 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_0040186e:
    puVar39 = (undefined2 *)((long)puVar38 + uVar28 + 0xb);
    *(undefined2 *)((long)puVar38 + uVar28) = 0xa34;
    *(undefined8 *)((long)puVar38 + lVar24) = 0x7a7a75427a7a6946;
    *(undefined *)((long)puVar38 + uVar28 + 10) = 10;
    if (uVar36 == 1) {
      *(undefined *)puVar39 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar39 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar39;
      if (uVar36 != 2) {
        puVar27 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401dc0;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar39 + 1);
        *(undefined *)puVar39 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401dc0:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar27)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar27 = puVar27 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_0040190e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar27 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_0040190e:
    *(undefined2 *)((long)puVar39 + uVar28) = 0xa36;
    puVar39 = (undefined2 *)((long)puVar39 + lVar24);
    if (uVar36 == 1) {
      *(undefined *)puVar39 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar39 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar39;
      if (uVar36 != 2) {
        puVar27 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401de0;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar39 + 1);
        *(undefined *)puVar39 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401de0:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar27)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar27 = puVar27 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_0040199e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar27 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_0040199e:
    puVar27 = (undefined2 *)((long)puVar39 + uVar28 + 7);
    *(undefined2 *)((long)puVar39 + uVar28) = 0xa37;
    *(undefined *)((long)puVar39 + uVar28 + 6) = 10;
    *(undefined4 *)((long)puVar39 + lVar24) = 0x7a7a6946;
    if (uVar36 == 1) {
      *(undefined *)puVar27 = *(undefined *)puVar26;
      puVar39 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar27 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar27;
      if (uVar36 != 2) {
        puVar39 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401e02;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar27 + 1);
        *(undefined *)puVar27 = *(undefined *)puVar26;
      }
      puVar39 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401e02:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar39)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar39 = puVar39 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_00401a3e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar39 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_00401a3e:
    *(undefined2 *)((long)puVar27 + uVar28) = 0xa39;
    *(undefined2 *)((long)puVar27 + uVar28 + 10) = 0xa7a;
    *(undefined8 *)((long)puVar27 + lVar24) = 0x7a69460a7a7a7542;
    pcVar21 = main_counter + 0x3e;
    cVar23 = main_counter[62];
    if (main_counter[62] == '9') {
      pcVar21 = main_counter + 0x3e;
      uVar34 = 0x3c;
      do {
        *pcVar21 = '0';
        pcVar21 = main_counter + uVar34 + 1;
        cVar23 = main_counter[uVar34 + 1];
        uVar34 = (ulong)((int)uVar34 - 1);
      } while (cVar23 == '9');
    }
    puVar27 = (undefined2 *)((long)puVar27 + uVar28 + 0xc);
    *pcVar21 = cVar23 + '\x01';
    if (uVar36 == 1) {
      *(undefined *)puVar27 = *(undefined *)puVar26;
      puVar39 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar27 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar27;
      if (uVar36 != 2) {
        puVar39 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401e20;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar27 + 1);
        *(undefined *)puVar27 = *(undefined *)puVar26;
      }
      puVar39 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401e20:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar39)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar39 = puVar39 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_00401b2e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar39 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_00401b2e:
    *(undefined2 *)((long)puVar27 + uVar28) = 0xa32;
    puVar27 = (undefined2 *)((long)puVar27 + lVar24);
    if (uVar36 == 1) {
      *(undefined *)puVar27 = *(undefined *)puVar26;
      puVar39 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar27 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar27;
      if (uVar36 != 2) {
        puVar39 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401e40;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar27 + 1);
        *(undefined *)puVar27 = *(undefined *)puVar26;
      }
      puVar39 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401e40:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar39)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar39 = puVar39 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_00401bbe;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar39 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_00401bbe:
    *(undefined2 *)((long)puVar27 + uVar28) = 0xa33;
    *(undefined2 *)((long)puVar27 + uVar28 + 10) = 0xa7a;
    *(undefined8 *)((long)puVar27 + lVar24) = 0x7a75420a7a7a6946;
    puVar27 = (undefined2 *)((long)puVar27 + uVar28 + 0xc);
    if (uVar36 == 1) {
      *(undefined *)puVar27 = *(undefined *)puVar26;
      puVar39 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar38 = (undefined2 *)((long)puVar27 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar38 = puVar27;
      if (uVar36 != 2) {
        puVar39 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401e60;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar38 = (undefined2 *)((long)puVar27 + 1);
        *(undefined *)puVar27 = *(undefined *)puVar26;
      }
      puVar39 = puVar22 + 1;
      *puVar38 = *puVar22;
      puVar38 = puVar38 + 1;
    }
joined_r0x00401e60:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar38 ||
          ((undefined2 *)((long)puVar38 + (ulong)uVar31 + 4) <= puVar39)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar38 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar38 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar39 = puVar39 + uVar34 * 2;
        puVar38 = puVar38 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_00401c6e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar38 + lVar25) = *(undefined4 *)((long)puVar39 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_00401c6e:
    puVar38 = (undefined2 *)((long)puVar27 + uVar28 + 7);
    *(undefined2 *)((long)puVar27 + uVar28) = 0xa36;
    *(undefined *)((long)puVar27 + uVar28 + 6) = 10;
    *(undefined4 *)((long)puVar27 + lVar24) = 0x7a7a6946;
    if (uVar36 == 1) {
      *(undefined *)puVar38 = *(undefined *)puVar26;
      puVar27 = (undefined2 *)(main_counter + uVar30 + 2);
      puVar39 = (undefined2 *)((long)puVar38 + 1);
    }
    else {
      puVar22 = puVar26;
      puVar39 = puVar38;
      if (uVar36 != 2) {
        puVar27 = puVar26;
        if (uVar36 != 3) goto joined_r0x00401e82;
        puVar22 = (undefined2 *)(main_counter + uVar30 + 2);
        puVar39 = (undefined2 *)((long)puVar38 + 1);
        *(undefined *)puVar38 = *(undefined *)puVar26;
      }
      puVar27 = puVar22 + 1;
      *puVar39 = *puVar22;
      puVar39 = puVar39 + 1;
    }
joined_r0x00401e82:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      uVar35 = uVar37;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar27 + (ulong)uVar31 + 4) <= puVar39 ||
          ((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar27)))) {
        uVar29 = 0;
        uVar33 = (uVar31 >> 2) + 1;
        uVar31 = uVar33 & 0xfffffff0;
        uVar34 = (ulong)uVar31;
        do {
          puVar1 = (undefined4 *)(puVar27 + uVar29 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar27 + uVar29 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar39 + uVar29 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar39 + uVar29 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar29 = uVar29 + 0x10;
        } while (uVar34 != uVar29);
        puVar27 = puVar27 + uVar34 * 2;
        puVar39 = puVar39 + uVar34 * 2;
        uVar35 = uVar37 + uVar31 * -4;
        if (uVar34 == uVar33) goto LAB_00401d0e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar39 + lVar25) = *(undefined4 *)((long)puVar27 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar35 != (uint)lVar25);
    }
LAB_00401d0e:
    *(undefined2 *)((long)puVar38 + uVar28) = 0xa38;
    puVar38 = (undefined2 *)((long)puVar38 + lVar24);
    if (uVar36 == 1) {
      uVar3 = *(undefined *)puVar26;
      puVar26 = (undefined2 *)(main_counter + uVar30 + 2);
      *(undefined *)puVar38 = uVar3;
      puVar39 = (undefined2 *)((long)puVar38 + 1);
    }
    else {
      puVar39 = puVar38;
      if (uVar36 != 2) {
        if (uVar36 != 3) goto joined_r0x00401ea1;
        uVar3 = *(undefined *)puVar26;
        puVar26 = (undefined2 *)(main_counter + uVar30 + 2);
        *(undefined *)puVar38 = uVar3;
        puVar39 = (undefined2 *)((long)puVar38 + 1);
      }
      uVar4 = *puVar26;
      puVar26 = puVar26 + 1;
      *puVar39 = uVar4;
      puVar39 = puVar39 + 1;
    }
joined_r0x00401ea1:
    if (uVar37 != 0) {
      uVar31 = uVar37 - 4;
      if ((0x3b < uVar31) &&
         (((undefined2 *)((long)puVar26 + (ulong)uVar31 + 4) <= puVar39 ||
          ((undefined2 *)((long)puVar39 + (ulong)uVar31 + 4) <= puVar26)))) {
        uVar30 = 0;
        uVar31 = (uVar31 >> 2) + 1;
        uVar36 = uVar31 & 0xfffffff0;
        uVar34 = (ulong)uVar36;
        uVar37 = uVar37 + uVar36 * -4;
        do {
          puVar1 = (undefined4 *)(puVar26 + uVar30 * 2);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          puVar2 = (undefined4 *)(puVar26 + uVar30 * 2 + 0x10);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          uVar14 = puVar2[2];
          uVar15 = puVar2[3];
          uVar16 = puVar2[4];
          uVar17 = puVar2[5];
          uVar18 = puVar2[6];
          uVar19 = puVar2[7];
          puVar2 = (undefined4 *)(puVar39 + uVar30 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          puVar1 = (undefined4 *)(puVar39 + uVar30 * 2 + 0x10);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1[3] = uVar15;
          puVar1[4] = uVar16;
          puVar1[5] = uVar17;
          puVar1[6] = uVar18;
          puVar1[7] = uVar19;
          uVar30 = uVar30 + 0x10;
        } while (uVar34 != uVar30);
        puVar26 = puVar26 + uVar34 * 2;
        puVar39 = puVar39 + uVar34 * 2;
        if (uVar34 == uVar31) goto LAB_00401f1e;
      }
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puVar39 + lVar25) = *(undefined4 *)((long)puVar26 + lVar25);
        lVar25 = lVar25 + 4;
      } while (uVar37 != (uint)lVar25);
    }
LAB_00401f1e:
    *(undefined2 *)((long)puVar38 + uVar28) = 0xa39;
    *(undefined8 *)((long)puVar38 + lVar24) = 0x7a7a75427a7a6946;
    *(undefined *)((long)puVar38 + uVar28 + 10) = 10;
    pcVar21 = main_counter + 0x3e;
    cVar23 = main_counter[62];
    if (main_counter[62] == '9') {
      pcVar21 = main_counter + 0x3e;
      uVar30 = 0x3c;
      do {
        *pcVar21 = '0';
        pcVar21 = main_counter + uVar30 + 1;
        cVar23 = main_counter[uVar30 + 1];
        uVar30 = (ulong)((int)uVar30 - 1);
      } while (cVar23 == '9');
    }
    puVar38 = (undefined2 *)((long)puVar38 + uVar28 + 0xb);
    *pcVar21 = cVar23 + '\x01';
  } while( true );
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


