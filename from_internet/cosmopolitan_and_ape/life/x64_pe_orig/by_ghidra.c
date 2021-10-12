typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef short    wchar_t;
typedef unsigned short    word;
typedef ulong DWORD;

typedef int BOOL;

typedef void * LPCVOID;

typedef uint UINT;

typedef DWORD * LPDWORD;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
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
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
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
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulonglong ULONG_PTR;

typedef union _union_538 _union_538, *P_union_538;

typedef void * HANDLE;

typedef struct _struct_539 _struct_539, *P_struct_539;

typedef void * PVOID;

struct _struct_539 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_538 {
    struct _struct_539 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_538 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef wchar_t WCHAR;

typedef WCHAR * LPWCH;

typedef WCHAR * LPWSTR;

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
    byte e_program[2896]; // Actual DOS program
};




longlong FUN_004010fb(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int unaff_ESI;
  ulonglong unaff_RDI;
  
  bVar3 = 0x27;
  while( true ) {
    unaff_ESI = unaff_ESI + -1;
    uVar2 = (ulonglong)((uint)(unaff_RDI >> (bVar3 & 0x3f)) & 0x1ff);
    if (unaff_ESI == -1) break;
    puVar1 = (ulonglong *)(param_2 + uVar2 * 8);
    if (*puVar1 == 0) {
      uVar2 = *param_1;
      *param_1 = uVar2 - 0x1000;
      *puVar1 = uVar2 - 0x1000 | 3;
    }
    bVar3 = bVar3 - 9;
    param_2 = *puVar1 & 0x3fffffffff000;
  }
  return param_2 + uVar2 * 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401297(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong *puVar7;
  longlong *unaff_R15;
  undefined8 uStack40;
  longlong lStack32;
  
  if ((_DAT_00403000 & 8) == 0) {
    if ((_DAT_00403000 & 0x20) == 0) {
      if ((_DAT_00403000 & 4) == 0) {
        if (*unaff_R15 == 0) {
          lStack32 = 0x2a;
          uStack40 = 0x10;
          pbVar5 = &DAT_00401ef1;
        }
        else {
          lStack32 = 0;
          uStack40 = 1;
          pbVar5 = &DAT_00401eed;
        }
      }
      else {
        lStack32 = 0x22;
        uStack40 = 4;
        pbVar5 = &DAT_00401ef5;
      }
    }
    else {
      lStack32 = 0x30;
      uStack40 = 0x20;
      pbVar5 = &DAT_00401ee9;
    }
  }
  else {
    lStack32 = 0x45;
    uStack40 = 8;
    pbVar5 = &DAT_00401ef8;
  }
  _DAT_00403000 = uStack40;
  DAT_00403008 = &DAT_0040199d + lStack32;
  for (puVar7 = &DAT_00403018; puVar7 < &DAT_00403030; puVar7 = puVar7 + 1) {
    bVar3 = 0;
    uVar4 = 0;
    pbVar6 = pbVar5;
    do {
      pbVar5 = pbVar6 + 1;
      bVar1 = *pbVar6;
      bVar2 = bVar3 & 0x3f;
      bVar3 = bVar3 + 7;
      uVar4 = uVar4 | (ulonglong)(bVar1 & 0x7f) << bVar2;
      pbVar6 = pbVar5;
    } while ((char)bVar1 < '\0');
    if ((bVar1 & 0x40) != 0) {
      uVar4 = uVar4 | -1 << (bVar3 & 0x3f);
    }
    if (*puVar7 != 0) {
      uVar4 = *puVar7;
    }
    *puVar7 = uVar4;
  }
  return;
}



undefined8 FUN_0040134d(void)

{
  return 0x2a;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code **ppcVar4;
  HANDLE hFile;
  ushort *puVar5;
  longlong lVar6;
  DWORD *pDVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  DWORD *pDVar10;
  DWORD **ppDVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  DWORD *pDVar15;
  DWORD *pDVar16;
  uint local_e04c;
  DWORD *local_e040 [513];
  longlong local_d038 [2560];
  DWORD local_8038 [8191];
  DWORD local_3a [2];
  
  local_e040[0] = (DWORD *)0x0;
  iVar2 = SetDefaultDllDirectories(0x800);
  if (iVar2 == 0) {
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,"nodll\n",6,local_8038,(LPOVERLAPPED)0x0);
                    // WARNING: Subroutine does not return
    ExitProcess(1);
  }
  _DAT_00403000 = 4;
  GetCommandLineW();
  puVar5 = (ushort *)GetEnvironmentStringsW();
  FUN_0040165c((longlong)local_d038,0x3fff,0x200);
  lVar6 = 0;
  while( true ) {
    cVar1 = *(char *)(local_d038[0] + lVar6);
    if (cVar1 == '\0') break;
    if (cVar1 == '\\') {
      *(char *)(local_d038[0] + lVar6) = '/';
    }
    lVar6 = lVar6 + 1;
  }
  if (*puVar5 < 0xd800) {
    local_e04c = (uint)*puVar5;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_004019fa();
  }
  pDVar10 = local_8038;
  pDVar15 = local_3a;
  uVar13 = 0;
  puVar12 = puVar5 + uVar3;
  pDVar16 = pDVar10;
  do {
    if (local_e04c == 0) {
      if (pDVar10 < pDVar15) {
        *(undefined *)pDVar10 = 0;
        pDVar10 = (DWORD *)((longlong)pDVar10 + 1);
      }
      uVar8 = (longlong)pDVar10 - (longlong)pDVar16;
      ppDVar11 = local_e040 + 1;
      if (0x7ffe < uVar8) {
        uVar8 = 0x7ffe;
      }
      if (0x1ff < uVar13) {
        uVar13 = 0x1ff;
      }
      *(undefined *)((longlong)local_8038 + uVar8) = 0;
      local_e040[uVar13 + 1] = (DWORD *)0x0;
      FreeEnvironmentStringsW((LPWCH)puVar5);
      FUN_00401297();
      _DAT_0040335c = _DAT_0040335c | 1;
      puVar9 = &DAT_00402008;
      for (ppcVar4 = (code **)&DAT_00402008; ppcVar4 != (code **)&DAT_00402008;
          ppcVar4 = ppcVar4 + 1) {
        (**ppcVar4)();
      }
      FUN_0040134d();
      FUN_00401907(puVar9,ppDVar11);
      FUN_00401aa1();
      _DAT_00403358 = (undefined4)DAT_00403018;
      return 0xffffffffffffffff;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 < 0x200) {
      pDVar7 = (DWORD *)0x0;
      if (pDVar10 < pDVar15) {
        pDVar7 = pDVar10;
      }
      local_e040[uVar13] = pDVar7;
    }
    do {
      uVar14 = (ulonglong)local_e04c;
      uVar8 = SEXT48((int)local_e04c);
      pDVar7 = pDVar10;
      if (0x7f < local_e04c) {
        uVar8 = FUN_00401a09();
        pDVar7 = pDVar10;
      }
      do {
        iVar2 = (int)uVar14;
        pDVar10 = pDVar7;
        if (pDVar15 <= pDVar7) break;
        pDVar10 = (DWORD *)((longlong)pDVar7 + 1);
        *(char *)pDVar7 = (char)uVar8;
        uVar8 = uVar8 >> 8;
        pDVar7 = pDVar10;
      } while (uVar8 != 0);
      if (*puVar12 < 0xd800) {
        local_e04c = (uint)*puVar12;
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_004019fa();
      }
      puVar12 = puVar12 + uVar3;
    } while (iVar2 != 0);
    uVar8 = (longlong)pDVar10 - (longlong)pDVar16;
    if (0x7ffd < uVar8) {
      uVar8 = 0x7ffd;
    }
    *(undefined *)((longlong)local_8038 + uVar8) = 0;
  } while( true );
}



