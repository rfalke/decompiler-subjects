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

void processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int extraout_EDX_03;
  uint *puVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  char *pcVar19;
  char *pcVar20;
  undefined2 *puVar21;
  byte bVar22;
  
  bVar22 = 0;
  DAT_0804d9c4 = 0x69676562;
  DAT_0804d9c8 = 0x6e;
  puVar17 = (undefined4 *)&DAT_0804d9c9;
  puVar10 = (uint *)&param_4;
  if (1 < param_2) {
    uVar7 = param_2 - 1;
    puVar10 = (uint *)&stack0x0000000c;
    if (*param_4 == 0x6d2d) {
      DAT_0804854c = s_________________0123456789__<_>__0804843b + 0x40;
      _DAT_0804d9c9 = 0x7361622d;
      DAT_0804d9cd = 0x20343665;
      puVar17 = &DAT_0804d9d1;
      DAT_0804d9d1._0_1_ = 0;
      puVar10 = (uint *)&stack0x00000010;
      uVar7 = param_2 - 2;
    }
    else {
      DAT_0804854c = s_________________0123456789__<_>__0804843b;
      _DAT_0804d9c9 = CONCAT22(DAT_0804d9c9_2,0x20);
      puVar17 = (undefined4 *)((int)&DAT_0804d9c9 + 1);
    }
    if (uVar7 < 3) {
      if (uVar7 < 2) {
        if (uVar7 != 1) goto LAB_08048393;
        *puVar17 = 0x20343436;
        puVar17 = puVar17 + 1;
        *(undefined *)puVar17 = 0;
        puVar10[-1] = 0x8048115;
        FUN_08048374();
        DAT_0804855c = 0;
      }
      else {
        *puVar10 = uVar7;
        puVar10[-1] = 0x6a;
        pcVar4 = (code *)swi(0x80);
        iVar8 = (*pcVar4)();
        if (iVar8 != 0) {
          DAT_08048548 = (char *)-iVar8;
          puVar17 = (undefined4 *)&DAT_0804d1c4;
          *puVar10 = 0x80483bd;
          FUN_08048388();
          *puVar10 = 0x80483c7;
          FUN_08048374();
          *puVar10 = 0x80483ce;
          FUN_08048368();
          *puVar10 = 2;
          *puVar10 = 4;
          pcVar4 = (code *)swi(0x80);
          (*pcVar4)();
          puVar15 = puVar10 + 2;
          goto LAB_08048306;
        }
        *puVar10 = 0x80480d1;
        FUN_08048340();
        puVar17 = (undefined4 *)((int)puVar17 + 3);
        *(undefined2 *)puVar17 = 0x20;
        *puVar10 = 0x80480df;
        FUN_08048374();
        *puVar10 = 5;
        pcVar4 = (code *)swi(0x80);
        iVar8 = (*pcVar4)();
        if (iVar8 < 0) {
          DAT_08048548 = (char *)-iVar8;
          puVar17 = (undefined4 *)&DAT_0804d1c4;
          puVar10[1] = 0x80483f6;
          FUN_08048388();
          puVar10[1] = 0x80483fd;
          FUN_08048374();
          puVar10[1] = 0x8048404;
          FUN_08048368();
          *(undefined2 *)(&DAT_0804d1c4 + extraout_EDX_03) = 10;
          puVar10[1] = 2;
          puVar10[1] = 4;
          pcVar4 = (code *)swi(0x80);
          (*pcVar4)();
          puVar15 = puVar10 + 3;
          goto LAB_08048306;
        }
        puVar10 = puVar10 + 3;
        DAT_0804855c = iVar8;
      }
      puVar17 = (undefined4 *)((int)puVar17 + -1);
      *(undefined4 *)((int)puVar10 + -4) = 0x8048129;
      FUN_08048368();
      *(undefined *)((int)&DAT_0804d9c4 + extraout_EDX) = 10;
      *(undefined4 *)((int)puVar10 + -4) = 1;
      *(undefined4 *)((int)puVar10 + -4) = 4;
      pcVar4 = (code *)swi(0x80);
      (*pcVar4)();
      puVar11 = (undefined *)((int)puVar10 + 4);
      do {
        DAT_08048550 = 0x1ffe;
        puVar12 = (undefined4 *)puVar11;
        while (iVar8 = 0x1ffe, puVar13 = puVar12, DAT_08048550 != 0) {
          puVar12[-1] = 3;
          pcVar4 = (code *)swi(0x80);
          DAT_08048554 = (*pcVar4)();
          if (DAT_08048554 < 0) {
            DAT_08048548 = (char *)-DAT_08048554;
            *puVar12 = 2;
            *puVar12 = 4;
            pcVar4 = (code *)swi(0x80);
            (*pcVar4)();
            puVar15 = puVar12 + 2;
            goto LAB_08048306;
          }
          iVar8 = DAT_08048550 - DAT_08048554;
          puVar13 = puVar12 + 1;
          DAT_08048550 = iVar8;
          if ((iVar8 == 0) || (puVar13 = puVar12 + 1, puVar12 = puVar12 + 1, DAT_08048554 == 0))
          break;
        }
        pcVar5 = DAT_0804854c;
        puVar16 = (uint *)&DAT_08048560;
        puVar18 = (undefined2 *)&DAT_0804a560;
        uVar7 = 0x1ffe - iVar8;
        if (uVar7 != 0) {
          _DAT_08048558 = 0;
          if (DAT_0804854c != s_________________0123456789__<_>__0804843b + 0x40) {
            uVar9 = uVar7;
            if (0x2c < uVar7) {
              uVar9 = 0x2d;
            }
            DAT_0804a560 = (char)uVar9 + ' ';
            puVar18 = (undefined2 *)(&DAT_0804a561 + (uint)bVar22 * -2);
          }
          for (; 2 < uVar7; uVar7 = uVar7 - 3) {
            if (0x2c < _DAT_08048558) {
              *(undefined4 *)((int)puVar13 + -4) = 0x80481db;
              FUN_0804831c();
              uVar7 = extraout_EDX_00;
            }
            uVar9 = *puVar16;
            uVar3 = (uVar9 & 0xff0000) >> 8;
            uVar2 = uVar3 | (uVar9 & 0xff00) << 8;
            puVar16 = (uint *)((int)puVar16 + (uint)bVar22 * -8 + 3);
            pcVar19 = (char *)((int)puVar18 + (uint)bVar22 * -2 + 1);
            *(char *)puVar18 = pcVar5[(uVar9 << 0x18) >> 0x1a];
            pcVar20 = pcVar19 + (uint)bVar22 * -2 + 1;
            *pcVar19 = pcVar5[((uVar2 | uVar9 << 0x18) >> 8 & 0x3f000) >> 0xc];
            *pcVar20 = pcVar5[(byte)(((ushort)(uVar2 >> 8) & 0xfc0) >> 6)];
            puVar18 = (undefined2 *)(pcVar20 + (uint)bVar22 * -2 + 1 + (uint)bVar22 * -2 + 1);
            pcVar20[(uint)bVar22 * -2 + 1] = pcVar5[(uVar3 & 0x3f00) >> 8];
            _DAT_08048558 = _DAT_08048558 + 3;
          }
          if (uVar7 != 0) {
            if (0x2c < _DAT_08048558) {
              *(undefined4 *)((int)puVar13 + -4) = 0x804822a;
              FUN_0804831c();
              uVar7 = extraout_EDX_01;
            }
            if (uVar7 == 1) {
              bVar1 = *(byte *)puVar16;
              pcVar19 = (char *)((int)puVar18 + (uint)bVar22 * -2 + 1);
              *(char *)puVar18 = pcVar5[(byte)((ushort)((ushort)bVar1 << 4) >> 6)];
              puVar21 = (undefined2 *)(pcVar19 + (uint)bVar22 * -2 + 1);
              *pcVar19 = pcVar5[(byte)((ushort)bVar1 << 4) & 0x3f];
              if (pcVar5 == s_________________0123456789__<_>__0804843b + 0x40) {
                cVar6 = '=';
              }
              else {
                cVar6 = *pcVar5;
              }
              puVar18 = puVar21 + (uint)bVar22 * -2 + 1;
              *puVar21 = CONCAT11(cVar6,cVar6);
            }
            else {
              uVar7 = (uint)CONCAT11((char)*(undefined2 *)puVar16,
                                     (char)((ushort)*(undefined2 *)puVar16 >> 8));
              uVar9 = uVar7 << 2;
              pcVar19 = (char *)((int)puVar18 + (uint)bVar22 * -2 + 1);
              *(char *)puVar18 = pcVar5[((uVar7 & 0xfc00) << 2) >> 0xc];
              pcVar20 = pcVar19 + (uint)bVar22 * -2 + 1;
              *pcVar19 = pcVar5[(uVar9 & 0xfc0) >> 6];
              *pcVar20 = pcVar5[uVar9 & 0x3f];
              if (pcVar5 == s_________________0123456789__<_>__0804843b + 0x40) {
                cVar6 = '=';
              }
              else {
                cVar6 = *pcVar5;
              }
              puVar18 = (undefined2 *)(pcVar20 + (uint)bVar22 * -2 + 1 + (uint)bVar22 * -2 + 1);
              pcVar20[(uint)bVar22 * -2 + 1] = cVar6;
            }
          }
        }
        puVar14 = (undefined *)puVar13;
        if (puVar18 == (undefined2 *)&DAT_0804a560) break;
        *(char *)puVar18 = '\n';
        puVar17 = (undefined4 *)((int)puVar18 + -0x804a55f);
        *(undefined4 *)((int)puVar13 + -4) = 1;
        *(undefined4 *)((int)puVar13 + -4) = 4;
        pcVar4 = (code *)swi(0x80);
        (*pcVar4)();
        puVar14 = (undefined *)((int)puVar13 + 4);
        puVar11 = (undefined *)((int)puVar13 + 4);
      } while (DAT_08048554 != 0);
      puVar17 = (undefined4 *)&DAT_0804a560;
      if (DAT_0804854c == s_________________0123456789__<_>__0804843b) {
        DAT_0804a560 = '`';
        DAT_0804a561 = 10;
        _DAT_0804a562 = 0x6e65;
        DAT_0804a564 = 100;
        DAT_0804a565 = 10;
        *(undefined4 *)(puVar14 + -4) = 6;
        *(undefined4 *)(puVar14 + -4) = 1;
        *(undefined4 *)(puVar14 + -4) = 4;
        pcVar4 = (code *)swi(0x80);
        (*pcVar4)();
        puVar15 = (uint *)(puVar14 + 4);
      }
      else {
        DAT_0804a560 = '=';
        DAT_0804a561 = 0x3d;
        _DAT_0804a562 = 0x3d3d;
        DAT_0804a564 = 10;
        *(undefined4 *)(puVar14 + -4) = 5;
        *(undefined4 *)(puVar14 + -4) = 1;
        *(undefined4 *)(puVar14 + -4) = 4;
        pcVar4 = (code *)swi(0x80);
        (*pcVar4)();
        puVar15 = (uint *)(puVar14 + 4);
      }
      goto LAB_08048306;
    }
  }
