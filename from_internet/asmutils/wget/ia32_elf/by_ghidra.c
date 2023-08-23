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




void processEntry
entry(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,char *param_5,
     undefined4 param_6)

{
  byte *pbVar1;
  undefined2 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *in_EDI;
  undefined4 *puVar11;
  undefined2 in_SS;
  byte bVar12;
  undefined4 *puVar8;
  
  bVar12 = 0;
  puVar10 = &param_6;
  if (param_2 == 3) {
    pcVar3 = (code *)swi(0x80);
    iVar5 = (*pcVar3)();
    puVar10 = (undefined4 *)&stack0x00000014;
    if (-1 < iVar5) {
      param_6._2_2_ = 0x5000;
      sVar7 = (short)((int)&param_6 + 2) + -2;
      puVar8 = (undefined4 *)CONCAT22((short)((uint)((int)&param_6 + 2) >> 0x10),sVar7);
      puVar2 = (undefined2 *)segment(in_SS,sVar7);
      DAT_0804819e = iVar5;
      *puVar2 = 2;
      puVar8[-1] = 0x8048087;
      FUN_0804817c();
      puVar8[-1] = 0x10;
      puVar8[-2] = puVar8;
      puVar8[-3] = DAT_0804819e;
      puVar8[-4] = 3;
      puVar8[-4] = 0x66;
      pcVar3 = (code *)swi(0x80);
      iVar5 = (*pcVar3)();
      puVar10 = puVar8 + 1;
      in_EDI = puVar8;
      if (iVar5 == 0) {
        puVar8[-0x7ff] = 0x20544547;
        cVar4 = '/';
        puVar10 = puVar8 + -0x7fe;
        do {
          puVar11 = (undefined4 *)((int)puVar10 + (uint)bVar12 * -2 + 1);
          *(char *)puVar10 = cVar4;
          param_4 = param_5 + (uint)bVar12 * -2 + 1;
          cVar4 = *param_5;
          param_5 = param_4;
          puVar10 = puVar11;
        } while (cVar4 != '\0');
        in_EDI = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        *(undefined *)puVar11 = 0x20;
        *in_EDI = 0x50545448;
        in_EDI[1] = 0x302e312f;
        in_EDI[2] = 0xa0d0a0d;
        puVar8[-0x800] = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar8[-0x7ff] = 3;
        pcVar3 = (code *)swi(0x80);
        iVar5 = (*pcVar3)();
        puVar11 = puVar8 + -0x7fd;
        puVar10 = puVar8 + -0x7fd;
        if ((puVar8[-0x7fd] == 0x50545448) &&
           (puVar10 = puVar8 + -0x7fd, *(int *)((int)puVar8 + -0x1feb) == 0x20303032)) {
LAB_08048118:
          do {
            in_EDI = puVar11;
            if (iVar5 != 0) {
              iVar5 = iVar5 + -1;
              in_EDI = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
              cVar4 = *(char *)puVar11;
              puVar11 = in_EDI;
              if (cVar4 != '\r') goto LAB_08048118;
            }
            puVar10 = puVar8 + -0x7fd;
            if (iVar5 == 0) break;
            if ((*(short *)((int)in_EDI + -1) == 0xa0a) ||
               (puVar11 = in_EDI, *(int *)((int)in_EDI + -1) == 0xa0d0a0d)) goto LAB_0804812f;
          } while( true );
        }
      }
    }
  }
LAB_08048175:
  *(undefined4 *)((int)puVar10 + -4) = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  iVar6 = 0;
  iVar5 = 0;
  do {
    cVar4 = '\0';
    while( true ) {
      pbVar1 = (byte *)(param_4 + iVar6);
      iVar6 = iVar6 + 1;
      if (*pbVar1 < 0x30) break;
      cVar4 = cVar4 * '\n' + (*pbVar1 - 0x30);
    }
    *(char *)((int)in_EDI + iVar5 + 4) = cVar4;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  return;
LAB_0804812f:
  in_EDI = (undefined4 *)((int)in_EDI + 3);
  puVar8[-0x7fe] = iVar5;
  puVar8[-0x7ff] = 0x42;
  puVar8[-0x7ff] = 5;
  pcVar3 = (code *)swi(0x80);
  iVar5 = (*pcVar3)();
  puVar10 = puVar8 + -0x7fd;
  if (-1 < iVar5) {
    puVar9 = puVar8 + -0x7fc;
    DAT_080481a2 = iVar5;
    do {
      puVar9[-1] = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      in_EDI = puVar9 + 1;
      *puVar9 = 3;
      pcVar3 = (code *)swi(0x80);
      iVar5 = (*pcVar3)();
      puVar10 = puVar9 + 2;
      puVar9 = puVar9 + 2;
    } while (iVar5 != 0);
  }
  goto LAB_08048175;
}



void FUN_0804817c(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    cVar4 = '\0';
    while( true ) {
      pbVar1 = (byte *)(unaff_ESI + iVar3);
      iVar3 = iVar3 + 1;
      if (*pbVar1 < 0x30) break;
      cVar4 = cVar4 * '\n' + (*pbVar1 - 0x30);
    }
    *(char *)(unaff_EDI + 4 + iVar2) = cVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}


