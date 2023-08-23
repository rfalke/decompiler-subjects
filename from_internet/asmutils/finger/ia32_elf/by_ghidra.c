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




void FUN_0804804c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  uRam0804865e = (*pcVar1)();
                    // WARNING: Read-only address (ram,0x0804865e) is written
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  uRam08048662 = (*pcVar1)();
                    // WARNING: Read-only address (ram,0x08048662) is written
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x80);
  uRam08048666 = (*pcVar1)();
                    // WARNING: Read-only address (ram,0x08048666) is written
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x080486bc) overlaps instruction at (ram,0x080486bb)
// 
// WARNING: Possible PIC construction at 0x080483e5: Changing call to branch
// WARNING: Possible PIC construction at 0x0804841b: Changing call to branch
// WARNING: Removing unreachable block (ram,0x080483ea)
// WARNING: Removing unreachable block (ram,0x0804840d)
// WARNING: Removing unreachable block (ram,0x0804840f)
// WARNING: Removing unreachable block (ram,0x08048415)
// WARNING: Removing unreachable block (ram,0x0804841a)
// WARNING: Removing unreachable block (ram,0x08048420)
// WARNING: Removing unreachable block (ram,0x08048422)
// WARNING: Removing unreachable block (ram,0x08048424)
// WARNING: Removing unreachable block (ram,0x0804842e)
// WARNING: Removing unreachable block (ram,0x08048430)
// WARNING: Removing unreachable block (ram,0x08048436)
// WARNING: Removing unreachable block (ram,0x0804843b)
// WARNING: Removing unreachable block (ram,0x08048459)
// WARNING: Removing unreachable block (ram,0x08048476)
// WARNING: Removing unreachable block (ram,0x0804847f)
// WARNING: Removing unreachable block (ram,0x08048487)
// WARNING: Removing unreachable block (ram,0x08048489)
// WARNING: Removing unreachable block (ram,0x0804848e)
// WARNING: Removing unreachable block (ram,0x0804849d)
// WARNING: Removing unreachable block (ram,0x0804849f)
// WARNING: Removing unreachable block (ram,0x080484aa)
// WARNING: Removing unreachable block (ram,0x080484b1)
// WARNING: Removing unreachable block (ram,0x08048644)
// WARNING: Removing unreachable block (ram,0x08048646)
// WARNING: Removing unreachable block (ram,0x08048649)
// WARNING: Removing unreachable block (ram,0x0804864e)
// WARNING: Removing unreachable block (ram,0x0804858d)
// WARNING: Removing unreachable block (ram,0x0804834a)
// WARNING: Removing unreachable block (ram,0x08048370)
// WARNING: Removing unreachable block (ram,0x08048350)
// WARNING: Removing unreachable block (ram,0x0804835c)
// WARNING: Removing unreachable block (ram,0x0804835e)
// WARNING: Removing unreachable block (ram,0x08048363)
// WARNING: Removing unreachable block (ram,0x080483cd)
// WARNING: Removing unreachable block (ram,0x0804837c)
// WARNING: Removing unreachable block (ram,0x080483d7)
// WARNING: Removing unreachable block (ram,0x080484e5)
// WARNING: Removing unreachable block (ram,0x0804839e)
// WARNING: Removing unreachable block (ram,0x080483ad)
// WARNING: Removing unreachable block (ram,0x080483af)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 processEntry
entry(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar15;
  undefined3 uVar16;
  int iVar13;
  byte *pbVar14;
  byte bVar17;
  int iVar18;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 uVar19;
  short sVar20;
  int *piVar21;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int *piVar25;
  int *piVar26;
  char *unaff_retaddr;
  undefined4 *in_ESI;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  char *pcVar30;
  char *pcVar31;
  undefined2 in_SS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  byte bVar32;
  byte in_AF;
  bool bVar33;
  bool bVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  undefined6 uVar37;
  undefined4 *puVar22;
  
  bVar12 = 0;
  FUN_0804804c();
  puVar24 = &param_3;
  if (param_2 != 1) {
LAB_0804837a:
    pcVar30 = (char *)puVar24[1];
    puVar24[1] = pcVar30;
    iVar18 = -1;
    do {
      if (iVar18 == 0) break;
      iVar18 = iVar18 + -1;
      cVar11 = *pcVar30;
      pcVar30 = pcVar30 + (uint)bVar12 * -2 + 1;
    } while (cVar11 != '\0');
    pcVar30 = (char *)puVar24[1];
    puVar24[1] = pcVar30;
    *puVar24 = 0x8048394;
    FUN_08048538();
    *puVar24 = 1;
    *puVar24 = 4;
    pcVar8 = (code *)swi(0x80);
    (*pcVar8)();
                    // WARNING: Read-only address (ram,0x08048656) is written
    puVar24[1] = 1;
    puVar24[1] = 1;
    pcVar8 = (code *)swi(0x80);
    uVar35 = (*pcVar8)();
    puVar24[2] = (int)(uVar35 >> 0x20);
    *pcVar30 = (char)((uVar35 & 0xffffffff) / 10) + '0';
    pcVar30[1] = (char)((uVar35 & 0xffffffff) % 10) + '0';
    pcVar30[2] = ':';
    return puVar24[2];
  }
  iVar18 = 0;
  do {
    iVar18 = iVar18 + -1;
    puVar27 = param_3;
    if (iVar18 == 0) break;
    puVar27 = (undefined4 *)((int)param_3 + (uint)bVar12 * -2 + 1);
    cVar11 = *(char *)param_3;
    param_3 = puVar27;
  } while (cVar11 != '\0');
  if (*(char *)((int)puVar27 + -2) == 'd') {
    param_3 = (undefined4 *)0x30;
    pcVar8 = (code *)swi(0x80);
    (*pcVar8)();
    param_4 = 0;
    param_3 = (undefined4 *)0x1;
    pcVar8 = (code *)swi(0x80);
    uRam08048656 = (*pcVar8)();
                    // WARNING: Read-only address (ram,0x08048656) is written
    param_5 = 0;
    param_4 = CONCAT22(0x4f00,(undefined2)param_4);
    sVar20 = (short)((int)&param_4 + 2) + -2;
    puVar22 = (undefined4 *)CONCAT22((short)((uint)((int)&param_4 + 2) >> 0x10),sVar20);
    puVar4 = (undefined2 *)segment(in_SS,sVar20);
    *puVar4 = 2;
    puVar22[-1] = 0x10;
    puVar22[-2] = puVar22;
    puVar22[-3] = 0;
    puVar22[-4] = 2;
    puVar22[-4] = 0x66;
    pcVar8 = (code *)swi(0x80);
    iVar18 = (*pcVar8)();
    if (iVar18 < 0) {
      *puVar22 = 1;
      *puVar22 = 4;
      pcVar8 = (code *)swi(0x80);
      (*pcVar8)();
      puVar22[1] = 1;
      pcVar8 = (code *)swi(0x80);
      uVar37 = (*pcVar8)();
      out(*in_ESI,(short)((uint6)uVar37 >> 0x20));
                    // WARNING: Read-only address (ram,0x08048656) is written
      cVar11 = *(char *)(in_ESI + (uint)bVar12 * -2 + 1);
      iVar18 = extraout_ECX_00;
      pcVar30 = (char *)((int)(in_ESI + (uint)bVar12 * -2 + 1) + (uint)bVar12 * -2 + 1);
      puVar27 = puVar22;
      do {
        iVar18 = iVar18 + -1;
        pcVar31 = (char *)((int)puVar27 + (uint)bVar12 * -2 + 1);
        *(char *)puVar27 = cVar11;
        cVar11 = *pcVar30;
        pcVar30 = pcVar30 + (uint)bVar12 * -2 + 1;
        puVar27 = (undefined4 *)pcVar31;
      } while (cVar11 != '\0');
      iVar13 = CONCAT31((int3)((uint6)uVar37 >> 8),0x20);
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        *pcVar31 = ' ';
        pcVar31 = pcVar31 + (uint)bVar12 * -2 + 1;
      }
      pcVar30 = "Name: Directory: Shell: Office: Home Phone: Logged in at This user doesnt exist\n";
      for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
        *pcVar31 = *pcVar30;
        pcVar30 = pcVar30 + (uint)bVar12 * -2 + 1;
        pcVar31 = pcVar31 + (uint)bVar12 * -2 + 1;
      }
      iVar18 = 4;
      do {
        do {
          pcVar30 = unaff_retaddr + (uint)bVar12 * -2 + 1;
          cVar11 = *unaff_retaddr;
          iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),cVar11);
          unaff_retaddr = pcVar30;
        } while (cVar11 != ':');
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      puVar22[2] = pcVar30;
      puVar22[1] = 0x80483ea;
      while( true ) {
        cVar11 = *pcVar30;
        uVar16 = (undefined3)((uint)iVar13 >> 8);
        if ((((cVar11 == ':') || (cVar11 == ',')) || (cVar11 == '\n')) ||
           (iVar13 = CONCAT31(uVar16,cVar11), cVar11 == '\0')) break;
        *pcVar31 = cVar11;
        *(undefined *)((int)puVar22 + iVar13 + 0x4d) = 0;
        pcVar30 = pcVar30 + (uint)bVar12 * -2 + 1;
        pcVar31 = pcVar31 + (uint)bVar12 * -2 + 1;
      }
      return CONCAT31(uVar16,cVar11);
    }
    *puVar22 = 5;
    puVar22[-1] = 0;
    puVar22[-2] = 4;
    puVar22[-2] = 0x66;
    pcVar8 = (code *)swi(0x80);
    (*pcVar8)();
    puVar22[1] = 1;
    puVar22[1] = 6;
    pcVar8 = (code *)swi(0x80);
    (*pcVar8)();
    puVar22[2] = 0;
    puVar27 = puVar22 + 2;
    do {
      do {
        puVar23 = puVar27;
        *puVar23 = 0;
        puVar23[-1] = 0;
        puVar23[-2] = 0;
        puVar23[-3] = 5;
        puVar23[-3] = 0x66;
        pcVar8 = (code *)swi(0x80);
        iVar18 = (*pcVar8)();
        puVar23[1] = iVar18;
        puVar27 = puVar23 + 1;
      } while (iVar18 < 0);
      *puVar23 = 2;
      pcVar8 = (code *)swi(0x80);
      iVar18 = (*pcVar8)();
      puVar27 = puVar23 + 2;
    } while (iVar18 != 0);
    puVar23[2] = 1;
    puVar23[2] = 0x3f;
    pcVar8 = (code *)swi(0x80);
    (*pcVar8)();
    puVar23[-0x3d] = 1;
    puVar23[-0x3d] = 3;
    pcVar8 = (code *)swi(0x80);
    iVar18 = (*pcVar8)();
    *(undefined *)((int)puVar23 + iVar18 + -0xec) = 0;
    pcVar30 = (char *)((int)puVar23 + iVar18 + -0xec);
    do {
      pcVar31 = pcVar30 + 1;
      cVar11 = *pcVar30;
      pcVar30 = pcVar30 + -1;
    } while (cVar11 < '!');
    bVar12 = 0;
    *pcVar31 = '\0';
    puVar23[4] = puVar23 + -0x3b;
    puVar23[3] = 0;
    puVar23[2] = 0x13;
    pcVar8 = (code *)swi(0x80);
    (*pcVar8)();
    puVar24 = puVar23 + 4;
    goto LAB_0804837a;
  }
  param_3 = (undefined4 *)0x4;
  pcVar8 = (code *)swi(0x80);
  (*pcVar8)();
  piVar25 = &param_5;
  while( true ) {
    piVar21 = piVar25;
    piVar21[-1] = 3;
    pcVar8 = (code *)swi(0x80);
    iVar18 = (*pcVar8)();
    if (iVar18 == 0) break;
    piVar25 = piVar21 + 1;
    if (_DAT_080486aa == 7) {
      iVar18 = 0xb;
      cVar11 = '\0';
      pcVar30 = (char *)((uint)bVar12 * -2 + 0x80486d7);
      puVar27 = (undefined4 *)&DAT_0804882a;
      do {
        puVar28 = (undefined4 *)((int)puVar27 + (uint)bVar12 * -2 + 1);
        *(char *)puVar27 = cVar11;
        iVar18 = iVar18 + -1;
        cVar11 = *pcVar30;
        pcVar30 = pcVar30 + (uint)bVar12 * -2 + 1;
        puVar27 = puVar28;
      } while (cVar11 != '\0');
      *piVar21 = iVar18;
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        *(undefined *)puVar28 = 0x20;
        puVar28 = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
      }
      *piVar21 = 0x804812d;
      FUN_0804851a();
      for (iVar18 = -(extraout_ECX + -0x16); iVar18 != 0; iVar18 = iVar18 + -1) {
        *(undefined *)puVar28 = 0x20;
        puVar28 = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
      }
      iVar18 = 8;
      puVar27 = (undefined4 *)(&DAT_080486b3 + (uint)bVar12 * -2);
      cVar11 = DAT_080486b2;
      do {
        puVar29 = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
        *(char *)puVar28 = cVar11;
        iVar18 = iVar18 + -1;
        in_ESI = (undefined4 *)((int)puVar27 + (uint)bVar12 * -2 + 1);
        cVar11 = *(char *)puVar27;
        puVar27 = in_ESI;
        puVar28 = puVar29;
      } while (cVar11 != '\0');
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        *(undefined *)puVar29 = 0x20;
        puVar29 = (undefined4 *)((int)puVar29 + (uint)bVar12 * -2 + 1);
      }
      *piVar21 = 0x6a;
      pcVar8 = (code *)swi(0x80);
      iVar18 = (*pcVar8)();
      if (-1 < iVar18) {
        uVar9 = -_DAT_0804868a;
        if ((int)uVar9 < 0x3d) {
          *puVar29 = 0x20202020;
          puVar29[1] = 0x20202020;
          *(undefined2 *)((int)puVar29 + 6) = 0x2020;
          *(undefined *)((int)puVar29 + 7) = 0x2d;
        }
        else {
          if (uVar9 / 0x15180 == 0) {
            *puVar29 = 0x20202020;
            uVar35 = (ulonglong)(uVar9 % 0x15180);
          }
          else {
            piVar21[1] = 0x8048189;
            uVar35 = FUN_080484fe();
          }
          if ((int)((longlong)uVar35 / 0xe10) == 0) {
            *(undefined4 *)((int)puVar29 + 3) = 0x20202020;
          }
          else {
            piVar21[1] = 0x80481a5;
            FUN_080484fe();
          }
          piVar21[1] = 0x80481bd;
          FUN_080484fe();
        }
        cVar11 = DAT_080486f6;
        puVar27 = puVar29 + 2;
        in_ESI = (undefined4 *)(&DAT_080486f7 + (uint)bVar12 * -2);
        if (DAT_080486f6 != '\0') {
          *puVar27 = 0x20202020;
          puVar29[3] = 0x20202020;
          puVar28 = in_ESI;
          puVar29 = puVar29 + 3;
          do {
            puVar27 = (undefined4 *)((int)puVar29 + (uint)bVar12 * -2 + 1);
            *(char *)puVar29 = cVar11;
            in_ESI = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
            cVar11 = *(char *)puVar28;
            puVar28 = in_ESI;
            puVar29 = puVar27;
          } while (cVar11 != '\0');
        }
        *(undefined *)puVar27 = 10;
        *(undefined *)((int)puVar27 + 1) = 0;
      }
      iVar18 = 0x50;
      puVar28 = (undefined4 *)&DAT_0804882a;
      do {
        puVar27 = puVar28;
        if (iVar18 == 0) break;
        iVar18 = iVar18 + -1;
        puVar27 = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
        cVar11 = *(char *)puVar28;
        puVar28 = puVar27;
      } while (cVar11 != '\0');
      piVar21[1] = 1;
      piVar21[1] = 4;
      pcVar8 = (code *)swi(0x80);
      (*pcVar8)();
      piVar25 = piVar21 + 3;
    }
  }
  bVar32 = 0;
  bVar34 = false;
  bVar33 = true;
  *piVar21 = 1;
  pcVar8 = (code *)swi(0x80);
  uVar36 = (*pcVar8)();
  piVar26 = piVar21 + 2;
  piVar25 = piVar21 + 2;
  in_AF = 9 < ((byte)uVar36 & 0xf) | in_AF;
  uVar16 = (undefined3)((ulonglong)uVar36 >> 8);
  bVar10 = (byte)uVar36 + in_AF * -6;
  bVar5 = (bool)(0x9f < bVar10 | bVar32 | in_AF * (bVar10 < 6));
  bVar10 = bVar10 + bVar5 * -0x60;
  pbVar14 = (byte *)CONCAT31(uVar16,bVar10);
  bVar32 = (byte)((ulonglong)uVar36 >> 0x20);
  uVar19 = (undefined2)((ulonglong)uVar36 >> 0x20);
  puVar28 = puVar27;
  if (bVar5 || bVar33) {
LAB_08048609:
    lVar7 = (longlong)*(int *)((int)((ulonglong)uVar36 >> 0x20) + 0x65) * 0x726f7463;
    puVar29 = (undefined4 *)lVar7;
    if (-1 < (int)((int)piVar26 + 1)) {
      if (-1 < (int)((int)piVar26 + 1)) {
        if ((int)puVar29 != lVar7) {
          bVar12 = (byte)pbVar14 | *pbVar14;
          pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),bVar12);
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
          *pbVar14 = *pbVar14 + bVar12;
        }
        cVar11 = (char)pbVar14;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
        *pbVar14 = *pbVar14 + cVar11;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      goto LAB_080486bb_1;
    }
    bRam00000068 = bRam00000068 & bVar32;
    puVar27 = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
    cVar11 = in(uVar19);
    *(char *)puVar28 = cVar11;
