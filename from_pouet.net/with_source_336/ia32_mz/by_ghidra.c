typedef unsigned char   undefined;

typedef unsigned char    undefined1;
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
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 unaff_ES;
  
  puVar4 = (undefined *)(DAT_1000_000c + -1);
  DAT_1000_061c = DAT_1000_000a + 0x1000;
  puVar5 = puVar4;
  DAT_1000_061e = unaff_ES;
  for (iVar3 = DAT_1000_000c; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  DAT_1000_061a = 0x2b;
  return;
}


