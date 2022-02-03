typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




int FUN_0804804c(void)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *unaff_ESI;
    pcVar3 = unaff_ESI + 1;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 < '\"');
  while( true ) {
    if ((cVar1 < '0') || (':' < cVar1)) {
      return iVar2;
    }
    iVar2 = iVar2 + (uint)(byte)(cVar1 - 0x30);
    cVar1 = *pcVar3;
    if (cVar1 < '0') {
      return iVar2;
    }
    if (':' < cVar1) break;
    iVar2 = iVar2 * 10;
    pcVar3 = pcVar3 + 1;
  }
  return iVar2;
}



void entry(char *param_1)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  char **ppcVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  char **ppcVar7;
  char **ppcVar8;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  byte bVar12;
  
  bVar12 = 0;
  DAT_080484ef = 0xf;
  iVar6 = -1;
  do {
    pcVar9 = param_1;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar9;
  } while (cVar2 != '\0');
  if (*(int *)(pcVar9 + -5) == 0x666f6469) {
    DAT_080484df._0_1_ = 1;
    UNRECOVERED_JUMPTABLE = (code *)&DAT_08048367;
    ppcVar4 = (char **)&stack0x00000008;
  }
  else if (pcVar9[-2] == '5') {
    UNRECOVERED_JUMPTABLE = (code *)&DAT_0804833f;
    ppcVar4 = (char **)&stack0x00000008;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)&LAB_080480ae;
    ppcVar4 = (char **)&stack0x00000008;
  }
LAB_08048259:
  do {
    ppcVar7 = ppcVar4;
    pcVar9 = *ppcVar7;
    ppcVar8 = ppcVar7 + 1;
    if (pcVar9 == (char *)0x0) {
LAB_08048333:
                    // WARNING: Could not recover jumptable at 0x08048333. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iVar6 = 0;
    pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
    if (*pcVar9 != '-') goto LAB_08048333;
    uVar1 = (uint)bVar12;
    cVar2 = *pcVar10;
    if (cVar2 == '-') goto LAB_08048333;
    if (cVar2 < ':') goto LAB_0804832e;
    ppcVar4 = ppcVar7 + 1;
  } while (cVar2 == 'e');
  if (cVar2 == 'g') {
LAB_0804831a:
    iVar6 = iVar6 + 1;
LAB_0804831b:
    iVar6 = iVar6 + 1;
LAB_0804831c:
    iVar6 = iVar6 + 1;
LAB_0804831d:
    iVar6 = iVar6 + 1;
LAB_0804831e:
    iVar6 = iVar6 + 1;
LAB_0804831f:
    iVar6 = iVar6 + 1;
LAB_08048320:
    iVar6 = iVar6 + 1;
  }
  else {
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'i') goto LAB_0804831b;
    if (cVar2 == 'l') {
LAB_0804832e:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'q') goto LAB_0804831c;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'v') goto LAB_0804831d;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'V') goto LAB_0804831e;
    ppcVar4 = ppcVar7 + 1;
    if (cVar2 == 'w') goto LAB_08048259;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 's') goto LAB_0804831f;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'x') goto LAB_08048320;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 != 'o') {
      piVar5 = (int *)(s_Unknown_option__Really_kill_Kill_080483d6 + 0x5a);
      while( true ) {
        piVar11 = piVar5;
        if (*piVar11 == 0) break;
        piVar5 = (int *)((int)piVar11 + (uint)bVar12 * -8 + 5);
        if (*piVar11 == *(int *)(pcVar10 + uVar1 * -2)) {
          DAT_080484ef = DAT_080484ef & 0xffffff00 |
                         (uint)*(byte *)(piVar11 + (uint)bVar12 * -2 + 1);
          goto LAB_08048333;
        }
      }
      *ppcVar7 = (char *)0x1;
      *ppcVar7 = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      *(undefined *)((int)(pcVar10 + uVar1 * -2) + 1) = 10;
      ppcVar7[1] = (char *)0x4;
      ppcVar7[1] = (char *)0x1;
      ppcVar7[1] = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar7[2] = (char *)0x1;
      ppcVar7[2] = (char *)0x1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar8 = ppcVar7 + 4;
      iVar6 = extraout_ECX;
      goto LAB_0804831a;
    }
  }
  (&DAT_080484e3)[(int)(iVar6 + 1U) >> 3] =
       (&DAT_080484e3)[(int)(iVar6 + 1U) >> 3] | '\x01' << (iVar6 + 1U & 7);
  ppcVar4 = ppcVar8;
  goto LAB_08048259;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480c7(void)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  byte bVar7;
  int iStack4;
  
  uVar3 = _DAT_080484e3;
  bVar7 = 0;
  iStack4 = 0x80480d7;
  iStack4 = FUN_0804804c();
  if ((uVar3 >> 8 & 1) != 0) {
    iStack4 = -iStack4;
  }
  piVar5 = &iStack4;
  if ((uVar3 >> 7 & 1) != 0) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    iVar4 = -1;
    pcVar6 = &DAT_08048afb;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != ' ');
    iStack4 = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    piVar5 = (int *)&stack0x0000000c;
    if (DAT_08048afb != 'y') {
      return;
    }
  }
  *piVar5 = 0x25;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    if ((uVar3 >> 5 & 1) != 0) {
      piVar5[1] = 1;
      piVar5[1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
    }
  }
  else if ((uVar3 >> 6 & 1) == 0) {
    piVar5[1] = 1;
    piVar5[1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    return;
  }
  return;
}


