typedef unsigned char   undefined;

typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
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
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef ushort WORD;

typedef ulong DWORD;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int BOOL;

typedef void * LPCVOID;

typedef void * LPVOID;

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

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef union _union_552 _union_552, *P_union_552;

typedef ulonglong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef struct _struct_553 _struct_553, *P_struct_553;

struct _struct_553 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_552 {
    DWORD dwOemId;
    struct _struct_553 s;
};

struct _SYSTEM_INFO {
    union _union_552 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_540 _union_540, *P_union_540;

typedef void * HANDLE;

typedef struct _struct_541 _struct_541, *P_struct_541;

typedef void * PVOID;

struct _struct_541 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_540 {
    struct _struct_541 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_540 u;
    HANDLE hEvent;
};

typedef struct _BY_HANDLE_FILE_INFORMATION _BY_HANDLE_FILE_INFORMATION, *P_BY_HANDLE_FILE_INFORMATION;

struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
};

typedef struct _BY_HANDLE_FILE_INFORMATION * LPBY_HANDLE_FILE_INFORMATION;

typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo=0,
    FileStandardInfo=1,
    FileNameInfo=2,
    FileRenameInfo=3,
    FileDispositionInfo=4,
    FileAllocationInfo=5,
    FileEndOfFileInfo=6,
    FileStreamInfo=7,
    FileCompressionInfo=8,
    FileAttributeTagInfo=9,
    FileIdBothDirectoryInfo=10,
    FileIdBothDirectoryRestartInfo=11,
    FileIoPriorityHintInfo=12,
    FileRemoteProtocolInfo=13,
    MaximumFileInfoByHandleClass=14
} _FILE_INFO_BY_HANDLE_CLASS;

typedef enum _FILE_INFO_BY_HANDLE_CLASS FILE_INFO_BY_HANDLE_CLASS;

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef wchar_t WCHAR;

typedef WCHAR * LPWCH;

typedef WCHAR * LPWSTR;

typedef WCHAR * LPCWSTR;

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

typedef ULONG_PTR SIZE_T;




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401000(undefined8 param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  _DAT_00443c74 = _DAT_00443c74 | 2;
  if (((byte)DAT_00440668 & 4) == 0) {
    param_2 = (ulonglong *)0x0;
    syscall();
    syscall();
    unaff_RSI = 6;
    syscall();
  }
  FUN_00405211();
  puVar6 = (ulonglong *)&DAT_00000086;
  uVar5 = 0x100000;
  puVar3 = (ulonglong *)&DAT_00000086;
LAB_00401086:
  if (puVar3[1] == 0) {
    return;
  }
  do {
    puVar4 = puVar3;
    if (*(int *)(puVar3 + 2) == 1) break;
    puVar1 = puVar3 + 4;
    puVar4 = puVar3 + 3;
    puVar3 = puVar3 + 3;
  } while (*puVar1 != 0);
  uVar2 = uVar5;
  if (uVar5 <= *puVar4) {
    uVar2 = *puVar4;
  }
  do {
    uVar5 = uVar2 + 0xfff & 0xfffffffffffff000;
    while( true ) {
      if ((puVar4[1] + *puVar4 & 0xfffffffffffff000) <= uVar5) {
        puVar3 = puVar4 + 3;
        goto LAB_00401086;
      }
      for (; (uVar2 = puVar6[1], uVar2 != 0 &&
             ((*(int *)(puVar6 + 2) == 1 || (*puVar6 + uVar2 < uVar5)))); puVar6 = puVar6 + 3) {
      }
      if ((*puVar6 <= uVar5) && (uVar2 = *puVar6 + uVar2, uVar5 < uVar2)) break;
      puVar3 = (ulonglong *)FUN_00401158(param_2,unaff_RSI);
      *puVar3 = uVar5 | 3;
      uVar5 = uVar5 + 0x1000;
    }
  } while( true );
}



longlong FUN_00401158(ulonglong *param_1,ulonglong param_2)

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



void FUN_004012f0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  char cVar13;
  undefined8 uVar12;
  ulonglong uVar14;
  char **ppcVar15;
  char **ppcVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong **pplVar20;
  longlong **pplVar21;
  ulonglong *puVar22;
  undefined8 *puVar23;
  longlong **unaff_R13;
  longlong *unaff_R15;
  char *pcStack_60;
  longlong *plStack_58;
  char *apcStack_50 [6];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar9 = rdtsc();
  DAT_00440004 = (undefined4)((ulonglong)uVar9 >> 0x20);
  DAT_00440000 = (undefined4)uVar9;
  pplVar20 = (longlong **)&DAT_00440008;
  uStack_18 = 0;
  uStack_20 = 0x16;
  apcStack_50[5] = (char *)0xffffffff80000007;
  apcStack_50[4] = (char *)0xffffffff80000001;
  apcStack_50[3] = (char *)0x7;
  apcStack_50[2] = (char *)0x2;
  ppcVar15 = apcStack_50 + 1;
  apcStack_50[1] = (char *)0x1;
  uVar9 = 0;
  do {
    iVar8 = (int)uVar9;
    if (iVar8 == 0) {
      puVar2 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar8 == 1) {
      puVar2 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar8 == 2) {
      puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar8 == 3) {
      puVar2 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar8 == 4) {
      puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar8 == 5) {
      puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar8 == 6) {
      puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar8 == 7) {
      puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar8 == 9) {
      puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar8 == 10) {
      puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar8 == 0xb) {
      puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar8 == 0xd) {
      puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar8 == 0xf) {
      puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar8 == -0x7ffffffe) {
      puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar8 == -0x7ffffffd) {
      puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar8 == -0x7ffffffc) {
      puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar2 = (undefined4 *)cpuid(iVar8);
    }
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)pplVar20 = *puVar2;
    *(undefined4 *)((longlong)pplVar20 + 4) = uVar3;
    *(undefined4 *)(pplVar20 + 1) = uVar5;
    *(undefined4 *)((longlong)pplVar20 + 0xc) = uVar4;
    ppcVar16 = ppcVar15;
    do {
      pplVar20 = pplVar20 + 2;
      uVar9 = *ppcVar16;
      ppcVar15 = ppcVar16 + 1;
      if ((int)uVar9 == 0) {
        uVar9 = ppcVar16[1];
        cVar13 = '\x11';
        pcVar7 = "\x01";
        do {
          pcVar17 = pcVar7;
          cVar10 = *pcVar17;
          bVar11 = pcVar17[1];
          do {
            pplVar21 = pplVar20;
            pplVar20 = pplVar21 + 1;
            *pplVar21 = (longlong *)(&LAB_00404f07 + bVar11);
            cVar10 = cVar10 + -1;
          } while (cVar10 != '\0');
          cVar13 = cVar13 + -1;
          pcVar7 = pcVar17 + 2;
        } while (cVar13 != '\0');
        *pplVar20 = unaff_R15;
        ppcVar16[1] = (char *)0x401362;
        FUN_0040161f();
        ppcVar16[1] = (char *)0x401367;
        FUN_0040189d();
        pplVar21[2] = (longlong *)0xffffffffffffffff;
        pplVar21[3] = (longlong *)0xffffffffffffffff;
        pplVar21[4] = (longlong *)&LAB_0040517e;
        ppcVar16[1] = (char *)0x20;
        uVar12 = ppcVar16[1];
        ppcVar16[1] = (char *)0x40138a;
        FUN_0040186f((int)uVar12,(longlong)&LAB_00404f84);
        ppcVar16[1] = (char *)0x20;
        uVar12 = ppcVar16[1];
        ppcVar16[1] = (char *)0x40139e;
        FUN_0040186f((int)uVar12,(longlong)&LAB_004050cc);
        pplVar21[5] = *unaff_R13;
        pplVar20 = pplVar21 + 7;
        pplVar21[6] = (longlong *)&LAB_004051e0;
        ppcVar16[1] = (char *)uVar9;
        *ppcVar16 = pcVar17 + 8;
        if ((*(byte *)pplVar20 & 8) == 0) {
          if ((*(byte *)pplVar20 & 0x20) == 0) {
            if ((*(byte *)pplVar20 & 4) == 0) {
              if (*unaff_R15 == 0) {
                ppcVar16[-1] = (char *)0x2a;
                ppcVar16[-2] = (char *)0x10;
                pbVar18 = &DAT_004059e1;
              }
              else {
                ppcVar16[-1] = (char *)0x0;
                ppcVar16[-2] = (char *)0x1;
                pbVar18 = &DAT_004059b6;
              }
            }
            else {
              ppcVar16[-1] = (char *)0x22;
              ppcVar16[-2] = (char *)0x4;
              pbVar18 = &DAT_00405a0d;
            }
          }
          else {
            ppcVar16[-1] = (char *)0x30;
            ppcVar16[-2] = (char *)0x20;
            pbVar18 = &DAT_00405989;
          }
        }
        else {
          ppcVar16[-1] = (char *)0x45;
          ppcVar16[-2] = (char *)0x8;
          pbVar18 = &DAT_00405a52;
        }
        *pplVar20 = (longlong *)ppcVar16[-2];
        pplVar21[8] = (longlong *)(&DAT_00404df0 + (longlong)ppcVar16[-1]);
        ppcVar16[-1] = (char *)(pplVar21 + 9);
        for (puVar22 = &DAT_00440698; puVar22 < &DAT_004407a0; puVar22 = puVar22 + 1) {
          bVar11 = 0;
          uVar14 = 0;
          pbVar19 = pbVar18;
          do {
            pbVar18 = pbVar19 + 1;
            bVar1 = *pbVar19;
            bVar6 = bVar11 & 0x3f;
            bVar11 = bVar11 + 7;
            uVar14 = uVar14 | (ulonglong)(bVar1 & 0x7f) << bVar6;
            pbVar19 = pbVar18;
          } while ((char)bVar1 < '\0');
          if ((bVar1 & 0x40) != 0) {
            uVar14 = uVar14 | -1L << (bVar11 & 0x3f);
          }
          if (*puVar22 != 0) {
            uVar14 = *puVar22;
          }
          *puVar22 = uVar14;
        }
        puVar23 = (undefined8 *)ppcVar16[-1];
        ppcVar16[-3] = (char *)0x401463;
        GetSystemInfo((LPSYSTEM_INFO)&DAT_00443c40);
        ppcVar16[1] = (char *)0x1;
        DAT_0044200c = ppcVar16[1];
        DAT_00442004 = DAT_00440798;
        DAT_00442018 = &DAT_00441000;
        DAT_00442020 = 0x1000;
        DAT_00442030 = (code *)&LAB_00402250;
        if (((byte)DAT_00440668 & 2) == 0) {
          DAT_00442030 = FUN_004021be;
        }
        DAT_00442038 = &DAT_00442000;
        *puVar23 = &LAB_00403fed;
        ppcVar16[1] = (char *)0x4014be;
        FUN_004015cb(FUN_004021be);
        puVar23[1] = FUN_00403ae8;
        puVar23[2] = &LAB_004043d8;
        return;
      }
      ppcVar16 = ppcVar16 + 1;
    } while (DAT_00440008 < (byte)uVar9);
  } while( true );
}



undefined8 FUN_004014ce(void)

