typedef unsigned char   undefined;

typedef pointer32 ImageBaseOffset32;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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

typedef struct HINSTANCE__ * HINSTANCE;

typedef HINSTANCE HMODULE;

typedef int (* FARPROC)(void);

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
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
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




// WARNING: Instruction at (ram,0x00407153) overlaps instruction at (ram,0x00407152)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  char cVar1;
  undefined uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  FARPROC *ppFVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  
  uVar14 = 0xffffffff;
  uVar11 = 0;
  puVar18 = (undefined4 *)&DAT_00401000;
  puVar15 = &DAT_004071b9;
  puVar16 = puVar18;
  do {
    while( true ) {
      bVar21 = CARRY4(uVar11,uVar11);
      uVar11 = uVar11 * 2;
      if (uVar11 == 0) {
        uVar11 = *puVar15;
        bVar22 = puVar15 < (uint *)0xfffffffc;
        puVar15 = puVar15 + 1;
        bVar21 = CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)bVar22);
        uVar11 = uVar11 * 2 + (uint)bVar22;
      }
      if (!bVar21) break;
      uVar2 = *(undefined *)puVar15;
      puVar15 = (uint *)((int)puVar15 + 1);
      *(undefined *)puVar16 = uVar2;
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    uVar6 = 1;
    do {
      do {
        bVar21 = CARRY4(uVar11,uVar11);
        uVar12 = uVar11 * 2;
        if (uVar12 == 0) {
          uVar11 = *puVar15;
          bVar22 = puVar15 < (uint *)0xfffffffc;
          puVar15 = puVar15 + 1;
          bVar21 = CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)bVar22);
          uVar12 = uVar11 * 2 + (uint)bVar22;
        }
        uVar6 = uVar6 * 2 + (uint)bVar21;
        uVar11 = uVar12 * 2;
      } while (!CARRY4(uVar12,uVar12) && uVar11 != 0);
      if (uVar11 != 0) break;
      uVar12 = *puVar15;
      bVar21 = puVar15 < (uint *)0xfffffffc;
      puVar15 = puVar15 + 1;
      uVar11 = uVar12 * 2 + (uint)bVar21;
    } while (!CARRY4(uVar12,uVar12) && !CARRY4(uVar12 * 2,(uint)bVar21));
    if (2 < uVar6) {
      uVar2 = *(undefined *)puVar15;
      puVar15 = (uint *)((int)puVar15 + 1);
      uVar14 = CONCAT31((int3)uVar6 + -3,uVar2) ^ 0xffffffff;
      if (uVar14 == 0) {
        piVar17 = (int *)((int)puVar16 - puVar16[-1]);
        iVar8 = 0x29;
        do {
          cVar3 = *(char *)puVar18;
          puVar18 = (undefined4 *)((int)puVar18 + 1);
          while (((byte)(cVar3 + 0x18U) < 2 && (*(char *)puVar18 == '\x01'))) {
            uVar5 = *puVar18;
            cVar3 = *(char *)(puVar18 + 1);
            *puVar18 = &DAT_00401000 +
                       (CONCAT31(CONCAT21((ushort)uVar5 >> 8,(char)((uint)uVar5 >> 0x10)),
                                 (char)((uint)uVar5 >> 0x18)) - (int)puVar18);
            puVar18 = (undefined4 *)((int)puVar18 + 5);
            iVar8 = iVar8 + -1;
            if (iVar8 == 0) {
              do {
                if (*piVar17 == 0) {
                  puVar18 = (undefined4 *)&DAT_00400ffc;
                  piVar17 = piVar17 + 1;
                  while( true ) {
                    bVar4 = *(byte *)piVar17;
                    uVar11 = (uint)bVar4;
                    piVar20 = (int *)((int)piVar17 + 1);
                    if (uVar11 == 0) break;
                    if (0xef < bVar4) {
                      uVar11 = CONCAT12(bVar4,*(ushort *)piVar20) & 0xff0fffff;
                      piVar20 = (int *)((int)piVar17 + 3);
                    }
                    puVar18 = (undefined4 *)((int)puVar18 + uVar11);
                    uVar5 = *puVar18;
                    *puVar18 = &DAT_00401000 +
                               CONCAT31(CONCAT21(CONCAT11((char)uVar5,(char)((uint)uVar5 >> 8)),
                                                 (char)((uint)uVar5 >> 0x10)),
                                        (char)((uint)uVar5 >> 0x18));
                    piVar17 = piVar20;
                  }
                    // WARNING: Bad instruction - Truncating control flow here
                  halt_baddata();
                }
                ppFVar13 = (FARPROC *)(&DAT_00401000 + piVar17[1]);
                piVar20 = piVar17 + 2;
                hModule = LoadLibraryA((LPCSTR)((int)&DWORD_00406000 + *piVar17));
                while( true ) {
                  cVar3 = *(char *)piVar20;
                  piVar17 = (int *)((int)piVar20 + 1);
                  if (cVar3 == '\0') break;
                  if (cVar3 < '\0') {
                    piVar17 = (int *)(uint)*(ushort *)piVar17;
                    piVar20 = (int *)((int)piVar20 + 3);
                  }
                  else {
                    piVar9 = piVar17;
                    piVar19 = piVar17;
                    do {
                      piVar20 = piVar19;
                      if (piVar9 == (int *)0x0) break;
                      piVar9 = (int *)((int)piVar9 + -1);
                      piVar20 = (int *)((int)piVar19 + 1);
                      cVar1 = *(char *)piVar19;
                      piVar19 = piVar20;
                    } while ((char)(cVar3 + -1) != cVar1);
                  }
                  pFVar7 = GetProcAddress(hModule,(LPCSTR)piVar17);
                  *ppFVar13 = pFVar7;
                  ppFVar13 = ppFVar13 + 1;
                }
              } while( true );
            }
          }
        } while( true );
      }
    }
    bVar21 = CARRY4(uVar11,uVar11);
    uVar11 = uVar11 * 2;
    if (uVar11 == 0) {
      uVar11 = *puVar15;
      bVar22 = puVar15 < (uint *)0xfffffffc;
      puVar15 = puVar15 + 1;
      bVar21 = CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)bVar22);
      uVar11 = uVar11 * 2 + (uint)bVar22;
    }
    bVar22 = CARRY4(uVar11,uVar11);
    uVar11 = uVar11 * 2;
    if (uVar11 == 0) {
      uVar11 = *puVar15;
      bVar23 = puVar15 < (uint *)0xfffffffc;
      puVar15 = puVar15 + 1;
      bVar22 = CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)bVar23);
      uVar11 = uVar11 * 2 + (uint)bVar23;
    }
    iVar8 = (uint)bVar21 * 2 + (uint)bVar22;
    if (iVar8 == 0) {
      iVar8 = 1;
      do {
        do {
          bVar21 = CARRY4(uVar11,uVar11);
          uVar6 = uVar11 * 2;
          if (uVar6 == 0) {
            uVar11 = *puVar15;
            bVar22 = puVar15 < (uint *)0xfffffffc;
            puVar15 = puVar15 + 1;
            bVar21 = CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)bVar22);
            uVar6 = uVar11 * 2 + (uint)bVar22;
          }
          iVar8 = iVar8 * 2 + (uint)bVar21;
          uVar11 = uVar6 * 2;
        } while (!CARRY4(uVar6,uVar6) && uVar11 != 0);
        if (uVar11 != 0) break;
        uVar6 = *puVar15;
        bVar21 = puVar15 < (uint *)0xfffffffc;
        puVar15 = puVar15 + 1;
        uVar11 = uVar6 * 2 + (uint)bVar21;
      } while (!CARRY4(uVar6,uVar6) && !CARRY4(uVar6 * 2,(uint)bVar21));
      iVar8 = iVar8 + 2;
    }
    uVar6 = iVar8 + 1 + (uint)(uVar14 < 0xfffff300);
    puVar10 = (undefined4 *)((int)puVar16 + uVar14);
    if ((int)uVar14 < -3) {
      do {
        uVar5 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar16 = uVar5;
        puVar16 = puVar16 + 1;
        bVar21 = 3 < uVar6;
        uVar6 = uVar6 - 4;
      } while (bVar21 && uVar6 != 0);
      puVar16 = (undefined4 *)((int)puVar16 + uVar6);
    }
    else {
      do {
        uVar2 = *(undefined *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        *(undefined *)puVar16 = uVar2;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  } while( true );
}



// WARNING: Instruction at (ram,0x0040721b) overlaps instruction at (ram,0x0040721a)
// 

ulonglong __fastcall FUN_004071dd(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *in_EAX;
  char *pcVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_ESI;
  int iVar6;
  undefined4 *unaff_EDI;
  undefined4 *puVar7;
  int unaff_FS_OFFSET;
  char in_CF;
  bool bVar8;
  undefined4 *puStack_18;
  
  do {
    param_2 = (undefined4 *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *in_EAX + in_CF);
    puStack_18 = (undefined4 *)&DAT_00401000;
    uVar2 = *(undefined4 *)(unaff_FS_OFFSET + -0x222400eb);
    iVar6 = unaff_ESI;
    while( true ) {
      iVar5 = 0x19258906;
      *(byte *)(unaff_EBX + 0xc702f58) = *(byte *)(unaff_EBX + 0xc702f58) & 6;
      pcVar4 = in_EAX;
      puVar7 = unaff_EDI;
      uVar3 = uRam0cc48335;
      if ((iVar6 == -1) ||
         (pcVar4 = (char *)((uint)in_EAX & 0xffffff24), puVar7 = puStack_18, uVar3 = uVar2,
         ((uint)in_EAX & 0x24) == 0)) goto LAB_00407221;
      unaff_ESI = iVar6 * 3;
      iVar5 = *(int *)(unaff_EBX + iVar6 * 0xc);
      in_EAX = pcVar4 + -1;
      if ((int)pcVar4 < 1) break;
      bVar8 = (char)in_EAX != '\0';
      iVar6 = unaff_ESI;
      if (!bVar8) {
        pcVar4 = in_EAX;
        if (bVar8) {
          *(int *)((int)unaff_EDI + -0x4cab0001) = *(int *)((int)unaff_EDI + -0x4cab0001) + 1;
          puVar7 = unaff_EDI;
          uVar3 = uRam0cc48335;
        }
        else {
          puVar7 = (undefined4 *)0xb354ffff;
          uVar3 = uRam0cc48335;
        }
LAB_00407221:
        uRam0cc48335 = uVar3;
        piVar1 = (int *)((int)puVar7 + iVar5 * 4 + 5);
        *piVar1 = *piVar1 << 1;
        return CONCAT44(param_2,pcVar4) ^ 0x5f0cc483;
      }
    }
    if (in_EAX != (char *)0x0) {
      *unaff_EDI = 0xfffffffe;
      in_EAX = &DAT_77ffb903;
      param_2 = unaff_EDI;
    }
    out((short)param_2,in_EAX);
    in_CF = CARRY1((byte)unaff_EBX,(byte)in_EAX);
    unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX + (byte)in_EAX);
  } while( true );
}


