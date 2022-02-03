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
  float10 fVar3;
  
  if (param_3 != '\0') {
    fVar3 = (float10)FUN_0804804c((int)ROUND(unaff_EBP[5] - unaff_EBP[4] * param_2));
    *extraout_EDX = (int)ROUND(fVar3 * (float10)(float)extraout_EDX[5] + (float10)unaff_EBP[7]);
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

void entry(void)

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
  undefined2 in_CS;
  byte in_AF;
  undefined8 uVar11;
  undefined4 local_14;
  undefined4 uStack16;
  undefined4 uStack12;
  undefined4 uStack8;
  undefined4 uStack4;
  char *pcVar8;
  
  bVar4 = 0;
  uStack4 = 5;
  pcVar2 = (code *)swi(0x80);
  uStack4 = (*pcVar2)();
  uStack8 = 1;
  uStack12 = 3;
  uStack16 = 0x4b000;
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
  uVar11 = func_0x003e9999(in_CS);
  pbVar10 = (byte *)((ulonglong)uVar11 >> 0x20);
  puVar6 = (undefined *)uVar11;
  *puVar6 = *puVar6;
  cVar3 = (char)uVar11;
  pcVar8 = (char *)((uint)puVar6 & 0xffff0000 |
                   (uint)CONCAT11((char)((ulonglong)uVar11 >> 8) + -0x14,cVar3));
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


