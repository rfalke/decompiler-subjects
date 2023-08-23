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

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulonglong ULONG_PTR;

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



void FUN_00401297(void)

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
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  longlong *unaff_R15;
  char *apcStack_58 [7];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar20 = (undefined8 *)&DAT_00404000;
  uStack_18 = 0;
  uStack_20 = 0x16;
  apcStack_58[6] = (char *)0xffffffff80000007;
  apcStack_58[5] = (char *)0xffffffff80000001;
  apcStack_58[4] = (char *)0x7;
  apcStack_58[3] = (char *)0x2;
  ppcVar15 = apcStack_58 + 2;
  apcStack_58[2] = (char *)0x1;
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
    *(undefined4 *)puVar20 = *puVar2;
    *(undefined4 *)((longlong)puVar20 + 4) = uVar3;
    *(undefined4 *)(puVar20 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
    ppcVar16 = ppcVar15;
    do {
      puVar20 = puVar20 + 2;
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
            puVar21 = puVar20;
            puVar20 = puVar21 + 1;
            *puVar21 = &LAB_004026e7 + bVar11;
            cVar10 = cVar10 + -1;
          } while (cVar10 != '\0');
          cVar13 = cVar13 + -1;
          pcVar7 = pcVar17 + 2;
        } while (cVar13 != '\0');
        ppcVar16[1] = (char *)0x4012ff;
        FUN_00401636();
        ppcVar16[1] = (char *)0x401304;
        FUN_004017ec();
        ppcVar16[1] = (char *)0x20;
        uVar12 = ppcVar16[1];
        ppcVar16[1] = (char *)0x401318;
        FUN_004017be((int)uVar12,(longlong)&LAB_00402764);
        ppcVar16[1] = (char *)0x20;
        uVar12 = ppcVar16[1];
        ppcVar16[1] = (char *)0x40132c;
        FUN_004017be((int)uVar12,(longlong)&LAB_0040288a);
        ppcVar16[1] = (char *)uVar9;
        *ppcVar16 = pcVar17 + 8;
        if ((*(byte *)puVar20 & 8) == 0) {
          if ((*(byte *)puVar20 & 0x20) == 0) {
            if ((*(byte *)puVar20 & 4) == 0) {
              if (*unaff_R15 == 0) {
                ppcVar16[-1] = (char *)0x2a;
                ppcVar16[-2] = (char *)0x10;
                pbVar18 = &DAT_00402f17;
              }
              else {
                ppcVar16[-1] = (char *)0x0;
                ppcVar16[-2] = (char *)0x1;
                pbVar18 = &DAT_00402f0c;
              }
            }
            else {
              ppcVar16[-1] = (char *)0x22;
              ppcVar16[-2] = (char *)0x4;
              pbVar18 = &DAT_00402f22;
            }
          }
          else {
            ppcVar16[-1] = (char *)0x30;
            ppcVar16[-2] = (char *)0x20;
            pbVar18 = &DAT_00402f01;
          }
        }
        else {
          ppcVar16[-1] = (char *)0x45;
          ppcVar16[-2] = (char *)0x8;
          pbVar18 = &DAT_00402f33;
        }
        *puVar20 = ppcVar16[-2];
        puVar21[2] = &DAT_004025d0 + (longlong)ppcVar16[-1];
        ppcVar16[-1] = (char *)(puVar21 + 3);
        for (puVar22 = (ulonglong *)&DAT_00404648; puVar22 < &DAT_00404690; puVar22 = puVar22 + 1) {
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
        ppcVar16[1] = (char *)0x1;
        DAT_0040600c = ppcVar16[1];
        DAT_00406004 = DAT_00404688;
        DAT_00406018 = &DAT_00405000;
        DAT_00406020 = 0x1000;
        DAT_00406030 = (code *)&LAB_00402115;
        if (((byte)DAT_00404630 & 2) == 0) {
          DAT_00406030 = FUN_00402083;
        }
        DAT_00406038 = &DAT_00406000;
        return;
      }
      ppcVar16 = ppcVar16 + 1;
    } while (DAT_00404000 < (byte)uVar9);
  } while( true );
}



undefined8 FUN_0040141f(void)

