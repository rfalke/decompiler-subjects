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

typedef union _union_550 _union_550, *P_union_550;

typedef ulonglong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef struct _struct_551 _struct_551, *P_struct_551;

struct _struct_551 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_550 {
    DWORD dwOemId;
    struct _struct_551 s;
};

struct _SYSTEM_INFO {
    union _union_550 u;
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
  
  _DAT_00437fb4 = _DAT_00437fb4 | 2;
  if (((byte)DAT_004362b8 & 4) == 0) {
    param_2 = (ulonglong *)0x0;
    syscall();
    syscall();
    unaff_RSI = 6;
    syscall();
  }
  FUN_004046c1();
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
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong **pplVar17;
  longlong **pplVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  longlong **unaff_R13;
  longlong *unaff_R15;
  longlong *aplStack96 [2];
  longlong alStack80 [6];
  undefined8 uStack32;
  undefined8 uStack24;
  
  uVar8 = rdtsc();
  DAT_00436000._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  DAT_00436000._0_4_ = (undefined4)uVar8;
  pplVar17 = (longlong **)&DAT_00436008;
  uStack24 = 0;
  uStack32 = 0x16;
  alStack80[5] = 0xffffffff80000007;
  alStack80[4] = 0xffffffff80000001;
  alStack80[3] = 7;
  alStack80[2] = 2;
  plVar13 = alStack80 + 1;
  alStack80[1] = 1;
  uVar8 = 0;
  do {
    iVar7 = (int)uVar8;
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)cpuid_basic_info(0);
    }
    else if (iVar7 == 1) {
      puVar2 = (undefined4 *)cpuid_Version_info(1);
    }
    else if (iVar7 == 2) {
      puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
    }
    else if (iVar7 == 3) {
      puVar2 = (undefined4 *)cpuid_serial_info(3);
    }
    else if (iVar7 == 4) {
      puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar7 == 5) {
      puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar7 == 6) {
      puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar7 == 7) {
      puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar7 == 9) {
      puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar7 == 10) {
      puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar7 == 0xb) {
      puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar7 == 0xd) {
      puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar7 == 0xf) {
      puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar7 == -0x7ffffffe) {
      puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar7 == -0x7ffffffd) {
      puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar7 == -0x7ffffffc) {
      puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar2 = (undefined4 *)cpuid(iVar7);
    }
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)pplVar17 = *puVar2;
    *(undefined4 *)((longlong)pplVar17 + 4) = uVar3;
    *(undefined4 *)(pplVar17 + 1) = uVar5;
    *(undefined4 *)((longlong)pplVar17 + 0xc) = uVar4;
    puVar14 = plVar13;
    pplVar18 = pplVar17;
    do {
      pplVar17 = pplVar18 + 2;
      uVar8 = *puVar14;
      plVar13 = puVar14 + 1;
      if ((int)uVar8 == 0) {
        uVar12 = puVar14[1];
        *pplVar17 = unaff_R15;
        puVar14[1] = 0x401344;
        FUN_004014ba();
        pplVar18[3] = (longlong *)0xffffffffffffffff;
        pplVar18[4] = (longlong *)0xffffffffffffffff;
        pplVar18[5] = (longlong *)&LAB_0040462e;
        puVar14[1] = 0x20;
        uVar8 = puVar14[1];
        puVar14[1] = 0x401367;
        FUN_0040150f((int)uVar8,(longlong)&LAB_00404434);
        puVar14[1] = 0x20;
        uVar8 = puVar14[1];
        puVar14[1] = 0x40137b;
        FUN_0040150f((int)uVar8,(longlong)&LAB_0040457c);
        pplVar18[6] = *unaff_R13;
        pplVar17 = pplVar18 + 8;
        pplVar18[7] = (longlong *)&LAB_00404690;
        puVar14[1] = uVar12;
        *puVar14 = &DAT_00404d28;
        if ((*(byte *)pplVar17 & 8) == 0) {
          if ((*(byte *)pplVar17 & 0x20) == 0) {
            if ((*(byte *)pplVar17 & 4) == 0) {
              if (*unaff_R15 == 0) {
                puVar14[-1] = 0x2a;
                puVar14[-2] = 0x10;
                pbVar15 = &DAT_00404dc9;
              }
              else {
                puVar14[-1] = 0;
                puVar14[-2] = 1;
                pbVar15 = &DAT_00404da2;
              }
            }
            else {
              puVar14[-1] = 0x22;
              puVar14[-2] = 4;
              pbVar15 = &DAT_00404df1;
            }
          }
          else {
            puVar14[-1] = 0x30;
            puVar14[-2] = 0x20;
            pbVar15 = &DAT_00404d79;
          }
        }
        else {
          puVar14[-1] = 0x45;
          puVar14[-2] = 8;
          pbVar15 = &DAT_00404e30;
        }
        *pplVar17 = (longlong *)puVar14[-2];
        pplVar18[9] = (longlong *)(&DAT_00404310 + puVar14[-1]);
        puVar14[-1] = pplVar18 + 10;
        for (puVar19 = &DAT_004362e8; puVar19 < &DAT_004363d8; puVar19 = puVar19 + 1) {
          bVar9 = 0;
          uVar11 = 0;
          pbVar16 = pbVar15;
          do {
            pbVar15 = pbVar16 + 1;
            bVar1 = *pbVar16;
            bVar6 = bVar9 & 0x3f;
            bVar9 = bVar9 + 7;
            uVar11 = uVar11 | (ulonglong)(bVar1 & 0x7f) << bVar6;
            pbVar16 = pbVar15;
          } while ((char)bVar1 < '\0');
          if ((bVar1 & 0x40) != 0) {
            uVar11 = uVar11 | -1 << (bVar9 & 0x3f);
          }
          if (*puVar19 != 0) {
            uVar11 = *puVar19;
          }
          *puVar19 = uVar11;
        }
        puVar20 = (undefined8 *)puVar14[-1];
        puVar10 = &DAT_00437f80;
        puVar14[-3] = 0x401440;
        GetSystemInfo((LPSYSTEM_INFO)&DAT_00437f80);
        *puVar20 = &LAB_00403817;
        puVar14[1] = 0x401450;
        FUN_00401466(puVar10);
        puVar20[1] = FUN_00403312;
        puVar20[2] = &LAB_00403c02;
        return;
      }
      puVar14 = puVar14 + 1;
      pplVar18 = pplVar17;
    } while ((byte)DAT_00436008 < (byte)uVar8);
  } while( true );
}



undefined8 FUN_00401460(void)

{
  return 0x2a;
}



void FUN_00401466(undefined8 param_1)

{
  FUN_00403cbb(param_1);
  return;
}



void FUN_004014ba(void)

{
  DAT_00437de0 = 3;
  DAT_00437df0 = &DAT_00437df8;
  DAT_00437de8 = 0x10;
  DAT_00437e08 = 1;
  DAT_00437e20 = DAT_00437e08;
  DAT_00437e38 = DAT_00437e08;
  DAT_00437df8 = GetStdHandle(0xfffffff6);
  DAT_00437e10 = GetStdHandle(0xfffffff5);
  DAT_00437e28 = GetStdHandle(0xfffffff4);
  return;
}



undefined8 FUN_0040150f(int param_1,longlong param_2)

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
                     (ulonglong)(byte)((DAT_00436038._5_1_ & 2) != 0 | !in_ZF << 1)) + param_2;
  return *puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0040153d(undefined8 param_1,undefined8 param_2)

