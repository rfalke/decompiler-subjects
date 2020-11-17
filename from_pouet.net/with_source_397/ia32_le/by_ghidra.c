typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



undefined4 __cdecl16near FUN_1000_0008(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined2 in_DX;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_00ba();
  if (pcVar3 != (char *)0x0) {
    pcVar5 = (char *)0x3ec;
    do {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uVar6 = 0x3ec;
    FUN_1000_011b();
    iVar4 = FUN_1000_0140();
    if (iVar4 != 0) goto LAB_1000_005f;
  }
  iVar4 = 0;
  do {
    FUN_1000_01ec();
    if (*(char *)0x3ec != '\0') {
      uVar6 = 0x3ec;
      goto LAB_1000_005f;
    }
    iVar4 = iVar4 + 2;
  } while (iVar4 < 4);
  uVar6 = 0x36;
LAB_1000_005f:
  return CONCAT22(in_DX,uVar6);
}



void __cdecl16near FUN_1000_0064(void)

{
  FUN_1000_0008();
  FUN_1000_031e();
  FUN_1000_032d();
  FUN_1000_0337();
  FUN_1000_0337();
  FUN_1000_035a();
  FUN_1000_0362();
  FUN_1000_0337();
  FUN_1000_037c();
  return;
}



undefined4 __cdecl16near FUN_1000_00ba(void)

{
  char *pcVar1;
  char *in_AX;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 in_DX;
  int *piVar5;
  undefined2 unaff_DS;
  
  piVar5 = *(int **)0x220;
  if ((piVar5 != (int *)0x0) && (in_AX != (char *)0x0)) {
    uVar4 = 0xffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = in_AX;
      in_AX = in_AX + 1;
    } while (*pcVar1 != '\0');
    while (iVar3 = *piVar5, iVar3 != 0) {
      iVar2 = FUN_1000_05fe();
      if ((iVar2 == 0) && (*(char *)(iVar3 + (~uVar4 - 1)) == '=')) {
        iVar3 = ~uVar4 + iVar3;
        goto LAB_1000_0111;
      }
      piVar5 = piVar5 + 1;
    }
  }
  iVar3 = 0;
LAB_1000_0111:
  return CONCAT22(in_DX,iVar3);
}



void __cdecl16near FUN_1000_011b(void)

{
  char cVar1;
  char *in_AX;
  undefined2 unaff_DS;
  
  while (cVar1 = *in_AX, cVar1 != '\0') {
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *in_AX = cVar1 + ' ';
    }
    in_AX = in_AX + 1;
  }
  return;
}



// WARNING: Instruction at (ram,0x000101bd) overlaps instruction at (ram,0x000101bc)
// 

void __cdecl16near FUN_1000_0140(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *in_AX;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *in_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  byte in_AF;
  bool bVar10;
  
  if (*in_DX != '\0') {
    if (in_DX[1] == '\0') {
      cVar2 = *in_DX;
      do {
        cVar3 = *in_AX;
        if (cVar3 == cVar2) {
          return;
        }
        if (cVar3 == '\0') {
          return;
        }
        cVar3 = in_AX[1];
        if (cVar3 == cVar2) {
          return;
        }
        in_AX = in_AX + 2;
      } while (cVar3 != '\0');
    }
    else {
      pcVar4 = (char *)0xffff;
      bVar10 = true;
      pcVar8 = in_AX;
      do {
        if (pcVar4 == (char *)0x0) break;
        pcVar4 = pcVar4 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar10 = *pcVar1 == '\0';
      } while (!bVar10);
      if (!bVar10) {
        pcVar8 = pcVar4;
      }
      uVar5 = 0xffff;
      pcVar4 = in_DX;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar1 = pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar1 != '\0');
      pcVar4 = (char *)(~uVar5 - 1);
      do {
        pcVar6 = pcVar8 + (-1 - (int)in_AX);
        bVar10 = pcVar6 == pcVar4;
        if (pcVar6 < pcVar4) {
          return;
        }
        if (pcVar6 == (char *)0x0) {
LAB_1000_01bc_1:
          in_AX = pcVar6;
        }
        else {
          do {
            if (pcVar6 == (char *)0x0) break;
            pcVar6 = pcVar6 + -1;
            pcVar1 = in_AX;
            in_AX = in_AX + 1;
            bVar10 = *in_DX == *pcVar1;
          } while (!bVar10);
          if (!bVar10) goto LAB_1000_01bc_1;
        }
        pcVar6 = in_AX + -1;
        bVar10 = pcVar6 == (char *)0x0;
        pcVar7 = pcVar4;
        pcVar9 = in_DX;
        if (bVar10) {
          return;
        }
        do {
          if (pcVar7 == (char *)0x0) break;
          pcVar1 = pcVar6;
          pcVar6 = pcVar6 + 1;
          bVar10 = *pcVar1 == *pcVar9;
          pcVar7 = pcVar7 + -1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
      } while ((byte)(bVar10 << 6 | (in_AF & 4) << 4) == 0);
    }
  }
  return;
}



void __cdecl16near FUN_1000_01ec(void)

{
  char cVar1;
  char *in_AX;
  int iVar2;
  char *pcVar3;
  char *in_BX;
  char *pcVar4;
  undefined2 unaff_DS;
  
  FUN_1000_035a();
  iVar2 = FUN_1000_0651();
  if (iVar2 == 0) {
    cVar1 = *in_AX;
    if (((cVar1 != '\\') && (cVar1 != '.')) &&
       ((cVar1 != '/' && ((cVar1 == '\0' || (in_AX[1] != ':')))))) {
      FUN_1000_0674();
      iVar2 = FUN_1000_06f2();
      if ((in_BX + iVar2)[-1] != '\\') {
        in_BX[iVar2] = '\\';
      }
    }
    FUN_1000_070b();
  }
  else {
    pcVar3 = (char *)FUN_1000_00ba();
    if (pcVar3 != (char *)0x0) {
      while (pcVar4 = in_BX, *pcVar3 != '\0') {
        while ((*pcVar3 != '\0' && (cVar1 = *pcVar3, cVar1 != ';'))) {
          pcVar3 = pcVar3 + 1;
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        }
        if (pcVar4 != in_BX) {
          cVar1 = pcVar4[-1];
          if (((cVar1 != '\\') && (cVar1 != '/')) && (cVar1 != ':')) {
            *pcVar4 = '\\';
            pcVar4 = pcVar4 + 1;
          }
          *pcVar4 = '\0';
          FUN_1000_074a();
          iVar2 = FUN_1000_0651();
          if (iVar2 == 0) {
            FUN_1000_0780();
            return;
          }
        }
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
      }
    }
    *in_BX = '\0';
  }
  return;
}



undefined * __cdecl16near FUN_1000_02d0(void)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined *in_AX;
  undefined *puVar3;
  int in_DX;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)0x226;
  puVar3 = (undefined *)(uint)*(byte *)0x80;
  puVar5 = (undefined *)0x81;
  if (in_AX != (undefined *)0x0) {
    if (in_DX < 2) {
      puVar3 = (undefined *)0x0;
      *in_AX = 0;
    }
    else {
      puVar4 = in_AX;
      if (in_DX <= (int)puVar3) {
        puVar3 = (undefined *)(in_DX + -1);
      }
      while (puVar3 = puVar3 + -1, puVar3 != (undefined *)0xffff) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = *puVar1;
        puVar4 = puVar4 + 1;
      }
      *puVar4 = 0;
      puVar3 = puVar4 + -(int)in_AX;
    }
  }
  return puVar3;
}



undefined4 __cdecl16near FUN_1000_031e(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  FUN_1000_02d0();
  return CONCAT22(in_DX,in_AX);
}



void __cdecl16near FUN_1000_032d(void)

{
  FUN_1000_07a6();
  return;
}



undefined4 __cdecl16near FUN_1000_0337(void)

{
  int iVar1;
  undefined2 in_DX;
  int iVar2;
  
  iVar1 = FUN_1000_08b4();
  if (iVar1 != -1) {
    iVar2 = iVar1;
    iVar1 = FUN_1000_0924();
    if (iVar1 == 10) {
      iVar1 = iVar2 + 1;
    }
  }
  return CONCAT22(in_DX,iVar1);
}



undefined2 __cdecl16near FUN_1000_035a(void)

{
  return 0x43c;
}



undefined2 __cdecl16near FUN_1000_035e(void)

{
  return 0x43e;
}



undefined2 __cdecl16near FUN_1000_0362(void)

{
  int in_AX;
  undefined2 unaff_DS;
  
  if ((-1 < in_AX) && (in_AX < 0x10)) {
    return *(undefined2 *)(in_AX * 2 + 500);
  }
  return 0x183;
}



void __cdecl16near FUN_1000_037c(void)

{
  undefined2 unaff_DS;
  
  (**(code **)0x214)();
  (**(code **)0x216)();
  FUN_1000_038e();
  return;
}



// WARNING: This function may have set the stack pointer

undefined2 FUN_1000_038e(void)

