typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  
  do {
    piVar6 = (int *)((int)register0x00000010 + 4);
    if (*(int *)register0x00000010 == 2) {
      pcVar4 = *(char **)((int)register0x00000010 + 8);
      *(undefined4 *)((int)register0x00000010 + 8) = 5;
      pcVar2 = (code *)swi(0x80);
      iVar3 = (*pcVar2)();
      piVar6 = (int *)((int)register0x00000010 + 0x10);
      if (-1 < iVar3) {
        *(int *)((int)register0x00000010 + 0xc) = iVar3;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)((int)register0x00000010 + 8) = 1;
        *(undefined4 *)((int)register0x00000010 + 8) = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        uVar5 = *(int *)((int)register0x00000010 + 0x10);
        *(undefined4 *)((int)register0x00000010 + 0x10) = 0x36;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *(undefined4 *)((int)register0x00000010 + 0x14) = uVar5;
        *(undefined4 *)((int)register0x00000010 + 0x10) = 1;
        *(undefined4 *)((int)register0x00000010 + 0x10) = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *(undefined4 *)((int)register0x00000010 + 0x14) = 0x80480a7;
        FUN_080481a6();
        *(undefined4 *)((int)register0x00000010 + 0x14) = 1;
        *(undefined4 *)((int)register0x00000010 + 0x14) = 1;
        *(undefined4 *)((int)register0x00000010 + 0x14) = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        uVar5 = *(int *)((int)register0x00000010 + 0x1c);
        *(undefined4 *)((int)register0x00000010 + 0x1c) = 3;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar7 = (int *)((int)register0x00000010 + 0x24);
        puVar11 = &DAT_080486ce;
        iVar3 = 0;
        DAT_080484ec = uVar5;
        do {
          *(int *)((int)register0x00000010 + 0x20) = iVar3;
          *(undefined **)((int)register0x00000010 + 0x1c) = puVar11;
          *(undefined4 *)((int)register0x00000010 + 0x18) = 0x80480da;
          FUN_080481eb();
          iVar3 = CONCAT31((int3)((uint)*(int *)((int)register0x00000010 + 0x20) >> 8),
                           (char)*(int *)((int)register0x00000010 + 0x20) + '\x01');
          puVar11 = (undefined *)(*(int *)((int)register0x00000010 + 0x1c) + 0x10);
        } while (puVar11 != &DAT_0804870e);
        if (DAT_080484f0 != 0) {
          _DAT_080484f4 = DAT_080484f0;
          *(uint *)((int)register0x00000010 + 0x20) = DAT_080484f0 >> 0x17;
          piVar7 = (int *)((int)register0x00000010 + 0x1c);
          *(uint *)((int)register0x00000010 + 0x1c) = DAT_080484f0 << 9;
          do {
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            *(undefined4 *)((int)piVar7 + 8) = 3;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            piVar7 = (int *)((int)piVar7 + 0x10);
            puVar11 = &DAT_080486ce;
            iVar10 = 0;
            iVar9 = iVar3;
            do {
              if (((puVar11[4] == '\x05') || (puVar11[4] == '\x0f')) || (puVar11[4] == -0x7b)) {
                iVar10 = iVar10 + 1;
                _DAT_080484f4 = *(uint *)(puVar11 + 8) + DAT_080484f0;
                iVar3 = _DAT_080484f4 * 0x200;
                *(uint *)((int)piVar7 + -4) =
                     (uint)CARRY4(*(uint *)(puVar11 + 8),DAT_080484f0) << 9 | _DAT_080484f4 >> 0x17;
                piVar8 = (int *)((int)piVar7 + -8);
                piVar7 = (int *)((int)piVar7 + -8);
                *piVar8 = iVar3;
              }
              else if (puVar11[4] != '\0') {
                *(int *)((int)piVar7 + -4) = iVar3;
                *(undefined **)((int)piVar7 + -8) = puVar11;
                *(int *)((int)piVar7 + -0xc) = iVar10;
                *(undefined4 *)((int)piVar7 + -0x10) = 0x804815c;
                FUN_080481eb();
                iVar10 = *(int *)((int)piVar7 + -0xc);
                puVar11 = *(undefined **)((int)piVar7 + -8);
                iVar3 = CONCAT31((int3)((uint)*(undefined4 *)((int)piVar7 + -4) >> 8),
                                 (char)*(undefined4 *)((int)piVar7 + -4) + '\x01');
                iVar9 = iVar3;
              }
              puVar11 = puVar11 + 0x10;
            } while (puVar11 != &DAT_0804870e);
            iVar3 = iVar9;
          } while (iVar10 != 0);
        }
        piVar7[-1] = 6;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        *piVar7 = 1;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar7[1] = 0x80481b2;
        FUN_080483df();
        piVar7[1] = 1;
        piVar7[1] = 1;
        piVar7[1] = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar7[2] = 0x80481ce;
        FUN_080483df();
        piVar7[2] = 1;
        piVar7[2] = 1;
        piVar7[2] = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        piVar7[3] = 0x80481ea;
        FUN_080483df();
        return;
      }
    }
    *(undefined4 *)((int)piVar6 + -4) = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    register0x00000010 = (BADSPACEBASE *)((int)piVar6 + 4);
  } while( true );
}



void FUN_080481a6(void)

{
  code *pcVar1;
  
  FUN_080483df();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  FUN_080483df();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  FUN_080483df();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080481eb(void)

{
  code *pcVar1;
  int unaff_EDI;
  
  if ((_DAT_0804870e != 0x55aa) && (_DAT_0804870e != -0x55ab)) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    return;
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  FUN_080483df();
  if (*(char *)(unaff_EDI + 4) == '\x06') {
    return;
  }
  if ((*(char *)(unaff_EDI + 4) == '\v') || (*(char *)(unaff_EDI + 4) == '\f')) {
    return;
  }
  if ((*(char *)(unaff_EDI + 4) == -0x5b) || (*(char *)(unaff_EDI + 4) == -0x5a)) {
    return;
  }
  if (*(char *)(unaff_EDI + 4) == -0x7e) {
    return;
  }
  if (*(char *)(unaff_EDI + 4) == -0x7d) {
    return;
  }
  if (*(char *)(unaff_EDI + 4) == '\0') {
    return;
  }
  if (((*(char *)(unaff_EDI + 4) != '\x05') && (*(char *)(unaff_EDI + 4) != '\x0f')) &&
     (*(char *)(unaff_EDI + 4) != -0x7b)) {
    return;
  }
  DAT_080484f0 = *(undefined4 *)(unaff_EDI + 8);
  return;
}



void FUN_080483df(void)

{
  code *pcVar1;
  
  FUN_080483ff();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



void __regparm3 FUN_080483ff(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *unaff_EDI;
  uint auStack_8 [2];
  
  puVar3 = auStack_8 + 1;
  auStack_8[1] = 0;
  do {
    uVar1 = param_1 / 10;
    puVar4 = (uint *)((int)puVar3 + -4);
    puVar5 = (undefined4 *)((int)puVar3 + -4);
    puVar3 = (uint *)((int)puVar3 + -4);
    *puVar4 = param_1 % 10 | 0x30;
    param_1 = uVar1;
  } while (uVar1 != 0);
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *unaff_EDI = (char)uVar2;
    unaff_EDI = unaff_EDI + 1;
  } while ((char)uVar2 != '\0');
  return;
}


