typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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




int FUN_0804805c(void)

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



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x08048212)

int entry(undefined4 param_1,char **param_2,char **param_3,char **param_4,undefined param_5)

{
  short sVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  char cVar7;
  char *pcVar5;
  ushort *puVar6;
  uint uVar8;
  undefined4 extraout_ECX;
  byte bVar10;
  int iVar9;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ushort **ppuVar14;
  char *unaff_EBP;
  char **ppcVar15;
  char **unaff_ESI;
  char **ppcVar16;
  char **ppcVar17;
  char **unaff_EDI;
  int in_GS_OFFSET;
  byte bVar18;
  undefined8 uVar19;
  int unaff_retaddr;
  
  ppcVar17 = param_4;
  ppcVar16 = param_3;
  ppcVar15 = param_2;
  bVar18 = 0;
  ppuVar14 = (ushort **)&param_1;
  if (unaff_retaddr == 1) goto LAB_08048264;
  unaff_EBP = (char *)0x0;
  puVar12 = &param_3;
  unaff_EDI = ppcVar15;
  if (*(char *)param_2 == '-') {
    cVar7 = *(char *)((int)param_2 + 1);
    puVar13 = &param_4;
    ppuVar14 = (ushort **)&param_4;
    if (param_3 == (char **)0x0) goto LAB_08048264;
    pcVar5 = unaff_EBP;
    if (cVar7 != 'z') {
      if (cVar7 != 'n') {
        if (cVar7 == 't') {
          param_3 = (char **)0x80481ee;
          FUN_0804805c();
          param_3 = (char **)0x36;
          pcVar3 = (code *)swi(0x80);
          iVar9 = (*pcVar3)();
          ppuVar14 = (ushort **)&param_5;
          puVar13 = (undefined4 *)&param_5;
          unaff_ESI = ppcVar16;
        }
        else {
          param_3 = (char **)0x6b;
          puVar13 = (undefined4 *)&param_5;
          pcVar3 = (code *)swi(0x80);
          iVar9 = (*pcVar3)();
          ppuVar14 = (ushort **)puVar13;
          if (iVar9 < 0) goto LAB_08048264;
          cVar7 = *(char *)((int)ppcVar15 + 1);
          if (cVar7 == 's') goto LAB_0804825d;
          if ((cVar7 != 'r') && (cVar7 != 'w')) {
            unaff_ESI = (char **)0x804826d;
            do {
              ppcVar16 = (char **)((int)unaff_ESI + (uint)bVar18 * -2 + 1);
              cVar2 = *(char *)unaff_ESI;
              if (cVar2 == cVar7) {
                unaff_ESI = ppcVar16 + (uint)bVar18 * -2 + 1;
                pcVar5 = *ppcVar16;
                goto joined_r0x080481dc;
              }
              unaff_ESI = ppcVar16 + 1;
            } while (cVar2 != '\0');
            goto LAB_0804804c;
          }
          param_4 = (char **)0x5;
          pcVar3 = (code *)swi(0x80);
          iVar9 = (*pcVar3)();
          ppuVar14 = (ushort **)&stack0x00000018;
          puVar13 = (undefined4 *)&stack0x00000018;
        }
        if (iVar9 < 0) goto LAB_08048264;
        goto LAB_0804825d;
      }
      unaff_EBP = (char *)0x1;
      pcVar5 = unaff_EBP;
    }
joined_r0x080481dc:
    ppuVar14 = (ushort **)puVar13;
    if (pcVar5 != (char *)0x0) goto LAB_08048264;
  }
  else {
    if (*(char *)param_2 == '!') goto LAB_08048054;
    puVar12 = &param_4;
    puVar13 = &param_4;
    unaff_ESI = param_3;
    if (param_3 == (char **)0x0) {
LAB_0804804c:
      *(undefined4 *)((int)puVar13 + -4) = 2;
      *(undefined4 *)((int)puVar13 + -4) = 1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar12 = (undefined4 *)((int)puVar13 + 4);
LAB_08048054:
      *(undefined4 *)((int)puVar12 + -4) = 3;
      *(undefined4 *)((int)puVar12 + -4) = 1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      iVar9 = 0;
      do {
        ppcVar15 = (char **)((int)unaff_ESI + (uint)bVar18 * -2 + 1);
        cVar7 = *(char *)unaff_ESI;
        unaff_ESI = ppcVar15;
      } while (cVar7 < '\"');
      while( true ) {
        if ((cVar7 < '0') || (':' < cVar7)) {
          return iVar9;
        }
        iVar9 = iVar9 + (uint)(byte)(cVar7 - 0x30);
        cVar7 = *(char *)ppcVar15;
        if (cVar7 < '0') {
          return iVar9;
        }
        if (':' < cVar7) break;
        iVar9 = iVar9 * 10;
        ppcVar15 = (char **)((int)ppcVar15 + (uint)bVar18 * -2 + 1);
      }
      return iVar9;
    }
    if (*(char *)param_3 != '=') {
      if (*(short *)param_3 != 0x3d21) {
        unaff_ESI = (char **)((int)param_3 + 1);
        if (*(char *)param_3 != '-') goto LAB_08048054;
        unaff_ESI = (char **)((int)param_3 + 3);
        sVar1 = *(short *)(char **)((int)param_3 + 1);
        puVar13 = &param_4;
        if (*(char *)unaff_ESI != '\0') goto LAB_0804804c;
        if (sVar1 == 0x7165) goto LAB_0804823e;
        if (sVar1 != 0x656e) {
          if (sVar1 != 0x7467) {
            if (sVar1 != 0x6567) {
              if (sVar1 != 0x746c) {
                puVar13 = &param_4;
                if (sVar1 != 0x656c) goto LAB_0804804c;
                unaff_EBP = (char *)0x2;
              }
              param_4 = (char **)0x804814a;
              param_4 = (char **)FUN_0804805c();
              param_3 = (char **)0x8048152;
              iVar9 = FUN_0804805c();
              if (unaff_EBP == (char *)0x2) {
                puVar13 = (undefined4 *)&param_5;
                ppuVar14 = (ushort **)&param_5;
                unaff_ESI = ppcVar15;
                if ((int)param_4 < iVar9) goto LAB_08048264;
              }
              else {
                puVar13 = (undefined4 *)&param_5;
                ppuVar14 = (ushort **)&param_5;
                unaff_ESI = ppcVar15;
                if ((int)param_4 <= iVar9) goto LAB_08048264;
              }
              goto LAB_0804825d;
            }
            unaff_EBP = (char *)0x2;
          }
          param_4 = (char **)0x8048115;
          param_4 = (char **)FUN_0804805c();
          param_3 = (char **)0x804811d;
          iVar9 = FUN_0804805c();
          ppuVar14 = (ushort **)&param_5;
          puVar13 = (undefined4 *)&param_5;
          if (unaff_EBP == (char *)0x2) {
            ppuVar14 = (ushort **)&param_5;
            unaff_ESI = ppcVar15;
            if (iVar9 < (int)param_4) goto LAB_08048264;
          }
          else {
            puVar13 = (undefined4 *)&param_5;
            unaff_ESI = ppcVar15;
            if (iVar9 <= (int)param_4) goto LAB_08048264;
          }
          goto LAB_0804825d;
        }
      }
      unaff_EBP = (char *)0x1;
    }
LAB_0804823e:
    pcVar5 = (char *)0x0;
    uVar8 = 0xffffffff;
    param_4 = param_2;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar7 = *(char *)ppcVar15;
      ppcVar15 = (char **)((int)ppcVar15 + 1);
    } while (cVar7 != '\0');
    uVar8 = ~uVar8;
    puVar13 = (undefined4 *)&param_5;
    ppcVar16 = param_2;
    do {
      unaff_ESI = ppcVar17;
      ppcVar15 = ppcVar16;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      ppcVar15 = (char **)((int)ppcVar16 + 1);
      unaff_ESI = (char **)((int)ppcVar17 + 1);
      cVar7 = *(char *)ppcVar17;
      cVar2 = *(char *)ppcVar16;
      ppcVar17 = unaff_ESI;
      ppcVar16 = ppcVar15;
    } while (cVar7 == cVar2);
    if ((*(char *)((int)ppcVar15 + -1) == '\0') && (*(char *)((int)unaff_ESI + -1) == '\0')) {
      pcVar5 = (char *)0x1;
    }
    ppuVar14 = (ushort **)&param_5;
    unaff_EDI = ppcVar15;
    if (pcVar5 == unaff_EBP) goto LAB_08048264;
  }
