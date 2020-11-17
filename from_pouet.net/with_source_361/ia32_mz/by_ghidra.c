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
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  byte bVar16;
  bool bVar17;
  byte bVar8;
  
  _DAT_0000_2dca = 0x10d1;
  puVar12 = (uint *)0xaf;
  pbVar14 = (byte *)0x0;
  bVar16 = 0;
  uVar6 = 0;
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
    uVar10 = 0x10;
    puVar11[-1] = 0x20;
    FUN_1000_006d();
    if (!(bool)bVar16) goto LAB_1000_001a;
    puVar11[-1] = 0x24;
    FUN_1000_006d();
    uVar6 = uVar6 + 1;
    if (!(bool)bVar16) break;
    puVar11[-1] = 0x29;
    FUN_1000_006d();
    bVar9 = bVar16;
    if ((bool)bVar16) goto LAB_1000_004f;
    do {
      puVar11[-1] = 0x2d;
      iVar4 = FUN_1000_006d();
      bVar8 = (byte)uVar10;
      bVar17 = CARRY1(bVar8 * '\x02',bVar9);
      bVar16 = CARRY1(bVar8,bVar8) || bVar17;
      bVar7 = bVar8 * '\x02' + bVar9;
      uVar10 = uVar10 & 0xff00 | (uint)bVar7;
      bVar9 = bVar16;
    } while (!CARRY1(bVar8,bVar8) && !bVar17);
    if (bVar7 != 0) goto LAB_1000_0063;
    while( true ) {
      pbVar2 = pbVar14;
      pbVar14 = pbVar14 + 1;
      *pbVar2 = (byte)uVar10;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) break;
LAB_1000_0065:
      uVar10 = (uint)pbVar14[iVar4];
    }
  }
  iVar4 = 0x100;
  while( true ) {
    bVar9 = (byte)((uint)iVar4 >> 8);
    puVar11[-1] = 0x3a;
    FUN_1000_006d();
    bVar7 = CARRY1(bVar9,bVar9) || CARRY1(bVar9 * '\x02',bVar16);
    iVar4 = (uint)(byte)(bVar9 * '\x02' + bVar16) << 8;
    if ((bool)bVar7) break;
    puVar11[-1] = 0x40;
    FUN_1000_006d();
    bVar16 = bVar7;
    if (!(bool)bVar7) {
      do {
        puVar11[-1] = 0x44;
        FUN_1000_006d();
        uVar10 = (uint)bVar7;
        bVar7 = CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar10);
        uVar6 = uVar6 * 2 + uVar10;
        puVar11[-1] = 0x48;
        FUN_1000_006d();
      } while ((bool)bVar7);
      bVar9 = (byte)((uint)iVar4 >> 8);
      bVar16 = bVar9 < 3;
      uVar10 = (uint)(byte)(bVar9 - 3) << 8;
      if ((bool)bVar16) {
        uVar10 = *puVar11;
        puVar11 = puVar11 + 1;
      }
      else {
LAB_1000_004f:
        bVar9 = *(byte *)puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
        if ((bool)bVar16) {
          bVar16 = bVar9 & 1;
          bVar9 = bVar9 >> 1;
          uVar6 = uVar6 & 0xff00 |
                  (uint)(byte)(((char)uVar6 - (char)((uVar10 & 0xff00) >> 8)) - bVar16);
        }
        uVar10 = uVar10 & 0xff00 | (uint)bVar9;
        if (uVar10 < 0x80) {
          uVar6 = uVar6 + 2;
        }
      }
      *puVar11 = uVar10;
LAB_1000_0063:
      bVar16 = uVar10 != 0;
      iVar4 = -uVar10;
      goto LAB_1000_0065;
    }
  }
  uVar6 = puVar11[1];
  piVar15 = (int *)0x0;
  iVar4 = 0x10b3;
LAB_1000_0081:
  do {
    if (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      piVar3 = piVar15;
      piVar15 = (int *)((int)piVar15 + 1);
      if (*(char *)piVar3 != -0x18) goto LAB_1000_0081;
    }
    if (iVar4 == 0) goto LAB_1000_008c;
    piVar3 = piVar15;
    *piVar3 = *piVar3 - (int)piVar15;
    piVar15 = piVar15 + 1;
    bVar17 = iVar4 == 1;
    iVar4 = iVar4 + -2;
    if (iVar4 == 0 || bVar17) {
LAB_1000_008c:
      piVar15 = (int *)0x0;
      iVar4 = 0x16;
      uVar10 = uVar6;
      do {
        puVar13 = (uint *)((int)puVar12 + 1);
        uVar5 = (uint)*(byte *)puVar12;
        if (uVar5 == 0) {
          puVar1 = puVar13;
          puVar13 = (uint *)((int)puVar12 + 3);
          uVar5 = *puVar1;
        }
        bVar17 = CARRY2((uint)piVar15,uVar5);
        piVar15 = (int *)((int)piVar15 + uVar5);
        if (bVar17) {
          uVar10 = uVar10 & 0xff | (uint)(byte)((char)(uVar10 >> 8) + 0x10) << 8;
        }
        piVar3 = piVar15;
        *piVar3 = *piVar3 + uVar6;
        iVar4 = iVar4 + -1;
        puVar12 = puVar13;
      } while (iVar4 != 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  } while( true );
}



void __cdecl16near FUN_1000_006d(void)

{
  return;
}


