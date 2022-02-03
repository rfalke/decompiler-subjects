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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined4 param_1,char *param_2,undefined4 param_3,undefined param_4,undefined4 param_5,
          undefined4 param_6,undefined param_7)

{
  code *pcVar1;
  int *extraout_ECX;
  char *pcVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  
  puVar3 = &param_1;
  if (2 < unaff_retaddr) {
    puVar3 = &param_3;
    if (*param_2 == '-') {
      if (param_2[1] == 'H') {
        s_pPT_MIPS_REGINFO_08049605[16] = s_pPT_MIPS_REGINFO_08049605[16] + '\x01';
      }
      if (param_2[1] == 'S') {
        s_pPT_MIPS_REGINFO_08049605[17] = s_pPT_MIPS_REGINFO_08049605[17] + '\x01';
      }
      if (param_2[1] == 'P') {
        s_pPT_MIPS_REGINFO_08049605[18] = s_pPT_MIPS_REGINFO_08049605[18] + '\x01';
      }
      if (param_2[1] == 'A') {
        s_pPT_MIPS_REGINFO_08049605[18] = s_pPT_MIPS_REGINFO_08049605[18] + '\x01';
        s_pPT_MIPS_REGINFO_08049605[17] = s_pPT_MIPS_REGINFO_08049605[17] + '\x01';
        s_pPT_MIPS_REGINFO_08049605[16] = s_pPT_MIPS_REGINFO_08049605[16] + '\x01';
      }
      param_2 = (char *)0x5;
      pcVar1 = (code *)swi(0x80);
      _DAT_08049618 = (*pcVar1)();
      param_3 = 3;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar5 = &param_5;
      if (*extraout_ECX == 0x464c457f) goto LAB_08048327;
      param_5 = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      param_6 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar4 = &stack0x00000020;
      goto LAB_08048320;
    }
  }
  *(undefined4 *)((int)puVar3 + -4) = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4 = (undefined *)((int)puVar3 + 4);
LAB_08048320:
  do {
    *(undefined4 *)(puVar4 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar5 = (undefined4 *)(puVar4 + 4);
LAB_08048327:
    *(undefined4 *)((int)puVar5 + -4) = 10;
    *(undefined4 *)((int)puVar5 + -4) = 1;
    *(undefined4 *)((int)puVar5 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar2 = *(char **)((int)puVar5 + 4);
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    *(undefined4 *)((int)puVar5 + 4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *(undefined4 *)((int)puVar5 + 8) = 1;
    *(undefined4 *)((int)puVar5 + 8) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    if (s_pPT_MIPS_REGINFO_08049605[16] != '\0') {
      *(undefined4 *)((int)puVar5 + 0xc) = 0x8048364;
      FUN_080487fb();
    }
    if (s_pPT_MIPS_REGINFO_08049605[17] != '\0') {
      *(undefined4 *)((int)puVar5 + 0xc) = 0x8048372;
      FUN_08048580();
    }
    if (s_pPT_MIPS_REGINFO_08049605[18] != '\0') {
      *(undefined4 *)((int)puVar5 + 0xc) = 0x8048380;
      FUN_0804838d();
    }
    *(undefined4 *)((int)puVar5 + 0xc) = 6;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar4 = (undefined *)((int)puVar5 + 0x14);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_0804838d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  uVar3 = (uint)DAT_08049877;
  if (DAT_08049877 == 0) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    return;
  }
  uVar2 = unaff_ESI;
  FUN_08048d11();
  _DAT_08049d23 = uVar2;
  FUN_08048d11(unaff_EDI,_DAT_08049d23,unaff_EBP,register0x00000010,unaff_EBX,param_2,param_3,uVar3)
  ;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  iVar4 = 0;
  puVar5 = (undefined4 *)&stack0x00000010;
  do {
    puVar5[-1] = iVar4;
    puVar5[-2] = 3;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *puVar5 = 0x804843a;
    FUN_08048445();
    iVar4 = extraout_ECX + 1;
    puVar5 = puVar5 + 1;
  } while ((ushort)iVar4 != DAT_08049877);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048445(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  int iVar2;
  int iVar3;
  undefined1 *unaff_ESI;
  undefined1 *puVar4;
  undefined4 unaff_retaddr;
  
  puVar4 = &DAT_080498c7;
  for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0x20;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0;
  while (DAT_080498a7 != *(int *)(s_pSHT_MIPS_UCODE_08049545 + iVar2 + 0x12)) {
    iVar2 = iVar2 + 0x13;
    if (iVar2 == 0xbe) goto LAB_08048486;
  }
  unaff_ESI = &DAT_0804955b + iVar2;
  puVar4 = &DAT_080498c9;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    puVar4 = puVar4 + 1;
  }
LAB_08048486:
  _DAT_080498d8 = 0x7830;
  FUN_08048d34();
  _DAT_080498e1 = 0x7830;
  FUN_08048d34();
  _DAT_080498ec = 0x7830;
  FUN_08048d34();
  _DAT_080498f7 = 0x7830;
  FUN_08048d34();
  _DAT_080498ff = 0x7830;
  FUN_08048d34();
  if ((DAT_080498bf & 4) != 0) {
    DAT_08049907 = 0x52;
  }
  if ((DAT_080498bf & 2) != 0) {
    DAT_08049908 = 0x57;
  }
  if ((DAT_080498bf & 1) != 0) {
    DAT_08049909 = 0x58;
  }
  _DAT_0804990b = 0x7830;
  FUN_08048d11(&DAT_08049909,unaff_ESI);
  DAT_08049917 = 10;
  pcVar1 = (code *)swi(0x80);
  _DAT_08049d23 = unaff_ESI;
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_08048580(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  uVar3 = (uint)DAT_0804987b;
  if (DAT_0804987b == 0) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    return;
  }
  uVar2 = unaff_ESI;
  FUN_08048d11();
  _DAT_08049d23 = uVar2;
  FUN_08048d11(unaff_EDI,_DAT_08049d23,unaff_EBP,register0x00000010,unaff_EBX,param_2,param_3,uVar3)
  ;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  iVar4 = 0;
  puVar5 = (undefined4 *)&stack0x00000020;
  do {
    puVar5[-1] = iVar4;
    puVar5[-2] = 3;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    *puVar5 = 0x804867e;
    FUN_08048689();
    iVar4 = extraout_ECX + 1;
    puVar5 = puVar5 + 1;
  } while ((ushort)iVar4 != DAT_0804987b);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048689(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 in_ECX;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_EBP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  undefined4 unaff_retaddr;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  bVar8 = 0;
  pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x123;
  if ((byte)in_ECX < 10) {
    pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x124;
  }
  FUN_08048d11(pcVar5);
  pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x126;
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pcVar5 = ' ';
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
  }
  pcVar5 = &DAT_08049918 + _DAT_0804987f;
  pcVar6 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x127;
  do {
    _DAT_08049d23 = pcVar5 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    *pcVar6 = cVar1;
    pcVar5 = _DAT_08049d23;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7[-1] = ' ';
  iVar3 = 0;
  while (DAT_08049883 != *(int *)(s_EM_S390__interim_value____bytes_i_08049082 + iVar3 + 0x331)) {
    iVar3 = iVar3 + 0x15;
    if (iVar3 == 0x1a4) goto LAB_08048705;
  }
  _DAT_08049d23 = &DAT_080493b7 + iVar3;
  pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x139;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pcVar5 = *_DAT_08049d23;
    _DAT_08049d23 = _DAT_08049d23 + (uint)bVar8 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
  }
LAB_08048705:
  FUN_08048d34();
  FUN_08048d34();
  FUN_08048d34();
  pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x160;
  if ((byte)DAT_080498a3 < 0x10) {
    s_0x__Unknown_or_invalid_file_clas_08049619[352] = '0';
    pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x161;
  }
  uVar9 = 6;
  pcVar6 = _DAT_08049d23;
  uVar10 = extraout_EDX;
  uVar11 = extraout_ECX;
  FUN_08048d11(pcVar5,_DAT_08049d23,unaff_EBP,&stack0xffffffe0,6,extraout_EDX,extraout_ECX,
               DAT_080498a3);
  if ((DAT_08049887 & 1) != 0) {
    s_0x__Unknown_or_invalid_file_clas_08049619[355] = 'W';
  }
  if ((DAT_08049887 & 2) != 0) {
    s_0x__Unknown_or_invalid_file_clas_08049619[356] = 'A';
  }
  if ((DAT_08049887 & 4) != 0) {
    s_0x__Unknown_or_invalid_file_clas_08049619[357] = 'X';
  }
  pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x167;
  if ((byte)DAT_08049897 < 10) {
    pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x168;
  }
  pcVar7 = pcVar6;
  FUN_08048d11(pcVar5,pcVar6,unaff_EBP,&stack0xffffffe0,uVar9,uVar10,uVar11,DAT_08049897);
  pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x16b;
  if ((byte)DAT_0804989b < 0x10) {
    pcVar5 = s_0x__Unknown_or_invalid_file_clas_08049619 + 0x16c;
  }
  _DAT_08049d23 = pcVar6;
  pcVar6 = pcVar7;
  uVar12 = DAT_0804989b;
  FUN_08048d11(pcVar5,pcVar7,unaff_EBP,&stack0xffffffe0,uVar9,uVar10,uVar11,DAT_0804989b);
  _DAT_08049d23 = pcVar7;
  FUN_08048d11(pcVar5,pcVar6,unaff_EBP,&stack0xffffffe0,uVar9,uVar10,uVar11,uVar12);
  pcVar2 = (code *)swi(0x80);
  _DAT_08049d23 = pcVar6;
  (*pcVar2)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_080487fb(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int aiStack64 [8];
  uint auStack12 [3];
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  iVar5 = 0;
  uVar3 = extraout_ECX;
  uVar6 = extraout_EDX;
  puVar2 = (undefined4 *)&stack0xffffffe4;
  do {
    puVar4 = puVar2;
    puVar8 = &DAT_08049d18;
    if ((byte)s_0x__Unknown_or_invalid_file_clas_08049619[iVar5 + 0x232] < 10) {
      DAT_08049d18 = 0x30;
      puVar8 = &DAT_08049d19;
    }
    puVar4[-1] = (uint)(byte)s_0x__Unknown_or_invalid_file_clas_08049619[iVar5 + 0x232];
    puVar4[-2] = uVar3;
    puVar4[-3] = uVar6;
    puVar4[-4] = unaff_EBX;
    puVar4[-5] = puVar4;
    puVar4[-6] = iVar5;
    puVar4[-7] = unaff_ESI;
    puVar4[-8] = puVar8;
    puVar4[-9] = 0x804883d;
    FUN_08048d11();
    uVar9 = puVar4[-8];
    uVar7 = puVar4[-7];
    iVar5 = puVar4[-6];
    unaff_EBX = puVar4[-4];
    DAT_08049d1a = 0x20;
    puVar4[-1] = 4;
    pcVar1 = (code *)swi(0x80);
    _DAT_08049d23 = unaff_ESI;
    (*pcVar1)();
    iVar5 = iVar5 + 1;
    uVar3 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
    puVar2 = puVar4 + 1;
    unaff_ESI = uVar7;
  } while (iVar5 != 0x10);
  uVar6 = puVar4[1];
  puVar4[1] = 1;
  puVar4[1] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[2] = 0x25;
  puVar4[2] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  uVar3 = uVar7;
  if ((DAT_0804984f != 1) && (DAT_0804984f != 2)) {
    puVar4[3] = (uint)DAT_0804984f;
    puVar4[2] = extraout_ECX_01;
    puVar4[1] = extraout_EDX_01;
    *puVar4 = unaff_EBX;
    puVar4[-1] = puVar4 + 4;
    puVar4[-2] = uVar6;
    puVar4[-3] = uVar7;
    puVar4[-4] = uVar9;
    puVar4[-5] = 0x804889a;
    FUN_08048d11();
    uVar9 = puVar4[-4];
    uVar6 = puVar4[-2];
    unaff_EBX = *puVar4;
    uVar3 = puVar4[-3];
    _DAT_08049d23 = uVar7;
  }
  puVar4[3] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[4] = 0x25;
  puVar4[4] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  uVar7 = uVar3;
  if ((DAT_08049850 != 1) && (DAT_08049850 != 2)) {
    puVar4[5] = (uint)DAT_08049850;
    puVar4[4] = extraout_ECX_02;
    puVar4[3] = extraout_EDX_02;
    puVar4[2] = unaff_EBX;
    puVar4[1] = puVar4 + 6;
    *puVar4 = uVar6;
    puVar4[-1] = uVar3;
    puVar4[-2] = uVar9;
    puVar4[-3] = 0x80488f4;
    FUN_08048d11();
    uVar9 = puVar4[-2];
    uVar6 = *puVar4;
    unaff_EBX = puVar4[2];
    uVar7 = puVar4[-1];
    _DAT_08049d23 = uVar3;
  }
  puVar4[5] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[6] = 0x25;
  puVar4[6] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[7] = uVar6;
  iVar5 = 0;
  do {
    uVar3 = uVar7;
    if (DAT_0804985b == *(ushort *)((int)&DAT_08048d79 + iVar5)) goto LAB_080489ac;
    iVar5 = iVar5 + 0x21;
  } while (iVar5 != 0xe7);
  if (DAT_0804985b < 0xff00) {
    puVar4[6] = (uint)DAT_0804985b;
    puVar4[5] = extraout_ECX_03;
    puVar4[4] = extraout_EDX_03;
    puVar4[3] = unaff_EBX;
    puVar4[2] = puVar4 + 7;
    puVar4[1] = 0xe7;
    *puVar4 = uVar7;
    puVar4[-1] = uVar9;
    puVar4[-2] = 0x804899b;
    FUN_08048d11();
    uVar9 = puVar4[-1];
    unaff_EBX = puVar4[3];
    uVar3 = *puVar4;
    _DAT_08049d23 = uVar7;
  }
  else {
    puVar4[6] = (uint)DAT_0804985b;
    puVar4[5] = extraout_ECX_03;
    puVar4[4] = extraout_EDX_03;
    puVar4[3] = unaff_EBX;
    puVar4[2] = puVar4 + 7;
    puVar4[1] = 0xe7;
    *puVar4 = uVar7;
    puVar4[-1] = uVar9;
    puVar4[-2] = 0x8048978;
    FUN_08048d11();
    uVar9 = puVar4[-1];
    unaff_EBX = puVar4[3];
    uVar3 = *puVar4;
    _DAT_08049d23 = uVar7;
  }
LAB_080489ac:
  uVar6 = puVar4[7];
  puVar4[7] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[8] = 0x25;
  puVar4[8] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[9] = uVar6;
  iVar5 = 0;
  do {
    uVar6 = uVar3;
    if (DAT_0804985d == *(ushort *)(s_ET_HIPROC__Processor_specific__08048e41 + iVar5 + 0x1f))
    goto LAB_08048a0d;
    iVar5 = iVar5 + 0x20;
  } while (iVar5 != 0x240);
  puVar4[8] = (uint)DAT_0804985d;
  puVar4[7] = extraout_ECX_04;
  puVar4[6] = extraout_EDX_04;
  puVar4[5] = unaff_EBX;
  puVar4[4] = puVar4 + 9;
  puVar4[3] = 0x240;
  puVar4[2] = uVar3;
  puVar4[1] = uVar9;
  *puVar4 = 0x80489fc;
  FUN_08048d11();
  uVar9 = puVar4[1];
  unaff_EBX = puVar4[5];
  uVar6 = puVar4[2];
  _DAT_08049d23 = uVar3;
LAB_08048a0d:
  uVar7 = puVar4[9];
  puVar4[9] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[10] = 0x25;
  puVar4[10] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  uVar3 = uVar6;
  if ((DAT_0804985f != 0) && (DAT_0804985f != 1)) {
    puVar4[0xb] = DAT_0804985f;
    puVar4[10] = extraout_ECX_05;
    puVar4[9] = extraout_EDX_05;
    puVar4[8] = unaff_EBX;
    puVar4[7] = puVar4 + 0xc;
    puVar4[6] = uVar7;
    puVar4[5] = uVar6;
    puVar4[4] = uVar9;
    puVar4[3] = 0x8048a3f;
    FUN_08048d11();
    uVar9 = puVar4[4];
    uVar7 = puVar4[6];
    unaff_EBX = puVar4[8];
    uVar3 = puVar4[5];
    _DAT_08049d23 = uVar6;
  }
  puVar4[0xb] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0xc] = 0x25;
  puVar4[0xc] = 4;
  pcVar1 = (code *)swi(0x80);
  uVar11 = (*pcVar1)();
  puVar4[0xd] = (int)uVar11;
  puVar4[0xc] = extraout_ECX_06;
  puVar4[0xb] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[10] = unaff_EBX;
  puVar4[9] = puVar4 + 0xe;
  puVar4[8] = uVar7;
  puVar4[7] = uVar3;
  puVar4[6] = uVar9;
  puVar4[5] = 0x8048a8f;
  FUN_08048d11();
  uVar10 = puVar4[6];
  uVar9 = puVar4[7];
  uVar7 = puVar4[8];
  uVar6 = puVar4[10];
  puVar4[0xd] = 0xd;
  puVar4[0xd] = 4;
  pcVar1 = (code *)swi(0x80);
  _DAT_08049d23 = uVar3;
  (*pcVar1)();
  puVar4[0xe] = 0x25;
  puVar4[0xe] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0xf] = 0x8048ab5;
  uVar11 = FUN_08048d00();
  puVar4[0xf] = (int)uVar11;
  puVar4[0xe] = extraout_ECX_07;
  puVar4[0xd] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0xc] = uVar6;
  puVar4[0xb] = puVar4 + 0x10;
  puVar4[10] = uVar7;
  puVar4[9] = uVar9;
  puVar4[8] = uVar10;
  puVar4[7] = 0x8048aca;
  FUN_08048d11();
  uVar10 = puVar4[8];
  uVar7 = puVar4[9];
  uVar6 = puVar4[10];
  uVar3 = puVar4[0xc];
  puVar4[0xf] = 0x8048ad6;
  _DAT_08049d23 = uVar9;
  FUN_08048cc6();
  puVar4[0xf] = 0x25;
  puVar4[0xf] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x10] = 0x8048ae8;
  uVar11 = FUN_08048d00();
  puVar4[0x10] = (int)uVar11;
  puVar4[0xf] = extraout_ECX_08;
  puVar4[0xe] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0xd] = uVar3;
  puVar4[0xc] = puVar4 + 0x11;
  puVar4[0xb] = uVar6;
  puVar4[10] = uVar7;
  puVar4[9] = uVar10;
  puVar4[8] = 0x8048afd;
  FUN_08048d11();
  uVar10 = puVar4[9];
  uVar9 = puVar4[10];
  uVar6 = puVar4[0xb];
  uVar3 = puVar4[0xd];
  puVar4[0x10] = 0x8048b09;
  _DAT_08049d23 = uVar7;
  FUN_08048cc6();
  puVar4[0x10] = 0x27;
  puVar4[0x10] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x11] = 0x8048b1b;
  uVar11 = FUN_08048d00();
  puVar4[0x11] = (int)uVar11;
  puVar4[0x10] = extraout_ECX_09;
  puVar4[0xf] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0xe] = uVar3;
  puVar4[0xd] = puVar4 + 0x12;
  puVar4[0xc] = uVar6;
  puVar4[0xb] = uVar9;
  puVar4[10] = uVar10;
  puVar4[9] = 0x8048b30;
  FUN_08048d11();
  uVar10 = puVar4[10];
  uVar7 = puVar4[0xb];
  uVar6 = puVar4[0xc];
  uVar3 = puVar4[0xe];
  ram0x08049d24 = (undefined3)((uint)uVar9 >> 8);
  _DAT_08049d23 = CONCAT31(ram0x08049d24,10);
  puVar4[0x11] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x12] = 0x25;
  puVar4[0x12] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x13] = 0x8048b67;
  uVar11 = FUN_08048d00();
  puVar4[0x13] = (int)uVar11;
  puVar4[0x12] = extraout_ECX_10;
  puVar4[0x11] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0x10] = uVar3;
  puVar4[0xf] = puVar4 + 0x14;
  puVar4[0xe] = uVar6;
  puVar4[0xd] = uVar7;
  puVar4[0xc] = uVar10;
  puVar4[0xb] = 0x8048b77;
  FUN_08048d11();
  uVar10 = puVar4[0xc];
  uVar9 = puVar4[0xd];
  uVar6 = puVar4[0xe];
  uVar3 = puVar4[0x10];
  puVar4[0x13] = 0x8048b83;
  _DAT_08049d23 = uVar7;
  FUN_08048ce3();
  puVar4[0x13] = 0x25;
  puVar4[0x13] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x14] = 0x8048b9d;
  uVar11 = FUN_08048d00();
  puVar4[0x14] = (int)uVar11;
  puVar4[0x13] = extraout_ECX_11;
  puVar4[0x12] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0x11] = uVar3;
  puVar4[0x10] = puVar4 + 0x15;
  puVar4[0xf] = uVar6;
  puVar4[0xe] = uVar9;
  puVar4[0xd] = uVar10;
  puVar4[0xc] = 0x8048bad;
  FUN_08048d11();
  uVar10 = puVar4[0xd];
  uVar7 = puVar4[0xe];
  uVar6 = puVar4[0xf];
  uVar3 = puVar4[0x11];
  puVar4[0x14] = 0x8048bb9;
  _DAT_08049d23 = uVar9;
  FUN_08048ce3();
  puVar4[0x14] = 0x25;
  puVar4[0x14] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x15] = 0x8048bd3;
  uVar11 = FUN_08048d00();
  puVar4[0x15] = (int)uVar11;
  puVar4[0x14] = extraout_ECX_12;
  puVar4[0x13] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0x12] = uVar3;
  puVar4[0x11] = puVar4 + 0x16;
  puVar4[0x10] = uVar6;
  puVar4[0xf] = uVar7;
  puVar4[0xe] = uVar10;
  puVar4[0xd] = 0x8048be3;
  FUN_08048d11();
  uVar10 = puVar4[0xe];
  uVar9 = puVar4[0xf];
  uVar6 = puVar4[0x10];
  uVar3 = puVar4[0x12];
  ram0x08049d24 = (undefined3)((uint)uVar7 >> 8);
  _DAT_08049d23 = CONCAT31(ram0x08049d24,10);
  puVar4[0x15] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x16] = 0x25;
  puVar4[0x16] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x17] = 0x8048c1a;
  uVar11 = FUN_08048d00();
  puVar4[0x17] = (int)uVar11;
  puVar4[0x16] = extraout_ECX_13;
  puVar4[0x15] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0x14] = uVar3;
  puVar4[0x13] = puVar4 + 0x18;
  puVar4[0x12] = uVar6;
  puVar4[0x11] = uVar9;
  puVar4[0x10] = uVar10;
  puVar4[0xf] = 0x8048c2a;
  FUN_08048d11();
  uVar10 = puVar4[0x10];
  uVar7 = puVar4[0x11];
  uVar6 = puVar4[0x12];
  uVar3 = puVar4[0x14];
  puVar4[0x17] = 0x8048c36;
  _DAT_08049d23 = uVar9;
  FUN_08048ce3();
  puVar4[0x17] = 0x25;
  puVar4[0x17] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x18] = 0x8048c50;
  uVar11 = FUN_08048d00();
  puVar4[0x18] = (int)uVar11;
  puVar4[0x17] = extraout_ECX_14;
  puVar4[0x16] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0x15] = uVar3;
  puVar4[0x14] = puVar4 + 0x19;
  puVar4[0x13] = uVar6;
  puVar4[0x12] = uVar7;
  puVar4[0x11] = uVar10;
  puVar4[0x10] = 0x8048c60;
  FUN_08048d11();
  uVar10 = puVar4[0x11];
  uVar9 = puVar4[0x12];
  uVar6 = puVar4[0x13];
  uVar3 = puVar4[0x15];
  ram0x08049d24 = (undefined3)((uint)uVar7 >> 8);
  _DAT_08049d23 = CONCAT31(ram0x08049d24,10);
  puVar4[0x18] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x19] = 0x25;
  puVar4[0x19] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar4[0x1a] = 0x8048c97;
  uVar11 = FUN_08048d00();
  puVar4[0x1a] = (int)uVar11;
  puVar4[0x19] = extraout_ECX_15;
  puVar4[0x18] = (int)((ulonglong)uVar11 >> 0x20);
  puVar4[0x17] = uVar3;
  puVar4[0x16] = puVar4 + 0x1b;
  puVar4[0x15] = uVar6;
  puVar4[0x14] = uVar9;
  puVar4[0x13] = uVar10;
  puVar4[0x12] = 0x8048ca7;
  FUN_08048d11();
  ram0x08049d24 = (undefined3)((uint)uVar9 >> 8);
  _DAT_08049d23 = CONCAT31(ram0x08049d24,10);
  puVar4[0x1a] = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(puVar4[0x21],puVar4[0x23]);
}



