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




undefined8 __regparm3 FUN_0804804c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte *unaff_ESI;
  
  uVar2 = 0;
  bVar1 = false;
  bVar3 = *unaff_ESI;
  if (bVar3 != 0x2d) goto LAB_08048065;
  bVar1 = true;
  unaff_ESI = unaff_ESI + 1;
  while( true ) {
    bVar3 = *unaff_ESI;
LAB_08048065:
    if ((bVar3 < 0x30) || (9 < (byte)(bVar3 - 0x30))) break;
    param_2 = (undefined4)((ulonglong)uVar2 * 10 >> 0x20);
    uVar2 = (int)((ulonglong)uVar2 * 10) + (uint)(byte)(bVar3 - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  if (bVar1) {
    uVar2 = -uVar2;
  }
  return CONCAT44(param_2,uVar2);
}



// WARNING: Control flow encountered bad instruction data

void processEntry entry(undefined4 param_1,int param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int extraout_ECX;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined4 *puVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined *puVar12;
  
  iVar16 = param_2 + -1;
  puVar13 = &param_3;
  if (iVar16 != 0) {
    puVar10 = (undefined4 *)&stack0x0000000c;
    puVar11 = &stack0x0000000c;
    uVar5 = (uint)*param_4;
    if (*param_4 == 0x2d) {
      pbVar14 = param_4 + 1;
      bVar3 = *pbVar14;
      if (bVar3 == 0x6c) {
        for (puVar17 = (uint *)&DAT_08048081; *(char *)puVar17 != '\0';
            puVar17 = (uint *)((int)puVar17 + (uVar5 & 0xf) + 2)) {
          uVar5 = *puVar17;
          puVar10[-1] = 1;
          puVar10[-1] = 4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          *puVar10 = 1;
          *puVar10 = 1;
          *puVar10 = 4;
          pcVar2 = (code *)swi(0x80);
          (*pcVar2)();
          puVar10 = puVar10 + 2;
        }
        puVar10[-1] = 1;
        puVar10[-1] = 1;
        puVar10[-1] = 4;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        puVar13 = puVar10 + 1;
      }
      else {
        iVar16 = param_2 + -2;
        puVar13 = (undefined4 *)&stack0x0000000c;
        if (iVar16 != 0) {
          param_4 = (byte *)0x80481bc;
          FUN_0804804c();
          puVar13 = (undefined4 *)&stack0x0000000c;
          puVar12 = &stack0x0000000c;
          uVar6 = (uint)bVar3;
          if (bVar3 != 0) goto LAB_08048213;
          uVar5 = 0;
          while( true ) {
            bVar3 = (byte)uVar5;
            if (*pbVar14 == 0) break;
            *(byte *)(uVar5 + 0x804822c) = *pbVar14;
            if (bVar3 == 5) goto LAB_080481df;
            uVar5 = (uint)(byte)(bVar3 + 1);
            pbVar14 = pbVar14 + 1;
          }
          if (bVar3 != 0) {
LAB_080481df:
            uVar6 = 0;
            iVar9 = -2;
            iVar8 = extraout_ECX;
            do {
              iVar8 = CONCAT31((int3)((uint)iVar8 >> 8),bVar3);
              iVar15 = 0;
              do {
                iVar9 = CONCAT31((int3)((uint)(iVar9 + 2) >> 8),
                                 (char)(iVar9 + 2) + (char)(uVar6 >> 8));
                bVar1 = (&DAT_08048081)[iVar9];
                uVar6 = (uint)bVar1 << 8;
                puVar13 = (undefined4 *)&stack0x0000000c;
                if (bVar1 == 0) goto LAB_08048227;
              } while (bVar1 != bVar3);
              while (uVar6 = CONCAT31((int3)(uVar6 >> 8),*(char *)(iVar15 + 0x804822c)),
                    *(char *)(iVar15 + 0x804822c) == (&DAT_08048083)[iVar15 + iVar9]) {
                iVar15 = iVar15 + 1;
                iVar8 = iVar8 + -1;
                puVar12 = &stack0x0000000c;
                if (iVar8 == 0) goto LAB_08048213;
              }
            } while( true );
          }
        }
      }
    }
    else {
      while( true ) {
        *(undefined4 *)(puVar11 + -4) = 0x8048219;
        uVar6 = FUN_0804804c();
        puVar13 = (undefined4 *)puVar11;
        if ((char)uVar5 == '\0') break;
        *(undefined4 *)(puVar11 + -4) = 0x25;
        pcVar2 = (code *)swi(0x80);
        (*pcVar2)();
        iVar16 = iVar16 + -1;
        puVar13 = (undefined4 *)(puVar11 + 4);
        puVar12 = puVar11 + 4;
        if (iVar16 == 0) break;
LAB_08048213:
        puVar11 = puVar12 + 4;
        uVar5 = uVar6;
      }
    }
  }
LAB_08048227:
  *(undefined4 *)((int)puVar13 + -4) = 1;
  pcVar2 = (code *)swi(0x80);
  pcVar7 = (char *)(*pcVar2)();
  cVar4 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


