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




void entry(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined *puVar5;
  undefined1 *unaff_ESI;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  
  bVar12 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  bVar11 = iVar3 == 0;
  puVar5 = &stack0xfffffffc;
  if (-1 < iVar3) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar5 = (undefined *)register0x00000010;
    if (!bVar11) {
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar5 = &stack0x00000004;
      FUN_080482df();
      unaff_ESI = &DAT_0804839b;
      FUN_0804809d();
    }
  }
  *(undefined4 *)(puVar5 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *(undefined **)puVar5 = &stack0xfffffffc;
  *(undefined1 **)(puVar5 + -4) = unaff_ESI;
  *(undefined4 *)(puVar5 + -8) = extraout_ECX;
  *(undefined4 *)(puVar5 + -0xc) = 0;
  do {
    iVar3 = *(int *)(puVar5 + -8);
    if (iVar3 == 0) {
      return;
    }
    pcVar9 = *(char **)(puVar5 + -4);
    pcVar7 = &DAT_0808839b;
    do {
      pcVar6 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar10 = pcVar7 + (uint)bVar12 * -2 + 1;
      *pcVar7 = cVar1;
      if (cVar1 == '\n') break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar6;
      pcVar7 = pcVar10;
    } while (iVar3 != 0);
    *pcVar10 = '\0';
    *(char **)(puVar5 + -4) = pcVar6;
    *(int *)(puVar5 + -8) = iVar3;
    iVar3 = *(int *)(puVar5 + -4);
    *(undefined4 *)(puVar5 + -0x10) = 0x80480e6;
    iVar4 = FUN_080482cf();
    if (iVar4 == 0) {
      *(undefined4 *)(puVar5 + -0xc) = 1;
      *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 8);
      pcVar9 = (char *)(iVar3 + 8);
      do {
        pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar7;
      } while (cVar1 != ' ');
      pcVar7[-1] = '\0';
      uVar8 = *(undefined4 *)(puVar5 + -0x10);
      *(undefined4 *)(puVar5 + -0x10) = 0x8048108;
      FUN_080482df();
      *(undefined4 *)(puVar5 + -0x10) = uVar8;
      *(undefined4 *)(puVar5 + -0x14) = 0x8048113;
      FUN_080482df();
      iVar3 = *(int *)(puVar5 + -0x10);
      *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 0x17);
      pcVar9 = (char *)(iVar3 + 0x17);
      do {
        pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar7;
      } while (cVar1 != ' ');
      pcVar7[-1] = '\0';
      uVar8 = *(undefined4 *)(puVar5 + -0x10);
      *(undefined4 *)(puVar5 + -0x10) = 0x8048127;
      FUN_080482df();
      *(undefined4 *)(puVar5 + -0x10) = uVar8;
      *(undefined4 *)(puVar5 + -0x14) = 0x8048132;
      FUN_080482df();
      iVar3 = *(int *)(puVar5 + -0x10);
      *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 0xf);
      pcVar9 = (char *)(iVar3 + 0xf);
      do {
        cVar1 = *pcVar9;
        pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
      } while (cVar1 == ' ');
      do {
        pcVar9 = pcVar7 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != ' ');
      pcVar9[-1] = '\0';
      uVar8 = *(undefined4 *)(puVar5 + -0x10);
      *(undefined4 *)(puVar5 + -0x10) = 0x804814b;
      FUN_080482df();
      *(undefined4 *)(puVar5 + -0x10) = uVar8;
      *(undefined4 *)(puVar5 + -0x14) = 0x8048156;
      FUN_080482df();
      iVar3 = *(int *)(puVar5 + -0x10);
      *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 8);
      pcVar9 = (char *)(iVar3 + 8);
      do {
        pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar7;
      } while (cVar1 != ' ');
      pcVar7[-1] = '\0';
      uVar8 = *(undefined4 *)(puVar5 + -0x10);
      *(undefined4 *)(puVar5 + -0x10) = 0x804816a;
      iVar3 = FUN_080482df();
      *(undefined4 *)(puVar5 + -0x10) = uVar8;
      if (0 < 4 - iVar3) {
        do {
          *(undefined4 *)(puVar5 + -0x14) = 0x8048181;
          FUN_080482df();
        } while (extraout_ECX_00 != 1);
      }
      *(undefined4 *)(puVar5 + -0x14) = 0x804818d;
      FUN_080482df();
      *(undefined4 *)(puVar5 + -0x14) = 0x8048197;
      FUN_080482df();
      *(undefined4 *)(puVar5 + -0x14) = 0x80481a1;
      FUN_080482df();
    }
    else {
      iVar3 = *(int *)(puVar5 + -4);
      *(undefined4 *)(puVar5 + -0x10) = 0x80481b9;
      iVar4 = FUN_080482cf();
      if (iVar4 == 0) {
        *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 9);
        pcVar9 = (char *)(iVar3 + 9);
        do {
          pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar7;
        } while (cVar1 != ' ');
        pcVar7[-1] = '\0';
        if (*(int *)(puVar5 + -0xc) == 0) {
          do {
            *(undefined4 *)(puVar5 + -0x14) = 0x80481e3;
            FUN_080482df();
          } while (extraout_ECX_01 != 1);
        }
        *(undefined4 *)(puVar5 + -0x10) = 0x80481eb;
        FUN_080482df();
        *(undefined4 *)(puVar5 + -0x10) = 0x80481f5;
        FUN_080482df();
      }
      else {
        iVar3 = *(int *)(puVar5 + -4);
        *(undefined4 *)(puVar5 + -0x10) = 0x804820c;
        iVar4 = FUN_080482cf();
        if (iVar4 == 0) {
          *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 0x11);
          pcVar9 = (char *)(iVar3 + 0x11);
          do {
            pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar7;
          } while (cVar1 != '\n');
          pcVar7[-1] = '\0';
          *(undefined4 *)(puVar5 + -0x14) = 0x8048229;
          FUN_080482df();
          *(undefined4 *)(puVar5 + -0x10) = 0x804822f;
          FUN_080482df();
          pcVar7[-1] = '\n';
          *(undefined4 *)(puVar5 + -0x10) = 0x804823c;
          FUN_080482df();
        }
        else {
          iVar3 = *(int *)(puVar5 + -4);
          *(undefined4 *)(puVar5 + -0x10) = 0x8048253;
          iVar4 = FUN_080482cf();
          if (iVar4 == 0) {
            *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 0xc);
            pcVar9 = (char *)(iVar3 + 0xc);
            do {
              pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar7;
            } while (cVar1 != '\n');
            pcVar7[-1] = '\0';
            *(undefined4 *)(puVar5 + -0x10) = 0x8048270;
            FUN_080482df();
            pcVar7[-1] = '\n';
          }
          else {
            iVar3 = *(int *)(puVar5 + -4);
            *(undefined4 *)(puVar5 + -0x10) = 0x804828a;
            iVar4 = FUN_080482cf();
            if (iVar4 == 0) {
              *(char **)(puVar5 + -0x10) = (char *)(iVar3 + 0x3e);
              pcVar9 = (char *)(iVar3 + 0x3e);
              do {
                pcVar7 = pcVar9 + (uint)bVar12 * -2 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar7;
              } while (cVar1 != '\n');
              pcVar7[-1] = '\0';
              *(undefined4 *)(puVar5 + -0x14) = 0x80482ab;
              FUN_080482df();
              *(undefined4 *)(puVar5 + -0x10) = 0x80482b1;
              FUN_080482df();
              pcVar7[-1] = '\n';
              *(undefined4 *)(puVar5 + -0x10) = 0x80482be;
              FUN_080482df();
              *(undefined4 *)(puVar5 + -0x10) = 0x80482c8;
              FUN_080482df();
            }
          }
        }
      }
    }
  } while( true );
}



