typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  int extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  undefined4 param_3;
  int param_4;
  undefined4 param_6;
  undefined4 param_7;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  bVar8 = 0;
  _DAT_0805d702 = 0x2f2e;
  param_3 = 0x804805d;
  FUN_080481c8();
  FUN_08048212();
  if (param_4 == 0) {
    DAT_0805db23 = 1;
    FUN_08048df5();
    DAT_0805db54 = param_4;
    FUN_08048266();
    DAT_0804950e = (undefined *)0x1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0804950e = (undefined *)0x1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0804950e = &LAB_080490e2;
    param_6 = 0x43;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0804950e = &LAB_08049100;
    param_7 = 0x43;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    in_stack_00000018 = 0x14;
    pcVar1 = (code *)swi(0x80);
    DAT_0805db58 = (*pcVar1)();
    in_stack_0000001c = 0x39;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    in_stack_00000020 = 0x36;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    in_stack_00000024 = 0x18;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    DAT_0805b59c = &DAT_08049264;
    puVar3 = &stack0x0000002c;
    if (iVar2 == 0) {
      DAT_0805b59c = &DAT_08049267;
      puVar3 = &stack0x0000002c;
    }
  }
  else {
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    puVar4 = &stack0x00000010;
    if (iVar2 == 0) {
      FUN_08048e1c();
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      puVar4 = &stack0x00000014;
    }
    DAT_0805b59c = &DAT_0804926a;
    puVar3 = (undefined *)puVar4;
    DAT_0805db54 = iVar2;
  }
  DAT_0805d668 = 0;
  DAT_0805d66c = 0;
  _DAT_0805d670 = 0;
  _DAT_0805d674 = 0;
  DAT_0805d678 = 0;
  puVar5 = (undefined4 *)puVar3;
  do {
    do {
      *(undefined4 *)((int)puVar5 + -4) = 0x8048166;
      FUN_08048df5();
      *(undefined4 *)((int)puVar5 + -4) = 0x804816b;
      iVar2 = FUN_080482ea();
    } while (iVar2 == 0);
    puVar6 = puVar5;
    if (DAT_0805d6fa == (int *)0x0) {
      DAT_0805d6fa = (int *)((int)puVar5 + -4);
      puVar6 = (undefined4 *)((int)puVar5 + -4);
      *(undefined4 *)((int)puVar5 + -4) = 0;
    }
    *DAT_0805d6fa = *DAT_0805d6fa + 1;
    DAT_0805d6f6 = *DAT_0805d6fa;
    puVar6[-1] = 0x2d;
    pcVar1 = (code *)swi(0x80);
    puVar3 = (undefined *)(*pcVar1)();
    *puVar6 = puVar3;
    puVar6[-1] = 0x2d;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = &DAT_0804959a;
    for (iVar2 = extraout_EDX; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    }
    puVar3[-1] = 0;
    *puVar6 = 0x80481b3;
    iVar2 = FUN_0804874f();
    puVar5 = puVar6 + 1;
    if ((iVar2 != 0) && (puVar5 = puVar6 + 1, -1 < iVar2)) {
      *puVar6 = 0x80481c6;
      FUN_08048b8c();
      puVar5 = puVar6 + 1;
    }
  } while( true );
}



void FUN_080481c8(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 *extraout_EDX;
  char *unaff_EDI;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar2 = (code *)swi(0x80);
  DAT_0805d5a0 = (*pcVar2)();
  DAT_0805d706 = 1;
  FUN_0804823d();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *extraout_EDX = 0x4c454853;
  extraout_EDX[1] = 0x20223d4c;
  pcVar3 = (char *)((int)extraout_EDX + 7);
  do {
    cVar1 = *unaff_EDI;
    pcVar4 = pcVar3 + (uint)bVar5 * -2 + 1;
    *pcVar3 = cVar1;
    unaff_EDI = unaff_EDI + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4[-1] = '\"';
  pcVar4[(uint)bVar5 * -2] = '\0';
  return;
}



void FUN_08048212(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar3 = (int *)&stack0x00000004;
  piVar1 = (int *)&stack0x00000004;
  if (unaff_EBP != 0) {
    do {
      piVar3 = piVar1;
      piVar1 = piVar3 + 1;
    } while (*piVar3 != 0);
    *piVar3 = 0;
  }
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar2 == 0) break;
    (&DAT_0805d5a0)[DAT_0805d706] = iVar2;
    DAT_0805d706 = DAT_0805d706 + 1;
  } while (DAT_0805d706 != 0x32);
                    // WARNING: Could not recover jumptable at 0x0804823b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined4 __regparm3 FUN_0804823d(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *unaff_EDI;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return param_1;
    }
    iVar2 = iVar2 + -1;
    cVar1 = *unaff_EDI;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return param_1;
}



void FUN_0804824a(void)

