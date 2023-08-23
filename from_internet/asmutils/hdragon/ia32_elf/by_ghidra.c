typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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
    *(byte *)unaff_ESI = *(byte *)unaff_ESI + (char)uVar3;
    *(byte *)unaff_ESI = *(byte *)unaff_ESI & 3;
    FUN_0804804c();
  }
  return CONCAT44(param_2,param_1);
}



// WARNING: Control flow encountered bad instruction data

void processEntry entry(void)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  byte bVar12;
  byte in_AF;
  undefined uVar13;
  char cVar4;
  char *pcVar8;
  
  bVar3 = 0;
  pcVar2 = (code *)swi(0x80);
  iVar5 = (*pcVar2)();
  puVar10 = (undefined4 *)&stack0x00000004;
  bVar12 = 0;
  uVar13 = iVar5 == 0;
  if (-1 < iVar5) {
    pcVar2 = (code *)swi(0x80);
    puVar6 = (undefined *)(*pcVar2)();
    puVar9 = (undefined4 *)&stack0x00000004;
    bVar12 = 0;
    uVar13 = puVar6 == (undefined *)0x0;
    if (-1 < (int)puVar6) {
      bVar12 = 0;
      puVar11 = puVar6;
      for (iVar5 = 0x4b000; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (uint)bVar3 * -2 + 1;
      }
      uVar13 = ((uint)puVar6 & 0xffffff00) == 0xffffffff;
      FUN_0804804c(0);
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      puVar9 = (undefined4 *)&stack0x00000008;
    }
    *puVar9 = 6;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar10 = puVar9 + 2;
  }
  *(undefined4 *)((int)puVar10 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  uVar7 = (*pcVar2)();
  in_AF = 9 < ((byte)uVar7 & 0xf) | in_AF;
  bVar3 = (byte)uVar7 + in_AF * -6;
  bVar1 = (bool)(0x9f < bVar3 | bVar12 | in_AF * (bVar3 < 6));
  cVar4 = bVar3 + bVar1 * -0x60;
  pcVar8 = (char *)CONCAT31((int3)((uint)uVar7 >> 8),cVar4);
  if (!bVar1 && !(bool)uVar13) {
    *pcVar8 = *pcVar8 + cVar4;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


