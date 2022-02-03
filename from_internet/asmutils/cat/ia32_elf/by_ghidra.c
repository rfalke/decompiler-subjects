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




void __regparm3 entry(uint param_1)

{
  code *pcVar1;
  char cVar2;
  char **ppcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  short **ppsVar9;
  short **ppsVar10;
  short **ppsVar11;
  byte *pbVar12;
  undefined uVar13;
  int unaff_retaddr;
  
  ppsVar11 = (short **)&stack0x00000008;
  ppcVar3 = (char **)&stack0x00000008;
  if (unaff_retaddr == 1) goto LAB_080480e6;
  while( true ) {
    ppsVar11 = (short **)ppcVar3;
    pcVar8 = (char *)*ppsVar11;
    if (pcVar8 == (char *)0x0) {
      *ppsVar11 = (short *)0x0;
      DAT_0804c2b8 = (byte)(param_1 >> 8);
      goto LAB_080480e6;
    }
    param_1 = param_1 & 0xffffff00;
    if ((*pcVar8 != '-') || (pbVar12 = (byte *)(pcVar8 + 1), pcVar8[1] == 0)) break;
    while( true ) {
      bVar4 = *pbVar12;
      param_1 = param_1 & 0xffffff00 | (uint)bVar4;
      ppcVar3 = (char **)ppsVar11 + 1;
      if (bVar4 == 0) break;
      if (bVar4 == 0x41) {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x700);
      }
      if ((char)param_1 == 'b') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x3000);
      }
      if ((char)param_1 == 'e') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x600);
      }
      if ((char)param_1 == 'E') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x200);
      }
      if ((char)param_1 == 'n') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x1000);
      }
      if ((char)param_1 == 's') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x800);
      }
      if ((char)param_1 == 't') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x500);
      }
      if ((char)param_1 == 'T') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x100);
      }
      if ((char)param_1 == 'v') {
        param_1 = (uint)(ushort)((ushort)param_1 | 0x400);
      }
      pbVar12 = pbVar12 + 1;
      if ((char)param_1 == '-') {
        DAT_0804c2b8 = (byte)(param_1 >> 8);
        ppsVar9 = (short **)((char **)ppsVar11 + 1);
        goto LAB_080480ca;
      }
    }
  }
  *ppsVar11 = (short *)pcVar8;
  DAT_0804c2b8 = (byte)(param_1 >> 8);
  ppsVar9 = ppsVar11;
