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




void __regparm1 FUN_0804804c(undefined param_1_00,int param_1)

{
  int unaff_EBX;
  int unaff_ESI;
  
  *(undefined *)(unaff_EBX * 0x280 + param_1 + unaff_ESI) = param_1_00;
  return;
}



void FUN_0804805c(float param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  int extraout_EDX_00;
  float *unaff_EBP;
  longdouble lVar3;
  
  if (param_3 != '\0') {
    lVar3 = (longdouble)FUN_0804804c((int)ROUND(unaff_EBP[5] - unaff_EBP[4] * param_2));
    *extraout_EDX =
         (int)ROUND(lVar3 * (longdouble)(float)extraout_EDX[5] + (longdouble)unaff_EBP[7]);
    FUN_0804804c();
    fVar1 = unaff_EBP[1];
    fVar2 = *unaff_EBP;
    *(float *)(extraout_EDX_00 + -8) =
         fVar1 * *(float *)(extraout_EDX_00 + 0x10) - fVar2 * *(float *)(extraout_EDX_00 + 0x14);
    FUN_0804805c(fVar1 * *(float *)(extraout_EDX_00 + 0x14) +
                 fVar2 * *(float *)(extraout_EDX_00 + 0x10));
    param_1 = param_1 - unaff_EBP[8];
    FUN_0804805c((unaff_EBP[2] * param_1 - unaff_EBP[3] * param_2) + unaff_EBP[8],
                 unaff_EBP[2] * param_2 + unaff_EBP[3] * param_1,extraout_ECX);
    return;
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void processEntry entry(void)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  char *pcVar7;
  int extraout_ECX;
  int iVar9;
  int extraout_ECX_00;
  byte *pbVar10;
  byte in_AF;
  undefined8 uVar11;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  char *pcVar8;
  
  bVar4 = 0;
  uStack_4 = 5;
  pcVar2 = (code *)swi(0x80);
  uStack_4 = (*pcVar2)();
  uStack_8 = 1;
  uStack_c = 3;
  uStack_10 = 0x4b000;
  local_14 = 0;
  pcVar2 = (code *)swi(0x80);
  puVar6 = (undefined *)(*pcVar2)();
  for (iVar9 = extraout_ECX; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (uint)bVar4 * -2 + 1;
  }
  local_14 = 0x1c;
  FUN_0804805c(0,0);
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  pcVar2 = (code *)swi(0xcc);
  pcVar7 = (char *)(*pcVar2)();
  *pcVar7 = *pcVar7 + (char)pcVar7;
  DAT_0806817a = DAT_0806817a + (char)((uint)&local_14 >> 8);
  uVar11 = func_0x003e9999();
  pbVar10 = (byte *)((ulonglong)uVar11 >> 0x20);
  *(undefined *)uVar11 = *(undefined *)uVar11;
  cVar3 = (char)uVar11;
  pcVar8 = (char *)CONCAT22((short)((ulonglong)uVar11 >> 0x10),
                            CONCAT11((char)((ulonglong)uVar11 >> 8) + (char)&local_14,cVar3));
  pcVar7 = pcVar8 + 0x43e2;
  *pcVar7 = *pcVar7 + cVar3;
  if (extraout_ECX_00 == 1 || *pcVar7 == '\0') {
    *pcVar8 = *pcVar8 + cVar3;
    cVar1 = *pcVar8;
    *pbVar10 = *pbVar10 + cVar3 + cVar1;
    bVar4 = cVar3 + cVar1 | *pbVar10;
    in_AF = 9 < (bVar4 & 0xf) | in_AF;
    bVar5 = bVar4 + in_AF * -6;
    if (!(bool)(0x9f < bVar5 | in_AF * (bVar5 < 6)) && bVar4 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


