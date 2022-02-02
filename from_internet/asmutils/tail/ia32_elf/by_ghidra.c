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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined4 param_1,char *param_2,byte *param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined1 *extraout_ECX;
  undefined1 *puVar4;
  undefined1 *extraout_ECX_00;
  char *pcVar5;
  int extraout_ECX_01;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  byte bVar16;
  int unaff_retaddr;
  
  bVar16 = 0;
  pbVar12 = (byte *)0x804804d;
  DAT_0804818f = CONCAT31(DAT_0804818f._1_3_,10);
  piVar8 = &param_1;
  if (unaff_retaddr != 1) {
    piVar7 = (int *)&param_3;
    piVar6 = (int *)&param_3;
    if (*param_2 == '-') {
      pbVar13 = (byte *)(param_2 + 1);
      if (param_2[1] == 0x6e) {
        piVar6 = (int *)&stack0x00000010;
        pbVar13 = param_3;
      }
      DAT_0804818f = 0;
      while( true ) {
        pbVar12 = pbVar13 + 1;
        bVar2 = *pbVar13 - 0x30;
        if ((*pbVar13 < 0x30) || ('\t' < (char)bVar2)) break;
        DAT_0804818f = DAT_0804818f * 10 + (uint)bVar2;
        pbVar13 = pbVar12;
      }
      piVar7 = piVar6 + 1;
      piVar8 = piVar6 + 1;
      if (*piVar6 == 0) goto LAB_0804809e;
    }
    *(undefined4 *)((int)piVar7 + -4) = 5;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar10 = (undefined4 *)((int)piVar7 + 4);
    piVar8 = (int *)((int)piVar7 + 4);
    if (iVar3 < 0) goto LAB_08048111;
  }
LAB_0804809e:
  piVar8[-1] = 0x6c;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar10 = piVar8 + 1;
  if (((_DAT_0805419b & 0x8000) != 0) && (puVar10 = piVar8 + 1, 0x4000 < DAT_080541a7)) {
    *piVar8 = 0x13;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar10 = piVar8 + 2;
  }
  if (pbVar12[-1] == 99) {
    while( true ) {
      puVar11 = puVar10;
      puVar11[-1] = 3;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar10 = puVar11 + 1;
      if (iVar3 < 0) goto LAB_08048111;
      if (iVar3 == 0) break;
      puVar10 = puVar11 + 1;
      if (0x8050192 < (uint)(extraout_ECX_01 + iVar3)) {
        *puVar11 = 0x804816d;
        FUN_080480fa();
        puVar10 = puVar11 + 1;
      }
    }
    *puVar11 = 1;
    *puVar11 = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar10 = puVar11 + 2;
    goto LAB_08048111;
  }
  while( true ) {
    puVar9 = puVar10;
    puVar9[-1] = 3;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    puVar10 = puVar9 + 1;
    if (iVar3 < 0) goto LAB_08048111;
    puVar4 = extraout_ECX;
    puVar10 = puVar9 + 1;
    if (iVar3 == 0) break;
    puVar4 = extraout_ECX + iVar3;
    puVar10 = puVar9 + 1;
    if (0x8050193 < (int)puVar4) {
      *puVar9 = 0x80480da;
      puVar9[-1] = puVar4;
      puVar14 = &DAT_0804c193;
      puVar15 = &DAT_08048193;
      for (puVar4 = puVar4 + -0x804c193; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
        puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
      }
      return;
    }
  }
  do {
    if (puVar4 != &DAT_08048193) {
      iVar3 = DAT_0804818f + 1;
      pcVar5 = puVar4 + -1;
      while (iVar3 = iVar3 + -1, iVar3 != 0) {
        do {
          pcVar5 = pcVar5 + -1;
          if (pcVar5 == &DAT_08048193) goto LAB_0804813c;
        } while (*pcVar5 != '\n');
      }
LAB_0804813c:
      *(undefined4 *)((int)puVar10 + -4) = 1;
      *(undefined4 *)((int)puVar10 + -4) = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar10 = (undefined4 *)((int)puVar10 + 4);
    }
LAB_08048111:
    *(undefined4 *)((int)puVar10 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar10 = (undefined4 *)((int)puVar10 + 4);
    puVar4 = extraout_ECX_00;
  } while( true );
}



void FUN_080480fa(void)

{
  int in_ECX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &DAT_0804c193;
  puVar2 = &DAT_08048193;
  for (in_ECX = in_ECX + -0x804c193; in_ECX != 0; in_ECX = in_ECX + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