{
  char *pcVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined2 extraout_DX;
  int *piVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined in_ZF;
  undefined2 in_stack_0000fff8;
  char *in_stack_0000fffa;
  undefined2 uVar6;
  
  (**(code **)0x216)();
  uVar6 = 0x399;
  (**(code **)0x218)();
  piVar5 = (int *)0x0;
  iVar4 = 0x10;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    piVar2 = piVar5;
    piVar5 = piVar5 + 1;
    in_ZF = *piVar2 == 0x101;
  } while ((bool)in_ZF);
  if (!(bool)in_ZF) {
    *(undefined2 *)0x4cc = extraout_DX;
    *(undefined2 *)0x4ca = 0x40c;
    *(undefined2 *)0x4c8 = 0x1000;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    do {
      pcVar1 = in_stack_0000fffa;
      in_stack_0000fffa = in_stack_0000fffa + 1;
    } while (*pcVar1 != '\0');
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)(uVar6);
  }
  FUN_1000_0a36();
  pcVar3 = (code *)swi(0x21);
  uVar6 = (*pcVar3)();
  return uVar6;
}



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 entry(void)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  int *piVar5;
  char cVar6;
  code *pcVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  int extraout_DX;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int unaff_BP;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  char *pcVar17;
  undefined *puVar18;
  int *piVar19;
  int unaff_DS;
  undefined uVar20;
  
  DAT_1291_022c = (char *)0x450;
  puVar11 = (undefined2 *)0xc50;
  DAT_1291_022e = 0xc50;
  iVar10 = 0xc5;
  uVar20 = DAT_1291_022a == '\0';
  DAT_1291_0226 = unaff_DS;
  if ((bool)uVar20) {
    if (*(int *)0x2 + 0xed6fU < 0xc6) {
      _DAT_1000_355e = 0x49b;
      FUN_1000_0a5a();
      iVar10 = extraout_DX;
    }
    DAT_1291_0224 = iVar10 << 4;
    if (DAT_1291_0224 == 0) {
      DAT_1291_0224 = -2;
    }
    uVar20 = iVar10 + 0x1291 == DAT_1291_0226;
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
  }
  pcVar16 = (char *)0x81;
  uVar9 = (uint)*(byte *)0x80;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar2 = pcVar16;
    pcVar16 = pcVar16 + 1;
    uVar20 = *pcVar2 == ' ';
  } while ((bool)uVar20);
  pcVar16 = pcVar16 + -1;
  DAT_1291_0246 = DAT_1291_022c;
  DAT_1291_0248 = 0x1291;
  pcVar17 = DAT_1291_022c;
  if (!(bool)uVar20) {
    iVar10 = uVar9 + 1;
    while (iVar10 != 0) {
      iVar10 = iVar10 + -1;
      pcVar3 = pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar2 = pcVar16;
      pcVar16 = pcVar16 + 1;
      *pcVar3 = *pcVar2;
    }
  }
  *pcVar17 = '\0';
  pcVar17[1] = '\0';
  pcVar17 = pcVar17 + 1;
  pcVar7 = (code *)swi(0x21);
  uVar8 = (*pcVar7)();
  DAT_1291_0228 = (byte)uVar8;
  DAT_1291_0229 = (undefined)((uint)uVar8 >> 8);
  DAT_1291_022c = pcVar17;
  if (2 < DAT_1291_0228) {
    uVar8 = *(undefined2 *)0x2c;
    puVar14 = (uint *)0x0;
    unaff_BP = 0;
    do {
      if (((*puVar14 | 0x2020) == 0x6f6e) && (puVar14[1] == 0x3738)) {
        unaff_BP = unaff_BP + 1;
      }
      do {
        puVar15 = puVar14;
        puVar14 = (uint *)((int)puVar15 + 1);
      } while (*(char *)puVar15 != '\0');
    } while (*(char *)puVar14 != '\0');
    puVar15 = puVar15 + 2;
    do {
      cVar6 = *(char *)puVar15;
      pcVar2 = DAT_1291_022c;
      DAT_1291_022c = DAT_1291_022c + 1;
      puVar1 = puVar15;
      puVar15 = (uint *)((int)puVar15 + 1);
      *pcVar2 = *(char *)puVar1;
    } while (cVar6 != '\0');
  }
  DAT_1291_024c = 0x1291;
  puVar18 = (undefined *)0x3ec;
  iVar10 = 0x62;
  DAT_1291_0234 = unaff_BP;
  DAT_1291_024a = pcVar17;
  while (iVar10 != 0) {
    iVar10 = iVar10 + -1;
    puVar4 = puVar18;
    puVar18 = puVar18 + 1;
    *puVar4 = 0;
  }
  if (DAT_1291_0236 == 0) {
    DAT_1291_0236 = 0x5fd;
    DAT_1291_0238 = 0x1000;
    DAT_1291_023a = 0x5fd;
    DAT_1291_023c = 0x1000;
    DAT_1291_023e = 0x5fd;
    DAT_1291_0240 = 0x1000;
  }
  uVar20 = 1;
  DAT_1291_0242 = 0x5fc;
  DAT_1291_0244 = 0x1000;
  *(undefined2 *)((int)puVar11 + -2) = 0x599;
  FUN_1000_0a18();
  *(undefined2 *)((int)puVar11 + -2) = 0x59c;
  uVar8 = FUN_1000_09ac();
  *(undefined2 *)((int)puVar11 + -2) = uVar8;
  piVar19 = (int *)0x0;
  iVar10 = 0x10;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    piVar5 = piVar19;
    piVar19 = piVar19 + 1;
    uVar20 = *piVar5 == 0x101;
  } while ((bool)uVar20);
  uVar8 = *(undefined2 *)((int)puVar11 + -2);
  if (!(bool)uVar20) {
    _DAT_1000_2dda = 0x40c;
    puVar12 = (undefined2 *)0x4c8;
    _DAT_1000_2dd8 = 0x1000;
    pcVar7 = (code *)swi(0x21);
    _DAT_1000_2ddc = uVar8;
    (*pcVar7)();
    pcVar16 = (char *)puVar12[1];
    puVar13 = puVar12 + 2;
    do {
      pcVar2 = pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (*pcVar2 != '\0');
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    uVar8 = *puVar13;
    puVar11 = puVar13 + 1;
  }
  *(undefined2 *)((int)puVar11 + -2) = uVar8;
  *(undefined2 *)((int)puVar11 + -4) = 0x5ef;
  FUN_1000_0a36();
  pcVar7 = (code *)swi(0x21);
  uVar8 = (*pcVar7)();
  *(undefined2 *)((int)puVar11 + -2) = uVar8;
  return *(undefined2 *)((int)puVar11 + -2);
}



// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 FUN_1000_0447(void)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  int *piVar5;
  char cVar6;
  code *pcVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  uint extraout_DX;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int unaff_BP;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  char *pcVar17;
  undefined *puVar18;
  int *piVar19;
  int unaff_DS;
  undefined uVar20;
  
  DAT_1291_022c = (char *)0x450;
  puVar11 = (undefined2 *)&stack0x0450;
  uVar10 = (uint)&stack0x045f >> 4;
  uVar20 = DAT_1291_022a == '\0';
  DAT_1291_0226 = unaff_DS;
  DAT_1291_022e = (undefined *)puVar11;
  if ((bool)uVar20) {
    if (*(int *)0x2 + 0xed6fU <= uVar10) {
      FUN_1000_0a5a();
      uVar10 = extraout_DX;
    }
    DAT_1291_0224 = uVar10 << 4;
    if (DAT_1291_0224 == 0) {
      DAT_1291_0224 = -2;
    }
    uVar20 = uVar10 + 0x1291 == DAT_1291_0226;
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
  }
  pcVar16 = (char *)0x81;
  uVar10 = (uint)*(byte *)0x80;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar2 = pcVar16;
    pcVar16 = pcVar16 + 1;
    uVar20 = *pcVar2 == ' ';
  } while ((bool)uVar20);
  pcVar16 = pcVar16 + -1;
  DAT_1291_0246 = DAT_1291_022c;
  DAT_1291_0248 = 0x1291;
  pcVar17 = DAT_1291_022c;
  if (!(bool)uVar20) {
    iVar9 = uVar10 + 1;
    while (iVar9 != 0) {
      iVar9 = iVar9 + -1;
      pcVar3 = pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar2 = pcVar16;
      pcVar16 = pcVar16 + 1;
      *pcVar3 = *pcVar2;
    }
  }
  *pcVar17 = '\0';
  pcVar17[1] = '\0';
  pcVar17 = pcVar17 + 1;
  pcVar7 = (code *)swi(0x21);
  uVar8 = (*pcVar7)();
  DAT_1291_0228 = (byte)uVar8;
  DAT_1291_0229 = (undefined)((uint)uVar8 >> 8);
  DAT_1291_022c = pcVar17;
  if (2 < DAT_1291_0228) {
    uVar8 = *(undefined2 *)0x2c;
    puVar14 = (uint *)0x0;
    unaff_BP = 0;
    do {
      if (((*puVar14 | 0x2020) == 0x6f6e) && (puVar14[1] == 0x3738)) {
        unaff_BP = unaff_BP + 1;
      }
      do {
        puVar15 = puVar14;
        puVar14 = (uint *)((int)puVar15 + 1);
      } while (*(char *)puVar15 != '\0');
    } while (*(char *)puVar14 != '\0');
    puVar15 = puVar15 + 2;
    do {
      cVar6 = *(char *)puVar15;
      pcVar2 = DAT_1291_022c;
      DAT_1291_022c = DAT_1291_022c + 1;
      puVar1 = puVar15;
      puVar15 = (uint *)((int)puVar15 + 1);
      *pcVar2 = *(char *)puVar1;
    } while (cVar6 != '\0');
  }
  DAT_1291_024c = 0x1291;
  puVar18 = (undefined *)0x3ec;
  iVar9 = 0x62;
  DAT_1291_0234 = unaff_BP;
  DAT_1291_024a = pcVar17;
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    puVar4 = puVar18;
    puVar18 = puVar18 + 1;
    *puVar4 = 0;
  }
  if (DAT_1291_0236 == 0) {
    DAT_1291_0236 = 0x5fd;
    DAT_1291_0238 = 0x1000;
    DAT_1291_023a = 0x5fd;
    DAT_1291_023c = 0x1000;
    DAT_1291_023e = 0x5fd;
    DAT_1291_0240 = 0x1000;
  }
  uVar20 = 1;
  DAT_1291_0242 = 0x5fc;
  DAT_1291_0244 = 0x1000;
  *(undefined2 *)((int)puVar11 + -2) = 0x599;
  FUN_1000_0a18();
  *(undefined2 *)((int)puVar11 + -2) = 0x59c;
  uVar8 = FUN_1000_09ac();
  *(undefined2 *)((int)puVar11 + -2) = uVar8;
  piVar19 = (int *)0x0;
  iVar9 = 0x10;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    piVar5 = piVar19;
    piVar19 = piVar19 + 1;
    uVar20 = *piVar5 == 0x101;
  } while ((bool)uVar20);
  uVar8 = *(undefined2 *)((int)puVar11 + -2);
  if (!(bool)uVar20) {
    _DAT_1000_2dda = 0x40c;
    puVar12 = (undefined2 *)0x4c8;
    _DAT_1000_2dd8 = 0x1000;
    pcVar7 = (code *)swi(0x21);
    _DAT_1000_2ddc = uVar8;
    (*pcVar7)();
    pcVar16 = (char *)puVar12[1];
    puVar13 = puVar12 + 2;
    do {
      pcVar2 = pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (*pcVar2 != '\0');
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    uVar8 = *puVar13;
    puVar11 = puVar13 + 1;
  }
  *(undefined2 *)((int)puVar11 + -2) = uVar8;
  *(undefined2 *)((int)puVar11 + -4) = 0x5ef;
  FUN_1000_0a36();
  pcVar7 = (code *)swi(0x21);
  uVar8 = (*pcVar7)();
  *(undefined2 *)((int)puVar11 + -2) = uVar8;
  return *(undefined2 *)((int)puVar11 + -2);
}



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

undefined2 FUN_1000_05bb(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined2 in_AX;
  undefined2 uVar3;
  undefined2 in_DX;
  char *pcVar4;
  undefined2 in_BX;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  
  *(undefined2 *)0x4cc = in_BX;
  *(undefined2 *)0x4ca = in_AX;
  puVar5 = (undefined2 *)0x4c8;
  *(undefined2 *)0x4c8 = in_DX;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar4 = (char *)puVar5[1];
  puVar6 = puVar5 + 2;
  do {
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  *puVar6 = *puVar6;
  puVar6[-1] = 0x5ef;
  FUN_1000_0a36();
  puVar7 = puVar6 + 1;
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  *(undefined2 *)((int)puVar7 + -2) = uVar3;
  return *(undefined2 *)((int)puVar7 + -2);
}



undefined2 __cdecl16near FUN_1000_05f4(void)

{
  undefined2 in_AX;
  
  return in_AX;
}



uint __cdecl16near FUN_1000_05fe(void)

{
  undefined uVar1;
  byte *in_AX;
  uint uVar2;
  byte bVar3;
  undefined *in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  while( true ) {
    if (in_BX == 0) {
      return 0;
    }
    bVar3 = *in_AX;
    uVar1 = *in_DX;
    uVar2 = CONCAT11(uVar1,bVar3);
    if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
      uVar2 = CONCAT11(uVar1,bVar3 + 0x20);
    }
    bVar3 = (byte)(uVar2 >> 8);
    if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
      uVar2 = uVar2 & 0xff | (uint)(byte)(bVar3 + 0x20) << 8;
    }
    bVar3 = (byte)(uVar2 >> 8);
    if ((byte)uVar2 != bVar3) break;
    if (bVar3 == 0) {
      return uVar2;
    }
    in_AX = in_AX + 1;
    in_DX = in_DX + 1;
    in_BX = in_BX + -1;
  }
  return (uVar2 & 0xff) - (uint)bVar3;
}



void __cdecl16near FUN_1000_0651(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_0cd5();
  return;
}



undefined2 __cdecl16near FUN_1000_0674(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  int in_AX;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  byte bVar6;
  undefined2 local_9c;
  undefined local_9a;
  
  bVar6 = 0;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if ((int)-(uint)bVar6 < 0) {
LAB_1000_0699:
    local_9c = 0x69c;
    FUN_1000_0780();
    uVar3 = 0;
  }
  else {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    local_9a = 0x5c;
    puVar5 = &local_9c;
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar1 = puVar5;
      puVar5 = (undefined2 *)((int)puVar5 + 1);
    } while (*(char *)puVar1 != '\0');
    if (in_AX == 0) {
      local_9c = 0x6d0;
      iVar4 = FUN_1000_0d39();
      if (iVar4 == 0) goto LAB_1000_0699;
    }
    local_9c = 0x6e7;
    uVar3 = FUN_1000_0de6();
  }
  return uVar3;
}



int __cdecl16near FUN_1000_06f2(void)