LAB_0804861b:
    cVar11 = in(uVar19);
    *(char *)puVar27 = cVar11;
    in_ESI = puVar29;
    puVar27 = (undefined4 *)((int)puVar27 + (uint)bVar12 * -2);
code_r0x08048628:
    uVar3 = in(uVar19);
    *puVar27 = uVar3;
    pbVar14[in_GS_OFFSET + 0x68] = pbVar14[in_GS_OFFSET + 0x68] & bVar32;
    out(*in_ESI,uVar19);
    puVar29 = (undefined4 *)((int)(in_ESI + (uint)bVar12 * -2 + 1) + (uint)bVar12 * -2 + 1);
    out(*(char *)(in_ESI + (uint)bVar12 * -2 + 1),uVar19);
LAB_0804862f:
    out(*puVar29,uVar19);
    pbVar2 = (byte *)(in_FS_OFFSET + extraout_ECX_01 + 0x6e);
    *pbVar2 = *pbVar2 & (byte)((uint)extraout_ECX_01 >> 8);
    *(byte *)(extraout_ECX_01 + 0x74) =
         *(byte *)(extraout_ECX_01 + 0x74) & (byte)((uint)pbVar14 >> 8);
    pbVar14[(int)unaff_retaddr * 2 + 0x69] = pbVar14[(int)unaff_retaddr * 2 + 0x69] & bVar32;
  }
  else {
    bVar17 = (byte)extraout_ECX_01;
    bVar15 = (byte)((ulonglong)uVar36 >> 8);
    if (bVar5) {
      *pbVar14 = *pbVar14 & bVar15;
      *pbVar14 = *pbVar14 & bVar15;
      *pbVar14 = *pbVar14 & bVar15;
      pbVar2 = (byte *)((int)piVar21 + (int)in_ESI * 2 + 0x81);
      *pbVar2 = *pbVar2 & bVar32;
code_r0x080485e3:
      bVar10 = (byte)((uint)pbVar14 >> 8);
      *pbVar14 = *pbVar14 & bVar10;
      *pbVar14 = *pbVar14 & bVar10;
      *pbVar14 = *pbVar14 & bVar10;
      *pbVar14 = *pbVar14 & bVar10;
      *(byte *)(extraout_ECX_01 + 100) = *(byte *)(extraout_ECX_01 + 100) & bVar17;
      puVar28 = (undefined4 *)((int)puVar27 + (uint)bVar12 * -2 + 1);
      cVar11 = in(uVar19);
      *(char *)puVar27 = cVar11;
      pbVar14[in_GS_OFFSET] = pbVar14[in_GS_OFFSET] & bVar10;
      *pbVar14 = *pbVar14 & bVar10;
      *(undefined4 **)((int)piVar25 + -4) = puVar28;
      *(undefined4 *)((int)piVar25 + -8) = 0xa657265;
      in_AF = 9 < ((byte)pbVar14 & 0xf) | in_AF;
      bVar10 = (byte)pbVar14 + in_AF * -6;
      pbVar14 = (byte *)CONCAT31((int3)((uint)pbVar14 >> 8),
                                 bVar10 + (0x9f < bVar10 | in_AF * (bVar10 < 6)) * -0x60);
      piVar26 = (int *)((int)piVar25 + -9);
      out(*in_ESI,uVar19);
      piVar25 = (int *)segment(in_SS,(short)unaff_retaddr + 0x3a);
      unaff_retaddr = (char *)(*piVar25 * 0x6d614e20);
      goto LAB_08048609;
    }
    if (bVar5) goto code_r0x08048628;
    puVar29 = (undefined4 *)((int)in_ESI + (uint)bVar12 * -2 + 1);
    out(*(char *)in_ESI,uVar19);
    in_AF = 9 < (bVar10 & 0xf) | in_AF;
    bVar10 = bVar10 + in_AF * -6;
    bVar6 = 0x9f < bVar10 | bVar5 | in_AF * (bVar10 < 6);
    bVar10 = bVar10 + bVar6 * -0x60;
    if (!bVar33) {
      pbVar14 = (byte *)(CONCAT31(uVar16,bVar10) + -1);
      in_ESI = puVar29 + (uint)bVar12 * -2 + 1;
      out(*puVar29,uVar19);
      goto code_r0x08048628;
    }
    puVar28 = puVar27 + (uint)bVar12 * -2 + 1;
    uVar3 = in(uVar19);
    *puVar27 = uVar3;
    in_AF = 9 < (bVar10 & 0xf) | in_AF;
    bVar10 = bVar10 + in_AF * -6;
    bVar6 = 0x9f < bVar10 | bVar6 | in_AF * (bVar10 < 6);
    bVar10 = bVar10 + bVar6 * -0x60;
    pbVar14 = (byte *)CONCAT31(uVar16,bVar10);
    if (bVar33) {
      puVar27 = (undefined4 *)((int)puVar28 + (uint)bVar12 * -2 + 1);
      cVar11 = in(uVar19);
      *(char *)puVar28 = cVar11;
      goto LAB_0804861b;
    }
    in_AF = 9 < (bVar10 & 0xf) | in_AF;
    bVar10 = bVar10 + in_AF * -6;
    bVar5 = (bool)(0x9f < bVar10 | bVar6 | in_AF * (bVar10 < 6));
    cVar11 = bVar10 + bVar5 * -0x60;
    pbVar14 = (byte *)CONCAT31(uVar16,cVar11);
    puVar27 = puVar28;
    if (bVar34) goto LAB_0804861b;
    if (!bVar5) goto LAB_0804862f;
    in_ESI = puVar29;
    if (!bVar5 && !bVar33) {
      puVar1 = (ushort *)(unaff_retaddr + 0x3a);
      *puVar1 = *puVar1 + (ushort)bVar5 * -(*puVar1 & 3);
      pbVar14[0x6f] = pbVar14[0x6f] & bVar17;
      goto code_r0x08048628;
    }
    pcVar30 = (char *)((int)puVar28 + (int)unaff_retaddr * 2 + 0x67);
    *pcVar30 = *pcVar30 + bVar17;
    unaff_retaddr = (char *)(puVar29[8] * 0x20202020);
    *(byte *)((int)puVar29 + 0x61) = *(byte *)((int)puVar29 + 0x61) & bVar17;
    puVar27 = puVar28 + (uint)bVar12 * -2 + 1;
    uVar3 = in(uVar19);
    *puVar28 = uVar3;
    pbVar14[in_GS_OFFSET] = pbVar14[in_GS_OFFSET] & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    *pbVar14 = *pbVar14 & bVar15;
    bVar10 = *pbVar14;
    piVar21[1] = (int)(piVar21 + 2);
    piVar25 = piVar21 + 1;
    if (bVar10 != 0) goto code_r0x080485e3;
    *pbVar14 = *pbVar14 + cVar11;
    *pbVar14 = *pbVar14 + cVar11;
    *pbVar14 = *pbVar14 + cVar11;
    *pbVar14 = *pbVar14 + cVar11;
  }
  cVar11 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