{
  FUN_00401f47();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_004014e0(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  puVar3 = DAT_00442038;
  if ((((byte)DAT_00440668 & 4) != 0) ||
     (bVar5 = FUN_00401674(), (int)CONCAT71(extraout_var,bVar5) != 0)) {
    *puVar3 = 1;
  }
  if (DAT_00442050 == (undefined *)0x0) {
    DAT_00442050 = &DAT_00442058;
    _DAT_00442048 = 8;
    FUN_00404540(param_1,0);
  }
  uVar4 = DAT_00442040;
  lVar7 = DAT_00442040 - 1;
  while (lVar7 != -1) {
    lVar1 = lVar7 * 8;
    lVar7 = lVar7 + -1;
    if (*(longlong *)(DAT_00442050 + lVar7 * 8 + 8) == 0) {
      *(undefined **)(DAT_00442050 + lVar1) = puVar3;
      return 0;
    }
  }
  uVar2 = DAT_00442040 + 1;
  if (_DAT_00442048 <= uVar2) {
    uVar6 = FUN_0040466a(1,8);
    uVar8 = 0xffffffffffffffff;
    if ((char)uVar6 == '\0') goto LAB_004015c0;
  }
  *(undefined **)(DAT_00442050 + uVar4 * 8) = puVar3;
  uVar8 = uVar4;
  DAT_00442040 = uVar2;
LAB_004015c0:
  return uVar8 & 0xffffffff;
}



void FUN_004015cb(undefined8 param_1)

{
  FUN_00404491(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004015d7(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 unaff_R14;
  
  FUN_004012f0();
  _DAT_00443c74 = _DAT_00443c74 | 1;
  puVar2 = &DAT_00406010;
  for (ppuVar1 = &PTR_FUN_00406008; ppuVar1 != (undefined **)&DAT_00406010;
      ppuVar1 = (code **)ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  FUN_004014ce();
  FUN_004018ae(puVar2,unaff_R14);
  DAT_00443aa0 = 3;
  DAT_00443ab0 = &DAT_00443ab8;
  DAT_00443aa8 = 0x10;
  DAT_00443ac8 = 1;
  DAT_00443ae0 = DAT_00443ac8;
  DAT_00443af8 = DAT_00443ac8;
  DAT_00443ab8 = GetStdHandle(0xfffffff6);
  DAT_00443ad0 = GetStdHandle(0xfffffff5);
  DAT_00443ae8 = GetStdHandle(0xfffffff4);
  return;
}



void FUN_0040161f(void)

{
  DAT_00443aa0 = 3;
  DAT_00443ab0 = &DAT_00443ab8;
  DAT_00443aa8 = 0x10;
  DAT_00443ac8 = 1;
  DAT_00443ae0 = DAT_00443ac8;
  DAT_00443af8 = DAT_00443ac8;
  DAT_00443ab8 = GetStdHandle(0xfffffff6);
  DAT_00443ad0 = GetStdHandle(0xfffffff5);
  DAT_00443ae8 = GetStdHandle(0xfffffff4);
  return;
}



bool FUN_00401674(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined uVar5;
  uint local_f0;
  
  uVar1 = DAT_00443c70;
  uVar5 = (undefined)(DAT_00440668 & 4);
  if ((DAT_00440668 & 4) == 0) {
    uVar4 = FUN_00401711();
    if ((int)uVar4 != -1) {
      uVar5 = (local_f0 & 0xf000) == 0x2000;
      uVar1 = DAT_00443c70;
    }
  }
  else {
    uVar5 = 0;
    bVar2 = FUN_00404c6c();
    uVar1 = DAT_00443c70;
    if (bVar2) {
      iVar3 = FUN_00401eb0();
      uVar5 = iVar3 == 2;
      uVar1 = DAT_00443c70;
    }
  }
  DAT_00443c70 = uVar1;
  return (bool)uVar5;
}



ulonglong FUN_00401711(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00404db0();
  if ((int)uVar1 != -1) {
    FUN_0040173e();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



void FUN_0040173e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (unaff_RDI == (longlong *)0x0) {
    return;
  }
  if ((DAT_00440668 & 8) == 0) {
    if ((DAT_00440668 & 0x20) == 0) {
      if ((DAT_00440668 & 0x10) == 0) {
        return;
      }
      iVar2 = *(int *)((longlong)unaff_RDI + 0x1c);
      iVar3 = *(int *)unaff_RDI;
      iVar1 = *(int *)(unaff_RDI + 0xc);
      lVar7 = unaff_RDI[10];
      lVar11 = unaff_RDI[0xb];
      lVar8 = unaff_RDI[6];
      *unaff_RDI = (longlong)*(int *)((longlong)unaff_RDI + 4);
      lVar5 = unaff_RDI[7];
      lVar6 = unaff_RDI[8];
      lVar4 = unaff_RDI[9];
      lVar10 = unaff_RDI[4];
      lVar9 = unaff_RDI[5];
      *(int *)(unaff_RDI + 3) = iVar3;
      unaff_RDI[2] = (ulonglong)*(uint *)(unaff_RDI + 2);
      *(undefined8 *)((longlong)unaff_RDI + 0x1c) = *(undefined8 *)((longlong)unaff_RDI + 0x14);
      unaff_RDI[5] = (longlong)iVar2;
    }
    else {
      iVar1 = *(int *)(unaff_RDI + 0x10);
      lVar7 = unaff_RDI[0xe];
      lVar11 = unaff_RDI[0xf];
      lVar10 = unaff_RDI[6];
      lVar9 = unaff_RDI[7];
      lVar8 = unaff_RDI[8];
      lVar5 = unaff_RDI[9];
      lVar6 = unaff_RDI[10];
      lVar4 = unaff_RDI[0xb];
      *(uint *)(unaff_RDI + 3) = (uint)*(ushort *)(unaff_RDI + 3);
    }
    unaff_RDI[6] = lVar7;
    unaff_RDI[7] = (longlong)iVar1;
    unaff_RDI[8] = lVar11;
  }
  else {
    lVar7 = unaff_RDI[2];
    lVar9 = unaff_RDI[5];
    unaff_RDI[5] = (longlong)*(int *)(unaff_RDI + 3);
    lVar10 = unaff_RDI[4];
    lVar8 = unaff_RDI[6];
    lVar5 = unaff_RDI[7];
    lVar6 = unaff_RDI[8];
    lVar4 = unaff_RDI[9];
    *unaff_RDI = (longlong)*(int *)unaff_RDI;
    unaff_RDI[2] = (ulonglong)*(ushort *)((longlong)unaff_RDI + 6);
    *(uint *)(unaff_RDI + 3) = (uint)*(ushort *)((longlong)unaff_RDI + 4);
    *(longlong *)((longlong)unaff_RDI + 0x1c) = lVar7;
    unaff_RDI[6] = unaff_RDI[0xc];
    unaff_RDI[7] = (longlong)*(int *)(unaff_RDI + 0xe);
    unaff_RDI[8] = unaff_RDI[0xd];
  }
  unaff_RDI[9] = lVar10;
  unaff_RDI[10] = lVar9;
  unaff_RDI[0xb] = lVar8;
  unaff_RDI[0xc] = lVar5;
  unaff_RDI[0xd] = lVar6;
  unaff_RDI[0xe] = lVar4;
  return;
}



undefined8 FUN_0040186f(int param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool in_ZF;
  
  do {
    puVar1 = (undefined8 *)((longlong)unaff_RSI + 1);
    plVar2 = unaff_RDI + 1;
    *unaff_RDI = (ulonglong)*(byte *)unaff_RSI + param_2;
    param_1 = param_1 + -1;
    unaff_RSI = puVar1;
    unaff_RDI = plVar2;
  } while (param_1 != 0);
  *plVar2 = (ulonglong)
            *(byte *)((longlong)puVar1 +
                     (ulonglong)(byte)((DAT_00440038._5_1_ & 2) != 0 | !in_ZF << 1)) + param_2;
  return *puVar1;
}



void FUN_0040189d(void)

{
  undefined uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *unaff_RSI;
  undefined *unaff_RDI;
  undefined *puVar4;
  
  uVar3 = 0;
  while( true ) {
    puVar4 = unaff_RSI + 1;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),*unaff_RSI);
    unaff_RSI = unaff_RSI + 2;
    uVar1 = *puVar4;
    puVar4 = unaff_RDI;
    if (uVar3 == 0) break;
    do {
      unaff_RDI = puVar4 + 1;
      *puVar4 = uVar1;
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulonglong)uVar2;
      puVar4 = unaff_RDI;
    } while (uVar2 != 0);
  }
  return;
}



undefined8 FUN_004018ae(undefined8 param_1,undefined8 param_2)

{
  FUN_004045d5(param_1,param_2);
  FUN_00405211();
  DAT_00443c70 = DAT_004406a8;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018c7(void)

{
  DAT_00443c70 = DAT_004406a8;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018d7(void)

{
  DAT_00443c70 = DAT_004406c0;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018e7(void)

{
  DAT_00443c70 = DAT_004406f8;
  return 0xffffffffffffffff;
}



undefined8 FUN_004018f7(void)

{
  DAT_00443c70 = DAT_00440700;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401907(void)

{
  DAT_00443c70 = DAT_00440708;
  return 0xffffffffffffffff;
}



void entry(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  HANDLE hFile;
  LPWCH pWVar4;
  longlong lVar5;
  DWORD *pDVar6;
  ulonglong uVar7;
  DWORD *pDVar8;
  LPWCH pWVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  DWORD *pDVar12;
  DWORD *pDVar13;
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
  DAT_00440668 = 4;
  GetCommandLineW();
  pWVar4 = GetEnvironmentStringsW();
  FUN_00401bad((longlong)local_d038,0x3fff,0x200);
  lVar5 = 0;
  while( true ) {
    cVar1 = *(char *)(local_d038[0] + lVar5);
    if (cVar1 == '\0') break;
    if (cVar1 == '\\') {
      *(char *)(local_d038[0] + lVar5) = '/';
    }
    lVar5 = lVar5 + 1;
  }
  if ((ushort)*pWVar4 < 0xd800) {
    local_e04c = (uint)(ushort)*pWVar4;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_00404e4d();
  }
  pDVar8 = local_8038;
  pDVar12 = local_3a;
  uVar10 = 0;
  pWVar9 = pWVar4 + uVar3;
  pDVar13 = pDVar8;
  do {
    if (local_e04c == 0) {
      if (pDVar8 < pDVar12) {
        *(undefined *)pDVar8 = 0;
        pDVar8 = (DWORD *)((longlong)pDVar8 + 1);
      }
      uVar7 = (longlong)pDVar8 - (longlong)pDVar13;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7ffe;
      }
      if (0x1ff < uVar10) {
        uVar10 = 0x1ff;
      }
      *(undefined *)((longlong)local_8038 + uVar7) = 0;
      local_e040[uVar10 + 1] = (DWORD *)0x0;
      FreeEnvironmentStringsW(pWVar4);
      FUN_004015d7();
      return;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 < 0x200) {
      pDVar6 = (DWORD *)0x0;
      if (pDVar8 < pDVar12) {
        pDVar6 = pDVar8;
      }
      local_e040[uVar10] = pDVar6;
    }
    do {
      uVar11 = (ulonglong)local_e04c;
      uVar7 = (ulonglong)(int)local_e04c;
      pDVar6 = pDVar8;
      if (0x7f < local_e04c) {
        uVar7 = FUN_00404e5c();
        pDVar6 = pDVar8;
      }
      do {
        iVar2 = (int)uVar11;
        pDVar8 = pDVar6;
        if (pDVar12 <= pDVar6) break;
        pDVar8 = (DWORD *)((longlong)pDVar6 + 1);
        *(char *)pDVar6 = (char)uVar7;
        uVar7 = uVar7 >> 8;
        pDVar6 = pDVar8;
      } while (uVar7 != 0);
      if ((ushort)*pWVar9 < 0xd800) {
        local_e04c = (uint)(ushort)*pWVar9;
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_00404e4d();
      }
      pWVar9 = pWVar9 + uVar3;
    } while (iVar2 != 0);
    uVar7 = (longlong)pDVar8 - (longlong)pDVar13;
    if (0x7ffd < uVar7) {
      uVar7 = 0x7ffd;
    }
    *(undefined *)((longlong)local_8038 + uVar7) = 0;
  } while( true );
}



void FUN_00401b52(void)

{
  uint uVar1;
  ushort **unaff_RDI;
  
  if (**unaff_RDI < 0xd800) {
    *(uint *)(unaff_RDI + 3) = (uint)**unaff_RDI;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00404e4d();
  }
  *unaff_RDI = *unaff_RDI + uVar1;
  return;
}



void FUN_00401b7d(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(unaff_RDI + 0x10);
  uVar2 = (ulonglong)(int)unaff_ESI;
  if (0x7f < unaff_ESI) {
    uVar2 = FUN_00404e5c();
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



ulonglong FUN_00401bad(longlong param_1,longlong param_2,ulonglong param_3)

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
  FUN_00401b52();
  do {
    if (local_40 == 0) {
LAB_00401c13:
      FUN_00401b7d();
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
      if (local_40 == 0) goto LAB_00401c13;
      if ((0x20 < local_40) || ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) == 0)) break;
      FUN_00401b52();
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
LAB_00401c7e:
    while (local_40 != 0) {
      if ((bVar7) || (0x20 < local_40)) {
        if ((local_40 != 0x22) && (local_40 != 0x5c)) goto LAB_00401d82;
        uVar5 = 0;
        while (local_40 == 0x5c) {
          uVar5 = uVar5 + 1;
          FUN_00401b52();
        }
        lVar4 = 0;
        while (local_40 == 0x22) {
          FUN_00401b52();
          lVar4 = lVar4 + 1;
        }
        uVar2 = uVar5;
        if (lVar4 != 0) {
          for (; 1 < uVar2; uVar2 = uVar2 - 2) {
            FUN_00401b7d();
          }
          if ((uVar5 & 1) != 0) goto code_r0x00401d27;
          goto LAB_00401d3e;
        }
        while (uVar5 = uVar5 - 1, uVar5 != 0xffffffffffffffff) {
          FUN_00401b7d();
        }
      }
      else {
        if ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) != 0) break;
LAB_00401d82:
        FUN_00401b7d();
        FUN_00401b52();
      }
    }
    FUN_00401b7d();
  } while( true );
code_r0x00401d27:
  FUN_00401b7d();
  lVar4 = lVar4 + -1;
  if (lVar4 != 0) {
LAB_00401d3e:
    uVar2 = lVar4 - (ulonglong)!bVar7;
    uVar5 = uVar2 + 1;
    for (uVar6 = 3; uVar6 <= uVar5; uVar6 = uVar6 + 3) {
      FUN_00401b7d();
    }
    bVar7 = uVar2 % 3 == 0;
  }
  goto LAB_00401c7e;
}



ulonglong FUN_00401dba(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  LPOVERLAPPED lpOverlapped;
  longlong lVar2;
  ulonglong uVar3;
  LPCVOID lpBuffer;
  LPCVOID *unaff_RSI;
  HANDLE *unaff_RDI;
  DWORD nNumberOfBytesToWrite;
  uint local_4c [11];
  
  for (; (param_2 != 0 && (unaff_RSI[1] == (LPCVOID)0x0)); unaff_RSI = unaff_RSI + 2) {
    param_2 = param_2 + -1;
  }
  lpOverlapped = (LPOVERLAPPED)FUN_00401e5c();
  if (param_2 == 0) {
    nNumberOfBytesToWrite = 0;
    lpBuffer = (LPCVOID)0x0;
  }
  else {
    nNumberOfBytesToWrite = *(DWORD *)(unaff_RSI + 1);
    lpBuffer = *unaff_RSI;
  }
  BVar1 = WriteFile(*unaff_RDI,lpBuffer,nNumberOfBytesToWrite,local_4c,lpOverlapped);
  if (BVar1 == 0) {
    uVar3 = FUN_004052d6();
  }
  else {
    if (local_4c[0] == 0) {
      for (lVar2 = 0; param_2 != lVar2; lVar2 = lVar2 + 1) {
      }
    }
    FlushFileBuffers(*unaff_RDI);
    uVar3 = (ulonglong)local_4c[0];
  }
  return uVar3;
}



undefined4 * FUN_00401e5c(void)

{
  longlong lVar1;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 *puVar2;
  
  if (unaff_RDI == -1) {
    unaff_RSI = (undefined4 *)0x0;
  }
  else {
    puVar2 = unaff_RSI;
    for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(longlong *)(unaff_RSI + 4) = unaff_RDI;
  }
  return unaff_RSI;
}



void FUN_00401e81(void)

{
  HANDLE unaff_RDI;
  
  CloseHandle(unaff_RDI);
  return;
}



void FUN_00401e9a(void)

{
  FUN_00401f20();
  return;
}



void FUN_00401eb0(void)

{
  HANDLE unaff_RDI;
  
  GetFileType(unaff_RDI);
  return;
}



void FUN_00401ec9(void)

{
  GetLastError();
  return;
}



void FUN_00401edf(void)

{
  FUN_00401f20();
  return;
}



void FUN_00401ef5(void)

{
  LPCVOID unaff_RDI;
  
  UnmapViewOfFile(unaff_RDI);
  return;
}



void FUN_00401f20(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}



int FUN_00401f47(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_00401fe7();
  if ((iVar1 != -1) && (uVar2 = FUN_00401f82(), (int)uVar2 != -1)) {
    return iVar1 + 1;
  }
  return -1;
}



ulonglong FUN_00401f82(void)

{
  uint uVar1;
  ulonglong uVar2;
  char *unaff_RSI;
  uint unaff_EDI;
  
  if (unaff_EDI == 0xffffffff) {
LAB_00401fdd:
    uVar2 = FUN_004020ab();
  }
  else {
    *(char *)(*(longlong *)(unaff_RSI + 0x18) + (ulonglong)*(uint *)(unaff_RSI + 0x14)) =
         (char)unaff_EDI;
    uVar1 = *(int *)(unaff_RSI + 0x14) + 1U & *(int *)(unaff_RSI + 0x20) - 1U;
    *(uint *)(unaff_RSI + 0x14) = uVar1;
    if (((uVar1 == *(uint *)(unaff_RSI + 0x10)) || (*unaff_RSI == '\x02')) ||
       ((*unaff_RSI == '\x01' && ((char)unaff_EDI == '\n')))) {
      if (*(code **)(unaff_RSI + 0x30) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00401fd1. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (**(code **)(unaff_RSI + 0x30))();
        return uVar2;
      }
      if (uVar1 == *(uint *)(unaff_RSI + 0x10)) goto LAB_00401fdd;
    }
    uVar2 = (ulonglong)(unaff_EDI & 0xff);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00401fe7(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined7 extraout_var;
  char *unaff_RSI;
  char *unaff_RDI;
  int iVar5;
  
  iVar5 = 0;
  do {
    while( true ) {
      cVar1 = *unaff_RDI;
      if (cVar1 == '\0') {
        return iVar5 + 1;
      }
      unaff_RDI = unaff_RDI + 1;
      *(char *)(*(longlong *)(unaff_RSI + 0x18) + (ulonglong)*(uint *)(unaff_RSI + 0x14)) = cVar1;
      uVar3 = *(int *)(unaff_RSI + 0x14) + 1U & *(int *)(unaff_RSI + 0x20) - 1U;
      *(uint *)(unaff_RSI + 0x14) = uVar3;
      if (((uVar3 == *(uint *)(unaff_RSI + 0x10)) || (*unaff_RSI == '\x02')) ||
         ((*unaff_RSI == '\x01' && (cVar1 == '\n')))) break;
LAB_00402093:
      iVar5 = iVar5 + 1;
    }
    if (*(code **)(unaff_RSI + 0x30) == (code *)0x0) {
      if (uVar3 != *(uint *)(unaff_RSI + 0x10)) goto LAB_00402093;
      iVar4 = FUN_004020ab();
    }
    else {
      iVar4 = (**(code **)(unaff_RSI + 0x30))();
    }
    if (iVar4 != -1) goto LAB_00402093;
    iVar4 = FUN_004020de();
    if (iVar4 != _DAT_004406b8) {
      bVar2 = FUN_004020d4();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        DAT_00443c70 = (undefined4)DAT_00440710;
        *(undefined4 *)(unaff_RSI + 8) = DAT_00443c70;
      }
      return -1;
    }
  } while( true );
}



void FUN_004020ab(void)

{
  FUN_004020b3();
  return;
}



undefined8 FUN_004020b3(void)

{
  int iVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (unaff_ESI == 0) {
    unaff_ESI = -1;
  }
  iVar1 = *(int *)(unaff_RDI + 8);
  if (*(int *)(unaff_RDI + 8) < 1) {
    iVar1 = unaff_ESI;
  }
  *(int *)(unaff_RDI + 8) = iVar1;
  if (0 < unaff_ESI) {
    DAT_00443c70 = unaff_ESI;
  }
  return 0xffffffffffffffff;
}



bool FUN_004020d4(void)

{
  longlong unaff_RDI;
  
  return *(int *)(unaff_RDI + 8) == -1;
}



undefined4 FUN_004020de(void)

{
  undefined4 uVar1;
  longlong unaff_RDI;
  
  uVar1 = 0;
  if (-1 < *(int *)(unaff_RDI + 8)) {
    uVar1 = *(undefined4 *)(unaff_RDI + 8);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_004020ec(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  int iVar4;
  longlong lVar5;
  
  if (unaff_RDI == 0) {
    iVar4 = 0;
    lVar5 = DAT_00442040;
    while (lVar5 = lVar5 + -1, lVar5 != -1) {
      if (*(longlong *)(DAT_00442050 + lVar5 * 8) != 0) {
        iVar1 = FUN_004020ec();
        if (iVar1 == -1) {
          return -1;
        }
        iVar4 = iVar4 + iVar1;
      }
    }
  }
  else {
    iVar4 = 0;
    if ((*(int *)(unaff_RDI + 0xc) != -1) && ((_DAT_00440798 & *(uint *)(unaff_RDI + 4)) != 0)) {
      iVar4 = *(int *)(unaff_RDI + 8);
      if (iVar4 == 0) {
        while (*(int *)(unaff_RDI + 0x10) != *(int *)(unaff_RDI + 0x14)) {
          uVar2 = FUN_004021be();
          if ((int)uVar2 == -1) {
            return -1;
          }
          iVar4 = iVar4 + (int)uVar2;
        }
      }
      else if (iVar4 == -1) {
        iVar4 = 0;
      }
      else {
        uVar3 = FUN_004020b3();
        iVar4 = (int)uVar3;
      }
    }
  }
  return iVar4;
}



ulonglong FUN_004021be(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong unaff_RDI;
  
  uVar1 = *(uint *)(unaff_RDI + 0x10);
  uVar3 = *(uint *)(unaff_RDI + 0x14);
  if (uVar3 <= uVar1) {
    uVar3 = *(uint *)(unaff_RDI + 0x20);
  }
  uVar2 = FUN_00404c87();
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = FUN_0040228b();
  }
  else {
    *(uint *)(unaff_RDI + 0x10) =
         (int)uVar2 + *(int *)(unaff_RDI + 0x10) & *(int *)(unaff_RDI + 0x20) - 1U;
    uVar2 = (ulonglong)(uVar3 - uVar1);
  }
  return uVar2;
}



void FUN_0040228b(void)

{
  FUN_004020b3();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402296(void)

{
                    // WARNING: Could not recover jumptable at 0x00402296. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440678)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040229c(void)

{
                    // WARNING: Could not recover jumptable at 0x0040229c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440680)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004022a2(void)

{
                    // WARNING: Could not recover jumptable at 0x004022a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440688)();
  return;
}



void FUN_004022a8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  
  uVar3 = (uint)unaff_RSI;
  if ((unaff_RSI & 0xf) != 0) {
    uVar3 = -(uVar3 + 0x10);
  }
  lVar1 = unaff_RSI + (uVar3 & 0xf);
  uVar4 = param_2 - (ulonglong)(uVar3 & 0xf);
  *(longlong *)(unaff_RDI + 0x28) = lVar1;
  *(ulonglong *)(unaff_RDI + 0x10) = uVar4;
  *(ulonglong *)(lVar1 + 8) = uVar4 | 1;
  uVar2 = DAT_00442480;
  *(undefined8 *)(unaff_RSI + 8 + param_2) = 0x50;
  *(undefined8 *)(unaff_RDI + 0x30) = uVar2;
  return;
}



ulonglong FUN_004022ef(void)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong unaff_RDI;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar17 = 0;
  puVar2 = *(ulonglong **)(unaff_RDI + 0x388);
  if (((puVar2 == (ulonglong *)0x0) || ((*(uint *)(puVar2 + 3) & 1) == 0)) ||
     (uVar16 = *(uint *)(puVar2 + 3) & 8, bVar15 = (byte)uVar16, uVar16 != 0)) goto LAB_00402591;
  uVar3 = *puVar2;
  uVar16 = (uint)uVar3;
  if ((uVar3 & 0xf) != 0) {
    uVar16 = -(uVar16 + 0x10);
  }
  lVar1 = uVar3 + (uVar16 & 0xf);
  uVar17 = 0;
  uVar4 = *(ulonglong *)(lVar1 + 8);
  if (((uint)uVar4 & 3) != 1) goto LAB_00402591;
  uVar17 = puVar2[1];
  uVar18 = uVar4 & 0xfffffffffffffff8;
  puVar10 = (undefined8 *)(lVar1 + uVar18);
  if ((undefined8 *)((uVar3 - 0x50) + uVar17) <= puVar10) {
    uVar3 = puVar2[2];
    if (*(longlong *)(unaff_RDI + 0x20) == lVar1) {
      *(undefined8 *)(unaff_RDI + 0x20) = 0;
      *(undefined8 *)(unaff_RDI + 8) = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar1 + 0x18);
      lVar11 = *(longlong *)(lVar1 + 0x30);
      if (lVar7 == lVar1) {
        puVar10 = (undefined8 *)(lVar1 + 0x28);
        lVar13 = *(longlong *)(lVar7 + 0x28);
        if (*(longlong *)(lVar7 + 0x28) == 0) {
          lVar7 = *(longlong *)(lVar1 + 0x20);
          if (lVar7 == 0) goto LAB_004023fb;
          puVar10 = (undefined8 *)(lVar1 + 0x20);
          lVar13 = lVar7;
        }
        do {
          do {
            lVar7 = lVar13;
            puVar9 = puVar10;
            puVar10 = (undefined8 *)(lVar7 + 0x28);
            lVar13 = *(longlong *)(lVar7 + 0x28);
          } while (*(longlong *)(lVar7 + 0x28) != 0);
          puVar10 = (undefined8 *)(lVar7 + 0x20);
          lVar13 = *(longlong *)(lVar7 + 0x20);
        } while (*(longlong *)(lVar7 + 0x20) != 0);
        *puVar9 = 0;
      }
      else {
        lVar13 = *(longlong *)(lVar1 + 0x10);
        *(longlong *)(lVar13 + 0x18) = lVar7;
        *(longlong *)(lVar7 + 0x10) = lVar13;
      }
LAB_004023fb:
      if (lVar11 != 0) {
        uVar16 = *(uint *)(lVar1 + 0x38);
        puVar10 = (undefined8 *)(ulonglong)uVar16;
        lVar13 = unaff_RDI + (longlong)puVar10 * 8;
        if (*(longlong *)(lVar13 + 600) == lVar1) {
          *(longlong *)(lVar13 + 600) = lVar7;
          if (lVar7 == 0) {
            bVar5 = (byte)uVar16 & 0x1f;
            *(uint *)(unaff_RDI + 4) =
                 *(uint *)(unaff_RDI + 4) & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          }
          else {
LAB_0040241f:
            lVar13 = *(longlong *)(lVar1 + 0x20);
            *(longlong *)(lVar7 + 0x30) = lVar11;
            if (lVar13 != 0) {
              *(longlong *)(lVar7 + 0x20) = lVar13;
              *(longlong *)(lVar13 + 0x30) = lVar7;
            }
            lVar11 = *(longlong *)(lVar1 + 0x28);
            if (lVar11 != 0) {
              *(longlong *)(lVar7 + 0x28) = lVar11;
              *(longlong *)(lVar11 + 0x30) = lVar7;
            }
          }
        }
        else {
          if (*(longlong *)(lVar11 + 0x20) == lVar1) {
            *(longlong *)(lVar11 + 0x20) = lVar7;
          }
          else {
            *(longlong *)(lVar11 + 0x28) = lVar7;
          }
          if (lVar7 != 0) goto LAB_0040241f;
        }
      }
    }
    iVar6 = FUN_0040452c(puVar10);
    if (iVar6 == 0) {
      *(longlong *)(unaff_RDI + 0x358) = *(longlong *)(unaff_RDI + 0x358) - uVar17;
      *(ulonglong *)(unaff_RDI + 0x388) = uVar3;
      goto LAB_00402591;
    }
    uVar12 = (uint)(uVar18 >> 8);
    uVar16 = (uint)(uVar4 >> 8);
    if ((uVar12 != 0) && (uVar16 = 0x1f, uVar12 < 0x10000)) {
      uVar16 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> uVar16 == 0; uVar16 = uVar16 - 1) {
        }
      }
      uVar16 = ((uint)(uVar18 >> (0x26U - (char)(uVar16 ^ 0x1f) & 0x3f)) & 1) +
               (0x1f - (uVar16 ^ 0x1f)) * 2;
    }
    uVar12 = *(uint *)(unaff_RDI + 4);
    uVar14 = 1 << ((byte)uVar16 & 0x1f);
    *(uint *)(lVar1 + 0x38) = uVar16;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar17 = (ulonglong)uVar16;
    if ((uVar12 & uVar14) == 0) {
      *(uint *)(unaff_RDI + 4) = uVar12 | uVar14;
      *(longlong *)(unaff_RDI + 600 + uVar17 * 8) = lVar1;
      *(ulonglong *)(lVar1 + 0x30) = unaff_RDI + 600 + uVar17 * 8;
    }
    else {
      if (uVar16 != 0x1f) {
        bVar15 = 0x39 - (char)(uVar16 >> 1);
      }
      lVar11 = uVar18 << (bVar15 & 0x3f);
      lVar7 = *(longlong *)(unaff_RDI + 600 + uVar17 * 8);
      do {
        lVar13 = lVar7;
        if ((*(ulonglong *)(lVar13 + 8) & 0xfffffffffffffff8) == uVar18) {
          lVar7 = *(longlong *)(lVar13 + 0x10);
          *(longlong *)(lVar7 + 0x18) = lVar1;
          *(longlong *)(lVar13 + 0x10) = lVar1;
          *(longlong *)(lVar1 + 0x10) = lVar7;
          *(longlong *)(lVar1 + 0x18) = lVar13;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          goto LAB_0040258e;
        }
        lVar8 = 4 - (lVar11 >> 0x3f);
        lVar7 = *(longlong *)(lVar13 + lVar8 * 8);
        lVar11 = lVar11 * 2;
      } while (lVar7 != 0);
      *(longlong *)(lVar13 + lVar8 * 8) = lVar1;
      *(longlong *)(lVar1 + 0x30) = lVar13;
    }
    *(longlong *)(lVar1 + 0x18) = lVar1;
    *(longlong *)(lVar1 + 0x10) = lVar1;
  }
LAB_0040258e:
  uVar17 = 0;
LAB_00402591:
  *(undefined8 *)(unaff_RDI + 0x38) = 0x80;
  return uVar17;
}



void FUN_004026e8(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *unaff_RSI;
  ulonglong *puVar13;
  ulonglong uVar14;
  uint *unaff_RDI;
  uint uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  
  puVar4 = unaff_RSI + 1;
  puVar13 = (ulonglong *)((longlong)unaff_RSI + param_2);
  if ((*puVar4 & 1) == 0) {
    uVar9 = *unaff_RSI;
    unaff_RSI = (ulonglong *)((longlong)unaff_RSI - uVar9);
    if ((*puVar4 & 3) == 0) {
      iVar3 = FUN_0040452c(param_1);
      if (iVar3 != 0) {
        return;
      }
      *(ulonglong *)(unaff_RDI + 0xd6) = *(longlong *)(unaff_RDI + 0xd6) - (uVar9 + 0x20 + param_2);
      return;
    }
    param_2 = param_2 + uVar9;
    if (*(ulonglong **)(unaff_RDI + 8) == unaff_RSI) {
      uVar9 = puVar13[1];
      if (((uint)uVar9 & 3) == 3) {
        *(ulonglong *)(unaff_RDI + 2) = param_2;
        puVar13[1] = uVar9 & 0xfffffffffffffffe;
        unaff_RSI[1] = param_2 | 1;
        *puVar13 = param_2;
        return;
      }
    }
    else {
      puVar4 = (ulonglong *)unaff_RSI[3];
      if (uVar9 < 0x100) {
        puVar5 = (ulonglong *)unaff_RSI[2];
        if (puVar5 == puVar4) {
          bVar7 = (byte)(uVar9 >> 3) & 0x1f;
          *unaff_RDI = *unaff_RDI & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
          puVar5[3] = (ulonglong)puVar4;
          puVar4[2] = (ulonglong)puVar5;
        }
      }
      else {
        uVar9 = unaff_RSI[6];
        if (unaff_RSI == puVar4) {
          puVar5 = (ulonglong *)unaff_RSI[5];
          puVar2 = unaff_RSI + 5;
          if ((ulonglong *)unaff_RSI[5] == (ulonglong *)0x0) {
            puVar4 = (ulonglong *)unaff_RSI[4];
            if (puVar4 == (ulonglong *)0x0) goto LAB_004027cf;
            puVar5 = puVar4;
            puVar2 = unaff_RSI + 4;
          }
          do {
            do {
              puVar16 = puVar2;
              puVar4 = puVar5;
              puVar5 = (ulonglong *)puVar4[5];
              puVar2 = puVar4 + 5;
            } while ((ulonglong *)puVar4[5] != (ulonglong *)0x0);
            puVar5 = (ulonglong *)puVar4[4];
            puVar2 = puVar4 + 4;
          } while ((ulonglong *)puVar4[4] != (ulonglong *)0x0);
          *puVar16 = 0;
        }
        else {
          uVar14 = unaff_RSI[2];
          *(ulonglong **)(uVar14 + 0x18) = puVar4;
          puVar4[2] = uVar14;
        }
LAB_004027cf:
        if (uVar9 != 0) {
          uVar11 = *(uint *)(unaff_RSI + 7);
          if (*(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) == unaff_RSI) {
            *(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) = puVar4;
            if (puVar4 == (ulonglong *)0x0) {
              bVar7 = (byte)uVar11 & 0x1f;
              unaff_RDI[1] = unaff_RDI[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            }
            else {
LAB_004027f8:
              uVar14 = unaff_RSI[4];
              puVar4[6] = uVar9;
              if (uVar14 != 0) {
                puVar4[4] = uVar14;
                *(ulonglong **)(uVar14 + 0x30) = puVar4;
              }
              uVar9 = unaff_RSI[5];
              if (uVar9 != 0) {
                puVar4[5] = uVar9;
                *(ulonglong **)(uVar9 + 0x30) = puVar4;
              }
            }
          }
          else {
            if (*(ulonglong **)(uVar9 + 0x20) == unaff_RSI) {
              *(ulonglong **)(uVar9 + 0x20) = puVar4;
            }
            else {
              *(ulonglong **)(uVar9 + 0x28) = puVar4;
            }
            if (puVar4 != (ulonglong *)0x0) goto LAB_004027f8;
          }
        }
      }
    }
  }
  uVar9 = puVar13[1];
  if ((uVar9 & 2) != 0) {
    puVar13[1] = uVar9 & 0xfffffffffffffffe;
    unaff_RSI[1] = param_2 | 1;
    *(ulonglong *)((longlong)unaff_RSI + param_2) = param_2;
    goto LAB_00402a21;
  }
  puVar4 = *(ulonglong **)(unaff_RDI + 8);
  if (*(ulonglong **)(unaff_RDI + 10) == puVar13) {
    lVar8 = *(longlong *)(unaff_RDI + 4);
    *(ulonglong **)(unaff_RDI + 10) = unaff_RSI;
    *(ulonglong *)(unaff_RDI + 4) = param_2 + lVar8;
    unaff_RSI[1] = param_2 + lVar8 | 1;
    if (unaff_RSI != puVar4) {
      return;
    }
    *(undefined8 *)(unaff_RDI + 8) = 0;
    *(undefined8 *)(unaff_RDI + 2) = 0;
    return;
  }
  if (puVar13 == puVar4) {
    uVar9 = param_2 + *(longlong *)(unaff_RDI + 2);
    *(ulonglong **)(unaff_RDI + 8) = unaff_RSI;
    *(ulonglong *)(unaff_RDI + 2) = uVar9;
    unaff_RSI[1] = uVar9 | 1;
    *(ulonglong *)((longlong)unaff_RSI + uVar9) = uVar9;
    return;
  }
  puVar5 = (ulonglong *)puVar13[3];
  param_2 = param_2 + (uVar9 & 0xfffffffffffffff8);
  if ((uVar9 & 0xfffffffffffffff8) < 0xf9) {
    puVar13 = (ulonglong *)puVar13[2];
    if (puVar13 == puVar5) {
      bVar7 = (byte)(uVar9 >> 3) & 0x1f;
      *unaff_RDI = *unaff_RDI & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    }
    else {
      puVar13[3] = (ulonglong)puVar5;
      puVar5[2] = (ulonglong)puVar13;
    }
  }
  else {
    uVar9 = puVar13[6];
    if (puVar13 == puVar5) {
      puVar2 = (ulonglong *)puVar13[5];
      puVar16 = puVar13 + 5;
      if ((ulonglong *)puVar13[5] == (ulonglong *)0x0) {
        puVar5 = (ulonglong *)puVar13[4];
        if (puVar5 == (ulonglong *)0x0) goto LAB_0040297d;
        puVar2 = puVar5;
        puVar16 = puVar13 + 4;
      }
      do {
        do {
          puVar17 = puVar16;
          puVar5 = puVar2;
          puVar2 = (ulonglong *)puVar5[5];
          puVar16 = puVar5 + 5;
        } while ((ulonglong *)puVar5[5] != (ulonglong *)0x0);
        puVar2 = (ulonglong *)puVar5[4];
        puVar16 = puVar5 + 4;
      } while ((ulonglong *)puVar5[4] != (ulonglong *)0x0);
      *puVar17 = 0;
    }
    else {
      uVar14 = puVar13[2];
      *(ulonglong **)(uVar14 + 0x18) = puVar5;
      puVar5[2] = uVar14;
    }
LAB_0040297d:
    if (uVar9 != 0) {
      uVar11 = *(uint *)(puVar13 + 7);
      if (*(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) == puVar13) {
        *(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) = puVar5;
        if (puVar5 == (ulonglong *)0x0) {
          bVar7 = (byte)uVar11 & 0x1f;
          unaff_RDI[1] = unaff_RDI[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
LAB_004029a2:
          uVar14 = puVar13[4];
          puVar5[6] = uVar9;
          if (uVar14 != 0) {
            puVar5[4] = uVar14;
            *(ulonglong **)(uVar14 + 0x30) = puVar5;
          }
          uVar9 = puVar13[5];
          if (uVar9 != 0) {
            puVar5[5] = uVar9;
            *(ulonglong **)(uVar9 + 0x30) = puVar5;
          }
        }
      }
      else {
        if (*(ulonglong **)(uVar9 + 0x20) == puVar13) {
          *(ulonglong **)(uVar9 + 0x20) = puVar5;
        }
        else {
          *(ulonglong **)(uVar9 + 0x28) = puVar5;
        }
        if (puVar5 != (ulonglong *)0x0) goto LAB_004029a2;
      }
    }
  }
  unaff_RSI[1] = param_2 | 1;
  *(ulonglong *)((longlong)unaff_RSI + param_2) = param_2;
  if (unaff_RSI == puVar4) {
    *(ulonglong *)(unaff_RDI + 2) = param_2;
    return;
  }
LAB_00402a21:
  if (param_2 < 0x100) {
    uVar11 = 1 << ((byte)(param_2 >> 3) & 0x1f);
    puVar1 = unaff_RDI + (ulonglong)(uint)((int)(param_2 >> 3) * 2) * 2 + 0x12;
    if ((*unaff_RDI & uVar11) == 0) {
      *unaff_RDI = *unaff_RDI | uVar11;
      puVar10 = puVar1;
    }
    else {
      puVar10 = *(uint **)(puVar1 + 4);
    }
    *(ulonglong **)(puVar1 + 4) = unaff_RSI;
    *(ulonglong **)(puVar10 + 6) = unaff_RSI;
    unaff_RSI[2] = (ulonglong)puVar10;
    unaff_RSI[3] = (ulonglong)puVar1;
  }
  else {
    uVar12 = (uint)(param_2 >> 8);
    uVar11 = uVar12;
    if ((uVar12 != 0) && (uVar11 = 0x1f, uVar12 < 0x10000)) {
      uVar11 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      uVar11 = ((uint)(param_2 >> (0x26U - (char)(uVar11 ^ 0x1f) & 0x3f)) & 1) +
               (0x1f - (uVar11 ^ 0x1f)) * 2;
    }
    uVar12 = unaff_RDI[1];
    uVar15 = 1 << ((byte)uVar11 & 0x1f);
    *(uint *)(unaff_RSI + 7) = uVar11;
    unaff_RSI[5] = 0;
    unaff_RSI[4] = 0;
    uVar9 = (ulonglong)uVar11;
    if ((uVar12 & uVar15) == 0) {
      unaff_RDI[1] = uVar12 | uVar15;
      *(ulonglong **)(unaff_RDI + uVar9 * 2 + 0x96) = unaff_RSI;
      unaff_RSI[6] = (ulonglong)(unaff_RDI + uVar9 * 2 + 0x96);
    }
    else {
      bVar7 = 0;
      if (uVar11 != 0x1f) {
        bVar7 = 0x39 - (char)(uVar11 >> 1);
      }
      lVar8 = param_2 << (bVar7 & 0x3f);
      uVar9 = *(ulonglong *)(unaff_RDI + uVar9 * 2 + 0x96);
      do {
        uVar14 = uVar9;
        if ((*(ulonglong *)(uVar14 + 8) & 0xfffffffffffffff8) == param_2) {
          uVar9 = *(ulonglong *)(uVar14 + 0x10);
          *(ulonglong **)(uVar9 + 0x18) = unaff_RSI;
          *(ulonglong **)(uVar14 + 0x10) = unaff_RSI;
          unaff_RSI[2] = uVar9;
          unaff_RSI[3] = uVar14;
          unaff_RSI[6] = 0;
          return;
        }
        lVar6 = 4 - (lVar8 >> 0x3f);
        uVar9 = *(ulonglong *)(uVar14 + lVar6 * 8);
        lVar8 = lVar8 * 2;
      } while (uVar9 != 0);
      *(ulonglong **)(uVar14 + lVar6 * 8) = unaff_RSI;
      unaff_RSI[6] = uVar14;
    }
    unaff_RSI[3] = (ulonglong)unaff_RSI;
    unaff_RSI[2] = (ulonglong)unaff_RSI;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong * FUN_00402b64(void)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong **ppuVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong unaff_RDI;
  uint uVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  byte bVar26;
  bool bVar27;
  
  puVar18 = DAT_004420c0;
  uVar12 = DAT_004420a8;
  uVar23 = DAT_004420a4;
  uVar9 = DAT_004420a0;
  if (unaff_RDI < 0xe1) {
    uVar17 = 0x20;
    if (0xe < unaff_RDI) {
      uVar17 = unaff_RDI + 0x1f & 0xfffffffffffffff0;
    }
    bVar26 = (byte)(uVar17 >> 3);
    uVar4 = DAT_004420a0 >> (bVar26 & 0x1f);
    if ((uVar4 & 3) != 0) {
      uVar9 = (int)(uVar17 >> 3) + (~uVar4 & 1);
      uVar12 = (ulonglong)(uVar9 * 2);
      puVar6 = (ulonglong *)(&DAT_004420f8)[uVar12];
      puVar7 = (undefined *)puVar6[2];
      if (&DAT_004420e8 + uVar12 * 8 == puVar7) {
        DAT_004420a0 = DAT_004420a0 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        *(undefined **)(puVar7 + 0x18) = &DAT_004420e8 + uVar12 * 8;
        (&DAT_004420f8)[uVar12] = puVar7;
      }
      puVar6[1] = (ulonglong)(uVar9 * 8 | 3);
      puVar18 = (ulonglong *)((longlong)puVar6 + (ulonglong)(uVar9 * 8) + 8);
      *puVar18 = *puVar18 | 1;
      puVar18 = DAT_004420c0;
      goto LAB_00403ad3;
    }
    if (DAT_004420a8 < uVar17) {
      if (DAT_004420a0 >> (bVar26 & 0x1f) != 0) {
        iVar22 = 1 << (bVar26 & 0x1f);
        uVar9 = uVar4 << (bVar26 & 0x1f) & (iVar22 * -2 | iVar22 * 2);
        uVar9 = uVar9 & -uVar9;
        iVar22 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
          }
        }
        uVar19 = (ulonglong)(uint)(iVar22 * 2);
        uVar9 = iVar22 * 8;
        puVar6 = (ulonglong *)(&DAT_004420f8)[uVar19];
        puVar7 = (undefined *)puVar6[2];
        if (&DAT_004420e8 + uVar19 * 8 == puVar7) {
          DAT_004420a0 = DAT_004420a0 & ~(1 << ((byte)iVar22 & 0x1f));
        }
        else {
          *(undefined **)(puVar7 + 0x18) = &DAT_004420e8 + uVar19 * 8;
          (&DAT_004420f8)[uVar19] = puVar7;
        }
        puVar5 = (ulonglong *)((longlong)puVar6 + (ulonglong)uVar9);
        uVar19 = uVar9 - uVar17;
        if (uVar19 < 0x20) {
          puVar6[1] = (ulonglong)(uVar9 | 3);
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar5 | 1;
          puVar18 = DAT_004420c0;
        }
        else {
          puVar18 = (ulonglong *)(uVar17 + (longlong)puVar6);
          puVar6[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *puVar5 = uVar19;
          DAT_004420a8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004420a0 & uVar9) == 0) {
              DAT_004420a0 = DAT_004420a0 | uVar9;
              puVar7 = &DAT_004420e8 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_004420f8)[uVar17];
            }
            (&DAT_004420f8)[uVar17] = DAT_004420c0;
            *(ulonglong **)(puVar7 + 0x18) = DAT_004420c0;
            DAT_004420c0[2] = (ulonglong)puVar7;
            DAT_004420c0[3] = (ulonglong)(&DAT_004420e8 + uVar17 * 8);
          }
        }
        goto LAB_00403ad3;
      }
      if (DAT_004420a4 != 0) {
        uVar4 = 0;
        if ((-DAT_004420a4 & DAT_004420a4) != 0) {
          for (; ((-DAT_004420a4 & DAT_004420a4) >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        puVar18 = *(ulonglong **)(&DAT_004422f8 + (ulonglong)uVar4 * 8);
        puVar6 = puVar18;
        uVar19 = (puVar18[1] & 0xfffffffffffffff8) - uVar17;
        while ((puVar5 = (ulonglong *)puVar18[4], (ulonglong *)puVar18[4] != (ulonglong *)0x0 ||
               (puVar5 = (ulonglong *)puVar18[5], (ulonglong *)puVar18[5] != (ulonglong *)0x0))) {
          puVar18 = puVar5;
          uVar10 = (puVar18[1] & 0xfffffffffffffff8) - uVar17;
          if (uVar10 < uVar19) {
            puVar6 = puVar18;
            uVar19 = uVar10;
          }
        }
        puVar18 = (ulonglong *)puVar6[3];
        uVar10 = puVar6[6];
        if (puVar18 == puVar6) {
          puVar5 = (ulonglong *)puVar6[5];
          puVar8 = puVar6 + 5;
          if ((ulonglong *)puVar6[5] == (ulonglong *)0x0) {
            puVar18 = (ulonglong *)puVar6[4];
            if (puVar18 == (ulonglong *)0x0) goto LAB_00402dd1;
            puVar5 = puVar18;
            puVar8 = puVar6 + 4;
          }
          do {
            do {
              puVar25 = puVar8;
              puVar18 = puVar5;
              puVar5 = (ulonglong *)puVar18[5];
              puVar8 = puVar18 + 5;
            } while ((ulonglong *)puVar18[5] != (ulonglong *)0x0);
            puVar5 = (ulonglong *)puVar18[4];
            puVar8 = puVar18 + 4;
          } while ((ulonglong *)puVar18[4] != (ulonglong *)0x0);
          *puVar25 = 0;
        }
        else {
          uVar1 = puVar6[2];
          *(ulonglong **)(uVar1 + 0x18) = puVar18;
          puVar18[2] = uVar1;
        }
LAB_00402dd1:
        if (uVar10 != 0) {
          uVar4 = *(uint *)(puVar6 + 7);
          if (*(ulonglong **)(&DAT_004422f8 + (ulonglong)uVar4 * 8) == puVar6) {
            (&DAT_004420a8)[(ulonglong)uVar4 + 0x4a] = (ulonglong)puVar18;
            if (puVar18 == (ulonglong *)0x0) {
              DAT_004420a4 = uVar23 & ~(1 << (uVar4 & 0x1f));
            }
            else {
LAB_00402df5:
              uVar1 = puVar6[4];
              puVar18[6] = uVar10;
              if (uVar1 != 0) {
                puVar18[4] = uVar1;
                *(ulonglong **)(uVar1 + 0x30) = puVar18;
              }
              uVar10 = puVar6[5];
              if (uVar10 != 0) {
                puVar18[5] = uVar10;
                *(ulonglong **)(uVar10 + 0x30) = puVar18;
              }
            }
          }
          else {
            if (*(ulonglong **)(uVar10 + 0x20) == puVar6) {
              *(ulonglong **)(uVar10 + 0x20) = puVar18;
            }
            else {
              *(ulonglong **)(uVar10 + 0x28) = puVar18;
            }
            if (puVar18 != (ulonglong *)0x0) goto LAB_00402df5;
          }
        }
        if (uVar19 < 0x20) {
          puVar6[1] = uVar17 + uVar19 | 3;
          puVar18 = (ulonglong *)((longlong)puVar6 + uVar17 + uVar19 + 8);
          *puVar18 = *puVar18 | 1;
          puVar18 = DAT_004420c0;
        }
        else {
          puVar18 = (ulonglong *)((longlong)puVar6 + uVar17);
          puVar6[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *(ulonglong *)((longlong)puVar18 + uVar19) = uVar19;
          DAT_004420a8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar23 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((uVar9 & uVar23) == 0) {
              DAT_004420a0 = uVar9 | uVar23;
              puVar7 = &DAT_004420e8 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_004420f8)[uVar17];
            }
            (&DAT_004420f8)[uVar17] = DAT_004420c0;
            *(ulonglong **)(puVar7 + 0x18) = DAT_004420c0;
            DAT_004420c0[2] = (ulonglong)puVar7;
            DAT_004420c0[3] = (ulonglong)(&DAT_004420e8 + uVar17 * 8);
          }
        }
        goto LAB_00403ad3;
      }
    }
  }
  else if (unaff_RDI < 0xffffffffffffff80) {
    uVar17 = unaff_RDI + 0x1f & 0xfffffffffffffff0;
    if (DAT_004420a4 != 0) {
      uVar12 = -uVar17;
      uVar9 = (uint)(uVar17 >> 8);
      uVar19 = unaff_RDI + 0x1f >> 8 & 0xffffffff;
      if ((uVar9 != 0) && (uVar19 = 0x1f, uVar9 < 0x10000)) {
        uVar4 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        uVar19 = (ulonglong)
                 (((uint)(uVar17 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                 (0x1f - (uVar4 ^ 0x1f)) * 2);
      }
      puVar5 = *(ulonglong **)(&DAT_004422f8 + uVar19 * 8);
      puVar6 = puVar5;
      puVar8 = (ulonglong *)0x0;
      if (puVar5 != (ulonglong *)0x0) {
        bVar26 = 0;
        if ((int)uVar19 != 0x1f) {
          bVar26 = 0x39 - (char)(uVar19 >> 1);
        }
        puVar6 = (ulonglong *)0x0;
        lVar15 = uVar17 << (bVar26 & 0x3f);
        puVar25 = (ulonglong *)0x0;
        while ((uVar10 = (puVar5[1] & 0xfffffffffffffff8) - uVar17, uVar12 <= uVar10 ||
               (uVar12 = uVar10, puVar6 = puVar5, uVar10 != 0))) {
          puVar8 = (ulonglong *)puVar5[5];
          puVar5 = (ulonglong *)puVar5[4 - (lVar15 >> 0x3f)];
          if ((puVar8 == (ulonglong *)0x0) || (puVar8 == puVar5)) {
            puVar8 = puVar25;
          }
          if (puVar5 == (ulonglong *)0x0) goto LAB_00402fba;
          lVar15 = lVar15 * 2;
          puVar25 = puVar8;
        }
        uVar12 = 0;
        puVar8 = puVar5;
      }
LAB_00402fba:
      if (((ulonglong)puVar8 | (ulonglong)puVar6) == 0) {
        uVar9 = -2 << ((byte)uVar19 & 0x1f) & DAT_004420a4;
        if (uVar9 == 0) goto LAB_00403291;
        uVar4 = 0;
        if ((-uVar9 & uVar9) != 0) {
          for (; ((-uVar9 & uVar9) >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        puVar6 = (ulonglong *)0x0;
        puVar8 = *(ulonglong **)(&DAT_004422f8 + (ulonglong)uVar4 * 8);
      }
      while (puVar5 = puVar8, puVar5 != (ulonglong *)0x0) {
        uVar19 = (puVar5[1] & 0xfffffffffffffff8) - uVar17;
        if (uVar19 < uVar12) {
          puVar6 = puVar5;
          uVar12 = uVar19;
        }
        puVar8 = (ulonglong *)puVar5[4];
        if ((ulonglong *)puVar5[4] == (ulonglong *)0x0) {
          puVar8 = (ulonglong *)puVar5[5];
        }
      }
      if ((puVar6 != (ulonglong *)0x0) && (uVar12 < DAT_004420a8 - uVar17)) {
        puVar18 = (ulonglong *)puVar6[3];
        uVar19 = puVar6[6];
        if (puVar18 == puVar6) {
          puVar5 = (ulonglong *)puVar6[5];
          puVar8 = puVar6 + 5;
          if ((ulonglong *)puVar6[5] == (ulonglong *)0x0) {
            puVar18 = (ulonglong *)puVar6[4];
            if (puVar18 == (ulonglong *)0x0) goto LAB_00403094;
            puVar5 = puVar18;
            puVar8 = puVar6 + 4;
          }
          do {
            do {
              puVar25 = puVar8;
              puVar18 = puVar5;
              puVar5 = (ulonglong *)puVar18[5];
              puVar8 = puVar18 + 5;
            } while ((ulonglong *)puVar18[5] != (ulonglong *)0x0);
            puVar5 = (ulonglong *)puVar18[4];
            puVar8 = puVar18 + 4;
          } while ((ulonglong *)puVar18[4] != (ulonglong *)0x0);
          *puVar25 = 0;
        }
        else {
          uVar10 = puVar6[2];
          *(ulonglong **)(uVar10 + 0x18) = puVar18;
          puVar18[2] = uVar10;
        }
LAB_00403094:
        if (uVar19 != 0) {
          uVar9 = *(uint *)(puVar6 + 7);
          if (*(ulonglong **)(&DAT_004422f8 + (ulonglong)uVar9 * 8) == puVar6) {
            (&DAT_004420a8)[(ulonglong)uVar9 + 0x4a] = (ulonglong)puVar18;
            if (puVar18 == (ulonglong *)0x0) {
              DAT_004420a4 = uVar23 & ~(1 << (uVar9 & 0x1f));
            }
            else {
LAB_004030b8:
              uVar10 = puVar6[4];
              puVar18[6] = uVar19;
              if (uVar10 != 0) {
                puVar18[4] = uVar10;
                *(ulonglong **)(uVar10 + 0x30) = puVar18;
              }
              uVar19 = puVar6[5];
              if (uVar19 != 0) {
                puVar18[5] = uVar19;
                *(ulonglong **)(uVar19 + 0x30) = puVar18;
              }
            }
          }
          else {
            if (*(ulonglong **)(uVar19 + 0x20) == puVar6) {
              *(ulonglong **)(uVar19 + 0x20) = puVar18;
            }
            else {
              *(ulonglong **)(uVar19 + 0x28) = puVar18;
            }
            if (puVar18 != (ulonglong *)0x0) goto LAB_004030b8;
          }
        }
        if (uVar12 < 0x20) {
          puVar6[1] = uVar17 + uVar12 | 3;
          puVar18 = (ulonglong *)((longlong)puVar6 + uVar17 + uVar12 + 8);
          *puVar18 = *puVar18 | 1;
          puVar18 = DAT_004420c0;
        }
        else {
          lVar15 = (longlong)puVar6 + uVar17;
          puVar6[1] = uVar17 | 3;
          *(ulonglong *)(lVar15 + 8) = uVar12 | 1;
          *(ulonglong *)(lVar15 + uVar12) = uVar12;
          uVar9 = DAT_004420a4;
          if (uVar12 < 0x100) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004420a0 & uVar9) == 0) {
              DAT_004420a0 = DAT_004420a0 | uVar9;
              puVar7 = &DAT_004420e8 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_004420f8)[uVar17];
            }
            (&DAT_004420f8)[uVar17] = lVar15;
            *(longlong *)(puVar7 + 0x18) = lVar15;
            *(undefined **)(lVar15 + 0x10) = puVar7;
            *(undefined **)(lVar15 + 0x18) = &DAT_004420e8 + uVar17 * 8;
            puVar18 = DAT_004420c0;
          }
          else {
            uVar23 = (uint)(uVar12 >> 8);
            uVar17 = uVar12 >> 8 & 0xffffffff;
            if ((uVar23 != 0) && (uVar17 = 0x1f, uVar23 < 0x10000)) {
              uVar4 = 0x1f;
              if (uVar23 != 0) {
                for (; uVar23 >> uVar4 == 0; uVar4 = uVar4 - 1) {
                }
              }
              uVar17 = (ulonglong)
                       (((uint)(uVar12 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                       (0x1f - (uVar4 ^ 0x1f)) * 2);
            }
            uVar23 = (uint)uVar17;
            uVar4 = 1 << ((byte)uVar17 & 0x1f);
            *(uint *)(lVar15 + 0x38) = uVar23;
            *(undefined8 *)(lVar15 + 0x28) = 0;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            if ((uVar9 & uVar4) == 0) {
              DAT_004420a4 = uVar9 | uVar4;
              *(longlong *)(&DAT_004422f8 + uVar17 * 8) = lVar15;
              *(undefined **)(lVar15 + 0x30) = &DAT_004422f8 + uVar17 * 8;
            }
            else {
              bVar26 = 0;
              if (uVar23 != 0x1f) {
                bVar26 = 0x39 - (char)(uVar23 >> 1);
              }
              lVar11 = uVar12 << (bVar26 & 0x3f);
              lVar16 = *(longlong *)(&DAT_004422f8 + uVar17 * 8);
              do {
                lVar20 = lVar16;
                if (uVar12 == (*(ulonglong *)(lVar20 + 8) & 0xfffffffffffffff8)) {
                  lVar16 = *(longlong *)(lVar20 + 0x10);
                  *(longlong *)(lVar16 + 0x18) = lVar15;
                  *(longlong *)(lVar20 + 0x10) = lVar15;
                  *(longlong *)(lVar15 + 0x10) = lVar16;
                  *(longlong *)(lVar15 + 0x18) = lVar20;
                  *(undefined8 *)(lVar15 + 0x30) = 0;
                  puVar18 = DAT_004420c0;
                  goto LAB_00403ad3;
                }
                lVar14 = 4 - (lVar11 >> 0x3f);
                lVar16 = *(longlong *)(lVar20 + lVar14 * 8);
                lVar11 = lVar11 * 2;
              } while (lVar16 != 0);
              *(longlong *)(lVar20 + lVar14 * 8) = lVar15;
              *(longlong *)(lVar15 + 0x30) = lVar20;
            }
            *(longlong *)(lVar15 + 0x18) = lVar15;
            *(longlong *)(lVar15 + 0x10) = lVar15;
            puVar18 = DAT_004420c0;
          }
        }
        goto LAB_00403ad3;
      }
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
  }
LAB_00403291:
  if (DAT_004420a8 < uVar17) {
    if (uVar17 < DAT_004420b0) {
      DAT_004420b0 = DAT_004420b0 - uVar17;
    }
    else {
      if ((((((DAT_00442410 & 1) != 0) && (_DAT_00442478 <= uVar17)) && (DAT_004420b0 != 0)) &&
          ((uVar12 = uVar17 + 0x3e + DAT_00442470 & -DAT_00442470, DAT_00442408 == 0 ||
           ((DAT_004423f8 < DAT_004423f8 + uVar12 && (DAT_004423f8 + uVar12 <= DAT_00442408)))))) &&
         (uVar17 < uVar12)) {
        puVar6 = (ulonglong *)FUN_00404518();
        *puVar6 = 0;
        puVar6[1] = uVar12 - 0x20;
        puVar18 = DAT_004420b8;
        *(undefined8 *)((longlong)puVar6 + (uVar12 - 0x18)) = 0xb;
        *(undefined8 *)((longlong)puVar6 + (uVar12 - 0x10)) = 0;
        if ((puVar18 == (ulonglong *)0x0) || (puVar6 < puVar18)) {
          DAT_004420b8 = puVar6;
        }
        DAT_004423f8 = uVar12 + DAT_004423f8;
        puVar18 = DAT_004420c0;
        if (_DAT_00442400 < DAT_004423f8) {
          _DAT_00442400 = DAT_004423f8;
        }
        goto LAB_00403ad3;
      }
      uVar12 = uVar17 + 0x5f + DAT_00442470 & -DAT_00442470;
      if (uVar12 <= uVar17) {
        return (ulonglong *)0x0;
      }
      uVar19 = DAT_00442470;
      if (DAT_00442408 != 0) {
        if (uVar12 + DAT_004423f8 <= DAT_004423f8) {
          return (ulonglong *)0x0;
        }
        uVar19 = DAT_004423f8;
        if (DAT_00442408 < uVar12 + DAT_004423f8) {
          return (ulonglong *)0x0;
        }
      }
      puVar18 = (ulonglong *)FUN_00404518();
      DAT_004423f8 = DAT_004423f8 + uVar12;
      if (_DAT_00442400 < DAT_004423f8) {
        _DAT_00442400 = DAT_004423f8;
      }
      if (DAT_004420c8 == (ulonglong *)0x0) {
        if ((DAT_004420b8 == (ulonglong *)0x0) || (puVar18 < DAT_004420b8)) {
          DAT_004420b8 = puVar18;
        }
        DAT_00442430 = 1;
        _DAT_004420d8 = 0x80;
        _DAT_004420e0 = DAT_00442460;
        puVar7 = &DAT_004420e8;
        DAT_00442418 = puVar18;
        DAT_00442420 = uVar12;
        do {
          *(undefined **)(puVar7 + 0x18) = puVar7;
          *(undefined **)(puVar7 + 0x10) = puVar7;
          puVar7 = puVar7 + 0x10;
        } while (puVar7 != &DAT_004422e8);
        lVar15 = uVar12 - 0x50;
LAB_00403507:
        FUN_004022a8(uVar19,lVar15);
      }
      else {
        if ((((puVar18 == (ulonglong *)((longlong)DAT_00442418 + DAT_00442420)) &&
             ((DAT_00442430 & 8) == 0)) &&
            (uVar19 = (ulonglong)DAT_00442430 & 0xffffffffffffff01, (DAT_00442430 & 1) != 0)) &&
           ((DAT_00442418 <= DAT_004420c8 && (DAT_004420c8 < puVar18)))) {
          DAT_00442420 = DAT_00442420 + uVar12;
          lVar15 = DAT_004420b0 + uVar12;
          goto LAB_00403507;
        }
        if (puVar18 < DAT_004420b8) {
          DAT_004420b8 = puVar18;
        }
        ppuVar13 = &DAT_00442418;
        if (((DAT_00442418 == (ulonglong *)((longlong)puVar18 + uVar12)) &&
            (bVar26 = (byte)(DAT_00442430 & 8), (DAT_00442430 & 8) == 0)) &&
           ((DAT_00442430 & 1) != 0)) {
          DAT_00442420 = DAT_00442420 + uVar12;
          uVar9 = (uint)DAT_00442418;
          if (((ulonglong)DAT_00442418 & 0xf) != 0) {
            uVar9 = -(uVar9 + 0x10);
          }
          puVar6 = (ulonglong *)((longlong)DAT_00442418 + (ulonglong)(uVar9 & 0xf));
          puVar5 = (ulonglong *)((longlong)puVar18 + uVar17);
          uVar12 = (longlong)puVar6 + (-uVar17 - (longlong)puVar18);
          bVar27 = DAT_004420c8 == puVar6;
          DAT_00442418 = puVar18;
          puVar18[1] = uVar17 | 3;
          if (bVar27) {
            DAT_004420b0 = uVar12 + DAT_004420b0;
            DAT_004420c8 = puVar5;
            puVar5[1] = DAT_004420b0 | 1;
            goto LAB_0040387b;
          }
          if (puVar6 == DAT_004420c0) {
            uVar12 = uVar12 + DAT_004420a8;
            DAT_004420a8 = uVar12;
            DAT_004420c0 = puVar5;
            puVar5[1] = uVar12 | 1;
            *(ulonglong *)((longlong)puVar5 + uVar12) = uVar12;
            goto LAB_0040387b;
          }
          uVar17 = puVar6[1];
          if (((uint)uVar17 & 3) == 1) {
            puVar8 = (ulonglong *)puVar6[3];
            if (uVar17 < 0x100) {
              puVar25 = (ulonglong *)puVar6[2];
              if (puVar25 == puVar8) {
                bVar2 = (byte)(uVar17 >> 3) & 0x1f;
                DAT_004420a0 = DAT_004420a0 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
              }
              else {
                puVar25[3] = (ulonglong)puVar8;
                puVar8[2] = (ulonglong)puVar25;
              }
            }
            else {
              uVar19 = puVar6[6];
              if (puVar6 == puVar8) {
                puVar25 = (ulonglong *)puVar6[5];
                puVar3 = puVar6 + 5;
                if ((ulonglong *)puVar6[5] == (ulonglong *)0x0) {
                  puVar8 = (ulonglong *)puVar6[4];
                  if (puVar8 == (ulonglong *)0x0) goto LAB_0040369f;
                  puVar25 = puVar8;
                  puVar3 = puVar6 + 4;
                }
                do {
                  do {
                    puVar24 = puVar3;
                    puVar8 = puVar25;
                    puVar25 = (ulonglong *)puVar8[5];
                    puVar3 = puVar8 + 5;
                  } while ((ulonglong *)puVar8[5] != (ulonglong *)0x0);
                  puVar25 = (ulonglong *)puVar8[4];
                  puVar3 = puVar8 + 4;
                } while ((ulonglong *)puVar8[4] != (ulonglong *)0x0);
                *puVar24 = 0;
              }
              else {
                uVar10 = puVar6[2];
                *(ulonglong **)(uVar10 + 0x18) = puVar8;
                puVar8[2] = uVar10;
              }
LAB_0040369f:
              if (uVar19 != 0) {
                uVar9 = *(uint *)(puVar6 + 7);
                if (puVar6 == *(ulonglong **)(&DAT_004422f8 + (ulonglong)uVar9 * 8)) {
                  (&DAT_004420a8)[(ulonglong)uVar9 + 0x4a] = (ulonglong)puVar8;
                  if (puVar8 == (ulonglong *)0x0) {
                    bVar2 = (byte)uVar9 & 0x1f;
                    DAT_004420a4 = DAT_004420a4 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
                  }
                  else {
LAB_004036c6:
                    uVar10 = puVar6[4];
                    puVar8[6] = uVar19;
                    if (uVar10 != 0) {
                      puVar8[4] = uVar10;
                      *(ulonglong **)(uVar10 + 0x30) = puVar8;
                    }
                    uVar19 = puVar6[5];
                    if (uVar19 != 0) {
                      puVar8[5] = uVar19;
                      *(ulonglong **)(uVar19 + 0x30) = puVar8;
                    }
                  }
                }
                else {
                  if (puVar6 == *(ulonglong **)(uVar19 + 0x20)) {
                    *(ulonglong **)(uVar19 + 0x20) = puVar8;
                  }
                  else {
                    *(ulonglong **)(uVar19 + 0x28) = puVar8;
                  }
                  if (puVar8 != (ulonglong *)0x0) goto LAB_004036c6;
                }
              }
            }
            puVar6 = (ulonglong *)((longlong)puVar6 + (uVar17 & 0xfffffffffffffff8));
            uVar12 = uVar12 + (uVar17 & 0xfffffffffffffff8);
          }
          puVar6[1] = puVar6[1] & 0xfffffffffffffffe;
          puVar5[1] = uVar12 | 1;
          *(ulonglong *)((longlong)puVar5 + uVar12) = uVar12;
          uVar9 = DAT_004420a4;
          if (uVar12 < 0x100) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004420a0 & uVar9) == 0) {
              DAT_004420a0 = DAT_004420a0 | uVar9;
              puVar7 = &DAT_004420e8 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_004420f8)[uVar17];
            }
            (&DAT_004420f8)[uVar17] = puVar5;
            *(ulonglong **)(puVar7 + 0x18) = puVar5;
            puVar5[2] = (ulonglong)puVar7;
            puVar5[3] = (ulonglong)(&DAT_004420e8 + uVar17 * 8);
          }
          else {
            uVar23 = (uint)(uVar12 >> 8);
            uVar17 = uVar12 >> 8 & 0xffffffff;
            if ((uVar23 != 0) && (uVar17 = 0x1f, uVar23 < 0x10000)) {
              uVar4 = 0x1f;
              if (uVar23 != 0) {
                for (; uVar23 >> uVar4 == 0; uVar4 = uVar4 - 1) {
                }
              }
              uVar17 = (ulonglong)
                       (((uint)(uVar12 >> (0x26U - (char)(uVar4 ^ 0x1f) & 0x3f)) & 1) +
                       (0x1f - (uVar4 ^ 0x1f)) * 2);
            }
            uVar23 = (uint)uVar17;
            uVar4 = 1 << ((byte)uVar17 & 0x1f);
            *(uint *)(puVar5 + 7) = uVar23;
            puVar5[5] = 0;
            puVar5[4] = 0;
            if ((uVar9 & uVar4) == 0) {
              DAT_004420a4 = uVar9 | uVar4;
              *(ulonglong **)(&DAT_004422f8 + uVar17 * 8) = puVar5;
              puVar5[6] = (ulonglong)(&DAT_004422f8 + uVar17 * 8);
            }
            else {
              if (uVar23 != 0x1f) {
                bVar26 = 0x39 - (char)(uVar23 >> 1);
              }
              lVar15 = uVar12 << (bVar26 & 0x3f);
              uVar17 = *(ulonglong *)(&DAT_004422f8 + uVar17 * 8);
              do {
                uVar19 = uVar17;
                if (uVar12 == (*(ulonglong *)(uVar19 + 8) & 0xfffffffffffffff8)) {
                  uVar12 = *(ulonglong *)(uVar19 + 0x10);
                  *(ulonglong **)(uVar12 + 0x18) = puVar5;
                  *(ulonglong **)(uVar19 + 0x10) = puVar5;
                  puVar5[2] = uVar12;
                  puVar5[3] = uVar19;
                  puVar5[6] = 0;
                  goto LAB_0040387b;
                }
                lVar16 = 4 - (lVar15 >> 0x3f);
                uVar17 = *(ulonglong *)(uVar19 + lVar16 * 8);
                lVar15 = lVar15 * 2;
              } while (uVar17 != 0);
              *(ulonglong **)(uVar19 + lVar16 * 8) = puVar5;
              puVar5[6] = uVar19;
            }
            puVar5[3] = (ulonglong)puVar5;
            puVar5[2] = (ulonglong)puVar5;
          }
LAB_0040387b:
          return puVar18 + 2;
        }
        while ((DAT_004420c8 < *ppuVar13 ||
               (puVar6 = (ulonglong *)((longlong)*ppuVar13 + (longlong)ppuVar13[1]),
               puVar6 <= DAT_004420c8))) {
          ppuVar13 = (ulonglong **)ppuVar13[2];
          if (ppuVar13 == (ulonglong **)0x0) {
            do {
              invalidInstructionException();
            } while( true );
          }
        }
        uVar9 = (uint)((longlong)puVar6 - 0x4fU);
        if (((longlong)puVar6 - 0x4fU & 0xf) != 0) {
          uVar9 = -uVar9;
        }
        puVar5 = (ulonglong *)((longlong)puVar6 + ((ulonglong)(uVar9 & 0xf) - 0x5f));
        if (puVar5 < DAT_004420c8 + 4) {
          puVar5 = DAT_004420c8;
        }
        puVar25 = DAT_004420c8;
        FUN_004022a8(ppuVar13,uVar12 - 0x50);
        DAT_00442428 = puVar5 + 2;
        puVar5[1] = 0x33;
        puVar21 = &DAT_00442418;
        puVar8 = puVar5 + 2;
        for (lVar15 = 8; lVar15 != 0; lVar15 = lVar15 + -1) {
          *(undefined4 *)puVar8 = *(undefined4 *)puVar21;
          puVar21 = (undefined8 *)((longlong)puVar21 + 4);
          puVar8 = (ulonglong *)((longlong)puVar8 + 4);
        }
        puVar8 = puVar5 + 7;
        DAT_00442430 = 1;
        DAT_00442418 = puVar18;
        DAT_00442420 = uVar12;
        do {
          *puVar8 = 0xb;
          puVar8 = puVar8 + 1;
        } while (puVar8 < puVar6);
        if (puVar25 != puVar5) {
          puVar5[1] = puVar5[1] & 0xfffffffffffffffe;
          uVar12 = (longlong)puVar5 - (longlong)puVar25;
          puVar25[1] = uVar12 | 1;
          *puVar5 = uVar12;
          uVar9 = DAT_004420a4;
          if (uVar12 < 0x100) {
            uVar19 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004420a0 & uVar9) == 0) {
              DAT_004420a0 = DAT_004420a0 | uVar9;
              puVar7 = &DAT_004420e8 + uVar19 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_004420f8)[uVar19];
            }
            (&DAT_004420f8)[uVar19] = puVar25;
            *(ulonglong **)(puVar7 + 0x18) = puVar25;
            puVar25[2] = (ulonglong)puVar7;
            puVar25[3] = (ulonglong)(&DAT_004420e8 + uVar19 * 8);
          }
          else {
            uVar4 = (uint)(uVar12 >> 8);
            uVar23 = uVar4;
            if ((uVar4 != 0) && (uVar23 = 0x1f, uVar4 < 0x10000)) {
              uVar23 = 0x1f;
              if (uVar4 != 0) {
                for (; uVar4 >> uVar23 == 0; uVar23 = uVar23 - 1) {
                }
              }
              uVar23 = ((uint)(uVar12 >> (0x26U - (char)(uVar23 ^ 0x1f) & 0x3f)) & 1) +
                       (0x1f - (uVar23 ^ 0x1f)) * 2;
            }
            uVar4 = 1 << ((byte)uVar23 & 0x1f);
            *(uint *)(puVar25 + 7) = uVar23;
            puVar25[5] = 0;
            puVar25[4] = 0;
            uVar19 = (ulonglong)uVar23;
            if ((uVar9 & uVar4) == 0) {
              DAT_004420a4 = uVar9 | uVar4;
              *(ulonglong **)(&DAT_004422f8 + uVar19 * 8) = puVar25;
              puVar25[6] = (ulonglong)(&DAT_004422f8 + uVar19 * 8);
            }
            else {
              bVar26 = 0;
              if (uVar23 != 0x1f) {
                bVar26 = 0x39 - (char)(uVar23 >> 1);
              }
              lVar15 = uVar12 << (bVar26 & 0x3f);
              uVar19 = *(ulonglong *)(&DAT_004422f8 + uVar19 * 8);
              do {
                uVar10 = uVar19;
                if (uVar12 == (*(ulonglong *)(uVar10 + 8) & 0xfffffffffffffff8)) {
                  uVar12 = *(ulonglong *)(uVar10 + 0x10);
                  *(ulonglong **)(uVar12 + 0x18) = puVar25;
                  *(ulonglong **)(uVar10 + 0x10) = puVar25;
                  puVar25[2] = uVar12;
                  puVar25[3] = uVar10;
                  puVar25[6] = 0;
                  goto LAB_00403a9b;
                }
                lVar16 = 4 - (lVar15 >> 0x3f);
                uVar19 = *(ulonglong *)(uVar10 + lVar16 * 8);
                lVar15 = lVar15 * 2;
              } while (uVar19 != 0);
              *(ulonglong **)(uVar10 + lVar16 * 8) = puVar25;
              puVar25[6] = uVar10;
            }
            puVar25[3] = (ulonglong)puVar25;
            puVar25[2] = (ulonglong)puVar25;
          }
        }
      }
LAB_00403a9b:
      if (DAT_004420b0 <= uVar17) {
        FUN_004018e7();
        return (ulonglong *)0x0;
      }
      DAT_004420b0 = DAT_004420b0 - uVar17;
    }
    puVar18 = DAT_004420c8;
    DAT_004420c8 = (ulonglong *)((longlong)DAT_004420c8 + uVar17);
    DAT_004420c8[1] = DAT_004420b0 | 1;
  }
  else {
    uVar12 = DAT_004420a8 - uVar17;
    puVar6 = (ulonglong *)((longlong)DAT_004420c0 + DAT_004420a8);
    if (uVar12 < 0x20) {
      uVar12 = DAT_004420a8 | 3;
      DAT_004420a8 = 0;
      DAT_004420c0 = (ulonglong *)0x0;
      puVar18[1] = uVar12;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar6 | 1;
      puVar6 = puVar18;
      puVar18 = DAT_004420c0;
      goto LAB_00403ad3;
    }
    DAT_004420c0 = (ulonglong *)((longlong)DAT_004420c0 + uVar17);
    DAT_004420a8 = uVar12;
    DAT_004420c0[1] = uVar12 | 1;
    *puVar6 = uVar12;
  }
  puVar18[1] = uVar17 | 3;
  puVar6 = puVar18;
  puVar18 = DAT_004420c0;
LAB_00403ad3:
  DAT_004420c0 = puVar18;
  return puVar6 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00403ae8(void)

{
  ulonglong uVar1;
  ulonglong **ppuVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  byte bVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong **ppuVar9;
  ulonglong **ppuVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong **ppuVar16;
  uint uVar17;
  ulonglong **ppuVar18;
  ulonglong **ppuVar19;
  ulonglong **ppuVar20;
  bool bVar21;
  
  if (unaff_RDI == 0) {
    return in_RAX;
  }
  ppuVar16 = (ulonglong **)(unaff_RDI + -0x10);
  uVar4 = *(ulonglong *)(unaff_RDI + -8);
  uVar5 = uVar4 & 0xfffffffffffffff8;
  ppuVar20 = (ulonglong **)((longlong)ppuVar16 + uVar5);
  if ((uVar4 & 1) == 0) {
    uVar1 = *(ulonglong *)(unaff_RDI + -0x10);
    ppuVar16 = (ulonglong **)((longlong)ppuVar16 - uVar1);
    if ((uVar4 & 3) == 0) {
      iVar3 = FUN_0040452c(uVar4 & 0xffffffffffffff03);
      if (iVar3 != 0) {
        return unaff_RSI;
      }
      DAT_004423f8 = DAT_004423f8 - (uVar5 + 0x20 + uVar1);
      return unaff_RSI;
    }
    uVar5 = uVar5 + uVar1;
    if (DAT_004420c0 == ppuVar16) {
      if (((uint)ppuVar20[1] & 3) == 3) {
        DAT_004420a8 = uVar5;
        ppuVar20[1] = (ulonglong *)((ulonglong)ppuVar20[1] & 0xfffffffffffffffe);
        ppuVar16[1] = (ulonglong *)(uVar5 | 1);
        *ppuVar20 = (ulonglong *)uVar5;
        return unaff_RSI;
      }
    }
    else {
      ppuVar9 = (ulonglong **)ppuVar16[3];
      if (uVar1 < 0x100) {
        ppuVar10 = (ulonglong **)ppuVar16[2];
        if (ppuVar10 == ppuVar9) {
          bVar6 = (byte)(uVar1 >> 3) & 0x1f;
          DAT_004420a0 = DAT_004420a0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        }
        else {
          ppuVar10[3] = (ulonglong *)ppuVar9;
          ppuVar9[2] = (ulonglong *)ppuVar10;
        }
      }
      else {
        puVar11 = ppuVar16[6];
        if (ppuVar16 == ppuVar9) {
          ppuVar10 = (ulonglong **)ppuVar16[5];
          ppuVar2 = ppuVar16 + 5;
          if ((ulonglong **)ppuVar16[5] == (ulonglong **)0x0) {
            ppuVar9 = (ulonglong **)ppuVar16[4];
            if (ppuVar9 == (ulonglong **)0x0) goto LAB_00403bea;
            ppuVar10 = ppuVar9;
            ppuVar2 = ppuVar16 + 4;
          }
          do {
            do {
              ppuVar18 = ppuVar2;
              ppuVar9 = ppuVar10;
              ppuVar10 = (ulonglong **)ppuVar9[5];
              ppuVar2 = ppuVar9 + 5;
            } while ((ulonglong **)ppuVar9[5] != (ulonglong **)0x0);
            ppuVar10 = (ulonglong **)ppuVar9[4];
            ppuVar2 = ppuVar9 + 4;
          } while ((ulonglong **)ppuVar9[4] != (ulonglong **)0x0);
          *ppuVar18 = (ulonglong *)0x0;
        }
        else {
          puVar13 = ppuVar16[2];
          puVar13[3] = (ulonglong)ppuVar9;
          ppuVar9[2] = puVar13;
        }
LAB_00403bea:
        if (puVar11 != (ulonglong *)0x0) {
          uVar15 = *(uint *)(ppuVar16 + 7);
          if (*(ulonglong ***)(&DAT_004422f8 + (ulonglong)uVar15 * 8) == ppuVar16) {
            (&DAT_004420a8)[(ulonglong)uVar15 + 0x4a] = (ulonglong)ppuVar9;
            if (ppuVar9 == (ulonglong **)0x0) {
              bVar6 = (byte)uVar15 & 0x1f;
              DAT_004420a4 = DAT_004420a4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            }
            else {
LAB_00403c15:
              puVar13 = ppuVar16[4];
              ppuVar9[6] = puVar11;
              if (puVar13 != (ulonglong *)0x0) {
                ppuVar9[4] = puVar13;
                puVar13[6] = (ulonglong)ppuVar9;
              }
              puVar11 = ppuVar16[5];
              if (puVar11 != (ulonglong *)0x0) {
                ppuVar9[5] = puVar11;
                puVar11[6] = (ulonglong)ppuVar9;
              }
            }
          }
          else {
            if ((ulonglong **)puVar11[4] == ppuVar16) {
              puVar11[4] = (ulonglong)ppuVar9;
            }
            else {
              puVar11[5] = (ulonglong)ppuVar9;
            }
            if (ppuVar9 != (ulonglong **)0x0) goto LAB_00403c15;
          }
        }
      }
    }
  }
  ppuVar9 = DAT_004420c0;
  puVar11 = ppuVar20[1];
  if (((ulonglong)puVar11 & 2) != 0) {
    ppuVar20[1] = (ulonglong *)((ulonglong)puVar11 & 0xfffffffffffffffe);
    ppuVar16[1] = (ulonglong *)(uVar5 | 1);
    *(ulonglong *)((longlong)ppuVar16 + uVar5) = uVar5;
    goto LAB_00403e84;
  }
  if (DAT_004420c8 != ppuVar20) {
    if (ppuVar20 == DAT_004420c0) {
      uVar5 = uVar5 + DAT_004420a8;
      DAT_004420a8 = uVar5;
      DAT_004420c0 = ppuVar16;
      ppuVar16[1] = (ulonglong *)(uVar5 | 1);
      *(ulonglong *)((longlong)ppuVar16 + uVar5) = uVar5;
      return unaff_RSI;
    }
    ppuVar10 = (ulonglong **)ppuVar20[3];
    uVar5 = uVar5 + ((ulonglong)puVar11 & 0xfffffffffffffff8);
    if (((ulonglong)puVar11 & 0xfffffffffffffff8) < 0xf9) {
      ppuVar20 = (ulonglong **)ppuVar20[2];
      if (ppuVar20 == ppuVar10) {
        bVar6 = (byte)((ulonglong)puVar11 >> 3) & 0x1f;
        DAT_004420a0 = DAT_004420a0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
      else {
        ppuVar20[3] = (ulonglong *)ppuVar10;
        ppuVar10[2] = (ulonglong *)ppuVar20;
      }
    }
    else {
      puVar11 = ppuVar20[6];
      if (ppuVar20 == ppuVar10) {
        ppuVar2 = (ulonglong **)ppuVar20[5];
        ppuVar18 = ppuVar20 + 5;
        if ((ulonglong **)ppuVar20[5] == (ulonglong **)0x0) {
          ppuVar10 = (ulonglong **)ppuVar20[4];
          if (ppuVar10 == (ulonglong **)0x0) goto LAB_00403dd8;
          ppuVar2 = ppuVar10;
          ppuVar18 = ppuVar20 + 4;
        }
        do {
          do {
            ppuVar19 = ppuVar18;
            ppuVar10 = ppuVar2;
            ppuVar2 = (ulonglong **)ppuVar10[5];
            ppuVar18 = ppuVar10 + 5;
          } while ((ulonglong **)ppuVar10[5] != (ulonglong **)0x0);
          ppuVar2 = (ulonglong **)ppuVar10[4];
          ppuVar18 = ppuVar10 + 4;
        } while ((ulonglong **)ppuVar10[4] != (ulonglong **)0x0);
        *ppuVar19 = (ulonglong *)0x0;
      }
      else {
        puVar13 = ppuVar20[2];
        puVar13[3] = (ulonglong)ppuVar10;
        ppuVar10[2] = puVar13;
      }
LAB_00403dd8:
      if (puVar11 != (ulonglong *)0x0) {
        uVar15 = *(uint *)(ppuVar20 + 7);
        if (*(ulonglong ***)(&DAT_004422f8 + (ulonglong)uVar15 * 8) == ppuVar20) {
          (&DAT_004420a8)[(ulonglong)uVar15 + 0x4a] = (ulonglong)ppuVar10;
          if (ppuVar10 == (ulonglong **)0x0) {
            bVar6 = (byte)uVar15 & 0x1f;
            DAT_004420a4 = DAT_004420a4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
LAB_00403dff:
            puVar13 = ppuVar20[4];
            ppuVar10[6] = puVar11;
            if (puVar13 != (ulonglong *)0x0) {
              ppuVar10[4] = puVar13;
              puVar13[6] = (ulonglong)ppuVar10;
            }
            puVar11 = ppuVar20[5];
            if (puVar11 != (ulonglong *)0x0) {
              ppuVar10[5] = puVar11;
              puVar11[6] = (ulonglong)ppuVar10;
            }
          }
        }
        else {
          if ((ulonglong **)puVar11[4] == ppuVar20) {
            puVar11[4] = (ulonglong)ppuVar10;
          }
          else {
            puVar11[5] = (ulonglong)ppuVar10;
          }
          if (ppuVar10 != (ulonglong **)0x0) goto LAB_00403dff;
        }
      }
    }
    ppuVar16[1] = (ulonglong *)(uVar5 | 1);
    *(ulonglong *)((longlong)ppuVar16 + uVar5) = uVar5;
    if (ppuVar16 == ppuVar9) {
      DAT_004420a8 = uVar5;
      return unaff_RSI;
    }
LAB_00403e84:
    uVar15 = DAT_004420a4;
    if (uVar5 < 0x100) {
      uVar4 = (ulonglong)(uint)((int)(uVar5 >> 3) * 2);
      uVar15 = 1 << ((byte)(uVar5 >> 3) & 0x1f);
      if ((DAT_004420a0 & uVar15) == 0) {
        DAT_004420a0 = DAT_004420a0 | uVar15;
        puVar11 = (ulonglong *)(&DAT_004420e8 + uVar4 * 8);
      }
      else {
        puVar11 = (ulonglong *)(&DAT_004420f8)[uVar4];
      }
      (&DAT_004420f8)[uVar4] = ppuVar16;
      puVar11[3] = (ulonglong)ppuVar16;
      ppuVar16[2] = puVar11;
      ppuVar16[3] = (ulonglong *)(&DAT_004420e8 + uVar4 * 8);
    }
    else {
      uVar8 = (uint)(uVar5 >> 8);
      uVar4 = uVar5 >> 8 & 0xffffffff;
      if ((uVar8 != 0) && (uVar4 = 0x1f, uVar8 < 0x10000)) {
        uVar17 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar17 == 0; uVar17 = uVar17 - 1) {
          }
        }
        uVar4 = (ulonglong)
                (((uint)(uVar5 >> (0x26U - (char)(uVar17 ^ 0x1f) & 0x3f)) & 1) +
                (0x1f - (uVar17 ^ 0x1f)) * 2);
      }
      uVar8 = (uint)uVar4;
      uVar17 = 1 << ((byte)uVar4 & 0x1f);
      *(uint *)(ppuVar16 + 7) = uVar8;
      ppuVar16[5] = (ulonglong *)0x0;
      ppuVar16[4] = (ulonglong *)0x0;
      if ((uVar15 & uVar17) == 0) {
        DAT_004420a4 = uVar15 | uVar17;
        *(ulonglong ***)(&DAT_004422f8 + uVar4 * 8) = ppuVar16;
        ppuVar16[6] = (ulonglong *)(&DAT_004422f8 + uVar4 * 8);
      }
      else {
        bVar6 = 0;
        if (uVar8 != 0x1f) {
          bVar6 = 0x39 - (char)(uVar8 >> 1);
        }
        lVar14 = uVar5 << (bVar6 & 0x3f);
        puVar11 = *(ulonglong **)(&DAT_004422f8 + uVar4 * 8);
        do {
          puVar13 = puVar11;
          if ((puVar13[1] & 0xfffffffffffffff8) == uVar5) {
            puVar11 = (ulonglong *)puVar13[2];
            puVar11[3] = (ulonglong)ppuVar16;
            puVar13[2] = (ulonglong)ppuVar16;
            ppuVar16[2] = puVar11;
            ppuVar16[3] = puVar13;
            ppuVar16[6] = (ulonglong *)0x0;
            goto LAB_00403fd2;
          }
          lVar12 = 4 - (lVar14 >> 0x3f);
          lVar14 = lVar14 * 2;
          puVar11 = (ulonglong *)puVar13[lVar12];
        } while ((ulonglong *)puVar13[lVar12] != (ulonglong *)0x0);
        puVar13[lVar12] = (ulonglong)ppuVar16;
        ppuVar16[6] = puVar13;
      }
      ppuVar16[3] = (ulonglong *)ppuVar16;
      ppuVar16[2] = (ulonglong *)ppuVar16;
LAB_00403fd2:
      _DAT_004420d8 = _DAT_004420d8 + -1;
      if (_DAT_004420d8 == 0) {
        uVar4 = FUN_004022ef();
        return uVar4;
      }
    }
    return unaff_RSI;
  }
  uVar5 = uVar5 + DAT_004420b0;
  bVar21 = ppuVar16 == DAT_004420c0;
  DAT_004420b0 = uVar5;
  DAT_004420c8 = ppuVar16;
  ppuVar16[1] = (ulonglong *)(uVar5 | 1);
  if (bVar21) {
    DAT_004420c0 = (ulonglong **)0x0;
    DAT_004420a8 = 0;
  }
  if (uVar5 <= DAT_004420d0) {
    return unaff_RSI;
  }
  if (DAT_004420c8 != (ulonglong **)0x0) {
    if (0x50 < DAT_004420b0) {
      ppuVar16 = (ulonglong **)&DAT_00442418;
      ppuVar20 = ppuVar16;
      do {
        ppuVar9 = (ulonglong **)*ppuVar20;
        if (ppuVar9 <= DAT_004420c8) {
          puVar11 = ppuVar20[1];
          if (DAT_004420c8 < (ulonglong **)((longlong)ppuVar9 + (longlong)puVar11)) {
            if ((((*(uint *)(ppuVar20 + 3) & 8) != 0) || ((*(uint *)(ppuVar20 + 3) & 1) == 0)) ||
               (puVar13 = (ulonglong *)
                          ((((DAT_004420b0 + DAT_00442470) - 0x51) / DAT_00442470 - 1) *
                          DAT_00442470),
               puVar11 <= puVar13 && (longlong)puVar13 - (longlong)puVar11 != 0)) break;
            goto LAB_00402646;
          }
        }
        ppuVar20 = (ulonglong **)ppuVar20[2];
        if (ppuVar20 == (ulonglong **)0x0) {
          do {
            invalidInstructionException();
          } while( true );
        }
      } while( true );
    }
    goto LAB_004025e0;
  }
  goto LAB_004025c0;
  while (ppuVar16 = (ulonglong **)ppuVar16[2], ppuVar16 != (ulonglong **)0x0) {
LAB_00402646:
    if ((ppuVar9 <= ppuVar16) && (ppuVar16 < (ulonglong **)((longlong)ppuVar9 + (longlong)puVar11)))
    goto LAB_004025e0;
  }
  uVar7 = 0;
  lVar14 = FUN_00404abb();
  if ((lVar14 == -1) && (iVar3 = FUN_0040452c(uVar7), iVar3 != 0)) {
LAB_004025e0:
    puVar13 = (ulonglong *)0x0;
  }
  else if (puVar13 != (ulonglong *)0x0) {
    ppuVar20[1] = (ulonglong *)((longlong)ppuVar20[1] - (longlong)puVar13);
    DAT_004423f8 = DAT_004423f8 - (longlong)puVar13;
    FUN_004022a8(uVar7,DAT_004420b0 - (longlong)puVar13);
  }
  uVar4 = FUN_004022ef();
  lVar14 = (longlong)puVar13 + uVar4;
  if (lVar14 != 0) goto LAB_004026d7;
  if (DAT_004420d0 < DAT_004420b0) {
    DAT_004420d0 = 0xffffffffffffffff;
    goto LAB_004026d7;
  }
LAB_004025c0:
  lVar14 = 0;
LAB_004026d7:
  return (ulonglong)(lVar14 != 0);
}



