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




undefined8 __regparm3 FUN_0804804c(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    iVar2 = *unaff_ESI;
    cVar1 = (char)iVar2;
    if (cVar1 == '\0') {
      iVar2 = -0x280;
    }
    else if (cVar1 == '\x02') {
      iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),0x280);
    }
    else if (cVar1 != '\x01') {
      iVar2 = -1;
    }
    iVar2 = iVar2 + unaff_ESI[1];
    *(undefined *)(unaff_EDI + iVar2) = 0xe;
    unaff_ESI[1] = iVar2;
    iVar2 = 0xffff;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    uVar3 = param_1;
    FUN_0804804c();
    *(char *)unaff_ESI = *(char *)unaff_ESI + (char)uVar3;
    *(byte *)unaff_ESI = *(byte *)unaff_ESI & 3;
    FUN_0804804c();
  }
  return CONCAT44(param_2,param_1);
}



// WARNING: Control flow encountered bad instruction data

void entry(undefined param_1)

{
  bool bVar1;
  code *pcVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  byte bVar11;
  byte in_AF;
  undefined uVar12;
  
  bVar4 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar5 = (*pcVar2)();
  puVar9 = (undefined4 *)&param_1;
  bVar11 = 0;
  uVar12 = iVar5 == 0;
  if (-1 < iVar5) {
    pcVar2 = (code *)swi(0x80);
    puVar6 = (undefined *)(*pcVar2)();
    puVar8 = (undefined4 *)&param_1;
    bVar11 = 0;
    uVar12 = puVar6 == (undefined *)0x0;
    if (-1 < (int)puVar6) {
      bVar11 = 0;
      puVar10 = puVar6;
      for (iVar5 = 0x4b000; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (uint)bVar4 * -2 + 1;
      }
      uVar12 = ((uint)puVar6 & 0xffffff00) == 0xffffffff;
      FUN_0804804c(0);
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar8 = (undefined4 *)&stack0x00000008;
    }
    *puVar8 = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar9 = puVar8 + 2;
  }
  *(undefined4 *)((int)puVar9 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  uVar7 = (*pcVar2)();
  in_AF = 9 < ((byte)uVar7 & 0xf) | in_AF;
  bVar4 = (byte)uVar7 + in_AF * -6;
  bVar1 = (bool)(0x9f < bVar4 | bVar11 | in_AF * (bVar4 < 6));
  bVar4 = bVar4 + bVar1 * -0x60;
  pcVar3 = (char *)(uVar7 & 0xffffff00 | (uint)bVar4);
  if (!bVar1 && !(bool)uVar12) {
    *pcVar3 = *pcVar3 + bVar4;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


