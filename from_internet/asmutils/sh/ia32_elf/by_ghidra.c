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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined param_10)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  int extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  _DAT_0805d702 = 0x2f2e;
  param_1 = 0x804805d;
  FUN_080481c8();
  FUN_08048212();
  if (param_2 == 0) {
    DAT_0805db23 = 1;
    FUN_08048df5();
    DAT_0805db54 = param_2;
    FUN_08048266();
    DAT_0804950e = (undefined *)0x1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0804950e = (undefined *)0x1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0804950e = &LAB_080490e2;
    param_4 = 0x43;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0804950e = &LAB_08049100;
    param_5 = 0x43;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_6 = 0x14;
    pcVar1 = (code *)swi(0x80);
    DAT_0805db58 = (*pcVar1)();
    param_7 = 0x39;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_8 = 0x36;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_9 = 0x18;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    DAT_0805b59c = &DAT_08049264;
    puVar3 = &stack0x0000002c;
    if (iVar2 == 0) {
      DAT_0805b59c = &DAT_08049267;
      puVar3 = &stack0x0000002c;
    }
  }
  else {
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    puVar4 = &param_4;
    if (iVar2 == 0) {
      FUN_08048e1c();
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      puVar4 = &param_5;
    }
    DAT_0805b59c = &DAT_0804926a;
    puVar3 = (undefined *)puVar4;
    DAT_0805db54 = iVar2;
  }
  DAT_0805d668 = 0;
  DAT_0805d66c = 0;
  _DAT_0805d670 = 0;
  _DAT_0805d674 = 0;
  DAT_0805d678 = 0;
  puVar5 = (undefined4 *)puVar3;
  do {
    do {
      *(undefined4 *)((int)puVar5 + -4) = 0x8048166;
      FUN_08048df5();
      *(undefined4 *)((int)puVar5 + -4) = 0x804816b;
      iVar2 = FUN_080482ea();
    } while (iVar2 == 0);
    puVar6 = puVar5;
    if (DAT_0805d6fa == (int *)0x0) {
      DAT_0805d6fa = (int *)((int)puVar5 + -4);
      puVar6 = (undefined4 *)((int)puVar5 + -4);
      *(undefined4 *)((int)puVar5 + -4) = 0;
    }
    *DAT_0805d6fa = *DAT_0805d6fa + 1;
    DAT_0805d6f6 = *DAT_0805d6fa;
    puVar6[-1] = 0x2d;
    pcVar1 = (code *)swi(0x80);
    puVar3 = (undefined *)(*pcVar1)();
    *puVar6 = puVar3;
    puVar6[-1] = 0x2d;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = &DAT_0804959a;
    for (iVar2 = extraout_EDX; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *(undefined *)puVar7;
      puVar7 = (undefined2 *)((int)puVar7 + (uint)bVar8 * -2 + 1);
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    }
    puVar3[-1] = 0;
    *puVar6 = 0x80481b3;
    iVar2 = FUN_0804874f();
    puVar5 = puVar6 + 1;
    if ((iVar2 != 0) && (puVar5 = puVar6 + 1, -1 < iVar2)) {
      *puVar6 = 0x80481c6;
      FUN_08048b8c();
      puVar5 = puVar6 + 1;
    }
  } while( true );
}



void FUN_080481c8(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 *extraout_EDX;
  char *unaff_EDI;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar2 = (code *)swi(0x80);
  DAT_0805d5a0 = (*pcVar2)();
  DAT_0805d706 = 1;
  FUN_0804823d();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *extraout_EDX = 0x4c454853;
  extraout_EDX[1] = 0x20223d4c;
  pcVar3 = (char *)((int)extraout_EDX + 7);
  do {
    cVar1 = *unaff_EDI;
    pcVar4 = pcVar3 + (uint)bVar5 * -2 + 1;
    *pcVar3 = cVar1;
    unaff_EDI = unaff_EDI + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4[-1] = '\"';
  pcVar4[(uint)bVar5 * -2] = '\0';
  return;
}



void FUN_08048212(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar3 = (int *)&stack0x00000004;
  piVar1 = (int *)&stack0x00000004;
  if (unaff_EBP != 0) {
    do {
      piVar3 = piVar1;
      piVar1 = piVar3 + 1;
    } while (*piVar3 != 0);
    *piVar3 = 0;
  }
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar2 == 0) break;
    (&DAT_0805d5a0)[DAT_0805d706] = iVar2;
    DAT_0805d706 = DAT_0805d706 + 1;
  } while (DAT_0805d706 != 0x32);
                    // WARNING: Could not recover jumptable at 0x0804823b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined4 __regparm3 FUN_0804823d(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *unaff_EDI;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return param_1;
    }
    iVar2 = iVar2 + -1;
    cVar1 = *unaff_EDI;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return param_1;
}



void FUN_0804824a(void)

