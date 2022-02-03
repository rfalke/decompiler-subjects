typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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
  int *unaff_EDI;
  float10 in_ST0;
  float10 fVar1;
  float10 extraout_ST1;
  
  fVar1 = (float10)*unaff_EDI;
  while (ROUND(in_ST0 / fVar1) == in_ST0 / fVar1) {
    fVar1 = (float10)FUN_0804814f();
    in_ST0 = extraout_ST1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_08048068(void)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_ESI;
  uint uVar8;
  uint *unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST1;
  
  fVar9 = (float10)_DAT_080481fd;
  fVar10 = (float10)0;
  while( true ) {
    bVar4 = *unaff_ESI;
    if (bVar4 == 0) break;
    uVar7 = (uint)(byte)(bVar4 - 0x30);
    if ((bVar4 < 0x30) || (9 < (byte)(bVar4 - 0x30))) goto LAB_08048089;
    unaff_EDI[3] = uVar7;
    fVar10 = fVar10 * fVar9 + (float10)unaff_EDI[3];
    unaff_ESI = unaff_ESI + 1;
  }
  *(float10 *)(unaff_EDI + 3) = fVar10;
  uVar7 = unaff_EDI[5];
  if (0x403e < (short)uVar7) {
LAB_08048089:
    return CONCAT31((int3)(uVar7 >> 8),1);
  }
  fVar10 = (float10)FUN_08048151();
  if ((char)((uint)(ushort)((ushort)((float10)1 < fVar10) << 8 |
                           (ushort)((float10)1 == fVar10) << 0xe) >> 8) == '\x01') {
    *unaff_EDI = 2;
    FUN_0804804c();
    *unaff_EDI = *unaff_EDI + 1;
    FUN_0804804c();
    *(undefined *)unaff_EDI = 5;
    fVar9 = (float10)FUN_0804804c();
    fVar10 = (float10)1;
    if (fVar10 == fVar9) goto LAB_08048118;
    *(undefined *)unaff_EDI = 7;
    uVar7 = 0x42424626;
    while( true ) {
      uVar8 = *unaff_EDI;
      uVar6 = uVar7 >> 0x1c;
      uVar7 = uVar7 << 4 | uVar6;
      uVar3 = *unaff_EDI;
      *unaff_EDI = *unaff_EDI + uVar6;
      if (CARRY4(uVar3,uVar6)) break;
      while( true ) {
        *(float10 *)(unaff_EDI + 3) = fVar10;
        iVar5 = 0x401e - unaff_EDI[5];
        if ((-1 < iVar5) && (unaff_EDI[4] >> ((byte)iVar5 & 0x1f) < uVar8)) goto LAB_0804810f;
        bVar4 = -(byte)iVar5;
        uVar3 = unaff_EDI[3];
        uVar6 = unaff_EDI[4];
        if (iVar5 < 1) {
          uVar3 = 0;
          uVar6 = unaff_EDI[3];
        }
        bVar2 = bVar4 & 0x1f;
        if ((uVar3 << (bVar4 & 0x1f) | uVar6 << bVar2 | uVar3 >> 0x20 - bVar2) != 0) break;
        if (*unaff_EDI != uVar8) {
          uVar7 = uVar7 >> 4 | uVar7 << 0x1c;
          *unaff_EDI = uVar8;
        }
        FUN_0804814f();
        uVar8 = *unaff_EDI;
        fVar10 = extraout_ST1;
      }
    }
  }
LAB_0804810f:
  FUN_0804814f();
LAB_08048118:
  pcVar1 = (code *)swi(0x80);
  iVar5 = (*pcVar1)();
  return iVar5 + -1;
}



