typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    word;
typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

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




undefined4 processEntry entry(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined4 *puVar9;
  int unaff_retaddr;
  undefined4 in_ESI;
  char *in_EDI;
  char *pcVar10;
  byte bVar11;
  undefined8 uVar12;
  
  bVar11 = 0;
  FUN_08048176();
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  ppcVar6 = (char **)&stack0x00000004;
  puVar9 = (undefined4 *)&stack0x00000004;
  if (-1 < iVar3) {
    while( true ) {
      pcVar2 = (code *)swi(0x80);
      uVar12 = (*pcVar2)();
      uVar4 = (uint)uVar12;
      ppcVar7 = (char **)((int)ppcVar6 + 4);
      puVar9 = (undefined4 *)((int)ppcVar6 + 4);
      unaff_retaddr = iVar3;
      if (((int)uVar4 < 0) ||
         (iVar5 = extraout_ECX, puVar9 = (undefined4 *)((int)ppcVar6 + 4), uVar4 == 0)) break;
      do {
        *(uint *)((int)ppcVar7 + -4) = uVar4;
        *(int *)((int)ppcVar7 + -8) = (int)uVar12;
        *(int *)((int)ppcVar7 + -0xc) = (int)((ulonglong)uVar12 >> 0x20);
        *(int *)((int)ppcVar7 + -0x10) = iVar5;
        *(char ***)((int)ppcVar7 + -0x14) = ppcVar7;
        *(int *)((int)ppcVar7 + -0x18) = iVar3;
        *(undefined4 *)((int)ppcVar7 + -0x1c) = in_ESI;
        ppcVar8 = (char **)((int)ppcVar7 + -0x20);
        *(char **)((int)ppcVar7 + -0x20) = in_EDI;
        *(undefined4 *)((int)ppcVar7 + -0x24) = 0x8048098;
        iVar3 = FUN_0804815a();
        if (iVar3 == 0) {
          *(int *)((int)ppcVar7 + -0x24) = iVar5 + 10;
          *(undefined4 *)((int)ppcVar7 + -0x28) = 0x80480b0;
          FUN_08048196();
          *(undefined4 *)((int)ppcVar7 + -0x24) = 0x80480b6;
          FUN_080481a3();
          *(undefined4 *)((int)ppcVar7 + -0x24) = 0x80480c0;
          FUN_080481a3();
          *(undefined4 *)((int)ppcVar7 + -0x24) = 5;
          pcVar2 = (code *)swi(0x80);
          iVar3 = (*pcVar2)();
          ppcVar8 = (char **)((int)ppcVar7 + -0x1c);
          if (-1 < iVar3) {
            *(undefined4 *)((int)ppcVar7 + -0x20) = 3;
            pcVar2 = (code *)swi(0x80);
            iVar3 = (*pcVar2)();
            ppcVar8 = (char **)((int)ppcVar7 + -0x18);
            if (-1 < iVar3) {
              *(undefined4 *)((int)ppcVar7 + -0x1c) = 6;
              pcVar2 = (code *)swi(0x80);
              (*pcVar2)();
              ppcVar8 = (char **)((int)ppcVar7 + -0x14);
              *(undefined4 *)((int)ppcVar7 + -0x18) = 0x80480ed;
              FUN_08048132();
              *(undefined4 *)((int)ppcVar7 + -0x18) = 0x80480f7;
              FUN_08048176();
            }
          }
        }
        in_EDI = *ppcVar8;
        in_ESI = ppcVar8[1];
        iVar3 = (int)ppcVar8[2];
        ppcVar6 = ppcVar8 + 8;
        ppcVar7 = ppcVar8 + 8;
        uVar4 = (uint)*(ushort *)((int)ppcVar8[4] + 8);
        iVar5 = (int)ppcVar8[4] + uVar4;
        uVar12 = CONCAT44(ppcVar8[5],(int)ppcVar8[6] - uVar4);
      } while ((int)ppcVar8[6] - uVar4 != 0);
    }
  }
  puVar9[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  uVar12 = (*pcVar2)();
  *puVar9 = (int)uVar12;
  puVar9[-1] = extraout_ECX_00;
  puVar9[-2] = (int)((ulonglong)uVar12 >> 0x20);
  puVar9[-3] = 0;
  puVar9[-4] = puVar9 + 1;
  puVar9[-5] = unaff_retaddr;
  puVar9[-6] = in_ESI;
  puVar9[-7] = in_EDI;
  iVar3 = extraout_ECX_00;
  do {
    puVar9[-8] = iVar3;
    iVar3 = -1;
    pcVar10 = in_EDI;
    do {
      in_EDI = pcVar10;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      in_EDI = pcVar10 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = in_EDI;
    } while (cVar1 != '\0');
    iVar3 = puVar9[-8] + -1;
    if (iVar3 == 0) {
      puVar9[-8] = 0x8048126;
      FUN_08048176();
      puVar9[-8] = 0x8048130;
      FUN_08048176();
      return *puVar9;
    }
  } while( true );
}



undefined8 __regparm3 FUN_08048111(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *unaff_EDI;
  char *pcVar3;
  
  do {
    iVar2 = -1;
    pcVar3 = unaff_EDI;
    do {
      unaff_EDI = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      unaff_EDI = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = unaff_EDI;
    } while (cVar1 != '\0');
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      FUN_08048176();
      FUN_08048176();
      return CONCAT44(param_2,param_1);
    }
  } while( true );
}



undefined8 __regparm3 FUN_08048132(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  char *unaff_EDI;
  byte bVar3;
  
  bVar3 = 0;
  while( true ) {
    pcVar2 = unaff_EDI;
    if (*pcVar2 == '\0') break;
    unaff_EDI = pcVar2 + 1;
    if (*pcVar2 == ' ') {
      *pcVar2 = '\0';
    }
  }
  pcVar2 = &DAT_080481e6;
  while (uVar1 = (uint)bVar3, *pcVar2 != '\0') {
    FUN_08048111();
    pcVar2 = pcVar2 + uVar1 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



void FUN_0804815a(void)

{
  byte bVar1;
  byte *unaff_ESI;
  
  while( true ) {
    bVar1 = *unaff_ESI;
    if (bVar1 == 0) {
      return;
    }
    if (bVar1 < 0x30) break;
    unaff_ESI = unaff_ESI + 1;
    if ('9' < (char)bVar1) {
      return;
    }
  }
  return;
}



undefined8 FUN_08048176(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_08048188();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_08048188(undefined4 param_1)

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



undefined8 __regparm3 FUN_08048196(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int iVar1;
  undefined *unaff_ESI;
  undefined *unaff_EDI;
  byte bVar2;
  
  bVar2 = 0;
  FUN_08048188();
  for (iVar1 = extraout_EDX + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar2 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar2 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080481a3(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar1;
  undefined *unaff_ESI;
  int unaff_EDI;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  FUN_08048188();
  FUN_08048188();
  puVar2 = (undefined *)(unaff_EDI + extraout_EDX);
  for (iVar1 = extraout_EDX_00 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


