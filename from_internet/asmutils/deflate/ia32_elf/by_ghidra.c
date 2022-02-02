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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined uVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (pcVar2[-7] == 'i') {
    pcVar1 = FUN_080480ab;
  }
  else {
    pcVar1 = (code *)&LAB_0804806c_4;
  }
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  pcVar2 = (char *)(*pcVar1)();
  *pcVar2 = *pcVar2 + (char)pcVar2;
  pcVar1 = (code *)swi(0x80);
  uVar3 = (*pcVar1)();
  DAT_08188569 = 0;
  puVar8 = &DAT_0818856e + ((uint)bVar13 * -4 - (uint)bVar13);
  *(undefined4 *)((int)&DAT_0818856a + (uint)bVar13 * -2) = uVar3;
  iVar4 = FUN_08048478();
  _DAT_0804855c = (undefined *)((int)&DAT_08088569 + iVar4);
  *puVar8 = (undefined2)DAT_08088569;
  DAT_08048564 = (undefined *)((int)(puVar8 + (uint)bVar13 * -2 + 1) + (uint)bVar13 * -2 + 1);
  puVar6 = (undefined *)((uint)bVar13 * -4 + 0x808856c + (uint)bVar13 * -2);
  *(undefined *)(puVar8 + (uint)bVar13 * -2 + 1) =
       *(undefined *)((int)&DAT_08088569 + (uint)bVar13 * -4 + 2);
  puVar9 = DAT_08048564 + 1;
LAB_0804810c:
  while( true ) {
    uVar11 = _DAT_0804855c == puVar6;
    if (_DAT_0804855c <= puVar6) {
      *DAT_08048564 = DAT_0804855b;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      return;
    }
    FUN_080484fb();
    FUN_08048546();
    if ((bool)uVar11) break;
    puVar7 = puVar6 + (uint)bVar13 * -2 + 1;
    DAT_08048568 = *puVar6;
    FUN_080484fb();
    FUN_08048546();
    if ((bool)uVar11) {
      FUN_0804848c();
      FUN_0804848c();
      *puVar9 = DAT_08048568;
      puVar6 = puVar7;
      puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
      goto LAB_08048169;
    }
    FUN_0804848c();
    puVar10 = puVar9 + (uint)bVar13 * -2 + 1;
    *puVar9 = DAT_08048568;
    puVar9 = puVar10 + (uint)bVar13 * -2 + 1;
    puVar6 = puVar7 + (uint)bVar13 * -2 + 1;
    *puVar10 = *puVar7;
  }
  FUN_0804848c();
  FUN_0804848c();
LAB_08048169:
  FUN_08048552();
  FUN_08048546();
  if (!(bool)uVar11) {
    FUN_0804848c();
    goto LAB_0804810c;
  }
  FUN_08048552();
  FUN_0804848c();
  FUN_08048546();
  if (!(bool)uVar11) {
LAB_08048291:
    FUN_0804848c();
    FUN_0804848c();
    goto LAB_0804810c;
  }
  FUN_08048552();
  FUN_08048546();
  if (!(bool)uVar11) {
LAB_08048279:
    FUN_0804848c();
    FUN_0804848c();
    goto LAB_0804810c;
  }
  FUN_08048552();
  FUN_08048546();
  if ((bool)uVar11) {
    FUN_08048552();
    FUN_0804848c();
    FUN_0804848c();
    FUN_08048546();
    if (!(bool)uVar11) {
      FUN_0804848c();
      FUN_0804848c();
      FUN_0804848c();
      goto LAB_0804810c;
    }
    FUN_08048552();
    FUN_08048546();
    if (!(bool)uVar11) {
      FUN_0804848c();
      FUN_0804848c();
      FUN_0804848c();
      goto LAB_0804810c;
    }
    FUN_08048552();
    FUN_08048546();
    if ((bool)uVar11) {
      FUN_08048552();
      FUN_08048546();
      if ((bool)uVar11) {
        FUN_08048552();
        FUN_08048546();
        if (!(bool)uVar11) {
          FUN_0804848c();
          goto LAB_08048291;
        }
        FUN_08048552();
        FUN_08048546();
        if (!(bool)uVar11) {
          FUN_0804848c();
          goto LAB_08048279;
        }
        FUN_08048552();
        FUN_08048546();
        if ((bool)uVar11) {
          FUN_08048552();
          FUN_0804848c();
          FUN_0804848c();
          FUN_0804848c();
          uVar5 = 0;
          while ((bVar12 = puVar6 == _DAT_0804855c, puVar7 = puVar9, puVar6 < _DAT_0804855c &&
                 (FUN_08048546(), uVar5 = extraout_ECX, bVar12))) {
            FUN_08048552();
            uVar5 = extraout_ECX_00;
          }
          for (; 0xfe < uVar5; uVar5 = uVar5 - 0xff) {
            *puVar7 = 0xff;
            puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
          }
          puVar9 = puVar7 + (uint)bVar13 * -2 + 1;
          *puVar7 = (char)uVar5;
        }
        else {
          FUN_0804848c();
          FUN_0804848c();
          FUN_0804848c();
        }
      }
      else {
        FUN_0804848c();
        FUN_0804848c();
        FUN_0804848c();
      }
      goto LAB_0804810c;
    }
    FUN_0804848c();
  }
  FUN_0804848c();
  FUN_0804848c();
  goto LAB_0804810c;
}



