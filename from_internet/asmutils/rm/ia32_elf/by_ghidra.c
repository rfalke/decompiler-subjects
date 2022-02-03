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




void entry(undefined4 param_1,short *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int unaff_EBP;
  int *piVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined uVar13;
  undefined8 uVar14;
  int unaff_retaddr;
  
  piVar9 = &param_1;
  if (1 < unaff_retaddr) {
    unaff_EBP = 0;
    if (*param_2 == 0x722d) {
      unaff_EBP = 1;
      piVar9 = (int *)&stack0x0000000c;
    }
    else {
      piVar9 = (int *)&param_2;
    }
    while( true ) {
      piVar6 = piVar9;
      iVar10 = *piVar6;
      piVar9 = piVar6 + 1;
      bVar12 = iVar10 == 0;
      if (bVar12) break;
      *piVar6 = 0x8048070;
      FUN_08048177();
      if (bVar12) {
        piVar9 = piVar6 + 1;
        if (unaff_EBP != 0) {
          *piVar6 = iVar10;
          piVar6[-1] = 0x804807c;
          FUN_08048094();
          *piVar6 = 0x28;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          piVar9 = piVar6 + 2;
        }
      }
      else {
        *piVar6 = 10;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        piVar9 = piVar6 + 2;
      }
    }
  }
  piVar9[-1] = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  *piVar9 = unaff_EBP;
  bVar12 = piVar9 == (int *)0x110e;
  *(undefined4 *)((int)piVar9 + -0x1112) = 0x80480a5;
  FUN_08048177();
  if (bVar12) {
    *(undefined4 *)((int)piVar9 + -0x1112) = 5;
    pcVar3 = (code *)swi(0x80);
    iVar10 = (*pcVar3)();
    if (-1 < iVar10) {
      piVar9[-1] = iVar10;
      puVar7 = (undefined4 *)((int)piVar9 + -0x110a);
      while( true ) {
        puVar4 = *(undefined **)((int)piVar9 + -4);
        pcVar3 = (code *)swi(0x80);
        iVar10 = (*pcVar3)();
        piVar8 = puVar7 + 1;
        if (iVar10 < 0) break;
        iVar11 = extraout_ECX;
        if (iVar10 == 0) {
          *puVar7 = 6;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          return;
        }
        do {
          uVar13 = *(char *)(iVar11 + 10) == '.';
          if ((!(bool)uVar13) ||
             ((puVar5 = puVar4, *(char *)(iVar11 + 0xb) != '\0' &&
              (uVar13 = *(short *)(iVar11 + 0xb) == 0x2e, !(bool)uVar13)))) {
            piVar8[-1] = iVar11;
            puVar5 = (undefined *)((int)piVar9 + -0x110e);
            uVar2 = *(undefined4 *)((int)piVar9 + 8);
            piVar8[-2] = 0x804810b;
            FUN_08048148();
            piVar8[-2] = 0x8048110;
            uVar14 = FUN_08048177();
            if ((bool)uVar13) {
              piVar8[-2] = (int)uVar14;
              piVar8[-3] = extraout_ECX_00;
              piVar8[-4] = (int)((ulonglong)uVar14 >> 0x20);
              piVar8[-5] = (int)puVar4;
              piVar8[-6] = (int)(piVar8 + -1);
              piVar8[-7] = (int)piVar9;
              piVar8[-8] = uVar2;
              piVar8[-9] = (int)puVar5;
              piVar8[-10] = (int)puVar5;
              piVar8[-0xb] = 0x8048119;
              FUN_08048094();
              piVar8[-10] = 0x28;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              piVar9 = (int *)piVar8[-6];
              puVar5 = (undefined *)piVar8[-4];
              iVar10 = piVar8[-2];
            }
            else {
              piVar8[-2] = 10;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              iVar10 = extraout_ECX_01;
            }
            iVar11 = *piVar8;
            piVar8 = piVar8 + 1;
          }
          puVar1 = (ushort *)(iVar11 + 8);
          iVar11 = iVar11 + (uint)*puVar1;
          iVar10 = iVar10 - (uint)*puVar1;
          puVar4 = puVar5;
          puVar7 = piVar8;
        } while (iVar10 != 0);
      }
    }
  }
  return;
}



