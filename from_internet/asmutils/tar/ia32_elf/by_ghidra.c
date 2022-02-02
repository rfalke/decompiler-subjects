typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  byte *unaff_ESI;
  byte *unaff_EDI;
  short *in_stack_00000010;
  short *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
                    // WARNING: Read-only address (ram,0x0804886f) is written
  uRam0804886f = 0;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  puVar4 = (undefined4 *)&stack0x00000014;
  if (in_stack_00000010 == (short *)0x0) {
LAB_0804807f:
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    in_stack_00000014 = (short *)0x1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar4 = (undefined4 *)&stack0x0000001c;
  }
  else if (*in_stack_00000010 != 0x742d) {
    if (*in_stack_00000010 == 0x782d) {
      in_stack_00000014 = (short *)0x80480b2;
      FUN_08048205();
      in_stack_00000014 = (short *)0x17;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      in_stack_00000018 = 0x3d;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      in_stack_0000001c = 0x17;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      DAT_08048ab3 = &stack0x00000024;
      ppbVar5 = (byte **)&stack0x00000024;
      in_stack_00000020 = 0x80480d9;
      FUN_08048233();
      in_stack_00000020 = 0;
      in_stack_0000001c = 0x80480df;
      FUN_08048227();
      goto LAB_080480e0;
    }
    if (*in_stack_00000010 == 0x632d) {
      ppbVar5 = (byte **)&stack0x00000018;
      ppbVar6 = (byte **)&stack0x00000018;
      if (in_stack_00000014 != (short *)0x0) {
        iVar3 = 1;
        if (*in_stack_00000014 != 0x2d) {
          in_stack_00000014 = (short *)0x5;
          pcVar2 = (code *)swi(0x80);
          iVar3 = (*pcVar2)();
          ppbVar6 = (byte **)&stack0x0000001c;
          ppbVar5 = (byte **)&stack0x0000001c;
          if (iVar3 < 0) goto LAB_080480e0;
        }
        while( true ) {
          iRam08048867 = iVar3;
          unaff_ESI = *ppbVar6;
          if (unaff_ESI == (byte *)0x0) break;
          unaff_EDI = (byte *)0x8048873;
          *ppbVar6 = (byte *)0x80484ce;
          FUN_08048522();
          *ppbVar6 = (byte *)0x80484d3;
          FUN_08048529();
          ppbVar6 = ppbVar6 + 1;
          iVar3 = iRam08048867;
        }
        *ppbVar6 = (byte *)0x80484da;
        FUN_08048514();
        *ppbVar6 = (byte *)0x4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        ppbVar6[1] = (byte *)0x4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        ppbVar5 = ppbVar6 + 3;
        ppbVar6[2] = (byte *)0x80484f8;
        FUN_08048227();
      }
      goto LAB_080480e0;
    }
    goto LAB_0804807f;
  }
  ppbVar5 = (byte **)(puVar4 + 1);
  *puVar4 = 0x804809e;
  FUN_08048205();
  *puVar4 = 0x80480a3;
  FUN_08048194();
  *puVar4 = 0x80480a8;
  FUN_08048227();
LAB_080480e0:
  ppbVar5[-1] = (byte *)0x1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  *ppbVar5 = unaff_ESI;
  ppbVar5[-1] = (byte *)0x8;
  while( true ) {
    bVar1 = *unaff_ESI;
    if (bVar1 == 0) {
      return;
    }
    if ((bVar1 != 0x20) && ((bVar1 < 0x30 || (7 < (byte)(bVar1 - 0x30))))) break;
    unaff_ESI = unaff_ESI + 1;
    if (unaff_EDI <= unaff_ESI) {
                    // WARNING: Read-only address (ram,0x08048867) is written
                    // WARNING: Read-only address (ram,0x0804886f) is written
      return;
    }
  }
  ppbVar5[-1] = (byte *)0x1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return;
}



void FUN_080480e5(void)

