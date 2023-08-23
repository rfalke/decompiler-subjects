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




void processEntry entry(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  char **ppcVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  short **ppsVar9;
  short **ppsVar10;
  short **ppsVar11;
  char *pcVar12;
  undefined uVar13;
  
  ppsVar11 = (short **)&stack0x00000008;
  ppcVar3 = (char **)&stack0x00000008;
  if (param_2 == 1) goto LAB_080480e6;
  while( true ) {
    ppsVar11 = (short **)ppcVar3;
    pcVar8 = (char *)*ppsVar11;
    DAT_0804c2b8 = (byte)(in_EAX >> 8);
    if (pcVar8 == (char *)0x0) {
      *ppsVar11 = (short *)0x0;
      goto LAB_080480e6;
    }
    uVar5 = CONCAT31((int3)(in_EAX >> 8),*pcVar8);
    if ((*pcVar8 != '-') || (pcVar12 = pcVar8 + 1, pcVar8[1] == '\0')) break;
    while( true ) {
      cVar1 = *pcVar12;
      in_EAX = CONCAT31((int3)(uVar5 >> 8),cVar1);
      ppcVar3 = (char **)ppsVar11 + 1;
      if (cVar1 == '\0') break;
      if (cVar1 == 'A') {
        in_EAX = (uint)(ushort)(CONCAT11((char)(uVar5 >> 8),0x41) | 0x700);
      }
      uVar5 = in_EAX;
      if ((char)uVar5 == 'b') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x3000);
      }
      if ((char)uVar5 == 'e') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x600);
      }
      if ((char)uVar5 == 'E') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x200);
      }
      if ((char)uVar5 == 'n') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x1000);
      }
      if ((char)uVar5 == 's') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x800);
      }
      if ((char)uVar5 == 't') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x500);
      }
      if ((char)uVar5 == 'T') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x100);
      }
      if ((char)uVar5 == 'v') {
        uVar5 = (uint)(ushort)((ushort)uVar5 | 0x400);
      }
      pcVar12 = pcVar12 + 1;
      if ((char)uVar5 == '-') {
        DAT_0804c2b8 = (byte)(uVar5 >> 8);
        ppsVar9 = (short **)((char **)ppsVar11 + 1);
        goto LAB_080480ca;
      }
    }
  }
  *ppsVar11 = (short *)pcVar8;
  ppsVar9 = ppsVar11;
