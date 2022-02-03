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

undefined4 FUN_080482ee(undefined4 param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  byte *extraout_ECX;
  byte *pbVar10;
  byte *extraout_ECX_00;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte **ppbVar15;
  uint *puVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  undefined4 *puVar19;
  byte *unaff_EBP;
  char *pcVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  byte *pbVar25;
  char *pcVar26;
  byte bVar27;
  undefined8 uVar28;
  uint uStack28;
  byte *apbStack24 [6];
  
  bVar27 = 0;
  iVar8 = 0x100;
  pcVar9 = &DAT_08049edc;
  pcVar13 = &DAT_08059edb;
  do {
    pcVar26 = pcVar9;
    pcVar9 = pcVar26 + 1;
    cVar1 = *pcVar26;
    if (cVar1 == ' ') {
      DAT_0805a0f9 = pcVar26 + -0x8049edc;
      iVar8 = 0x100;
      pcVar13 = pcVar9;
      pcVar26 = &DAT_08059ee5;
      goto LAB_08048334;
    }
    if (cVar1 == '\n') break;
    *pcVar13 = cVar1;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar13 + 1;
  } while (iVar8 != 0);
  DAT_0805a0f9 = pcVar26 + -0x8049edd;
  goto LAB_0804834d;
  while( true ) {
    *pcVar26 = cVar1;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
    if (iVar8 == 0) break;
LAB_08048334:
    cVar1 = *pcVar13;
    pcVar20 = pcVar13 + 1;
    if ((cVar1 == ' ') || (pcVar20 = pcVar13, cVar1 == '\n')) {
      DAT_0805a109 = pcVar20 + (-1 - (int)pcVar9);
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
    pcVar9 = DAT_0805a0f9;
    pcVar13 = &DAT_08048253;
    pcVar26 = &DAT_08059edb;
    do {
      if (pcVar9 == (char *)0x0) break;
      pcVar9 = pcVar9 + -1;
      cVar1 = *pcVar13;
      cVar2 = *pcVar26;
      pcVar13 = pcVar13 + 1;
      pcVar26 = pcVar26 + 1;
    } while (cVar1 == cVar2);
    if (pcVar9 == (char *)0x0) {
      DAT_0805a0ee = '\x01';
      puVar21 = &DAT_08059ee5;
      puVar23 = &DAT_08059eef;
      for (pcVar9 = DAT_0805a109; pcVar9 != (char *)0x0; pcVar9 = pcVar9 + -1) {
        *puVar23 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar23 = puVar23 + 1;
      }
      *puVar23 = 0;
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    if (DAT_0805a0ee == '\0') {
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    pcVar9 = DAT_0805a0f9;
    pcVar13 = &DAT_08048257;
    pcVar26 = &DAT_08059edb;
    do {
      if (pcVar9 == (char *)0x0) break;
      pcVar9 = pcVar9 + -1;
      cVar1 = *pcVar13;
      cVar2 = *pcVar26;
      pcVar13 = pcVar13 + 1;
      pcVar26 = pcVar26 + 1;
    } while (cVar1 == cVar2);
    if (pcVar9 == (char *)0x0) {
      puVar21 = &DAT_08059ee5;
      puVar24 = &DAT_08059fee;
      for (pcVar9 = DAT_0805a109; pcVar9 != (char *)0x0; pcVar9 = pcVar9 + -1) {
        *puVar24 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar24 = puVar24 + 1;
      }
      puVar24[1] = 0;
      DAT_0805a0ed = '\x01';
      pcVar13 = &DAT_08048ecc;
      pcVar9 = DAT_08048ec8;
      do {
        *pcVar13 = *pcVar9;
        pcVar13 = pcVar13 + 1;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      pcVar9 = &DAT_08059eef;
      for (; *pcVar13 = *pcVar9, *pcVar13 != '\0'; pcVar13 = pcVar13 + 1) {
        pcVar9 = pcVar9 + 1;
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
  pcVar9 = DAT_0805a0f9;
  pcVar13 = &DAT_0804825b;
  pcVar26 = &DAT_08059edb;
  do {
    if (pcVar9 == (char *)0x0) break;
    pcVar9 = pcVar9 + -1;
    cVar1 = *pcVar13;
    cVar2 = *pcVar26;
    pcVar13 = pcVar13 + 1;
    pcVar26 = pcVar26 + 1;
  } while (cVar1 == cVar2);
  if (pcVar9 == (char *)0x0) {
    pbVar14 = &DAT_08048ecc;
    pcVar3 = (code *)swi(0x80);
    uVar28 = (*pcVar3)();
    DAT_0805a105 = (int)uVar28;
    puVar16 = &param_1;
    if (DAT_0805a105 < 0) {
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
    }
    else {
      uVar5 = 0;
      DAT_0805a130 = (byte *)0x0;
      DAT_0805a148 = 0;
      pbVar25 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f);
      pbVar22 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x25);
      pbVar10 = extraout_ECX;
      while( true ) {
        DAT_0805a105 = (int)uVar28;
        puVar16[-1] = uVar5;
        puVar16[-2] = (uint)pbVar10;
        puVar16[-3] = (int)((ulonglong)uVar28 >> 0x20);
        puVar16[-4] = (uint)pbVar14;
        puVar16[-5] = (uint)puVar16;
        puVar16[-6] = (uint)unaff_EBP;
        puVar16[-7] = (uint)pbVar22;
        puVar16[-8] = (uint)pbVar25;
        puVar16[-9] = 3;
        pcVar3 = (code *)swi(0x80);
        DAT_0805a160 = (*pcVar3)();
        if (DAT_0805a160 == 0) break;
        pbVar25 = (byte *)puVar16[-7];
        pbVar22 = (byte *)puVar16[-6];
        unaff_EBP = (byte *)puVar16[-5];
        uVar5 = *puVar16;
        puVar16 = puVar16 + 1;
        pbVar10 = &DAT_08049edc;
        pbVar14 = &DAT_08049edc;
        pbVar11 = &DAT_08049edc + DAT_0805a160;
        do {
          uVar5 = uVar5 & 0xffffff00 | (uint)*pbVar10;
          if (*pbVar10 == *pbVar25) {
            pbVar25 = pbVar25 + 1;
            if (pbVar25 == pbVar22) {
              DAT_0805a130 = (byte *)((int)DAT_0805a130 + 1);
              if (DAT_08048cc7 != '\0') {
                puVar16[-1] = uVar5;
                puVar16[-2] = (uint)pbVar10;
                puVar16[-3] = (uint)pbVar11;
                puVar16[-4] = (uint)pbVar14;
                puVar16[-5] = (uint)puVar16;
                puVar16[-6] = (uint)unaff_EBP;
                puVar16[-7] = (uint)pbVar22;
                puVar16[-8] = (uint)pbVar25;
                puVar16[-9] = 0x8048566;
                FUN_08048292();
                puVar16[-9] = 1;
                puVar16[-9] = 4;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                puVar16[-8] = 0x8048583;
                FUN_08048279();
                pbVar22 = (byte *)puVar16[-6];
                unaff_EBP = (byte *)puVar16[-5];
                ppbVar15 = (byte **)(puVar16 + -3);
                pbVar11 = (byte *)puVar16[-2];
                uVar5 = *puVar16;
                puVar16 = puVar16 + 1;
                DAT_0805a148 = 0;
                pbVar14 = *ppbVar15;
              }
              goto LAB_0804858e;
            }
          }
          else {
LAB_0804858e:
            pbVar10 = pbVar14;
            pbVar25 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f);
            DAT_0805a148 = DAT_0805a148 + 1;
            pbVar14 = pbVar10 + 1;
          }
          uVar28 = CONCAT44(pbVar11,DAT_0805a105);
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != pbVar11);
      }
      DAT_0805a130 = (byte *)((int)DAT_0805a130 + 1);
      if (DAT_08048cc7 == '\0') {
        if (DAT_08048cc6 != '\0') {
          DAT_08048cc6 = 0;
          return *puVar16;
        }
        *puVar16 = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar16[1] = 0x804862c;
        FUN_08048292();
        puVar16[1] = 1;
        puVar16[1] = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar16[2] = 0x8048649;
        FUN_08048279();
      }
      else {
        *puVar16 = 0x80485c1;
        FUN_08048292();
        *puVar16 = 1;
        *puVar16 = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar16[1] = 0x80485de;
        FUN_08048279();
        puVar16[1] = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        DAT_08048cc7 = '\0';
      }
      puVar16[2] = 6;
      pcVar3 = (code *)swi(0x80);
      uVar4 = (*pcVar3)();
    }
  }
  else {
    pcVar9 = DAT_0805a0f9;
    pcVar13 = &DAT_08048267;
    pcVar26 = &DAT_08059edb;
    do {
      if (pcVar9 == (char *)0x0) break;
      pcVar9 = pcVar9 + -1;
      cVar1 = *pcVar13;
      cVar2 = *pcVar26;
      pcVar13 = pcVar13 + 1;
      pcVar26 = pcVar26 + 1;
    } while (cVar1 == cVar2);
    if (pcVar9 == (char *)0x0) {
      DAT_08048cc7 = '\x01';
      uVar4 = FUN_080484bf();
    }
    else {
      pcVar9 = DAT_0805a0f9;
      pcVar13 = &DAT_0804826b;
      pcVar26 = &DAT_08059edb;
      do {
        if (pcVar9 == (char *)0x0) break;
        pcVar9 = pcVar9 + -1;
        cVar1 = *pcVar13;
        cVar2 = *pcVar26;
        pcVar13 = pcVar13 + 1;
        pcVar26 = pcVar26 + 1;
      } while (cVar1 == cVar2);
      if (pcVar9 == (char *)0x0) {
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        param_1 = 1;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        register0x00000010 = (BADSPACEBASE *)&stack0x0000000c;
      }
      pcVar9 = DAT_0805a0f9;
      pcVar13 = &DAT_0804825f;
      pcVar26 = &DAT_08059edb;
      do {
        if (pcVar9 == (char *)0x0) break;
        pcVar9 = pcVar9 + -1;
        cVar1 = *pcVar13;
        cVar2 = *pcVar26;
        pcVar13 = pcVar13 + (uint)bVar27 * -2 + 1;
        pcVar26 = pcVar26 + (uint)bVar27 * -2 + 1;
      } while (cVar1 == cVar2);
      if (pcVar9 != (char *)0x0) {
        pcVar9 = DAT_0805a0f9;
        pcVar13 = &DAT_08048263;
        pcVar26 = &DAT_08059edb;
        do {
          if (pcVar9 == (char *)0x0) break;
          pcVar9 = pcVar9 + -1;
          cVar1 = *pcVar13;
          cVar2 = *pcVar26;
          pcVar13 = pcVar13 + (uint)bVar27 * -2 + 1;
          pcVar26 = pcVar26 + (uint)bVar27 * -2 + 1;
        } while (cVar1 == cVar2);
        if (pcVar9 != (char *)0x0) {
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
        iVar8 = 1;
        pbVar14 = (byte *)0x0;
        pbVar10 = &DAT_08059ee5 + (int)DAT_0805a109;
        do {
          pbVar10 = pbVar10 + -1;
          iVar6 = *pbVar10 - 0x30;
          if ((9 < iVar6) || (iVar6 < 0)) {
            *(undefined4 *)((int)register0x00000010 + -4) = 4;
            pcVar3 = (code *)swi(0x80);
            uVar4 = (*pcVar3)();
            return uVar4;
          }
          pbVar14 = pbVar14 + iVar6 * iVar8;
          iVar8 = iVar8 * 10;
        } while (pbVar10 != &DAT_08059ee5);
        DAT_0805a138 = (byte *)0x0;
        DAT_0805a13c = (byte *)0x0;
        DAT_08048cc6 = '\x01';
        *(undefined4 *)((int)register0x00000010 + -4) = 0x804878e;
        DAT_0805a134 = pbVar14;
        FUN_080484bf();
        if (((int)DAT_0805a134 < 1) || ((int)(DAT_0805a130 + 1) <= (int)DAT_0805a134)) {
          *(undefined4 *)((int)register0x00000010 + -4) = 4;
          pcVar3 = (code *)swi(0x80);
          uVar4 = (*pcVar3)();
        }
        else {
          *(undefined4 *)((int)register0x00000010 + -4) = 0x80487cb;
          FUN_08048279();
          pbVar14 = &DAT_08048ecc;
          *(undefined4 *)((int)register0x00000010 + -4) = 5;
          pcVar3 = (code *)swi(0x80);
          uVar28 = (*pcVar3)();
          DAT_0805a105 = (int)uVar28;
          if (DAT_0805a105 < 0) {
            *(undefined4 *)register0x00000010 = 4;
            pcVar3 = (code *)swi(0x80);
            uVar4 = (*pcVar3)();
          }
          else {
            DAT_0805a130 = (byte *)0x1;
            pbVar25 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f);
            pbVar22 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x25);
            uVar4 = 0;
            _DAT_08048cc9 = 0;
            DAT_0805a138 = (byte *)0x0;
            DAT_0805a13c = (byte *)0x0;
            DAT_0805a144 = (byte *)0x0;
            pbVar10 = extraout_ECX_00;
            ppbVar17 = (byte **)((int)register0x00000010 + 4);
            while( true ) {
              DAT_0805a105 = (int)uVar28;
              ppbVar17[-1] = (byte *)uVar4;
              ppbVar17[-2] = pbVar10;
              ppbVar17[-3] = (byte *)(int)((ulonglong)uVar28 >> 0x20);
              ppbVar17[-4] = pbVar14;
              ppbVar17[-5] = (byte *)ppbVar17;
              ppbVar17[-6] = unaff_EBP;
              ppbVar17[-7] = pbVar22;
              ppbVar17[-8] = pbVar25;
              ppbVar17[-9] = (byte *)0x3;
              pcVar3 = (code *)swi(0x80);
              DAT_0805a158 = (*pcVar3)();
              if (DAT_0805a158 == 0) break;
              pbVar25 = ppbVar17[-7];
              pbVar22 = ppbVar17[-6];
              pbVar7 = *ppbVar17;
              pbVar10 = &DAT_08049edc;
              pbVar12 = &DAT_08049edc + DAT_0805a158;
              uVar28 = CONCAT44(pbVar12,DAT_0805a105);
              unaff_EBP = (byte *)0x0;
              pbVar11 = &DAT_08049edc;
              if (DAT_0805a134 == (byte *)0x1) {
                DAT_0805a138 = (byte *)0x1;
                DAT_0805a134 = (byte *)0x2;
              }
              do {
                pbVar7 = (byte *)((uint)pbVar7 & 0xffffff00 | (uint)*pbVar10);
                if (*pbVar10 == *pbVar25) {
                  pbVar25 = pbVar25 + 1;
                  pbVar14 = pbVar11;
                  if (pbVar25 == pbVar22) {
                    DAT_0805a130 = DAT_0805a130 + 1;
                    pbVar7 = DAT_0805a130;
                    if (DAT_0805a130 == DAT_0805a134) {
                      unaff_EBP = pbVar10 + -0x8049ee2;
                      DAT_0805a144 = DAT_0805a144 + (int)unaff_EBP;
                      if (DAT_0805a138 != (byte *)0x0) {
                        DAT_0805a13c = DAT_0805a144 + 2;
                        goto LAB_0804892d;
                      }
                      DAT_0805a138 = DAT_0805a144;
                      DAT_0805a134 = DAT_0805a134 + 1;
                      pbVar7 = DAT_0805a144;
                    }
                    DAT_0805a144 = DAT_0805a144 + -(int)unaff_EBP;
                    goto LAB_080488f8;
                  }
                }
                else {
LAB_080488f8:
                  pbVar25 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f);
                  pbVar14 = pbVar11 + 1;
                  pbVar10 = pbVar11;
                }
                pbVar10 = pbVar10 + 1;
                pbVar11 = pbVar14;
              } while (pbVar10 != pbVar12);
              *ppbVar17 = pbVar7;
              DAT_0805a144 = DAT_0805a144 + DAT_0805a158;
              uVar4 = *ppbVar17;
              ppbVar17 = ppbVar17 + 1;
            }
            pbVar25 = ppbVar17[-7];
            pbVar22 = ppbVar17[-6];
            unaff_EBP = ppbVar17[-5];
            pbVar11 = ppbVar17[-3];
            pbVar12 = ppbVar17[-2];
            pbVar10 = ppbVar17[-1];
            DAT_0805a13c = DAT_0805a144;
LAB_0804892d:
            DAT_0805a138 = DAT_0805a138 + 3;
            if (DAT_0805a138 == (byte *)0x4) {
              DAT_0805a138 = (byte *)0x0;
            }
            if (DAT_0805a138 == (byte *)0x4) {
              DAT_0805a138 = (byte *)0x0;
            }
            DAT_0805a140 = (int)DAT_0805a13c - (int)DAT_0805a138;
            if (DAT_08048cc8 == '\x01') {
              *ppbVar17 = (byte *)DAT_0805a140;
              ppbVar17[-1] = pbVar10;
              ppbVar17[-2] = pbVar12;
              ppbVar17[-3] = pbVar11;
              ppbVar17[-4] = (byte *)(ppbVar17 + 1);
              ppbVar17[-5] = unaff_EBP;
              ppbVar17[-6] = pbVar22;
              ppbVar17[-7] = pbVar25;
              ppbVar17[-8] = (byte *)0x4;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppbVar17[-7] = (byte *)0x6;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppbVar17[-6] = (byte *)0x2;
              ppbVar17[-6] = (byte *)0x5;
              pcVar3 = (code *)swi(0x80);
              DAT_0805a105 = (*pcVar3)();
              ppbVar18 = ppbVar17 + -4;
              while( true ) {
                ppbVar18[-1] = (byte *)0x13;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                *ppbVar18 = (byte *)0x3;
                pcVar3 = (code *)swi(0x80);
                iVar8 = (*pcVar3)();
                if (iVar8 == 0) break;
                ppbVar18[1] = (byte *)0x13;
                pcVar3 = (code *)swi(0x80);
                DAT_0805a160 = iVar8;
                (*pcVar3)();
                ppbVar18[2] = (byte *)0x4;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                ppbVar18 = ppbVar18 + 4;
                DAT_0805a13c = DAT_0805a13c + DAT_0805a160;
                DAT_0805a138 = DAT_0805a138 + DAT_0805a160;
              }
              ppbVar18[9] = (byte *)0x5d;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppbVar18[10] = (byte *)0x6;
              pcVar3 = (code *)swi(0x80);
              uVar4 = (*pcVar3)();
              DAT_08048cc8 = '\0';
            }
            else {
              *ppbVar17 = (byte *)0x4;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppbVar17[1] = (byte *)0x8048a58;
              FUN_08048292();
              ppbVar17[1] = (byte *)0x4;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              ppbVar17[2] = (byte *)0x13;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              DAT_0805a101 = 0;
              ppbVar17 = ppbVar17 + 4;
              do {
                puVar19 = ppbVar17;
                puVar19[-1] = 3;
                pcVar3 = (code *)swi(0x80);
                DAT_0805a0fd = (*pcVar3)();
                DAT_0805a101 = DAT_0805a101 + DAT_0805a0fd;
                *puVar19 = 4;
                pcVar3 = (code *)swi(0x80);
                (*pcVar3)();
                ppbVar17 = (byte **)(puVar19 + 2);
              } while (DAT_0805a101 != DAT_0805a140);
              puVar19[1] = 6;
              pcVar3 = (code *)swi(0x80);
              (*pcVar3)();
              puVar19[2] = 4;
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



undefined4 FUN_080484bf(undefined param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *extraout_ECX;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  uint *puVar8;
  undefined4 unaff_EBP;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  uint uStack28;
  byte *apbStack24 [3];
  uint uStack12;
  byte *apbStack8 [2];
  
  pbVar6 = &DAT_08048ecc;
  pcVar1 = (code *)swi(0x80);
  uVar11 = (*pcVar1)();
  DAT_0805a105 = (int)uVar11;
  puVar8 = (uint *)&param_1;
  if (DAT_0805a105 < 0) {
    pcVar1 = (code *)swi(0x80);
    uVar2 = (*pcVar1)();
  }
  else {
    uVar3 = 0;
    DAT_0805a130 = 0;
    DAT_0805a148 = 0;
    pbVar10 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f);
    pbVar9 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x25);
    pbVar4 = extraout_ECX;
    while( true ) {
      DAT_0805a105 = (int)uVar11;
      puVar8[-1] = uVar3;
      puVar8[-2] = (uint)pbVar4;
      puVar8[-3] = (int)((ulonglong)uVar11 >> 0x20);
      puVar8[-4] = (uint)pbVar6;
      puVar8[-5] = (uint)puVar8;
      puVar8[-6] = unaff_EBP;
      puVar8[-7] = (uint)pbVar9;
      puVar8[-8] = (uint)pbVar10;
      puVar8[-9] = 3;
      pcVar1 = (code *)swi(0x80);
      DAT_0805a160 = (*pcVar1)();
      if (DAT_0805a160 == 0) break;
      pbVar10 = (byte *)puVar8[-7];
      pbVar9 = (byte *)puVar8[-6];
      unaff_EBP = puVar8[-5];
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      pbVar4 = &DAT_08049edc;
      pbVar6 = &DAT_08049edc;
      pbVar5 = &DAT_08049edc + DAT_0805a160;
      do {
        uVar3 = uVar3 & 0xffffff00 | (uint)*pbVar4;
        if (*pbVar4 == *pbVar10) {
          pbVar10 = pbVar10 + 1;
          if (pbVar10 == pbVar9) {
            DAT_0805a130 = DAT_0805a130 + 1;
            if (DAT_08048cc7 != '\0') {
              puVar8[-1] = uVar3;
              puVar8[-2] = (uint)pbVar4;
              puVar8[-3] = (uint)pbVar5;
              puVar8[-4] = (uint)pbVar6;
              puVar8[-5] = (uint)puVar8;
              puVar8[-6] = unaff_EBP;
              puVar8[-7] = (uint)pbVar9;
              puVar8[-8] = (uint)pbVar10;
              puVar8[-9] = 0x8048566;
              FUN_08048292();
              puVar8[-9] = 1;
              puVar8[-9] = 4;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              puVar8[-8] = 0x8048583;
              FUN_08048279();
              pbVar9 = (byte *)puVar8[-6];
              unaff_EBP = puVar8[-5];
              ppbVar7 = (byte **)(puVar8 + -3);
              pbVar5 = (byte *)puVar8[-2];
              uVar3 = *puVar8;
              puVar8 = puVar8 + 1;
              DAT_0805a148 = 0;
              pbVar6 = *ppbVar7;
            }
            goto LAB_0804858e;
          }
        }
        else {
LAB_0804858e:
          pbVar4 = pbVar6;
          pbVar10 = (byte *)(s__OK_asmutils_pop3_server_ready_F_0804804c + 0x1f);
          DAT_0805a148 = DAT_0805a148 + 1;
          pbVar6 = pbVar4 + 1;
        }
        uVar11 = CONCAT44(pbVar5,DAT_0805a105);
        pbVar4 = pbVar4 + 1;
      } while (pbVar4 != pbVar5);
    }
    DAT_0805a130 = DAT_0805a130 + 1;
    if (DAT_08048cc7 == '\0') {
      if (DAT_08048cc6 != '\0') {
        DAT_08048cc6 = 0;
        return *puVar8;
      }
      *puVar8 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8[1] = 0x804862c;
      FUN_08048292();
      puVar8[1] = 1;
      puVar8[1] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8[2] = 0x8048649;
      FUN_08048279();
    }
    else {
      *puVar8 = 0x80485c1;
      FUN_08048292();
      *puVar8 = 1;
      *puVar8 = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8[1] = 0x80485de;
      FUN_08048279();
      puVar8[1] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      DAT_08048cc7 = '\0';
    }
    puVar8[2] = 6;
    pcVar1 = (code *)swi(0x80);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm1
entry(uint param_1,undefined4 param_2,char *param_3,byte *param_4,undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  char *pcVar3;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int unaff_EBP;
  int unaff_retaddr;
  char *pcVar4;
  
  puVar7 = &param_2;
  if (unaff_retaddr == 3) {
    DAT_08048ec8 = param_3;
    DAT_0805a0ed = 0;
    DAT_0805a0ee = 0;
    while( true ) {
      bVar2 = *param_4 - 0x30;
      param_1 = param_1 & 0xffffff00 | (uint)bVar2;
      if ((*param_4 < 0x30) || (9 < bVar2)) break;
      unaff_EBX = unaff_EBX * 10 + param_1;
      param_4 = param_4 + 1;
    }
    _DAT_0805a111 =
         CONCAT31((int3)(((uint)CONCAT11((char)unaff_EBX,(char)((uint)unaff_EBX >> 8)) << 0x10) >> 8
                        ),2);
    pcVar3 = param_3;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    if (*pcVar4 != '/') {
      param_4 = (byte *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8 = (undefined4 *)&stack0x00000014;
      goto LAB_08048c03;
    }
    param_4 = (byte *)0x6;
    param_3 = (char *)0x1;
    param_2 = 2;
    pcVar1 = (code *)swi(0x80);
    unaff_EBP = (*pcVar1)();
    puVar7 = (undefined4 *)&stack0x00000014;
    if (-1 < unaff_EBP) {
      param_5 = 4;
      param_4 = &DAT_08048b3b;
      param_3 = (char *)0x2;
      param_2 = 1;
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
        puVar9[-3] = unaff_EBP;
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
      puVar9[-1] = unaff_EBP;
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
            puVar10[-3] = unaff_EBP;
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


