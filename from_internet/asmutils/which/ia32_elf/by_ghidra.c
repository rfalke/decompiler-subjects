typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
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




// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  ushort uVar4;
  byte **ppbVar5;
  uint uVar6;
  char cVar7;
  char **ppcVar8;
  ushort *puVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  int iVar12;
  byte **ppbVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  byte bVar18;
  
  bVar18 = 0;
  DAT_080487f5 = 1;
  iVar12 = param_2;
  do {
    iVar12 = iVar12 + 1;
    piVar2 = *(int **)((int)&param_3 + iVar12 * 4);
    if (piVar2 == (int *)0x0) goto LAB_0804809e;
  } while ((*piVar2 != 0x48544150) || (*(char *)(piVar2 + 1) != '='));
  pcVar14 = (char *)((int)piVar2 + 5);
  ppcVar8 = (char **)&DAT_080482ed;
  cVar7 = '@';
  while (iVar12 = param_2, *pcVar14 != '\0') {
    if (*pcVar14 == ':') {
      pcVar14 = pcVar14 + 1;
    }
    else {
      *ppcVar8 = pcVar14;
      ppcVar8 = ppcVar8 + 1;
      do {
        pcVar15 = pcVar14;
        pcVar14 = pcVar15 + 1;
        if (*pcVar14 == '\0') goto LAB_0804809e;
      } while (*pcVar14 != ':');
      *pcVar14 = '\0';
      pcVar14 = pcVar15 + 2;
      cVar7 = cVar7 + -1;
      if (cVar7 == '\0') break;
    }
  }