{
  char cVar1;
  char cVar2;
  uint extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  char *unaff_ESI;
  char *unaff_EDI;
  
  FUN_0804823d();
  FUN_0804823d();
  uVar3 = extraout_ECX;
  if (extraout_ECX < extraout_EDX) {
    uVar3 = extraout_EDX;
  }
  do {
    if (uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 - 1;
    cVar1 = *unaff_ESI;
    cVar2 = *unaff_EDI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 == cVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048266(uint param_1)

{
  code *pcVar1;
  
  if (DAT_0805db54 == 0) {
    _DAT_0805d6fe = 0x20082008;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0805d6d8 = DAT_0805d6d8 & 0xfffffff5;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0805d6d8 = param_1;
  }
  return;
}



void FUN_080482ab(void)

{
  code *pcVar1;
  
  if (DAT_0805db54 == 0) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



uint FUN_080482c6(void)

{
  code *pcVar1;
  uint uVar2;
  byte *extraout_ECX;
  
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  if ((-1 < (int)uVar2) && (uVar2 != 0)) {
    return uVar2 & 0xffffff00 | (uint)*extraout_ECX;
  }
  FUN_080482ab();
  FUN_08048df5();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    uVar2 = FUN_08048e1c();
  }
  return uVar2;
}



undefined * FUN_080482ea(void)

{
  byte bVar1;
  undefined uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  short *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  undefined2 *puVar10;
  uint uVar11;
  char *pcVar12;
  ushort **ppuVar13;
  undefined4 *puVar14;
  ushort **ppuVar15;
  char **ppcVar16;
  char **ppcVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  char **ppcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  ushort *puVar24;
  undefined2 *puVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined4 uStack4;
  
  bVar26 = 0;
  puVar24 = &DAT_0804959a;
  DAT_0804959a = 0;
  ppuVar13 = (ushort **)register0x00000010;
LAB_080482f4:
  while( true ) {
    ppuVar15 = ppuVar13;
    ppuVar15[-1] = (ushort *)0x80482f9;
    cVar5 = FUN_080482c6();
    if (cVar5 != '\t') break;
    ppuVar15[-1] = puVar24;
    DAT_0805d90f = '\0';
    DAT_0805db0d = '\0';
    DAT_0805d90a = &DAT_0804959a;
    ppuVar15[-2] = (ushort *)0x8048501;
    puVar8 = (undefined2 *)FUN_0804823d();
    puVar10 = (undefined2 *)0x0;
    DAT_0805d90a = &DAT_0804959a;
    do {
      puVar25 = DAT_0805d90a;
      DAT_0805d90a = (undefined2 *)((int)puVar25 + -1);
      if (DAT_0805d90a == puVar8) goto LAB_0804851e;
      if ((*(char *)DAT_0805d90a == '/') && (puVar10 == (undefined2 *)0x0)) {
        puVar10 = DAT_0805d90a;
      }
    } while (*(char *)DAT_0805d90a != ' ');
    DAT_0805d90a = puVar25;
    if (puVar10 == (undefined2 *)0x0) {
LAB_0804851e:
      if (*(char *)puVar8 == '/') {
        if (puVar10 == (undefined2 *)0x0) {
          puVar10 = puVar8;
        }
        goto LAB_08048546;
      }
      if ((*(char *)puVar8 == '.') && (puVar10 != (undefined2 *)0x0)) goto LAB_08048546;
    }
    else {
LAB_08048546:
      DAT_0805d90a = (undefined2 *)((int)puVar10 + 1);
    }
    ppuVar15[-2] = (ushort *)0x6a;
    pcVar3 = (code *)swi(0x80);
    uVar27 = (*pcVar3)();
    puVar7 = (undefined *)((ulonglong)uVar27 >> 0x20);
    if (((int)uVar27 < 0) || ((DAT_0805d694 & 0x4000) != 0)) {
      uVar2 = *puVar7;
      *puVar7 = 0;
      do {
        *(undefined4 *)((int)ppuVar15 + -4) = 5;
        pcVar3 = (code *)swi(0x80);
        uVar27 = (*pcVar3)();
        ppcVar16 = (char **)((int)ppuVar15 + 4);
        ppuVar15 = (ushort **)((int)ppuVar15 + 4);
      } while ((int)uVar27 < 0);
      *(undefined *)((ulonglong)uVar27 >> 0x20) = uVar2;
LAB_080485a6:
      pcVar3 = (code *)swi(0x80);
      iVar6 = (*pcVar3)();
      puVar18 = ppcVar16 + 1;
      if (iVar6 != 0) goto code_r0x080485bf;
      pcVar21 = &DAT_0805d90f;
      if ((DAT_0805d90f != '\0') && (DAT_0805db0d == '\0')) goto LAB_0804861f;
      if (DAT_0805d90f != '\0') {
        *ppcVar16 = (char *)0x0;
        ppcVar20 = ppcVar16 + -1;
        ppcVar16[-1] = &DAT_0805d90f;
        goto LAB_080486e3;
      }
      pcVar21 = &DAT_0805da0e;
      if (DAT_0805da0e != '\0') {
LAB_0804861f:
        *ppcVar16 = (char *)0x5;
        *ppcVar16 = (char *)0x804862c;
        FUN_08048e06();
        puVar10 = DAT_0805d90a;
        do {
          cVar5 = *pcVar21;
          puVar8 = (undefined2 *)((int)puVar10 + (uint)bVar26 * -2 + 1);
          *(char *)puVar10 = cVar5;
          puVar10 = puVar8;
          pcVar21 = pcVar21 + (uint)bVar26 * -2 + 1;
        } while (cVar5 != '\0');
        do {
          cVar5 = *(char *)puVar10;
          if ((undefined2 *)((int)puVar10 + -1) == &DAT_0804959a) break;
          puVar10 = (undefined2 *)((int)puVar10 + -1);
        } while (cVar5 != ' ');
        bVar26 = 0;
        *ppcVar16 = (char *)0x6a;
        pcVar3 = (code *)swi(0x80);
        iVar6 = (*pcVar3)();
        if ((-1 < iVar6) && ((DAT_0805d694 & 0x4000) == 0x4000)) {
          *(undefined2 *)((int)puVar8 + -1) = 0x2f;
          puVar8 = (undefined2 *)((int)puVar8 + 1);
        }
        puVar18 = ppcVar16 + 2;
        ppcVar16[2] = (char *)((int)puVar8 + -1);
      }
      *(undefined4 *)((int)puVar18 + -4) = 5;
      *(undefined4 *)((int)puVar18 + -4) = 0x80486b6;
      FUN_08048e06();
      *(undefined4 *)((int)puVar18 + -4) = 0x80486c0;
      FUN_08048df5();
      *(undefined4 *)((int)puVar18 + -4) = 0x80486ca;
      FUN_08048df5();
      *(undefined4 *)((int)puVar18 + -4) = 6;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar24 = *(ushort **)((int)puVar18 + 4);
      ppuVar13 = (ushort **)((int)puVar18 + 8);
    }
    else {
      ppuVar15[-1] = (ushort *)0x1;
      ppuVar15[-1] = (ushort *)0x8048577;
      FUN_08048e06();
      puVar24 = *ppuVar15;
      ppuVar13 = ppuVar15 + 1;
    }
  }
  if (cVar5 == '\x1b') {
    ppuVar15[-1] = (ushort *)0x2;
    ppuVar15[-1] = (ushort *)0x3;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    ppuVar13 = ppuVar15 + 1;
    if (*extraout_ECX == 0x445b) {
      if (puVar24 == &DAT_0804959a) goto LAB_08048458;
      puVar24 = (ushort *)((int)puVar24 + -1);
      *ppuVar15 = (ushort *)0x1;
      *ppuVar15 = (ushort *)0x804847d;
      FUN_08048e06();
      ppuVar13 = ppuVar15 + 1;
      goto LAB_080482f4;
    }
    if (*extraout_ECX == 0x435b) {
      ppuVar13 = ppuVar15 + 1;
      if (*(char *)puVar24 != '\0') {
        *ppuVar15 = (ushort *)0x1;
        *ppuVar15 = (ushort *)0x8048455;
        FUN_08048e06();
        puVar24 = (ushort *)((int)puVar24 + 1);
        ppuVar13 = ppuVar15 + 1;
        goto LAB_080482f4;
      }
    }
    else {
      if (*extraout_ECX == 0x415b) {
        ppuVar13 = ppuVar15 + 1;
        if (DAT_0805d6f6 == 0) goto LAB_08048458;
        DAT_0805d6f6 = DAT_0805d6f6 - 1;
      }
      else {
        ppuVar13 = ppuVar15 + 1;
        if (*extraout_ECX != 0x425b) goto LAB_080482f4;
        DAT_0805d6f6 = DAT_0805d6f6 + 1;
      }
      ppuVar13 = ppuVar15 + 1;
      if (DAT_0805d6fa != (uint *)0x0) {
        if (*DAT_0805d6fa <= DAT_0805d6f6) {
          DAT_0805d6f6 = DAT_0805d6f6 - 1;
          ppuVar13 = ppuVar15 + 1;
          goto LAB_08048458;
        }
        puVar7 = (undefined *)DAT_0805d6fa[-(DAT_0805d6f6 + 1)];
        *ppuVar15 = (ushort *)0x80484a5;
        FUN_0804823d();
        puVar10 = &DAT_0804959a;
        iVar6 = extraout_ECX_00;
        while (iVar6 = iVar6 + -1, iVar6 != 0) {
          *(undefined *)puVar10 = *puVar7;
          puVar7 = puVar7 + (uint)bVar26 * -2 + 1;
          puVar10 = (undefined2 *)((int)puVar10 + (uint)bVar26 * -2 + 1);
        }
        puVar24 = (ushort *)((int)puVar10 + -1);
        *ppuVar15 = (ushort *)0x5;
        *ppuVar15 = (ushort *)0x80484be;
        FUN_08048e06();
        *ppuVar15 = (ushort *)0x80484c8;
        FUN_08048df5();
        *ppuVar15 = (ushort *)0x80484d4;
        FUN_08048e06();
        ppuVar13 = ppuVar15 + 1;
        goto LAB_080482f4;
      }
    }
  }
  else {
    ppuVar13 = ppuVar15;
    if ((cVar5 != '\b') && (cVar5 != '\x7f')) {
      if (cVar5 == '\x04') {
        ppuVar15[-1] = (ushort *)0x8048ee9;
        FUN_080482ab();
        ppuVar15[-1] = (ushort *)0x8048ef3;
        FUN_08048df5();
        ppuVar15[-1] = (ushort *)0x1;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        *ppuVar15 = (ushort *)0xc;
        pcVar3 = (code *)swi(0x80);
        puVar7 = (undefined *)(*pcVar3)();
        if ((int)puVar7 < 0) {
          ppuVar15[1] = (ushort *)0x8048f17;
          puVar7 = (undefined *)FUN_08048e1c();
        }
        return puVar7;
      }
      if (cVar5 == '\f') {
        ppuVar15[-1] = (ushort *)0x80483a0;
        FUN_0804911e();
        do {
          do {
            *(undefined4 *)((int)ppuVar13 + -4) = 0x8048166;
            FUN_08048df5();
            *(undefined4 *)((int)ppuVar13 + -4) = 0x804816b;
            iVar6 = FUN_080482ea();
          } while (iVar6 == 0);
          puVar14 = ppuVar13;
          if (DAT_0805d6fa == (uint *)0x0) {
            DAT_0805d6fa = (uint *)((int)ppuVar13 + -4);
            puVar14 = (undefined4 *)((int)ppuVar13 + -4);
            *(undefined4 *)((int)ppuVar13 + -4) = 0;
          }
          *DAT_0805d6fa = *DAT_0805d6fa + 1;
          DAT_0805d6f6 = *DAT_0805d6fa;
          puVar14[-1] = 0x2d;
          pcVar3 = (code *)swi(0x80);
          puVar7 = (undefined *)(*pcVar3)();
          *puVar14 = puVar7;
          puVar14[-1] = 0x2d;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          puVar10 = &DAT_0804959a;
          for (iVar6 = extraout_EDX; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *(undefined *)puVar10;
            puVar10 = (undefined2 *)((int)puVar10 + (uint)bVar26 * -2 + 1);
            puVar7 = puVar7 + (uint)bVar26 * -2 + 1;
          }
          puVar7[-1] = 0;
          *puVar14 = 0x80481b3;
          iVar6 = FUN_0804874f();
          ppuVar13 = (ushort **)(puVar14 + 1);
          if ((iVar6 != 0) && (ppuVar13 = (ushort **)(puVar14 + 1), -1 < iVar6)) {
            *puVar14 = 0x80481c6;
            FUN_08048b8c();
            ppuVar13 = (ushort **)(puVar14 + 1);
          }
        } while( true );
      }
      ppuVar15[-1] = (ushort *)0x1;
      ppuVar15[-1] = (ushort *)0x8048336;
      FUN_08048e06();
      if (DAT_0805d6f3 == 10) {
        for (; *(char *)puVar24 != '\0'; puVar24 = (ushort *)((int)puVar24 + 1)) {
        }
        *puVar24 = 10;
        puVar7 = (undefined *)((int)puVar24 + -0x8049599);
        if (puVar7 == (undefined *)0x1) {
          puVar7 = (undefined *)0x0;
        }
        return puVar7;
      }
      if (*(char *)puVar24 == '\0') {
        *puVar24 = (ushort)DAT_0805d6f3;
      }
      else {
        ppuVar15[-1] = puVar24;
        bVar4 = DAT_0805d6f3;
        do {
          bVar1 = *(byte *)puVar24;
          *(byte *)puVar24 = bVar4;
          puVar24 = (ushort *)((int)puVar24 + 1);
          bVar4 = bVar1;
        } while (bVar1 != 0);
        *(undefined *)puVar24 = 0;
        puVar24 = ppuVar15[-1];
        ppuVar15[-1] = (ushort *)0x4;
        ppuVar15[-1] = (ushort *)0x804835e;
        FUN_08048e06();
        ppuVar15[-1] = (ushort *)0x1;
        ppuVar15[-1] = (ushort *)0x8048368;
        FUN_08048e06();
        ppuVar15[-1] = (ushort *)0x1;
        ppuVar15[-1] = (ushort *)0x8048375;
        FUN_08048e06();
      }
      puVar24 = (ushort *)((int)puVar24 + 1);
      goto LAB_080482f4;
    }
    if (puVar24 != &DAT_0804959a) {
      if (*(char *)puVar24 == '\0') {
        puVar24 = (ushort *)((int)puVar24 + -1);
        *(undefined *)puVar24 = 0;
        DAT_0805d6ff = 0x20;
        ppuVar15[-1] = (ushort *)0x3;
        ppuVar15[-1] = (ushort *)0x8048401;
        FUN_08048e06();
      }
      else {
        ppuVar15[-1] = puVar24;
        do {
          cVar5 = *(char *)puVar24;
          *(char *)((int)puVar24 + -1) = cVar5;
          puVar24 = (ushort *)((int)puVar24 + 1);
        } while (cVar5 != '\0');
        iVar6 = (int)ppuVar15[-1];
        ppuVar15[-1] = (ushort *)0x5;
        ppuVar15[-1] = (ushort *)0x80483cf;
        FUN_08048e06();
        puVar24 = (ushort *)(iVar6 + -1);
        DAT_0805d6ff = *(undefined *)puVar24;
        ppuVar15[-1] = (ushort *)0x2;
        ppuVar15[-1] = (ushort *)0x80483e4;
        FUN_08048e06();
      }
      goto LAB_080482f4;
    }
  }
LAB_08048458:
  *(undefined4 *)((int)ppuVar13 + -4) = 1;
  *(undefined4 *)((int)ppuVar13 + -4) = 0x8048465;
  FUN_08048e06();
  goto LAB_080482f4;
code_r0x080485bf:
  uVar9 = iVar6 + extraout_ECX_01;
  *ppcVar16 = (char *)0x0;
  uVar11 = 0;
  iVar6 = extraout_ECX_01;
  ppcVar20 = ppcVar16;
  while (puVar10 = DAT_0805d90a, uVar11 = iVar6 + uVar11, uVar11 < uVar9) {
    ppcVar20[-1] = (char *)(uVar11 + 10);
    ppcVar20[-2] = (char *)uVar11;
    ppcVar20[-3] = (char *)0x80485df;
    uVar27 = FUN_0804824a();
    uVar9 = (uint)uVar27;
    iVar6 = (int)ppcVar20[-2];
    ppcVar17 = ppcVar20 + -1;
    if ((int)((ulonglong)uVar27 >> 0x20) != (int)puVar10 + -1) {
      ppcVar17 = ppcVar20;
    }
    ppcVar20 = ppcVar17;
    uVar11 = (uint)*(ushort *)(iVar6 + 8);
  }
  pcVar21 = *ppcVar20;
  ppcVar16 = ppcVar20 + 1;
  if (pcVar21 != (char *)0x0) {
    *ppcVar20 = pcVar21;
    if ((ppcVar20[1] == (char *)0x0) && (DAT_0805d90f == '\0')) {
      pcVar12 = &DAT_0805d90f;
      do {
        cVar5 = *pcVar21;
        *pcVar12 = cVar5;
        pcVar21 = pcVar21 + (uint)bVar26 * -2 + 1;
        pcVar12 = pcVar12 + (uint)bVar26 * -2 + 1;
      } while (cVar5 != '\0');
      ppcVar16 = ppcVar20 + 2;
    }
    else {
LAB_080486e3:
      if (DAT_0805db0d == '\0') {
        if (DAT_0805d90f != '\0') {
          puVar19 = (undefined4 *)((int)ppcVar20 + -4);
          ppcVar20 = (char **)((int)ppcVar20 + -4);
          *puVar19 = &DAT_0805d90f;
        }
        pcVar21 = *ppcVar20;
        pcVar12 = pcVar21;
        pcVar22 = &DAT_0805da0e;
        do {
          cVar5 = *pcVar12;
          *pcVar22 = cVar5;
          pcVar12 = pcVar12 + (uint)bVar26 * -2 + 1;
          pcVar22 = pcVar22 + (uint)bVar26 * -2 + 1;
        } while (cVar5 != '\0');
        pcVar21 = pcVar21 + -1;
        *ppcVar20 = pcVar21;
        *pcVar21 = '\n';
      }
      DAT_0805db0d = DAT_0805db0d + '\x01';
      while( true ) {
        pcVar21 = *ppcVar20;
        ppcVar16 = ppcVar20 + 1;
        if (pcVar21 == (char *)0x0) break;
        pcVar12 = pcVar21;
        pcVar22 = &DAT_0805da0e;
        if (*pcVar21 != '\n') {
          pcVar12 = pcVar21 + -1;
        }
        do {
          pcVar12 = pcVar12 + 1;
          pcVar23 = pcVar22 + (uint)bVar26 * -2 + 1;
          cVar5 = *pcVar22;
          pcVar22 = pcVar23;
        } while (cVar5 == *pcVar12);
        pcVar23[-1] = '\0';
        *ppcVar20 = (char *)0x804873f;
        FUN_0804823d();
        pcVar21[-1] = '\n';
        *ppcVar20 = (char *)0x804874d;
        FUN_08048e06();
        ppcVar20 = ppcVar20 + 1;
      }
      DAT_0805d90f = '\0';
    }
  }
  goto LAB_080485a6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte * __regparm3 FUN_0804874f(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar9;
  uint uVar10;
  byte *extraout_EDX;
  byte *pbVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  char *pcVar17;
  char *pcVar18;
  int *piVar19;
  char *pcVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  bool bVar23;
  byte bVar24;
  uint auStack44 [6];
  char *pcStack20;
  int *piStack16;
  uint local_c [2];
  byte *local_4;
  
  bVar24 = 0;
  pcVar20 = &DAT_0804a59a + (int)_DAT_0805d670;
  pbVar7 = param_1;
  iVar9 = DAT_0805d66c;
  pbVar11 = DAT_0805d668;
  iVar13 = DAT_0805d678;
  piVar19 = (int *)((int)&DAT_0804959a + (int)_DAT_0805d674);
LAB_08048779:
  do {
    piVar14 = (int *)((int)piVar19 + (uint)bVar24 * -2 + 1);
    bVar1 = *(byte *)piVar19;
    param_1 = (byte *)((uint)param_1 & 0xffffff00 | (uint)bVar1);
    if (bVar1 == 0) goto LAB_08048858;
    if (((uint)pbVar11 & 1) == 0) {
      if (bVar1 == 0x23) goto LAB_08048858;
      if (bVar1 == 0x24) {
        *(char **)((int)register0x00000010 + -4) = pcVar20;
        *(byte **)((int)register0x00000010 + -8) = pbVar7;
        *(int *)((int)register0x00000010 + -0xc) = iVar9;
        *(int **)((int)register0x00000010 + -0x10) = piVar14;
        iVar9 = *piVar14;
        iVar8 = iVar9;
        ppbVar16 = (byte **)&DAT_0805d5a0;
        while( true ) {
          ppbVar15 = ppbVar16 + (uint)bVar24 * -2 + 1;
          param_1 = *ppbVar16;
          if (param_1 == (byte *)0x0) break;
          ppbVar16 = ppbVar15;
          if (*param_1 == (byte)iVar9) {
            *(byte ***)((int)register0x00000010 + -0x14) = ppbVar15;
            *(int **)((int)register0x00000010 + -0x18) = piVar14;
            pbVar7 = param_1;
            do {
              pbVar22 = pbVar7;
              piVar19 = piVar14;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              piVar19 = (int *)((int)piVar14 + (uint)bVar24 * -2 + 1);
              pbVar22 = pbVar7 + (uint)bVar24 * -2 + 1;
              bVar1 = *pbVar7;
              bVar3 = *(byte *)piVar14;
              pbVar7 = pbVar22;
              piVar14 = piVar19;
            } while (bVar1 == bVar3);
            if (*(byte *)((int)piVar19 + -1) < 0x21) {
              (&DAT_0805b5a0)[iVar13] = pbVar22;
              iVar13 = iVar13 + 1;
              iVar9 = *(int *)((int)register0x00000010 + -0xc) + 1;
              goto LAB_08048968;
            }
            piVar14 = *(int **)((int)register0x00000010 + -0x18);
            ppbVar16 = *(byte ***)((int)register0x00000010 + -0x14);
          }
        }
        piVar14 = *(int **)((int)register0x00000010 + -0x10);
        do {
          piVar19 = (int *)((int)piVar14 + (uint)bVar24 * -2 + 1);
          bVar1 = *(byte *)piVar14;
          param_1 = (byte *)((uint)param_1 & 0xffffff00);
          if (bVar1 == 0) break;
          piVar14 = piVar19;
        } while (' ' < (char)bVar1);
        iVar9 = *(int *)((int)register0x00000010 + -0xc);
LAB_08048968:
        pbVar7 = *(byte **)((int)register0x00000010 + -8);
        pcVar20 = *(char **)((int)register0x00000010 + -4);
        goto LAB_08048779;
      }
      if (bVar1 != 9) {
        if (bVar1 == 10) goto LAB_08048858;
        if (bVar1 != 0x20) {
          *(undefined4 *)((int)register0x00000010 + -4) = 0x8048851;
          if (bVar1 == 0x3e) {
            return pbVar11;
          }
          if (bVar1 == 0x3c) {
            return param_1;
          }
          *(byte **)((int)register0x00000010 + -8) = *(byte **)((int)register0x00000010 + -4);
          if ((bVar1 != 0x3f) && (bVar1 != 0x2a)) {
            if ((bVar1 == 0x7c) &&
               ((*(byte *)piVar14 != 0x7c && (*(byte *)((int)piVar14 + -2) != 0x7c))))
            goto LAB_0804896f;
            (&DAT_0805b5a0)[iVar13] = pcVar20;
            iVar13 = iVar13 + 1;
            iVar9 = iVar9 + 1;
            pbVar11 = (byte *)((uint)pbVar11 | 1);
            goto LAB_080487fa;
          }
LAB_080489b6:
          DAT_0805d90f = 0;
          if (((uint)pbVar11 & 1) == 0) {
            *(byte **)((int)register0x00000010 + -4) = param_1;
            *(byte **)((int)register0x00000010 + -8) = pbVar7;
            *(int *)((int)register0x00000010 + -0xc) = iVar9;
            *(byte **)((int)register0x00000010 + -0x10) = pbVar11;
            *(BADSPACEBASE **)((int)register0x00000010 + -0x14) = register0x00000010;
            *(int *)((int)register0x00000010 + -0x18) = iVar13;
            *(int **)((int)register0x00000010 + -0x1c) = piVar14;
            *(char **)((int)register0x00000010 + -0x20) = pcVar20;
            *(int *)((int)register0x00000010 + -0x24) = iVar13;
            puVar21 = &DAT_0805da0e;
          }
          else {
            *(byte **)((int)register0x00000010 + -4) = param_1;
            *(byte **)((int)register0x00000010 + -8) = pbVar7;
            *(int **)((int)register0x00000010 + -0xc) = piVar14;
            *(char **)((int)register0x00000010 + -0x10) = pcVar20;
            pcVar18 = (char *)(&DAT_0805b59c)[iVar13];
            do {
              if (pcVar20 == pcVar18) {
                pcVar18 = pcVar20 + -1;
                goto LAB_080489f4;
              }
              pcVar17 = pcVar20 + -1;
              cVar2 = *pcVar20;
              pcVar20 = pcVar17;
            } while (cVar2 != '/');
            pcVar17 = pcVar17 + (1 - (int)pcVar18);
            pcVar20 = &DAT_0805d90f;
            for (; pcVar17 != (char *)0x0; pcVar17 = pcVar17 + -1) {
              *pcVar20 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar20 = pcVar20 + 1;
            }
            *pcVar20 = '\0';
LAB_080489f4:
            bVar24 = 0;
            iVar8 = *(int *)((int)register0x00000010 + -0x10);
            *(int *)((int)register0x00000010 + -0x10) = iVar8;
            iVar8 = iVar8 - (int)(pcVar18 + 1);
            pcVar20 = pcVar18 + 1;
            pcVar18 = &DAT_0805da0e;
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pcVar18 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar18 = pcVar18 + 1;
            }
            (&DAT_0805b5a0)[iVar13] = pcVar18;
            *pcVar18 = '\0';
            piVar14 = *(int **)((int)register0x00000010 + -0xc);
            param_1 = *(byte **)((int)register0x00000010 + -4);
            iVar13 = iVar13 + -1;
            uVar6 = (&DAT_0805b5a0)[iVar13];
            *(byte **)((int)register0x00000010 + -4) = param_1;
            *(byte **)((int)register0x00000010 + -8) = *(byte **)((int)register0x00000010 + -8);
            *(int *)((int)register0x00000010 + -0xc) = iVar9 + -1;
            *(uint *)((int)register0x00000010 + -0x10) = (uint)pbVar11 & 0xfffffffe;
            *(BADSPACEBASE **)((int)register0x00000010 + -0x14) = register0x00000010;
            *(int *)((int)register0x00000010 + -0x18) = iVar13;
            *(int **)((int)register0x00000010 + -0x1c) = piVar14;
            *(undefined4 *)((int)register0x00000010 + -0x20) = uVar6;
            *(int *)((int)register0x00000010 + -0x24) = iVar13;
            puVar21 = (undefined1 *)(&DAT_0805b5a4)[iVar13];
          }
          *puVar21 = (char)param_1;
          *(byte **)((int)register0x00000010 + -0x28) = param_1;
          pbVar7 = puVar21 + (uint)bVar24 * -2 + 1;
          while( true ) {
            piVar19 = (int *)((int)piVar14 + (uint)bVar24 * -2 + 1);
            bVar1 = *(byte *)piVar14;
            param_1 = (byte *)((uint)param_1 & 0xffffff00 | (uint)bVar1);
            if (((bVar1 == 10) || (bVar1 == 9)) || (bVar1 == 0x20)) break;
            *pbVar7 = bVar1;
            *(byte **)((int)register0x00000010 + -8) = *(byte **)((int)register0x00000010 + -8) + -1
            ;
            piVar14 = piVar19;
            pbVar7 = pbVar7 + (uint)bVar24 * -2 + 1;
          }
          *(byte **)((int)register0x00000010 + -0x1c) = (byte *)((int)piVar19 + -1);
          *(byte **)((int)register0x00000010 + -4) = param_1;
          *pbVar7 = 0;
          *(undefined4 *)((int)register0x00000010 + -0x2c) = 5;
          pcVar4 = (code *)swi(0x80);
          iVar9 = (*pcVar4)();
          ppbVar16 = (byte **)((int)register0x00000010 + -0x24);
          if (iVar9 < 0) {
            pcVar20 = *(char **)((int)register0x00000010 + -0x1c);
            piVar19 = *(int **)((int)register0x00000010 + -0x18);
            iVar13 = *(int *)((int)register0x00000010 + -0x14);
            pbVar11 = *(byte **)((int)register0x00000010 + -0xc);
            iVar9 = *(int *)((int)register0x00000010 + -8);
            pbVar7 = *(byte **)((int)register0x00000010 + -4);
            param_1 = *(byte **)register0x00000010;
            register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
          }
          else {
            while( true ) {
              puVar12 = (uint *)ppbVar16;
              pcVar4 = (code *)swi(0x80);
              iVar9 = (*pcVar4)();
              if (iVar9 == 0) break;
              uVar5 = iVar9 + extraout_ECX;
              uVar10 = 0;
              iVar9 = extraout_ECX;
              while (uVar10 = iVar9 + uVar10, ppbVar16 = (byte **)(puVar12 + 1), uVar10 < uVar5) {
                *puVar12 = uVar10 + 10;
                puVar12[-1] = uVar10;
                puVar12[-2] = 0x8048aaa;
                uVar6 = FUN_0804824a();
                iVar9 = puVar12[-1];
                *puVar12 = uVar6;
                bVar23 = DAT_0805da0d == (char)puVar12[1];
                if (bVar23) {
                  puVar12[-1] = 0x8048abc;
                  FUN_08048af2();
                  iVar9 = extraout_ECX_00;
                  if (bVar23) {
                    pbVar7 = *(byte **)((int)register0x00000010 + -0x20);
                    *(byte **)((int)register0x00000010 + -0xc) =
                         *(byte **)((int)register0x00000010 + -0xc) + 1;
                    pbVar11 = *(byte **)((int)register0x00000010 + -0x18);
                    (&DAT_0805b5a0)[(int)pbVar11] = pbVar7;
                    *(byte **)((int)register0x00000010 + -0x18) = pbVar11 + 1;
                    pbVar11 = extraout_EDX;
                    do {
                      bVar1 = *pbVar11;
                      pbVar22 = pbVar7 + (uint)bVar24 * -2 + 1;
                      *pbVar7 = bVar1;
                      pbVar11 = pbVar11 + (uint)bVar24 * -2 + 1;
                      pbVar7 = pbVar22;
                    } while (bVar1 != 0);
                    *(byte **)((int)register0x00000010 + -0x20) = pbVar22;
                  }
                }
                uVar5 = *puVar12;
                uVar10 = (uint)*(ushort *)(iVar9 + 8);
              }
            }
            puVar12[1] = 6;
            pcVar4 = (code *)swi(0x80);
            (*pcVar4)();
            pcVar20 = (char *)puVar12[4];
            piVar19 = (int *)puVar12[5];
            iVar13 = puVar12[6];
            pbVar11 = (byte *)puVar12[8];
            iVar9 = puVar12[9];
            pbVar7 = (byte *)puVar12[10];
            param_1 = (byte *)puVar12[0xb];
            register0x00000010 = (BADSPACEBASE *)(puVar12 + 0xc);
          }
          goto LAB_08048779;
        }
      }
    }
    else {
LAB_080487fa:
      if (bVar1 == 0x22) {
        pbVar11 = (byte *)((uint)pbVar11 ^ 2);
      }
      else {
        if (((uint)pbVar11 & 2) == 0) {
          if (bVar1 != 9) {
            if (bVar1 == 10) goto LAB_08048858;
            *(undefined4 *)((int)register0x00000010 + -4) = 0x804884b;
            if (bVar1 == 0x3e) {
              return pbVar11;
            }
            if (bVar1 == 0x3c) {
              return param_1;
            }
            *(byte **)((int)register0x00000010 + -8) = *(byte **)((int)register0x00000010 + -4);
            if ((bVar1 == 0x3f) || (bVar1 == 0x2a)) goto LAB_080489b6;
            if ((bVar1 == 0x7c) &&
               ((*(byte *)piVar14 != 0x7c && (*(byte *)((int)piVar14 + -2) != 0x7c)))) {
LAB_0804896f:
              *(byte **)((int)register0x00000010 + -4) = pbVar7;
              *(int *)((int)register0x00000010 + -8) = iVar9;
              *pcVar20 = '\0';
              *(undefined4 *)((int)register0x00000010 + -0xc) = 0x8048979;
              FUN_080488d8();
              _DAT_0805d674 = (byte *)((int)piVar14 + -0x804959a);
              *(undefined4 *)((int)register0x00000010 + -0xc) = 0x2a;
              pcVar4 = (code *)swi(0x80);
              (*pcVar4)();
              DAT_0805d680 = DAT_0805d688;
              DAT_0805db22 = 1;
              *(undefined4 *)((int)register0x00000010 + -4) = 0x80489a6;
              FUN_08048b8c();
              DAT_0805d67c = DAT_0805d684;
              pbVar7 = (byte *)FUN_0804874f();
              return pbVar7;
            }
            if (bVar1 != 0x20) goto LAB_08048850;
          }
          param_1 = (byte *)0x0;
          pbVar11 = (byte *)((uint)pbVar11 & 0xfffffffe);
        }
LAB_08048850:
        *pcVar20 = (char)param_1;
        pcVar20 = pcVar20 + (uint)bVar24 * -2 + 1;
      }
    }
    pbVar7 = pbVar7 + -1;
    piVar19 = piVar14;
    if (pbVar7 == (byte *)0x0) {
LAB_08048858:
      if (((uint)pbVar11 & 2) != 0) {
        DAT_0805d668 = pbVar11;
        DAT_0805d66c = iVar9;
        _DAT_0805d670 = pcVar20 + -0x804a59a;
        _DAT_0805d674 = (byte *)0x0;
        DAT_0805d678 = iVar13;
        return (byte *)0xffffffff;
      }
      *pcVar20 = '\0';
      if (((uint)pbVar11 & 0x10) != 0) {
        *(undefined4 *)((int)register0x00000010 + -4) = 5;
        pcVar4 = (code *)swi(0x80);
        DAT_0805d680 = (*pcVar4)();
        pbVar7 = (byte *)FUN_080488d8();
        return pbVar7;
      }
      if (((uint)pbVar11 & 8) != 0) {
        *(undefined4 *)((int)register0x00000010 + -4) = 5;
        pcVar4 = (code *)swi(0x80);
        DAT_0805d67c = (*pcVar4)();
        pbVar7 = (byte *)FUN_080488d8();
        return pbVar7;
      }
      pbVar7 = (byte *)FUN_080488d8();
      return pbVar7;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __regparm3 FUN_080488d8(undefined4 param_1,undefined4 param_2)

{
  int unaff_EBP;
  
  (&DAT_0805b5a0)[unaff_EBP] = 0;
  DAT_0805d668 = 0;
  DAT_0805d66c = 0;
  _DAT_0805d670 = 0;
  _DAT_0805d674 = 0;
  DAT_0805d678 = 0;
  return param_2;
}



undefined8 __regparm3 FUN_08048af2(uint param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int unaff_ESI;
  byte *pbVar3;
  undefined *unaff_EDI;
  bool bVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar2 = param_1;
  pbVar3 = (byte *)(unaff_ESI + 1);
LAB_08048af5:
  do {
    cVar1 = (char)uVar2;
    bVar4 = cVar1 == '*';
    if (bVar4) {
      uVar2 = FUN_08048b1b();
      if (!bVar4) goto LAB_08048b14;
    }
    else {
      if (cVar1 == '?') {
        unaff_EDI = unaff_EDI + 1;
        uVar2 = uVar2 & 0xffffff00 | (uint)*pbVar3;
        pbVar3 = pbVar3 + (uint)bVar5 * -2 + 1;
        goto LAB_08048af5;
      }
      uVar2 = uVar2 & 0xffff0000 | (uint)CONCAT11(*unaff_EDI,cVar1);
      if ((uVar2 == 0) || ((char)((uint)CONCAT11(*unaff_EDI,cVar1) >> 8) != cVar1)) {
LAB_08048b14:
        return CONCAT44(param_2,param_1);
      }
    }
    uVar2 = uVar2 & 0xffffff00 | (uint)*pbVar3;
    unaff_EDI = unaff_EDI + 1;
    pbVar3 = pbVar3 + (uint)bVar5 * -2 + 1;
  } while( true );
}



undefined8 __regparm2
FUN_08048b1b(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte *unaff_ESI;
  undefined *unaff_EDI;
  
  do {
    bVar1 = *unaff_ESI;
    param_1 = param_1 & 0xffffff00 | (uint)bVar1;
    if (bVar1 == 0) goto LAB_08048b34;
    unaff_ESI = unaff_ESI + 1;
  } while (bVar1 == 0x2a);
  while( true ) {
    cVar3 = (char)param_1;
    uVar2 = (uint)CONCAT11(*unaff_EDI,cVar3);
    param_1 = param_1 & 0xffff0000 | uVar2;
    cVar4 = (char)(uVar2 >> 8);
    if (cVar3 == cVar4) {
      return CONCAT44(param_2,param_1);
    }
    if (cVar4 == '\0') break;
    unaff_EDI = unaff_EDI + 1;
  }
LAB_08048b34:
  return CONCAT44(param_3,param_4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048b38(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *unaff_EDI;
  
  if ((char)DAT_0805db50 == '\x7f') {
    uVar2 = FUN_08048dd5();
    if (unaff_EDI == (undefined4 *)0x0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      register0x00000010 = (BADSPACEBASE *)&stack0x00000004;
    }
    *unaff_EDI = uVar2;
    unaff_EDI = unaff_EDI + -0x20176ca;
    _DAT_0805db0e = CONCAT11(10,(char)((uint)unaff_EDI >> 2) + '0');
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048b6f;
    FUN_08048df5();
    *(undefined4 *)((int)register0x00000010 + -4) = 2;
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048b7c;
    FUN_08048e06();
  }
  *(undefined4 *)((int)register0x00000010 + -4) = 0x8048b83;
  FUN_08048dd5();
  if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048b8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined param_5)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar18;
  
  bVar18 = 0;
  for (ppuVar6 = &PTR_DAT_08049394; puVar15 = DAT_0805b5a0, *ppuVar6 != (undefined *)0x0;
      ppuVar6 = ppuVar6 + 3) {
    FUN_0804824a();
    if (extraout_ECX == 0) {
      if (ppuVar6[2] != (undefined *)0x0) {
                    // WARNING: Could not recover jumptable at 0x08048bb2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*(code *)ppuVar6[1])();
        return;
      }
      break;
    }
  }
  FUN_080482ab();
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  puVar9 = &param_1;
  puVar8 = &param_1;
  if (iVar3 == 0) {
    if (DAT_0805db23 != '\0') {
      pcVar2 = (code *)swi(0x80);
      DAT_0805db58 = (*pcVar2)();
      param_1 = 0x39;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      param_2 = 0x36;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      DAT_0804950e = 0;
      param_3 = 0x43;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      param_4 = 0x43;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = (undefined4 *)&stack0x00000018;
    }
    if (DAT_0805d680 != 0) {
      puVar8[-1] = 1;
      puVar8[-1] = 0x3f;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      *puVar8 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = puVar8 + 2;
    }
    if (DAT_0805d67c != 0) {
      puVar8[-1] = 0x3f;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      *puVar8 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = puVar8 + 2;
    }
    *(undefined4 *)((int)puVar8 + -4) = 0x8048c57;
    FUN_0804823d();
    iVar3 = extraout_ECX_00;
    puVar14 = DAT_0805b5a0;
    do {
      puVar15 = puVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar15 = (undefined4 *)((int)puVar14 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)puVar14;
      puVar14 = puVar15;
    } while (cVar1 != '/');
    if (iVar3 == 0) {
      *(undefined4 *)((int)puVar8 + -4) = 5;
      iVar3 = *(int *)((int)puVar8 + -4);
      pcVar12 = &DAT_080494bd;
      do {
        pcVar16 = &DAT_0805a59a;
        do {
          pcVar13 = pcVar12 + (uint)bVar18 * -2 + 1;
          cVar1 = *pcVar12;
          pcVar17 = pcVar16 + (uint)bVar18 * -2 + 1;
          *pcVar16 = cVar1;
          pcVar12 = pcVar13;
          pcVar16 = pcVar17;
        } while (cVar1 != '\0');
        *(char **)((int)puVar8 + -4) = pcVar13;
        pcVar17[-1] = '/';
        puVar14 = DAT_0805b5a0;
        puVar11 = (undefined4 *)(pcVar17 + (uint)bVar18 * -2);
        do {
          cVar1 = *(char *)puVar14;
          puVar15 = (undefined4 *)((int)puVar11 + (uint)bVar18 * -2 + 1);
          *(char *)puVar11 = cVar1;
          puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar18 * -2 + 1);
          puVar11 = puVar15;
        } while (cVar1 != '\0');
        pcVar12 = *(char **)((int)puVar8 + -4);
        *(undefined4 *)((int)puVar8 + -4) = 0xb;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7 = (undefined *)((int)puVar8 + 4);
        puVar8 = (undefined4 *)((int)puVar8 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    else {
      *(undefined4 *)((int)puVar8 + -4) = 0xb;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar7 = (undefined *)((int)puVar8 + 4);
    }
    *(undefined4 *)(puVar7 + -4) = 0x8048cc2;
    FUN_08048e1c();
    *(undefined4 *)(puVar7 + -4) = 0x8048ccc;
    FUN_08048e1c();
    *(undefined4 *)(puVar7 + -4) = 1;
    *(undefined4 *)(puVar7 + -4) = 1;
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    puVar9 = (undefined4 *)(puVar7 + 4);
  }
  iVar5 = DAT_0805d680;
  DAT_0805db24 = iVar3;
  if (DAT_0805d67c != 0) {
    *(undefined4 *)((int)puVar9 + -4) = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar9 = (undefined4 *)((int)puVar9 + 4);
    iVar5 = extraout_ECX_01;
  }
  if ((iVar5 != 1) && (iVar5 != 0)) {
    *(undefined4 *)((int)puVar9 + -4) = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar9 = (undefined4 *)((int)puVar9 + 4);
  }
  DAT_0805d67c = 0;
  DAT_0805d680 = 0;
  puVar14 = puVar9;
  if (DAT_0805db22 == '\0') {
    while( true ) {
      do {
        puVar10 = puVar14;
        puVar10[-1] = 2;
        puVar10[-1] = 0x72;
        pcVar2 = (code *)swi(0x80);
        iVar3 = (*pcVar2)();
        puVar14 = puVar10 + 1;
      } while (iVar3 < 0);
      if (DAT_0805db24 == iVar3) break;
      *puVar10 = 0x8048d3d;
      FUN_08048b38();
      puVar14 = puVar10 + 1;
    }
    DAT_0805db24 = 0;
    puVar11 = puVar10 + 1;
    if ((DAT_0805db23 == '\0') ||
       (puVar11 = puVar10 + 1, puVar14 = puVar10 + 1, (char)DAT_0805db50 != '\x7f'))
    goto LAB_08048d9f;
  }
  puVar11 = puVar14;
  *(undefined4 *)((int)puVar11 + -4) = 0x8048d62;
  uVar4 = FUN_08048dd5();
  if (puVar15 == (undefined4 *)0x0) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    puVar11 = (undefined4 *)((int)puVar11 + 4);
  }
  *puVar15 = uVar4;
  _DAT_0805db0e = CONCAT11(10,(char)((uint)(puVar15 + -0x20176ca) >> 2) + '0');
  if (DAT_0805db22 == '\0') {
    *(undefined4 *)((int)puVar11 + -4) = 0x8048d92;
    FUN_08048df5();
    *(undefined4 *)((int)puVar11 + -4) = 2;
    *(undefined4 *)((int)puVar11 + -4) = 0x8048d9f;
    FUN_08048e06();
  }
LAB_08048d9f:
  puVar11[-1] = 0x8048da4;
  FUN_080482ab();
  puVar11[-1] = 0x14;
  pcVar2 = (code *)swi(0x80);
  DAT_0805db58 = (*pcVar2)();
  *puVar11 = 0x39;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar11[1] = 2;
  puVar11[1] = 0x36;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_0805db22 = 0;
  FUN_08048266();
  return;
}



undefined4 __regparm3 FUN_08048dd5(undefined4 param_1)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  
  piVar2 = &DAT_0805db28;
  do {
    if ((int *)0x805db4f < piVar2) {
      return param_1;
    }
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
  } while (iVar1 != unaff_EBX);
  return param_1;
}



undefined8 __regparm3 FUN_08048df5(undefined4 param_1,undefined4 param_2)

{
  FUN_0804823d();
  FUN_08048e06();
  return CONCAT44(param_2,param_1);
}



void FUN_08048e06(void)

{
  code *pcVar1;
  
  if (DAT_0805db23 != '\0') {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



undefined8 FUN_08048e1c(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_0804823d();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



void FUN_0804911e(void)

{
  FUN_08048df5();
  return;
}


