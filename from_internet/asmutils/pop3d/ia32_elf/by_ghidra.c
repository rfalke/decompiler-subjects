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




void FUN_08048279(void)

{
  code *pcVar1;
  
  FUN_08048292();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_08048292(uint param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 unaff_retaddr;
  
  pcVar3 = &DAT_0805a12f;
  do {
    uVar2 = param_1 / ram0x080480fb;
    *pcVar3 = (char)(param_1 % ram0x080480fb) + '0';
    pcVar3 = pcVar3 + -1;
    param_1 = uVar2;
  } while (uVar2 != 0);
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(param_3,unaff_retaddr);
}



undefined8 FUN_080482d6(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_080482ee(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char **ppcVar12;
  undefined4 *puVar13;
  char **ppcVar14;
  char **ppcVar15;
  undefined4 *puVar16;
  char *unaff_EBP;
  undefined1 *puVar17;
  char *pcVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  char *pcVar21;
  byte *pbVar22;
  byte bVar23;
  undefined8 uVar24;
  char *apcStack_1c [7];
  
  bVar23 = 0;
  iVar7 = 0x100;
  pcVar8 = &DAT_08049edc;
  pcVar11 = &DAT_08059edb;
  do {
    pcVar18 = pcVar8;
    pcVar8 = pcVar18 + 1;
    cVar1 = *pcVar18;
    if (cVar1 == ' ') {
      DAT_0805a0f9 = pcVar18 + -0x8049edc;
      iVar7 = 0x100;
      pcVar11 = pcVar8;
      pcVar18 = &DAT_08059ee5;
      goto LAB_08048334;
    }
    if (cVar1 == '\n') break;
    *pcVar11 = cVar1;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar11 + 1;
  } while (iVar7 != 0);
  DAT_0805a0f9 = pcVar18 + -0x8049edd;
  goto LAB_0804834d;
  while( true ) {
    *pcVar18 = cVar1;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar11 + 1;
    pcVar18 = pcVar18 + 1;
    if (iVar7 == 0) break;
LAB_08048334:
    cVar1 = *pcVar11;
    pcVar21 = pcVar11 + 1;
    if ((cVar1 == ' ') || (pcVar21 = pcVar11, cVar1 == '\n')) {
      DAT_0805a109 = pcVar21 + (-1 - (int)pcVar8);
      break;
    }
  }
LAB_0804834d:
  if ((char)DAT_0805a0f9 < '\x04') {
    pcVar3 = (code *)swi(0x80);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  if (DAT_0805a0ed != '\x01') {
    pcVar8 = DAT_0805a0f9;
    pcVar11 = &DAT_08048253;
    pcVar18 = &DAT_08059edb;
    do {
      if (pcVar8 == (char *)0x0) break;
      pcVar8 = pcVar8 + -1;
      cVar1 = *pcVar11;
      cVar2 = *pcVar18;
      pcVar11 = pcVar11 + 1;
      pcVar18 = pcVar18 + 1;
    } while (cVar1 == cVar2);
    if (pcVar8 == (char *)0x0) {
      DAT_0805a0ee = '\x01';
      puVar17 = &DAT_08059ee5;
      puVar19 = &DAT_08059eef;
      for (pcVar8 = DAT_0805a109; pcVar8 != (char *)0x0; pcVar8 = pcVar8 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      *puVar19 = 0;
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    if (DAT_0805a0ee == '\0') {
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    pcVar8 = DAT_0805a0f9;
    pcVar11 = &DAT_08048257;
    pcVar18 = &DAT_08059edb;
    do {
      if (pcVar8 == (char *)0x0) break;
      pcVar8 = pcVar8 + -1;
      cVar1 = *pcVar11;
      cVar2 = *pcVar18;
      pcVar11 = pcVar11 + 1;
      pcVar18 = pcVar18 + 1;
    } while (cVar1 == cVar2);
    if (pcVar8 == (char *)0x0) {
      puVar17 = &DAT_08059ee5;
      puVar20 = &DAT_08059fee;
      for (pcVar8 = DAT_0805a109; pcVar8 != (char *)0x0; pcVar8 = pcVar8 + -1) {
        *puVar20 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar20 = puVar20 + 1;
      }
      puVar20[1] = 0;
      DAT_0805a0ed = '\x01';
      pcVar11 = &DAT_08048ecc;
      pcVar8 = DAT_08048ec8;
      do {
        *pcVar11 = *pcVar8;
        pcVar11 = pcVar11 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = &DAT_08059eef;
      for (; *pcVar11 = *pcVar8, *pcVar11 != '\0'; pcVar11 = pcVar11 + 1) {
        pcVar8 = pcVar8 + 1;
      }
      DAT_08048cc6 = 1;
      DAT_08048cc7 = '\0';
      FUN_080484bf();
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      FUN_08048292();
      DAT_08048cc6 = '\0';
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
  }
  pcVar8 = DAT_0805a0f9;
  pcVar11 = &DAT_0804825b;
  pcVar18 = &DAT_08059edb;
  do {
    if (pcVar8 == (char *)0x0) break;
    pcVar8 = pcVar8 + -1;
    cVar1 = *pcVar11;
    cVar2 = *pcVar18;
    pcVar11 = pcVar11 + 1;
    pcVar18 = pcVar18 + 1;
  } while (cVar1 == cVar2);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = &DAT_08048ecc;
    pcVar3 = (code *)swi(0x80);
    uVar24 = (*pcVar3)();
    DAT_0805a105 = (int)uVar24;
    puVar13 = &param_1;
    if (DAT_0805a105 < 0) {
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
    }
    else {
      uVar4 = 0;
      DAT_0805a130 = (char *)0x0;
      DAT_0805a148 = 0;
      pcVar21 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f;
      pcVar18 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x25;
      pcVar11 = extraout_ECX;
      while( true ) {
        DAT_0805a105 = (int)uVar24;
        puVar13[-1] = uVar4;
        puVar13[-2] = pcVar11;
        puVar13[-3] = (int)((ulonglong)uVar24 >> 0x20);
        puVar13[-4] = pcVar8;
        puVar13[-5] = puVar13;
        puVar13[-6] = unaff_EBP;
        puVar13[-7] = pcVar18;
        puVar13[-8] = pcVar21;
        puVar13[-9] = 3;
        pcVar3 = (code *)swi(0x80);
        DAT_0805a160 = (*pcVar3)();
        if (DAT_0805a160 == 0) break;
        pcVar21 = (char *)puVar13[-7];
        pcVar18 = (char *)puVar13[-6];
        unaff_EBP = (char *)puVar13[-5];
        uVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        pcVar11 = &DAT_08049edc;
        pcVar8 = &DAT_08049edc;
        pcVar9 = &DAT_08049edc + DAT_0805a160;
        do {
          uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),*pcVar11);
          if (*pcVar11 == *pcVar21) {
            pcVar21 = pcVar21 + 1;
            if (pcVar21 == pcVar18) {
              DAT_0805a130 = (char *)((int)DAT_0805a130 + 1);
              if (DAT_08048cc7 != '\0') {
                puVar13[-1] = uVar4;
                puVar13[-2] = pcVar11;
                puVar13[-3] = pcVar9;
                puVar13[-4] = pcVar8;
                puVar13[-5] = puVar13;
                puVar13[-6] = unaff_EBP;
                puVar13[-7] = pcVar18;
                puVar13[-8] = pcVar21;
                puVar13[-9] = 0x8048566;
                FUN_08048292();
                puVar13[-9] = 1;
                puVar13[-9] = 4;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                puVar13[-8] = 0x8048583;
                FUN_08048279();
                pcVar18 = (char *)puVar13[-6];
                unaff_EBP = (char *)puVar13[-5];
                ppcVar12 = (char **)(puVar13 + -3);
                pcVar9 = (char *)puVar13[-2];
                uVar4 = *puVar13;
                puVar13 = puVar13 + 1;
                DAT_0805a148 = 0;
                pcVar8 = *ppcVar12;
              }
              goto LAB_0804858e;
            }
          }
          else {
LAB_0804858e:
            pcVar11 = pcVar8;
            pcVar21 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f;
            DAT_0805a148 = DAT_0805a148 + 1;
            pcVar8 = pcVar11 + 1;
          }
          uVar24 = CONCAT44(pcVar9,DAT_0805a105);
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 != pcVar9);
      }
      DAT_0805a130 = (char *)((int)DAT_0805a130 + 1);
      if (DAT_08048cc7 == '\0') {
        if (DAT_08048cc6 != '\0') {
          DAT_08048cc6 = 0;
          return *puVar13;
        }
        *puVar13 = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar13[1] = 0x804862c;
        FUN_08048292();
        puVar13[1] = 1;
        puVar13[1] = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar13[2] = 0x8048649;
        FUN_08048279();
      }
      else {
        *puVar13 = 0x80485c1;
        FUN_08048292();
        *puVar13 = 1;
        *puVar13 = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar13[1] = 0x80485de;
        FUN_08048279();
        puVar13[1] = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        DAT_08048cc7 = '\0';
      }
      puVar13[2] = 6;
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
    }
  }
  else {
    pcVar8 = DAT_0805a0f9;
    pcVar11 = &DAT_08048267;
    pcVar18 = &DAT_08059edb;
    do {
      if (pcVar8 == (char *)0x0) break;
      pcVar8 = pcVar8 + -1;
      cVar1 = *pcVar11;
      cVar2 = *pcVar18;
      pcVar11 = pcVar11 + 1;
      pcVar18 = pcVar18 + 1;
    } while (cVar1 == cVar2);
    if (pcVar8 == (char *)0x0) {
      DAT_08048cc7 = '\x01';
      uVar4 = FUN_080484bf();
    }
    else {
      pcVar8 = DAT_0805a0f9;
      pcVar11 = &DAT_0804826b;
      pcVar18 = &DAT_08059edb;
      do {
        if (pcVar8 == (char *)0x0) break;
        pcVar8 = pcVar8 + -1;
        cVar1 = *pcVar11;
        cVar2 = *pcVar18;
        pcVar11 = pcVar11 + 1;
        pcVar18 = pcVar18 + 1;
      } while (cVar1 == cVar2);
      if (pcVar8 == (char *)0x0) {
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        param_1 = 1;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        register0x00000010 = (BADSPACEBASE *)&stack0x0000000c;
      }
      pcVar8 = DAT_0805a0f9;
      pcVar11 = &DAT_0804825f;
      pcVar18 = &DAT_08059edb;
      do {
        if (pcVar8 == (char *)0x0) break;
        pcVar8 = pcVar8 + -1;
        cVar1 = *pcVar11;
        cVar2 = *pcVar18;
        pcVar11 = pcVar11 + (uint)bVar23 * -2 + 1;
        pcVar18 = pcVar18 + (uint)bVar23 * -2 + 1;
      } while (cVar1 == cVar2);
      if (pcVar8 != (char *)0x0) {
        pcVar8 = DAT_0805a0f9;
        pcVar11 = &DAT_08048263;
        pcVar18 = &DAT_08059edb;
        do {
          if (pcVar8 == (char *)0x0) break;
          pcVar8 = pcVar8 + -1;
          cVar1 = *pcVar11;
          cVar2 = *pcVar18;
          pcVar11 = pcVar11 + (uint)bVar23 * -2 + 1;
          pcVar18 = pcVar18 + (uint)bVar23 * -2 + 1;
        } while (cVar1 == cVar2);
        if (pcVar8 != (char *)0x0) {
          *(undefined4 *)((int)register0x00000010 + -4) = 4;
          pcVar3 = (code *)swi(0x80);
          uVar4 = (*pcVar3)();
          return uVar4;
        }
        DAT_08048cc8 = '\x01';
      }
      if ((int)DAT_0805a109 < 1) {
        *(undefined4 *)((int)register0x00000010 + -4) = 4;
        pcVar3 = (code *)swi(0x80);
        uVar4 = (*pcVar3)();
      }
      else {
        if (9 < (int)DAT_0805a109) {
          *(undefined4 *)((int)register0x00000010 + -4) = 4;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
        }
        iVar7 = 1;
        pcVar8 = (char *)0x0;
        pbVar22 = &DAT_08059ee5 + (int)DAT_0805a109;
        do {
          pbVar22 = pbVar22 + -1;
          iVar5 = *pbVar22 - 0x30;
          if ((9 < iVar5) || (iVar5 < 0)) {
            *(undefined4 *)((int)register0x00000010 + -4) = 4;
            pcVar3 = (code *)swi(0x80);
            uVar4 = (*pcVar3)();
            return uVar4;
          }
          pcVar8 = pcVar8 + iVar5 * iVar7;
          iVar7 = iVar7 * 10;
        } while (pbVar22 != &DAT_08059ee5);
        DAT_0805a138 = (char *)0x0;
        DAT_0805a13c = (char *)0x0;
        DAT_08048cc6 = '\x01';
        *(undefined4 *)((int)register0x00000010 + -4) = 0x804878e;
        DAT_0805a134 = pcVar8;
        FUN_080484bf();
        if (((int)DAT_0805a134 < 1) || ((int)(DAT_0805a130 + 1) <= (int)DAT_0805a134)) {
          *(undefined4 *)((int)register0x00000010 + -4) = 4;
          pcVar3 = (code *)swi(0x80);
          uVar4 = (*pcVar3)();
        }
        else {
          *(undefined4 *)((int)register0x00000010 + -4) = 0x80487cb;
          FUN_08048279();
          pcVar8 = &DAT_08048ecc;
          *(undefined4 *)((int)register0x00000010 + -4) = 5;
          pcVar3 = (code *)swi(0x80);
          uVar24 = (*pcVar3)();
          DAT_0805a105 = (int)uVar24;
          if (DAT_0805a105 < 0) {
            *(undefined4 *)register0x00000010 = 4;
            pcVar3 = (code *)swi(0x80);
            uVar4 = (*pcVar3)();
          }
          else {
            DAT_0805a130 = (char *)0x1;
            pcVar21 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f;
            pcVar18 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x25;
            uVar4 = 0;
            _DAT_08048cc9 = 0;
            DAT_0805a138 = (char *)0x0;
            DAT_0805a13c = (char *)0x0;
            DAT_0805a144 = (char *)0x0;
            pcVar11 = extraout_ECX_00;
            ppcVar14 = (char **)((int)register0x00000010 + 4);
            while( true ) {
              DAT_0805a105 = (int)uVar24;
              ppcVar14[-1] = (char *)uVar4;
              ppcVar14[-2] = pcVar11;
              ppcVar14[-3] = (char *)(int)((ulonglong)uVar24 >> 0x20);
              ppcVar14[-4] = pcVar8;
              ppcVar14[-5] = (char *)ppcVar14;
              ppcVar14[-6] = unaff_EBP;
              ppcVar14[-7] = pcVar18;
              ppcVar14[-8] = pcVar21;
              ppcVar14[-9] = (char *)0x3;
              pcVar3 = (code *)swi(0x80);
              DAT_0805a158 = (*pcVar3)();
              if (DAT_0805a158 == 0) break;
              pcVar21 = ppcVar14[-7];
              pcVar18 = ppcVar14[-6];
              pcVar6 = *ppcVar14;
              pcVar11 = &DAT_08049edc;
              pcVar10 = &DAT_08049edc + DAT_0805a158;
              uVar24 = CONCAT44(pcVar10,DAT_0805a105);
              unaff_EBP = (char *)0x0;
              pcVar9 = &DAT_08049edc;
              if (DAT_0805a134 == (char *)0x1) {
                DAT_0805a138 = (char *)0x1;
                DAT_0805a134 = (char *)0x2;
              }
              do {
                pcVar6 = (char *)CONCAT31((int3)((uint)pcVar6 >> 8),*pcVar11);
                if (*pcVar11 == *pcVar21) {
                  pcVar21 = pcVar21 + 1;
                  pcVar8 = pcVar9;
                  if (pcVar21 == pcVar18) {
                    DAT_0805a130 = DAT_0805a130 + 1;
                    pcVar6 = DAT_0805a130;
                    if (DAT_0805a130 == DAT_0805a134) {
                      unaff_EBP = pcVar11 + -0x8049ee2;
                      DAT_0805a144 = DAT_0805a144 + (int)unaff_EBP;
                      if (DAT_0805a138 != (char *)0x0) {
                        DAT_0805a13c = DAT_0805a144 + 2;
                        goto LAB_0804892d;
                      }
                      DAT_0805a138 = DAT_0805a144;
                      DAT_0805a134 = DAT_0805a134 + 1;
                      pcVar6 = DAT_0805a144;
                    }
                    DAT_0805a144 = DAT_0805a144 + -(int)unaff_EBP;
                    goto LAB_080488f8;
                  }
                }
                else {
LAB_080488f8:
                  pcVar21 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f;
                  pcVar8 = pcVar9 + 1;
                  pcVar11 = pcVar9;
                }
                pcVar11 = pcVar11 + 1;
                pcVar9 = pcVar8;
              } while (pcVar11 != pcVar10);
              *ppcVar14 = pcVar6;
              DAT_0805a144 = DAT_0805a144 + DAT_0805a158;
              uVar4 = *ppcVar14;
              ppcVar14 = ppcVar14 + 1;
            }
            pcVar21 = ppcVar14[-7];
            pcVar18 = ppcVar14[-6];
            unaff_EBP = ppcVar14[-5];
            pcVar9 = ppcVar14[-3];
            pcVar10 = ppcVar14[-2];
            pcVar11 = ppcVar14[-1];
            DAT_0805a13c = DAT_0805a144;
LAB_0804892d:
            DAT_0805a138 = DAT_0805a138 + 3;
            if (DAT_0805a138 == (char *)0x4) {
              DAT_0805a138 = (char *)0x0;
            }
            if (DAT_0805a138 == (char *)0x4) {
              DAT_0805a138 = (char *)0x0;
            }
            DAT_0805a140 = (int)DAT_0805a13c - (int)DAT_0805a138;
            if (DAT_08048cc8 == '\x01') {
              *ppcVar14 = (char *)DAT_0805a140;
              ppcVar14[-1] = pcVar11;
              ppcVar14[-2] = pcVar10;
              ppcVar14[-3] = pcVar9;
              ppcVar14[-4] = (char *)(ppcVar14 + 1);
              ppcVar14[-5] = unaff_EBP;
              ppcVar14[-6] = pcVar18;
              ppcVar14[-7] = pcVar21;
              ppcVar14[-8] = (char *)0x4;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppcVar14[-7] = (char *)0x6;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppcVar14[-6] = (char *)0x2;
              ppcVar14[-6] = (char *)0x5;
              pcVar3 = (code *)swi(0x80);
              DAT_0805a105 = (*pcVar3)();
              ppcVar15 = ppcVar14 + -4;
              while( true ) {
                ppcVar15[-1] = (char *)0x13;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                *ppcVar15 = (char *)0x3;
                pcVar3 = (code *)swi(0x80);
                iVar7 = (*pcVar3)();
                if (iVar7 == 0) break;
                ppcVar15[1] = (char *)0x13;
                pcVar3 = (code *)swi(0x80);
                DAT_0805a160 = iVar7;
                (*pcVar3)();
                ppcVar15[2] = (char *)0x4;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                ppcVar15 = ppcVar15 + 4;
                DAT_0805a13c = DAT_0805a13c + DAT_0805a160;
                DAT_0805a138 = DAT_0805a138 + DAT_0805a160;
              }
              ppcVar15[9] = (char *)0x5d;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppcVar15[10] = (char *)0x6;
              pcVar3 = (code *)swi(0x80);
              uVar4 = (*pcVar3)();
              DAT_08048cc8 = '\0';
            }
            else {
              *ppcVar14 = (char *)0x4;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppcVar14[1] = (char *)0x8048a58;
              FUN_08048292();
              ppcVar14[1] = (char *)0x4;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppcVar14[2] = (char *)0x13;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              DAT_0805a101 = 0;
              ppcVar14 = ppcVar14 + 4;
              do {
                puVar16 = ppcVar14;
                puVar16[-1] = 3;
                pcVar3 = (code *)swi(0x80);
                DAT_0805a0fd = (*pcVar3)();
                DAT_0805a101 = DAT_0805a101 + DAT_0805a0fd;
                *puVar16 = 4;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                ppcVar14 = (char **)(puVar16 + 2);
              } while (DAT_0805a101 != DAT_0805a140);
              puVar16[1] = 6;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              puVar16[2] = 4;
              pcVar3 = (code *)swi(0x80);
              uVar4 = (*pcVar3)();
            }
          }
        }
      }
    }
  }
  return uVar4;
}



undefined4 FUN_080484bf(void)

{
  code *pcVar1;
  undefined4 uVar2;
  char *extraout_ECX;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined4 *puVar7;
  undefined4 unaff_EBP;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  char *apcStack_1c [7];
  
  pcVar5 = &DAT_08048ecc;
  pcVar1 = (code *)swi(0x80);
  uVar10 = (*pcVar1)();
  DAT_0805a105 = (int)uVar10;
  puVar7 = (undefined4 *)&stack0x00000004;
  if (DAT_0805a105 < 0) {
    pcVar1 = (code *)swi(0x80);
    uVar2 = (*pcVar1)();
  }
  else {
    uVar2 = 0;
    DAT_0805a130 = 0;
    DAT_0805a148 = 0;
    pcVar9 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f;
    pcVar8 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x25;
    pcVar3 = extraout_ECX;
    while( true ) {
      DAT_0805a105 = (int)uVar10;
      puVar7[-1] = uVar2;
      puVar7[-2] = pcVar3;
      puVar7[-3] = (int)((ulonglong)uVar10 >> 0x20);
      puVar7[-4] = pcVar5;
      puVar7[-5] = puVar7;
      puVar7[-6] = unaff_EBP;
      puVar7[-7] = pcVar8;
      puVar7[-8] = pcVar9;
      puVar7[-9] = 3;
      pcVar1 = (code *)swi(0x80);
      DAT_0805a160 = (*pcVar1)();
      if (DAT_0805a160 == 0) break;
      pcVar9 = (char *)puVar7[-7];
      pcVar8 = (char *)puVar7[-6];
      unaff_EBP = puVar7[-5];
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      pcVar3 = &DAT_08049edc;
      pcVar5 = &DAT_08049edc;
      pcVar4 = &DAT_08049edc + DAT_0805a160;
      do {
        uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),*pcVar3);
        if (*pcVar3 == *pcVar9) {
          pcVar9 = pcVar9 + 1;
          if (pcVar9 == pcVar8) {
            DAT_0805a130 = DAT_0805a130 + 1;
            if (DAT_08048cc7 != '\0') {
              puVar7[-1] = uVar2;
              puVar7[-2] = pcVar3;
              puVar7[-3] = pcVar4;
              puVar7[-4] = pcVar5;
              puVar7[-5] = puVar7;
              puVar7[-6] = unaff_EBP;
              puVar7[-7] = pcVar8;
              puVar7[-8] = pcVar9;
              puVar7[-9] = 0x8048566;
              FUN_08048292();
              puVar7[-9] = 1;
              puVar7[-9] = 4;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              puVar7[-8] = 0x8048583;
              FUN_08048279();
              pcVar8 = (char *)puVar7[-6];
              unaff_EBP = puVar7[-5];
              ppcVar6 = (char **)(puVar7 + -3);
              pcVar4 = (char *)puVar7[-2];
              uVar2 = *puVar7;
              puVar7 = puVar7 + 1;
              DAT_0805a148 = 0;
              pcVar5 = *ppcVar6;
            }
            goto LAB_0804858e;
          }
        }
        else {
LAB_0804858e:
          pcVar3 = pcVar5;
          pcVar9 = s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f;
          DAT_0805a148 = DAT_0805a148 + 1;
          pcVar5 = pcVar3 + 1;
        }
        uVar10 = CONCAT44(pcVar4,DAT_0805a105);
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 != pcVar4);
    }
    DAT_0805a130 = DAT_0805a130 + 1;
    if (DAT_08048cc7 == '\0') {
      if (DAT_08048cc6 != '\0') {
        DAT_08048cc6 = 0;
        return *puVar7;
      }
      *puVar7 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar7[1] = 0x804862c;
      FUN_08048292();
      puVar7[1] = 1;
      puVar7[1] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar7[2] = 0x8048649;
      FUN_08048279();
    }
    else {
      *puVar7 = 0x80485c1;
      FUN_08048292();
      *puVar7 = 1;
      *puVar7 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar7[1] = 0x80485de;
      FUN_08048279();
      puVar7[1] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      DAT_08048cc7 = '\0';
    }
    puVar7[2] = 6;
    pcVar1 = (code *)swi(0x80);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,byte *param_5,
     undefined4 param_6)

{
  code *pcVar1;
  byte bVar2;
  int in_EAX;
  char *pcVar3;
  int iVar5;
  int iVar6;
  int in_EBX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int unaff_retaddr;
  char *pcVar4;
  
  puVar7 = &param_3;
  if (param_2 == 3) {
    DAT_08048ec8 = param_4;
    DAT_0805a0ed = 0;
    DAT_0805a0ee = 0;
    while( true ) {
      bVar2 = *param_5 - 0x30;
      in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
      if ((*param_5 < 0x30) || (9 < bVar2)) break;
      in_EBX = in_EBX * 10 + in_EAX;
      param_5 = param_5 + 1;
    }
    _DAT_0805a111 =
         CONCAT31((int3)(((uint)CONCAT11((char)in_EBX,(char)((uint)in_EBX >> 8)) << 0x10) >> 8),2);
    pcVar3 = param_4;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    if (*pcVar4 != '/') {
      param_5 = (byte *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8 = (undefined4 *)&stack0x00000014;
      goto LAB_08048c03;
    }
    param_5 = (byte *)0x6;
    param_4 = (char *)0x1;
    param_3 = 2;
    pcVar1 = (code *)swi(0x80);
    unaff_retaddr = (*pcVar1)();
    puVar7 = (undefined4 *)&stack0x00000014;
    if (-1 < unaff_retaddr) {
      param_6 = 4;
      param_5 = &DAT_08048b3b;
      param_4 = (char *)0x2;
      param_3 = 1;
      pcVar1 = (code *)swi(0x80);
      iVar5 = (*pcVar1)();
      puVar7 = (undefined4 *)&stack0x00000018;
      puVar9 = (undefined4 *)&stack0x00000018;
      if (iVar5 == 0) goto LAB_08048c08;
    }
  }
  do {
    puVar7[-1] = 1;
    puVar7[-1] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8 = puVar7 + 1;
    *puVar7 = 1;
LAB_08048c03:
    while( true ) {
      while( true ) {
        *(undefined4 *)((int)puVar8 + -4) = 1;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar9 = (undefined4 *)((int)puVar8 + 4);
LAB_08048c08:
        puVar9[-1] = 0x10;
        puVar9[-2] = &DAT_0805a111;
        puVar9[-3] = unaff_retaddr;
        puVar9[-4] = 2;
        puVar9[-4] = 0x66;
        pcVar1 = (code *)swi(0x80);
        iVar5 = (*pcVar1)();
        if (iVar5 == 0) break;
        *puVar9 = 1;
        *puVar9 = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar8 = puVar9 + 2;
        puVar9[1] = 1;
      }
      *puVar9 = 0xff;
      puVar9[-1] = unaff_retaddr;
      puVar9[-2] = 4;
      puVar9[-2] = 0x66;
      pcVar1 = (code *)swi(0x80);
      iVar5 = (*pcVar1)();
      puVar7 = puVar9 + 2;
      if (iVar5 != 0) break;
      puVar9[1] = 2;
      pcVar1 = (code *)swi(0x80);
      iVar5 = (*pcVar1)();
      puVar8 = puVar9 + 3;
      puVar11 = puVar9 + 3;
      if (iVar5 == 0) {
        while( true ) {
          do {
            puVar10 = puVar11;
            _DAT_08048dc9 = 0x10;
            puVar10[-1] = &DAT_08048dc9;
            puVar10[-2] = &DAT_08048cca;
            puVar10[-3] = unaff_retaddr;
            puVar10[-4] = 5;
            puVar10[-4] = 0x66;
            pcVar1 = (code *)swi(0x80);
            iVar5 = (*pcVar1)();
            puVar11 = puVar10 + 1;
          } while (iVar5 < 0);
          *puVar10 = 1;
          *puVar10 = 0x72;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar10[1] = 0x72;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar10[2] = 2;
          pcVar1 = (code *)swi(0x80);
          iVar6 = (*pcVar1)();
          if (iVar6 == 0) break;
          puVar10[3] = 6;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar11 = puVar10 + 5;
        }
        puVar10[3] = 0x8048ca0;
        DAT_0805a10d = iVar5;
        FUN_080482d6();
        puVar11 = puVar10 + 4;
        do {
          puVar11[-1] = 3;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          *puVar11 = 0x8048cba;
          FUN_080482ee();
          puVar11 = puVar11 + 1;
        } while( true );
      }
    }
  } while( true );
}