{
  char *pcVar1;
  char *in_AX;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = in_AX;
    in_AX = in_AX + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



undefined2 * __cdecl16near FUN_1000_070b(void)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *in_AX;
  undefined2 uVar3;
  undefined2 *in_DX;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  puVar4 = in_AX;
  if (((uint)in_DX & 1) != 0) {
    puVar1 = in_DX;
    in_DX = (undefined2 *)((int)in_DX + 1);
    cVar2 = *(char *)puVar1;
    *(char *)in_AX = cVar2;
    puVar4 = (undefined2 *)((int)in_AX + 1);
    if (cVar2 == '\0') {
      return in_AX;
    }
  }
  do {
    uVar3 = *in_DX;
    puVar5 = puVar4;
    if ((char)uVar3 == '\0') goto LAB_1000_0744;
    *puVar4 = uVar3;
    if ((char)((uint)uVar3 >> 8) == '\0') {
      return in_AX;
    }
    uVar3 = in_DX[1];
    puVar5 = puVar4 + 1;
    if ((char)uVar3 == '\0') goto LAB_1000_0744;
    puVar4[1] = uVar3;
    in_DX = in_DX + 2;
    puVar4 = puVar4 + 2;
    bVar6 = (char)((uint)uVar3 >> 8) != '\0';
  } while (bVar6);
  puVar5 = puVar4;
  if (bVar6) {
LAB_1000_0744:
    *(char *)puVar5 = (char)uVar3;
  }
  return in_AX;
}



char * __cdecl16near FUN_1000_074a(void)

{
  char *pcVar1;
  char cVar2;
  char *in_AX;
  int iVar3;
  char *in_DX;
  char *pcVar4;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  pcVar4 = in_AX;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar2 = *in_DX;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') {
      return in_AX;
    }
    cVar2 = in_DX[1];
    in_DX = in_DX + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  return in_AX;
}



void __cdecl16near FUN_1000_0780(void)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_1000_035a();
  *(undefined2 *)uVar1 = (int)((ulong)uVar1 >> 0x10);
  return;
}



void __cdecl16near FUN_1000_079d(void)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_1000_035e();
  *(undefined2 *)uVar1 = (int)((ulong)uVar1 >> 0x10);
  return;
}



int __cdecl16near FUN_1000_07a6(void)

{
  char cVar1;
  char *in_AX;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 uStack164;
  undefined local_a2 [144];
  char *local_12;
  char *local_10;
  int local_c;
  char *local_a;
  
  uStack164 = 0x7be;
  iVar2 = FUN_1000_0e0f();
  if (iVar2 == -1) {
    uStack164 = 0x7cb;
    uVar5 = FUN_1000_035a();
    iVar2 = (int)((ulong)uVar5 >> 0x10);
    if (*(int *)uVar5 != 1) {
      uStack164 = 0x7d5;
      uVar5 = FUN_1000_035a();
      iVar2 = (int)((ulong)uVar5 >> 0x10);
      if (*(int *)uVar5 != 9) {
        return iVar2;
      }
    }
    cVar1 = *in_AX;
    if (((cVar1 != '\\') && (cVar1 != '\0')) && (in_AX[1] != ':')) {
      uStack164 = 0x7f7;
      uVar5 = FUN_1000_00ba();
      iVar2 = (int)((ulong)uVar5 >> 0x10);
      pcVar4 = (char *)uVar5;
      if (pcVar4 != (char *)0x0) {
        uStack164 = 0x802;
        uVar5 = FUN_1000_06f2();
        iVar2 = (int)((ulong)uVar5 >> 0x10);
        local_c = (int)uVar5 + 1;
        local_10 = (char *)(0x90 - local_c);
        while (*pcVar4 != '\0') {
          uStack164 = 0x81c;
          local_a = (char *)FUN_1000_1285();
          if (local_a == (char *)0x0) {
            uStack164 = 0x82a;
            pcVar3 = pcVar4;
            iVar2 = FUN_1000_06f2();
            local_a = pcVar3 + iVar2;
          }
          pcVar4 = local_a + -(int)pcVar4;
          local_12 = pcVar4;
          if (local_10 < pcVar4) {
            uStack164 = 0x842;
            FUN_1000_0780();
            uStack164 = 0x848;
            FUN_1000_079d();
            return -1;
          }
          uStack164 = 0x85b;
          FUN_1000_129e();
          if (pcVar4[(int)&uStack164 + 1] != '\\') {
            local_a2[(int)pcVar4] = 0x5c;
          }
          uStack164 = 0x873;
          FUN_1000_129e();
          uStack164 = 0x87e;
          iVar2 = FUN_1000_0e0f();
          if (iVar2 != -1) {
            return iVar2;
          }
          uStack164 = 0x888;
          uVar5 = FUN_1000_035a();
          iVar2 = (int)((ulong)uVar5 >> 0x10);
          if (*(int *)uVar5 != 1) {
            uStack164 = 0x892;
            uVar5 = FUN_1000_035a();
            iVar2 = (int)((ulong)uVar5 >> 0x10);
            if (*(int *)uVar5 != 9) {
              return iVar2;
            }
          }
          if (*local_a != ';') {
            return iVar2;
          }
          pcVar4 = local_a + 1;
        }
      }
    }
  }
  return iVar2;
}



char * __cdecl16near FUN_1000_08b4(void)

{
  byte *pbVar1;
  char *in_AX;
  char *pcVar2;
  char *pcVar3;
  int in_DX;
  char *pcVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  if (*(int *)(in_DX + 4) == 0) {
    FUN_1000_12be();
  }
  bVar5 = (*(byte *)(in_DX + 7) & 4) != 0;
  if (bVar5) {
    pbVar1 = (byte *)(in_DX + 7);
    *pbVar1 = *pbVar1 & 0xf9;
    pbVar1 = (byte *)(in_DX + 7);
    *pbVar1 = *pbVar1 | 2;
  }
  pcVar3 = (char *)0x0;
  pcVar4 = in_AX;
  do {
    pcVar2 = pcVar3;
    if (*pcVar4 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar2 = (char *)FUN_1000_0924();
  } while (pcVar2 != (char *)0xffff);
  if (bVar5) {
    pbVar1 = (byte *)(in_DX + 7);
    *pbVar1 = *pbVar1 & 0xf9;
    pbVar1 = (byte *)(in_DX + 7);
    *pbVar1 = *pbVar1 | 4;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)FUN_1000_131b();
    }
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = pcVar4 + -(int)in_AX;
  }
  return pcVar2;
}



uint __cdecl16near FUN_1000_0924(void)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int in_AX;
  int iVar4;
  byte bVar5;
  byte **in_DX;
  uint uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  if ((*(byte *)(in_DX + 3) & 2) == 0) {
    FUN_1000_0780();
    ppbVar1 = in_DX + 3;
    *(byte *)ppbVar1 = *(byte *)ppbVar1 | 0x20;
    return 0xffff;
  }
  if (in_DX[2] == (byte *)0x0) {
    FUN_1000_12be();
  }
  uVar6 = 0x400;
  if ((in_AX == 10) && (uVar6 = 0x600, (*(byte *)(in_DX + 3) & 0x40) == 0)) {
    pbVar3 = *in_DX;
    pbVar2 = (byte *)((int)in_DX + 7);
    *pbVar2 = *pbVar2 | 0x10;
    *pbVar3 = 0xd;
    ppbVar1 = in_DX;
    *ppbVar1 = *ppbVar1 + 1;
    ppbVar1 = in_DX + 1;
    *ppbVar1 = *ppbVar1 + 1;
    if (in_DX[1] == in_DX[5]) {
      uVar7 = FUN_1000_131b();
      uVar6 = (uint)((ulong)uVar7 >> 0x10);
      if ((int)uVar7 != 0) {
        return 0xffff;
      }
    }
  }
  pbVar3 = *in_DX;
  pbVar2 = (byte *)((int)in_DX + 7);
  *pbVar2 = *pbVar2 | 0x10;
  bVar5 = (byte)in_AX;
  *pbVar3 = bVar5;
  ppbVar1 = in_DX;
  *ppbVar1 = *ppbVar1 + 1;
  ppbVar1 = in_DX + 1;
  *ppbVar1 = *ppbVar1 + 1;
  if (((((uint)in_DX[3] & uVar6) != 0) || (in_DX[1] == in_DX[5])) &&
     (iVar4 = FUN_1000_131b(), iVar4 != 0)) {
    return 0xffff;
  }
  return (uint)bVar5;
}



void __cdecl16near FUN_1000_09ac(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x386 = 0x2000;
  FUN_1000_0064();
  FUN_1000_037c();
  return;
}



uint __cdecl16near FUN_1000_09c2(void)

{
  byte *pbVar1;
  code **ppcVar2;
  uint uVar3;
  code *in_CX;
  byte *pbVar4;
  byte *unaff_SI;
  byte *pbVar5;
  byte *unaff_DI;
  undefined2 unaff_DS;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  
  uVar8 = FUN_1000_05f4();
  while( true ) {
    uVar3 = (uint)(uVar8 & 0xffff00) | (uint)((uVar8 & 0xffff00) >> 0x10);
    pbVar4 = unaff_DI;
    pbVar5 = unaff_SI;
    while (pbVar5 < unaff_DI) {
      pbVar1 = pbVar5;
      bVar6 = *pbVar1 < 2;
      bVar7 = *pbVar1 == 2;
      if ((!bVar7) && (uVar3 = (*in_CX)(), bVar6 || bVar7)) {
        uVar3 = uVar3 & 0xff00 | uVar3 >> 8;
        pbVar4 = pbVar5;
      }
      pbVar5 = pbVar5 + 6;
    }
    bVar6 = pbVar4 < unaff_DI;
    bVar7 = pbVar4 == unaff_DI;
    if (bVar7) break;
    uVar8 = (*in_CX)();
    uVar3 = (uint)uVar8;
    if (bVar6 || bVar7) {
      uVar3 = *(uint *)(pbVar4 + 2);
      if (*pbVar4 == 1) {
        uVar3 = uVar3 | *(uint *)(pbVar4 + 4);
        if (uVar3 != 0) {
          ppcVar2 = (code **)(pbVar4 + 2);
          uVar3 = (**ppcVar2)(0x1000);
        }
      }
      else {
        if (uVar3 != 0) {
          uVar3 = (**(code **)(pbVar4 + 2))();
        }
      }
    }
    uVar8 = uVar8 & 0xffff0000 | (ulong)uVar3;
    *pbVar4 = 2;
  }
  return uVar3;
}



void __cdecl16near FUN_1000_0a18(void)

{
  FUN_1000_09c2();
  return;
}



void __cdecl16near FUN_1000_0a36(void)

{
  FUN_1000_09c2();
  return;
}



void __cdecl16near FUN_1000_0a5a(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_13db();
  if (iVar1 == 0) {
    FUN_1000_05bb();
  }
  return;
}



void __cdecl16near FUN_1000_0a73(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 unaff_DS;
  int local_16;
  
  iVar3 = FUN_1000_0b05();
  puVar4 = (undefined2 *)(iVar3 + 1);
  uVar6 = (local_16 - *(int *)0x246) + 1;
  puVar5 = (undefined2 *)FUN_1000_0d39();
  if (puVar5 == (undefined2 *)0x0) {
    *(undefined2 *)0x21c = 0;
  }
  else {
    puVar8 = (undefined2 *)*(undefined2 *)0x246;
    *(int *)0x21c = (int)puVar5 + uVar6;
    uVar7 = uVar6 >> 1;
    while (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar1;
    }
    uVar6 = (uint)((uVar6 & 1) != 0);
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      puVar2 = puVar5;
      puVar5 = (undefined2 *)((int)puVar5 + 1);
      puVar1 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      *(undefined *)puVar2 = *(undefined *)puVar1;
    }
    **(undefined2 **)0x21c = *(undefined2 *)0x24a;
    FUN_1000_0b05();
    *(undefined2 *)(*(int *)0x21c + (int)puVar4 * 2) = 0;
    puVar5 = puVar4;
  }
  *(undefined2 *)0x21a = puVar5;
  *(undefined2 *)0x444 = puVar4;
  *(undefined2 *)0x446 = *(undefined2 *)0x21c;
  return;
}



