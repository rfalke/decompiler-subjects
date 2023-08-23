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




int FUN_0804804c(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *unaff_ESI;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  iVar3 = 0;
  do {
    cVar2 = *unaff_ESI;
    pcVar4 = unaff_ESI + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  } while (cVar2 < '\"');
  while( true ) {
    if ((cVar2 < '0') || (':' < cVar2)) {
      return iVar3;
    }
    iVar3 = iVar3 + (uint)(byte)(cVar2 - 0x30);
    cVar2 = *pcVar4;
    if (cVar2 < '0') {
      return iVar3;
    }
    if (':' < cVar2) break;
    iVar3 = iVar3 * 10;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  }
  return iVar3;
}



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

int processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,char **param_4,char **param_5,char **param_6
     )

{
  short sVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  char cVar8;
  int iVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar9;
  undefined4 extraout_ECX;
  byte bVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ushort **ppuVar14;
  char *unaff_retaddr;
  char **ppcVar15;
  char **in_ESI;
  char **ppcVar16;
  char **ppcVar17;
  char **in_EDI;
  int in_GS_OFFSET;
  byte bVar18;
  undefined8 uVar19;
  
  ppcVar17 = param_6;
  ppcVar16 = param_5;
  ppcVar15 = param_4;
  bVar18 = 0;
  ppuVar14 = (ushort **)&param_3;
  if (param_2 == 1) goto LAB_08048264;
  unaff_retaddr = (char *)0x0;
  puVar12 = &param_5;
  in_EDI = ppcVar15;
  if (*(char *)param_4 == '-') {
    cVar8 = *(char *)((int)param_4 + 1);
    puVar13 = &param_6;
    ppuVar14 = (ushort **)&param_6;
    if (param_5 == (char **)0x0) goto LAB_08048264;
    pcVar6 = unaff_retaddr;
    if (cVar8 != 'z') {
      if (cVar8 != 'n') {
        if (cVar8 == 't') {
          param_5 = (char **)0x80481ee;
          FUN_0804805c();
          param_5 = (char **)0x36;
          pcVar3 = (code *)swi(0x80);
          iVar5 = (*pcVar3)();
          ppuVar14 = (ushort **)&stack0x00000014;
          puVar13 = (undefined4 *)&stack0x00000014;
          in_ESI = ppcVar16;
        }
        else {
          param_5 = (char **)0x6b;
          puVar13 = (undefined4 *)&stack0x00000014;
          pcVar3 = (code *)swi(0x80);
          iVar5 = (*pcVar3)();
          ppuVar14 = (ushort **)puVar13;
          if (iVar5 < 0) goto LAB_08048264;
          cVar8 = *(char *)((int)ppcVar15 + 1);
          if (cVar8 == 's') goto LAB_0804825d;
          if ((cVar8 != 'r') && (cVar8 != 'w')) {
            ppcVar16 = (char **)0x804826d;
            while( true ) {
              ppcVar17 = (char **)((int)ppcVar16 + (uint)bVar18 * -2 + 1);
              cVar2 = *(char *)ppcVar16;
              if (cVar2 == cVar8) break;
              ppcVar16 = ppcVar17 + 1;
              if (cVar2 == '\0') {
                iVar5 = FUN_0804804c();
                return iVar5;
              }
            }
            in_ESI = ppcVar17 + (uint)bVar18 * -2 + 1;
            pcVar6 = *ppcVar17;
            goto joined_r0x08048237;
          }
          param_6 = (char **)0x5;
          pcVar3 = (code *)swi(0x80);
          iVar5 = (*pcVar3)();
          ppuVar14 = (ushort **)&stack0x00000018;
          puVar13 = (undefined4 *)&stack0x00000018;
        }
        if (iVar5 < 0) goto LAB_08048264;
        goto LAB_0804825d;
      }
      unaff_retaddr = (char *)0x1;
      pcVar6 = unaff_retaddr;
    }
joined_r0x08048237:
    ppuVar14 = (ushort **)puVar13;
    if (pcVar6 != (char *)0x0) goto LAB_08048264;
  }
  else {
    if (*(char *)param_4 == '!') goto LAB_08048054;
    puVar12 = &param_6;
    in_ESI = param_5;
    if (param_5 == (char **)0x0) {
code_r0x0804804c:
      param_5 = (char **)0x1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar12 = (undefined4 *)&stack0x00000014;
LAB_08048054:
      *(undefined4 *)((int)puVar12 + -4) = 3;
      *(undefined4 *)((int)puVar12 + -4) = 1;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      iVar5 = 0;
      do {
        ppcVar15 = (char **)((int)in_ESI + (uint)bVar18 * -2 + 1);
        cVar8 = *(char *)in_ESI;
        in_ESI = ppcVar15;
      } while (cVar8 < '\"');
      while( true ) {
        if ((cVar8 < '0') || (':' < cVar8)) {
          return iVar5;
        }
        iVar5 = iVar5 + (uint)(byte)(cVar8 - 0x30);
        cVar8 = *(char *)ppcVar15;
        if (cVar8 < '0') {
          return iVar5;
        }
        if (':' < cVar8) break;
        iVar5 = iVar5 * 10;
        ppcVar15 = (char **)((int)ppcVar15 + (uint)bVar18 * -2 + 1);
      }
      return iVar5;
    }
    if (*(char *)param_5 != '=') {
      if (*(short *)param_5 != 0x3d21) {
        in_ESI = (char **)((int)param_5 + 1);
        if (*(char *)param_5 != '-') goto LAB_08048054;
        in_ESI = (char **)((int)param_5 + 3);
        sVar1 = *(short *)(char **)((int)param_5 + 1);
        if (*(char *)in_ESI != '\0') goto code_r0x0804804c;
        if (sVar1 == 0x7165) goto LAB_0804823e;
        if (sVar1 != 0x656e) {
          in_ESI = ppcVar15;
          if (sVar1 != 0x7467) {
            if (sVar1 != 0x6567) {
              if (sVar1 != 0x746c) {
                if (sVar1 != 0x656c) {
                  iVar5 = FUN_0804804c();
                  return iVar5;
                }
                unaff_retaddr = (char *)0x2;
              }
              param_6 = (char **)0x804814a;
              param_6 = (char **)FUN_0804805c();
              param_5 = (char **)0x8048152;
              iVar5 = FUN_0804805c();
              if (unaff_retaddr == (char *)0x2) {
                puVar13 = (undefined4 *)&stack0x00000014;
                ppuVar14 = (ushort **)&stack0x00000014;
                if ((int)param_6 < iVar5) goto LAB_08048264;
              }
              else {
                puVar13 = (undefined4 *)&stack0x00000014;
                ppuVar14 = (ushort **)&stack0x00000014;
                if ((int)param_6 <= iVar5) goto LAB_08048264;
              }
              goto LAB_0804825d;
            }
            unaff_retaddr = (char *)0x2;
          }
          param_6 = (char **)0x8048115;
          param_6 = (char **)FUN_0804805c();
          param_5 = (char **)0x804811d;
          iVar5 = FUN_0804805c();
          puVar13 = (undefined4 *)&stack0x00000014;
          if (unaff_retaddr == (char *)0x2) {
            ppuVar14 = (ushort **)&stack0x00000014;
            if (iVar5 < (int)param_6) goto LAB_08048264;
          }
          else {
            puVar13 = (undefined4 *)&stack0x00000014;
            ppuVar14 = (ushort **)&stack0x00000014;
            if (iVar5 <= (int)param_6) goto LAB_08048264;
          }
          goto LAB_0804825d;
        }
      }
      unaff_retaddr = (char *)0x1;
    }
LAB_0804823e:
    pcVar6 = (char *)0x0;
    uVar9 = 0xffffffff;
    param_6 = param_4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar8 = *(char *)ppcVar15;
      ppcVar15 = (char **)((int)ppcVar15 + 1);
    } while (cVar8 != '\0');
    uVar9 = ~uVar9;
    puVar13 = (undefined4 *)&stack0x00000014;
    ppcVar16 = param_4;
    do {
      in_ESI = ppcVar17;
      ppcVar15 = ppcVar16;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      ppcVar15 = (char **)((int)ppcVar16 + 1);
      in_ESI = (char **)((int)ppcVar17 + 1);
      cVar8 = *(char *)ppcVar17;
      cVar2 = *(char *)ppcVar16;
      ppcVar17 = in_ESI;
      ppcVar16 = ppcVar15;
    } while (cVar8 == cVar2);
    if ((*(char *)((int)ppcVar15 + -1) == '\0') && (*(char *)((int)in_ESI + -1) == '\0')) {
      pcVar6 = (char *)0x1;
    }
    ppuVar14 = (ushort **)&stack0x00000014;
    in_EDI = ppcVar15;
    if (pcVar6 == unaff_retaddr) goto LAB_08048264;
  }