{
  FUN_004041e6(param_1,param_2);
  FUN_004046c1();
  _DAT_00437fb0 = DAT_00436340;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00401556(void)

{
  _DAT_00437fb0 = DAT_00436340;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00401566(void)

{
  _DAT_00437fb0 = DAT_00436348;
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code **ppcVar4;
  HANDLE hFile;
  LPWCH pWVar5;
  longlong lVar6;
  DWORD *pDVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  DWORD *pDVar10;
  DWORD **ppDVar11;
  LPWCH pWVar12;
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
  DAT_004362b8 = 4;
  GetCommandLineW();
  pWVar5 = GetEnvironmentStringsW();
  FUN_0040180c((longlong)local_d038,0x3fff,0x200);
  lVar6 = 0;
  while( true ) {
    cVar1 = *(char *)(local_d038[0] + lVar6);
    if (cVar1 == '\0') break;
    if (cVar1 == '\\') {
      *(char *)(local_d038[0] + lVar6) = '/';
    }
    lVar6 = lVar6 + 1;
  }
  if ((ushort)*pWVar5 < 0xd800) {
    local_e04c = (uint)(ushort)*pWVar5;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_0040436d();
  }
  pDVar10 = local_8038;
  pDVar15 = local_3a;
  uVar13 = 0;
  pWVar12 = pWVar5 + uVar3;
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
      FreeEnvironmentStringsW(pWVar5);
      FUN_004012f0();
      _DAT_00437fb4 = _DAT_00437fb4 | 1;
      puVar9 = &DAT_00405008;
      for (ppcVar4 = (code **)&DAT_00405008; ppcVar4 != (code **)&DAT_00405008;
          ppcVar4 = ppcVar4 + 1) {
        (**ppcVar4)();
      }
      FUN_00401460();
      FUN_0040153d(puVar9,ppDVar11);
      DAT_00437de0 = 3;
      DAT_00437df0 = &DAT_00437df8;
      DAT_00437de8 = 0x10;
      DAT_00437e08 = 1;
      DAT_00437e20 = DAT_00437e08;
      DAT_00437e38 = DAT_00437e08;
      DAT_00437df8 = GetStdHandle(0xfffffff6);
      DAT_00437e10 = GetStdHandle(0xfffffff5);
      DAT_00437e28 = GetStdHandle(0xfffffff4);
      return;
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
      uVar8 = (ulonglong)(int)local_e04c;
      pDVar7 = pDVar10;
      if (0x7f < local_e04c) {
        uVar8 = FUN_0040437c();
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
      if ((ushort)*pWVar12 < 0xd800) {
        local_e04c = (uint)(ushort)*pWVar12;
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_0040436d();
      }
      pWVar12 = pWVar12 + uVar3;
    } while (iVar2 != 0);
    uVar8 = (longlong)pDVar10 - (longlong)pDVar16;
    if (0x7ffd < uVar8) {
      uVar8 = 0x7ffd;
    }
    *(undefined *)((longlong)local_8038 + uVar8) = 0;
  } while( true );
}



void FUN_004017b1(void)

{
  uint uVar1;
  ushort **unaff_RDI;
  
  if (**unaff_RDI < 0xd800) {
    *(uint *)(unaff_RDI + 3) = (uint)**unaff_RDI;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0040436d();
  }
  *unaff_RDI = *unaff_RDI + uVar1;
  return;
}



void FUN_004017dc(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(unaff_RDI + 0x10);
  uVar2 = (ulonglong)(int)unaff_ESI;
  if (0x7f < unaff_ESI) {
    uVar2 = FUN_0040437c();
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



ulonglong FUN_0040180c(longlong param_1,longlong param_2,ulonglong param_3)

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
  FUN_004017b1();
  do {
    if (local_40 == 0) {
LAB_00401872:
      FUN_004017dc();
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
      if (local_40 == 0) goto LAB_00401872;
      if ((0x20 < local_40) || ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) == 0)) break;
      FUN_004017b1();
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
LAB_004018dd:
    while (local_40 != 0) {
      if ((bVar7) || (0x20 < local_40)) {
        if ((local_40 != 0x22) && (local_40 != 0x5c)) goto LAB_004019e1;
        uVar5 = 0;
        while (local_40 == 0x5c) {
          uVar5 = uVar5 + 1;
          FUN_004017b1();
        }
        lVar4 = 0;
        while (local_40 == 0x22) {
          FUN_004017b1();
          lVar4 = lVar4 + 1;
        }
        uVar2 = uVar5;
        if (lVar4 != 0) {
          for (; 1 < uVar2; uVar2 = uVar2 - 2) {
            FUN_004017dc();
          }
          if ((uVar5 & 1) != 0) goto code_r0x00401986;
          goto LAB_0040199d;
        }
        while (uVar5 = uVar5 - 1, uVar5 != 0xffffffffffffffff) {
          FUN_004017dc();
        }
      }
      else {
        if ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) != 0) break;
LAB_004019e1:
        FUN_004017dc();
        FUN_004017b1();
      }
    }
    FUN_004017dc();
  } while( true );
code_r0x00401986:
  FUN_004017dc();
  lVar4 = lVar4 + -1;
  if (lVar4 != 0) {
LAB_0040199d:
    uVar2 = lVar4 - (ulonglong)!bVar7;
    uVar5 = uVar2 + 1;
    for (uVar6 = 3; uVar6 <= uVar5; uVar6 = uVar6 + 3) {
      FUN_004017dc();
    }
    bVar7 = uVar2 % 3 == 0;
  }
  goto LAB_004018dd;
}



void FUN_00401a19(void)

{
  HANDLE unaff_RDI;
  
  CloseHandle(unaff_RDI);
  return;
}



void FUN_00401a32(DWORD param_1,DWORD param_2,DWORD param_3,LPCWSTR param_4)

{
  LPSECURITY_ATTRIBUTES unaff_RSI;
  HANDLE unaff_RDI;
  DWORD local_res8;
  
  CreateFileMappingNumaW(unaff_RDI,unaff_RSI,param_2,param_1,param_3,param_4,local_res8);
  return;
}



void FUN_00401a48(void)

{
  GetLastError();
  return;
}



void FUN_00401a5e(DWORD param_1,DWORD param_2,SIZE_T param_3,LPVOID param_4)

{
  DWORD unaff_ESI;
  HANDLE unaff_RDI;
  DWORD DStackX8;
  
  MapViewOfFileExNuma(unaff_RDI,unaff_ESI,param_2,param_1,param_3,param_4,DStackX8);
  return;
}



void FUN_00401a74(void)

{
  LPCVOID unaff_RDI;
  
  UnmapViewOfFile(unaff_RDI);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401acc(void)

{
                    // WARNING: Could not recover jumptable at 0x00401acc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362d0)();
  return;
}



void FUN_00401ad2(undefined8 param_1,longlong param_2)

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
  uVar2 = DAT_004367c0;
  *(undefined8 *)(unaff_RSI + 8 + param_2) = 0x50;
  *(undefined8 *)(unaff_RDI + 0x30) = uVar2;
  return;
}



