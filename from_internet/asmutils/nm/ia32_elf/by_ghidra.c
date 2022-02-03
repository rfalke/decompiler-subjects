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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(char *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  char *pcVar7;
  int *piVar8;
  char **ppcVar9;
  char **ppcVar10;
  char **ppcVar11;
  uint *puVar12;
  undefined4 unaff_EBP;
  int unaff_EDI;
  char *pcVar13;
  byte bVar15;
  undefined8 uVar16;
  int unaff_retaddr;
  char *pcVar14;
  
  bVar15 = 0;
  ppcVar10 = (char **)&param_2;
  do {
    pcVar7 = param_1;
    param_1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  DAT_080483bf = (code *)0x8048165;
  if (*(short *)(pcVar7 + -2) != 0x6d6e) {
    DAT_080483bf = FUN_08048274;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppcVar10 = (char **)&stack0x0000000c;
    unaff_retaddr = param_2;
  }
  _DAT_080483af = unaff_retaddr + -1;
  if (_DAT_080483af != 0) goto LAB_08048151;
  pcVar7 = s_a_out_0804804c;
  ppcVar9 = ppcVar10;
  do {
    ppcVar9[-1] = (char *)0x5;
    pcVar1 = (code *)swi(0x80);
    DAT_080483b3 = pcVar7;
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
      *ppcVar9 = (char *)0x1;
      *ppcVar9 = (char *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      ppcVar10 = ppcVar9 + 2;
      ppcVar9[1] = (char *)0x804814b;
      FUN_0804822f();
      DAT_080483c3 = DAT_080483c3 + 1;
    }
    else {
      *ppcVar9 = (char *)0x2;
      *ppcVar9 = (char *)0x13;
      pcVar1 = (code *)swi(0x80);
      DAT_080483b7 = iVar3;
      (*pcVar1)();
      unaff_EDI = DAT_080483b7;
      unaff_EBP = 0;
      ppcVar9[1] = (char *)0x2;
      ppcVar9[1] = (char *)0x1;
      pcVar1 = (code *)swi(0x80);
      DAT_080483bb = (*pcVar1)();
      ppcVar9[2] = (char *)0x8048125;
      (*DAT_080483bf)();
      ppcVar9[2] = (char *)0x6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      ppcVar10 = ppcVar9 + 4;
    }
LAB_08048151:
    pcVar7 = *ppcVar10;
    ppcVar9 = ppcVar10 + 1;
  } while (pcVar7 != (char *)0x0);
  *ppcVar10 = (char *)0x1;
  pcVar1 = (code *)swi(0x80);
  uVar16 = (*pcVar1)();
  ppcVar11 = ppcVar10 + 2;
  if (1 < DAT_080483af) {
    ppcVar10[1] = (char *)0x8048173;
    FUN_08048260();
    ppcVar10[1] = (char *)0x804817a;
    uVar16 = FUN_0804822f();
  }
  iVar3 = (int)uVar16;
  uVar4 = (uint)*(ushort *)(iVar3 + 0x30);
  iVar3 = iVar3 + *(int *)(iVar3 + 0x20) + -0x28;
  while( true ) {
    iVar6 = iVar3;
    iVar3 = iVar6 + 0x28;
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) break;
    if (*(char *)(iVar6 + 0x2c) == '\x02') {
      *(int *)((int)ppcVar11 + -4) = iVar3;
      puVar12 = (uint *)((int)ppcVar11 + -8);
      *(uint *)((int)ppcVar11 + -8) = uVar4;
      iVar5 = (*(uint *)(iVar6 + 0x3c) >> 4) + 1;
      piVar8 = (int *)(*(int *)(iVar6 + 0x38) + DAT_080483bb + -0x10);
      _DAT_080483c7 = iVar3;
      while (iVar5 = iVar5 + -1, iVar5 != 0) {
        piVar8 = piVar8 + 4;
        if (*piVar8 != 0) {
          puVar12[-1] = iVar3;
          puVar12[-2] = iVar5;
          puVar12[-3] = (int)((ulonglong)uVar16 >> 0x20);
          puVar12[-4] = (uint)piVar8;
          puVar12[-5] = (uint)puVar12;
          puVar12[-6] = unaff_EBP;
          puVar12[-7] = (int)uVar16;
          puVar12[-8] = unaff_EDI;
          iVar6 = *(int *)(DAT_080483bb + *(int *)(DAT_080483bb + 0x20) +
                           *(int *)(iVar3 + 0x18) * 0x28 + 0x10) + DAT_080483bb;
          iVar3 = *piVar8;
          puVar12[-9] = 0x80481e9;
          FUN_08048211();
          cVar2 = ' ';
          pcVar7 = (char *)(iVar6 + iVar3);
          pcVar14 = &DAT_080483e4 + extraout_EDX;
          do {
            pcVar13 = pcVar14 + (uint)bVar15 * -2 + 1;
            *pcVar14 = cVar2;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar15 * -2 + 1;
            pcVar14 = pcVar13;
          } while (cVar2 != '\0');
          *pcVar13 = '\n';
          puVar12[-9] = 1;
          puVar12[-9] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          unaff_EDI = puVar12[-7];
          unaff_EBP = puVar12[-5];
          piVar8 = (int *)puVar12[-3];
          uVar16 = CONCAT44(puVar12[-2],puVar12[-6]);
          iVar5 = puVar12[-1];
          iVar3 = *puVar12;
          puVar12 = puVar12 + 1;
        }
      }
      uVar4 = *puVar12;
      ppcVar11 = (char **)(puVar12 + 2);
      iVar3 = puVar12[1];
    }
  }
  return;
}



