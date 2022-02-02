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




undefined8 entry(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar6;
  byte extraout_DL;
  byte bVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar14;
  byte bVar15;
  undefined8 uVar16;
  int unaff_retaddr;
  
  bVar15 = 0;
  iVar3 = unaff_retaddr + -1;
  if (iVar3 != 0) {
    puVar10 = (undefined4 *)&stack0x00000008;
    goto LAB_08048054;
  }
  puVar11 = (undefined4 *)&stack0x00000008;
LAB_080480a4:
  do {
    DAT_080481c9 = '\x01';
    puVar10 = puVar11;
LAB_080480ad:
    unaff_EBP = iVar3;
    puVar10[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar4 = (*pcVar1)();
    bVar6 = DAT_080481ba;
    puVar13 = puVar10 + 1;
    puVar12 = puVar10 + 1;
    puVar8 = unaff_EDI;
    if (iVar4 < 0) {
LAB_0804816a:
      uVar9 = 0xffffffff;
      unaff_EDI = puVar8;
      goto LAB_0804816d;
    }
    if (iVar4 != 0) {
      uVar5 = 0;
      puVar11 = extraout_ECX;
      do {
        unaff_ESI = (undefined4 *)((int)puVar11 + (uint)bVar15 * -2 + 1);
        bVar6 = *(byte *)puVar11;
        uVar2 = uVar5 & 0xffffff00;
        DAT_080481c5 = DAT_080481c5 + 1;
        if (((bVar6 == 0x20) || (bVar6 == 9)) || (bVar6 == 10)) {
          uVar5 = uVar2 | bVar6;
          if ((char)(uVar2 >> 8) != '\0') {
            DAT_080481c1 = DAT_080481c1 + 1;
            uVar5 = (uint)bVar6;
          }
        }
        else {
          uVar5 = (uint)CONCAT11(1,bVar6);
        }
        if ((char)uVar5 == '\n') {
          DAT_080481bd = DAT_080481bd + 1;
        }
        iVar4 = iVar4 + -1;
        puVar10 = puVar12;
        puVar11 = unaff_ESI;
        iVar3 = unaff_EBP;
      } while (iVar4 != 0);
      goto LAB_080480ad;
    }
    *puVar10 = unaff_EDI;
    iVar3 = 3;
    bVar7 = 4;
    unaff_ESI = &DAT_080481bd;
    do {
      puVar10[-1] = iVar3;
      unaff_ESI = unaff_ESI + (uint)bVar15 * -2 + 1;
      if ((bVar6 == 0) || ((bVar6 & bVar7) != 0)) {
        unaff_EDI = (undefined4 *)&DAT_080481cb;
        puVar10[-2] = 0x8048127;
        FUN_08048194();
        puVar10[-2] = 0x804812c;
        FUN_08048172();
        bVar7 = extraout_DL;
      }
      bVar7 = bVar7 >> 1;
      iVar3 = puVar10[-1] + -1;
    } while (iVar3 != 0);
    if (DAT_080481c9 != '\x01') {
      *puVar10 = 0x8048140;
      FUN_08048172();
    }
    *puVar10 = 0x804814a;
    FUN_08048172();
    puVar10 = puVar10 + 1;
LAB_08048054:
    while( true ) {
      puVar8 = (undefined4 *)*puVar10;
      puVar13 = puVar10 + 1;
      puVar11 = puVar10 + 1;
      if (puVar8 == (undefined4 *)0x0) break;
      iVar3 = 3;
      bVar6 = 4;
      puVar11 = (undefined4 *)&DAT_080481b4;
      unaff_EDI = &DAT_080481bd;
      while (unaff_ESI = (undefined4 *)((int)puVar11 + ((uint)bVar15 * -2 + 1) * 2),
            *(short *)puVar8 != *(short *)puVar11) {
        bVar6 = bVar6 >> 1;
        puVar14 = unaff_EDI + (uint)bVar15 * -2 + 1;
        *unaff_EDI = 0;
        iVar3 = iVar3 + -1;
        puVar11 = unaff_ESI;
        unaff_EDI = puVar14;
        if (iVar3 == 0) {
          iVar3 = 0;
          puVar11 = puVar10 + 1;
          if (*(char *)puVar8 == '-') goto LAB_080480a4;
          DAT_080481ca = '\x01';
          *puVar10 = 5;
          pcVar1 = (code *)swi(0x80);
          iVar3 = (*pcVar1)();
          puVar13 = puVar10 + 2;
          puVar10 = puVar10 + 2;
          unaff_EDI = puVar8;
          if (-1 < iVar3) goto LAB_080480ad;
          goto LAB_0804816a;
        }
      }
      DAT_080481ba = DAT_080481ba | bVar6;
      puVar10 = puVar10 + 1;
    }
    if (DAT_080481ca != '\0') {
      uVar9 = 0;
LAB_0804816d:
      puVar13[-1] = 1;
      pcVar1 = (code *)swi(0x80);
      uVar16 = (*pcVar1)();
      *puVar13 = (int)uVar16;
      puVar13[-1] = extraout_ECX_00;
      puVar13[-2] = (int)((ulonglong)uVar16 >> 0x20);
      puVar13[-3] = uVar9;
      puVar13[-4] = puVar13 + 1;
      puVar13[-5] = unaff_EBP;
      puVar13[-6] = unaff_ESI;
      puVar13[-7] = unaff_EDI;
      puVar13[-8] = 0x804817a;
      FUN_08048184();
      puVar13[-8] = 1;
      puVar13[-8] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      return CONCAT44(puVar13[-1],puVar13[1]);
    }
    DAT_080481ca = '\x01';
    iVar3 = 0;
  } while( true );
}



undefined8 FUN_08048172(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_08048184();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_08048184(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  return CONCAT44(iVar2,param_1);
}



undefined8 __regparm3 FUN_08048194(uint param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined4 *puVar8;
  undefined2 *unaff_EDI;
  uint uStack36;
  undefined *puVar7;
  
  puVar5 = &stack0xffffffe0;
  iVar4 = 0;
  do {
    uVar2 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    puVar6 = (uint *)(puVar5 + -4);
    puVar7 = puVar5 + -4;
    puVar5 = puVar5 + -4;
    *puVar6 = (uint)(byte)((char)(uVar2 % 10) + 0x30);
    iVar4 = iVar4 + 1;
    puVar3 = (undefined4 *)puVar7;
  } while (param_1 != 0);
  do {
    puVar8 = puVar3;
    puVar1 = (undefined2 *)((int)unaff_EDI + 1);
    *(char *)unaff_EDI = (char)*puVar8;
    iVar4 = iVar4 + -1;
    puVar3 = puVar8 + 1;
    unaff_EDI = puVar1;
  } while (iVar4 != 0);
  *puVar1 = 9;
  return CONCAT44(puVar8[6],puVar8[8]);
}


