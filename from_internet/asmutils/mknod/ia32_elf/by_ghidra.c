typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void entry(undefined4 param_1,char *param_2,short *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined *extraout_ECX;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  byte **ppbVar11;
  int *piVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  byte *unaff_EBP;
  int iVar16;
  undefined4 *unaff_EDI;
  undefined2 in_GS;
  undefined uVar17;
  byte bVar18;
  undefined8 uVar19;
  
  bVar18 = 0;
  pcVar3 = (code *)swi(0x80);
  uVar4 = (*pcVar3)();
  uVar4 = uVar4 ^ 0x1b6;
  do {
    pcVar9 = param_2;
    param_2 = pcVar9 + 1;
  } while (*param_2 != '\0');
  if (*pcVar9 == 'o') {
    ppbVar14 = (byte **)&param_4;
    piVar12 = &param_4;
    uVar17 = false;
    ppbVar13 = (byte **)&param_4;
    if (param_3 != (short *)0x0) {
      if (*param_3 == 0x6d2d) {
        if (*(char *)(param_3 + 1) == '\0') {
          piVar12 = (int *)&stack0x00000014;
          uVar17 = false;
          ppbVar13 = (byte **)&stack0x00000014;
          if (param_4 == 0) goto LAB_080480cd;
        }
                    // WARNING: Call to offcut address within same function
        piVar12[-1] = 0x80480c6;
        func_0x0804814f();
        ppbVar14 = (byte **)(piVar12 + 1);
        uVar17 = false;
        ppbVar13 = (byte **)(piVar12 + 1);
        if (*piVar12 == 0) goto LAB_080480cd;
      }
LAB_080480ef:
      uVar17 = false;
LAB_08048117:
      *(undefined4 *)((int)ppbVar14 + -4) = 0xe;
      pcVar3 = (code *)swi(0x80);
      pcVar9 = (char *)(*pcVar3)();
      ppbVar15 = (byte **)((int)ppbVar14 + 4);
      goto LAB_0804811d;
    }
  }
  else {
    ppbVar11 = (byte **)&param_4;
    piVar10 = &param_4;
    uVar17 = false;
    ppbVar13 = (byte **)&param_4;
    if (param_3 != (short *)0x0) {
      if (*param_3 == 0x6d2d) {
        if (*(char *)(param_3 + 1) == '\0') {
          piVar10 = (int *)&stack0x00000014;
          uVar17 = false;
          ppbVar13 = (byte **)&stack0x00000014;
          if (param_4 == 0) goto LAB_080480cd;
        }
                    // WARNING: Call to offcut address within same function
        piVar10[-1] = 0x8048085;
        func_0x0804814f();
        ppbVar11 = (byte **)(piVar10 + 1);
        uVar17 = false;
        ppbVar13 = (byte **)(piVar10 + 1);
        if (*piVar10 == 0) goto LAB_080480cd;
      }
      unaff_EBP = *ppbVar11;
      ppbVar14 = ppbVar11 + 1;
      uVar17 = false;
      ppbVar13 = ppbVar11 + 1;
      if (unaff_EBP != (byte *)0x0) {
        if (((*unaff_EBP == 0x62) || (*unaff_EBP == 99)) || (*unaff_EBP == 0x75)) {
          unaff_EBP = ppbVar11[1];
          uVar17 = false;
          ppbVar13 = ppbVar11 + 2;
          if (unaff_EBP != (byte *)0x0) {
            ppbVar11[1] = (byte *)0x8048105;
            iVar7 = FUN_08048167();
            unaff_EBP = ppbVar11[2];
            uVar17 = false;
            ppbVar13 = ppbVar11 + 3;
            if (unaff_EBP != (byte *)0x0) {
              ppbVar11[2] = (byte *)(iVar7 << 8);
              ppbVar11[1] = (byte *)0x8048114;
              uVar5 = FUN_08048167();
              ppbVar14 = ppbVar11 + 3;
              uVar17 = CARRY4((uint)ppbVar11[2],uVar5);
              goto LAB_08048117;
            }
          }
        }
        else {
          uVar17 = *unaff_EBP < 0x70;
          ppbVar13 = ppbVar11 + 1;
          if (*unaff_EBP == 0x70) goto LAB_080480ef;
        }
      }
    }
  }
LAB_080480cd:
  *(undefined4 *)((int)ppbVar13 + -4) = 2;
  uVar8 = *(undefined4 *)((int)ppbVar13 + -4);
  *(undefined4 *)((int)ppbVar13 + -4) = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppbVar15 = (byte **)((int)ppbVar13 + 4);
  pcVar9 = (char *)CONCAT31((int3)((uint)uVar8 >> 8),1);
LAB_0804811d:
  ppbVar15[-1] = (byte *)0x1;
  pcVar3 = (code *)swi(0x80);
  uVar19 = (*pcVar3)();
  *ppbVar15 = unaff_EBP;
  if (!(bool)uVar17) {
    out(0x5a,(int)uVar19);
    return;
  }
  segment(in_GS,(short)pcVar9 + (short)uVar4);
  uVar6 = (undefined2)((ulonglong)uVar19 >> 0x20);
  uVar8 = in(uVar6);
  *unaff_EDI = uVar8;
  iVar7 = *(int *)(uVar4 + 0x6f);
  pcVar9[0x2d] = pcVar9[0x2d] & (byte)pcVar9;
  uVar8 = in(uVar6);
  unaff_EDI[(uint)bVar18 * -2 + 1] = uVar8;
  pbVar1 = (byte *)(iVar7 * 100 + 0x6f);
  *pbVar1 = *pbVar1 & (byte)((uint)extraout_ECX >> 8);
  iVar16 = (int)*ppbVar15;
  bVar18 = (byte)extraout_ECX;
  *(byte *)(uVar4 + 0x41) = *(byte *)(uVar4 + 0x41) & bVar18;
  extraout_ECX[(int)pcVar9 * 2 + 0x50] =
       extraout_ECX[(int)pcVar9 * 2 + 0x50] & (byte)((ulonglong)uVar19 >> 0x20);
  pbVar1 = (byte *)(iVar16 + 0x42);
  *pbVar1 = *pbVar1 & bVar18;
  iVar7 = (int)((ulonglong)uVar19 >> 0x20) + -1;
  *ppbVar15 = (byte *)iVar7;
  pbVar1 = (byte *)(iVar16 + 0x4a);
  *pbVar1 = *pbVar1 & bVar18;
  ppbVar15[-1] = (byte *)iVar7;
  *extraout_ECX = 0;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if ((char)(cVar2 + -0x30) < '\0') {
      return;
    }
  } while ((char)(cVar2 + -0x30) < '\b');
  return;
}



undefined8 __regparm3 FUN_08048167(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char *unaff_EBP;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *unaff_EBP;
    unaff_EBP = unaff_EBP + 1;
    bVar3 = cVar1 - 0x30;
    if (((char)bVar3 < '\0') || ('\t' < (char)bVar3)) break;
    iVar2 = iVar2 * 10 + (uint)bVar3;
  }
  return CONCAT44(param_2,iVar2);
}


