typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned short    undefined2;
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




undefined4 processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 unaff_retaddr;
  undefined2 *puVar11;
  ushort *puVar12;
  uint *puVar13;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  undefined8 uVar17;
  
  if (param_2 == 3) {
    param_4 = 0x8048165;
    FUN_080482ec();
    puVar10 = (undefined4 *)&stack0x00000010;
    param_5 = 0x804816e;
    FUN_080482ec();
    lVar4 = (ulonglong)(extraout_EDX_00 - 0x7b2) * 0x1e13380;
    DAT_08048301 = (CONCAT22((short)((ulonglong)lVar4 >> 0x30),
                             *(undefined2 *)(extraout_EDX * 2 + 0x804804a)) + 0x14) * 0x15180 +
                   (int)lVar4;
  }
  else {
    puVar10 = &param_4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
  }
  uVar2 = (ulonglong)(DAT_08048301 - 18000) / 0x15180;
  puVar10[-1] = 7;
  DAT_08048321 = ((int)uVar2 + 4U) % (uint)puVar10[-1];
  iVar5 = (int)(uVar2 / 0x16d);
  DAT_0804831d = iVar5 + 0x7b2;
  uVar6 = iVar5 + 2;
  puVar10[-1] = 4;
  iVar5 = (int)(uVar2 % 0x16d) - uVar6 / (uint)puVar10[-1];
  puVar11 = &DAT_0804804c;
  if (uVar6 % (uint)puVar10[-1] == 0) {
    iVar5 = iVar5 + 1;
    puVar11 = &DAT_08048066;
    DAT_08048335 = 1;
  }
  puVar10[-1] = 0xc;
  iVar8 = puVar10[-1];
  puVar12 = puVar11 + 0xb;
  do {
    uVar1 = *puVar12;
    DAT_080480b6 = (uint)uVar1;
    if ((short)uVar1 < (short)iVar5) break;
    iVar8 = iVar8 + -1;
    puVar12 = puVar12 + -1;
  } while (iVar8 != 0);
  bVar16 = 0;
  DAT_08048319 = iVar8 + -1;
  DAT_08048315 = CONCAT22((short)((uint)iVar5 >> 0x10),(short)iVar5 - uVar1) + 1;
  puVar13 = &DAT_08048080;
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    DAT_080480b6 = *puVar13;
    puVar13 = puVar13 + 1;
  }
  puVar10[-1] = 3;
  puVar10[-1] = 0x8048252;
  FUN_080482d0();
  puVar10[-1] = 7;
  iVar5 = DAT_08048321 - (DAT_08048315 % (uint)puVar10[-1] - 1);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  iVar5 = iVar5 + 1;
  pcVar14 = (char *)0x80480d8;
  do {
    pcVar14 = pcVar14 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar11 = &DAT_0804804c;
  if (DAT_08048335 == 1) {
    puVar11 = &DAT_08048066;
  }
  puVar11 = puVar11 + (uint)bVar16 * -2 + 1;
  iVar5 = DAT_08048319 + 1;
  do {
    puVar11 = puVar11 + (uint)bVar16 * -2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar10[-1] = 1;
  do {
    puVar10[-1] = 0x80482b2;
    FUN_080482d0();
    pcVar14 = pcVar14 + 3;
  } while (extraout_ECX != 1);
  puVar10[-1] = 1;
  puVar10[-1] = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  *puVar10 = 1;
  pcVar3 = (code *)swi(0x80);
  uVar17 = (*pcVar3)();
  puVar10[1] = (uint)uVar17;
  *puVar10 = extraout_ECX_00;
  puVar10[-1] = (int)((ulonglong)uVar17 >> 0x20);
  puVar10[-2] = 0;
  puVar10[-3] = puVar10 + 2;
  puVar10[-4] = unaff_retaddr;
  puVar10[-5] = puVar11;
  puVar10[-6] = pcVar14;
  iVar5 = 0;
  puVar10[-7] = 10;
  uVar9 = puVar10[-7];
  uVar6 = (uint)uVar17;
  do {
    uVar2 = (ulonglong)uVar6 / (ulonglong)uVar9;
    uVar7 = (uint)uVar2;
    pcVar15 = pcVar14 + -1;
    *pcVar14 = (char)(uVar6 % uVar9) + '0';
    iVar5 = iVar5 + -1;
    uVar6 = uVar7;
    pcVar14 = pcVar15;
  } while (iVar5 != 0);
  if (uVar7 != 0) {
    *pcVar15 = (char)uVar2 + '0';
  }
  return puVar10[1];
}



undefined8 __regparm3 FUN_080482d0(uint param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  char *unaff_EDI;
  char *pcVar4;
  
  uVar2 = param_1;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar3 = (uint)(uVar1 / 10);
    pcVar4 = unaff_EDI + -1;
    *unaff_EDI = (char)(uVar2 % 10) + '0';
    unaff_EBX = unaff_EBX + -1;
    uVar2 = uVar3;
    unaff_EDI = pcVar4;
  } while (unaff_EBX != 0);
  if (uVar3 != 0) {
    *pcVar4 = (char)(uVar1 / 10) + '0';
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080482ec(undefined4 param_1)

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


