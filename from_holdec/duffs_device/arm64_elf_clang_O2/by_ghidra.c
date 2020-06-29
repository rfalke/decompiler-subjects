typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    qword;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef ulong size_t;


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
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



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
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



void copy1_four_times(short *to,short *from,int count)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = count + 3;
  uVar2 = count + 6;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (-1 < count) {
    uVar1 = count;
  }
  uVar1 = count - (uVar1 & 0xfffffffc);
  if (uVar1 < 4) {
    iVar5 = (int)uVar2 >> 2;
    psVar3 = to;
    psVar4 = from;
    iVar6 = iVar5;
    switch(uVar1) {
    case 1:
      goto switchD_00400618_caseD_1;
    case 2:
      goto switchD_00400618_caseD_2;
    case 3:
      goto switchD_00400618_caseD_3;
    }
    do {
      psVar4 = from + 1;
      psVar3 = to + 1;
      *to = *from;
      iVar6 = iVar5;
switchD_00400618_caseD_3:
      from = psVar4 + 1;
      to = psVar3 + 1;
      *psVar3 = *psVar4;
switchD_00400618_caseD_2:
      psVar4 = from + 1;
      psVar3 = to + 1;
      *to = *from;
switchD_00400618_caseD_1:
      from = psVar4 + 1;
      iVar5 = iVar6 + -1;
      to = psVar3 + 1;
      *psVar3 = *psVar4;
    } while (iVar5 != 0 && 0 < iVar6);
  }
  return;
}



void copy1_eight_times(short *to,short *from,int count)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = count + 7;
  uVar2 = count + 0xe;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (-1 < count) {
    uVar1 = count;
  }
  uVar1 = count - (uVar1 & 0xfffffff8);
  if (uVar1 < 8) {
    iVar5 = (int)uVar2 >> 3;
    psVar3 = to;
    psVar4 = from;
    iVar6 = iVar5;
    switch(uVar1) {
    case 1:
      goto switchD_00400680_caseD_1;
    case 2:
      goto switchD_00400680_caseD_2;
    case 3:
      goto switchD_00400680_caseD_3;
    case 4:
      goto switchD_00400680_caseD_4;
    case 5:
      goto switchD_00400680_caseD_5;
    case 6:
      goto switchD_00400680_caseD_6;
    case 7:
      goto switchD_00400680_caseD_7;
    }
    do {
      psVar4 = from + 1;
      psVar3 = to + 1;
      *to = *from;
      iVar6 = iVar5;
switchD_00400680_caseD_7:
      from = psVar4 + 1;
      to = psVar3 + 1;
      *psVar3 = *psVar4;
switchD_00400680_caseD_6:
      psVar4 = from + 1;
      psVar3 = to + 1;
      *to = *from;
switchD_00400680_caseD_5:
      from = psVar4 + 1;
      to = psVar3 + 1;
      *psVar3 = *psVar4;
switchD_00400680_caseD_4:
      psVar4 = from + 1;
      psVar3 = to + 1;
      *to = *from;
switchD_00400680_caseD_3:
      from = psVar4 + 1;
      to = psVar3 + 1;
      *psVar3 = *psVar4;
switchD_00400680_caseD_2:
      psVar4 = from + 1;
      psVar3 = to + 1;
      *to = *from;
switchD_00400680_caseD_1:
      from = psVar4 + 1;
      iVar5 = iVar6 + -1;
      to = psVar3 + 1;
      *psVar3 = *psVar4;
    } while (iVar5 != 0 && 0 < iVar6);
  }
  return;
}



void copy2_four_times(short *to,short *from,int n)

{
  short *psVar1;
  short *psVar2;
  
  if (0 < n) {
    n = 4 - n;
    do {
      psVar1 = to;
      psVar2 = from;
      if (n == 1) {
LAB_00400700:
        from = psVar2 + 1;
        to = psVar1 + 1;
        *psVar1 = *psVar2;
LAB_00400708:
        psVar2 = from + 1;
        psVar1 = to + 1;
        *to = *from;
      }
      else {
        if (n == 2) goto LAB_00400708;
        if (n != 3) {
          psVar2 = from + 1;
          psVar1 = to + 1;
          *to = *from;
          goto LAB_00400700;
        }
      }
      from = psVar2 + 1;
      n = n + 4;
      to = psVar1 + 1;
      *psVar1 = *psVar2;
    } while (n != 4);
  }
  return;
}



void copy2_eight_times(short *to,short *from,int n)

