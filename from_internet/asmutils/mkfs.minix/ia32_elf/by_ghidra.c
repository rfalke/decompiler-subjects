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

int processEntry entry(void)

{
  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int extraout_ECX;
  undefined2 *puVar12;
  short *psVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  char **ppcVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  undefined2 *puVar25;
  undefined *puVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined4 *puVar24;
  
  bVar27 = 0;
  do {
    psVar13 = *(short **)((int)register0x00000010 + 8);
    puVar17 = (uint *)((int)register0x00000010 + 0xc);
    puVar16 = (undefined *)((int)register0x00000010 + 0xc);
    if (psVar13 != (short *)0x0) {
      if (*psVar13 == 0x692d) {
        puVar17 = (uint *)((int)register0x00000010 + 0x10);
        if (*(int *)((int)register0x00000010 + 0xc) != 0) {
          *(undefined4 *)((int)register0x00000010 + 0xc) = 0x80480aa;
          DAT_0804880d = FUN_08048374();
          psVar13 = *(short **)((int)register0x00000010 + 0x10);
          puVar16 = (undefined *)((int)register0x00000010 + 0x14);
          puVar17 = (uint *)((int)register0x00000010 + 0x14);
          if (psVar13 != (short *)0x0) goto LAB_080480b4;
        }
      }
      else {
LAB_080480b4:
        *(undefined4 *)(puVar16 + -4) = 2;
        *(undefined4 *)(puVar16 + -4) = 5;
        pcVar3 = (code *)swi(0x80);
        iVar8 = (*pcVar3)();
        puVar17 = (uint *)(puVar16 + 4);
        if (-1 < iVar8) {
          puVar17 = (uint *)(puVar16 + 8);
          DAT_08048805 = psVar13;
          DAT_08048809 = iVar8;
          if (*(int *)(puVar16 + 4) == 0) {
            *(undefined4 *)(puVar16 + 4) = 0x36;
            pcVar3 = (code *)swi(0x80);
            (*pcVar3)();
            puVar17 = (uint *)(puVar16 + 0xc);
            uVar9 = DAT_08048811 << 9;
            if (uVar9 == 0) {
              *(undefined4 *)(puVar16 + 8) = 2;
              *(undefined4 *)(puVar16 + 8) = 0x13;
              pcVar3 = (code *)swi(0x80);
              uVar9 = (*pcVar3)();
              puVar17 = (uint *)(puVar16 + 0x10);
            }
            if ((int)(uVar9 - 0x1800) < 0) goto LAB_0804808a;
            puVar17[-1] = uVar9 >> 10;
            puVar17[-2] = 0x13;
            pcVar3 = (code *)swi(0x80);
            (*pcVar3)();
            uVar9 = *puVar17;
            puVar17 = puVar17 + 1;
          }
          else {
            *(undefined4 *)(puVar16 + 4) = 0x80480d9;
            uVar9 = FUN_08048374();
          }
          if (5 < (int)uVar9) break;
        }
      }
    }
LAB_0804808a:
    *(undefined4 *)((int)puVar17 + -4) = 1;
    *(undefined4 *)((int)puVar17 + -4) = 1;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    register0x00000010 = (BADSPACEBASE *)((int)puVar17 + 4);
  } while( true );
  puVar17[-1] = 1;
  puVar17[-1] = 4;
  pcVar3 = (code *)swi(0x80);
  DAT_08048811 = uVar9;
  (*pcVar3)();
  _DAT_08048837 = 0x400;
  _DAT_0804883f = 1;
  _DAT_0804883d = 0x138f;
  _DAT_08048839 = 0x10081c00;
  if (DAT_0804880d == 0) {
    _DAT_0804882f = (undefined2)DAT_08048811;
    DAT_0804880d = DAT_08048811 / 3;
  }
  DAT_0804880d = DAT_0804880d + 0x1f & 0xffe0;
  _DAT_0804882d = (undefined2)DAT_0804880d;
  *puVar17 = DAT_0804880d;
  uVar2 = (ulonglong)(DAT_0804880d + 0x2000) / 0x2000;
  _DAT_08048831 = (short)uVar2;
  DAT_08048815 = (int)uVar2 * 0x400;
  iVar8 = (DAT_08048811 - (*puVar17 >> 5)) + -2;
  uVar9 = CONCAT22((short)((uint)iVar8 >> 0x10),(short)iVar8 - _DAT_08048831);
  *puVar17 = uVar9;
  uVar2 = (ulonglong)uVar9 * 0x1fff;
  DAT_0804881d = (int)((uVar2 & 0xffffffff00000000 | (ulonglong)((int)uVar2 + 1)) / 0x2001);
  _DAT_08048833 = (short)(*puVar17 - DAT_0804881d);
  DAT_08048819 = (*puVar17 - DAT_0804881d) * 0x400;
  DAT_08048821 = &DAT_08048c2d;
  DAT_08048825 = &DAT_08048c2d + DAT_08048815;
  psVar13 = DAT_08048805;
  do {
    cVar1 = *(char *)psVar13;
    psVar13 = (short *)((int)psVar13 + (uint)bVar27 * -2 + 1);
  } while (cVar1 != '\0');
  *puVar17 = 1;
  *puVar17 = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar17[1] = (uint)&DAT_080487f5;
  *puVar17 = (uint)&DAT_080487f5;
  DAT_080487f5 = 0x203a;
  puVar17[-1] = 0x80481dd;
  FUN_0804838b();
  *puVar17 = 1;
  *puVar17 = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar17[1] = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar17[3] = puVar17[3];
  puVar17[2] = 0x8048205;
  FUN_0804838b();
  puVar17[3] = 1;
  puVar17[3] = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar17[4] = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  puVar20 = DAT_08048821;
  *DAT_08048821 = 3;
  puVar14 = puVar20 + DAT_08048815;
  puVar20 = puVar20 + (DAT_0804880d >> 3);
  *puVar20 = 0xfe;
  puVar20 = puVar20 + (uint)bVar27 * -2 + 1;
  do {
    puVar21 = puVar20 + (uint)bVar27 * -2 + 1;
    *puVar20 = 0xff;
    puVar4 = DAT_08048825;
    puVar20 = puVar21;
  } while (puVar21 < puVar14);
  puVar17[5] = 2;
  DAT_08048829 = CONCAT22((short)(puVar17[5] >> 0x10),
                          (short)puVar17[5] + _DAT_08048831 + _DAT_08048833) + (DAT_0804880d >> 5);
  _DAT_08048835 = (undefined2)DAT_08048829;
  *DAT_08048825 = 3;
  puVar17[5] = 8;
  puVar20 = puVar4 + DAT_08048819;
  pbVar22 = puVar4 + (DAT_0804881d + 1U) / puVar17[5];
  *pbVar22 = *pbVar22 | ~(('\x01' << ((byte)((DAT_0804881d + 1U) % puVar17[5]) & 0x1f)) - 1U);
  puVar23 = (undefined4 *)(pbVar22 + 1);
  do {
    puVar24 = puVar23 + (uint)bVar27 * -2 + 1;
    *puVar23 = 0xffffffff;
    iVar8 = DAT_08048809;
    puVar23 = puVar24;
  } while ((int)puVar24 <= (int)puVar20);
  puVar17[5] = 4;
  pcVar3 = (code *)swi(0x80);
  iVar10 = (*pcVar3)();
  ppcVar19 = (char **)(puVar17 + 7);
  if (-1 < iVar10) {
    puVar17[6] = 4;
    pcVar3 = (code *)swi(0x80);
    iVar10 = (*pcVar3)();
    ppcVar19 = (char **)(puVar17 + 8);
    if (-1 < iVar10) {
      puVar17[7] = 4;
      pcVar3 = (code *)swi(0x80);
      uVar28 = (*pcVar3)();
      ppcVar19 = (char **)(puVar17 + 9);
      if (-1 < (int)uVar28) {
        puVar12 = (undefined2 *)(extraout_ECX + (int)((ulonglong)uVar28 >> 0x20));
        puVar17[8] = (uint)puVar12;
        puVar17[7] = iVar8;
        puVar25 = puVar12 + (uint)bVar27 * -2 + 1;
        *puVar12 = 0x41ed;
        puVar17[6] = 0x18;
        pcVar3 = (code *)swi(0x80);
        uVar7 = (*pcVar3)();
        puVar23 = (undefined4 *)(puVar25 + (uint)bVar27 * -2 + 1);
        *puVar25 = uVar7;
        puVar24 = puVar23 + (uint)bVar27 * -2 + 1;
        *puVar23 = 0x40;
        puVar17[7] = 0xd;
        pcVar3 = (code *)swi(0x80);
        uVar11 = (*pcVar3)();
        uVar9 = (uint)bVar27;
        *puVar24 = uVar11;
        puVar17[8] = 0x2f;
        pcVar3 = (code *)swi(0x80);
        uVar6 = (*pcVar3)();
        puVar26 = (undefined *)((int)(puVar24 + uVar9 * -2 + 1) + (uint)bVar27 * -2 + 1);
        *(undefined *)(puVar24 + uVar9 * -2 + 1) = uVar6;
        *puVar26 = 2;
        *(short *)(puVar26 + (uint)bVar27 * -2 + 1) = (short)DAT_08048829;
        uVar9 = DAT_0804880d >> 5;
        puVar5 = puVar17 + 0xc;
        do {
          puVar18 = puVar5;
          puVar18[-1] = 4;
          pcVar3 = (code *)swi(0x80);
          iVar8 = (*pcVar3)();
          ppcVar19 = (char **)(puVar18 + 1);
          if (iVar8 < 0) goto LAB_0804835a;
          uVar9 = uVar9 - 1;
          puVar5 = puVar18 + 1;
        } while (uVar9 != 0);
        *puVar18 = 0x40;
        *puVar18 = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar18[1] = 1;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        ppcVar19 = (char **)(puVar18 + 3);
      }
    }
  }
LAB_0804835a:
  ppcVar19[-1] = (char *)0x2;
  ppcVar19[-1] = (char *)0x4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  *ppcVar19 = (char *)0x1;
  pcVar15 = *ppcVar19;
  *ppcVar19 = (char *)0x1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppcVar19[1] = (char *)0xa;
  iVar8 = 0;
  while( true ) {
    cVar1 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    if ((char)(cVar1 - 0x30U) < '\0') break;
    iVar8 = iVar8 * (int)ppcVar19[1] + (uint)(byte)(cVar1 - 0x30U);
  }
  return iVar8;
}



void FUN_08048374(void)

{
  char cVar1;
  char *unaff_EBX;
  
  do {
    cVar1 = *unaff_EBX;
    unaff_EBX = unaff_EBX + 1;
  } while (-1 < (char)(cVar1 + -0x30));
  return;
}



void __regparm3 FUN_0804838b(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *unaff_EDI;
  
  iVar3 = 0;
  do {
    uVar1 = param_1 / 10;
    iVar3 = iVar3 + 1;
    puVar4 = (uint *)((int)register0x00000010 + -4);
    puVar5 = (undefined4 *)((int)register0x00000010 + -4);
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
    *puVar4 = param_1 % 10;
    param_1 = uVar1;
  } while (uVar1 != 0);
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *unaff_EDI = (char)uVar2 + '0';
    iVar3 = iVar3 + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar3 != 0);
  return;
}


