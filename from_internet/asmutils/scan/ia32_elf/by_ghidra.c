typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined4 param_1,undefined param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  short sVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined2 *puVar11;
  byte bVar12;
  byte unaff_retaddr;
  
  bVar12 = 0;
  puVar6 = &param_1;
  if (unaff_retaddr < 4) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_1 = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar6 = (undefined4 *)&stack0x0000000c;
  }
  pbVar8 = *(byte **)((int)puVar6 + 4);
  iVar4 = 0;
  do {
    cVar5 = '\0';
    pbVar9 = pbVar8;
    while( true ) {
      pbVar8 = pbVar9 + (uint)bVar12 * -2 + 1;
      if (*pbVar9 < 0x30) break;
      cVar5 = cVar5 * '\n' + (*pbVar9 - 0x30);
      pbVar9 = pbVar8;
    }
    (&DAT_08048199)[iVar4] = cVar5;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  DAT_08048195 = 2;
  sVar7 = 0;
  pcVar10 = *(char **)((int)puVar6 + 8);
  while( true ) {
    if (*pcVar10 == '\0') break;
    sVar7 = sVar7 * 10 + (ushort)(byte)(*pcVar10 - 0x30);
    pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
  }
  iVar4 = 0;
  pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
  while( true ) {
    if (*pcVar10 == '\0') break;
    iVar4 = iVar4 * 10 + (uint)(byte)(*pcVar10 - 0x30);
    pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
  }
  _DAT_080481ad = (short)iVar4;
  uRam080481af = (undefined2)((uint)iVar4 >> 0x10);
  DAT_080481ab = sVar7;
  do {
    *(undefined4 *)((int)puVar6 + 8) = 0x80480f8;
    FUN_08048105();
    sVar7 = sVar7 + 1;
  } while (sVar7 != _DAT_080481ad);
  *(undefined4 *)((int)puVar6 + 8) = 1;
  pcVar2 = (code *)swi(0x80);
  uVar3 = (*pcVar2)();
  *(undefined4 *)((int)puVar6 + 0xc) = uVar3;
  *(undefined4 *)((int)puVar6 + 8) = 6;
  puVar11 = &DAT_08048195;
  for (iVar4 = *(int *)((int)puVar6 + 8); iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined *)puVar11 = 0x20;
    puVar11 = (undefined2 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
  }
  iVar4 = *(int *)((int)puVar6 + 0xc);
  *(undefined2 **)((int)puVar6 + 0xc) = puVar11;
  do {
    uVar1 = (ulonglong)iVar4;
    iVar4 = (int)(uVar1 / 10);
    puVar11 = (undefined2 *)((int)puVar11 + -1);
    *(char *)puVar11 = (char)(uVar1 % 10) + '0';
  } while (iVar4 != 0);
  return;
}



void FUN_08048105(undefined param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint unaff_ESI;
  int unaff_EDI;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)(1,0);
  *(char *)(unaff_EDI + 3) = (char)(unaff_ESI & 0xffff);
  *(char *)(unaff_EDI + 2) = (char)((unaff_ESI & 0xffff) >> 8);
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  puVar3 = (undefined4 *)&param_1;
  if (iVar2 == 0) {
    FUN_0804817a();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar3 = (undefined4 *)&stack0x0000000c;
  }
  *puVar3 = 6;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void __regparm3 FUN_0804817a(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  char *unaff_EDI;
  
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_EDI = ' ';
    unaff_EDI = unaff_EDI + 1;
  }
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = (int)(uVar1 / 10);
    unaff_EDI = unaff_EDI + -1;
    *unaff_EDI = (char)(uVar1 % 10) + '0';
  } while (param_1 != 0);
  return;
}