ulonglong FUN_00401b19(void)

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
     (uVar16 = *(uint *)(puVar2 + 3) & 8, bVar15 = (byte)uVar16, uVar16 != 0)) goto LAB_00401dbb;
  uVar3 = *puVar2;
  uVar16 = (uint)uVar3;
  if ((uVar3 & 0xf) != 0) {
    uVar16 = -(uVar16 + 0x10);
  }
  lVar1 = uVar3 + (uVar16 & 0xf);
  uVar17 = 0;
  uVar4 = *(ulonglong *)(lVar1 + 8);
  if (((uint)uVar4 & 3) != 1) goto LAB_00401dbb;
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
          if (lVar7 == 0) goto LAB_00401c25;
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
LAB_00401c25:
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
LAB_00401c49:
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
          if (lVar7 != 0) goto LAB_00401c49;
        }
      }
    }
    iVar6 = FUN_00403d56(puVar10);
    if (iVar6 == 0) {
      *(longlong *)(unaff_RDI + 0x358) = *(longlong *)(unaff_RDI + 0x358) - uVar17;
      *(ulonglong *)(unaff_RDI + 0x388) = uVar3;
      goto LAB_00401dbb;
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
          goto LAB_00401db8;
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
LAB_00401db8:
  uVar17 = 0;
LAB_00401dbb:
  *(undefined8 *)(unaff_RDI + 0x38) = 0x80;
  return uVar17;
}