void FUN_08048211(void)

{
  byte bVar1;
  byte bVar2;
  uint in_ECX;
  int iVar3;
  int unaff_EDI;
  byte *pbVar4;
  
  iVar3 = 8;
  pbVar4 = (byte *)(unaff_EDI + 7);
  do {
    bVar1 = (byte)in_ECX & 0xf;
    bVar2 = bVar1 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = bVar1 + 0x57;
    }
    *pbVar4 = bVar2;
    in_ECX = in_ECX >> 4;
    iVar3 = iVar3 + -1;
    pbVar4 = pbVar4 + -1;
  } while (iVar3 != 0);
  return;
}



undefined8 __regparm3 FUN_0804822f(undefined4 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 unaff_retaddr;
  
  iVar3 = -1;
  pcVar4 = DAT_080483b3;
  do {
    pcVar5 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  if (param_2 != '\0') {
    pcVar5[-1] = param_2;
  }
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  pcVar5[-1] = '\0';
  FUN_08048260();
  return CONCAT44(param_3,unaff_retaddr);
}



undefined8 FUN_08048260(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



void FUN_08048274(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  char *pcVar5;
  
  bVar6 = 0;
  DAT_080483cf = 0;
  DAT_080483d3 = 0;
  DAT_080483d7 = 0;
  FUN_0804831c();
  FUN_0804837f();
  FUN_0804837f();
  FUN_0804837f();
  FUN_0804837f(DAT_080483cf + DAT_080483d3 + DAT_080483d7);
  FUN_08048359();
  cVar2 = ' ';
  pcVar3 = DAT_080483b3;
  pcVar5 = &DAT_08048408;
  do {
    pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
    *pcVar5 = cVar2;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar4;
  } while (cVar2 != '\0');
  *pcVar4 = '\n';
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_0804831c(void)

{
  int iVar1;
  int in_ECX;
  int unaff_EDI;
  int iVar2;
  
  do {
    iVar2 = unaff_EDI;
    in_ECX = in_ECX + -1;
    if (in_ECX < 0) {
      return;
    }
    iVar1 = *(int *)(iVar2 + 0x3c);
    unaff_EDI = iVar2 + 0x28;
  } while (iVar1 == 0);
  if (*(int *)(iVar2 + 0x2c) == 8) {
    DAT_080483d7 = DAT_080483d7 + iVar1;
    FUN_0804831c();
    return;
  }
  if (*(int *)(iVar2 + 0x30) == 6) {
    DAT_080483cf = DAT_080483cf + iVar1;
    FUN_0804831c();
    return;
  }
  if (*(int *)(iVar2 + 0x30) != 3) {
    FUN_0804831c();
    return;
  }
  DAT_080483d3 = DAT_080483d3 + iVar1;
  FUN_0804831c();
  return;
}



void FUN_08048359(void)

{
  byte bVar1;
  byte bVar2;
  uint in_ECX;
  int iVar3;
  int unaff_EDI;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar3 = 7;
  pbVar4 = (byte *)(unaff_EDI + 7);
  do {
    bVar1 = (byte)in_ECX & 0xf;
    bVar2 = bVar1 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = bVar1 + 0x57;
    }
    pbVar5 = pbVar4 + -1;
    *pbVar4 = bVar2;
    in_ECX = in_ECX >> 4;
  } while ((in_ECX != 0) && (iVar3 = iVar3 + -1, pbVar4 = pbVar5, iVar3 != 0));
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pbVar5 = 0x20;
    pbVar5 = pbVar5 + -1;
  }
  return;
}



void __regparm3 FUN_0804837f(uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined *puVar4;
  
  iVar2 = 7;
  if (param_1 == 0) {
    *(undefined *)(unaff_EDI + 7) = 0x30;
    iVar2 = 6;
  }
  else {
    do {
      if (param_1 == 0) break;
      uVar1 = (ulonglong)param_1;
      param_1 = param_1 / 10;
      *(char *)(unaff_EDI + iVar2) = (char)(uVar1 % 10) + '0';
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar4 = (undefined *)(unaff_EDI + iVar2);
  for (iVar3 = iVar2 + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0x20;
    puVar4 = puVar4 + -1;
  }
  return;
}