{
  short *psVar1;
  short *psVar2;
  
  if (0 < n) {
    n = 8 - n;
    do {
      psVar1 = to;
      psVar2 = from;
      switch(n) {
      case 7:
        break;
      default:
        psVar2 = from + 1;
        psVar1 = to + 1;
        *to = *from;
      case 1:
        from = psVar2 + 1;
        to = psVar1 + 1;
        *psVar1 = *psVar2;
      case 2:
        psVar2 = from + 1;
        psVar1 = to + 1;
        *to = *from;
      case 3:
        from = psVar2 + 1;
        to = psVar1 + 1;
        *psVar1 = *psVar2;
      case 4:
        psVar2 = from + 1;
        psVar1 = to + 1;
        *to = *from;
      case 5:
        from = psVar2 + 1;
        to = psVar1 + 1;
        *psVar1 = *psVar2;
      case 6:
        psVar2 = from + 1;
        psVar1 = to + 1;
        *to = *from;
      }
      from = psVar2 + 1;
      n = n + 8;
      to = psVar1 + 1;
      *psVar1 = *psVar2;
    } while (n != 8);
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: register

int main(int argc,char **argv)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined8 in_d0;
  undefined8 uVar11;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined8 in_register_00005008;
  undefined8 uVar16;
  undefined2 uVar19;
  undefined8 in_d1;
  undefined8 uVar20;
  undefined8 in_register_00005028;
  undefined8 uVar21;
  undefined8 in_d2;
  undefined8 uVar22;
  undefined8 in_register_00005048;
  undefined8 uVar23;
  
  puVar9 = (undefined8 *)malloc(200);
  puVar4 = (undefined8 *)malloc(200);
  uVar10 = *(undefined2 *)((longlong)puVar9 + 4);
  uVar12 = *(undefined2 *)((longlong)puVar9 + 6);
  puVar5 = puVar9 + 1;
  *(undefined2 *)((longlong)puVar4 + 2) = *(undefined2 *)((longlong)puVar9 + 2);
  *(undefined2 *)((longlong)puVar4 + 4) = uVar10;
  *(undefined2 *)((longlong)puVar4 + 6) = uVar12;
  if (((undefined8 *)((longlong)puVar9 + 0xc6U) < puVar4 + 1) ||
     ((undefined8 *)((longlong)puVar4 + 0xc6U) < puVar5)) {
    cWrite_8(tmp_ldXn,puVar5);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
                    // WARNING: Ignoring partial resolution of indirect
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar4 + 1);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d0;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d1;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d2;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar10;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar12;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar13;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar14;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005008;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005028;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005048;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar15;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar17;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar18;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar19;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar9 + 9);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
                    // WARNING: Ignoring partial resolution of indirect
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar4 + 9);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d0;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d1;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d2;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar10;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar12;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar13;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar14;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005008;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005028;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005048;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar15;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar17;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar18;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar19;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar9 + 0x11);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
                    // WARNING: Ignoring partial resolution of indirect
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar4 + 0x11);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d0;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d1;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_d2;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar10;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar12;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar13;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d0 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d1 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_d2 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar14;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005008;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005028;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)in_register_00005048;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar15;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar17;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar18;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005008 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005028 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)in_register_00005048 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar19;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
  }
  else {
    iVar8 = 0x19;
    puVar6 = (undefined2 *)((longlong)puVar4 + 0xe);
    do {
      uVar10 = *(undefined2 *)puVar5;
      uVar12 = *(undefined2 *)((longlong)puVar5 + 2);
      uVar13 = *(undefined2 *)((longlong)puVar5 + 4);
      uVar14 = *(undefined2 *)((longlong)puVar5 + 6);
      iVar8 = iVar8 + -1;
      puVar5 = puVar5 + 1;
      puVar6[-3] = uVar10;
      puVar6[-2] = uVar12;
      puVar6[-1] = uVar13;
      *puVar6 = uVar14;
      puVar6 = puVar6 + 4;
    } while (1 < iVar8);
  }
  uVar11 = puVar9[1];
  uVar21 = puVar9[4];
  uVar20 = puVar9[3];
  uVar23 = puVar9[6];
  uVar22 = puVar9[5];
  uVar10 = *(undefined2 *)puVar9;
  puVar4[2] = puVar9[2];
  puVar4[1] = uVar11;
  uVar16 = puVar9[8];
  uVar11 = puVar9[7];
  puVar4[4] = uVar21;
  puVar4[3] = uVar20;
  uVar21 = puVar9[10];
  uVar20 = puVar9[9];
  puVar4[6] = uVar23;
  puVar4[5] = uVar22;
  puVar4[8] = uVar16;
  puVar4[7] = uVar11;
  uVar16 = puVar9[0xe];
  uVar11 = puVar9[0xd];
  uVar23 = puVar9[0xc];
  uVar22 = puVar9[0xb];
  puVar4[10] = uVar21;
  puVar4[9] = uVar20;
  uVar21 = puVar9[0x10];
  uVar20 = puVar9[0xf];
  puVar4[0xe] = uVar16;
  puVar4[0xd] = uVar11;
  uVar16 = puVar9[0x14];
  uVar11 = puVar9[0x13];
  puVar4[0xc] = uVar23;
  puVar4[0xb] = uVar22;
  uVar23 = puVar9[0x12];
  uVar22 = puVar9[0x11];
  uVar12 = *(undefined2 *)((longlong)puVar9 + 2);
  puVar4[0x14] = uVar16;
  puVar4[0x13] = uVar11;
  uVar16 = puVar9[0x16];
  uVar11 = puVar9[0x15];
  uVar13 = *(undefined2 *)((longlong)puVar9 + 4);
  uVar14 = *(undefined2 *)((longlong)puVar9 + 6);
  *(undefined2 *)puVar4 = uVar10;
  puVar4[0x16] = uVar16;
  puVar4[0x15] = uVar11;
  uVar16 = puVar9[0x18];
  uVar11 = puVar9[0x17];
  *(undefined2 *)((longlong)puVar4 + 2) = uVar12;
  puVar4[0x10] = uVar21;
  puVar4[0xf] = uVar20;
  puVar4[0x12] = uVar23;
  puVar4[0x11] = uVar22;
  *(undefined2 *)((longlong)puVar4 + 4) = uVar13;
  *(undefined2 *)((longlong)puVar4 + 6) = uVar14;
  puVar4[0x18] = uVar16;
  puVar4[0x17] = uVar11;
  if (((undefined8 *)((longlong)puVar9 + 0xc6U) < puVar4) ||
     (iVar8 = 100, puVar5 = puVar4, puVar7 = puVar9,
     (undefined8 *)((longlong)puVar4 + 0xc6U) < puVar9)) {
    cWrite_8(tmp_ldXn,puVar9);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
                    // WARNING: Ignoring partial resolution of indirect
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    uVar2 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,puVar4);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar11;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar20;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar22;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar10;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar12;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar13;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar14;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar16;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar21;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar23;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar15;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar17;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar18;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar19;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    uVar3 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,uVar2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
                    // WARNING: Ignoring partial resolution of indirect
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,uVar3);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar11;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar20;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar22;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar10;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar12;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar13;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar14;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar16;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar21;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar23;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar15;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar17;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar18;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar19;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar9 + 0x10);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
                    // WARNING: Ignoring partial resolution of indirect
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar10 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar12 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar13 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar14 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar15 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar17 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar18 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    uVar19 = *puVar6;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    cWrite_8(tmp_ldXn,puVar4 + 0x10);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar11;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar20;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar22;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar10;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar12;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar13;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar11 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar20 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar22 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar14;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar16;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar21;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)uVar23;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar15;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x10);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar17;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x20);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar18;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar16 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar21 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = (short)((ulonglong)uVar23 >> 0x30);
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
    *puVar6 = uVar19;
    lVar1 = cRead_8(tmp_ldXn);
    cWrite_8(tmp_ldXn,lVar1 + 2);
    iVar8 = 4;
    puVar5 = puVar4 + 0x18;
    puVar7 = puVar9 + 0x18;
  }
  do {
    uVar10 = *(undefined2 *)((longlong)puVar7 + 2);
    uVar12 = *(undefined2 *)((longlong)puVar7 + 4);
    uVar13 = *(undefined2 *)((longlong)puVar7 + 6);
    iVar8 = iVar8 + -4;
    *(undefined2 *)puVar5 = *(undefined2 *)puVar7;
    *(undefined2 *)((longlong)puVar5 + 2) = uVar10;
    *(undefined2 *)((longlong)puVar5 + 4) = uVar12;
    *(undefined2 *)((longlong)puVar5 + 6) = uVar13;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 != 0);
  do {
    uVar11 = *puVar9;
    puVar4[1] = puVar9[1];
    *puVar4 = uVar11;
    puVar4 = puVar4 + 2;
    puVar9 = puVar9 + 2;
  } while( true );
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


