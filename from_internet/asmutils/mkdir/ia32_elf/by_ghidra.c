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




void processEntry entry(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;
  int extraout_EDX;
  short *psVar5;
  short **ppsVar6;
  short **ppsVar7;
  short **ppsVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  byte bVar15;
  
  bVar15 = 0;
  ppsVar6 = (short **)&stack0x00000004;
  ppsVar8 = (short **)&stack0x00000004;
  if (param_2 != 1) goto LAB_08048057;
LAB_08048050:
  do {
    *(undefined4 *)((int)ppsVar8 + -4) = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    ppsVar6 = (short **)((int)ppsVar8 + 4);
LAB_08048057:
    psVar11 = *ppsVar6;
    do {
      psVar10 = (short *)((int)psVar11 + (uint)bVar15 * -2 + 1);
      cVar1 = *(char *)psVar11;
      psVar11 = psVar10;
    } while (cVar1 != '\0');
    iVar9 = 0;
    ppsVar7 = ppsVar6 + 1;
    while( true ) {
      while( true ) {
        psVar11 = *ppsVar7;
        *ppsVar7 = psVar11;
        if (*psVar11 != 0x702d) break;
        iVar9 = iVar9 + 1;
        ppsVar7 = ppsVar7 + 1;
      }
      if (*psVar11 != 0x6d2d) goto LAB_080480a8;
      pbVar12 = (byte *)ppsVar7[1];
      ppsVar8 = ppsVar7 + 2;
      if (pbVar12 == (byte *)0x0) break;
      iVar3 = 0;
      ppsVar7[1] = (short *)0x8;
      pbVar13 = pbVar12;
      while( true ) {
        bVar4 = *pbVar13 - 0x30;
        if ((*pbVar13 < 0x30) || (7 < bVar4)) break;
        iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)(byte)iVar3 * (ushort)(byte)ppsVar7[1]
                        ) + (uint)bVar4;
        pbVar13 = pbVar13 + 1;
      }
      ppsVar8 = ppsVar7 + 2;
      if ((pbVar12 == pbVar13) || (ppsVar8 = ppsVar7 + 2, ppsVar7 = ppsVar7 + 2, iVar3 == 0)) break;
    }
  } while( true );
LAB_080480a8:
  while( true ) {
    psVar5 = *ppsVar7;
    ppsVar8 = ppsVar7 + 1;
    if (psVar5 == (short *)0x0) break;
    if (psVar10[-3] == 0x6d72) {
      *ppsVar7 = (short *)0x28;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      ppsVar7 = ppsVar7 + 2;
    }
    else {
      *ppsVar7 = psVar10;
      ppsVar8 = ppsVar7;
      if (iVar9 == 0) goto LAB_080480cc;
      while( true ) {
        bVar14 = false;
        *(undefined4 *)((int)ppsVar7 + -4) = 0x80480e4;
        FUN_080480ee();
        if (!bVar14) break;
        *(char *)psVar5 = '\0';
        ppsVar8 = ppsVar7;
        psVar11 = psVar5;
        psVar10 = psVar5;
LAB_080480cc:
        psVar5 = psVar11;
        *(undefined4 *)((int)ppsVar8 + -4) = 0x27;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        ppsVar7 = (short **)((int)ppsVar8 + 4);
        if (extraout_EDX != 0) break;
        *(char *)psVar10 = '/';
        psVar5 = (short *)((int)psVar5 + 1);
        ppsVar7 = (short **)((int)ppsVar8 + 4);
      }
      psVar10 = *ppsVar7;
      ppsVar7 = ppsVar7 + 1;
      psVar11 = psVar5;
    }
  }
  goto LAB_08048050;
}



uint __regparm3 FUN_080480ee(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *unaff_ESI;
  
  iVar3 = (param_1 & 0xff) << 8;
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return param_1;
    }
    uVar2 = (uint)iVar3 >> 8;
    iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),cVar1);
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != (char)uVar2);
  return param_1;
}


