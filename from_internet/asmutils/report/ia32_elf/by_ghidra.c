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




undefined8 entry(void)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint extraout_ECX;
  undefined *puVar5;
  uint uVar6;
  uint extraout_EDX;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int *unaff_ESI;
  int *piVar11;
  undefined4 unaff_EDI;
  byte bVar12;
  int unaff_retaddr;
  
  bVar12 = 0;
  iVar8 = unaff_retaddr + -1;
  puVar9 = (uint *)&stack0x00000004;
  if (iVar8 != 0) {
    piVar11 = (int *)&stack0x00000008;
    do {
      unaff_ESI = piVar11 + (uint)bVar12 * -2 + 1;
      puVar9 = (uint *)register0x00000010;
      if (*piVar11 == 0) goto LAB_08049271;
      FUN_080492f1();
      iVar8 = iVar8 + -1;
      piVar11 = unaff_ESI;
    } while (-1 < iVar8);
  }
  do {
    *(undefined4 *)((int)puVar9 + -4) = 0x8049257;
    FUN_080492a1();
    do {
      *(undefined4 *)((int)puVar9 + -4) = 0x804926a;
      FUN_080492d9();
      *(undefined4 *)((int)puVar9 + -4) = 1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar9 = (uint *)((int)puVar9 + 4);
LAB_08049271:
      puVar9[-1] = unaff_ESI[-2];
      puVar9[-2] = 0x804927a;
      FUN_08049319();
      unaff_ESI = (int *)puVar9[-1];
      uVar2 = *puVar9;
      *puVar9 = 0x804926a;
    } while ((uVar2 & 1) != 0);
  } while ((uVar2 >> 1 & 1) != 0);
  if ((uVar2 >> 2 & 1) == 0) {
    puVar5 = &UNK_08048d92;
    uVar6 = 0x7d;
  }
  else {
    puVar5 = &UNK_08049152;
    uVar6 = 0x20;
  }
  uVar4 = extraout_ECX;
  if ((int)extraout_ECX < 0) {
    uVar4 = -extraout_ECX;
  }
  if (uVar6 <= uVar4) {
    puVar9[-1] = (uint)puVar5;
    puVar9[-2] = 0x80492bf;
    FUN_080492d9();
    puVar5 = (undefined *)puVar9[-1];
    uVar4 = extraout_EDX;
  }
  sVar1 = *(short *)(puVar5 + uVar4 * 2 + -2);
  iVar8 = (int)*(short *)(puVar5 + sVar1);
  iVar7 = iVar8 + -1;
  puVar9[-1] = (int)sVar1;
  puVar9[-2] = (uint)((int)(puVar5 + sVar1) + 3);
  puVar9[-3] = iVar7;
  puVar9[-4] = uVar2 >> 3;
  puVar9[-5] = (uint)puVar9;
  puVar9[-6] = (uint)&UNK_0804804c;
  puVar9[-7] = (uint)unaff_ESI;
  puVar10 = puVar9 + -8;
  puVar9[-8] = unaff_EDI;
  if (iVar7 != 0 && 0 < iVar8) {
    puVar9[-9] = 1;
    puVar9[-9] = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar10 = puVar9 + -7;
  }
  return CONCAT44(*(undefined4 *)((int)puVar10 + 0x14),*(undefined4 *)((int)puVar10 + 0x1c));
}



