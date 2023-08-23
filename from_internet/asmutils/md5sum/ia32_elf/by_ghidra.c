typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

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




void processEntry entry(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar4;
  uint uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char **ppcVar10;
  int iVar11;
  undefined *in_ESI;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte bVar16;
  undefined8 uVar17;
  
  bVar16 = 0;
  FUN_080482b3();
  iVar13 = 0;
  iVar11 = 0;
  ppcVar10 = (char **)&stack0x00000008;
  puVar8 = (undefined4 *)&stack0x00000008;
  if (param_2 == 1) goto LAB_0804807c;
  do {
    while( true ) {
      pcVar6 = *ppcVar10;
      ppcVar7 = ppcVar10 + 1;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x0;
        *ppcVar10 = (char *)0x1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        ppcVar7 = ppcVar10 + 2;
      }
      *(undefined4 *)((int)ppcVar7 + -4) = 5;
      pcVar1 = (code *)swi(0x80);
      DAT_0804a50f = pcVar6;
      iVar11 = (*pcVar1)();
      puVar8 = (undefined4 *)((int)ppcVar7 + 4);
      puVar14 = ppcVar7;
      if (-1 < iVar11) break;
LAB_08048079:
      ppcVar10 = (char **)((int)puVar14 + 4);
      iVar13 = iVar13 + 1;
    }
LAB_0804807c:
    while( true ) {
      puVar8[-1] = 3;
      pcVar1 = (code *)swi(0x80);
      uVar17 = (*pcVar1)();
      puVar14 = puVar8;
      if ((int)uVar17 < 0) goto LAB_08048079;
      if ((int)uVar17 == 0) break;
      in_ESI = &DAT_080484db;
      *puVar8 = 0x804809e;
      FUN_080483b8();
      puVar8 = puVar8 + 1;
    }
    *puVar8 = 0;
    puVar8[-1] = extraout_ECX;
    puVar8[-2] = (int)((ulonglong)uVar17 >> 0x20);
    puVar8[-3] = iVar11;
    puVar8[-4] = puVar8 + 1;
    puVar8[-5] = iVar11;
    puVar8[-6] = in_ESI;
    puVar8[-7] = iVar13;
    puVar8[-8] = 0x80480ab;
    FUN_0804841f();
    puVar8[-8] = 0x10;
    iVar11 = puVar8[-8];
    puVar14 = (undefined4 *)&DAT_0804a4eb;
    pbVar12 = &DAT_0804a4db;
    do {
      bVar4 = *pbVar12;
      puVar8[-8] = 2;
      iVar5 = puVar8[-8];
      iVar13 = (uint)bVar4 << 8;
      puVar15 = puVar14;
      do {
        bVar4 = (byte)((uint)iVar13 >> 8);
        bVar4 = bVar4 << 4 | bVar4 >> 4;
        uVar3 = CONCAT11(bVar4,bVar4) & 0xffffff0f;
        cVar2 = (char)uVar3;
        bVar4 = cVar2 + 0x30;
        if (0x39 < bVar4) {
          bVar4 = cVar2 + 0x57;
        }
        iVar13 = CONCAT31((int3)(uVar3 >> 8),bVar4);
        puVar14 = (undefined4 *)((int)puVar15 + (uint)bVar16 * -2 + 1);
        *(byte *)puVar15 = bVar4;
        iVar5 = iVar5 + -1;
        puVar15 = puVar14;
      } while (iVar5 != 0);
      iVar11 = iVar11 + -1;
      pbVar12 = pbVar12 + (uint)bVar16 * -2 + 1;
    } while (iVar11 != 0);
    *puVar14 = 0xa2d2020;
    puVar8[-8] = 0x22;
    puVar8[-8] = 1;
    puVar8[-8] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar9 = puVar8 + -6;
    puVar8[-7] = 0x80480e9;
    FUN_080482b3();
    puVar8[-7] = 2;
    if (DAT_0804a50f != (char *)0x0) {
      puVar8[-7] = extraout_ECX_00 + 0x22;
      puVar8[-8] = DAT_0804a50f;
      pcVar6 = DAT_0804a50f;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar16 * -2 + 1;
      } while (cVar2 != '\0');
      puVar8[-8] = 1;
      puVar8[-8] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar9 = puVar8 + -5;
    }
    *(undefined4 *)((int)puVar9 + -4) = 1;
    *(undefined4 *)((int)puVar9 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    iVar13 = *(int *)((int)puVar9 + 4);
    in_ESI = *(undefined **)((int)puVar9 + 8);
    ppcVar10 = (char **)((int)puVar9 + 0x24);
  } while( true );
}



