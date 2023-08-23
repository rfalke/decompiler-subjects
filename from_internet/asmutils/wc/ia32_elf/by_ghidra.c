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




undefined4 processEntry entry(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  undefined4 extraout_ECX_00;
  byte bVar6;
  byte extraout_DL;
  byte bVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_retaddr;
  undefined4 *in_ESI;
  undefined4 *in_EDI;
  undefined4 *puVar14;
  byte bVar15;
  undefined8 uVar16;
  
  bVar15 = 0;
  if (param_2 != 1) {
    puVar10 = (undefined4 *)&stack0x00000008;
    goto LAB_08048054;
  }
  puVar11 = (undefined4 *)&stack0x00000008;
LAB_080480a4:
  do {
    DAT_080481c9 = '\x01';
    puVar10 = puVar11;
    iVar5 = 0;
LAB_080480ad:
    unaff_retaddr = iVar5;
    puVar10[-1] = 3;
    pcVar2 = (code *)swi(0x80);
    iVar4 = (*pcVar2)();
    bVar6 = DAT_080481ba;
    puVar13 = puVar10 + 1;
    puVar12 = puVar10 + 1;
    puVar8 = in_EDI;
    if (iVar4 < 0) {
LAB_0804816a:
      uVar9 = 0xffffffff;
      in_EDI = puVar8;
      goto LAB_0804816d;
    }
    if (iVar4 != 0) {
      bVar3 = false;
      puVar11 = extraout_ECX;
      do {
        in_ESI = (undefined4 *)((int)puVar11 + (uint)bVar15 * -2 + 1);
        cVar1 = *(char *)puVar11;
        DAT_080481c5 = DAT_080481c5 + 1;
        if (((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\n')) {
          if (bVar3) {
            DAT_080481c1 = DAT_080481c1 + 1;
            bVar3 = false;
          }
        }
        else {
          bVar3 = true;
        }
        if (cVar1 == '\n') {
          DAT_080481bd = DAT_080481bd + 1;
        }
        iVar4 = iVar4 + -1;
        puVar10 = puVar12;
        puVar11 = in_ESI;
        iVar5 = unaff_retaddr;
      } while (iVar4 != 0);
      goto LAB_080480ad;
    }
    *puVar10 = in_EDI;
    iVar5 = 3;
    bVar7 = 4;
    in_ESI = &DAT_080481bd;
    do {
      puVar10[-1] = iVar5;
      in_ESI = in_ESI + (uint)bVar15 * -2 + 1;
      if ((bVar6 == 0) || ((bVar6 & bVar7) != 0)) {
        in_EDI = (undefined4 *)&DAT_080481cb;
        puVar10[-2] = 0x8048127;
        FUN_08048194();
        puVar10[-2] = 0x804812c;
        FUN_08048172();
        bVar7 = extraout_DL;
      }
      bVar7 = bVar7 >> 1;
      iVar5 = puVar10[-1] + -1;
    } while (iVar5 != 0);
    if (DAT_080481c9 != '\x01') {
      *puVar10 = 0x8048140;
      FUN_08048172();
    }
    *puVar10 = 0x804814a;
    FUN_08048172();
    puVar10 = puVar10 + 1;
LAB_08048054:
    while( true ) {
      puVar8 = (undefined4 *)*puVar10;
      puVar13 = puVar10 + 1;
      puVar11 = puVar10 + 1;
      if (puVar8 == (undefined4 *)0x0) break;
      iVar5 = 3;
      bVar6 = 4;
      puVar11 = (undefined4 *)&DAT_080481b4;
      in_EDI = &DAT_080481bd;
      while (in_ESI = (undefined4 *)((int)puVar11 + ((uint)bVar15 * -2 + 1) * 2),
            *(short *)puVar8 != *(short *)puVar11) {
        bVar6 = bVar6 >> 1;
        puVar14 = in_EDI + (uint)bVar15 * -2 + 1;
        *in_EDI = 0;
        iVar5 = iVar5 + -1;
        puVar11 = in_ESI;
        in_EDI = puVar14;
        if (iVar5 == 0) {
          puVar11 = puVar10 + 1;
          if (*(char *)puVar8 == '-') goto LAB_080480a4;
          DAT_080481ca = '\x01';
          *puVar10 = 5;
          pcVar2 = (code *)swi(0x80);
          iVar5 = (*pcVar2)();
          puVar13 = puVar10 + 2;
          puVar10 = puVar10 + 2;
          in_EDI = puVar8;
          if (-1 < iVar5) goto LAB_080480ad;
          goto LAB_0804816a;
        }
      }
      DAT_080481ba = DAT_080481ba | bVar6;
      puVar10 = puVar10 + 1;
    }
    if (DAT_080481ca != '\0') {
      uVar9 = 0;
LAB_0804816d:
      puVar13[-1] = 1;
      pcVar2 = (code *)swi(0x80);
      uVar16 = (*pcVar2)();
      *puVar13 = (int)uVar16;
      puVar13[-1] = extraout_ECX_00;
      puVar13[-2] = (int)((ulonglong)uVar16 >> 0x20);
      puVar13[-3] = uVar9;
      puVar13[-4] = puVar13 + 1;
      puVar13[-5] = unaff_retaddr;
      puVar13[-6] = in_ESI;
      puVar13[-7] = in_EDI;
      puVar13[-8] = 0x804817a;
      FUN_08048184();
      puVar13[-8] = 1;
      puVar13[-8] = 4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      return puVar13[1];
    }
    DAT_080481ca = '\x01';
  } while( true );
}



undefined8 FUN_08048172(void)

{
  code *pcVar1;
  undefined4 in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_08048184();
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return CONCAT44(in_ECX,unaff_retaddr);
}



undefined8 __regparm3 FUN_08048184(undefined4 param_1)

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



undefined8 __regparm3 FUN_08048194(uint param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined4 *puVar8;
  undefined2 *unaff_EDI;
  uint uStack_24;
  undefined *puVar7;
  
  puVar5 = &stack0xffffffe0;
  iVar4 = 0;
  do {
    uVar2 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    puVar6 = (uint *)(puVar5 + -4);
    puVar7 = puVar5 + -4;
    puVar5 = puVar5 + -4;
    *puVar6 = (uint)(byte)((char)(uVar2 % 10) + 0x30);
    iVar4 = iVar4 + 1;
    puVar3 = (undefined4 *)puVar7;
  } while (param_1 != 0);
  do {
    puVar8 = puVar3;
    puVar1 = (undefined2 *)((int)unaff_EDI + 1);
    *(char *)unaff_EDI = (char)*puVar8;
    iVar4 = iVar4 + -1;
    puVar3 = puVar8 + 1;
    unaff_EDI = puVar1;
  } while (iVar4 != 0);
  *puVar1 = 9;
  return CONCAT44(puVar8[6],puVar8[8]);
}


