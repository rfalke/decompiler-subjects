typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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
// WARNING: Instruction at (ram,0x0804825a) overlaps instruction at (ram,0x08048259)
// 
// WARNING: Removing unreachable block (ram,0x08048212)

void entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,uint param_12)

{
  byte *pbVar1;
  undefined uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  byte bVar9;
  byte *pbVar8;
  byte extraout_DH;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  byte bVar16;
  int unaff_retaddr;
  undefined uStack00000036;
  
  bVar16 = 0;
  piVar13 = &param_1;
  if (unaff_retaddr != 1) {
    param_2 = 0x30;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    param_3 = 5;
    pcVar3 = (code *)swi(0x80);
    iVar6 = (*pcVar3)();
    if (-1 < iVar6) {
                    // WARNING: Read-only address (ram,0x0804826c) is written
      param_4 = 0x36;
      pcVar3 = (code *)swi(0x80);
      iRam0804826c = iVar6;
      (*pcVar3)();
      param_8 = param_8 & 0xffffeff0 | 0xd;
      param_5 = 0x36;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      param_6 = 0x36;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      param_7 = 0x36;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      puVar15 = &stack0x00000035;
      for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
      }
      uStack00000036 = 0x1c;
      param_12 = param_12 & 0xfffffff5;
      param_8 = 0x36;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      param_9 = 4;
      pcVar3 = (code *)swi(0x80);
      (*pcVar3)();
      param_10 = 1;
      param_9 = 0;
      param_8 = 1;
      param_7 = 0;
      puVar14 = &param_7;
      do {
        do {
          while( true ) {
            puVar12 = puVar14;
            puVar12[-1] = 2;
            pcVar3 = (code *)swi(0x80);
            (*pcVar3)();
            if ((puVar12[2] & 0x10000) != 0) break;
            *puVar12 = 100;
            *puVar12 = 3;
            pcVar3 = (code *)swi(0x80);
            (*pcVar3)();
            puVar12[1] = 4;
            pcVar3 = (code *)swi(0x80);
            (*pcVar3)();
            puVar14 = puVar12 + 3;
          }
          puVar14 = puVar12 + 1;
        } while ((puVar12[4] & 0x10000) != 0);
        *puVar12 = 100;
        *puVar12 = 3;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar12[1] = 1;
        puVar12[1] = 4;
        pcVar3 = (code *)swi(0x80);
        (*pcVar3)();
        puVar14 = puVar12 + 3;
      } while( true );
    }
    param_4 = 4;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    param_5 = 1;
    pcVar3 = (code *)swi(0x80);
    (*pcVar3)();
    piVar13 = &param_7;
  }
  piVar13[-1] = 1;
  piVar13[-1] = 4;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  *piVar13 = 2;
  iVar6 = *piVar13;
  *piVar13 = 1;
  pcVar3 = (code *)swi(0x80);
  (*pcVar3)();
  pbVar8 = (byte *)(iVar6 + 0x65);
  *pbVar8 = *pbVar8 & extraout_DH;
  bVar9 = *pbVar8;
  puVar14 = (undefined4 *)piVar13[3];
  iVar6 = piVar13[4];
  uVar11 = piVar13[6];
  pbVar8 = (byte *)piVar13[8];
  pcVar7 = (char *)piVar13[9];
  uVar10 = (undefined2)piVar13[7];
  uVar2 = in(uVar10);
  *(undefined *)piVar13[2] = uVar2;
  bVar4 = (byte)pcVar7;
  if (bVar9 != 0) {
    *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(iVar6 + 0x20);
    *(char *)(iVar6 + 0x2e) = *(char *)(iVar6 + 0x2e) - (char)((uint)pcVar7 >> 8);
    pbVar1 = (byte *)segment(0x4000,(short)uVar11);
    bVar9 = (byte)((uint)pbVar8 >> 8);
    *pbVar1 = *pbVar1 & bVar9;
    if (*pbVar1 == 0) {
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
      *pcVar7 = *pcVar7 + bVar4;
    }
    else {
      if (*pbVar1 == 0) {
LAB_0804825a_1:
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
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if ((char)*pbVar1 < '\0') {
        *pbVar8 = *pbVar8 ^ bVar9;
        bVar4 = bVar4 | *(byte *)(iVar6 + 0x72);
        pcVar7 = (char *)((uint)pcVar7 & 0xffffff00 | (uint)bVar4);
        out(*puVar14,uVar10);
        out(*(undefined *)(puVar14 + (uint)bVar16 * -2 + 1),uVar10);
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        *pcVar7 = *pcVar7 + bVar4;
        goto LAB_0804825a_1;
      }
    }
    *pcVar7 = *pcVar7 + bVar4;
    *pcVar7 = *pcVar7 + bVar4;
  }
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
  *pcVar7 = *pcVar7 + bVar4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


