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




undefined __regparm3 FUN_0804804c(undefined *param_1,undefined4 param_2,undefined *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *extraout_ECX;
  int unaff_EBP;
  
  *param_3 = 0;
  DAT_0804b775 = DAT_0804b775 | 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  pcVar1 = (code *)swi(0x80);
  iVar2 = (*pcVar1)();
  if (0 < iVar2) {
    if (-1 < iVar2 + -1) {
      pcVar1 = (code *)swi(0x80);
      iVar2 = (*pcVar1)();
      param_1 = extraout_ECX;
      if (iVar2 == 1) goto LAB_08048080;
    }
    *param_1 = 0x71;
  }
LAB_08048080:
  return *param_1;
}



void __regparm3 FUN_08048083(undefined4 param_1)

{
  byte bVar1;
  undefined uVar4;
  int iVar2;
  uint3 uVar5;
  int iVar3;
  int *unaff_EDI;
  
  uVar4 = (undefined)((ushort)param_1 % 0x4e);
  iVar3 = CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(uVar4,(char)((ushort)param_1 / 0x4e)));
  iVar2 = iVar3 + 1;
  bVar1 = (byte)iVar2;
  uVar5 = (uint3)(CONCAT22((short)((uint)iVar2 >> 0x10),CONCAT11(bVar1 / 10,bVar1)) >> 8);
  *unaff_EDI = ((uint)(uVar5 >> 0x10) | uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 |
               (uint)(bVar1 % 10) << 0x18) + 0x30305b1b;
  iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),uVar4) + 1;
  bVar1 = (byte)iVar3;
  uVar5 = (uint3)(CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11(bVar1 / 10,bVar1)) >> 8);
  unaff_EDI[1] = ((uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | (uint)(bVar1 % 10) << 0x18) >> 8) +
                 0x4830303b;
  return;
}



void __regparm3 FUN_080480a5(int param_1,byte param_2)

{
  int unaff_EBP;
  undefined *unaff_EDI;
  
  *(byte *)(param_1 + 0x2c + unaff_EBP) = param_2;
  FUN_08048083();
  *unaff_EDI = (&DAT_080485e7)[param_2];
  return;
}



void FUN_080480ba(void)

{
  code *pcVar1;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = 0x34325b1b;
  unaff_EDI[1] = 0xf48303b;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x080484b5) overlaps instruction at (ram,0x080484b1)
// 
// WARNING: Removing unreachable block (ram,0x080484ae)
// WARNING: Removing unreachable block (ram,0x0804847e)
// WARNING: Removing unreachable block (ram,0x08048505)
// WARNING: Removing unreachable block (ram,0x0804850c)
// WARNING: Removing unreachable block (ram,0x0804856d)
// WARNING: Removing unreachable block (ram,0x0804859d)
// WARNING: Removing unreachable block (ram,0x080485d9)
// WARNING: Removing unreachable block (ram,0x080485db)
// WARNING: Removing unreachable block (ram,0x080485ea)
// WARNING: Removing unreachable block (ram,0x080485ed)
// WARNING: Removing unreachable block (ram,0x080485f0)
// WARNING: Removing unreachable block (ram,0x080485f4)
// WARNING: Removing unreachable block (ram,0x080485f6)
// WARNING: Removing unreachable block (ram,0x08048611)
// WARNING: Removing unreachable block (ram,0x0804865b)
// WARNING: Removing unreachable block (ram,0x0804865f)
// WARNING: Removing unreachable block (ram,0x08048661)
// WARNING: Removing unreachable block (ram,0x08048665)
// WARNING: Removing unreachable block (ram,0x0804866d)
// WARNING: Removing unreachable block (ram,0x08048576)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 processEntry entry(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  char extraout_CL;
  char cVar7;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  byte *pbVar6;
  int extraout_ECX_01;
  byte bVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int extraout_EDX;
  int *piVar12;
  int extraout_EDX_00;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint *puVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  short *psVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined2 in_SS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte bVar26;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar27;
  
  bVar26 = 0;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_08048604 = DAT_08048604 & 0xfffffff5;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_08048604 = param_3;
  DAT_0804862c = 0x80480d9;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_08048620 = 200000;
  DAT_08048628 = 200000;
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  DAT_0804866c = 6;
  puVar24 = &DAT_0804866d + (uint)bVar26 * -2;
  for (iVar5 = 0x4c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar24 = 10;
    puVar24 = puVar24 + (uint)bVar26 * -2 + 1;
  }
  puVar18 = (uint *)(puVar24 + (uint)bVar26 * -2 + 1);
  *puVar24 = 0xc;
  *(byte *)puVar18 = 5;
  *(byte *)((int)puVar18 + (uint)bVar26 * -2 + 0x4d) = 5;
  pbVar19 = (byte *)((int)puVar18 + (uint)bVar26 * -2 + (uint)bVar26 * -2 + 0x4e);
  for (iVar5 = 0x666; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pbVar19 = *(byte *)puVar18;
    puVar18 = (uint *)((int)puVar18 + (uint)bVar26 * -2 + 1);
    pbVar19 = pbVar19 + (uint)bVar26 * -2 + 1;
  }
  *pbVar19 = 3;
  pbVar19 = pbVar19 + (uint)bVar26 * -2 + 1;
  for (iVar5 = 0x4c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pbVar19 = 10;
    pbVar19 = pbVar19 + (uint)bVar26 * -2 + 1;
  }
  *pbVar19 = 9;
  _DAT_08049635 = 0x3cf;
  DAT_08048a3b = 10;
  DAT_08048650 = 0x3cf;
  pcVar2 = (code *)swi(0x80);
  iVar5 = (*pcVar2)();
  puVar14 = (undefined4 *)&stack0x00000014;
  DAT_08048644 = 8;
  if ((POPCOUNT(iVar5 + DAT_08048660 & 0xff) & 1U) != 0) {
    DAT_08048644 = 2;
  }
  DAT_08048669 = 0xc;
  puVar22 = (undefined4 *)&DAT_08048dbc;
