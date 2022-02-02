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




void entry(void)

{
  code *pcVar1;
  int *piVar2;
  undefined uVar3;
  int iVar4;
  int extraout_EDX;
  int *piVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  byte bVar9;
  int iStack4;
  undefined2 *puVar8;
  
  bVar9 = 0;
  FUN_080481fe();
  FUN_0804830a();
  puVar6 = &DAT_0804834f;
  for (iVar4 = extraout_EDX; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0x1bb0;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  FUN_08048160();
  FUN_08048318();
  piVar2 = (int *)register0x00000010;
  do {
    do {
      piVar5 = piVar2;
      piVar5[-1] = 1;
      piVar5[-1] = 3;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      piVar2 = piVar5 + 1;
    } while (iVar4 < 0);
  } while ((DAT_0804834b != '\x1b') && (piVar2 = piVar5 + 1, DAT_0804834b != '\r'));
  *piVar5 = 0x8048154;
  FUN_08048318();
  *piVar5 = 0x8048159;
  FUN_080482a7();
  *piVar5 = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  piVar5[1] = 0x804816a;
  FUN_080482f0();
  piVar5[1] = 0x40;
  for (iVar4 = piVar5[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0x1db;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  piVar5[1] = 10;
  iVar4 = piVar5[1];
  do {
    piVar5[1] = iVar4;
    *piVar5 = 0x8048183;
    FUN_080482f0();
    *puVar6 = 0xdd;
    *piVar5 = 0x3e;
    puVar8 = puVar6 + (uint)bVar9 * -2 + 1;
    for (iVar4 = *piVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0x20;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    *puVar8 = 0xde;
    *(undefined *)((int)puVar8 + (uint)bVar9 * -4 + 3) = 3;
    puVar6 = puVar8 + (uint)bVar9 * -2 + ((3 - (uint)bVar9) - (uint)bVar9);
    *(undefined *)((int)puVar8 + (uint)bVar9 * -2 + (uint)bVar9 * -4 + 5) = 3;
    iVar4 = piVar5[1] + -1;
  } while (iVar4 != 0);
  piVar5[1] = 0x80481a8;
  FUN_080482f0();
  piVar5[1] = 0x40;
  for (iVar4 = piVar5[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0x1db;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  *(undefined *)((int)puVar6 + 1) = 3;
  puVar8 = puVar6 + ((2 - (uint)bVar9) - (uint)bVar9);
  *(undefined *)((int)puVar6 + (uint)bVar9 * -2 + 3) = 3;
  piVar5[1] = 0x80481c2;
  uVar3 = FUN_080482f0();
  piVar5[1] = 0x40;
  iVar4 = piVar5[1];
  do {
    puVar7 = (undefined *)((int)puVar8 + 1);
    puVar8 = puVar8 + (1 - (uint)bVar9);
    *puVar7 = uVar3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5[1] = 0x80481d3;
  FUN_080482c6();
  piVar5[1] = 0x80481dd;
  FUN_080482c6();
  piVar5[1] = 0x80481e7;
  FUN_080482c6();
  return;
}



void FUN_08048160(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined2 *unaff_EDI;
  undefined *puVar4;
  byte bVar6;
  undefined2 *puVar5;
  
  bVar6 = 0;
  FUN_080482f0();
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_EDI = 0x1db;
    unaff_EDI = unaff_EDI + (uint)bVar6 * -2 + 1;
  }
  iVar2 = 10;
  do {
    FUN_080482f0();
    *unaff_EDI = 0xdd;
    puVar5 = unaff_EDI + (uint)bVar6 * -2 + 1;
    for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0x20;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    *puVar5 = 0xde;
    *(undefined *)((int)puVar5 + (uint)bVar6 * -4 + 3) = 3;
    unaff_EDI = puVar5 + (uint)bVar6 * -2 + ((3 - (uint)bVar6) - (uint)bVar6);
    *(undefined *)((int)puVar5 + (uint)bVar6 * -2 + (uint)bVar6 * -4 + 5) = 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_080482f0();
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_EDI = 0x1db;
    unaff_EDI = unaff_EDI + (uint)bVar6 * -2 + 1;
  }
  *(undefined *)((int)unaff_EDI + 1) = 3;
  puVar5 = unaff_EDI + ((2 - (uint)bVar6) - (uint)bVar6);
  *(undefined *)((int)unaff_EDI + (uint)bVar6 * -2 + 3) = 3;
  uVar1 = FUN_080482f0();
  iVar2 = 0x40;
  do {
    puVar4 = (undefined *)((int)puVar5 + 1);
    puVar5 = puVar5 + (1 - (uint)bVar6);
    *puVar4 = uVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_080482c6();
  FUN_080482c6();
  FUN_080482c6();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3
FUN_080481fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  ushort *extraout_ECX;
  undefined *puVar5;
  undefined2 *unaff_EDI;
  byte bVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  undefined4 uVar9;
  undefined2 *puVar6;
  
  bVar7 = 0;
  pcVar1 = (code *)swi(0x80);
  DAT_08048347 = (*pcVar1)();
  if (-1 < DAT_08048347) {
    pcVar1 = (code *)swi(0x80);
    uVar9 = extraout_var;
    (*pcVar1)();
    DAT_08048343 = (uint)(ushort)((*extraout_ECX & 0xff) * (ushort)(byte)((uint)*extraout_ECX >> 8))
    ;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)(param_2,param_3,uVar9);
    _DAT_0805bbdb = _DAT_0805bbdb & 0xfffffff4;
    _DAT_0805bbd3 = _DAT_0805bbd3 | 5;
    _DAT_0805bbcf = _DAT_0805bbcf & 0xfffffacf;
    DAT_0805bbe5 = 0;
    DAT_0805bbe6 = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    return CONCAT44(param_6,param_8);
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)(register0x00000010);
  FUN_080482f0();
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_EDI = 0x1db;
    unaff_EDI = unaff_EDI + (uint)bVar7 * -2 + 1;
  }
  iVar3 = 10;
  do {
    FUN_080482f0();
    *unaff_EDI = 0xdd;
    puVar6 = unaff_EDI + (uint)bVar7 * -2 + 1;
    for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0x20;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    *puVar6 = 0xde;
    *(undefined *)((int)puVar6 + (uint)bVar7 * -4 + 3) = 3;
    unaff_EDI = puVar6 + (uint)bVar7 * -2 + ((3 - (uint)bVar7) - (uint)bVar7);
    *(undefined *)((int)puVar6 + (uint)bVar7 * -2 + (uint)bVar7 * -4 + 5) = 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_080482f0();
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_EDI = 0x1db;
    unaff_EDI = unaff_EDI + (uint)bVar7 * -2 + 1;
  }
  *(undefined *)((int)unaff_EDI + 1) = 3;
  puVar6 = unaff_EDI + ((2 - (uint)bVar7) - (uint)bVar7);
  *(undefined *)((int)unaff_EDI + (uint)bVar7 * -2 + 3) = 3;
  uVar2 = FUN_080482f0();
  iVar3 = 0x40;
  do {
    puVar5 = (undefined *)((int)puVar6 + 1);
    puVar6 = puVar6 + (1 - (uint)bVar7);
    *puVar5 = uVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_080482c6();
  FUN_080482c6();
  uVar8 = FUN_080482c6();
  return uVar8;
}



undefined8 __regparm1 FUN_080482a7(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(param_1,param_2);
}



undefined8 __regparm3 FUN_080482c6(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *unaff_ESI;
  byte *pbVar4;
  undefined2 *unaff_EDI;
  byte bVar5;
  
  bVar5 = 0;
  uVar3 = 0x700;
  while( true ) {
    pbVar4 = unaff_ESI + (uint)bVar5 * -2 + 1;
    bVar1 = *unaff_ESI;
    uVar3 = uVar3 & 0xffffff00 | (uint)bVar1;
    if (bVar1 == 0) break;
    if (bVar1 == 1) {
      unaff_ESI = pbVar4 + (uint)bVar5 * -2 + 1;
      uVar3 = (uint)*pbVar4 << 8;
    }
    else if (bVar1 == 2) {
      uVar2 = (uint)bVar5;
      FUN_080482f0();
      unaff_ESI = pbVar4 + uVar2 * -4 + 2;
    }
    else {
      *unaff_EDI = (short)uVar3;
      unaff_ESI = pbVar4;
      unaff_EDI = unaff_EDI + (uint)bVar5 * -2 + 1;
    }
  }
  return CONCAT44(param_2,param_1);
}



undefined4 __regparm3 FUN_080482f0(undefined4 param_1)

{
  return param_1;
}



undefined8 FUN_0804830a(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_08048326();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 FUN_08048318(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_08048326();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



void FUN_08048326(void)

{
  FUN_080482f0();
  return;
}


