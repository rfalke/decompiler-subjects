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




void entry(undefined4 param_1,short *param_2,undefined4 param_3,undefined *param_4,
          undefined *param_5,undefined4 param_6,int param_7)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  int extraout_ECX;
  undefined extraout_DL;
  undefined2 extraout_DX;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined6 uVar10;
  
  uVar9 = 0;
  puVar7 = &param_3;
  puVar6 = &param_3;
  if (param_2 != (short *)0x0) {
    DAT_0804816c = 2;
    if (*param_2 == 0x6c2d) {
      FUN_0804813d();
      param_3 = 0x804807d;
      uVar10 = FUN_08048157();
      DAT_0804816c = CONCAT13((char)((uint6)uVar10 >> 0x20),
                              CONCAT12((char)((uint6)uVar10 >> 0x28),(undefined2)DAT_0804816c));
      param_3 = 0x10;
      uVar4 = 2;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar8 = &param_5;
      if (iVar3 < 0) goto LAB_08048138;
      param_4 = (undefined *)0xff;
      pcVar1 = (code *)swi(0x80);
      param_3 = (int)uVar10;
      (*pcVar1)();
      param_5 = &DAT_0804859c;
      param_4 = &DAT_0804857c;
      pcVar1 = (code *)swi(0x80);
      param_3 = (int)uVar10;
      uVar9 = (*pcVar1)();
      puVar6 = (undefined4 *)&stack0x00000020;
      puVar7 = (undefined4 *)&stack0x00000020;
      if (param_7 == 0) goto LAB_08048113;
    }
    puVar6[-1] = 0x80480d9;
    uVar4 = FUN_0804813d();
    puVar6[-1] = 4;
    puVar2 = &DAT_08048170;
    do {
      puVar5 = puVar2;
      puVar6[-1] = 0x80480e9;
      FUN_08048157();
      *puVar5 = extraout_DL;
      puVar2 = puVar5 + 1;
    } while (extraout_ECX != 1);
    *puVar6 = 0x80480f4;
    FUN_08048157();
    puVar5[-5] = (char)((ushort)extraout_DX >> 8);
    puVar5[-4] = (char)extraout_DX;
    *puVar6 = 0x10;
    puVar6[-1] = &DAT_0804816c;
    puVar6[-2] = uVar4;
    puVar6[-3] = 3;
    uVar4 = puVar6[-3];
    puVar6[-3] = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar7 = puVar6 + 2;
    puVar8 = puVar6 + 2;
    if (iVar3 < 0) goto LAB_08048138;
  }
LAB_08048113:
  while( true ) {
    uVar4 = uVar9;
    puVar7[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar8 = puVar7 + 1;
    if ((iVar3 < 0) || (puVar8 = puVar7 + 1, iVar3 == 0)) break;
    *puVar7 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = puVar7 + 2;
    uVar9 = uVar4;
  }
LAB_08048138:
  do {
    puVar8[-1] = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *puVar8 = uVar4;
    puVar8[-1] = 6;
    puVar8[-2] = 1;
    puVar8[-3] = 2;
    puVar8[-4] = 1;
    uVar4 = puVar8[-4];
    puVar8[-4] = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar8 = puVar8 + 1;
  } while (iVar3 < 0);
  return;
}



void FUN_0804813d(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 auStack20 [5];
  
  while( true ) {
    *(undefined4 *)((int)register0x00000010 + -4) = unaff_EBX;
    *(undefined4 *)((int)register0x00000010 + -8) = 6;
    *(undefined4 *)((int)register0x00000010 + -0xc) = 1;
    *(undefined4 *)((int)register0x00000010 + -0x10) = 2;
    *(undefined4 *)((int)register0x00000010 + -0x14) = 1;
    unaff_EBX = *(undefined4 *)((int)register0x00000010 + -0x14);
    *(undefined4 *)((int)register0x00000010 + -0x14) = 0x66;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) break;
    *(undefined4 *)((int)register0x00000010 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
  }
  return;
}



undefined8 __regparm3 FUN_08048157(undefined4 param_1)

{
  int iVar1;
  byte *unaff_ESI;
  
  iVar1 = 0;
  while( true ) {
    if (*unaff_ESI < 0x30) break;
    iVar1 = iVar1 * 10 + (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return CONCAT44(iVar1,param_1);
}