int __cdecl16near FUN_1000_0b05(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *in_AX;
  int in_DX;
  char **in_BX;
  char *pcVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  char cVar6;
  int local_c;
  
  iVar3 = *(int *)0x448;
  local_c = 0;
  do {
    while ((cVar6 = *in_AX, pcVar5 = in_AX, cVar6 == ' ' || (cVar6 == '\t'))) {
LAB_1000_0b2f:
      in_AX = pcVar5 + 1;
    }
    if (cVar6 == '\0') goto LAB_1000_0c02;
    cVar6 = cVar6 == '\"';
    pcVar4 = in_AX;
    if ((bool)cVar6) {
      in_AX = in_AX + 1;
      pcVar5 = in_AX;
      pcVar4 = in_AX;
    }
LAB_1000_0b45:
    if (*pcVar5 != '\"') {
LAB_1000_0b68:
      cVar2 = *pcVar5;
      if ((((cVar2 == ' ') || (cVar2 == '\t')) && (cVar6 == '\0')) || (*pcVar5 == '\0'))
      goto LAB_1000_0bd0;
      if (*pcVar5 == '\\') {
        if (iVar3 == 0) {
          if ((pcVar5[1] == '\"') && (pcVar1 = pcVar5 + -1, pcVar5 = pcVar5 + 1, *pcVar1 == '\\'))
          goto LAB_1000_0b45;
        }
        else {
          if (cVar6 == '\x01') {
            cVar2 = pcVar5[1];
            if ((cVar2 == '\"') || (cVar2 == '\\')) {
LAB_1000_0bbc:
              pcVar5 = pcVar5 + 1;
            }
          }
          else {
            if (pcVar5[1] == '\"') goto LAB_1000_0bbc;
          }
        }
      }
      if (in_DX == 0) {
        pcVar5 = pcVar5 + 1;
      }
      else {
        *in_AX = *pcVar5;
        in_AX = in_AX + 1;
        pcVar5 = pcVar5 + 1;
      }
      goto LAB_1000_0b45;
    }
    if (iVar3 == 0) {
      pcVar5 = pcVar5 + 1;
      if (cVar6 == '\0') {
        cVar6 = '\x02';
      }
      else {
        if (cVar6 == '\0') goto LAB_1000_0b68;
        cVar6 = '\0';
      }
      goto LAB_1000_0b45;
    }
    if (cVar6 != '\x01') goto LAB_1000_0b68;
LAB_1000_0bd0:
    if (in_DX == 0) {
      local_c = local_c + 1;
      in_AX = pcVar5;
      if (*pcVar5 != '\0') goto LAB_1000_0b2f;
      goto LAB_1000_0c02;
    }
    *(char **)(local_c * 2 + in_DX) = pcVar4;
    local_c = local_c + 1;
    if (*pcVar5 == '\0') {
      *in_AX = '\0';
      in_AX = pcVar5;
LAB_1000_0c02:
      *in_BX = in_AX;
      *(int *)0x448 = iVar3;
      return local_c;
    }
    *in_AX = '\0';
    in_AX = pcVar5 + 1;
  } while( true );
}



undefined4 __cdecl16near FUN_1000_0cd5(void)

{
  undefined2 in_AX;
  int in_DX;
  
  if (in_DX == 0) {
    in_AX = 0;
  }
  else {
    if (in_DX != 0) {
      FUN_1000_079d();
      FUN_1000_0780();
      return CONCAT22(in_DX,0xffff);
    }
  }
  return CONCAT22(in_DX,in_AX);
}



undefined4 __cdecl16near FUN_1000_0ce0(void)

{
  undefined2 in_DX;
  
  FUN_1000_079d();
  FUN_1000_0780();
  return CONCAT22(in_DX,0xffff);
}



undefined4 __cdecl16near FUN_1000_0d39(void)

{
  uint *puVar1;
  bool bVar2;
  uint in_AX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 in_DX;
  uint uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  if ((in_AX != 0) && (in_AX < 0xffeb)) {
    bVar2 = false;
    uVar6 = in_AX + 1 & 0xfffe;
LAB_1000_0d61:
    do {
      uVar4 = uVar6;
      if (uVar6 < 6) {
        uVar4 = 6;
      }
      puVar1 = (uint *)0x384;
      if (uVar4 < *puVar1 || uVar4 == *puVar1) {
        *(undefined2 *)0x384 = 0;
LAB_1000_0d7d:
        iVar5 = *(int *)0x380;
      }
      else {
        iVar5 = *(int *)0x382;
        if (iVar5 == 0) {
          *(undefined2 *)0x384 = 0;
          goto LAB_1000_0d7d;
        }
      }
      while (iVar5 != 0) {
        *(int *)0x382 = iVar5;
        iVar3 = FUN_1000_144e();
        if (iVar3 != 0) goto LAB_1000_0dd5;
        uVar4 = *(uint *)(iVar5 + 10);
        puVar1 = (uint *)0x384;
        if (*puVar1 <= uVar4 && uVar4 != *puVar1) {
          *(uint *)0x384 = uVar4;
        }
        iVar5 = *(int *)(iVar5 + 4);
      }
      if (bVar2) {
LAB_1000_0dc0:
        uVar7 = FUN_1000_179b();
        iVar3 = (int)((ulong)uVar7 >> 0x10);
        if ((int)uVar7 == 0) goto LAB_1000_0dd5;
        bVar2 = false;
        goto LAB_1000_0d61;
      }
      iVar5 = FUN_1000_1689();
      if (iVar5 == 0) goto LAB_1000_0dc0;
      bVar2 = true;
    } while( true );
  }
  iVar3 = 0;
LAB_1000_0ddc:
  return CONCAT22(in_DX,iVar3);
LAB_1000_0dd5:
  *(undefined *)0x44c = 0;
  goto LAB_1000_0ddc;
}



void __cdecl16near FUN_1000_0de6(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *in_AX;
  uint uVar4;
  char *in_DX;
  uint in_BX;
  undefined2 unaff_DS;
  
  if (in_BX != 0) {
    do {
      pcVar1 = in_DX;
      in_DX = in_DX + 1;
      cVar2 = *pcVar1;
      puVar3 = in_AX;
      in_AX = (undefined2 *)((int)in_AX + 1);
      *(char *)puVar3 = cVar2;
      in_BX = in_BX - 1;
    } while (in_BX != 0 && cVar2 != '\0');
    uVar4 = in_BX >> 1;
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      puVar3 = in_AX;
      in_AX = in_AX + 1;
      *puVar3 = 0;
    }
    uVar4 = (uint)((in_BX & 1) != 0);
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      puVar3 = in_AX;
      in_AX = (undefined2 *)((int)in_AX + 1);
      *(undefined *)puVar3 = 0;
    }
  }
  return;
}



undefined2 __cdecl16near FUN_1000_0e0f(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined2 *puVar2;
  int *extraout_DX;
  undefined2 in_BX;
  int *piVar3;
  undefined2 unaff_DS;
  undefined auStack256 [128];
  undefined auStack128 [80];
  int iStack48;
  undefined2 uStack34;
  undefined2 uStack32;
  undefined2 uStack28;
  undefined2 uStack26;
  undefined auStack20 [4];
  undefined auStack16 [4];
  int iStack12;
  undefined2 uStack2;
  
  uStack2 = in_AX;
  FUN_1000_17a3();
  piVar3 = extraout_DX;
  FUN_1000_0de6(in_BX,extraout_DX,uStack2);
  FUN_1000_17d7();
  iVar1 = FUN_1000_1285();
  if (iVar1 == 0) {
    FUN_1000_074a();
    iVar1 = FUN_1000_17fb(auStack128,0x200,0);
    if (iVar1 != -1) goto LAB_1000_0eaf;
    puVar2 = (undefined2 *)FUN_1000_17d7();
    *puVar2 = *(undefined2 *)0x19d;
    puVar2[1] = *(undefined2 *)0x19f;
    *(undefined *)(puVar2 + 2) = *(undefined *)0x1a1;
  }
  iVar1 = FUN_1000_17fb(auStack128,0x200,0);
  FUN_1000_0780();
  if (iVar1 == -1) {
    return 0xffff;
  }
LAB_1000_0eaf:
  iVar1 = FUN_1000_19d8();
  if (iVar1 == -1) {
    FUN_1000_1aa6();
    FUN_1000_0780();
    FUN_1000_079d();
  }
  else {
    if ((iStack48 == 0x5a4d) || (iStack48 == 0x4d5a)) {
      iStack12 = 1;
    }
    else {
      iStack12 = 0;
    }
    if (iStack12 == 0) {
      FUN_1000_1abd();
      FUN_1000_1afa();
    }
    FUN_1000_1aa6();
    *piVar3 = (int)auStack128;
    iVar1 = FUN_1000_1bec(auStack20,auStack16,1);
    if (iVar1 != -1) {
      FUN_1000_06f2();
      FUN_1000_1d16();
      iVar1 = FUN_1000_1087();
      if (iVar1 != 0) {
        FUN_1000_11f1();
      }
      FUN_1000_1e9e(0x1000,auStack128,auStack256,iStack12,uStack34,uStack32,uStack26,uStack28);
      FUN_1000_13f7();
    }
  }
  return 0xffff;
}



undefined4 __cdecl16near FUN_1000_0fc1(void)

{
  undefined2 extraout_DX;
  int iStack30;
  undefined2 uStack18;
  
  FUN_1000_17a3();
  FUN_1000_1fa2();
  return CONCAT22(extraout_DX,*(int *)(iStack30 + -2) + 1);
}