LAB_0804825d:
  *(undefined4 *)((int)puVar13 + -4) = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppuVar14 = (ushort **)((int)puVar13 + 4);
  unaff_EDI = ppcVar15;
LAB_08048264:
  ppuVar14[-1] = (ushort *)0x1;
  uVar11 = ppuVar14[-1];
  ppuVar14[-1] = (ushort *)0x1;
  pcVar3 = (code *)swi(0x80);
  uVar19 = (*pcVar3)();
  pcVar5 = (char *)((ulonglong)uVar19 >> 0x20);
  puVar6 = (ushort *)uVar19;
  cVar7 = (char)((ulonglong)uVar19 >> 8);
  *pcVar5 = *pcVar5 + cVar7;
  *ppuVar14 = puVar6;
  ppuVar14[-1] = (ushort *)extraout_ECX;
  ppuVar14[-2] = (ushort *)pcVar5;
  ppuVar14[-3] = (ushort *)uVar11;
  ppuVar14[-4] = (ushort *)(ppuVar14 + 1);
  ppuVar14[-5] = (ushort *)unaff_EBP;
  ppuVar14[-6] = (ushort *)unaff_ESI;
  ppuVar14[-7] = (ushort *)unaff_EDI;
  bVar18 = *(byte *)puVar6;
  bVar4 = (byte)uVar19;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *puVar6 = *puVar6 + (ushort)CARRY1(bVar18,bVar4) * (((ushort)uVar19 & 3) - (*puVar6 & 3));
  *(byte *)puVar6 = *(byte *)puVar6 & bVar4;
  pcVar5 = (char *)((int)puVar6 * 2 + 0x40);
  *pcVar5 = *pcVar5 + cVar7;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)(in_GS_OFFSET + (int)puVar6) = *(byte *)(in_GS_OFFSET + (int)puVar6) + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)(puVar6 + 0x338000) = *(byte *)(puVar6 + 0x338000) + bVar4;
  bVar18 = *(byte *)puVar6;
  bVar10 = (byte)((ulonglong)uVar19 >> 0x28);
  *(byte *)puVar6 = *(byte *)puVar6 + bVar10;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4 + CARRY1(bVar18,bVar10);
  *unaff_EBP = *unaff_EBP + bVar10;
  *(byte *)puVar6 = *(byte *)puVar6 | bVar4;
  *(byte *)(puVar6 + 0x20) = *(byte *)(puVar6 + 0x20) + (char)((uint)uVar11 >> 8);
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
  *(byte *)puVar6 = *(byte *)puVar6 + bVar4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


