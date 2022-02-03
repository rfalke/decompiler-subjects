typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
          undefined *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined uVar6;
  undefined4 unaff_EBX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int unaff_retaddr;
  
  puVar7 = &param_1;
  if (unaff_retaddr == 4) {
    param_2 = 0x8048069;
    FUN_080480e5();
    param_3 = 0x8048071;
    FUN_080480d1();
    param_4 = (undefined *)0x804807d;
    _DAT_08048211 = extraout_EDX;
    FUN_080480e5();
    uVar6 = (undefined)((uint)unaff_EBX >> 8);
    _DAT_0804820d = CONCAT31((int3)(((uint)CONCAT11((char)unaff_EBX,uVar6) << 0x10) >> 8),2);
    _DAT_080481fd = CONCAT31((int3)(((uint)CONCAT11((char)unaff_EBX,uVar6) << 0x10) >> 8),2);
    param_4 = (undefined *)0x6;
    param_3 = 1;
    param_2 = 2;
    param_1 = 0x66;
    pcVar1 = (code *)swi(0x80);
    uVar2 = (*pcVar1)();
    param_5 = (undefined *)0x4;
    param_4 = &DAT_0804804c;
    param_3 = 2;
    param_2 = 1;
    pcVar1 = (code *)swi(0x80);
    param_1 = uVar2;
    (*pcVar1)();
    param_6 = 0x10;
    param_5 = &DAT_080481fd;
    param_3 = 0x66;
    pcVar1 = (code *)swi(0x80);
    param_4 = (undefined *)uVar2;
    iVar3 = (*pcVar1)();
    puVar7 = &param_8;
    if (iVar3 == 0) {
      param_7 = 5;
      param_5 = (undefined *)0x66;
      pcVar1 = (code *)swi(0x80);
      param_6 = uVar2;
      (*pcVar1)();
      param_8 = 2;
      pcVar1 = (code *)swi(0x80);
      iVar3 = (*pcVar1)();
      puVar7 = (undefined4 *)&stack0x00000028;
      puVar10 = (undefined4 *)&stack0x00000028;
      if (iVar3 == 0) {
        while( true ) {
          do {
            puVar8 = puVar10;
            DAT_0804a21d = 0x10;
            puVar8[-1] = &DAT_0804a21d;
            puVar8[-2] = &DAT_0804821d;
            puVar8[-3] = uVar2;
            puVar8[-4] = 5;
            puVar8[-4] = 0x66;
            pcVar1 = (code *)swi(0x80);
            iVar3 = (*pcVar1)();
            puVar10 = puVar8 + 1;
          } while (iVar3 < 0);
          *puVar8 = 1;
          *puVar8 = 0x72;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar8[1] = 0x72;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar8[2] = 2;
          pcVar1 = (code *)swi(0x80);
          iVar4 = (*pcVar1)();
          if (iVar4 == 0) break;
          puVar8[3] = 6;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar10 = puVar8 + 5;
        }
        puVar8[3] = 6;
        puVar8[2] = 1;
        puVar8[1] = 2;
        *puVar8 = 1;
        *puVar8 = 0x66;
        pcVar1 = (code *)swi(0x80);
        iVar4 = (*pcVar1)();
        puVar8[4] = 0x10;
        puVar8[3] = &DAT_0804820d;
        puVar8[2] = iVar4;
        puVar8[1] = 3;
        puVar8[1] = 0x66;
        pcVar1 = (code *)swi(0x80);
        iVar5 = (*pcVar1)();
        puVar9 = puVar8 + 6;
        if (iVar5 != 0) {
          puVar8[5] = 1;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar9 = puVar8 + 7;
        }
        *(undefined4 *)((int)puVar9 + -4) = 2;
        pcVar1 = (code *)swi(0x80);
        iVar5 = (*pcVar1)();
        puVar10 = (undefined4 *)((int)puVar9 + 4);
        if (iVar5 != 0) {
          puVar10 = (undefined4 *)((int)puVar9 + 4);
          iVar3 = iVar4;
        }
        while( true ) {
          puVar10[-1] = 3;
          pcVar1 = (code *)swi(0x80);
          iVar4 = (*pcVar1)();
          if (iVar4 < 1) break;
          *puVar10 = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar10 = puVar10 + 2;
        }
        *puVar10 = 1;
        puVar10[-1] = iVar3;
        puVar10[-2] = 0xd;
        puVar10[-2] = 0x66;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar7 = puVar10 + 2;
      }
      goto LAB_080480cc;
    }
  }
  *(undefined4 *)((int)puVar7 + -4) = 1;
LAB_080480cc:
  puVar7[-1] = 1;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  do {
    *puVar7 = 0x80480dd;
    FUN_080480e5();
  } while (extraout_ECX != 1);
  return;
}



void FUN_080480d1(void)

{
  int extraout_ECX;
  
  do {
    FUN_080480e5();
  } while (extraout_ECX != 1);
  return;
}



void FUN_080480e5(void)

{
  byte bVar1;
  byte *unaff_ESI;
  
  do {
    bVar1 = *unaff_ESI;
    if (bVar1 < 0x30) {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while ((byte)(bVar1 - 0x30) < 10);
  return;
}


