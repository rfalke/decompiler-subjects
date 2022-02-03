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




void __regparm3 FUN_0804804c(uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined *unaff_ESI;
  undefined *puVar4;
  
  iVar3 = 0x10;
  do {
    iVar2 = iVar3;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    unaff_ESI[iVar2 + 0x10] = (char)(uVar1 % 10) + '0';
    iVar3 = iVar2 + -1;
  } while (param_1 != 0);
  puVar4 = unaff_ESI + iVar2 + 0xf;
  for (iVar3 = -(iVar2 + -0x11); puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}



void FUN_08048070(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_ESI;
  char *pcVar3;
  char *unaff_EDI;
  
  cVar2 = *unaff_ESI;
  pcVar3 = unaff_ESI + 1;
  do {
    pcVar1 = unaff_EDI + 1;
    *unaff_EDI = cVar2;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    unaff_EDI = pcVar1;
  } while (cVar2 != '\0');
  *pcVar1 = ' ';
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  char **ppcVar8;
  int *piVar9;
  undefined4 *puVar10;
  char **ppcVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char **ppcVar16;
  byte bVar17;
  undefined8 uVar18;
  int unaff_retaddr;
  
  bVar17 = 0;
  ppcVar11 = (char **)&stack0x00000004;
  if (unaff_retaddr < 3) {
LAB_080481f4:
    *(undefined4 *)((int)ppcVar11 + -4) = 2;
  }
  else {
    iVar12 = 0;
    ppcVar16 = (char **)&stack0x00000008;
    while( true ) {
      pcVar13 = *ppcVar16;
      ppcVar11 = ppcVar16 + 1;
      ppcVar5 = ppcVar16 + 1;
      if (pcVar13 == (char *)0x0) break;
      pcVar14 = pcVar13 + (uint)bVar17 * -2 + 1;
      if (*pcVar13 == '-') {
        cVar1 = *pcVar14;
        if (cVar1 == '\0') {
          (&DAT_08048286)[iVar12] = pcVar14 + (uint)bVar17 * -2 + -1;
          ppcVar5 = ppcVar16 + 1;
          if (iVar12 != 0) break;
          iVar12 = 1;
          ppcVar16 = ppcVar16 + 1;
        }
        else if (cVar1 == 's') {
          _DAT_080482aa = _DAT_080482aa | 8;
          ppcVar16 = ppcVar16 + 1;
        }
        else {
          if (cVar1 != 'l') goto LAB_080481f4;
          _DAT_080482aa = _DAT_080482aa | 0x10;
          ppcVar16 = ppcVar16 + 1;
        }
      }
      else {
        (&DAT_08048286)[iVar12] = pcVar14 + -1;
        *ppcVar16 = (char *)0x5;
        pcVar3 = (code *)swi(0x80);
        iVar6 = (*pcVar3)();
        ppcVar11 = ppcVar16 + 2;
        ppcVar8 = ppcVar16 + 2;
        ppcVar16 = ppcVar16 + 2;
        if (iVar6 < 0) goto LAB_080481f4;
        (&DAT_0804828e)[iVar12] = iVar6;
        ppcVar5 = ppcVar8;
        if (iVar12 != 0) break;
        iVar12 = 1;
      }
    }
    ppcVar11 = ppcVar5;
    DAT_080482a6 = 0x80484ae;
    iVar12 = -1;
    do {
      iVar12 = iVar12 + 1;
      ((int *)ppcVar11)[-1] = 2;
      ((int *)ppcVar11)[-1] = 0x13;
      pcVar3 = (code *)swi(0x80);
      iVar6 = (*pcVar3)();
      piVar9 = (int *)ppcVar11 + 1;
      if (iVar6 == 0) {
LAB_08048133:
        *(int *)((int)piVar9 + -4) = DAT_080482a6;
        puVar4 = (undefined4 *)((int)piVar9 + -4);
        iVar15 = DAT_080482a6;
        do {
          puVar10 = puVar4;
          iVar15 = iVar15 + 0x1000;
          puVar10[-1] = 0x2d;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          *puVar10 = 3;
          pcVar3 = (code *)swi(0x80);
          uVar18 = (*pcVar3)();
          puVar4 = puVar10 + 2;
        } while ((int)((ulonglong)uVar18 >> 0x20) == (int)uVar18);
        iVar7 = puVar10[2];
        ppcVar11 = (char **)(puVar10 + 3);
        iVar6 = ((int)uVar18 + extraout_ECX_00) - iVar7;
        DAT_080482a6 = iVar15;
      }
      else {
        *ppcVar11 = (char *)iVar12;
        ((int *)ppcVar11)[-1] = 2;
        ((int *)ppcVar11)[-1] = 1;
        pcVar3 = (code *)swi(0x80);
        iVar7 = (*pcVar3)();
        iVar12 = ((int *)ppcVar11)[1];
        piVar9 = (int *)ppcVar11 + 2;
        ppcVar11 = (char **)((int *)ppcVar11 + 2);
        iVar6 = extraout_ECX;
        if (iVar7 < 0) goto LAB_08048133;
      }
      (&DAT_08048296)[iVar12] = (char *)iVar7;
      (&DAT_0804829e)[iVar12] = iVar6;
    } while (iVar12 == 0);
    ppcVar11[-1] = (char *)&DAT_08048296;
    iVar12 = DAT_0804829e;
    pcVar13 = DAT_08048296;
    pcVar14 = DAT_0804829a;
    if (DAT_080482a2 <= DAT_0804829e) {
      ppcVar11[-1] = (char *)&DAT_0804829a;
      iVar12 = DAT_080482a2;
    }
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      cVar1 = *pcVar13;
      cVar2 = *pcVar14;
      pcVar13 = pcVar13 + (uint)bVar17 * -2 + 1;
      pcVar14 = pcVar14 + (uint)bVar17 * -2 + 1;
    } while (cVar1 == cVar2);
    ppcVar16 = (char **)ppcVar11[-1];
    if (iVar12 == 0) {
      if (DAT_0804829e == DAT_080482a2) goto LAB_080481eb;
      ppcVar11[-1] = (char *)0x1;
      ppcVar11[-1] = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      pcVar13 = ppcVar16[-4];
      do {
        pcVar14 = pcVar13 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14[-1] = '\n';
      *ppcVar11 = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar11 = ppcVar11 + 2;
    }
    else {
      iVar12 = (int)ppcVar16[2] - iVar12;
      ppcVar11[-1] = (char *)iVar12;
      pcVar13 = *ppcVar16;
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        pcVar14 = pcVar13;
        do {
          pcVar13 = pcVar14;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar13 = pcVar14 + (uint)bVar17 * -2 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar13;
        } while (cVar1 != '\n');
      } while (iVar12 != 0);
      ppcVar11[-2] = (char *)0x804821c;
      FUN_08048070();
      ppcVar11[-2] = (char *)0x8048227;
      FUN_08048070();
      ppcVar11[-2] = (char *)0x8048231;
      FUN_08048070();
      ppcVar11[-1] = (char *)iVar6;
      ppcVar11[-2] = (char *)0x804823a;
      FUN_0804804c();
      ppcVar11[-2] = (char *)0x8048244;
      FUN_08048070();
      ppcVar11[-1] = (char *)0x804824c;
      FUN_0804804c();
      DAT_080482ae = 10;
      ppcVar11[-1] = (char *)0x1;
      ppcVar11[-1] = (char *)0x4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      ppcVar11 = ppcVar11 + 1;
    }
    *(undefined4 *)((int)ppcVar11 + -4) = 1;
  }
LAB_080481eb:
  do {
    *(undefined4 *)((int)ppcVar11 + -4) = 1;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    ppcVar11 = (char **)((int)ppcVar11 + 4);
  } while( true );
}


