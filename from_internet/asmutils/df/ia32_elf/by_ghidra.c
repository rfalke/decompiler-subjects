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

void entry(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  byte extraout_DL;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar5;
  char **ppcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  
  puVar5 = &param_3;
  puVar8 = &param_3;
  if ((param_2 == (short *)0x0) || (*param_2 != 0x2d2d)) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    param_3 = 5;
    pcVar1 = (code *)swi(0x80);
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
      param_4 = 0x1e;
      puVar8 = &param_5;
    }
    else {
      pcVar9 = &DAT_08048559;
      param_4 = 3;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar8 = (undefined4 *)&stack0x00000018;
      if (-1 < iVar3) {
        do {
          puVar5 = puVar8;
          bVar13 = 0;
          cVar2 = ' ';
          pcVar11 = &DAT_0804851c;
          do {
            pcVar10 = pcVar9;
            iVar4 = iVar3;
            if (iVar4 == 0) goto LAB_0804847f;
            pcVar12 = pcVar11 + 1;
            *pcVar11 = *pcVar10;
            iVar3 = iVar4 + -1;
            pcVar9 = pcVar10 + 1;
            pcVar11 = pcVar12;
          } while (pcVar10[1] != ' ');
          *pcVar12 = '\0';
          iVar4 = iVar4 + -2;
          pcVar9 = pcVar10 + 2;
          pcVar11 = &DAT_0804853a;
          do {
            if (iVar4 == 0) {
              *(undefined4 *)((int)puVar5 + -4) = 1;
              pcVar1 = (code *)swi(0x80);
              cVar2 = (*pcVar1)();
              puVar5 = (undefined4 *)((int)puVar5 + 4);
              iVar4 = extraout_ECX;
            }
            iVar4 = iVar4 + -1;
            pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
            pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
            *pcVar11 = *pcVar9;
            pcVar9 = pcVar10;
            pcVar11 = pcVar12;
          } while (cVar2 != *pcVar10);
          *pcVar12 = '\0';
          puVar5[-1] = iVar4;
          puVar5[-2] = pcVar10;
          puVar5[-3] = 99;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[-2] = 0x80482ad;
          FUN_080484b9();
          puVar5[-2] = extraout_EDX;
          puVar5[-3] = 1;
          puVar5[-3] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[-2] = 0x80482d5;
          FUN_08048491();
          puVar5[-1] = 0x1e;
          puVar5[-1] = 0x80482eb;
          FUN_080484c9();
          puVar5[-1] = 1;
          puVar5[-1] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          *puVar5 = 1;
          *puVar5 = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[1] = 0x8048330;
          FUN_08048491();
          puVar5[1] = 0x8048345;
          FUN_080484c9();
          puVar5[1] = 1;
          puVar5[1] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[2] = 1;
          puVar5[2] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[3] = 0x8048384;
          FUN_08048491();
          puVar5[3] = 10;
          puVar5[3] = 0x8048397;
          FUN_080484c9();
          puVar5[3] = 1;
          puVar5[3] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[4] = 1;
          puVar5[4] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          if (DAT_080484dd == 0) {
            _DAT_0804851b = 1;
            _DAT_08048511 = 0x202d;
          }
          else {
            puVar5[5] = 100;
            puVar5[5] = 0x8048402;
            FUN_08048491();
            (&DAT_08048511)[_DAT_0804851b] = 0x25;
          }
          puVar5[5] = 4;
          puVar5[5] = 0x804841e;
          FUN_080484c9();
          puVar5[5] = 1;
          puVar5[5] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[6] = 1;
          puVar5[6] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[7] = 1;
          puVar5[7] = 1;
          puVar5[7] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar5[8] = 0x804845e;
          FUN_080484b9();
          (&DAT_0804853a)[extraout_EDX_00] = 10;
          puVar5[8] = 1;
          puVar5[8] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          ppcVar6 = (char **)(puVar5 + 10);
          iVar3 = puVar5[0xb];
          puVar7 = puVar5 + 0xc;
          puVar5 = puVar5 + 0xc;
          pcVar11 = *ppcVar6;
          do {
            pcVar9 = pcVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar9 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar9;
          } while (cVar2 != '\n');
          puVar8 = puVar7;
        } while (iVar3 != 0);
        goto LAB_0804847f;
      }
      param_5 = 0x17;
      puVar8 = (undefined4 *)&stack0x00000018;
    }
  }
  else if ((*(int *)(param_2 + 1) != 0x706c6568) &&
          (puVar8 = &param_3, *(int *)(param_2 + 1) != 0x73726576)) goto LAB_0804847f;
  *(undefined4 *)((int)puVar8 + -4) = 2;
  *(undefined4 *)((int)puVar8 + -4) = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar5 = (undefined4 *)((int)puVar8 + 4);
LAB_0804847f:
  *(undefined4 *)((int)puVar5 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  if (9 < extraout_DL) {
    return;
  }
  return;
}



void __regparm3 FUN_08048484(undefined4 param_1,byte param_2)

{
  if (9 < param_2) {
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_08048491(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *unaff_EDI;
  undefined8 uVar6;
  undefined4 uStack36;
  
  iVar5 = 0;
  puVar3 = &stack0xffffffe0;
  do {
    *(undefined4 *)(puVar3 + -4) = 0x80484a3;
    uVar6 = FUN_08048484();
    *(int *)(puVar3 + -4) = (int)((ulonglong)uVar6 >> 0x20);
    iVar5 = iVar5 + 1;
    puVar1 = (undefined4 *)(puVar3 + -4);
    puVar3 = puVar3 + -4;
    iVar2 = iVar5;
  } while ((int)uVar6 != 0);
  do {
    _DAT_0804851b = iVar2;
    puVar4 = puVar1;
    *unaff_EDI = (char)*puVar4;
    iVar5 = iVar5 + -1;
    puVar1 = puVar4 + 1;
    unaff_EDI = unaff_EDI + 1;
    iVar2 = _DAT_0804851b;
  } while (iVar5 != 0);
  return CONCAT44(puVar4[6],puVar4[8]);
}



void FUN_080484b9(void)

{
  int unaff_EDI;
  char *pcVar1;
  
  pcVar1 = (char *)(unaff_EDI + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return;
}



undefined4 __regparm3 FUN_080484c9(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *unaff_EDI;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *unaff_EDI = 0x20;
    unaff_EDI = unaff_EDI + 1;
  }
  return param_1;
}


