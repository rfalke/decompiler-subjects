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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined uVar3;
  int iVar4;
  short **ppsVar5;
  short **ppsVar6;
  undefined *puVar7;
  short **ppsVar8;
  short **ppsVar9;
  int iVar10;
  int iVar11;
  int unaff_retaddr;
  
  ppsVar6 = (short **)&stack0x00000004;
  iVar10 = unaff_retaddr + -1;
  if (iVar10 != 0) {
    iVar11 = 0;
    DAT_080495e5 = 9;
    ppsVar5 = (short **)&stack0x00000008;
    do {
      ppsVar6 = ppsVar5 + 1;
      if (**ppsVar5 == 0x642d) {
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) goto LAB_0804808f;
        DAT_080495e5 = *(undefined *)ppsVar5[1];
      }
      else {
        *ppsVar5 = (short *)0x5;
        pcVar1 = (code *)swi(0x80);
        iVar4 = (*pcVar1)();
        ppsVar8 = ppsVar5 + 2;
        if (iVar4 < 0) goto LAB_080480ae;
        *(int *)((int)&DAT_080485dc + iVar11) = iVar4;
        iVar11 = iVar11 + 4;
      }
      ppsVar6 = ppsVar5 + 2;
      ppsVar9 = ppsVar5 + 2;
      iVar10 = iVar10 + -1;
      ppsVar5 = ppsVar5 + 2;
    } while (iVar10 != 0);
    if (iVar11 != 0) {
      DAT_080495dc = 0;
      iVar10 = 0;
      _DAT_080495e0 = iVar11;
      do {
        puVar2 = ppsVar9;
        if (*(int *)((int)&DAT_080485dc + iVar10) != 0) {
          while( true ) {
            ppsVar9[-1] = (short *)0x3;
            pcVar1 = (code *)swi(0x80);
            iVar4 = (*pcVar1)();
            ppsVar8 = ppsVar9 + 1;
            if (iVar4 < 0) goto LAB_080480ae;
            if (iVar4 == 0) break;
            puVar2 = ppsVar9 + 1;
            if (DAT_080495e4 == '\n') goto LAB_0804811e;
            *ppsVar9 = (short *)0x804810d;
            FUN_08048156();
            ppsVar9 = ppsVar9 + 1;
          }
          _DAT_080495e0 = _DAT_080495e0 + -4;
          if (_DAT_080495e0 == 0) {
            *ppsVar9 = (short *)0x1;
            pcVar1 = (code *)swi(0x80);
            uVar3 = (*pcVar1)();
            iVar10 = DAT_080495dc;
            (&DAT_080481dc)[DAT_080495dc] = uVar3;
            if (iVar10 + 1 == 0x400) {
              ppsVar9[1] = (short *)0x1;
              ppsVar9[1] = (short *)0x4;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              DAT_080495dc = 0;
              return;
            }
            DAT_080495dc = iVar10 + 1;
            return;
          }
          *(undefined4 *)((int)&DAT_080485dc + iVar10) = 0;
          puVar2 = ppsVar9 + 1;
        }
LAB_0804811e:
        ppsVar9 = (short **)puVar2;
        iVar10 = iVar10 + 4;
        if (iVar10 == iVar11) {
          *(undefined4 *)((int)ppsVar9 + -4) = 0x804813e;
          FUN_08048156();
          *(undefined4 *)((int)ppsVar9 + -4) = 0x8048143;
          FUN_08048172();
          iVar10 = 0;
        }
        else {
          *(undefined4 *)((int)ppsVar9 + -4) = 0x8048135;
          FUN_08048156();
        }
      } while( true );
    }
  }
LAB_0804808f:
  *(undefined4 *)((int)ppsVar6 + -4) = 2;
  *(undefined4 *)((int)ppsVar6 + -4) = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar7 = (undefined *)((int)ppsVar6 + 4);
  do {
    *(undefined4 *)(puVar7 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppsVar8 = (short **)(puVar7 + 4);
LAB_080480ae:
    *(undefined4 *)((int)ppsVar8 + -4) = 2;
    *(undefined4 *)((int)ppsVar8 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar7 = (undefined *)((int)ppsVar8 + 4);
  } while( true );
}



void __regparm3 FUN_08048156(undefined param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = DAT_080495dc;
  (&DAT_080481dc)[DAT_080495dc] = param_1;
  if (iVar2 + 1 != 0x400) {
    DAT_080495dc = iVar2 + 1;
    return;
  }
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  DAT_080495dc = 0;
  return;
}



void FUN_08048172(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  DAT_080495dc = 0;
  return;
}