void FUN_00401601(void)

{
  uint uVar1;
  ushort **unaff_RDI;
  
  if (**unaff_RDI < 0xd800) {
    *(uint *)(unaff_RDI + 3) = (uint)**unaff_RDI;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_004019fa();
  }
  *unaff_RDI = *unaff_RDI + uVar1;
  return;
}



void FUN_0040162c(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(unaff_RDI + 0x10);
  uVar2 = SEXT48((int)unaff_ESI);
  if (0x7f < unaff_ESI) {
    uVar2 = FUN_00401a09();
  }
  do {
    puVar1 = *(undefined **)(unaff_RDI + 8);
    if (puVar3 <= puVar1) {
      return;
    }
    *(undefined **)(unaff_RDI + 8) = puVar1 + 1;
    *puVar1 = (char)uVar2;
    uVar2 = uVar2 >> 8;
  } while (uVar2 != 0);
  return;
}



ulonglong FUN_0040165c(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint local_40;
  
  uVar1 = unaff_RSI + param_2;
  uVar3 = 0;
  uVar8 = unaff_RSI;
  FUN_00401601();
  do {
    if (local_40 == 0) {
LAB_004016c5:
      FUN_0040162c();
      if (param_2 != 0) {
        uVar1 = uVar8 - unaff_RSI;
        if (param_2 - 1U < uVar8 - unaff_RSI) {
          uVar1 = param_2 - 1U;
        }
        *(undefined *)(unaff_RSI + uVar1) = 0;
      }
      if (param_3 != 0) {
        uVar1 = param_3 - 1;
        if (uVar3 < param_3 - 1) {
          uVar1 = uVar3;
        }
        *(undefined8 *)(param_1 + uVar1 * 8) = 0;
      }
      return uVar3 & 0xffffffff;
    }
    while( true ) {
      if (local_40 == 0) goto LAB_004016c5;
      if ((0x20 < local_40) || ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) == 0)) break;
      FUN_00401601();
    }
    uVar3 = uVar3 + 1;
    if (uVar3 < param_3) {
      uVar5 = uVar8;
      if (uVar1 <= uVar8) {
        uVar5 = 0;
      }
      *(ulonglong *)(param_1 + -8 + uVar3 * 8) = uVar5;
    }
    bVar7 = false;