{
  FUN_00401e0a();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00401433(undefined8 param_1)

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
  
  puVar3 = DAT_00406038;
  if ((((byte)DAT_00404630 & 4) != 0) ||
     (bVar5 = FUN_0040156c(), (int)CONCAT71(extraout_var,bVar5) != 0)) {
    *puVar3 = 1;
  }
  if (DAT_00406050 == (undefined *)0x0) {
    DAT_00406050 = &DAT_00406058;
    _DAT_00406048 = 8;
    FUN_0040215b(param_1,0);
  }
  uVar4 = DAT_00406040;
  lVar7 = DAT_00406040 - 1;
  while (lVar7 != -1) {
    lVar1 = lVar7 * 8;
    lVar7 = lVar7 + -1;
    if (*(longlong *)(DAT_00406050 + lVar7 * 8 + 8) == 0) {
      *(undefined **)(DAT_00406050 + lVar1) = puVar3;
      return 0;
    }
  }
  uVar2 = DAT_00406040 + 1;
  if (_DAT_00406048 <= uVar2) {
    uVar6 = FUN_00402286(1,8);
    uVar8 = 0xffffffffffffffff;
    if ((char)uVar6 == '\0') goto LAB_00401519;
  }
  *(undefined **)(DAT_00406050 + uVar4 * 8) = puVar3;
  uVar8 = uVar4;
  DAT_00406040 = uVar2;
LAB_00401519:
  return uVar8 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00401524(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  code **ppcVar6;
  undefined8 unaff_R14;
  undefined uVar7;
  uint uStack_f0;
  
  FUN_00401297();
  _DAT_0040783c = _DAT_0040783c | 1;
  ppcVar6 = (code **)&DAT_00403010;
  for (ppuVar4 = &PTR_FUN_00403008; ppcVar6 != (code **)ppuVar4; ppuVar4 = (code **)ppuVar4 + 1) {
    (*(code *)*ppuVar4)();
  }
  FUN_0040141f();
  FUN_004017fd(ppcVar6,unaff_R14);
  uVar1 = DAT_00407838;
  uVar7 = (undefined)(DAT_00404630 & 4);
  if ((DAT_00404630 & 4) == 0) {
    uVar5 = FUN_00401609();
    if ((int)uVar5 != -1) {
      uVar7 = (uStack_f0 & 0xf000) == 0x2000;
      uVar1 = DAT_00407838;
    }
  }
  else {
    uVar7 = 0;
    bVar2 = FUN_0040245f();
    uVar1 = DAT_00407838;
    if (bVar2) {
      iVar3 = FUN_00401dd2();
      uVar7 = iVar3 == 2;
      uVar1 = DAT_00407838;
    }
  }
  DAT_00407838 = uVar1;
  return (bool)uVar7;
}



bool FUN_0040156c(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined uVar5;
  uint local_f0;
  
  uVar1 = DAT_00407838;
  uVar5 = (undefined)(DAT_00404630 & 4);
  if ((DAT_00404630 & 4) == 0) {
    uVar4 = FUN_00401609();
    if ((int)uVar4 != -1) {
      uVar5 = (local_f0 & 0xf000) == 0x2000;
      uVar1 = DAT_00407838;
    }
  }
  else {
    uVar5 = 0;
    bVar2 = FUN_0040245f();
    uVar1 = DAT_00407838;
    if (bVar2) {
      iVar3 = FUN_00401dd2();
      uVar5 = iVar3 == 2;
      uVar1 = DAT_00407838;
    }
  }
  DAT_00407838 = uVar1;
  return (bool)uVar5;
}



ulonglong FUN_00401609(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_004025b0();
  if ((int)uVar1 != -1) {
    FUN_0040168d();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



void FUN_00401636(void)

{
  DAT_004076a0 = 3;
  DAT_004076b0 = &DAT_004076b8;
  DAT_004076a8 = 0x10;
  DAT_004076c8 = 1;
  DAT_004076e0 = DAT_004076c8;
  DAT_004076f8 = DAT_004076c8;
  DAT_004076b8 = GetStdHandle(0xfffffff6);
  DAT_004076d0 = GetStdHandle(0xfffffff5);
  DAT_004076e8 = GetStdHandle(0xfffffff4);
  return;
}



void FUN_0040168d(void)

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
  if ((DAT_00404630 & 8) == 0) {
    if ((DAT_00404630 & 0x20) == 0) {
      if ((DAT_00404630 & 0x10) == 0) {
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



undefined8 FUN_004017be(int param_1,longlong param_2)

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
            *(byte *)((longlong)puVar1 + (ulonglong)(byte)((DAT_00404035 & 2) != 0 | !in_ZF << 1)) +
            param_2;
  return *puVar1;
}



void FUN_004017ec(void)

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



undefined8 FUN_004017fd(undefined8 param_1,undefined8 param_2)

{
  FUN_004021f0(param_1,param_2);
  FUN_00402941();
  DAT_00407838 = DAT_00404648;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401816(void)

{
  DAT_00407838 = DAT_00404648;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401826(void)

{
  DAT_00407838 = DAT_00404658;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401836(void)

{
  DAT_00407838 = DAT_00404660;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401846(void)

{
  DAT_00407838 = DAT_00404668;
  return 0xffffffffffffffff;
}



undefined8 FUN_00401856(void)

{
  DAT_00407838 = DAT_00404670;
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
  DAT_00404630 = 4;
  GetCommandLineW();
  pWVar4 = GetEnvironmentStringsW();
  FUN_00401afe((longlong)local_d038,0x3fff,0x200);
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
    uVar3 = FUN_0040262d();
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
      FUN_00401524();
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
        uVar7 = FUN_0040263c();
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
        uVar3 = FUN_0040262d();
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



void FUN_00401aa3(void)

{
  uint uVar1;
  ushort **unaff_RDI;
  
  if (**unaff_RDI < 0xd800) {
    *(uint *)(unaff_RDI + 3) = (uint)**unaff_RDI;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0040262d();
  }
  *unaff_RDI = *unaff_RDI + uVar1;
  return;
}



void FUN_00401ace(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(unaff_RDI + 0x10);
  uVar2 = (ulonglong)(int)unaff_ESI;
  if (0x7f < unaff_ESI) {
    uVar2 = FUN_0040263c();
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



ulonglong FUN_00401afe(longlong param_1,longlong param_2,ulonglong param_3)

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
  FUN_00401aa3();
  do {
    if (local_40 == 0) {
LAB_00401b67:
      FUN_00401ace();
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
      if (local_40 == 0) goto LAB_00401b67;
      if ((0x20 < local_40) || ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) == 0)) break;
      FUN_00401aa3();
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
LAB_00401bd8:
    while (local_40 != 0) {
      if ((bVar7) || (0x20 < local_40)) {
        if ((local_40 != 0x22) && (local_40 != 0x5c)) goto LAB_00401cd6;
        uVar5 = 0;
        while (local_40 == 0x5c) {
          uVar5 = uVar5 + 1;
          FUN_00401aa3();
        }
        lVar4 = 0;
        while (local_40 == 0x22) {
          FUN_00401aa3();
          lVar4 = lVar4 + 1;
        }
        uVar2 = uVar5;
        if (lVar4 != 0) {
          for (; 1 < uVar2; uVar2 = uVar2 - 2) {
            FUN_00401ace();
          }
          if ((uVar5 & 1) != 0) goto code_r0x00401c7d;
          goto LAB_00401c93;
        }
        while (uVar5 = uVar5 - 1, uVar5 != 0xffffffffffffffff) {
          FUN_00401ace();
        }
      }
      else {
        if ((0x100002600U >> ((ulonglong)local_40 & 0x3f) & 1) != 0) break;
LAB_00401cd6:
        FUN_00401ace();
        FUN_00401aa3();
      }
    }
    FUN_00401ace();
  } while( true );
code_r0x00401c7d:
  FUN_00401ace();
  lVar4 = lVar4 + -1;
  if (lVar4 != 0) {
LAB_00401c93:
    uVar2 = lVar4 - (ulonglong)!bVar7;
    uVar5 = uVar2 + 1;
    for (uVar6 = 3; uVar6 <= uVar5; uVar6 = uVar6 + 3) {
      FUN_00401ace();
    }
    bVar7 = uVar2 % 3 == 0;
  }
  goto LAB_00401bd8;
}



ulonglong FUN_00401d0b(undefined8 param_1,longlong param_2)

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
  lpOverlapped = (LPOVERLAPPED)FUN_00401dad();
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
    uVar3 = FUN_0040297a();
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



undefined4 * FUN_00401dad(void)

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



void FUN_00401dd2(void)

{
  HANDLE unaff_RDI;
  
  GetFileType(unaff_RDI);
  return;
}



void FUN_00401deb(void)

{
  GetLastError();
  return;
}



int FUN_00401e0a(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_00401eaa();
  if ((iVar1 != -1) && (uVar2 = FUN_00401e45(), (int)uVar2 != -1)) {
    return iVar1 + 1;
  }
  return -1;
}



ulonglong FUN_00401e45(void)

{
  uint uVar1;
  ulonglong uVar2;
  char *unaff_RSI;
  uint unaff_EDI;
  
  if (unaff_EDI == 0xffffffff) {
LAB_00401ea0:
    uVar2 = FUN_00401f6e();
  }
  else {
    *(char *)(*(longlong *)(unaff_RSI + 0x18) + (ulonglong)*(uint *)(unaff_RSI + 0x14)) =
         (char)unaff_EDI;
    uVar1 = *(int *)(unaff_RSI + 0x14) + 1U & *(int *)(unaff_RSI + 0x20) - 1U;
    *(uint *)(unaff_RSI + 0x14) = uVar1;
    if (((uVar1 == *(uint *)(unaff_RSI + 0x10)) || (*unaff_RSI == '\x02')) ||
       ((*unaff_RSI == '\x01' && ((char)unaff_EDI == '\n')))) {
      if (*(code **)(unaff_RSI + 0x30) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00401e94. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (**(code **)(unaff_RSI + 0x30))();
        return uVar2;
      }
      if (uVar1 == *(uint *)(unaff_RSI + 0x10)) goto LAB_00401ea0;
    }
    uVar2 = (ulonglong)(unaff_EDI & 0xff);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00401eaa(void)

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
LAB_00401f56:
      iVar5 = iVar5 + 1;
    }
    if (*(code **)(unaff_RSI + 0x30) == (code *)0x0) {
      if (uVar3 != *(uint *)(unaff_RSI + 0x10)) goto LAB_00401f56;
      iVar4 = FUN_00401f6e();
    }
    else {
      iVar4 = (**(code **)(unaff_RSI + 0x30))();
    }
    if (iVar4 != -1) goto LAB_00401f56;
    iVar4 = FUN_00401fa1();
    if (iVar4 != _DAT_00404650) {
      bVar2 = FUN_00401f97();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        DAT_00407838 = (undefined4)DAT_00404678;
        *(undefined4 *)(unaff_RSI + 8) = DAT_00407838;
      }
      return -1;
    }
  } while( true );
}



void FUN_00401f6e(void)

{
  FUN_00401f76();
  return;
}



undefined8 FUN_00401f76(void)

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
    DAT_00407838 = unaff_ESI;
  }
  return 0xffffffffffffffff;
}



bool FUN_00401f97(void)

{
  longlong unaff_RDI;
  
  return *(int *)(unaff_RDI + 8) == -1;
}



undefined4 FUN_00401fa1(void)

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

int FUN_00401faf(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  int iVar4;
  longlong lVar5;
  
  if (unaff_RDI == 0) {
    iVar4 = 0;
    lVar5 = DAT_00406040;
    while (lVar5 = lVar5 + -1, lVar5 != -1) {
      if (*(longlong *)(DAT_00406050 + lVar5 * 8) != 0) {
        iVar1 = FUN_00401faf();
        if (iVar1 == -1) {
          return -1;
        }
        iVar4 = iVar4 + iVar1;
      }
    }
  }
  else {
    iVar4 = 0;
    if ((*(int *)(unaff_RDI + 0xc) != -1) && ((_DAT_00404688 & *(uint *)(unaff_RDI + 4)) != 0)) {
      iVar4 = *(int *)(unaff_RDI + 8);
      if (iVar4 == 0) {
        while (*(int *)(unaff_RDI + 0x10) != *(int *)(unaff_RDI + 0x14)) {
          uVar2 = FUN_00402083();
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
        uVar3 = FUN_00401f76();
        iVar4 = (int)uVar3;
      }
    }
  }
  return iVar4;
}



ulonglong FUN_00402083(void)

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
  uVar2 = FUN_0040247a();
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = FUN_00402150();
  }
  else {
    *(uint *)(unaff_RDI + 0x10) =
         (int)uVar2 + *(int *)(unaff_RDI + 0x10) & *(int *)(unaff_RDI + 0x20) - 1U;
    uVar2 = (ulonglong)(uVar3 - uVar1);
  }
  return uVar2;
}



void FUN_00402150(void)

{
  FUN_00401f76();
  return;
}



// WARNING: Removing unreachable block (ram,0x0040219a)
// WARNING: Removing unreachable block (ram,0x004021ab)

undefined8 FUN_0040215b(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  if (DAT_004060a0 == (uint *)0x0) {
    DAT_004060a0 = &DAT_004060a8;
  }
  puVar2 = DAT_004060a0;
  if (*DAT_004060a0 == 0xffffffff) {
    uVar4 = FUN_00401836();
  }
  else {
    uVar3 = ~*DAT_004060a0;
    uVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    *DAT_004060a0 = *DAT_004060a0 | 1 << (uVar1 & 0x1f);
    uVar4 = 0;
    *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 4) = unaff_RDI;
    *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 6) = unaff_RSI;
    *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 8) = param_2;
  }
  return uVar4;
}



// WARNING: Removing unreachable block (ram,0x0040226a)

undefined8 FUN_004021f0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong unaff_RDI;
  
  puVar1 = DAT_004060a0;
  puVar3 = DAT_004060a0;
joined_r0x0040220a:
  do {
    DAT_004060a0 = puVar3;
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
            puVar3 = DAT_004060a0;
          }
          goto joined_r0x0040220a;
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
    puVar1 = DAT_004060a0;
    puVar3 = DAT_004060a0;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00402361)
// WARNING: Removing unreachable block (ram,0x00402373)
// WARNING: Removing unreachable block (ram,0x00402380)
// WARNING: Removing unreachable block (ram,0x00402389)
// WARNING: Removing unreachable block (ram,0x00402394)

undefined8 FUN_00402286(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *unaff_RSI;
  ulonglong uVar5;
  longlong *unaff_RDI;
  
  lVar4 = param_1;
  FUN_004023ce(param_1);
  FUN_004023ce(lVar4);
  uVar1 = *unaff_RSI;
  if (*unaff_RDI == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    uVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / auVar2,0);
    uVar5 = 4;
    if (3 < uVar3) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = (uVar1 >> 1) + uVar1;
  }
  if ((((uVar1 == 0) || (((param_2 | uVar1) & 0xffffffffffff0000) == 0)) ||
      (param_2 == (param_2 * uVar1) / uVar1)) &&
     (((uVar1 = uVar5 + 1 + param_1, uVar1 == 0 || (((param_2 | uVar1) & 0xffffffffffff0000) == 0))
      || (param_2 == (param_2 * uVar1) / uVar1)))) {
    FUN_00401836();
  }
  else {
    FUN_00401856();
  }
  return 0;
}



