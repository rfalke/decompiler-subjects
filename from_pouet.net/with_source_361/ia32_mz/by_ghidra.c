typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};

typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};




// WARNING: Instruction at (ram,0x00010061) overlaps instruction at (ram,0x00010060)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used

void entry(void)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  
  DAT_1000_2dca = 0x10d1;
  puVar12 = (uint *)0xaf;
  pbVar14 = (byte *)0x0;
  bVar16 = 0;
  iVar4 = 0;
  puVar11 = (uint *)0xff8;
  DAT_1000_2dc8 = 0x10d1;
  DAT_1000_2dcc = unaff_ES;
  DAT_1000_2dce = unaff_DS;
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
    if (!(bool)bVar16) goto LAB_1000_001a;
    puVar11[-1] = 0x24;
    FUN_1000_006d();
    uVar5 = iVar4 + 1;
    if (!(bool)bVar16) break;
    puVar11[-1] = 0x29;
    FUN_1000_006d();
    bVar8 = bVar16;
    if ((bool)bVar16) goto LAB_1000_004f;
    do {
      puVar11[-1] = 0x2d;
      iVar4 = FUN_1000_006d();
      bVar17 = (byte)uVar9;
      bVar18 = CARRY1(bVar17 * '\x02',bVar8);
      bVar16 = CARRY1(bVar17,bVar17) || bVar18;
      cVar7 = bVar17 * '\x02' + bVar8;
      uVar9 = CONCAT11((char)(uVar9 >> 8),cVar7);
      bVar8 = bVar16;
    } while (!CARRY1(bVar17,bVar17) && !bVar18);
    if (cVar7 != '\0') goto LAB_1000_0063;
    while( true ) {
      pbVar2 = pbVar14;
      pbVar14 = pbVar14 + 1;
      *pbVar2 = (byte)uVar9;
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) break;
LAB_1000_0065:
      uVar9 = (uint)pbVar14[iVar4];
    }
    iVar4 = 0;
  }
  iVar4 = 0x100;
  while( true ) {
    bVar8 = (byte)((uint)iVar4 >> 8);
    puVar11[-1] = 0x3a;
    FUN_1000_006d();
    bVar17 = CARRY1(bVar8,bVar8) || CARRY1(bVar8 * '\x02',bVar16);
    iVar4 = (uint)(byte)(bVar8 * '\x02' + bVar16) << 8;
    if ((bool)bVar17) break;
    puVar11[-1] = 0x40;
    FUN_1000_006d();
    bVar16 = bVar17;
    if (!(bool)bVar17) {
      do {
        puVar11[-1] = 0x44;
        FUN_1000_006d();
        uVar9 = (uint)bVar17;
        bVar17 = CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar9);
        uVar5 = uVar5 * 2 + uVar9;
        puVar11[-1] = 0x48;
        FUN_1000_006d();
      } while ((bool)bVar17);
      bVar8 = (byte)((uint)iVar4 >> 8);
      bVar16 = bVar8 < 3;
      uVar9 = (uint)(byte)(bVar8 - 3) << 8;
      if ((bool)bVar16) {
        uVar9 = *puVar11;
        puVar11 = puVar11 + 1;
      }
      else {
LAB_1000_004f:
        bVar8 = *(byte *)puVar12;
        cVar7 = (char)(uVar9 >> 8);
        puVar12 = (uint *)((int)puVar12 + 1);
        if ((bool)bVar16) {
          bVar16 = bVar8 & 1;
          bVar8 = bVar8 >> 1;
          uVar5 = CONCAT11((char)(uVar5 >> 8),((char)uVar5 - cVar7) - bVar16);
        }
        uVar9 = CONCAT11(cVar7,bVar8);
        if (uVar9 < 0x80) {
          uVar5 = uVar5 + 2;
        }
      }
      *puVar11 = uVar9;
LAB_1000_0063:
      bVar16 = uVar9 != 0;
      iVar4 = -uVar9;
      goto LAB_1000_0065;
    }
  }
  iVar10 = puVar11[1];
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
    bVar18 = iVar4 == 1;
    iVar4 = iVar4 + -2;
    if (iVar4 == 0 || bVar18) {
LAB_1000_008c:
      piVar15 = (int *)0x0;
      iVar6 = 0x16;
      iVar4 = iVar10;
      do {
        puVar13 = (uint *)((int)puVar12 + 1);
        uVar9 = (uint)*(byte *)puVar12;
        if (uVar9 == 0) {
          puVar1 = puVar13;
          puVar13 = (uint *)((int)puVar12 + 3);
          uVar9 = *puVar1;
        }
        bVar18 = CARRY2((uint)piVar15,uVar9);
        piVar15 = (int *)((int)piVar15 + uVar9);
        if (bVar18) {
          iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + '\x10',(char)iVar4);
        }
        piVar3 = piVar15;
        *piVar3 = *piVar3 + iVar10;
        iVar6 = iVar6 + -1;
        puVar12 = puVar13;
      } while (iVar6 != 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  } while( true );
}



void __cdecl16near FUN_1000_006d(void)

{
  return;
}


