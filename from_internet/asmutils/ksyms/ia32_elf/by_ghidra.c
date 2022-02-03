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




undefined8 entry(undefined4 param_1,short *param_2,char *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  short *psVar8;
  undefined4 *unaff_EDI;
  byte bVar10;
  undefined8 uVar11;
  char unaff_retaddr;
  short *psVar9;
  
  bVar10 = 0;
  puVar5 = &stack0xfffffffc;
  if (unaff_retaddr < '\x02') {
LAB_0804809f:
    unaff_EDI = &DAT_080a82ce;
    pcVar2 = (code *)swi(0x80);
    uVar11 = (*pcVar2)();
    psVar8 = (short *)((ulonglong)uVar11 >> 0x20);
    uVar3 = (uint)uVar11;
    param_3 = (char *)(short *)0x20000;
    if ((int)uVar3 < 0) goto LAB_080480ea;
    do {
      uVar3 = FUN_080480f1();
      psVar9 = psVar8;
      do {
        psVar8 = (short *)((int)psVar9 + (uint)bVar10 * -2 + 1);
        bVar1 = *(byte *)psVar9;
        uVar3 = uVar3 & 0xffffff00 | (uint)bVar1;
        psVar9 = psVar8;
      } while (bVar1 != 0);
    } while (extraout_ECX != 1);
    param_3 = (char *)psVar8;
    if (unaff_retaddr < '\x02') goto LAB_080480ea;
    param_3 = (char *)param_2;
    if (*param_2 == 0x612d) {
      param_3 = (char *)0x0;
      FUN_080480f1();
    }
  }
  else if (*param_2 == 0x562d) {
    param_3 = s_hackers__ksyms_v_0_1_0804826b;
    FUN_0804824a();
    register0x00000010 = (BADSPACEBASE *)&stack0xfffffffc;
  }
  else {
    if (*param_2 != 0x682d) {
      FUN_0804824a();
    }
    if (*param_2 != 0x6f2d) goto LAB_0804809f;
    if (unaff_retaddr < '\x03') {
      param_3 = (char *)0x0;
      FUN_080480f1();
      register0x00000010 = (BADSPACEBASE *)&stack0xfffffffc;
    }
    else {
      FUN_080480f1();
      register0x00000010 = (BADSPACEBASE *)&stack0xfffffffc;
    }
  }
  uVar3 = 0;
LAB_080480ea:
  *(undefined4 *)((int)register0x00000010 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  uVar11 = (*pcVar2)();
  *(undefined **)register0x00000010 = puVar5;
  *(char **)((int)register0x00000010 + -4) = param_3;
  *(int *)((int)register0x00000010 + -0x10) = (int)uVar11;
  *(undefined4 *)((int)register0x00000010 + -0x14) = extraout_ECX_00;
  *(int *)((int)register0x00000010 + -0x18) = (int)((ulonglong)uVar11 >> 0x20);
  *(uint *)((int)register0x00000010 + -0x1c) = uVar3;
  *(undefined **)((int)register0x00000010 + -0x20) = (undefined *)((int)register0x00000010 + -0xc);
  *(BADSPACEBASE **)((int)register0x00000010 + -0x24) = register0x00000010;
  *(char **)((int)register0x00000010 + -0x28) = param_3;
  *(undefined4 **)((int)register0x00000010 + -0x2c) = unaff_EDI;
  *(undefined4 *)((int)register0x00000010 + -0x30) = 4;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  if (iVar4 < 0) {
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 0x8048129;
    FUN_08048214();
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 8;
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 1;
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    piVar6 = (int *)((int)register0x00000010 + -0x24);
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x8048143;
    FUN_0804824a();
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x804814d;
    FUN_0804824a();
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x8048155;
    FUN_0804824a();
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x804815f;
    FUN_0804824a();
  }
  else {
    *(undefined4 **)((int)register0x00000010 + -8) = &DAT_080882ca;
    *(undefined4 **)((int)register0x00000010 + -0xc) = &DAT_080882ca;
    iVar4 = DAT_080a82ca;
    piVar7 = (int *)((int)register0x00000010 + -0x28);
    do {
      piVar7[-1] = iVar4;
      piVar7[-2] = 0x804818a;
      FUN_08048214();
      piVar7[-2] = 8;
      piVar7[-2] = 1;
      piVar7[-2] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      piVar7[-1] = 0x80481a4;
      FUN_0804824a();
      piVar7[-1] = 0x80481b2;
      uVar3 = FUN_0804824a();
      if (*(int *)((int)register0x00000010 + -4) != 0) {
        if (uVar3 < 0x20) {
          do {
            piVar7[-1] = 0x80481cc;
            FUN_0804824a();
          } while (extraout_ECX_01 != 1);
        }
        piVar7[-1] = 0x80481d8;
        FUN_0804824a();
        piVar7[-1] = 0x80481e2;
        FUN_0804824a();
        piVar7[-1] = 0x80481ea;
        FUN_0804824a();
        piVar7[-1] = 0x80481f4;
        FUN_0804824a();
      }
      piVar7[-1] = 0x80481fe;
      FUN_0804824a();
      *(int *)((int)register0x00000010 + -8) = *(int *)((int)register0x00000010 + -8) + 8;
      piVar6 = piVar7 + 1;
      iVar4 = *piVar7 + -1;
      piVar7 = piVar7 + 1;
    } while (iVar4 != 0);
  }
  return CONCAT44(*(undefined4 *)((int)piVar6 + 0x14),*(undefined4 *)((int)piVar6 + 0x1c));
}



undefined8 FUN_080480f1(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int *piVar4;
  undefined **ppuVar5;
  int unaff_ESI;
  int iStack52;
  undefined *puStack40;
  undefined4 **ppuStack36;
  undefined4 *local_10;
  undefined4 *local_c;
  
  puStack40 = &stack0xfffffffc;
  ppuStack36 = &local_10;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_08048214();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppuVar5 = &puStack40;
    FUN_0804824a();
    FUN_0804824a();
    FUN_0804824a();
    FUN_0804824a();
  }
  else {
    local_c = &DAT_080882ca;
    local_10 = &DAT_080882ca;
    iVar2 = DAT_080a82ca;
    piVar4 = (int *)&stack0xffffffd4;
    do {
      piVar4[-1] = iVar2;
      piVar4[-2] = 0x804818a;
      FUN_08048214();
      piVar4[-2] = 8;
      piVar4[-2] = 1;
      piVar4[-2] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar4[-1] = 0x80481a4;
      FUN_0804824a();
      piVar4[-1] = 0x80481b2;
      uVar3 = FUN_0804824a();
      if (unaff_ESI != 0) {
        if (uVar3 < 0x20) {
          do {
            piVar4[-1] = 0x80481cc;
            FUN_0804824a();
          } while (extraout_ECX != 1);
        }
        piVar4[-1] = 0x80481d8;
        FUN_0804824a();
        piVar4[-1] = 0x80481e2;
        FUN_0804824a();
        piVar4[-1] = 0x80481ea;
        FUN_0804824a();
        piVar4[-1] = 0x80481f4;
        FUN_0804824a();
      }
      piVar4[-1] = 0x80481fe;
      FUN_0804824a();
      local_c = local_c + 2;
      ppuVar5 = (undefined **)(piVar4 + 1);
      iVar2 = *piVar4 + -1;
      piVar4 = piVar4 + 1;
    } while (iVar2 != 0);
  }
  return CONCAT44(*(undefined4 *)((int)ppuVar5 + 0x14),*(undefined4 *)((int)ppuVar5 + 0x1c));
}



void FUN_08048214(void)

{
  char extraout_CL;
  undefined *unaff_EDI;
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = 0;
  puVar2 = unaff_EDI;
  FUN_0804822c();
  *unaff_EDI = 9;
  if ((extraout_CL == '\x10') &&
     (0xf9 < (byte)((char)puVar2 - (char)(unaff_EDI + (uint)bVar1 * -2 + 1)))) {
    unaff_EDI[(uint)bVar1 * -2 + 1] = 9;
  }
  return;
}



void __regparm3 FUN_0804822c(uint param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *unaff_EDI;
  char cVar2;
  
  if (param_1 / param_3 != 0) {
    FUN_0804822c();
  }
  cVar2 = (char)(param_1 % param_3);
  cVar1 = cVar2 + '0';
  if ('9' < cVar1) {
    cVar1 = cVar2 + 'W';
  }
  *unaff_EDI = cVar1;
  return;
}



undefined4 __regparm3 FUN_0804824a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  char *unaff_ESI;
  
  if (unaff_ESI != (char *)0x0) {
    do {
      cVar1 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    } while (cVar1 != '\0');
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_1 = param_3;
  }
  return param_1;
}