// WARNING: Type propagation algorithm not settling

longlong * FUN_00404049(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *unaff_RSI;
  uint *unaff_RDI;
  
  uVar9 = unaff_RSI[1];
  uVar11 = uVar9 & 0xfffffffffffffff8;
  if ((uVar9 & 3) == 0) {
    if (param_2 < 0x100) {
      return (longlong *)0x0;
    }
    if ((param_2 + 8 <= uVar11) && (uVar11 - param_2 <= (ulonglong)(DAT_00442470 * 2))) {
      return unaff_RSI;
    }
    lVar4 = *unaff_RSI;
    uVar13 = DAT_00442470 + 0x3e + param_2 & -DAT_00442470;
    uVar9 = FUN_00404abb();
    if (uVar9 == 0xffffffffffffffff) {
      return (longlong *)0x0;
    }
    plVar1 = (longlong *)(uVar9 + lVar4);
    lVar12 = uVar13 - lVar4;
    uVar5 = *(ulonglong *)(unaff_RDI + 6);
    plVar1[1] = lVar12 + -0x20;
    *(undefined8 *)((longlong)plVar1 + lVar12 + -0x18) = 0xb;
    *(undefined8 *)((longlong)plVar1 + lVar12 + -0x10) = 0;
    if (uVar9 < uVar5) {
      *(ulonglong *)(unaff_RDI + 6) = uVar9;
    }
    uVar9 = (uVar13 + *(longlong *)(unaff_RDI + 0xd6)) - (uVar11 + 0x20 + lVar4);
    *(ulonglong *)(unaff_RDI + 0xd6) = uVar9;
    if (*(ulonglong *)(unaff_RDI + 0xd8) <= uVar9 && uVar9 != *(ulonglong *)(unaff_RDI + 0xd8)) {
      *(ulonglong *)(unaff_RDI + 0xd8) = uVar9;
      return plVar1;
    }
    return plVar1;
  }
  lVar4 = (longlong)unaff_RSI + uVar11;
  uVar14 = (uint)uVar9;
  if (param_2 <= uVar11) {
    uVar11 = uVar11 - param_2;
    if (uVar11 < 0x20) {
      return unaff_RSI;
    }
    unaff_RSI[1] = param_2 | uVar14 & 1 | 2;
    *(ulonglong *)((longlong)unaff_RSI + param_2 + 8) = uVar11 | 3;
    *(ulonglong *)(lVar4 + 8) = *(ulonglong *)(lVar4 + 8) | 1;
    goto LAB_004043c1;
  }
  if (*(longlong *)(unaff_RDI + 10) == lVar4) {
    if (uVar11 + *(longlong *)(unaff_RDI + 4) <= param_2) {
      return (longlong *)0x0;
    }
    uVar9 = (uVar11 + *(longlong *)(unaff_RDI + 4)) - param_2;
    unaff_RSI[1] = uVar14 & 1 | param_2 | 2;
    *(ulonglong *)((longlong)unaff_RSI + param_2 + 8) = uVar9 | 1;
    *(ulonglong *)(unaff_RDI + 10) = (longlong)unaff_RSI + param_2;
    *(ulonglong *)(unaff_RDI + 4) = uVar9;
    return unaff_RSI;
  }
  if (*(longlong *)(unaff_RDI + 8) == lVar4) {
    uVar11 = *(longlong *)(unaff_RDI + 2) + uVar11;
    if (uVar11 < param_2) {
      return (longlong *)0x0;
    }
    puVar2 = (ulonglong *)((longlong)unaff_RSI + uVar11);
    uVar9 = uVar11 - param_2;
    if (uVar9 < 0x20) {
      unaff_RSI[1] = uVar11 | uVar14 & 1 | 2;
      puVar2[1] = puVar2[1] | 1;
      *(undefined8 *)(unaff_RDI + 2) = 0;
      *(undefined8 *)(unaff_RDI + 8) = 0;
      return unaff_RSI;
    }
    unaff_RSI[1] = uVar14 & 1 | param_2 | 2;
    *(ulonglong *)((longlong)unaff_RSI + param_2 + 8) = uVar9 | 1;
    *puVar2 = uVar9;
    puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
    *(ulonglong *)(unaff_RDI + 2) = uVar9;
    *(ulonglong *)(unaff_RDI + 8) = (longlong)unaff_RSI + param_2;
    return unaff_RSI;
  }
  uVar9 = *(ulonglong *)(lVar4 + 8);
  if ((uVar9 & 2) != 0) {
    return (longlong *)0x0;
  }
  uVar13 = uVar11 + (uVar9 & 0xfffffffffffffff8);
  if (uVar13 < param_2) {
    return (longlong *)0x0;
  }
  lVar12 = *(longlong *)(lVar4 + 0x18);
  uVar11 = uVar13 - param_2;
  param_1 = (undefined8 *)(uVar9 >> 3);
  if ((uVar9 & 0xfffffffffffffff8) < 0xf9) {
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (lVar4 == lVar12) {
      bVar8 = (byte)param_1 & 0x1f;
      *unaff_RDI = *unaff_RDI & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    }
    else {
      *(longlong *)(lVar4 + 0x18) = lVar12;
      *(longlong *)(lVar12 + 0x10) = lVar4;
    }
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == lVar12) {
      param_1 = (undefined8 *)(lVar4 + 0x28);
      lVar7 = *(longlong *)(lVar4 + 0x28);
      if (*(longlong *)(lVar4 + 0x28) == 0) {
        lVar12 = *(longlong *)(lVar4 + 0x20);
        if (lVar12 == 0) goto LAB_00404309;
        param_1 = (undefined8 *)(lVar4 + 0x20);
        lVar7 = lVar12;
      }
      do {
        do {
          lVar12 = lVar7;
          puVar10 = param_1;
          param_1 = (undefined8 *)(lVar12 + 0x28);
          lVar7 = *(longlong *)(lVar12 + 0x28);
        } while (*(longlong *)(lVar12 + 0x28) != 0);
        param_1 = (undefined8 *)(lVar12 + 0x20);
        lVar7 = *(longlong *)(lVar12 + 0x20);
      } while (*(longlong *)(lVar12 + 0x20) != 0);
      *puVar10 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar4 + 0x10);
      *(longlong *)(lVar7 + 0x18) = lVar12;
      *(longlong *)(lVar12 + 0x10) = lVar7;
    }
