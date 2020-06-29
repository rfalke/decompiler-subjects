typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



// WARNING: Instruction at (ram,0x00010061) overlaps instruction at (ram,0x00010060)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  
  _DAT_0000_2dca = 0x10d1;
  puVar12 = (uint *)0xaf;
  pbVar14 = (byte *)0x0;
  bVar16 = false;
  uVar7 = 0;
  puVar11 = (uint *)0xff8;
  _DAT_0000_2dc8 = 0x10d1;
  _DAT_0000_2dcc = unaff_ES;
  _DAT_0000_2dce = unaff_DS;
LAB_1000_001a:
  pbVar2 = pbVar14;
  pbVar14 = pbVar14 + 1;
  puVar1 = puVar12;
  puVar12 = (uint *)((int)puVar12 + 1);
  *pbVar2 = *(byte *)puVar1;
  while( true ) {
    uVar9 = 0x10;
    puVar11[-1] = 0x20;
    FUN_1000_006d();
    if (!bVar16) goto LAB_1000_001a;
    puVar11[-1] = 0x24;
    FUN_1000_006d();
    uVar7 = uVar7 + 1;
    if (!bVar16) break;
    puVar11[-1] = 0x29;
    FUN_1000_006d();
    cVar10 = (char)(uVar9 >> 8);
    bVar17 = bVar16;
    if (bVar16) goto LAB_1000_004f;
    do {
      puVar11[-1] = 0x2d;
      iVar5 = FUN_1000_006d();
      bVar18 = (byte)uVar9;
      bVar4 = CARRY1(bVar18 * '\x02',bVar17);
      bVar16 = CARRY1(bVar18,bVar18) || bVar4;
      bVar8 = bVar18 * '\x02' + bVar17;
      uVar9 = uVar9 & 0xff00 | (uint)bVar8;
      bVar17 = bVar16;
    } while (!CARRY1(bVar18,bVar18) && !bVar4);
    if (bVar8 != 0) goto LAB_1000_0063;
    while( true ) {
      pbVar2 = pbVar14;
      pbVar14 = pbVar14 + 1;
      *pbVar2 = (byte)uVar9;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) break;
LAB_1000_0065:
      uVar9 = (uint)pbVar14[iVar5];
    }
  }
  iVar5 = 0x100;
  while( true ) {
    bVar8 = (byte)((uint)iVar5 >> 8);
    puVar11[-1] = 0x3a;
    FUN_1000_006d();
    bVar17 = CARRY1(bVar8,bVar8) || CARRY1(bVar8 * '\x02',bVar16);
    iVar5 = (uint)(byte)(bVar8 * '\x02' + bVar16) << 8;
    if (bVar17) break;
    puVar11[-1] = 0x40;
    FUN_1000_006d();
    bVar16 = bVar17;
    if (!bVar17) {
      do {
        puVar11[-1] = 0x44;
        FUN_1000_006d();
        uVar9 = (uint)bVar17;
        bVar17 = CARRY2(uVar7,uVar7) || CARRY2(uVar7 * 2,uVar9);
        uVar7 = uVar7 * 2 + uVar9;
        puVar11[-1] = 0x48;
        FUN_1000_006d();
      } while (bVar17);
      bVar8 = (byte)((uint)iVar5 >> 8);
      bVar16 = bVar8 < 3;
      cVar10 = bVar8 - 3;
      if (bVar16) {
        uVar9 = *puVar11;
        puVar11 = puVar11 + 1;
      }
      else {
LAB_1000_004f:
        bVar8 = *(byte *)puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
        if (bVar16) {
          bVar18 = bVar8 & 1;
          bVar8 = bVar8 >> 1;
          uVar7 = uVar7 & 0xff00 | (uint)(byte)(((char)uVar7 - cVar10) - bVar18);
        }
        uVar9 = CONCAT11(cVar10,bVar8);
        if (uVar9 < 0x80) {
          uVar7 = uVar7 + 2;
        }
      }
      *puVar11 = uVar9;
LAB_1000_0063:
      bVar16 = uVar9 != 0;
      iVar5 = -uVar9;
      goto LAB_1000_0065;
    }
  }
  uVar7 = puVar11[1];
  piVar15 = (int *)0x0;
  iVar5 = 0x10b3;
LAB_1000_0081:
  do {
    if (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      piVar3 = piVar15;
      piVar15 = (int *)((int)piVar15 + 1);
      if (*(char *)piVar3 != -0x18) goto LAB_1000_0081;
    }
    if (iVar5 == 0) goto LAB_1000_008c;
    piVar3 = piVar15;
    *piVar3 = *piVar3 - (int)piVar15;
    piVar15 = piVar15 + 1;
    bVar16 = iVar5 == 1;
    iVar5 = iVar5 + -2;
    if (iVar5 == 0 || bVar16) {
LAB_1000_008c:
      piVar15 = (int *)0x0;
      iVar5 = 0x16;
      uVar9 = uVar7;
      do {
        puVar13 = (uint *)((int)puVar12 + 1);
        bVar8 = *(byte *)puVar12;
        uVar6 = (uint)bVar8;
        if (bVar8 == 0) {
          puVar1 = puVar13;
          puVar13 = (uint *)((int)puVar12 + 3);
          uVar6 = *puVar1;
        }
        bVar16 = CARRY2((uint)piVar15,uVar6);
        piVar15 = (int *)((int)piVar15 + uVar6);
        if (bVar16) {
          uVar9 = uVar9 & 0xff | (uint)(byte)((char)(uVar9 >> 8) + 0x10) << 8;
        }
        piVar3 = piVar15;
        *piVar3 = *piVar3 + uVar7;
        iVar5 = iVar5 + -1;
        puVar12 = puVar13;
      } while (iVar5 != 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  } while( true );
}



void __cdecl16near FUN_1000_006d(void)

{
  return;
}