undefined8 FUN_0804922f(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  short *psVar6;
  byte extraout_DH;
  uint uVar7;
  uint extraout_EDX;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int *unaff_ESI;
  int *piVar12;
  undefined4 unaff_EDI;
  byte bVar13;
  int unaff_retaddr;
  
  bVar13 = 0;
  puVar10 = (uint *)&stack0x00000008;
  iVar9 = param_1 - 1;
  if (iVar9 != 0) {
    puVar10 = &param_1;
    param_1 = 0;
    piVar12 = (int *)&stack0x0000000c;
    do {
      unaff_ESI = piVar12 + (uint)bVar13 * -2 + 1;
      puVar3 = &param_1;
      if (*piVar12 == 0) goto LAB_08049271;
      FUN_080492f1();
      param_1 = param_1 & 0xffffff00 | (uint)((byte)param_1 | extraout_DH);
      iVar9 = iVar9 + -1;
      piVar12 = unaff_ESI;
    } while (-1 < iVar9);
  }
  do {
    *(undefined4 *)((int)puVar10 + -4) = 0x8049257;
    FUN_080492a1();
    do {
      *(undefined4 *)((int)puVar10 + -4) = 0x804926a;
      FUN_080492d9();
      *(undefined4 *)((int)puVar10 + -4) = 1;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar3 = (uint *)((int)puVar10 + 4);
LAB_08049271:
      puVar10 = puVar3;
      puVar10[-1] = unaff_ESI[-2];
      puVar10[-2] = 0x804927a;
      FUN_08049319();
      unaff_ESI = (int *)puVar10[-1];
      uVar1 = *puVar10;
      *puVar10 = unaff_retaddr + 0x3b;
    } while ((uVar1 & 1) != 0);
  } while ((uVar1 >> 1 & 1) != 0);
  if ((uVar1 >> 2 & 1) == 0) {
    iVar9 = unaff_retaddr + -0x49d;
    uVar7 = *(uint *)(unaff_retaddr + -0x3a3);
  }
  else {
    iVar9 = unaff_retaddr + -0xdd;
    uVar7 = *(int *)(unaff_retaddr + -0x9b) + 1;
  }
  uVar4 = extraout_ECX;
  if ((int)extraout_ECX < 0) {
    uVar4 = -extraout_ECX;
  }
  if (uVar7 <= uVar4) {
    puVar10[-1] = iVar9;
    puVar10[-2] = 0x80492bf;
    FUN_080492d9();
    iVar9 = puVar10[-1];
    uVar4 = extraout_EDX;
  }
  iVar5 = (int)*(short *)(iVar9 + -2 + uVar4 * 2);
  psVar6 = (short *)(iVar9 + iVar5);
  iVar9 = (int)*psVar6;
  iVar8 = iVar9 + -1;
  puVar10[-1] = iVar5;
  puVar10[-2] = (int)psVar6 + 3;
  puVar10[-3] = iVar8;
  puVar10[-4] = uVar1 >> 3;
  puVar10[-5] = (uint)puVar10;
  puVar10[-6] = unaff_retaddr + -0x11e3;
  puVar10[-7] = (uint)unaff_ESI;
  puVar11 = puVar10 + -8;
  puVar10[-8] = unaff_EDI;
  if (iVar8 != 0 && 0 < iVar9) {
    puVar10[-9] = 1;
    puVar10[-9] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar11 = puVar10 + -7;
  }
  return CONCAT44(*(undefined4 *)((int)puVar11 + 0x14),*(undefined4 *)((int)puVar11 + 0x1c));
}



undefined8 __regparm3 FUN_080492a1(uint param_1)

{
  code *pcVar1;
  uint extraout_EDX;
  undefined *puVar2;
  int unaff_EBP;
  
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  if (*(uint *)(unaff_EBP + 0xe40) <= param_1) {
    FUN_080492d9();
    param_1 = extraout_EDX;
  }
  puVar2 = &stack0xffffffe0;
  if (1 < *(short *)(unaff_EBP + 0xd46 + (int)*(short *)(unaff_EBP + 0xd44 + param_1 * 2))) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar2 = &stack0xffffffe4;
  }
  return CONCAT44(*(undefined4 *)(puVar2 + 0x14),*(undefined4 *)(puVar2 + 0x1c));
}



undefined8 FUN_080492d9(void)

{
  code *pcVar1;
  int in_ECX;
  char *pcVar2;
  undefined *puVar3;
  
  puVar3 = &stack0xffffffe0;
  pcVar2 = (char *)(in_ECX + -1);
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (in_ECX < (int)pcVar2) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar3 = &stack0xffffffe4;
  }
  return CONCAT44(*(undefined4 *)(puVar3 + 0x14),*(undefined4 *)(puVar3 + 0x1c));
}



void FUN_080492f1(void)

{
  int *piVar1;
  byte bVar2;
  int unaff_EBP;
  int iVar3;
  
  bVar2 = 8;
  iVar3 = unaff_EBP + 0x114c;
  do {
    piVar1 = (int *)(iVar3 + 2);
    iVar3 = iVar3 + 6;
    if (*piVar1 == 0) {
      return;
    }
    bVar2 = bVar2 >> 1;
  } while (bVar2 != 0);
  return;
}