LAB_08048189:
  do {
    bVar8 = DAT_0804866a;
    if (DAT_08048669 == 0) {
      puVar14[-1] = 0x80481a9;
      bVar8 = FUN_0804804c();
      if (bVar8 == 0x1b) {
        puVar14[-1] = 0x80481b3;
        bVar8 = FUN_0804804c();
        if ((bVar8 == 0x5b) || (bVar8 == 0x4f)) {
          puVar14[-1] = 0x80481c1;
          bVar8 = FUN_0804804c();
          if ((bVar8 == 0x43) || (bVar8 == 0x44)) {
            bVar8 = bVar8 + 0x2a;
            *(uint *)(extraout_ECX + -2) = (uint)bVar8;
          }
        }
      }
    }
    else {
      bVar3 = 0;
      if (DAT_0804866a != 0) {
        LOCK();
        DAT_0804866a = 0;
        UNLOCK();
        bVar3 = bVar8;
      }
      DAT_08048668 = DAT_08048669;
      bVar8 = DAT_08048669;
      DAT_08048669 = bVar3;
    }
    iVar5 = DAT_08048654;
    if (bVar8 == 0x71) goto LAB_0804843d;
    if (bVar8 == 0xc) {
      *puVar22 = 0x1b485b1b;
      puVar21 = puVar22 + (uint)bVar26 * -2 + 1 + (uint)bVar26 * -2 + 1;
      puVar22[(uint)bVar26 * -2 + 1] = 0xe0e4a5b;
      puVar18 = (uint *)&DAT_0804866c;
      puVar14[-1] = 0x18;
      iVar5 = puVar14[-1];
      while( true ) {
        iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(0x4e,(char)iVar5));
        puVar17 = puVar18;
        do {
          puVar18 = (uint *)((int)puVar17 + (uint)bVar26 * -2 + 1);
          puVar20 = (undefined4 *)((int)puVar21 + (uint)bVar26 * -2 + 1);
          *(undefined *)puVar21 = (&DAT_080485e7)[*(byte *)puVar17];
          cVar7 = (char)((uint)iVar5 >> 8) + -1;
          iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar7,(char)iVar5));
          puVar17 = puVar18;
          puVar21 = puVar20;
        } while (cVar7 != '\0');
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) break;
        puVar21 = (undefined4 *)((int)puVar20 + (uint)bVar26 * -2 + 1);
        *(undefined *)puVar20 = 10;
      }
      puVar22 = (undefined4 *)((int)puVar20 + (uint)bVar26 * -2 + 1);
      *(undefined *)puVar20 = 0xf;
