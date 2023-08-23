typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
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




undefined4 processEntry
entry(undefined4 param_1,char param_2,undefined4 param_3,short *param_4,short *param_5)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  short *psVar8;
  short *psVar9;
  undefined4 *in_EDI;
  byte bVar10;
  undefined8 uVar11;
  
  bVar10 = 0;
  puVar5 = &stack0xfffffffc;
  if (param_2 < '\x02') {
LAB_0804809f:
    in_EDI = &DAT_080a82ce;
    pcVar2 = (code *)swi(0x80);
    uVar11 = (*pcVar2)();
    psVar8 = (short *)((ulonglong)uVar11 >> 0x20);
    iVar3 = (int)uVar11;
    psVar9 = (short *)0x20000;
    if (iVar3 < 0) goto LAB_080480ea;
    do {
      iVar3 = FUN_080480f1();
      psVar9 = psVar8;
      do {
        psVar8 = (short *)((int)psVar9 + (uint)bVar10 * -2 + 1);
        cVar1 = *(char *)psVar9;
        iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),cVar1);
        psVar9 = psVar8;
      } while (cVar1 != '\0');
    } while (extraout_ECX != 1);
    if (param_2 < '\x02') goto LAB_080480ea;
    psVar9 = param_4;
    if (*param_4 == 0x612d) {
      psVar9 = (short *)0x0;
      FUN_080480f1();
    }
  }
  else if (*param_4 == 0x562d) {
    FUN_0804824a();
    register0x00000010 = (BADSPACEBASE *)&stack0xfffffffc;
    psVar9 = (short *)s_hackers__ksyms_v_0_1_0804826b;
  }
  else {
    if (*param_4 != 0x682d) {
      FUN_0804824a();
    }
    psVar9 = param_5;
    if (*param_4 != 0x6f2d) goto LAB_0804809f;
    if (param_2 < '\x03') {
      FUN_080480f1();
      register0x00000010 = (BADSPACEBASE *)&stack0xfffffffc;
      psVar9 = (short *)0x0;
    }
    else {
      FUN_080480f1();
      register0x00000010 = (BADSPACEBASE *)&stack0xfffffffc;
    }
  }
  iVar3 = 0;
LAB_080480ea:
  *(undefined4 *)((int)register0x00000010 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  uVar11 = (*pcVar2)();
  *(undefined **)register0x00000010 = puVar5;
  *(short **)((int)register0x00000010 + -4) = psVar9;
  *(int *)((int)register0x00000010 + -0x10) = (int)uVar11;
  *(undefined4 *)((int)register0x00000010 + -0x14) = extraout_ECX_00;
  *(int *)((int)register0x00000010 + -0x18) = (int)((ulonglong)uVar11 >> 0x20);
  *(int *)((int)register0x00000010 + -0x1c) = iVar3;
  *(undefined **)((int)register0x00000010 + -0x20) = (undefined *)((int)register0x00000010 + -0xc);
  *(BADSPACEBASE **)((int)register0x00000010 + -0x24) = register0x00000010;
  *(short **)((int)register0x00000010 + -0x28) = psVar9;
  *(undefined4 **)((int)register0x00000010 + -0x2c) = in_EDI;
  *(undefined4 *)((int)register0x00000010 + -0x30) = 4;
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  if (iVar3 < 0) {
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 0x8048129;
    FUN_08048214();
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 8;
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 1;
    *(undefined4 *)((int)register0x00000010 + -0x2c) = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    piVar6 = (int *)((int)register0x00000010 + -0x24);
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x8048143;
    FUN_0804824a();
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x804814d;
    FUN_0804824a();
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x8048155;
    FUN_0804824a();
    *(undefined4 *)((int)register0x00000010 + -0x28) = 0x804815f;
    FUN_0804824a();
  }
  else {
    *(undefined4 **)((int)register0x00000010 + -8) = &DAT_080882ca;
    *(undefined4 **)((int)register0x00000010 + -0xc) = &DAT_080882ca;
    iVar3 = DAT_080a82ca;
    piVar7 = (int *)((int)register0x00000010 + -0x28);
    do {
      piVar7[-1] = iVar3;
      piVar7[-2] = 0x804818a;
      FUN_08048214();
      piVar7[-2] = 8;
      piVar7[-2] = 1;
      piVar7[-2] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      piVar7[-1] = 0x80481a4;
      FUN_0804824a();
      piVar7[-1] = 0x80481b2;
      uVar4 = FUN_0804824a();
      if (*(int *)((int)register0x00000010 + -4) != 0) {
        if (uVar4 < 0x20) {
          do {
            piVar7[-1] = 0x80481cc;
            FUN_0804824a();
          } while (extraout_ECX_01 != 1);
        }
        piVar7[-1] = 0x80481d8;
        FUN_0804824a();
        piVar7[-1] = 0x80481e2;
        FUN_0804824a();
        piVar7[-1] = 0x80481ea;
        FUN_0804824a();
        piVar7[-1] = 0x80481f4;
        FUN_0804824a();
      }
      piVar7[-1] = 0x80481fe;
      FUN_0804824a();
      *(int *)((int)register0x00000010 + -8) = *(int *)((int)register0x00000010 + -8) + 8;
      piVar6 = piVar7 + 1;
      iVar3 = *piVar7 + -1;
      piVar7 = piVar7 + 1;
    } while (iVar3 != 0);
  }
  return *(undefined4 *)((int)piVar6 + 0x1c);
}



