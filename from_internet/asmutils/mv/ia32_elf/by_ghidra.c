typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned short    undefined2;
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




undefined4 processEntry entry(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_EDX;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_retaddr;
  int in_ESI;
  undefined4 in_EDI;
  char *pcVar6;
  undefined uVar7;
  undefined8 uVar8;
  
  piVar5 = (int *)&stack0x00000004;
  if (2 < param_2) {
    LOCK();
    in_EDI = *(undefined4 *)(&stack0x00000008 + (param_2 + -2) * 4);
    *(undefined4 *)(&stack0x00000008 + (param_2 + -2) * 4) = 0;
    UNLOCK();
    piVar4 = (int *)&stack0x00000008;
    while( true ) {
      in_ESI = *piVar4;
      piVar5 = piVar4 + 1;
      if (in_ESI == 0) break;
      *piVar4 = 0x8048065;
      FUN_08048071();
      piVar4 = piVar4 + 1;
    }
  }
  uVar7 = 1;
  piVar5[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  uVar8 = (*pcVar2)();
  *piVar5 = (int)uVar8;
  piVar5[-1] = extraout_ECX;
  piVar5[-2] = (int)((ulonglong)uVar8 >> 0x20);
  piVar5[-3] = 0;
  piVar5[-4] = (int)(piVar5 + 1);
  piVar5[-5] = unaff_retaddr;
  piVar5[-6] = in_ESI;
  piVar5[-7] = in_EDI;
  piVar5[-8] = 0x8048077;
  FUN_080480e7();
  if ((bool)uVar7) {
    piVar5[-8] = in_EDI;
    piVar5[-9] = 0x804807f;
    FUN_0804810e();
    pcVar6 = (char *)(in_ESI + extraout_EDX + -1);
    iVar3 = extraout_EDX;
    if (*pcVar6 == '/') {
      *pcVar6 = '\0';
    }
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + -1;
    } while (cVar1 != '/');
    piVar5[-8] = 0x80480ab;
    FUN_080480b8();
  }
  piVar5[-8] = 0x26;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return piVar5[1];
}



undefined8 FUN_08048071(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 in_ECX;
  int iVar3;
  int extraout_EDX;
  int unaff_ESI;
  char *pcVar4;
  undefined in_ZF;
  undefined4 unaff_retaddr;
  
  FUN_080480e7();
  if ((bool)in_ZF) {
    FUN_0804810e();
    pcVar4 = (char *)(unaff_ESI + extraout_EDX + -1);
    iVar3 = extraout_EDX;
    if (*pcVar4 == '/') {
      *pcVar4 = '\0';
    }
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + -1;
    } while (cVar1 != '/');
    FUN_080480b8();
  }
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_080480b8(undefined4 param_1,undefined4 param_2)

{
  FUN_0804811f();
  FUN_080480cc();
  FUN_0804812c();
  return CONCAT44(param_2,param_1);
}



void FUN_080480cc(void)

{
  int extraout_EDX;
  int unaff_EDI;
  
  FUN_0804810e();
  if (*(char *)(unaff_EDI + extraout_EDX + -1) != '/') {
    *(undefined2 *)(unaff_EDI + extraout_EDX) = 0x2f;
  }
  return;
}



undefined8 FUN_080480e7(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_0804810e(undefined4 param_1)

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



undefined8 __regparm3 FUN_0804811f(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int iVar1;
  undefined *unaff_ESI;
  undefined *unaff_EDI;
  byte bVar2;
  
  bVar2 = 0;
  FUN_0804810e();
  for (iVar1 = extraout_EDX + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar2 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar2 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_0804812c(undefined4 param_1,undefined4 param_2)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar1;
  undefined *unaff_ESI;
  int unaff_EDI;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  FUN_0804810e();
  FUN_0804810e();
  puVar2 = (undefined *)(unaff_EDI + extraout_EDX);
  for (iVar1 = extraout_EDX_00 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *unaff_ESI;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