void FUN_08048cc6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_08048ce3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



undefined8 __regparm3 FUN_08048d00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_08049d18;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



void __regparm3 FUN_08048d11(uint param_1,undefined4 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined *unaff_EDI;
  
  iVar5 = 0;
  puVar6 = (undefined *)register0x00000010;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_3;
    bVar3 = (byte)(uVar1 % (ulonglong)param_3);
    if (bVar3 < 10) {
      cVar4 = bVar3 + 0x30;
    }
    else {
      cVar4 = bVar3 + 0x37;
    }
    puVar7 = (undefined4 *)(puVar6 + -4);
    *(uint *)(puVar6 + -4) = CONCAT31((int3)(uVar1 % (ulonglong)param_3 >> 8),cVar4);
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + -4;
  } while (param_1 != 0);
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    *unaff_EDI = (char)uVar2;
    iVar5 = iVar5 + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar5 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_08048d34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined *unaff_EDI;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  bVar3 = 0;
  iVar4 = unaff_ESI;
  uVar5 = param_2;
  uVar6 = param_1;
  FUN_08048d11();
  DAT_08049d23 = (byte)unaff_ESI;
  _DAT_08049d23 = unaff_ESI;
  if (DAT_08049d23 < 8) {
    unaff_EBX = unaff_EBX - unaff_ESI;
    puVar1 = unaff_EDI;
    for (iVar2 = unaff_EBX; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0x30;
      puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
    }
    FUN_08048d11(unaff_EDI + unaff_EBX,iVar4,unaff_EBP,&stack0xffffffe0,param_3,uVar5,unaff_EBX,
                 uVar6);
    _DAT_08049d23 = iVar4;
  }
  return CONCAT44(param_2,param_1);
}


