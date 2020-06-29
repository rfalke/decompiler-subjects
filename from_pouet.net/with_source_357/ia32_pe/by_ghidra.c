typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
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
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_TYPE_NO_PAD=8
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
  uint uVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  FARPROC *ppFVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *lpProcName;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  
  uVar13 = 0xffffffff;
  uVar9 = 0;
  puVar15 = (uint *)&DAT_00401000;
  puVar14 = &DAT_004071b9;
  lpProcName = puVar15;
  do {
    while( true ) {
      bVar16 = CARRY4(uVar9,uVar9);
      uVar9 = uVar9 * 2;
      if (uVar9 == 0) {
        uVar9 = *puVar14;
        bVar17 = puVar14 < (uint *)0xfffffffc;
        puVar14 = puVar14 + 1;
        bVar16 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)bVar17);
        uVar9 = uVar9 * 2 + (uint)bVar17;
      }
      if (!bVar16) break;
      uVar2 = *(undefined *)puVar14;
      puVar14 = (uint *)((int)puVar14 + 1);
      *(undefined *)lpProcName = uVar2;
      lpProcName = (uint *)((int)lpProcName + 1);
    }
    uVar5 = 1;
    do {
      do {
        bVar16 = CARRY4(uVar9,uVar9);
        uVar10 = uVar9 * 2;
        if (uVar10 == 0) {
          uVar9 = *puVar14;
          bVar17 = puVar14 < (uint *)0xfffffffc;
          puVar14 = puVar14 + 1;
          bVar16 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)bVar17);
          uVar10 = uVar9 * 2 + (uint)bVar17;
        }
        uVar5 = uVar5 * 2 + (uint)bVar16;
        uVar9 = uVar10 * 2;
      } while (!CARRY4(uVar10,uVar10) && uVar9 != 0);
      if (uVar9 != 0) break;
      uVar10 = *puVar14;
      bVar16 = puVar14 < (uint *)0xfffffffc;
      puVar14 = puVar14 + 1;
      uVar9 = uVar10 * 2 + (uint)bVar16;
    } while (!CARRY4(uVar10,uVar10) && !CARRY4(uVar10 * 2,(uint)bVar16));
    if (2 < uVar5) {
      uVar2 = *(undefined *)puVar14;
      puVar14 = (uint *)((int)puVar14 + 1);
      uVar13 = CONCAT31((int3)uVar5 + -3,uVar2) ^ 0xffffffff;
      if (uVar13 == 0) {
        lpProcName = (uint *)((int)lpProcName - lpProcName[-1]);
        iVar7 = 0x29;
        do {
          cVar3 = *(char *)puVar15;
          puVar15 = (uint *)((int)puVar15 + 1);
          while (((byte)(cVar3 + 0x18U) < 2 && (*(char *)puVar15 == '\x01'))) {
            uVar9 = *puVar15;
            cVar3 = *(char *)(puVar15 + 1);
            *puVar15 = (int)&DAT_00401000 +
                       (((uint)(CONCAT21((short)(uVar9 >> 8),(char)(uVar9 >> 0x10)) & 0xffff) << 8 |
                        uVar9 >> 0x18) - (int)puVar15);
            puVar15 = (uint *)((int)puVar15 + 5);
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) {
              do {
                if (*lpProcName == 0) {
                  piVar12 = (int *)&DAT_00400ffc;
                  puVar15 = lpProcName + 1;
                  while( true ) {
                    bVar4 = *(byte *)puVar15;
                    uVar9 = (uint)bVar4;
                    lpProcName = (uint *)((int)puVar15 + 1);
                    if (bVar4 == 0) break;
                    if (0xef < bVar4) {
                      uVar9 = (uint)CONCAT12(bVar4,*(ushort *)lpProcName) & 0xff0fffff;
                      lpProcName = (uint *)((int)puVar15 + 3);
                    }
                    piVar12 = (int *)((int)piVar12 + uVar9);
                    iVar7 = *piVar12;
                    uVar9 = (uint)CONCAT21((short)((uint)iVar7 >> 0x10),(char)iVar7) << 8;
                    *piVar12 = (int)&DAT_00401000 +
                               ((uint)CONCAT21((ushort)uVar9 | (ushort)((uint)iVar7 >> 8) & 0xff,
                                               (char)(uVar9 >> 0x10)) << 8 | uVar9 >> 0x18);
                    puVar15 = lpProcName;
                  }
                    // WARNING: Bad instruction - Truncating control flow here
                  halt_baddata();
                }
                ppFVar11 = (FARPROC *)((int)&DAT_00401000 + lpProcName[1]);
                puVar15 = lpProcName + 2;
                hModule = LoadLibraryA((LPCSTR)((int)&DWORD_00406000 + *lpProcName));
                while( true ) {
                  cVar3 = *(char *)puVar15;
                  lpProcName = (uint *)((int)puVar15 + 1);
                  if (cVar3 == '\0') break;
                  if (cVar3 < '\0') {
                    lpProcName = (uint *)(uint)*(ushort *)lpProcName;
                    puVar15 = (uint *)((int)puVar15 + 3);
                  }
                  else {
                    puVar14 = lpProcName;
                    puVar8 = lpProcName;
                    do {
                      puVar15 = puVar8;
                      if (puVar14 == (uint *)0x0) break;
                      puVar14 = (uint *)((int)puVar14 + -1);
                      puVar15 = (uint *)((int)puVar8 + 1);
                      cVar1 = *(char *)puVar8;
                      puVar8 = puVar15;
                    } while ((char)(cVar3 + -1) != cVar1);
                  }
                  pFVar6 = GetProcAddress(hModule,(LPCSTR)lpProcName);
                  *ppFVar11 = pFVar6;
                  ppFVar11 = ppFVar11 + 1;
                }
              } while( true );
            }
          }
        } while( true );
      }
    }
    bVar16 = CARRY4(uVar9,uVar9);
    uVar9 = uVar9 * 2;
    if (uVar9 == 0) {
      uVar9 = *puVar14;
      bVar17 = puVar14 < (uint *)0xfffffffc;
      puVar14 = puVar14 + 1;
      bVar16 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)bVar17);
      uVar9 = uVar9 * 2 + (uint)bVar17;
    }
    bVar17 = CARRY4(uVar9,uVar9);
    uVar9 = uVar9 * 2;
    if (uVar9 == 0) {
      uVar9 = *puVar14;
      bVar18 = puVar14 < (uint *)0xfffffffc;
      puVar14 = puVar14 + 1;
      bVar17 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)bVar18);
      uVar9 = uVar9 * 2 + (uint)bVar18;
    }
    iVar7 = (uint)bVar16 * 2 + (uint)bVar17;
    if (iVar7 == 0) {
      iVar7 = 1;
      do {
        do {
          bVar16 = CARRY4(uVar9,uVar9);
          uVar5 = uVar9 * 2;
          if (uVar5 == 0) {
            uVar9 = *puVar14;
            bVar17 = puVar14 < (uint *)0xfffffffc;
            puVar14 = puVar14 + 1;
            bVar16 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)bVar17);
            uVar5 = uVar9 * 2 + (uint)bVar17;
          }
          iVar7 = iVar7 * 2 + (uint)bVar16;
          uVar9 = uVar5 * 2;
        } while (!CARRY4(uVar5,uVar5) && uVar9 != 0);
        if (uVar9 != 0) break;
        uVar5 = *puVar14;
        bVar16 = puVar14 < (uint *)0xfffffffc;
        puVar14 = puVar14 + 1;
        uVar9 = uVar5 * 2 + (uint)bVar16;
      } while (!CARRY4(uVar5,uVar5) && !CARRY4(uVar5 * 2,(uint)bVar16));
      iVar7 = iVar7 + 2;
    }
    uVar5 = iVar7 + 1 + (uint)(uVar13 < 0xfffff300);
    puVar8 = (uint *)((int)lpProcName + uVar13);
    if ((int)uVar13 < -3) {
      do {
        uVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        *lpProcName = uVar10;
        lpProcName = lpProcName + 1;
        bVar16 = 3 < uVar5;
        uVar5 = uVar5 - 4;
      } while (bVar16 && uVar5 != 0);
      lpProcName = (uint *)((int)lpProcName + uVar5);
    }
    else {
      do {
        uVar2 = *(undefined *)puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        *(undefined *)lpProcName = uVar2;
        lpProcName = (uint *)((int)lpProcName + 1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  } while( true );
}



// WARNING: Instruction at (ram,0x0040721b) overlaps instruction at (ram,0x0040721a)
// 
// WARNING: Control flow encountered bad instruction data

ulonglong FUN_004071dd(void)

{
  int *piVar1;
  undefined4 uVar2;
  char *in_EAX;
  char *pcVar3;
  int iVar4;
  undefined4 *in_EDX;
  uint unaff_EBX;
  int unaff_ESI;
  int iVar5;
  undefined2 *unaff_EDI;
  int in_FS_OFFSET;
  bool in_CF;
  bool bVar6;
  undefined2 local_e;
  undefined2 uStack12;
  
  do {
    uStack12 = SUB42(unaff_EDI,0);
    in_EDX = (undefined4 *)
             ((uint)in_EDX & 0xffffff00 | (uint)(byte)((char)in_EDX + *in_EAX + in_CF));
    local_e = (undefined2)((uint)in_EAX >> 0x10);
    uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x222400eb);
    iVar5 = unaff_ESI;
    while( true ) {
      iVar4 = 0x19258906;
      *(byte *)(unaff_EBX + 0xc702f58) = *(byte *)(unaff_EBX + 0xc702f58) & 6;
      pcVar3 = in_EAX;
      if (iVar5 == -1) goto LAB_00407221;
      pcVar3 = (char *)((uint)in_EAX & 0xffffff24);
      if (((uint)in_EAX & 0x24) == 0) {
        unaff_EDI = &DAT_00401000;
        uRam0cc48335 = uVar2;
        goto LAB_00407221;
      }
      unaff_ESI = iVar5 * 3;
      iVar4 = *(int *)(unaff_EBX + iVar5 * 0xc);
      in_EAX = pcVar3 + -1;
      if ((int)pcVar3 < 1) break;
      bVar6 = (char)in_EAX != '\0';
      iVar5 = unaff_ESI;
      if (!bVar6) {
        if (bVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        unaff_EDI = (undefined2 *)0xb354ffff;
        pcVar3 = in_EAX;
LAB_00407221:
        piVar1 = (int *)((int)unaff_EDI + iVar4 * 4 + 5);
        *piVar1 = *piVar1 << 1;
        return CONCAT44(in_EDX,pcVar3) ^ 0x5f0cc483;
      }
    }
    if (in_EAX != (char *)0x0) {
      in_EDX = (undefined4 *)CONCAT22(uStack12,local_e);
      *in_EDX = 0xfffe0040;
      in_EAX = &DAT_77ffb903;
    }
    out((short)in_EDX,in_EAX);
    in_CF = CARRY1((byte)unaff_EBX,(byte)in_EAX);
    unaff_EBX = unaff_EBX & 0xffffff00 | (uint)(byte)((byte)unaff_EBX + (byte)in_EAX);
  } while( true );
}