void __cdecl16near FUN_1000_1000(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 in_BX;
  
  FUN_1000_17a3();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(extraout_DX,in_BX);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



undefined4 __cdecl16near FUN_1000_1022(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 extraout_DX;
  undefined2 in_BX;
  byte in_CF;
  undefined2 in_stack_00000000;
  
  FUN_1000_17a3();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(in_BX);
  if ((int)-(uint)in_CF < 0) {
    uVar2 = 0;
  }
  else {
    FUN_1000_1000();
    uVar2 = extraout_DX;
  }
  return CONCAT22(in_stack_00000000,uVar2);
}



undefined2 __cdecl16near FUN_1000_1046(void)

{
  code *pcVar1;
  int in_AX;
  undefined2 uVar2;
  undefined2 in_CX;
  int extraout_DX;
  undefined2 in_BX;
  
  FUN_1000_17a3();
  if (*(uint *)0x3 < extraout_DX + 1U) {
    uVar2 = 0;
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(in_CX,in_BX);
    uVar2 = FUN_1000_1022();
  }
  return uVar2;
}



void __cdecl16near FUN_1000_107c(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_17a3();
  (**(code **)0x216)();
  return;
}



undefined2 __cdecl16near FUN_1000_1087(void)

{
  uint uVar1;
  code *pcVar2;
  uint in_AX;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 extraout_DX;
  int iVar6;
  int in_BX;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 unaff_DS;
  undefined2 uVar10;
  
  FUN_1000_17a3();
  uVar8 = 0;
  iVar9 = 0;
  iVar7 = 0;
  uVar10 = extraout_DX;
  while (iVar3 = FUN_1000_1022(in_BX,uVar10), iVar3 != 0) {
    *(int *)0x0 = iVar7;
    iVar7 = iVar3;
  }
  iVar3 = iVar7;
  if ((*(char *)0x228 != '\x02') ||
     ((iVar7 != 0 && (iVar9 = FUN_1000_1046(), iVar3 = iVar7, iVar9 != 0)))) {
    while ((iVar3 != 0 && (uVar8 = FUN_1000_1046(), uVar8 == 0))) {
      iVar3 = *(int *)0x0;
    }
    if (uVar8 != 0) {
      uVar5 = *(uint *)0x226;
      do {
        if (uVar8 <= uVar5) {
LAB_1000_1126:
          *(uint *)0x2c = uVar8;
          FUN_1000_2045(in_BX << 4);
          FUN_1000_107c();
          do {
            uVar5 = FUN_1000_0fc1();
            while (((uVar1 = *(uint *)0x1, uVar1 != *(uint *)0x226 || (uVar5 == uVar1)) ||
                   (uVar5 == uVar8))) {
              iVar7 = 0;
              if (*(char *)0x0 != 'M') {
                FUN_1000_1000();
                iVar9 = *(int *)0x226;
                *(int *)0x2 = *(int *)(iVar7 + 3) + iVar9;
                if (*(uint *)(iVar7 + 3) < in_AX) {
                  FUN_1000_0337();
                  pcVar2 = (code *)swi(0x21);
                  (*pcVar2)();
                }
                return 1;
              }
              uVar5 = uVar5 + *(int *)0x3 + 1;
            }
            pcVar2 = (code *)swi(0x21);
            (*pcVar2)();
          } while( true );
        }
        iVar6 = uVar5 - 1;
        iVar3 = *(int *)0x1;
        if (iVar3 != *(int *)0x226) goto LAB_1000_1126;
        iVar4 = uVar5 + *(int *)0x3;
        if (*(char *)0x0 != 'M') {
          if ((uint)(iVar4 - iVar3) < in_AX) break;
          goto LAB_1000_1126;
        }
        uVar5 = iVar4 + 1;
      } while( true );
    }
  }
  if (iVar9 != 0) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  if (uVar8 != 0) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  while (iVar7 != 0) {
    iVar7 = *(int *)0x0;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return 0;
}



void __cdecl16near FUN_1000_11f1(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint extraout_DX;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined2 unaff_DS;
  
  FUN_1000_17a3();
  iVar6 = *(int *)0x226;
  iVar5 = 0;
  iVar3 = *(int *)0x36;
  puVar2 = (undefined *)*(undefined2 *)0x34;
  puVar7 = puVar2;
  if ((iVar3 != iVar6) || (puVar2 != (undefined *)0x18)) {
    do {
      iVar6 = iVar5 + 1;
      *(undefined *)(iVar5 + 0x18) = *puVar7;
      iVar5 = iVar6;
      puVar7 = puVar7 + 1;
    } while (iVar6 < 0x14);
    uVar4 = 0x14;
    pcVar8 = puVar2 + 0x14;
    while (uVar1 = *(undefined2 *)0x226, uVar4 < *(uint *)0x32) {
      if (*pcVar8 != -1) {
        FUN_1000_1aa6();
        uVar4 = extraout_DX;
      }
      pcVar8 = pcVar8 + 1;
      uVar4 = uVar4 + 1;
    }
    *(undefined2 *)0x32 = 0x14;
    *(undefined2 *)0x34 = 0x18;
    *(undefined2 *)0x36 = uVar1;
  }
  return;
}



char * __cdecl16near FUN_1000_1285(void)

{
  char *pcVar1;
  char *in_AX;
  char in_DL;
  undefined2 unaff_DS;
  
  do {
    if (in_DL == *in_AX) {
      return in_AX;
    }
    pcVar1 = in_AX;
    in_AX = in_AX + 1;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}



undefined2 * __cdecl16near FUN_1000_129e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *in_AX;
  uint uVar3;
  undefined2 *in_DX;
  uint in_BX;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  uVar3 = in_BX >> 1;
  puVar4 = in_AX;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = in_DX;
    in_DX = in_DX + 1;
    *puVar2 = *puVar1;
  }
  uVar3 = (uint)((in_BX & 1) != 0);
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    puVar2 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    puVar1 = in_DX;
    in_DX = (undefined2 *)((int)in_DX + 1);
    *(undefined *)puVar2 = *(undefined *)puVar1;
  }
  return in_AX;
}



void __cdecl16near FUN_1000_12be(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *in_AX;
  int iVar4;
  undefined2 unaff_DS;
  
  FUN_1000_211e();
  if (in_AX[5] == 0) {
    if ((*(byte *)((int)in_AX + 7) & 2) == 0) {
      if ((*(byte *)((int)in_AX + 7) & 4) == 0) {
        in_AX[5] = 0x200;
      }
      else {
        in_AX[5] = 1;
      }
    }
    else {
      in_AX[5] = 0x86;
    }
  }
  iVar4 = FUN_1000_0d39();
  in_AX[2] = iVar4;
  if (iVar4 == 0) {
    in_AX[5] = 1;
    pbVar1 = (byte *)((int)in_AX + 7);
    *pbVar1 = *pbVar1 & 0xf8;
    in_AX[2] = in_AX + 6;
    pbVar1 = (byte *)((int)in_AX + 7);
    *pbVar1 = *pbVar1 | 4;
  }
  else {
    puVar2 = in_AX + 3;
    *(byte *)puVar2 = *(byte *)puVar2 | 8;
  }
  uVar3 = in_AX[2];
  in_AX[1] = 0;
  *in_AX = uVar3;
  return;
}



undefined4 __cdecl16near FUN_1000_131b(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *in_AX;
  int iVar6;
  int iVar7;
  undefined2 in_DX;
  int extraout_DX;
  undefined2 unaff_DS;
  long lVar8;
  int local_e;
  
  local_e = 0;
  if ((*(byte *)((int)in_AX + 7) & 0x10) == 0) {
    if ((in_AX[2] != 0) &&
       (puVar2 = in_AX + 3, *(byte *)puVar2 = *(byte *)puVar2 & 0xef,
       (*(byte *)((int)in_AX + 7) & 0x20) == 0)) {
      uVar3 = in_AX[1];
      lVar8 = (long)(int)uVar3;
      if (((int)uVar3 >> 0xf | uVar3) != 0) {
        lVar8 = FUN_1000_1abd();
      }
      if (lVar8 == -1) {
        local_e = -1;
        puVar2 = in_AX + 3;
        *(byte *)puVar2 = *(byte *)puVar2 | 0x20;
      }
    }
  }
  else {
    pbVar1 = (byte *)((int)in_AX + 7);
    *pbVar1 = *pbVar1 & 0xef;
    if (((*(byte *)(in_AX + 3) & 2) != 0) && (in_AX[2] != 0)) {
      iVar7 = in_AX[1];
      while ((iVar7 != 0 && (local_e == 0))) {
        iVar6 = FUN_1000_2141();
        iVar5 = iVar6;
        if (iVar6 == -1) {
LAB_1000_1378:
          local_e = iVar5;
          puVar2 = in_AX + 3;
          *(byte *)puVar2 = *(byte *)puVar2 | 0x20;
        }
        else {
          if (iVar6 == 0) {
            local_e = -1;
            FUN_1000_0780();
            iVar6 = extraout_DX;
            iVar5 = local_e;
            goto LAB_1000_1378;
          }
        }
        iVar7 = iVar7 - iVar6;
      }
    }
  }
  uVar4 = in_AX[2];
  in_AX[1] = 0;
  *in_AX = uVar4;
  return CONCAT22(in_DX,local_e);
}



undefined2 __cdecl16near FUN_1000_13db(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x388 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 0;
}



void __cdecl16near FUN_1000_13f7(void)

{
  uint *puVar1;
  uint in_AX;
  uint uVar2;
  undefined2 unaff_DS;
  
  if (in_AX != 0) {
    uVar2 = *(uint *)0x44a;
    if (((uVar2 == 0) || (in_AX < uVar2)) || (*(uint *)(uVar2 + 4) <= in_AX)) {
      uVar2 = *(uint *)0x380;
      while ((*(int *)(uVar2 + 4) != 0 && ((in_AX < uVar2 || (*(uint *)(uVar2 + 4) <= in_AX))))) {
        uVar2 = *(uint *)(uVar2 + 4);
      }
    }
    FUN_1000_14f2();
    *(uint *)0x44a = uVar2;
    if ((uVar2 < *(uint *)0x382) &&
       (uVar2 = *(uint *)(uVar2 + 10), puVar1 = (uint *)0x384, *puVar1 <= uVar2 && uVar2 != *puVar1)
       ) {
      *(uint *)0x384 = uVar2;
    }
    *(undefined *)0x44c = 0;
  }
  return;
}



uint * __cdecl16near FUN_1000_144e(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint in_AX;
  uint uVar4;
  undefined2 in_DX;
  int in_BX;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  if (((in_AX != 0) && (in_AX < 0xfffd)) &&
     (uVar4 = in_AX + 3 & 0xfffe, uVar4 = (uVar4 - 6 & -(uint)(5 < uVar4)) + 6,
     puVar1 = (uint *)(in_BX + 10), uVar4 < *puVar1 || uVar4 == *puVar1)) {
    puVar5 = *(uint **)(in_BX + 6);
    uVar6 = *(uint *)(in_BX + 8);
    if (uVar4 <= uVar6) {
      puVar5 = *(uint **)(in_BX + 0x14);
      uVar6 = 0;
    }
    do {
      uVar3 = *puVar5;
      if (uVar4 <= uVar3) {
        *(uint *)(in_BX + 8) = uVar6;
        piVar2 = (int *)(in_BX + 0xc);
        *piVar2 = *piVar2 + 1;
        uVar6 = puVar5[2];
        if (uVar3 - uVar4 < 6) {
          piVar2 = (int *)(in_BX + 0xe);
          *piVar2 = *piVar2 + -1;
          uVar4 = puVar5[1];
          *(uint *)(uVar4 + 4) = uVar6;
          *(uint *)(uVar6 + 2) = uVar4;
          *(uint *)(in_BX + 6) = uVar4;
        }
        else {
          puVar7 = (uint *)((int)puVar5 + uVar4);
          *(uint **)(in_BX + 6) = puVar7;
          *puVar7 = uVar3 - uVar4;
          *puVar5 = uVar4;
          uVar4 = puVar5[1];
          puVar7[1] = uVar4;
          puVar7[2] = uVar6;
          *(uint **)(uVar4 + 4) = puVar7;
          *(uint **)(uVar6 + 2) = puVar7;
        }
        puVar1 = puVar5;
        *puVar1 = *puVar1 | 1;
        return puVar5 + 1;
      }
      uVar6 = (uVar6 - uVar3 & -(uint)(uVar3 <= uVar6)) + uVar3;
      puVar5 = (uint *)puVar5[2];
    } while (puVar5 != (uint *)(in_BX + 0x10U));
    *(uint *)(in_BX + 10) = uVar6;
  }
  return (uint *)0x0;
}



void __cdecl16near FUN_1000_14f2(void)