// WARNING: Removing unreachable block (ram,0x08048185)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0804814f(void)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int unaff_EDI;
  float10 in_ST0;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)_DAT_080481fd;
  pcVar3 = (char *)(unaff_EDI + 0x37);
  do {
    fVar5 = in_ST0 - (in_ST0 / fVar4) * fVar4;
    *(int *)(unaff_EDI + 0x38) = (int)ROUND(fVar5);
    fVar5 = in_ST0 - fVar5;
    in_ST0 = fVar5 / fVar4;
    *pcVar3 = *(char *)(int *)(unaff_EDI + 0x38) + '0';
    pcVar3 = pcVar3 + -1;
  } while (fVar5 != (float10)0);
  *pcVar3 = ' ';
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  return iVar2 + -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_08048151(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  char unaff_BL;
  int unaff_EDI;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)_DAT_080481fd;
  piVar1 = (int *)(unaff_EDI + 0x38);
  pcVar4 = (char *)(unaff_EDI + 0x37);
  do {
    fVar6 = in_ST0 - (in_ST0 / fVar5) * fVar5;
    *piVar1 = (int)ROUND(fVar6);
    fVar6 = in_ST0 - fVar6;
    in_ST0 = fVar6 / fVar5;
    *pcVar4 = *(char *)piVar1 + '0';
    pcVar4 = pcVar4 + -1;
  } while (fVar6 != (float10)0);
  *pcVar4 = unaff_BL;
  if (unaff_BL != ' ') {
    *(char *)piVar1 = unaff_BL;
  }
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  return iVar3 + -1;
}



void entry(undefined4 param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  byte *extraout_ECX;
  byte *pbVar5;
  byte *extraout_ECX_00;
  undefined4 *puVar6;
  int *piVar7;
  undefined *puVar8;
  undefined *puVar11;
  undefined *puVar12;
  int iVar14;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar13;
  
  puVar6 = (undefined4 *)&stack0x0000000c;
  piVar3 = (int *)&stack0x0000000c;
  if (param_2 == 0) goto LAB_080481b1;
  do {
    piVar7 = piVar3;
    piVar7[-1] = 0x80481a6;
    FUN_08048068();
    piVar3 = piVar7 + 1;
  } while (*piVar7 != 0);
LAB_080481ab:
  *piVar7 = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar6 = piVar7 + 2;
LAB_080481b1:
  do {
    *(undefined4 *)((int)puVar6 + -4) = 0x5f;
    iVar14 = *(int *)((int)puVar6 + -4);
    piVar7 = puVar6;
    do {
      *(undefined4 *)((int)piVar7 + -4) = 3;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar8 = (undefined *)((int)piVar7 + 4);
      puVar9 = (undefined *)((int)piVar7 + 4);
      puVar10 = (undefined *)((int)piVar7 + 4);
      if (iVar4 < 1) goto LAB_080481ab;
      bVar1 = *extraout_ECX;
      piVar7 = (int *)((int)piVar7 + 4);
    } while ((bVar1 == 0x20) ||
            ((pbVar5 = extraout_ECX, puVar11 = puVar8, 8 < bVar1 &&
             (puVar11 = puVar9, piVar7 = (int *)puVar10, bVar1 < 0xe))));
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar14 = iVar14 + -1;
      puVar6 = (undefined4 *)puVar11;
      if (iVar14 == 0) break;
      *(undefined4 *)(puVar11 + -4) = 3;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar12 = puVar11 + 4;
      puVar13 = puVar11 + 4;
      pbVar5 = extraout_ECX_00;
      puVar6 = (undefined4 *)(puVar11 + 4);
      if (((iVar4 < 1) ||
          (bVar1 = *extraout_ECX_00, puVar6 = (undefined4 *)(puVar11 + 4), bVar1 == 0x20)) ||
         ((puVar11 = puVar11 + 4, 8 < bVar1 &&
          (puVar6 = (undefined4 *)puVar12, puVar11 = puVar13, bVar1 < 0xe)))) break;
    }
    *pbVar5 = 0;
    *(undefined4 *)((int)puVar6 + -4) = 0x80481fb;
    FUN_08048068();
  } while( true );
}


