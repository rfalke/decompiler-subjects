typedef unsigned char   undefined;

typedef unsigned int    undefined2;
typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};




void __cdecl16far entry(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_ES;
  
  iVar3 = 0x1f1;
  DAT_2000_1b0e = 0x217c;
  DAT_2000_1b0c = 5;
  DAT_2000_1b06 = 0xff;
  DAT_2000_1b04 = 0x2182;
  DAT_2000_1b02 = 0x3c;
  iVar6 = 0x219c;
  iVar5 = 0x11f1;
  DAT_2000_1b08 = unaff_ES;
  DAT_2000_1b0a = unaff_ES;
  do {
    puVar7 = (undefined2 *)0x32;
    puVar8 = (undefined2 *)0x0;
    iVar6 = iVar6 + -1;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    iVar3 = iVar3 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar3);
  DAT_2000_1b00 = 0x1000;
  return;
}