{
  int *piVar1;
  uint **ppuVar2;
  uint uVar3;
  uint **in_AX;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined2 in_DX;
  int in_BX;
  uint **ppuVar7;
  uint **ppuVar8;
  uint *puVar9;
  uint **ppuVar10;
  
  if (in_AX == (uint **)0x0) {
    return;
  }
  ppuVar7 = in_AX + -1;
  puVar6 = *ppuVar7;
  if (((uint)puVar6 & 1) == 0) {
    return;
  }
  puVar6 = (uint *)((uint)puVar6 & 0xfffe);
  puVar9 = (uint *)((int)ppuVar7 + (int)puVar6);
  if ((*puVar9 & 1) == 0) {
    if (puVar9 == *(uint **)(in_BX + 6)) {
      *(uint ***)(in_BX + 6) = ppuVar7;
    }
    *ppuVar7 = (uint *)((int)puVar6 + *puVar9);
    puVar6 = (uint *)puVar9[1];
    ppuVar10 = (uint **)puVar9[2];
    puVar6[2] = (uint)ppuVar10;
    ppuVar10[1] = puVar6;
    piVar1 = (int *)(in_BX + 0xe);
    *piVar1 = *piVar1 + -1;
  }
  else {
    *ppuVar7 = puVar6;
    ppuVar10 = (uint **)*(uint **)(in_BX + 6);
    if (ppuVar7 < ppuVar10) {
      ppuVar2 = ppuVar10 + 1;
      if ((*ppuVar2 <= ppuVar7 && ppuVar7 != (uint **)*ppuVar2) ||
         (ppuVar10 = (uint **)*(uint **)(in_BX + 0x14), ppuVar7 < ppuVar10)) goto LAB_1000_15ae;
    }
    else {
      ppuVar10 = (uint **)ppuVar10[2];
      if ((ppuVar7 < ppuVar10) ||
         (ppuVar10 = (uint **)(in_BX + 0x10), ppuVar2 = (uint **)(in_BX + 0x12),
         *ppuVar2 <= ppuVar7 && ppuVar7 != (uint **)*ppuVar2)) goto LAB_1000_15ae;
    }
    uVar3 = *(uint *)(in_BX + 0xe);
    uVar4 = *(uint *)(in_BX + 0xc) / (uVar3 + 1);
    if (uVar4 < uVar3) {
      iVar5 = uVar4 * 2;
      if (*(int *)(in_BX + 0xc) - uVar3 <= uVar3) {
        iVar5 = 0;
      }
      ppuVar10 = (uint **)((int)ppuVar7 + (int)*ppuVar7);
      do {
        puVar6 = *ppuVar10;
        if (((uint)puVar6 & 1) == 0) goto LAB_1000_15ae;
        if (puVar6 == (uint *)0xffff) break;
        ppuVar10 = (uint **)((int)ppuVar10 + ((uint)puVar6 & 0xfffe));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    ppuVar10 = (uint **)*(uint **)(in_BX + 6);
    if (ppuVar7 < ppuVar10) {
      ppuVar10 = (uint **)*(uint **)(in_BX + 0x14);
    }
    while (((ppuVar10 <= ppuVar7 && (ppuVar10 = (uint **)ppuVar10[2], ppuVar10 <= ppuVar7)) &&
           (ppuVar10 = (uint **)ppuVar10[2], ppuVar10 <= ppuVar7))) {
      ppuVar10 = (uint **)ppuVar10[2];
    }
  }
LAB_1000_15ae:
  ppuVar8 = (uint **)ppuVar10[1];
  puVar6 = *ppuVar7;
  if ((uint **)((int)ppuVar8 + (int)*ppuVar8) == ppuVar7) {
    puVar6 = (uint *)((int)puVar6 + (int)*ppuVar8);
    *ppuVar8 = puVar6;
    if (ppuVar7 == *(uint ***)(in_BX + 6)) {
      *(uint **)(in_BX + 6) = (uint *)ppuVar8;
    }
  }
  else {
    piVar1 = (int *)(in_BX + 0xe);
    *piVar1 = *piVar1 + 1;
    in_AX[1] = (uint *)ppuVar10;
    *in_AX = (uint *)ppuVar8;
    ppuVar8[2] = (uint *)ppuVar7;
    ppuVar10[1] = (uint *)ppuVar7;
    ppuVar8 = ppuVar7;
  }
  piVar1 = (int *)(in_BX + 0xc);
  *piVar1 = *piVar1 + -1;
  if ((ppuVar8 < *(uint **)(in_BX + 6)) &&
     (ppuVar2 = (uint **)(in_BX + 8), *ppuVar2 <= puVar6 && puVar6 != *ppuVar2)) {
    *(uint **)(in_BX + 8) = puVar6;
  }
  ppuVar2 = (uint **)(in_BX + 10);
  if (*ppuVar2 <= puVar6 && puVar6 != *ppuVar2) {
    *(uint **)(in_BX + 10) = puVar6;
  }
  return;
}



int * __cdecl16near FUN_1000_15fb(void)

{
  int *piVar1;
  int *in_AX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar1 = *(int **)0x380;
  piVar4 = (int *)0x0;
  while ((piVar2 = piVar1, piVar2 != (int *)0x0 && (piVar2 <= in_AX))) {
    piVar1 = (int *)piVar2[2];
    piVar4 = piVar2;
  }
  in_AX[1] = (int)piVar4;
  in_AX[2] = (int)piVar2;
  if (piVar4 == (int *)0x0) {
    *(int **)0x380 = in_AX;
  }
  else {
    piVar4[2] = (int)in_AX;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)in_AX;
  }
  piVar1 = in_AX + 8;
  iVar3 = *in_AX;
  piVar4 = in_AX + 0xb;
  in_AX[8] = 0;
  in_AX[4] = 0;
  in_AX[6] = 0;
  in_AX[7] = 0;
  in_AX[9] = (int)piVar1;
  in_AX[10] = (int)piVar1;
  iVar3 = iVar3 + -0x16;
  in_AX[3] = (int)piVar1;
  *piVar4 = iVar3;
  *(undefined2 *)(iVar3 + (int)piVar4) = 0xffff;
  return piVar4;
}



int __cdecl16near FUN_1000_1665(void)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if ((*(int *)0x380 != 0) &&
     (piVar1 = *(int **)(*(int *)0x380 + 0x12), (int)piVar1 + *piVar1 + 2 == *(int *)0x224)) {
    return *piVar1;
  }
  return 0;
}



undefined2 __cdecl16near FUN_1000_1689(void)

{
  uint *puVar1;
  uint *puVar2;
  int in_AX;
  int iVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  undefined2 unaff_DS;
  uint *local_a;
  
  if ((*(int *)0x398 != 0) && (*(int *)0x224 != -2)) {
    iVar3 = FUN_1000_175f();
    if (iVar3 == 0) {
      return 0;
    }
    local_a = (uint *)(in_AX + *(int *)0x224);
    if (local_a < *(uint **)0x224) {
      local_a = (uint *)0xfffe;
    }
    puVar4 = (uint *)FUN_1000_21a7();
    if (puVar4 == (uint *)0xffff) {
      return 0;
    }
    if ((uint *)0xfff8 < puVar4) {
      return 0;
    }
    if (local_a <= puVar4) {
      return 0;
    }
    local_a = (uint *)((int)local_a - (int)puVar4);
    puVar1 = local_a + -1;
    if (local_a < puVar1) {
      return 0;
    }
    puVar6 = *(uint **)0x380;
    while (((puVar6 != (uint *)0x0 && (puVar6[2] != 0)) &&
           ((puVar4 < puVar6 || ((uint *)puVar6[2] <= puVar4))))) {
      puVar6 = (uint *)puVar6[2];
    }
    if (puVar6 != (uint *)0x0) {
      ppuVar5 = (uint **)(*puVar6 + (int)puVar6);
      if ((uint **)(puVar4 + -1) == ppuVar5) {
        puVar2 = puVar6;
        *puVar2 = *puVar2 + (int)local_a;
        *(undefined2 *)((int)(puVar4 + -1) + (int)local_a) = 0xffff;
        puVar4 = puVar6;
        goto LAB_1000_1741;
      }
    }
    if (0x1b < puVar1) {
      *puVar4 = (uint)puVar1;
      ppuVar5 = (uint **)FUN_1000_15fb();
      local_a = *ppuVar5;
LAB_1000_1741:
      *ppuVar5 = (uint *)((uint)local_a | 1);
      puVar4[5] = 0xffff;
      puVar2 = puVar4 + 6;
      *puVar2 = *puVar2 + 1;
      FUN_1000_13f7();
      return 1;
    }
  }
  return 0;
}



long __cdecl16near FUN_1000_175f(void)

{
  uint *in_AX;
  uint in_DX;
  uint uVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  if ((*in_AX + 3 & 0xfffe) != 0) {
    uVar2 = FUN_1000_1665();
    uVar1 = (int)((ulong)uVar2 >> 0x10) - (int)uVar2;
    *in_AX = uVar1;
    uVar1 = uVar1 + 0x1e;
    if (*in_AX <= uVar1) {
      if (uVar1 < *(uint *)0x386) {
        uVar1 = *(uint *)0x386 & 0xfffe;
      }
      *in_AX = uVar1;
      if (uVar1 != 0) {
        return CONCAT22(in_DX,1);
      }
    }
  }
  return (ulong)in_DX << 0x10;
}



undefined2 __cdecl16near FUN_1000_179b(void)

{
  return 0;
}



// WARNING: Instruction at (ram,0x0001182a) overlaps instruction at (ram,0x00011829)
// 

char * __cdecl16near FUN_1000_17a3(undefined param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined uVar5;
  code *pcVar6;
  byte bVar7;
  undefined *in_AX;
  char *pcVar8;
  char *pcVar9;
  char *in_CX;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  uint unaff_BP;
  undefined2 *unaff_SI;
  int unaff_DI;
  undefined *puVar13;
  undefined2 unaff_ES;
  char *unaff_SS;
  undefined2 unaff_DS;
  bool bVar14;
  char cVar15;
  bool bVar16;
  undefined4 uVar17;
  int iStack2;
  
  bVar14 = in_AX < register0x00000010;
  bVar16 = in_AX == (undefined *)register0x00000010;
  if (bVar14) {
    pcVar8 = (char *)-(int)(in_AX + -(int)register0x00000010);
    ppcVar3 = (char **)0x22c;
    if (*ppcVar3 <= pcVar8 && (undefined *)-(int)*ppcVar3 != in_AX + -(int)register0x00000010) {
      return pcVar8;
    }
    ppcVar3 = (char **)0x38a;
    bVar14 = unaff_SS < *ppcVar3;
    bVar16 = unaff_SS == *ppcVar3;
    if (!bVar16) {
      return unaff_SS;
    }
  }
  iVar12 = 1;
  iStack2 = 0x17c5;
  uVar17 = FUN_1000_0a5a();
  uVar11 = (undefined2)((ulong)uVar17 >> 0x10);
  if (bVar16) {
    bVar7 = in(0x3d);
    pbVar2 = (byte *)(iVar12 + (int)unaff_SI);
    *pbVar2 = *pbVar2 & bVar7;
    bVar14 = *pbVar2 == 0;
    while (bVar14) {
      unaff_SI = (undefined2 *)((int)unaff_SI + 1);
      bVar14 = *(char *)unaff_SI == ' ';
    }
    *(uint *)(unaff_BP - 4) = (uint)((byte)*(undefined2 *)(unaff_BP + 0x10) & 0x83);
  }
  else {
    puVar1 = (uint *)(unaff_BP + unaff_DI + 0x20);
    *puVar1 = *puVar1 + (uint)bVar14 * ((unaff_BP & 3) - (*puVar1 & 3));
    puVar13 = (undefined *)(unaff_DI + -1);
    if (bVar14 || puVar13 == (undefined *)0x0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (!bVar14) {
      uVar5 = in(uVar11);
      *puVar13 = uVar5;
      out(*unaff_SI,uVar11);
      if (bVar14 || puVar13 == (undefined *)0x0) {
        pcVar8 = (char *)((uint)uVar17 | 10);
        uVar10 = 0xffff;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar4 = pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar4 != '\0');
        in_CX = (char *)~uVar10;
        pcVar8 = pcVar8 + -1;
        bVar14 = pcVar8 == (char *)0x0;
        do {
          if (in_CX == (char *)0x0) break;
          in_CX = in_CX + -1;
          pcVar4 = pcVar8;
          pcVar8 = pcVar8 + -1;
          bVar14 = (char)((ulong)uVar17 >> 0x10) == *pcVar4;
        } while (!bVar14);
        if (bVar14) {
          in_CX = pcVar8 + 1;
        }
      }
      return in_CX;
    }
    pcVar4 = (char *)(iVar12 + (int)unaff_SI);
    *pcVar4 = *pcVar4 + (char)((ulong)uVar17 >> 0x18) + bVar14;
    in(0x24);
    puVar1 = (uint *)(puVar13 + iVar12 + -0x3ba);
    *puVar1 = *puVar1 | 0xff8a;
  }
  cVar15 = '\0';
  pcVar6 = (code *)swi(0x21);
  iStack2 = iVar12;
  pcVar9 = (char *)(*pcVar6)();
  pcVar8 = (char *)0xffff;
  if (cVar15 == '\0') {
    pcVar8 = pcVar9;
  }
  if (((*(byte *)(unaff_BP + 0x10) & 3) != 0) && (pcVar8 != (char *)0xffff)) {
    uVar17 = FUN_1000_21fd();
    pcVar9 = (char *)((ulong)uVar17 >> 0x10);
    if ((int)uVar17 == 0) {
      if (((*(byte *)(unaff_BP + 0x11) & 4) != 0) && ((*(byte *)(unaff_BP + 0x10) & 0x20) != 0)) {
        pcVar6 = (code *)swi(0x21);
        (*pcVar6)();
        param_2 = 0x1889;
        FUN_1000_0780();
        return (char *)0xffff;
      }
      if ((*(byte *)(unaff_BP + 0x10) & 0x40) != 0) {
        cVar15 = '\0';
        pcVar6 = (code *)swi(0x21);
        pcVar9 = (char *)(*pcVar6)();
        if (cVar15 != '\0') {
          pcVar6 = (code *)swi(0x21);
          (*pcVar6)();
          goto LAB_1000_18b6;
        }
      }
    }
  }
  if (pcVar8 != (char *)0xffff) goto LAB_1000_1928;
  if (((*(byte *)(unaff_BP + 0x10) & 0x20) != 0) && (pcVar9 == (char *)0x2)) {
    cVar15 = '\0';
    pcVar6 = (code *)swi(0x21);
    pcVar8 = (char *)(*pcVar6)();
    if (cVar15 == '\0') {
      cVar15 = '\0';
      if (*(int *)(unaff_BP + 0x12) == 0) {
LAB_1000_1928:
        FUN_1000_2219();
        FUN_1000_21fd();
        pbVar2 = (byte *)(unaff_BP - 4);
        *pbVar2 = *pbVar2 & 0x7f;
        FUN_1000_2260();
        return pcVar8;
      }
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      if (cVar15 == '\0') {
        cVar15 = '\0';
        pcVar6 = (code *)swi(0x21);
        pcVar8 = (char *)(*pcVar6)();
        if (cVar15 == '\0') goto LAB_1000_1928;
      }
    }
  }
LAB_1000_18b6:
  pcVar8 = (char *)FUN_1000_0ce0();
  return pcVar8;
}