LAB_0804825d:
  *(undefined4 *)((int)puVar13 + -4) = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  ppuVar14 = (ushort **)((int)puVar13 + 4);
  in_EDI = ppcVar15;
LAB_08048264:
  ppuVar14[-1] = (ushort *)0x1;
  uVar11 = ppuVar14[-1];
  ppuVar14[-1] = (ushort *)0x1;
  pcVar3 = (code *)swi(0x80);
  uVar19 = (*pcVar3)();
  pcVar6 = (char *)((ulonglong)uVar19 >> 0x20);
  puVar7 = (ushort *)uVar19;
  cVar8 = (char)((ulonglong)uVar19 >> 8);
  *pcVar6 = *pcVar6 + cVar8;
  *ppuVar14 = puVar7;
  ppuVar14[-1] = (ushort *)extraout_ECX;
  ppuVar14[-2] = (ushort *)pcVar6;
  ppuVar14[-3] = (ushort *)uVar11;
  ppuVar14[-4] = (ushort *)(ppuVar14 + 1);
  ppuVar14[-5] = (ushort *)unaff_retaddr;
  ppuVar14[-6] = (ushort *)in_ESI;
  ppuVar14[-7] = (ushort *)in_EDI;
  bVar18 = *(byte *)puVar7;
  bVar4 = (byte)uVar19;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *puVar7 = *puVar7 + (ushort)CARRY1(bVar18,bVar4) * (((ushort)uVar19 & 3) - (*puVar7 & 3));
  *(byte *)puVar7 = *(byte *)puVar7 & bVar4;
  pcVar6 = (char *)((int)puVar7 * 2 + 0x40);
  *pcVar6 = *pcVar6 + cVar8;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)(in_GS_OFFSET + (int)puVar7) = *(byte *)(in_GS_OFFSET + (int)puVar7) + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)(puVar7 + 0x338000) = *(byte *)(puVar7 + 0x338000) + bVar4;
  bVar18 = *(byte *)puVar7;
  bVar10 = (byte)((ulonglong)uVar19 >> 0x28);
  *(byte *)puVar7 = *(byte *)puVar7 + bVar10;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4 + CARRY1(bVar18,bVar10);
  *unaff_retaddr = *unaff_retaddr + bVar10;
  *(byte *)puVar7 = *(byte *)puVar7 | bVar4;
  *(byte *)(puVar7 + 0x20) = *(byte *)(puVar7 + 0x20) + (char)((uint)uVar11 >> 8);
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
  *(byte *)puVar7 = *(byte *)puVar7 + bVar4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