void FUN_0804809d(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  char *unaff_ESI;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int local_c;
  
  bVar8 = 0;
  bVar2 = false;
  local_c = in_ECX;
  do {
    if (local_c == 0) {
      return;
    }
    pcVar5 = &DAT_0808839b;
    do {
      pcVar4 = unaff_ESI + (uint)bVar8 * -2 + 1;
      cVar1 = *unaff_ESI;
      pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
      *pcVar5 = cVar1;
      unaff_ESI = pcVar4;
      if (cVar1 == '\n') break;
      local_c = local_c + -1;
      pcVar5 = pcVar7;
    } while (local_c != 0);
    *pcVar7 = '\0';
    iVar3 = FUN_080482cf();
    if (iVar3 == 0) {
      bVar2 = true;
      pcVar4 = pcVar4 + 8;
      pcVar5 = pcVar4;
      do {
        pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != ' ');
      pcVar7[-1] = '\0';
      FUN_080482df();
      FUN_080482df();
      pcVar4 = pcVar4 + 0x17;
      pcVar5 = pcVar4;
      do {
        pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != ' ');
      pcVar7[-1] = '\0';
      FUN_080482df();
      FUN_080482df();
      pcVar4 = pcVar4 + 0xf;
      pcVar5 = pcVar4;
      do {
        cVar1 = *pcVar5;
        pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
      } while (cVar1 == ' ');
      do {
        pcVar5 = pcVar7 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar5;
      } while (cVar1 != ' ');
      pcVar5[-1] = '\0';
      FUN_080482df();
      FUN_080482df();
      pcVar4 = pcVar4 + 8;
      pcVar5 = pcVar4;
      do {
        pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != ' ');
      pcVar7[-1] = '\0';
      iVar3 = FUN_080482df();
      if (0 < 4 - iVar3) {
        do {
          FUN_080482df(pcVar4);
        } while (extraout_ECX != 1);
      }
      FUN_080482df(pcVar4);
      FUN_080482df();
      FUN_080482df();
    }
    else {
      pcVar5 = unaff_ESI;
      iVar3 = FUN_080482cf();
      if (iVar3 == 0) {
        pcVar7 = unaff_ESI + 9;
        pcVar4 = pcVar7;
        do {
          pcVar6 = pcVar4 + (uint)bVar8 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar6;
        } while (cVar1 != ' ');
        pcVar6[-1] = '\0';
        if (!bVar2) {
          do {
            FUN_080482df(pcVar7);
          } while (extraout_ECX_00 != 1);
        }
        FUN_080482df();
        FUN_080482df();
        unaff_ESI = pcVar5;
      }
      else {
        unaff_ESI = pcVar5;
        iVar3 = FUN_080482cf();
        if (iVar3 == 0) {
          pcVar4 = pcVar5 + 0x11;
          do {
            pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar7;
          } while (cVar1 != '\n');
          pcVar7[-1] = '\0';
          FUN_080482df(pcVar5 + 0x11);
          FUN_080482df();
          pcVar7[-1] = '\n';
          FUN_080482df();
        }
        else {
          pcVar5 = unaff_ESI;
          iVar3 = FUN_080482cf();
          if (iVar3 == 0) {
            pcVar4 = unaff_ESI + 0xc;
            do {
              pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar7;
            } while (cVar1 != '\n');
            pcVar7[-1] = '\0';
            FUN_080482df();
            pcVar7[-1] = '\n';
            unaff_ESI = pcVar5;
          }
          else {
            unaff_ESI = pcVar5;
            iVar3 = FUN_080482cf();
            if (iVar3 == 0) {
              pcVar4 = pcVar5 + 0x3e;
              do {
                pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar7;
              } while (cVar1 != '\n');
              pcVar7[-1] = '\0';
              FUN_080482df(pcVar5 + 0x3e);
              FUN_080482df();
              pcVar7[-1] = '\n';
              FUN_080482df();
              FUN_080482df();
            }
          }
        }
      }
    }
  } while( true );
}



uint FUN_080482cf(void)

{
  uint uVar1;
  int in_ECX;
  byte *unaff_ESI;
  byte *unaff_EDI;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  uVar1 = 0;
  bVar3 = true;
  do {
    if (in_ECX == 0) break;
    in_ECX = in_ECX + -1;
    bVar2 = *unaff_ESI < *unaff_EDI;
    bVar3 = *unaff_ESI == *unaff_EDI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (bVar3);
  if (!bVar3) {
    uVar1 = -(uint)bVar2 | 1;
  }
  return uVar1;
}



undefined4 __regparm3 FUN_080482df(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  char *unaff_ESI;
  
  if (unaff_ESI != (char *)0x0) {
    do {
      cVar1 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    } while (cVar1 != '\0');
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_1 = param_3;
  }
  return param_1;
}


