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




// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0804814f) overlaps instruction at (ram,0x0804814e)
// 

void processEntry entry(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined3 uVar8;
  byte extraout_CL;
  undefined2 uVar9;
  byte *pbVar10;
  int *piVar11;
  undefined *in_ESI;
  undefined4 *in_EDI;
  byte bVar12;
  byte in_AF;
  bool bVar13;
  undefined8 uVar14;
  char *pcVar7;
  
  piVar11 = (int *)&stack0x00000004;
  if (param_2 == '\x02') {
    piVar11 = (int *)&stack0x0000000c;
  }
  piVar11[-1] = 5;
  pcVar3 = (code *)swi(0x80);
  iVar6 = (*pcVar3)();
  *piVar11 = iVar6;
  if (iVar6 != -2) {
    while( true ) {
      piVar11[-1] = 3;
      pcVar3 = (code *)swi(0x80);
      iVar6 = (*pcVar3)();
      if (iVar6 == 0) break;
                    // WARNING: Read-only address (ram,0x080480e0) is written
      uRam080480e0 = 7;
      *piVar11 = 0x20;
      *piVar11 = 1;
      *piVar11 = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      piVar11[1] = 1;
      piVar11[1] = 1;
      piVar11[1] = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      piVar11 = piVar11 + 3;
    }
    *piVar11 = 1;
    *piVar11 = 1;
    *piVar11 = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    piVar11 = piVar11 + 2;
  }
  piVar11[-1] = 6;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  bVar12 = 0;
  bVar13 = true;
  *piVar11 = 1;
  pcVar3 = (code *)swi(0x80);
  uVar14 = (*pcVar3)();
  pbVar10 = (byte *)((ulonglong)uVar14 >> 0x20);
  in_AF = 9 < ((byte)uVar14 & 0xf) | in_AF;
  uVar8 = (undefined3)((ulonglong)uVar14 >> 8);
  bVar4 = (byte)uVar14 + in_AF * -6;
  bVar2 = (bool)(0x9f < bVar4 | bVar12 | in_AF * (bVar4 < 6));
  bVar4 = bVar4 + bVar2 * -0x60;
  pcVar7 = (char *)CONCAT31(uVar8,bVar4);
  if (!bVar2 && !bVar13) {
    if (!bVar2) {
      if (bVar2) goto LAB_0804814c;
      uVar9 = (undefined2)((ulonglong)uVar14 >> 0x20);
      out(*in_ESI,uVar9);
      in_AF = 9 < (bVar4 & 0xf) | in_AF;
      bVar4 = bVar4 + in_AF * -6;
      cVar5 = bVar4 + (0x9f < bVar4 | bVar2 | in_AF * (bVar4 < 6)) * -0x60;
      pcVar7 = (char *)CONCAT31(uVar8,cVar5);
      if (!bVar13) {
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
        *pcVar7 = *pcVar7 + cVar5;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      uVar1 = in(uVar9);
      *in_EDI = uVar1;
      *pbVar10 = *pbVar10 & extraout_CL;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
      *pcVar7 = *pcVar7 + cVar5;
    }
    cVar5 = (char)pcVar7;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar7 = *pcVar7 + cVar5;
  }
  cVar5 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
LAB_0804814c:
  cVar5 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


