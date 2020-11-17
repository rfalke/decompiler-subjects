typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
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

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
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
} Elf64_DynTag;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
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




// WARNING: Removing unreachable block (ram,0x004006f0)

void FUN_004006e0(void)

{
  return;
}



void FUN_004008a0(void)

{
  if (DAT_006010a8 == '\0') {
    func_0x00400830();
    DAT_006010a8 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400884)
// WARNING: Removing unreachable block (ram,0x004008d4)
// WARNING: Removing unreachable block (ram,0x0040088e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004008c0(void)

{
  return;
}



undefined8 FUN_004008ed(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)func_0x004007d0(0xdead);
  *puVar3 = 0x45206e61206d2749;
  *(undefined4 *)(puVar3 + 1) = 0x3a20464c;
  *(undefined2 *)((long)puVar3 + 0xc) = 0x292d;
  *(undefined *)((long)puVar3 + 0xe) = 0;
  func_0x00400750(&DAT_00400bb8,puVar3);
  func_0x00400720(&DAT_00400bbb);
  uVar1 = func_0x004007c0(0);
  func_0x004007a0(uVar1);
  uVar2 = func_0x004007f0();
  if ((uVar2 & 1) != 0) {
    func_0x00400720("And I\'m happy. I live free ! :-)");
    func_0x004007e0(0);
  }
  FUN_00400996();
  func_0x00400780(10,DAT_006010a0);
  return 0;
}



void FUN_00400996(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uStack176;
  undefined auStack168 [8];
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_a0 = auStack168;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0x202c657361656c50;
  local_60 = 0x7420746f6e206f64;
  local_58 = 0x7420656d20656b61;
  local_50 = 0x726f6b6c654d206f;
  local_48 = 0xa2120;
  local_88 = 0x6f63206c6c276548;
  local_80 = 0x656d207470757272;
  local_78 = 0xa2120;
  uStack176 = 0x400a2e;
  lVar2 = func_0x00400730(&local_68);
  uStack176 = 0x400a3d;
  lVar3 = func_0x00400730(&local_88);
  lVar3 = lVar3 + lVar2;
  local_98 = lVar3;
  uVar4 = (lVar3 + 0x10U) / 0x10;
  local_90 = auStack168 + uVar4 * -0x10;
  (&uStack176)[uVar4 * -2] = 0x400aac;
  func_0x00400710(auStack168 + uVar4 * -0x10,&local_68,lVar3,&local_68);
  puVar1 = local_90;
  (&uStack176)[uVar4 * -2] = 0x400ac6;
  func_0x00400770(puVar1,&local_88,lVar3,&local_88);
  puVar1 = local_90;
  (&uStack176)[uVar4 * -2] = 0x400adf;
  func_0x00400760(puVar1,DAT_006010a0,DAT_006010a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    *(undefined8 *)(local_a0 + -8) = 0x400afa;
    func_0x00400740();
  }
  return;
}



void FUN_00400b10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_004006e0();
  do {
    (*(code *)(&QWORD_00600e10)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void FUN_00400ba0(void)

{
  return;
}