LAB_080486bb_1:
  cVar11 = (char)pbVar14;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
  *pbVar14 = *pbVar14 + cVar11;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 __regparm3 FUN_080484fe(uint param_1,undefined4 param_2)

{
  char *unaff_EDI;
  
  *unaff_EDI = (char)((ulonglong)param_1 / 10) + '0';
  unaff_EDI[1] = (char)((ulonglong)param_1 % 10) + '0';
  unaff_EDI[2] = ':';
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x08048531)

undefined4 FUN_0804851a(void)

{
  undefined4 unaff_EDI;
  
  FUN_08048538();
  return unaff_EDI;
}



void FUN_08048538(void)

{
  char cVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  char *unaff_ESI;
  char *pcVar4;
  char *unaff_EDI;
  char *pcVar5;
  
  do {
    iVar3 = in_ECX;
    pcVar4 = unaff_ESI + 1;
    pcVar5 = unaff_EDI;
    if (*unaff_ESI == *unaff_EDI) {
      do {
        pcVar4 = unaff_ESI;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = unaff_ESI + 1;
        cVar1 = *unaff_ESI;
        cVar2 = *pcVar5;
        unaff_ESI = pcVar4;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if ((iVar3 == 0) && (*pcVar4 == ':')) {
        return;
      }
    }
    while( true ) {
      unaff_ESI = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (cVar1 == '\n') break;
      pcVar4 = unaff_ESI;
      if (cVar1 == '\0') {
        return;
      }
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x080486bc) overlaps instruction at (ram,0x080486bb)
// 
// WARNING: Removing unreachable block (ram,0x08048644)
// WARNING: Removing unreachable block (ram,0x08048646)
// WARNING: Removing unreachable block (ram,0x08048649)
// WARNING: Removing unreachable block (ram,0x0804858d)
// WARNING: Removing unreachable block (ram,0x0804864e)

void FUN_08048560(char *param_1)

{
  ushort *puVar1;
  char *pcVar2;
  int *piVar3;
  byte *pbVar4;
  undefined uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  char cVar12;
  byte bVar14;
  undefined3 uVar15;
  byte *pbVar13;
  byte bVar16;
  int iVar17;
  int extraout_ECX;
  undefined2 uVar18;
  undefined4 *puVar19;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *unaff_EDI;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined2 in_SS;
  int in_FS_OFFSET;
  int in_GS_OFFSET;
  byte bVar24;
  byte in_AF;
  bool bVar25;
  byte bVar26;
  bool bVar27;
  undefined8 uVar28;
  
  iVar17 = 4;
  while( true ) {
    puVar21 = (undefined4 *)((int)unaff_ESI + 1);
    cVar12 = *(char *)unaff_ESI;
    if (cVar12 == '\0') break;
    unaff_ESI = puVar21;
    if ((cVar12 == ':') && (iVar17 = iVar17 + -1, iVar17 == 0)) {
      while( true ) {
        cVar12 = *(char *)puVar21;
        if ((cVar12 == ':') || (cVar12 == ',')) break;
        *param_1 = cVar12;
        puVar21 = (undefined4 *)((int)puVar21 + 1);
        param_1 = param_1 + 1;
      }
      return;
    }
  }
  bVar26 = 0;
  bVar24 = 0;
  bVar27 = false;
  bVar25 = true;
  pcVar10 = (code *)swi(0x80);
  uVar28 = (*pcVar10)();
  puVar19 = &param_1;
  puVar20 = &param_1;
  in_AF = 9 < ((byte)uVar28 & 0xf) | in_AF;
  uVar15 = (undefined3)((ulonglong)uVar28 >> 8);
  bVar11 = (byte)uVar28 + in_AF * -6;
  bVar7 = (bool)(0x9f < bVar11 | bVar24 | in_AF * (bVar11 < 6));
  bVar11 = bVar11 + bVar7 * -0x60;
  pbVar13 = (byte *)CONCAT31(uVar15,bVar11);
  bVar24 = (byte)((ulonglong)uVar28 >> 0x20);
  uVar18 = (undefined2)((ulonglong)uVar28 >> 0x20);
  puVar22 = unaff_EDI;
  if (bVar7 || bVar25) {
LAB_08048609:
    lVar9 = (longlong)*(int *)((int)((ulonglong)uVar28 >> 0x20) + 0x65) * 0x726f7463;
    puVar20 = (undefined4 *)lVar9;
    if (-1 < (int)((int)puVar19 + 1)) {
      if (-1 < (int)((int)puVar19 + 1)) {
        if ((int)puVar20 != lVar9) {
          bVar11 = (byte)pbVar13 | *pbVar13;
          pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),bVar11);
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
          *pbVar13 = *pbVar13 + bVar11;
        }
        cVar12 = (char)pbVar13;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
        *pbVar13 = *pbVar13 + cVar12;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      goto LAB_080486bb_1;
    }
    bRam00000068 = bRam00000068 & bVar24;
    puVar23 = (undefined4 *)((int)puVar22 + (uint)bVar26 * -2 + 1);
    uVar5 = in(uVar18);
    *(undefined *)puVar22 = uVar5;
LAB_0804861b:
    uVar5 = in(uVar18);
    *(undefined *)puVar23 = uVar5;
    puVar21 = puVar20;
    unaff_EDI = (undefined4 *)((int)puVar23 + (uint)bVar26 * -2);
code_r0x08048628:
    uVar6 = in(uVar18);
    *unaff_EDI = uVar6;
    pbVar13[in_GS_OFFSET + 0x68] = pbVar13[in_GS_OFFSET + 0x68] & bVar24;
    out(*puVar21,uVar18);
    puVar20 = (undefined4 *)((int)(puVar21 + (uint)bVar26 * -2 + 1) + (uint)bVar26 * -2 + 1);
    out(*(char *)(puVar21 + (uint)bVar26 * -2 + 1),uVar18);
LAB_0804862f:
    out(*puVar20,uVar18);
    pbVar4 = (byte *)(in_FS_OFFSET + extraout_ECX + 0x6e);
    *pbVar4 = *pbVar4 & (byte)((uint)extraout_ECX >> 8);
    *(byte *)(extraout_ECX + 0x74) = *(byte *)(extraout_ECX + 0x74) & (byte)((uint)pbVar13 >> 8);
    pbVar13[unaff_EBP * 2 + 0x69] = pbVar13[unaff_EBP * 2 + 0x69] & bVar24;
  }
  else {
    bVar16 = (byte)extraout_ECX;
    bVar14 = (byte)((ulonglong)uVar28 >> 8);
    if (bVar7) {
      *pbVar13 = *pbVar13 & bVar14;
      *pbVar13 = *pbVar13 & bVar14;
      *pbVar13 = *pbVar13 & bVar14;
      (&stack0x0000007d)[(int)puVar21 * 2] = (&stack0x0000007d)[(int)puVar21 * 2] & bVar24;
code_r0x080485e3:
      bVar11 = (byte)((uint)pbVar13 >> 8);
      *pbVar13 = *pbVar13 & bVar11;
      *pbVar13 = *pbVar13 & bVar11;
      *pbVar13 = *pbVar13 & bVar11;
      *pbVar13 = *pbVar13 & bVar11;
      *(byte *)(extraout_ECX + 100) = *(byte *)(extraout_ECX + 100) & bVar16;
      puVar22 = (undefined4 *)((int)unaff_EDI + (uint)bVar26 * -2 + 1);
      uVar5 = in(uVar18);
      *(undefined *)unaff_EDI = uVar5;
      pbVar13[in_GS_OFFSET] = pbVar13[in_GS_OFFSET] & bVar11;
      *pbVar13 = *pbVar13 & bVar11;
      *(undefined4 **)((int)puVar20 + -4) = puVar22;
      *(undefined4 *)((int)puVar20 + -8) = 0xa657265;
      in_AF = 9 < ((byte)pbVar13 & 0xf) | in_AF;
      bVar11 = (byte)pbVar13 + in_AF * -6;
      pbVar13 = (byte *)CONCAT31((int3)((uint)pbVar13 >> 8),
                                 bVar11 + (0x9f < bVar11 | in_AF * (bVar11 < 6)) * -0x60);
      puVar19 = (undefined4 *)((int)puVar20 + -9);
      out(*puVar21,uVar18);
      piVar3 = (int *)segment(in_SS,(short)unaff_EBP + 0x3a);
      unaff_EBP = *piVar3 * 0x6d614e20;
      goto LAB_08048609;
    }
    if (bVar7) goto code_r0x08048628;
    puVar20 = (undefined4 *)((int)unaff_ESI + (uint)bVar26 * -2 + 2);
    out(*(char *)puVar21,uVar18);
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    bVar11 = bVar11 + in_AF * -6;
    bVar8 = 0x9f < bVar11 | bVar7 | in_AF * (bVar11 < 6);
    bVar11 = bVar11 + bVar8 * -0x60;
    if (!bVar25) {
      pbVar13 = (byte *)(CONCAT31(uVar15,bVar11) + -1);
      puVar21 = puVar20 + (uint)bVar26 * -2 + 1;
      out(*puVar20,uVar18);
      goto code_r0x08048628;
    }
    puVar22 = unaff_EDI + (uint)bVar26 * -2 + 1;
    uVar6 = in(uVar18);
    *unaff_EDI = uVar6;
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    bVar11 = bVar11 + in_AF * -6;
    bVar8 = 0x9f < bVar11 | bVar8 | in_AF * (bVar11 < 6);
    bVar11 = bVar11 + bVar8 * -0x60;
    pbVar13 = (byte *)CONCAT31(uVar15,bVar11);
    if (bVar25) {
      puVar23 = (undefined4 *)((int)puVar22 + (uint)bVar26 * -2 + 1);
      uVar5 = in(uVar18);
      *(undefined *)puVar22 = uVar5;
      goto LAB_0804861b;
    }
    in_AF = 9 < (bVar11 & 0xf) | in_AF;
    bVar11 = bVar11 + in_AF * -6;
    bVar7 = (bool)(0x9f < bVar11 | bVar8 | in_AF * (bVar11 < 6));
    cVar12 = bVar11 + bVar7 * -0x60;
    pbVar13 = (byte *)CONCAT31(uVar15,cVar12);
    puVar23 = puVar22;
    if (bVar27) goto LAB_0804861b;
    if (!bVar7) goto LAB_0804862f;
    puVar21 = puVar20;
    if (!bVar7 && !bVar25) {
      puVar1 = (ushort *)(unaff_EBP + 0x3a);
      *puVar1 = *puVar1 + (ushort)bVar7 * -(*puVar1 & 3);
      pbVar13[0x6f] = pbVar13[0x6f] & bVar16;
      unaff_EDI = puVar22;
      goto code_r0x08048628;
    }
    pcVar2 = (char *)((int)puVar22 + unaff_EBP * 2 + 0x67);
    *pcVar2 = *pcVar2 + bVar16;
    unaff_EBP = puVar20[8] * 0x20202020;
    *(byte *)((int)puVar20 + 0x61) = *(byte *)((int)puVar20 + 0x61) & bVar16;
    unaff_EDI = puVar22 + (uint)bVar26 * -2 + 1;
    uVar6 = in(uVar18);
    *puVar22 = uVar6;
    pbVar13[in_GS_OFFSET] = pbVar13[in_GS_OFFSET] & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    *pbVar13 = *pbVar13 & bVar14;
    puVar20 = (undefined4 *)register0x00000010;
    if (*pbVar13 != 0) goto code_r0x080485e3;
    *pbVar13 = *pbVar13 + cVar12;
    *pbVar13 = *pbVar13 + cVar12;
    *pbVar13 = *pbVar13 + cVar12;
    *pbVar13 = *pbVar13 + cVar12;
  }
  cVar12 = (char)pbVar13;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
LAB_080486bb_1:
  cVar12 = (char)pbVar13;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
  *pbVar13 = *pbVar13 + cVar12;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


