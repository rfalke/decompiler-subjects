typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef char CHAR;

typedef CHAR * LPCSTR;

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
    byte e_program[64]; // Actual DOS program
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef int (* FARPROC)(void);

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HICON__ * HICON;

typedef HINSTANCE HMODULE;

typedef uint UINT;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_MEM_NOT_CACHED=67108864
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};




// WARNING: Instruction at (ram,0x0041d3d0) overlaps instruction at (ram,0x0041d3cf)
// 

ulonglong __fastcall
FUN_0041d3b7(int param_1,int param_2,undefined param_3,undefined4 param_4,undefined param_5,
            undefined4 param_6)

{
  uint uVar1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint in_EAX;
  byte *pbVar6;
  uint *puVar7;
  int unaff_EBX;
  char *unaff_EBP;
  undefined *unaff_ESI;
  bool bVar8;
  uint uVar2;
  
  out(*unaff_ESI,(short)param_2);
  bVar5 = (byte)in_EAX;
  if (unaff_EBX == 1) {
    pbVar6 = (byte *)(param_1 + 0x75d15d12);
    bVar4 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar5;
    puVar7 = (uint *)(in_EAX + 0xcf93ed96);
    uVar1 = *puVar7;
    uVar2 = *puVar7;
    *puVar7 = uVar2 + in_EAX + (uint)CARRY1(bVar4,bVar5);
    *(uint *)(unaff_ESI + 1) =
         (*(int *)(unaff_ESI + 1) - in_EAX) -
         (uint)(CARRY4(uVar1,in_EAX) || CARRY4(uVar2 + in_EAX,(uint)CARRY1(bVar4,bVar5)));
  }
  *unaff_EBP = (*unaff_EBP - (char)param_1) - CARRY1((byte)((uint)param_1 >> 8),bVar5);
  bVar8 = (byte)((uint)unaff_EBP >> 8) < *(byte *)(param_2 + -0x68d33d37);
  puVar7 = (uint *)(param_2 + -1);
  pbVar6 = (byte *)in((short)puVar7);
  bVar5 = *pbVar6;
  bVar4 = *pbVar6 + (byte)pbVar6;
  *pbVar6 = bVar4 + bVar8;
  uVar3 = (uint)(CARRY1(bVar5,(byte)pbVar6) || CARRY1(bVar4,bVar8));
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *puVar7 = uVar2 + 0x1175d15d + uVar3;
  unaff_ESI[0x19cf93ee] =
       unaff_ESI[0x19cf93ee] + '\x06' + (0xee8a2ea2 < uVar1 || CARRY4(uVar2 + 0x1175d15d,uVar3));
  return CONCAT44((uint)puVar7 & 0xffffff00 | (uint)(byte)((char)puVar7 + *pbVar6),pbVar6) | 0x76;
}



// WARNING: Control flow encountered bad instruction data

void entry(void)

