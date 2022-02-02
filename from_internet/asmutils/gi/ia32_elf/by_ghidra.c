typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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

void entry(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  puVar8 = &param_3;
  if (param_2 != (char *)0x0) {
    pcVar1 = (code *)swi(0x80);
    (*pcVar1)();
    pcVar5 = "";
    do {
      cVar3 = *param_2;
      *pcVar5 = cVar3;
      param_2 = param_2 + (uint)bVar11 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar11 * -2 + 1;
    } while (cVar3 != '\0');
    param_3 = 0x36;
    pcVar1 = (code *)swi(0x80);
    iVar4 = (*pcVar1)();
    puVar8 = (undefined4 *)&stack0x00000014;
    if (-1 < iVar4) {
      puVar9 = (undefined *)0x80480d2;
      puVar6 = &param_4;
      param_4 = 0x80480d2;
      iVar4 = 4;
      do {
        *(int *)((int)puVar6 + -4) = iVar4;
        *(undefined4 *)((int)puVar6 + -8) = 10;
        iVar4 = 1;
        *(uint *)((int)puVar6 + -8) =
             CONCAT31((int3)(0U % (ulonglong)*(uint *)((int)puVar6 + -8) >> 8),
                      (char)(0U % (ulonglong)*(uint *)((int)puVar6 + -8)) + '0');
        puVar2 = (undefined4 *)((int)puVar6 + -8);
        do {
          puVar7 = puVar2;
          puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
          *puVar9 = (char)*puVar7;
          iVar4 = iVar4 + -1;
          puVar2 = puVar7 + 1;
          puVar9 = puVar10;
        } while (iVar4 != 0);
        iVar4 = puVar7[1];
        puVar6 = puVar7 + 2;
        puVar9 = puVar10 + (uint)bVar11 * -2 + 1;
        *puVar10 = 0x2e;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      puVar9[-1] = 10;
      puVar7[2] = 1;
      puVar7[2] = 4;
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      puVar8 = puVar7 + 4;
    }
  }
  *(undefined4 *)((int)puVar8 + -4) = 1;
  pcVar1 = (code *)swi(0x80);
  pcVar5 = (char *)(*pcVar1)();
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


