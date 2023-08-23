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




void processEntry entry(void)

{
  char cVar1;
  code *pcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  byte bVar13;
  char **ppcVar5;
  
  bVar13 = 0;
  ppcVar4 = (char **)&stack0x00000008;
  do {
    pcVar9 = *ppcVar4;
    ppcVar6 = ppcVar4 + 1;
    ppcVar7 = ppcVar4 + 1;
    ppcVar5 = ppcVar4 + 1;
    ppcVar4 = ppcVar4 + 1;
    if (pcVar9 == (char *)0x0) goto LAB_0804809f;
    cVar1 = *pcVar9;
    pcVar10 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    if (cVar1 != '-') goto LAB_080480cf;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                pcVar9 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar9;
                if (cVar1 != 'a') break;
                DAT_080482e6 = DAT_080482e6 + '\x01';
              }
              if (cVar1 != 's') break;
              DAT_080482e7 = DAT_080482e7 + '\x01';
            }
            if (cVar1 != 't') break;
            DAT_080482e5 = DAT_080482e5 + '\x01';
          }
          if (cVar1 != 'k') break;
          DAT_080482e8 = DAT_080482e8 + '\x01';
        }
        if (cVar1 != 'd') break;
        DAT_080482e9 = DAT_080482e9 + '\x01';
      }
      ppcVar3 = ppcVar5;
      if (cVar1 == '-') {
        do {
          while( true ) {
            ppcVar8 = ppcVar3;
            pcVar9 = *ppcVar8;
            ppcVar6 = ppcVar8 + 1;
            if (pcVar9 == (char *)0x0) break;
            pcVar10 = &DAT_0804833c;
            do {
              cVar1 = *pcVar9;
              pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
              *pcVar10 = cVar1;
              pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
              pcVar10 = pcVar11;
            } while (cVar1 != '\0');
            bVar12 = (int)(pcVar11 + -1) < 0;
            *ppcVar8 = (char *)0x80480e9;
            FUN_08048102();
            ppcVar3 = ppcVar8 + 1;
            if ((!bVar12) && (ppcVar3 = ppcVar8 + 1, DAT_080482e5 == '\0')) {
              *ppcVar8 = (char *)0x80480fb;
              FUN_0804829f();
              *ppcVar8 = (char *)0x8048100;
              FUN_080482c1();
              ppcVar3 = ppcVar8 + 1;
            }
          }
LAB_0804809f:
          if (DAT_080482e5 != '\0') {
            *(undefined4 *)((int)ppcVar6 + -4) = 0x80480ad;
            FUN_0804829f();
            *(undefined1 **)((int)ppcVar6 + -4) = &DAT_0804833b;
            *(undefined4 *)((int)ppcVar6 + -8) = 0x80480b9;
            FUN_0804829f();
            **(undefined **)((int)ppcVar6 + -4) = 10;
            *(undefined4 *)((int)ppcVar6 + -4) = 1;
            *(undefined4 *)((int)ppcVar6 + -4) = 4;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            ppcVar6 = (char **)((int)ppcVar6 + 4);
          }
          *(undefined4 *)((int)ppcVar6 + -4) = 1;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          ppcVar7 = (char **)((int)ppcVar6 + 4);
LAB_080480cf:
          *(char **)((int)ppcVar7 + -4) = pcVar9 + -1;
          ppcVar3 = (char **)((int)ppcVar7 + -4);
        } while( true );
      }
    } while (cVar1 != '\0');
  } while( true );
}