LAB_080480ca:
  ppsVar10 = ppsVar9 + 1;
  ppsVar11 = ppsVar9 + 1;
  if (*ppsVar9 != (short *)0x0) {
    if (**ppsVar9 != 0x2d) goto code_r0x080480d7;
    goto LAB_080480e6;
  }
  uVar13 = DAT_0804c2b0 < 0;
  if (DAT_0804c2b0 != 0) {
    *ppsVar9 = (short *)0x1;
    *ppsVar9 = (short *)0x4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppsVar10 = ppsVar9 + 2;
  }
  *(undefined4 *)((int)ppsVar10 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  ppsVar11 = (short **)((int)ppsVar10 + 4);
  goto LAB_08048134;
code_r0x080480d7:
  *ppsVar9 = (short *)0x5;
  pcVar1 = (code *)swi(0x80);
  iVar5 = (*pcVar1)();
  ppsVar11 = ppsVar9 + 2;
  ppsVar9 = ppsVar9 + 2;
  if (-1 < iVar5) {
LAB_080480e6:
    while (uVar13 = (char)DAT_0804c2b8 < '\0', DAT_0804c2b8 == 0) {
      ppsVar11[-1] = (short *)0x3;
      pcVar1 = (code *)swi(0x80);
      iVar5 = (*pcVar1)();
      ppsVar9 = ppsVar11 + 1;
      if ((iVar5 < 0) || (ppsVar9 = ppsVar11 + 1, iVar5 == 0)) goto LAB_080480ca;
      *ppsVar11 = (short *)0x1;
      *ppsVar11 = (short *)0x4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      ppsVar11 = ppsVar11 + 2;
    }
LAB_08048134:
    while( true ) {
      *(undefined4 *)((int)ppsVar11 + -4) = 0x8048139;
      uVar6 = FUN_080481e2();
      cVar2 = DAT_0804c2ba;
      ppsVar9 = ppsVar11;
      if ((bool)uVar13) break;
      bVar4 = (byte)uVar6;
      uVar6 = uVar6 & 0xffff0000 | (uint)CONCAT11(DAT_0804c2b8,bVar4);
      if (bVar4 == 10) {
        if ((((DAT_0804c2b8 & 8) == 0) || (DAT_0804c2ba != '\n')) ||
           (uVar13 = (char)(DAT_0804c2bb + -10) < '\0', DAT_0804c2bb != '\n')) {
          if ((DAT_0804c2b8 & 2) != 0) {
            *(undefined4 *)((int)ppsVar11 + -4) = 0x80481b0;
            uVar7 = FUN_08048202();
            uVar6 = CONCAT31((int3)((uint)uVar7 >> 8),10);
          }
          if (((uVar6 & 0x2000) != 0) && (cVar2 == (char)uVar6)) {
            DAT_0804c2b9 = DAT_0804c2b9 + '\x01';
          }
          *(undefined4 *)((int)ppsVar11 + -4) = 0x80481d0;
          DAT_0804c2ba = cVar2;
          FUN_08048202();
          DAT_0804c2b9 = DAT_0804c2b9 + -1;
          uVar13 = DAT_0804c2b9 < '\0';
        }
      }
      else {
        if (bVar4 == 9) {
          uVar13 = false;
          if ((DAT_0804c2b8 & 1) != 0) {
LAB_08048178:
            *(uint *)((int)ppsVar11 + -4) = uVar6;
            *(undefined4 *)((int)ppsVar11 + -8) = 0x8048180;
            FUN_08048202();
            uVar13 = (char)((char)*(undefined4 *)((int)ppsVar11 + -4) + '@') < '\0';
          }
        }
        else {
          uVar13 = false;
          if ((DAT_0804c2b8 & 4) != 0) {
            if (0x7f < bVar4) {
              *(uint *)((int)ppsVar11 + -4) = uVar6;
              *(undefined4 *)((int)ppsVar11 + -8) = 0x804815e;
              FUN_08048202();
              *(undefined4 *)((int)ppsVar11 + -8) = 0x8048165;
              FUN_08048202();
              uVar6 = *(uint *)((int)ppsVar11 + -4) & 0xffffff7f;
            }
            uVar13 = (char)((byte)uVar6 - 0x20) < '\0';
            if ((byte)uVar6 < 0x20) goto LAB_08048178;
          }
        }
        *(undefined4 *)((int)ppsVar11 + -4) = 0x8048171;
        FUN_08048202();
      }
    }
  }
  goto LAB_080480ca;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __regparm3 FUN_080481e2(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  byte *extraout_ECX;
  byte *unaff_ESI;
  undefined4 uStack4;
  
  uVar2 = _DAT_0804c2ac;
  do {
    _DAT_0804c2ac = uVar2;
    _DAT_0804c2ac = _DAT_0804c2ac - 1;
    if (-1 < (int)_DAT_0804c2ac) {
      return param_1 & 0xffffff00 | (uint)*unaff_ESI;
    }
    *(undefined4 *)((int)register0x00000010 + -4) = 3;
    pcVar1 = (code *)swi(0x80);
    param_1 = (*pcVar1)();
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    unaff_ESI = extraout_ECX;
    uVar2 = param_1;
  } while (param_1 != 0);
  return 0xffffffff;
}



void __regparm3 FUN_08048202(uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte bVar11;
  uint auStack20 [4];
  
  bVar11 = 0;
  puVar9 = (undefined4 *)&stack0xfffffffc;
  if (((param_1 & 0x1000) != 0) && (puVar9 = (undefined4 *)&stack0xfffffffc, DAT_0804c2b9 == '\0'))
  {
    auStack20[3] = param_1 & 0xffff0000 | (uint)CONCAT11(DAT_0804c2ba,(char)param_1);
    DAT_0804c2b9 = '\x01';
    DAT_0804c2b4 = DAT_0804c2b4 + 1;
    uVar10 = 0;
    uVar5 = DAT_0804c2b4;
    puVar3 = auStack20 + 3;
    do {
      puVar7 = (undefined *)puVar3;
      uVar1 = (ulonglong)uVar5;
      uVar5 = uVar5 / 10;
      *(uint *)(puVar7 + -4) = (uint)(byte)((char)(uVar1 % 10) + 0x30);
      uVar10 = uVar10 + 1;
      puVar3 = (uint *)(puVar7 + -4);
    } while (uVar5 != 0);
    *(undefined4 *)(puVar7 + -8) = 6;
    iVar6 = *(uint *)(puVar7 + -8) - uVar10;
    puVar9 = (undefined4 *)(puVar7 + -4);
    if (uVar10 <= *(uint *)(puVar7 + -8) && iVar6 != 0) {
      do {
        *(int *)(puVar7 + -8) = iVar6;
        *(undefined4 *)(puVar7 + -0xc) = 0x804824a;
        FUN_08048202();
        iVar6 = *(int *)(puVar7 + -8) + -1;
        puVar9 = (undefined4 *)(puVar7 + -4);
      } while (iVar6 != 0);
    }
    do {
      puVar8 = puVar9;
      *puVar8 = 0x8048254;
      FUN_08048202();
      uVar10 = uVar10 - 1;
      puVar9 = puVar8 + 1;
    } while (uVar10 != 0);
    *puVar8 = 0x804825e;
    FUN_08048202();
    *puVar8 = 0x8048265;
    FUN_08048202();
    param_1 = puVar8[1];
    puVar9 = puVar8 + 2;
    DAT_0804c2ba = (undefined)(param_1 >> 8);
  }
  iVar6 = DAT_0804c2b0 + 0x804a2ad;
  uVar4 = (undefined)param_1;
  (&DAT_0804a2ac)[DAT_0804c2b0] = uVar4;
  DAT_0804c2b0 = DAT_0804c2b0 + 1;
  DAT_0804c2bb = DAT_0804c2ba;
  DAT_0804c2ba = uVar4;
  if (0x804c2ab < iVar6 + (uint)bVar11 * -2) {
    *(undefined4 *)((int)puVar9 + -4) = 1;
    *(undefined4 *)((int)puVar9 + -4) = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    DAT_0804c2b0 = 0;
  }
  return;
}


