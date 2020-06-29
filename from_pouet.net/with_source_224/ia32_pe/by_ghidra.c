typedef unsigned char   undefined;

typedef unsigned int    dword;
typedef unsigned short    word;
typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
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
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
};




// WARNING: Control flow encountered bad instruction data

void entry(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(code *)0x7c801d7b)("gdi32");
  uVar3 = 0;
  uVar1 = (*(code *)0x7e4186c7)(0);
  while (uVar2 = 0, (short)uVar3 != 3000) {
    do {
      (*(code *)0x77f1b83b)(uVar1,uVar2,uVar3,uVar3 ^ uVar2);
      uVar2 = uVar2 + 1;
    } while ((short)uVar2 != 4000);
    uVar3 = uVar3 + 1;
  }
  iRam7e41869d = iRam7e41869d + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