{
  byte bVar1;
  code *pcVar2;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  while( true ) {
    bVar1 = *unaff_ESI;
    if (bVar1 == 0) {
      return;
    }
    if ((bVar1 != 0x20) && ((bVar1 < 0x30 || (7 < (byte)(bVar1 - 0x30))))) break;
    unaff_ESI = unaff_ESI + 1;
    if (unaff_EDI <= unaff_ESI) {
      return;
    }
  }
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return;
}



void FUN_08048118(void)

{
  DAT_08048b33 = FUN_080480e5();
  DAT_08048b1b = FUN_080480e5();
  DAT_08048b23 = FUN_080480e5();
  DAT_08048b2b = FUN_080480e5();
  return;
}



undefined8 __regparm3 FUN_0804816c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  iVar3 = 0x9c;
  pcVar4 = &DAT_08048c10;
  pcVar2 = &DAT_080489b3;
  do {
    pcVar6 = pcVar2;
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    iVar3 = iVar3 + -1;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar6 + 1;
  } while (iVar3 != 0 && cVar1 != '\0');
  iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),100);
  puVar5 = &DAT_08048ab7;
  do {
    cVar1 = *(char *)puVar5;
    pcVar4 = pcVar6 + 1;
    *pcVar6 = cVar1;
    iVar3 = iVar3 + -1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    pcVar6 = pcVar4;
  } while (iVar3 != 0 && cVar1 != '\0');
  *pcVar4 = '\0';
  return CONCAT44(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048194(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack4;
  
  puVar2 = (undefined4 *)register0x00000010;
  do {
    puVar6 = puVar2;
    puVar6[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar7 = puVar6 + 1;
    if (iVar3 == 0) {
      return;
    }
    puVar2 = puVar6 + 1;
  } while (_DAT_08048bb8 != 0x61747375);
  *puVar6 = 0x80481bd;
  FUN_0804816c();
  puVar4 = &DAT_080489b3;
  iVar3 = 0;
  do {
    do {
      iVar5 = iVar3;
      iVar3 = iVar5 + 1;
    } while (puVar4[iVar5] != '\0');
    *(undefined2 *)(puVar4 + iVar5) = 10;
    puVar7[-1] = 1;
    puVar7[-1] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    if (DAT_08048b53 != '2') {
      if (DAT_08048b53 != '1') {
        FUN_08048194();
        return;
      }
    }
    *puVar7 = 5;
    *puVar7 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = puVar7 + 2;
    puVar4 = &DAT_08048b54;
    DAT_08048b53 = '\0';
    iVar3 = 0;
  } while( true );
}



void FUN_08048205(void)

{
  code *pcVar1;
  int iVar2;
  short *unaff_EBX;
  
  iVar2 = 0;
  if (*unaff_EBX != 0x2d) {
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
    }
  }
                    // WARNING: Read-only address (ram,0x08048867) is written
  iRam08048867 = iVar2;
  return;
}



void FUN_08048227(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x08048479)
// WARNING: Removing unreachable block (ram,0x080480e0)
// WARNING: Removing unreachable block (ram,0x080480ed)
// WARNING: Removing unreachable block (ram,0x080480f3)
// WARNING: Removing unreachable block (ram,0x080480f8)
// WARNING: Removing unreachable block (ram,0x080480fd)
// WARNING: Removing unreachable block (ram,0x0804810d)
// WARNING: Removing unreachable block (ram,0x08048102)
// WARNING: Removing unreachable block (ram,0x08048106)
// WARNING: Removing unreachable block (ram,0x0804810b)
// WARNING: Removing unreachable block (ram,0x08048116)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_08048233(void)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined4 uStack4;
  
  bVar11 = 0;
  puVar4 = (undefined4 *)register0x00000010;
  do {
    puVar7 = puVar4;
    puVar7[-1] = 3;
    pcVar3 = (code *)swi(0x80);
    uVar12 = (*pcVar3)();
    puVar8 = puVar7 + 1;
    if ((uint)uVar12 == 0) {
      *puVar7 = 2;
      *puVar7 = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar7[1] = 1;
      pcVar3 = (code *)swi(0x80);
      uVar5 = (*pcVar3)();
      *(byte *)(unaff_EBP + 0x72) = *(byte *)(unaff_EBP + 0x72) & (byte)uVar5;
      return uVar5;
    }
    puVar4 = puVar7 + 1;
  } while ((uint)uVar12 < (uint)((ulonglong)uVar12 >> 0x20));
  uVar5 = 0;
  if (DAT_08048bbe != ' ') {
    return uVar5;
  }
  if (_DAT_08048bb8 == 0x61747375) {
    *puVar7 = 0x804827e;
    FUN_0804816c();
    if (*DAT_08048ab3 != (byte *)0x0) {
      pbVar9 = &DAT_080489b3;
      pbVar10 = *DAT_08048ab3;
      if (pbVar10 == (byte *)0x0) {
LAB_080482fc:
        *puVar7 = 0x8048301;
        FUN_08048118();
        for (uVar5 = DAT_08048b33 + 0x1ffU >> 9; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((int)puVar8 + -4) = 3;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
          puVar8 = (undefined4 *)((int)puVar8 + 4);
        }
        uVar5 = FUN_08048233();
        return uVar5;
      }
      do {
        bVar1 = *pbVar9;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (bVar1 != bVar2) goto LAB_080482fc;
        pbVar9 = pbVar9 + (uint)bVar11 * -2 + 1;
      } while ((bVar1 | bVar2) != 0);
    }
    uVar5 = (uint)DAT_08048b53;
    if ((DAT_08048b53 == 0) ||
       ((DAT_08048b53 < 0x38 && (uVar5 = (uint)(byte)(DAT_08048b53 - 0x30), 0x2f < DAT_08048b53))))
    {
      pcVar3 = *(code **)(uVar5 * 4 + 0x804846f);
      *puVar7 = 0x80482c0;
      iVar6 = (*pcVar3)();
      uVar5 = 0;
      if (-1 < iVar6) {
        *puVar7 = 0x10;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        if (DAT_08048b53 != 0x32) {
          puVar7[1] = 0xf;
          pcVar3 = (code *)swi(0x80);
          (*pcVar3)();
        }
        uVar5 = FUN_08048233();
        return uVar5;
      }
    }
  }
  return uVar5;
}