LAB_00401736:
    while (local_40 != 0) {
      if ((bVar7) || (0x20 < local_40)) {
        if ((local_40 != 0x22) && (local_40 != 0x5c)) goto LAB_00401834;
        uVar5 = 0;
        while (local_40 == 0x5c) {
          uVar5 = uVar5 + 1;
          FUN_00401601();
        }
        lVar4 = 0;
        while (local_40 == 0x22) {
          FUN_00401601();
          lVar4 = lVar4 + 1;
        }
        uVar2 = uVar5;
        if (lVar4 != 0) {
          for (; 1 < uVar2; uVar2 = uVar2 - 2) {
            FUN_0040162c();
          }
          if ((uVar5 & 1) != 0) goto code_r0x004017db;
          goto LAB_004017f1;
        }
        while (uVar5 = uVar5 - 1, uVar5 != 0xffffffffffffffff) {
          FUN_0040162c();
        }
      }
      else {
        if ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) != 0) break;
LAB_00401834:
        FUN_0040162c();
        FUN_00401601();
      }
    }
    FUN_0040162c();
  } while( true );
code_r0x004017db:
  FUN_0040162c();
  lVar4 = lVar4 + -1;
  if (lVar4 != 0) {
LAB_004017f1:
    uVar2 = lVar4 - (ulonglong)!bVar7;
    uVar5 = uVar2 + 1;
    for (uVar6 = 3; uVar6 <= uVar5; uVar6 = uVar6 + 3) {
      FUN_0040162c();
    }
    bVar7 = uVar2 % 3 == 0;
  }
  goto LAB_00401736;
}



// WARNING: Removing unreachable block (ram,0x00401981)

undefined8 FUN_00401907(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong unaff_RDI;
  
  puVar1 = DAT_00403040;
  puVar3 = DAT_00403040;
joined_r0x00401921:
  do {
    DAT_00403040 = puVar3;
    if (puVar1 == (uint *)0x0) {
      return param_2;
    }
    uVar4 = *puVar1;
    do {
      do {
        if (uVar4 == 0) {
          puVar1 = *(uint **)(puVar1 + 2);
          puVar3 = puVar1;
          if (unaff_RDI != 0) {
            puVar3 = DAT_00403040;
          }
          goto joined_r0x00401921;
        }
        uVar2 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        uVar5 = ~(1 << ((byte)uVar2 & 0x1f));
        uVar4 = uVar4 & uVar5;
      } while ((unaff_RDI != 0) && (*(longlong *)(puVar1 + (ulonglong)uVar2 * 6 + 8) != unaff_RDI));
      *puVar1 = *puVar1 & uVar5;
    } while (*(code **)(puVar1 + (ulonglong)uVar2 * 6 + 4) == (code *)0x0);
    (**(code **)(puVar1 + (ulonglong)uVar2 * 6 + 4))();
    puVar1 = DAT_00403040;
    puVar3 = DAT_00403040;
  } while( true );
}



void FUN_004019fa(void)

{
  FUN_00401a3c();
  return;
}



ulonglong FUN_00401a09(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  uint unaff_EDI;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = (ulonglong)unaff_EDI;
  uVar3 = 0;
  if (0x7f < unaff_EDI) {
    uVar5 = 0x1f;
    if (unaff_EDI != 0) {
      for (; unaff_EDI >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar5 = *(uint *)("KernelBase.dll" + (ulonglong)uVar5 * 2 + 1);
    uVar7 = uVar6;
    do {
      uVar6 = uVar7 >> 6;
      uVar2 = uVar3 | ((byte)uVar7 & 0x3f | 0x80);
      uVar3 = uVar2 << 8;
      bVar4 = (char)uVar5 - 1;
      uVar1 = uVar5 & 0xffffff00;
      uVar5 = uVar1 | bVar4;
      uVar7 = uVar6;
    } while (bVar4 != 0);
    uVar3 = CONCAT71((int7)uVar2,(char)(uVar1 >> 8));
  }
  return uVar3 | uVar6;
}



ulonglong FUN_00401a3c(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar5;
  uint *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = (int)uVar4;
    uVar5 = (ulonglong)(iVar3 + 1);
    uVar1 = *(ushort *)(unaff_RDI + uVar4 * 2);
    uVar4 = uVar5;
  } while ((uVar1 & 0xfc00) == 0xdc00);
  if ((uVar1 & 0xfc00) == 0xd800) {
    uVar2 = *(ushort *)(unaff_RDI + uVar5 * 2);
    if ((uVar2 & 0xfc00) == 0xdc00) {
      *unaff_RSI = (uint)uVar1 * 0x400 + -0x35fdc00 + (uint)uVar2;
      uVar5 = (ulonglong)(iVar3 + 2);
    }
    else {
      *unaff_RSI = 0xfffd;
      uVar5 = 0xffffffff;
    }
  }
  else {
    *unaff_RSI = (uint)uVar1;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401aa1(void)

{
  byte unaff_DIL;
  
  _DAT_0040335c = _DAT_0040335c | 4;
  if ((DAT_00403000 & 4) != 0) {
                    // WARNING: Subroutine does not return
    ExitProcess((uint)unaff_DIL);
  }
  syscall();
  InterruptDescriptorTableRegister(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