LAB_00404309:
    if (lVar6 != 0) {
      uVar3 = *(uint *)(lVar4 + 0x38);
      param_1 = (undefined8 *)(ulonglong)uVar3;
      if (*(longlong *)(unaff_RDI + (longlong)param_1 * 2 + 0x96) == lVar4) {
        *(longlong *)(unaff_RDI + (longlong)param_1 * 2 + 0x96) = lVar12;
        if (lVar12 == 0) {
          bVar8 = (byte)uVar3 & 0x1f;
          unaff_RDI[1] = unaff_RDI[1] & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
        }
        else {
LAB_0040432e:
          lVar7 = *(longlong *)(lVar4 + 0x20);
          *(longlong *)(lVar12 + 0x30) = lVar6;
          if (lVar7 != 0) {
            *(longlong *)(lVar12 + 0x20) = lVar7;
            *(longlong *)(lVar7 + 0x30) = lVar12;
          }
          lVar4 = *(longlong *)(lVar4 + 0x28);
          if (lVar4 != 0) {
            *(longlong *)(lVar12 + 0x28) = lVar4;
            *(longlong *)(lVar4 + 0x30) = lVar12;
          }
        }
      }
      else {
        if (*(longlong *)(lVar6 + 0x20) == lVar4) {
          *(longlong *)(lVar6 + 0x20) = lVar12;
        }
        else {
          *(longlong *)(lVar6 + 0x28) = lVar12;
        }
        if (lVar12 != 0) goto LAB_0040432e;
      }
    }
  }
  if (uVar11 < 0x20) {
    unaff_RSI[1] = uVar14 & 1 | uVar13 | 2;
    puVar2 = (ulonglong *)((longlong)unaff_RSI + uVar13 + 8);
    *puVar2 = *puVar2 | 1;
    return unaff_RSI;
  }
  unaff_RSI[1] = uVar14 & 1 | param_2 | 2;
  *(ulonglong *)((longlong)unaff_RSI + param_2 + 8) = uVar11 | 3;
  puVar2 = (ulonglong *)((longlong)unaff_RSI + uVar13 + 8);
  *puVar2 = *puVar2 | 1;