LAB_08048393:
  *(undefined4 *)((int)puVar10 + -4) = 2;
  *(undefined4 *)((int)puVar10 + -4) = 4;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  puVar15 = (uint *)((int)puVar10 + 4);
LAB_08048306:
  puVar15[-1] = 6;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  pcVar5 = DAT_08048548;
  *puVar15 = 1;
  pcVar4 = (code *)swi(0x80);
  (*pcVar4)();
  *(undefined *)puVar17 = 10;
  if (pcVar5 != s_________________0123456789__<_>__0804843b + 0x40) {
    if (extraout_EDX_02 < 0x2d) {
      cVar6 = (char)extraout_EDX_02;
    }
    else {
      cVar6 = '-';
    }
    *(char *)((int)puVar17 + (uint)bVar22 * -2 + 1) = cVar6 + ' ';
  }
  _DAT_08048558 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_0804831c(undefined4 param_1,uint param_2)

{
  char cVar1;
  char *unaff_EBX;
  undefined *unaff_EDI;
  
  *unaff_EDI = 10;
  if (unaff_EBX != s_________________0123456789__<_>__0804843b + 0x40) {
    if (param_2 < 0x2d) {
      cVar1 = (char)param_2;
    }
    else {
      cVar1 = '-';
    }
    unaff_EDI[1] = cVar1 + ' ';
  }
  _DAT_08048558 = 0;
  return;
}



