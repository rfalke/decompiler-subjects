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

void processEntry entry(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  short **ppsVar3;
  char extraout_AH;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  short *psVar9;
  short **ppsVar10;
  short **ppsVar11;
  undefined4 *puVar12;
  uint uVar13;
  char *pcVar8;
  
  pcVar7 = (char *)(param_3 + -1);
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  ppsVar10 = (short **)&stack0x00000008;
  iVar4 = ram0x080483bb;
  if (pcVar8[-1] == 'x') {
    DAT_0804881c = '\x02';
    ppsVar10 = (short **)&stack0x00000008;
  }
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          ram0x080483bb = iVar4;
          param_2 = param_2 + -1;
          if (param_2 == 0) {
            if (DAT_0804881c == '\x01') {
              do {
                ppsVar10[-1] = (short *)0x80480b6;
                FUN_080480f8();
                ppsVar10[-1] = (short *)0x80480bb;
                FUN_0804817c();
              } while( true );
            }
            if (DAT_0804881c != '\0') {
              do {
                ppsVar10[-1] = (short *)0x80480d7;
                FUN_080480f8();
                ppsVar10[-1] = (short *)0x80480dc;
                FUN_080482f0();
              } while( true );
            }
            do {
              ppsVar10[-1] = (short *)0x80480cb;
              FUN_080480f8();
              ppsVar10[-1] = (short *)0x80480d0;
              FUN_08048281();
            } while( true );
          }
          psVar9 = *ppsVar10;
          iVar4 = ram0x080483bb;
          if (*psVar9 != 0x6f2d) break;
          DAT_0804881c = '\0';
          ppsVar10 = ppsVar10 + 1;
        }
        if (*psVar9 != 0x632d) break;
        DAT_0804881c = '\x01';
        ppsVar10 = ppsVar10 + 1;
      }
      if (*psVar9 != 0x782d) break;
      DAT_0804881c = '\x02';
      ppsVar10 = ppsVar10 + 1;
    }
    *ppsVar10 = (short *)0x5;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    ppsVar11 = ppsVar10 + 2;
    ppsVar10 = ppsVar10 + 2;
    ppsVar3 = ppsVar11;
  } while (-1 < iVar4);
  do {
    puVar12 = ppsVar3;
    puVar12[-1] = 2;
    puVar12[-1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    *puVar12 = 1;
    *puVar12 = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar12[1] = 3;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    ppsVar3 = (short **)(puVar12 + 3);
  } while (iVar4 < 0);
  if (iVar4 != 0) {
    DAT_080483c7 = iVar4;
    return;
  }
  if (DAT_0804881c == '\x02') {
    puVar12[2] = 0x8048165;
    FUN_0804835d();
  }
  else {
    puVar12[2] = 0x804816e;
    FUN_08048264();
  }
  puVar12[2] = 0x8048175;
  FUN_08048138();
  puVar12[2] = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  uVar13 = 0;
  do {
    puVar12[3] = DAT_080483bf + uVar13;
    if ((DAT_080483bf + uVar13 & 0xf) == 0) {
      puVar12[3] = 0x8048192;
      uVar5 = FUN_08048264();
      puVar12[3] = uVar5;
    }
    uVar6 = puVar12[3];
    do {
      bVar1 = *(byte *)((int)&DAT_080483cb + uVar13);
      if ((char)bVar1 < ' ') {
        if (((((bVar1 != 10) && (bVar1 != 9)) && (bVar1 != 10)) && ((bVar1 != 0 && (bVar1 != 0xc))))
           && (bVar1 != 8)) goto LAB_08048208;
        do {
          puVar12[3] = 0x804825a;
          FUN_08048138();
        } while (extraout_AH != '\x01');
      }
      else if (bVar1 == 0x7f) {
LAB_08048208:
        puVar12[3] = (uint)bVar1;
        puVar12[3] = 0x8048220;
        FUN_08048138();
        puVar12[3] = 0x804822f;
        FUN_08048138();
        puVar12[3] = 0x8048238;
        FUN_08048138();
      }
      else {
        puVar12[3] = CONCAT31((int3)(uVar6 >> 8),bVar1);
        puVar12[2] = 0x80481aa;
        FUN_08048138();
        puVar12[3] = 0x80481b0;
        FUN_08048138();
        puVar12[3] = 0x80481b7;
        FUN_08048138();
        puVar12[3] = 0x80481be;
        FUN_08048138();
      }
      uVar13 = uVar13 + 1;
    } while ((uVar13 != DAT_080483c7) && (uVar6 = uVar13 & 0xffffff0f, (char)uVar6 != '\0'));
    puVar12[3] = 0x80481d6;
    FUN_08048138();
    if (uVar13 == DAT_080483c7) {
      DAT_080483bf = DAT_080483bf + uVar13;
      return;
    }
  } while( true );
}



void FUN_080480f8(void)