undefined8 FUN_080480f1(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int *piVar4;
  undefined **ppuVar5;
  int unaff_ESI;
  int iStack_34;
  undefined *puStack_28;
  undefined4 **ppuStack_24;
  undefined4 *local_10;
  undefined4 *local_c;
  
  puStack_28 = &stack0xfffffffc;
  ppuStack_24 = &local_10;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_08048214();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppuVar5 = &puStack_28;
    FUN_0804824a();
    FUN_0804824a();
    FUN_0804824a();
    FUN_0804824a();
  }
  else {
    local_c = &DAT_080882ca;
    local_10 = &DAT_080882ca;
    iVar2 = DAT_080a82ca;
    piVar4 = (int *)&stack0xffffffd4;
    do {
      piVar4[-1] = iVar2;
      piVar4[-2] = 0x804818a;
      FUN_08048214();
      piVar4[-2] = 8;
      piVar4[-2] = 1;
      piVar4[-2] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar4[-1] = 0x80481a4;
      FUN_0804824a();
      piVar4[-1] = 0x80481b2;
      uVar3 = FUN_0804824a();
      if (unaff_ESI != 0) {
        if (uVar3 < 0x20) {
          do {
            piVar4[-1] = 0x80481cc;
            FUN_0804824a();
          } while (extraout_ECX != 1);
        }
        piVar4[-1] = 0x80481d8;
        FUN_0804824a();
        piVar4[-1] = 0x80481e2;
        FUN_0804824a();
        piVar4[-1] = 0x80481ea;
        FUN_0804824a();
        piVar4[-1] = 0x80481f4;
        FUN_0804824a();
      }
      piVar4[-1] = 0x80481fe;
      FUN_0804824a();
      local_c = local_c + 2;
      ppuVar5 = (undefined **)(piVar4 + 1);
      iVar2 = *piVar4 + -1;
      piVar4 = piVar4 + 1;
    } while (iVar2 != 0);
  }
  return CONCAT44(*(undefined4 *)((int)ppuVar5 + 0x14),*(undefined4 *)((int)ppuVar5 + 0x1c));
}



void FUN_08048214(void)

{
  char extraout_CL;
  undefined *unaff_EDI;
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = 0;
  puVar2 = unaff_EDI;
  FUN_0804822c();
  *unaff_EDI = 9;
  if ((extraout_CL == '\x10') &&
     (0xf9 < (byte)((char)puVar2 - (char)(unaff_EDI + (uint)bVar1 * -2 + 1)))) {
    unaff_EDI[(uint)bVar1 * -2 + 1] = 9;
  }
  return;
}



void __regparm3 FUN_0804822c(uint param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *unaff_EDI;
  char cVar2;
  
  if (param_1 / param_3 != 0) {
    FUN_0804822c();
  }
  cVar2 = (char)(param_1 % param_3);
  cVar1 = cVar2 + '0';
  if ('9' < cVar1) {
    cVar1 = cVar2 + 'W';
  }
  *unaff_EDI = cVar1;
  return;
}



undefined4 __regparm3 FUN_0804824a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  char *unaff_ESI;
  
  if (unaff_ESI != (char *)0x0) {
    do {
      cVar1 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
    } while (cVar1 != '\0');
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    param_1 = param_3;
  }
  return param_1;
}


