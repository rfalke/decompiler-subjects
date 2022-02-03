typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void __regparm3 FUN_0804804c(uint param_1)

{
  ulonglong uVar1;
  char *unaff_EDI;
  char *pcVar2;
  
  uVar1 = (ulonglong)param_1 / 10;
  pcVar2 = unaff_EDI;
  if ((int)uVar1 != 0) {
    pcVar2 = unaff_EDI + 1;
    *unaff_EDI = (char)uVar1 + '0';
  }
  *pcVar2 = (char)((ulonglong)param_1 % 10) + '0';
  return;
}



void __regparm3 FUN_0804805f(uint param_1)

{
  char *unaff_EDI;
  
  *unaff_EDI = (char)((ulonglong)param_1 / 10) + '0';
  unaff_EDI[1] = (char)((ulonglong)param_1 % 10) + '0';
  return;
}



void __regparm3 FUN_0804806e(uint param_1)

{
  undefined *unaff_EDI;
  
  FUN_0804804c((param_1 >> 5) + 10);
  *unaff_EDI = 0x2e;
  FUN_0804805f();
  return;
}



// WARNING: Control flow encountered bad instruction data

void entry(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined *puVar10;
  undefined *puVar11;
  undefined *unaff_ESI;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  byte bVar16;
  byte in_AF;
  undefined uVar17;
  byte bVar18;
  undefined6 uVar19;
  uint unaff_retaddr;
  undefined4 uStack376;
  undefined auStack372 [368];
  undefined4 uStack4;
  char *pcVar9;
  
  bVar18 = 0;
  uStack4 = 0x4e;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
                    // WARNING: Read-only address (ram,0x0804821a) is written
  uRam0804821a = 0x20;
  uStack4 = 0x80480d6;
  FUN_0804804c();
                    // WARNING: Read-only address (ram,0x0804821b) is written
  uVar1 = (uint)bVar18;
  uRam0804821b = 0x3a;
  FUN_0804805f();
  uVar7 = 0x6d61;
  if (0xc < (uint)((((ulonglong)unaff_retaddr % 0x1e13380) % 0x15180) / 0xe10)) {
    uVar7 = 0x6d70;
  }
  puVar12 = (undefined4 *)(uVar1 * -2 + 0x804821e + (uint)bVar18 * -4);
  *(undefined2 *)(uVar1 * -2 + 0x804821c) = uVar7;
  puVar13 = puVar12 + (uint)bVar18 * -2 + 1;
  *puVar12 = 0x70752020;
  puVar12 = (undefined4 *)((int)puVar13 + (uint)bVar18 * -4 + 2);
  *(undefined2 *)puVar13 = 0x2020;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  if ((int)(((ulonglong)param_1 % 0x1e13380) / 0x15180) != 0) {
    FUN_0804804c();
    puVar13 = puVar12 + (uint)bVar18 * -2 + 1;
    *puVar12 = 0x79616420;
    puVar12 = puVar13 + (uint)bVar18 * -2 + 1;
    *puVar13 = 0x20202c73;
  }
  FUN_0804804c();
  puVar14 = (undefined2 *)((int)puVar12 + (uint)bVar18 * -2 + 1);
  *(undefined *)puVar12 = 0x3a;
  FUN_0804805f();
  puVar12 = (undefined4 *)(puVar14 + (uint)bVar18 * -2 + 1);
  *puVar14 = 0x202c;
  pcVar4 = (code *)swi(0x80);
  iVar8 = (*pcVar4)();
  puVar11 = &stack0x0000000c;
  if (-1 < iVar8) {
    puVar10 = auStack372;
    DAT_0804826a = iVar8;
    do {
      *(undefined4 *)(puVar10 + -4) = 3;
      pcVar4 = (code *)swi(0x80);
      iVar8 = (*pcVar4)();
      puVar11 = puVar10 + 4;
      puVar10 = puVar10 + 4;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(puVar11 + 0x17c) = 0x80481a0;
  FUN_0804804c();
  *puVar12 = 0x65737520;
  puVar12[1] = 0x202c7372;
  puVar12[2] = 0x64616f6c;
  puVar12[3] = 0x65766120;
  puVar12[4] = 0x65676172;
  *(undefined2 *)((int)puVar12 + 0x15) = 0x203a;
  bVar16 = (undefined4 *)0xffffffe8 < puVar12;
  uVar17 = (undefined2 *)((int)puVar12 + 0x17) == (undefined2 *)0x0;
  *(undefined4 *)(puVar11 + 0x17c) = 0x80481d4;
  FUN_0804806e();
  puVar14 = (undefined2 *)((int)puVar12 + (uint)bVar18 * -4 + 0x19);
  *(undefined2 *)((int)puVar12 + 0x17) = 0x202c;
  *(undefined4 *)(puVar11 + 0x17c) = 0x80481e3;
  FUN_0804806e();
  puVar15 = puVar14 + (uint)bVar18 * -2 + 1;
  *puVar14 = 0x202c;
  *(undefined4 *)(puVar11 + 0x17c) = 0x80481f2;
  FUN_0804806e();
  *(undefined *)puVar15 = 10;
  *(undefined4 *)(puVar11 + 0x17c) = 0x50;
  *(undefined4 *)(puVar11 + 0x17c) = 1;
  *(undefined4 *)(puVar11 + 0x17c) = 4;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  *(undefined4 *)(puVar11 + 0x180) = 1;
  pcVar4 = (code *)swi(0x80);
  uVar19 = (*pcVar4)();
  uVar7 = (undefined2)((uint6)uVar19 >> 0x20);
  in_AF = 9 < ((byte)uVar19 & 0xf) | in_AF;
  bVar5 = (byte)uVar19 + in_AF * -6;
  bVar3 = (bool)(0x9f < bVar5 | bVar16 | in_AF * (bVar5 < 6));
  bVar5 = bVar5 + bVar3 * -0x60;
  pcVar9 = (char *)((uint)uVar19 & 0xffffff00 | (uint)bVar5);
  if (bVar3 || (bool)uVar17) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (!bVar3) {
    if (bVar3) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    out(*unaff_ESI,uVar7);
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar5 = bVar5 + in_AF * -6;
    bVar5 = bVar5 + (0x9f < bVar5 | bVar3 | in_AF * (bVar5 < 6)) * -0x60;
    pcVar9 = (char *)((uint)uVar19 & 0xffffff00 | (uint)bVar5);
    if (!(bool)uVar17) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar2 = in(uVar7);
    *(undefined4 *)((int)puVar15 + (uint)bVar18 * -2 + 1) = uVar2;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
    *pcVar9 = *pcVar9 + bVar5;
  }
  cVar6 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