LAB_004043c1:
  FUN_004026e8(param_1,uVar11);
  return unaff_RSI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404491(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (DAT_00442460 == 0) {
    uVar1 = 0x10000;
    if (0xffff < DAT_00443c68) {
      uVar1 = DAT_00443c68;
    }
    uVar2 = (ulonglong)uVar1;
    if (((ulonglong)(ulonglong *)(uVar2 - 1) & uVar2) != 0) {
      uVar2 = FUN_00401000(param_1,(ulonglong *)(uVar2 - 1));
    }
    _DAT_00442468 = 0x1000;
    _DAT_00442478 = 0x40000;
    DAT_00442480 = 0xa00000;
    _DAT_00442488 = 5;
    _DAT_00442410 = 5;
    DAT_00442460 = _DAT_00440000 & 0xfffffffffffffff8 | 8;
    DAT_00442470 = uVar2;
  }
  return;
}



void FUN_00404518(void)

{
  FUN_0040481d();
  return;
}



void FUN_0040452c(undefined8 param_1)

{
  FUN_00404ac1(param_1);
  return;
}



undefined8 FUN_00404540(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  if (DAT_004424a0 == (uint *)0x0) {
    DAT_004424a0 = &DAT_004424a8;
  }
  puVar2 = DAT_004424a0;
  if (*DAT_004424a0 == 0xffffffff) {
    puVar4 = (uint *)FUN_00402296();
    if (puVar4 == (uint *)0x0) {
      uVar5 = FUN_004018e7();
      return uVar5;
    }
    *(uint **)(puVar4 + 2) = puVar2;
    DAT_004424a0 = puVar4;
  }
  puVar2 = DAT_004424a0;
  uVar3 = ~*DAT_004424a0;
  uVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  *DAT_004424a0 = *DAT_004424a0 | 1 << (uVar1 & 0x1f);
  *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 4) = unaff_RDI;
  *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 6) = unaff_RSI;
  *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 8) = param_2;
  return 0;
}



