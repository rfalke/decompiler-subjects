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




int FUN_0804804c(void)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *unaff_ESI;
    pcVar3 = unaff_ESI + 1;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 < '\"');
  while( true ) {
    if ((cVar1 < '0') || (':' < cVar1)) {
      return iVar2;
    }
    iVar2 = iVar2 + (uint)(byte)(cVar1 - 0x30);
    cVar1 = *pcVar3;
    if (cVar1 < '0') {
      return iVar2;
    }
    if (':' < cVar1) break;
    iVar2 = iVar2 * 10;
    pcVar3 = pcVar3 + 1;
  }
  return iVar2;
}



void processEntry entry(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  DAT_080484ef = 0xf;
  iVar2 = -1;
  do {
    pcVar3 = param_3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar3;
  } while (cVar1 != '\0');
  if (*(int *)(pcVar3 + -5) == 0x666f6469) {
    DAT_080484df._0_1_ = 1;
    FUN_08048259();
    return;
  }
  if (pcVar3[-2] != '5') {
    FUN_08048259();
    return;
  }
  FUN_08048259();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480ae(void)

{
  DAT_080484e7 = FUN_080480c7;
  _DAT_080484eb = 0x80483bf;
  FUN_08048183();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480c7(void)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  byte bVar7;
  int iStack_4;
  
  uVar3 = _DAT_080484e3;
  bVar7 = 0;
  iStack_4 = 0x80480d7;
  iStack_4 = FUN_0804804c();
  if ((uVar3 >> 8 & 1) != 0) {
    iStack_4 = -iStack_4;
  }
  piVar5 = &iStack_4;
  if ((uVar3 >> 7 & 1) != 0) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    iVar4 = -1;
    pcVar6 = &DAT_08048afb;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != ' ');
    iStack_4 = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    piVar5 = (int *)&stack0x0000000c;
    if (DAT_08048afb != 'y') {
      return;
    }
  }
  *piVar5 = 0x25;
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    if ((uVar3 >> 5 & 1) != 0) {
      piVar5[1] = 1;
      piVar5[1] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
    }
  }
  else if ((uVar3 >> 6 & 1) == 0) {
    piVar5[1] = 1;
    piVar5[1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048183(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int *unaff_EDI;
  undefined *puVar11;
  char *pcVar12;
  byte bVar13;
  char *pcVar10;
  
  bVar13 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar5 = (*pcVar2)();
  puVar6 = &stack0x00000004;
  if (-1 < iVar5) {
    pcVar2 = (code *)swi(0x80);
    DAT_080484f7 = iVar5;
    (*pcVar2)();
    puVar7 = (undefined4 *)&stack0x00000008;
    puVar6 = &stack0x00000008;
    if (*unaff_EDI != 0) {
      do {
        puVar11 = &DAT_080484fb;
        for (iVar5 = 0x600; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
        }
        pcVar2 = (code *)swi(0x80);
        iVar5 = (*pcVar2)();
        if (iVar5 == 0) {
                    // WARNING: Could not recover jumptable at 0x08048253. Too many branches
                    // WARNING: Treating indirect jump as call
          (*_DAT_080484eb)();
          return;
        }
        puVar8 = &DAT_080484fb;
        puVar3 = (undefined4 *)((int)puVar7 + 4);
        while (puVar7 = puVar3, puVar8[8] != '\0') {
          puVar8 = (undefined1 *)
                   CONCAT22((short)((uint)puVar8 >> 0x10),(short)puVar8 + *(short *)(puVar8 + 8));
          cVar4 = puVar8[10];
          puVar3 = puVar7;
          if (('0' < cVar4) &&
             (pcVar10 = puVar8 + (uint)bVar13 * -2 + 0xb, pcVar9 = &DAT_08048afb, cVar4 < ':')) {
            do {
              pcVar12 = pcVar9 + (uint)bVar13 * -2 + 1;
              *pcVar9 = cVar4;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
              pcVar9 = pcVar12;
            } while (cVar4 != '\0');
            pcVar10 = s__stat_080483d0;
            do {
              cVar4 = *pcVar10;
              *pcVar12 = cVar4;
              pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
              pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
            } while (cVar4 != '\0');
            puVar7[-1] = 5;
            pcVar2 = (code *)swi(0x80);
            iVar5 = (*pcVar2)();
            puVar3 = puVar7 + 1;
            if (-1 < iVar5) {
              *puVar7 = 3;
              pcVar2 = (code *)swi(0x80);
              _DAT_080484f3 = iVar5;
              (*pcVar2)();
              pcVar10 = &DAT_08048afb;
              do {
                pcVar9 = pcVar10 + (uint)bVar13 * -2 + 1;
                cVar4 = *pcVar10;
                pcVar10 = pcVar9;
              } while (cVar4 != '(');
              iVar5 = -1;
              pcVar10 = (char *)puVar7[2];
              do {
                pcVar12 = pcVar9;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar12 = pcVar9 + (uint)bVar13 * -2 + 1;
                cVar4 = *pcVar9;
                cVar1 = *pcVar10;
                pcVar9 = pcVar12;
                pcVar10 = pcVar10 + (uint)bVar13 * -2 + 1;
              } while (cVar4 == cVar1);
              puVar3 = puVar7 + 2;
              if (pcVar12[-1] == ')') {
                puVar7[1] = 0x8048251;
                (*DAT_080484e7)();
                puVar3 = puVar7 + 2;
              }
            }
          }
        }
      } while( true );
    }
  }
  *(undefined4 *)(puVar6 + -4) = 2;
  *(undefined4 *)(puVar6 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_080484ef = 0xf;
  iVar5 = -1;
  pcVar10 = *(char **)(puVar6 + 8);
  do {
    pcVar9 = pcVar10;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar10 + (uint)bVar13 * -2 + 1;
    cVar4 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar4 != '\0');
  if (*(int *)(pcVar9 + -5) == 0x666f6469) {
    DAT_080484df._0_1_ = 1;
    FUN_08048259();
    return;
  }
  if (pcVar9[-2] != '5') {
    FUN_08048259();
    return;
  }
  FUN_08048259();
  return;
}



void FUN_08048259(void)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  char **ppcVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  char **ppcVar7;
  char **ppcVar8;
  code *unaff_EBP;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  byte bVar12;
  
  bVar12 = 0;
  ppcVar4 = (char **)register0x00000010;
code_r0x08048259:
  do {
    ppcVar7 = ppcVar4;
    pcVar9 = *ppcVar7;
    ppcVar8 = ppcVar7 + 1;
    if (pcVar9 == (char *)0x0) {
LAB_08048333:
      (*unaff_EBP)();
      return;
    }
    iVar6 = 0;
    pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
    if (*pcVar9 != '-') goto LAB_08048333;
    uVar1 = (uint)bVar12;
    cVar2 = *pcVar10;
    if (cVar2 == '-') goto LAB_08048333;
    if (cVar2 < ':') goto LAB_0804832e;
    ppcVar4 = ppcVar7 + 1;
  } while (cVar2 == 'e');
  if (cVar2 == 'g') {
LAB_0804831a:
    iVar6 = iVar6 + 1;
LAB_0804831b:
    iVar6 = iVar6 + 1;
LAB_0804831c:
    iVar6 = iVar6 + 1;
LAB_0804831d:
    iVar6 = iVar6 + 1;
LAB_0804831e:
    iVar6 = iVar6 + 1;
LAB_0804831f:
    iVar6 = iVar6 + 1;
LAB_08048320:
    iVar6 = iVar6 + 1;
  }
  else {
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'i') goto LAB_0804831b;
    if (cVar2 == 'l') {
LAB_0804832e:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'q') goto LAB_0804831c;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'v') goto LAB_0804831d;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'V') goto LAB_0804831e;
    ppcVar4 = ppcVar7 + 1;
    if (cVar2 == 'w') goto code_r0x08048259;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 's') goto LAB_0804831f;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 == 'x') goto LAB_08048320;
    ppcVar8 = ppcVar7 + 1;
    if (cVar2 != 'o') {
      piVar5 = (int *)(s_Unknown_option__Really_kill_Kill_080483d6 + 0x5a);
      while( true ) {
        piVar11 = piVar5;
        if (*piVar11 == 0) break;
        piVar5 = (int *)((int)piVar11 + (uint)bVar12 * -8 + 5);
        if (*piVar11 == *(int *)(pcVar10 + uVar1 * -2)) {
          DAT_080484ef._0_1_ = *(undefined *)(piVar11 + (uint)bVar12 * -2 + 1);
          goto LAB_08048333;
        }
      }
      *ppcVar7 = (char *)0x1;
      *ppcVar7 = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      *(undefined *)((int)(pcVar10 + uVar1 * -2) + 1) = 10;
      ppcVar7[1] = (char *)0x4;
      ppcVar7[1] = (char *)0x1;
      ppcVar7[1] = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar7[2] = (char *)0x1;
      ppcVar7[2] = (char *)0x1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar8 = ppcVar7 + 4;
      iVar6 = extraout_ECX;
      goto LAB_0804831a;
    }
  }
  (&DAT_080484e3)[(int)(iVar6 + 1U) >> 3] =
       (&DAT_080484e3)[(int)(iVar6 + 1U) >> 3] | '\x01' << (iVar6 + 1U & 7);
  ppcVar4 = ppcVar8;
  goto code_r0x08048259;
}


