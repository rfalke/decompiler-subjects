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




// WARNING: Instruction at (ram,0x0041d434) overlaps instruction at (ram,0x0041d432)
// 
// WARNING: Removing unreachable block (ram,0x0041d434)
// WARNING: Removing unreachable block (ram,0x0041d56b)
// WARNING: Removing unreachable block (ram,0x0041d596)
// WARNING: Removing unreachable block (ram,0x0041d4b6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong __fastcall
FUN_0041d3ec(uint param_1,char param_2,undefined param_3,undefined param_4,undefined param_5,
            undefined param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined param_10,uint param_11)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined uVar8;
  byte bVar9;
  byte bVar10;
  uint in_EAX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint unaff_EBX;
  uint unaff_EBP;
  undefined2 *unaff_ESI;
  uint *unaff_EDI;
  undefined2 in_CS;
  byte in_AF;
  bool bVar14;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 in_FPUControlWord;
  ulonglong uVar15;
  byte in_stack_7544d00e;
  uint local_5f;
  undefined auStack24 [12];
  undefined4 uStack12;
  byte bStack8;
  ushort uStack7;
  undefined local_5;
  undefined uStack4;
  undefined uStack3;
  undefined uStack2;
  undefined uStack1;
  
  uStack4 = (undefined)unaff_EBP;
  uStack3 = (undefined)(unaff_EBP >> 8);
  uStack2 = (undefined)(unaff_EBP >> 0x10);
  uStack1 = (undefined)(unaff_EBP >> 0x18);
  while( true ) {
    bVar14 = param_11 == 0xffffffb7;
    if (param_11 < 0xffffffb8) {
      bStack8 = 0x7c;
      uStack7 = 0x41d3;
      local_5 = 0;
      func_0xe8ccea64();
      if (!bVar14) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return uVar15;
      }
      uVar8 = in(0xb);
      return CONCAT44(extraout_EDX,CONCAT31(0x927b08,uVar8) + 0x601517e4);
    }
    uVar11 = in_EAX | 0xc18ffef;
    iVar4 = (uint)((int)uVar11 < 0) * 0x80;
    bStack8 = (byte)iVar4 | (uVar11 == 0) * '@' | (in_AF & 1) * '\x10' |
              ((POPCOUNT(uVar11 & 0xff) & 1U) == 0) * '\x04';
    uStack7 = (ushort)((uint)(in_NT & 1) * 0x4000 >> 8) | (ushort)((uint)(in_IF & 1) * 0x200 >> 8) |
              (ushort)((uint)(in_TF & 1) * 0x100 >> 8) | (ushort)((uint)iVar4 >> 8) |
              (ushort)(in_ID & 1) * 0x2000 | (ushort)(in_VIP & 1) * 0x1000 |
              (ushort)(in_VIF & 1) * 0x800 | (ushort)(in_AC & 1) * 0x400;
    local_5 = 0;
    bVar9 = (byte)(char *)(uVar11 + 0x2a5fa337);
    bVar14 = CARRY1(in_stack_7544d00e,bVar9);
    bVar10 = in_stack_7544d00e + bVar9;
    in_stack_7544d00e = bVar10 + (uVar11 < 0xd5a05cc9);
    puVar2 = (uint *)((int)unaff_ESI + -0x7b4cc1b1);
    uVar5 = (uint)(bVar14 || CARRY1(bVar10,uVar11 < 0xd5a05cc9));
    uVar12 = *puVar2;
    uVar13 = *puVar2;
    *puVar2 = uVar13 + (int)unaff_ESI + uVar5;
    piVar1 = (int *)(uVar11 + 0x2a5fa336);
    *piVar1 = (*piVar1 - (int)unaff_EDI) -
              (uint)(CARRY4(uVar12,(uint)unaff_ESI) || CARRY4(uVar13 + (int)unaff_ESI,uVar5));
    if (*piVar1 == 0) {
      *(byte *)unaff_ESI = *(byte *)unaff_ESI | param_2 + *(char *)(uVar11 + 0x2a5fa337);
    }
    else {
      unaff_EDI = (uint *)0xf3c0322f;
      bRamf3c0322e = bVar9;
    }
    param_2 = -0x5d;
    unaff_EBX = unaff_EBX & 0xffffff00 ^ (uint)&uStack4;
    in_EAX = 0x1af99f7a;
    uStack4 = (undefined)in_CS;
    uStack3 = (undefined)((ushort)in_CS >> 8);
    *(char *)unaff_EDI = '\0';
    if (*(char *)unaff_EDI != '\0') break;
    param_1 = param_1 & 0xffff00ff;
    *(byte *)(unaff_EBX + 0xec8b55c3) = *(byte *)(unaff_EBX + 0xec8b55c3) & 0xa3;
    unaff_ESI = (undefined2 *)((int)unaff_ESI + -1);
  }
  *(char *)((int)unaff_EDI + 9) = *(char *)((int)unaff_EDI + 9) + (char)(unaff_EBX >> 8);
  pbVar7 = (byte *)(unaff_EBP & 0xff000000 | (uint)CONCAT12(uStack2,in_CS));
  uVar13 = (param_1 & 0xffff0000 | (uint)CONCAT11(199,(char)param_1)) ^ _DAT_841fb1e4;
  pbVar3 = (byte *)(uVar13 * 4 + -0x273953e4);
  bVar10 = *pbVar3;
  bVar14 = CARRY1(*pbVar3 + 0x96,local_5f < 0xffffff84);
  *pbVar3 = *pbVar3 + 0x96 + (local_5f < 0xffffff84);
  uVar12 = in(0x80a4);
  if ((0x69 < bVar10 || bVar14) || *pbVar3 == 0) {
    bVar10 = ((char)uVar12 + 'u') - (0x69 < bVar10 || bVar14);
    pbVar3 = (byte *)((uVar12 & 0xffffff00 |
                      (uint)(byte)((byte)(bVar10 + 0x23) >> 1 | (0xdc < bVar10) << 7)) * 9 +
                     -0x243b035d);
    *pbVar3 = *pbVar3 ^ (byte)((uVar12 & 0xffffff00) >> 8);
    if (uVar13 != 0) {
      uStack12 = 0x41d4e3;
      func_0x887257f9();
      *(uint *)((int)unaff_ESI + -0x64dc8bfd) =
           *(uint *)((int)unaff_ESI + -0x64dc8bfd) | extraout_EDX_00;
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return uVar15;
    }
    *unaff_ESI = in_FPUControlWord;
    *pbVar7 = *pbVar7 | (byte)((uint)CONCAT12(uStack2,in_CS) >> 8);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *unaff_EDI = uVar12;
  *(int *)(unaff_ESI + 0x26083bde) = -*(int *)(unaff_ESI + 0x26083bde);
  uVar15 = (longlong)(int)uVar12 * (longlong)(int)auStack24;
  return uVar15 & 0xffffffff00000000 |
         (ulonglong)
         CONCAT22((short)(uVar15 >> 0x10),CONCAT11((char)(uVar15 >> 8) + (char)uVar13,(char)uVar15))
  ;
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