undefined8 FUN_004045d5(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong unaff_RDI;
  
  puVar1 = DAT_004424a0;
  puVar3 = DAT_004424a0;
joined_r0x004045f1:
  do {
    DAT_004424a0 = puVar3;
    if (puVar1 == (uint *)0x0) {
      return param_2;
    }
    uVar4 = *puVar1;
    do {
      do {
        if (uVar4 == 0) {
          puVar1 = *(uint **)(puVar1 + 2);
          puVar3 = DAT_004424a0;
          if ((unaff_RDI == 0) && (puVar3 = puVar1, puVar1 != (uint *)0x0)) {
            FUN_0040229c();
          }
          goto joined_r0x004045f1;
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
    puVar1 = DAT_004424a0;
    puVar3 = DAT_004424a0;
  } while( true );
}



undefined8 FUN_0040466a(longlong param_1,ulonglong param_2)

{
  undefined auVar1 [16];
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = 0;
  lVar3 = param_1;
  FUN_004047b0(param_1);
  bVar2 = FUN_004047b0(lVar3);
  if (bVar2) {
    lVar4 = *unaff_RDI;
  }
  uVar5 = *unaff_RSI;
  if (*unaff_RDI == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    uVar6 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / auVar1,0);
    uVar7 = 4;
    if (3 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = (uVar5 >> 1) + uVar5;
  }
  if (uVar5 == 0) {
    uVar6 = 0;
LAB_00404700:
    uVar5 = uVar7 + 1 + param_1;
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_2 * uVar5;
      if ((((param_2 | uVar5) & 0xffffffffffff0000) != 0) && (param_2 != uVar7 / uVar5))
      goto LAB_0040479a;
    }
    lVar3 = FUN_004022a2();
    if (lVar3 != 0) {
      if ((lVar4 == 0) && (*unaff_RDI != 0)) {
        FUN_00404f70(uVar5,uVar6);
      }
      lVar4 = FUN_004050b2(uVar5,uVar7 - uVar6);
      *unaff_RSI = uVar5;
      *unaff_RDI = lVar4;
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    FUN_004018e7();
  }
  else {
    uVar6 = param_2 * uVar5;
    if ((((param_2 | uVar5) & 0xffffffffffff0000) == 0) || (param_2 == uVar6 / uVar5))
    goto LAB_00404700;
LAB_0040479a:
    FUN_00401907();
  }
  return 0;
}



bool FUN_004047b0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RDI;
  bool bVar3;
  
  if (unaff_RDI - 0x600000000000U < 0x100000000000) {
    return false;
  }
  lVar1 = FUN_00404c04(param_1,(int)DAT_004427c0);
  bVar3 = false;
  if (lVar1 != 0) {
    iVar2 = (int)((ulonglong)unaff_RDI >> 0x10);
    bVar3 = true;
    if (*(int *)(&DAT_004427c0 + lVar1) != iVar2) {
      bVar3 = *(int *)(&DAT_004427cc + (lVar1 + -1) * 8) == iVar2;
    }
  }
  return bVar3;
}



// WARNING: Removing unreachable block (ram,0x0040498f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_0040481d(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 extraout_var;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar5 = (uint)DAT_00440728 | _DAT_00440730;
  lVar10 = 0;
  uVar9 = DAT_00440668 & 4;
  uVar7 = unaff_RDI + 0xffff;
  uVar1 = uVar5 & 0x10;
  if ((uVar1 == 0) && (lVar10 = 0x200000000000, DAT_004427c0 != 0)) {
    uVar2 = DAT_004427c0;
    do {
      uVar2 = uVar2 - 1;
      lVar10 = (longlong)(*(int *)(&DAT_004427cc + uVar2 * 8) + 1);
      if ((lVar10 + (uVar7 >> 0x10) < 0x30000001) &&
         (0x1ffffffe < *(int *)(&DAT_004427cc + uVar2 * 8))) {
        lVar10 = lVar10 << 0x10;
        goto LAB_004048fd;
      }
    } while (uVar2 != 0);
    lVar10 = (longlong)(*(int *)((longlong)&DAT_004427c0 + DAT_004427c0 * 8 + 4) + 1) << 0x10;
  }
LAB_004048fd:
  if (DAT_004427c0 == 300) {
    lVar10 = FUN_004018e7();
    return lVar10;
  }
  if (uVar1 == 0) {
    FUN_00404c04(lVar10 >> 0x10,(int)DAT_004427c0);
  }
  else {
    FUN_0040452c((ulonglong)uVar1);
  }
  if (uVar9 == 0) {
    uVar2 = (ulonglong)(uVar5 | 0x12);
    lVar3 = FUN_00404c24();
  }
  else {
    uVar2 = uVar7 >> 0x20;
    FUN_0040524a();
    lVar10 = FUN_00401e9a();
    if (lVar10 != 0) {
      uVar1 = FUN_00404c31();
      uVar2 = CONCAT44(extraout_var,uVar1);
      lVar3 = FUN_00401edf();
      if (lVar3 != 0) goto LAB_00404a03;
      FUN_00401e81();
    }
    lVar3 = FUN_004052d6();
  }
  lVar10 = -1;
LAB_00404a03:
  if (lVar3 != -1) {
    uVar2 = FUN_00404c04(uVar2,(int)DAT_004427c0);
    if (uVar2 < DAT_004427c0) {
      lVar6 = (uVar2 + 2) * 8;
      lVar4 = FUN_00405092(lVar6,(DAT_004427c0 - uVar2) * 8);
      uVar2 = FUN_00405092(lVar6,(DAT_004427c0 - lVar4) * 8);
    }
    DAT_004427c0 = DAT_004427c0 + 1;
    iVar8 = (int)((ulonglong)lVar3 >> 0x10);
    *(int *)(&DAT_004427c8 + uVar2 * 8) = iVar8;
    *(longlong *)(&DAT_00443128 + uVar2 * 8) = lVar10;
    *(int *)(&DAT_004427cc + uVar2 * 8) =
         (int)((uVar7 & 0xffffffffffff0000) + 0xffff >> 0x10) + -1 + iVar8;
  }
  return lVar3;
}



void FUN_00404abb(void)

{
  FUN_004018f7();
  return;
}



uint FUN_00404ac1(undefined8 param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar7;
  
  if ((unaff_RDI - 1U < 0xfffffffffffffffe) && (unaff_RSI != 0)) {
    uVar7 = 0;
    uVar4 = FUN_00404c04(param_1,(int)DAT_004427c0);
    uVar5 = uVar4;
    while ((uVar5 != 0 &&
           (uVar1 = uVar5 - 1,
           (int)((ulonglong)unaff_RDI >> 0x10) <= *(int *)(&DAT_004427cc + uVar1 * 8)))) {
      uVar5 = uVar1;
      if (((byte)DAT_00440668 & 4) == 0) {
        uVar2 = FUN_00404dd0();
        uVar7 = uVar7 | uVar2;
      }
      else {
        iVar3 = FUN_00401ef5();
        if (iVar3 == 0) {
          uVar7 = 0xffffffff;
        }
        iVar3 = FUN_00401e81();
        if (iVar3 == 0) {
          uVar7 = 0xffffffff;
        }
      }
    }
    if (uVar5 < uVar4) {
      if (uVar4 < DAT_004427c0) {
        lVar6 = (uVar5 + 1) * 8;
        FUN_00405092(lVar6,(DAT_004427c0 - uVar4) * 8);
        uVar5 = FUN_00405092(lVar6,(DAT_004427c0 - uVar4) * 8);
      }
      DAT_004427c0 = (uVar5 + DAT_004427c0) - uVar4;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



longlong FUN_00404c04(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RSI;
  int unaff_EDI;
  
  iVar2 = 0;
  while (iVar3 = param_2, iVar2 < iVar3) {
    param_2 = iVar3 + iVar2 >> 1;
    piVar1 = (int *)(unaff_RSI + (longlong)param_2 * 8);
    if (*piVar1 == unaff_EDI || *piVar1 < unaff_EDI) {
      iVar2 = param_2 + 1;
      param_2 = iVar3;
    }
  }
  return (longlong)iVar2;
}



void FUN_00404c24(void)

{
  FUN_00404dc0();
  return;
}



uint FUN_00404c31(void)

{
  uint unaff_ESI;
  uint unaff_EDI;
  
  return (int)unaff_ESI >> 1 & 1U | unaff_EDI & 2 | (int)unaff_ESI >> 2 & 0x20000000U |
         (unaff_ESI & 0x4000000) << 5 | unaff_EDI * 4 & 4 | (unaff_EDI & 4) << 3;
}



bool FUN_00404c6c(void)

{
  int unaff_ESI;
  int unaff_EDI;
  bool bVar1;
  
  bVar1 = false;
  if (unaff_EDI != 0) {
    bVar1 = *(int *)((longlong)unaff_EDI * 0x18 + DAT_00443ab0 + 0x10) == unaff_ESI;
  }
  return bVar1;
}



ulonglong FUN_00404c87(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int unaff_EDI;
  
  if (unaff_EDI == -1) {
    uVar2 = FUN_004018d7();
    uVar3 = (ulonglong)(int)uVar2;
  }
  else {
    bVar1 = FUN_00404c6c();
    if (bVar1) {
      uVar3 = (*(code *)0x0)(0xffffffffffffffff,1);
    }
    else if (((byte)DAT_00440668 & 4) == 0) {
      uVar3 = FUN_00404de0();
    }
    else {
      bVar1 = FUN_00404c6c();
      if (bVar1) {
        uVar3 = (*(code *)0x0)(0,1,0,0);
      }
      else {
        bVar1 = FUN_00404c6c();
        if ((!bVar1) && (bVar1 = FUN_00404c6c(), !bVar1)) {
          uVar3 = FUN_004018c7();
          return uVar3;
        }
        uVar3 = FUN_00401dba(0xffffffffffffffff,1);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404db0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404dc0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404dd0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dda. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404de0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404dea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00440670)();
  return;
}



void FUN_00404e4d(void)

{
  FUN_00404e8f();
  return;
}



ulonglong FUN_00404e5c(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  uint unaff_EDI;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)unaff_EDI;
  uVar4 = 0;
  if (0x7f < unaff_EDI) {
    uVar1 = 0x1f;
    if (unaff_EDI != 0) {
      for (; unaff_EDI >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar2 = (ulonglong)*(uint *)("KernelBase.dll" + (ulonglong)uVar1 * 2 + 1);
    uVar8 = uVar7;
    do {
      uVar6 = uVar2;
      uVar7 = uVar8 >> 6;
      uVar3 = CONCAT71((int7)(uVar4 >> 8),(char)uVar8) & 0xffffffffffffff3f | 0x80;
      uVar4 = uVar3 << 8;
      cVar5 = (char)uVar6 + -1;
      uVar2 = CONCAT71((int7)(uVar6 >> 8),cVar5);
      uVar8 = uVar7;
    } while (cVar5 != '\0');
    uVar4 = CONCAT71((int7)uVar3,(char)(uVar6 >> 8));
  }
  return uVar4 | uVar7;
}



ulonglong FUN_00404e8f(void)

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



void FUN_00404f70(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x00404f7d
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00440448 + uVar1 * 8))();
  return;
}



void FUN_00405092(undefined8 param_1,longlong param_2)

{
  undefined *unaff_RSI;
  undefined *unaff_RDI;
  byte bVar1;
  
  bVar1 = 0;
  if (unaff_RSI <= unaff_RDI) {
    bVar1 = 1;
    unaff_RSI = unaff_RSI + param_2 + -1;
    unaff_RDI = unaff_RDI + param_2 + -1;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *unaff_RDI = *unaff_RSI;
    unaff_RSI = unaff_RSI + (ulonglong)bVar1 * -2 + 1;
    unaff_RDI = unaff_RDI + (ulonglong)bVar1 * -2 + 1;
  }
  return;
}



void FUN_004050b2(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x004050c9
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00440550 + uVar1 * 8))();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00405211(void)

{
  byte unaff_DIL;
  
  _DAT_00443c74 = _DAT_00443c74 | 4;
  if (((byte)DAT_00440668 & 4) != 0) {
                    // WARNING: Subroutine does not return
    ExitProcess((uint)unaff_DIL);
  }
  syscall();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint FUN_0040524a(void)

{
  uint uVar1;
  uint unaff_ESI;
  uint unaff_EDI;
  
  if ((unaff_EDI & 7) == 7) {
    uVar1 = 0x40;
    if (((unaff_ESI & 1) == 0) &&
       (uVar1 = 0x40, DAT_00440728 != ((longlong)(int)unaff_ESI & DAT_00440728))) {
      uVar1 = 0x80;
    }
  }
  else if ((unaff_EDI & 3) == 3) {
    uVar1 = 4;
    if ((unaff_ESI & 1) == 0) {
      uVar1 = (uint)(DAT_00440728 != ((longlong)(int)unaff_ESI & DAT_00440728)) * 4 + 4;
    }
  }
  else {
    uVar1 = 0x20;
    if (((unaff_EDI & 5) != 5) && (uVar1 = 0x10, (unaff_EDI & 4) == 0)) {
      uVar1 = (unaff_EDI & 1) + 1;
    }
  }
  return (unaff_ESI | unaff_EDI) & 0xdd000000 | uVar1;
}



undefined8 FUN_004052d6(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_00440668 & 4) != 0) {
    DAT_00443c70 = FUN_00401ec9();
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_004018f7();
  return uVar1;
}


