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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int unaff_retaddr;
  undefined *puVar9;
  
  piVar6 = &param_3;
  if ((3 < param_2) && (piVar6 = &param_3, param_2 < 6)) {
    if (4 < param_2) {
      DAT_080492a1 = (char)param_2;
      _DAT_08049299 = &DAT_08049271;
    }
    param_4 = (undefined *)0x804806f;
    DAT_08049291 = FUN_08048236();
    param_5 = 0x804807a;
    param_5 = FUN_08048236();
    param_4 = (undefined *)0x6;
    param_3 = 1;
    pcVar1 = (code *)swi(0x80);
    unaff_retaddr = (*pcVar1)();
    piVar6 = (int *)&stack0x00000010;
    if (-1 < unaff_retaddr) {
      param_5 = 4;
      param_4 = &DAT_08048259;
      param_3 = 2;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      piVar6 = (int *)&stack0x00000014;
      piVar7 = (int *)&stack0x00000014;
      if (iVar4 == 0) goto LAB_080480b7;
    }
  }
  do {
    while( true ) {
      do {
        do {
          *(undefined4 *)((int)piVar6 + -4) = 1;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          piVar7 = (int *)((int)piVar6 + 4);
LAB_080480b7:
          _DAT_08049261 = CONCAT13((char)*piVar7,CONCAT12((char)((uint)*piVar7 >> 8),2));
          *piVar7 = 0x10;
          piVar7[-1] = (int)&DAT_08049261;
          piVar7[-2] = unaff_retaddr;
          piVar7[-3] = 2;
          piVar7[-3] = 0x66;
          pcVar1 = (code *)swi(0x80);
          iVar4 = (*pcVar1)();
          piVar6 = piVar7 + 2;
        } while (iVar4 != 0);
        piVar7[1] = 0xff;
        *piVar7 = unaff_retaddr;
        piVar7[-1] = 4;
        piVar7[-1] = 0x66;
        pcVar1 = (code *)swi(0x80);
        iVar4 = (*pcVar1)();
        piVar6 = piVar7 + 3;
      } while (iVar4 != 0);
      _DAT_08049295 = piVar7[3];
      piVar7[3] = 0x804810e;
      FUN_08048253();
      piVar7[3] = 0x17;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar7[4] = 2;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      piVar6 = piVar7 + 6;
      piVar2 = piVar7 + 6;
      if (iVar4 == 0) break;
      if (-1 < iVar4) {
        piVar7[5] = (int)&DAT_08049271;
        piVar7[4] = 0x8048133;
        FUN_0804821e();
        DAT_08049271 = 10;
        piVar7[5] = 1;
        piVar7[5] = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        piVar6 = piVar7 + 7;
      }
    }
    while( true ) {
      do {
        puVar8 = piVar2;
        puVar8[-1] = 0x10;
        DAT_08049291 = puVar8[-1];
        puVar8[-1] = &DAT_08049291;
        puVar8[-2] = &DAT_08049281;
        puVar8[-3] = unaff_retaddr;
        puVar8[-4] = 5;
        puVar8[-4] = 0x66;
        pcVar1 = (code *)swi(0x80);
        DAT_08049291 = (*pcVar1)();
        piVar2 = puVar8 + 1;
      } while (DAT_08049291 < 0);
      *puVar8 = 2;
      pcVar1 = (code *)swi(0x80);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) break;
      puVar8[1] = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8[2] = 1;
      puVar8[2] = 0x72;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8[3] = 0x72;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar2 = puVar8 + 5;
    }
    puVar8[1] = 6;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    if (DAT_080492a1 != '\0') {
      puVar8[2] = 4;
      iVar4 = puVar8[2];
      puVar5 = &DAT_08049285;
      puVar3 = &DAT_08049271;
      do {
        puVar9 = puVar3;
        puVar8[2] = puVar5 + 1;
        puVar8[1] = 0x80481c6;
        FUN_0804821e();
        puVar5 = (undefined1 *)puVar8[2];
        *puVar9 = 0x2e;
        iVar4 = iVar4 + -1;
        puVar3 = puVar9 + 1;
      } while (iVar4 != 0);
      *puVar9 = 0;
      unaff_retaddr = 0;
    }
    puVar8[2] = 0x3f;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8[3] = 1;
    puVar8[3] = 0x3f;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8[4] = 0xb;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8[5] = 0xc;
    puVar8[5] = 2;
    puVar8[5] = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    piVar6 = puVar8 + 7;
  } while( true );
}



void __regparm3 FUN_0804821e(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined *unaff_EDI;
  
  iVar3 = 0;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    puVar4 = (uint *)((int)register0x00000010 + -4);
    puVar5 = (undefined4 *)((int)register0x00000010 + -4);
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
    *puVar4 = (uint)(byte)((char)(uVar1 % 10) + 0x30);
    iVar3 = iVar3 + 1;
  } while (param_1 != 0);
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *unaff_EDI = (char)uVar2;
    iVar3 = iVar3 + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (iVar3 != 0);
  return;
}



void FUN_08048236(void)

{
  byte bVar1;
  byte *unaff_EBP;
  
  do {
    bVar1 = *unaff_EBP;
    unaff_EBP = unaff_EBP + 1;
    if (bVar1 < 0x30) {
      return;
    }
  } while ((char)(bVar1 - 0x30) < '\n');
  return;
}



void FUN_08048253(void)

{
  char *unaff_ESI;
  char *unaff_EDI;
  
  while( true ) {
    if (*unaff_ESI == '\0') break;
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  return;
}


