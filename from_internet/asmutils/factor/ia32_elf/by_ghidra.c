typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void FUN_0804804c(void)

{
  int *unaff_EDI;
  longdouble in_ST0;
  longdouble lVar1;
  longdouble extraout_ST1;
  
  lVar1 = (longdouble)*unaff_EDI;
  while (ROUND(in_ST0 / lVar1) == in_ST0 / lVar1) {
    lVar1 = (longdouble)FUN_0804814f();
    in_ST0 = extraout_ST1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_08048068(void)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_ESI;
  uint uVar8;
  longlong *unaff_EDI;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  
  lVar9 = (longdouble)_DAT_080481fd;
  lVar10 = (longdouble)0;
  while( true ) {
    bVar4 = *unaff_ESI;
    if (bVar4 == 0) break;
    uVar7 = (uint)(byte)(bVar4 - 0x30);
    if ((bVar4 < 0x30) || (9 < (byte)(bVar4 - 0x30))) goto LAB_08048089;
    *(uint *)((int)unaff_EDI + 0xc) = uVar7;
    lVar10 = lVar10 * lVar9 + (longdouble)*(uint *)((int)unaff_EDI + 0xc);
    unaff_ESI = unaff_ESI + 1;
  }
  *(longdouble *)((int)unaff_EDI + 0xc) = lVar10;
  uVar7 = *(uint *)((int)unaff_EDI + 0x14);
  if (0x403e < (short)uVar7) {
LAB_08048089:
    return CONCAT31((int3)(uVar7 >> 8),1);
  }
  lVar10 = (longdouble)FUN_08048151();
  if ((byte)((longdouble)1 < lVar10 |
            (byte)((ushort)((ushort)((longdouble)1 == lVar10) << 0xe) >> 8)) == 1) {
    *(uint *)unaff_EDI = 2;
    FUN_0804804c();
    *(uint *)unaff_EDI = *(uint *)unaff_EDI + 1;
    FUN_0804804c();
    *(undefined *)unaff_EDI = 5;
    lVar10 = (longdouble)FUN_0804804c();
    if ((longdouble)1 == lVar10) goto LAB_08048118;
    *(undefined *)unaff_EDI = 7;
    uVar7 = 0x42424626;
    lVar9 = lVar10 / (longdouble)*unaff_EDI;
    while( true ) {
      lVar11 = lVar9;
      uVar8 = *(uint *)unaff_EDI;
      uVar6 = uVar7 >> 0x1c;
      uVar7 = uVar7 << 4 | uVar6;
      uVar3 = *(uint *)unaff_EDI;
      *(uint *)unaff_EDI = *(uint *)unaff_EDI + uVar6;
      if (CARRY4(uVar3,uVar6)) break;
      while( true ) {
        *(longdouble *)((int)unaff_EDI + 0xc) = lVar11;
        iVar5 = 0x401e - *(uint *)((int)unaff_EDI + 0x14);
        if ((-1 < iVar5) && (*(uint *)(unaff_EDI + 2) >> ((byte)iVar5 & 0x1f) < uVar8))
        goto LAB_0804810f;
        bVar4 = -(byte)iVar5;
        uVar3 = *(uint *)((int)unaff_EDI + 0xc);
        uVar6 = *(uint *)(unaff_EDI + 2);
        if (iVar5 < 1) {
          uVar3 = 0;
          uVar6 = *(uint *)((int)unaff_EDI + 0xc);
        }
        bVar2 = bVar4 & 0x1f;
        lVar9 = lVar10 / (longdouble)*unaff_EDI;
        if ((uVar3 << (bVar4 & 0x1f) | uVar6 << bVar2 | uVar3 >> 0x20 - bVar2) != 0) break;
        if (*(uint *)unaff_EDI != uVar8) {
          uVar7 = uVar7 >> 4 | uVar7 << 0x1c;
          *(uint *)unaff_EDI = uVar8;
        }
        ffree(lVar10);
        lVar10 = lVar11;
        lVar11 = (longdouble)FUN_0804814f();
        lVar11 = lVar10 / lVar11;
        uVar8 = *(uint *)unaff_EDI;
      }
    }
  }
LAB_0804810f:
  FUN_0804814f();
LAB_08048118:
  pcVar1 = (code *)swi(0x80);
  iVar5 = (*pcVar1)();
  return iVar5 + -1;
}



// WARNING: Removing unreachable block (ram,0x08048185)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0804814f(void)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int unaff_EDI;
  longdouble in_ST0;
  longdouble lVar4;
  longdouble lVar5;
  
  lVar4 = (longdouble)_DAT_080481fd;
  pcVar3 = (char *)(unaff_EDI + 0x37);
  do {
    lVar5 = in_ST0 - (in_ST0 / lVar4) * lVar4;
    *(int *)(unaff_EDI + 0x38) = (int)ROUND(lVar5);
    lVar5 = in_ST0 - lVar5;
    in_ST0 = lVar5 / lVar4;
    *pcVar3 = *(char *)(int *)(unaff_EDI + 0x38) + '0';
    pcVar3 = pcVar3 + -1;
  } while (lVar5 != (longdouble)0);
  *pcVar3 = ' ';
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  return iVar2 + -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_08048151(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  char unaff_BL;
  int unaff_EDI;
  longdouble in_ST0;
  longdouble lVar5;
  longdouble lVar6;
  
  lVar5 = (longdouble)_DAT_080481fd;
  piVar1 = (int *)(unaff_EDI + 0x38);
  pcVar4 = (char *)(unaff_EDI + 0x37);
  do {
    lVar6 = in_ST0 - (in_ST0 / lVar5) * lVar5;
    *piVar1 = (int)ROUND(lVar6);
    lVar6 = in_ST0 - lVar6;
    in_ST0 = lVar6 / lVar5;
    *pcVar4 = *(char *)piVar1 + '0';
    pcVar4 = pcVar4 + -1;
  } while (lVar6 != (longdouble)0);
  *pcVar4 = unaff_BL;
  if (unaff_BL != ' ') {
    *(char *)piVar1 = unaff_BL;
  }
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  return iVar3 + -1;
}



void processEntry entry(void)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  byte *extraout_ECX;
  byte *pbVar5;
  byte *extraout_ECX_00;
  undefined4 *puVar6;
  int *piVar7;
  undefined *puVar8;
  undefined *puVar11;
  undefined *puVar12;
  int iVar14;
  int in_stack_00000008;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar13;
  
  puVar6 = (undefined4 *)&stack0x0000000c;
  piVar3 = (int *)&stack0x0000000c;
  if (in_stack_00000008 == 0) goto LAB_080481b1;
  do {
    piVar7 = piVar3;
    piVar7[-1] = 0x80481a6;
    FUN_08048068();
    piVar3 = piVar7 + 1;
  } while (*piVar7 != 0);
LAB_080481ab:
  *piVar7 = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar6 = piVar7 + 2;
LAB_080481b1:
  do {
    *(undefined4 *)((int)puVar6 + -4) = 0x5f;
    iVar14 = *(int *)((int)puVar6 + -4);
    piVar7 = puVar6;
    do {
      *(undefined4 *)((int)piVar7 + -4) = 3;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar8 = (undefined *)((int)piVar7 + 4);
      puVar9 = (undefined *)((int)piVar7 + 4);
      puVar10 = (undefined *)((int)piVar7 + 4);
      if (iVar4 < 1) goto LAB_080481ab;
      bVar1 = *extraout_ECX;
      piVar7 = (int *)((int)piVar7 + 4);
    } while ((bVar1 == 0x20) ||
            ((pbVar5 = extraout_ECX, puVar11 = puVar8, 8 < bVar1 &&
             (puVar11 = puVar9, piVar7 = (int *)puVar10, bVar1 < 0xe))));
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar14 = iVar14 + -1;
      puVar6 = (undefined4 *)puVar11;
      if (iVar14 == 0) break;
      *(undefined4 *)(puVar11 + -4) = 3;
      pcVar2 = (code *)swi(0x80);
      iVar4 = (*pcVar2)();
      puVar12 = puVar11 + 4;
      puVar13 = puVar11 + 4;
      pbVar5 = extraout_ECX_00;
      puVar6 = (undefined4 *)(puVar11 + 4);
      if (((iVar4 < 1) ||
          (bVar1 = *extraout_ECX_00, puVar6 = (undefined4 *)(puVar11 + 4), bVar1 == 0x20)) ||
         ((puVar11 = puVar11 + 4, 8 < bVar1 &&
          (puVar6 = (undefined4 *)puVar12, puVar11 = puVar13, bVar1 < 0xe)))) break;
    }
    *pbVar5 = 0;
    *(undefined4 *)((int)puVar6 + -4) = 0x80481fb;
    FUN_08048068();
  } while( true );
}


