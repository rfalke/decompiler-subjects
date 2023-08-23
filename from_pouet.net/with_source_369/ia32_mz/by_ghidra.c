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

typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};




void __cdecl16far entry(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = 0x105;
  iVar3 = 0x1105;
  DAT_1000_739c = unaff_ES;
  DAT_1000_739e = unaff_DS;
  do {
    iVar5 = iVar3;
    puVar6 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)0x0;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    iVar4 = iVar4 + -1;
    iVar3 = iVar5 + -1;
  } while (iVar4 != 0);
  DAT_1000_739a = 0x1000;
  DAT_1000_7398 = iVar5 + 0x722;
  DAT_1000_7396 = 7;
  return;
}


