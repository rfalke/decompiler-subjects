typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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




void processEntry
entry(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
     int *param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  byte bVar11;
  undefined8 uVar12;
  
  bVar11 = 0;
  if (param_4 == (int *)0x0) {
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar9 = &param_6;
  }
  else {
    uVar4 = 1;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    piVar8 = (int *)&param_6;
    puVar6 = &param_6;
    if (*(short *)param_4 == 0x6e2d) {
      param_6 = (int *)0x80480e6;
      FUN_0804812b();
      puVar6 = (undefined4 *)&stack0x00000018;
      param_4 = param_7;
    }
    else if (*param_4 == 0x6e692d2d) {
      do {
        param_3 = (int *)((int)param_4 + (uint)bVar11 * -2 + 1);
        cVar1 = *(char *)param_4;
        if (cVar1 == '\0') goto LAB_08048110;
        param_4 = param_3;
      } while (cVar1 != '=');
      FUN_0804812b();
      puVar6 = &param_7;
      param_4 = param_6;
    }
    else {
      uVar4 = 2;
    }
    *(int **)((int)puVar6 + -4) = param_4;
    piVar10 = (int *)((int)puVar6 + -4);
    do {
      param_3 = piVar10 + (uint)bVar11 * -2 + 1;
      iVar2 = *piVar10;
      piVar10 = param_3;
    } while (iVar2 != 0);
    *(int **)((int)puVar6 + -8) = param_4;
    *(undefined **)((int)puVar6 + -0xc) = (undefined *)((int)puVar6 + -4);
    *(int **)((int)puVar6 + -0x10) = param_3;
    piVar10 = (int *)((int)puVar6 + -0x10);
    while( true ) {
      piVar7 = piVar10;
      uVar5 = piVar7[2];
      piVar7[2] = 2;
      pcVar3 = (code *)swi(0x80);
      uVar12 = (*pcVar3)();
      if ((int)uVar12 == 0) break;
      piVar7[3] = uVar5;
      piVar7[2] = extraout_ECX;
      piVar7[1] = (int)((ulonglong)uVar12 >> 0x20);
      *piVar7 = 0x72;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      piVar7[1] = 0;
      *piVar7 = uVar4;
      piVar7[-1] = 0;
      piVar7[-2] = 0;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      piVar7[1] = 4;
      piVar7[1] = 1;
      piVar7[1] = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      piVar10 = piVar7 + 3;
      param_3 = piVar7;
    }
    piVar7[3] = 0xb;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    piVar8 = piVar7 + 5;
LAB_08048110:
    *(undefined4 *)((int)piVar8 + -4) = 1;
    *(undefined4 *)((int)piVar8 + -4) = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    puVar9 = (undefined4 *)((int)piVar8 + 4);
  }
  *(undefined4 *)((int)puVar9 + -4) = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  do {
    cVar1 = *(char *)param_3;
    param_3 = (int *)((int)param_3 + (uint)bVar11 * -2 + 1);
  } while (cVar1 != '\0');
  return;
}



void FUN_0804812b(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  return;
}


