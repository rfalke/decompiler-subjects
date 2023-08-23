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




void processEntry entry(undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined *puVar14;
  uint in_EDI;
  undefined4 *puVar15;
  undefined8 uVar16;
  
  puVar5 = (undefined4 *)&stack0x00000004;
  puVar7 = (undefined4 *)&stack0x00000004;
  if ((undefined4 *)0x3 < param_2) goto LAB_08048119;
  do {
    *(undefined4 *)((int)puVar5 + -4) = 1;
    *(undefined4 *)((int)puVar5 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar6 = (uint *)((int)puVar5 + 4);
LAB_08048112:
    *(undefined4 *)((int)puVar6 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = (undefined4 *)((int)puVar6 + 4);
LAB_08048119:
    puVar5 = puVar7 + 2;
    DAT_08055014 = *(char *)puVar7[1];
  } while ((DAT_08055014 != 'd') && (DAT_08055014 != 'e'));
  puVar7[2] = puVar7[2];
  puVar7[1] = 0x8048131;
  FUN_080482b7();
  puVar7[2] = 0x100;
  puVar7[1] = &DAT_08055041;
  *puVar7 = 0x8048143;
  FUN_08048329();
  piVar13 = puVar7 + 3;
  while (puVar6 = (uint *)(piVar13 + 1), *piVar13 != 0) {
    *piVar13 = 2;
    *piVar13 = 5;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    piVar8 = piVar13 + 2;
    piVar13 = piVar13 + 2;
    if (-1 < iVar2) {
      DAT_08055015 = 0;
      puVar9 = (uint *)piVar8;
      do {
        puVar9[-1] = 3;
        pcVar1 = (code *)swi(0x80);
        uVar16 = (*pcVar1)();
        uVar3 = (uint)uVar16;
        puVar11 = puVar9 + 1;
        if ((int)uVar3 < 0) {
          *puVar9 = 0x13;
          *puVar9 = 1;
          *puVar9 = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar6 = puVar9 + 2;
          goto LAB_08048112;
        }
        if (uVar3 != 0) {
          *puVar9 = uVar3;
          puVar9[-1] = extraout_ECX;
          puVar9[-2] = (int)((ulonglong)uVar16 >> 0x20);
          puVar9[-3] = iVar2;
          puVar9[-4] = (uint)(puVar9 + 1);
          puVar9[-5] = iVar2;
          puVar9[-6] = (uint)param_2;
          puVar10 = puVar9 + -7;
          puVar9[-7] = in_EDI;
          if (uVar3 >> 4 != 0) {
            puVar14 = &DAT_08051014;
            puVar15 = &DAT_08053014;
            do {
              if (DAT_08055014 == 'd') {
                puVar9[-8] = (uint)puVar15;
                puVar9[-9] = (uint)puVar14;
                puVar9[-10] = 0x80481bc;
                uVar16 = FUN_08048460();
                iVar4 = extraout_ECX_01;
              }
              else {
                puVar9[-8] = (uint)puVar15;
                puVar9[-9] = (uint)puVar14;
                puVar9[-10] = 0x80481b0;
                uVar16 = FUN_080483de();
                iVar4 = extraout_ECX_00;
              }
              puVar14 = puVar14 + 0x10;
              puVar15 = puVar15 + 4;
            } while (iVar4 != 1);
            iVar4 = (int)((ulonglong)uVar16 >> 0x20) * 0x10;
            DAT_08055015 = DAT_08055015 + iVar4;
            puVar9[-8] = (int)uVar16;
            puVar9[-9] = 0;
            puVar9[-10] = iVar4;
            puVar9[-0xb] = iVar2;
            puVar9[-0xc] = (uint)(puVar9 + -7);
            puVar9[-0xd] = iVar2;
            puVar9[-0xe] = (uint)puVar14;
            puVar9[-0xf] = (uint)puVar15;
            puVar9[-0x10] = 1;
            puVar9[-0x10] = 0x13;
            pcVar1 = (code *)swi(0x80);
            (*pcVar1)();
            puVar9[-0xf] = 4;
            pcVar1 = (code *)swi(0x80);
            (*pcVar1)();
            puVar10 = puVar9 + -5;
          }
          in_EDI = *puVar10;
          param_2 = (undefined4 *)puVar10[1];
          iVar2 = puVar10[2];
          uVar3 = puVar10[7];
          puVar11 = puVar10 + 8;
        }
        puVar9 = puVar11;
      } while (uVar3 == 0x2000);
      if (DAT_08055014 == 'e') {
        uVar3 = uVar3 & 0xf;
        if (uVar3 != 0) {
          DAT_08055015 = DAT_08055015 + uVar3;
          puVar11[-1] = 3;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          *puVar11 = 1;
          *puVar11 = 0x13;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar11[1] = 5;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar11[2] = 0x10;
          puVar11[2] = 3;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar11[3] = (uint)&DAT_08053014;
          puVar11[2] = (uint)&DAT_08051014;
          puVar11[1] = 0x8048281;
          FUN_080483de();
          puVar11[3] = 0x10;
          puVar11[3] = 4;
          pcVar1 = (code *)swi(0x80);
          (*pcVar1)();
          puVar11 = puVar11 + 5;
          in_EDI = uVar3;
        }
        param_2 = &DAT_08053014;
        DAT_08053014 = DAT_08055015;
        *(undefined4 *)((int)puVar11 + -4) = 4;
        *(undefined4 *)((int)puVar11 + -4) = 4;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar12 = (undefined4 *)((int)puVar11 + 4);
      }
      else {
        param_2 = (undefined4 *)&DAT_08051014;
        in_EDI = *(uint *)(&DAT_08051014 + (uVar3 & 0xfffffff0));
        puVar11[-1] = 0x5d;
        pcVar1 = (code *)swi(0x80);
        (*pcVar1)();
        puVar12 = puVar11 + 1;
      }
      *(undefined4 *)((int)puVar12 + -4) = 6;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      piVar13 = (int *)((int)puVar12 + 4);
    }
  }
  goto LAB_08048112;
}



undefined8 __regparm2 FUN_080482b7(undefined4 param_1_00,undefined4 param_2,int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = (char *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  FUN_080487a5();
  FUN_080487fc();
  FUN_08048826(param_1);
  FUN_080487a5();
  FUN_080487fc();
  FUN_08048826();
  DAT_08055041 = DAT_08055019;
  DAT_08055045 = DAT_0805501d;
  DAT_08055049 = DAT_08055021;
  DAT_0805504d = DAT_08055025 ^ DAT_0805502d;
  DAT_08055051 = DAT_08055029 ^ DAT_08055031;
  DAT_08055055 = DAT_08055035;
  DAT_08055059 = DAT_08055039;
  DAT_0805505d = DAT_0805503d;
  return CONCAT44(param_2,param_1_00);
}



undefined4 * FUN_08048329(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  DAT_08050f3c = 0xb7e15163;
  uVar3 = 1;
  do {
    (&DAT_08050f3c)[uVar3] = *(int *)(uVar3 * 4 + 0x8050f38) + -0x61c88647;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x2c);
  uVar3 = 0;
  do {
    (&DAT_08050f3c)[uVar3] = *(undefined4 *)(param_1 + uVar3 * 4);
    uVar3 = uVar3 + 1;
  } while (uVar3 < param_2 >> 5);
  uVar3 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  do {
    uVar2 = (&DAT_08050f3c)[local_10] + local_8 + local_c;
    local_8 = uVar2 * 8 | uVar2 >> 0x1d;
    uVar2 = *(int *)(&DAT_08050ff0 + local_14 * 4) + local_c + local_8;
    bVar1 = (byte)(local_c + local_8) & 0x1f;
    local_c = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    (&DAT_08050f3c)[local_10] = local_8;
    *(uint *)(&DAT_08050ff0 + local_14 * 4) = local_c;
    local_10 = local_10 + 1;
    if (local_10 == 0x2b) {
      local_10 = 0;
    }
    local_14 = local_14 + 1;
    if (local_14 == (param_2 >> 5) - 1) {
      local_14 = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x84);
  return &DAT_08050f3c;
}



undefined8 __regparm2
FUN_080483de(undefined4 param_1_00,undefined4 param_2_00,uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar6 = &DAT_08050f44;
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar7 = param_1[3] + DAT_08050f40;
  uVar8 = param_1[1] + DAT_08050f3c;
  do {
    uVar5 = uVar8;
    uVar4 = uVar7;
    uVar7 = (uVar4 * 2 + 1) * uVar4;
    uVar8 = uVar7 * 0x20 | uVar7 >> 0x1b;
    uVar7 = (uVar5 * 2 + 1) * uVar5;
    uVar9 = uVar7 * 0x20 | uVar7 >> 0x1b;
    uVar2 = uVar2 ^ uVar9;
    bVar1 = (byte)uVar8 & 0x1f;
    uVar7 = (uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) + *piVar6;
    uVar3 = uVar3 ^ uVar8;
    bVar1 = (byte)uVar9 & 0x1f;
    uVar8 = (uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) + piVar6[1];
    piVar6 = piVar6 + 2;
    uVar2 = uVar5;
    uVar3 = uVar4;
  } while (piVar6 != &DAT_08050fe4);
  *param_2 = uVar5 + DAT_08050fe4;
  param_2[1] = uVar8;
  param_2[2] = uVar4 + DAT_08050fe8;
  param_2[3] = uVar7;
  return CONCAT44(param_2_00,param_1_00);
}



undefined8 __regparm2
FUN_08048460(undefined4 param_1_00,undefined4 param_2_00,int *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *param_1 - DAT_08050fe4;
  uVar4 = param_1[2] - DAT_08050fe8;
  uVar6 = param_1[3];
  uVar7 = param_1[1];
  piVar2 = &DAT_08050fdc;
  do {
    piVar8 = piVar2;
    uVar5 = uVar4;
    uVar3 = uVar9;
    uVar9 = (uVar5 * 2 + 1) * uVar5;
    uVar10 = uVar9 * 0x20 | uVar9 >> 0x1b;
    uVar9 = (uVar3 * 2 + 1) * uVar3;
    uVar9 = uVar9 * 0x20 | uVar9 >> 0x1b;
    bVar1 = (byte)uVar9 & 0x1f;
    uVar4 = (uVar7 - piVar8[1] >> bVar1 | uVar7 - piVar8[1] << 0x20 - bVar1) ^ uVar10;
    bVar1 = (byte)uVar10 & 0x1f;
    uVar9 = (uVar6 - *piVar8 >> bVar1 | uVar6 - *piVar8 << 0x20 - bVar1) ^ uVar9;
    uVar6 = uVar5;
    uVar7 = uVar3;
    piVar2 = piVar8 + -2;
  } while (piVar8 + -2 != &DAT_08050f3c);
  param_2[3] = uVar5 - piVar8[-1];
  param_2[2] = uVar4;
  param_2[1] = uVar3 - DAT_08050f3c;
  *param_2 = uVar9;
  return CONCAT44(param_2_00,param_1_00);
}



undefined8 __regparm3 FUN_080486af(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  code **ppcVar8;
  undefined4 *puVar9;
  undefined4 local_48 [10];
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  puVar7 = &DAT_080488a0;
  puVar9 = local_48;
  uStack_c = param_2;
  uStack_4 = param_1;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = &DAT_080488a0;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  ppcVar8 = (code **)(puVar7 + 0x12);
  iVar4 = 2;
  puVar2 = &stack0xffffffe0;
  do {
    puVar6 = puVar2;
    iVar5 = 0x10;
    do {
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x28) = iVar3 + *(int *)(puVar6 + -0x18);
      puVar1 = (uint *)(puVar6 + -0x20);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x18) = iVar3 + *(int *)(puVar6 + -0x1c);
      puVar1 = (uint *)(puVar6 + -0x24);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x1c) = iVar3 + *(int *)(puVar6 + -0x20);
      puVar1 = (uint *)(puVar6 + -0x28);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x20) = iVar3 + *(int *)(puVar6 + -0x24);
      puVar1 = (uint *)(puVar6 + -0x18);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar3 = (**ppcVar8)();
      *(int *)(puVar6 + -0x24) = iVar3 + *(int *)(puVar6 + -0x28);
      puVar1 = (uint *)(puVar6 + -0x1c);
      *puVar1 = *puVar1 << 10 | *puVar1 >> 0x16;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
    puVar2 = puVar6 + 0x14;
  } while (iVar4 != 0);
  iVar4 = *(int *)(puVar6 + -0x1c) + *(int *)(puVar6 + -0x34) + DAT_080488a4;
  DAT_080488a4 = *(int *)(puVar6 + -0x18) + *(int *)(puVar6 + -0x30) + DAT_080488a8;
  DAT_080488a8 = *(int *)(puVar6 + -0x28) + *(int *)(puVar6 + -0x2c) + DAT_080488ac;
  DAT_080488ac = *(int *)(puVar6 + -0x24) + *(int *)(puVar6 + -0x3c) + DAT_080488b0;
  DAT_080488b0 = *(int *)(puVar6 + -0x20) + *(int *)(puVar6 + -0x38) + DAT_080488a0;
  DAT_080488a0 = iVar4;
  return CONCAT44(uStack_c,uStack_4);
}



undefined8 __regparm3 FUN_080487a5(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  
  DAT_080488a0 = 0x67452301;
  DAT_080488a4 = 0xefcdab89;
  DAT_080488a8 = 0x98badcfe;
  DAT_080488ac = 0x10325476;
  DAT_080488b0 = 0xc3d2e1f0;
  puVar8 = &DAT_080488b8;
  DAT_080488b4 = 0;
  DAT_080488b8 = 0;
  for (iVar4 = 0x10; puVar8 = puVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
  }
  ppuVar6 = &PTR_LAB_080484e2;
  iVar4 = 10;
  do {
    puVar2 = *ppuVar6;
    puVar3 = ppuVar6[1];
    iVar5 = 0x10;
    ppuVar7 = ppuVar6 + 2;
    do {
      ppuVar6 = (undefined **)((int)ppuVar7 + 2);
      uVar1 = *(undefined2 *)ppuVar7;
      *puVar8 = puVar2;
      puVar8[1] = puVar3;
      *(undefined2 *)(puVar8 + 2) = uVar1;
      puVar8 = (undefined4 *)((int)puVar8 + 10);
      iVar5 = iVar5 + -1;
      ppuVar7 = ppuVar6;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_080487fc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int extraout_ECX;
  uint extraout_EDX;
  
  if (param_3 >> 6 != 0) {
    do {
      FUN_080486af();
      param_3 = extraout_EDX;
    } while (extraout_ECX != 1);
  }
  if ((int)(DAT_080488b4 + param_3) < DAT_080488b4) {
    DAT_080488b8 = DAT_080488b8 + 1;
  }
  DAT_080488b4 = DAT_080488b4 + param_3;
  return CONCAT44(param_2,param_1);
}



undefined8 __regparm3 FUN_08048826(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  byte bVar6;
  
  uVar1 = DAT_080488b4;
  bVar6 = 0;
  puVar4 = &DAT_08048f3c + (DAT_080488b4 & 0x1fc0);
  puVar5 = &DAT_080488bc;
  for (uVar2 = DAT_080488b4 & 0x3f; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  (&DAT_080488bc)[uVar1 >> 2 & 0xf] =
       (&DAT_080488bc)[uVar1 >> 2 & 0xf] ^ 1 << (((byte)uVar1 & 3) * '\b' + 7 & 0x1f);
  if (0x37 < (uVar1 & 0x3f)) {
    FUN_080486af();
    puVar5 = &DAT_080488bc;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  DAT_080488f4 = uVar1 << 3;
  DAT_080488f8 = DAT_080488b8 >> 0x1d;
  FUN_080486af();
  puVar5 = &DAT_080488a0;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_EDI = *puVar5;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    unaff_EDI = unaff_EDI + (uint)bVar6 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


