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




void FUN_0804804c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  uRam0804865e = (*pcVar1)();
                    // WARNING: Read-only address (ram,0x0804865e) is written
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  uRam08048662 = (*pcVar1)();
                    // WARNING: Read-only address (ram,0x08048662) is written
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  uRam08048666 = (*pcVar1)();
                    // WARNING: Read-only address (ram,0x08048666) is written
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x080486bc) overlaps instruction at (ram,0x080486bb)
// 
// WARNING: Possible PIC construction at 0x080483e5: Changing call to branch
// WARNING: Possible PIC construction at 0x0804841b: Changing call to branch
// WARNING: Removing unreachable block (ram,0x080483ea)
// WARNING: Removing unreachable block (ram,0x0804840d)
// WARNING: Removing unreachable block (ram,0x0804840f)
// WARNING: Removing unreachable block (ram,0x08048415)
// WARNING: Removing unreachable block (ram,0x0804841a)
// WARNING: Removing unreachable block (ram,0x08048420)
// WARNING: Removing unreachable block (ram,0x08048422)
// WARNING: Removing unreachable block (ram,0x08048424)
// WARNING: Removing unreachable block (ram,0x0804842e)
// WARNING: Removing unreachable block (ram,0x08048430)
// WARNING: Removing unreachable block (ram,0x08048436)
// WARNING: Removing unreachable block (ram,0x0804843b)
// WARNING: Removing unreachable block (ram,0x08048459)
// WARNING: Removing unreachable block (ram,0x08048476)
// WARNING: Removing unreachable block (ram,0x0804847f)
// WARNING: Removing unreachable block (ram,0x08048487)
// WARNING: Removing unreachable block (ram,0x08048489)
// WARNING: Removing unreachable block (ram,0x0804848e)
// WARNING: Removing unreachable block (ram,0x0804849d)
// WARNING: Removing unreachable block (ram,0x0804849f)
// WARNING: Removing unreachable block (ram,0x080484aa)
// WARNING: Removing unreachable block (ram,0x080484b1)
// WARNING: Removing unreachable block (ram,0x08048644)
// WARNING: Removing unreachable block (ram,0x08048646)
// WARNING: Removing unreachable block (ram,0x08048649)
// WARNING: Removing unreachable block (ram,0x0804864e)
// WARNING: Removing unreachable block (ram,0x0804858d)
// WARNING: Removing unreachable block (ram,0x0804834a)
// WARNING: Removing unreachable block (ram,0x08048370)
// WARNING: Removing unreachable block (ram,0x08048350)
// WARNING: Removing unreachable block (ram,0x0804835c)
// WARNING: Removing unreachable block (ram,0x0804835e)
// WARNING: Removing unreachable block (ram,0x08048363)
// WARNING: Removing unreachable block (ram,0x080483cd)
// WARNING: Removing unreachable block (ram,0x0804837c)
// WARNING: Removing unreachable block (ram,0x080483d7)
// WARNING: Removing unreachable block (ram,0x080484e5)
// WARNING: Removing unreachable block (ram,0x0804839e)
// WARNING: Removing unreachable block (ram,0x080483ad)
// WARNING: Removing unreachable block (ram,0x080483af)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong entry(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 uVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int *piVar20;
  int *piVar21;
  byte *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  char *pcVar25;
  byte *pbVar26;
  undefined2 in_SS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  byte bVar27;
  byte in_AF;
  bool bVar28;
  bool bVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  int unaff_retaddr;
  
  bVar10 = 0;
  FUN_0804804c();
  puVar19 = &param_1;
  unaff_retaddr = unaff_retaddr + -1;
  if (unaff_retaddr != 0) {
LAB_0804837a:
    pcVar25 = (char *)puVar19[1];
    puVar19[1] = pcVar25;
    iVar12 = -1;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      cVar11 = *pcVar25;
      pcVar25 = pcVar25 + (uint)bVar10 * -2 + 1;
    } while (cVar11 != '\0');
    pcVar25 = (char *)puVar19[1];
    puVar19[1] = pcVar25;
    *puVar19 = 0x8048394;
    FUN_08048538();
    *puVar19 = 1;
    *puVar19 = 4;
    pcVar6 = (code *)swi(0x80);
    (*pcVar6)();
                    // WARNING: Read-only address (ram,0x08048656) is written
    puVar19[1] = 1;
    puVar19[1] = 1;
    pcVar6 = (code *)swi(0x80);
    uVar31 = (*pcVar6)();
    puVar19[2] = (int)(uVar31 >> 0x20);
    *pcVar25 = (char)((uVar31 & 0xffffffff) / 10) + '0';
    pcVar25[1] = (char)((uVar31 & 0xffffffff) % 10) + '0';
    pcVar25[2] = ':';
    return (ulonglong)(uint)puVar19[2];
  }
  do {
    unaff_retaddr = unaff_retaddr + -1;
    puVar22 = param_1;
    if (unaff_retaddr == 0) break;
    puVar22 = (undefined4 *)((int)param_1 + (uint)bVar10 * -2 + 1);
    cVar11 = *(char *)param_1;
    param_1 = puVar22;
  } while (cVar11 != '\0');
  if (*(char *)((int)puVar22 + -2) == 'd') {
    param_1 = (undefined4 *)0x30;
    pcVar6 = (code *)swi(0x80);
    (*pcVar6)();
    param_2 = 0;
    param_1 = (undefined4 *)0x1;
    pcVar6 = (code *)swi(0x80);
    uRam08048656 = (*pcVar6)();
                    // WARNING: Read-only address (ram,0x08048656) is written
    param_3 = 0;
    param_2 = 0x4f000002;
    param_1 = (undefined4 *)0x10;
    pcVar6 = (code *)swi(0x80);
    iVar12 = (*pcVar6)();
    if (iVar12 < 0) {
      param_2 = 4;
      pcVar6 = (code *)swi(0x80);
      (*pcVar6)();
      param_3 = 1;
      pcVar6 = (code *)swi(0x80);
      uVar31 = (*pcVar6)();
      out(*unaff_ESI,(short)(uVar31 >> 0x20));
                    // WARNING: Read-only address (ram,0x08048656) is written
      uVar13 = (uint)uVar31 & 0xffffff00 | (uint)*(byte *)(unaff_ESI + (uint)bVar10 * -2 + 1);
      iVar12 = extraout_ECX_00;
      pbVar14 = (byte *)((int)(unaff_ESI + (uint)bVar10 * -2 + 1) + (uint)bVar10 * -2 + 1);
      puVar22 = &param_2;
      do {
        iVar12 = iVar12 + -1;
        pbVar26 = (byte *)((int)puVar22 + (uint)bVar10 * -2 + 1);
        *(byte *)puVar22 = (byte)uVar13;
        bVar9 = *pbVar14;
        uVar7 = uVar13 & 0xffffff00;
        uVar13 = uVar7 | bVar9;
        pbVar14 = pbVar14 + (uint)bVar10 * -2 + 1;
        puVar22 = (undefined4 *)pbVar26;
      } while (bVar9 != 0);
      uVar13 = CONCAT31((int3)(uVar7 >> 8),0x20);
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pbVar26 = 0x20;
        pbVar26 = pbVar26 + (uint)bVar10 * -2 + 1;
      }
      pbVar14 = (byte *)0x8048606;
      for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pbVar26 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar10 * -2 + 1;
        pbVar26 = pbVar26 + (uint)bVar10 * -2 + 1;
      }
      iVar12 = 4;
      do {
        do {
          pbVar14 = unaff_EBP + (uint)bVar10 * -2 + 1;
          bVar9 = *unaff_EBP;
          uVar13 = uVar13 & 0xffffff00;
          unaff_EBP = pbVar14;
        } while (bVar9 != 0x3a);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      while( true ) {
        bVar9 = *pbVar14;
        uVar13 = uVar13 & 0xffffff00 | (uint)bVar9;
        if ((((bVar9 == 0x3a) || (bVar9 == 0x2c)) || (bVar9 == 10)) || (bVar9 == 0)) break;
        *pbVar26 = bVar9;
        (&stack0x00000055)[uVar13] = 0;
        pbVar14 = pbVar14 + (uint)bVar10 * -2 + 1;
        pbVar26 = pbVar26 + (uint)bVar10 * -2 + 1;
      }
      return uVar31 & 0xffffffff00000000 | (ulonglong)uVar13;
    }
    param_2 = 5;
    param_1 = (undefined4 *)0x0;
    pcVar6 = (code *)swi(0x80);
    (*pcVar6)();
    param_3 = 6;
    pcVar6 = (code *)swi(0x80);
    (*pcVar6)();
    param_4 = 0;
    puVar22 = &param_4;
    do {
      do {
        puVar18 = puVar22;
        *puVar18 = 0;
        puVar18[-1] = 0;
        puVar18[-2] = 0;
        puVar18[-3] = 5;
        puVar18[-3] = 0x66;
        pcVar6 = (code *)swi(0x80);
        iVar12 = (*pcVar6)();
        puVar18[1] = iVar12;
        puVar22 = puVar18 + 1;
      } while (iVar12 < 0);
      *puVar18 = 2;
      pcVar6 = (code *)swi(0x80);
      iVar12 = (*pcVar6)();
      puVar22 = puVar18 + 2;
    } while (iVar12 != 0);
    puVar18[2] = 1;
    puVar18[2] = 0x3f;
    pcVar6 = (code *)swi(0x80);
    (*pcVar6)();
    puVar18[-0x3d] = 1;
    puVar18[-0x3d] = 3;
    pcVar6 = (code *)swi(0x80);
    iVar12 = (*pcVar6)();
    *(undefined *)((int)puVar18 + iVar12 + -0xec) = 0;
    pcVar25 = (char *)((int)puVar18 + iVar12 + -0xec);
    do {
      pcVar2 = pcVar25 + 1;
      cVar11 = *pcVar25;
      pcVar25 = pcVar25 + -1;
    } while (cVar11 < '!');
    bVar10 = 0;
    *pcVar2 = '\0';
    puVar18[4] = puVar18 + -0x3b;
    puVar18[3] = 0;
    puVar18[2] = 0x13;
    pcVar6 = (code *)swi(0x80);
    (*pcVar6)();
    puVar19 = puVar18 + 4;
    goto LAB_0804837a;
  }
  param_1 = (undefined4 *)0x4;
  pcVar6 = (code *)swi(0x80);
  (*pcVar6)();
  piVar20 = &param_3;
  while( true ) {
    piVar17 = piVar20;
    piVar17[-1] = 3;
    pcVar6 = (code *)swi(0x80);
    iVar12 = (*pcVar6)();
    if (iVar12 == 0) break;
    piVar20 = piVar17 + 1;
    if (_DAT_080486aa == 7) {
      iVar12 = 0xb;
      cVar11 = '\0';
      pcVar25 = (char *)((uint)bVar10 * -2 + 0x80486d7);
      puVar22 = (undefined4 *)&DAT_0804882a;
      do {
        puVar23 = (undefined4 *)((int)puVar22 + (uint)bVar10 * -2 + 1);
        *(char *)puVar22 = cVar11;
        iVar12 = iVar12 + -1;
        cVar11 = *pcVar25;
        pcVar25 = pcVar25 + (uint)bVar10 * -2 + 1;
        puVar22 = puVar23;
      } while (cVar11 != '\0');
      *piVar17 = iVar12;
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined *)puVar23 = 0x20;
        puVar23 = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
      }
      *piVar17 = 0x804812d;
      FUN_0804851a();
      for (iVar12 = -(extraout_ECX + -0x16); iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined *)puVar23 = 0x20;
        puVar23 = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
      }
      iVar12 = 8;
      puVar22 = (undefined4 *)(&DAT_080486b3 + (uint)bVar10 * -2);
      cVar11 = DAT_080486b2;
      do {
        puVar24 = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
        *(char *)puVar23 = cVar11;
        iVar12 = iVar12 + -1;
        unaff_ESI = (undefined4 *)((int)puVar22 + (uint)bVar10 * -2 + 1);
        cVar11 = *(char *)puVar22;
        puVar22 = unaff_ESI;
        puVar23 = puVar24;
      } while (cVar11 != '\0');
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined *)puVar24 = 0x20;
        puVar24 = (undefined4 *)((int)puVar24 + (uint)bVar10 * -2 + 1);
      }
      *piVar17 = 0x6a;
      pcVar6 = (code *)swi(0x80);
      iVar12 = (*pcVar6)();
      if (-1 < iVar12) {
        uVar13 = -_DAT_0804868a;
        if ((int)uVar13 < 0x3d) {
          *puVar24 = 0x20202020;
          puVar24[1] = 0x20202020;
          *(undefined2 *)((int)puVar24 + 6) = 0x2020;
          *(undefined *)((int)puVar24 + 7) = 0x2d;
        }
        else {
          lVar30 = CONCAT44(uVar13 / 0x15180,uVar13 % 0x15180);
          if (uVar13 / 0x15180 == 0) {
            *puVar24 = 0x20202020;
          }
          else {
            piVar17[1] = 0x8048189;
            lVar30 = FUN_080484fe();
          }
          if ((int)(lVar30 / 0xe10) == 0) {
            *(undefined4 *)((int)puVar24 + 3) = 0x20202020;
          }
          else {
            piVar17[1] = 0x80481a5;
            FUN_080484fe();
          }
          piVar17[1] = 0x80481bd;
          FUN_080484fe();
        }
        cVar11 = DAT_080486f6;
        puVar22 = puVar24 + 2;
        unaff_ESI = (undefined4 *)(&DAT_080486f7 + (uint)bVar10 * -2);
        if (DAT_080486f6 != '\0') {
          *puVar22 = 0x20202020;
          puVar24[3] = 0x20202020;
          puVar23 = unaff_ESI;
          puVar24 = puVar24 + 3;
          do {
            puVar22 = (undefined4 *)((int)puVar24 + (uint)bVar10 * -2 + 1);
            *(char *)puVar24 = cVar11;
            unaff_ESI = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
            cVar11 = *(char *)puVar23;
            puVar23 = unaff_ESI;
            puVar24 = puVar22;
          } while (cVar11 != '\0');
        }
        *(undefined *)puVar22 = 10;
        *(undefined *)((int)puVar22 + 1) = 0;
      }
      iVar12 = 0x50;
      puVar23 = (undefined4 *)&DAT_0804882a;
      do {
        puVar22 = puVar23;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        puVar22 = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
        cVar11 = *(char *)puVar23;
        puVar23 = puVar22;
      } while (cVar11 != '\0');
      piVar17[1] = 1;
      piVar17[1] = 4;
      pcVar6 = (code *)swi(0x80);
      (*pcVar6)();
      piVar20 = piVar17 + 3;
    }
  }
  bVar27 = 0;
  bVar29 = false;
  bVar28 = true;
  *piVar17 = 1;
  pcVar6 = (code *)swi(0x80);
  uVar32 = (*pcVar6)();
  uVar13 = (uint)uVar32;
  piVar21 = piVar17 + 2;
  piVar20 = piVar17 + 2;
  in_AF = 9 < ((byte)uVar32 & 0xf) | in_AF;
  bVar8 = (byte)uVar32 + in_AF * -6;
  bVar9 = (byte)((ulonglong)uVar32 >> 8);
  bVar4 = (bool)(0x9f < bVar8 | bVar27 | in_AF * (bVar8 < 6));
  bVar8 = bVar8 + bVar4 * -0x60;
  pbVar14 = (byte *)(uVar13 & 0xffffff00 | (uint)bVar8);
  bVar27 = (byte)((ulonglong)uVar32 >> 0x20);
  uVar16 = (undefined2)((ulonglong)uVar32 >> 0x20);
  puVar23 = puVar22;
  if (bVar4 || bVar28) {
LAB_08048609:
    lVar30 = (longlong)*(int *)((int)((ulonglong)uVar32 >> 0x20) + 0x65) * 0x726f7463;
    puVar24 = (undefined4 *)lVar30;
    if (-1 < (int)((int)piVar21 + 1)) {
      if (-1 < (int)((int)piVar21 + 1)) {
        if ((int)puVar24 != lVar30) {
          bVar10 = (byte)pbVar14 | *pbVar14;
          pbVar14 = (byte *)((uint)pbVar14 & 0xffffff00 | (uint)bVar10);
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
          *pbVar14 = *pbVar14 + bVar10;
        }
        cVar11 = (char)pbVar14;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      goto LAB_080486bb_1;
    }
    DAT_00000068 = DAT_00000068 & bVar27;
    puVar22 = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
    cVar11 = in(uVar16);
    *(char *)puVar23 = cVar11;
LAB_0804861b:
    cVar11 = in(uVar16);
    *(char *)puVar22 = cVar11;
    unaff_ESI = puVar24;
    puVar22 = (undefined4 *)((int)puVar22 + (uint)bVar10 * -2);
code_r0x08048628:
    uVar3 = in(uVar16);
    *puVar22 = uVar3;
    pbVar14[in_GS_OFFSET + 0x68] = pbVar14[in_GS_OFFSET + 0x68] & bVar27;
    out(*unaff_ESI,uVar16);
    puVar24 = (undefined4 *)((int)(unaff_ESI + (uint)bVar10 * -2 + 1) + (uint)bVar10 * -2 + 1);
    out(*(char *)(unaff_ESI + (uint)bVar10 * -2 + 1),uVar16);
LAB_0804862f:
    out(*puVar24,uVar16);
    pbVar26 = (byte *)(in_FS_OFFSET + extraout_ECX_01 + 0x6e);
    *pbVar26 = *pbVar26 & (byte)((uint)extraout_ECX_01 >> 8);
    *(byte *)(extraout_ECX_01 + 0x74) =
         *(byte *)(extraout_ECX_01 + 0x74) & (byte)((uint)pbVar14 >> 8);
    pbVar14[(int)unaff_EBP * 2 + 0x69] = pbVar14[(int)unaff_EBP * 2 + 0x69] & bVar27;
  }
  else {
    bVar15 = (byte)extraout_ECX_01;
    if (bVar4) {
      *pbVar14 = *pbVar14 & bVar9;
      *pbVar14 = *pbVar14 & bVar9;
      *pbVar14 = *pbVar14 & bVar9;
      pbVar26 = (byte *)((int)piVar17 + (int)unaff_ESI * 2 + 0x81);
      *pbVar26 = *pbVar26 & bVar27;
code_r0x080485e3:
      bVar9 = (byte)((uint)pbVar14 >> 8);
      *pbVar14 = *pbVar14 & bVar9;
      *pbVar14 = *pbVar14 & bVar9;
      *pbVar14 = *pbVar14 & bVar9;
      *pbVar14 = *pbVar14 & bVar9;
      *(byte *)(extraout_ECX_01 + 100) = *(byte *)(extraout_ECX_01 + 100) & bVar15;
      puVar23 = (undefined4 *)((int)puVar22 + (uint)bVar10 * -2 + 1);
      cVar11 = in(uVar16);
      *(char *)puVar22 = cVar11;
      pbVar14[in_GS_OFFSET] = pbVar14[in_GS_OFFSET] & bVar9;
      *pbVar14 = *pbVar14 & bVar9;
      *(undefined4 **)((int)piVar20 + -4) = puVar23;
      *(undefined4 *)((int)piVar20 + -8) = 0xa657265;
      in_AF = 9 < ((byte)pbVar14 & 0xf) | in_AF;
      bVar9 = (byte)pbVar14 + in_AF * -6;
      pbVar14 = (byte *)((uint)pbVar14 & 0xffffff00 |
                        (uint)(byte)(bVar9 + (0x9f < bVar9 | in_AF * (bVar9 < 6)) * -0x60));
      piVar21 = (int *)((int)piVar20 + -9);
      out(*unaff_ESI,uVar16);
      piVar20 = (int *)segment(in_SS,(short)unaff_EBP + 0x3a);
      unaff_EBP = (byte *)(*piVar20 * 0x6d614e20);
      goto LAB_08048609;
    }
    if (bVar4) goto code_r0x08048628;
    puVar24 = (undefined4 *)((int)unaff_ESI + (uint)bVar10 * -2 + 1);
    out(*(char *)unaff_ESI,uVar16);
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar8 = bVar8 + in_AF * -6;
    bVar5 = 0x9f < bVar8 | bVar4 | in_AF * (bVar8 < 6);
    bVar8 = bVar8 + bVar5 * -0x60;
    if (!bVar28) {
      pbVar14 = (byte *)((uVar13 & 0xffffff00 | (uint)bVar8) - 1);
      unaff_ESI = puVar24 + (uint)bVar10 * -2 + 1;
      out(*puVar24,uVar16);
      goto code_r0x08048628;
    }
    puVar23 = puVar22 + (uint)bVar10 * -2 + 1;
    uVar3 = in(uVar16);
    *puVar22 = uVar3;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar8 = bVar8 + in_AF * -6;
    bVar5 = 0x9f < bVar8 | bVar5 | in_AF * (bVar8 < 6);
    bVar8 = bVar8 + bVar5 * -0x60;
    pbVar14 = (byte *)(uVar13 & 0xffffff00 | (uint)bVar8);
    if (bVar28) {
      puVar22 = (undefined4 *)((int)puVar23 + (uint)bVar10 * -2 + 1);
      cVar11 = in(uVar16);
      *(char *)puVar23 = cVar11;
      goto LAB_0804861b;
    }
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar8 = bVar8 + in_AF * -6;
    bVar4 = (bool)(0x9f < bVar8 | bVar5 | in_AF * (bVar8 < 6));
    bVar8 = bVar8 + bVar4 * -0x60;
    pbVar14 = (byte *)(uVar13 & 0xffffff00 | (uint)bVar8);
    puVar22 = puVar23;
    if (bVar29) goto LAB_0804861b;
    if (!bVar4) goto LAB_0804862f;
    unaff_ESI = puVar24;
    if (!bVar4 && !bVar28) {
      puVar1 = (ushort *)(unaff_EBP + 0x3a);
      *puVar1 = *puVar1 + (ushort)bVar4 * -(*puVar1 & 3);
      pbVar14[0x6f] = pbVar14[0x6f] & bVar15;
      goto code_r0x08048628;
    }
    pcVar25 = (char *)((int)puVar23 + (int)unaff_EBP * 2 + 0x67);
    *pcVar25 = *pcVar25 + bVar15;
    unaff_EBP = (byte *)(puVar24[8] * 0x20202020);
    *(byte *)((int)puVar24 + 0x61) = *(byte *)((int)puVar24 + 0x61) & bVar15;
    puVar22 = puVar23 + (uint)bVar10 * -2 + 1;
    uVar3 = in(uVar16);
    *puVar23 = uVar3;
    pbVar14[in_GS_OFFSET] = pbVar14[in_GS_OFFSET] & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    *pbVar14 = *pbVar14 & bVar9;
    bVar9 = *pbVar14;
    piVar17[1] = (int)(piVar17 + 2);
    piVar20 = piVar17 + 1;
    if (bVar9 != 0) goto code_r0x080485e3;
    *pbVar14 = *pbVar14 + bVar8;
    *pbVar14 = *pbVar14 + bVar8;
    *pbVar14 = *pbVar14 + bVar8;
    *pbVar14 = *pbVar14 + bVar8;
  }
  cVar11 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
LAB_080486bb_1:
  cVar11 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 __regparm3 FUN_080484fe(uint param_1,undefined4 param_2)

{
  char *unaff_EDI;
  
  *unaff_EDI = (char)((ulonglong)param_1 / 10) + '0';
  unaff_EDI[1] = (char)((ulonglong)param_1 % 10) + '0';
  unaff_EDI[2] = ':';
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x08048531)

undefined4 FUN_0804851a(void)

{
  undefined4 unaff_EDI;
  
  FUN_08048538();
  return unaff_EDI;
}



void FUN_08048538(void)

{
  char cVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  char *unaff_ESI;
  char *pcVar4;
  char *unaff_EDI;
  char *pcVar5;
  
  do {
    iVar3 = in_ECX;
    pcVar4 = unaff_ESI + 1;
    pcVar5 = unaff_EDI;
    if (*unaff_ESI == *unaff_EDI) {
      do {
        pcVar4 = unaff_ESI;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = unaff_ESI + 1;
        cVar1 = *unaff_ESI;
        cVar2 = *pcVar5;
        unaff_ESI = pcVar4;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if ((iVar3 == 0) && (*pcVar4 == ':')) {
        return;
      }
    }
    while( true ) {
      unaff_ESI = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (cVar1 == '\n') break;
      pcVar4 = unaff_ESI;
      if (cVar1 == '\0') {
        return;
      }
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x080486bc) overlaps instruction at (ram,0x080486bb)
// 
// WARNING: Removing unreachable block (ram,0x08048644)
// WARNING: Removing unreachable block (ram,0x08048646)
// WARNING: Removing unreachable block (ram,0x08048649)
// WARNING: Removing unreachable block (ram,0x0804858d)
// WARNING: Removing unreachable block (ram,0x0804864e)

void FUN_08048560(char *param_1)

{
  ushort *puVar1;
  char *pcVar2;
  int *piVar3;
  byte *pbVar4;
  undefined uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  int iVar17;
  int extraout_ECX;
  undefined2 uVar18;
  undefined4 *puVar19;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *unaff_EDI;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined2 in_SS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  byte bVar24;
  byte in_AF;
  bool bVar25;
  byte bVar26;
  bool bVar27;
  undefined8 uVar28;
  
  iVar17 = 4;
  while( true ) {
    puVar21 = (undefined4 *)((int)unaff_ESI + 1);
    cVar13 = *(char *)unaff_ESI;
    if (cVar13 == '\0') break;
    unaff_ESI = puVar21;
    if ((cVar13 == ':') && (iVar17 = iVar17 + -1, iVar17 == 0)) {
      while( true ) {
        cVar13 = *(char *)puVar21;
        if ((cVar13 == ':') || (cVar13 == ',')) break;
        *param_1 = cVar13;
        puVar21 = (undefined4 *)((int)puVar21 + 1);
        param_1 = param_1 + 1;
      }
      return;
    }
  }
  bVar26 = 0;
  bVar24 = 0;
  bVar27 = false;
  bVar25 = true;
  pcVar10 = (code *)swi(0x80);
  uVar28 = (*pcVar10)();
  uVar14 = (uint)uVar28;
  puVar19 = &param_1;
  puVar20 = &param_1;
  in_AF = 9 < ((byte)uVar28 & 0xf) | in_AF;
  bVar11 = (byte)uVar28 + in_AF * -6;
  bVar12 = (byte)((ulonglong)uVar28 >> 8);
  bVar7 = (bool)(0x9f < bVar11 | bVar24 | in_AF * (bVar11 < 6));
  bVar11 = bVar11 + bVar7 * -0x60;
  pbVar15 = (byte *)(uVar14 & 0xffffff00 | (uint)bVar11);
  bVar24 = (byte)((ulonglong)uVar28 >> 0x20);
  uVar18 = (undefined2)((ulonglong)uVar28 >> 0x20);
  puVar22 = unaff_EDI;
  if (bVar7 || bVar25) {
LAB_08048609:
    lVar9 = (longlong)*(int *)((int)((ulonglong)uVar28 >> 0x20) + 0x65) * 0x726f7463;
    puVar20 = (undefined4 *)lVar9;
    if (-1 < (int)((int)puVar19 + 1)) {
      if (-1 < (int)((int)puVar19 + 1)) {
        if ((int)puVar20 != lVar9) {
          bVar12 = (byte)pbVar15 | *pbVar15;
          pbVar15 = (byte *)((uint)pbVar15 & 0xffffff00 | (uint)bVar12);
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
          *pbVar15 = *pbVar15 + bVar12;
        }
        cVar13 = (char)pbVar15;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
        *pbVar15 = *pbVar15 + cVar13;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      goto LAB_080486bb_1;
    }
    DAT_00000068 = DAT_00000068 & bVar24;
    puVar23 = (undefined4 *)((int)puVar22 + (uint)bVar26 * -2 + 1);
    uVar5 = in(uVar18);
    *(undefined *)puVar22 = uVar5;
LAB_0804861b:
    uVar5 = in(uVar18);
    *(undefined *)puVar23 = uVar5;
    puVar21 = puVar20;
    unaff_EDI = (undefined4 *)((int)puVar23 + (uint)bVar26 * -2);
code_r0x08048628:
    uVar6 = in(uVar18);
    *unaff_EDI = uVar6;
    pbVar15[in_GS_OFFSET + 0x68] = pbVar15[in_GS_OFFSET + 0x68] & bVar24;
    out(*puVar21,uVar18);
    puVar20 = (undefined4 *)((int)(puVar21 + (uint)bVar26 * -2 + 1) + (uint)bVar26 * -2 + 1);
    out(*(char *)(puVar21 + (uint)bVar26 * -2 + 1),uVar18);
LAB_0804862f:
    out(*puVar20,uVar18);
    pbVar4 = (byte *)(in_FS_OFFSET + extraout_ECX + 0x6e);
    *pbVar4 = *pbVar4 & (byte)((uint)extraout_ECX >> 8);
    *(byte *)(extraout_ECX + 0x74) = *(byte *)(extraout_ECX + 0x74) & (byte)((uint)pbVar15 >> 8);
    pbVar15[unaff_EBP * 2 + 0x69] = pbVar15[unaff_EBP * 2 + 0x69] & bVar24;
  }
  else {
    bVar16 = (byte)extraout_ECX;
    if (bVar7) {
      *pbVar15 = *pbVar15 & bVar12;
      *pbVar15 = *pbVar15 & bVar12;
      *pbVar15 = *pbVar15 & bVar12;
      (&stack0x0000007d)[(int)puVar21 * 2] = (&stack0x0000007d)[(int)puVar21 * 2] & bVar24;
code_r0x080485e3:
      bVar12 = (byte)((uint)pbVar15 >> 8);
      *pbVar15 = *pbVar15 & bVar12;
      *pbVar15 = *pbVar15 & bVar12;
      *pbVar15 = *pbVar15 & bVar12;
      *pbVar15 = *pbVar15 & bVar12;
      *(byte *)(extraout_ECX + 100) = *(byte *)(extraout_ECX + 100) & bVar16;
      puVar22 = (undefined4 *)((int)unaff_EDI + (uint)bVar26 * -2 + 1);
      uVar5 = in(uVar18);
      *(undefined *)unaff_EDI = uVar5;
      pbVar15[in_GS_OFFSET] = pbVar15[in_GS_OFFSET] & bVar12;
      *pbVar15 = *pbVar15 & bVar12;
      *(undefined4 **)((int)puVar20 + -4) = puVar22;
      *(undefined4 *)((int)puVar20 + -8) = 0xa657265;
      in_AF = 9 < ((byte)pbVar15 & 0xf) | in_AF;
      bVar12 = (byte)pbVar15 + in_AF * -6;
      pbVar15 = (byte *)((uint)pbVar15 & 0xffffff00 |
                        (uint)(byte)(bVar12 + (0x9f < bVar12 | in_AF * (bVar12 < 6)) * -0x60));
      puVar19 = (undefined4 *)((int)puVar20 + -9);
      out(*puVar21,uVar18);
      piVar3 = (int *)segment(in_SS,(short)unaff_EBP + 0x3a);
      unaff_EBP = *piVar3 * 0x6d614e20;
      goto LAB_08048609;
    }
    if (bVar7) goto code_r0x08048628;
    puVar20 = (undefined4 *)((int)unaff_ESI + (uint)bVar26 * -2 + 2);
    out(*(char *)puVar21,uVar18);
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    bVar11 = bVar11 + in_AF * -6;
    bVar8 = 0x9f < bVar11 | bVar7 | in_AF * (bVar11 < 6);
    bVar11 = bVar11 + bVar8 * -0x60;
    if (!bVar25) {
      pbVar15 = (byte *)((uVar14 & 0xffffff00 | (uint)bVar11) - 1);
      puVar21 = puVar20 + (uint)bVar26 * -2 + 1;
      out(*puVar20,uVar18);
      goto code_r0x08048628;
    }
    puVar22 = unaff_EDI + (uint)bVar26 * -2 + 1;
    uVar6 = in(uVar18);
    *unaff_EDI = uVar6;
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    bVar11 = bVar11 + in_AF * -6;
    bVar8 = 0x9f < bVar11 | bVar8 | in_AF * (bVar11 < 6);
    bVar11 = bVar11 + bVar8 * -0x60;
    pbVar15 = (byte *)(uVar14 & 0xffffff00 | (uint)bVar11);
    if (bVar25) {
      puVar23 = (undefined4 *)((int)puVar22 + (uint)bVar26 * -2 + 1);
      uVar5 = in(uVar18);
      *(undefined *)puVar22 = uVar5;
      goto LAB_0804861b;
    }
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    bVar11 = bVar11 + in_AF * -6;
    bVar7 = (bool)(0x9f < bVar11 | bVar8 | in_AF * (bVar11 < 6));
    bVar11 = bVar11 + bVar7 * -0x60;
    pbVar15 = (byte *)(uVar14 & 0xffffff00 | (uint)bVar11);
    puVar23 = puVar22;
    if (bVar27) goto LAB_0804861b;
    if (!bVar7) goto LAB_0804862f;
    puVar21 = puVar20;
    if (!bVar7 && !bVar25) {
      puVar1 = (ushort *)(unaff_EBP + 0x3a);
      *puVar1 = *puVar1 + (ushort)bVar7 * -(*puVar1 & 3);
      pbVar15[0x6f] = pbVar15[0x6f] & bVar16;
      unaff_EDI = puVar22;
      goto code_r0x08048628;
    }
    pcVar2 = (char *)((int)puVar22 + unaff_EBP * 2 + 0x67);
    *pcVar2 = *pcVar2 + bVar16;
    unaff_EBP = puVar20[8] * 0x20202020;
    *(byte *)((int)puVar20 + 0x61) = *(byte *)((int)puVar20 + 0x61) & bVar16;
    unaff_EDI = puVar22 + (uint)bVar26 * -2 + 1;
    uVar6 = in(uVar18);
    *puVar22 = uVar6;
    pbVar15[in_GS_OFFSET] = pbVar15[in_GS_OFFSET] & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    *pbVar15 = *pbVar15 & bVar12;
    puVar20 = (undefined4 *)register0x00000010;
    if (*pbVar15 != 0) goto code_r0x080485e3;
    *pbVar15 = *pbVar15 + bVar11;
    *pbVar15 = *pbVar15 + bVar11;
    *pbVar15 = *pbVar15 + bVar11;
    *pbVar15 = *pbVar15 + bVar11;
  }
  cVar13 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
LAB_080486bb_1:
  cVar13 = (char)pbVar15;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
  *pbVar15 = *pbVar15 + cVar13;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


