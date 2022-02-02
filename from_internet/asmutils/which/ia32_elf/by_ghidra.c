typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int *piVar1;
  code *pcVar2;
  ushort uVar3;
  char **ppcVar4;
  char cVar5;
  char **ppcVar6;
  ushort *puVar7;
  char **ppcVar8;
  int iVar9;
  char **ppcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  byte bVar14;
  int unaff_retaddr;
  
  bVar14 = 0;
  DAT_080487f5 = 1;
  iVar9 = unaff_retaddr;
  do {
    iVar9 = iVar9 + 1;
    piVar1 = *(int **)((int)&param_1 + iVar9 * 4);
    if (piVar1 == (int *)0x0) goto LAB_0804809e;
  } while ((*piVar1 != 0x48544150) || (*(char *)(piVar1 + 1) != '='));
  pcVar11 = (char *)((int)piVar1 + 5);
  ppcVar6 = (char **)&DAT_080482ed;
  cVar5 = '@';
  while (iVar9 = unaff_retaddr, *pcVar11 != '\0') {
    if (*pcVar11 == ':') {
      pcVar11 = pcVar11 + 1;
    }
    else {
      *ppcVar6 = pcVar11;
      ppcVar6 = ppcVar6 + 1;
      do {
        pcVar12 = pcVar11;
        pcVar11 = pcVar12 + 1;
        if (*pcVar11 == '\0') goto LAB_0804809e;
      } while (*pcVar11 != ':');
      *pcVar11 = '\0';
      pcVar11 = pcVar12 + 2;
      cVar5 = cVar5 + -1;
      if (cVar5 == '\0') break;
    }
  }
LAB_0804809e:
  param_1 = 0x18;
  pcVar2 = (code *)swi(0x80);
  DAT_080481e1 = (*pcVar2)();
  param_2 = 0x2f;
  pcVar2 = (code *)swi(0x80);
  _DAT_080481e5 = (*pcVar2)();
  param_3 = 0x50;
  pcVar2 = (code *)swi(0x80);
  DAT_080481e9 = (*pcVar2)();
  ppcVar6 = (char **)&stack0x00000014;
  while (iVar9 + -1 != 0) {
    DAT_080487f9 = *ppcVar6;
    *ppcVar6 = (char *)(iVar9 + -1);
    ppcVar6[-1] = (char *)0x80480d5;
    FUN_080480e3();
    iVar9 = (int)*ppcVar6;
    ppcVar6 = ppcVar6 + 1;
  }
  ppcVar6[-1] = (char *)0x1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  ppcVar8 = ppcVar6 + 1;
  ppcVar10 = (char **)&DAT_080482ed;
  pcVar11 = DAT_080487f9;
  do {
    cVar5 = *pcVar11;
    ppcVar4 = ppcVar6 + 1;
    if (cVar5 == '\0') goto LAB_08048103;
    pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
  } while (cVar5 != '/');
  ppcVar10 = (char **)&DAT_080483ed;
  puVar13 = &DAT_080483f5;
  do {
    ppcVar8[-1] = (char *)0x8048135;
    FUN_080481da();
    ppcVar8[-1] = (char *)0x6a;
    pcVar2 = (code *)swi(0x80);
    iVar9 = (*pcVar2)();
    if (((iVar9 == 0) && ((DAT_08048803._2_2_ & 0xb000) != 0)) && ((DAT_08048803._2_2_ & 0x49) != 0)
       ) {
      if (DAT_080481e1 == 0) {
LAB_08048172:
        DAT_080487f5 = 0;
        *puVar13 = 10;
        *ppcVar8 = (char *)0x1;
        *ppcVar8 = (char *)0x4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        return;
      }
      if ((short)DAT_080481e1 == _DAT_08048809) {
        uVar3 = DAT_08048803._2_2_ & 0x40;
      }
      else if (DAT_0804880b == _DAT_080481e5) {
LAB_080481cd:
        uVar3 = DAT_08048803._2_2_ & 8;
      }
      else {
        puVar7 = &DAT_080481ed;
        iVar9 = DAT_080481e9;
        do {
          if (DAT_0804880b == *puVar7) goto LAB_080481cd;
          puVar7 = puVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar3 = DAT_08048803._2_2_ & 1;
      }
      if (uVar3 != 0) goto LAB_08048172;
    }
    ppcVar10 = ppcVar10 + 1;
    ppcVar4 = ppcVar8 + 1;
LAB_08048103:
    ppcVar8 = ppcVar4;
    if (*ppcVar10 == (char *)0x0) {
      return;
    }
    if (**ppcVar10 == '\0') {
      return;
    }
    *(undefined4 *)((int)ppcVar8 + -4) = 0x8048122;
    FUN_080481da();
    puVar13 = (undefined1 *)((int)&DAT_080483f1 + 3);
    if (DAT_080483f1._3_1_ != '/') {
      puVar13 = &DAT_080483f5 + (uint)bVar14 * -2;
      DAT_080483f1._3_1_ = '/';
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480e3(void)

{
  char cVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  char **ppcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  byte bVar9;
  undefined4 uStack4;
  
  bVar9 = 0;
  ppcVar6 = (char **)&DAT_080482ed;
  pcVar7 = DAT_080487f9;
  do {
    cVar1 = *pcVar7;
    if (cVar1 == '\0') goto LAB_08048103;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '/');
  ppcVar6 = (char **)&DAT_080483ed;
  puVar8 = &DAT_080483f5;
  do {
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048135;
    FUN_080481da();
    *(undefined4 *)((int)register0x00000010 + -4) = 0x6a;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    if (((iVar4 == 0) && ((DAT_08048803._2_2_ & 0xb000) != 0)) && ((DAT_08048803._2_2_ & 0x49) != 0)
       ) {
      if (DAT_080481e1 == 0) {
LAB_08048172:
        DAT_080487f5 = 0;
        *puVar8 = 10;
        *(undefined4 *)register0x00000010 = 1;
        *(undefined4 *)register0x00000010 = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        return;
      }
      if ((short)DAT_080481e1 == _DAT_08048809) {
        uVar3 = DAT_08048803._2_2_ & 0x40;
      }
      else if (DAT_0804880b == _DAT_080481e5) {
LAB_080481cd:
        uVar3 = DAT_08048803._2_2_ & 8;
      }
      else {
        puVar5 = &DAT_080481ed;
        iVar4 = DAT_080481e9;
        do {
          if (DAT_0804880b == *puVar5) goto LAB_080481cd;
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar3 = DAT_08048803._2_2_ & 1;
      }
      if (uVar3 != 0) goto LAB_08048172;
    }
    ppcVar6 = ppcVar6 + 1;
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
LAB_08048103:
    if (*ppcVar6 == (char *)0x0) {
      return;
    }
    if (**ppcVar6 == '\0') {
      return;
    }
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048122;
    FUN_080481da();
    puVar8 = (undefined1 *)((int)&DAT_080483f1 + 3);
    if (DAT_080483f1._3_1_ != '/') {
      puVar8 = &DAT_080483f5 + (uint)bVar9 * -2;
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