{
  char cVar1;
  char cVar2;
  uint extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  char *unaff_ESI;
  char *unaff_EDI;
  
  FUN_0804823d();
  FUN_0804823d();
  uVar3 = extraout_ECX;
  if (extraout_ECX < extraout_EDX) {
    uVar3 = extraout_EDX;
  }
  do {
    if (uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 - 1;
    cVar1 = *unaff_ESI;
    cVar2 = *unaff_EDI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 == cVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048266(uint param_1)

{
  code *pcVar1;
  
  if (DAT_0805db54 == 0) {
    _DAT_0805d6fe = 0x20082008;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0805d6d8 = DAT_0805d6d8 & 0xfffffff5;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    DAT_0805d6d8 = param_1;
  }
  return;
}



void FUN_080482ab(void)

{
  code *pcVar1;
  
  if (DAT_0805db54 == 0) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



uint FUN_080482c6(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *extraout_ECX;
  
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if ((-1 < iVar2) && (iVar2 != 0)) {
    return (uint)*extraout_ECX;
  }
  FUN_080482ab();
  FUN_08048df5();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  uVar3 = (*pcVar1)();
  if ((int)uVar3 < 0) {
    uVar3 = FUN_08048e1c();
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_080482ea(void)

{
  byte bVar1;
  undefined uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  uint uVar9;
  short *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  char *pcVar10;
  uint uVar11;
  ushort **ppuVar12;
  undefined4 *puVar13;
  ushort **ppuVar14;
  char **ppcVar15;
  char **ppcVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  char **ppcVar19;
  undefined1 *puVar20;
  char *pcVar21;
  ushort *puVar22;
  char *pcVar23;
  byte bVar24;
  undefined8 uVar25;
  undefined4 uStack_4;
  
  bVar24 = 0;
  puVar22 = (ushort *)&DAT_0804959a;
  _DAT_0804959a = 0;
  ppuVar12 = (ushort **)register0x00000010;
LAB_080482f4:
  while( true ) {
    ppuVar14 = ppuVar12;
    ppuVar14[-1] = (ushort *)0x80482f9;
    cVar4 = FUN_080482c6();
    if (cVar4 != '\t') break;
    ppuVar14[-1] = puVar22;
    DAT_0805d90f = '\0';
    DAT_0805db0d = '\0';
    DAT_0805d90a = &DAT_0804959a;
    ppuVar14[-2] = (ushort *)0x8048501;
    pcVar8 = (char *)FUN_0804823d();
    pcVar10 = (char *)0x0;
    DAT_0805d90a = &DAT_0804959a;
    do {
      pcVar23 = DAT_0805d90a;
      DAT_0805d90a = pcVar23 + -1;
      if (DAT_0805d90a == pcVar8) goto LAB_0804851e;
      if ((*DAT_0805d90a == '/') && (pcVar10 == (char *)0x0)) {
        pcVar10 = DAT_0805d90a;
      }
    } while (*DAT_0805d90a != ' ');
    DAT_0805d90a = pcVar23;
    if (pcVar10 == (char *)0x0) {
LAB_0804851e:
      if (*pcVar8 == '/') {
        if (pcVar10 == (char *)0x0) {
          pcVar10 = pcVar8;
        }
        goto LAB_08048546;
      }
      if ((*pcVar8 == '.') && (pcVar10 != (char *)0x0)) goto LAB_08048546;
    }
    else {
LAB_08048546:
      DAT_0805d90a = pcVar10 + 1;
    }
    ppuVar14[-2] = (ushort *)0x6a;
    pcVar3 = (code *)swi(0x80);
    uVar25 = (*pcVar3)();
    puVar7 = (undefined *)((ulonglong)uVar25 >> 0x20);
    if (((int)uVar25 < 0) || ((DAT_0805d694 & 0x4000) != 0)) {
      LOCK();
      uVar2 = *puVar7;
      *puVar7 = 0;
      UNLOCK();
      do {
        *(undefined4 *)((int)ppuVar14 + -4) = 5;
        pcVar3 = (code *)swi(0x80);
        uVar25 = (*pcVar3)();
        ppcVar15 = (char **)((int)ppuVar14 + 4);
        ppuVar14 = (ushort **)((int)ppuVar14 + 4);
      } while ((int)uVar25 < 0);
      LOCK();
      *(undefined *)((ulonglong)uVar25 >> 0x20) = uVar2;
      UNLOCK();
LAB_080485a6:
      pcVar3 = (code *)swi(0x80);
      iVar6 = (*pcVar3)();
      puVar17 = ppcVar15 + 1;
      if (iVar6 != 0) goto code_r0x080485bf;
      pcVar10 = &DAT_0805d90f;
      if ((DAT_0805d90f != '\0') && (DAT_0805db0d == '\0')) goto LAB_0804861f;
      if (DAT_0805d90f != '\0') {
        *ppcVar15 = (char *)0x0;
        ppcVar19 = ppcVar15 + -1;
        ppcVar15[-1] = &DAT_0805d90f;
        goto LAB_080486e3;
      }
      pcVar10 = &DAT_0805da0e;
      if (DAT_0805da0e != '\0') {
LAB_0804861f:
        *ppcVar15 = (char *)0x5;
        *ppcVar15 = (char *)0x804862c;
        FUN_08048e06();
        pcVar8 = DAT_0805d90a;
        do {
          cVar4 = *pcVar10;
          pcVar23 = pcVar8 + (uint)bVar24 * -2 + 1;
          *pcVar8 = cVar4;
          pcVar8 = pcVar23;
          pcVar10 = pcVar10 + (uint)bVar24 * -2 + 1;
        } while (cVar4 != '\0');
        do {
          cVar4 = *pcVar8;
          if (pcVar8 + -1 == &DAT_0804959a) break;
          pcVar8 = pcVar8 + -1;
        } while (cVar4 != ' ');
        bVar24 = 0;
        *ppcVar15 = (char *)0x6a;
        pcVar3 = (code *)swi(0x80);
        iVar6 = (*pcVar3)();
        if ((-1 < iVar6) && ((DAT_0805d694 & 0x4000) == 0x4000)) {
          *(undefined2 *)(pcVar23 + -1) = 0x2f;
          pcVar23 = pcVar23 + 1;
        }
        puVar17 = ppcVar15 + 2;
        ppcVar15[2] = pcVar23 + -1;
      }
      *(undefined4 *)((int)puVar17 + -4) = 5;
      *(undefined4 *)((int)puVar17 + -4) = 0x80486b6;
      FUN_08048e06();
      *(undefined4 *)((int)puVar17 + -4) = 0x80486c0;
      FUN_08048df5();
      *(undefined4 *)((int)puVar17 + -4) = 0x80486ca;
      FUN_08048df5();
      *(undefined4 *)((int)puVar17 + -4) = 6;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar22 = *(ushort **)((int)puVar17 + 4);
      ppuVar12 = (ushort **)((int)puVar17 + 8);
    }
    else {
      ppuVar14[-1] = (ushort *)0x1;
      ppuVar14[-1] = (ushort *)0x8048577;
      FUN_08048e06();
      puVar22 = *ppuVar14;
      ppuVar12 = ppuVar14 + 1;
    }
  }
  if (cVar4 == '\x1b') {
    ppuVar14[-1] = (ushort *)0x2;
    ppuVar14[-1] = (ushort *)0x3;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    ppuVar12 = ppuVar14 + 1;
    if (*extraout_ECX == 0x445b) {
      if (puVar22 == (ushort *)&DAT_0804959a) goto LAB_08048458;
      puVar22 = (ushort *)((int)puVar22 + -1);
      *ppuVar14 = (ushort *)0x1;
      *ppuVar14 = (ushort *)0x804847d;
      FUN_08048e06();
      ppuVar12 = ppuVar14 + 1;
      goto LAB_080482f4;
    }
    if (*extraout_ECX == 0x435b) {
      ppuVar12 = ppuVar14 + 1;
      if (*(char *)puVar22 != '\0') {
        *ppuVar14 = (ushort *)0x1;
        *ppuVar14 = (ushort *)0x8048455;
        FUN_08048e06();
        puVar22 = (ushort *)((int)puVar22 + 1);
        ppuVar12 = ppuVar14 + 1;
        goto LAB_080482f4;
      }
    }
    else {
      if (*extraout_ECX == 0x415b) {
        ppuVar12 = ppuVar14 + 1;
        if (DAT_0805d6f6 == 0) goto LAB_08048458;
        DAT_0805d6f6 = DAT_0805d6f6 - 1;
      }
      else {
        ppuVar12 = ppuVar14 + 1;
        if (*extraout_ECX != 0x425b) goto LAB_080482f4;
        DAT_0805d6f6 = DAT_0805d6f6 + 1;
      }
      ppuVar12 = ppuVar14 + 1;
      if (DAT_0805d6fa != (uint *)0x0) {
        if (*DAT_0805d6fa <= DAT_0805d6f6) {
          DAT_0805d6f6 = DAT_0805d6f6 - 1;
          ppuVar12 = ppuVar14 + 1;
          goto LAB_08048458;
        }
        puVar7 = (undefined *)DAT_0805d6fa[-(DAT_0805d6f6 + 1)];
        *ppuVar14 = (ushort *)0x80484a5;
        FUN_0804823d();
        puVar20 = &DAT_0804959a;
        iVar6 = extraout_ECX_00;
        while (iVar6 = iVar6 + -1, iVar6 != 0) {
          *puVar20 = *puVar7;
          puVar7 = puVar7 + (uint)bVar24 * -2 + 1;
          puVar20 = puVar20 + (uint)bVar24 * -2 + 1;
        }
        puVar22 = (ushort *)(puVar20 + -1);
        *ppuVar14 = (ushort *)0x5;
        *ppuVar14 = (ushort *)0x80484be;
        FUN_08048e06();
        *ppuVar14 = (ushort *)0x80484c8;
        FUN_08048df5();
        *ppuVar14 = (ushort *)0x80484d4;
        FUN_08048e06();
        ppuVar12 = ppuVar14 + 1;
        goto LAB_080482f4;
      }
    }
  }
  else {
    ppuVar12 = ppuVar14;
    if ((cVar4 != '\b') && (cVar4 != '\x7f')) {
      if (cVar4 == '\x04') {
        ppuVar14[-1] = (ushort *)0x8048ee9;
        FUN_080482ab();
        ppuVar14[-1] = (ushort *)0x8048ef3;
        FUN_08048df5();
        ppuVar14[-1] = (ushort *)0x1;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        *ppuVar14 = (ushort *)0xc;
        pcVar3 = (code *)swi(0x80);
        puVar7 = (undefined *)(*pcVar3)();
        if ((int)puVar7 < 0) {
          ppuVar14[1] = (ushort *)0x8048f17;
          puVar7 = (undefined *)FUN_08048e1c();
        }
        return puVar7;
      }
      if (cVar4 == '\f') {
        ppuVar14[-1] = (ushort *)0x80483a0;
        FUN_0804911e();
        do {
          do {
            *(undefined4 *)((int)ppuVar12 + -4) = 0x8048166;
            FUN_08048df5();
            *(undefined4 *)((int)ppuVar12 + -4) = 0x804816b;
            iVar6 = FUN_080482ea();
          } while (iVar6 == 0);
          puVar13 = ppuVar12;
          if (DAT_0805d6fa == (uint *)0x0) {
            DAT_0805d6fa = (uint *)((int)ppuVar12 + -4);
            puVar13 = (undefined4 *)((int)ppuVar12 + -4);
            *(undefined4 *)((int)ppuVar12 + -4) = 0;
          }
          *DAT_0805d6fa = *DAT_0805d6fa + 1;
          DAT_0805d6f6 = *DAT_0805d6fa;
          puVar13[-1] = 0x2d;
          pcVar3 = (code *)swi(0x80);
          puVar7 = (undefined *)(*pcVar3)();
          *puVar13 = puVar7;
          puVar13[-1] = 0x2d;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          puVar20 = &DAT_0804959a;
          for (iVar6 = extraout_EDX; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar20;
            puVar20 = puVar20 + (uint)bVar24 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar24 * -2 + 1;
          }
          puVar7[-1] = 0;
          *puVar13 = 0x80481b3;
          iVar6 = FUN_0804874f();
          ppuVar12 = (ushort **)(puVar13 + 1);
          if ((iVar6 != 0) && (ppuVar12 = (ushort **)(puVar13 + 1), -1 < iVar6)) {
            *puVar13 = 0x80481c6;
            FUN_08048b8c();
            ppuVar12 = (ushort **)(puVar13 + 1);
          }
        } while( true );
      }
      ppuVar14[-1] = (ushort *)0x1;
      ppuVar14[-1] = (ushort *)0x8048336;
      FUN_08048e06();
      if (DAT_0805d6f3 == 10) {
        for (; *(char *)puVar22 != '\0'; puVar22 = (ushort *)((int)puVar22 + 1)) {
        }
        *puVar22 = 10;
        puVar7 = (undefined *)((int)puVar22 + -0x8049599);
        if (puVar7 == (undefined *)0x1) {
          puVar7 = (undefined *)0x0;
        }
        return puVar7;
      }
      if (*(char *)puVar22 == '\0') {
        *puVar22 = (ushort)DAT_0805d6f3;
      }
      else {
        ppuVar14[-1] = puVar22;
        bVar5 = DAT_0805d6f3;
        do {
          LOCK();
          bVar1 = *(byte *)puVar22;
          *(byte *)puVar22 = bVar5;
          UNLOCK();
          puVar22 = (ushort *)((int)puVar22 + 1);
          bVar5 = bVar1;
        } while (bVar1 != 0);
        *(undefined *)puVar22 = 0;
        puVar22 = ppuVar14[-1];
        ppuVar14[-1] = (ushort *)0x4;
        ppuVar14[-1] = (ushort *)0x804835e;
        FUN_08048e06();
        ppuVar14[-1] = (ushort *)0x1;
        ppuVar14[-1] = (ushort *)0x8048368;
        FUN_08048e06();
        ppuVar14[-1] = (ushort *)0x1;
        ppuVar14[-1] = (ushort *)0x8048375;
        FUN_08048e06();
      }
      puVar22 = (ushort *)((int)puVar22 + 1);
      goto LAB_080482f4;
    }
    if (puVar22 != (ushort *)&DAT_0804959a) {
      if (*(char *)puVar22 == '\0') {
        puVar22 = (ushort *)((int)puVar22 + -1);
        *(undefined *)puVar22 = 0;
        DAT_0805d6ff = 0x20;
        ppuVar14[-1] = (ushort *)0x3;
        ppuVar14[-1] = (ushort *)0x8048401;
        FUN_08048e06();
      }
      else {
        ppuVar14[-1] = puVar22;
        do {
          cVar4 = *(char *)puVar22;
          *(char *)((int)puVar22 + -1) = cVar4;
          puVar22 = (ushort *)((int)puVar22 + 1);
        } while (cVar4 != '\0');
        iVar6 = (int)ppuVar14[-1];
        ppuVar14[-1] = (ushort *)0x5;
        ppuVar14[-1] = (ushort *)0x80483cf;
        FUN_08048e06();
        puVar22 = (ushort *)(iVar6 + -1);
        DAT_0805d6ff = *(undefined *)puVar22;
        ppuVar14[-1] = (ushort *)0x2;
        ppuVar14[-1] = (ushort *)0x80483e4;
        FUN_08048e06();
      }
      goto LAB_080482f4;
    }
  }
LAB_08048458:
  *(undefined4 *)((int)ppuVar12 + -4) = 1;
  *(undefined4 *)((int)ppuVar12 + -4) = 0x8048465;
  FUN_08048e06();
  goto LAB_080482f4;
code_r0x080485bf:
  uVar9 = iVar6 + extraout_ECX_01;
  *ppcVar15 = (char *)0x0;
  uVar11 = 0;
  iVar6 = extraout_ECX_01;
  ppcVar19 = ppcVar15;
  while (pcVar10 = DAT_0805d90a, uVar11 = iVar6 + uVar11, uVar11 < uVar9) {
    ppcVar19[-1] = (char *)(uVar11 + 10);
    ppcVar19[-2] = (char *)uVar11;
    ppcVar19[-3] = (char *)0x80485df;
    uVar25 = FUN_0804824a();
    uVar9 = (uint)uVar25;
    iVar6 = (int)ppcVar19[-2];
    ppcVar16 = ppcVar19 + -1;
    if ((char *)((ulonglong)uVar25 >> 0x20) != pcVar10 + -1) {
      ppcVar16 = ppcVar19;
    }
    ppcVar19 = ppcVar16;
    uVar11 = (uint)*(ushort *)(iVar6 + 8);
  }
  pcVar10 = *ppcVar19;
  ppcVar15 = ppcVar19 + 1;
  if (pcVar10 != (char *)0x0) {
    *ppcVar19 = pcVar10;
    if ((ppcVar19[1] == (char *)0x0) && (DAT_0805d90f == '\0')) {
      pcVar8 = &DAT_0805d90f;
      do {
        cVar4 = *pcVar10;
        *pcVar8 = cVar4;
        pcVar10 = pcVar10 + (uint)bVar24 * -2 + 1;
        pcVar8 = pcVar8 + (uint)bVar24 * -2 + 1;
      } while (cVar4 != '\0');
      ppcVar15 = ppcVar19 + 2;
    }
    else {
LAB_080486e3:
      if (DAT_0805db0d == '\0') {
        if (DAT_0805d90f != '\0') {
          puVar18 = (undefined4 *)((int)ppcVar19 + -4);
          ppcVar19 = (char **)((int)ppcVar19 + -4);
          *puVar18 = &DAT_0805d90f;
        }
        pcVar10 = *ppcVar19;
        pcVar8 = pcVar10;
        pcVar23 = &DAT_0805da0e;
        do {
          cVar4 = *pcVar8;
          *pcVar23 = cVar4;
          pcVar8 = pcVar8 + (uint)bVar24 * -2 + 1;
          pcVar23 = pcVar23 + (uint)bVar24 * -2 + 1;
        } while (cVar4 != '\0');
        pcVar10 = pcVar10 + -1;
        *ppcVar19 = pcVar10;
        *pcVar10 = '\n';
      }
      DAT_0805db0d = DAT_0805db0d + '\x01';
      while( true ) {
        pcVar10 = *ppcVar19;
        ppcVar15 = ppcVar19 + 1;
        if (pcVar10 == (char *)0x0) break;
        pcVar8 = pcVar10;
        pcVar23 = &DAT_0805da0e;
        if (*pcVar10 != '\n') {
          pcVar8 = pcVar10 + -1;
        }
        do {
          pcVar8 = pcVar8 + 1;
          pcVar21 = pcVar23 + (uint)bVar24 * -2 + 1;
          cVar4 = *pcVar23;
          pcVar23 = pcVar21;
        } while (cVar4 == *pcVar8);
        pcVar21[-1] = '\0';
        *ppcVar19 = (char *)0x804873f;
        FUN_0804823d();
        pcVar10[-1] = '\n';
        *ppcVar19 = (char *)0x804874d;
        FUN_08048e06();
        ppcVar19 = ppcVar19 + 1;
      }
      DAT_0805d90f = '\0';
    }
  }
  goto LAB_080485a6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * __regparm3 FUN_0804874f(char *param_1)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar8;
  uint uVar9;
  char *extraout_EDX;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  char **ppcVar14;
  char **ppcVar15;
  char *pcVar16;
  int *piVar17;
  char *pcVar18;
  undefined1 *puVar19;
  bool bVar20;
  byte bVar21;
  uint auStack_2c [6];
  char *pcStack_14;
  int *piStack_10;
  uint local_c [2];
  char *local_4;
  
  bVar21 = 0;
  do {
    pcVar18 = &DAT_0804a59a + (int)_DAT_0805d670;
    pcVar6 = param_1;
    iVar8 = DAT_0805d66c;
    pcVar10 = DAT_0805d668;
    iVar12 = DAT_0805d678;
    piVar17 = (int *)(_DAT_0805d674 + 0x804959a);
LAB_08048779:
    piVar13 = (int *)((int)piVar17 + (uint)bVar21 * -2 + 1);
    cVar1 = *(char *)piVar17;
    param_1 = (char *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
    if (cVar1 == '\0') goto LAB_08048858;
    if (((uint)pcVar10 & 1) != 0) {
LAB_080487fa:
      if (cVar1 == '\"') {
        pcVar10 = (char *)((uint)pcVar10 ^ 2);
      }
      else {
        if (((uint)pcVar10 & 2) == 0) {
          if (cVar1 != '\t') {
            if (cVar1 == '\n') goto LAB_08048858;
            *(undefined4 *)((int)register0x00000010 + -4) = 0x804884b;
            if (cVar1 == '>') {
              return pcVar10;
            }
            if (cVar1 == '<') {
              return param_1;
            }
            *(char **)((int)register0x00000010 + -8) = *(char **)((int)register0x00000010 + -4);
            if ((cVar1 == '?') || (cVar1 == '*')) {
LAB_080489b6:
              DAT_0805d90f = 0;
              if (((uint)pcVar10 & 1) == 0) {
                *(char **)((int)register0x00000010 + -4) = param_1;
                *(char **)((int)register0x00000010 + -8) = pcVar6;
                *(int *)((int)register0x00000010 + -0xc) = iVar8;
                *(char **)((int)register0x00000010 + -0x10) = pcVar10;
                *(BADSPACEBASE **)((int)register0x00000010 + -0x14) = register0x00000010;
                *(int *)((int)register0x00000010 + -0x18) = iVar12;
                *(int **)((int)register0x00000010 + -0x1c) = piVar13;
                *(char **)((int)register0x00000010 + -0x20) = pcVar18;
                *(int *)((int)register0x00000010 + -0x24) = iVar12;
                puVar19 = &DAT_0805da0e;
              }
              else {
                *(char **)((int)register0x00000010 + -4) = param_1;
                *(char **)((int)register0x00000010 + -8) = pcVar6;
                *(int **)((int)register0x00000010 + -0xc) = piVar13;
                *(char **)((int)register0x00000010 + -0x10) = pcVar18;
                pcVar6 = (char *)(&DAT_0805b59c)[iVar12];
                do {
                  if (pcVar18 == pcVar6) {
                    pcVar6 = pcVar18 + -1;
                    goto LAB_080489f4;
                  }
                  pcVar16 = pcVar18 + -1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar16;
                } while (cVar1 != '/');
                pcVar16 = pcVar16 + (1 - (int)pcVar6);
                pcVar18 = &DAT_0805d90f;
                for (; pcVar16 != (char *)0x0; pcVar16 = pcVar16 + -1) {
                  *pcVar18 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar18 = pcVar18 + 1;
                }
                *pcVar18 = '\0';
LAB_080489f4:
                bVar21 = 0;
                iVar7 = *(int *)((int)register0x00000010 + -0x10);
                *(int *)((int)register0x00000010 + -0x10) = iVar7;
                iVar7 = iVar7 - (int)(pcVar6 + 1);
                pcVar6 = pcVar6 + 1;
                pcVar18 = &DAT_0805da0e;
                for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *pcVar18 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar18 = pcVar18 + 1;
                }
                (&DAT_0805b5a0)[iVar12] = pcVar18;
                *pcVar18 = '\0';
                piVar13 = *(int **)((int)register0x00000010 + -0xc);
                param_1 = *(char **)((int)register0x00000010 + -4);
                iVar12 = iVar12 + -1;
                uVar5 = (&DAT_0805b5a0)[iVar12];
                *(char **)((int)register0x00000010 + -4) = param_1;
                *(char **)((int)register0x00000010 + -8) = *(char **)((int)register0x00000010 + -8);
                *(int *)((int)register0x00000010 + -0xc) = iVar8 + -1;
                *(uint *)((int)register0x00000010 + -0x10) = (uint)pcVar10 & 0xfffffffe;
                *(BADSPACEBASE **)((int)register0x00000010 + -0x14) = register0x00000010;
                *(int *)((int)register0x00000010 + -0x18) = iVar12;
                *(int **)((int)register0x00000010 + -0x1c) = piVar13;
                *(undefined4 *)((int)register0x00000010 + -0x20) = uVar5;
                *(int *)((int)register0x00000010 + -0x24) = iVar12;
                puVar19 = (undefined1 *)(&DAT_0805b5a4)[iVar12];
              }
              *puVar19 = (char)param_1;
              *(char **)((int)register0x00000010 + -0x28) = param_1;
              pcVar6 = puVar19 + (uint)bVar21 * -2 + 1;
              while( true ) {
                piVar17 = (int *)((int)piVar13 + (uint)bVar21 * -2 + 1);
                cVar1 = *(char *)piVar13;
                param_1 = (char *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
                if (((cVar1 == '\n') || (cVar1 == '\t')) || (cVar1 == ' ')) break;
                *pcVar6 = cVar1;
                *(char **)((int)register0x00000010 + -8) =
                     *(char **)((int)register0x00000010 + -8) + -1;
                piVar13 = piVar17;
                pcVar6 = pcVar6 + (uint)bVar21 * -2 + 1;
              }
              *(char **)((int)register0x00000010 + -0x1c) = (char *)((int)piVar17 + -1);
              *(char **)((int)register0x00000010 + -4) = param_1;
              *pcVar6 = '\0';
              *(undefined4 *)((int)register0x00000010 + -0x2c) = 5;
              pcVar3 = (code *)swi(0x80);
              iVar8 = (*pcVar3)();
              ppcVar15 = (char **)((int)register0x00000010 + -0x24);
              if (iVar8 < 0) {
                pcVar18 = *(char **)((int)register0x00000010 + -0x1c);
                piVar17 = *(int **)((int)register0x00000010 + -0x18);
                iVar12 = *(int *)((int)register0x00000010 + -0x14);
                pcVar10 = *(char **)((int)register0x00000010 + -0xc);
                iVar8 = *(int *)((int)register0x00000010 + -8);
                pcVar6 = *(char **)((int)register0x00000010 + -4);
                param_1 = *(char **)register0x00000010;
                register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
              }
              else {
                while( true ) {
                  puVar11 = (uint *)ppcVar15;
                  pcVar3 = (code *)swi(0x80);
                  iVar8 = (*pcVar3)();
                  if (iVar8 == 0) break;
                  uVar4 = iVar8 + extraout_ECX;
                  uVar9 = 0;
                  iVar8 = extraout_ECX;
                  while (uVar9 = iVar8 + uVar9, ppcVar15 = (char **)(puVar11 + 1), uVar9 < uVar4) {
                    *puVar11 = uVar9 + 10;
                    puVar11[-1] = uVar9;
                    puVar11[-2] = 0x8048aaa;
                    uVar5 = FUN_0804824a();
                    iVar8 = puVar11[-1];
                    *puVar11 = uVar5;
                    bVar20 = DAT_0805da0d == (char)puVar11[1];
                    if (bVar20) {
                      puVar11[-1] = 0x8048abc;
                      FUN_08048af2();
                      iVar8 = extraout_ECX_00;
                      if (bVar20) {
                        pcVar6 = *(char **)((int)register0x00000010 + -0x20);
                        *(char **)((int)register0x00000010 + -0xc) =
                             *(char **)((int)register0x00000010 + -0xc) + 1;
                        pcVar10 = *(char **)((int)register0x00000010 + -0x18);
                        (&DAT_0805b5a0)[(int)pcVar10] = pcVar6;
                        *(char **)((int)register0x00000010 + -0x18) = pcVar10 + 1;
                        pcVar10 = extraout_EDX;
                        do {
                          cVar1 = *pcVar10;
                          pcVar18 = pcVar6 + (uint)bVar21 * -2 + 1;
                          *pcVar6 = cVar1;
                          pcVar10 = pcVar10 + (uint)bVar21 * -2 + 1;
                          pcVar6 = pcVar18;
                        } while (cVar1 != '\0');
                        *(char **)((int)register0x00000010 + -0x20) = pcVar18;
                      }
                    }
                    uVar4 = *puVar11;
                    uVar9 = (uint)*(ushort *)(iVar8 + 8);
                  }
                }
                puVar11[1] = 6;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                pcVar18 = (char *)puVar11[4];
                piVar17 = (int *)puVar11[5];
                iVar12 = puVar11[6];
                pcVar10 = (char *)puVar11[8];
                iVar8 = puVar11[9];
                pcVar6 = (char *)puVar11[10];
                param_1 = (char *)puVar11[0xb];
                register0x00000010 = (BADSPACEBASE *)(puVar11 + 0xc);
              }
              goto LAB_08048779;
            }
            if (((cVar1 == '|') && (*(char *)piVar13 != '|')) &&
               (*(char *)((int)piVar13 + -2) != '|')) goto LAB_0804896f;
            if (cVar1 != ' ') goto LAB_08048850;
          }
          param_1 = (char *)0x0;
          pcVar10 = (char *)((uint)pcVar10 & 0xfffffffe);
        }
LAB_08048850:
        *pcVar18 = (char)param_1;
        pcVar18 = pcVar18 + (uint)bVar21 * -2 + 1;
      }
LAB_08048851:
      pcVar6 = pcVar6 + -1;
      piVar17 = piVar13;
      if (pcVar6 == (char *)0x0) {
LAB_08048858:
        if (((uint)pcVar10 & 2) != 0) {
          _DAT_0805d674 = (char *)0x0;
          DAT_0805d668 = pcVar10;
          DAT_0805d66c = iVar8;
          _DAT_0805d670 = pcVar18 + -0x804a59a;
          DAT_0805d678 = iVar12;
          return (char *)0xffffffff;
        }
        *pcVar18 = '\0';
        if (((uint)pcVar10 & 0x10) != 0) {
          *(undefined4 *)((int)register0x00000010 + -4) = 5;
          pcVar3 = (code *)swi(0x80);
          DAT_0805d680 = (*pcVar3)();
          pcVar6 = (char *)FUN_080488d8();
          return pcVar6;
        }
        if (((uint)pcVar10 & 8) != 0) {
          *(undefined4 *)((int)register0x00000010 + -4) = 5;
          pcVar3 = (code *)swi(0x80);
          DAT_0805d67c = (*pcVar3)();
          pcVar6 = (char *)FUN_080488d8();
          return pcVar6;
        }
        pcVar6 = (char *)FUN_080488d8();
        return pcVar6;
      }
      goto LAB_08048779;
    }
    if (cVar1 == '#') goto LAB_08048858;
    if (cVar1 == '$') {
      *(char **)((int)register0x00000010 + -4) = pcVar18;
      *(char **)((int)register0x00000010 + -8) = pcVar6;
      *(int *)((int)register0x00000010 + -0xc) = iVar8;
      *(int **)((int)register0x00000010 + -0x10) = piVar13;
      iVar8 = *piVar13;
      iVar7 = iVar8;
      ppcVar15 = (char **)&DAT_0805d5a0;
      while( true ) {
        ppcVar14 = ppcVar15 + (uint)bVar21 * -2 + 1;
        param_1 = *ppcVar15;
        if (param_1 == (char *)0x0) break;
        ppcVar15 = ppcVar14;
        if (*param_1 == (char)iVar8) {
          *(char ***)((int)register0x00000010 + -0x14) = ppcVar14;
          *(int **)((int)register0x00000010 + -0x18) = piVar13;
          pcVar6 = param_1;
          do {
            pcVar18 = pcVar6;
            piVar17 = piVar13;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            piVar17 = (int *)((int)piVar13 + (uint)bVar21 * -2 + 1);
            pcVar18 = pcVar6 + (uint)bVar21 * -2 + 1;
            cVar1 = *pcVar6;
            cVar2 = *(char *)piVar13;
            pcVar6 = pcVar18;
            piVar13 = piVar17;
          } while (cVar1 == cVar2);
          if (*(byte *)((int)piVar17 + -1) < 0x21) {
            (&DAT_0805b5a0)[iVar12] = pcVar18;
            iVar12 = iVar12 + 1;
            iVar8 = *(int *)((int)register0x00000010 + -0xc) + 1;
            goto LAB_08048968;
          }
          piVar13 = *(int **)((int)register0x00000010 + -0x18);
          ppcVar15 = *(char ***)((int)register0x00000010 + -0x14);
        }
      }
      piVar13 = *(int **)((int)register0x00000010 + -0x10);
      do {
        piVar17 = (int *)((int)piVar13 + (uint)bVar21 * -2 + 1);
        cVar1 = *(char *)piVar13;
        param_1 = (char *)0x0;
        if (cVar1 == '\0') break;
        piVar13 = piVar17;
      } while (' ' < cVar1);
      iVar8 = *(int *)((int)register0x00000010 + -0xc);
LAB_08048968:
      pcVar6 = *(char **)((int)register0x00000010 + -8);
      pcVar18 = *(char **)((int)register0x00000010 + -4);
      goto LAB_08048779;
    }
    if (cVar1 == '\t') goto LAB_08048851;
    if (cVar1 == '\n') goto LAB_08048858;
    if (cVar1 == ' ') goto LAB_08048851;
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048851;
    if (cVar1 == '>') {
      return pcVar10;
    }
    if (cVar1 == '<') {
      return param_1;
    }
    *(char **)((int)register0x00000010 + -8) = *(char **)((int)register0x00000010 + -4);
    if ((cVar1 == '?') || (cVar1 == '*')) goto LAB_080489b6;
    if ((cVar1 != '|') || ((*(char *)piVar13 == '|' || (*(char *)((int)piVar13 + -2) == '|')))) {
      (&DAT_0805b5a0)[iVar12] = pcVar18;
      iVar12 = iVar12 + 1;
      iVar8 = iVar8 + 1;
      pcVar10 = (char *)((uint)pcVar10 | 1);
      goto LAB_080487fa;
    }
LAB_0804896f:
    *(char **)((int)register0x00000010 + -4) = pcVar6;
    *(int *)((int)register0x00000010 + -8) = iVar8;
    *pcVar18 = '\0';
    *(undefined4 *)((int)register0x00000010 + -0xc) = 0x8048979;
    FUN_080488d8();
    _DAT_0805d674 = (char *)((int)piVar13 + -0x804959a);
    *(undefined4 *)((int)register0x00000010 + -0xc) = 0x2a;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    DAT_0805d680 = DAT_0805d688;
    DAT_0805db22 = 1;
    *(undefined4 *)((int)register0x00000010 + -4) = 0x80489a6;
    FUN_08048b8c();
    DAT_0805d67c = DAT_0805d684;
    param_1 = *(char **)register0x00000010;
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __regparm3 FUN_080488d8(undefined4 param_1,undefined4 param_2)

{
  int unaff_EBP;
  
  (&DAT_0805b5a0)[unaff_EBP] = 0;
  DAT_0805d668 = 0;
  DAT_0805d66c = 0;
  _DAT_0805d670 = 0;
  _DAT_0805d674 = 0;
  DAT_0805d678 = 0;
  return param_2;
}



undefined8 __regparm3 FUN_08048af2(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  undefined *puVar4;
  char *unaff_EDI;
  bool bVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar3 = param_1;
  puVar4 = (undefined *)(unaff_ESI + 1);
LAB_08048af5:
  do {
    cVar1 = (char)uVar3;
    bVar5 = cVar1 == '*';
    if (bVar5) {
      iVar2 = FUN_08048b1b();
      if (!bVar5) goto LAB_08048b14;
    }
    else {
      if (cVar1 == '?') {
        unaff_EDI = unaff_EDI + 1;
        uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),*puVar4);
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        goto LAB_08048af5;
      }
      iVar2 = CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11(*unaff_EDI,cVar1));
      if ((iVar2 == 0) || (*unaff_EDI != cVar1)) {
LAB_08048b14:
        return CONCAT44(param_2,param_1);
      }
    }
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),*puVar4);
    unaff_EDI = unaff_EDI + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  } while( true );
}



undefined8 __regparm2
FUN_08048b1b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char *unaff_ESI;
  char *unaff_EDI;
  
  do {
    cVar1 = *unaff_ESI;
    param_1 = CONCAT31((int3)((uint)param_1 >> 8),cVar1);
    if (cVar1 == '\0') goto LAB_08048b34;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 == '*');
  while( true ) {
    cVar1 = *unaff_EDI;
    uVar3 = (undefined2)((uint)param_1 >> 0x10);
    uVar2 = CONCAT11(cVar1,(char)param_1);
    if ((char)param_1 == cVar1) {
      return CONCAT44(param_2,CONCAT22(uVar3,uVar2));
    }
    param_1 = CONCAT22(uVar3,uVar2);
    if (cVar1 == '\0') break;
    unaff_EDI = unaff_EDI + 1;
  }
LAB_08048b34:
  return CONCAT44(param_3,param_4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048b38(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *unaff_EDI;
  
  if ((char)DAT_0805db50 == '\x7f') {
    uVar2 = FUN_08048dd5();
    if (unaff_EDI == (undefined4 *)0x0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      register0x00000010 = (BADSPACEBASE *)&stack0x00000004;
    }
    *unaff_EDI = uVar2;
    unaff_EDI = unaff_EDI + -0x20176ca;
    _DAT_0805db0e = CONCAT11(10,(char)((uint)unaff_EDI >> 2) + '0');
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048b6f;
    FUN_08048df5();
    *(undefined4 *)((int)register0x00000010 + -4) = 2;
    *(undefined4 *)((int)register0x00000010 + -4) = 0x8048b7c;
    FUN_08048e06();
  }
  *(undefined4 *)((int)register0x00000010 + -4) = 0x8048b83;
  FUN_08048dd5();
  if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048b8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar18;
  
  bVar18 = 0;
  for (ppuVar6 = &PTR_DAT_08049394; puVar15 = DAT_0805b5a0, *ppuVar6 != (undefined *)0x0;
      ppuVar6 = ppuVar6 + 3) {
    FUN_0804824a();
    if (extraout_ECX == 0) {
      if (ppuVar6[2] != (undefined *)0x0) {
                    // WARNING: Could not recover jumptable at 0x08048bb2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*(code *)ppuVar6[1])();
        return;
      }
      break;
    }
  }
  FUN_080482ab();
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  puVar9 = &param_1;
  puVar8 = &param_1;
  if (iVar3 == 0) {
    if (DAT_0805db23 != '\0') {
      pcVar2 = (code *)swi(0x80);
      DAT_0805db58 = (*pcVar2)();
      param_1 = 0x39;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      param_2 = 0x36;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      DAT_0804950e = 0;
      param_3 = 0x43;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      param_4 = 0x43;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = (undefined4 *)&stack0x00000018;
    }
    if (DAT_0805d680 != 0) {
      puVar8[-1] = 1;
      puVar8[-1] = 0x3f;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      *puVar8 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = puVar8 + 2;
    }
    if (DAT_0805d67c != 0) {
      puVar8[-1] = 0x3f;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      *puVar8 = 6;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = puVar8 + 2;
    }
    *(undefined4 *)((int)puVar8 + -4) = 0x8048c57;
    FUN_0804823d();
    iVar3 = extraout_ECX_00;
    puVar14 = DAT_0805b5a0;
    do {
      puVar15 = puVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar15 = (undefined4 *)((int)puVar14 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)puVar14;
      puVar14 = puVar15;
    } while (cVar1 != '/');
    if (iVar3 == 0) {
      *(undefined4 *)((int)puVar8 + -4) = 5;
      iVar3 = *(int *)((int)puVar8 + -4);
      pcVar12 = &DAT_080494bd;
      do {
        pcVar16 = &DAT_0805a59a;
        do {
          pcVar13 = pcVar12 + (uint)bVar18 * -2 + 1;
          cVar1 = *pcVar12;
          pcVar17 = pcVar16 + (uint)bVar18 * -2 + 1;
          *pcVar16 = cVar1;
          pcVar12 = pcVar13;
          pcVar16 = pcVar17;
        } while (cVar1 != '\0');
        *(char **)((int)puVar8 + -4) = pcVar13;
        pcVar17[-1] = '/';
        puVar14 = DAT_0805b5a0;
        puVar11 = (undefined4 *)(pcVar17 + (uint)bVar18 * -2);
        do {
          cVar1 = *(char *)puVar14;
          puVar15 = (undefined4 *)((int)puVar11 + (uint)bVar18 * -2 + 1);
          *(char *)puVar11 = cVar1;
          puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar18 * -2 + 1);
          puVar11 = puVar15;
        } while (cVar1 != '\0');
        pcVar12 = *(char **)((int)puVar8 + -4);
        *(undefined4 *)((int)puVar8 + -4) = 0xb;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar7 = (undefined *)((int)puVar8 + 4);
        puVar8 = (undefined4 *)((int)puVar8 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    else {
      *(undefined4 *)((int)puVar8 + -4) = 0xb;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar7 = (undefined *)((int)puVar8 + 4);
    }
    *(undefined4 *)(puVar7 + -4) = 0x8048cc2;
    FUN_08048e1c();
    *(undefined4 *)(puVar7 + -4) = 0x8048ccc;
    FUN_08048e1c();
    *(undefined4 *)(puVar7 + -4) = 1;
    *(undefined4 *)(puVar7 + -4) = 1;
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    puVar9 = (undefined4 *)(puVar7 + 4);
  }
  iVar5 = DAT_0805d680;
  DAT_0805db24 = iVar3;
  if (DAT_0805d67c != 0) {
    *(undefined4 *)((int)puVar9 + -4) = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar9 = (undefined4 *)((int)puVar9 + 4);
    iVar5 = extraout_ECX_01;
  }
  if ((iVar5 != 1) && (iVar5 != 0)) {
    *(undefined4 *)((int)puVar9 + -4) = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar9 = (undefined4 *)((int)puVar9 + 4);
  }
  DAT_0805d67c = 0;
  DAT_0805d680 = 0;
  puVar14 = puVar9;
  if (DAT_0805db22 == '\0') {
    while( true ) {
      do {
        puVar10 = puVar14;
        puVar10[-1] = 2;
        puVar10[-1] = 0x72;
        pcVar2 = (code *)swi(0x80);
        iVar3 = (*pcVar2)();
        puVar14 = puVar10 + 1;
      } while (iVar3 < 0);
      if (DAT_0805db24 == iVar3) break;
      *puVar10 = 0x8048d3d;
      FUN_08048b38();
      puVar14 = puVar10 + 1;
    }
    DAT_0805db24 = 0;
    puVar11 = puVar10 + 1;
    if ((DAT_0805db23 == '\0') ||
       (puVar11 = puVar10 + 1, puVar14 = puVar10 + 1, (char)DAT_0805db50 != '\x7f'))
    goto LAB_08048d9f;
  }
  puVar11 = puVar14;
  *(undefined4 *)((int)puVar11 + -4) = 0x8048d62;
  uVar4 = FUN_08048dd5();
  if (puVar15 == (undefined4 *)0x0) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    puVar11 = (undefined4 *)((int)puVar11 + 4);
  }
  *puVar15 = uVar4;
  _DAT_0805db0e = CONCAT11(10,(char)((uint)(puVar15 + -0x20176ca) >> 2) + '0');
  if (DAT_0805db22 == '\0') {
    *(undefined4 *)((int)puVar11 + -4) = 0x8048d92;
    FUN_08048df5();
    *(undefined4 *)((int)puVar11 + -4) = 2;
    *(undefined4 *)((int)puVar11 + -4) = 0x8048d9f;
    FUN_08048e06();
  }
LAB_08048d9f:
  puVar11[-1] = 0x8048da4;
  FUN_080482ab();
  puVar11[-1] = 0x14;
  pcVar2 = (code *)swi(0x80);
  DAT_0805db58 = (*pcVar2)();
  *puVar11 = 0x39;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar11[1] = 2;
  puVar11[1] = 0x36;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_0805db22 = 0;
  FUN_08048266();
  return;
}



undefined4 __regparm3 FUN_08048dd5(undefined4 param_1)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  
  piVar2 = &DAT_0805db28;
  do {
    if ((int *)0x805db4f < piVar2) {
      return param_1;
    }
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
  } while (iVar1 != unaff_EBX);
  return param_1;
}



undefined8 __regparm3 FUN_08048df5(undefined4 param_1,undefined4 param_2)

{
  FUN_0804823d();
  FUN_08048e06();
  return CONCAT44(param_2,param_1);
}



void FUN_08048e06(void)

{
  code *pcVar1;
  
  if (DAT_0805db23 != '\0') {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
  }
  return;
}



undefined8 FUN_08048e1c(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_0804823d();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



void FUN_0804911e(void)

{
  FUN_08048df5();
  return;
}