void __regparm3 FUN_08048340(uint param_1)

{
  uint3 uVar1;
  uint uVar2;
  uint *unaff_EDI;
  
  uVar1 = CONCAT21((short)(((param_1 & 0x1c0) << 10) >> 0x10),(char)param_1) & 0xffff38;
  uVar2 = (CONCAT31(CONCAT21((short)(uVar1 >> 8),(byte)uVar1 >> 3),(char)param_1) & 0xffffff07) << 8
          | 0x30303000;
  *unaff_EDI = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8;
  return;
}



void FUN_08048368(void)

{
  char *pcVar1;
  int unaff_ESI;
  
  pcVar1 = (char *)(unaff_ESI + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return;
}



undefined8 __regparm3 FUN_08048374(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int extraout_EDX;
  char *unaff_ESI;
  int unaff_EDI;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  FUN_08048368();
  pcVar2 = (char *)(unaff_EDI + extraout_EDX);
  do {
    cVar1 = *unaff_ESI;
    *pcVar2 = cVar1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
    pcVar2 = pcVar2 + (uint)bVar3 * -2 + 1;
  } while (cVar1 != '\0');
  return CONCAT44(param_2,param_1);
}



void FUN_08048388(void)

{
  char cVar1;
  char *unaff_ESI;
  char *unaff_EDI;
  
  do {
    cVar1 = *unaff_ESI;
    *unaff_EDI = cVar1;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return;
}


