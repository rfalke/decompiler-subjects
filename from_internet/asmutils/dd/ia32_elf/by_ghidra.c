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




undefined4 processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar9;
  uint uVar10;
  int extraout_ECX_01;
  int **ppiVar11;
  int **ppiVar12;
  int **ppiVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined *puVar18;
  byte bVar19;
  undefined8 uVar20;
  
  bVar19 = 0;
  ppiVar11 = (int **)&param_4;
  if (param_2 == 1) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_4 = 1;
    pcVar1 = (code *)swi(0x80);
    param_3 = (*pcVar1)();
    ppiVar11 = (int **)&stack0x00000010;
  }
  piVar17 = *ppiVar11;
  if (piVar17 != (int *)0x0) {
    *ppiVar11 = (int *)0x80480a9;
    if (*(short *)piVar17 == 0x666f) {
      ppiVar11[-1] = (int *)0x804811b;
      FUN_08048149();
      ppiVar11[-1] = (int *)0x5;
      pcVar1 = (code *)swi(0x80);
      iVar7 = (*pcVar1)();
      ppiVar12 = ppiVar11 + 1;
      if (-1 < iVar7) {
        return 1;
      }
LAB_08048153:
      ppiVar12[-1] = (int *)0x2;
      ppiVar12[-1] = (int *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      *ppiVar12 = (int *)0x804816a;
      FUN_080482c8();
      *ppiVar12 = (int *)0x1;
      *ppiVar12 = (int *)0x1;
      pcVar1 = (code *)swi(0x80);
      param_3 = (*pcVar1)();
    }
    else {
      if (*(short *)piVar17 == 0x6669) {
        ppiVar11[-1] = (int *)0x8048107;
        uVar6 = FUN_08048116();
        return uVar6;
      }
      if ((((*piVar17 == 0x6e756f63) || (*(short *)piVar17 == 0x7362)) || (*piVar17 == 0x70696b73))
         || (*piVar17 == 0x6b656573)) {
        ppiVar11[-1] = (int *)0x804812d;
        FUN_08048149();
        ppiVar11[-1] = (int *)0x8048132;
        uVar20 = FUN_0804832f();
        *(undefined4 *)((ulonglong)uVar20 >> 0x20) = (int)uVar20;
        return (int)uVar20;
      }
      if (*piVar17 != 0x766e6f63) {
        return param_3;
      }
      if (*(int *)((int)piVar17 + 5) != 0x636e7973) {
        if (*(int *)((int)piVar17 + 5) != 0x62617773) {
          return param_3;
        }
        DAT_08048382 = 1;
        return param_3;
      }
    }
    DAT_08048381 = 1;
    return param_3;
  }
  *ppiVar11 = (int *)DAT_0804836b;
  ppiVar11[-1] = (int *)0x2d;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  ppiVar13 = ppiVar11 + 2;
  ppiVar11[1] = (int *)0x0;
  pcVar1 = (code *)swi(0x80);
  iVar7 = (*pcVar1)();
  ppiVar4 = ppiVar11 + 2;
  if (iVar7 < 0) {
    while (ppiVar13 = ppiVar4, DAT_0804836f = DAT_0804836f + -1, -1 < DAT_0804836f) {
      do {
        *(undefined4 *)((int)ppiVar13 + -4) = 3;
        pcVar1 = (code *)swi(0x80);
        uVar20 = (*pcVar1)();
        ppiVar12 = (int **)((int)ppiVar13 + 4);
        puVar14 = (undefined *)((int)ppiVar13 + 4);
        if ((int)uVar20 == 0) goto LAB_08048153;
        ppiVar13 = (int **)((int)ppiVar13 + 4);
        ppiVar4 = (int **)puVar14;
      } while ((int)((ulonglong)uVar20 >> 0x20) != (int)uVar20);
    }
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar18 = *(undefined **)((int)ppiVar13 + 4);
  puVar5 = (undefined4 *)((int)ppiVar13 + 8);
  iVar7 = DAT_08048367;
  do {
    do {
      puVar15 = puVar5;
      puVar15[-1] = 3;
      pcVar1 = (code *)swi(0x80);
      uVar20 = (*pcVar1)();
      uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
      uVar8 = (uint)uVar20;
      puVar16 = puVar15 + 1;
      ppiVar12 = (int **)(puVar15 + 1);
      puVar9 = extraout_ECX;
      if (uVar8 == 0) goto LAB_08048245;
      if ((int)uVar8 < 0) goto LAB_08048153;
      puVar5 = puVar15 + 1;
    } while (uVar8 < uVar10);
    DAT_08048377 = DAT_08048377 + 1;
    *puVar15 = 0x8048222;
    FUN_080482a7();
    *puVar15 = 4;
    pcVar1 = (code *)swi(0x80);
    uVar20 = (*pcVar1)();
    uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
    ppiVar12 = (int **)(puVar15 + 2);
    puVar16 = puVar15 + 2;
    if ((uint)uVar20 != uVar10) goto LAB_08048153;
    DAT_0804837b = DAT_0804837b + 1;
    iVar7 = iVar7 + -1;
    puVar9 = extraout_ECX_00;
    puVar5 = puVar15 + 2;
  } while (iVar7 != 0);
LAB_08048245:
  if (uVar10 != DAT_0804836b) {
    DAT_0804837f = DAT_0804837f + '\x01';
    DAT_08048380 = DAT_08048380 + '\x01';
    if (DAT_08048381 == '\x01') {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (uint)bVar19 * -2 + 1;
      }
      DAT_08048380 = DAT_08048380 + -1;
      DAT_0804837b._0_1_ = (char)DAT_0804837b + '\x01';
      puVar18 = puVar9;
    }
    *(undefined4 *)((int)puVar16 + -4) = 0x804827d;
    FUN_080482a7();
    *(undefined4 *)((int)puVar16 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar16 = (undefined4 *)((int)puVar16 + 4);
  }
  puVar16[-1] = 6;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  *puVar16 = 6;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar16[1] = 0x80482a0;
  FUN_080482c8();
  puVar16[1] = 1;
  pcVar1 = (code *)swi(0x80);
  uVar20 = (*pcVar1)();
  uVar6 = (undefined4)uVar20;
  if ((DAT_08048382 & 1) != 0) {
    puVar16[2] = uVar6;
    puVar16[1] = extraout_ECX_01;
    *puVar16 = (int)((ulonglong)uVar20 >> 0x20);
    puVar16[-1] = 0;
    puVar16[-2] = puVar16 + 3;
    puVar16[-3] = 1;
    puVar16[-4] = iVar7;
    puVar16[-5] = puVar18;
    puVar2 = (undefined2 *)&DAT_0804838b;
    puVar3 = (undefined2 *)&DAT_0804838b;
    for (iVar7 = extraout_ECX_01 + -0x804838b; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
      puVar2 = puVar2 + (uint)bVar19 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar19 * -2 + 1;
    }
    uVar6 = puVar16[2];
  }
  return uVar6;
}



void FUN_08048116(void)

{
  code *pcVar1;
  int iVar2;
  
  FUN_08048149();
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    return;
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  FUN_080482c8();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  DAT_08048381 = 1;
  return;
}



void FUN_08048149(void)

{
  char cVar1;
  code *pcVar2;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      DAT_08048381 = 1;
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '=');
  return;
}