void FUN_00401f12(undefined8 param_1,ulonglong param_2)

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
      iVar3 = FUN_00403d56(param_1);
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
            if (puVar4 == (ulonglong *)0x0) goto LAB_00401ff9;
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
LAB_00401ff9:
        if (uVar9 != 0) {
          uVar11 = *(uint *)(unaff_RSI + 7);
          if (*(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) == unaff_RSI) {
            *(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) = puVar4;
            if (puVar4 == (ulonglong *)0x0) {
              bVar7 = (byte)uVar11 & 0x1f;
              unaff_RDI[1] = unaff_RDI[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            }
            else {
LAB_00402022:
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
            if (puVar4 != (ulonglong *)0x0) goto LAB_00402022;
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
    goto LAB_0040224b;
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
        if (puVar5 == (ulonglong *)0x0) goto LAB_004021a7;
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
LAB_004021a7:
    if (uVar9 != 0) {
      uVar11 = *(uint *)(puVar13 + 7);
      if (*(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) == puVar13) {
        *(ulonglong **)(unaff_RDI + (ulonglong)uVar11 * 2 + 0x96) = puVar5;
        if (puVar5 == (ulonglong *)0x0) {
          bVar7 = (byte)uVar11 & 0x1f;
          unaff_RDI[1] = unaff_RDI[1] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
LAB_004021cc:
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
        if (puVar5 != (ulonglong *)0x0) goto LAB_004021cc;
      }
    }
  }
  unaff_RSI[1] = param_2 | 1;
  *(ulonglong *)((longlong)unaff_RSI + param_2) = param_2;
  if (unaff_RSI == puVar4) {
    *(ulonglong *)(unaff_RDI + 2) = param_2;
    return;
  }
LAB_0040224b:
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

ulonglong * FUN_0040238e(void)

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
  
  puVar18 = DAT_00436400;
  uVar12 = DAT_004363e8;
  uVar23 = DAT_004363e4;
  uVar9 = DAT_004363e0;
  if (unaff_RDI < 0xe1) {
    uVar17 = 0x20;
    if (0xe < unaff_RDI) {
      uVar17 = unaff_RDI + 0x1f & 0xfffffffffffffff0;
    }
    bVar26 = (byte)(uVar17 >> 3);
    uVar4 = DAT_004363e0 >> (bVar26 & 0x1f);
    if ((uVar4 & 3) != 0) {
      uVar9 = (int)(uVar17 >> 3) + (~uVar4 & 1);
      uVar12 = (ulonglong)(uVar9 * 2);
      puVar6 = (ulonglong *)(&DAT_00436438)[uVar12];
      puVar7 = (undefined *)puVar6[2];
      if (&DAT_00436428 + uVar12 * 8 == puVar7) {
        DAT_004363e0 = DAT_004363e0 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        *(undefined **)(puVar7 + 0x18) = &DAT_00436428 + uVar12 * 8;
        (&DAT_00436438)[uVar12] = puVar7;
      }
      puVar6[1] = (ulonglong)(uVar9 * 8 | 3);
      puVar18 = (ulonglong *)((longlong)puVar6 + (ulonglong)(uVar9 * 8) + 8);
      *puVar18 = *puVar18 | 1;
      puVar18 = DAT_00436400;
      goto LAB_004032fd;
    }
    if (DAT_004363e8 < uVar17) {
      if (DAT_004363e0 >> (bVar26 & 0x1f) != 0) {
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
        puVar6 = (ulonglong *)(&DAT_00436438)[uVar19];
        puVar7 = (undefined *)puVar6[2];
        if (&DAT_00436428 + uVar19 * 8 == puVar7) {
          DAT_004363e0 = DAT_004363e0 & ~(1 << ((byte)iVar22 & 0x1f));
        }
        else {
          *(undefined **)(puVar7 + 0x18) = &DAT_00436428 + uVar19 * 8;
          (&DAT_00436438)[uVar19] = puVar7;
        }
        puVar5 = (ulonglong *)((longlong)puVar6 + (ulonglong)uVar9);
        uVar19 = uVar9 - uVar17;
        if (uVar19 < 0x20) {
          puVar6[1] = (ulonglong)(uVar9 | 3);
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar5 | 1;
          puVar18 = DAT_00436400;
        }
        else {
          puVar18 = (ulonglong *)(uVar17 + (longlong)puVar6);
          puVar6[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *puVar5 = uVar19;
          DAT_004363e8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004363e0 & uVar9) == 0) {
              DAT_004363e0 = DAT_004363e0 | uVar9;
              puVar7 = &DAT_00436428 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_00436438)[uVar17];
            }
            (&DAT_00436438)[uVar17] = DAT_00436400;
            *(ulonglong **)(puVar7 + 0x18) = DAT_00436400;
            DAT_00436400[2] = (ulonglong)puVar7;
            DAT_00436400[3] = (ulonglong)(&DAT_00436428 + uVar17 * 8);
          }
        }
        goto LAB_004032fd;
      }
      if (DAT_004363e4 != 0) {
        uVar4 = 0;
        if ((-DAT_004363e4 & DAT_004363e4) != 0) {
          for (; ((-DAT_004363e4 & DAT_004363e4) >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        puVar18 = *(ulonglong **)(&DAT_00436638 + (ulonglong)uVar4 * 8);
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
            if (puVar18 == (ulonglong *)0x0) goto LAB_004025fb;
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
LAB_004025fb:
        if (uVar10 != 0) {
          uVar4 = *(uint *)(puVar6 + 7);
          if (*(ulonglong **)(&DAT_00436638 + (ulonglong)uVar4 * 8) == puVar6) {
            (&DAT_004363e8)[(ulonglong)uVar4 + 0x4a] = (ulonglong)puVar18;
            if (puVar18 == (ulonglong *)0x0) {
              DAT_004363e4 = uVar23 & ~(1 << (uVar4 & 0x1f));
            }
            else {
LAB_0040261f:
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
            if (puVar18 != (ulonglong *)0x0) goto LAB_0040261f;
          }
        }
        if (uVar19 < 0x20) {
          puVar6[1] = uVar17 + uVar19 | 3;
          puVar18 = (ulonglong *)((longlong)puVar6 + uVar17 + uVar19 + 8);
          *puVar18 = *puVar18 | 1;
          puVar18 = DAT_00436400;
        }
        else {
          puVar18 = (ulonglong *)((longlong)puVar6 + uVar17);
          puVar6[1] = uVar17 | 3;
          puVar18[1] = uVar19 | 1;
          *(ulonglong *)((longlong)puVar18 + uVar19) = uVar19;
          DAT_004363e8 = uVar19;
          if (uVar12 != 0) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar23 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((uVar9 & uVar23) == 0) {
              DAT_004363e0 = uVar9 | uVar23;
              puVar7 = &DAT_00436428 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_00436438)[uVar17];
            }
            (&DAT_00436438)[uVar17] = DAT_00436400;
            *(ulonglong **)(puVar7 + 0x18) = DAT_00436400;
            DAT_00436400[2] = (ulonglong)puVar7;
            DAT_00436400[3] = (ulonglong)(&DAT_00436428 + uVar17 * 8);
          }
        }
        goto LAB_004032fd;
      }
    }
  }
  else if (unaff_RDI < 0xffffffffffffff80) {
    uVar17 = unaff_RDI + 0x1f & 0xfffffffffffffff0;
    if (DAT_004363e4 != 0) {
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
      puVar5 = *(ulonglong **)(&DAT_00436638 + uVar19 * 8);
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
          if (puVar5 == (ulonglong *)0x0) goto LAB_004027e4;
          lVar15 = lVar15 * 2;
          puVar25 = puVar8;
        }
        uVar12 = 0;
        puVar8 = puVar5;
      }
LAB_004027e4:
      if (((ulonglong)puVar8 | (ulonglong)puVar6) == 0) {
        uVar9 = -2 << ((byte)uVar19 & 0x1f) & DAT_004363e4;
        if (uVar9 == 0) goto LAB_00402abb;
        uVar4 = 0;
        if ((-uVar9 & uVar9) != 0) {
          for (; ((-uVar9 & uVar9) >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        puVar6 = (ulonglong *)0x0;
        puVar8 = *(ulonglong **)(&DAT_00436638 + (ulonglong)uVar4 * 8);
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
      if ((puVar6 != (ulonglong *)0x0) && (uVar12 < DAT_004363e8 - uVar17)) {
        puVar18 = (ulonglong *)puVar6[3];
        uVar19 = puVar6[6];
        if (puVar18 == puVar6) {
          puVar5 = (ulonglong *)puVar6[5];
          puVar8 = puVar6 + 5;
          if ((ulonglong *)puVar6[5] == (ulonglong *)0x0) {
            puVar18 = (ulonglong *)puVar6[4];
            if (puVar18 == (ulonglong *)0x0) goto LAB_004028be;
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
LAB_004028be:
        if (uVar19 != 0) {
          uVar9 = *(uint *)(puVar6 + 7);
          if (*(ulonglong **)(&DAT_00436638 + (ulonglong)uVar9 * 8) == puVar6) {
            (&DAT_004363e8)[(ulonglong)uVar9 + 0x4a] = (ulonglong)puVar18;
            if (puVar18 == (ulonglong *)0x0) {
              DAT_004363e4 = uVar23 & ~(1 << (uVar9 & 0x1f));
            }
            else {
LAB_004028e2:
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
            if (puVar18 != (ulonglong *)0x0) goto LAB_004028e2;
          }
        }
        if (uVar12 < 0x20) {
          puVar6[1] = uVar17 + uVar12 | 3;
          puVar18 = (ulonglong *)((longlong)puVar6 + uVar17 + uVar12 + 8);
          *puVar18 = *puVar18 | 1;
          puVar18 = DAT_00436400;
        }
        else {
          lVar15 = (longlong)puVar6 + uVar17;
          puVar6[1] = uVar17 | 3;
          *(ulonglong *)(lVar15 + 8) = uVar12 | 1;
          *(ulonglong *)(lVar15 + uVar12) = uVar12;
          uVar9 = DAT_004363e4;
          if (uVar12 < 0x100) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004363e0 & uVar9) == 0) {
              DAT_004363e0 = DAT_004363e0 | uVar9;
              puVar7 = &DAT_00436428 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_00436438)[uVar17];
            }
            (&DAT_00436438)[uVar17] = lVar15;
            *(longlong *)(puVar7 + 0x18) = lVar15;
            *(undefined **)(lVar15 + 0x10) = puVar7;
            *(undefined **)(lVar15 + 0x18) = &DAT_00436428 + uVar17 * 8;
            puVar18 = DAT_00436400;
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
              DAT_004363e4 = uVar9 | uVar4;
              *(longlong *)(&DAT_00436638 + uVar17 * 8) = lVar15;
              *(undefined **)(lVar15 + 0x30) = &DAT_00436638 + uVar17 * 8;
            }
            else {
              bVar26 = 0;
              if (uVar23 != 0x1f) {
                bVar26 = 0x39 - (char)(uVar23 >> 1);
              }
              lVar11 = uVar12 << (bVar26 & 0x3f);
              lVar16 = *(longlong *)(&DAT_00436638 + uVar17 * 8);
              do {
                lVar20 = lVar16;
                if (uVar12 == (*(ulonglong *)(lVar20 + 8) & 0xfffffffffffffff8)) {
                  lVar16 = *(longlong *)(lVar20 + 0x10);
                  *(longlong *)(lVar16 + 0x18) = lVar15;
                  *(longlong *)(lVar20 + 0x10) = lVar15;
                  *(longlong *)(lVar15 + 0x10) = lVar16;
                  *(longlong *)(lVar15 + 0x18) = lVar20;
                  *(undefined8 *)(lVar15 + 0x30) = 0;
                  puVar18 = DAT_00436400;
                  goto LAB_004032fd;
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
            puVar18 = DAT_00436400;
          }
        }
        goto LAB_004032fd;
      }
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
  }
LAB_00402abb:
  if (DAT_004363e8 < uVar17) {
    if (uVar17 < DAT_004363f0) {
      DAT_004363f0 = DAT_004363f0 - uVar17;
    }
    else {
      if ((((((DAT_00436750 & 1) != 0) && (_DAT_004367b8 <= uVar17)) && (DAT_004363f0 != 0)) &&
          ((uVar12 = uVar17 + 0x3e + DAT_004367b0 & -DAT_004367b0, DAT_00436748 == 0 ||
           ((DAT_00436738 < DAT_00436738 + uVar12 && (DAT_00436738 + uVar12 <= DAT_00436748)))))) &&
         (uVar17 < uVar12)) {
        puVar6 = (ulonglong *)FUN_00403d42();
        *puVar6 = 0;
        puVar6[1] = uVar12 - 0x20;
        puVar18 = DAT_004363f8;
        *(undefined8 *)((longlong)puVar6 + (uVar12 - 0x18)) = 0xb;
        *(undefined8 *)((longlong)puVar6 + (uVar12 - 0x10)) = 0;
        if ((puVar18 == (ulonglong *)0x0) || (puVar6 < puVar18)) {
          DAT_004363f8 = puVar6;
        }
        DAT_00436738 = uVar12 + DAT_00436738;
        puVar18 = DAT_00436400;
        if (_DAT_00436740 < DAT_00436738) {
          _DAT_00436740 = DAT_00436738;
        }
        goto LAB_004032fd;
      }
      uVar12 = uVar17 + 0x5f + DAT_004367b0 & -DAT_004367b0;
      if (uVar12 <= uVar17) {
        return (ulonglong *)0x0;
      }
      uVar19 = DAT_004367b0;
      if (DAT_00436748 != 0) {
        if (uVar12 + DAT_00436738 <= DAT_00436738) {
          return (ulonglong *)0x0;
        }
        uVar19 = DAT_00436738;
        if (DAT_00436748 < uVar12 + DAT_00436738) {
          return (ulonglong *)0x0;
        }
      }
      puVar18 = (ulonglong *)FUN_00403d42();
      DAT_00436738 = DAT_00436738 + uVar12;
      if (_DAT_00436740 < DAT_00436738) {
        _DAT_00436740 = DAT_00436738;
      }
      if (DAT_00436408 == (ulonglong *)0x0) {
        if ((DAT_004363f8 == (ulonglong *)0x0) || (puVar18 < DAT_004363f8)) {
          DAT_004363f8 = puVar18;
        }
        DAT_00436770 = 1;
        _DAT_00436418 = 0x80;
        _DAT_00436420 = DAT_004367a0;
        puVar7 = &DAT_00436428;
        DAT_00436758 = puVar18;
        DAT_00436760 = uVar12;
        do {
          *(undefined **)(puVar7 + 0x18) = puVar7;
          *(undefined **)(puVar7 + 0x10) = puVar7;
          puVar7 = puVar7 + 0x10;
        } while (puVar7 != &DAT_00436628);
        lVar15 = uVar12 - 0x50;
LAB_00402d31:
        FUN_00401ad2(uVar19,lVar15);
      }
      else {
        if ((((puVar18 == (ulonglong *)((longlong)DAT_00436758 + DAT_00436760)) &&
             ((DAT_00436770 & 8) == 0)) &&
            (uVar19 = (ulonglong)DAT_00436770 & 0xffffffffffffff01, (DAT_00436770 & 1) != 0)) &&
           ((DAT_00436758 <= DAT_00436408 && (DAT_00436408 < puVar18)))) {
          DAT_00436760 = DAT_00436760 + uVar12;
          lVar15 = DAT_004363f0 + uVar12;
          goto LAB_00402d31;
        }
        if (puVar18 < DAT_004363f8) {
          DAT_004363f8 = puVar18;
        }
        ppuVar13 = &DAT_00436758;
        if (((DAT_00436758 == (ulonglong *)((longlong)puVar18 + uVar12)) &&
            (bVar26 = (byte)(DAT_00436770 & 8), (DAT_00436770 & 8) == 0)) &&
           ((DAT_00436770 & 1) != 0)) {
          DAT_00436760 = DAT_00436760 + uVar12;
          uVar9 = (uint)DAT_00436758;
          if (((ulonglong)DAT_00436758 & 0xf) != 0) {
            uVar9 = -(uVar9 + 0x10);
          }
          puVar6 = (ulonglong *)((longlong)DAT_00436758 + (ulonglong)(uVar9 & 0xf));
          puVar5 = (ulonglong *)((longlong)puVar18 + uVar17);
          uVar12 = (longlong)puVar6 + (-uVar17 - (longlong)puVar18);
          bVar27 = DAT_00436408 == puVar6;
          DAT_00436758 = puVar18;
          puVar18[1] = uVar17 | 3;
          if (bVar27) {
            DAT_004363f0 = uVar12 + DAT_004363f0;
            DAT_00436408 = puVar5;
            puVar5[1] = DAT_004363f0 | 1;
            goto LAB_004030a5;
          }
          if (puVar6 == DAT_00436400) {
            uVar12 = uVar12 + DAT_004363e8;
            DAT_004363e8 = uVar12;
            DAT_00436400 = puVar5;
            puVar5[1] = uVar12 | 1;
            *(ulonglong *)((longlong)puVar5 + uVar12) = uVar12;
            goto LAB_004030a5;
          }
          uVar17 = puVar6[1];
          if (((uint)uVar17 & 3) == 1) {
            puVar8 = (ulonglong *)puVar6[3];
            if (uVar17 < 0x100) {
              puVar25 = (ulonglong *)puVar6[2];
              if (puVar25 == puVar8) {
                bVar2 = (byte)(uVar17 >> 3) & 0x1f;
                DAT_004363e0 = DAT_004363e0 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
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
                  if (puVar8 == (ulonglong *)0x0) goto LAB_00402ec9;
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
LAB_00402ec9:
              if (uVar19 != 0) {
                uVar9 = *(uint *)(puVar6 + 7);
                if (puVar6 == *(ulonglong **)(&DAT_00436638 + (ulonglong)uVar9 * 8)) {
                  (&DAT_004363e8)[(ulonglong)uVar9 + 0x4a] = (ulonglong)puVar8;
                  if (puVar8 == (ulonglong *)0x0) {
                    bVar2 = (byte)uVar9 & 0x1f;
                    DAT_004363e4 = DAT_004363e4 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
                  }
                  else {
LAB_00402ef0:
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
                  if (puVar8 != (ulonglong *)0x0) goto LAB_00402ef0;
                }
              }
            }
            puVar6 = (ulonglong *)((longlong)puVar6 + (uVar17 & 0xfffffffffffffff8));
            uVar12 = uVar12 + (uVar17 & 0xfffffffffffffff8);
          }
          puVar6[1] = puVar6[1] & 0xfffffffffffffffe;
          puVar5[1] = uVar12 | 1;
          *(ulonglong *)((longlong)puVar5 + uVar12) = uVar12;
          uVar9 = DAT_004363e4;
          if (uVar12 < 0x100) {
            uVar17 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004363e0 & uVar9) == 0) {
              DAT_004363e0 = DAT_004363e0 | uVar9;
              puVar7 = &DAT_00436428 + uVar17 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_00436438)[uVar17];
            }
            (&DAT_00436438)[uVar17] = puVar5;
            *(ulonglong **)(puVar7 + 0x18) = puVar5;
            puVar5[2] = (ulonglong)puVar7;
            puVar5[3] = (ulonglong)(&DAT_00436428 + uVar17 * 8);
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
              DAT_004363e4 = uVar9 | uVar4;
              *(ulonglong **)(&DAT_00436638 + uVar17 * 8) = puVar5;
              puVar5[6] = (ulonglong)(&DAT_00436638 + uVar17 * 8);
            }
            else {
              if (uVar23 != 0x1f) {
                bVar26 = 0x39 - (char)(uVar23 >> 1);
              }
              lVar15 = uVar12 << (bVar26 & 0x3f);
              uVar17 = *(ulonglong *)(&DAT_00436638 + uVar17 * 8);
              do {
                uVar19 = uVar17;
                if (uVar12 == (*(ulonglong *)(uVar19 + 8) & 0xfffffffffffffff8)) {
                  uVar12 = *(ulonglong *)(uVar19 + 0x10);
                  *(ulonglong **)(uVar12 + 0x18) = puVar5;
                  *(ulonglong **)(uVar19 + 0x10) = puVar5;
                  puVar5[2] = uVar12;
                  puVar5[3] = uVar19;
                  puVar5[6] = 0;
                  goto LAB_004030a5;
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
LAB_004030a5:
          return puVar18 + 2;
        }
        while ((DAT_00436408 < *ppuVar13 ||
               (puVar6 = (ulonglong *)((longlong)*ppuVar13 + (longlong)ppuVar13[1]),
               puVar6 <= DAT_00436408))) {
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
        if (puVar5 < DAT_00436408 + 4) {
          puVar5 = DAT_00436408;
        }
        puVar25 = DAT_00436408;
        FUN_00401ad2(ppuVar13,uVar12 - 0x50);
        DAT_00436768 = puVar5 + 2;
        puVar5[1] = 0x33;
        puVar21 = &DAT_00436758;
        puVar8 = puVar5 + 2;
        for (lVar15 = 8; lVar15 != 0; lVar15 = lVar15 + -1) {
          *(undefined4 *)puVar8 = *(undefined4 *)puVar21;
          puVar21 = (undefined8 *)((longlong)puVar21 + 4);
          puVar8 = (ulonglong *)((longlong)puVar8 + 4);
        }
        puVar8 = puVar5 + 7;
        DAT_00436770 = 1;
        DAT_00436758 = puVar18;
        DAT_00436760 = uVar12;
        do {
          *puVar8 = 0xb;
          puVar8 = puVar8 + 1;
        } while (puVar8 < puVar6);
        if (puVar25 != puVar5) {
          puVar5[1] = puVar5[1] & 0xfffffffffffffffe;
          uVar12 = (longlong)puVar5 - (longlong)puVar25;
          puVar25[1] = uVar12 | 1;
          *puVar5 = uVar12;
          uVar9 = DAT_004363e4;
          if (uVar12 < 0x100) {
            uVar19 = (ulonglong)(uint)((int)(uVar12 >> 3) * 2);
            uVar9 = 1 << ((byte)(uVar12 >> 3) & 0x1f);
            if ((DAT_004363e0 & uVar9) == 0) {
              DAT_004363e0 = DAT_004363e0 | uVar9;
              puVar7 = &DAT_00436428 + uVar19 * 8;
            }
            else {
              puVar7 = (undefined *)(&DAT_00436438)[uVar19];
            }
            (&DAT_00436438)[uVar19] = puVar25;
            *(ulonglong **)(puVar7 + 0x18) = puVar25;
            puVar25[2] = (ulonglong)puVar7;
            puVar25[3] = (ulonglong)(&DAT_00436428 + uVar19 * 8);
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
              DAT_004363e4 = uVar9 | uVar4;
              *(ulonglong **)(&DAT_00436638 + uVar19 * 8) = puVar25;
              puVar25[6] = (ulonglong)(&DAT_00436638 + uVar19 * 8);
            }
            else {
              bVar26 = 0;
              if (uVar23 != 0x1f) {
                bVar26 = 0x39 - (char)(uVar23 >> 1);
              }
              lVar15 = uVar12 << (bVar26 & 0x3f);
              uVar19 = *(ulonglong *)(&DAT_00436638 + uVar19 * 8);
              do {
                uVar10 = uVar19;
                if (uVar12 == (*(ulonglong *)(uVar10 + 8) & 0xfffffffffffffff8)) {
                  uVar12 = *(ulonglong *)(uVar10 + 0x10);
                  *(ulonglong **)(uVar12 + 0x18) = puVar25;
                  *(ulonglong **)(uVar10 + 0x10) = puVar25;
                  puVar25[2] = uVar12;
                  puVar25[3] = uVar10;
                  puVar25[6] = 0;
                  goto LAB_004032c5;
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
LAB_004032c5:
      if (DAT_004363f0 <= uVar17) {
        FUN_00401556();
        return (ulonglong *)0x0;
      }
      DAT_004363f0 = DAT_004363f0 - uVar17;
    }
    puVar18 = DAT_00436408;
    DAT_00436408 = (ulonglong *)((longlong)DAT_00436408 + uVar17);
    DAT_00436408[1] = DAT_004363f0 | 1;
  }
  else {
    uVar12 = DAT_004363e8 - uVar17;
    puVar6 = (ulonglong *)((longlong)DAT_00436400 + DAT_004363e8);
    if (uVar12 < 0x20) {
      uVar12 = DAT_004363e8 | 3;
      DAT_004363e8 = 0;
      DAT_00436400 = (ulonglong *)0x0;
      puVar18[1] = uVar12;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar6 | 1;
      puVar6 = puVar18;
      puVar18 = DAT_00436400;
      goto LAB_004032fd;
    }
    DAT_00436400 = (ulonglong *)((longlong)DAT_00436400 + uVar17);
    DAT_004363e8 = uVar12;
    DAT_00436400[1] = uVar12 | 1;
    *puVar6 = uVar12;
  }
  puVar18[1] = uVar17 | 3;
  puVar6 = puVar18;
  puVar18 = DAT_00436400;
LAB_004032fd:
  DAT_00436400 = puVar18;
  return puVar6 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00403312(void)

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
      iVar3 = FUN_00403d56(uVar4 & 0xffffffffffffff03);
      if (iVar3 != 0) {
        return unaff_RSI;
      }
      DAT_00436738 = DAT_00436738 - (uVar5 + 0x20 + uVar1);
      return unaff_RSI;
    }
    uVar5 = uVar5 + uVar1;
    if (DAT_00436400 == ppuVar16) {
      if (((uint)ppuVar20[1] & 3) == 3) {
        DAT_004363e8 = uVar5;
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
          DAT_004363e0 = DAT_004363e0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
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
            if (ppuVar9 == (ulonglong **)0x0) goto LAB_00403414;
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
LAB_00403414:
        if (puVar11 != (ulonglong *)0x0) {
          uVar15 = *(uint *)(ppuVar16 + 7);
          if (*(ulonglong ***)(&DAT_00436638 + (ulonglong)uVar15 * 8) == ppuVar16) {
            (&DAT_004363e8)[(ulonglong)uVar15 + 0x4a] = (ulonglong)ppuVar9;
            if (ppuVar9 == (ulonglong **)0x0) {
              bVar6 = (byte)uVar15 & 0x1f;
              DAT_004363e4 = DAT_004363e4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            }
            else {
LAB_0040343f:
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
            if (ppuVar9 != (ulonglong **)0x0) goto LAB_0040343f;
          }
        }
      }
    }
  }
  ppuVar9 = DAT_00436400;
  puVar11 = ppuVar20[1];
  if (((ulonglong)puVar11 & 2) != 0) {
    ppuVar20[1] = (ulonglong *)((ulonglong)puVar11 & 0xfffffffffffffffe);
    ppuVar16[1] = (ulonglong *)(uVar5 | 1);
    *(ulonglong *)((longlong)ppuVar16 + uVar5) = uVar5;
    goto LAB_004036ae;
  }
  if (DAT_00436408 != ppuVar20) {
    if (ppuVar20 == DAT_00436400) {
      uVar5 = uVar5 + DAT_004363e8;
      DAT_004363e8 = uVar5;
      DAT_00436400 = ppuVar16;
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
        DAT_004363e0 = DAT_004363e0 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
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
          if (ppuVar10 == (ulonglong **)0x0) goto LAB_00403602;
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
LAB_00403602:
      if (puVar11 != (ulonglong *)0x0) {
        uVar15 = *(uint *)(ppuVar20 + 7);
        if (*(ulonglong ***)(&DAT_00436638 + (ulonglong)uVar15 * 8) == ppuVar20) {
          (&DAT_004363e8)[(ulonglong)uVar15 + 0x4a] = (ulonglong)ppuVar10;
          if (ppuVar10 == (ulonglong **)0x0) {
            bVar6 = (byte)uVar15 & 0x1f;
            DAT_004363e4 = DAT_004363e4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          }
          else {
LAB_00403629:
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
          if (ppuVar10 != (ulonglong **)0x0) goto LAB_00403629;
        }
      }
    }
    ppuVar16[1] = (ulonglong *)(uVar5 | 1);
    *(ulonglong *)((longlong)ppuVar16 + uVar5) = uVar5;
    if (ppuVar16 == ppuVar9) {
      DAT_004363e8 = uVar5;
      return unaff_RSI;
    }
LAB_004036ae:
    uVar15 = DAT_004363e4;
    if (uVar5 < 0x100) {
      uVar4 = (ulonglong)(uint)((int)(uVar5 >> 3) * 2);
      uVar15 = 1 << ((byte)(uVar5 >> 3) & 0x1f);
      if ((DAT_004363e0 & uVar15) == 0) {
        DAT_004363e0 = DAT_004363e0 | uVar15;
        puVar11 = (ulonglong *)(&DAT_00436428 + uVar4 * 8);
      }
      else {
        puVar11 = (ulonglong *)(&DAT_00436438)[uVar4];
      }
      (&DAT_00436438)[uVar4] = ppuVar16;
      puVar11[3] = (ulonglong)ppuVar16;
      ppuVar16[2] = puVar11;
      ppuVar16[3] = (ulonglong *)(&DAT_00436428 + uVar4 * 8);
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
        DAT_004363e4 = uVar15 | uVar17;
        *(ulonglong ***)(&DAT_00436638 + uVar4 * 8) = ppuVar16;
        ppuVar16[6] = (ulonglong *)(&DAT_00436638 + uVar4 * 8);
      }
      else {
        bVar6 = 0;
        if (uVar8 != 0x1f) {
          bVar6 = 0x39 - (char)(uVar8 >> 1);
        }
        lVar14 = uVar5 << (bVar6 & 0x3f);
        puVar11 = *(ulonglong **)(&DAT_00436638 + uVar4 * 8);
        do {
          puVar13 = puVar11;
          if ((puVar13[1] & 0xfffffffffffffff8) == uVar5) {
            puVar11 = (ulonglong *)puVar13[2];
            puVar11[3] = (ulonglong)ppuVar16;
            puVar13[2] = (ulonglong)ppuVar16;
            ppuVar16[2] = puVar11;
            ppuVar16[3] = puVar13;
            ppuVar16[6] = (ulonglong *)0x0;
            goto LAB_004037fc;
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
LAB_004037fc:
      _DAT_00436418 = _DAT_00436418 + -1;
      if (_DAT_00436418 == 0) {
        uVar4 = FUN_00401b19();
        return uVar4;
      }
    }
    return unaff_RSI;
  }
  uVar5 = uVar5 + DAT_004363f0;
  bVar21 = ppuVar16 == DAT_00436400;
  DAT_004363f0 = uVar5;
  DAT_00436408 = ppuVar16;
  ppuVar16[1] = (ulonglong *)(uVar5 | 1);
  if (bVar21) {
    DAT_00436400 = (ulonglong **)0x0;
    DAT_004363e8 = 0;
  }
  if (uVar5 <= DAT_00436410) {
    return unaff_RSI;
  }
  if (DAT_00436408 != (ulonglong **)0x0) {
    if (0x50 < DAT_004363f0) {
      ppuVar16 = (ulonglong **)&DAT_00436758;
      ppuVar20 = ppuVar16;
      do {
        ppuVar9 = (ulonglong **)*ppuVar20;
        if (ppuVar9 <= DAT_00436408) {
          puVar11 = ppuVar20[1];
          if (DAT_00436408 < (ulonglong **)((longlong)ppuVar9 + (longlong)puVar11)) {
            if ((((*(uint *)(ppuVar20 + 3) & 8) != 0) || ((*(uint *)(ppuVar20 + 3) & 1) == 0)) ||
               (puVar13 = (ulonglong *)
                          ((((DAT_004363f0 + DAT_004367b0) - 0x51) / DAT_004367b0 - 1) *
                          DAT_004367b0),
               puVar11 <= puVar13 && (longlong)puVar13 - (longlong)puVar11 != 0)) break;
            goto LAB_00401e70;
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
    goto LAB_00401e0a;
  }
  goto LAB_00401dea;
  while (ppuVar16 = (ulonglong **)ppuVar16[2], ppuVar16 != (ulonglong **)0x0) {
LAB_00401e70:
    if ((ppuVar9 <= ppuVar16) && (ppuVar16 < (ulonglong **)((longlong)ppuVar9 + (longlong)puVar11)))
    goto LAB_00401e0a;
  }
  uVar7 = 0;
  lVar14 = FUN_00404008();
  if ((lVar14 == -1) && (iVar3 = FUN_00403d56(uVar7), iVar3 != 0)) {
LAB_00401e0a:
    puVar13 = (ulonglong *)0x0;
  }
  else if (puVar13 != (ulonglong *)0x0) {
    ppuVar20[1] = (ulonglong *)((longlong)ppuVar20[1] - (longlong)puVar13);
    DAT_00436738 = DAT_00436738 - (longlong)puVar13;
    FUN_00401ad2(uVar7,DAT_004363f0 - (longlong)puVar13);
  }
  uVar4 = FUN_00401b19();
  lVar14 = (longlong)puVar13 + uVar4;
  if (lVar14 != 0) goto LAB_00401f01;
  if (DAT_00436410 < DAT_004363f0) {
    DAT_00436410 = 0xffffffffffffffff;
    goto LAB_00401f01;
  }
LAB_00401dea:
  lVar14 = 0;
LAB_00401f01:
  return (ulonglong)(lVar14 != 0);
}



// WARNING: Type propagation algorithm not settling

longlong * FUN_00403873(undefined8 *param_1,ulonglong param_2)

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
    if ((param_2 + 8 <= uVar11) && (uVar11 - param_2 <= (ulonglong)(DAT_004367b0 * 2))) {
      return unaff_RSI;
    }
    lVar4 = *unaff_RSI;
    uVar13 = DAT_004367b0 + 0x3e + param_2 & -DAT_004367b0;
    uVar9 = FUN_00404008();
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
    goto LAB_00403beb;
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
        if (lVar12 == 0) goto LAB_00403b33;
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
LAB_00403b33:
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
LAB_00403b58:
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
        if (lVar12 != 0) goto LAB_00403b58;
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
LAB_00403beb:
  FUN_00401f12(param_1,uVar11);
  return unaff_RSI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403cbb(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (DAT_004367a0 == 0) {
    uVar1 = 0x10000;
    if (0xffff < DAT_00437fa8) {
      uVar1 = DAT_00437fa8;
    }
    uVar2 = (ulonglong)uVar1;
    if (((ulonglong)(ulonglong *)(uVar2 - 1) & uVar2) != 0) {
      uVar2 = FUN_00401000(param_1,(ulonglong *)(uVar2 - 1));
    }
    _DAT_004367a8 = 0x1000;
    _DAT_004367b8 = 0x40000;
    DAT_004367c0 = 0xa00000;
    _DAT_004367c8 = 5;
    _DAT_00436750 = 5;
    DAT_004367a0 = DAT_00436000 & 0xfffffffffffffff8 | 8;
    DAT_004367b0 = uVar2;
  }
  return;
}



void FUN_00403d42(void)

{
  FUN_00403d6a();
  return;
}



void FUN_00403d56(undefined8 param_1)

{
  FUN_0040400e(param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x00403edc)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_00403d6a(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 extraout_var;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  LPVOID pvVar12;
  
  uVar5 = (uint)DAT_00436360 | _DAT_00436368;
  pvVar12 = (LPVOID)0x0;
  uVar11 = DAT_004362b8 & 4;
  uVar7 = unaff_RDI + 0xffff;
  uVar8 = uVar7 & 0xffffffffffff0000;
  uVar1 = uVar5 & 0x10;
  if ((uVar1 == 0) && (pvVar12 = (LPVOID)0x200000000000, DAT_00436b00 != 0)) {
    uVar2 = DAT_00436b00;
    do {
      uVar2 = uVar2 - 1;
      lVar9 = (longlong)(*(int *)(&DAT_00436b0c + uVar2 * 8) + 1);
      if ((lVar9 + (uVar7 >> 0x10) < 0x30000001) &&
         (0x1ffffffe < *(int *)(&DAT_00436b0c + uVar2 * 8))) {
        pvVar12 = (LPVOID)(lVar9 << 0x10);
        goto LAB_00403e4a;
      }
    } while (uVar2 != 0);
    pvVar12 = (LPVOID)((longlong)(*(int *)((longlong)&DAT_00436b00 + DAT_00436b00 * 8 + 4) + 1) <<
                      0x10);
  }
LAB_00403e4a:
  if (DAT_00436b00 == 300) {
    lVar9 = FUN_00401556();
    return lVar9;
  }
  if (uVar1 == 0) {
    FUN_0040427b((longlong)pvVar12 >> 0x10,(int)DAT_00436b00);
  }
  else {
    FUN_00403d56((ulonglong)uVar1);
  }
  if (uVar11 == 0) {
    uVar7 = (ulonglong)(uVar5 | 0x12);
    lVar3 = FUN_0040429b();
  }
  else {
    uVar7 = uVar7 >> 0x20;
    uVar1 = FUN_004046fa();
    lVar9 = FUN_00401a32((DWORD)(uVar8 >> 0x20),uVar1,(DWORD)uVar8,(LPCWSTR)0x0);
    if (lVar9 != 0) {
      uVar1 = FUN_004042a8();
      uVar7 = CONCAT44(extraout_var,uVar1);
      lVar3 = FUN_00401a5e(0,0,uVar8,pvVar12);
      if (lVar3 != 0) goto LAB_00403f50;
      FUN_00401a19();
    }
    lVar3 = FUN_00404786();
  }
  lVar9 = -1;
LAB_00403f50:
  if (lVar3 != -1) {
    uVar7 = FUN_0040427b(uVar7,(int)DAT_00436b00);
    if (uVar7 < DAT_00436b00) {
      lVar6 = (uVar7 + 2) * 8;
      lVar4 = FUN_00404542(lVar6,(DAT_00436b00 - uVar7) * 8);
      uVar7 = FUN_00404542(lVar6,(DAT_00436b00 - lVar4) * 8);
    }
    DAT_00436b00 = DAT_00436b00 + 1;
    iVar10 = (int)((ulonglong)lVar3 >> 0x10);
    *(int *)(&DAT_00436b08 + uVar7 * 8) = iVar10;
    *(longlong *)(&DAT_00437468 + uVar7 * 8) = lVar9;
    *(int *)(&DAT_00436b0c + uVar7 * 8) = (int)(uVar8 + 0xffff >> 0x10) + -1 + iVar10;
  }
  return lVar3;
}



void FUN_00404008(void)

{
  FUN_00401566();
  return;
}



uint FUN_0040400e(undefined8 param_1)

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
    uVar4 = FUN_0040427b(param_1,(int)DAT_00436b00);
    uVar5 = uVar4;
    while ((uVar5 != 0 &&
           (uVar1 = uVar5 - 1,
           (int)((ulonglong)unaff_RDI >> 0x10) <= *(int *)(&DAT_00436b0c + uVar1 * 8)))) {
      uVar5 = uVar1;
      if (((byte)DAT_004362b8 & 4) == 0) {
        uVar2 = FUN_00404300();
        uVar7 = uVar7 | uVar2;
      }
      else {
        iVar3 = FUN_00401a74();
        if (iVar3 == 0) {
          uVar7 = 0xffffffff;
        }
        iVar3 = FUN_00401a19();
        if (iVar3 == 0) {
          uVar7 = 0xffffffff;
        }
      }
    }
    if (uVar5 < uVar4) {
      if (uVar4 < DAT_00436b00) {
        lVar6 = (uVar5 + 1) * 8;
        FUN_00404542(lVar6,(DAT_00436b00 - uVar4) * 8);
        uVar5 = FUN_00404542(lVar6,(DAT_00436b00 - uVar4) * 8);
      }
      DAT_00436b00 = (uVar5 + DAT_00436b00) - uVar4;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



undefined8 FUN_004041e6(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong unaff_RDI;
  
  puVar1 = DAT_004367e0;
  puVar3 = DAT_004367e0;
joined_r0x00404202:
  do {
    DAT_004367e0 = puVar3;
    if (puVar1 == (uint *)0x0) {
      return param_2;
    }
    uVar4 = *puVar1;
    do {
      do {
        if (uVar4 == 0) {
          puVar1 = *(uint **)(puVar1 + 2);
          puVar3 = DAT_004367e0;
          if ((unaff_RDI == 0) && (puVar3 = puVar1, puVar1 != (uint *)0x0)) {
            FUN_00401acc();
          }
          goto joined_r0x00404202;
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
    puVar1 = DAT_004367e0;
    puVar3 = DAT_004367e0;
  } while( true );
}



longlong FUN_0040427b(undefined8 param_1,int param_2)

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



void FUN_0040429b(void)

{
  FUN_004042f0();
  return;
}



uint FUN_004042a8(void)

{
  uint unaff_ESI;
  uint unaff_EDI;
  
  return (int)unaff_ESI >> 1 & 1U | unaff_EDI & 2 | (int)unaff_ESI >> 2 & 0x20000000U |
         (unaff_ESI & 0x4000000) << 5 | unaff_EDI * 4 & 4 | (unaff_EDI & 4) << 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004042f0(void)

{
                    // WARNING: Could not recover jumptable at 0x004042fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362c0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404300(void)

{
                    // WARNING: Could not recover jumptable at 0x0040430a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_004362c0)();
  return;
}



void FUN_0040436d(void)

{
  FUN_004043af();
  return;
}



ulonglong FUN_0040437c(void)

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



ulonglong FUN_004043af(void)

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



void FUN_00404420(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x0040442d
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00436098 + uVar1 * 8))();
  return;
}



void FUN_00404542(undefined8 param_1,longlong param_2)

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



void FUN_00404562(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x00404579
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_004361a0 + uVar1 * 8))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004046c1(void)

{
  byte unaff_DIL;
  
  _DAT_00437fb4 = _DAT_00437fb4 | 4;
  if (((byte)DAT_004362b8 & 4) != 0) {
                    // WARNING: Subroutine does not return
    ExitProcess((uint)unaff_DIL);
  }
  syscall();
  InterruptDescriptorTableRegister(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



uint FUN_004046fa(void)

{
  uint uVar1;
  uint unaff_ESI;
  uint unaff_EDI;
  
  if ((unaff_EDI & 7) == 7) {
    uVar1 = 0x40;
    if (((unaff_ESI & 1) == 0) &&
       (uVar1 = 0x40, DAT_00436360 != ((longlong)(int)unaff_ESI & DAT_00436360))) {
      uVar1 = 0x80;
    }
  }
  else if ((unaff_EDI & 3) == 3) {
    uVar1 = 4;
    if ((unaff_ESI & 1) == 0) {
      uVar1 = (uint)(DAT_00436360 != ((longlong)(int)unaff_ESI & DAT_00436360)) * 4 + 4;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00404786(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_004362b8 & 4) != 0) {
    _DAT_00437fb0 = FUN_00401a48();
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_00401566();
  return uVar1;
}