LAB_08048296:
      uVar11 = 0x373b3a5b;
      iVar5 = DAT_08048640;
      do {
        uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),
                         CONCAT11((char)((ushort)iVar5 % 10),(char)((ushort)iVar5 / 10)));
        puVar14[-1] = uVar4;
        puVar21 = (undefined4 *)((int)puVar22 + (uint)bVar26 * -2 + 1);
        *(undefined *)puVar22 = 0x1b;
        uVar11 = CONCAT22((short)((uint)uVar11 >> 0x10),
                          CONCAT11((char)((uint)uVar11 >> 8) + -1,(char)uVar11));
        puVar22 = puVar21 + (uint)bVar26 * -2 + 1;
        *puVar21 = uVar11;
        psVar23 = (short *)((int)puVar22 + (uint)bVar26 * -2 + 1);
        *(undefined *)puVar22 = 0x39;
        puVar22 = (undefined4 *)(psVar23 + (uint)bVar26 * -2 + 1);
        *psVar23 = (short)CONCAT31((int3)((uint)uVar4 >> 8),0x39) + 0x300f;
        iVar5 = CONCAT22((short)((uint)puVar14[-1] >> 0x10),(ushort)(byte)puVar14[-1]);
        puVar21 = puVar22;
      } while (iVar5 != 0);
LAB_080482bb:
      if (DAT_08048668 != 0xc) {
        puVar14[-1] = 0x80482d1;
        FUN_08048083();
        puVar24 = (undefined1 *)((int)puVar21 + (uint)bVar26 * -2 + 1);
        *(undefined *)puVar21 = 0x20;
        puVar25 = puVar24 + (uint)bVar26 * -2 + 1;
        *puVar24 = 0x20;
        puVar21 = (undefined4 *)(puVar25 + (uint)bVar26 * -2 + 1);
        *puVar25 = 0x20;
        *(byte *)(puVar18 + 0x201219b) = *(byte *)(puVar18 + 0x201219b) ^ 0x20;
        iVar13 = 0;
        iVar5 = 0x702;
        do {
          (&DAT_08049a35)[iVar13] = iVar5;
          iVar13 = iVar13 + (uint)(*(uint *)(&DAT_0804866a + iVar5) < 0x100);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(byte *)(puVar18 + 0x201219b) = *(byte *)(puVar18 + 0x201219b) ^ 0x20;
        iVar5 = 0x65;
        if (iVar13 == 0) goto LAB_08048414;
        puVar14[-1] = iVar13;
        DAT_08048660 = DAT_08048660 * 0x41c64e6d + 0x3039 & 0x7fffffff;
        puVar14[-1] = (int)ROUND(_DAT_080485e3 * (float)puVar14[-1] * (float)DAT_08048660 -
                                 _DAT_080485df);
        DAT_08048650 = (&DAT_08049a35)[(int)((ulonglong)(longlong)(int)puVar14[-1] / 7)];
        DAT_08048648 = CONCAT31(DAT_08048648._1_3_,
                                (char)((ulonglong)(longlong)(int)puVar14[-1] % 7) + '\x03');
        DAT_0804864c = '*';
      }
      puVar14[-1] = 0x8048350;
      FUN_08048083();
      puVar20 = puVar21 + (uint)bVar26 * -2 + 1;
      *puVar21 = 0x6d375b1b;
      *puVar20 = CONCAT22(0x1b20,CONCAT11(extraout_CL + '0',0x20));
      puVar22 = puVar20 + (uint)bVar26 * -2 + 1 + (uint)bVar26 * -2 + 1;
      puVar20[(uint)bVar26 * -2 + 1] = 0x6d37325b;
      if (DAT_08048668 == 0xc) {
        puVar14[-1] = 0x804836f;
        FUN_080480ba();
        goto LAB_08048189;
      }
    }
    else {
      uVar27 = DAT_0804865c - 1;
      if ((int)(DAT_0804865c - 1) < 0) {
        puVar14[-1] = 0x8048229;
        FUN_080480a5();
        _DAT_08048658 = CONCAT31(DAT_08048658_1,DAT_08048658 + '\x01');
        uVar27 = DAT_0804865c;
      }
      DAT_0804865c = uVar27;
      iVar5 = *(int *)(&DAT_08049635 + iVar5 * 4);
      if ((DAT_08048644 & 1) != 0) {
        iVar5 = iVar5 + -0x4e;
      }
      iVar5 = iVar5 + (uint)((DAT_08048644 >> 1 & 1) != 0);
      if ((DAT_08048644 >> 2 & 1) != 0) {
        iVar5 = iVar5 + 0x4e;
      }
      puVar18 = (uint *)(iVar5 - (uint)((DAT_08048644 >> 3 & 1) != 0));
      iVar5 = DAT_08048650 - (int)puVar18;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 2) {
        DAT_0804865c = (DAT_0804865c + DAT_08048648) * 2;
        DAT_08048640 = DAT_08048640 + DAT_08048648;
        goto LAB_08048296;
      }
      DAT_0804864c = DAT_0804864c + -1;
      if (DAT_0804864c == '\0') {
        cVar7 = (char)DAT_08048648 + -1;
        DAT_08048648 = CONCAT31(DAT_08048648._1_3_,cVar7);
        puVar21 = puVar22;
        if (cVar7 != '\0') {
          DAT_0804864c = '*';
          puVar14[-1] = 0x8048270;
          FUN_08048083();
          puVar21 = puVar22 + (uint)bVar26 * -2 + 1;
          *puVar22 = 0x6d375b1b;
          *puVar21 = CONCAT31(0x5b1b20,(char)DAT_08048648 + '0');
          puVar22 = puVar21 + (uint)bVar26 * -2 + 1 + (uint)bVar26 * -2 + 1;
          puVar21[(uint)bVar26 * -2 + 1] = 0xf6d3732;
          goto LAB_08048374;
        }
        goto LAB_080482bb;
      }
    }
