typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
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

void entry(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint extraout_ECX;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined4 *puVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int unaff_retaddr;
  undefined *puVar12;
  
  iVar16 = unaff_retaddr + -1;
  puVar13 = &param_1;
  if (iVar16 != 0) {
    puVar10 = (undefined4 *)&stack0x0000000c;
    puVar11 = &stack0x0000000c;
    uVar5 = (uint)*param_2;
    if (*param_2 == 0x2d) {
      pbVar14 = param_2 + 1;
      bVar3 = *pbVar14;
      uVar6 = (uint)bVar3;
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
        iVar16 = unaff_retaddr + -2;
        puVar13 = (undefined4 *)&stack0x0000000c;
        if (iVar16 != 0) {
          param_2 = (byte *)0x80481bc;
          FUN_0804804c();
          puVar13 = (undefined4 *)&stack0x0000000c;
          puVar12 = &stack0x0000000c;
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
            uVar9 = 0xfffffffe;
            uVar8 = extraout_ECX;
            do {
              uVar8 = uVar8 & 0xffffff00 | uVar5;
              iVar15 = 0;
              do {
                uVar9 = uVar9 + 2 & 0xffffff00 |
                        (uint)(byte)((char)(uVar9 + 2) + (char)(uVar6 >> 8));
                bVar1 = (&DAT_08048081)[uVar9];
                uVar6 = (uint)bVar1 << 8;
                puVar13 = (undefined4 *)&stack0x0000000c;
                if (bVar1 == 0) goto LAB_08048227;
              } while (bVar1 != bVar3);
              while (uVar6 = uVar6 & 0xffffff00 | (uint)*(byte *)(iVar15 + 0x804822c),
                    *(byte *)(iVar15 + 0x804822c) == (&DAT_08048083)[iVar15 + uVar9]) {
                iVar15 = iVar15 + 1;
                uVar8 = uVar8 - 1;
                puVar12 = &stack0x0000000c;
                if (uVar8 == 0) goto LAB_08048213;
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


