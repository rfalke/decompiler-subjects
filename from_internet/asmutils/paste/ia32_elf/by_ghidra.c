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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  short **ppsVar6;
  short **ppsVar7;
  undefined *puVar8;
  short **ppsVar9;
  short **ppsVar10;
  int iVar11;
  
  ppsVar7 = (short **)&stack0x00000004;
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    iVar11 = 0;
    DAT_080495e5 = 9;
    ppsVar6 = (short **)&stack0x00000008;
    do {
      ppsVar7 = ppsVar6 + 1;
      if (**ppsVar6 == 0x642d) {
        param_2 = param_2 + -1;
        if (param_2 == 0) goto LAB_0804808f;
        DAT_080495e5 = *(undefined *)ppsVar6[1];
      }
      else {
        *ppsVar6 = (short *)0x5;
        pcVar1 = (code *)swi(0x80);
        iVar4 = (*pcVar1)();
        ppsVar9 = ppsVar6 + 2;
        if (iVar4 < 0) goto LAB_080480ae;
        *(int *)((int)&DAT_080485dc + iVar11) = iVar4;
        iVar11 = iVar11 + 4;
      }
      ppsVar7 = ppsVar6 + 2;
      ppsVar10 = ppsVar6 + 2;
      param_2 = param_2 + -1;
      ppsVar6 = ppsVar6 + 2;
    } while (param_2 != 0);
    if (iVar11 != 0) {
      DAT_080495dc = 0;
      iVar4 = 0;
      _DAT_080495e0 = iVar11;
      do {
        puVar2 = ppsVar10;
        if (*(int *)((int)&DAT_080485dc + iVar4) != 0) {
          while( true ) {
            ppsVar10[-1] = (short *)0x3;
            pcVar1 = (code *)swi(0x80);
            iVar5 = (*pcVar1)();
            ppsVar9 = ppsVar10 + 1;
            if (iVar5 < 0) goto LAB_080480ae;
            if (iVar5 == 0) break;
            puVar2 = ppsVar10 + 1;
            if (DAT_080495e4 == '\n') goto LAB_0804811e;
            *ppsVar10 = (short *)0x804810d;
            FUN_08048156();
            ppsVar10 = ppsVar10 + 1;
          }
          _DAT_080495e0 = _DAT_080495e0 + -4;
          if (_DAT_080495e0 == 0) {
            *ppsVar10 = (short *)0x1;
            pcVar1 = (code *)swi(0x80);
            uVar3 = (*pcVar1)();
            iVar11 = DAT_080495dc;
            (&DAT_080481dc)[DAT_080495dc] = uVar3;
            if (iVar11 + 1 == 0x400) {
              ppsVar10[1] = (short *)0x1;
              ppsVar10[1] = (short *)0x4;
              pcVar1 = (code *)swi(0x80);
              (*pcVar1)();
              DAT_080495dc = 0;
              return;
            }
            DAT_080495dc = iVar11 + 1;
            return;
          }
          *(undefined4 *)((int)&DAT_080485dc + iVar4) = 0;
          puVar2 = ppsVar10 + 1;
        }
LAB_0804811e:
        ppsVar10 = (short **)puVar2;
        iVar4 = iVar4 + 4;
        if (iVar4 == iVar11) {
          *(undefined4 *)((int)ppsVar10 + -4) = 0x804813e;
          FUN_08048156();
          *(undefined4 *)((int)ppsVar10 + -4) = 0x8048143;
          FUN_08048172();
          iVar4 = 0;
        }
        else {
          *(undefined4 *)((int)ppsVar10 + -4) = 0x8048135;
          FUN_08048156();
        }
      } while( true );
    }
  }
LAB_0804808f:
  *(undefined4 *)((int)ppsVar7 + -4) = 2;
  *(undefined4 *)((int)ppsVar7 + -4) = 4;
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  puVar8 = (undefined *)((int)ppsVar7 + 4);
  do {
    *(undefined4 *)(puVar8 + -4) = 1;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    ppsVar9 = (short **)(puVar8 + 4);
LAB_080480ae:
    *(undefined4 *)((int)ppsVar9 + -4) = 2;
    *(undefined4 *)((int)ppsVar9 + -4) = 4;
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    puVar8 = (undefined *)((int)ppsVar9 + 4);
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