char * __cdecl16near FUN_1000_17d7(void)

{
  char *pcVar1;
  char *in_AX;
  uint uVar2;
  char *pcVar3;
  char in_DL;
  char *pcVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = in_AX;
    in_AX = in_AX + 1;
  } while (*pcVar1 != '\0');
  pcVar3 = (char *)~uVar2;
  pcVar4 = in_AX + -1;
  bVar5 = pcVar4 == (char *)0x0;
  do {
    if (pcVar3 == (char *)0x0) break;
    pcVar3 = pcVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + -1;
    bVar5 = in_DL == *pcVar1;
  } while (!bVar5);
  if (bVar5) {
    pcVar3 = pcVar4 + 1;
  }
  return pcVar3;
}



void __cdecl16near FUN_1000_17fb(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_181a(param_1,param_2,0,param_3);
  return;
}



undefined4 FUN_1000_181a(char *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 in_DX;
  undefined2 unaff_DS;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  
  while (*param_1 == ' ') {
    param_1 = param_1 + 1;
  }
  cVar4 = '\0';
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  iVar3 = -1;
  if (cVar4 == '\0') {
    iVar3 = iVar2;
  }
  if (((param_2 & 3) == 0) || (iVar3 == -1)) {
LAB_1000_18bc:
    if (iVar3 != -1) goto LAB_1000_1928;
    if (((param_2 & 0x20) != 0) && (iVar2 == 2)) {
      cVar4 = '\0';
      pcVar1 = (code *)swi(0x21);
      iVar3 = (*pcVar1)();
      if (cVar4 == '\0') {
        cVar4 = '\0';
        if (param_3 == 0) {
LAB_1000_1928:
          FUN_1000_2219();
          FUN_1000_21fd();
          FUN_1000_2260();
          goto LAB_1000_1988;
        }
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (cVar4 == '\0') {
          cVar4 = '\0';
          pcVar1 = (code *)swi(0x21);
          iVar3 = (*pcVar1)();
          if (cVar4 == '\0') goto LAB_1000_1928;
        }
      }
    }
  }
  else {
    uVar6 = FUN_1000_21fd();
    iVar2 = (int)((ulong)uVar6 >> 0x10);
    if ((int)uVar6 != 0) goto LAB_1000_18bc;
    if (((param_2 & 0x400) != 0) && ((param_2 & 0x20) != 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      FUN_1000_0780();
      iVar3 = -1;
      goto LAB_1000_1988;
    }
    if ((param_2 & 0x40) == 0) goto LAB_1000_18bc;
    bVar5 = 0;
    pcVar1 = (code *)swi(0x21);
    iVar2 = (*pcVar1)();
    if (-1 < (int)-(uint)bVar5) goto LAB_1000_18bc;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  iVar3 = FUN_1000_0ce0();
LAB_1000_1988:
  return CONCAT22(in_DX,iVar3);
}



int __cdecl16near FUN_1000_19d8(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *in_DX;
  int iVar5;
  int in_BX;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  char cVar8;
  char *local_16;
  int local_a;
  
  uVar2 = FUN_1000_2219();
  if ((uVar2 == 0) || ((uVar2 & 1) == 0)) {
    FUN_1000_0780();
    iVar3 = -1;
  }
  else {
    cVar8 = '\0';
    if ((uVar2 & 0x40) == 0) {
      iVar3 = 0;
      local_16 = in_DX;
      local_a = in_BX;
      while( true ) {
        cVar8 = '\0';
        pcVar1 = (code *)swi(0x21);
        iVar4 = (*pcVar1)();
        if (cVar8 != '\0') break;
        if (iVar4 == 0) {
          return iVar3;
        }
        iVar5 = 0;
        pcVar6 = local_16;
        while (pcVar6 < local_16 + iVar4) {
          cVar8 = *pcVar6;
          if (cVar8 == '\x1a') {
            FUN_1000_1abd();
            return iVar3;
          }
          if (cVar8 != '\r') {
            iVar3 = iVar3 + 1;
            pcVar7 = local_16 + iVar5;
            iVar5 = iVar5 + 1;
            *pcVar7 = cVar8;
          }
          pcVar6 = pcVar6 + 1;
        }
        local_16 = local_16 + iVar5;
        local_a = local_a - iVar5;
        if ((uVar2 & 0x2000) != 0) {
          return iVar3;
        }
        if (local_a == 0) {
          return iVar3;
        }
      }
    }
    else {
      pcVar1 = (code *)swi(0x21);
      iVar3 = (*pcVar1)();
      if (cVar8 == '\0') {
        return iVar3;
      }
    }
    iVar3 = FUN_1000_0ce0();
  }
  return iVar3;
}



undefined2 __cdecl16near FUN_1000_1aa6(void)

{
  uint *puVar1;
  code *pcVar2;
  uint in_AX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  char cVar4;
  
  if ((-1 < (int)in_AX) &&
     (puVar1 = (uint *)0x39c, cVar4 = in_AX < *puVar1, (bool)cVar4 || in_AX == *puVar1)) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (cVar4 == '\0') {
      FUN_1000_2260();
      uVar3 = 0;
    }
    else {
      FUN_1000_0780();
      uVar3 = 0xffff;
    }
    return uVar3;
  }
  FUN_1000_0780();
  return 0xffff;
}



undefined4 __cdecl16near FUN_1000_1abd(void)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar2 = &stack0xfffa < (undefined *)0x4;
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  if ((bVar2 & 1) != 0) {
    FUN_1000_0ce0();
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



int __cdecl16near FUN_1000_1afa(void)

{
  int iVar1;
  int in_CX;
  int in_DX;
  
  if (in_DX < 0) {
    if (in_CX < 0) {
      iVar1 = FUN_1000_1b47();
      return iVar1;
    }
    iVar1 = FUN_1000_1b47();
    return -iVar1;
  }
  if (-1 < in_CX) {
    iVar1 = FUN_1000_1b47();
    return iVar1;
  }
  iVar1 = FUN_1000_1b47();
  return -iVar1;
}



undefined4 __cdecl16near FUN_1000_1b47(void)

{
  uint uVar1;
  uint uVar2;
  uint in_AX;
  uint in_CX;
  uint in_DX;
  uint in_BX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  if (in_CX != 0) {
    if (in_CX < in_DX) {
      uVar4 = 0;
      uVar5 = 0;
      iVar3 = 0;
      do {
        bVar6 = CARRY2(in_BX,in_BX);
        in_BX = in_BX * 2;
        bVar7 = CARRY2(in_CX,in_CX) || CARRY2(in_CX * 2,(uint)bVar6);
        in_CX = in_CX * 2 + (uint)bVar6;
        if (bVar7) goto LAB_1000_1ba7;
        iVar3 = iVar3 + 1;
      } while ((in_CX < in_DX) || ((in_CX <= in_DX && (in_BX <= in_AX))));
      bVar6 = false;
      while( true ) {
        bVar7 = CARRY2(uVar4,uVar4);
        uVar1 = uVar4 * 2;
        uVar4 = uVar1 + bVar6;
        uVar1 = (uint)(bVar7 || CARRY2(uVar1,(uint)bVar6));
        bVar7 = CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar1);
        uVar5 = uVar5 * 2 + uVar1;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) break;
LAB_1000_1ba7:
        uVar1 = in_CX & 1;
        in_CX = in_CX >> 1 | (uint)bVar7 << 0xf;
        in_BX = in_BX >> 1 | (uint)(uVar1 != 0) << 0xf;
        bVar6 = in_AX < in_BX;
        in_AX = in_AX - in_BX;
        uVar1 = (uint)bVar6;
        bVar7 = in_CX <= in_DX;
        uVar2 = in_DX - in_CX;
        in_DX = uVar2 - uVar1;
        bVar6 = bVar7 && uVar1 <= uVar2;
        if (!bVar7 || uVar1 > uVar2) {
          do {
            bVar6 = CARRY2(uVar4,uVar4);
            uVar4 = uVar4 * 2;
            uVar5 = uVar5 * 2 + (uint)bVar6;
            iVar3 = iVar3 + -1;
            if (iVar3 < 0) goto LAB_1000_1bc9;
            uVar1 = in_CX & 1;
            in_CX = in_CX >> 1;
            in_BX = in_BX >> 1 | (uint)(uVar1 != 0) << 0xf;
            bVar8 = CARRY2(in_AX,in_BX);
            in_AX = in_AX + in_BX;
            bVar9 = CARRY2(in_DX,in_CX);
            bVar7 = CARRY2(in_DX + in_CX,(uint)bVar8);
            bVar6 = bVar9 || bVar7;
            in_DX = in_DX + in_CX + (uint)bVar8;
          } while (!bVar9 && !bVar7);
        }
      }
LAB_1000_1bc9:
      return CONCAT22(uVar5,uVar4);
    }
    if ((in_CX == in_DX) && (in_BX <= in_AX)) {
      return 1;
    }
    in_CX = 0;
    in_BX = 0;
LAB_1000_1b81:
    return CONCAT22(in_CX,in_BX);
  }
  if (in_BX != 1) {
    if (in_BX == 0) goto LAB_1000_1b81;
    if (in_BX <= in_DX) {
      in_CX = in_DX / in_BX;
      in_DX = in_DX % in_BX;
    }
    in_AX = (uint)(CONCAT22(in_DX,in_AX) / (ulong)in_BX);
    in_DX = in_CX;
  }
  return CONCAT22(in_DX,in_AX);
}



char * __cdecl16near FUN_1000_1bd5(void)

{
  char cVar1;
  char *in_AX;
  char *in_DX;
  undefined2 unaff_DS;
  
  while (cVar1 = *in_DX, *in_AX = cVar1, cVar1 != '\0') {
    in_AX = in_AX + 1;
    in_DX = in_DX + 1;
  }
  return in_AX;
}