LAB_080480ca:
  ppsVar10 = ppsVar9 + 1;
  ppsVar11 = ppsVar9 + 1;
  if (*ppsVar9 != (short *)0x0) {
    if (**ppsVar9 != 0x2d) goto code_r0x080480d7;
    goto LAB_080480e6;
  }
  uVar13 = DAT_0804c2b0 < 0;
  if (DAT_0804c2b0 != 0) {
    *ppsVar9 = (short *)0x1;
    *ppsVar9 = (short *)0x4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    ppsVar10 = ppsVar9 + 2;
  }
  *(undefined4 *)((int)ppsVar10 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  ppsVar11 = (short **)((int)ppsVar10 + 4);
  goto LAB_08048134;
code_r0x080480d7:
  *ppsVar9 = (short *)0x5;
  pcVar2 = (code *)swi(0x80);
  iVar6 = (*pcVar2)();
  ppsVar11 = ppsVar9 + 2;
  ppsVar9 = ppsVar9 + 2;
  if (-1 < iVar6) {
LAB_080480e6:
    while (uVar13 = (char)DAT_0804c2b8 < '\0', DAT_0804c2b8 == 0) {
      ppsVar11[-1] = (short *)0x3;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      ppsVar9 = ppsVar11 + 1;
      if ((iVar6 < 0) || (ppsVar9 = ppsVar11 + 1, iVar6 == 0)) goto LAB_080480ca;
      *ppsVar11 = (short *)0x1;
      *ppsVar11 = (short *)0x4;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      ppsVar11 = ppsVar11 + 2;
    }
LAB_08048134:
    while( true ) {
      *(undefined4 *)((int)ppsVar11 + -4) = 0x8048139;
      uVar7 = FUN_080481e2();
      cVar1 = DAT_0804c2ba;
      ppsVar9 = ppsVar11;
      if ((bool)uVar13) break;
      bVar4 = (byte)uVar7;
      uVar5 = CONCAT22((short)((uint)uVar7 >> 0x10),CONCAT11(DAT_0804c2b8,bVar4));
      if (bVar4 == 10) {
        if ((((DAT_0804c2b8 & 8) == 0) || (DAT_0804c2ba != '\n')) ||
           (uVar13 = (char)(DAT_0804c2bb + -10) < '\0', DAT_0804c2bb != '\n')) {
          if ((DAT_0804c2b8 & 2) != 0) {
            *(undefined4 *)((int)ppsVar11 + -4) = 0x80481b0;
            uVar7 = FUN_08048202();
            uVar5 = CONCAT31((int3)((uint)uVar7 >> 8),10);
          }
          if (((uVar5 & 0x2000) != 0) && (cVar1 == (char)uVar5)) {
            DAT_0804c2b9 = DAT_0804c2b9 + '\x01';
          }
          *(undefined4 *)((int)ppsVar11 + -4) = 0x80481d0;
          DAT_0804c2ba = cVar1;
          FUN_08048202();
          DAT_0804c2b9 = DAT_0804c2b9 + -1;
          uVar13 = DAT_0804c2b9 < '\0';
        }
      }
      else {
        if (bVar4 == 9) {
          uVar13 = false;
          if ((DAT_0804c2b8 & 1) != 0) {
LAB_08048178:
            *(uint *)((int)ppsVar11 + -4) = uVar5;
            *(undefined4 *)((int)ppsVar11 + -8) = 0x8048180;
            FUN_08048202();
            uVar13 = (char)((char)*(undefined4 *)((int)ppsVar11 + -4) + '@') < '\0';
          }
        }
        else {
          uVar13 = false;
          if ((DAT_0804c2b8 & 4) != 0) {
            if (0x7f < bVar4) {
              *(uint *)((int)ppsVar11 + -4) = uVar5;
              *(undefined4 *)((int)ppsVar11 + -8) = 0x804815e;
              FUN_08048202();
              *(undefined4 *)((int)ppsVar11 + -8) = 0x8048165;
              FUN_08048202();
              uVar5 = *(uint *)((int)ppsVar11 + -4) & 0xffffff7f;
            }
            uVar13 = (char)((byte)uVar5 - 0x20) < '\0';
            if ((byte)uVar5 < 0x20) goto LAB_08048178;
          }
        }
        *(undefined4 *)((int)ppsVar11 + -4) = 0x8048171;
        FUN_08048202();
      }
    }
  }
  goto LAB_080480ca;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined FUN_080481e2(void)

{
  code *pcVar1;
  int iVar2;
  undefined *extraout_ECX;
  undefined *unaff_ESI;
  undefined4 uStack_4;
  
  iVar2 = _DAT_0804c2ac;
  do {
    _DAT_0804c2ac = iVar2;
    _DAT_0804c2ac = _DAT_0804c2ac + -1;
    if (-1 < _DAT_0804c2ac) {
      return *unaff_ESI;
    }
    *(undefined4 *)((int)register0x00000010 + -4) = 3;
    pcVar1 = (code *)swi(0x80);
    iVar2 = (*pcVar1)();
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    unaff_ESI = extraout_ECX;
  } while (iVar2 != 0);
  return 0xff;
}



void __regparm3 FUN_08048202(uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte bVar11;
  uint auStack_14 [4];
  
  bVar11 = 0;
  puVar9 = (undefined4 *)&stack0xfffffffc;
  if (((param_1 & 0x1000) != 0) && (puVar9 = (undefined4 *)&stack0xfffffffc, DAT_0804c2b9 == '\0'))
  {
    auStack_14[3] = CONCAT22((short)(param_1 >> 0x10),CONCAT11(DAT_0804c2ba,(char)param_1));
    DAT_0804c2b9 = '\x01';
    DAT_0804c2b4 = DAT_0804c2b4 + 1;
    uVar10 = 0;
    uVar5 = DAT_0804c2b4;
    puVar3 = auStack_14 + 3;
    do {
      puVar7 = (undefined *)puVar3;
      uVar1 = (ulonglong)uVar5;
      uVar5 = uVar5 / 10;
      *(uint *)(puVar7 + -4) = (uint)(byte)((char)(uVar1 % 10) + 0x30);
      uVar10 = uVar10 + 1;
      puVar3 = (uint *)(puVar7 + -4);
    } while (uVar5 != 0);
    *(undefined4 *)(puVar7 + -8) = 6;
    iVar6 = *(uint *)(puVar7 + -8) - uVar10;
    puVar9 = (undefined4 *)(puVar7 + -4);
    if (uVar10 <= *(uint *)(puVar7 + -8) && iVar6 != 0) {
      do {
        *(int *)(puVar7 + -8) = iVar6;
        *(undefined4 *)(puVar7 + -0xc) = 0x804824a;
        FUN_08048202();
        iVar6 = *(int *)(puVar7 + -8) + -1;
        puVar9 = (undefined4 *)(puVar7 + -4);
      } while (iVar6 != 0);
    }
    do {
      puVar8 = puVar9;
      *puVar8 = 0x8048254;
      FUN_08048202();
      uVar10 = uVar10 - 1;
      puVar9 = puVar8 + 1;
    } while (uVar10 != 0);
    *puVar8 = 0x804825e;
    FUN_08048202();
    *puVar8 = 0x8048265;
    FUN_08048202();
    param_1 = puVar8[1];
    puVar9 = puVar8 + 2;
    DAT_0804c2ba = (undefined)(param_1 >> 8);
  }
  iVar6 = DAT_0804c2b0 + 0x804a2ad;
  uVar4 = (undefined)param_1;
  (&DAT_0804a2ac)[DAT_0804c2b0] = uVar4;
  DAT_0804c2b0 = DAT_0804c2b0 + 1;
  LOCK();
  UNLOCK();
  DAT_0804c2bb = DAT_0804c2ba;
  DAT_0804c2ba = uVar4;
  if (0x804c2ab < iVar6 + (uint)bVar11 * -2) {
    *(undefined4 *)((int)puVar9 + -4) = 1;
    *(undefined4 *)((int)puVar9 + -4) = 4;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    DAT_0804c2b0 = 0;
  }
  return;
}


