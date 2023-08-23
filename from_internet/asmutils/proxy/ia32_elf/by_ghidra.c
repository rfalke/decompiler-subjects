typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned short    word;
typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
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
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
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
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined uVar2;
  undefined4 in_EBX;
  
  if (param_2 == 4) {
    FUN_080480e5();
    FUN_080480d1();
    _DAT_08048211 = extraout_EDX;
    FUN_080480e5();
    uVar2 = (undefined)((uint)in_EBX >> 8);
    _DAT_0804820d = CONCAT31((int3)(((uint)CONCAT11((char)in_EBX,uVar2) << 0x10) >> 8),2);
    _DAT_080481fd = CONCAT31((int3)(((uint)CONCAT11((char)in_EBX,uVar2) << 0x10) >> 8),2);
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    FUN_080480fa();
    return;
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  do {
    FUN_080480e5();
  } while (extraout_ECX != 1);
  return;
}



void FUN_080480d1(void)

{
  int extraout_ECX;
  
  do {
    FUN_080480e5();
  } while (extraout_ECX != 1);
  return;
}



void FUN_080480e5(void)

{
  byte bVar1;
  byte *unaff_ESI;
  
  do {
    bVar1 = *unaff_ESI;
    if (bVar1 < 0x30) {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while ((byte)(bVar1 - 0x30) < 10);
  return;
}



void FUN_080480fa(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_EBP;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)(&DAT_080481fd,0x10);
  puVar5 = &param_1;
  if (iVar2 == 0) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_1 = 2;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    puVar5 = (undefined4 *)&stack0x0000000c;
    puVar8 = (undefined4 *)&stack0x0000000c;
    if (iVar2 == 0) {
      while( true ) {
        do {
          puVar6 = puVar8;
          DAT_0804a21d = 0x10;
          puVar6[-1] = &DAT_0804a21d;
          puVar6[-2] = &DAT_0804821d;
          puVar6[-3] = unaff_EBP;
          puVar6[-4] = 5;
          puVar6[-4] = 0x66;
          pcVar1 = (code *)swi(0x80);
          iVar2 = (*pcVar1)();
          puVar8 = puVar6 + 1;
        } while (iVar2 < 0);
        *puVar6 = 1;
        *puVar6 = 0x72;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar6[1] = 0x72;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar6[2] = 2;
        pcVar1 = (code *)swi(0x80);
        iVar3 = (*pcVar1)();
        if (iVar3 == 0) break;
        puVar6[3] = 6;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar8 = puVar6 + 5;
      }
      puVar6[3] = 6;
      puVar6[2] = 1;
      puVar6[1] = 2;
      *puVar6 = 1;
      *puVar6 = 0x66;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar6[4] = 0x10;
      puVar6[3] = &DAT_0804820d;
      puVar6[2] = iVar3;
      puVar6[1] = 3;
      puVar6[1] = 0x66;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      puVar7 = puVar6 + 6;
      if (iVar4 != 0) {
        puVar6[5] = 1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar7 = puVar6 + 7;
      }
      *(undefined4 *)((int)puVar7 + -4) = 2;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      puVar8 = (undefined4 *)((int)puVar7 + 4);
      if (iVar4 != 0) {
        puVar8 = (undefined4 *)((int)puVar7 + 4);
        iVar2 = iVar3;
      }
      while( true ) {
        puVar8[-1] = 3;
        pcVar1 = (code *)swi(0x80);
        iVar3 = (*pcVar1)();
        if (iVar3 < 1) break;
        *puVar8 = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar8 = puVar8 + 2;
      }
      *puVar8 = 1;
      puVar8[-1] = iVar2;
      puVar8[-2] = 0xd;
      puVar8[-2] = 0x66;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar5 = puVar8 + 2;
    }
  }
  puVar5[-1] = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  do {
    *puVar5 = 0x80480dd;
    FUN_080480e5();
  } while (extraout_ECX != 1);
  return;
}