LAB_08048374:
    puVar21 = (undefined4 *)((int)puVar22 + (uint)bVar26 * -2 + 1);
    *(undefined *)puVar22 = 0xe;
    uVar9 = CONCAT11((byte)(DAT_08048644 << 4 | DAT_08048644) >> 2,DAT_08048644) & 0xfff;
    if (*(byte *)(puVar18 + 0x201219b) != 0) {
      bVar8 = *(byte *)(puVar18 + 0x201219b) & (byte)(uVar9 >> 8);
      puVar14[-1] = (uint)(in_NT & 1) * 0x4000 | (uint)(bVar26 & 1) * 0x400 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                    (uint)(bVar8 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
                    (uint)((POPCOUNT(bVar8) & 1U) == 0) * 4 | (uint)(in_ID & 1) * 0x200000 |
                    (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
                    (uint)(in_AC & 1) * 0x40000;
      puVar14[-2] = 0x80483e9;
      FUN_080480a5();
      uVar27 = puVar14[-1];
      bVar26 = (uVar27 & 0x400) != 0;
      in_AF = (uVar27 & 0x10) != 0;
      if (((((uVar27 & 0x40) != 0) ||
           (iVar5 = 0x87, puVar18 != *(uint **)(&DAT_08049635 + _DAT_08048658 * 4))) &&
          (iVar5 = 0x33, DAT_08048640 != 0)) &&
         ((iVar5 = 0xd1, DAT_08048640 != 100 && (iVar5 = 0xac, DAT_0804865c < 0x10)))) {
        iVar5 = 0x5b;
      }
LAB_08048414:
      puVar18 = (uint *)(iVar5 + 0x8048457);
      puVar22 = puVar21 + (uint)bVar26 * -2 + 1;
      *puVar21 = 0x315b1b0f;
      while( true ) {
        uVar27 = *puVar18;
        puVar18 = (uint *)((int)puVar18 + (uint)bVar26 * -8 + 3);
        if ((char)uVar27 == '\0') break;
        cVar7 = '\x04';
        puVar21 = puVar22;
        do {
          puVar22 = (undefined4 *)((int)puVar21 + (uint)bVar26 * -2 + 1);
          *(undefined *)puVar21 = *(undefined *)(((byte)uVar27 & 0x3f) + 0x8048457);
          uVar27 = uVar27 >> 6;
          cVar7 = cVar7 + -1;
          puVar21 = puVar22;
        } while (cVar7 != '\0');
      }
LAB_0804843d:
      puVar14[-1] = 0x8048442;
      FUN_080480ba();
      puVar14[-1] = 0x36;
      pcVar2 = (code *)swi(0x80);
      uVar11 = (*pcVar2)();
      *puVar14 = 1;
      pcVar2 = (code *)swi(0x80);
      (*pcVar2)();
      pbVar6 = (byte *)(extraout_ECX_00 + -1);
      piVar12 = (int *)(extraout_EDX + -1);
      puVar14[1] = uVar11;
      *puVar14 = puVar14 + 1;
      puVar14[-1] = 0x8048641;
      puVar14[-2] = puVar22;
      uVar4 = puVar14[-2];
      *(byte *)(extraout_ECX_00 + 0x20) =
           *(byte *)(extraout_ECX_00 + 0x20) & (byte)((uint)uVar4 >> 8);
      in_AF = 9 < ((byte)uVar4 & 0xf) | in_AF;
      bVar3 = (byte)uVar4 + in_AF * '\x06';
      bVar8 = 0x90 < (bVar3 & 0xf0) | in_AF * (0xf9 < bVar3);
      bVar3 = bVar3 + bVar8 * '`';
      puVar15 = (undefined4 *)CONCAT22((short)((uint)puVar14 >> 0x10),(short)puVar14 + -4);
      puVar21 = (undefined4 *)segment(in_SS,(short)puVar14 + -4);
      *puVar21 = 0x2c6c6b69;
      uVar10 = SUB42(piVar12,0);
      uVar11 = in(uVar10);
      *puVar22 = uVar11;
      puVar22 = (undefined4 *)((int)puVar18 + (uint)bVar26 * -2);
      out(*(byte *)((int)puVar18 + -1),uVar10);
      in_AF = 9 < (bVar3 & 0xf) | in_AF;
      bVar3 = bVar3 + in_AF * -6;
      iVar5 = CONCAT31((int3)((uint)uVar4 >> 8),
                       bVar3 + (0x9f < bVar3 | bVar8 | in_AF * (bVar3 < 6)) * -0x60);
      out(*puVar22,uVar10);
      pbVar19 = (byte *)(iVar5 + 0x31);
      bVar8 = (byte)((uint)piVar12 >> 8);
      *pbVar19 = *pbVar19 ^ bVar8;
      pcVar1 = (char *)(iVar5 + 0x72310ac9);
      *pcVar1 = *pcVar1 + bVar8;
      while( true ) {
        for (; iVar5 = *piVar12, *piVar12 = *piVar12 - (int)pbVar6, !SBORROW4(iVar5,(int)pbVar6);
            piVar12 = (int *)CONCAT22((short)((uint)piVar12 >> 0x10),
                                      CONCAT11((byte)((uint)piVar12 >> 8) | *pbVar6,(char)piVar12)))
        {
        }
        puVar15[-1] = 0x80484d0;
        func_0xffd8ba05();
        pbVar6 = (byte *)(extraout_ECX_01 + -1);
        uVar11 = *puVar15;
        puVar16 = puVar15 + 2;
        puVar15 = puVar15 + 2;
        piVar12 = (int *)CONCAT22((short)((uint)extraout_EDX_00 >> 0x10),
                                  CONCAT11(*(undefined *)(extraout_EDX_00 + 0x4e),
                                           (char)extraout_EDX_00));
        LOCK();
        *(char *)piVar12 = (char)((uint)uVar11 >> 8);
        UNLOCK();
        if (((uint)puVar16 & 0xae8b000) != 0) break;
        *(uint *)((int)piVar12 + 0x4d) =
             *(uint *)((int)piVar12 + 0x4d) ^ (uint)(puVar22 + (uint)bVar26 * -2 + 1);
      }
      if (((uint)puVar16 & 0xae8b000) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      pcVar2 = (code *)swi(3);
      uVar11 = (*pcVar2)();
      return uVar11;
    }
    DAT_08048654 = CONCAT31(DAT_08048654._1_3_,(char)DAT_08048654 + '\x01');
    *(uint **)(&DAT_08049635 + DAT_08048654 * 4) = puVar18;
    bVar8 = (byte)uVar9;
    bVar8 = bVar8 | bVar8 << 4;
    if (DAT_08048668 == 0x34) {
LAB_080483bb:
      bVar8 = bVar8 >> 1;
    }
    else {
      if (DAT_08048668 == 0x36) {
LAB_080483b8:
        bVar8 = bVar8 >> 2;
        goto LAB_080483bb;
      }
      if ((DAT_08048668 | 0x20) == 0x6e) goto LAB_080483bb;
      if ((DAT_08048668 | 0x20) == 0x6d) goto LAB_080483b8;
    }
    DAT_08048644 = bVar8 & 0xf;
    puVar14[-1] = 0x80483cc;
    FUN_080480a5();
    puVar14[-1] = 0x80483d1;
    FUN_080480ba();
    puVar14[-1] = 0x1d;
    pcVar2 = (code *)swi(0x80);
    (*pcVar2)();
    puVar14 = puVar14 + 1;
    puVar22 = puVar21;
  } while( true );
}