{
  byte bVar1;
  code *pcVar2;
  char extraout_AH;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  while( true ) {
    *(undefined4 *)((int)register0x00000010 + -4) = 3;
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) break;
    *(undefined4 *)register0x00000010 = 2;
    *(undefined4 *)register0x00000010 = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    *(undefined4 *)((int)register0x00000010 + 4) = 1;
    *(undefined4 *)((int)register0x00000010 + 4) = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 0xc);
  }
  if (iVar3 != 0) {
    DAT_080483c7 = iVar3;
    return;
  }
  if (DAT_0804881c == '\x02') {
    *(undefined4 *)register0x00000010 = 0x8048165;
    FUN_0804835d();
  }
  else {
    *(undefined4 *)register0x00000010 = 0x804816e;
    FUN_08048264();
  }
  *(undefined4 *)register0x00000010 = 0x8048175;
  FUN_08048138();
  *(undefined4 *)register0x00000010 = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  uVar6 = 0;
  do {
    *(uint *)((int)register0x00000010 + 4) = DAT_080483bf + uVar6;
    if ((DAT_080483bf + uVar6 & 0xf) == 0) {
      *(undefined4 *)((int)register0x00000010 + 4) = 0x8048192;
      uVar4 = FUN_08048264();
      *(undefined4 *)((int)register0x00000010 + 4) = uVar4;
    }
    uVar5 = *(uint *)((int)register0x00000010 + 4);
    do {
      bVar1 = *(byte *)((int)&DAT_080483cb + uVar6);
      if ((char)bVar1 < ' ') {
        if (((((bVar1 != 10) && (bVar1 != 9)) && (bVar1 != 10)) && ((bVar1 != 0 && (bVar1 != 0xc))))
           && (bVar1 != 8)) goto LAB_08048208;
        do {
          *(undefined4 *)((int)register0x00000010 + 4) = 0x804825a;
          FUN_08048138();
        } while (extraout_AH != '\x01');
      }
      else if (bVar1 == 0x7f) {
LAB_08048208:
        *(uint *)((int)register0x00000010 + 4) = (uint)bVar1;
        *(undefined4 *)((int)register0x00000010 + 4) = 0x8048220;
        FUN_08048138();
        *(undefined4 *)((int)register0x00000010 + 4) = 0x804822f;
        FUN_08048138();
        *(undefined4 *)((int)register0x00000010 + 4) = 0x8048238;
        FUN_08048138();
      }
      else {
        *(uint *)((int)register0x00000010 + 4) = CONCAT31((int3)(uVar5 >> 8),bVar1);
        *(undefined4 *)register0x00000010 = 0x80481aa;
        FUN_08048138();
        *(undefined4 *)((int)register0x00000010 + 4) = 0x80481b0;
        FUN_08048138();
        *(undefined4 *)((int)register0x00000010 + 4) = 0x80481b7;
        FUN_08048138();
        *(undefined4 *)((int)register0x00000010 + 4) = 0x80481be;
        FUN_08048138();
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 != DAT_080483c7) && (uVar5 = uVar6 & 0xffffff0f, (char)uVar5 != '\0'));
    *(undefined4 *)((int)register0x00000010 + 4) = 0x80481d6;
    FUN_08048138();
    if (uVar6 == DAT_080483c7) {
      DAT_080483bf = DAT_080483bf + uVar6;
      return;
    }
  } while( true );
}



void __regparm3 FUN_08048138(char param_1)