uint FUN_08048102(void)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  short *psVar11;
  undefined *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  byte bVar15;
  uint uStack_18;
  char *pcStack_14;
  uint auStack_10 [3];
  
  bVar15 = 0;
  pcVar2 = (code *)swi(0x80);
  uVar5 = (*pcVar2)();
  if (-1 < (int)uVar5) {
    if ((DAT_080482e9 & 1) == 0) {
      uVar5 = (uint)(((ulonglong)DAT_08048309 * 0x200) / (ulonglong)(DAT_08048305 >> 2));
    }
    else {
      uVar5 = (DAT_08048301 + 0x1ffU) / 0x200;
    }
    if ((DAT_080482e8 != '\0') && (uVar5 != 0)) {
      uVar9 = 0x800;
      if ((DAT_080482e9 & 1) == 0) {
        uVar9 = DAT_08048305;
      }
      uVar3 = (ulonglong)uVar5;
      uVar5 = (uint)((uVar3 * uVar9) / 0x1000);
      if ((int)((uVar3 * uVar9) % 0x1000) != 0) {
        uVar5 = uVar5 + 1;
      }
    }
    if ((DAT_080482e7 < 2) && ((DAT_080482f5 & 0xf000) == 0x4000)) {
      auStack_10[2] = 5;
      pcVar2 = (code *)swi(0x80);
      iVar6 = (*pcVar2)();
      if (-1 < iVar6) {
        *unaff_EDI = 0x2f;
        pcVar12 = unaff_EDI + 1;
        auStack_10[2] = 0x80481cb;
        FUN_0804825f();
        auStack_10[2] = extraout_ECX;
        puVar4 = auStack_10 + 2;
        do {
          puVar10 = puVar4;
          *puVar10 = *puVar10;
          pcVar2 = (code *)swi(0x80);
          iVar7 = (*pcVar2)();
          if ((iVar7 < 0) || (iVar8 = extraout_ECX_00, iVar7 == 0)) {
            *puVar10 = 6;
            pcVar2 = (code *)swi(0x80);
            (*pcVar2)();
            puVar10[2] = 0x8048254;
            iVar6 = FUN_08048298();
            *(undefined *)puVar10[3] = 0;
            return iVar6 + uVar5;
          }
          do {
            *puVar10 = iVar7;
            puVar10[-1] = iVar6;
            puVar10[-2] = iVar8;
            puVar10[-3] = (uint)pcVar12;
            psVar11 = (short *)(iVar8 + 10);
            if (((*(char *)psVar11 != '\0') && (*psVar11 != 0x2e)) &&
               ((*psVar11 != 0x2e2e || (*(char *)(iVar8 + 0xc) != '\0')))) {
              do {
                cVar1 = *(char *)psVar11;
                pcVar13 = pcVar12 + (uint)bVar15 * -2 + 1;
                *pcVar12 = cVar1;
                psVar11 = (short *)((int)psVar11 + (uint)bVar15 * -2 + 1);
                pcVar12 = pcVar13;
              } while (cVar1 != '\0');
              bVar14 = (int)(pcVar13 + -1) < 0;
              puVar10[-4] = 0x8048209;
              iVar7 = FUN_08048102();
              if (((!bVar14) && (uVar5 = uVar5 + iVar7, DAT_080482e5 == '\0')) &&
                 ((DAT_080482e6 != '\0' || ((-1 < iVar7 && (iVar6 == 0x4000)))))) {
                puVar10[-4] = 0x8048230;
                FUN_0804829f();
                puVar10[-4] = 0x8048235;
                FUN_080482c1();
              }
            }
            pcVar12 = (char *)puVar10[-3];
            iVar6 = puVar10[-1];
            uVar9 = (uint)*(ushort *)(puVar10[-2] + 8);
            puVar4 = puVar10 + 1;
            if (uVar9 == 0) break;
            iVar8 = puVar10[-2] + uVar9;
            iVar7 = *puVar10 - uVar9;
            puVar4 = puVar10 + 1;
          } while (uVar9 <= *puVar10);
        } while( true );
      }
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_0804825f(undefined4 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined8 uVar4;
  
  uVar3 = DAT_080482dd + param_2;
  uVar2 = _DAT_080482e1;
  if (_DAT_080482e1 < uVar3) {
    pcVar1 = (code *)swi(0x80);
    uVar4 = (*pcVar1)();
    param_2 = (int)((ulonglong)uVar4 >> 0x20);
    uVar3 = extraout_ECX;
    uVar2 = extraout_ECX;
    if ((int)uVar4 < 0) {
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      DAT_080482dd = extraout_ECX_00;
      return;
    }
  }
  _DAT_080482e1 = uVar2;
  DAT_080482dd = uVar3;
  *(uint *)(uVar3 - 4) = uVar3;
  *(uint *)(uVar3 - param_2) = uVar3 - param_2;
  return;
}



void FUN_08048298(void)

{
  undefined4 in_ECX;
  
  DAT_080482dd = in_ECX;
  return;
}



void __regparm3 FUN_0804829f(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  DAT_0804833b = 9;
  pcVar2 = &DAT_0804833a;
  do {
    uVar1 = param_1 / 10;
    *pcVar2 = (char)(param_1 % 10) + '0';
    param_1 = uVar1;
    pcVar2 = pcVar2 + -1;
  } while (uVar1 != 0);
  return;
}



void FUN_080482c1(void)

{
  code *pcVar1;
  char *in_ECX;
  char *pcVar2;
  
  do {
    pcVar2 = in_ECX;
    in_ECX = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  *pcVar2 = '\n';
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  *pcVar2 = '\0';
  return;
}