uint FUN_1000_1bec(int *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  int *in_AX;
  int iVar2;
  undefined2 *in_CX;
  int *in_DX;
  int *piVar3;
  int *in_BX;
  uint uVar4;
  undefined *puVar5;
  int unaff_DS;
  undefined4 uVar6;
  int local_8;
  
  if (in_DX == (int *)0x0) {
    in_DX = *(int **)0x220;
  }
  local_8 = 0;
  if (in_DX != (int *)0x0) {
    while (*in_DX != 0) {
      iVar2 = FUN_1000_06f2();
      in_DX = in_DX + 1;
      local_8 = local_8 + iVar2 + 1;
    }
  }
  local_8 = local_8 + 1;
  if (param_3 != 0) {
    iVar2 = FUN_1000_06f2();
    local_8 = local_8 + iVar2 + 3;
  }
  uVar1 = *(undefined2 *)0x386;
  *(undefined2 *)0x386 = 0x10;
  uVar6 = FUN_1000_0d39();
  if (((int)uVar6 == 0) && (uVar6 = FUN_1000_0d39(), (int)uVar6 == 0)) {
    FUN_1000_0780();
    FUN_1000_079d();
    *(undefined2 *)0x386 = uVar1;
  }
  else {
    piVar3 = (int *)((ulong)uVar6 >> 0x10);
    *(undefined2 *)0x386 = uVar1;
    *in_BX = (int)uVar6;
    uVar4 = (int)uVar6 + 0xf;
    puVar5 = (undefined *)(uVar4 & 0xfff0);
    *param_1 = (uVar4 >> 4) + unaff_DS;
    *in_CX = puVar5;
    if (piVar3 != (int *)0x0) {
      while (*piVar3 != 0) {
        iVar2 = FUN_1000_1bd5();
        piVar3 = piVar3 + 1;
        puVar5 = (undefined *)(iVar2 + 1);
      }
    }
    *puVar5 = 0;
    if (param_3 != 0) {
      FUN_1000_070b();
    }
    uVar4 = 0;
    if (*in_AX != 0) {
      piVar3 = in_AX + 1;
      while (*piVar3 != 0) {
        uVar6 = FUN_1000_06f2();
        piVar3 = piVar3 + 1;
        uVar4 = (int)((ulong)uVar6 >> 0x10) + (int)uVar6;
      }
    }
    if (uVar4 < 0x7f) {
      *param_2 = 0x90;
      return local_8 + 0xfU >> 4;
    }
    FUN_1000_0780();
    FUN_1000_079d();
    FUN_1000_13f7();
  }
  return 0xffff;
}



void __cdecl16near FUN_1000_1d16(void)

{
  int in_CX;
  int *in_DX;
  char *in_BX;
  char *pcVar1;
  int *piVar2;
  undefined2 unaff_DS;
  char local_8;
  
  pcVar1 = in_BX;
  if (in_CX == 0) {
    pcVar1 = in_BX + 1;
  }
  if ((*in_DX != 0) && (piVar2 = in_DX + 1, *piVar2 != 0)) {
    while( true ) {
      pcVar1 = (char *)FUN_1000_1bd5();
      piVar2 = piVar2 + 1;
      if (*piVar2 == 0) break;
      *pcVar1 = ' ';
    }
  }
  if (in_CX == 0) {
    *pcVar1 = '\r';
    local_8 = (char)in_BX;
    *in_BX = ((char)pcVar1 - local_8) + -1;
  }
  else {
    *pcVar1 = '\0';
  }
  return;
}



// WARNING: This function may have set the stack pointer

void FUN_1000_1e9e(undefined2 param_1_00,char *param_1,byte *param_2,int param_3,int param_4,
                  undefined2 param_5,int param_6,undefined2 param_7)

{
  undefined2 uVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  code **ppcVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  byte *pbVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x226;
  pbVar14 = (byte *)0x5c;
  iVar10 = 0x24;
  while (iVar10 != 0) {
    iVar10 = iVar10 + -1;
    pbVar3 = pbVar14;
    pbVar14 = pbVar14 + 1;
    *pbVar3 = 0;
  }
  uVar11 = *param_2 + 2;
  if (0x80 < uVar11) {
    uVar11 = 0x80;
  }
  while (uVar11 != 0) {
    uVar11 = uVar11 - 1;
    pbVar4 = pbVar14;
    pbVar14 = pbVar14 + 1;
    pbVar3 = param_2;
    param_2 = param_2 + 1;
    *pbVar4 = *pbVar3;
  }
  pcVar9 = (code *)swi(0x21);
  (*pcVar9)();
  pcVar9 = (code *)swi(0x21);
  (*pcVar9)();
  pcVar9 = (code *)swi(0x21);
  (*pcVar9)();
  uVar11 = 0xffff;
  pcVar16 = param_1;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar5 = pcVar16;
    pcVar16 = pcVar16 + 1;
  } while (*pcVar5 != '\0');
  *(uint *)0x394 = ~uVar11;
  iVar10 = (*(int *)0x2 - (~uVar11 + 0xf >> 4)) + -0x13;
  *(int *)0x392 = iVar10;
  puVar15 = (undefined *)0x0;
  if (param_3 == 0) {
    puVar13 = (undefined *)0x1dfd;
    iVar12 = 0xa1;
  }
  else {
    puVar13 = (undefined *)0x1d6a;
    iVar12 = 0x93;
  }
  while (iVar12 != 0) {
    iVar12 = iVar12 + -1;
    puVar6 = puVar15;
    puVar15 = puVar15 + 1;
    puVar2 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar6 = *puVar2;
  }
  pcVar16 = (char *)0x130;
  iVar12 = *(int *)0x394;
  while (iVar12 != 0) {
    iVar12 = iVar12 + -1;
    pcVar7 = pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar5 = param_1;
    param_1 = param_1 + 1;
    *pcVar7 = *pcVar5;
  }
  iVar12 = *(int *)0x226 + 0x10;
  if (param_3 != 0) {
    *(int *)0x8b = param_4 + iVar12;
    *(undefined2 *)0x8d = param_5;
    *(int *)0x8f = param_6 + iVar12;
    *(undefined2 *)0x91 = param_7;
  }
  ppcVar8 = (code **)0x23e;
  (**ppcVar8)();
  uVar1 = *(undefined2 *)0x226;
  *(int *)0x100 = iVar12;
  *(int *)0x102 = iVar12;
                    // WARNING: Could not recover jumptable at 0x00011f9e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(ulong)*(uint *)0x390)();
  return;
}



undefined2 __cdecl16near FUN_1000_1fa2(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 *in_CX;
  undefined2 *in_DX;
  undefined2 *in_BX;
  undefined2 unaff_DS;
  byte local_8;
  
  uVar1 = *in_DX;
  uVar2 = in_DX[1];
  uVar3 = in_DX[2];
  uVar4 = in_DX[3];
  uVar5 = in_DX[4];
  uVar6 = in_DX[5];
  uVar7 = in_CX[3];
  uVar8 = *in_CX;
  FUN_1000_229b();
  *in_BX = uVar1;
  in_BX[1] = uVar2;
  in_BX[2] = uVar3;
  in_BX[3] = uVar4;
  in_BX[4] = uVar5;
  in_BX[5] = uVar6;
  in_BX[6] = (uint)(local_8 & 1);
  in_CX[3] = uVar7;
  *in_CX = uVar8;
  return uVar1;
}



void FUN_1000_2045(void)

{
  undefined2 in_AX;
  undefined2 *in_CX;
  undefined2 *in_DX;
  undefined2 in_BX;
  
  *in_CX = *in_DX;
  *(undefined *)(in_CX + 1) = *(undefined *)(in_DX + 1);
  return;
}



void __cdecl16near FUN_1000_211e(void)

{
  byte *pbVar1;
  int in_AX;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((*(byte *)(in_AX + 7) & 0x20) == 0) {
    iVar2 = FUN_1000_21fd();
    if ((iVar2 != 0) &&
       (pbVar1 = (byte *)(in_AX + 7), *pbVar1 = *pbVar1 | 0x20, (*(byte *)(in_AX + 7) & 7) == 0)) {
      pbVar1 = (byte *)(in_AX + 7);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return;
}



int __cdecl16near FUN_1000_2141(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int in_BX;
  byte bVar4;
  char cVar5;
  
  uVar2 = FUN_1000_2219();
  if ((uVar2 & 0x80) != 0) {
    bVar4 = 0;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((bVar4 & 1) != 0) goto LAB_1000_216c;
  }
  cVar5 = '\0';
  pcVar1 = (code *)swi(0x21);
  iVar3 = (*pcVar1)();
  if (cVar5 == '\0') {
    if (iVar3 == in_BX) {
      return iVar3;
    }
    FUN_1000_0780();
    return iVar3;
  }
LAB_1000_216c:
  iVar3 = FUN_1000_0ce0();
  return iVar3;
}



undefined4 __cdecl16near FUN_1000_21a7(void)

{
  code *pcVar1;
  uint in_AX;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 in_DX;
  undefined2 extraout_DX;
  uint uVar4;
  int unaff_SS;
  undefined2 unaff_DS;
  char cVar5;
  
  if (*(uint *)0x22e <= in_AX) {
    uVar4 = in_AX + 0xf >> 4;
    if (uVar4 == 0) {
      uVar4 = 0x1000;
    }
    cVar5 = false;
    if (*(char *)0x22a == '\0') {
      cVar5 = CARRY2(uVar4,unaff_SS - *(int *)0x226);
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (cVar5 == '\0') {
      uVar3 = *(undefined2 *)0x224;
      *(undefined2 *)0x224 = extraout_DX;
      goto LAB_1000_21f8;
    }
  }
  puVar2 = (undefined2 *)FUN_1000_035a();
  uVar3 = 0xffff;
  *puVar2 = 5;
LAB_1000_21f8:
  return CONCAT22(in_DX,uVar3);
}



undefined4 __cdecl16near FUN_1000_21fd(void)

{
  code *pcVar1;
  uint extraout_DX;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return CONCAT22(in_BX,(uint)((extraout_DX & 0x80) != 0));
}



undefined4 __cdecl16near FUN_1000_2219(void)

{
  byte *pbVar1;
  uint in_AX;
  undefined2 uVar2;
  int iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  if (in_AX < *(uint *)0x39c) {
    if ((int)in_AX < 6) {
      iVar3 = in_AX * 2;
      iVar4 = *(int *)0x3c6 + iVar3;
      if ((*(byte *)(iVar4 + 1) & 0x40) == 0) {
        pbVar1 = (byte *)(iVar4 + 1);
        *pbVar1 = *pbVar1 | 0x40;
        uVar5 = FUN_1000_21fd();
        in_AX = (uint)((ulong)uVar5 >> 0x10);
        if ((int)uVar5 != 0) {
          pbVar1 = (byte *)(*(int *)0x3c6 + iVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
    }
    uVar2 = *(undefined2 *)(*(int *)0x3c6 + in_AX * 2);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT22(in_DX,uVar2);
}



void __cdecl16near FUN_1000_2260(void)

{
  int in_AX;
  uint in_DX;
  undefined2 unaff_DS;
  
  *(uint *)(*(int *)0x3c6 + in_AX * 2) = in_DX | 0x4000;
  return;
}



void __cdecl16near FUN_1000_229b(void)

{
  FUN_1000_24d4();
  return;
}



void __cdecl16near FUN_1000_24d4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_DX;
  int iVar3;
  uint in_BX;
  uint uVar4;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  byte bVar5;
  byte bVar6;
  byte in_AF;
  byte bVar7;
  byte bVar8;
  byte in_TF;
  byte in_IF;
  byte bVar9;
  byte in_NT;
  
  uVar4 = (in_BX & 0xff) * 3;
  bVar5 = 0xdac6 < uVar4;
  bVar9 = SCARRY2(uVar4,0x2539);
  uVar4 = uVar4 + 0x2539;
  bVar8 = 0;
  bVar7 = uVar4 == 0;
  bVar6 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar2 = 0x1000;
  iVar3 = in_DX;
  uVar1 = FUN_1000_2517();
  *(uint *)(in_DX + 0x12) =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar9 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar8 & 1) * 0x80 | (uint)(bVar7 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar6 & 1) * 4 | (uint)(bVar5 & 1);
  *(undefined2 *)CONCAT22(unaff_DS,in_DX) = uVar1;
  *(undefined2 *)(in_DX + 4) = uVar2;
  *(int *)(in_DX + 6) = iVar3;
  *(undefined2 *)(in_DX + 10) = unaff_SI;
  *(undefined2 *)(in_DX + 0xc) = unaff_DI;
  *(undefined2 *)(in_DX + 8) = unaff_BP;
  *(undefined2 *)(in_DX + 0xe) = unaff_DS;
  *(uint *)(in_DX + 2) = uVar4;
  *(undefined2 *)(in_DX + 0x10) = 0x1000;
  return;
}



undefined2 __cdecl16far FUN_1000_2517(void)

{
  undefined2 *in_AX;
  undefined2 in_DX;
  
  return *in_AX;
}


