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




void entry(undefined param_1)

{
  code *pcVar1;
  int *piVar2;
  uint extraout_ECX;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  bool bVar8;
  uint unaff_retaddr;
  
  puVar5 = &param_1;
  if (2 < unaff_retaddr) goto LAB_08048084;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar4 = (int *)&stack0x00000008;
  do {
    *(undefined4 *)((int)piVar4 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = (undefined *)((int)piVar4 + 4);
    unaff_retaddr = extraout_ECX;
LAB_08048084:
    iVar3 = unaff_retaddr - 1;
    puVar6 = puVar5 + 8;
    if (**(short **)(puVar5 + 4) == 0x722d) {
      DAT_080482ea = DAT_080482ea + '\x01';
      iVar3 = unaff_retaddr - 2;
    }
    else {
      puVar6 = puVar5 + 4;
      *(short **)(puVar5 + 4) = *(short **)(puVar5 + 4);
    }
    DAT_080482e6 = *(undefined4 *)(puVar6 + (iVar3 + -1) * 4);
    *(undefined4 *)(puVar6 + (iVar3 + -1) * 4) = 0;
    piVar2 = (int *)puVar6;
    while( true ) {
      piVar7 = piVar2;
      iVar3 = *piVar7;
      piVar4 = piVar7 + 1;
      bVar8 = iVar3 == 0;
      if (bVar8) break;
      *piVar7 = 0x80480ad;
      FUN_0804828e();
      if (bVar8) {
        piVar2 = piVar7 + 1;
        if (DAT_080482ea == '\x01') {
          *piVar7 = DAT_080482e6;
          piVar7[-1] = iVar3;
          piVar7[-2] = 0x80480c4;
          FUN_0804816b();
          piVar2 = piVar7 + 1;
        }
      }
      else {
        *piVar7 = iVar3;
        *piVar7 = 0x80480d5;
        FUN_080480d7();
        piVar2 = piVar7 + 1;
      }
    }
  } while( true );
}



undefined8 FUN_080480d7(void)

{
  code *pcVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  bVar6 = iVar2 == 0;
  FUN_0804828e();
  if (bVar6) {
    FUN_0804825f();
  }
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  puVar5 = (undefined4 *)&stack0xffffffe8;
  if (-1 < iVar2) {
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    puVar5 = (undefined4 *)&stack0xffffffec;
    puVar3 = (undefined4 *)&stack0xffffffec;
    if (-1 < iVar2) {
      do {
        puVar3[-1] = 3;
        pcVar1 = (code *)swi(0x80);
        iVar2 = (*pcVar1)();
        puVar5 = puVar3 + 1;
        puVar4 = puVar3 + 1;
        if (iVar2 < 0) goto LAB_08048169;
        if (iVar2 == 0) break;
        *puVar3 = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar4 = puVar3 + 2;
        puVar3 = puVar3 + 2;
      } while (extraout_EDX == 0x1000);
      puVar4[-1] = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      *puVar4 = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar5 = puVar4 + 2;
    }
  }
LAB_08048169:
  return CONCAT44(*(undefined4 *)((int)puVar5 + 0x14),*(undefined4 *)((int)puVar5 + 0x1c));
}



void FUN_0804816b(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  undefined *puVar7;
  int *piVar8;
  undefined *puVar9;
  int iVar10;
  bool bVar11;
  undefined uVar12;
  undefined local_1112 [4];
  undefined auStack4366 [4358];
  int local_8;
  
  puVar9 = &stack0xfffffffc;
  puVar7 = local_1112;
  bVar11 = (undefined *)register0x00000010 == (undefined *)0x1112;
  FUN_0804828e();
  if (bVar11) {
    FUN_0804828e();
    if (!bVar11) {
      pcVar3 = (code *)swi(0x80);
      iVar5 = (*pcVar3)();
      puVar7 = auStack4366;
      if (iVar5 < 0) {
        return;
      }
    }
    *(undefined4 *)(puVar7 + -4) = 5;
    pcVar3 = (code *)swi(0x80);
    local_8 = (*pcVar3)();
    if (-1 < local_8) {
      piVar4 = (int *)(puVar7 + 4);
      while( true ) {
        piVar8 = piVar4;
        uVar6 = *(undefined4 *)(puVar9 + -4);
        pcVar3 = (code *)swi(0x80);
        iVar5 = (*pcVar3)();
        if (iVar5 < 0) break;
        iVar10 = extraout_ECX;
        if (iVar5 == 0) {
          *piVar8 = 6;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          return;
        }
        do {
          uVar12 = *(char *)(iVar10 + 10) == '.';
          if ((!(bool)uVar12) ||
             ((*(char *)(iVar10 + 0xb) != '\0' &&
              (uVar12 = *(short *)(iVar10 + 0xb) == 0x2e, !(bool)uVar12)))) {
            *piVar8 = iVar10;
            piVar8[-1] = (int)(puVar9 + -0x110e);
            piVar8[-2] = 0x8048205;
            FUN_0804825f();
            piVar8[-2] = (int)(puVar9 + -0x90e);
            uVar2 = *(undefined4 *)(puVar9 + 8);
            piVar8[-3] = 0x8048214;
            FUN_0804825f();
            piVar8[-3] = 0x8048219;
            FUN_0804828e();
            if ((bool)uVar12) {
              piVar8[-1] = piVar8[-1];
              piVar8[-2] = extraout_ECX_00;
              piVar8[-3] = extraout_EDX;
              piVar8[-4] = uVar6;
              piVar8[-5] = (int)piVar8;
              piVar8[-6] = (int)puVar9;
              piVar8[-7] = uVar2;
              piVar8[-8] = (int)(puVar9 + -0x90e);
              piVar8[-9] = (int)(puVar9 + -0x110e);
              piVar8[-10] = (int)(puVar9 + -0x90e);
              piVar8[-0xb] = 0x8048231;
              FUN_0804816b();
              puVar9 = (undefined *)piVar8[-6];
              uVar6 = piVar8[-4];
              iVar5 = piVar8[-2];
            }
            else {
              piVar8[-1] = 0x804823d;
              FUN_080480d7();
              iVar5 = extraout_ECX_01;
            }
            iVar10 = *piVar8;
          }
          puVar1 = (ushort *)(iVar10 + 8);
          iVar10 = iVar10 + (uint)*puVar1;
          iVar5 = iVar5 - (uint)*puVar1;
          piVar4 = piVar8 + 1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}



undefined8 __regparm3 FUN_0804825f(undefined4 param_1,undefined4 param_2)

{
  FUN_080482c1();
  FUN_08048273();
  FUN_080482ce();
  return CONCAT44(param_2,param_1);
}



void FUN_08048273(void)

{
  int extraout_EDX;
  int unaff_EDI;
  
  FUN_080482b5();
  if (*(char *)(unaff_EDI + extraout_EDX + -1) != '/') {
    *(undefined2 *)(unaff_EDI + extraout_EDX) = 0x2f;
  }
  return;
}



undefined8 FUN_0804828e(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



void FUN_080482b5(void)

{
  char *pcVar1;
  int unaff_ESI;
  
  pcVar1 = (char *)(unaff_ESI + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return;
}



undefined8 __regparm3 FUN_080482c1(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int iVar1;
  undefined *unaff_ESI;
  undefined *unaff_EDI;
  byte bVar2;
  
  bVar2 = 0;
  FUN_080482b5();
  for (iVar1 = extraout_EDX + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar2 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar2 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080482ce(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar1;
  undefined *unaff_ESI;
  int unaff_EDI;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  FUN_080482b5();
  FUN_080482b5();
  puVar2 = (undefined *)(unaff_EDI + extraout_EDX);
  for (iVar1 = extraout_EDX_00 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