void FUN_08048094(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  int iVar10;
  bool bVar11;
  undefined uVar12;
  undefined8 uVar13;
  int aiStack4406 [1099];
  int local_8;
  
  puVar9 = &stack0xfffffffc;
  bVar11 = (undefined *)register0x00000010 == (undefined *)0x1112;
  FUN_08048177();
  if (bVar11) {
    pcVar3 = (code *)swi(0x80);
    local_8 = (*pcVar3)();
    if (-1 < local_8) {
      piVar7 = aiStack4406 + 10;
      while( true ) {
        puVar5 = *(undefined **)(puVar9 + -4);
        pcVar3 = (code *)swi(0x80);
        iVar4 = (*pcVar3)();
        piVar8 = piVar7 + 1;
        if (iVar4 < 0) break;
        iVar10 = extraout_ECX;
        if (iVar4 == 0) {
          *piVar7 = 6;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          return;
        }
        do {
          uVar12 = *(char *)(iVar10 + 10) == '.';
          if ((!(bool)uVar12) ||
             ((puVar6 = puVar5, *(char *)(iVar10 + 0xb) != '\0' &&
              (uVar12 = *(short *)(iVar10 + 0xb) == 0x2e, !(bool)uVar12)))) {
            piVar8[-1] = iVar10;
            puVar6 = puVar9 + -0x110e;
            uVar2 = *(undefined4 *)(puVar9 + 8);
            piVar8[-2] = 0x804810b;
            FUN_08048148();
            piVar8[-2] = 0x8048110;
            uVar13 = FUN_08048177();
            if ((bool)uVar12) {
              piVar8[-2] = (int)uVar13;
              piVar8[-3] = extraout_ECX_00;
              piVar8[-4] = (int)((ulonglong)uVar13 >> 0x20);
              piVar8[-5] = (int)puVar5;
              piVar8[-6] = (int)(piVar8 + -1);
              piVar8[-7] = (int)puVar9;
              piVar8[-8] = uVar2;
              piVar8[-9] = (int)puVar6;
              piVar8[-10] = (int)puVar6;
              piVar8[-0xb] = 0x8048119;
              FUN_08048094();
              piVar8[-10] = 0x28;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              puVar9 = (undefined *)piVar8[-6];
              puVar6 = (undefined *)piVar8[-4];
              iVar4 = piVar8[-2];
            }
            else {
              piVar8[-2] = 10;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              iVar4 = extraout_ECX_01;
            }
            iVar10 = *piVar8;
            piVar8 = piVar8 + 1;
          }
          puVar1 = (ushort *)(iVar10 + 8);
          iVar10 = iVar10 + (uint)*puVar1;
          iVar4 = iVar4 - (uint)*puVar1;
          puVar5 = puVar6;
          piVar7 = piVar8;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}



undefined8 __regparm3 FUN_08048148(undefined4 param_1,undefined4 param_2)

{
  FUN_080481ae();
  FUN_0804815c();
  FUN_080481bb();
  return CONCAT44(param_2,param_1);
}



void FUN_0804815c(void)

{
  int extraout_EDX;
  int unaff_EDI;
  
  FUN_0804819e();
  if (*(char *)(unaff_EDI + extraout_EDX + -1) != '/') {
    *(undefined2 *)(unaff_EDI + extraout_EDX) = 0x2f;
  }
  return;
}



undefined8 FUN_08048177(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_0804819e(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  return CONCAT44(iVar2,param_1);
}



undefined8 __regparm3 FUN_080481ae(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int iVar1;
  undefined *unaff_ESI;
  undefined *unaff_EDI;
  byte bVar2;
  
  bVar2 = 0;
  FUN_0804819e();
  for (iVar1 = extraout_EDX + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar2 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar2 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080481bb(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar1;
  undefined *unaff_ESI;
  int unaff_EDI;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  FUN_0804819e();
  FUN_0804819e();
  puVar2 = (undefined *)(unaff_EDI + extraout_EDX);
  for (iVar1 = extraout_EDX_00 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