undefined8 __regparm3 FUN_080482a7(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  if ((DAT_08048382 & 1) != 0) {
    puVar1 = (undefined2 *)&DAT_0804838b;
    puVar2 = (undefined2 *)&DAT_0804838b;
    for (param_3 = param_3 + -0x804838b; param_3 != 0; param_3 = param_3 + -1) {
      *puVar2 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return CONCAT44(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080482c8(void)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  FUN_08048318(&DAT_0804838b);
  _DAT_0804838b = (uint)DAT_0804837f * 0x100 + 0x20302b;
  uVar1 = (uint)bVar4;
  uVar2 = (uint)bVar4;
  *(undefined4 *)(&DAT_0804838f + uVar1 * -8) = 0xa2c6e69;
  FUN_08048318();
  *(uint *)(&DAT_08048393 + uVar2 * -8 + uVar1 * -8) = (uint)DAT_08048380 * 0x100 + 0x20302b;
  *(int *)((int)(&DAT_08048393 + uVar2 * -8 + uVar1 * -8) + ((uint)bVar4 * -2 + 1) * 4) = 0xa74756f;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  return;
}



void __regparm3 FUN_08048318(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined *unaff_EDI;
  
  iVar3 = 0;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    puVar4 = (uint *)((int)register0x00000010 + -4);
    puVar5 = (undefined4 *)((int)register0x00000010 + -4);
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
    *puVar4 = (uint)(byte)((char)(uVar1 % 10) + 0x30);
    iVar3 = iVar3 + 1;
  } while (param_1 != 0);
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *unaff_EDI = (char)uVar2;
    iVar3 = iVar3 + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar3 != 0);
  return;
}



int FUN_0804832f(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  byte *unaff_ESI;
  
  iVar3 = 0;
  while( true ) {
    bVar1 = *unaff_ESI;
    if (bVar1 == 0) {
      return iVar3;
    }
    if (0x39 < bVar1) break;
    iVar3 = iVar3 * 10 + (uint)(byte)(bVar1 - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  if (bVar1 != 0x77) {
    if (bVar1 != 0x62) {
      if (bVar1 != 0x6b) {
        if (bVar1 != 0x6d) {
          pcVar2 = (code *)swi(0x80);
          iVar3 = (*pcVar2)();
          DAT_08048381 = 1;
          return iVar3;
        }
        iVar3 = iVar3 << 10;
      }
      iVar3 = iVar3 << 1;
    }
    iVar3 = iVar3 << 8;
  }
  return iVar3 << 1;
}