{
  byte bVar1;
  code *pcVar2;
  char extraout_AH;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  
  (&DAT_080487cc)[DAT_080483c3] = param_1;
  DAT_080483c3 = DAT_080483c3 + 1;
  if (param_1 != '\n') {
    return;
  }
  pcVar2 = (code *)swi(0x80);
  iVar3 = (*pcVar2)();
  puVar6 = (uint *)&stack0x00000004;
  bVar8 = iVar3 < 0;
  if (!bVar8) {
    DAT_080483c3 = 0;
    return;
  }
  while (bVar8) {
    puVar6[-1] = 2;
    puVar6[-1] = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    *puVar6 = 1;
    *puVar6 = 1;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar6[1] = 3;
    pcVar2 = (code *)swi(0x80);
    iVar3 = (*pcVar2)();
    puVar6 = puVar6 + 3;
    bVar8 = iVar3 < 0;
  }
  if (iVar3 != 0) {
    DAT_080483c7 = iVar3;
    return;
  }
  if (DAT_0804881c == '\x02') {
    puVar6[-1] = 0x8048165;
    FUN_0804835d();
  }
  else {
    puVar6[-1] = 0x804816e;
    FUN_08048264();
  }
  puVar6[-1] = 0x8048175;
  FUN_08048138();
  puVar6[-1] = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  uVar7 = 0;
  do {
    *puVar6 = DAT_080483bf + uVar7;
    if ((DAT_080483bf + uVar7 & 0xf) == 0) {
      *puVar6 = 0x8048192;
      uVar4 = FUN_08048264();
      *puVar6 = uVar4;
    }
    uVar5 = *puVar6;
    do {
      bVar1 = *(byte *)((int)&DAT_080483cb + uVar7);
      if ((char)bVar1 < ' ') {
        if (((((bVar1 != 10) && (bVar1 != 9)) && (bVar1 != 10)) && ((bVar1 != 0 && (bVar1 != 0xc))))
           && (bVar1 != 8)) goto LAB_08048208;
        do {
          *puVar6 = 0x804825a;
          FUN_08048138();
        } while (extraout_AH != '\x01');
      }
      else if (bVar1 == 0x7f) {
LAB_08048208:
        *puVar6 = (uint)bVar1;
        *puVar6 = 0x8048220;
        FUN_08048138();
        *puVar6 = 0x804822f;
        FUN_08048138();
        *puVar6 = 0x8048238;
        FUN_08048138();
      }
      else {
        *puVar6 = CONCAT31((int3)(uVar5 >> 8),bVar1);
        puVar6[-1] = 0x80481aa;
        FUN_08048138();
        *puVar6 = 0x80481b0;
        FUN_08048138();
        *puVar6 = 0x80481b7;
        FUN_08048138();
        *puVar6 = 0x80481be;
        FUN_08048138();
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 != DAT_080483c7) && (uVar5 = uVar7 & 0xffffff0f, (char)uVar5 != '\0'));
    *puVar6 = 0x80481d6;
    FUN_08048138();
    if (uVar7 == DAT_080483c7) {
      DAT_080483bf = DAT_080483bf + uVar7;
      return;
    }
  } while( true );
}



void FUN_0804817c(void)

{
  char cVar1;
  char extraout_AH;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((DAT_080483bf + uVar2 & 0xf) == 0) {
      FUN_08048264();
    }
    do {
      cVar1 = *(char *)((int)&DAT_080483cb + uVar2);
      if (cVar1 < ' ') {
        if (((((cVar1 != '\n') && (cVar1 != '\t')) && (cVar1 != '\n')) &&
            ((cVar1 != '\0' && (cVar1 != '\f')))) && (cVar1 != '\b')) goto LAB_08048208;
        do {
          FUN_08048138();
        } while (extraout_AH != '\x01');
      }
      else if (cVar1 == '\x7f') {
LAB_08048208:
        FUN_08048138();
        FUN_08048138();
        FUN_08048138();
      }
      else {
        FUN_08048138(cVar1);
        FUN_08048138();
        FUN_08048138();
        FUN_08048138();
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 != DAT_080483c7) && ((uVar2 & 0xf) != 0));
    FUN_08048138();
    if (uVar2 == DAT_080483c7) {
      DAT_080483bf = DAT_080483bf + uVar2;
      return;
    }
  } while( true );
}



void FUN_08048264(void)

{
  byte in_CL;
  byte extraout_CL;
  
  while (2 < in_CL) {
    FUN_08048138();
    in_CL = extraout_CL;
  }
  FUN_08048138();
  return;
}



void FUN_08048281(void)

{
  int iVar1;
  int iVar2;
  
  *(undefined *)((int)&DAT_080483cb + DAT_080483c7) = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if ((DAT_080483bf + iVar1 & 0xfU) == 0) {
      FUN_08048264();
    }
    do {
      FUN_08048264();
      iVar1 = iVar2 + 2;
      if ((int)DAT_080483c7 <= iVar1) {
        if ((DAT_080483c7 & 1) != 0) {
          iVar1 = iVar2 + 1;
        }
        DAT_080483bf = DAT_080483bf + iVar1;
        FUN_08048138();
        return;
      }
      iVar2 = iVar1;
    } while ((iVar1 + DAT_080483bf & 0xfU) != 0);
    FUN_08048138();
  } while( true );
}



void FUN_080482f0(void)

{
  int iVar1;
  int iVar2;
  
  *(undefined *)((int)&DAT_080483cb + DAT_080483c7) = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if ((DAT_080483bf + iVar1 & 0xfU) == 0) {
      FUN_0804835d();
    }
    do {
      FUN_0804835d();
      iVar1 = iVar2 + 2;
      if ((int)DAT_080483c7 <= iVar1) {
        if ((DAT_080483c7 & 1) != 0) {
          iVar1 = iVar2 + 1;
        }
        DAT_080483bf = DAT_080483bf + iVar1;
        FUN_08048138();
        return;
      }
      iVar2 = iVar1;
    } while ((iVar1 + DAT_080483bf & 0xfU) != 0);
    FUN_08048138();
  } while( true );
}



void FUN_0804835d(void)

{
  char extraout_CL;
  
  do {
    FUN_08048138();
  } while (extraout_CL != '\0');
  FUN_08048138();
  return;
}