undefined8 __regparm3 FUN_08049319(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  uint **ppuVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint extraout_ECX;
  int iVar10;
  short *psVar11;
  uint uVar12;
  uint extraout_EDX;
  int iVar13;
  uint **ppuVar14;
  uint **ppuVar15;
  int unaff_EBP;
  uint *unaff_ESI;
  undefined4 unaff_EDI;
  uint *apuStack32 [8];
  
  uVar9 = *unaff_ESI;
  if ((char)uVar9 == '-') {
    unaff_ESI = (uint *)((int)unaff_ESI + 1);
    uVar9 = uVar9 >> 8;
  }
  bVar5 = (byte)uVar9;
  if (bVar5 != 0x30) {
    if (((char)(bVar5 - 0x30) < '\0') || (0x39 < bVar5)) {
      do {
        *(undefined4 *)((int)register0x00000010 + -4) = 0x8049257;
        FUN_080492a1();
        ppuVar4 = (uint **)register0x00000010;
        do {
          ppuVar14 = ppuVar4;
          ppuVar14[-1] = (uint *)0x804926a;
          FUN_080492d9();
          ppuVar14[-1] = (uint *)0x1;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          *ppuVar14 = (uint *)unaff_ESI[-2];
          ppuVar14[-1] = (uint *)0x804927a;
          FUN_08049319();
          unaff_ESI = *ppuVar14;
          register0x00000010 = (BADSPACEBASE *)(ppuVar14 + 1);
          uVar9 = (uint)ppuVar14[1];
          ppuVar14[1] = (uint *)(unaff_EBP + 0x121e);
          ppuVar4 = ppuVar14 + 1;
        } while ((uVar9 & 1) != 0);
      } while ((uVar9 >> 1 & 1) != 0);
      if ((uVar9 >> 2 & 1) == 0) {
        iVar10 = unaff_EBP + 0xd46;
        uVar12 = *(uint *)(unaff_EBP + 0xe40);
      }
      else {
        iVar10 = unaff_EBP + 0x1106;
        uVar12 = *(int *)(unaff_EBP + 0x1148) + 1;
      }
      uVar7 = extraout_ECX;
      if ((int)extraout_ECX < 0) {
        uVar7 = -extraout_ECX;
      }
      if (uVar12 <= uVar7) {
        *ppuVar14 = (uint *)iVar10;
        ppuVar14[-1] = (uint *)0x80492bf;
        FUN_080492d9();
        iVar10 = (int)*ppuVar14;
        uVar7 = extraout_EDX;
      }
      iVar8 = (int)*(short *)(iVar10 + -2 + uVar7 * 2);
      psVar11 = (short *)(iVar10 + iVar8);
      iVar10 = (int)*psVar11;
      iVar13 = iVar10 + -1;
      *ppuVar14 = (uint *)iVar8;
      ppuVar14[-1] = (uint *)((int)psVar11 + 3);
      ppuVar14[-2] = (uint *)iVar13;
      ppuVar14[-3] = (uint *)(uVar9 >> 3);
      ppuVar14[-4] = (uint *)(ppuVar14 + 1);
      ppuVar14[-5] = (uint *)unaff_EBP;
      ppuVar14[-6] = unaff_ESI;
      ppuVar15 = ppuVar14 + -7;
      ppuVar14[-7] = (uint *)unaff_EDI;
      if (iVar13 != 0 && 0 < iVar10) {
        ppuVar14[-8] = (uint *)0x1;
        ppuVar14[-8] = (uint *)0x4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        ppuVar15 = ppuVar14 + -6;
      }
      return CONCAT44(*(undefined4 *)((int)ppuVar15 + 0x14),*(undefined4 *)((int)ppuVar15 + 0x1c));
    }
    do {
      bVar5 = *(byte *)unaff_ESI - 0x30;
      if (*(byte *)unaff_ESI < 0x30) break;
      unaff_ESI = (uint *)((int)unaff_ESI + 1);
    } while (bVar5 < 10);
    return CONCAT44(param_2,(uint)bVar5);
  }
  bVar5 = 8;
  if ((char)(uVar9 >> 8) == 'x') {
    bVar5 = 0x10;
    unaff_ESI = (uint *)((int)unaff_ESI + 2);
  }
LAB_0804935a:
  do {
    puVar1 = (uint *)((int)unaff_ESI + 1);
    bVar2 = *(byte *)unaff_ESI;
    uVar12 = uVar9 & 0xffffff00;
    bVar6 = bVar2 - 0x30;
    uVar9 = uVar12 | bVar6;
    if (bVar2 < 0x30) goto LAB_0804935f;
    unaff_ESI = puVar1;
    if (9 < bVar6) {
      uVar9 = uVar12 | (byte)(bVar2 - 0x37);
      if (bVar6 < 7) goto LAB_0804935f;
      if ((byte)(bVar2 - 0x37) < bVar5) goto LAB_0804935a;
      uVar9 = uVar12 | (byte)(bVar2 + 0xa9);
    }
    if (bVar5 <= (byte)uVar9) {
LAB_0804935f:
      return CONCAT44(param_2,uVar9);
    }
  } while( true );
}


