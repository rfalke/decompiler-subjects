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




undefined4 entry(void)

{
  code *pcVar1;
  char **ppcVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  int unaff_retaddr;
  
  bVar12 = 0;
  ppcVar7 = (char **)&stack0x00000004;
  pcVar5 = (char *)(unaff_retaddr + -1);
  if (pcVar5 != (char *)0x0) {
    ppcVar2 = (char **)&stack0x00000008;
    while( true ) {
      ppcVar6 = ppcVar2;
      pcVar5 = *ppcVar6;
      ppcVar7 = ppcVar6 + 1;
      if (pcVar5 == (char *)0x0) break;
      ppcVar2 = ppcVar6 + 1;
      if (*pcVar5 == '-') {
        if (pcVar5[1] == '-') {
          *ppcVar6 = (char *)0x80482d6;
          FUN_080483e9();
          ppcVar2 = ppcVar6 + 1;
        }
        else {
          *ppcVar6 = (char *)0x80482ce;
          FUN_08048364();
          ppcVar2 = ppcVar6 + 1;
        }
      }
    }
  }
  ppcVar7[-1] = (char *)0x80482dd;
  FUN_08048412();
  puVar8 = ppcVar7;
  if (DAT_08048916 != '\0') {
    ppcVar7[-1] = (char *)0x80482f5;
    FUN_0804845b();
    ppcVar7[-1] = (char *)0x1;
    pcVar5 = ppcVar7[-1];
    ppcVar7[-1] = (char *)0x4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8 = ppcVar7 + 1;
    *ppcVar7 = (char *)0x804830c;
    FUN_080484b0();
  }
  piVar9 = puVar8;
  if (DAT_08048915 != '\0') {
    puVar8[-1] = 0x8048324;
    FUN_0804845b();
    puVar8[-1] = 1;
    pcVar5 = (char *)puVar8[-1];
    puVar8[-1] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar9 = puVar8 + 1;
    if (DAT_08048915 != '\0') {
      puVar10 = &DAT_08048097;
      puVar11 = &DAT_08049b0d;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      pcVar5 = s__proc_net_unix_08048076;
      *puVar8 = 0x804835f;
      FUN_08048553();
      piVar9 = puVar8 + 1;
    }
  }
  piVar9[-1] = 1;
  pcVar1 = (code *)swi(0x80);
  iVar3 = (*pcVar1)();
  *piVar9 = iVar3;
  piVar9[-1] = extraout_ECX;
  piVar9[-2] = 6;
  iVar4 = piVar9[-2];
  pcVar5 = pcVar5 + -1;
  do {
    pcVar5 = pcVar5 + 1;
    if (*pcVar5 == '\0') break;
    if (*pcVar5 == 'a') {
      DAT_08048914 = DAT_08048914 + '\x01';
      DAT_08048912 = 10;
      DAT_08048913 = DAT_08048913 + '\x01';
    }
    if ((*pcVar5 == 'l') && (iVar3 == 0)) {
      DAT_08048912 = 10;
      DAT_08048913 = '\0';
    }
    if (*pcVar5 == 't') {
      DAT_08048918 = DAT_08048918 + '\x01';
      DAT_0804891b = DAT_0804891b + '\x01';
    }
    if (*pcVar5 == 'u') {
      DAT_08048919 = DAT_08048919 + '\x01';
      DAT_0804891b = DAT_0804891b + '\x01';
    }
    if (*pcVar5 == 'w') {
      DAT_0804891a = DAT_0804891a + '\x01';
      DAT_0804891b = DAT_0804891b + '\x01';
    }
    if (*pcVar5 == 'p') {
      DAT_08048910 = DAT_08048910 + '\x01';
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return *piVar9;
}



int __regparm3 FUN_08048364(int param_1)

{
  int iVar1;
  int unaff_EBX;
  char *pcVar2;
  
  iVar1 = 6;
  pcVar2 = (char *)(unaff_EBX + -1);
  do {
    pcVar2 = pcVar2 + 1;
    if (*pcVar2 == '\0') {
      return param_1;
    }
    if (*pcVar2 == 'a') {
      DAT_08048914 = DAT_08048914 + '\x01';
      DAT_08048912 = 10;
      DAT_08048913 = DAT_08048913 + '\x01';
    }
    if ((*pcVar2 == 'l') && (param_1 == 0)) {
      DAT_08048912 = 10;
      DAT_08048913 = '\0';
    }
    if (*pcVar2 == 't') {
      DAT_08048918 = DAT_08048918 + '\x01';
      DAT_0804891b = DAT_0804891b + '\x01';
    }
    if (*pcVar2 == 'u') {
      DAT_08048919 = DAT_08048919 + '\x01';
      DAT_0804891b = DAT_0804891b + '\x01';
    }
    if (*pcVar2 == 'w') {
      DAT_0804891a = DAT_0804891a + '\x01';
      DAT_0804891b = DAT_0804891b + '\x01';
    }
    if (*pcVar2 == 'p') {
      DAT_08048910 = DAT_08048910 + '\x01';
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}



void FUN_080483e9(void)

{
  int *unaff_EBX;
  
  if (*unaff_EBX == 0x78696e75) {
    DAT_08048915 = DAT_08048915 + '\x01';
    DAT_08048917 = DAT_08048917 + '\x01';
  }
  if (*unaff_EBX == 0x74656e69) {
    DAT_08048916 = DAT_08048916 + '\x01';
    DAT_08048917 = DAT_08048917 + '\x01';
  }
  return;
}



void FUN_08048412(void)

{
  if (DAT_0804891b == '\0') {
    DAT_08048918 = DAT_08048918 + '\x01';
    DAT_08048919 = DAT_08048919 + '\x01';
    DAT_0804891a = DAT_0804891a + '\x01';
  }
  if ((DAT_08048914 == '\0') && (DAT_08048912 == '\0')) {
    DAT_08048913 = DAT_08048913 + '\x01';
  }
  if (DAT_08048917 == '\0') {
    DAT_08048915 = DAT_08048915 + '\x01';
    DAT_08048916 = DAT_08048916 + '\x01';
  }
  return;
}



void FUN_0804845b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  if (DAT_08048914 == '\0') {
    if (DAT_08048913 == '\0') {
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
    }
    else {
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
    }
  }
  else {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



void FUN_080484b0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (DAT_08048918 != '\0') {
    puVar2 = &DAT_08048085;
    puVar3 = &DAT_08049aca;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_08048553();
  }
  if (DAT_08048919 != '\0') {
    puVar2 = &DAT_0804808b;
    puVar3 = &DAT_08049aca;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    FUN_08048553();
  }
  if (DAT_0804891a != '\0') {
    puVar2 = &DAT_08048091;
    puVar3 = &DAT_08049aca;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    FUN_08048553();
  }
  return;
}



undefined8 FUN_08048553(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    FUN_08048568();
  }
  return CONCAT44(in_ECX,unaff_retaddr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_08048568(uint param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  undefined4 unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar5;
  code *unaff_EDI;
  undefined1 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined4 uStack4;
  
  bVar7 = 0;
  do {
    *(uint *)((int)register0x00000010 + -4) = param_1;
    *(undefined4 *)((int)register0x00000010 + -8) = param_3;
    *(undefined4 *)((int)register0x00000010 + -0xc) = param_2;
    *(undefined4 *)((int)register0x00000010 + -0x10) = unaff_EBX;
    *(BADSPACEBASE **)((int)register0x00000010 + -0x14) = register0x00000010;
    *(undefined4 *)((int)register0x00000010 + -0x18) = unaff_EBP;
    *(byte **)((int)register0x00000010 + -0x1c) = unaff_ESI;
    *(code **)((int)register0x00000010 + -0x20) = unaff_EDI;
    puVar6 = &DAT_0804991c;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0x20;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    unaff_EDI = *(code **)((int)register0x00000010 + -0x20);
    unaff_EBP = *(undefined4 *)((int)register0x00000010 + -0x18);
    unaff_EBX = *(undefined4 *)((int)register0x00000010 + -0x10);
    puVar2 = (undefined4 *)register0x00000010;
    pbVar5 = &DAT_0804991c;
    do {
      puVar4 = puVar2;
      puVar4[-1] = 1;
      puVar4[-1] = 3;
      pcVar1 = (code *)swi(0x80);
      uVar8 = (*pcVar1)();
      param_2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((int)(uint)uVar8 < 1) {
        return;
      }
      unaff_ESI = pbVar5 + (uint)bVar7 * -2 + 1;
      param_1 = (uint)uVar8 & 0xffffff00 | (uint)*pbVar5;
      puVar2 = puVar4 + 1;
      pbVar5 = unaff_ESI;
    } while (param_1 != 10);
    param_3 = extraout_ECX;
    register0x00000010 = (BADSPACEBASE *)(puVar4 + 1);
  } while ((_DAT_0804991c == 0x6c732020) ||
          (register0x00000010 = (BADSPACEBASE *)(puVar4 + 1), _DAT_0804991c == 0x206d754e));
  *puVar4 = 0x80485b0;
  (*unaff_EDI)();
  *puVar4 = 0x80485b5;
  FUN_080485b8();
  FUN_08048568();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_080485b8(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = &stack0xffffffe0;
  if (DAT_08049b5d == '\n') {
LAB_080485f3:
    if (DAT_08048912 == '\0') goto LAB_08048637;
  }
  else {
    if (_DAT_08049b0d == 0x78696e75) {
      if ((DAT_08049b5d == '\x01') && ((DAT_08049b63 & 0x10000) != 0)) goto LAB_080485f3;
    }
    else if (DAT_08049b5d == '\0') goto LAB_080485f3;
    puVar2 = &stack0xffffffe0;
    if (DAT_08048913 == '\0') goto LAB_08048637;
  }
  if ((DAT_08049b62 == '\0') || (puVar2 = &stack0xffffffe0, DAT_08049b62 == '\x01')) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar2 = &stack0xffffffe4;
  }
LAB_08048637:
  return CONCAT44(*(undefined4 *)(puVar2 + 0x14),*(undefined4 *)(puVar2 + 0x1c));
}



undefined8 __regparm3 FUN_080487f8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *unaff_ESI;
  
  uVar1 = (uint)*unaff_ESI;
  iVar2 = 2;
  iVar5 = param_2;
  uVar3 = uVar1 & 0xff;
  while( true ) {
    if (uVar3 < 0x3a) {
      iVar4 = uVar3 - 0x30;
    }
    else if (uVar3 < 0x5b) {
      iVar4 = uVar3 - 0x37;
    }
    else {
      iVar4 = uVar3 - 0x57;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    iVar5 = iVar4 << 4;
    uVar1 = uVar1 >> 8;
    uVar3 = uVar1;
  }
  return CONCAT44(param_2,iVar5 + iVar4);
}



undefined8 __regparm3 FUN_08048842(int param_1,int param_2,undefined4 param_3)

{
  int extraout_EDX;
  char *unaff_EDI;
  int iVar1;
  
  iVar1 = param_2;
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_08048867;
  }
  else {
    FUN_08048842(param_2,param_3);
    param_2 = extraout_EDX;
  }
  *unaff_EDI = (char)param_2 + '0';
  param_2 = iVar1;
LAB_08048867:
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_0804886c(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_080487f8();
  uVar1 = FUN_080487f8();
  return CONCAT44(param_2,(int)((ulonglong)uVar1 >> 0x20) + (int)uVar1);
}



undefined8 __regparm3 FUN_08048884(undefined4 param_1,undefined4 param_2)

{
  FUN_0804886c();
  FUN_08048842();
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_08048895(undefined4 param_1,undefined4 param_2)

{
  FUN_080488c4();
  FUN_08048842();
  return CONCAT44(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_080488a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_EDX;
  
  FUN_080488c4();
  _DAT_08049b5e = extraout_EDX;
  FUN_080488ec();
  return CONCAT44(param_2,param_1);
}



int FUN_080488c4(void)

{
  undefined8 uVar1;
  
  FUN_080487f8();
  FUN_080487f8();
  FUN_080487f8();
  uVar1 = FUN_080487f8();
  return (int)((ulonglong)uVar1 >> 0x20) + (int)uVar1;
}



undefined8 __regparm3 FUN_080488ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_ECX;
  undefined *unaff_EDI;
  byte bVar1;
  
  bVar1 = 0;
  while( true ) {
    FUN_08048842(param_2,param_3);
    if (extraout_ECX == 1) break;
    *unaff_EDI = 0x2e;
    unaff_EDI = unaff_EDI + (uint)bVar1 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