undefined8 __regparm3 FUN_080482b3(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_08048483 = 0x67452301;
  DAT_08048487 = 0xefcdab89;
  DAT_0804848b = 0x98badcfe;
  DAT_0804848f = 0x10325476;
  DAT_08048493 = 0;
  DAT_08048497 = 0;
  puVar2 = &DAT_0804849b;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



int __regparm3 FUN_080482e2(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint unaff_EBX;
  int *unaff_ESI;
  int unaff_EDI;
  
  uVar2 = param_1 + (param_3 & unaff_EBX | param_2 & ~unaff_EBX) + *unaff_ESI +
                    *(int *)(unaff_EDI + (uint)*(byte *)(unaff_ESI + 1) * 4);
  bVar1 = *(byte *)((int)unaff_ESI + 5) & 0x1f;
  return (uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) + unaff_EBX;
}



undefined8 __regparm3 FUN_0804831c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code **ppcVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar7 = 4;
  ppcVar9 = (code **)&PTR_FUN_08048123;
  do {
    uVar1 = (uint)bVar10;
    pcVar2 = *ppcVar9;
    iVar8 = 4;
    do {
      iVar3 = (*pcVar2)();
      iVar4 = (*pcVar2)();
      iVar5 = (*pcVar2)();
      iVar6 = (*pcVar2)();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar7 = iVar7 + -1;
    ppcVar9 = ppcVar9 + uVar1 * -2 + 1;
  } while (iVar7 != 0);
  DAT_08048483 = DAT_08048483 + iVar3;
  DAT_08048487 = DAT_08048487 + iVar6;
  DAT_0804848b = DAT_0804848b + iVar5;
  DAT_0804848f = DAT_0804848f + iVar4;
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080483b8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  byte bVar5;
  
  uVar1 = DAT_08048493 + param_3 * 8;
  if (uVar1 < DAT_08048493) {
    DAT_08048497 = DAT_08048497 + 1;
  }
  DAT_08048497 = DAT_08048497 + (param_3 >> 0x1d);
  bVar5 = 0;
  uVar3 = DAT_08048493 >> 3 & 0x3f;
  DAT_08048493 = uVar1;
  if (uVar3 != 0) {
    puVar4 = (undefined4 *)((int)&DAT_0804849b + uVar3);
    iVar2 = 0x40 - uVar3;
    if ((int)param_3 < iVar2) goto LAB_0804841b;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined *)puVar4 = *(undefined *)unaff_ESI;
      unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_0804831c();
    param_3 = param_3 - extraout_EDX;
  }
  for (; puVar4 = &DAT_0804849b, 0x3f < (int)param_3; param_3 = param_3 - 0x40) {
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *unaff_ESI;
      unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_0804831c();
  }
LAB_0804841b:
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined *)puVar4 = *(undefined *)unaff_ESI;
    unaff_ESI = (undefined4 *)((int)unaff_ESI + (uint)bVar5 * -2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar5 * -2 + 1);
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_0804841f(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  undefined *puVar6;
  byte bVar7;
  
  uVar4 = DAT_08048493 >> 3 & 0x3f;
  *(undefined *)((int)&DAT_0804849b + uVar4) = 0x80;
  uVar1 = -uVar4 + 0x3f;
  puVar6 = (undefined *)((int)&DAT_0804849b + uVar4 + 1);
  bVar7 = 0;
  if (uVar1 < 8) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uVar2 = FUN_0804831c();
    puVar5 = &DAT_0804849b;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = uVar2;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    for (iVar3 = -uVar4 + 0x37; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  uVar1 = (uint)bVar7;
  DAT_080484d3 = DAT_08048493;
  uVar4 = (uint)bVar7;
  DAT_080484d7 = (&DAT_08048497)[uVar1 * -2];
  FUN_0804831c();
  puVar5 = &DAT_08048497 + uVar1 * -2 + uVar4 * -2 + -5;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_EDI = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar7 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