{
  char cVar1;
  undefined uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  FARPROC *ppFVar12;
  uint uVar13;
  uint *puVar14;
  UINT unaff_EDI;
  undefined4 *puVar15;
  int *lpProcName;
  int *piVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  
  puVar14 = &DAT_0041d000;
  puVar15 = (undefined4 *)&DAT_00401000;
  uVar13 = 0xffffffff;
  do {
    uVar10 = *puVar14;
    bVar18 = puVar14 < (uint *)0xfffffffc;
    puVar14 = puVar14 + 1;
    bVar19 = CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar18);
    uVar10 = uVar10 * 2 + (uint)bVar18;
    do {
      if (bVar19) {
        uVar2 = *(undefined *)puVar14;
        puVar14 = (uint *)((int)puVar14 + 1);
        *(undefined *)puVar15 = uVar2;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      else {
        uVar5 = 1;
        do {
          do {
            bVar18 = CARRY4(uVar10,uVar10);
            uVar11 = uVar10 * 2;
            if (uVar11 == 0) {
              uVar10 = *puVar14;
              bVar19 = puVar14 < (uint *)0xfffffffc;
              puVar14 = puVar14 + 1;
              bVar18 = CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar19);
              uVar11 = uVar10 * 2 + (uint)bVar19;
            }
            uVar5 = uVar5 * 2 + (uint)bVar18;
            uVar10 = uVar11 * 2;
          } while (!CARRY4(uVar11,uVar11));
          if (uVar10 != 0) break;
          uVar11 = *puVar14;
          bVar18 = puVar14 < (uint *)0xfffffffc;
          puVar14 = puVar14 + 1;
          uVar10 = uVar11 * 2 + (uint)bVar18;
        } while (!CARRY4(uVar11,uVar11) && !CARRY4(uVar11 * 2,(uint)bVar18));
        if (2 < uVar5) {
          uVar2 = *(undefined *)puVar14;
          puVar14 = (uint *)((int)puVar14 + 1);
          uVar13 = CONCAT31((int3)uVar5 + -3,uVar2) ^ 0xffffffff;
          if (uVar13 == 0) {
            puVar14 = (uint *)&DAT_00401000;
            iVar7 = 0x19;
            do {
              cVar3 = *(char *)puVar14;
              puVar14 = (uint *)((int)puVar14 + 1);
              while (((byte)(cVar3 + 0x18U) < 2 && (*(char *)puVar14 == '\0'))) {
                uVar13 = *puVar14;
                cVar3 = *(char *)(puVar14 + 1);
                *puVar14 = (uint)(&DAT_00401000 +
                                 (((uint)(CONCAT21((short)(uVar13 >> 8),(char)(uVar13 >> 0x10)) &
                                         0xffff) << 8 | uVar13 >> 0x18) - (int)puVar14));
                puVar14 = (uint *)((int)puVar14 + 5);
                iVar7 = iVar7 + -1;
                if (iVar7 == 0) {
                  lpProcName = &DAT_0041c000;
                  do {
                    if (*lpProcName == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
                      halt_baddata();
                    }
                    ppFVar12 = (FARPROC *)(&DAT_00401000 + lpProcName[1]);
                    piVar17 = lpProcName + 2;
                    hModule = LoadLibraryA((LPCSTR)((int)&DWORD_0041e000 + *lpProcName));
                    while( true ) {
                      cVar3 = *(char *)piVar17;
                      lpProcName = (int *)((int)piVar17 + 1);
                      if (cVar3 == '\0') break;
                      piVar8 = lpProcName;
                      piVar16 = lpProcName;
                      do {
                        piVar17 = piVar16;
                        if (piVar8 == (int *)0x0) break;
                        piVar8 = (int *)((int)piVar8 + -1);
                        piVar17 = (int *)((int)piVar16 + 1);
                        cVar1 = *(char *)piVar16;
                        piVar16 = piVar17;
                      } while ((char)(cVar3 + -1) != cVar1);
                      pFVar6 = GetProcAddress(hModule,(LPCSTR)lpProcName);
                      if (pFVar6 == (FARPROC)0x0) {
                    // WARNING: Subroutine does not return
                        ExitProcess(unaff_EDI);
                      }
                      *ppFVar12 = pFVar6;
                      ppFVar12 = ppFVar12 + 1;
                    }
                  } while( true );
                }
              }
            } while( true );
          }
        }
        bVar18 = CARRY4(uVar10,uVar10);
        uVar10 = uVar10 * 2;
        if (uVar10 == 0) {
          uVar10 = *puVar14;
          bVar19 = puVar14 < (uint *)0xfffffffc;
          puVar14 = puVar14 + 1;
          bVar18 = CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar19);
          uVar10 = uVar10 * 2 + (uint)bVar19;
        }
        bVar19 = CARRY4(uVar10,uVar10);
        uVar10 = uVar10 * 2;
        if (uVar10 == 0) {
          uVar10 = *puVar14;
          bVar20 = puVar14 < (uint *)0xfffffffc;
          puVar14 = puVar14 + 1;
          bVar19 = CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar20);
          uVar10 = uVar10 * 2 + (uint)bVar20;
        }
        iVar7 = (uint)bVar18 * 2 + (uint)bVar19;
        if (iVar7 == 0) {
          iVar7 = 1;
          do {
            do {
              bVar18 = CARRY4(uVar10,uVar10);
              uVar5 = uVar10 * 2;
              if (uVar5 == 0) {
                uVar10 = *puVar14;
                bVar19 = puVar14 < (uint *)0xfffffffc;
                puVar14 = puVar14 + 1;
                bVar18 = CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar19);
                uVar5 = uVar10 * 2 + (uint)bVar19;
              }
              iVar7 = iVar7 * 2 + (uint)bVar18;
              uVar10 = uVar5 * 2;
            } while (!CARRY4(uVar5,uVar5));
            if (uVar10 != 0) break;
            uVar5 = *puVar14;
            bVar18 = puVar14 < (uint *)0xfffffffc;
            puVar14 = puVar14 + 1;
            uVar10 = uVar5 * 2 + (uint)bVar18;
          } while (!CARRY4(uVar5,uVar5) && !CARRY4(uVar5 * 2,(uint)bVar18));
          iVar7 = iVar7 + 2;
        }
        uVar5 = iVar7 + 1 + (uint)(uVar13 < 0xfffff300);
        puVar9 = (undefined4 *)((int)puVar15 + uVar13);
        if (uVar13 < 0xfffffffd) {
          do {
            uVar4 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar15 = uVar4;
            puVar15 = puVar15 + 1;
            bVar18 = 3 < uVar5;
            uVar5 = uVar5 - 4;
          } while (bVar18 && uVar5 != 0);
          puVar15 = (undefined4 *)((int)puVar15 + uVar5);
        }
        else {
          do {
            uVar2 = *(undefined *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            *(undefined *)puVar15 = uVar2;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      bVar19 = CARRY4(uVar10,uVar10);
      uVar10 = uVar10 * 2;
    } while (uVar10 != 0);
  } while( true );
}