LAB_0804809e:
  param_3 = 0x18;
  pcVar3 = (code *)swi(0x80);
  DAT_080481e1 = (*pcVar3)();
  param_4 = 0x2f;
  pcVar3 = (code *)swi(0x80);
  _DAT_080481e5 = (*pcVar3)();
  param_5 = 0x50;
  pcVar3 = (code *)swi(0x80);
  DAT_080481e9 = (*pcVar3)();
  ppbVar10 = (byte **)&stack0x00000014;
  while (iVar12 + -1 != 0) {
    DAT_080487f9 = *ppbVar10;
    *ppbVar10 = (byte *)(iVar12 + -1);
    ppbVar10[-1] = (byte *)0x80480d5;
    FUN_080480e3();
    iVar12 = (int)*ppbVar10;
    ppbVar10 = ppbVar10 + 1;
  }
  ppbVar10[-1] = (byte *)0x1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppbVar11 = ppbVar10 + 1;
  ppbVar13 = (byte **)&DAT_080482ed;
  pbVar16 = DAT_080487f9;
  do {
    bVar1 = *pbVar16;
    uVar6 = (uint)bVar1;
    ppbVar5 = ppbVar10 + 1;
    if (bVar1 == 0) goto LAB_08048103;
    pbVar16 = pbVar16 + (uint)bVar18 * -2 + 1;
  } while (bVar1 != 0x2f);
  ppbVar13 = (byte **)&DAT_080483ed;
  puVar17 = &DAT_080483f5;
  do {
    ppbVar11[-1] = (byte *)0x8048135;
    FUN_080481da();
    ppbVar11[-1] = (byte *)0x6a;
    pcVar3 = (code *)swi(0x80);
    iVar12 = (*pcVar3)();
    uVar6 = -iVar12;
    if (((iVar12 == 0) && ((DAT_08048803._2_2_ & 0xb000) != 0)) &&
       (uVar6 = DAT_08048803._2_2_ & 0x49, (DAT_08048803._2_2_ & 0x49) != 0)) {
      if (DAT_080481e1 == 0) {
LAB_08048172:
        DAT_080487f5 = 0;
        *puVar17 = 10;
        *ppbVar11 = (byte *)0x1;
        *ppbVar11 = (byte *)0x4;
        pcVar3 = (code *)swi(0x80);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      if ((short)DAT_080481e1 == _DAT_08048809) {
        uVar4 = DAT_08048803._2_2_ & 0x40;
        uVar6 = DAT_08048803._2_2_ & 0x40;
      }
      else if (DAT_0804880b == _DAT_080481e5) {
LAB_080481cd:
        uVar4 = DAT_08048803._2_2_ & 8;
        uVar6 = DAT_08048803._2_2_ & 8;
      }
      else {
        puVar9 = &DAT_080481ed;
        iVar12 = DAT_080481e9;
        do {
          if (DAT_0804880b == *puVar9) goto LAB_080481cd;
          puVar9 = puVar9 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        uVar4 = DAT_08048803._2_2_ & 1;
        uVar6 = DAT_08048803._2_2_ & 1;
      }
      if (uVar4 != 0) goto LAB_08048172;
    }
    ppbVar13 = ppbVar13 + 1;
    ppbVar5 = ppbVar11 + 1;
LAB_08048103:
    ppbVar11 = ppbVar5;
    if (*ppbVar13 == (byte *)0x0) {
      return uVar6;
    }
    bVar1 = **ppbVar13;
    if (bVar1 == 0) {
      return (uint)bVar1;
    }
    *(undefined4 *)((int)ppbVar11 + -4) = 0x8048122;
    FUN_080481da();
    puVar17 = (undefined1 *)((int)&DAT_080483f1 + 3);
    if (DAT_080483f1._3_1_ != '/') {
      puVar17 = &DAT_080483f5 + (uint)bVar18 * -2;
      DAT_080483f1._3_1_ = '/';
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_080480e3(void)

{
  byte bVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  byte **ppbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte bVar10;
  undefined4 uStack_4;
  
  bVar10 = 0;
  ppbVar7 = (byte **)&DAT_080482ed;
  pbVar8 = DAT_080487f9;
  do {
    bVar1 = *pbVar8;
    uVar5 = (uint)bVar1;
    if (bVar1 == 0) goto LAB_08048103;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0x2f);
  ppbVar7 = (byte **)&DAT_080483ed;
  puVar9 = &DAT_080483f5;
  do {
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048135;
    FUN_080481da();
    *(undefined4 *)((int)register0x00000010 + -4) = 0x6a;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    uVar5 = -iVar4;
    if (((iVar4 == 0) && ((DAT_08048803._2_2_ & 0xb000) != 0)) &&
       (uVar5 = DAT_08048803._2_2_ & 0x49, (DAT_08048803._2_2_ & 0x49) != 0)) {
      if (DAT_080481e1 == 0) {
LAB_08048172:
        DAT_080487f5 = 0;
        *puVar9 = 10;
        *(undefined4 *)register0x00000010 = 1;
        *(undefined4 *)register0x00000010 = 4;
        pcVar2 = (code *)swi(0x80);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      if ((short)DAT_080481e1 == _DAT_08048809) {
        uVar3 = DAT_08048803._2_2_ & 0x40;
        uVar5 = DAT_08048803._2_2_ & 0x40;
      }
      else if (DAT_0804880b == _DAT_080481e5) {
LAB_080481cd:
        uVar3 = DAT_08048803._2_2_ & 8;
        uVar5 = DAT_08048803._2_2_ & 8;
      }
      else {
        puVar6 = &DAT_080481ed;
        iVar4 = DAT_080481e9;
        do {
          if (DAT_0804880b == *puVar6) goto LAB_080481cd;
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar3 = DAT_08048803._2_2_ & 1;
        uVar5 = DAT_08048803._2_2_ & 1;
      }
      if (uVar3 != 0) goto LAB_08048172;
    }
    ppbVar7 = ppbVar7 + 1;
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
LAB_08048103:
    if (*ppbVar7 == (byte *)0x0) {
      return uVar5;
    }
    bVar1 = **ppbVar7;
    if (bVar1 == 0) {
      return (uint)bVar1;
    }
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048122;
    FUN_080481da();
    puVar9 = (undefined1 *)((int)&DAT_080483f1 + 3);
    if (DAT_080483f1._3_1_ != '/') {
      puVar9 = &DAT_080483f5 + (uint)bVar10 * -2;
      DAT_080483f1._3_1_ = '/';
    }
  } while( true );
}



void FUN_080481da(void)

{
  char cVar1;
  char *unaff_ESI;
  char *unaff_EDI;
  
  do {
    cVar1 = *unaff_ESI;
    *unaff_EDI = cVar1;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return;
}