bool FUN_004023ce(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RDI;
  bool bVar3;
  
  if (unaff_RDI - 0x600000000000U < 0x100000000000) {
    return false;
  }
  lVar1 = FUN_0040243f(param_1,(int)DAT_004063c0);
  bVar3 = false;
  if (lVar1 != 0) {
    iVar2 = (int)((ulonglong)unaff_RDI >> 0x10);
    bVar3 = true;
    if (*(int *)(&DAT_004063c0 + lVar1) != iVar2) {
      bVar3 = *(int *)(&DAT_004063cc + (lVar1 + -1) * 8) == iVar2;
    }
  }
  return bVar3;
}



longlong FUN_0040243f(undefined8 param_1,int param_2)

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



bool FUN_0040245f(void)

{
  int unaff_ESI;
  int unaff_EDI;
  bool bVar1;
  
  bVar1 = false;
  if (unaff_EDI != 0) {
    bVar1 = *(int *)((longlong)unaff_EDI * 0x18 + DAT_004076b0 + 0x10) == unaff_ESI;
  }
  return bVar1;
}



ulonglong FUN_0040247a(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int unaff_EDI;
  
  if (unaff_EDI == -1) {
    uVar2 = FUN_00401826();
    uVar3 = (ulonglong)(int)uVar2;
  }
  else {
    bVar1 = FUN_0040245f();
    if (bVar1) {
      uVar3 = (*(code *)0x0)(0xffffffffffffffff,1);
    }
    else if (((byte)DAT_00404630 & 4) == 0) {
      uVar3 = FUN_004025c0();
    }
    else {
      bVar1 = FUN_0040245f();
      if (bVar1) {
        uVar3 = (*(code *)0x0)(0,1,0,0);
      }
      else {
        bVar1 = FUN_0040245f();
        if ((!bVar1) && (bVar1 = FUN_0040245f(), !bVar1)) {
          uVar3 = FUN_00401816();
          return uVar3;
        }
        uVar3 = FUN_00401d0b(0xffffffffffffffff,1);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004025b0(void)

{
                    // WARNING: Could not recover jumptable at 0x004025ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00404638)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004025c0(void)

{
                    // WARNING: Could not recover jumptable at 0x004025ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00404638)();
  return;
}



void FUN_0040262d(void)

{
  FUN_0040266f();
  return;
}



ulonglong FUN_0040263c(void)

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



ulonglong FUN_0040266f(void)

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



void FUN_00402750(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x0040275d
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00404420 + uVar1 * 8))();
  return;
}



void FUN_00402870(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x00402887
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00404528 + uVar1 * 8))();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402941(void)

{
  byte unaff_DIL;
  
  _DAT_0040783c = _DAT_0040783c | 4;
  if (((byte)DAT_00404630 & 4) != 0) {
                    // WARNING: Subroutine does not return
    ExitProcess((uint)unaff_DIL);
  }
  syscall();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined8 FUN_0040297a(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_00404630 & 4) != 0) {
    DAT_00407838 = FUN_00401deb();
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_00401846();
  return uVar1;
}