void __regparm3 FUN_080484fd(uint param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined *unaff_EDI;
  uint auStack8 [2];
  
  puVar3 = auStack8 + 1;
  auStack8[1] = 0;
  param_3 = param_3 + -1;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 8;
    puVar4 = (uint *)((int)puVar3 + -4);
    piVar5 = (int *)((int)puVar3 + -4);
    puVar3 = (uint *)((int)puVar3 + -4);
    *puVar4 = (uint)(byte)((char)(uVar1 % 8) + 0x30);
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  do {
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    *unaff_EDI = (char)iVar2;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar2 != 0);
  return;
}



void FUN_08048514(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_08048ab7;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_08048522(void)

{
  char cVar1;
  char *unaff_ESI;
  char *unaff_EDI;
  
  do {
    cVar1 = *unaff_ESI;
    *unaff_EDI = cVar1;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return;
}



int FUN_08048529(int param_1,undefined param_2)

{
  short *psVar1;
  code *pcVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined2 extraout_var;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  byte bVar16;
  uint uStackY12;
  char *pcStackY8;
  
  bVar16 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar5 = (*pcVar2)();
  if (iVar5 != 0) {
    return iVar5;
  }
  FUN_08048514();
  FUN_080484fd();
  FUN_080484fd();
  FUN_080484fd();
  iVar5 = CONCAT31((int3)((uint)extraout_ECX >> 8),0xc);
  FUN_080484fd();
  *(undefined4 *)(iVar5 + 0x8048b88) = 0x61747375;
  *(undefined4 *)(iVar5 + 0x8048b8c) = 0x202072;
  FUN_08048522();
  uVar6 = CONCAT22(extraout_var,DAT_0804897b) >> 0xc;
  cVar4 = (char)uVar6;
  if (cVar4 == '\n') {
    FUN_0804865e();
    DAT_08048b53 = 0x32;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    iVar5 = FUN_08048622();
    return iVar5;
  }
  if (cVar4 == '\b') {
    FUN_08048660();
    DAT_08048b53 = 0x30;
    pcVar2 = (code *)swi(0x80);
    iVar5 = (*pcVar2)();
    puVar9 = (undefined4 *)&param_2;
    puVar10 = (undefined4 *)&param_2;
    if (-1 < iVar5) {
      param_1 = 0x8048693;
      FUN_08048622();
      uVar6 = DAT_08048987 + 0x1ffU & 0xfffffe00;
      if (uVar6 != 0) {
        while( true ) {
          puVar9[-1] = 3;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          puVar10 = puVar9 + 1;
          if (iVar5 == 0) break;
          uVar6 = uVar6 - iVar5;
          if ((int)uVar6 < 0) {
            if (uVar6 + iVar5 == 0) goto LAB_080486ef;
            break;
          }
          *puVar9 = 4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar9 = puVar9 + 2;
        }
        *puVar9 = 0x80486dd;
        FUN_08048514();
        *puVar9 = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar10 = puVar9 + 2;
      }
LAB_080486ef:
      *(undefined4 *)((int)puVar10 + -4) = 6;
      pcVar2 = (code *)swi(0x80);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  else {
    if (cVar4 == '\x06') {
      DAT_08048b53 = 0x34;
    }
    else {
      if (cVar4 == '\x04') {
        DAT_08048b53 = 0x35;
        FUN_08048622();
        pcVar2 = (code *)swi(0x80);
        param_1 = (*pcVar2)();
        if (param_1 < 0) {
          return 0x8048873;
        }
        iVar5 = -1;
        pcVar14 = "";
        do {
          pcVar13 = pcVar14;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar13 = pcVar14 + (uint)bVar16 * -2 + 1;
          cVar4 = *pcVar14;
          pcVar14 = pcVar13;
        } while (cVar4 != '\0');
        pcVar14 = pcVar13 + (uint)bVar16 * -2;
        pcVar13[-1] = '/';
        *pcVar14 = '\0';
        FUN_08048788();
        iVar5 = param_1;
        param_1 = extraout_ECX_00;
        puVar3 = (uint *)&param_1;
        while( true ) {
          puVar11 = puVar3;
          pcVar2 = (code *)swi(0x80);
          uVar6 = (*pcVar2)();
          if (uVar6 == 0) break;
          puVar11[1] = extraout_ECX_01;
          iVar7 = extraout_ECX_01;
          do {
            psVar1 = (short *)(iVar7 + 10);
            if (((*(char *)psVar1 != '\0') && (*psVar1 != 0x2e)) &&
               ((*psVar1 != 0x2e2e || (*(char *)(iVar7 + 0xc) != '\0')))) {
              *puVar11 = uVar6;
              puVar11[-1] = iVar5;
              puVar11[-2] = iVar7;
              puVar11[-3] = (uint)pcVar14;
              puVar11[-4] = 0x8048760;
              FUN_08048522();
              if (pcVar14 < (char *)0x80488d8) {
                puVar11[-4] = 0x804876d;
                FUN_08048529();
              }
              pcVar14 = (char *)puVar11[-3];
              iVar7 = puVar11[-2];
              iVar5 = puVar11[-1];
              uVar6 = *puVar11;
            }
            uVar8 = (uint)*(ushort *)(iVar7 + 8);
            iVar7 = iVar7 + uVar8;
            bVar15 = uVar8 <= uVar6;
            uVar6 = uVar6 - uVar8;
            puVar3 = puVar11 + 1;
          } while (bVar15 && uVar6 != 0);
        }
        puVar11[1] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar11[2] = 0x8048787;
        iVar5 = FUN_080487b2();
        return iVar5;
      }
      if (cVar4 != '\x02') {
        iVar5 = uVar6 - 1;
        if (iVar5 != 0) {
          return iVar5;
        }
        FUN_0804865e();
        DAT_08048b53 = 0x36;
        iVar5 = FUN_08048622();
        return iVar5;
      }
      DAT_08048b53 = 0x33;
    }
    FUN_0804865e();
    FUN_080484fd(8);
    FUN_080484fd();
    puVar12 = &DAT_08048b4b;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = 0x20;
      puVar12 = puVar12 + (uint)bVar16 * -2 + 1;
    }
    iVar5 = 0x200;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_080484fd();
    pcVar2 = (code *)swi(0x80);
    iVar5 = (*pcVar2)();
  }
  return iVar5;
}



void FUN_08048622(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_08048b4b;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0x20;
    puVar3 = puVar3 + 1;
  }
  iVar2 = 0x200;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_080484fd();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void FUN_0804865e(void)

{
  FUN_080484fd();
  return;
}



void FUN_08048660(void)

{
  FUN_080484fd();
  return;
}



undefined4 * FUN_08048788(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  
  if (DAT_08048eaf == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_080487c3();
    puVar1 = (undefined4 *)extraout_ECX;
  }
  else {
    puVar1 = (undefined4 *)*DAT_08048eaf;
    puVar2 = DAT_08048eaf;
    DAT_08048eaf = puVar1;
  }
  puVar2[0x100] = 0;
  return puVar1;
}



void FUN_080487b2(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + -4) = DAT_08048eaf;
  DAT_08048eaf = (undefined4 *)(in_ECX + -4);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x080488c1) overlaps instruction at (ram,0x080488c0)
// 
// WARNING: Removing unreachable block (ram,0x0804883d)
// WARNING: Removing unreachable block (ram,0x08048849)
// WARNING: Removing unreachable block (ram,0x08048853)
// WARNING: Removing unreachable block (ram,0x0804885b)
// WARNING: Removing unreachable block (ram,0x08048805)
// WARNING: Removing unreachable block (ram,0x0804880b)
// WARNING: Removing unreachable block (ram,0x0804882d)
// WARNING: Removing unreachable block (ram,0x0804882f)
// WARNING: Removing unreachable block (ram,0x0804880d)
// WARNING: Removing unreachable block (ram,0x08048827)
// WARNING: Removing unreachable block (ram,0x08048833)
// WARNING: Removing unreachable block (ram,0x0804887b)
// WARNING: Removing unreachable block (ram,0x080488b1)
// WARNING: Removing unreachable block (ram,0x080488c1)
// WARNING: Removing unreachable block (ram,0x080488c5)

undefined4 FUN_080487c3(void)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int in_ECX;
  int unaff_ESI;
  undefined8 uVar6;
  
  pcVar2 = (code *)swi(0x80);
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x80);
    uVar6 = (*pcVar2)();
    pbVar5 = (byte *)uVar6;
    out(*(undefined4 *)(unaff_ESI + -1),(short)((ulonglong)uVar6 >> 0x20));
    pbVar1 = (byte *)((int)((ulonglong)uVar6 >> 0x20) + 0x41);
    *pbVar1 = *pbVar1 & (byte)((ulonglong)uVar6 >> 0x20);
    bVar3 = (byte)uVar6;
    *pbVar5 = *pbVar5 & bVar3;
    *pbVar5 = *pbVar5 & bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
                    // WARNING: Bad instruction - Truncating control flow here
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iRam080487fe = in_ECX + 0x8048eb3;
                    // WARNING: Read-only address (ram,0x080487fe) is written
  return 0x8048eb3;
}