// WARNING: Switch with 1 destination removed at 0x080480cd
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080480ab(void)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  FUN_080480e2();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  if (DAT_08188569 != '\0') {
    return;
  }
  FUN_08048478();
  _DAT_0804855c = (undefined *)((int)&DAT_08088569 + DAT_0818856a);
  puVar4 = &DAT_08188570 + (uint)bVar8 * -4 + (uint)bVar8 * -8;
  DAT_08088569._0_2_ = (&DAT_0818856e)[(uint)bVar8 * -4];
  *(undefined1 *)((int)&DAT_08088569 + (uint)bVar8 * -4 + 2) = *puVar4;
  puVar5 = puVar4 + (uint)bVar8 * -2 + 1 + (uint)bVar8 * -2 + 1;
  DAT_0804855b = puVar4[(uint)bVar8 * -2 + 1];
  DAT_0804855a = 0;
  puVar6 = (undefined *)((uint)bVar8 * -4 + 0x808856c + (uint)bVar8 * -2);
LAB_08048361:
  do {
    while( true ) {
      if (_DAT_0804855c <= puVar6) {
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        return;
      }
      cVar3 = FUN_080484cb();
      if (cVar3 != '\0') break;
      FUN_08048518();
      uVar1 = (uint)bVar8;
      puVar4 = puVar5 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar5;
      FUN_08048518();
      puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6[uVar1 * -2 + 1] = *puVar4;
      puVar6 = puVar6 + uVar1 * -2 + 1 + (uint)bVar8 * -2 + 1;
    }
    cVar3 = FUN_080484cb();
    puVar7 = puVar6;
    if (cVar3 == '\0') {
      FUN_08048518();
      puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    }
    FUN_08048518();
    FUN_08048535();
    cVar3 = FUN_080484cb();
    puVar6 = puVar7;
  } while (cVar3 == '\0');
  FUN_08048535();
  cVar3 = FUN_080484cb();
  if (cVar3 != '\0') goto code_r0x080483c3;
  goto LAB_08048455;
code_r0x080483c3:
  FUN_08048535();
  cVar3 = FUN_080484cb();
  if (cVar3 != '\0') {
    FUN_08048535();
    cVar3 = FUN_080484cb();
    if (cVar3 == '\0') {
      cVar3 = FUN_080484cb();
      if (cVar3 != '\0') {
        FUN_080484cb();
        FUN_08048535();
        goto LAB_08048361;
      }
    }
    else {
      FUN_08048535();
      cVar3 = FUN_080484cb();
      if (cVar3 != '\0') {
        cVar3 = FUN_080484cb();
        if (cVar3 == '\0') {
          FUN_08048535();
        }
        else {
          FUN_08048535();
          do {
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            cVar3 = FUN_08048535();
          } while (cVar3 == -1);
        }
        goto LAB_08048361;
      }
    }
LAB_08048455:
    cVar3 = FUN_080484cb();
    if (cVar3 != '\0') {
      FUN_08048535();
    }
  }
  goto LAB_08048361;
}



undefined8 __regparm3 FUN_080480e2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_08088569;
  for (iVar1 = 0x80000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xf7d9a03f;
    puVar2 = puVar2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_08048478(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_08048569;
  for (iVar1 = 0x10000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = &DAT_08088569;
    puVar2 = puVar2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_0804848c(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 unaff_EDI;
  
  bVar1 = DAT_0804855b | (char)param_1 << (DAT_0804855a & 0x1f);
  if ((byte)(DAT_0804855a + 1) == '\b') {
    _DAT_0804855a = 0;
    *DAT_08048564 = bVar1;
    DAT_08048564 = (byte *)unaff_EDI;
    return CONCAT44(param_2,param_1);
  }
  _DAT_0804855a = CONCAT11(bVar1,DAT_0804855a + 1);
  return CONCAT44(param_2,param_1);
}



byte FUN_080484cb(void)

{
  byte bVar1;
  undefined *unaff_ESI;
  
  bVar1 = DAT_0804855b >> (DAT_0804855a & 0x1f) & 1;
  if ((byte)(DAT_0804855a + 1) == '\b') {
    DAT_0804855a = 0;
    DAT_0804855b = *unaff_ESI;
    return bVar1;
  }
  DAT_0804855a = DAT_0804855a + 1;
  return bVar1;
}



undefined8 __regparm3 FUN_080484fb(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  
  DAT_08048560 = (&DAT_08048569)
                 [CONCAT11(*(undefined *)(unaff_ESI + -2),*(undefined *)(unaff_ESI + -1))];
  (&DAT_08048569)[CONCAT11(*(undefined *)(unaff_ESI + -2),*(undefined *)(unaff_ESI + -1))] =
       unaff_ESI;
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_08048518(undefined4 param_1,undefined4 param_2)

{
  int unaff_EDI;
  
  DAT_08048560 = (&DAT_08048569)
                 [CONCAT11(*(undefined *)(unaff_EDI + -2),*(undefined *)(unaff_EDI + -1))];
  (&DAT_08048569)[CONCAT11(*(undefined *)(unaff_EDI + -2),*(undefined *)(unaff_EDI + -1))] =
       unaff_EDI;
  return CONCAT44(param_2,param_1);
}



void FUN_08048535(void)

{
  int in_ECX;
  undefined *unaff_EDI;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    *unaff_EDI = *DAT_08048560;
    DAT_08048560 = DAT_08048560 + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  return;
}



void FUN_08048546(void)

{
  return;
}



void FUN_08048552(void)

{
  DAT_08048560 = DAT_08048560 + 1;
  return;
}


