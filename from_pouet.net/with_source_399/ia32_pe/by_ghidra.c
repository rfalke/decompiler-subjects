typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef ulong DWORD;

typedef void * PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

typedef uchar BYTE;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

typedef ushort WORD;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef void * HANDLE;

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

typedef ULONG_PTR DWORD_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[41];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int BOOL;

typedef uint UINT;

typedef BYTE * PBYTE;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

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

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
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

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef uint uintptr_t;

typedef int (* _onexit_t)(void);

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef uint size_t;

typedef int errno_t;




void FUN_00401000(uint param_1,int param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  byte *pbVar1;
  byte bVar2;
  int *in_EAX;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  bVar2 = param_6;
  iVar7 = *in_EAX;
  if (((((-1 < (int)param_1) && (-1 < param_3)) && (-1 < param_2)) &&
      ((-1 < param_4 && ((int)param_1 < iVar7)))) &&
     ((param_3 < iVar7 && ((param_2 < in_EAX[1] && (param_4 < in_EAX[1])))))) {
    uVar8 = param_4 - param_2;
    uVar3 = param_3 - param_1;
    if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) <
        (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
      if (param_4 < param_2) {
        param_6 = param_5;
        uVar8 = -uVar8;
        uVar3 = -uVar3;
        param_2 = param_4;
        param_1 = param_3;
        param_5 = bVar2;
      }
      if (uVar8 != 0) {
        iVar9 = in_EAX[3] + iVar7 * param_2 + param_1;
        iVar6 = (uint)param_5 << 0x10;
        iVar4 = 0;
        param_1 = uVar8;
        if (0 < (int)uVar8) {
          do {
            iVar4 = iVar4 + (int)(uVar3 << 0x10) / (int)uVar8;
            iVar6 = iVar6 + (int)(((uint)param_6 - (uint)param_5) * 0x10000) / (int)uVar8;
            pbVar1 = (byte *)((iVar4 >> 0x10) + iVar9);
            puVar5 = (undefined *)((iVar4 >> 0x10) + iVar9);
            iVar9 = iVar9 + iVar7;
            param_1 = param_1 - 1;
            *puVar5 = (&DAT_00478840)[(iVar6 >> 0x10) + (uint)*pbVar1 * 0x40];
          } while (param_1 != 0);
          return;
        }
      }
    }
    else {
      if (param_3 < (int)param_1) {
        uVar3 = -uVar3;
        param_6 = param_5;
        uVar8 = -uVar8;
        param_1 = param_3;
        param_2 = param_4;
        param_5 = bVar2;
      }
      if (uVar3 != 0) {
        iVar6 = in_EAX[3] + iVar7 * param_2 + param_1;
        iVar7 = (uint)param_5 << 0x10;
        iVar4 = 0;
        param_1 = uVar3;
        if (0 < (int)uVar3) {
          do {
            iVar4 = iVar4 + (int)(uVar8 << 0x10) / (int)uVar3;
            iVar7 = iVar7 + (int)(((uint)param_6 - (uint)param_5) * 0x10000) / (int)uVar3;
            iVar9 = (iVar4 >> 0x10) * 0x140;
            pbVar1 = (byte *)(iVar9 + iVar6);
            puVar5 = (undefined *)(iVar9 + iVar6);
            iVar6 = iVar6 + 1;
            param_1 = param_1 - 1;
            *puVar5 = (&DAT_00478840)[(iVar7 >> 0x10) + (uint)*pbVar1 * 0x40];
          } while (param_1 != 0);
        }
      }
    }
  }
  return;
}



void FUN_004011e0(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int in_EAX;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  
  fVar14 = (float10)_CIsin();
  fVar1 = (float)(fVar14 * (float10)param_3);
  fVar14 = (float10)_CIcos();
  fVar2 = (float)(fVar14 * (float10)param_3);
  fVar14 = (float10)_CIsin();
  fVar3 = (float)(fVar14 * (float10)param_3);
  fVar14 = (float10)_CIcos();
  fVar4 = (float)(fVar14 * (float10)param_3);
  fVar14 = (float10)_CIsin();
  fVar5 = (float)(fVar14 * (float10)param_3);
  fVar14 = (float10)_CIcos();
  iVar13 = 0;
  fVar6 = (float)(fVar14 * (float10)param_3);
  if (3 < in_EAX) {
    pfVar11 = (float *)(param_1 + 8);
    iVar12 = (in_EAX - 4U >> 2) + 1;
    iVar13 = iVar12 * 4;
    pfVar10 = (float *)(param_2 + 0x10);
    do {
      fVar7 = pfVar11[-2];
      fVar8 = pfVar11[-1];
      fVar9 = *pfVar11;
      pfVar10[-3] = fVar5 * fVar7 + fVar8 * fVar6;
      fVar8 = fVar7 * fVar6 - fVar5 * fVar8;
      fVar7 = pfVar10[-3];
      pfVar10[-3] = fVar2 * fVar7 - fVar1 * fVar9;
      fVar7 = fVar1 * fVar7 + fVar9 * fVar2;
      pfVar10[-4] = fVar4 * fVar8 + fVar7 * fVar3;
      *(float *)((int)pfVar11 + (param_2 - param_1)) = fVar4 * fVar7 - fVar3 * fVar8;
      fVar7 = pfVar11[1];
      fVar8 = pfVar11[2];
      fVar9 = pfVar11[3];
      *pfVar10 = fVar5 * fVar7 + fVar8 * fVar6;
      fVar8 = fVar7 * fVar6 - fVar5 * fVar8;
      fVar7 = *pfVar10;
      *pfVar10 = fVar2 * fVar7 - fVar1 * fVar9;
      fVar7 = fVar1 * fVar7 + fVar9 * fVar2;
      pfVar10[-1] = fVar4 * fVar8 + fVar7 * fVar3;
      pfVar10[1] = fVar4 * fVar7 - fVar3 * fVar8;
      fVar7 = pfVar11[4];
      fVar8 = pfVar11[5];
      fVar9 = pfVar11[6];
      pfVar10[3] = fVar5 * fVar7 + fVar8 * fVar6;
      fVar8 = fVar7 * fVar6 - fVar5 * fVar8;
      fVar7 = pfVar10[3];
      pfVar10[3] = fVar2 * fVar7 - fVar1 * fVar9;
      fVar7 = fVar1 * fVar7 + fVar9 * fVar2;
      pfVar10[2] = fVar4 * fVar8 + fVar7 * fVar3;
      pfVar10[4] = fVar4 * fVar7 - fVar3 * fVar8;
      fVar7 = pfVar11[7];
      fVar8 = pfVar11[8];
      fVar9 = pfVar11[9];
      pfVar11 = pfVar11 + 0xc;
      iVar12 = iVar12 + -1;
      pfVar10[6] = fVar5 * fVar7 + fVar8 * fVar6;
      fVar8 = fVar7 * fVar6 - fVar5 * fVar8;
      fVar7 = pfVar10[6];
      pfVar10[6] = fVar2 * fVar7 - fVar1 * fVar9;
      fVar7 = fVar1 * fVar7 + fVar9 * fVar2;
      pfVar10[5] = fVar4 * fVar8 + fVar7 * fVar3;
      pfVar10[7] = fVar4 * fVar7 - fVar3 * fVar8;
      pfVar10 = pfVar10 + 0xc;
    } while (iVar12 != 0);
  }
  if (iVar13 < in_EAX) {
    iVar12 = in_EAX - iVar13;
    pfVar11 = (float *)(iVar13 * 0xc + 8 + param_1);
    pfVar10 = (float *)(iVar13 * 0xc + 4 + param_2);
    do {
      fVar7 = pfVar11[-2];
      iVar12 = iVar12 + -1;
      fVar8 = pfVar11[-1];
      fVar9 = *pfVar11;
      *pfVar10 = fVar5 * fVar7 + fVar8 * fVar6;
      fVar8 = fVar6 * fVar7 - fVar8 * fVar5;
      fVar7 = *pfVar10;
      *pfVar10 = fVar2 * fVar7 - fVar1 * fVar9;
      fVar7 = fVar9 * fVar2 + fVar1 * fVar7;
      pfVar10[-1] = fVar4 * fVar8 + fVar3 * fVar7;
      *(float *)((int)pfVar11 + (param_2 - param_1)) = fVar7 * fVar4 - fVar3 * fVar8;
      pfVar11 = pfVar11 + 3;
      pfVar10 = pfVar10 + 3;
    } while (iVar12 != 0);
  }
  return;
}



void __cdecl FUN_00401600(int param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      uVar1 = FUN_00412520();
      *(undefined4 *)(unaff_EBX + iVar2 * 8) = uVar1;
      uVar1 = FUN_00412520();
      *(undefined4 *)(unaff_EBX + 4 + iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401680(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int local_18;
  int iStack20;
  
  local_18 = 0;
  fVar7 = (float10)_CIsin();
  iStack20 = 4;
  do {
    fVar3 = (float)iStack20 * (float)(fVar7 * (float10)3.00000000) + _DAT_0041ca18;
    FUN_004011e0(param_2[3],
                 param_2[1] + ((int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2) * local_18 * 0xc,
                 (float)local_18 * 0.01500000 + 0.94999999,fVar3 * 0.03125000,fVar3 / 20.00000000,
                 fVar3 / 54.00000000);
    FUN_00401600((int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2);
    iStack20 = iStack20 + -1;
    local_18 = local_18 + 1;
  } while (0 < iStack20);
  local_18 = 0;
  iVar4 = (int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2;
  do {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = param_2[2] + iVar4 * local_18 * 8;
        uVar1 = *(undefined4 *)(iVar5 + iVar6 * 8);
        uVar2 = *(undefined4 *)(iVar5 + 4 + iVar6 * 8);
        iVar4 = param_2[2] + (local_18 + 1) * iVar4 * 8;
        iVar5 = FUN_00412520();
        iVar5 = FUN_00412520((uint)(byte)(0x3f - (char)(iVar5 >> 3)));
        FUN_00401000(uVar1,uVar2,*(undefined4 *)(iVar4 + iVar6 * 8),
                     *(undefined4 *)(iVar4 + 4 + iVar6 * 8),(uint)(byte)(0x3f - (char)(iVar5 >> 3)))
        ;
        iVar6 = iVar6 + 1;
        iVar4 = (int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2;
      } while (iVar6 < iVar4);
    }
    local_18 = local_18 + 1;
  } while (local_18 < 3);
  return;
}



void FUN_004018c0(float param_1)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  
  iVar6 = 0x2ee;
  pfVar5 = (float *)(in_EAX + 8);
  do {
    do {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      fVar7 = (float10)_CIsqrt();
      fVar1 = (float)fVar7;
    } while ((ushort)((ushort)(fVar1 < 1.00000000) << 8 | (ushort)(fVar1 == 1.00000000) << 0xe) == 0
            );
    iVar6 = iVar6 + -1;
    fVar1 = 1.00000000 / fVar1;
    pfVar5[-2] = param_1 * (((float)iVar2 / 32767.00000000 + (float)iVar2 / 32767.00000000) -
                           1.00000000) * fVar1;
    pfVar5[-1] = (((float)iVar3 / 32767.00000000 + (float)iVar3 / 32767.00000000) - 1.00000000) *
                 fVar1 * param_1;
    *pfVar5 = param_1 * (((float)iVar4 / 32767.00000000 + (float)iVar4 / 32767.00000000) -
                        1.00000000) * fVar1;
    pfVar5 = pfVar5 + 3;
  } while (iVar6 != 0);
  return;
}



void FUN_004019e0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  puVar2 = &DAT_00478840;
  iVar3 = 1;
  do {
    iVar1 = 0;
    iVar4 = iVar3;
    do {
      puVar2[iVar1] = (char)((int)(iVar4 + (iVar4 >> 0x1f & 0x3fU)) >> 6) + '\x01';
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + local_4 + -1;
    } while (iVar1 < 0x40);
    local_4 = local_4 + 1;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 0x40;
  } while (-0x3f < iVar3);
  return;
}



undefined4 * __cdecl FUN_00401a40(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  puVar3 = (undefined4 *)malloc(0x2c);
  *puVar3 = 0x2ee;
  pvVar4 = malloc(9000);
  *(void **)(puVar3 + 1) = pvVar4;
  pvVar4 = malloc(6000);
  *(void **)(puVar3 + 2) = pvVar4;
  pvVar4 = malloc(9000);
  *(void **)(puVar3 + 3) = pvVar4;
  FUN_004019e0();
  FUN_004018c0(0x43800000);
  pvVar4 = malloc(0xc00);
  iVar1 = *param_1;
  *(void **)(puVar3 + 4) = pvVar4;
  iVar2 = param_1[1];
  *(float *)(puVar3 + 9) = (float)iVar1 * 0.50000000;
  *(float *)(puVar3 + 10) = (float)-iVar2 * 0.50000000;
  FUN_004023d0(puVar3 + 5,(void **)(puVar3 + 4),"ball.png");
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401af0(void)

{
  undefined4 *in_EAX;
  bool in_PF;
  
  _DAT_0041ca14 = _DAT_0041ce78 + _DAT_0041ca14;
  _DAT_0041ce78 = _DAT_0041ce78 + 0.19999999;
  if (!in_PF) {
    _DAT_0041ce78 = 0.00000000;
    _DAT_0041ca14 = (float)in_EAX[1];
  }
  FUN_00412520();
  FUN_004020e0(0x3f,0,*in_EAX);
  FUN_00412520();
  FUN_004020e0(0,0,*in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401b90(int *param_1,int param_2,int param_3)

{
  size_t _Size;
  size_t sVar1;
  void *_Dst;
  size_t *unaff_EDI;
  bool in_PF;
  
  FUN_00401af0();
  if (_DAT_0041ca1c != 0) {
    sVar1 = unaff_EDI[1];
    _Dst = (void *)unaff_EDI[3];
    _DAT_0041ca1c = 0;
    if (0 < (int)sVar1) {
      _Size = *unaff_EDI;
      do {
        memset(_Dst,0,_Size);
        _Dst = (void *)((int)_Dst + unaff_EDI[2]);
        sVar1 = sVar1 - 1;
      } while (sVar1 != 0);
    }
    FUN_00402230(param_1 + 4,0x80);
  }
  _DAT_0041ca18 = _DAT_0041ca18 + 1.00000000;
  if (param_2 != 0) {
    _DAT_0041ce8c = 0.20000000;
  }
  _DAT_0041ce84 = _DAT_0041ce88 + _DAT_0041ce84;
  _DAT_0041ce88 = _DAT_0041ce88 + _DAT_0041ce8c;
  if (!in_PF) {
    _DAT_0041ce88 = 0.00000000;
    _DAT_0041ce84 = (float)unaff_EDI[1];
  }
  _DAT_0041ce80 = _DAT_0041ce80 + 1;
  if (param_3 != 0) {
    _DAT_0041ce80 = 0;
    _DAT_0041ce7c = 1.00000000;
  }
  _DAT_0041ce7c = _DAT_0041ce7c * 0.94999999;
  _CIsin();
  FUN_00401680(unaff_EDI,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 * FUN_00401d00(void)

{
  undefined4 *puVar1;
  FILE *_File;
  int iVar2;
  undefined2 *puVar3;
  char *_Format;
  undefined4 *puVar4;
  
  _DAT_0041cd78 = 0x7273752f;
  DAT_0041cd7c = 0x636f6c2f;
  _DAT_0041cd80 = 0x732f6c61;
  _DAT_0041cd84 = 0x65726168;
  DAT_0041cd88 = 0;
  puVar3 = (undefined2 *)0x41cd77;
  do {
    _Format = (char *)((int)puVar3 + 1);
    puVar3 = (undefined2 *)((int)puVar3 + 1);
  } while (*_Format != '\0');
  *puVar3 = 0x2f;
  puVar4 = (undefined4 *)0x41cd77;
  do {
    puVar1 = puVar4;
    puVar4 = (undefined4 *)((int)puVar1 + 1);
  } while (*(char *)((int)puVar1 + 1) != '\0');
  *(undefined4 *)((int)puVar1 + 1) = 0x68666365;
  *(undefined4 *)((int)puVar1 + 5) = 0x7477612d;
  *(undefined2 *)((int)puVar1 + 9) = 0x73;
  puVar3 = (undefined2 *)0x41cd77;
  do {
    _Format = (char *)((int)puVar3 + 1);
    puVar3 = (undefined2 *)((int)puVar3 + 1);
  } while (*_Format != '\0');
  *puVar3 = 0x2f;
  puVar4 = (undefined4 *)0x41cd77;
  do {
    puVar1 = puVar4;
    puVar4 = (undefined4 *)((int)puVar1 + 1);
  } while (*(char *)((int)puVar1 + 1) != '\0');
  *(undefined4 *)((int)puVar1 + 1) = 0x70696863;
  *(undefined4 *)((int)puVar1 + 5) = 0x6d782e;
  _File = fopen(&DAT_0041cd78,"r");
  if (_File == (FILE *)0x0) {
    iVar2 = 0;
    do {
      _Format = (char *)((int)&DAT_0041aa90 + iVar2);
      (&DAT_0041cd78)[iVar2] = *_Format;
      iVar2 = iVar2 + 1;
    } while (*_Format != '\0');
    _File = fopen((char *)&DAT_0041aa90,"r");
    if (_File == (FILE *)0x0) {
      puVar4 = &DAT_0041aa90;
      _Format = "findfile: file %s could not be found\n";
      _File = __iob_func();
      fprintf(_File + 2,_Format,puVar4);
      return (undefined1 *)0x0;
    }
  }
  fclose(_File);
  return &DAT_0041cd78;
}



void FUN_00401e50(void)

{
  byte bVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  char *local_10;
  int local_c;
  int local_8;
  
  local_10 = "abcdefghijklmnopqrstuvwxyz ";
  puVar3 = (undefined4 *)malloc(0x80c);
  puVar4 = (undefined4 *)malloc(0x80);
  uVar2 = *(undefined4 *)(in_EAX + 8);
  iVar6 = *(int *)(in_EAX + 0xc);
  *puVar4 = 0x10;
  puVar4[3] = iVar6;
  puVar4[2] = uVar2;
  puVar4[1] = 0xc;
  puVar4[7] = iVar6 + 0x11;
  puVar4[4] = 0x10;
  puVar4[5] = 0xc;
  puVar4[6] = uVar2;
  puVar4[0xb] = iVar6 + 0x22;
  puVar4[8] = 0x10;
  puVar4[9] = 0xc;
  puVar4[10] = uVar2;
  puVar4[0xf] = iVar6 + 0x33;
  puVar4[0xc] = 0x10;
  puVar4[0xd] = 0xc;
  puVar4[0xe] = uVar2;
  puVar4[0x13] = iVar6 + 0x44;
  puVar4[0x10] = 0x10;
  puVar4[0x11] = 0xc;
  puVar4[0x12] = uVar2;
  puVar4[0x17] = iVar6 + 0x55;
  puVar4[0x14] = 0x10;
  puVar4[0x15] = 0xc;
  puVar4[0x16] = uVar2;
  puVar4[0x1b] = iVar6 + 0x66;
  puVar4[0x18] = 0x10;
  puVar4[0x19] = 0xc;
  puVar4[0x1a] = uVar2;
  puVar4[0x1f] = iVar6 + 0x77;
  puVar4[0x1c] = 0x10;
  puVar4[0x1d] = 0xc;
  puVar4[0x1e] = uVar2;
  puVar4 = (undefined4 *)malloc(0x10);
  *puVar4 = 0x510;
  puVar4[1] = 0x3c;
  puVar4[2] = 0x510;
  pvVar5 = malloc(0x12fc0);
  *(void **)(puVar4 + 3) = pvVar5;
  *(undefined4 **)(puVar3 + 0x202) = puVar4;
  local_8 = 0;
  do {
    bVar1 = *local_10;
    local_10 = (char *)((byte *)local_10 + 1);
    iVar6 = 0;
    do {
      local_c = 3;
      do {
        FUN_00402150(iVar6);
        local_c = local_c + -1;
      } while (local_c != 0);
      iVar6 = iVar6 + 0xc;
    } while (iVar6 < 0x3c);
    puVar3[(uint)bVar1 + 0x101] = local_8;
    local_8 = local_8 + 0x30;
    puVar3[(uint)bVar1 + 1] = 0x30;
  } while (local_8 < 0x510);
  puVar3[0x201] = 0x30;
  *puVar3 = 0x3c;
  return;
}



void FUN_00402010(void *param_1,int param_2)

{
  size_t _Size;
  int iVar1;
  uint in_EAX;
  int iVar2;
  void *_Src;
  int *unaff_EDI;
  
  _Src = (void *)(unaff_EDI[(in_EAX & 0xff) + 0x101] + ((int *)unaff_EDI[0x202])[3]);
  _Size = unaff_EDI[(in_EAX & 0xff) + 1];
  iVar1 = *(int *)unaff_EDI[0x202];
  iVar2 = 0;
  if (0 < *unaff_EDI) {
    do {
      memcpy(param_1,_Src,_Size);
      _Src = (void *)((int)_Src + iVar1);
      param_1 = (void *)((int)param_1 + param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *unaff_EDI);
  }
  return;
}



void FUN_00402070(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = "another way to scroll";
  iVar5 = 0x140;
  if (in_EAX <= param_1[1] - *in_ECX) {
    iVar1 = *param_1;
    iVar2 = param_1[3];
    uVar4 = 0x61;
    do {
      iVar3 = in_ECX[uVar4 + 1];
      pcVar6 = (char *)((byte *)pcVar6 + 1);
      if ((-1 < iVar5) && (iVar5 <= *param_1 - (iVar3 + 1))) {
        FUN_00402010(iVar1 * in_EAX + iVar2 + iVar5,param_2);
      }
      uVar4 = (uint)(byte)*pcVar6;
      iVar5 = iVar5 + iVar3 + 1;
    } while (*pcVar6 != 0);
  }
  return;
}



void FUN_004020e0(byte param_1,int param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  void *_Dst;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  if ((((in_ECX <= iVar1) && (iVar2 = *unaff_EDI, param_2 <= iVar2)) && (0 < (int)param_3)) &&
     (0 < in_EAX)) {
    if (iVar1 < in_ECX + in_EAX) {
      in_EAX = iVar1 - in_ECX;
    }
    if (iVar2 < (int)(param_3 + param_2)) {
      param_3 = iVar2 - param_2;
    }
    _Dst = (void *)(unaff_EDI[3] + unaff_EDI[2] * in_ECX + param_2);
    if (0 < in_EAX) {
      do {
        memset(_Dst,(uint)param_1,param_3);
        _Dst = (void *)((int)_Dst + unaff_EDI[2]);
        in_EAX = in_EAX + -1;
      } while (in_EAX != 0);
    }
  }
  return;
}



void FUN_00402150(int param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int *in_EAX;
  size_t sVar6;
  size_t *in_ECX;
  int in_EDX;
  void *_Dst;
  void *_Src;
  size_t local_14;
  
  _Src = (void *)in_ECX[3];
  iVar1 = in_EAX[2];
  sVar2 = in_ECX[2];
  sVar3 = *in_ECX;
  sVar6 = in_ECX[1];
  if ((((SBORROW4(in_EDX,-sVar3) == (int)(in_EDX + sVar3) < 0) &&
       (SBORROW4(param_1,-sVar6) == (int)(param_1 + sVar6) < 0)) &&
      (iVar4 = *in_EAX, in_EDX <= iVar4)) && (iVar5 = in_EAX[1], param_1 <= iVar5)) {
    if (in_EDX < 0) {
      local_14 = sVar3 + in_EDX;
      _Src = (void *)((int)_Src - in_EDX);
      in_EDX = 0;
    }
    else {
      local_14 = sVar3;
      if (iVar4 < (int)(sVar3 + in_EDX)) {
        local_14 = sVar3 + ((iVar4 - sVar3) - in_EDX);
      }
    }
    if (param_1 < 0) {
      _Src = (void *)((int)_Src - sVar3 * param_1);
      sVar6 = sVar6 + param_1;
      param_1 = 0;
    }
    else {
      if (iVar5 < (int)(sVar6 + param_1)) {
        sVar6 = iVar5 - param_1;
      }
    }
    _Dst = (void *)(in_EAX[3] + iVar1 * param_1 + in_EDX);
    if (0 < (int)sVar6) {
      do {
        memcpy(_Dst,_Src,local_14);
        _Src = (void *)((int)_Src + sVar2);
        _Dst = (void *)((int)_Dst + iVar1);
        sVar6 = sVar6 - 1;
      } while (sVar6 != 0);
    }
  }
  return;
}



void __fastcall FUN_00402230(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined local_304 [768];
  uint local_4;
  
  puVar1 = local_304;
  local_4 = DAT_0041c340 ^ (uint)local_304;
  if (0 < param_2) {
    puVar2 = (undefined *)*param_1;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[4];
      puVar1[2] = puVar2[8];
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_00402a40(local_304);
  FUN_00412237();
  return;
}



void FUN_004022a0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_004022c0(undefined4 param_1)

{
  code *pcVar1;
  
  _DAT_00478830 = 0;
  MikMod_RegisterAllDrivers();
  MikMod_RegisterAllLoaders();
  pcVar1 = md_reverb_exref;
  *(undefined2 *)md_mode_exref = 9;
  *pcVar1 = (code)0x0;
  MikMod_Init(&DAT_0041a836);
  pcVar1 = md_reverb_exref;
  *(undefined2 *)md_mode_exref = 9;
  *pcVar1 = (code)0x0;
  DAT_00478834 = Player_Load(param_1,6,0);
  if (DAT_00478834 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(DAT_00478834 + 0xf8) = 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402340(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  _DAT_00478838 = (undefined4 *)malloc(0x2c);
  uVar1 = DAT_0041c378;
  *_DAT_00478838 = DAT_0041c374;
  uVar2 = DAT_0041c37c;
  _DAT_00478838[1] = uVar1;
  uVar1 = DAT_0041c380;
  _DAT_00478838[2] = uVar2;
  uVar2 = DAT_0041c384;
  _DAT_00478838[3] = uVar1;
  uVar1 = DAT_0041c388;
  _DAT_00478838[4] = uVar2;
  uVar2 = DAT_0041c38c;
  _DAT_00478838[5] = uVar1;
  uVar1 = DAT_0041c390;
  _DAT_00478838[6] = uVar2;
  uVar2 = DAT_0041c394;
  _DAT_00478838[7] = uVar1;
  uVar1 = DAT_0041c398;
  _DAT_00478838[8] = uVar2;
  uVar2 = DAT_0041c39c;
  _DAT_00478838[9] = uVar1;
  _DAT_00478830 = 0xb;
  _DAT_00478838[10] = uVar2;
  return;
}



undefined4 __cdecl FUN_004023d0(uint *param_1,void **param_2,char *param_3)

{
  FILE *_File;
  int iVar1;
  undefined4 *_Memory;
  size_t _Size;
  void *pvVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_30;
  uint local_2c;
  undefined local_28 [4];
  uint local_24;
  int local_20;
  FILE *local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint *local_c;
  void *local_8;
  
  local_20 = 0;
  printf("pngloader: loading %s\n",param_3);
  _File = fopen(param_3,"rb");
  local_1c = _File;
  if (_File == (FILE *)0x0) {
    printf("pngloader: could not open file %s\n",param_3);
    return 1;
  }
  local_c = (uint *)FUN_00407b20("1.2.8",0,&DAT_004023c0,&DAT_004023c0);
  if (local_c == (uint *)0x0) {
    printf("pngloader: file %s doesn\'t seem to be a valid .png file\n",param_3);
    fclose(_File);
    return 1;
  }
  local_14 = (uint *)FUN_004083b0(local_c);
  if (local_14 == (uint *)0x0) {
    printf("pngloader: file %s doesn\'t seem to be a valid .png file\n",param_3);
    fclose(_File);
    FUN_00407b50(&local_c,(void **)0x0,(void **)0x0);
    return 1;
  }
  iVar1 = _setjmp3(local_c,0);
  if (iVar1 == 0) {
    FUN_00408290((int)local_c,local_1c);
    puVar10 = local_c;
    iVar1 = local_20;
    FUN_00407c10((int *)local_c,local_20);
    puVar8 = local_c;
    puVar9 = local_14;
    FUN_00405510(local_14,(int *)local_c,(int)local_14,(int *)puVar10,iVar1);
    FUN_00405140(local_c,local_14,&local_18,&local_10,&local_30,&local_2c,local_28,0,(uint *)0x0,
                 puVar8,puVar9);
    _Memory = (undefined4 *)malloc(local_10 * 4);
    uVar6 = 0;
    if (local_10 != 0) {
      do {
        _Size = FUN_00405120((int)local_c,(int)local_14);
        pvVar2 = malloc(_Size);
        *(void **)(_Memory + uVar6) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          printf("pngloader: could not allocate memory\n");
          return 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_10);
    }
    FUN_004069c0((int *)local_c,_Memory);
    *param_1 = local_18;
    param_1[2] = local_18;
    param_1[1] = local_10;
    puVar7 = (undefined *)malloc(local_18 * local_10);
    *(undefined **)(param_1 + 3) = puVar7;
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      if (local_10 != 0) {
        do {
          puVar3 = (undefined *)_Memory[uVar6];
          uVar4 = 0;
          if (local_18 != 0) {
            do {
              *puVar7 = *puVar3;
              uVar4 = uVar4 + 1;
              puVar7 = puVar7 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar4 < local_18);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_10);
      }
      uVar6 = 0;
      if (local_10 != 0) {
        do {
          free((void *)_Memory[uVar6]);
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_10);
      }
      free(_Memory);
      local_8 = malloc(0x300);
      pvVar2 = malloc(0xc00);
      *param_2 = pvVar2;
      local_24 = 0x100;
      FUN_00405270((int)local_c,(int)local_14,&local_8,&local_24);
      iVar5 = 0;
      iVar1 = 0;
      do {
        *(uint *)(iVar5 + (int)*param_2) = (uint)(*(byte *)(iVar1 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 4 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 1 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 8 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 2 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0xc + (int)*param_2) = (uint)(*(byte *)(iVar1 + 3 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x10 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 4 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x14 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 5 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x18 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 6 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x1c + (int)*param_2) = (uint)(*(byte *)(iVar1 + 7 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x20 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 8 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x24 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 9 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x28 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 10 + (int)local_8) >> 2);
        *(uint *)(iVar5 + 0x2c + (int)*param_2) = (uint)(*(byte *)(iVar1 + 0xb + (int)local_8) >> 2)
        ;
        iVar1 = iVar1 + 0xc;
        iVar5 = iVar5 + 0x30;
      } while (iVar1 < 0x300);
      FUN_00406a20((int *)local_c,(int)local_14);
      FUN_00407b50(&local_c,&local_14,(void **)0x0);
      fclose(local_1c);
      return 0;
    }
    printf("pngloader: could not get memory for image\n");
    return 1;
  }
  printf("pngloader: file %s doesn\'t seem to be a valid .png file\n",param_3);
  FUN_00407b50(&local_c,&local_14,(void **)0x0);
  fclose(local_1c);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00402780(void)

{
  int _Code;
  void *pvVar1;
  undefined4 *puVar2;
  
  _Code = SDL_Init(0x20);
  if (_Code < 0) {
                    // WARNING: Subroutine does not return
    exit(_Code);
  }
  SDL_ShowCursor(0);
  DAT_0041ce90 = SDL_SetVideoMode(0x140,200,8,0xc0000001);
  if (DAT_0041ce90 == 0) {
    printf("sdl video init failure\n");
    SDL_Quit();
    return 0xffffffff;
  }
  _DAT_0047850c = 0;
  _DAT_00478508 = 1;
  printf("video stride=%d w=%d h=%d\n",(uint)*(ushort *)(DAT_0041ce90 + 0x10),
         *(undefined4 *)(DAT_0041ce90 + 8),*(undefined4 *)(DAT_0041ce90 + 0xc));
  memset(&DAT_00478520,0,0x300);
  DAT_00478518 = (uint)*(ushort *)(DAT_0041ce90 + 0x10);
  DAT_00478500 = 0x140;
  DAT_00478504 = 200;
  _DAT_0047882c = 8;
  pvVar1 = malloc(64000);
  _DAT_0047851c = pvVar1;
  puVar2 = (undefined4 *)malloc(0x10);
  DAT_00478824 = puVar2;
  *puVar2 = 0x140;
  puVar2[1] = 200;
  puVar2[2] = 0x140;
  *(void **)(puVar2 + 3) = pvVar1;
  _DAT_00478828 = 0x37cd;
  _DAT_00478510 = timeGetTime();
  _DAT_00478820 = timeGetTime();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004028a0(void)

{
  int iVar1;
  char local_14 [8];
  undefined4 uStack12;
  
  iVar1 = SDL_PollEvent(local_14);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (local_14[0] == '\x03') break;
    if (local_14[0] == '\f') {
      _DAT_0047850c = 0x1b;
      return 1;
    }
    iVar1 = SDL_PollEvent(local_14);
  }
  _DAT_0047850c = uStack12;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00402900(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char local_400 [1024];
  
  if (_DAT_00478508 != 0) {
    _DAT_00478508 = 0;
    pcVar5 = local_400 + 1;
    pcVar1 = &DAT_00478521;
    do {
      pcVar5[-1] = pcVar1[-1] * '\x04';
      *pcVar5 = *pcVar1 * '\x04';
      pcVar5[1] = pcVar1[1] * '\x04';
      pcVar1 = pcVar1 + 3;
      pcVar5 = pcVar5 + 4;
    } while ((int)pcVar1 < 0x478821);
    SDL_SetColors(DAT_0041ce90,local_400,0,0x100);
  }
  iVar2 = SDL_LockSurface(DAT_0041ce90);
  if (iVar2 != 0) {
    printf("failed to lock vidmem, exiting\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  puVar7 = *(undefined4 **)(DAT_0041ce90 + 0x14);
  puVar8 = *(undefined4 **)(param_1 + 0xc);
  _DAT_00478514 = puVar7;
  if (DAT_00478504 != 0) {
    iVar3 = DAT_00478500 + (DAT_00478500 >> 0x1f & 3U);
    iVar4 = DAT_00478518 - DAT_00478500;
    iVar2 = DAT_00478504;
    do {
      iVar2 = iVar2 + -1;
      iVar6 = iVar3 >> 2;
      while (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *puVar7 = *puVar8;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = puVar7 + ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
    } while (iVar2 != 0);
  }
  SDL_UnlockSurface(DAT_0041ce90);
  SDL_UpdateRect(DAT_0041ce90,0,0,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00402a40(undefined *param_1)

{
  undefined uVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_ESI;
  
  uVar4 = 0;
  if (0 < unaff_ESI) {
    _DAT_00478508 = 1;
    do {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = uVar4 & 0xff;
      (&DAT_00478520)[uVar3 * 3] = *param_1;
      (&DAT_00478521)[uVar3 * 3] = uVar1;
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 3;
      (&DAT_00478522)[uVar3 * 3] = uVar2;
    } while ((int)uVar4 < unaff_ESI);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_00402aa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(4);
  *puVar1 = 1;
  FUN_004023d0((uint *)&DAT_004784f0,(void **)&DAT_004784c0,"credits.png");
  DAT_00478490 = 0x50;
  _DAT_004784a0 = 0x50;
  _DAT_004784a4 = 0x3c;
  _DAT_004784a8 = DAT_004784f8;
  _DAT_004784ac = DAT_004784fc + 0xf0;
  _DAT_004784b0 = 0x50;
  _DAT_004784b4 = 0x3c;
  _DAT_004784b8 = DAT_004784f8;
  _DAT_004784bc = DAT_004784fc + 0xa0;
  DAT_004784c4 = 0x3c;
  _DAT_004784d0 = 0x6a;
  DAT_004784d4 = 0x18;
  _DAT_004784d8 = DAT_004784f8;
  _DAT_004784dc = DAT_004784f8 * 0x50 + DAT_004784fc;
  DAT_004784e0 = 0x50;
  DAT_004784e4 = 0x3c;
  _DAT_004784e8 = DAT_004784f8;
  _DAT_004784ec = DAT_004784fc + 0x50;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402b70(int *param_1)

{
  size_t sVar1;
  size_t *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  void *_Dst;
  int *piVar9;
  
  if (*param_1 == 1) {
    sVar1 = in_EAX[1];
    _Dst = (void *)in_EAX[3];
    sVar8 = sVar1;
    if (0 < (int)sVar1) {
      do {
        memset(_Dst,0,*in_EAX);
        _Dst = (void *)((int)_Dst + in_EAX[2]);
        sVar8 = sVar8 - 1;
      } while (sVar8 != 0);
    }
    FUN_00402150(sVar1 - (DAT_004784d4 * 3) / 2);
    *param_1 = 0;
  }
  uVar2 = (uint)*(ushort *)(DAT_00478834 + 0x104) + 4;
  uVar3 = (int)uVar2 >> 4;
  if ((uVar3 < 3) && (DAT_0041ce98 < 0x3f)) {
    DAT_0041ce98 = DAT_0041ce98 + 4;
  }
  if ((3 < uVar3) && (0 < DAT_0041ce98)) {
    DAT_0041ce98 = DAT_0041ce98 + -4;
  }
  if ((uVar2 & 0xf) < 8) {
    if ((int)DAT_0041ce94 < 0x3f) {
      DAT_0041ce94 = DAT_0041ce94 + 3;
    }
  }
  else {
    if (0 < (int)DAT_0041ce94) {
      DAT_0041ce94 = DAT_0041ce94 - 3;
    }
  }
  uVar2 = DAT_0041ce94;
  sVar1 = in_EAX[1];
  FUN_004020e0(0,0xdc - DAT_00478490 / 2,DAT_00478490);
  if (((uVar3 == 1) || (uVar3 == 2)) || (uVar3 == 3)) {
    FUN_00402150((sVar1 - 0x1b) - DAT_004784e4 / 2);
  }
  param_1 = (int *)0xe0;
  piVar9 = (int *)(DAT_004784c0 + 0xa84);
  do {
    iVar5 = piVar9[1];
    iVar6 = *piVar9;
    uVar4 = (uint)param_1 & 0xff;
    (&DAT_00478520)[uVar4 * 3] = (char)(piVar9[-1] * uVar2 >> 6);
    (&DAT_00478521)[uVar4 * 3] = (char)(iVar6 * uVar2 >> 6);
    (&DAT_00478522)[uVar4 * 3] = (char)(iVar5 * uVar2 >> 6);
    param_1 = (int *)((int)param_1 + 1);
    piVar9 = piVar9 + 3;
  } while ((int)param_1 < 0xe5);
  uVar4 = uVar2;
  if ((uVar3 != 1) && (uVar3 != 2)) {
    uVar4 = 0;
  }
  iVar5 = (int)uVar4 >> 1;
  iVar6 = (int)((uint)(uVar3 != 3) - 1 & uVar2) >> 1;
  iVar7 = (int)((uint)(uVar3 != 2) - 1 & uVar2) >> 1;
  _DAT_00478508 = 1;
  DAT_004787d8 = (char)(iVar5 * DAT_0041ce98 >> 6);
  DAT_004787d9 = (char)((iVar5 + 10) * DAT_0041ce98 >> 6);
  DAT_004787da = (char)((iVar5 + 0x14) * DAT_0041ce98 >> 6);
  DAT_004787de = (char)(iVar6 * DAT_0041ce98 >> 6);
  DAT_004787df = (char)((iVar6 + 10) * DAT_0041ce98 >> 6);
  DAT_004787e0 = (char)((iVar6 + 0x14) * DAT_0041ce98 >> 6);
  DAT_004787e4 = (char)(iVar7 * DAT_0041ce98 >> 6);
  DAT_004787e5 = (char)((iVar7 + 10) * DAT_0041ce98 >> 6);
  DAT_004787e6 = (char)((iVar7 + 0x14) * DAT_0041ce98 >> 6);
  return;
}



void FUN_00402e00(void)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *local_30;
  byte *local_2c;
  int local_28;
  int local_18;
  
  piVar1 = DAT_0047848c;
  iVar6 = *DAT_0047848c;
  pbVar9 = (byte *)DAT_0047848c[3];
  local_30 = pbVar9 + iVar6 + -1;
  pbVar8 = pbVar9 + (DAT_0047848c[1] + -1) * DAT_0047848c[2];
  local_2c = pbVar8 + iVar6 + -1;
  iVar6 = iVar6 / 2;
  iVar5 = DAT_0047848c[2] + iVar6;
  iVar7 = DAT_0047848c[2] - iVar6;
  local_28 = 0;
  if (0 < DAT_0047848c[1] / 2) {
    do {
      local_18 = 0;
      if (0 < iVar6) {
        do {
          _CIsqrt();
          bVar2 = FUN_00412520();
          _CIsqrt();
          bVar3 = FUN_00412520();
          _CIsqrt();
          bVar4 = FUN_00412520();
          bVar2 = (bVar2 & 3 | (bVar3 & 3) * '\x04') * '\x04' | bVar4 & 3;
          *pbVar9 = bVar2;
          *local_30 = bVar2;
          local_30 = local_30 + -1;
          *pbVar8 = bVar2;
          *local_2c = bVar2;
          local_2c = local_2c + -1;
          local_18 = local_18 + 1;
          iVar6 = *piVar1 / 2;
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
        } while (local_18 < iVar6);
      }
      local_30 = local_30 + iVar5;
      local_28 = local_28 + 1;
      local_2c = local_2c + -iVar7;
      pbVar8 = pbVar8 + -iVar5;
      pbVar9 = pbVar9 + iVar7;
    } while (local_28 < piVar1[1] / 2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403040(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_28;
  
  local_28 = in_EAX[3];
  param_3 = *(int *)(DAT_0047848c + 8) * param_4 + *(int *)(DAT_0047848c + 0xc) + param_3;
  iVar1 = in_EAX[1];
  param_1 = *(int *)(DAT_0047848c + 8) * param_2 + *(int *)(DAT_0047848c + 0xc) + param_1;
  param_2 = 0;
  if (0 < iVar1) {
    iVar2 = *in_EAX;
    iVar3 = in_EAX[2];
    do {
      _CIsin();
      iVar4 = FUN_00412520();
      puVar7 = (uint *)(iVar4 + param_1);
      _CIsin();
      if (iVar2 >> 2 != 0) {
        iVar5 = FUN_00412520();
        iVar6 = FUN_00412520();
        iVar4 = iVar2 >> 2;
        do {
          iVar4 = iVar4 + -1;
          *(uint *)((local_28 - (iVar5 + param_1)) + (int)puVar7) =
               *(uint *)((iVar6 - (iVar5 + param_1)) + param_3 + (int)puVar7) ^ *puVar7;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
      }
      local_28 = local_28 + iVar3;
      param_1 = param_1 + *(int *)(DAT_0047848c + 8);
      param_3 = param_3 + *(int *)(DAT_0047848c + 8);
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ** FUN_00403190(void)

{
  double dVar1;
  int *in_EAX;
  void **ppvVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_c;
  
  ppvVar2 = (void **)malloc(4);
  iVar7 = *in_EAX + 0x180;
  iVar6 = in_EAX[1] + 200;
  _DAT_00478484 = iVar7;
  _DAT_00478488 = iVar6;
  piVar3 = (int *)malloc(0x10);
  piVar3[1] = iVar6;
  *piVar3 = iVar7;
  piVar3[2] = iVar7;
  if (iVar6 * iVar7 == 0) {
    piVar3[3] = 0;
  }
  else {
    pvVar4 = malloc(iVar6 * iVar7);
    *(void **)(piVar3 + 3) = pvVar4;
  }
  DAT_0047848c = piVar3;
  FUN_00402e00();
  puVar8 = (undefined4 *)malloc(0xc00);
  *(undefined4 **)ppvVar2 = puVar8;
  uVar5 = 0;
  do {
    iVar6 = (((int)uVar5 >> 6 & 3U) + ((int)uVar5 >> 4 & 3U) + ((int)uVar5 >> 2 & 3U) + (uVar5 & 3))
            * 4;
    dVar1 = (double)iVar6;
    puVar8[2] = iVar6;
    uVar5 = uVar5 + 1;
    local_c = (undefined4)(longlong)ROUND((dVar1 * 54.00000000) / 63.00000000);
    *puVar8 = local_c;
    local_c = (undefined4)(longlong)ROUND((dVar1 * 59.00000000) / 63.00000000);
    puVar8[1] = local_c;
    puVar8 = puVar8 + 3;
  } while ((int)uVar5 < 0x40);
  return ppvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004032d0(int param_1,int param_2,int param_3)

{
  size_t sVar1;
  size_t _Size;
  size_t sVar2;
  size_t *in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int iVar5;
  void *_Dst;
  float10 fVar6;
  
  if (_DAT_0041c3bc != 0) {
    _DAT_0041c3bc = 0;
    FUN_00402230(in_ECX,0x40);
  }
  _DAT_0041ceb0 = _DAT_0041ceb0 + 1;
  if (param_1 != 0) {
    _DAT_0041ceb0 = 0;
    _DAT_0041ceac = 1.00000000;
  }
  _DAT_0041ceac = _DAT_0041ceac * 0.94999999;
  if ((ushort)((ushort)(_DAT_0041ceac < 0.00000000) << 8 |
              (ushort)(_DAT_0041ceac == 0.00000000) << 0xe) == 0) {
    _DAT_0041ceac = _DAT_0041ceac + 0.01000000;
  }
  if (param_2 == 0) {
    _DAT_0041cea8 = 1;
  }
  else {
    if (_DAT_0041cea8 != 0) {
      _DAT_0041cea8 = 0;
      _DAT_0041c3ac = -_DAT_0041c3ac;
      _DAT_0041c3b0 = -_DAT_0041c3b0;
      _DAT_0041c3b4 = -_DAT_0041c3b4;
      _DAT_0041c3b8 = -_DAT_0041c3b8;
    }
  }
  _DAT_0041ce9c = _DAT_0041ce9c + 1;
  _DAT_0041cea4 = _DAT_0041cea4 + _DAT_0041c3ac;
  _DAT_0041c3a0 = _DAT_0041c3a0 + _DAT_0041c3b0;
  _DAT_0041c3a4 = _DAT_0041c3a4 + _DAT_0041c3b4;
  _DAT_0041c3a8 = _DAT_0041c3a8 + _DAT_0041c3b8;
  if (param_3 != 0) {
    sVar1 = in_EAX[1];
    iVar3 = DAT_0041cea0 - sVar1;
    if ((int)DAT_0041cea0 < (int)sVar1) {
      DAT_0041cea0 = DAT_0041cea0 + 2;
      iVar3 = DAT_0041cea0 - sVar1;
    }
    if (DAT_0041cea0 != sVar1 && SBORROW4(DAT_0041cea0,sVar1) == iVar3 < 0) {
      DAT_0041cea0 = sVar1;
    }
  }
  sVar1 = in_EAX[1];
  _Size = *in_EAX;
  sVar2 = in_EAX[2];
  iVar3 = sVar1 - DAT_0041cea0;
  iVar5 = 2;
  if ((iVar3 <= (int)sVar1) && (0 < (int)_Size)) {
    if ((int)sVar1 < iVar3 + 2) {
      iVar5 = sVar1 - iVar3;
    }
    _Dst = (void *)(in_EAX[3] + sVar2 * iVar3);
    if (0 < iVar5) {
      do {
        memset(_Dst,0,_Size);
        _Dst = (void *)((int)_Dst + sVar2);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  _CIsin();
  _CIcos();
  fVar6 = (float10)_CIsin();
  _CIcos((float)((float10)1 / (fVar6 + (float10)1.75000000) - (float10)0.36000000));
  uVar4 = FUN_00412520();
  _CIsin(uVar4);
  uVar4 = FUN_00412520();
  _CIsin(uVar4);
  uVar4 = FUN_00412520();
  _CIcos(uVar4);
  uVar4 = FUN_00412520();
  FUN_00403040(uVar4);
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004035b0(void)

{
  ushort uVar1;
  byte bVar2;
  size_t *psVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *_Dst;
  int iVar7;
  int local_58;
  uint **local_54;
  int local_50;
  void *local_4c;
  undefined4 *local_48;
  int **local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  size_t local_38;
  undefined4 local_34;
  size_t local_30;
  size_t local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  
  iVar7 = 0;
  local_58 = 200;
  local_50 = 0;
  printf("\n");
  printf("another way to scroll 1.0\n");
  printf("Copyright (C) 2000, Tijs van Bakel and Jorik Blaas\n");
  printf("\n");
  printf("This program is free software; you may redistribute it under the terms of\n");
  printf("the GNU General Public License. (See the file COPYING for more details).\n");
  printf("This program has absolutely no warranty.\n");
  printf("\n");
  FUN_00402780();
  FUN_004023d0(&local_28,&local_54,"blockfont.png");
  FUN_00402230(&local_54,0x100);
  DAT_0047883c = FUN_00401e50();
  puVar4 = FUN_00401d00();
  FUN_004022c0(puVar4);
  FUN_00402340();
  psVar3 = DAT_00478824;
  _Dst = (void *)DAT_00478824[3];
  if (0 < (int)DAT_00478824[1]) {
    do {
      memset(_Dst,0,*psVar3);
      _Dst = (void *)((int)_Dst + psVar3[2]);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)psVar3[1]);
  }
  local_2c = psVar3[3];
  local_30 = psVar3[2];
  local_38 = 0x140;
  local_34 = 0xb4;
  FUN_004023d0(local_18,&local_4c,"logo.png");
  local_1c = local_c;
  local_28 = 0x140;
  local_24 = 0x14;
  local_20 = local_10;
  puVar5 = FUN_00401a40((int *)&local_38);
  local_48 = puVar5;
  FUN_00403ef0();
  local_40 = FUN_00403190();
  local_54 = FUN_00404080();
  local_44 = FUN_00404fd0();
  local_3c = FUN_00402aa0();
  FUN_00402230(&local_4c,0x100);
  Player_Start(DAT_00478834);
  do {
    uVar1 = *(ushort *)(DAT_00478834 + 0x104);
    if (*(ushort *)(DAT_00478834 + 0x106) < 10) {
      bVar2 = (byte)uVar1;
      switch(*(ushort *)(DAT_00478834 + 0x106)) {
      case 1:
        FUN_004042f0(&local_38,0,0);
        break;
      case 2:
        FUN_004042f0(&local_38,2,1);
        break;
      case 3:
        FUN_004042f0(&local_38,2,1);
        break;
      case 4:
        if ((uVar1 < 0x15) || ((bVar2 & 0xf) != 3)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        FUN_00401b90(puVar5,(uint)(0xf < uVar1),uVar6);
        if (0xb4 < local_58) {
          local_58 = local_58 + -1;
          FUN_00402150(local_58);
        }
        break;
      case 5:
        FUN_00401b90(puVar5,1,(uint)((bVar2 & 0xf) == 3));
        break;
      case 6:
        FUN_00403fb0(&local_38);
        break;
      case 7:
        FUN_00405030(local_44,(int)&local_38,(uint)((bVar2 & 0xf) == 0xb));
        break;
      case 8:
        FUN_004032d0((uint)((bVar2 & 0xf) == 10),(uint)((bVar2 & 7) == 4),(uint)(0x2d < uVar1));
        if ((0x38 < uVar1) && (local_58 < 200)) {
          local_58 = local_58 + 1;
          FUN_00402150(local_58);
          FUN_004020e0(0,0,*psVar3);
        }
        break;
      case 9:
        Player_SetVolume((uint)uVar1 * -2 + 0x7f);
        if (uVar1 == 0x3f) {
          local_50 = 1;
        }
        FUN_00402b70(local_3c);
      }
    }
    else {
      local_50 = 1;
    }
    MikMod_Update();
    SDL_Flip(DAT_0041ce90);
    FUN_00402900((int)psVar3);
    iVar7 = FUN_004028a0();
  } while (((iVar7 == 0) || (_DAT_0047850c != 0x1b)) && (puVar5 = local_48, local_50 == 0));
  MikMod_Exit();
  printf("\n");
  printf("(defcredits :code \'(avoozl smoke)\n");
  printf("            :gfx \'(smoke)\n");
  printf("            :guest-music \'(floppi))\n");
  printf("\n");
  printf("(defemail ((\'smoke \"smoke@casema.net\")\n");
  printf("           (\'avoozl \"jrk@panic.et.tudelft.nl\")\n");
  printf("           (\'floppi \"tero.laihanen@sci.fi\"))\n");
  printf("\n");
  return 0;
}



void __cdecl FUN_00403a50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int iStack2128;
  undefined4 *puStack2124;
  uint uStack2120;
  int iStack2116;
  int iStack2112;
  int iStack2108;
  int iStack2104;
  int iStack2100;
  uint uStack2096;
  int iStack2092;
  int aiStack2048 [256];
  int aiStack1024 [6];
  undefined4 *puStack1000;
  int aiStack996 [249];
  
  iVar2 = DAT_0047847c;
  puVar9 = (undefined4 *)param_1[3];
  iVar1 = param_1[2];
  _CIcos();
  _CIsin();
  iVar3 = FUN_00412520();
  iVar4 = FUN_00412520();
  iVar5 = FUN_00412520();
  iVar6 = FUN_00412520();
  iVar16 = iVar3 >> 3;
  iVar19 = iVar5 >> 3;
  iVar13 = iVar4 >> 3;
  iVar15 = iVar6 >> 3;
  uStack2096 = FUN_00412520();
  uStack2120 = FUN_00412520();
  iStack2108 = 0;
  iStack2128 = 0;
  iStack2116 = iVar19 * 2;
  iStack2112 = iVar16 * 2;
  iVar11 = iVar16 * 6;
  iVar7 = 0;
  puStack2124 = (undefined4 *)(iVar19 * 6);
  iStack2104 = iVar16 * 4;
  iStack2100 = iVar19 * 4;
  do {
    *(int *)((int)aiStack2048 + iVar7) = iStack2108;
    *(int *)((int)aiStack1024 + iVar7) = iStack2128;
    *(int *)((int)aiStack2048 + iVar7 + 4) = iStack2108 + iVar16;
    *(int *)((int)aiStack1024 + iVar7 + 4) = iStack2128 + iVar19;
    *(int *)((int)aiStack2048 + iVar7 + 8) = iStack2112;
    *(int *)((int)aiStack1024 + iVar7 + 8) = iStack2116;
    *(int *)((int)aiStack2048 + iVar7 + 0xc) = iStack2112 + iVar16;
    *(int *)((int)aiStack1024 + iVar7 + 0xc) = iStack2116 + iVar19;
    *(int *)((int)aiStack2048 + iVar7 + 0x10) = iStack2104;
    iStack2108 = iStack2108 + iVar13;
    iStack2112 = iStack2112 + iVar13;
    iStack2128 = iStack2128 + iVar15;
    iStack2116 = iStack2116 + iVar15;
    *(int *)((int)aiStack1024 + iVar7 + 0x10) = iStack2100;
    *(int *)((int)aiStack2048 + iVar7 + 0x14) = iStack2104 + iVar16;
    *(int *)((int)aiStack1024 + iVar7 + 0x14) = iStack2100 + iVar19;
    *(undefined4 **)((int)aiStack1024 + iVar7 + 0x18) = puStack2124;
    *(int *)((int)aiStack2048 + iVar7 + 0x1c) = iVar11 + iVar16;
    *(int *)((int)aiStack2048 + iVar7 + 0x18) = iVar11;
    *(int *)((int)aiStack1024 + iVar7 + 0x1c) = (int)puStack2124 + iVar19;
    iVar7 = iVar7 + 0x20;
    iVar11 = iVar11 + iVar13;
    puStack2124 = (undefined4 *)((int)puStack2124 + iVar15);
    iStack2104 = iStack2104 + iVar13;
    iStack2100 = iStack2100 + iVar15;
  } while (iVar7 < 0x100);
  iStack2092 = (int)(param_1[1] + (param_1[1] >> 0x1f & 7U)) >> 3;
  if (0 < iStack2092) {
    iVar11 = (int)(*param_1 + (*param_1 >> 0x1f & 7U)) >> 3;
    puStack2124 = puVar9;
    do {
      puVar9 = puStack2124;
      uVar14 = uStack2120;
      uVar17 = uStack2096;
      iStack2108 = iVar11;
      if (0 < iVar11) {
        do {
          if ((uVar17 + 0x5000 < 0xc801) && (uVar14 + 0x8200 < 0xaa01)) {
            uVar8 = uVar14 & 0xff;
            uVar20 = uVar17 & 0xff;
            iVar7 = ((int)uVar17 >> 8) + 0x8080 + (uVar14 & 0xffffff00) + iVar2;
            piVar18 = aiStack2048;
            piVar12 = aiStack1024;
            iStack2100 = 8;
            puVar10 = puVar9;
            do {
              *(undefined *)puVar10 =
                   *(undefined *)
                    (((int)(*piVar18 + uVar20) >> 8) + (*piVar12 + uVar8 & 0xffffff00) + iVar7);
              *(undefined *)((int)puVar10 + 1) =
                   *(undefined *)
                    (((int)(piVar18[1] + uVar20) >> 8) + (piVar12[1] + uVar8 & 0xffffff00) + iVar7);
              *(undefined *)((int)puVar10 + 2) =
                   *(undefined *)
                    (((int)(piVar18[2] + uVar20) >> 8) + (piVar12[2] + uVar8 & 0xffffff00) + iVar7);
              iVar13 = piVar18[4];
              *(undefined *)((int)puVar10 + 3) =
                   *(undefined *)
                    (((int)(piVar18[3] + uVar20) >> 8) + (piVar12[3] + uVar8 & 0xffffff00) + iVar7);
              iVar15 = piVar18[5];
              *(undefined *)(puVar10 + 1) =
                   *(undefined *)
                    (((int)(iVar13 + uVar20) >> 8) + (piVar12[4] + uVar8 & 0xffffff00) + iVar7);
              iVar13 = piVar18[6];
              *(undefined *)((int)puVar10 + 5) =
                   *(undefined *)
                    (((int)(iVar15 + uVar20) >> 8) + (piVar12[5] + uVar8 & 0xffffff00) + iVar7);
              *(undefined *)((int)puVar10 + 6) =
                   *(undefined *)
                    (((int)(iVar13 + uVar20) >> 8) + (piVar12[6] + uVar8 & 0xffffff00) + iVar7);
              *(undefined *)((int)puVar10 + 7) =
                   *(undefined *)
                    (((int)(piVar18[7] + uVar20) >> 8) + (piVar12[7] + uVar8 & 0xffffff00) + iVar7);
              piVar12 = piVar12 + 8;
              piVar18 = piVar18 + 8;
              puVar10 = (undefined4 *)((undefined *)((int)puVar10 + 7) + iVar1 + -7);
              iStack2100 = iStack2100 + -1;
            } while (iStack2100 != 0);
          }
          else {
            iVar7 = 8;
            puVar10 = puVar9;
            do {
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10 = puVar10 + 0x50;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iStack2108 = iStack2108 + -1;
          puVar9 = puVar9 + 2;
          uVar14 = uVar14 + iVar5;
          uVar17 = uVar17 + iVar3;
        } while (iStack2108 != 0);
      }
      uStack2120 = uStack2120 + iVar6;
      uStack2096 = uStack2096 + iVar4;
      puStack2124 = puStack2124 + 0x280;
      iStack2092 = iStack2092 + -1;
    } while (iStack2092 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_00403ef0(void)

{
  void *pvVar1;
  size_t *psVar2;
  void *_Dst;
  int iVar3;
  uint local_14 [5];
  
  pvVar1 = malloc(4);
  FUN_004023d0(local_14,(void **)&DAT_00478480,"rotozoom.png");
  psVar2 = (size_t *)malloc(0x10);
  *psVar2 = 0x100;
  psVar2[1] = 0x200;
  psVar2[2] = 0x100;
  _Dst = malloc(0x20000);
  iVar3 = 0;
  *(void **)(psVar2 + 3) = _Dst;
  _DAT_00478460 = psVar2;
  if (0 < (int)psVar2[1]) {
    do {
      memset(_Dst,0,*psVar2);
      _Dst = (void *)((int)_Dst + psVar2[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)psVar2[1]);
  }
  FUN_00402150(0x80);
  _DAT_00478470 = 0x100;
  _DAT_00478474 = 0x100;
  _DAT_00478478 = psVar2[2];
  DAT_0047847c = psVar2[2] * 0x80 + psVar2[3];
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00403fb0(size_t *param_1)

{
  size_t _Size;
  size_t sVar1;
  void *_Dst;
  size_t sVar2;
  float10 fVar3;
  
  if (_DAT_0041c370 != 0) {
    sVar2 = param_1[1];
    _Dst = (void *)param_1[3];
    _DAT_0041c370 = 0;
    if (0 < (int)sVar2) {
      _Size = *param_1;
      sVar1 = param_1[2];
      do {
        memset(_Dst,0,_Size);
        _Dst = (void *)((int)_Dst + sVar1);
        sVar2 = sVar2 - 1;
      } while (sVar2 != 0);
    }
    FUN_00402230((undefined4 *)&DAT_00478480,0x80);
  }
  _DAT_0041ceb4 = _DAT_0041ceb4 + 1.00000000;
  fVar3 = (float10)_CIcos();
  _CIsin((float)(fVar3 * (float10)256.00000000 + (float10)384.00000000));
  FUN_00403a50((int *)param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint ** FUN_00404080(void)

{
  int iVar1;
  uint **ppuVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  ppuVar2 = (uint **)malloc(4);
  memset(&DAT_00468280,0,64000);
  puVar3 = (undefined4 *)malloc(0x10);
  *puVar3 = 0x1000;
  puVar3[1] = 0x3c;
  puVar3[2] = 0x1000;
  pvVar4 = malloc(0x3c000);
  *(void **)(puVar3 + 3) = pvVar4;
  DAT_00458080 = puVar3;
  FUN_00402070(puVar3,*puVar3);
  puVar5 = (uint *)malloc(0xc00);
  *ppuVar2 = puVar5;
  uVar6 = 0xfffffffd;
  puVar8 = puVar5;
  do {
    uVar7 = uVar6 - 2;
    if ((int)uVar7 < 0x40) {
      uVar7 = (uint)((int)uVar7 < 0) - 1 & uVar7;
    }
    else {
      uVar7 = 0x3f;
    }
    *puVar8 = uVar7;
    if ((int)uVar6 < 0x40) {
      uVar7 = (uint)((int)uVar6 < 0) - 1 & uVar6;
    }
    else {
      uVar7 = 0x3f;
    }
    puVar8[1] = uVar7;
    puVar8[2] = uVar6 + 3;
    iVar1 = uVar6 + 4;
    puVar8 = puVar8 + 3;
    uVar6 = uVar6 + 1;
  } while (iVar1 < 0x40);
  puVar5[0xc0] = 0xe;
  puVar5[0xc1] = 0xe;
  puVar5[0xc2] = 0xe;
  puVar5[0xc3] = 0x1c;
  puVar5[0xc4] = 0x1c;
  puVar5[0xc5] = 0x1c;
  puVar5[0x240] = 0xe;
  puVar5[0x241] = 6;
  puVar5[0x242] = 6;
  puVar5[0x243] = 0x1b;
  puVar5[0x244] = 0x12;
  puVar5[0x245] = 0x12;
  DAT_00458060 = 0;
  DAT_00458064 = 0;
  DAT_00458068 = 0;
  DAT_0045806c = 0;
  DAT_00458070 = 0;
  DAT_00458074 = 0;
  _DAT_00458078 = 0;
  _DAT_0045807c = 0;
  DAT_00468270 = 0;
  _DAT_00468274 = 0;
  _DAT_00468278 = 0;
  _DAT_0046827c = 0;
  return ppuVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004041e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcStack24;
  
  iVar8 = DAT_00458080;
  iVar1 = *(int *)(DAT_00458080 + 0xc);
  puVar2 = (undefined4 *)&DAT_00468280;
  puVar7 = param_1;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 0x14a);
    iVar5 = 0x50;
    puVar10 = puVar7;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar2 = puVar3;
    puVar7 = puVar7 + 0x50;
  } while ((int)puVar3 < 0x478450);
  if (param_2 == (undefined4 *)0x1) {
    _DAT_0041cebc = _DAT_0041cebc + 1;
    _CIsin();
    iVar5 = FUN_00412520();
    iVar9 = 0;
    if (0 < *(int *)(iVar8 + 4)) {
      param_2 = param_1 + 0x1900;
      pcStack24 = &DAT_0045e7c0;
      do {
        pbVar6 = (byte *)(*(int *)(iVar8 + 8) * iVar9 + iVar5 + iVar1);
        iVar4 = 0x13f;
        puVar2 = param_2;
        pcVar11 = pcStack24;
        do {
          if ((*pcVar11 == '\0') && (*pbVar6 != 0)) {
            *(byte *)puVar2 = pcVar11[10] | *pbVar6;
            iVar8 = DAT_00458080;
          }
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          pbVar6 = pbVar6 + 1;
          iVar4 = iVar4 + -1;
          pcVar11 = pcVar11 + 1;
        } while (iVar4 != 0);
        param_2 = param_2 + 0x50;
        pcStack24 = pcStack24 + 0x14a;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(iVar8 + 4));
    }
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004042f0(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_ECX;
  float *pfVar6;
  int iVar7;
  uint in_EDX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool in_PF;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST1;
  undefined8 uVar14;
  undefined8 local_370;
  float local_364;
  double local_360;
  double local_358;
  double local_350;
  double dStack840;
  double dStack832;
  double dStack824;
  double dStack816;
  byte local_328 [400];
  byte local_198 [404];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_370;
  if (_DAT_0041c36c != 0) {
    _DAT_0041c36c = 0;
    FUN_00402230(in_ECX,0xc2);
  }
  if (_DAT_0041ceb8 != 0) {
    DAT_00478520 = 0;
    DAT_00478521 = 0;
    DAT_00478522 = 0x3f;
  }
  memset(local_328,0,400);
  memset(local_198,0,400);
  fVar12 = (float10)1;
  fVar13 = (float10)1;
  if (param_2 == 0) {
    uVar14 = FUN_004022a0();
    iVar5 = (int)((ulonglong)uVar14 >> 0x20);
    iVar8 = (int)uVar14;
    if (0 < iVar8) {
      iVar7 = iVar8;
      puVar9 = &DAT_00468270;
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        *puVar9 = 1;
        puVar9 = puVar9 + 1;
      }
      do {
        fVar11 = (float10)((float)(&DAT_00458070)[iVar5] + 0.01250000);
        if ((ushort)((ushort)(fVar11 < fVar12) << 8 | (ushort)(fVar11 == fVar12) << 0xe) == 0) {
          local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 |
                              (ulonglong)(uint)(float)fVar13);
        }
        else {
          if (in_PF) {
            local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 |
                                (ulonglong)(uint)((float)(&DAT_00458070)[iVar5] + 0.01250000));
          }
          else {
            local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 |
                                (ulonglong)(uint)(float)extraout_ST0);
          }
        }
        iVar5 = iVar5 + 1;
        *(float *)(&DAT_0045806c + iVar5) = (float)local_370;
        *(float *)(&DAT_0045805c + iVar5) = (float)((float10)(float)(&DAT_0045805c)[iVar5] + fVar12)
        ;
      } while (iVar5 < iVar8);
    }
  }
  else {
    if (param_2 == 2) {
      DAT_00458060 = (float)((float10)DAT_00458060 + fVar12);
      DAT_00458064 = (float)((float10)DAT_00458064 + fVar12);
      DAT_00458068 = (float)((float10)DAT_00458068 + fVar12);
      DAT_0045806c = (float)((float10)DAT_0045806c + fVar12);
      if ((int)in_EDX < 5) {
        uVar4 = (uint)((int)in_EDX < 0) - 1 & in_EDX;
      }
      else {
        uVar4 = 4;
      }
      iVar8 = -uVar4 + 3;
      uVar4 = -uVar4 + 4;
      if (3 < (int)uVar4) {
        uVar4 = uVar4 >> 2;
        pfVar6 = (float *)(&DAT_00458068 + iVar8);
        iVar8 = iVar8 + uVar4 * -4;
        do {
          fVar1 = pfVar6[2] - 0.01250000;
          uVar3 = (ulonglong)local_370 & 0xffffffff00000000;
          if ((ushort)((ushort)((float10)fVar1 < fVar12) << 8 |
                      (ushort)((float10)fVar1 == fVar12) << 0xe) == 0) {
            fVar1 = (float)fVar13;
          }
          else {
            if (!in_PF) {
              fVar1 = 0.00000000;
            }
          }
          pfVar6[2] = fVar1;
          local_370 = (double)(uVar3 | (uint)(pfVar6[1] - 0.01250000));
          fVar11 = (float10)(pfVar6[1] - 0.01250000);
          if ((ushort)((ushort)(fVar11 < fVar12) << 8 | (ushort)(fVar11 == fVar12) << 0xe) == 0) {
            local_370 = (double)(uVar3 | (uint)(float)fVar13);
          }
          else {
            if (!in_PF) {
              local_370 = (double)uVar3;
            }
          }
          pfVar6[1] = (float)local_370;
          uVar3 = (ulonglong)local_370 & 0xffffffff00000000;
          local_370 = (double)(uVar3 | (uint)(*pfVar6 - 0.01250000));
          fVar11 = (float10)(*pfVar6 - 0.01250000);
          if ((ushort)((ushort)(fVar11 < fVar12) << 8 | (ushort)(fVar11 == fVar12) << 0xe) == 0) {
            local_370 = (double)(uVar3 | (uint)(float)fVar13);
          }
          else {
            if (!in_PF) {
              local_370 = (double)uVar3;
            }
          }
          *pfVar6 = (float)local_370;
          uVar3 = (ulonglong)local_370 & 0xffffffff00000000;
          local_370 = (double)(uVar3 | (uint)(pfVar6[-1] - 0.01250000));
          fVar11 = (float10)(pfVar6[-1] - 0.01250000);
          if ((ushort)((ushort)(fVar11 < fVar12) << 8 | (ushort)(fVar11 == fVar12) << 0xe) == 0) {
            local_370 = (double)(uVar3 | (uint)(float)fVar13);
          }
          else {
            if (!in_PF) {
              local_370 = (double)uVar3;
            }
          }
          uVar4 = uVar4 - 1;
          pfVar6[-1] = (float)local_370;
          pfVar6 = pfVar6 + -4;
        } while (uVar4 != 0);
      }
      while (-1 < iVar8) {
        uVar3 = (ulonglong)(uint)((float)(&DAT_00458070)[iVar8] - 0.01250000);
        fVar11 = (float10)((float)(&DAT_00458070)[iVar8] - 0.01250000);
        if ((ushort)((ushort)(fVar11 < fVar12) << 8 | (ushort)(fVar11 == fVar12) << 0xe) == 0) {
          uVar3 = (ulonglong)(uint)(float)fVar13;
        }
        else {
          if (!in_PF) {
            uVar3 = 0;
          }
        }
        local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 | uVar3);
        iVar8 = iVar8 + -1;
        local_370._0_4_ = (float)(int)uVar3;
        *(float *)(&DAT_00458074 + iVar8) = (float)local_370;
      }
    }
  }
  local_364 = 0.00000000;
  do {
    iVar8 = (int)local_364;
    fVar1 = (float)(&DAT_00458060)[(int)local_364];
    local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 | (ulonglong)(uint)fVar1);
    local_360 = (double)(int)local_364;
    local_358 = (double)fVar1;
    local_364 = (float)(int)local_364 * 1.79999995 -
                ((fVar1 / 40.00000000) * ((float)(int)local_364 + 3.00000000)) / 7.00000000;
    local_350 = (double)local_364;
    fVar12 = (float10)_CIsin();
    dStack840 = (double)(((((float10)2.00000000 - (float10)local_360) * (float10)0.20000000) /
                         (float10)6.00000000) * fVar12);
    fVar12 = (float10)_CIsin();
    local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 |
                        (ulonglong)(uint)(float)(fVar12 * (float10)0.80000000 + (float10)dStack840))
    ;
    fVar12 = (float10)_CIcos();
    local_358 = (double)(((((float10)3.00000000 - (float10)local_360) * (float10)0.20000000) /
                         (float10)5.00000000) * fVar12);
    fVar12 = (float10)_CIcos();
    local_364 = (float)(fVar12 * (float10)0.80000000 + (float10)local_358) * 160.00000000 +
                200.00000000;
    if ((&DAT_00468270)[iVar8] != 0) {
      *(float *)(&DAT_00478450 + iVar8) = local_364;
    }
    dStack840 = (double)local_364;
    local_350 = (double)((ulonglong)local_350 & 0xffffffff00000000 |
                        (ulonglong)(uint)(((float)(&DAT_00478450)[iVar8] - local_364) * 0.50000000))
    ;
    local_358 = (double)(float)local_370;
    dStack832 = (double)((float)local_370 + 2.00000000);
    local_360 = (double)((ulonglong)local_360 & 0xffffffff00000000 |
                        (ulonglong)(uint)(((float)local_370 + 2.00000000) * 5.00000000));
    uVar4 = (&DAT_00458070)[iVar8];
    if (in_PF) {
      if (!in_PF) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x3f800000;
    }
    local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 | (ulonglong)uVar4);
    fVar12 = (float10)_CIsqrt();
    fVar1 = (float)(fVar12 * (float10)((float)local_370 * local_360._0_4_));
    local_360 = (double)((ulonglong)local_360 & 0xffffffff00000000 | (ulonglong)(uint)fVar1);
    dStack816 = (double)fVar1;
    if (((ushort)((ushort)(0.01000000 < fVar1) << 8 | (ushort)(fVar1 == 0.01000000) << 0xe) != 0) &&
       (*(float *)(&DAT_00478450 + iVar8) = local_364,
       (ushort)((ushort)(80.00000000 < fVar1) << 8 | (ushort)(fVar1 == 80.00000000) << 0xe) == 0)) {
      uVar4 = FUN_00412520();
      local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000 | (ulonglong)uVar4);
      dStack824 = (double)(extraout_ST1 + extraout_ST0_00);
      fVar12 = (float10)uVar4;
      if (!in_PF) {
        local_350 = (double)((extraout_ST1 + (float10)1.00000000) *
                            (extraout_ST1 + (float10)1.00000000));
        local_358 = local_358 * 90.00000000 + 127.00000000;
        fVar13 = extraout_ST0_00;
        while( true ) {
          local_370 = (double)(fVar12 - fVar13);
          fVar12 = (float10)_CIsqrt();
          local_360 = (double)((ulonglong)local_360 & 0xffffffff00000000 |
                              (ulonglong)local_198[uVar4]);
          local_364 = (float)(fVar12 * (float10)0.50000000 + (float10)local_358);
          if (in_PF) {
            fVar12 = (float10)_CIcos();
            fVar13 = (float10)63.00000000;
            fVar12 = (float10)(float)(fVar12 * fVar13 * (float10)dStack832 * (float10)0.25000000);
            if ((ushort)((ushort)(fVar12 < fVar13) << 8 | (ushort)(fVar12 == fVar13) << 0xe) == 0) {
              fVar12 = (float10)63.00000000;
            }
            else {
              if (!in_PF) {
                fVar12 = (float10)0;
              }
            }
            local_370._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
            local_360._0_1_ = (byte)(int)ROUND((float)fVar12);
            local_328[uVar4] = local_360._0_1_;
            local_360 = (double)((ulonglong)local_360 & 0xffffffff00000000 |
                                (ulonglong)(uint)(int)ROUND(local_364));
            local_360._0_1_ = (byte)(int)ROUND(local_364);
            local_198[uVar4] = local_360._0_1_;
          }
          uVar4 = uVar4 + 1;
          local_370 = (double)CONCAT44(local_370._4_4_,uVar4);
          fVar12 = (float10)uVar4;
          if ((ushort)((ushort)((float10)dStack824 < fVar12) << 8 |
                      (ushort)((float10)dStack824 == fVar12) << 0xe) != 0) break;
          fVar13 = (float10)dStack840;
        }
      }
    }
    local_364 = (float)(iVar8 + 1);
  } while ((int)local_364 < 4);
  _DAT_0041c368 = 0;
  if (_DAT_0041ceb8 != 0) {
    DAT_00478520 = 0;
    DAT_00478521 = 0x3f;
    DAT_00478522 = 0x3f;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar5 = 0;
    do {
      iVar7 = 0x52;
      puVar9 = (undefined4 *)((int)&DAT_00468281 + iVar5);
      puVar10 = (undefined4 *)(&DAT_00468280 + iVar5);
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined *)puVar10 = *(undefined *)puVar9;
      iVar7 = 0x52;
      puVar9 = (undefined4 *)((int)&DAT_004580a1 + iVar5);
      puVar10 = (undefined4 *)(&DAT_004580a0 + iVar5);
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      bVar2 = local_328[iVar8 * 2 + 1];
      *(undefined *)puVar10 = *(undefined *)puVar9;
      (&DAT_004683c9)[iVar5] = (char)((int)((uint)bVar2 + (uint)local_328[iVar8 * 2]) >> 1);
      (&DAT_004581e9)[iVar5] = local_198[iVar8 * 2] & 0x80;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x14a;
    } while (iVar8 < *(int *)(param_1 + 4));
  }
  if (_DAT_0041ceb8 != 0) {
    DAT_00478520 = 0;
    DAT_00478521 = 0x3f;
    DAT_00478522 = 0;
  }
  FUN_004041e0(*(undefined4 **)(param_1 + 0xc),param_3);
  DAT_00478520 = 0;
  DAT_00478521 = 0;
  DAT_00478522 = 0;
  _DAT_00478508 = 1;
  FUN_00412237();
  return;
}



void FUN_00404a70(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined uStack20;
  
  iVar1 = 0;
  do {
    fVar3 = (float10)_CIsin();
    fVar4 = (float10)_CIcos();
    fVar5 = (float10)_CIsin();
    fVar6 = (float10)_CIcos();
    uStack20 = (undefined)
               (int)ROUND(fVar6 * (float10)(double)(fVar5 * (float10)25.00000000) +
                          (float10)(double)(fVar4 * (float10)10.00000000 +
                                           (float10)(double)(fVar3 * (float10)15.00000000)) +
                          (float10)60.00000000);
    (&DAT_0042cf00)[iVar1] = uStack20;
    fVar3 = (float10)_CIsin();
    fVar4 = (float10)_CIcos();
    fVar5 = (float10)_CIsin();
    fVar6 = (float10)_CIcos();
    uStack20 = (undefined)
               (int)ROUND(fVar6 * (float10)(double)(fVar5 * (float10)25.00000000) +
                          (float10)(double)(fVar4 * (float10)10.00000000 +
                                           (float10)(double)(fVar3 * (float10)15.00000000)) +
                          (float10)60.00000000);
    (&DAT_0041cf00)[iVar1] = uStack20;
    fVar3 = (float10)_CIsin();
    fVar4 = (float10)_CIcos();
    fVar5 = (float10)_CIsin();
    fVar6 = (float10)_CIcos();
    iVar2 = iVar1 + 1;
    uStack20 = (undefined)
               (int)ROUND(fVar6 * (float10)(double)(fVar5 * (float10)25.00000000) +
                          (float10)(double)(fVar4 * (float10)10.00000000 +
                                           (float10)(double)(fVar3 * (float10)15.00000000)) +
                          (float10)60.00000000);
    (&DAT_00448060)[iVar1] = uStack20;
    iVar1 = iVar2;
  } while (iVar2 < 0x10000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404c90(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int *piStack44;
  int iStack40;
  
  _CIsin();
  iVar4 = FUN_00412520();
  piStack44 = &DAT_0043d064;
  iVar11 = -35000;
  do {
    _CIsin();
    iVar5 = FUN_00412520();
    pbVar8 = &DAT_0041cf00 + iVar5;
    _CIsin();
    iVar6 = FUN_00412520();
    iVar3 = iVar6 - (int)pbVar8;
    iVar5 = iVar4 - (int)pbVar8;
    pbVar9 = &DAT_00448062 + iVar6;
    iStack40 = 0x40;
    piVar7 = piStack44;
    pbVar10 = &DAT_0042cf02 + iVar4;
    do {
      bVar1 = pbVar10[-1];
      piVar7[-1] = ((uint)pbVar8[(int)(&DAT_0042cf00 + iVar5)] +
                    (uint)pbVar8[(int)(&DAT_00448060 + iVar3)] + (uint)*pbVar8) * 0x80 + iVar11;
      bVar2 = *pbVar10;
      *piVar7 = ((uint)pbVar9[-1] + (uint)bVar1 + (uint)pbVar8[1]) * 0x80 + iVar11;
      bVar1 = pbVar10[1];
      piVar7[1] = ((uint)pbVar8[2] + (uint)bVar2 + (uint)*pbVar9) * 0x80 + iVar11;
      bVar2 = pbVar10[2];
      piVar7[2] = ((uint)pbVar9[1] + (uint)bVar1 + (uint)pbVar8[3]) * 0x80 + iVar11;
      piVar7[3] = ((uint)pbVar9[2] + (uint)bVar2 + (uint)pbVar8[4]) * 0x80 + iVar11;
      piVar7 = piVar7 + 5;
      pbVar9 = pbVar9 + 5;
      pbVar8 = pbVar8 + 5;
      pbVar10 = pbVar10 + 5;
      iStack40 = iStack40 + -1;
    } while (iStack40 != 0);
    piStack44 = piStack44 + 0x400;
    iVar11 = iVar11 + 4000;
  } while (iVar11 < 5000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404e40(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_18;
  int local_14;
  int local_c;
  int local_8;
  int *local_4;
  
  local_14 = 0;
  local_4 = &DAT_0043e060;
  do {
    iVar3 = local_4[-0x400];
    local_c = 0;
    local_8 = 0x200;
    local_18 = local_4;
    do {
      iVar7 = *local_18;
      iVar4 = (((int)((iVar7 - iVar3) + (iVar7 - iVar3 >> 0x1f & 7U)) >> 3) - local_8) + 0x1500;
      if (iVar3 < iVar7) {
        iVar6 = 200 - ((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8);
        iVar1 = 200 - ((int)(iVar7 + (iVar7 >> 0x1f & 0xffU)) >> 8);
        puVar2 = (undefined *)(iVar1 * 0x140 + _DAT_0043d040 + local_14);
        iVar3 = iVar7;
        if ((iVar1 < iVar6) && (iVar1 < 0xb5)) {
          iVar7 = 0xb4;
          if (iVar6 < 0xb5) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 - iVar1;
          iVar5 = iVar4;
          while (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            *puVar2 = (char)((uint)iVar5 >> 8);
            iVar5 = iVar5 + (local_c - iVar4) / (iVar6 - iVar1);
            puVar2 = puVar2 + 0x140;
          }
        }
      }
      local_18 = local_18 + 0x400;
      local_8 = local_8 + 0x200;
      local_c = iVar4;
    } while (local_8 < 0x1400);
    iVar3 = 200 - ((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8);
    puVar2 = (undefined *)(iVar3 * 0x140 + _DAT_0043d040 + local_14);
    if ((int)(uint)(byte)(&DAT_0043cf00)[local_14] < iVar3) {
      iVar7 = iVar3 - (uint)(byte)(&DAT_0043cf00)[local_14];
      do {
        puVar2 = puVar2 + -0x140;
        iVar7 = iVar7 + -1;
        *puVar2 = 0;
      } while (iVar7 != 0);
    }
    local_4 = local_4 + 1;
    (&DAT_0043cf00)[local_14] = (char)iVar3;
    local_14 = local_14 + 1;
  } while ((int)local_4 < 0x43e560);
  return;
}



int ** FUN_00404fd0(void)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  memset(&DAT_0043cf00,0,0x140);
  ppiVar1 = (int **)malloc(4);
  FUN_00404a70();
  piVar2 = (int *)malloc(0xc00);
  *ppiVar1 = piVar2;
  iVar3 = 3;
  iVar4 = 0x40;
  do {
    *piVar2 = iVar3 + -2;
    piVar2[1] = iVar3;
    piVar2[2] = iVar3 + 3;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return ppiVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_00405030(void *this,int param_1,int param_2)

{
  if (_DAT_0041c364 != 0) {
    _DAT_0041c364 = 0;
    FUN_00402230((undefined4 *)this,0x80);
  }
  _DAT_0041cec8 = _DAT_0041cec8 + 1;
  if (param_2 != 0) {
    _DAT_0041cec8 = 0;
    _DAT_0041cec4 = 1.00000000;
  }
  _DAT_0041cec0 = _DAT_0041cec0 + 1;
  _DAT_0041cec4 = _DAT_0041cec4 * 0.94999999;
  _DAT_0043d040 = *(undefined4 *)(param_1 + 0xc);
  _CIsin(this);
  FUN_00404c90();
  FUN_00404e40();
  return;
}



void SDL_UpdateRect(void)

{
                    // WARNING: Could not recover jumptable at 0x004050de. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_UpdateRect();
  return;
}



void SDL_Init(void)

{
                    // WARNING: Could not recover jumptable at 0x004050e4. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_Init();
  return;
}



void SDL_SetVideoMode(void)

{
                    // WARNING: Could not recover jumptable at 0x004050ea. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_SetVideoMode();
  return;
}



void SDL_PollEvent(void)

{
                    // WARNING: Could not recover jumptable at 0x004050f0. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_PollEvent();
  return;
}



void SDL_ShowCursor(void)

{
                    // WARNING: Could not recover jumptable at 0x004050f6. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_ShowCursor();
  return;
}



void SDL_LockSurface(void)

{
                    // WARNING: Could not recover jumptable at 0x004050fc. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_LockSurface();
  return;
}



void SDL_UnlockSurface(void)

{
                    // WARNING: Could not recover jumptable at 0x00405102. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_UnlockSurface();
  return;
}



void SDL_SetColors(void)

{
                    // WARNING: Could not recover jumptable at 0x00405108. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_SetColors();
  return;
}



void SDL_Flip(void)

{
                    // WARNING: Could not recover jumptable at 0x0040510e. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_Flip();
  return;
}



void SDL_Quit(void)

{
                    // WARNING: Could not recover jumptable at 0x00405114. Too many branches
                    // WARNING: Treating indirect jump as call
  SDL_Quit();
  return;
}



undefined4 __cdecl FUN_00405120(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(undefined4 *)(param_2 + 0xc);
  }
  return 0;
}



undefined4 __cdecl
FUN_00405140(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            undefined4 param_7,undefined4 param_8,uint *param_9,uint *param_10,uint *param_11)

{
  if (((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) &&
      ((param_4 != (uint *)0x0 && (param_5 != (uint *)0x0)))) && (param_6 != (uint *)0x0)) {
    *param_3 = *param_2;
    *param_4 = param_2[1];
    *param_5 = (uint)*(byte *)(param_2 + 6);
    if ((*(char *)(param_2 + 6) == '\0') || (0x10 < *(byte *)(param_2 + 6))) {
      FUN_00408740((int *)param_1,"Invalid bit depth");
      param_1 = param_3;
    }
    *param_6 = (uint)*(byte *)((int)param_2 + 0x19);
    if (6 < *(byte *)((int)param_2 + 0x19)) {
      FUN_00408740((int *)param_1,"Invalid color type");
      param_1 = param_5;
    }
    if (param_10 != (uint *)0x0) {
      *param_10 = (uint)*(byte *)((int)param_2 + 0x1a);
    }
    if (param_11 != (uint *)0x0) {
      *param_11 = (uint)*(byte *)((int)param_2 + 0x1b);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)(param_2 + 7);
    }
    if ((*param_3 == 0) || (0x7fffffff < *param_3)) {
      FUN_00408740((int *)param_1,"Invalid image width");
      param_1 = param_5;
    }
    if ((*param_4 == 0) || (0x7fffffff < *param_4)) {
      FUN_00408740((int *)param_1,"Invalid image height");
      param_1 = param_5;
    }
    if (0x1fffff7e < *param_2) {
      FUN_004087f0((int)param_1,"Width too large for libpng to process image data.");
    }
    return 1;
  }
  return 0;
}



undefined4 __cdecl FUN_00405270(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 8) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    *param_4 = (uint)*(ushort *)(param_2 + 0x14);
    return 8;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004053d9)

void __cdecl
FUN_004052b0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined *param_6,undefined *param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 uVar6;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_0041c340 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)FUN_00408980(1,param_6,param_5);
  if (piVar2 == (int *)0x0) {
LAB_00405353:
    FUN_00412237();
    return;
  }
  FUN_00408390((int)piVar2);
  piVar2[0x99] = 1000000;
  piVar2[0x9a] = 1000000;
  iVar3 = _setjmp3(piVar2,0);
  if (iVar3 != 0) {
    FUN_00408bf0((int)piVar2,(void *)piVar2[0x2b]);
    piVar2[0x2b] = 0;
    FUN_00408a30(piVar2,param_7,param_5);
    goto LAB_00405353;
  }
  FUN_00408b30((int)piVar2,param_5,param_6,param_7);
  FUN_00408720((int)piVar2,param_2,param_3,param_4);
  pcVar4 = "1.2.8";
  do {
    if ((param_1 + -0x4163f0)[(int)pcVar4] != *pcVar4) {
      piVar2[0x1b] = piVar2[0x1b] | 0x20000;
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (((piVar2[0x1b] & 0x20000U) != 0) &&
     (((param_1 == (char *)0x0 || (*param_1 != '1')) || (param_1[2] != '2')))) {
    if (param_1 != (char *)0x0) {
      sprintf(local_58,"Application was compiled with png.h from libpng-%.20s",param_1);
      FUN_004087f0((int)piVar2,local_58);
    }
    sprintf(local_58,"Application  is  running with png.c from libpng-%.20s",&DAT_004163f0);
    FUN_004087f0((int)piVar2,local_58);
    piVar2[0x1b] = 0;
    FUN_00408740(piVar2,"Incompatible libpng version in application and library");
  }
  piVar2[0x2c] = 0x2000;
  pvVar5 = FUN_00408ba0(piVar2,0x2000);
  *(void **)(piVar2 + 0x2b) = pvVar5;
  piVar2[0x25] = 0x407d70;
  piVar2[0x26] = 0x407dc0;
  *(int **)(piVar2 + 0x27) = piVar2;
  uVar6 = FUN_00412c20((int)(piVar2 + 0x1d),"1.2.3",0x38);
  switch(uVar6) {
  case 0:
    goto switchD_00405481_caseD_0;
  case 0xfffffffa:
    pcVar4 = "zlib version error";
    break;
  default:
    pcVar4 = "Unknown zlib error";
    break;
  case 0xfffffffc:
  case 0xfffffffe:
    pcVar4 = "zlib memory error";
  }
  FUN_00408740(piVar2,pcVar4);
switchD_00405481_caseD_0:
  piVar2[0x20] = piVar2[0x2b];
  piVar2[0x21] = piVar2[0x2c];
  FUN_00408920((int)piVar2,0,0);
  iVar3 = _setjmp3(piVar2,0);
  if (iVar3 != 0) {
    abort();
  }
  FUN_00412237();
  return;
}



void __thiscall FUN_00405510(void *this,int *param_1,int param_2,int *param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint unaff_EBX;
  int *piVar9;
  size_t unaff_EBP;
  uint uVar10;
  char *pcVar11;
  
  piVar9 = param_1;
  bVar2 = *(byte *)(param_1 + 0x4b);
  if (bVar2 < 8) {
    uVar10 = (uint)bVar2;
    FUN_004088c0(param_1);
    *(undefined *)(piVar9 + 0x4b) = 8;
    iVar3 = FUN_00407c40(param_2 + 0x20,uVar10,-uVar10 + 8);
    if (iVar3 != 0) {
      if ((bVar2 < 4) && (iVar3 = FUN_00407c40(param_2 + 0x20,uVar10,-uVar10 + 4), iVar3 != 0)) {
        pcVar11 = "Not a PNG file";
      }
      else {
        pcVar11 = "PNG file corrupted by ASCII conversion";
      }
      FUN_00408740(piVar9,pcVar11);
    }
    if (bVar2 < 3) {
      piVar9[0x1a] = piVar9[0x1a] | 0x1000;
    }
  }
  puVar1 = (uint *)(piVar9 + 0x47);
LAB_00405594:
  do {
    FUN_004088c0(piVar9);
    piVar4 = (int *)FUN_00409d20(piVar9,(undefined *)&param_1);
    FUN_00407dd0((int)piVar9);
    FUN_00408ca0(piVar9,puVar1,4);
    uVar10 = 4;
    puVar7 = &DAT_0041640c;
    puVar8 = puVar1;
    do {
      if (*puVar8 != *puVar7) goto LAB_004055e8;
      uVar10 = uVar10 - 4;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (3 < uVar10);
    if (uVar10 == 0) {
LAB_00405645:
      iVar5 = 0;
    }
    else {
LAB_004055e8:
      iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
      if (iVar3 == 0) {
        if (uVar10 == 1) goto LAB_00405645;
        iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
        if (iVar3 == 0) {
          if (uVar10 == 2) goto LAB_00405645;
          iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
          if (iVar3 == 0) {
            if ((uVar10 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
               iVar3 == 0)) goto LAB_00405645;
          }
        }
      }
      iVar5 = 1;
      if (iVar3 < 1) {
        iVar5 = -1;
      }
    }
    piVar9 = param_3;
    if (iVar5 != 0) {
      uVar10 = 4;
      puVar7 = &DAT_0041641c;
      puVar8 = puVar1;
      do {
        if (*puVar8 != *puVar7) goto LAB_00405688;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (3 < uVar10);
      if (uVar10 == 0) {
LAB_004056e5:
        iVar5 = 0;
      }
      else {
LAB_00405688:
        iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
        if (iVar3 == 0) {
          if (uVar10 == 1) goto LAB_004056e5;
          iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
          if (iVar3 == 0) {
            if (uVar10 == 2) goto LAB_004056e5;
            iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
            if (iVar3 == 0) {
              if ((uVar10 == 3) ||
                 (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                 iVar3 == 0)) goto LAB_004056e5;
            }
          }
        }
        iVar5 = 1;
        if (iVar3 < 1) {
          iVar5 = -1;
        }
      }
      if (iVar5 == 0) {
        FUN_0040a120(param_3);
      }
      else {
        uVar10 = FUN_004082a0((int)param_3,(int *)puVar1);
        uVar6 = 4;
        if (uVar10 == 0) {
          puVar7 = &DAT_00416424;
          puVar8 = puVar1;
          do {
            if (*puVar8 != *puVar7) goto LAB_0040590e;
            uVar6 = uVar6 - 4;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (3 < uVar6);
          if (uVar6 == 0) {
LAB_0040596b:
            iVar5 = 0;
          }
          else {
LAB_0040590e:
            iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
            if (iVar3 == 0) {
              if (uVar6 == 1) goto LAB_0040596b;
              iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
              if (iVar3 == 0) {
                if (uVar6 == 2) goto LAB_0040596b;
                iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                if (iVar3 == 0) {
                  if ((uVar6 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                     iVar3 == 0)) goto LAB_0040596b;
                }
              }
            }
            iVar5 = 1;
            if (iVar3 < 1) {
              iVar5 = -1;
            }
          }
          if (iVar5 == 0) {
            FUN_00409f90(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX,(int)this);
          }
          else {
            uVar10 = 4;
            puVar7 = &DAT_00416414;
            puVar8 = puVar1;
            do {
              if (*puVar8 != *puVar7) goto LAB_004059ad;
              uVar10 = uVar10 - 4;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (3 < uVar10);
            if (uVar10 == 0) {
LAB_00405a0a:
              iVar5 = 0;
            }
            else {
LAB_004059ad:
              iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
              if (iVar3 == 0) {
                if (uVar10 == 1) goto LAB_00405a0a;
                iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                if (iVar3 == 0) {
                  if (uVar10 == 2) goto LAB_00405a0a;
                  iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                  if (iVar3 == 0) {
                    if ((uVar10 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                       iVar3 == 0)) goto LAB_00405a0a;
                  }
                }
              }
              iVar5 = 1;
              if (iVar3 < 1) {
                iVar5 = -1;
              }
            }
            if (iVar5 == 0) {
              if ((param_3[0x1a] & 1U) == 0) {
                pcVar11 = "Missing IHDR before IDAT";
              }
              else {
                if ((*(char *)((int)param_3 + 0x126) != '\x03') || ((param_3[0x1a] & 2U) != 0))
                goto LAB_0040649f;
                pcVar11 = "Missing PLTE before IDAT";
              }
              FUN_00408740(param_3,pcVar11);
LAB_0040649f:
              param_3[0x1a] = param_3[0x1a] | 4;
              *(int **)(param_3 + 0x43) = piVar4;
              return;
            }
            uVar10 = 4;
            puVar7 = &DAT_0041642c;
            puVar8 = puVar1;
            do {
              if (*puVar8 != *puVar7) goto LAB_00405a38;
              uVar10 = uVar10 - 4;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (3 < uVar10);
            if (uVar10 == 0) {
LAB_00405a95:
              iVar5 = 0;
            }
            else {
LAB_00405a38:
              iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
              if (iVar3 == 0) {
                if (uVar10 == 1) goto LAB_00405a95;
                iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                if (iVar3 == 0) {
                  if (uVar10 == 2) goto LAB_00405a95;
                  iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                  if (iVar3 == 0) {
                    if ((uVar10 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                       iVar3 == 0)) goto LAB_00405a95;
                  }
                }
              }
              iVar5 = 1;
              if (iVar3 < 1) {
                iVar5 = -1;
              }
            }
            if (iVar5 == 0) {
              FUN_0040b150(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
            }
            else {
              uVar10 = 4;
              puVar7 = &DAT_00416434;
              puVar8 = puVar1;
              do {
                if (*puVar8 != *puVar7) goto LAB_00405ad8;
                uVar10 = uVar10 - 4;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              } while (3 < uVar10);
              if (uVar10 == 0) {
LAB_00405b35:
                iVar5 = 0;
              }
              else {
LAB_00405ad8:
                iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                if (iVar3 == 0) {
                  if (uVar10 == 1) goto LAB_00405b35;
                  iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                  if (iVar3 == 0) {
                    if (uVar10 == 2) goto LAB_00405b35;
                    iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                    if (iVar3 == 0) {
                      if ((uVar10 == 3) ||
                         (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                  (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0)) goto LAB_00405b35;
                    }
                  }
                }
                iVar5 = 1;
                if (iVar3 < 1) {
                  iVar5 = -1;
                }
              }
              if (iVar5 == 0) {
                FUN_0040a450(param_3,param_4,(uint)piVar4);
              }
              else {
                uVar10 = 4;
                puVar7 = &DAT_0041643c;
                puVar8 = puVar1;
                do {
                  if (*puVar8 != *puVar7) goto LAB_00405b78;
                  uVar10 = uVar10 - 4;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                } while (3 < uVar10);
                if (uVar10 == 0) {
LAB_00405bd5:
                  iVar5 = 0;
                }
                else {
LAB_00405b78:
                  iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                  if (iVar3 == 0) {
                    if (uVar10 == 1) goto LAB_00405bd5;
                    iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                    if (iVar3 == 0) {
                      if (uVar10 == 2) goto LAB_00405bd5;
                      iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                      if (iVar3 == 0) {
                        if ((uVar10 == 3) ||
                           (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                    (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                        goto LAB_00405bd5;
                      }
                    }
                  }
                  iVar5 = 1;
                  if (iVar3 < 1) {
                    iVar5 = -1;
                  }
                }
                if (iVar5 == 0) {
                  FUN_0040a170(param_3,param_4,(uint)piVar4);
                }
                else {
                  uVar10 = 4;
                  puVar7 = &DAT_00416444;
                  puVar8 = puVar1;
                  do {
                    if (*puVar8 != *puVar7) goto LAB_00405c18;
                    uVar10 = uVar10 - 4;
                    puVar7 = puVar7 + 1;
                    puVar8 = puVar8 + 1;
                  } while (3 < uVar10);
                  if (uVar10 == 0) {
LAB_00405c75:
                    iVar5 = 0;
                  }
                  else {
LAB_00405c18:
                    iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                    if (iVar3 == 0) {
                      if (uVar10 == 1) goto LAB_00405c75;
                      iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                      if (iVar3 == 0) {
                        if (uVar10 == 2) goto LAB_00405c75;
                        iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                        if (iVar3 == 0) {
                          if ((uVar10 == 3) ||
                             (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                      (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                          goto LAB_00405c75;
                        }
                      }
                    }
                    iVar5 = 1;
                    if (iVar3 < 1) {
                      iVar5 = -1;
                    }
                  }
                  if (iVar5 == 0) {
                    FUN_0040b390(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                  }
                  else {
                    uVar10 = 4;
                    puVar7 = &DAT_0041645c;
                    puVar8 = puVar1;
                    do {
                      if (*puVar8 != *puVar7) goto LAB_00405cb8;
                      uVar10 = uVar10 - 4;
                      puVar7 = puVar7 + 1;
                      puVar8 = puVar8 + 1;
                    } while (3 < uVar10);
                    if (uVar10 == 0) {
LAB_00405d15:
                      iVar5 = 0;
                    }
                    else {
LAB_00405cb8:
                      iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                      if (iVar3 == 0) {
                        if (uVar10 == 1) goto LAB_00405d15;
                        iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                        if (iVar3 == 0) {
                          if (uVar10 == 2) goto LAB_00405d15;
                          iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                  (uint)*(byte *)((int)puVar7 + 2);
                          if (iVar3 == 0) {
                            if ((uVar10 == 3) ||
                               (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                        (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                            goto LAB_00405d15;
                          }
                        }
                      }
                      iVar5 = 1;
                      if (iVar3 < 1) {
                        iVar5 = -1;
                      }
                    }
                    if (iVar5 == 0) {
                      FUN_0040b650(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                    }
                    else {
                      uVar10 = 4;
                      puVar7 = &DAT_00416464;
                      puVar8 = puVar1;
                      do {
                        if (*puVar8 != *puVar7) goto LAB_00405d58;
                        uVar10 = uVar10 - 4;
                        puVar7 = puVar7 + 1;
                        puVar8 = puVar8 + 1;
                      } while (3 < uVar10);
                      if (uVar10 == 0) {
LAB_00405db5:
                        iVar5 = 0;
                      }
                      else {
LAB_00405d58:
                        iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                        if (iVar3 == 0) {
                          if (uVar10 == 1) goto LAB_00405db5;
                          iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                  (uint)*(byte *)((int)puVar7 + 1);
                          if (iVar3 == 0) {
                            if (uVar10 == 2) goto LAB_00405db5;
                            iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                    (uint)*(byte *)((int)puVar7 + 2);
                            if (iVar3 == 0) {
                              if ((uVar10 == 3) ||
                                 (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                          (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                              goto LAB_00405db5;
                            }
                          }
                        }
                        iVar5 = 1;
                        if (iVar3 < 1) {
                          iVar5 = -1;
                        }
                      }
                      if (iVar5 == 0) {
                        FUN_0040b780(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                      }
                      else {
                        uVar10 = 4;
                        puVar7 = &DAT_0041646c;
                        puVar8 = puVar1;
                        do {
                          if (*puVar8 != *puVar7) goto LAB_00405df8;
                          uVar10 = uVar10 - 4;
                          puVar7 = puVar7 + 1;
                          puVar8 = puVar8 + 1;
                        } while (3 < uVar10);
                        if (uVar10 == 0) {
LAB_00405e55:
                          iVar5 = 0;
                        }
                        else {
LAB_00405df8:
                          iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                          if (iVar3 == 0) {
                            if (uVar10 == 1) goto LAB_00405e55;
                            iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                    (uint)*(byte *)((int)puVar7 + 1);
                            if (iVar3 == 0) {
                              if (uVar10 == 2) goto LAB_00405e55;
                              iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                      (uint)*(byte *)((int)puVar7 + 2);
                              if (iVar3 == 0) {
                                if ((uVar10 == 3) ||
                                   (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                            (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                                goto LAB_00405e55;
                              }
                            }
                          }
                          iVar5 = 1;
                          if (iVar3 < 1) {
                            iVar5 = -1;
                          }
                        }
                        if (iVar5 == 0) {
                          FUN_0040b9e0(param_3,param_4,piVar4);
                        }
                        else {
                          uVar10 = 4;
                          puVar7 = &DAT_00416474;
                          puVar8 = puVar1;
                          do {
                            if (*puVar8 != *puVar7) goto LAB_00405e98;
                            uVar10 = uVar10 - 4;
                            puVar7 = puVar7 + 1;
                            puVar8 = puVar8 + 1;
                          } while (3 < uVar10);
                          if (uVar10 == 0) {
LAB_00405ef5:
                            iVar5 = 0;
                          }
                          else {
LAB_00405e98:
                            iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                            if (iVar3 == 0) {
                              if (uVar10 == 1) goto LAB_00405ef5;
                              iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                      (uint)*(byte *)((int)puVar7 + 1);
                              if (iVar3 == 0) {
                                if (uVar10 == 2) goto LAB_00405ef5;
                                iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                        (uint)*(byte *)((int)puVar7 + 2);
                                if (iVar3 == 0) {
                                  if ((uVar10 == 3) ||
                                     (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                              (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                                  goto LAB_00405ef5;
                                }
                              }
                            }
                            iVar5 = 1;
                            if (iVar3 < 1) {
                              iVar5 = -1;
                            }
                          }
                          if (iVar5 == 0) {
                            FUN_0040b530(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                          }
                          else {
                            uVar10 = 4;
                            puVar7 = &DAT_0041647c;
                            puVar8 = puVar1;
                            do {
                              if (*puVar8 != *puVar7) goto LAB_00405f3c;
                              uVar10 = uVar10 - 4;
                              puVar7 = puVar7 + 1;
                              puVar8 = puVar8 + 1;
                            } while (3 < uVar10);
                            if (uVar10 == 0) {
LAB_00405f99:
                              iVar5 = 0;
                            }
                            else {
LAB_00405f3c:
                              iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                              if (iVar3 == 0) {
                                if (uVar10 == 1) goto LAB_00405f99;
                                iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                        (uint)*(byte *)((int)puVar7 + 1);
                                if (iVar3 == 0) {
                                  if (uVar10 == 2) goto LAB_00405f99;
                                  iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                          (uint)*(byte *)((int)puVar7 + 2);
                                  if (iVar3 == 0) {
                                    if ((uVar10 == 3) ||
                                       (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                                    goto LAB_00405f99;
                                  }
                                }
                              }
                              iVar5 = 1;
                              if (iVar3 < 1) {
                                iVar5 = -1;
                              }
                            }
                            if (iVar5 == 0) {
                              FUN_0040a2e0(param_3,param_4,(uint)piVar4);
                            }
                            else {
                              uVar10 = 4;
                              puVar7 = &DAT_0041648c;
                              puVar8 = puVar1;
                              do {
                                if (*puVar8 != *puVar7) goto LAB_00405fdf;
                                uVar10 = uVar10 - 4;
                                puVar7 = puVar7 + 1;
                                puVar8 = puVar8 + 1;
                              } while (3 < uVar10);
                              if (uVar10 == 0) {
LAB_0040603c:
                                iVar5 = 0;
                              }
                              else {
LAB_00405fdf:
                                iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                if (iVar3 == 0) {
                                  if (uVar10 == 1) goto LAB_0040603c;
                                  iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                          (uint)*(byte *)((int)puVar7 + 1);
                                  if (iVar3 == 0) {
                                    if (uVar10 == 2) goto LAB_0040603c;
                                    iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                            (uint)*(byte *)((int)puVar7 + 2);
                                    if (iVar3 == 0) {
                                      if ((uVar10 == 3) ||
                                         (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                  (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                                      goto LAB_0040603c;
                                    }
                                  }
                                }
                                iVar5 = 1;
                                if (iVar3 < 1) {
                                  iVar5 = -1;
                                }
                              }
                              if (iVar5 == 0) {
                                FUN_0040a940(param_3,param_4,(uint)piVar4);
                              }
                              else {
                                uVar10 = 4;
                                puVar7 = &DAT_0041644c;
                                puVar8 = puVar1;
                                do {
                                  if (*puVar8 != *puVar7) goto LAB_00406082;
                                  uVar10 = uVar10 - 4;
                                  puVar7 = puVar7 + 1;
                                  puVar8 = puVar8 + 1;
                                } while (3 < uVar10);
                                if (uVar10 == 0) {
LAB_004060df:
                                  iVar5 = 0;
                                }
                                else {
LAB_00406082:
                                  iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                  if (iVar3 == 0) {
                                    if (uVar10 == 1) goto LAB_004060df;
                                    iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                            (uint)*(byte *)((int)puVar7 + 1);
                                    if (iVar3 == 0) {
                                      if (uVar10 == 2) goto LAB_004060df;
                                      iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                              (uint)*(byte *)((int)puVar7 + 2);
                                      if (iVar3 == 0) {
                                        if ((uVar10 == 3) ||
                                           (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                    (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                                        goto LAB_004060df;
                                      }
                                    }
                                  }
                                  iVar5 = 1;
                                  if (iVar3 < 1) {
                                    iVar5 = -1;
                                  }
                                }
                                if (iVar5 == 0) {
                                  FUN_0040ab30(param_3,param_4,(uint)piVar4);
                                }
                                else {
                                  uVar10 = 4;
                                  puVar7 = &DAT_00416484;
                                  puVar8 = puVar1;
                                  do {
                                    if (*puVar8 != *puVar7) goto LAB_0040612c;
                                    uVar10 = uVar10 - 4;
                                    puVar7 = puVar7 + 1;
                                    puVar8 = puVar8 + 1;
                                  } while (3 < uVar10);
                                  if (uVar10 == 0) {
LAB_00406189:
                                    iVar5 = 0;
                                  }
                                  else {
LAB_0040612c:
                                    iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                    if (iVar3 == 0) {
                                      if (uVar10 == 1) goto LAB_00406189;
                                      iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                              (uint)*(byte *)((int)puVar7 + 1);
                                      if (iVar3 == 0) {
                                        if (uVar10 == 2) goto LAB_00406189;
                                        iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                                (uint)*(byte *)((int)puVar7 + 2);
                                        if (iVar3 == 0) {
                                          if ((uVar10 == 3) ||
                                             (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                      (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0))
                                          goto LAB_00406189;
                                        }
                                      }
                                    }
                                    iVar5 = 1;
                                    if (iVar3 < 1) {
                                      iVar5 = -1;
                                    }
                                  }
                                  if (iVar5 == 0) {
                                    FUN_0040ace0(param_3,param_4,piVar4,unaff_EBP,unaff_EBX);
                                  }
                                  else {
                                    uVar10 = 4;
                                    puVar7 = &DAT_00416494;
                                    puVar8 = puVar1;
                                    do {
                                      if (*puVar8 != *puVar7) goto LAB_004061cf;
                                      uVar10 = uVar10 - 4;
                                      puVar7 = puVar7 + 1;
                                      puVar8 = puVar8 + 1;
                                    } while (3 < uVar10);
                                    if (uVar10 == 0) {
LAB_0040622c:
                                      iVar5 = 0;
                                    }
                                    else {
LAB_004061cf:
                                      iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                      if (iVar3 == 0) {
                                        if (uVar10 == 1) goto LAB_0040622c;
                                        iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                                (uint)*(byte *)((int)puVar7 + 1);
                                        if (iVar3 == 0) {
                                          if (uVar10 == 2) goto LAB_0040622c;
                                          iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                                  (uint)*(byte *)((int)puVar7 + 2);
                                          if (iVar3 == 0) {
                                            if ((uVar10 == 3) ||
                                               (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                        (uint)*(byte *)((int)puVar7 + 3), iVar3 == 0
                                               )) goto LAB_0040622c;
                                          }
                                        }
                                      }
                                      iVar5 = 1;
                                      if (iVar3 < 1) {
                                        iVar5 = -1;
                                      }
                                    }
                                    if (iVar5 == 0) {
                                      FUN_0040bcc0(param_3,param_4,piVar4,unaff_EBP,unaff_EBX);
                                    }
                                    else {
                                      uVar10 = 4;
                                      puVar7 = &DAT_0041649c;
                                      puVar8 = puVar1;
                                      do {
                                        if (*puVar8 != *puVar7) goto LAB_00406272;
                                        uVar10 = uVar10 - 4;
                                        puVar7 = puVar7 + 1;
                                        puVar8 = puVar8 + 1;
                                      } while (3 < uVar10);
                                      if (uVar10 == 0) {
LAB_004062cf:
                                        iVar5 = 0;
                                      }
                                      else {
LAB_00406272:
                                        iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                        if (iVar3 == 0) {
                                          if (uVar10 == 1) goto LAB_004062cf;
                                          iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                                  (uint)*(byte *)((int)puVar7 + 1);
                                          if (iVar3 == 0) {
                                            if (uVar10 == 2) goto LAB_004062cf;
                                            iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                                    (uint)*(byte *)((int)puVar7 + 2);
                                            if (iVar3 == 0) {
                                              if ((uVar10 == 3) ||
                                                 (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                          (uint)*(byte *)((int)puVar7 + 3),
                                                 iVar3 == 0)) goto LAB_004062cf;
                                            }
                                          }
                                        }
                                        iVar5 = 1;
                                        if (iVar3 < 1) {
                                          iVar5 = -1;
                                        }
                                      }
                                      if (iVar5 == 0) {
                                        FUN_0040bba0(param_3,param_4,(uint)piVar4,unaff_EBP,
                                                     unaff_EBX);
                                      }
                                      else {
                                        uVar10 = 4;
                                        puVar7 = &DAT_004164a4;
                                        puVar8 = puVar1;
                                        do {
                                          if (*puVar8 != *puVar7) goto LAB_0040631c;
                                          uVar10 = uVar10 - 4;
                                          puVar7 = puVar7 + 1;
                                          puVar8 = puVar8 + 1;
                                        } while (3 < uVar10);
                                        if (uVar10 == 0) {
LAB_00406379:
                                          iVar5 = 0;
                                        }
                                        else {
LAB_0040631c:
                                          iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                          if (iVar3 == 0) {
                                            if (uVar10 == 1) goto LAB_00406379;
                                            iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                                    (uint)*(byte *)((int)puVar7 + 1);
                                            if (iVar3 == 0) {
                                              if (uVar10 == 2) goto LAB_00406379;
                                              iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                                      (uint)*(byte *)((int)puVar7 + 2);
                                              if (iVar3 == 0) {
                                                if ((uVar10 == 3) ||
                                                   (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                            (uint)*(byte *)((int)puVar7 + 3),
                                                   iVar3 == 0)) goto LAB_00406379;
                                              }
                                            }
                                          }
                                          iVar5 = 1;
                                          if (iVar3 < 1) {
                                            iVar5 = -1;
                                          }
                                        }
                                        if (iVar5 == 0) {
                                          FUN_0040af00(param_3,param_4,(uint)piVar4,unaff_EBP,
                                                       unaff_EBX);
                                        }
                                        else {
                                          uVar10 = 4;
                                          puVar7 = &DAT_004164ac;
                                          puVar8 = puVar1;
                                          do {
                                            if (*puVar8 != *puVar7) goto LAB_004063bf;
                                            uVar10 = uVar10 - 4;
                                            puVar7 = puVar7 + 1;
                                            puVar8 = puVar8 + 1;
                                          } while (3 < uVar10);
                                          if (uVar10 == 0) {
LAB_0040641c:
                                            iVar5 = 0;
                                          }
                                          else {
LAB_004063bf:
                                            iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                                            if (iVar3 == 0) {
                                              if (uVar10 == 1) goto LAB_0040641c;
                                              iVar3 = (uint)*(byte *)((int)puVar8 + 1) -
                                                      (uint)*(byte *)((int)puVar7 + 1);
                                              if (iVar3 == 0) {
                                                if (uVar10 == 2) goto LAB_0040641c;
                                                iVar3 = (uint)*(byte *)((int)puVar8 + 2) -
                                                        (uint)*(byte *)((int)puVar7 + 2);
                                                if (iVar3 == 0) {
                                                  if ((uVar10 == 3) ||
                                                     (iVar3 = (uint)*(byte *)((int)puVar8 + 3) -
                                                              (uint)*(byte *)((int)puVar7 + 3),
                                                     iVar3 == 0)) goto LAB_0040641c;
                                                }
                                              }
                                            }
                                            iVar5 = 1;
                                            if (iVar3 < 1) {
                                              iVar5 = -1;
                                            }
                                          }
                                          if (iVar5 == 0) {
                                            FUN_0040bde0(param_3,param_4,piVar4,unaff_EBP,unaff_EBX)
                                            ;
                                          }
                                          else {
                                            FUN_0040bf40(param_3,param_4,piVar4,unaff_EBP);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          puVar7 = &DAT_00416414;
          puVar8 = puVar1;
          do {
            if (*puVar8 != *puVar7) goto LAB_0040573d;
            uVar6 = uVar6 - 4;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (3 < uVar6);
          if (uVar6 == 0) {
LAB_0040579a:
            iVar5 = 0;
          }
          else {
LAB_0040573d:
            iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
            if (iVar3 == 0) {
              if (uVar6 == 1) goto LAB_0040579a;
              iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
              if (iVar3 == 0) {
                if (uVar6 == 2) goto LAB_0040579a;
                iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                if (iVar3 == 0) {
                  if ((uVar6 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                     iVar3 == 0)) goto LAB_0040579a;
                }
              }
            }
            iVar5 = 1;
            if (iVar3 < 1) {
              iVar5 = -1;
            }
          }
          if (iVar5 == 0) {
            param_3[0x1a] = param_3[0x1a] | 4;
          }
          FUN_0040bf40(param_3,param_4,piVar4,unaff_EBP);
          uVar10 = 4;
          puVar7 = &DAT_00416424;
          puVar8 = puVar1;
          do {
            if (*puVar8 != *puVar7) goto LAB_004057db;
            uVar10 = uVar10 - 4;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (3 < uVar10);
          if (uVar10 == 0) {
LAB_00405838:
            iVar5 = 0;
          }
          else {
LAB_004057db:
            iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
            if (iVar3 == 0) {
              if (uVar10 == 1) goto LAB_00405838;
              iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
              if (iVar3 == 0) {
                if (uVar10 == 2) goto LAB_00405838;
                iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                if (iVar3 == 0) {
                  if ((uVar10 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                     iVar3 == 0)) goto LAB_00405838;
                }
              }
            }
            iVar5 = 1;
            if (iVar3 < 1) {
              iVar5 = -1;
            }
          }
          if (iVar5 == 0) {
            param_3[0x1a] = param_3[0x1a] | 2;
          }
          else {
            uVar10 = 4;
            puVar7 = &DAT_00416414;
            puVar8 = puVar1;
            do {
              if (*puVar8 != *puVar7) goto LAB_0040586b;
              uVar10 = uVar10 - 4;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (3 < uVar10);
            if (uVar10 == 0) {
LAB_004058c8:
              iVar5 = 0;
            }
            else {
LAB_0040586b:
              iVar3 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
              if (iVar3 == 0) {
                if (uVar10 == 1) goto LAB_004058c8;
                iVar3 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                if (iVar3 == 0) {
                  if (uVar10 == 2) goto LAB_004058c8;
                  iVar3 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                  if (iVar3 == 0) {
                    if ((uVar10 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                       iVar3 == 0)) goto LAB_004058c8;
                  }
                }
              }
              iVar5 = 1;
              if (iVar3 < 1) {
                iVar5 = -1;
              }
            }
            if (iVar5 == 0) {
              if ((param_3[0x1a] & 1U) == 0) {
                FUN_00408740(param_3,"Missing IHDR before IDAT");
                return;
              }
              if ((*(char *)((int)param_3 + 0x126) == '\x03') && ((param_3[0x1a] & 2U) == 0)) {
                FUN_00408740(param_3,"Missing PLTE before IDAT");
                return;
              }
              return;
            }
          }
        }
      }
      goto LAB_00405594;
    }
    FUN_00409e10(param_3,param_4,piVar4,unaff_EBP,unaff_EBX);
  } while( true );
}



void __thiscall
FUN_004064b0(void *this,int *param_1,undefined4 param_2,byte *param_3,byte *param_4,byte *param_5)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  void *extraout_ECX;
  byte *extraout_ECX_00;
  byte *this_00;
  void *this_01;
  void *this_02;
  uint *puVar6;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *this_03;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  uint *puVar7;
  int iVar8;
  
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_00409a60(param_1);
    this = extraout_ECX;
  }
  this_00 = (byte *)CONCAT31((int3)((uint)this >> 8),7);
  if ((*(char *)((int)param_1 + 0x123) != '\0') && ((*(byte *)(param_1 + 0x1c) & 2) != 0)) {
    switch(*(undefined *)(param_1 + 0x49)) {
    case 0:
      if ((*(byte *)(param_1 + 0x39) & 7) != 0) {
        if (param_3 == (byte *)0x0) goto LAB_0040651d;
        uVar3 = 0xff;
LAB_00406513:
        FUN_00409130((int)param_1,param_3,uVar3);
        this_00 = extraout_ECX_00;
LAB_0040651d:
        FUN_0040c120(this_00,param_1);
        return;
      }
      break;
    case 1:
      if (((*(byte *)(param_1 + 0x39) & 7) != 0) || ((uint)param_1[0x32] < 5)) {
        if (param_3 == (byte *)0x0) goto LAB_0040651d;
        uVar3 = 0xf;
        goto LAB_00406513;
      }
      break;
    case 2:
      if (((byte)param_1[0x39] & 7) != 4) {
        this_00 = param_3;
        if ((param_3 != (byte *)0x0) && ((param_1[0x39] & 4U) != 0)) {
          FUN_00409130((int)param_1,param_3,0xff);
          FUN_0040c120(this_01,param_1);
          return;
        }
        goto LAB_0040651d;
      }
      break;
    case 3:
      if (((*(byte *)(param_1 + 0x39) & 3) != 0) || ((uint)param_1[0x32] < 3)) {
        if (param_3 == (byte *)0x0) goto LAB_0040651d;
        uVar3 = 0x33;
        goto LAB_00406513;
      }
      break;
    case 4:
      if (((byte)param_1[0x39] & 3) != 2) {
        this_00 = param_3;
        if ((param_3 != (byte *)0x0) && ((param_1[0x39] & 2U) != 0)) {
          FUN_00409130((int)param_1,param_3,0xff);
          FUN_0040c120(this_02,param_1);
          return;
        }
        goto LAB_0040651d;
      }
      break;
    case 5:
      if (((*(byte *)(param_1 + 0x39) & 1) != 0) || ((uint)param_1[0x32] < 2)) {
        if (param_3 == (byte *)0x0) goto LAB_0040651d;
        uVar3 = 0x55;
        goto LAB_00406513;
      }
      break;
    case 6:
      if ((*(byte *)(param_1 + 0x39) & 1) == 0) goto LAB_0040651d;
    }
  }
  if ((*(byte *)(param_1 + 0x1a) & 4) == 0) {
    FUN_00408740(param_1,"Invalid attempt to read row data");
  }
  param_1[0x20] = param_1[0x3b];
  param_1[0x21] = param_1[0x37];
  do {
    if (param_1[0x1e] == 0) {
      if (param_1[0x43] == 0) {
        do {
          FUN_00409d50(param_1,0);
          FUN_004088c0(param_1);
          uVar3 = FUN_00409d20(param_1,(undefined *)&param_3);
          param_1[0x43] = uVar3;
          FUN_00407dd0((int)param_1);
          FUN_00408ca0(param_1,(uint *)(param_1 + 0x47),4);
          uVar3 = 4;
          puVar6 = &DAT_00416414;
          puVar7 = (uint *)(param_1 + 0x47);
          do {
            if (*puVar7 != *puVar6) goto LAB_004066dc;
            uVar3 = uVar3 - 4;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00406739:
            iVar4 = 0;
          }
          else {
LAB_004066dc:
            iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
            if (iVar8 == 0) {
              if (uVar3 == 1) goto LAB_00406739;
              iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
              if (iVar8 == 0) {
                if (uVar3 == 2) goto LAB_00406739;
                iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                if (iVar8 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                     iVar8 == 0)) goto LAB_00406739;
                }
              }
            }
            iVar4 = 1;
            if (iVar8 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 != 0) {
            FUN_00408740(param_1,"Not enough image data");
          }
        } while (param_1[0x43] == 0);
      }
      param_1[0x1e] = param_1[0x2c];
      *(uint **)(param_1 + 0x1d) = (uint *)param_1[0x2b];
      if ((uint)param_1[0x43] < (uint)param_1[0x2c]) {
        param_1[0x1e] = param_1[0x43];
      }
      FUN_00408ca0(param_1,(uint *)param_1[0x2b],param_1[0x1e]);
      param_1[0x43] = param_1[0x43] - param_1[0x1e];
    }
    iVar8 = FUN_00412d50((uint **)(param_1 + 0x1d),1);
    if (iVar8 == 1) {
      if (((param_1[0x21] != 0) || (param_1[0x1e] != 0)) || (param_1[0x43] != 0)) {
        FUN_00408740(param_1,"Extra compressed data");
      }
      param_1[0x1a] = param_1[0x1a] | 8;
      param_1[0x1b] = param_1[0x1b] | 0x20;
      break;
    }
    if (iVar8 != 0) {
      pcVar5 = (char *)param_1[0x23];
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Decompression error";
      }
      FUN_00408740(param_1,pcVar5);
    }
  } while (param_1[0x21] != 0);
  iVar8 = param_1[0x38];
  *(undefined *)(param_1 + 0x42) = *(undefined *)((int)param_1 + 0x126);
  *(undefined *)((int)param_1 + 0x109) = *(undefined *)((int)param_1 + 0x127);
  bVar2 = *(byte *)((int)param_1 + 0x129);
  piVar1 = param_1 + 0x40;
  *(byte *)((int)param_1 + 0x10b) = bVar2;
  *piVar1 = iVar8;
  *(undefined *)((int)param_1 + 0x10a) = *(undefined *)((int)param_1 + 0x12a);
  if (bVar2 < 8) {
    uVar3 = (uint)bVar2 * iVar8 + 7 >> 3;
  }
  else {
    uVar3 = (uint)(bVar2 >> 3) * iVar8;
  }
  param_1[0x41] = uVar3;
  bVar2 = *(byte *)param_1[0x3b];
  if (bVar2 != 0) {
    FUN_00409860((int)param_1,(int)piVar1,(byte *)param_1[0x3b] + 1,(byte *)(param_1[0x3a] + 1),
                 (byte *)(uint)bVar2);
  }
  FUN_00408af0(param_1,(void *)param_1[0x3a],(void *)param_1[0x3b],param_1[0x36] + 1);
  this_03 = extraout_ECX_01;
  if (((*(byte *)(param_1 + 0x8c) & 4) != 0) && (*(char *)(param_1 + 0x8e) == '@')) {
    FUN_0040f880(piVar1,param_1[0x3b] + 1);
    this_03 = extraout_ECX_02;
  }
  if ((param_1[0x1c] != 0) || ((param_1[0x1b] & 0x400000U) != 0)) {
    FUN_00410530(param_1);
    this_03 = extraout_ECX_03;
  }
  if ((*(char *)((int)param_1 + 0x123) == '\0') || ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    if (param_4 != (byte *)0x0) {
      FUN_00409130((int)param_1,param_4,0xff);
      this_03 = extraout_ECX_06;
    }
    if (param_5 == (byte *)0x0) goto LAB_0040696c;
    uVar3 = 0xff;
    param_4 = param_5;
  }
  else {
    if (*(byte *)(param_1 + 0x49) < 6) {
      FUN_00409430((int)param_1);
      this_03 = extraout_ECX_04;
    }
    if (param_5 != (byte *)0x0) {
      FUN_00409130((int)param_1,param_5,(&DAT_00416540)[*(byte *)(param_1 + 0x49)]);
      this_03 = extraout_ECX_05;
    }
    if (param_4 == (byte *)0x0) goto LAB_0040696c;
    uVar3 = *(uint *)(&DAT_00416524 + (uint)*(byte *)(param_1 + 0x49) * 4);
  }
  FUN_00409130((int)param_1,param_4,uVar3);
  this_03 = extraout_ECX_07;
LAB_0040696c:
  FUN_0040c120(this_03,param_1);
  if ((code *)param_1[0x66] != (code *)0x0) {
    (*(code *)param_1[0x66])(param_1,param_1[0x39]);
  }
  return;
}



void __cdecl FUN_004069c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  piVar4 = param_1;
  piVar5 = (int *)FUN_004109d0((int)param_1);
  iVar1 = param_1[0x33];
  param_1[0x34] = iVar1;
  iVar2 = iVar1;
  puVar3 = param_2;
  this = (void *)extraout_ECX;
  param_1 = piVar5;
  if (0 < (int)piVar5) {
    do {
      while (iVar2 != 0) {
        FUN_004064b0(this,piVar4,*puVar3,(byte *)0x0,unaff_EDI,unaff_ESI);
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 1;
        this = (void *)extraout_ECX_00;
      }
      param_1 = (int *)((int)param_1 + -1);
      iVar2 = iVar1;
      puVar3 = param_2;
    } while (param_1 != (int *)0x0);
  }
  return;
}



void __cdecl FUN_00406a20(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int unaff_EBP;
  uint unaff_ESI;
  int iVar8;
  size_t unaff_EDI;
  undefined local_4 [4];
  
  FUN_00409d50(param_1,0);
  puVar1 = (uint *)(param_1 + 0x47);
  do {
    FUN_004088c0(param_1);
    piVar2 = (int *)FUN_00409d20(param_1,local_4);
    FUN_00407dd0((int)param_1);
    FUN_00408ca0(param_1,puVar1,4);
    uVar3 = 4;
    puVar6 = &DAT_0041640c;
    puVar7 = puVar1;
    do {
      if (*puVar7 != *puVar6) goto LAB_00406a98;
      uVar3 = uVar3 - 4;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (3 < uVar3);
    if (uVar3 == 0) {
LAB_00406af5:
      iVar4 = 0;
    }
    else {
LAB_00406a98:
      iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
      if (iVar8 == 0) {
        if (uVar3 == 1) goto LAB_00406af5;
        iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
        if (iVar8 == 0) {
          if (uVar3 == 2) goto LAB_00406af5;
          iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
          if (iVar8 == 0) {
            if ((uVar3 == 3) ||
               (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
               iVar8 == 0)) goto LAB_00406af5;
          }
        }
      }
      iVar4 = 1;
      if (iVar8 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 == 0) {
      FUN_00409e10(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
    }
    else {
      uVar3 = 4;
      puVar6 = &DAT_0041641c;
      puVar7 = puVar1;
      do {
        if (*puVar7 != *puVar6) goto LAB_00406b38;
        uVar3 = uVar3 - 4;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (3 < uVar3);
      if (uVar3 == 0) {
LAB_00406b95:
        iVar4 = 0;
      }
      else {
LAB_00406b38:
        iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
        if (iVar8 == 0) {
          if (uVar3 == 1) goto LAB_00406b95;
          iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
          if (iVar8 == 0) {
            if (uVar3 == 2) goto LAB_00406b95;
            iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
            if (iVar8 == 0) {
              if ((uVar3 == 3) ||
                 (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                 iVar8 == 0)) goto LAB_00406b95;
            }
          }
        }
        iVar4 = 1;
        if (iVar8 < 1) {
          iVar4 = -1;
        }
      }
      if (iVar4 == 0) {
        FUN_0040a120(param_1);
      }
      else {
        uVar3 = FUN_004082a0((int)param_1,(int *)puVar1);
        puVar6 = &DAT_00416414;
        uVar5 = 4;
        puVar7 = puVar1;
        if (uVar3 == 0) {
          do {
            if (*puVar7 != *puVar6) goto LAB_00406d30;
            uVar5 = uVar5 - 4;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (3 < uVar5);
          if (uVar5 == 0) {
LAB_00406d8d:
            iVar4 = 0;
          }
          else {
LAB_00406d30:
            iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
            if (iVar8 == 0) {
              if (uVar5 == 1) goto LAB_00406d8d;
              iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
              if (iVar8 == 0) {
                if (uVar5 == 2) goto LAB_00406d8d;
                iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                if (iVar8 == 0) {
                  if ((uVar5 == 3) ||
                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                     iVar8 == 0)) goto LAB_00406d8d;
                }
              }
            }
            iVar4 = 1;
            if (iVar8 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 == 0) {
            if ((piVar2 != (int *)0x0) || ((*(byte *)(param_1 + 0x1a) & 8) != 0)) {
              FUN_00408740(param_1,"Too many IDAT\'s found");
            }
            FUN_00409d50(param_1,(uint)piVar2);
          }
          else {
            uVar3 = 4;
            puVar6 = &DAT_00416424;
            puVar7 = puVar1;
            do {
              if (*puVar7 != *puVar6) goto LAB_00406de8;
              uVar3 = uVar3 - 4;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            } while (3 < uVar3);
            if (uVar3 == 0) {
LAB_00406e45:
              iVar4 = 0;
            }
            else {
LAB_00406de8:
              iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
              if (iVar8 == 0) {
                if (uVar3 == 1) goto LAB_00406e45;
                iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
                if (iVar8 == 0) {
                  if (uVar3 == 2) goto LAB_00406e45;
                  iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                  if (iVar8 == 0) {
                    if ((uVar3 == 3) ||
                       (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                       iVar8 == 0)) goto LAB_00406e45;
                  }
                }
              }
              iVar4 = 1;
              if (iVar8 < 1) {
                iVar4 = -1;
              }
            }
            if (iVar4 == 0) {
              FUN_00409f90(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI,unaff_EBP);
            }
            else {
              uVar3 = 4;
              puVar6 = &DAT_0041642c;
              puVar7 = puVar1;
              do {
                if (*puVar7 != *puVar6) goto LAB_00406e88;
                uVar3 = uVar3 - 4;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              } while (3 < uVar3);
              if (uVar3 == 0) {
LAB_00406ee5:
                iVar4 = 0;
              }
              else {
LAB_00406e88:
                iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                if (iVar8 == 0) {
                  if (uVar3 == 1) goto LAB_00406ee5;
                  iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
                  if (iVar8 == 0) {
                    if (uVar3 == 2) goto LAB_00406ee5;
                    iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                    if (iVar8 == 0) {
                      if ((uVar3 == 3) ||
                         (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                  (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0)) goto LAB_00406ee5;
                    }
                  }
                }
                iVar4 = 1;
                if (iVar8 < 1) {
                  iVar4 = -1;
                }
              }
              if (iVar4 == 0) {
                FUN_0040b150(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
              }
              else {
                uVar3 = 4;
                puVar6 = &DAT_00416434;
                puVar7 = puVar1;
                do {
                  if (*puVar7 != *puVar6) goto LAB_00406f28;
                  uVar3 = uVar3 - 4;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                } while (3 < uVar3);
                if (uVar3 == 0) {
LAB_00406f85:
                  iVar4 = 0;
                }
                else {
LAB_00406f28:
                  iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                  if (iVar8 == 0) {
                    if (uVar3 == 1) goto LAB_00406f85;
                    iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
                    if (iVar8 == 0) {
                      if (uVar3 == 2) goto LAB_00406f85;
                      iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                      if (iVar8 == 0) {
                        if ((uVar3 == 3) ||
                           (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                    (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                        goto LAB_00406f85;
                      }
                    }
                  }
                  iVar4 = 1;
                  if (iVar8 < 1) {
                    iVar4 = -1;
                  }
                }
                if (iVar4 == 0) {
                  FUN_0040a450(param_1,param_2,(uint)piVar2);
                }
                else {
                  uVar3 = 4;
                  puVar6 = &DAT_0041643c;
                  puVar7 = puVar1;
                  do {
                    if (*puVar7 != *puVar6) goto LAB_00406fc8;
                    uVar3 = uVar3 - 4;
                    puVar6 = puVar6 + 1;
                    puVar7 = puVar7 + 1;
                  } while (3 < uVar3);
                  if (uVar3 == 0) {
LAB_00407025:
                    iVar4 = 0;
                  }
                  else {
LAB_00406fc8:
                    iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                    if (iVar8 == 0) {
                      if (uVar3 == 1) goto LAB_00407025;
                      iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
                      if (iVar8 == 0) {
                        if (uVar3 == 2) goto LAB_00407025;
                        iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                        if (iVar8 == 0) {
                          if ((uVar3 == 3) ||
                             (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                      (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                          goto LAB_00407025;
                        }
                      }
                    }
                    iVar4 = 1;
                    if (iVar8 < 1) {
                      iVar4 = -1;
                    }
                  }
                  if (iVar4 == 0) {
                    FUN_0040a170(param_1,param_2,(uint)piVar2);
                  }
                  else {
                    uVar3 = 4;
                    puVar6 = &DAT_00416444;
                    puVar7 = puVar1;
                    do {
                      if (*puVar7 != *puVar6) goto LAB_00407068;
                      uVar3 = uVar3 - 4;
                      puVar6 = puVar6 + 1;
                      puVar7 = puVar7 + 1;
                    } while (3 < uVar3);
                    if (uVar3 == 0) {
LAB_004070c5:
                      iVar4 = 0;
                    }
                    else {
LAB_00407068:
                      iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                      if (iVar8 == 0) {
                        if (uVar3 == 1) goto LAB_004070c5;
                        iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
                        if (iVar8 == 0) {
                          if (uVar3 == 2) goto LAB_004070c5;
                          iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                  (uint)*(byte *)((int)puVar6 + 2);
                          if (iVar8 == 0) {
                            if ((uVar3 == 3) ||
                               (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                        (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                            goto LAB_004070c5;
                          }
                        }
                      }
                      iVar4 = 1;
                      if (iVar8 < 1) {
                        iVar4 = -1;
                      }
                    }
                    if (iVar4 == 0) {
                      FUN_0040b390(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                    }
                    else {
                      uVar3 = 4;
                      puVar6 = &DAT_0041645c;
                      puVar7 = puVar1;
                      do {
                        if (*puVar7 != *puVar6) goto LAB_00407108;
                        uVar3 = uVar3 - 4;
                        puVar6 = puVar6 + 1;
                        puVar7 = puVar7 + 1;
                      } while (3 < uVar3);
                      if (uVar3 == 0) {
LAB_00407165:
                        iVar4 = 0;
                      }
                      else {
LAB_00407108:
                        iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                        if (iVar8 == 0) {
                          if (uVar3 == 1) goto LAB_00407165;
                          iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                  (uint)*(byte *)((int)puVar6 + 1);
                          if (iVar8 == 0) {
                            if (uVar3 == 2) goto LAB_00407165;
                            iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                    (uint)*(byte *)((int)puVar6 + 2);
                            if (iVar8 == 0) {
                              if ((uVar3 == 3) ||
                                 (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                          (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                              goto LAB_00407165;
                            }
                          }
                        }
                        iVar4 = 1;
                        if (iVar8 < 1) {
                          iVar4 = -1;
                        }
                      }
                      if (iVar4 == 0) {
                        FUN_0040b650(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                      }
                      else {
                        uVar3 = 4;
                        puVar6 = &DAT_00416464;
                        puVar7 = puVar1;
                        do {
                          if (*puVar7 != *puVar6) goto LAB_004071a8;
                          uVar3 = uVar3 - 4;
                          puVar6 = puVar6 + 1;
                          puVar7 = puVar7 + 1;
                        } while (3 < uVar3);
                        if (uVar3 == 0) {
LAB_00407205:
                          iVar4 = 0;
                        }
                        else {
LAB_004071a8:
                          iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                          if (iVar8 == 0) {
                            if (uVar3 == 1) goto LAB_00407205;
                            iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                    (uint)*(byte *)((int)puVar6 + 1);
                            if (iVar8 == 0) {
                              if (uVar3 == 2) goto LAB_00407205;
                              iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                      (uint)*(byte *)((int)puVar6 + 2);
                              if (iVar8 == 0) {
                                if ((uVar3 == 3) ||
                                   (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                            (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                                goto LAB_00407205;
                              }
                            }
                          }
                          iVar4 = 1;
                          if (iVar8 < 1) {
                            iVar4 = -1;
                          }
                        }
                        if (iVar4 == 0) {
                          FUN_0040b780(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                        }
                        else {
                          uVar3 = 4;
                          puVar6 = &DAT_0041646c;
                          puVar7 = puVar1;
                          do {
                            if (*puVar7 != *puVar6) goto LAB_00407248;
                            uVar3 = uVar3 - 4;
                            puVar6 = puVar6 + 1;
                            puVar7 = puVar7 + 1;
                          } while (3 < uVar3);
                          if (uVar3 == 0) {
LAB_004072a5:
                            iVar4 = 0;
                          }
                          else {
LAB_00407248:
                            iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                            if (iVar8 == 0) {
                              if (uVar3 == 1) goto LAB_004072a5;
                              iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                      (uint)*(byte *)((int)puVar6 + 1);
                              if (iVar8 == 0) {
                                if (uVar3 == 2) goto LAB_004072a5;
                                iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                        (uint)*(byte *)((int)puVar6 + 2);
                                if (iVar8 == 0) {
                                  if ((uVar3 == 3) ||
                                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                              (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                                  goto LAB_004072a5;
                                }
                              }
                            }
                            iVar4 = 1;
                            if (iVar8 < 1) {
                              iVar4 = -1;
                            }
                          }
                          if (iVar4 == 0) {
                            FUN_0040b9e0(param_1,param_2,piVar2);
                          }
                          else {
                            uVar3 = 4;
                            puVar6 = &DAT_00416474;
                            puVar7 = puVar1;
                            do {
                              if (*puVar7 != *puVar6) goto LAB_004072e8;
                              uVar3 = uVar3 - 4;
                              puVar6 = puVar6 + 1;
                              puVar7 = puVar7 + 1;
                            } while (3 < uVar3);
                            if (uVar3 == 0) {
LAB_00407345:
                              iVar4 = 0;
                            }
                            else {
LAB_004072e8:
                              iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                              if (iVar8 == 0) {
                                if (uVar3 == 1) goto LAB_00407345;
                                iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                        (uint)*(byte *)((int)puVar6 + 1);
                                if (iVar8 == 0) {
                                  if (uVar3 == 2) goto LAB_00407345;
                                  iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                          (uint)*(byte *)((int)puVar6 + 2);
                                  if (iVar8 == 0) {
                                    if ((uVar3 == 3) ||
                                       (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                                    goto LAB_00407345;
                                  }
                                }
                              }
                              iVar4 = 1;
                              if (iVar8 < 1) {
                                iVar4 = -1;
                              }
                            }
                            if (iVar4 == 0) {
                              FUN_0040b530(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                            }
                            else {
                              uVar3 = 4;
                              puVar6 = &DAT_0041647c;
                              puVar7 = puVar1;
                              do {
                                if (*puVar7 != *puVar6) goto LAB_00407388;
                                uVar3 = uVar3 - 4;
                                puVar6 = puVar6 + 1;
                                puVar7 = puVar7 + 1;
                              } while (3 < uVar3);
                              if (uVar3 == 0) {
LAB_004073e5:
                                iVar4 = 0;
                              }
                              else {
LAB_00407388:
                                iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                if (iVar8 == 0) {
                                  if (uVar3 == 1) goto LAB_004073e5;
                                  iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                          (uint)*(byte *)((int)puVar6 + 1);
                                  if (iVar8 == 0) {
                                    if (uVar3 == 2) goto LAB_004073e5;
                                    iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                            (uint)*(byte *)((int)puVar6 + 2);
                                    if (iVar8 == 0) {
                                      if ((uVar3 == 3) ||
                                         (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                  (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                                      goto LAB_004073e5;
                                    }
                                  }
                                }
                                iVar4 = 1;
                                if (iVar8 < 1) {
                                  iVar4 = -1;
                                }
                              }
                              if (iVar4 == 0) {
                                FUN_0040a2e0(param_1,param_2,(uint)piVar2);
                              }
                              else {
                                uVar3 = 4;
                                puVar6 = &DAT_0041648c;
                                puVar7 = puVar1;
                                do {
                                  if (*puVar7 != *puVar6) goto LAB_00407428;
                                  uVar3 = uVar3 - 4;
                                  puVar6 = puVar6 + 1;
                                  puVar7 = puVar7 + 1;
                                } while (3 < uVar3);
                                if (uVar3 == 0) {
LAB_00407485:
                                  iVar4 = 0;
                                }
                                else {
LAB_00407428:
                                  iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                  if (iVar8 == 0) {
                                    if (uVar3 == 1) goto LAB_00407485;
                                    iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                            (uint)*(byte *)((int)puVar6 + 1);
                                    if (iVar8 == 0) {
                                      if (uVar3 == 2) goto LAB_00407485;
                                      iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                              (uint)*(byte *)((int)puVar6 + 2);
                                      if (iVar8 == 0) {
                                        if ((uVar3 == 3) ||
                                           (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                    (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                                        goto LAB_00407485;
                                      }
                                    }
                                  }
                                  iVar4 = 1;
                                  if (iVar8 < 1) {
                                    iVar4 = -1;
                                  }
                                }
                                if (iVar4 == 0) {
                                  FUN_0040a940(param_1,param_2,(uint)piVar2);
                                }
                                else {
                                  uVar3 = 4;
                                  puVar6 = &DAT_0041644c;
                                  puVar7 = puVar1;
                                  do {
                                    if (*puVar7 != *puVar6) goto LAB_004074c8;
                                    uVar3 = uVar3 - 4;
                                    puVar6 = puVar6 + 1;
                                    puVar7 = puVar7 + 1;
                                  } while (3 < uVar3);
                                  if (uVar3 == 0) {
LAB_00407525:
                                    iVar4 = 0;
                                  }
                                  else {
LAB_004074c8:
                                    iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                    if (iVar8 == 0) {
                                      if (uVar3 == 1) goto LAB_00407525;
                                      iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                              (uint)*(byte *)((int)puVar6 + 1);
                                      if (iVar8 == 0) {
                                        if (uVar3 == 2) goto LAB_00407525;
                                        iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                                (uint)*(byte *)((int)puVar6 + 2);
                                        if (iVar8 == 0) {
                                          if ((uVar3 == 3) ||
                                             (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                      (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0))
                                          goto LAB_00407525;
                                        }
                                      }
                                    }
                                    iVar4 = 1;
                                    if (iVar8 < 1) {
                                      iVar4 = -1;
                                    }
                                  }
                                  if (iVar4 == 0) {
                                    FUN_0040ab30(param_1,param_2,(uint)piVar2);
                                  }
                                  else {
                                    uVar3 = 4;
                                    puVar6 = &DAT_00416484;
                                    puVar7 = puVar1;
                                    do {
                                      if (*puVar7 != *puVar6) goto LAB_00407568;
                                      uVar3 = uVar3 - 4;
                                      puVar6 = puVar6 + 1;
                                      puVar7 = puVar7 + 1;
                                    } while (3 < uVar3);
                                    if (uVar3 == 0) {
LAB_004075c5:
                                      iVar4 = 0;
                                    }
                                    else {
LAB_00407568:
                                      iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                      if (iVar8 == 0) {
                                        if (uVar3 == 1) goto LAB_004075c5;
                                        iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                                (uint)*(byte *)((int)puVar6 + 1);
                                        if (iVar8 == 0) {
                                          if (uVar3 == 2) goto LAB_004075c5;
                                          iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                                  (uint)*(byte *)((int)puVar6 + 2);
                                          if (iVar8 == 0) {
                                            if ((uVar3 == 3) ||
                                               (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                        (uint)*(byte *)((int)puVar6 + 3), iVar8 == 0
                                               )) goto LAB_004075c5;
                                          }
                                        }
                                      }
                                      iVar4 = 1;
                                      if (iVar8 < 1) {
                                        iVar4 = -1;
                                      }
                                    }
                                    if (iVar4 == 0) {
                                      FUN_0040ace0(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
                                    }
                                    else {
                                      uVar3 = 4;
                                      puVar6 = &DAT_00416494;
                                      puVar7 = puVar1;
                                      do {
                                        if (*puVar7 != *puVar6) goto LAB_00407608;
                                        uVar3 = uVar3 - 4;
                                        puVar6 = puVar6 + 1;
                                        puVar7 = puVar7 + 1;
                                      } while (3 < uVar3);
                                      if (uVar3 == 0) {
LAB_00407665:
                                        iVar4 = 0;
                                      }
                                      else {
LAB_00407608:
                                        iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                        if (iVar8 == 0) {
                                          if (uVar3 == 1) goto LAB_00407665;
                                          iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                                  (uint)*(byte *)((int)puVar6 + 1);
                                          if (iVar8 == 0) {
                                            if (uVar3 == 2) goto LAB_00407665;
                                            iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                                    (uint)*(byte *)((int)puVar6 + 2);
                                            if (iVar8 == 0) {
                                              if ((uVar3 == 3) ||
                                                 (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                          (uint)*(byte *)((int)puVar6 + 3),
                                                 iVar8 == 0)) goto LAB_00407665;
                                            }
                                          }
                                        }
                                        iVar4 = 1;
                                        if (iVar8 < 1) {
                                          iVar4 = -1;
                                        }
                                      }
                                      if (iVar4 == 0) {
                                        FUN_0040bcc0(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
                                      }
                                      else {
                                        uVar3 = 4;
                                        puVar6 = &DAT_0041649c;
                                        puVar7 = puVar1;
                                        do {
                                          if (*puVar7 != *puVar6) goto LAB_004076a8;
                                          uVar3 = uVar3 - 4;
                                          puVar6 = puVar6 + 1;
                                          puVar7 = puVar7 + 1;
                                        } while (3 < uVar3);
                                        if (uVar3 == 0) {
LAB_00407705:
                                          iVar4 = 0;
                                        }
                                        else {
LAB_004076a8:
                                          iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                          if (iVar8 == 0) {
                                            if (uVar3 == 1) goto LAB_00407705;
                                            iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                                    (uint)*(byte *)((int)puVar6 + 1);
                                            if (iVar8 == 0) {
                                              if (uVar3 == 2) goto LAB_00407705;
                                              iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                                      (uint)*(byte *)((int)puVar6 + 2);
                                              if (iVar8 == 0) {
                                                if ((uVar3 == 3) ||
                                                   (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                            (uint)*(byte *)((int)puVar6 + 3),
                                                   iVar8 == 0)) goto LAB_00407705;
                                              }
                                            }
                                          }
                                          iVar4 = 1;
                                          if (iVar8 < 1) {
                                            iVar4 = -1;
                                          }
                                        }
                                        if (iVar4 == 0) {
                                          FUN_0040bba0(param_1,param_2,(uint)piVar2,unaff_EDI,
                                                       unaff_ESI);
                                        }
                                        else {
                                          uVar3 = 4;
                                          puVar6 = &DAT_004164a4;
                                          puVar7 = puVar1;
                                          do {
                                            if (*puVar7 != *puVar6) goto LAB_00407748;
                                            uVar3 = uVar3 - 4;
                                            puVar6 = puVar6 + 1;
                                            puVar7 = puVar7 + 1;
                                          } while (3 < uVar3);
                                          if (uVar3 == 0) {
LAB_004077a5:
                                            iVar4 = 0;
                                          }
                                          else {
LAB_00407748:
                                            iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                            if (iVar8 == 0) {
                                              if (uVar3 == 1) goto LAB_004077a5;
                                              iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                                      (uint)*(byte *)((int)puVar6 + 1);
                                              if (iVar8 == 0) {
                                                if (uVar3 == 2) goto LAB_004077a5;
                                                iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                                        (uint)*(byte *)((int)puVar6 + 2);
                                                if (iVar8 == 0) {
                                                  if ((uVar3 == 3) ||
                                                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                              (uint)*(byte *)((int)puVar6 + 3),
                                                     iVar8 == 0)) goto LAB_004077a5;
                                                }
                                              }
                                            }
                                            iVar4 = 1;
                                            if (iVar8 < 1) {
                                              iVar4 = -1;
                                            }
                                          }
                                          if (iVar4 == 0) {
                                            FUN_0040af00(param_1,param_2,(uint)piVar2,unaff_EDI,
                                                         unaff_ESI);
                                          }
                                          else {
                                            uVar3 = 4;
                                            puVar6 = &DAT_004164ac;
                                            puVar7 = puVar1;
                                            do {
                                              if (*puVar7 != *puVar6) goto LAB_004077ec;
                                              uVar3 = uVar3 - 4;
                                              puVar6 = puVar6 + 1;
                                              puVar7 = puVar7 + 1;
                                            } while (3 < uVar3);
                                            if (uVar3 == 0) {
LAB_00407849:
                                              iVar4 = 0;
                                            }
                                            else {
LAB_004077ec:
                                              iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
                                              if (iVar8 == 0) {
                                                if (uVar3 == 1) goto LAB_00407849;
                                                iVar8 = (uint)*(byte *)((int)puVar7 + 1) -
                                                        (uint)*(byte *)((int)puVar6 + 1);
                                                if (iVar8 == 0) {
                                                  if (uVar3 == 2) goto LAB_00407849;
                                                  iVar8 = (uint)*(byte *)((int)puVar7 + 2) -
                                                          (uint)*(byte *)((int)puVar6 + 2);
                                                  if (iVar8 == 0) {
                                                    if ((uVar3 == 3) ||
                                                       (iVar8 = (uint)*(byte *)((int)puVar7 + 3) -
                                                                (uint)*(byte *)((int)puVar6 + 3),
                                                       iVar8 == 0)) goto LAB_00407849;
                                                  }
                                                }
                                              }
                                              iVar4 = 1;
                                              if (iVar8 < 1) {
                                                iVar4 = -1;
                                              }
                                            }
                                            if (iVar4 == 0) {
                                              FUN_0040bde0(param_1,param_2,piVar2,unaff_EDI,
                                                           unaff_ESI);
                                            }
                                            else {
                                              FUN_0040bf40(param_1,param_2,piVar2,unaff_EDI);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          do {
            if (*puVar7 != *puVar6) goto LAB_00406be8;
            uVar5 = uVar5 - 4;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (3 < uVar5);
          if (uVar5 == 0) {
LAB_00406c45:
            iVar4 = 0;
          }
          else {
LAB_00406be8:
            iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
            if (iVar8 == 0) {
              if (uVar5 == 1) goto LAB_00406c45;
              iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
              if (iVar8 == 0) {
                if (uVar5 == 2) goto LAB_00406c45;
                iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                if (iVar8 == 0) {
                  if ((uVar5 == 3) ||
                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                     iVar8 == 0)) goto LAB_00406c45;
                }
              }
            }
            iVar4 = 1;
            if (iVar8 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 == 0) {
            if ((piVar2 != (int *)0x0) || ((*(byte *)(param_1 + 0x1a) & 8) != 0)) {
              FUN_00408740(param_1,"Too many IDAT\'s found");
            }
          }
          else {
            param_1[0x1a] = param_1[0x1a] | 8;
          }
          FUN_0040bf40(param_1,param_2,piVar2,unaff_EDI);
          uVar3 = 4;
          puVar6 = &DAT_00416424;
          puVar7 = puVar1;
          do {
            if (*puVar7 != *puVar6) goto LAB_00406ca8;
            uVar3 = uVar3 - 4;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00406d05:
            iVar4 = 0;
          }
          else {
LAB_00406ca8:
            iVar8 = (uint)*(byte *)puVar7 - (uint)*(byte *)puVar6;
            if (iVar8 == 0) {
              if (uVar3 == 1) goto LAB_00406d05;
              iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
              if (iVar8 == 0) {
                if (uVar3 == 2) goto LAB_00406d05;
                iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                if (iVar8 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                     iVar8 == 0)) goto LAB_00406d05;
                }
              }
            }
            iVar4 = 1;
            if (iVar8 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 == 0) {
            param_1[0x1a] = param_1[0x1a] | 2;
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 0x1a) & 0x10) != 0) {
      return;
    }
  } while( true );
}



void __cdecl FUN_00407890(undefined4 *param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_40 [16];
  
  if (param_2 != (void *)0x0) {
    FUN_00408230((int)param_1,param_2);
  }
  if (param_3 != (void *)0x0) {
    FUN_00408230((int)param_1,param_3);
  }
  FUN_00408bf0((int)param_1,(void *)param_1[0x2b]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x94]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x3a]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x7b]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x7c]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x59]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x5a]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x5b]);
  if ((param_1[0x85] & 0x1000) != 0) {
    thunk_FUN_00408bf0((int)param_1,(void *)param_1[0x45]);
  }
  param_1[0x85] = param_1[0x85] & 0xffffefff;
  if ((param_1[0x85] & 0x2000) != 0) {
    FUN_00408bf0((int)param_1,(void *)param_1[0x62]);
  }
  param_1[0x85] = param_1[0x85] & 0xffffdfff;
  if ((param_1[0x85] & 8) != 0) {
    FUN_00408bf0((int)param_1,(void *)param_1[0x7d]);
  }
  param_1[0x85] = param_1[0x85] & 0xfffffff7;
  if (param_1[0x5c] != 0) {
    iVar5 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_00408bf0((int)param_1,*(void **)(param_1[0x5c] + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_00408bf0((int)param_1,(void *)param_1[0x5c]);
  }
  if (param_1[0x5d] != 0) {
    iVar5 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_00408bf0((int)param_1,*(void **)(param_1[0x5d] + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_00408bf0((int)param_1,(void *)param_1[0x5d]);
  }
  if (param_1[0x5e] != 0) {
    iVar5 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_00408bf0((int)param_1,*(void **)(param_1[0x5e] + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_00408bf0((int)param_1,(void *)param_1[0x5e]);
  }
  FUN_00408bf0((int)param_1,(void *)param_1[0x84]);
  FUN_00414340((int)(param_1 + 0x1d));
  FUN_00408bf0((int)param_1,(void *)param_1[0x6c]);
  FUN_00408bf0((int)param_1,(void *)param_1[0x79]);
  uVar1 = param_1[0x93];
  uVar2 = param_1[0x12];
  iVar5 = 0x10;
  puVar6 = param_1;
  puVar8 = local_40;
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar3 = param_1[0x10];
  uVar4 = param_1[0x11];
  memset(param_1,0,0x26c);
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0x93] = uVar1;
  iVar5 = 0x10;
  puVar6 = local_40;
  puVar8 = param_1;
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x12] = uVar2;
  return;
}



void __cdecl FUN_00407b20(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004052b0(param_1,param_2,param_3,param_4,0,(undefined *)0x0,(undefined *)0x0);
  return;
}



void __cdecl FUN_00407b50(undefined4 *param_1,void **param_2,void **param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_4;
  
  puVar3 = (undefined4 *)0x0;
  pvVar4 = (void *)0x0;
  local_4 = (void *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
  }
  if (param_2 != (void **)0x0) {
    pvVar4 = *param_2;
  }
  if (param_3 != (void **)0x0) {
    local_4 = *param_3;
  }
  puVar1 = (undefined *)puVar3[0x93];
  uVar2 = puVar3[0x91];
  FUN_00407890(puVar3,pvVar4,local_4);
  if (pvVar4 != (void *)0x0) {
    FUN_00407e80((int)puVar3,(int)pvVar4,0x4000,-1);
    FUN_00408a30(pvVar4,puVar1,uVar2);
    *param_2 = (void *)0x0;
  }
  if (local_4 != (void *)0x0) {
    FUN_00407e80((int)puVar3,(int)local_4,0x4000,-1);
    FUN_00408a30(local_4,puVar1,uVar2);
    *param_3 = (void *)0x0;
  }
  FUN_00408a30(puVar3,puVar1,uVar2);
  *param_1 = 0;
  return;
}



void __cdecl FUN_00407c10(int *param_1,int param_2)

{
  if (8 < param_2) {
    FUN_00408740(param_1,"Too many bytes for PNG signature.");
  }
  *(byte *)(param_1 + 0x4b) = (param_2 < 0) - 1U & (byte)param_2;
  return;
}



// WARNING: Type propagation algorithm not settling

void __cdecl FUN_00407c40(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined local_c;
  undefined local_b;
  undefined local_a;
  undefined local_9;
  undefined local_8;
  undefined local_7;
  undefined local_6;
  undefined local_5;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_c;
  local_7 = 10;
  local_5 = 10;
  local_c = 0x89;
  local_b = 0x50;
  local_a = 0x4e;
  local_9 = 0x47;
  local_8 = 0xd;
  local_6 = 0x1a;
  if (param_3 < 9) {
    if (param_3 == 0) goto LAB_00407d45;
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
LAB_00407d45:
    FUN_00412237();
    return;
  }
  if (8 < param_2 + param_3) {
    param_3 = 8 - param_2;
  }
  piVar1 = &local_c + param_2;
  piVar2 = (int *)(param_2 + param_1);
  while (3 < param_3) {
    if (*piVar2 != *piVar1) goto LAB_00407cd0;
    param_3 = param_3 - 4;
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + 1;
  }
  if (param_3 != 0) {
LAB_00407cd0:
    iVar3 = (uint)*(byte *)piVar2 - (uint)*(byte *)piVar1;
    if (iVar3 == 0) {
      if (param_3 == 1) goto LAB_00407d58;
      iVar3 = (uint)*(byte *)((int)piVar2 + 1) - (uint)*(byte *)((int)piVar1 + 1);
      if (iVar3 == 0) {
        if (param_3 == 2) goto LAB_00407d58;
        iVar3 = (uint)*(byte *)((int)piVar2 + 2) - (uint)*(byte *)((int)piVar1 + 2);
        if (iVar3 == 0) {
          if ((param_3 == 3) ||
             (iVar3 = (uint)*(byte *)((int)piVar2 + 3) - (uint)*(byte *)((int)piVar1 + 3),
             iVar3 == 0)) goto LAB_00407d58;
        }
      }
    }
    if (iVar3 < 1) {
      FUN_00412237();
      return;
    }
  }
LAB_00407d58:
  FUN_00412237();
  return;
}



void __cdecl thunk_FUN_00408bf0(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x24c) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00408c12. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(param_1 + 0x24c))();
      return;
    }
    if ((param_1 != 0) && (param_2 != (void *)0x0)) {
      free(param_2);
    }
    return;
  }
  return;
}



void __cdecl FUN_00407dd0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00414630(0,(uint *)0x0,0);
  *(uint *)(param_1 + 0x110) = uVar1;
  return;
}



void __cdecl FUN_00407df0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x11c) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      return;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x6c) & 0x300) == 0x300) {
      return;
    }
  }
  uVar1 = FUN_00414630(*(uint *)(param_1 + 0x110),param_2,param_3);
  *(uint *)(param_1 + 0x110) = uVar1;
  return;
}



void __cdecl FUN_00407e40(void **param_1,uint param_2)

{
  void *_Dst;
  
  _Dst = *param_1;
  if (param_2 < 0x120) {
    FUN_00408b80(_Dst);
    _Dst = (void *)FUN_00408b60(2);
    *param_1 = _Dst;
  }
  memset(_Dst,0,0x120);
  return;
}



void __cdecl FUN_00407e80(int param_1,int param_2,uint param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  int param_4_00;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x4000) != 0) {
      if (param_4 == -1) {
        param_4_00 = 0;
        if (0 < *(int *)(param_2 + 0x30)) {
          do {
            FUN_00407e80(param_1,param_2,0x4000,param_4_00);
            param_4_00 = param_4_00 + 1;
          } while (param_4_00 < *(int *)(param_2 + 0x30));
        }
        FUN_00408bf0(param_1,*(void **)(param_2 + 0x38));
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
      }
      else {
        if (*(int *)(param_2 + 0x38) != 0) {
          pvVar1 = *(void **)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10);
          if (pvVar1 != (void *)0x0) {
            FUN_00408bf0(param_1,pvVar1);
            *(undefined4 *)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10) = 0;
          }
        }
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x2000) != 0) {
      FUN_00408bf0(param_1,*(void **)(param_2 + 0x4c));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
      *(undefined4 *)(param_2 + 0x4c) = 0;
    }
    uVar2 = *(uint *)(param_2 + 0xb8) & param_3;
    if ((uVar2 & 0x100) != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
    }
    if ((char)uVar2 < '\0') {
      FUN_00408bf0(param_1,*(void **)(param_2 + 0xa0));
      FUN_00408bf0(param_1,*(void **)(param_2 + 0xac));
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0xac) = 0;
      if (*(int *)(param_2 + 0xb0) != 0) {
        param_4_00 = 0;
        if (*(char *)(param_2 + 0xb5) != '\0') {
          do {
            FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xb0) + param_4_00 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xb0) + param_4_00 * 4) = 0;
            param_4_00 = param_4_00 + 1;
          } while (param_4_00 < (int)(uint)*(byte *)(param_2 + 0xb5));
        }
        FUN_00408bf0(param_1,*(void **)(param_2 + 0xb0));
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x10) != 0) {
      FUN_00408bf0(param_1,*(void **)(param_2 + 0xc4));
      FUN_00408bf0(param_1,*(void **)(param_2 + 200));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
      *(undefined4 *)(param_2 + 0xc4) = 0;
      *(undefined4 *)(param_2 + 200) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x20) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xd8) != 0) {
          param_4_00 = 0;
          if (0 < *(int *)(param_2 + 0xd8)) {
            do {
              FUN_00407e80(param_1,param_2,0x20,param_4_00);
              param_4_00 = param_4_00 + 1;
            } while (param_4_00 < *(int *)(param_2 + 0xd8));
          }
          FUN_00408bf0(param_1,*(void **)(param_2 + 0xd4));
          *(undefined4 *)(param_2 + 0xd4) = 0;
          *(undefined4 *)(param_2 + 0xd8) = 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      }
      else {
        if (*(int *)(param_2 + 0xd4) != 0) {
          param_4_00 = param_4 * 0x10;
          FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xd4) + param_4_00));
          FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xd4) + 8 + param_4_00));
          *(undefined4 *)(*(int *)(param_2 + 0xd4) + param_4_00) = 0;
          *(undefined4 *)(*(int *)(param_2 + 0xd4) + 8 + param_4_00) = 0;
        }
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x200) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xc0) != 0) {
          param_4_00 = 0;
          if (0 < *(int *)(param_2 + 0xc0)) {
            do {
              FUN_00407e80(param_1,param_2,0x200,param_4_00);
              param_4_00 = param_4_00 + 1;
            } while (param_4_00 < *(int *)(param_2 + 0xc0));
          }
          FUN_00408bf0(param_1,*(void **)(param_2 + 0xbc));
          *(undefined4 *)(param_2 + 0xbc) = 0;
          *(undefined4 *)(param_2 + 0xc0) = 0;
        }
      }
      else {
        if (*(int *)(param_2 + 0xbc) != 0) {
          FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14));
          *(undefined4 *)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14) = 0;
        }
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 8) != 0) {
      FUN_00408bf0(param_1,*(void **)(param_2 + 0x7c));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
      *(undefined4 *)(param_2 + 0x7c) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x1000) != 0) {
      thunk_FUN_00408bf0(param_1,*(void **)(param_2 + 0x10));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x40) != 0) {
      if (*(int *)(param_2 + 0xf8) != 0) {
        param_4_00 = 0;
        if (0 < *(int *)(param_2 + 4)) {
          do {
            FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xf8) + param_4_00 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xf8) + param_4_00 * 4) = 0;
            param_4_00 = param_4_00 + 1;
          } while (param_4_00 < *(int *)(param_2 + 4));
        }
        FUN_00408bf0(param_1,*(void **)(param_2 + 0xf8));
        *(undefined4 *)(param_2 + 0xf8) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
    }
    if (param_4 != -1) {
      param_3 = param_3 & 0xffffbddf;
    }
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & ~param_3;
  }
  return;
}



void __cdecl FUN_00408230(int param_1,void *param_2)

{
  FUN_00407e80(param_1,(int)param_2,0x7fff,-1);
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_00408bf0(param_1,*(void **)(param_1 + 0x224));
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  FUN_00407e40(&param_2,0x120);
  return;
}



void __cdecl FUN_00408290(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



uint __cdecl FUN_004082a0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (((param_1 == 0) && (param_2 == (int *)0x0)) || (*(int *)(param_1 + 0x220) < 1)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x220);
  piVar7 = (int *)(iVar5 * 5 + -5 + *(int *)(param_1 + 0x224));
  do {
    if (iVar5 == 0) {
      return 0;
    }
    uVar1 = 4;
    piVar3 = piVar7;
    piVar4 = param_2;
    do {
      if (*piVar4 != *piVar3) goto LAB_00408308;
      uVar1 = uVar1 - 4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (3 < uVar1);
    if (uVar1 == 0) {
LAB_00408365:
      iVar2 = 0;
    }
    else {
LAB_00408308:
      iVar6 = (uint)*(byte *)piVar4 - (uint)*(byte *)piVar3;
      if (iVar6 == 0) {
        if (uVar1 == 1) goto LAB_00408365;
        iVar6 = (uint)*(byte *)((int)piVar4 + 1) - (uint)*(byte *)((int)piVar3 + 1);
        if (iVar6 == 0) {
          if (uVar1 == 2) goto LAB_00408365;
          iVar6 = (uint)*(byte *)((int)piVar4 + 2) - (uint)*(byte *)((int)piVar3 + 2);
          if (iVar6 == 0) {
            if ((uVar1 == 3) ||
               (iVar6 = (uint)*(byte *)((int)piVar4 + 3) - (uint)*(byte *)((int)piVar3 + 3),
               iVar6 == 0)) goto LAB_00408365;
          }
        }
      }
      iVar2 = 1;
      if (iVar6 < 1) {
        iVar2 = -1;
      }
    }
    if (iVar2 == 0) {
      return (uint)*(byte *)(piVar7 + 1);
    }
    iVar5 = iVar5 + -1;
    piVar7 = (int *)((int)piVar7 + -5);
  } while( true );
}



void __cdecl FUN_00408390(int param_1)

{
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined *)(param_1 + 0x239) = 0;
  *(undefined *)(param_1 + 0x240) = 0;
  return;
}



void * __cdecl FUN_004083b0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return param_1;
  }
  param_1 = (void *)FUN_00408980(2,*(undefined **)((int)param_1 + 0x248),
                                 *(undefined4 *)((int)param_1 + 0x244));
  if (param_1 != (void *)0x0) {
    FUN_00407e40(&param_1,0x120);
  }
  return param_1;
}



void FUN_004083f0(int param_1)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *in_EDX;
  char *_Dest;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = 0;
  do {
    bVar1 = *(byte *)(iVar5 + 0x11c + param_1);
    uVar4 = (uint)bVar1;
    iVar5 = iVar5 + 1;
    if ((uVar4 - 0x41 < 0x3a) && ((bVar1 < 0x5b || (0x60 < bVar1)))) {
      *(byte *)(iVar2 + in_EAX) = bVar1;
      iVar3 = iVar2;
    }
    else {
      *(undefined *)(iVar2 + in_EAX) = 0x5b;
      *(char *)(iVar2 + 1 + in_EAX) = "0123456789ABCDEFlibpng error: %s\n"[(int)uVar4 >> 4];
      *(char *)(iVar2 + 2 + in_EAX) = "0123456789ABCDEFlibpng error: %s\n"[uVar4 & 0xf];
      iVar3 = iVar2 + 3;
      *(undefined *)(iVar3 + in_EAX) = 0x5d;
    }
    iVar2 = iVar3 + 1;
  } while (iVar5 < 4);
  if (in_EDX == (char *)0x0) {
    *(undefined *)(iVar2 + in_EAX) = 0;
    return;
  }
  *(undefined *)(iVar2 + in_EAX) = 0x3a;
  *(undefined *)(iVar3 + 2 + in_EAX) = 0x20;
  _Dest = (char *)(in_EAX + iVar3 + 3);
  strncpy(_Dest,in_EDX,0x3f);
  _Dest[0x3f] = '\0';
  return;
}



void FUN_00408490(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  FILE *pFVar4;
  char *_Format;
  char *_Format_00;
  char *local_28;
  char *local_24;
  char *local_20;
  int *local_1c;
  char *local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_28;
  local_1c = param_1;
  if (*param_2 == '#') {
    local_28 = local_14 + (3 - (int)param_2);
    local_20 = local_14 + -(int)param_2;
    local_18 = local_14 + (2 - (int)param_2);
    _Format = (char *)0x0;
    local_24 = local_14 + (4 - (int)param_2);
    do {
      cVar2 = param_2[(int)_Format];
      cVar1 = param_2[(int)(_Format + 1)];
      _Format_00 = param_2 + (int)_Format;
      _Format_00[(int)local_20] = cVar1;
      if (cVar2 == ' ') break;
      cVar2 = param_2[(int)(_Format + 2)];
      local_14[(int)(_Format_00 + (1 - (int)param_2))] = cVar2;
      if (cVar1 == ' ') {
        _Format = _Format + 1;
        break;
      }
      cVar1 = param_2[(int)(_Format + 3)];
      _Format_00[(int)local_18] = cVar1;
      if (cVar2 == ' ') {
        _Format = _Format + 2;
        break;
      }
      cVar2 = param_2[(int)(_Format + 4)];
      _Format_00[(int)local_28] = cVar2;
      if (cVar1 == ' ') {
        _Format = _Format + 3;
        break;
      }
      _Format_00[(int)local_24] = param_2[(int)(_Format + 5)];
      if (cVar2 == ' ') {
        _Format = _Format + 4;
        break;
      }
      _Format = _Format + 5;
    } while ((int)_Format < 0xf);
    if (_Format + -2 < (char *)0xd) {
      pcVar3 = param_2 + (int)_Format;
      param_2 = local_14;
      *(undefined *)((int)&local_18 + (int)((int)_Format + 3)) = 0;
      _Format_00 = "libpng error no. %s: %s\n";
      _Format = pcVar3;
    }
    else {
      _Format_00 = "libpng error: %s, offset=%d\n";
    }
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,_Format_00,param_2,_Format);
  }
  else {
    _Format = "libpng error: %s\n";
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,_Format,param_2);
  }
                    // WARNING: Subroutine does not return
  longjmp(local_1c,1);
}



void __cdecl FUN_004085c0(char *param_1)

{
  char cVar1;
  char cVar2;
  FILE *pFVar3;
  int iVar4;
  char *_Format;
  char *_Format_00;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_24;
  if (*param_1 != '#') {
    _Format_00 = "libpng warning: %s\n";
    pFVar3 = __iob_func();
    fprintf(pFVar3 + 2,_Format_00,param_1);
    FUN_00412237();
    return;
  }
  local_24 = local_14 + (3 - (int)param_1);
  local_18 = local_14 + -(int)param_1;
  local_20 = local_14 + (2 - (int)param_1);
  iVar4 = 0;
  local_1c = local_14 + (4 - (int)param_1);
  do {
    cVar2 = param_1[iVar4];
    cVar1 = param_1[iVar4 + 1];
    _Format_00 = param_1 + iVar4;
    _Format_00[(int)local_18] = cVar1;
    if (cVar2 == ' ') break;
    cVar2 = param_1[iVar4 + 2];
    local_14[(int)(_Format_00 + (1 - (int)param_1))] = cVar2;
    if (cVar1 == ' ') {
      iVar4 = iVar4 + 1;
      break;
    }
    cVar1 = param_1[iVar4 + 3];
    _Format_00[(int)local_20] = cVar1;
    if (cVar2 == ' ') {
      iVar4 = iVar4 + 2;
      break;
    }
    cVar2 = param_1[iVar4 + 4];
    _Format_00[(int)local_24] = cVar2;
    if (cVar1 == ' ') {
      iVar4 = iVar4 + 3;
      break;
    }
    _Format_00[(int)local_1c] = param_1[iVar4 + 5];
    if (cVar2 == ' ') {
      iVar4 = iVar4 + 4;
      break;
    }
    iVar4 = iVar4 + 5;
  } while (iVar4 < 0xf);
  if (0xc < iVar4 - 2U) {
    _Format_00 = "libpng warning: %s\n";
    pFVar3 = __iob_func();
    fprintf(pFVar3 + 2,_Format_00,param_1);
    FUN_00412237();
    return;
  }
  param_1 = param_1 + iVar4;
  _Format_00 = local_14;
  _Format = "libpng warning no. %s: %s\n";
  *(undefined *)((int)&local_18 + iVar4 + 3) = 0;
  pFVar3 = __iob_func();
  fprintf(pFVar3 + 2,_Format,_Format_00,param_1);
  FUN_00412237();
  return;
}



void __cdecl FUN_00408720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}



void FUN_00408740(int *param_1,char *param_2)

{
  size_t _Size;
  uint uVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_14;
  uVar1 = param_1[0x1b];
  if ((uVar1 & 0xc0000) != 0) {
    if (*param_2 == '#') {
      iVar3 = 1;
      do {
        if (param_2[iVar3] == ' ') break;
        if (param_2[iVar3 + 1] == ' ') {
          iVar3 = iVar3 + 1;
          break;
        }
        iVar3 = iVar3 + 2;
      } while (iVar3 < 0xf);
      if ((uVar1 & 0x80000) == 0) {
        param_2 = param_2 + iVar3;
        goto LAB_004087d0;
      }
      _Size = iVar3 - 1;
      sVar4 = 0;
      if (0 < (int)_Size) {
        memcpy(local_14,param_2 + 1,_Size);
        sVar4 = _Size;
      }
      local_14[sVar4] = '\0';
    }
    else {
      if ((uVar1 & 0x80000) == 0) goto LAB_004087d0;
      local_14[0] = '0';
      local_14[1] = 0;
    }
    param_2 = local_14;
  }
LAB_004087d0:
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
  FUN_00408490(param_1,param_2);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __cdecl FUN_004087f0(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((*(uint *)(param_1 + 0x6c) & 0xc0000) != 0) && (*param_2 == '#')) {
    iVar1 = 1;
    do {
      if (param_2[iVar1] == ' ') break;
      if (param_2[iVar1 + 1] == ' ') {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0xf);
  }
  if (*(code **)(param_1 + 0x44) == (code *)0x0) {
    FUN_004085c0(param_2 + iVar1);
    return;
  }
  (**(code **)(param_1 + 0x44))(param_1);
  return;
}



void FUN_00408850(int *param_1)

{
  undefined4 unaff_ESI;
  char local_58 [4];
  int iStack84;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_58;
  FUN_004083f0();
  FUN_00408740(param_1,local_58);
  FUN_004083f0(iStack84,unaff_ESI);
  FUN_004087f0(iStack84,&stack0xffffff50);
  FUN_00412237();
  return;
}



void __cdecl FUN_00408880(int param_1)

{
  char local_58 [84];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_58;
  FUN_004083f0(param_1);
  FUN_004087f0(param_1,local_58);
  FUN_00412237();
  return;
}



void __cdecl FUN_004088c0(int *param_1)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x004088cf. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)param_1[0x14])();
    return;
  }
  FUN_00408740(param_1,"Call to NULL read function");
  return;
}



void __cdecl FUN_00408920(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0x4088e0;
  }
  else {
    *(int *)(param_1 + 0x50) = param_3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_004087f0(param_1,"It\'s an error to set both read_data_fn and write_data_fn in the ");
    FUN_004087f0(param_1,"same structure.  Resetting write_data_fn to NULL.");
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}



void __cdecl FUN_00408980(int param_1,undefined *param_2,undefined4 param_3)

{
  void *_Dst;
  size_t _Size;
  undefined local_270 [580];
  undefined4 local_2c;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_270;
  if (param_1 == 2) {
    _Size = 0x120;
  }
  else {
    if (param_1 != 1) {
      FUN_00412237();
      return;
    }
    _Size = 0x26c;
  }
  if (param_2 == (undefined *)0x0) {
    _Dst = malloc(_Size);
  }
  else {
    local_2c = param_3;
    _Dst = (void *)(*(code *)param_2)(local_270);
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
  }
  FUN_00412237();
  return;
}



void __cdecl FUN_00408a30(void *param_1,undefined *param_2,undefined4 param_3)

{
  undefined local_270 [580];
  undefined4 local_2c;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_270;
  if (param_1 != (void *)0x0) {
    if (param_2 != (undefined *)0x0) {
      local_2c = param_3;
      (*(code *)param_2)(local_270);
      FUN_00412237();
      return;
    }
    free(param_1);
  }
  FUN_00412237();
  return;
}



void * __cdecl FUN_00408ab0(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pvVar1 = malloc(param_2);
    return pvVar1;
  }
  return (void *)0x0;
}



void __cdecl FUN_00408af0(undefined4 param_1,void *param_2,void *param_3,size_t param_4)

{
  memcpy(param_2,param_3,param_4);
  return;
}



void __cdecl FUN_00408b10(undefined4 param_1,void *param_2,int param_3,size_t param_4)

{
  memset(param_2,param_3,param_4);
  return;
}



void __cdecl FUN_00408b30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x244) = param_2;
  *(undefined4 *)(param_1 + 0x248) = param_3;
  *(undefined4 *)(param_1 + 0x24c) = param_4;
  return;
}



void __cdecl FUN_00408b60(int param_1)

{
  FUN_00408980(param_1,(undefined *)0x0,0);
  return;
}



void __cdecl FUN_00408b80(void *param_1)

{
  FUN_00408a30(param_1,(undefined *)0x0,0);
  return;
}



void * __cdecl FUN_00408ba0(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if ((code *)param_1[0x92] == (code *)0x0) {
      pvVar1 = FUN_00408ab0((int)param_1,param_2);
    }
    else {
      pvVar1 = (void *)(*(code *)param_1[0x92])();
    }
    if ((pvVar1 == (void *)0x0) && ((param_1[0x1b] & 0x100000U) == 0)) {
      FUN_00408740(param_1,"Out of Memory!");
    }
    return pvVar1;
  }
  return (void *)0x0;
}



void __cdecl FUN_00408bf0(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x24c) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00408c12. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(param_1 + 0x24c))();
      return;
    }
    if ((param_1 != 0) && (param_2 != (void *)0x0)) {
      free(param_2);
    }
    return;
  }
  return;
}



void __cdecl FUN_00408c20(int *param_1,size_t param_2)

{
  uint uVar1;
  
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 | 0x100000;
  FUN_00408ba0(param_1,param_2);
  param_1[0x1b] = uVar1;
  return;
}



undefined4 __cdecl FUN_00408c50(undefined *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}



short __cdecl FUN_00408c80(byte *param_1)

{
  return (ushort)*param_1 * 0x100 + (ushort)param_1[1];
}



void __cdecl FUN_00408ca0(int *param_1,uint *param_2,uint param_3)

{
  FUN_004088c0(param_1);
  FUN_00407df0((int)param_1,param_2,param_3);
  return;
}



uint __cdecl FUN_00408cd0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x47) & 0x20) == 0) {
    if ((param_1[0x1b] & 0x800U) == 0) goto LAB_00408d00;
  }
  else {
    if ((param_1[0x1b] & 0x300U) != 0x300) goto LAB_00408d00;
  }
  bVar1 = false;
LAB_00408d00:
  FUN_004088c0(param_1);
  if (!bVar1) {
    return 0;
  }
  iVar3 = FUN_00408c50((undefined *)&param_1);
  return (uint)(iVar3 != piVar2[0x44]);
}



void __cdecl
FUN_00408d40(int *param_1,int param_2,void *param_3,int param_4,size_t param_5,size_t *param_6)

{
  int iVar1;
  size_t *psVar2;
  size_t _Size;
  void *_Dst;
  char *_Format;
  void *local_48;
  size_t *local_44;
  void *local_40;
  size_t *local_3c;
  void *local_38;
  uint *puStack52;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_48;
  local_3c = param_6;
  local_48 = param_3;
  if (param_2 != 0) {
    sprintf((char *)&local_38,"Unknown zTXt compression type %d",param_2);
    FUN_004087f0((int)param_1,(char *)&local_38);
    *(undefined *)(param_5 + (int)local_48) = 0;
    *local_3c = param_5;
    FUN_00412237();
    return;
  }
  param_1[0x1e] = param_4 - param_5;
  _Size = 0;
  param_1[0x1d] = param_5 + (int)param_3;
  param_1[0x20] = param_1[0x2b];
  param_1[0x21] = param_1[0x2c];
  _Dst = (void *)0x0;
  if (param_4 - param_5 == 0) {
LAB_00408fe6:
    _Format = "Incomplete compressed datastream in %s chunk";
  }
  else {
    do {
      local_44 = (size_t *)FUN_00412d50((uint **)(param_1 + 0x1d),1);
      if ((local_44 != (size_t *)0x0) && (local_44 != (size_t *)0x1)) {
        _Format = (char *)param_1[0x23];
        if (_Format == (char *)0x0) {
          _Format = s_Error_decoding_compressed_text_0041c000;
        }
        FUN_004087f0((int)param_1,_Format);
        FUN_00412af0((int)(param_1 + 0x1d));
        param_1[0x1e] = 0;
        if (_Dst == (void *)0x0) {
          _Size = param_5 + 0x20;
          _Dst = (void *)FUN_00408c20(param_1,_Size);
          if (_Dst == (void *)0x0) {
            FUN_00408bf0((int)param_1,local_48);
            FUN_00408740(param_1,"Not enough memory to decompress chunk");
          }
          memcpy(_Dst,local_48,param_5);
        }
        *(undefined *)((int)_Dst + (_Size - 1)) = 0;
        _Size = (int)local_48 + param_4 + (-1 - (int)_Dst);
        if (0x1e < _Size) {
          _Size = 0x1f;
        }
        memcpy((void *)(param_5 + (int)_Dst),s_Error_decoding_compressed_text_0041c000,_Size + 1);
        psVar2 = local_44;
        break;
      }
      iVar1 = param_1[0x21];
      if ((iVar1 == 0) || (psVar2 = local_44, local_44 == (size_t *)0x1)) {
        if (_Dst == (void *)0x0) {
          _Size = (param_5 - iVar1) + param_1[0x2c];
          _Dst = (void *)FUN_00408c20(param_1,_Size + 1);
          if (_Dst == (void *)0x0) {
            FUN_00408bf0((int)param_1,local_48);
            FUN_00408740(param_1,"Not enough memory to decompress chunk.");
          }
          memcpy((void *)(param_5 + (int)_Dst),(void *)param_1[0x2b],_Size - param_5);
          memcpy(_Dst,local_40,param_5);
        }
        else {
          local_40 = _Dst;
          _Dst = (void *)FUN_00408c20(param_1,(_Size - iVar1) + 1 + param_1[0x2c]);
          if (_Dst == (void *)0x0) {
            FUN_00408bf0((int)param_1,local_40);
            FUN_00408bf0((int)param_1,local_48);
            FUN_00408740(param_1,"Not enough memory to decompress chunk..");
          }
          memcpy(_Dst,local_38,_Size);
          FUN_00408bf0((int)param_1,local_38);
          memcpy((void *)((int)_Dst + _Size),(void *)param_1[0x2b],param_1[0x2c] - param_1[0x21]);
          _Size = _Size + (param_1[0x2c] - param_1[0x21]);
        }
        *(undefined *)((int)_Dst + _Size) = 0;
        if (local_3c == (size_t *)0x1) goto LAB_00409053;
        param_1[0x20] = param_1[0x2b];
        param_1[0x21] = param_1[0x2c];
        psVar2 = local_3c;
      }
    } while (param_1[0x1e] != 0);
    if (psVar2 == (size_t *)0x1) goto LAB_00409053;
    if (psVar2 == (size_t *)0xfffffffb) {
      _Format = "Buffer error in compressed datastream in %s chunk";
    }
    else {
      if (psVar2 != (size_t *)0xfffffffd) goto LAB_00408fe6;
      _Format = "Data error in compressed datastream in %s chunk";
    }
  }
  sprintf((char *)&local_38,_Format,param_1 + 0x47);
  FUN_004087f0((int)param_1,(char *)&local_38);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_00408c20(param_1,param_5 + 1);
    if (_Dst == (void *)0x0) {
      FUN_00408bf0((int)param_1,local_48);
      FUN_00408740(param_1,"Not enough memory for text.");
    }
    memcpy(_Dst,local_40,param_5);
  }
  *(undefined *)(param_5 + (int)_Dst) = 0;
  _Size = param_5;
LAB_00409053:
  FUN_00412af0((int)(param_1 + 0x1d));
  param_1[0x1e] = 0;
  FUN_00408bf0((int)param_1,local_40);
  *puStack52 = _Size;
  local_44 = (size_t *)0x409088;
  FUN_00412237();
  return;
}



void __cdecl FUN_004090d0(int *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (((((((0x40 < bVar1) && (bVar1 < 0x7b)) && ((bVar1 < 0x5b || (0x60 < bVar1)))) &&
        ((bVar1 = param_2[1], 0x40 < bVar1 && (bVar1 < 0x7b)))) &&
       ((bVar1 < 0x5b || (0x60 < bVar1)))) &&
      ((((bVar1 = param_2[2], 0x40 < bVar1 && (bVar1 < 0x7b)) && ((bVar1 < 0x5b || (0x60 < bVar1))))
       && ((bVar1 = param_2[3], 0x40 < bVar1 && (bVar1 < 0x7b)))))) &&
     ((bVar1 < 0x5b || (0x60 < bVar1)))) {
    return;
  }
  FUN_00408850(param_1);
  return;
}



void __cdecl FUN_00409130(int param_1,byte *param_2,uint param_3)

{
  size_t _Size;
  uint _Size_00;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *_Src;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3 == 0xff) {
    bVar2 = *(byte *)(param_1 + 0x10b);
    if (bVar2 < 8) {
      _Size = (uint)bVar2 * *(int *)(param_1 + 200) + 7 >> 3;
    }
    else {
      _Size = (uint)(bVar2 >> 3) * *(int *)(param_1 + 200);
    }
    memcpy(param_2,(void *)(*(int *)(param_1 + 0xec) + 1),_Size);
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x10b);
  _Src = (byte *)(*(int *)(param_1 + 0xec) + 1);
  if (bVar2 == 1) {
    iVar3 = *(int *)(param_1 + 200);
    local_10 = 0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar1 = 7;
      local_4 = 0;
      local_8 = -1;
      iVar4 = iVar1;
    }
    else {
      iVar1 = 0;
      local_4 = 7;
      local_8 = 1;
      iVar4 = iVar1;
    }
    while (iVar3 != 0) {
      if ((local_10 & param_3) != 0) {
        bVar2 = (byte)iVar1;
        *param_2 = (byte)(0x7f7f >> (7 - bVar2 & 0x1f)) & *param_2 |
                   (*_Src >> (bVar2 & 0x1f) & 1) << (bVar2 & 0x1f);
      }
      if (iVar1 == local_4) {
        _Src = _Src + 1;
        param_2 = param_2 + 1;
        iVar1 = iVar4;
      }
      else {
        iVar1 = iVar1 + local_8;
      }
      if (local_10 == 1) {
        local_10 = 0x80;
      }
      else {
        local_10 = (int)local_10 >> 1;
      }
      iVar3 = iVar3 + -1;
    }
  }
  else {
    if (bVar2 == 2) {
      local_c = *(int *)(param_1 + 200);
      local_10 = 0x80;
      if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
        iVar3 = 6;
        local_4 = 0;
        local_8 = -2;
      }
      else {
        iVar3 = 0;
        local_4 = 6;
        local_8 = 2;
      }
      iVar1 = iVar3;
      if (local_c != 0) {
        do {
          if ((local_10 & param_3) != 0) {
            bVar2 = (byte)iVar1;
            *param_2 = (byte)(0x3f3f >> (6 - bVar2 & 0x1f)) & *param_2 |
                       (*_Src >> (bVar2 & 0x1f) & 3) << (bVar2 & 0x1f);
          }
          if (iVar1 == local_4) {
            _Src = _Src + 1;
            param_2 = param_2 + 1;
            iVar1 = iVar3;
          }
          else {
            iVar1 = iVar1 + local_8;
          }
          if (local_10 == 1) {
            local_10 = 0x80;
          }
          else {
            local_10 = (int)local_10 >> 1;
          }
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else {
      if (bVar2 == 4) {
        local_4 = *(int *)(param_1 + 200);
        local_10 = 0x80;
        if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
          iVar3 = 4;
          local_c = 0;
          local_8 = -4;
        }
        else {
          iVar3 = 0;
          local_c = 4;
          local_8 = 4;
        }
        iVar1 = iVar3;
        if (local_4 != 0) {
          do {
            if ((local_10 & param_3) != 0) {
              bVar2 = (byte)iVar1;
              *param_2 = (byte)(0xf0f >> (4 - bVar2 & 0x1f)) & *param_2 |
                         (*_Src >> (bVar2 & 0x1f) & 0xf) << (bVar2 & 0x1f);
            }
            if (iVar1 == local_c) {
              _Src = _Src + 1;
              param_2 = param_2 + 1;
              iVar1 = iVar3;
            }
            else {
              iVar1 = iVar1 + local_8;
            }
            if (local_10 == 1) {
              local_10 = 0x80;
            }
            else {
              local_10 = (int)local_10 >> 1;
            }
            local_4 = local_4 + -1;
          } while (local_4 != 0);
          return;
        }
      }
      else {
        local_10 = *(int *)(param_1 + 200);
        _Size_00 = (uint)(bVar2 >> 3);
        bVar2 = 0x80;
        if (local_10 != 0) {
          do {
            if (((byte)param_3 & bVar2) != 0) {
              memcpy(param_2,_Src,_Size_00);
            }
            _Src = _Src + _Size_00;
            param_2 = param_2 + _Size_00;
            if (bVar2 == 1) {
              bVar2 = 0x80;
            }
            else {
              bVar2 = bVar2 >> 1;
            }
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          return;
        }
      }
    }
  }
  return;
}



void __cdecl FUN_00409430(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint _Size;
  byte *pbVar8;
  void *_Dst;
  byte *pbVar9;
  undefined auStack48 [3];
  byte local_2d;
  byte *local_2c;
  uint local_28;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint local_c [2];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack48;
  iVar3 = *(int *)(param_1 + 0xec) + 1;
  _Size = *(uint *)(param_1 + 0x70);
  local_14 = (uint *)(param_1 + 0x100);
  if ((iVar3 != 0) && (local_14 != (uint *)0x0)) {
    local_10 = *(uint *)(&DAT_004164d0 + (uint)*(byte *)(param_1 + 0x124) * 4);
    uVar2 = *local_14;
    bVar1 = *(byte *)(param_1 + 0x10b);
    uVar5 = uVar2 * local_10;
    uVar6 = uVar5 - 1;
    local_1c = uVar5;
    if (bVar1 == 1) {
      local_24 = (byte *)((uVar2 - 1 >> 3) + iVar3);
      pbVar9 = (byte *)((uVar6 >> 3) + iVar3);
      if ((_Size & 0x10000) == 0) {
        local_2c = (byte *)(7 - (uVar2 - 1 & 7));
        pbVar4 = (byte *)(7 - (uVar5 - 1 & 7));
        local_20 = (byte *)0x0;
        pbVar8 = (byte *)0x7;
        local_28 = 1;
      }
      else {
        local_2c = (byte *)(uVar2 - 1 & 7);
        pbVar4 = (byte *)(uVar5 - 1 & 7);
        local_20 = (byte *)0x7;
        pbVar8 = (byte *)0x0;
        local_28 = 0xffffffff;
      }
      local_c[0] = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *local_24;
          _Size = local_10;
          if (0 < (int)local_10) {
            do {
              local_18 = _Size;
              *pbVar9 = (byte)(0x7f7f >> (7 - (byte)pbVar4 & 0x1f)) & *pbVar9 |
                        (bVar1 >> ((byte)local_2c & 0x1f) & 1) << ((byte)pbVar4 & 0x1f);
              if (pbVar4 == pbVar8) {
                pbVar9 = pbVar9 + -1;
                pbVar4 = local_20;
              }
              else {
                pbVar4 = pbVar4 + local_28;
              }
              local_18 = local_18 - 1;
              _Size = local_18;
            } while (local_18 != 0);
          }
          if (local_2c == pbVar8) {
            local_24 = local_24 + -1;
            local_2c = local_20;
          }
          else {
            local_2c = local_2c + local_28;
          }
          local_c[0] = local_c[0] + 1;
        } while (local_c[0] < *local_14);
      }
    }
    else {
      if (bVar1 == 2) {
        local_2c = (byte *)((uVar2 - 1 >> 2) + iVar3);
        pbVar9 = (byte *)((uVar6 >> 2) + iVar3);
        if ((_Size & 0x10000) == 0) {
          pbVar4 = (byte *)((3 - (uVar2 - 1 & 3)) * 2);
          pbVar8 = (byte *)((3 - (uVar5 - 1 & 3)) * 2);
          local_24 = (byte *)0x0;
          local_20 = &DAT_00000006;
          local_1c = 2;
        }
        else {
          pbVar4 = (byte *)(uVar2 * 2 - 1 & 6);
          pbVar8 = (byte *)(uVar5 * 2 - 1 & 6);
          local_24 = &DAT_00000006;
          local_20 = (byte *)0x0;
          local_1c = 0xfffffffe;
        }
        local_28 = 0;
        if (uVar2 != 0) {
          do {
            local_2d = *local_2c >> ((byte)pbVar4 & 0x1f) & 3;
            _Size = local_10;
            if (0 < (int)local_10) {
              do {
                local_18 = _Size;
                *pbVar9 = (byte)(0x3f3f >> (6 - (byte)pbVar8 & 0x1f)) & *pbVar9 |
                          local_2d << ((byte)pbVar8 & 0x1f);
                if (pbVar8 == local_20) {
                  pbVar9 = pbVar9 + -1;
                  pbVar8 = local_24;
                }
                else {
                  pbVar8 = pbVar8 + local_1c;
                }
                local_18 = local_18 - 1;
                _Size = local_18;
              } while (local_18 != 0);
            }
            if (pbVar4 == local_20) {
              local_2c = local_2c + -1;
              pbVar4 = local_24;
            }
            else {
              pbVar4 = pbVar4 + local_1c;
            }
            local_28 = local_28 + 1;
          } while (local_28 < *local_14);
        }
      }
      else {
        if (bVar1 == 4) {
          local_24 = (byte *)((uVar2 - 1 >> 1) + iVar3);
          pbVar9 = (byte *)((uVar6 >> 1) + iVar3);
          if ((_Size & 0x10000) == 0) {
            pbVar4 = (byte *)((uVar2 - 1 & 1) * -4 + 4);
            pbVar8 = (byte *)((uVar5 - 1 & 1) * -4 + 4);
            pbVar7 = &DAT_00000004;
            local_2c = (byte *)0x0;
            local_20 = &DAT_00000004;
          }
          else {
            pbVar4 = (byte *)(uVar2 * -4 - 1 & 4);
            pbVar8 = (byte *)(uVar5 * -4 - 1 & 4);
            local_2c = &DAT_00000004;
            pbVar7 = (byte *)0x0;
            local_20 = (byte *)0xfffffffc;
          }
          local_18 = 0;
          if (uVar2 != 0) {
            do {
              local_2d = *local_24 >> ((byte)pbVar4 & 0x1f) & 0xf;
              _Size = local_10;
              if (0 < (int)local_10) {
                do {
                  local_28 = _Size;
                  *pbVar9 = (byte)(0xf0f >> (4 - (byte)pbVar8 & 0x1f)) & *pbVar9 |
                            local_2d << ((byte)pbVar8 & 0x1f);
                  if (pbVar8 == pbVar7) {
                    pbVar9 = pbVar9 + -1;
                    pbVar8 = local_2c;
                  }
                  else {
                    pbVar8 = pbVar8 + (int)local_20;
                  }
                  local_28 = local_28 - 1;
                  _Size = local_28;
                } while (local_28 != 0);
              }
              if (pbVar4 == pbVar7) {
                local_24 = local_24 + -1;
                pbVar4 = local_2c;
              }
              else {
                pbVar4 = pbVar4 + (int)local_20;
              }
              local_18 = local_18 + 1;
            } while (local_18 < *local_14);
          }
        }
        else {
          _Size = (uint)(bVar1 >> 3);
          _Src = (void *)((uVar2 - 1) * _Size + iVar3);
          _Dst = (void *)(uVar6 * _Size + iVar3);
          local_28 = 0;
          if (uVar2 != 0) {
            do {
              memcpy(local_c,_Src,_Size);
              uVar6 = local_10;
              if (0 < (int)local_10) {
                do {
                  memcpy(_Dst,local_c,_Size);
                  _Dst = (void *)((int)_Dst - _Size);
                  uVar6 = uVar6 - 1;
                  uVar5 = local_1c;
                } while (uVar6 != 0);
              }
              local_28 = local_28 + 1;
              _Src = (void *)((int)_Src - _Size);
            } while (local_28 < *local_14);
          }
        }
      }
    }
    bVar1 = *(byte *)((int)local_14 + 0xb);
    *local_14 = uVar5;
    if (bVar1 < 8) {
      uVar5 = bVar1 * uVar5 + 7 >> 3;
    }
    else {
      uVar5 = (bVar1 >> 3) * uVar5;
    }
    local_14[1] = uVar5;
  }
  FUN_00412237();
  return;
}



void __cdecl FUN_00409860(int param_1,int param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  int local_10;
  int local_c;
  
  switch(param_5) {
  case (byte *)0x0:
    break;
  case (byte *)0x1:
    uVar3 = (int)((uint)*(byte *)(param_2 + 0xb) + 7) >> 3;
    param_3 = param_3 + uVar3;
    if (uVar3 < *(uint *)(param_2 + 4)) {
      pbVar9 = param_3 + -uVar3;
      iVar4 = *(uint *)(param_2 + 4) - uVar3;
      do {
        *param_3 = *param_3 + *pbVar9;
        param_3 = param_3 + 1;
        pbVar9 = pbVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    break;
  case (byte *)0x2:
    uVar3 = *(uint *)(param_2 + 4);
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        *param_3 = *param_3 + param_4[uVar5];
        uVar5 = uVar5 + 1;
        param_3 = param_3 + 1;
      } while (uVar5 < uVar3);
      return;
    }
    break;
  case (byte *)0x3:
    iVar4 = (int)((uint)*(byte *)(param_2 + 0xb) + 7) >> 3;
    iVar6 = *(int *)(param_2 + 4) - iVar4;
    pbVar9 = param_3;
    while (iVar4 != 0) {
      *pbVar9 = *pbVar9 + (*param_4 >> 1);
      param_4 = param_4 + 1;
      pbVar9 = pbVar9 + 1;
      iVar4 = iVar4 + -1;
    }
    if (iVar6 != 0) {
      do {
        *pbVar9 = *pbVar9 + (char)((int)((uint)*param_3 + (uint)*param_4) / 2);
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        pbVar9 = pbVar9 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    break;
  case (byte *)0x4:
    iVar4 = (int)((uint)*(byte *)(param_2 + 0xb) + 7) >> 3;
    local_c = *(int *)(param_2 + 4) - iVar4;
    param_5 = param_3;
    pbVar9 = param_4;
    while (iVar4 != 0) {
      *param_5 = *param_5 + *pbVar9;
      pbVar9 = pbVar9 + 1;
      param_5 = param_5 + 1;
      iVar4 = iVar4 + -1;
    }
    if (local_c != 0) {
      do {
        bVar7 = *param_3;
        bVar1 = *pbVar9;
        param_3 = param_3 + 1;
        bVar2 = *param_4;
        param_4 = param_4 + 1;
        iVar4 = (uint)bVar1 - (uint)bVar2;
        pbVar9 = pbVar9 + 1;
        iVar6 = (uint)bVar7 - (uint)bVar2;
        local_10 = iVar4;
        if (iVar4 < 0) {
          local_10 = -iVar4;
        }
        iVar8 = iVar6;
        if (iVar6 < 0) {
          iVar8 = -iVar6;
        }
        iVar4 = iVar4 + iVar6;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (((iVar8 < local_10) || (iVar4 < local_10)) && (bVar7 = bVar2, iVar8 <= iVar4)) {
          bVar7 = bVar1;
        }
        *param_5 = *param_5 + bVar7;
        param_5 = param_5 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      return;
    }
    break;
  default:
    FUN_004087f0(param_1,"Ignoring bad adaptive filter type");
    *param_3 = 0;
  }
  return;
}



void __cdecl FUN_00409a60(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  
  param_1[0x1e] = 0;
  FUN_0040f950(param_1);
  if (*(char *)((int)param_1 + 0x123) == '\0') {
    iVar6 = param_1[0x32];
    param_1[0x34] = param_1[0x33];
    param_1[0x38] = iVar6;
    param_1[0x37] = param_1[0x36] + 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
      param_1[0x34] = (param_1[0x33] + 7U) / 8;
    }
    else {
      param_1[0x34] = param_1[0x33];
    }
    iVar6 = param_1[0x32];
    uVar3 = ((iVar6 - *(int *)(&DAT_004164b4 + (uint)*(byte *)(param_1 + 0x49) * 4)) + -1 +
            *(uint *)(&DAT_004164d0 + (uint)*(byte *)(param_1 + 0x49) * 4)) /
            *(uint *)(&DAT_004164d0 + (uint)*(byte *)(param_1 + 0x49) * 4);
    bVar1 = *(byte *)((int)param_1 + 0x129);
    param_1[0x38] = uVar3;
    if (bVar1 < 8) {
      param_1[0x37] = (bVar1 * uVar3 + 7 >> 3) + 1;
    }
    else {
      param_1[0x37] = (bVar1 >> 3) * uVar3 + 1;
    }
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 0x129);
  uVar5 = param_1[0x1c];
  if (((uVar5 & 4) != 0) && (*(byte *)((int)param_1 + 0x127) < 8)) {
    uVar3 = 8;
  }
  if ((uVar5 & 0x1000) != 0) {
    cVar2 = *(char *)((int)param_1 + 0x126);
    if (cVar2 == '\x03') {
      uVar3 = (uint)(*(short *)((int)param_1 + 0x11a) != 0) * 8 + 0x18;
    }
    else {
      if (cVar2 == '\0') {
        if (uVar3 < 8) {
          uVar3 = 8;
        }
        if (*(short *)((int)param_1 + 0x11a) != 0) {
          uVar3 = uVar3 * 2;
        }
      }
      else {
        if ((cVar2 == '\x02') && (*(short *)((int)param_1 + 0x11a) != 0)) {
          uVar3 = (int)(uVar3 * 4) / 3;
        }
      }
    }
  }
  if ((uVar5 & 0x8000) != 0) {
    cVar2 = *(char *)((int)param_1 + 0x126);
    if (cVar2 == '\x03') {
      uVar3 = 0x20;
    }
    else {
      if (cVar2 == '\0') {
        uVar3 = ((uint)(8 < (int)uVar3) - 1 & 0xfffffff0) + 0x20;
      }
      else {
        if (cVar2 == '\x02') {
          uVar3 = ((uint)(0x20 < (int)uVar3) - 1 & 0xffffffe0) + 0x40;
        }
      }
    }
  }
  if ((uVar5 & 0x4000) != 0) {
    if ((((*(short *)((int)param_1 + 0x11a) == 0) || ((uVar5 & 0x1000) == 0)) &&
        ((uVar5 & 0x8000) == 0)) && (cVar2 = *(char *)((int)param_1 + 0x126), cVar2 != '\x04')) {
      if ((int)uVar3 < 9) {
        uVar3 = (uint)(cVar2 == '\x06') * 8 + 0x18;
      }
      else {
        uVar3 = (-(uint)(cVar2 != '\x06') & 0xfffffff0) + 0x40;
      }
    }
    else {
      uVar3 = ((uint)(0x10 < (int)uVar3) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if (((uVar5 & 0x100000) != 0) &&
     (uVar5 = (uint)*(byte *)((int)param_1 + 0x65) * (uint)*(byte *)(param_1 + 0x19),
     uVar5 - uVar3 != 0 && (int)uVar3 <= (int)uVar5)) {
    uVar3 = uVar5;
  }
  uVar5 = iVar6 + 7U & 0xfffffff8;
  if ((int)uVar3 < 8) {
    uVar5 = uVar3 * uVar5 + 7 >> 3;
  }
  else {
    uVar5 = (uVar3 >> 3) * uVar5;
  }
  pvVar4 = FUN_00408ba0(param_1,((int)(uVar3 + 7) >> 3) + 0x41 + uVar5);
  *(void **)(param_1 + 0x94) = pvVar4;
  param_1[0x3b] = (int)pvVar4 + 0x20;
  if (param_1[0x36] == -1) {
    FUN_00408740(param_1,"Row has too many bytes to allocate in memory.");
  }
  pvVar4 = FUN_00408ba0(param_1,param_1[0x36] + 1);
  *(void **)(param_1 + 0x3a) = pvVar4;
  FUN_00408b10(param_1,pvVar4,0,param_1[0x36] + 1);
  param_1[0x1b] = param_1[0x1b] | 0x40;
  return;
}



uint __cdecl FUN_00409d20(int *param_1,undefined *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00408c50(param_2);
  if (0x7fffffff < uVar1) {
    FUN_00408740(param_1,"PNG unsigned integer out of range.\n");
  }
  return uVar1;
}



undefined4 __cdecl FUN_00409d50(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[0x2c];
  if (uVar1 < param_2) {
    do {
      FUN_00408ca0(param_1,(uint *)param_1[0x2b],param_1[0x2c]);
      param_2 = param_2 - uVar1;
    } while (uVar1 < param_2);
  }
  if (param_2 != 0) {
    FUN_00408ca0(param_1,(uint *)param_1[0x2b],param_2);
  }
  uVar1 = FUN_00408cd0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x47) & 0x20) == 0) || ((param_1[0x1b] & 0x200U) != 0)) &&
     (((*(byte *)(param_1 + 0x47) & 0x20) != 0 || ((param_1[0x1b] & 0x400U) == 0)))) {
    FUN_00408850(param_1);
    return 1;
  }
  FUN_00408880((int)param_1);
  return 1;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl
FUN_00409e10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  byte unaff_retaddr;
  undefined auStack32 [4];
  undefined4 uStack28;
  uint local_18;
  uint uStack20;
  uint *puStack16;
  uint uStack12;
  undefined auStack8 [4];
  undefined4 local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack32;
  local_18 = param_2;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    FUN_00408740(param_1,"Out of place IHDR");
  }
  if (param_5 != 0xd) {
    FUN_00408740(param_1,"Invalid IHDR chunk");
  }
  param_1[0x1a] = param_1[0x1a] | 1;
  FUN_00408ca0(param_1,&uStack12,0xd);
  FUN_00409d50(param_1,0);
  uVar2 = FUN_00409d20(param_1,(undefined *)&uStack12);
  uVar3 = FUN_00409d20(param_1,auStack8);
  local_18 = (uint)local_4._3_1_;
  uStack20 = (uint)unaff_retaddr;
  *(byte *)((int)param_1 + 0x123) = unaff_retaddr;
  *(byte *)(param_1 + 0x8e) = local_4._3_1_;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(char *)((int)param_1 + 0x127) = (char)local_4;
  *(byte *)((int)param_1 + 0x126) = local_4._1_1_;
  *(byte *)(param_1 + 0x98) = local_4._2_1_;
  switch(local_4._1_1_) {
  case 0:
  case 3:
    *(undefined *)((int)param_1 + 0x12a) = 1;
    break;
  case 2:
    *(undefined *)((int)param_1 + 0x12a) = 3;
    break;
  case 4:
    *(undefined *)((int)param_1 + 0x12a) = 2;
    break;
  case 6:
    *(undefined *)((int)param_1 + 0x12a) = 4;
  }
  bVar1 = *(char *)((int)param_1 + 0x12a) * (char)local_4;
  *(byte *)((int)param_1 + 0x129) = bVar1;
  if (bVar1 < 8) {
    uVar4 = bVar1 * uVar2 + 7 >> 3;
  }
  else {
    uVar4 = (bVar1 >> 3) * uVar2;
  }
  param_1[0x36] = uVar4;
  FUN_004115e0(param_1,puStack16,uVar2,uVar3,local_4 & 0xff,(uint)local_4._1_1_,uStack20,
               (uint)local_4._2_1_,local_18,unaff_EBP,unaff_EBX);
  uStack28 = 0x409f65;
  FUN_00412237();
  return;
}



void __cdecl
FUN_00409f90(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined uStack756;
  undefined uStack755;
  undefined uStack754;
  undefined auStack752 [2];
  undefined auStack750 [750];
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    pcVar6 = "Missing IHDR before PLTE";
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid PLTE after IDAT");
      FUN_00409d50(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) goto LAB_00409fe6;
    pcVar6 = "Duplicate PLTE chunk";
  }
  FUN_00408740(param_1,pcVar6);
LAB_00409fe6:
  param_1[0x1a] = param_1[0x1a] | 2;
  if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
    FUN_004087f0((int)param_1,"Ignoring PLTE chunk in grayscale PNG");
    FUN_00409d50(param_1,param_5);
    return;
  }
  if ((0x300 < param_5) ||
     (param_5 != param_5 / 3 + ((uint)((ulonglong)param_5 * 0xaaaaaaab >> 0x20) & 0xfffffffe))) {
    if (*(byte *)((int)param_1 + 0x126) != 3) {
      FUN_004087f0((int)param_1,"Invalid palette chunk");
      FUN_00409d50(param_1,param_5);
      return;
    }
    FUN_00408740(param_1,"Invalid palette chunk");
  }
  iVar2 = (int)param_5 / 3;
  if (0 < iVar2) {
    puVar5 = auStack750;
    iVar4 = iVar2;
    do {
      FUN_00408ca0(param_1,(uint *)&uStack756,3);
      puVar5[-2] = uStack756;
      puVar5[-1] = uStack755;
      *puVar5 = uStack754;
      puVar5 = puVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00409d50(param_1,0);
  FUN_00411a50(param_1,param_6,auStack752,iVar2);
  if (((*(char *)((int)param_1 + 0x126) == '\x03') && (param_6 != 0)) &&
     ((*(byte *)(param_6 + 8) & 0x10) != 0)) {
    uVar3 = (ushort)iVar2;
    if (uVar3 <= *(ushort *)((int)param_1 + 0x11a) && *(ushort *)((int)param_1 + 0x11a) != uVar3) {
      FUN_004087f0((int)param_1,"Truncating incorrect tRNS chunk length");
      *(ushort *)((int)param_1 + 0x11a) = uVar3;
    }
    if (uVar3 <= *(ushort *)(param_6 + 0x16) && *(ushort *)(param_6 + 0x16) != uVar3) {
      FUN_004087f0((int)param_1,"Truncating incorrect info tRNS chunk length");
      *(ushort *)(param_6 + 0x16) = uVar3;
    }
  }
  return;
}



void __cdecl FUN_0040a120(int *param_1)

{
  uint in_stack_00000014;
  
  if (((param_1[0x1a] & 1U) == 0) || ((param_1[0x1a] & 4U) == 0)) {
    FUN_00408740(param_1,"No image in file");
  }
  param_1[0x1a] = param_1[0x1a] | 0x18;
  if (in_stack_00000014 != 0) {
    FUN_004087f0((int)param_1,"Incorrect IEND chunk length");
  }
  FUN_00409d50(param_1,in_stack_00000014);
  return;
}



void __cdecl FUN_0040a170(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  FILE *pFVar4;
  char *_Format;
  
  piVar2 = param_1;
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid gAMA after IDAT");
      FUN_00409d50(piVar2,param_3);
      return;
    }
    if ((uVar1 & 2) != 0) {
      FUN_004087f0((int)param_1,"Out of place gAMA chunk");
    }
  }
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
     ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
    FUN_004087f0((int)piVar2,"Duplicate gAMA chunk");
    FUN_00409d50(piVar2,param_3);
    return;
  }
  if (param_3 != 4) {
    FUN_004087f0((int)piVar2,"Incorrect gAMA chunk length");
    FUN_00409d50(piVar2,param_3);
    return;
  }
  FUN_00408ca0(piVar2,(uint *)&param_1,4);
  iVar3 = FUN_00409d50(piVar2,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00408c50((undefined *)&param_1);
    if (iVar3 == 0) {
      FUN_004087f0((int)piVar2,"Ignoring gAMA chunk with gamma=0");
      return;
    }
    if (((*(uint *)(param_2 + 8) & 0x800) != 0) && ((iVar3 < 45000 || (46000 < iVar3)))) {
      FUN_004087f0((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
      _Format = "gamma = (%d/100000)\n";
      pFVar4 = __iob_func();
      fprintf(pFVar4 + 2,_Format);
      return;
    }
    *(float *)(piVar2 + 0x57) = (float)iVar3 / 100000.00000000;
    FUN_00411420(piVar2,param_2,(double)((float)iVar3 / 100000.00000000));
    FUN_004114a0((int)piVar2,param_2,iVar3);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl FUN_0040a2e0(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_4;
  
  uVar2 = param_1[0x1a];
  local_4 = 0;
  if ((uVar2 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar2 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid sBIT after IDAT");
      FUN_00409d50(param_1,param_3);
      return;
    }
    if ((uVar2 & 2) != 0) {
      FUN_004087f0((int)param_1,"Out of place sBIT chunk");
    }
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    FUN_004087f0((int)param_1,"Duplicate sBIT chunk");
    FUN_00409d50(param_1,param_3);
    return;
  }
  uVar2 = 3;
  if (*(char *)((int)param_1 + 0x126) != '\x03') {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x12a);
  }
  if ((param_3 == uVar2) && (param_3 < 5)) {
    FUN_00408ca0(param_1,&local_4,uVar2);
    iVar3 = FUN_00409d50(param_1,0);
    if (iVar3 == 0) {
      piVar1 = param_1 + 0x5f;
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        *(undefined *)((int)param_1 + 0x17f) = (undefined)local_4;
        *(undefined *)piVar1 = (undefined)local_4;
        *(undefined *)((int)param_1 + 0x17d) = (undefined)local_4;
        *(undefined *)((int)param_1 + 0x17e) = (undefined)local_4;
        *(undefined *)(param_1 + 0x60) = local_4._1_1_;
        FUN_00411ae0((int)param_1,param_2,piVar1);
        return;
      }
      *(undefined *)piVar1 = (undefined)local_4;
      *(undefined *)((int)param_1 + 0x17d) = local_4._1_1_;
      *(undefined *)((int)param_1 + 0x17e) = local_4._2_1_;
      *(undefined *)(param_1 + 0x60) = local_4._3_1_;
      FUN_00411ae0((int)param_1,param_2,piVar1);
      return;
    }
  }
  else {
    FUN_004087f0((int)param_1,"Incorrect sBIT chunk length");
    FUN_00409d50(param_1,param_3);
  }
  return;
}



void __cdecl FUN_0040a450(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  FILE *pFVar3;
  char *_Format;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uStack124;
  uint uStack120;
  uint uStack116;
  uint uStack112;
  uint uStack108;
  uint uStack104;
  uint uStack100;
  float fStack96;
  float fStack92;
  float fStack88;
  float fStack84;
  float fStack80;
  float fStack76;
  float fStack72;
  float fStack68;
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before cHRM");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid cHRM after IDAT");
      FUN_00409d50(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) != 0) {
      FUN_004087f0((int)param_1,"Missing PLTE before cHRM");
    }
  }
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
     ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
    FUN_004087f0((int)param_1,"Duplicate cHRM chunk");
    FUN_00409d50(param_1,param_3);
    return;
  }
  if (param_3 != 0x20) {
    FUN_004087f0((int)param_1,"Incorrect cHRM chunk length");
    FUN_00409d50(param_1,param_3);
    return;
  }
  FUN_00408ca0(param_1,&uStack124,4);
  uStack100 = FUN_00408c50((undefined *)&uStack124);
  FUN_00408ca0(param_1,&uStack124,4);
  uStack104 = FUN_00408c50((undefined *)&uStack124);
  if (((uStack100 < 0x13881) && (uStack104 < 0x13881)) && (uStack104 + uStack100 < 0x186a1)) {
    FUN_00408ca0(param_1,&uStack124,4);
    uStack108 = FUN_00408c50((undefined *)&uStack124);
    FUN_00408ca0(param_1,&uStack124,4);
    uStack112 = FUN_00408c50((undefined *)&uStack124);
    if (((80000 < uStack108) || (80000 < uStack112)) || (100000 < uStack112 + uStack108)) {
      FUN_004087f0((int)param_1,"Invalid cHRM red point");
      FUN_00409d50(param_1,0x10);
      return;
    }
    FUN_00408ca0(param_1,&uStack124,4);
    uStack116 = FUN_00408c50((undefined *)&uStack124);
    FUN_00408ca0(param_1,&uStack124,4);
    uStack120 = FUN_00408c50((undefined *)&uStack124);
    if (((80000 < uStack116) || (80000 < uStack120)) || (100000 < uStack120 + uStack116)) {
      FUN_004087f0((int)param_1,"Invalid cHRM green point");
      FUN_00409d50(param_1,8);
      return;
    }
    FUN_00408ca0(param_1,&uStack124,4);
    uVar1 = FUN_00408c50((undefined *)&uStack124);
    fStack92 = (float)uVar1;
    FUN_00408ca0(param_1,&uStack124,4);
    uVar2 = FUN_00408c50((undefined *)&uStack124);
    if (((uVar1 < 0x13881) && (uVar2 < 0x13881)) && (uVar2 + uVar1 < 0x186a1)) {
      fStack68 = (float)uStack100 / 100000.00000000;
      fStack72 = (float)uStack104 / 100000.00000000;
      fStack76 = (float)uStack108 / 100000.00000000;
      fStack80 = (float)uStack112 / 100000.00000000;
      fStack84 = (float)uStack116 / 100000.00000000;
      fStack88 = (float)uStack120 / 100000.00000000;
      fStack92 = (float)(int)fStack92 / 100000.00000000;
      fStack96 = (float)uVar2 / 100000.00000000;
      if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
        FUN_00410ef0(param_1,param_2,(double)fStack68,(double)fStack72,(double)fStack76,
                     (double)fStack80,(double)fStack84,(double)fStack88,(double)fStack92);
        FUN_00411230(param_1,param_2,uStack100,uStack104,uStack108,uStack112,uStack116,uStack120,
                     uVar1,uVar2);
        FUN_00409d50(param_1,0);
        return;
      }
      if (((((2000 < uStack100 - 0x763e) || (2000 < uStack104 - 0x7c9c)) ||
           ((2000 < uStack108 - 63000 ||
            ((((2000 < uStack112 - 32000 || (2000 < uStack116 - 29000)) ||
              (2000 < uStack120 - 59000)) || (((int)uVar1 < 14000 || (16000 < (int)uVar1)))))))) ||
          ((int)uVar2 < 5000)) || (7000 < (int)uVar2)) {
        FUN_004087f0((int)param_1,"Ignoring incorrect cHRM value when sRGB is also present");
        dVar7 = (double)fStack80;
        dVar6 = (double)fStack76;
        dVar5 = (double)fStack72;
        dVar4 = (double)fStack68;
        _Format = "wx=%f, wy=%f, rx=%f, ry=%f\n";
        pFVar3 = __iob_func();
        fprintf(pFVar3 + 2,_Format,dVar4,dVar5,dVar6,dVar7);
        dVar7 = (double)fStack92;
        dVar6 = (double)fStack88;
        dVar5 = (double)fStack84;
        _Format = "gx=%f, gy=%f, bx=%f, by=%f\n";
        pFVar3 = __iob_func();
        fprintf(pFVar3 + 2,_Format,dVar5,dVar6,dVar7);
      }
      FUN_00409d50(param_1,0);
      return;
    }
    fStack96 = (float)uVar2;
    FUN_004087f0((int)param_1,"Invalid cHRM blue point");
    FUN_00409d50(param_1,0);
    return;
  }
  FUN_004087f0((int)param_1,"Invalid cHRM white point");
  FUN_00409d50(param_1,0x18);
  return;
}



void __cdecl FUN_0040a940(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  FILE *pFVar4;
  char *_Format;
  
  piVar2 = param_1;
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid sRGB after IDAT");
      FUN_00409d50(piVar2,param_3);
      return;
    }
    if ((uVar1 & 2) != 0) {
      FUN_004087f0((int)param_1,"Out of place sRGB chunk");
    }
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
    FUN_004087f0((int)piVar2,"Duplicate sRGB chunk");
    FUN_00409d50(piVar2,param_3);
    return;
  }
  if (param_3 != 1) {
    FUN_004087f0((int)piVar2,"Incorrect sRGB chunk length");
    FUN_00409d50(piVar2,param_3);
    return;
  }
  FUN_00408ca0(piVar2,(uint *)&param_1,1);
  iVar3 = FUN_00409d50(piVar2,0);
  if (iVar3 == 0) {
    if (3 < (byte)param_1) {
      FUN_004087f0((int)piVar2,"Unknown sRGB intent");
      return;
    }
    if (((*(byte *)(param_2 + 8) & 1) != 0) &&
       ((*(int *)(param_2 + 0xfc) < 45000 || (46000 < *(int *)(param_2 + 0xfc))))) {
      FUN_004087f0((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
      iVar3 = piVar2[0x8d];
      _Format = "incorrect gamma=(%d/100000)\n";
      pFVar4 = __iob_func();
      fprintf(pFVar4 + 2,_Format,iVar3);
    }
    if (((*(byte *)(param_2 + 8) & 4) != 0) &&
       (((((*(int *)(param_2 + 0x100) < 0x763e || (0x7e0e < *(int *)(param_2 + 0x100))) ||
          (*(int *)(param_2 + 0x104) < 0x7c9c)) ||
         ((((0x846c < *(int *)(param_2 + 0x104) || (*(int *)(param_2 + 0x108) < 63000)) ||
           ((65000 < *(int *)(param_2 + 0x108) ||
            ((*(int *)(param_2 + 0x10c) < 32000 || (34000 < *(int *)(param_2 + 0x10c))))))) ||
          (*(int *)(param_2 + 0x110) < 29000)))) ||
        (((((31000 < *(int *)(param_2 + 0x110) || (*(int *)(param_2 + 0x114) < 59000)) ||
           (61000 < *(int *)(param_2 + 0x114))) ||
          ((*(int *)(param_2 + 0x118) < 14000 || (16000 < *(int *)(param_2 + 0x118))))) ||
         ((*(int *)(param_2 + 0x11c) < 5000 || (7000 < *(int *)(param_2 + 0x11c))))))))) {
      FUN_004087f0((int)piVar2,"Ignoring incorrect cHRM value when sRGB is also present");
    }
    FUN_00411b30((int)piVar2,param_2,(byte)param_1);
  }
  return;
}



void __cdecl FUN_0040ab30(int *param_1,int param_2,uint param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  byte bVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
  
  piVar5 = param_1;
  uVar3 = param_1[0x1a];
  if ((uVar3 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before iCCP");
  }
  else {
    if ((uVar3 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid iCCP after IDAT");
      FUN_00409d50(piVar5,param_3);
      return;
    }
    if ((uVar3 & 2) != 0) {
      FUN_004087f0((int)param_1,"Out of place iCCP chunk");
    }
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x1000) != 0)) {
    FUN_004087f0((int)piVar5,"Duplicate iCCP chunk");
    FUN_00409d50(piVar5,param_3);
    return;
  }
  puVar7 = (uint *)FUN_00408ba0(piVar5,param_3 + 1);
  FUN_00408ca0(piVar5,puVar7,param_3);
  iVar8 = FUN_00409d50(piVar5,0);
  if (iVar8 != 0) {
    FUN_00408bf0((int)piVar5,puVar7);
    return;
  }
  *(byte *)((int)puVar7 + param_3) = 0;
  cVar2 = *(char *)puVar7;
  puVar12 = puVar7;
  while (cVar2 != '\0') {
    puVar12 = (uint *)((int)puVar12 + 1);
    cVar2 = *(char *)puVar12;
  }
  if ((byte *)((int)puVar7 + param_3) <= (byte *)((int)puVar12 + 1)) {
    FUN_00408bf0((int)piVar5,puVar7);
    FUN_004087f0((int)piVar5,"Malformed iCCP chunk");
    return;
  }
  bVar6 = *(byte *)((int)puVar12 + 1);
  if (bVar6 != 0) {
    FUN_004087f0((int)piVar5,"Ignoring nonzero compression type in iCCP chunk");
    bVar6 = 0;
  }
  piVar11 = (int *)((int)puVar12 + (2 - (int)puVar7));
  pcVar9 = (char *)FUN_00408d40(piVar5,(uint)bVar6,puVar7,param_3,(size_t)piVar11,(size_t *)&param_1
                               );
  piVar10 = (int *)((int)param_1 - (int)piVar11);
  if ((piVar11 <= param_1) && ((int *)0x3 < piVar10)) {
    pvVar1 = (void *)((int)piVar11 + (int)pcVar9);
    piVar11 = (int *)CONCAT31(CONCAT21(CONCAT11(*(undefined *)((int)piVar11 + (int)pcVar9),
                                                *(undefined *)((int)pvVar1 + 1)),
                                       *(undefined *)((int)pvVar1 + 2)),
                              *(undefined *)((int)pvVar1 + 3));
    if ((piVar10 <= piVar11) && (bVar4 = piVar10 < piVar11, piVar11 = piVar10, bVar4)) {
      FUN_00408bf0((int)piVar5,pcVar9);
      FUN_004087f0((int)piVar5,"Ignoring truncated iCCP profile.\n");
      return;
    }
    FUN_00411c10(piVar5,param_2,pcVar9,bVar6,pvVar1,(size_t)piVar11);
    FUN_00408bf0((int)piVar5,pcVar9);
    return;
  }
  FUN_00408bf0((int)piVar5,pcVar9);
  FUN_004087f0((int)piVar5,"Profile size field missing from iCCP chunk");
  return;
}



void __cdecl FUN_0040ace0(int *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5)

{
  ushort *puVar1;
  char cVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint *puVar8;
  byte *pbVar9;
  void *pvVar10;
  uint *puStack8;
  char cStack4;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before sPLT");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid sPLT after IDAT");
      FUN_00409d50(param_1,(uint)param_3);
      return;
    }
  }
  puVar4 = (uint *)FUN_00408ba0(param_1,param_5 + 1);
  FUN_00408ca0(param_1,puVar4,param_5);
  iVar5 = FUN_00409d50(param_1,0);
  if (iVar5 != 0) {
    FUN_00408bf0((int)param_1,puVar4);
    return;
  }
  *(char *)(param_5 + (int)puVar4) = '\0';
  cVar2 = *(char *)puVar4;
  puVar8 = puVar4;
  while (cVar2 != '\0') {
    puVar8 = (uint *)((int)puVar8 + 1);
    cVar2 = *(char *)puVar8;
  }
  if ((char *)(param_5 + (int)puVar4) < (char *)((int)puVar8 + 1)) {
    FUN_00408bf0((int)param_1,puVar4);
    FUN_004087f0((int)param_1,"malformed sPLT chunk");
    return;
  }
  cStack4 = *(char *)((int)puVar8 + 1);
  pbVar9 = (byte *)((int)puVar8 + 2);
  iVar6 = (int)puVar4 + (param_5 - (int)pbVar9);
  iVar5 = (uint)(cStack4 != '\b') * 4 + 6;
  uVar7 = iVar6 / iVar5;
  if (iVar6 % iVar5 != 0) {
    FUN_00408bf0((int)param_1,puVar4);
    FUN_004087f0((int)param_1,"sPLT chunk has bad length");
    return;
  }
  if (0x19999999 < uVar7) {
    FUN_004087f0((int)param_1,"sPLT chunk too long");
    return;
  }
  pvVar10 = (void *)FUN_00408c20(param_1,uVar7 * 10);
  if (pvVar10 == (void *)0x0) {
    FUN_004087f0((int)param_1,"sPLT chunk requires too much memory");
    return;
  }
  iVar5 = 0;
  if (0 < (int)uVar7) {
    iVar6 = 0;
    do {
      puVar1 = (ushort *)(iVar6 + (int)pvVar10);
      if (cStack4 == '\b') {
        *puVar1 = (ushort)*pbVar9;
        puVar1[1] = (ushort)pbVar9[1];
        puVar1[2] = (ushort)pbVar9[2];
        puVar1[3] = (ushort)pbVar9[3];
        pbVar9 = pbVar9 + 4;
      }
      else {
        sVar3 = FUN_00408c80(pbVar9);
        *extraout_EDX = sVar3;
        sVar3 = FUN_00408c80(pbVar9 + 2);
        *(short *)(extraout_EDX_00 + 2) = sVar3;
        sVar3 = FUN_00408c80(pbVar9 + 4);
        *(short *)(extraout_EDX_01 + 4) = sVar3;
        sVar3 = FUN_00408c80(pbVar9 + 6);
        *(short *)(extraout_EDX_02 + 6) = sVar3;
        pbVar9 = pbVar9 + 8;
      }
      sVar3 = FUN_00408c80(pbVar9);
      iVar5 = iVar5 + 1;
      *(short *)(extraout_EDX_03 + 8) = sVar3;
      pbVar9 = pbVar9 + 2;
      iVar6 = iVar6 + 10;
      param_1 = param_3;
    } while (iVar5 < (int)uVar7);
  }
  puStack8 = puVar4;
  FUN_00411fc0(param_1,param_4,(char **)&puStack8,1);
  FUN_00408bf0((int)param_1,puVar4);
  FUN_00408bf0((int)param_1,pvVar10);
  return;
}



void __cdecl FUN_0040af00(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined auStack272 [4];
  undefined4 uStack268;
  uint uStack264;
  undefined4 uStack260;
  byte abStack256 [4];
  uint auStack252 [62];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack272;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before tRNS");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid tRNS after IDAT");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate tRNS chunk");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
  }
  cVar1 = *(char *)((int)param_1 + 0x126);
  if (cVar1 == '\0') {
    if (param_5 == 2) {
      FUN_00408ca0(param_1,&uStack264,2);
      *(undefined2 *)((int)param_1 + 0x11a) = 1;
      sVar2 = FUN_00408c80((byte *)&uStack264);
      *(short *)(param_1 + 0x65) = sVar2;
LAB_0040b0d3:
      iVar3 = FUN_00409d50(param_1,0);
      if (iVar3 == 0) {
        FUN_00411f30(param_1,param_2,auStack252,(uint)*(ushort *)((int)param_1 + 0x11a),param_1 + 99
                    );
        uStack268 = 0x40b111;
        FUN_00412237();
        return;
      }
      goto LAB_0040b134;
    }
LAB_0040af58:
    FUN_004087f0((int)param_1,"Incorrect tRNS chunk length");
  }
  else {
    if (cVar1 == '\x02') {
      if (param_5 == 6) {
        FUN_00408ca0(param_1,&uStack260,6);
        *(undefined2 *)((int)param_1 + 0x11a) = 1;
        sVar2 = FUN_00408c80((byte *)&uStack260);
        *(short *)((int)param_1 + 0x18e) = sVar2;
        sVar2 = FUN_00408c80((byte *)((int)&uStack260 + 2));
        *(short *)(param_1 + 100) = sVar2;
        sVar2 = FUN_00408c80(abStack256);
        *(short *)((int)param_1 + 0x192) = sVar2;
        goto LAB_0040b0d3;
      }
      goto LAB_0040af58;
    }
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
        FUN_004087f0((int)param_1,"Missing PLTE before tRNS");
      }
      if ((*(ushort *)(param_1 + 0x46) < param_5) || (0x100 < param_5)) goto LAB_0040af58;
      if (param_5 != 0) {
        FUN_00408ca0(param_1,auStack252,param_5);
        *(undefined2 *)((int)param_1 + 0x11a) = (short)param_5;
        goto LAB_0040b0d3;
      }
      FUN_004087f0((int)param_1,"Zero length tRNS chunk");
    }
    else {
      FUN_004087f0((int)param_1,"tRNS chunk not allowed with alpha channel");
    }
  }
  FUN_00409d50(param_1,param_5);
LAB_0040b134:
  uStack268 = 0x40b145;
  FUN_00412237();
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl FUN_0040b150(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined auStack12 [4];
  undefined4 uStack8;
  uint local_4;
  
  piVar1 = param_1;
  local_4 = DAT_0041c340 ^ (uint)auStack12;
  uVar3 = param_1[0x1a];
  if ((uVar3 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before bKGD");
  }
  else {
    if ((uVar3 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid bKGD after IDAT");
      FUN_00409d50(piVar1,param_3);
      FUN_00412237();
      return;
    }
    if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((uVar3 & 2) == 0)) {
      FUN_004087f0((int)param_1,"Missing PLTE before bKGD");
      FUN_00409d50(piVar1,param_3);
      FUN_00412237();
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate bKGD chunk");
      FUN_00409d50(piVar1,param_3);
      FUN_00412237();
      return;
    }
  }
  if (*(byte *)((int)piVar1 + 0x126) == 3) {
    uVar3 = 1;
  }
  else {
    uVar3 = ((uint)*(byte *)((int)piVar1 + 0x126) & 2 | 1) * 2;
  }
  if (param_5 != uVar3) {
    FUN_004087f0((int)piVar1,"Incorrect bKGD chunk length");
    FUN_00409d50(piVar1,param_5);
    uStack8 = 0x40b26d;
    FUN_00412237();
    return;
  }
  FUN_00408ca0(piVar1,&local_4,uVar3);
  iVar4 = FUN_00409d50(piVar1,0);
  if (iVar4 == 0) {
    if (*(byte *)((int)piVar1 + 0x126) == 3) {
      *(byte *)(piVar1 + 0x4e) = (byte)local_4;
      if (*(ushort *)(param_2 + 0x14) != 0) {
        if (*(ushort *)(param_2 + 0x14) < (ushort)(byte)local_4) {
          FUN_004087f0((int)piVar1,"Incorrect bKGD chunk index value");
          uStack8 = 0x40b2d6;
          FUN_00412237();
          return;
        }
        iVar4 = (local_4 & 0xff) * 3;
        iVar5 = iVar4 + piVar1[0x45];
        *(ushort *)((int)piVar1 + 0x13a) = (ushort)*(byte *)(iVar4 + piVar1[0x45]);
        *(ushort *)(piVar1 + 0x4f) = (ushort)*(byte *)(iVar5 + 1);
        *(ushort *)((int)piVar1 + 0x13e) = (ushort)*(byte *)(iVar5 + 2);
      }
    }
    else {
      if ((*(byte *)((int)piVar1 + 0x126) & 2) == 0) {
        sVar2 = FUN_00408c80((byte *)&local_4);
        *(short *)(piVar1 + 0x50) = sVar2;
        *(short *)(piVar1 + 0x4f) = sVar2;
        *(short *)((int)piVar1 + 0x13a) = sVar2;
      }
      else {
        sVar2 = FUN_00408c80((byte *)&local_4);
        *(short *)((int)piVar1 + 0x13a) = sVar2;
        sVar2 = FUN_00408c80((byte *)((int)&local_4 + 2));
        *(short *)(piVar1 + 0x4f) = sVar2;
        sVar2 = FUN_00408c80((byte *)register0x00000010);
      }
      *(short *)((int)piVar1 + 0x13e) = sVar2;
    }
    FUN_00410ec0((int)piVar1,param_2,piVar1 + 0x4e);
  }
  uStack8 = 0x40b389;
  FUN_00412237();
  return;
}



void __cdecl FUN_0040b390(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined auStack520 [4];
  undefined4 uStack516;
  uint uStack512;
  short asStack508 [252];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack520;
  uVar3 = param_1[0x1a];
  if ((uVar3 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before hIST");
  }
  else {
    if ((uVar3 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid hIST after IDAT");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
    if ((uVar3 & 2) == 0) {
      FUN_004087f0((int)param_1,"Missing PLTE before hIST");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate hIST chunk");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
  }
  uVar3 = param_5 >> 1;
  if ((uVar3 == (uint)*(ushort *)(param_1 + 0x46)) && (uVar3 < 0x101)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        FUN_00408ca0(param_1,&uStack512,2);
        sVar1 = FUN_00408c80((byte *)&uStack512);
        asStack508[uVar4] = sVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    iVar2 = FUN_00409d50(param_1,0);
    if (iVar2 == 0) {
      FUN_00411520(param_1,param_2,(int)asStack508);
    }
  }
  else {
    FUN_004087f0((int)param_1,"Incorrect hIST chunk length");
    FUN_00409d50(param_1,param_5);
  }
  uStack516 = 0x40b527;
  FUN_00412237();
  return;
}



void __cdecl FUN_0040b530(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined unaff_retaddr;
  undefined auStack16 [4];
  undefined4 uStack12;
  uint uStack8;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack16;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before pHYs");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid pHYs after IDAT");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate pHYs chunk");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
  }
  if (param_5 != 9) {
    FUN_004087f0((int)param_1,"Incorrect pHYs chunk length");
    FUN_00409d50(param_1,param_5);
    uStack12 = 0x40b58e;
    FUN_00412237();
    return;
  }
  FUN_00408ca0(param_1,&uStack8,9);
  iVar1 = FUN_00409d50(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_00408c50((undefined *)&local_4);
    uVar3 = FUN_00408c50((undefined *)&uStack8);
    FUN_00411a20((int)param_1,param_2,uVar3,uVar2,unaff_retaddr);
  }
  uStack12 = 0x40b64a;
  FUN_00412237();
  return;
}



void __cdecl FUN_0040b650(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined unaff_retaddr;
  undefined auStack16 [4];
  undefined4 uStack12;
  uint uStack8;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack16;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid oFFs after IDAT");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate oFFs chunk");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
  }
  if (param_5 != 9) {
    FUN_004087f0((int)param_1,"Incorrect oFFs chunk length");
    FUN_00409d50(param_1,param_5);
    uStack12 = 0x40b6ae;
    FUN_00412237();
    return;
  }
  FUN_00408ca0(param_1,&uStack8,9);
  iVar1 = FUN_00409d50(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_00408c50((undefined *)&local_4);
    uVar3 = FUN_00408c50((undefined *)&uStack8);
    FUN_00411810((int)param_1,param_2,uVar3,uVar2,unaff_retaddr);
  }
  uStack12 = 0x40b76d;
  FUN_00412237();
  return;
}



void __cdecl FUN_0040b780(int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before pCAL");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid pCAL after IDAT");
      FUN_00409d50(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate pCAL chunk");
      FUN_00409d50(param_1,param_3);
      return;
    }
  }
  puVar5 = (uint *)FUN_00408c20(param_1,param_5 + 1);
  if (puVar5 == (uint *)0x0) {
    FUN_004087f0((int)param_1,"No memory for pCAL purpose.");
    return;
  }
  FUN_00408ca0(param_1,puVar5,param_5);
  iVar6 = FUN_00409d50(param_1,0);
  if (iVar6 != 0) {
    FUN_00408bf0((int)param_1,puVar5);
    return;
  }
  puVar1 = (uint *)((int)puVar5 + param_5);
  *(char *)puVar1 = '\0';
  cVar4 = *(char *)puVar5;
  puVar11 = puVar5;
  while (cVar4 != '\0') {
    puVar11 = (uint *)((int)puVar11 + 1);
    cVar4 = *(char *)puVar11;
  }
  if (puVar11 + 3 < puVar1) {
    uVar7 = FUN_00408c50((char *)((int)puVar11 + 1));
    uVar8 = FUN_00408c50((char *)((int)puVar11 + 5));
    bVar2 = *(byte *)((int)puVar11 + 10);
    bVar3 = *(byte *)((int)puVar11 + 9);
    puVar11 = (uint *)((int)puVar11 + 0xb);
    if (bVar3 == 0) {
      if (bVar2 == 2) goto LAB_0040b8f9;
    }
    else {
      if ((bVar3 == 1) || (bVar3 == 2)) {
        if (bVar2 == 3) goto LAB_0040b8f9;
      }
      else {
        if (bVar3 != 3) {
          if (3 < bVar3) {
            FUN_004087f0((int)param_1,"Unrecognized equation type for pCAL chunk");
          }
LAB_0040b8f9:
          cVar4 = *(char *)puVar11;
          puVar12 = puVar11;
          while (cVar4 != '\0') {
            puVar12 = (uint *)((int)puVar12 + 1);
            cVar4 = *(char *)puVar12;
          }
          uVar9 = (uint)bVar2;
          pvVar10 = (void *)FUN_00408c20(param_1,uVar9 * 4);
          if (pvVar10 == (void *)0x0) {
            FUN_00408bf0((int)param_1,puVar5);
            FUN_004087f0((int)param_1,"No memory for pCAL params.");
            return;
          }
          iVar6 = 0;
          if (bVar2 != 0) {
            do {
              puVar12 = (uint *)((int)puVar12 + 1);
              *(uint **)((int)pvVar10 + iVar6 * 4) = puVar12;
              cVar4 = *(char *)puVar12;
              while (cVar4 != '\0') {
                if (puVar1 < puVar12) goto LAB_0040b9b7;
                puVar12 = (uint *)((int)puVar12 + 1);
                cVar4 = *(char *)puVar12;
              }
              if (puVar1 < puVar12) {
LAB_0040b9b7:
                FUN_004087f0((int)param_1,"Invalid pCAL data");
                FUN_00408bf0((int)param_1,puVar5);
                FUN_00408bf0((int)param_1,pvVar10);
                return;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar9);
          }
          FUN_00411840(param_1,param_4,(char *)puVar5,uVar7,uVar8,bVar3,uVar9,(char *)puVar11,
                       (int)pvVar10);
          FUN_00408bf0((int)param_1,puVar5);
          FUN_00408bf0((int)param_1,pvVar10);
          return;
        }
        if (bVar2 == 4) goto LAB_0040b8f9;
      }
    }
    pcVar13 = "Invalid pCAL parameters for equation type";
  }
  else {
    pcVar13 = "Invalid pCAL data";
  }
  FUN_004087f0((int)param_1,pcVar13);
  FUN_00408bf0((int)param_1,puVar5);
  return;
}


/*
Unable to decompile 'FUN_0040b9e0'
Cause: 
Low-level Error: Overlapping input varnodes
*/


// WARNING: Could not reconcile some variable overlaps

void __cdecl FUN_0040bba0(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined auStack20 [4];
  undefined4 uStack16;
  short sStack12;
  undefined uStack10;
  undefined uStack9;
  undefined4 local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack20;
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00408740(param_1,"Out of place tIME chunk");
  }
  else {
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate tIME chunk");
      FUN_00409d50(param_1,param_3);
      FUN_00412237();
      return;
    }
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  if (param_5 != 7) {
    FUN_004087f0((int)param_1,"Incorrect tIME chunk length");
    FUN_00409d50(param_1,param_5);
    uStack16 = 0x40bc06;
    FUN_00412237();
    return;
  }
  FUN_00408ca0(param_1,&local_4,7);
  iVar1 = FUN_00409d50(param_1,0);
  if (iVar1 == 0) {
    uStack9 = local_4._3_1_;
    uStack10 = local_4._2_1_;
    sStack12 = FUN_00408c80((byte *)&local_4);
    FUN_00411f00((int)param_1,param_2,(undefined4 *)&sStack12);
  }
  uStack16 = 0x40bcb5;
  FUN_00412237();
  return;
}



void __cdecl
FUN_0040bcc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before tEXt");
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  puVar3 = (uint *)FUN_00408c20(param_1,param_5 + 1);
  if (puVar3 == (uint *)0x0) {
    FUN_004087f0((int)param_1,"No memory to process text chunk.");
    return;
  }
  FUN_00408ca0(param_1,puVar3,param_5);
  iVar4 = FUN_00409d50(param_1,0);
  if (iVar4 != 0) {
    FUN_00408bf0((int)param_1,puVar3);
    return;
  }
  *(char *)(uint *)((int)puVar3 + param_5) = '\0';
  cVar2 = *(char *)puVar3;
  puVar6 = puVar3;
  while (cVar2 != '\0') {
    puVar6 = (uint *)((int)puVar6 + 1);
    cVar2 = *(char *)puVar6;
  }
  if (puVar6 != (uint *)((int)puVar3 + param_5)) {
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  puVar5 = (undefined4 *)FUN_00408c20(param_1,0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xffffffff;
    *(uint **)(puVar5 + 1) = puVar3;
    *(uint **)(puVar5 + 2) = puVar6;
    pcVar1 = (char *)((int)puVar6 + 1);
    do {
      cVar2 = *(char *)puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
    } while (cVar2 != '\0');
    *(uint **)(puVar5 + 3) = (uint *)((int)puVar6 - (int)pcVar1);
    iVar4 = FUN_00411d10(param_1,param_4,(int)puVar5,1);
    FUN_00408bf0((int)param_1,puVar3);
    FUN_00408bf0((int)param_1,puVar5);
    if (iVar4 != 0) {
      FUN_004087f0((int)param_1,"Insufficient memory to process text chunk.");
    }
    return;
  }
  FUN_004087f0((int)param_1,"Not enough memory to process text chunk.");
  FUN_00408bf0((int)param_1,puVar3);
  return;
}



void __cdecl
FUN_0040bde0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  uint *puVar8;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before zTXt");
  }
  uVar3 = param_5;
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  puVar4 = (uint *)FUN_00408c20(param_1,param_5 + 1);
  if (puVar4 == (uint *)0x0) {
    FUN_004087f0((int)param_1,"Out of memory processing zTXt chunk.");
    return;
  }
  FUN_00408ca0(param_1,puVar4,uVar3);
  iVar5 = FUN_00409d50(param_1,0);
  if (iVar5 != 0) {
    FUN_00408bf0((int)param_1,puVar4);
    return;
  }
  puVar1 = (uint *)((int)puVar4 + uVar3);
  *(char *)puVar1 = '\0';
  cVar2 = *(char *)puVar4;
  puVar8 = puVar4;
  while (cVar2 != '\0') {
    puVar8 = (uint *)((int)puVar8 + 1);
    cVar2 = *(char *)puVar8;
  }
  if (puVar8 == puVar1) {
    iVar5 = -1;
    FUN_004087f0((int)param_1,"Zero length zTXt chunk");
  }
  else {
    iVar5 = (int)*(char *)((int)puVar8 + 1);
    if (iVar5 != 0) {
      FUN_004087f0((int)param_1,"Unknown compression type in zTXt chunk");
      iVar5 = 0;
    }
    puVar8 = (uint *)((int)puVar8 + 2);
  }
  pvVar6 = (void *)FUN_00408d40(param_1,iVar5,puVar4,param_5,
                                (size_t)(uint *)((int)puVar8 - (int)puVar4),&param_5);
  piVar7 = (int *)FUN_00408c20(param_1,0x10);
  if (piVar7 != (int *)0x0) {
    *piVar7 = iVar5;
    *(void **)(piVar7 + 1) = pvVar6;
    piVar7[2] = (int)(uint *)((int)puVar8 - (int)puVar4) + (int)pvVar6;
    piVar7[3] = param_5;
    iVar5 = FUN_00411d10(param_1,param_4,(int)piVar7,1);
    FUN_00408bf0((int)param_1,piVar7);
    FUN_00408bf0((int)param_1,pvVar6);
    if (iVar5 != 0) {
      FUN_00408740(param_1,"Insufficient memory to store zTXt chunk.");
    }
    return;
  }
  FUN_004087f0((int)param_1,"Not enough memory to process zTXt chunk.");
  FUN_00408bf0((int)param_1,pvVar6);
  return;
}



void __cdecl FUN_0040bf40(int *param_1,undefined4 param_2,undefined4 param_3,size_t param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_20;
  int local_1c;
  uint uStack24;
  char acStack20 [4];
  void *pvStack16;
  uint *puStack12;
  size_t sStack8;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_20;
  local_20 = param_2;
  local_1c = 0;
  if ((param_1[0x1a] & 4U) != 0) {
    uVar2 = 4;
    piVar4 = &DAT_00416414;
    piVar5 = param_1 + 0x47;
    do {
      if (*piVar5 != *piVar4) goto LAB_0040bf9a;
      uVar2 = uVar2 - 4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (3 < uVar2);
    if (uVar2 == 0) {
LAB_0040bff7:
      iVar3 = 0;
    }
    else {
LAB_0040bf9a:
      iVar6 = (uint)*(byte *)piVar5 - (uint)*(byte *)piVar4;
      if (iVar6 == 0) {
        if (uVar2 == 1) goto LAB_0040bff7;
        iVar6 = (uint)*(byte *)((int)piVar5 + 1) - (uint)*(byte *)((int)piVar4 + 1);
        if (iVar6 == 0) {
          if (uVar2 == 2) goto LAB_0040bff7;
          iVar6 = (uint)*(byte *)((int)piVar5 + 2) - (uint)*(byte *)((int)piVar4 + 2);
          if (iVar6 == 0) {
            if ((uVar2 == 3) ||
               (iVar6 = (uint)*(byte *)((int)piVar5 + 3) - (uint)*(byte *)((int)piVar4 + 3),
               iVar6 == 0)) goto LAB_0040bff7;
          }
        }
      }
      iVar3 = 1;
      if (iVar6 < 1) {
        iVar3 = -1;
      }
    }
    if (iVar3 != 0) {
      param_1[0x1a] = param_1[0x1a] | 8;
    }
  }
  piVar5 = param_1 + 0x47;
  FUN_004090d0(param_1,(byte *)piVar5);
  if ((((*(byte *)piVar5 & 0x20) == 0) && (uVar2 = FUN_004082a0((int)param_1,piVar5), uVar2 != 3))
     && (param_1[0x87] == 0)) {
    FUN_00408850(param_1);
  }
  if ((param_1[0x1b] & 0x8000U) == 0) goto LAB_0040c0ff;
  piVar4 = piVar5;
  do {
    cVar1 = *(char *)piVar4;
    (acStack20 + -(int)piVar5)[(int)piVar4] = cVar1;
    piVar4 = (int *)((int)piVar4 + 1);
  } while (cVar1 != '\0');
  puStack12 = (uint *)FUN_00408ba0(param_1,param_4);
  sStack8 = param_4;
  FUN_00408ca0(param_1,puStack12,param_4);
  if ((code *)param_1[0x87] == (code *)0x0) {
LAB_0040c0de:
    FUN_00412100(param_1,local_1c,(int)acStack20,1);
  }
  else {
    iVar6 = (*(code *)param_1[0x87])(param_1,acStack20);
    if (iVar6 < 1) {
      if (((*(byte *)piVar5 & 0x20) == 0) && (uVar2 = FUN_004082a0((int)param_1,piVar5), uVar2 != 3)
         ) {
        FUN_00408bf0((int)param_1,pvStack16);
        FUN_00408850(param_1);
      }
      goto LAB_0040c0de;
    }
  }
  FUN_00408bf0((int)param_1,puStack12);
  param_4 = uStack24;
LAB_0040c0ff:
  FUN_00409d50(param_1,param_4);
  local_20 = 0x40c117;
  FUN_00412237();
  return;
}



void __thiscall FUN_0040c120(void *this,int *param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  void *local_4;
  
  piVar3 = param_1;
  param_1[0x39] = param_1[0x39] + 1;
  if ((uint)param_1[0x34] <= (uint)param_1[0x39]) {
    local_4 = this;
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      param_1[0x39] = 0;
      FUN_00408b10(param_1,(void *)param_1[0x3a],0,param_1[0x36] + 1);
      do {
        *(char *)(piVar3 + 0x49) = *(char *)(piVar3 + 0x49) + '\x01';
        bVar1 = *(byte *)(piVar3 + 0x49);
        if (6 < bVar1) goto LAB_0040c222;
        uVar9 = (uint)bVar1;
        uVar4 = ((piVar3[0x32] - *(int *)(&DAT_004164b4 + uVar9 * 4)) + -1 +
                *(uint *)(&DAT_004164d0 + uVar9 * 4)) / *(uint *)(&DAT_004164d0 + uVar9 * 4);
        bVar2 = *(byte *)((int)piVar3 + 0x129);
        piVar3[0x38] = uVar4;
        if (bVar2 < 8) {
          uVar4 = bVar2 * uVar4 + 7 >> 3;
        }
        else {
          uVar4 = (bVar2 >> 3) * uVar4;
        }
        piVar3[0x37] = uVar4 + 1;
      } while (((*(byte *)(piVar3 + 0x1c) & 2) == 0) &&
              (piVar3[0x34] = (uint)((piVar3[0x33] - *(int *)(&DAT_004164ec + uVar9 * 4)) + -1 +
                                    (&DAT_00416508)[uVar9]) / (uint)(&DAT_00416508)[uVar9],
              piVar3[0x38] == 0));
      if (bVar1 < 7) {
        return;
      }
    }
LAB_0040c222:
    if ((*(byte *)(piVar3 + 0x1b) & 0x20) == 0) {
      *(int ***)(piVar3 + 0x20) = &param_1;
      piVar3[0x21] = 1;
      do {
        if (piVar3[0x1e] == 0) {
          if (piVar3[0x43] == 0) {
            do {
              FUN_00409d50(piVar3,0);
              FUN_004088c0(piVar3);
              uVar4 = FUN_00409d20(piVar3,(undefined *)&local_4);
              piVar3[0x43] = uVar4;
              FUN_00407dd0((int)piVar3);
              FUN_00408ca0(piVar3,(uint *)(piVar3 + 0x47),4);
              uVar4 = 4;
              puVar7 = &DAT_00416414;
              puVar8 = (uint *)(piVar3 + 0x47);
              do {
                if (*puVar8 != *puVar7) goto LAB_0040c2bc;
                uVar4 = uVar4 - 4;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              } while (3 < uVar4);
              if (uVar4 == 0) {
LAB_0040c319:
                iVar5 = 0;
              }
              else {
LAB_0040c2bc:
                iVar10 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
                if (iVar10 == 0) {
                  if (uVar4 == 1) goto LAB_0040c319;
                  iVar10 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                  if (iVar10 == 0) {
                    if (uVar4 == 2) goto LAB_0040c319;
                    iVar10 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                    if (iVar10 == 0) {
                      if ((uVar4 == 3) ||
                         (iVar10 = (uint)*(byte *)((int)puVar8 + 3) -
                                   (uint)*(byte *)((int)puVar7 + 3), iVar10 == 0))
                      goto LAB_0040c319;
                    }
                  }
                }
                iVar5 = 1;
                if (iVar10 < 1) {
                  iVar5 = -1;
                }
              }
              if (iVar5 != 0) {
                FUN_00408740(piVar3,"Not enough image data");
              }
            } while (piVar3[0x43] == 0);
          }
          piVar3[0x1e] = piVar3[0x2c];
          *(uint **)(piVar3 + 0x1d) = (uint *)piVar3[0x2b];
          if ((uint)piVar3[0x43] < (uint)piVar3[0x2c]) {
            piVar3[0x1e] = piVar3[0x43];
          }
          FUN_00408ca0(piVar3,(uint *)piVar3[0x2b],piVar3[0x1e]);
          piVar3[0x43] = piVar3[0x43] - piVar3[0x1e];
        }
        iVar10 = FUN_00412d50((uint **)(piVar3 + 0x1d),1);
        if (iVar10 == 1) {
          if (((piVar3[0x21] != 0) && (piVar3[0x1e] == 0)) && (piVar3[0x43] == 0))
          goto LAB_0040c3be;
          pcVar6 = "Extra compressed data";
          goto LAB_0040c3b5;
        }
        if (iVar10 != 0) {
          pcVar6 = (char *)piVar3[0x23];
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "Decompression Error";
          }
          FUN_00408740(piVar3,pcVar6);
        }
      } while (piVar3[0x21] != 0);
      pcVar6 = "Extra compressed data.";
LAB_0040c3b5:
      FUN_004087f0((int)piVar3,pcVar6);
LAB_0040c3be:
      piVar3[0x1a] = piVar3[0x1a] | 8;
      piVar3[0x1b] = piVar3[0x1b] | 0x20;
      piVar3[0x21] = 0;
    }
    if ((piVar3[0x43] != 0) || (piVar3[0x1e] != 0)) {
      FUN_004087f0((int)piVar3,"Extra compression data");
    }
    FUN_00412af0((int)(piVar3 + 0x1d));
    piVar3[0x1a] = piVar3[0x1a] | 8;
  }
  return;
}



void __cdecl FUN_0040c430(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  if (bVar1 < 8) {
    iVar2 = *param_1;
    if (bVar1 == 1) {
      pbVar6 = (byte *)((iVar2 - 1U >> 3) + param_2);
      pbVar5 = (byte *)(iVar2 + param_2 + -1);
      iVar3 = 7 - (iVar2 - 1U & 7);
      iVar4 = iVar2;
      while (iVar4 != 0) {
        *pbVar5 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 1;
        if (iVar3 == 7) {
          iVar3 = 0;
          pbVar6 = pbVar6 + -1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        pbVar5 = pbVar5 + -1;
        iVar4 = iVar4 + -1;
      }
    }
    else {
      if (bVar1 == 2) {
        pbVar6 = (byte *)((iVar2 - 1U >> 2) + param_2);
        pbVar5 = (byte *)(iVar2 + param_2 + -1);
        iVar4 = (3 - (iVar2 - 1U & 3)) * 2;
        iVar3 = iVar2;
        while (iVar3 != 0) {
          *pbVar5 = *pbVar6 >> ((byte)iVar4 & 0x1f) & 3;
          if (iVar4 == 6) {
            iVar4 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar4 = iVar4 + 2;
          }
          pbVar5 = pbVar5 + -1;
          iVar3 = iVar3 + -1;
        }
      }
      else {
        if (bVar1 == 4) {
          pbVar6 = (byte *)((iVar2 - 1U >> 1) + param_2);
          pbVar5 = (byte *)(iVar2 + param_2 + -1);
          iVar3 = (1 - (iVar2 - 1U & 1)) * 4;
          iVar4 = iVar2;
          while (iVar4 != 0) {
            *pbVar5 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 0xf;
            if (iVar3 == 4) {
              iVar3 = 0;
              pbVar6 = pbVar6 + -1;
            }
            else {
              iVar3 = 4;
            }
            pbVar5 = pbVar5 + -1;
            iVar4 = iVar4 + -1;
          }
        }
      }
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(char *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) * '\b';
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * iVar2;
  }
  return;
}



byte * FUN_0040c570(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  byte *in_EAX;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_10 [4];
  
  bVar2 = *(byte *)(param_1 + 2);
  if (bVar2 != 3) {
    iVar10 = *param_1;
    if ((bVar2 & 2) == 0) {
      local_10[0] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[3];
      uVar4 = 1;
    }
    else {
      uVar4 = (uint)*(byte *)((int)param_1 + 9);
      local_10[0] = uVar4 - *param_3;
      local_10[1] = uVar4 - param_3[1];
      local_10[2] = uVar4 - param_3[2];
      uVar4 = 3;
    }
    bVar1 = false;
    if ((bVar2 & 4) != 0) {
      local_10[uVar4] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[4];
      uVar4 = uVar4 + 1;
    }
    in_EAX = (byte *)0x0;
    if (uVar4 != 0) {
      do {
        if (local_10[(int)in_EAX] < 1) {
          local_10[(int)in_EAX] = 0;
        }
        else {
          bVar1 = true;
        }
        in_EAX = in_EAX + 1;
      } while ((int)in_EAX < (int)uVar4);
      if (bVar1) {
        in_EAX = (byte *)(uint)*(byte *)((int)&PTR_caseD_3_0040c730 +
                                        (uint)*(byte *)((int)param_1 + 9) + 2);
        switch(*(byte *)((int)param_1 + 9)) {
        case 2:
          iVar10 = param_1[1];
          in_EAX = param_2;
          if (iVar10 != 0) {
            do {
              *param_2 = *param_2 >> 1 & 0x55;
              param_2 = param_2 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            return param_2;
          }
          break;
        case 4:
          iVar10 = param_1[1];
          bVar5 = (byte)local_10[0];
          uVar4 = 0xf0 >> (bVar5 & 0x1f);
          bVar2 = (byte)uVar4 & 0xf0 | (byte)(0xf >> (bVar5 & 0x1f));
          in_EAX = (byte *)(uVar4 & 0xffffff00 | (uint)bVar2);
          if (iVar10 != 0) {
            do {
              iVar10 = iVar10 + -1;
              *param_2 = *param_2 >> (bVar5 & 0x1f) & bVar2;
              param_2 = param_2 + 1;
            } while (iVar10 != 0);
            return in_EAX;
          }
          break;
        case 8:
          uVar9 = iVar10 * uVar4;
          uVar8 = 0;
          if (uVar9 != 0) {
            do {
              uVar7 = uVar8 / uVar4;
              uVar6 = uVar8 % uVar4;
              uVar8 = uVar8 + 1;
              *param_2 = *param_2 >> (*(byte *)(local_10 + uVar6) & 0x1f);
              param_2 = param_2 + 1;
            } while (uVar8 < uVar9);
            return (byte *)uVar7;
          }
          break;
        case 0x10:
          uVar9 = iVar10 * uVar4;
          uVar8 = 0;
          if (uVar9 != 0) {
            do {
              uVar7 = uVar8 % uVar4;
              uVar8 = uVar8 + 1;
              uVar3 = (ushort)*param_2 * 0x100 + (ushort)param_2[1] >>
                      ((byte)*(undefined2 *)(local_10 + uVar7) & 0x1f);
              in_EAX = (byte *)(uint)uVar3;
              *param_2 = (byte)((uint)in_EAX >> 8);
              param_2[1] = (byte)uVar3;
              param_2 = param_2 + 2;
            } while (uVar8 < uVar9);
          }
        }
      }
    }
  }
  return in_EAX;
}



void __cdecl FUN_0040c750(int *param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1;
    puVar1 = param_2;
    while (iVar2 != 0) {
      *puVar1 = *param_2;
      param_2 = param_2 + 2;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(char *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) * '\b';
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * *param_1;
  }
  return;
}



void __cdecl FUN_0040c7a0(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if (*(char *)(param_1 + 2) == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar4 = (undefined *)(param_1[1] + param_2);
      puVar5 = puVar4;
      if (iVar6 != 0) {
        do {
          uVar2 = puVar4[-1];
          puVar5[-1] = puVar4[-2];
          puVar5[-2] = puVar4[-3];
          puVar1 = puVar4 + -4;
          puVar4 = puVar4 + -4;
          puVar5[-3] = *puVar1;
          iVar6 = iVar6 + -1;
          puVar5[-4] = uVar2;
          puVar5 = puVar5 + -4;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      puVar4 = (undefined *)(param_1[1] + param_2);
      puVar5 = puVar4;
      if (iVar6 != 0) {
        do {
          uVar2 = puVar4[-1];
          uVar3 = puVar4[-2];
          puVar5[-1] = puVar4[-3];
          puVar5[-2] = puVar4[-4];
          puVar5[-3] = puVar4[-5];
          puVar5[-4] = puVar4[-6];
          puVar5[-5] = puVar4[-7];
          puVar1 = puVar4 + -8;
          puVar4 = puVar4 + -8;
          puVar5[-6] = *puVar1;
          puVar5[-7] = uVar2;
          iVar6 = iVar6 + -1;
          puVar5[-8] = uVar3;
          puVar5 = puVar5 + -8;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 2) == '\x04') {
      if (*(char *)((int)param_1 + 9) == '\b') {
        puVar4 = (undefined *)(param_1[1] + param_2);
        puVar5 = puVar4;
        if (iVar6 != 0) {
          do {
            uVar2 = puVar4[-1];
            puVar1 = puVar4 + -2;
            puVar4 = puVar4 + -2;
            puVar5[-1] = *puVar1;
            iVar6 = iVar6 + -1;
            puVar5[-2] = uVar2;
            puVar5 = puVar5 + -2;
          } while (iVar6 != 0);
          return;
        }
      }
      else {
        puVar5 = (undefined *)(param_1[1] + param_2);
        puVar4 = puVar5;
        while (iVar6 != 0) {
          uVar2 = puVar5[-1];
          uVar3 = puVar5[-2];
          puVar4[-1] = puVar5[-3];
          puVar1 = puVar5 + -4;
          puVar5 = puVar5 + -4;
          puVar4[-2] = *puVar1;
          puVar4[-3] = uVar2;
          puVar4 = puVar4 + -4;
          iVar6 = iVar6 + -1;
          *puVar4 = uVar3;
        }
      }
    }
  }
  return;
}



void __cdecl FUN_0040c920(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if (*(char *)(param_1 + 2) == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      param_2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          pcVar3 = (char *)(param_2 + -1);
          param_2 = param_2 + -4;
          iVar6 = iVar6 + -1;
          *pcVar3 = -1 - *pcVar3;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      param_2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          *(char *)(param_2 + -1) = -1 - *(char *)(param_2 + -1);
          iVar6 = iVar6 + -1;
          *(char *)(param_2 + -2) = -1 - *(char *)(param_2 + -2);
          param_2 = param_2 + -8;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 2) == '\x04') {
      if (*(char *)((int)param_1 + 9) == '\b') {
        puVar4 = (undefined *)(param_1[1] + param_2);
        puVar5 = puVar4;
        if (iVar6 != 0) {
          do {
            puVar5[-1] = -1 - puVar4[-1];
            puVar1 = puVar4 + -2;
            puVar4 = puVar4 + -2;
            iVar6 = iVar6 + -1;
            puVar5[-2] = *puVar1;
            puVar5 = puVar5 + -2;
          } while (iVar6 != 0);
          return;
        }
      }
      else {
        iVar2 = param_1[1] + param_2;
        while (iVar6 != 0) {
          *(char *)(iVar2 + -1) = -1 - *(char *)(iVar2 + -1);
          iVar6 = iVar6 + -1;
          *(char *)(iVar2 + -2) = -1 - *(char *)(iVar2 + -2);
          iVar2 = iVar2 + -4;
        }
      }
    }
  }
  return;
}



void __cdecl FUN_0040ca00(uint *param_1,int param_2,uint param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined uVar7;
  byte bVar8;
  uint *puVar9;
  
  puVar4 = param_1;
  puVar9 = param_1 + 2;
  uVar2 = *param_1;
  bVar8 = (byte)(param_3 >> 8);
  param_1 = (uint *)(uint)bVar8;
  uVar7 = (undefined)param_3;
  if (*(char *)puVar9 == '\0') {
    if (*(char *)((int)puVar4 + 9) == '\b') {
      param_2 = uVar2 + param_2;
      puVar5 = (undefined *)(param_2 + uVar2);
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        while (uVar3 != 0) {
          puVar1 = (undefined *)(param_2 + -1);
          param_2 = param_2 + -1;
          puVar5[-1] = *puVar1;
          puVar5 = puVar5 + -2;
          *puVar5 = uVar7;
          uVar3 = uVar3 - 1;
        }
        *(undefined *)((int)puVar4 + 10) = 2;
        *(undefined *)((int)puVar4 + 0xb) = 0x10;
        puVar4[1] = uVar2 * 2;
        return;
      }
      if (1 < uVar2) {
        iVar6 = uVar2 - 1;
        do {
          puVar5[-1] = uVar7;
          puVar1 = (undefined *)(param_2 + -1);
          param_2 = param_2 + -1;
          puVar5 = puVar5 + -2;
          iVar6 = iVar6 + -1;
          *puVar5 = *puVar1;
        } while (iVar6 != 0);
      }
      puVar5[-1] = uVar7;
      *(undefined *)((int)puVar4 + 10) = 2;
      *(undefined *)((int)puVar4 + 0xb) = 0x10;
      puVar4[1] = uVar2 * 2;
      return;
    }
    if (*(char *)((int)puVar4 + 9) == '\x10') {
      param_2 = param_2 + uVar2 * 2;
      puVar5 = (undefined *)(param_2 + uVar2 * 2);
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        while (uVar3 != 0) {
          puVar5[-1] = *(undefined *)(param_2 + -1);
          puVar1 = (undefined *)(param_2 + -2);
          param_2 = param_2 + -2;
          puVar5[-2] = *puVar1;
          puVar5[-3] = bVar8;
          puVar5 = puVar5 + -4;
          *puVar5 = uVar7;
          uVar3 = uVar3 - 1;
        }
        *(undefined *)((int)puVar4 + 10) = 2;
        *(undefined *)((int)puVar4 + 0xb) = 0x20;
        puVar4[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        param_1 = (uint *)(uVar2 - 1);
        do {
          puVar5[-1] = bVar8;
          puVar5[-2] = uVar7;
          puVar5[-3] = *(undefined *)(param_2 + -1);
          puVar1 = (undefined *)(param_2 + -2);
          param_2 = param_2 + -2;
          puVar5 = puVar5 + -4;
          param_1 = (uint *)((int)param_1 + -1);
          *puVar5 = *puVar1;
        } while (param_1 != (uint *)0x0);
      }
      puVar5[-1] = bVar8;
      puVar5[-2] = uVar7;
      *(undefined *)((int)puVar4 + 10) = 2;
      *(undefined *)((int)puVar4 + 0xb) = 0x20;
      puVar4[1] = uVar2 * 4;
      return;
    }
  }
  else {
    if (*(char *)puVar9 == '\x02') {
      if (*(char *)((int)puVar4 + 9) == '\b') {
        param_2 = param_2 + uVar2 * 3;
        puVar5 = (undefined *)(param_2 + uVar2);
        uVar3 = uVar2;
        if ((param_4 & 0x80) == 0) {
          while (uVar3 != 0) {
            puVar5[-1] = *(undefined *)(param_2 + -1);
            puVar5[-2] = *(undefined *)(param_2 + -2);
            puVar1 = (undefined *)(param_2 + -3);
            param_2 = param_2 + -3;
            puVar5[-3] = *puVar1;
            puVar5 = puVar5 + -4;
            *puVar5 = uVar7;
            uVar3 = uVar3 - 1;
          }
        }
        else {
          if (1 < uVar2) {
            iVar6 = uVar2 - 1;
            do {
              puVar5[-1] = uVar7;
              puVar5[-2] = *(undefined *)(param_2 + -1);
              puVar5[-3] = *(undefined *)(param_2 + -2);
              puVar1 = (undefined *)(param_2 + -3);
              param_2 = param_2 + -3;
              puVar5 = puVar5 + -4;
              iVar6 = iVar6 + -1;
              *puVar5 = *puVar1;
            } while (iVar6 != 0);
          }
          puVar5[-1] = uVar7;
        }
        *(undefined *)((int)puVar4 + 10) = 4;
        *(undefined *)((int)puVar4 + 0xb) = 0x20;
        puVar4[1] = uVar2 * 4;
        return;
      }
      if (*(char *)((int)puVar4 + 9) == '\x10') {
        param_2 = param_2 + uVar2 * 6;
        puVar5 = (undefined *)(param_2 + uVar2 * 2);
        uVar3 = uVar2;
        if ((param_4 & 0x80) == 0) {
          while (uVar3 != 0) {
            puVar5[-1] = *(undefined *)(param_2 + -1);
            puVar5[-2] = *(undefined *)(param_2 + -2);
            puVar5[-3] = *(undefined *)(param_2 + -3);
            puVar5[-4] = *(undefined *)(param_2 + -4);
            puVar5[-5] = *(undefined *)(param_2 + -5);
            puVar1 = (undefined *)(param_2 + -6);
            param_2 = param_2 + -6;
            puVar5[-6] = *puVar1;
            puVar5[-7] = bVar8;
            puVar5 = puVar5 + -8;
            *puVar5 = uVar7;
            uVar3 = uVar3 - 1;
          }
        }
        else {
          if (1 < uVar2) {
            iVar6 = uVar2 - 1;
            puVar9 = (uint *)(param_3 >> 8);
            do {
              puVar5[-1] = (char)puVar9;
              puVar5[-2] = uVar7;
              puVar5[-3] = *(undefined *)(param_2 + -1);
              puVar5[-4] = *(undefined *)(param_2 + -2);
              puVar5[-5] = *(undefined *)(param_2 + -3);
              puVar5[-6] = *(undefined *)(param_2 + -4);
              puVar5[-7] = *(undefined *)(param_2 + -5);
              puVar1 = (undefined *)(param_2 + -6);
              param_2 = param_2 + -6;
              puVar5 = puVar5 + -8;
              iVar6 = iVar6 + -1;
              *puVar5 = *puVar1;
              puVar9 = param_1;
            } while (iVar6 != 0);
          }
          puVar5[-1] = bVar8;
          puVar5[-2] = uVar7;
        }
        *(undefined *)((int)puVar4 + 0xb) = 0x40;
        *(undefined *)((int)puVar4 + 10) = 4;
        puVar4[1] = uVar2 * 8;
      }
    }
  }
  return;
}



void __cdecl FUN_0040cd20(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  bVar3 = *(byte *)((int)param_1 + 9);
  iVar2 = *param_1;
  if ((7 < bVar3) && (bVar1 = *(byte *)(param_1 + 2), (bVar1 & 2) == 0)) {
    if (bVar1 == 0) {
      if (bVar3 == 8) {
        puVar5 = (undefined *)(iVar2 + -1 + param_2);
        puVar4 = puVar5 + iVar2 * 2;
        iVar6 = iVar2;
        while (iVar6 != 0) {
          *puVar4 = *puVar5;
          puVar4[-1] = *puVar5;
          puVar4[-2] = *puVar5;
          puVar4 = puVar4 + -3;
          puVar5 = puVar5 + -1;
          iVar6 = iVar6 + -1;
        }
      }
      else {
        puVar5 = (undefined *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar5 + iVar2 * 4;
        iVar6 = iVar2;
        while (iVar6 != 0) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = *puVar5;
          puVar4[-3] = puVar5[-1];
          puVar4[-4] = *puVar5;
          puVar4[-5] = puVar5[-1];
          puVar4 = puVar4 + -6;
          puVar5 = puVar5 + -2;
          iVar6 = iVar6 + -1;
        }
      }
    }
    else {
      if (bVar1 == 4) {
        if (bVar3 == 8) {
          puVar5 = (undefined *)(param_2 + -1 + iVar2 * 2);
          puVar4 = puVar5 + iVar2 * 2;
          iVar6 = iVar2;
          while (iVar6 != 0) {
            *puVar4 = *puVar5;
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = puVar5[-1];
            puVar4[-3] = puVar5[-1];
            puVar4 = puVar4 + -4;
            puVar5 = puVar5 + -2;
            iVar6 = iVar6 + -1;
          }
        }
        else {
          puVar5 = (undefined *)(param_2 + -1 + iVar2 * 4);
          puVar4 = puVar5 + iVar2 * 4;
          iVar6 = iVar2;
          while (iVar6 != 0) {
            *puVar4 = *puVar5;
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = puVar5[-2];
            puVar4[-3] = puVar5[-3];
            puVar4[-4] = puVar5[-2];
            puVar4[-5] = puVar5[-3];
            puVar4[-6] = puVar5[-2];
            puVar4[-7] = puVar5[-3];
            puVar4 = puVar4 + -8;
            puVar5 = puVar5 + -4;
            iVar6 = iVar6 + -1;
          }
        }
      }
    }
    *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + '\x02';
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    bVar3 = *(char *)((int)param_1 + 9) * *(char *)((int)param_1 + 10);
    *(byte *)((int)param_1 + 0xb) = bVar3;
    if (7 < bVar3) {
      param_1[1] = (uint)(bVar3 >> 3) * iVar2;
      return;
    }
    param_1[1] = (uint)bVar3 * iVar2 + 7 >> 3;
  }
  return;
}



undefined4 __cdecl FUN_0040cee0(int param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_24;
  
  iVar1 = *param_2;
  local_24 = 0;
  uVar8 = 0;
  if ((*(byte *)(param_2 + 2) & 2) != 0) {
    uVar11 = (uint)*(ushort *)(param_1 + 0x22e);
    uVar13 = (uint)*(ushort *)(param_1 + 0x22c);
    uVar14 = (uint)*(ushort *)(param_1 + 0x22a);
    if (*(byte *)(param_2 + 2) == 2) {
      if (*(char *)((int)param_2 + 9) == '\b') {
        iVar5 = iVar1;
        pbVar6 = param_3;
        pbVar7 = param_3;
        if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
          while (iVar5 != 0) {
            bVar9 = *pbVar6;
            if ((bVar9 == pbVar6[1]) && (bVar9 == pbVar6[2])) {
              *pbVar7 = pbVar6[2];
            }
            else {
              local_24 = 1;
              *pbVar7 = (byte)(pbVar6[2] * uVar11 + pbVar6[1] * uVar13 + bVar9 * uVar14 >> 0xf);
            }
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 3;
            pbVar7 = pbVar7 + 1;
          }
        }
        else {
          while (iVar5 != 0) {
            iVar2 = *(int *)(param_1 + 0x16c);
            bVar9 = *(byte *)((uint)*pbVar6 + iVar2);
            if ((bVar9 == *(byte *)((uint)pbVar6[1] + iVar2)) &&
               (bVar9 == *(byte *)((uint)pbVar6[2] + iVar2))) {
              *pbVar7 = pbVar6[2];
            }
            else {
              local_24 = 1;
              *pbVar7 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar11 +
                                   *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + bVar9 * uVar14 >>
                                  0xf) + *(int *)(param_1 + 0x168));
            }
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 3;
            pbVar7 = pbVar7 + 1;
          }
        }
      }
      else {
        iVar5 = iVar1;
        pbVar6 = param_3;
        pbVar7 = param_3;
        if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
          while (iVar5 != 0) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            if ((uVar10 != CONCAT11(pbVar6[2],pbVar6[3])) ||
               (uVar10 != CONCAT11(pbVar6[4],pbVar6[5]))) {
              local_24 = 1;
            }
            uVar12 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar11 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar13
                     + uVar10 * uVar14 >> 0xf & 0xffff;
            *pbVar7 = (byte)(uVar12 >> 8);
            pbVar7[1] = (byte)uVar12;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 6;
            pbVar7 = pbVar7 + 2;
          }
        }
        else {
          while (iVar5 != 0) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            uVar3 = CONCAT11(pbVar6[2],pbVar6[3]);
            uVar4 = CONCAT11(pbVar6[4],pbVar6[5]);
            if ((uVar10 != uVar3) || (uVar10 != uVar4)) {
              bVar9 = (byte)*(undefined2 *)(param_1 + 0x158);
              iVar2 = *(int *)(param_1 + 0x178);
              uVar12 = *(ushort *)
                        (*(int *)(iVar2 + (((uint)uVar10 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        (uint)*pbVar6 * 2) * uVar14 +
                       *(ushort *)
                        (*(int *)(iVar2 + (((uint)uVar3 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        (uint)pbVar6[2] * 2) * uVar13 +
                       *(ushort *)
                        (*(int *)(iVar2 + (((uint)uVar4 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        (uint)pbVar6[4] * 2) * uVar11 >> 0xf;
              local_24 = 1;
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x174) +
                                 ((uVar12 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        ((uVar12 & 0xffff) >> 8) * 2);
            }
            *pbVar7 = (byte)(uVar10 >> 8);
            pbVar7[1] = (byte)uVar10;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 6;
            pbVar7 = pbVar7 + 2;
          }
        }
      }
    }
    if (*(char *)(param_2 + 2) == '\x06') {
      if (*(char *)((int)param_2 + 9) == '\b') {
        iVar5 = iVar1;
        pbVar6 = param_3;
        if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
          while (iVar5 != 0) {
            bVar9 = *pbVar6;
            if ((bVar9 != pbVar6[1]) || (bVar9 != pbVar6[2])) {
              local_24 = 1;
            }
            *param_3 = (byte)(pbVar6[2] * uVar11 + pbVar6[1] * uVar13 + bVar9 * uVar14 >> 0xf);
            param_3[1] = pbVar6[3];
            param_3 = param_3 + 2;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 4;
          }
        }
        else {
          while (iVar5 != 0) {
            iVar2 = *(int *)(param_1 + 0x16c);
            bVar9 = *(byte *)((uint)*pbVar6 + iVar2);
            if ((bVar9 != *(byte *)((uint)pbVar6[1] + iVar2)) ||
               (bVar9 != *(byte *)((uint)pbVar6[2] + iVar2))) {
              local_24 = 1;
            }
            *param_3 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar11 +
                                  *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + bVar9 * uVar14 >>
                                 0xf) + *(int *)(param_1 + 0x168));
            param_3[1] = pbVar6[3];
            param_3 = param_3 + 2;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 4;
          }
        }
      }
      else {
        iVar5 = iVar1;
        pbVar6 = param_3;
        if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
          while (iVar5 != 0) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            if ((uVar10 != CONCAT11(pbVar6[2],pbVar6[3])) ||
               (uVar10 != CONCAT11(pbVar6[4],pbVar6[5]))) {
              local_24 = 1;
            }
            uVar12 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar11 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar13
                     + uVar10 * uVar14 >> 0xf & 0xffff;
            *param_3 = (byte)(uVar12 >> 8);
            param_3[1] = (byte)uVar12;
            param_3[2] = pbVar6[6];
            param_3[3] = pbVar6[7];
            param_3 = param_3 + 4;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 8;
          }
        }
        else {
          while (iVar5 != 0) {
            uVar10 = CONCAT11(*param_3,param_3[1]);
            uVar3 = CONCAT11(param_3[2],param_3[3]);
            uVar4 = CONCAT11(param_3[4],param_3[5]);
            if ((uVar10 != uVar3) || (uVar10 != uVar4)) {
              iVar2 = *(int *)(param_1 + 0x178);
              bVar9 = (byte)*(undefined2 *)(param_1 + 0x158);
              uVar12 = *(ushort *)
                        (*(int *)(iVar2 + (((uint)uVar10 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        (uint)*param_3 * 2) * uVar14 +
                       *(ushort *)
                        (*(int *)(iVar2 + (((uint)uVar3 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        (uint)param_3[2] * 2) * uVar13 +
                       *(ushort *)
                        (*(int *)(iVar2 + (((uint)uVar4 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        (uint)param_3[4] * 2) * uVar11 >> 0xf;
              local_24 = 1;
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x174) +
                                 ((uVar12 & 0xff) >> (bVar9 & 0x1f)) * 4) +
                        ((uVar12 & 0xffff) >> 8) * 2);
            }
            *pbVar6 = (byte)(uVar10 >> 8);
            pbVar6[1] = (byte)uVar10;
            pbVar6[2] = param_3[6];
            pbVar6[3] = param_3[7];
            param_3 = param_3 + 8;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 4;
          }
        }
      }
    }
    *(char *)((int)param_2 + 10) = *(char *)((int)param_2 + 10) + -2;
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
    bVar9 = *(char *)((int)param_2 + 9) * *(char *)((int)param_2 + 10);
    *(byte *)((int)param_2 + 0xb) = bVar9;
    if (7 < bVar9) {
      param_2[1] = (uint)(bVar9 >> 3) * iVar1;
      return local_24;
    }
    param_2[1] = (uint)bVar9 * iVar1 + 7 >> 3;
    uVar8 = local_24;
  }
  return uVar8;
}



void __cdecl
FUN_0040d5e0(int *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,ushort param_12)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined uVar4;
  undefined2 *puVar5;
  byte bVar6;
  short sVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int local_c;
  int local_4;
  
  iVar2 = *param_1;
  if ((param_4 != 0) &&
     ((bVar6 = *(byte *)(param_1 + 2), (bVar6 & 4) == 0 || ((bVar6 != 3 && (param_3 != 0)))))) {
    local_c = iVar2;
    switch(bVar6) {
    case 0:
      switch(*(undefined *)((int)param_1 + 9)) {
      case 1:
        iVar14 = 7;
        iVar10 = iVar2;
        while (iVar10 != 0) {
          bVar6 = (byte)iVar14;
          if ((ushort)(*(byte *)param_2 >> (bVar6 & 0x1f) & 1) == *(ushort *)(param_3 + 8)) {
            bVar3 = (byte)(0x7f7f >> (7 - bVar6 & 0x1f)) & *(byte *)param_2;
            *(byte *)param_2 = bVar3;
            *(byte *)param_2 = *(char *)(param_4 + 8) << (bVar6 & 0x1f) | bVar3;
          }
          if (iVar14 == 0) {
            iVar14 = 7;
            param_2 = (undefined2 *)((int)param_2 + 1);
          }
          else {
            iVar14 = iVar14 + -1;
          }
          iVar10 = iVar10 + -1;
        }
        break;
      case 2:
        iVar14 = 6;
        iVar10 = iVar2;
        if (param_6 == 0) {
          while (iVar10 != 0) {
            bVar6 = (byte)iVar14;
            if ((ushort)(*(byte *)param_2 >> (bVar6 & 0x1f) & 3) == *(ushort *)(param_3 + 8)) {
              bVar3 = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar3;
              *(byte *)param_2 = *(char *)(param_4 + 8) << (bVar6 & 0x1f) | bVar3;
            }
            if (iVar14 == 0) {
              iVar14 = 6;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar14 = iVar14 + -2;
            }
            iVar10 = iVar10 + -1;
          }
        }
        else {
          while (iVar10 != 0) {
            bVar6 = (byte)iVar14;
            bVar3 = *(byte *)param_2 >> (bVar6 & 0x1f) & 3;
            if ((ushort)bVar3 == *(ushort *)(param_3 + 8)) {
              bVar3 = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar3;
              bVar8 = *(char *)(param_4 + 8) << (bVar6 & 0x1f);
            }
            else {
              uVar11 = (uint)bVar3;
              bVar8 = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *(byte *)param_2;
              bVar3 = (*(byte *)((((uVar11 * 4 | uVar11) * 4 | uVar11) * 4 | uVar11) + param_6) >> 6
                      ) << (bVar6 & 0x1f);
            }
            *(byte *)param_2 = bVar8 | bVar3;
            if (iVar14 == 0) {
              iVar14 = 6;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar14 = iVar14 + -2;
            }
            iVar10 = iVar10 + -1;
          }
        }
        break;
      case 4:
        iVar14 = 4;
        iVar10 = iVar2;
        if (param_6 == 0) {
          while (iVar10 != 0) {
            bVar6 = (byte)iVar14;
            if ((ushort)(*(byte *)param_2 >> (bVar6 & 0x1f) & 0xf) == *(ushort *)(param_3 + 8)) {
              bVar3 = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar3;
              *(byte *)param_2 = *(char *)(param_4 + 8) << (bVar6 & 0x1f) | bVar3;
            }
            if (iVar14 == 0) {
              iVar14 = 4;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar14 = iVar14 + -4;
            }
            iVar10 = iVar10 + -1;
          }
        }
        else {
          while (iVar10 != 0) {
            bVar6 = (byte)iVar14;
            bVar3 = *(byte *)param_2 >> (bVar6 & 0x1f) & 0xf;
            if ((ushort)bVar3 == *(ushort *)(param_3 + 8)) {
              bVar3 = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar3;
              bVar8 = *(char *)(param_4 + 8) << (bVar6 & 0x1f);
            }
            else {
              bVar8 = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *(byte *)param_2;
              bVar3 = (*(byte *)(((uint)bVar3 << 4 | (uint)bVar3) + param_6) >> 4) << (bVar6 & 0x1f)
              ;
            }
            *(byte *)param_2 = bVar8 | bVar3;
            if (iVar14 == 0) {
              iVar14 = 4;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar14 = iVar14 + -4;
            }
            iVar10 = iVar10 + -1;
          }
        }
        break;
      case 8:
        iVar10 = iVar2;
        if (param_6 == 0) {
          while (iVar10 != 0) {
            if ((ushort)*(byte *)param_2 == *(ushort *)(param_3 + 8)) {
              *(byte *)param_2 = *(byte *)(param_4 + 8);
            }
            param_2 = (undefined2 *)((int)param_2 + 1);
            iVar10 = iVar10 + -1;
          }
        }
        else {
          while (iVar10 != 0) {
            if ((ushort)*(byte *)param_2 == *(ushort *)(param_3 + 8)) {
              bVar6 = *(byte *)(param_4 + 8);
            }
            else {
              bVar6 = *(byte *)((uint)*(byte *)param_2 + param_6);
            }
            *(byte *)param_2 = bVar6;
            param_2 = (undefined2 *)((int)param_2 + 1);
            iVar10 = iVar10 + -1;
          }
        }
        break;
      case 0x10:
        iVar10 = iVar2;
        if (param_9 == 0) {
          while (iVar10 != 0) {
            if ((ushort)((ushort)*(byte *)param_2 * 0x100 + (ushort)*(byte *)((int)param_2 + 1)) ==
                *(short *)(param_3 + 8)) {
              *(byte *)param_2 = *(byte *)(param_4 + 9);
              *(byte *)((int)param_2 + 1) = *(byte *)(param_4 + 8);
            }
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
          }
        }
        else {
          while (iVar10 != 0) {
            if ((ushort)((ushort)*(byte *)param_2 * 0x100 + (ushort)*(byte *)((int)param_2 + 1)) ==
                *(short *)(param_3 + 8)) {
              *(byte *)param_2 = *(byte *)(param_4 + 9);
              bVar6 = *(byte *)(param_4 + 8);
            }
            else {
              uVar9 = *(ushort *)
                       (*(int *)(param_9 +
                                (uint)(*(byte *)((int)param_2 + 1) >> ((byte)param_12 & 0x1f)) * 4)
                       + (uint)*(byte *)param_2 * 2);
              bVar6 = (byte)uVar9;
              *(byte *)param_2 = (byte)((uint)uVar9 >> 8);
            }
            *(byte *)((int)param_2 + 1) = bVar6;
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
          }
        }
      }
      break;
    case 2:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (param_6 == 0) {
          if (iVar2 != 0) {
            param_2 = param_2 + 1;
            iVar10 = iVar2;
            do {
              if ((((ushort)*(byte *)(param_2 + -1) == *(ushort *)(param_3 + 2)) &&
                  ((ushort)*(byte *)((int)param_2 + -1) == *(ushort *)(param_3 + 4))) &&
                 ((ushort)*(byte *)param_2 == *(ushort *)(param_3 + 6))) {
                *(byte *)(param_2 + -1) = *(byte *)(param_4 + 2);
                *(undefined *)((int)param_2 + -1) = *(undefined *)(param_4 + 4);
                *(byte *)param_2 = *(byte *)(param_4 + 6);
              }
              param_2 = (undefined2 *)((int)param_2 + 3);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar2 != 0) {
            param_2 = param_2 + 1;
            iVar10 = iVar2;
            do {
              if ((((ushort)*(byte *)(param_2 + -1) == *(ushort *)(param_3 + 2)) &&
                  ((ushort)*(byte *)((int)param_2 + -1) == *(ushort *)(param_3 + 4))) &&
                 ((ushort)*(byte *)param_2 == *(ushort *)(param_3 + 6))) {
                *(byte *)(param_2 + -1) = *(byte *)(param_4 + 2);
                *(undefined *)((int)param_2 + -1) = *(undefined *)(param_4 + 4);
                bVar6 = *(byte *)(param_4 + 6);
              }
              else {
                *(byte *)(param_2 + -1) = *(byte *)((uint)*(byte *)(param_2 + -1) + param_6);
                *(undefined *)((int)param_2 + -1) =
                     *(undefined *)((uint)*(byte *)((int)param_2 + -1) + param_6);
                bVar6 = *(byte *)((uint)*(byte *)param_2 + param_6);
              }
              *(byte *)param_2 = bVar6;
              param_2 = (undefined2 *)((int)param_2 + 3);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
      }
      else {
        if (param_9 == 0) {
          if (iVar2 != 0) {
            param_2 = param_2 + 1;
            iVar10 = iVar2;
            do {
              if ((((ushort)((ushort)*(byte *)(param_2 + -1) * 0x100 +
                            (ushort)*(byte *)((int)param_2 + -1)) == *(short *)(param_3 + 2)) &&
                  ((ushort)((ushort)*(byte *)param_2 * 0x100 + (ushort)*(byte *)((int)param_2 + 1))
                   == *(short *)(param_3 + 4))) &&
                 ((ushort)((ushort)*(byte *)(param_2 + 1) * 0x100 +
                          (ushort)*(byte *)((int)param_2 + 3)) == *(short *)(param_3 + 6))) {
                *(byte *)(param_2 + -1) = *(byte *)(param_4 + 3);
                *(undefined *)((int)param_2 + -1) = *(undefined *)(param_4 + 2);
                *(byte *)param_2 = *(byte *)(param_4 + 5);
                *(byte *)((int)param_2 + 1) = *(byte *)(param_4 + 4);
                *(byte *)(param_2 + 1) = *(byte *)(param_4 + 7);
                *(byte *)((int)param_2 + 3) = *(byte *)(param_4 + 6);
              }
              param_2 = param_2 + 3;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar2 != 0) {
            param_2 = param_2 + 1;
            do {
              if ((((ushort)((ushort)*(byte *)(param_2 + -1) * 0x100 +
                            (ushort)*(byte *)((int)param_2 + -1)) == *(short *)(param_3 + 2)) &&
                  ((ushort)((ushort)*(byte *)param_2 * 0x100 + (ushort)*(byte *)((int)param_2 + 1))
                   == *(short *)(param_3 + 4))) &&
                 ((ushort)((ushort)*(byte *)(param_2 + 1) * 0x100 +
                          (ushort)*(byte *)((int)param_2 + 3)) == *(short *)(param_3 + 6))) {
                *(byte *)(param_2 + -1) = *(byte *)(param_4 + 3);
                *(undefined *)((int)param_2 + -1) = *(undefined *)(param_4 + 2);
                *(byte *)param_2 = *(byte *)(param_4 + 5);
                *(byte *)((int)param_2 + 1) = *(byte *)(param_4 + 4);
                *(byte *)(param_2 + 1) = *(byte *)(param_4 + 7);
                *(byte *)((int)param_2 + 3) = *(byte *)(param_4 + 6);
              }
              else {
                uVar9 = *(ushort *)
                         (*(int *)(param_9 +
                                  (uint)(*(byte *)((int)param_2 + -1) >> ((byte)param_12 & 0x1f)) *
                                  4) + (uint)*(byte *)(param_2 + -1) * 2);
                *(undefined *)((int)param_2 + -1) = (char)uVar9;
                *(byte *)(param_2 + -1) = (byte)((uint)(uVar9 & 0xff00 | param_12 & 0xff) >> 8);
                uVar9 = *(ushort *)
                         (*(int *)(param_9 +
                                  (uint)(*(byte *)((int)param_2 + 1) >>
                                        ((byte)(param_12 & 0xff) & 0x1f)) * 4) +
                         (uint)*(byte *)param_2 * 2);
                *(byte *)((int)param_2 + 1) = (byte)uVar9;
                *(byte *)param_2 = (byte)((uint)(uVar9 & 0xff00 | param_12 & 0xff) >> 8);
                uVar9 = *(ushort *)
                         (*(int *)(param_9 +
                                  (uint)(*(byte *)((int)param_2 + 3) >>
                                        ((byte)(param_12 & 0xff) & 0x1f)) * 4) +
                         (uint)*(byte *)(param_2 + 1) * 2);
                *(byte *)(param_2 + 1) = (byte)((uint)uVar9 >> 8);
                *(byte *)((int)param_2 + 3) = (byte)uVar9;
              }
              param_2 = param_2 + 3;
              local_c = local_c + -1;
            } while (local_c != 0);
          }
        }
      }
      break;
    case 4:
      if (*(char *)((int)param_1 + 9) == '\b') {
        iVar10 = iVar2;
        puVar5 = param_2;
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          while (iVar10 != 0) {
            bVar6 = *(byte *)((int)param_2 + 1);
            if (bVar6 == 0xff) {
              bVar6 = *(byte *)param_2;
            }
            else {
              if (bVar6 == 0) {
                bVar6 = *(byte *)(param_4 + 8);
              }
              else {
                uVar9 = (0xff - (ushort)bVar6) * *(short *)(param_5 + 8) +
                        (ushort)*(byte *)param_2 * (ushort)bVar6 + 0x80;
                bVar6 = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
              }
            }
            *(byte *)puVar5 = bVar6;
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
            puVar5 = (undefined2 *)((int)puVar5 + 1);
          }
        }
        else {
          while (iVar10 != 0) {
            bVar6 = *(byte *)((int)param_2 + 1);
            if (bVar6 == 0xff) {
              *(undefined *)puVar5 = *(undefined *)((uint)*(byte *)param_2 + param_6);
            }
            else {
              if (bVar6 == 0) {
                *(undefined *)puVar5 = *(undefined *)(param_4 + 8);
              }
              else {
                uVar9 = (0xff - (ushort)bVar6) * *(short *)(param_5 + 8) +
                        (ushort)*(byte *)((uint)*(byte *)param_2 + param_8) * (ushort)bVar6 + 0x80;
                *(undefined *)puVar5 =
                     *(undefined *)
                      (((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
              }
            }
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
            puVar5 = (undefined2 *)((int)puVar5 + 1);
          }
        }
      }
      else {
        if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
          if (iVar2 != 0) {
            pbVar12 = (byte *)((int)param_2 + 3);
            do {
              uVar9 = (ushort)pbVar12[-1] * 0x100 + (ushort)*pbVar12;
              if (uVar9 == 0xffff) {
                *param_2 = *(undefined2 *)(pbVar12 + -3);
              }
              else {
                if (uVar9 == 0) {
                  *(undefined *)param_2 = *(undefined *)(param_4 + 9);
                  uVar4 = *(undefined *)(param_4 + 8);
                }
                else {
                  uVar11 = (uint)(ushort)((ushort)pbVar12[-3] * 0x100 + (ushort)pbVar12[-2]) *
                           (uint)uVar9 + 0x8000 +
                           (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar9);
                  iVar10 = (uVar11 >> 0x10) + uVar11;
                  uVar4 = (undefined)((uint)iVar10 >> 0x10);
                  *(char *)param_2 = (char)((uint)iVar10 >> 0x18);
                }
                *(undefined *)((int)param_2 + 1) = uVar4;
              }
              pbVar12 = pbVar12 + 4;
              param_2 = param_2 + 1;
              local_c = local_c + -1;
            } while (local_c != 0);
          }
        }
        else {
          if (iVar2 != 0) {
            pbVar12 = (byte *)((int)param_2 + 1);
            do {
              uVar9 = (ushort)pbVar12[1] * 0x100 + (ushort)pbVar12[2];
              if (uVar9 == 0xffff) {
                uVar9 = *(ushort *)
                         (*(int *)(param_9 + (uint)(*pbVar12 >> ((byte)param_12 & 0x1f)) * 4) +
                         (uint)pbVar12[-1] * 2);
LAB_0040de8e:
                uVar4 = (undefined)uVar9;
                *(char *)param_2 = (char)((uint)uVar9 >> 8);
              }
              else {
                if (uVar9 != 0) {
                  uVar11 = (uint)*(ushort *)
                                  (*(int *)(param_11 +
                                           (uint)(*pbVar12 >> ((byte)param_12 & 0x1f)) * 4) +
                                  (uint)pbVar12[-1] * 2) * (uint)uVar9 + 0x8000 +
                           (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar9);
                  uVar11 = (uVar11 >> 0x10) + uVar11;
                  uVar9 = *(ushort *)
                           (*(int *)(param_10 +
                                    ((uVar11 >> 0x10 & 0xff) >> ((byte)param_12 & 0x1f)) * 4) +
                           (uVar11 >> 0x18) * 2);
                  goto LAB_0040de8e;
                }
                *(undefined *)param_2 = *(undefined *)(param_4 + 9);
                uVar4 = *(undefined *)(param_4 + 8);
              }
              *(undefined *)((int)param_2 + 1) = uVar4;
              pbVar12 = pbVar12 + 4;
              param_2 = param_2 + 1;
              local_c = local_c + -1;
            } while (local_c != 0);
          }
        }
      }
      break;
    case 6:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          if (iVar2 != 0) {
            puVar5 = param_2 + 1;
            pbVar12 = (byte *)((int)param_2 + 1);
            do {
              bVar6 = pbVar12[2];
              if (bVar6 == 0xff) {
                *(byte *)(puVar5 + -1) = pbVar12[-1];
                *(byte *)((int)puVar5 + -1) = *pbVar12;
                *(byte *)puVar5 = pbVar12[1];
              }
              else {
                if (bVar6 == 0) {
                  *(byte *)(puVar5 + -1) = *(byte *)(param_4 + 2);
                  *(undefined *)((int)puVar5 + -1) = *(undefined *)(param_4 + 4);
                  bVar6 = *(byte *)(param_4 + 6);
                }
                else {
                  sVar7 = 0xff - (ushort)bVar6;
                  uVar9 = (ushort)pbVar12[-1] * (ushort)bVar6 + *(short *)(param_4 + 2) * sVar7 +
                          0x80;
                  *(byte *)(puVar5 + -1) = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
                  uVar9 = *(short *)(param_4 + 4) * sVar7 + (ushort)*pbVar12 * (ushort)bVar6 + 0x80;
                  *(undefined *)((int)puVar5 + -1) = (char)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
                  uVar9 = (ushort)pbVar12[1] * (ushort)bVar6 + *(short *)(param_4 + 6) * sVar7 +
                          0x80;
                  bVar6 = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
                }
                *(byte *)puVar5 = bVar6;
              }
              pbVar12 = pbVar12 + 4;
              puVar5 = (undefined2 *)((int)puVar5 + 3);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
        }
        else {
          if (iVar2 != 0) {
            puVar5 = param_2 + 1;
            pbVar12 = (byte *)((int)param_2 + 1);
            do {
              bVar6 = pbVar12[2];
              if (bVar6 == 0xff) {
                *(undefined *)(puVar5 + -1) = *(undefined *)((uint)pbVar12[-1] + param_6);
                *(undefined *)((int)puVar5 + -1) = *(undefined *)((uint)*pbVar12 + param_6);
                uVar4 = *(undefined *)((uint)pbVar12[1] + param_6);
              }
              else {
                if (bVar6 == 0) {
                  *(undefined *)(puVar5 + -1) = *(undefined *)(param_4 + 2);
                  *(undefined *)((int)puVar5 + -1) = *(undefined *)(param_4 + 4);
                  uVar4 = *(undefined *)(param_4 + 6);
                }
                else {
                  sVar7 = 0xff - (ushort)bVar6;
                  uVar9 = (ushort)*(byte *)((uint)pbVar12[-1] + param_8) * (ushort)bVar6 +
                          *(short *)(param_5 + 2) * sVar7 + 0x80;
                  *(undefined *)(puVar5 + -1) =
                       *(undefined *)
                        (((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
                  uVar9 = (ushort)*(byte *)((uint)*pbVar12 + param_8) * (ushort)bVar6 +
                          *(short *)(param_5 + 4) * sVar7 + 0x80;
                  *(undefined *)((int)puVar5 + -1) =
                       *(undefined *)
                        (((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
                  uVar9 = (ushort)*(byte *)((uint)pbVar12[1] + param_8) * (ushort)bVar6 +
                          *(short *)(param_5 + 6) * sVar7 + 0x80;
                  uVar4 = *(undefined *)
                           (((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
                }
              }
              *(undefined *)puVar5 = uVar4;
              pbVar12 = pbVar12 + 4;
              puVar5 = (undefined2 *)((int)puVar5 + 3);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
        }
      }
      else {
        local_4 = iVar2;
        if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
          if (iVar2 != 0) {
            puVar5 = param_2 + 1;
            pbVar12 = (byte *)((int)param_2 + 7);
            do {
              uVar9 = (ushort)pbVar12[-1] * 0x100 + (ushort)*pbVar12;
              if (uVar9 == 0xffff) {
                *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(pbVar12 + -7);
                puVar5[1] = *(undefined2 *)(pbVar12 + -3);
              }
              else {
                if (uVar9 == 0) {
                  *(undefined *)(puVar5 + -1) = *(undefined *)(param_4 + 3);
                  *(undefined *)((int)puVar5 + -1) = *(undefined *)(param_4 + 2);
                  *(undefined *)puVar5 = *(undefined *)(param_4 + 5);
                  *(undefined *)((int)puVar5 + 1) = *(undefined *)(param_4 + 4);
                  *(undefined *)(puVar5 + 1) = *(undefined *)(param_4 + 7);
                  uVar4 = *(undefined *)(param_4 + 6);
                }
                else {
                  bVar6 = pbVar12[-5];
                  bVar3 = pbVar12[-4];
                  bVar8 = pbVar12[-2];
                  bVar1 = pbVar12[-3];
                  uVar13 = (uint)uVar9;
                  iVar14 = 0xffff - uVar13;
                  uVar11 = (ushort)((ushort)pbVar12[-7] * 0x100 + (ushort)pbVar12[-6]) * uVar13 +
                           0x8000 + (uint)*(ushort *)(param_4 + 2) * iVar14;
                  iVar10 = (uVar11 >> 0x10) + uVar11;
                  *(char *)(puVar5 + -1) = (char)((uint)iVar10 >> 0x18);
                  *(undefined *)((int)puVar5 + -1) = (char)((uint)iVar10 >> 0x10);
                  uVar11 = (uint)*(ushort *)(param_4 + 4) * iVar14 + 0x8000 +
                           (ushort)((ushort)bVar6 * 0x100 + (ushort)bVar3) * uVar13;
                  iVar10 = (uVar11 >> 0x10) + uVar11;
                  *(char *)puVar5 = (char)((uint)iVar10 >> 0x18);
                  *(undefined *)((int)puVar5 + 1) = (char)((uint)iVar10 >> 0x10);
                  uVar11 = (uint)*(ushort *)(param_4 + 6) * iVar14 + 0x8000 +
                           (ushort)((ushort)bVar1 * 0x100 + (ushort)bVar8) * uVar13;
                  iVar10 = (uVar11 >> 0x10) + uVar11;
                  uVar4 = (undefined)((uint)iVar10 >> 0x10);
                  *(char *)(puVar5 + 1) = (char)((uint)iVar10 >> 0x18);
                }
                *(undefined *)((int)puVar5 + 3) = uVar4;
              }
              pbVar12 = pbVar12 + 8;
              puVar5 = puVar5 + 3;
              local_4 = local_4 + -1;
            } while (local_4 != 0);
          }
        }
        else {
          if (iVar2 != 0) {
            puVar5 = param_2 + 1;
            pbVar12 = (byte *)((int)param_2 + 1);
            do {
              uVar9 = (ushort)pbVar12[5] * 0x100 + (ushort)pbVar12[6];
              if (uVar9 == 0xffff) {
                uVar9 = *(ushort *)
                         (*(int *)(param_9 + (uint)(*pbVar12 >> ((byte)param_12 & 0x1f)) * 4) +
                         (uint)pbVar12[-1] * 2);
                *(char *)(puVar5 + -1) = (char)((uint)uVar9 >> 8);
                *(undefined *)((int)puVar5 + -1) = (char)uVar9;
                uVar9 = *(ushort *)
                         (*(int *)(param_9 + (uint)(pbVar12[2] >> ((byte)param_12 & 0x1f)) * 4) +
                         (uint)pbVar12[1] * 2);
                *(char *)puVar5 = (char)((uint)uVar9 >> 8);
                *(undefined *)((int)puVar5 + 1) = (char)uVar9;
                uVar9 = *(ushort *)
                         (*(int *)(param_9 + (uint)(pbVar12[4] >> ((byte)param_12 & 0x1f)) * 4) +
                         (uint)pbVar12[3] * 2);
LAB_0040e3e5:
                uVar4 = (undefined)uVar9;
                *(char *)(puVar5 + 1) = (char)((uint)uVar9 >> 8);
              }
              else {
                if (uVar9 != 0) {
                  uVar13 = (uint)uVar9;
                  iVar10 = 0xffff - uVar13;
                  uVar11 = *(ushort *)
                            (*(int *)(param_11 + (uint)(*pbVar12 >> ((byte)param_12 & 0x1f)) * 4) +
                            (uint)pbVar12[-1] * 2) * uVar13 + 0x8000 +
                           (uint)*(ushort *)(param_5 + 2) * iVar10;
                  uVar11 = (uVar11 >> 0x10) + uVar11;
                  uVar9 = *(ushort *)
                           (*(int *)(param_10 +
                                    ((uVar11 >> 0x10 & 0xff) >> ((byte)param_12 & 0x1f)) * 4) +
                           (uVar11 >> 0x18) * 2);
                  *(char *)(puVar5 + -1) = (char)((uint)uVar9 >> 8);
                  *(undefined *)((int)puVar5 + -1) = (char)uVar9;
                  uVar11 = *(ushort *)
                            (*(int *)(param_11 + (uint)(pbVar12[2] >> ((byte)param_12 & 0x1f)) * 4)
                            + (uint)pbVar12[1] * 2) * uVar13 + 0x8000 +
                           (uint)*(ushort *)(param_5 + 4) * iVar10;
                  uVar11 = (uVar11 >> 0x10) + uVar11;
                  uVar9 = *(ushort *)
                           (*(int *)(param_10 +
                                    ((uVar11 >> 0x10 & 0xff) >> ((byte)param_12 & 0x1f)) * 4) +
                           (uVar11 >> 0x18) * 2);
                  *(char *)puVar5 = (char)((uint)uVar9 >> 8);
                  *(undefined *)((int)puVar5 + 1) = (char)uVar9;
                  uVar11 = *(ushort *)
                            (*(int *)(param_11 + (uint)(pbVar12[4] >> ((byte)param_12 & 0x1f)) * 4)
                            + (uint)pbVar12[3] * 2) * uVar13 + 0x8000 +
                           (uint)*(ushort *)(param_5 + 6) * iVar10;
                  uVar11 = (uVar11 >> 0x10) + uVar11;
                  uVar9 = *(ushort *)
                           (*(int *)(param_10 +
                                    ((uVar11 >> 0x10 & 0xff) >> ((byte)param_12 & 0x1f)) * 4) +
                           (uVar11 >> 0x18) * 2);
                  goto LAB_0040e3e5;
                }
                *(undefined *)(puVar5 + -1) = *(undefined *)(param_4 + 3);
                *(undefined *)((int)puVar5 + -1) = *(undefined *)(param_4 + 2);
                *(undefined *)puVar5 = *(undefined *)(param_4 + 5);
                *(undefined *)((int)puVar5 + 1) = *(undefined *)(param_4 + 4);
                *(undefined *)(puVar5 + 1) = *(undefined *)(param_4 + 7);
                uVar4 = *(undefined *)(param_4 + 6);
              }
              *(undefined *)((int)puVar5 + 3) = uVar4;
              pbVar12 = pbVar12 + 8;
              puVar5 = puVar5 + 3;
              local_4 = local_4 + -1;
            } while (local_4 != 0);
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + -1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
      bVar6 = *(char *)((int)param_1 + 9) * *(char *)((int)param_1 + 10);
      *(byte *)((int)param_1 + 0xb) = bVar6;
      if (7 < bVar6) {
        param_1[1] = (uint)(bVar6 >> 3) * iVar2;
        return;
      }
      param_1[1] = (uint)bVar6 * iVar2 + 7 >> 3;
    }
  }
  return;
}



void __cdecl FUN_0040e5e0(int *param_1,byte *param_2,int param_3,int param_4,byte param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *local_c;
  int local_8;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar7 = *param_1;
  if (((bVar1 < 9) && (param_3 != 0)) || ((bVar1 == 0x10 && (param_4 != 0)))) {
    switch(*(undefined *)(param_1 + 2)) {
    case 0:
      if ((bVar1 == 2) && (local_c = param_2, iVar7 != 0)) {
        local_8 = (iVar7 - 1U >> 2) + 1;
        do {
          uVar4 = (uint)*local_c;
          uVar6 = uVar4 & 0xc;
          uVar5 = uVar4 & 3;
          uVar8 = uVar4 & 0x30;
          uVar4 = uVar4 & 0xc0;
          *local_c = ((*(byte *)(((uVar6 * 4 | uVar6) * 4 | (int)uVar6 >> 2 | uVar6) + param_3) &
                       0xcf | *(byte *)((((uVar5 * 4 | uVar5) * 4 | uVar5) * 4 | uVar5) + param_3)
                              >> 2) >> 2 |
                     *(byte *)(((int)((int)uVar8 >> 2 | uVar8) >> 2 | uVar8 * 4 | uVar8) + param_3)
                     & 0xc3) >> 2 |
                     *(byte *)(((int)((int)((int)uVar4 >> 2 | uVar4) >> 2 | uVar4) >> 2 | uVar4) +
                              param_3) & 0xc0;
          local_c = local_c + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      cVar2 = *(char *)((int)param_1 + 9);
      if (cVar2 == '\x04') {
        if (iVar7 != 0) {
          iVar7 = (iVar7 - 1U >> 1) + 1;
          do {
            uVar5 = (uint)*param_2 & 0xf0;
            uVar4 = (uint)*param_2 & 0xf;
            *param_2 = *(byte *)(((int)uVar5 >> 4 | uVar5) + param_3) & 0xf0 |
                       *(byte *)((uVar4 << 4 | uVar4) + param_3) >> 4;
            param_2 = param_2 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      else {
        if (cVar2 == '\b') {
          if (iVar7 != 0) {
            do {
              *param_2 = *(byte *)((uint)*param_2 + param_3);
              param_2 = param_2 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            return;
          }
        }
        else {
          if (cVar2 == '\x10') {
            while (iVar7 != 0) {
              uVar3 = *(ushort *)
                       (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                       (uint)*param_2 * 2);
              *param_2 = (byte)((uint)uVar3 >> 8);
              param_2[1] = (byte)uVar3;
              param_2 = param_2 + 2;
              iVar7 = iVar7 + -1;
            }
          }
        }
      }
      break;
    case 2:
      if (bVar1 == 8) {
        if (iVar7 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2[1] = *(byte *)((uint)param_2[1] + param_3);
            param_2[2] = *(byte *)((uint)param_2[2] + param_3);
            param_2 = param_2 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      else {
        if (iVar7 != 0) {
          do {
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                     (uint)*param_2 * 2);
            param_2[1] = (byte)uVar3;
            *param_2 = (byte)((uint)uVar3 >> 8);
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                     (uint)param_2[2] * 2);
            param_2[3] = (byte)uVar3;
            param_2[2] = (byte)((uint)uVar3 >> 8);
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                     (uint)param_2[4] * 2);
            param_2[4] = (byte)((uint)uVar3 >> 8);
            param_2[5] = (byte)uVar3;
            param_2 = param_2 + 6;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      break;
    case 4:
      if (bVar1 == 8) {
        if (iVar7 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2 = param_2 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      else {
        if (iVar7 != 0) {
          do {
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                     (uint)*param_2 * 2);
            *param_2 = (byte)((uint)uVar3 >> 8);
            param_2[1] = (byte)uVar3;
            param_2 = param_2 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      break;
    case 6:
      if (bVar1 == 8) {
        if (iVar7 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2[1] = *(byte *)((uint)param_2[1] + param_3);
            param_2[2] = *(byte *)((uint)param_2[2] + param_3);
            param_2 = param_2 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      else {
        if (iVar7 != 0) {
          do {
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                     (uint)*param_2 * 2);
            param_2[1] = (byte)uVar3;
            *param_2 = (byte)((uint)uVar3 >> 8);
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                     (uint)param_2[2] * 2);
            param_2[3] = (byte)uVar3;
            param_2[2] = (byte)((uint)uVar3 >> 8);
            uVar3 = *(ushort *)
                     (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                     (uint)param_2[4] * 2);
            param_2[4] = (byte)((uint)uVar3 >> 8);
            param_2[5] = (byte)uVar3;
            param_2 = param_2 + 8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
    }
  }
  return;
}



void __cdecl FUN_0040e9a0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar5 = *param_1;
  if (*(char *)(param_1 + 2) == '\x03') {
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        pbVar6 = (byte *)((uVar5 - 1 >> 3) + param_2);
        iVar3 = 7 - (uVar5 - 1 & 7);
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        uVar2 = uVar5;
        while (uVar2 != 0) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar7 = pbVar7 + -1;
          uVar2 = uVar2 - 1;
        }
      }
      else {
        if (bVar1 == 2) {
          pbVar6 = (byte *)((uVar5 - 1 >> 2) + param_2);
          iVar3 = (3 - (uVar5 - 1 & 3)) * 2;
          pbVar7 = (byte *)((uVar5 - 1) + param_2);
          uVar2 = uVar5;
          while (uVar2 != 0) {
            *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 3;
            if (iVar3 == 6) {
              iVar3 = 0;
              pbVar6 = pbVar6 + -1;
            }
            else {
              iVar3 = iVar3 + 2;
            }
            pbVar7 = pbVar7 + -1;
            uVar2 = uVar2 - 1;
          }
        }
        else {
          if (bVar1 == 4) {
            pbVar6 = (byte *)((uVar5 - 1 >> 1) + param_2);
            iVar3 = (uVar5 & 1) * 4;
            pbVar7 = (byte *)((uVar5 - 1) + param_2);
            uVar2 = uVar5;
            while (uVar2 != 0) {
              *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 0xf;
              if (iVar3 == 4) {
                iVar3 = 0;
                pbVar6 = pbVar6 + -1;
              }
              else {
                iVar3 = iVar3 + 4;
              }
              pbVar7 = pbVar7 + -1;
              uVar2 = uVar2 - 1;
            }
          }
        }
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar5;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar7 = (byte *)((uVar5 - 1) + param_2);
      if (param_4 != 0) {
        uVar2 = uVar5 * 4;
        puVar4 = (undefined *)((uVar2 - 1) + param_2);
        while (uVar5 != 0) {
          if ((int)(uint)*pbVar7 < param_5) {
            *puVar4 = *(undefined *)((uint)*pbVar7 + param_4);
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *(undefined *)((uint)*pbVar7 * 3 + 2 + param_3);
          puVar4[-2] = *(undefined *)((uint)*pbVar7 * 3 + 1 + param_3);
          puVar4[-3] = *(undefined *)(param_3 + (uint)*pbVar7 * 3);
          puVar4 = puVar4 + -4;
          pbVar7 = pbVar7 + -1;
          uVar5 = uVar5 - 1;
        }
        param_1[1] = uVar2;
        *(undefined *)((int)param_1 + 0xb) = 0x20;
        *(undefined *)(param_1 + 2) = 6;
        *(undefined *)((int)param_1 + 10) = 4;
        *(undefined *)((int)param_1 + 9) = 8;
        return;
      }
      uVar2 = uVar5 * 3;
      puVar4 = (undefined *)((uVar2 - 1) + param_2);
      while (uVar5 != 0) {
        *puVar4 = *(undefined *)((uint)*pbVar7 * 3 + 2 + param_3);
        puVar4[-1] = *(undefined *)((uint)*pbVar7 * 3 + 1 + param_3);
        puVar4[-2] = *(undefined *)(param_3 + (uint)*pbVar7 * 3);
        puVar4 = puVar4 + -3;
        pbVar7 = pbVar7 + -1;
        uVar5 = uVar5 - 1;
      }
      *(undefined *)((int)param_1 + 0xb) = 0x18;
      *(undefined *)(param_1 + 2) = 2;
      *(undefined *)((int)param_1 + 10) = 3;
      param_1[1] = uVar2;
      *(undefined *)((int)param_1 + 9) = 8;
    }
  }
  return;
}



void __cdecl FUN_0040ebf0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  ushort uVar10;
  byte *pbVar11;
  
  iVar1 = *param_1;
  if (*(char *)(param_1 + 2) == '\0') {
    if (param_3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(ushort *)(param_3 + 8);
    }
    bVar2 = *(byte *)((int)param_1 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 1) {
        uVar10 = uVar10 * 0xff;
        pbVar7 = (byte *)((iVar1 - 1U >> 3) + param_2);
        iVar6 = 7 - (iVar1 - 1U & 7);
        pcVar8 = (char *)(iVar1 + -1 + param_2);
        iVar9 = iVar1;
        while (iVar9 != 0) {
          *pcVar8 = -((*pbVar7 >> ((byte)iVar6 & 0x1f) & 1) != 0);
          if (iVar6 == 7) {
            iVar6 = 0;
            pbVar7 = pbVar7 + -1;
          }
          else {
            iVar6 = iVar6 + 1;
          }
          pcVar8 = pcVar8 + -1;
          iVar9 = iVar9 + -1;
        }
      }
      else {
        if (bVar2 == 2) {
          uVar10 = uVar10 * 0x55;
          pbVar11 = (byte *)((iVar1 - 1U >> 2) + param_2);
          iVar6 = (3 - (iVar1 - 1U & 3)) * 2;
          pbVar7 = (byte *)(iVar1 + -1 + param_2);
          iVar9 = iVar1;
          while (iVar9 != 0) {
            bVar2 = *pbVar11 >> ((byte)iVar6 & 0x1f) & 3;
            *pbVar7 = ((bVar2 * '\x04' | bVar2) * '\x04' | bVar2) * '\x04' | bVar2;
            if (iVar6 == 6) {
              iVar6 = 0;
              pbVar11 = pbVar11 + -1;
            }
            else {
              iVar6 = iVar6 + 2;
            }
            pbVar7 = pbVar7 + -1;
            iVar9 = iVar9 + -1;
          }
        }
        else {
          if (bVar2 == 4) {
            uVar10 = uVar10 * 0x11;
            pbVar11 = (byte *)((iVar1 - 1U >> 1) + param_2);
            iVar6 = (iVar1 - 1U & 1) * -4 + 4;
            pbVar7 = (byte *)(iVar1 + -1 + param_2);
            iVar9 = iVar1;
            while (iVar9 != 0) {
              bVar2 = *pbVar11 >> ((byte)iVar6 & 0x1f) & 0xf;
              *pbVar7 = bVar2 << 4 | bVar2;
              if (iVar6 == 4) {
                iVar6 = 0;
                pbVar11 = pbVar11 + -1;
              }
              else {
                iVar6 = 4;
              }
              pbVar7 = pbVar7 + -1;
              iVar9 = iVar9 + -1;
            }
          }
        }
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar1;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar7 = (byte *)(iVar1 + -1 + param_2);
      puVar4 = (undefined *)(param_2 + -1 + iVar1 * 2);
      iVar9 = iVar1;
      if (iVar1 != 0) {
        do {
          if ((ushort)*pbVar7 == uVar10) {
            *puVar4 = 0;
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *pbVar7;
          puVar4 = puVar4 + -2;
          pbVar7 = pbVar7 + -1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        cVar3 = *(char *)((int)param_1 + 9);
        *(undefined *)(param_1 + 2) = 4;
        *(undefined *)((int)param_1 + 10) = 2;
        goto LAB_0040efba;
      }
    }
    else {
      if (*(char *)((int)param_1 + 9) == '\x10') {
        puVar4 = (undefined *)(param_1[1] + -1 + param_2);
        puVar5 = (undefined *)(param_2 + -1 + param_1[1] * 2);
        iVar9 = iVar1;
        while (iVar9 != 0) {
          if (CONCAT11(puVar4[-1],*puVar4) == uVar10) {
            *puVar5 = 0;
            puVar5[-1] = 0;
          }
          else {
            *puVar5 = 0xff;
            puVar5[-1] = 0xff;
          }
          puVar5[-2] = *puVar4;
          puVar5[-3] = puVar4[-1];
          puVar5 = puVar5 + -4;
          puVar4 = puVar4 + -2;
          iVar9 = iVar9 + -1;
        }
      }
    }
    cVar3 = *(char *)((int)param_1 + 9);
    *(undefined *)(param_1 + 2) = 4;
    *(undefined *)((int)param_1 + 10) = 2;
  }
  else {
    if (*(char *)(param_1 + 2) != '\x02') {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar7 = (byte *)(param_1[1] + -1 + param_2);
      puVar4 = (undefined *)(param_2 + -1 + iVar1 * 4);
      iVar9 = iVar1;
      while (iVar9 != 0) {
        if ((((ushort)pbVar7[-2] == *(ushort *)(param_3 + 2)) &&
            ((ushort)pbVar7[-1] == *(ushort *)(param_3 + 4))) &&
           ((ushort)*pbVar7 == *(ushort *)(param_3 + 6))) {
          *puVar4 = 0;
        }
        else {
          *puVar4 = 0xff;
        }
        puVar4[-1] = *pbVar7;
        puVar4[-2] = pbVar7[-1];
        puVar4[-3] = pbVar7[-2];
        puVar4 = puVar4 + -4;
        pbVar7 = pbVar7 + -3;
        iVar9 = iVar9 + -1;
      }
    }
    else {
      if (*(char *)((int)param_1 + 9) == '\x10') {
        puVar4 = (undefined *)(param_1[1] + -1 + param_2);
        puVar5 = (undefined *)(param_2 + -1 + iVar1 * 8);
        iVar9 = iVar1;
        while (iVar9 != 0) {
          if (((CONCAT11(puVar4[-5],puVar4[-4]) == *(short *)(param_3 + 2)) &&
              (CONCAT11(puVar4[-3],puVar4[-2]) == *(short *)(param_3 + 4))) &&
             (CONCAT11(puVar4[-1],*puVar4) == *(short *)(param_3 + 6))) {
            *puVar5 = 0;
            puVar5[-1] = 0;
          }
          else {
            *puVar5 = 0xff;
            puVar5[-1] = 0xff;
          }
          puVar5[-2] = *puVar4;
          puVar5[-3] = puVar4[-1];
          puVar5[-4] = puVar4[-2];
          puVar5[-5] = puVar4[-3];
          puVar5[-6] = puVar4[-4];
          puVar5[-7] = puVar4[-5];
          puVar5 = puVar5 + -8;
          puVar4 = puVar4 + -6;
          iVar9 = iVar9 + -1;
        }
      }
    }
    *(undefined *)(param_1 + 2) = 6;
    *(undefined *)((int)param_1 + 10) = 4;
    cVar3 = *(char *)((int)param_1 + 9) * '\x02';
  }
LAB_0040efba:
  bVar2 = cVar3 * '\x02';
  *(byte *)((int)param_1 + 0xb) = bVar2;
  if (bVar2 < 8) {
    param_1[1] = (uint)bVar2 * iVar1 + 7 >> 3;
    return;
  }
  param_1[1] = (uint)(bVar2 >> 3) * iVar1;
  return;
}



void __cdecl FUN_0040eff0(int *param_1,byte *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 2);
  iVar5 = *param_1;
  if (((cVar1 == '\x02') && (param_3 != 0)) &&
     (iVar2 = iVar5, pbVar3 = param_2, *(char *)((int)param_1 + 9) == '\b')) {
    while (iVar2 != 0) {
      *pbVar3 = *(byte *)(((((uint)*param_2 & 0xf8) << 5 | (uint)param_2[1] & 0xf8) * 4 |
                          (int)(uint)param_2[2] >> 3) + param_3);
      param_2 = param_2 + 3;
      iVar2 = iVar2 + -1;
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = *(byte *)((int)param_1 + 9);
    *(byte *)((int)param_1 + 0xb) = bVar4;
    *(undefined *)(param_1 + 2) = 3;
    *(undefined *)((int)param_1 + 10) = 1;
    if (7 < bVar4) {
      param_1[1] = (uint)(bVar4 >> 3) * iVar5;
      return;
    }
  }
  else {
    if (((cVar1 != '\x06') || (param_3 == 0)) ||
       (iVar2 = iVar5, pbVar3 = param_2, *(char *)((int)param_1 + 9) != '\b')) {
      if (((cVar1 == '\x03') && (param_4 != 0)) && (*(char *)((int)param_1 + 9) == '\b')) {
        while (iVar5 != 0) {
          *param_2 = *(byte *)((uint)*param_2 + param_4);
          param_2 = param_2 + 1;
          iVar5 = iVar5 + -1;
        }
      }
      return;
    }
    while (iVar2 != 0) {
      *pbVar3 = *(byte *)(((((uint)*param_2 & 0xf8) << 5 | (uint)param_2[1] & 0xf8) * 4 |
                          (int)(uint)param_2[2] >> 3) + param_3);
      param_2 = param_2 + 4;
      iVar2 = iVar2 + -1;
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = *(byte *)((int)param_1 + 9);
    *(byte *)((int)param_1 + 0xb) = bVar4;
    *(undefined *)(param_1 + 2) = 3;
    *(undefined *)((int)param_1 + 10) = 1;
    if (7 < bVar4) {
      param_1[1] = (uint)(bVar4 >> 3) * iVar5;
      return;
    }
  }
  param_1[1] = (uint)bVar4 * iVar5 + 7 >> 3;
  return;
}



// WARNING: Could not reconcile some variable overlaps

void * FUN_0040f160(int *param_1)

{
  double dVar1;
  byte bVar2;
  uint in_EAX;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool in_PF;
  float10 fVar13;
  ushort in_FPUControlWord;
  uint local_38;
  void *local_34;
  undefined local_28;
  ushort uStack36;
  uint local_20;
  
  pvVar3 = (void *)(in_EAX & 0xffff0000 |
                   (uint)(ushort)((ushort)(0.00000000 < (float)param_1[0x57]) << 8 |
                                 (ushort)((float)param_1[0x57] == 0.00000000) << 0xe));
  if (in_PF) {
    if (*(byte *)((int)param_1 + 0x127) < 9) {
      pvVar3 = FUN_00408ba0(param_1,0x100);
      *(void **)(param_1 + 0x59) = pvVar3;
      iVar9 = 0;
      do {
        fVar13 = (float10)_CIpow();
        iVar8 = iVar9 + 1;
        uVar4 = (int)ROUND(fVar13 * (float10)255.00000000 + (float10)0.50000000) & 0xff;
        pvVar3 = (void *)((uint)in_FPUControlWord & 0xff00 | 0xc00 | uVar4);
        *(undefined *)(iVar9 + param_1[0x59]) = (char)uVar4;
        iVar9 = iVar8;
      } while (iVar8 < 0x100);
      if ((param_1[0x1c] & 0x600080U) != 0) {
        pvVar3 = FUN_00408ba0(param_1,0x100);
        *(void **)(param_1 + 0x5b) = pvVar3;
        iVar9 = 0;
        do {
          fVar13 = (float10)_CIpow();
          iVar8 = iVar9 + 1;
          local_28 = (undefined)(int)ROUND(fVar13 * (float10)255.00000000 + (float10)0.50000000);
          *(undefined *)(iVar9 + param_1[0x5b]) = local_28;
          iVar9 = iVar8;
        } while (iVar8 < 0x100);
        pvVar3 = FUN_00408ba0(param_1,0x100);
        *(void **)(param_1 + 0x5a) = pvVar3;
        iVar9 = 0;
        do {
          fVar13 = (float10)_CIpow();
          iVar8 = iVar9 + 1;
          local_28 = (undefined)(int)ROUND(fVar13 * (float10)255.00000000 + (float10)0.50000000);
          *(undefined *)(iVar9 + param_1[0x5a]) = local_28;
          iVar9 = iVar8;
        } while (iVar8 < 0x100);
        return (void *)((uint)in_FPUControlWord | 0xc00);
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        local_38 = (uint)*(byte *)((int)param_1 + 0x17f);
      }
      else {
        local_38 = (uint)*(byte *)(param_1 + 0x5f);
        if ((uint)*(byte *)(param_1 + 0x5f) < (uint)*(byte *)((int)param_1 + 0x17d)) {
          local_38 = (uint)*(byte *)((int)param_1 + 0x17d);
        }
        if (local_38 < (uint)*(byte *)((int)param_1 + 0x17e)) {
          local_38 = (uint)*(byte *)((int)param_1 + 0x17e);
        }
      }
      iVar9 = 0;
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = 0x10 - local_38;
      }
      if (((param_1[0x1c] & 0x400U) == 0) || (4 < (int)local_38)) {
        if ((int)local_38 < 9) {
          if ((int)local_38 < 0) {
            local_38 = 0;
          }
        }
        else {
          local_38 = 8;
        }
      }
      else {
        local_38 = 5;
      }
      param_1[0x56] = local_38 & 0xff;
      bVar2 = (byte)local_38;
      bVar6 = 8 - bVar2;
      iVar8 = 1 << (bVar6 & 0x1f);
      pvVar3 = FUN_00408ba0(param_1,iVar8 * 4);
      *(void **)(param_1 + 0x5c) = pvVar3;
      if ((param_1[0x1c] & 0x480U) == 0) {
        local_34 = (void *)0x0;
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5c] + (int)local_34 * 4) = pvVar3;
            iVar9 = 0;
            do {
              fVar13 = (float10)_CIpow();
              iVar11 = iVar9 + 2;
              local_20._0_2_ =
                   (undefined2)(int)ROUND(fVar13 * (float10)65535.00000000 + (float10)0.50000000);
              *(undefined2 *)(iVar9 + *(int *)(param_1[0x5c] + (int)local_34 * 4)) =
                   (undefined2)local_20;
              iVar9 = iVar11;
            } while (iVar11 < 0x200);
            pvVar3 = (void *)((int)local_34 + 1);
            local_34 = pvVar3;
          } while ((int)pvVar3 < iVar8);
        }
      }
      else {
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5c] + iVar9 * 4) = pvVar3;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
        uVar4 = iVar8 << 8;
        uVar10 = 0;
        local_34 = (void *)0x0;
        dVar1 = (double)uVar4;
        if ((int)uVar4 < 0) {
          dVar1 = dVar1 + 4294967296.00000000;
        }
        do {
          fVar13 = (float10)_CIpow();
          local_20 = (uint)(longlong)ROUND(fVar13 * (float10)dVar1);
          if (uVar10 <= local_20) {
            uStack36 = (ushort)(((uint)local_34 & 0xff) << 8) | (ushort)local_34;
            do {
              uVar7 = uVar10 >> (bVar6 & 0x1f);
              uVar5 = 0xff >> (bVar2 & 0x1f) & uVar10;
              uVar10 = uVar10 + 1;
              *(ushort *)(*(int *)(param_1[0x5c] + uVar5 * 4) + uVar7 * 2) = uStack36;
            } while (uVar10 <= local_20);
          }
          pvVar3 = (void *)((int)local_34 + 1);
          local_34 = pvVar3;
        } while ((int)pvVar3 < 0x100);
        if (uVar10 < uVar4) {
          do {
            pvVar3 = *(void **)(param_1[0x5c] + (0xff >> (bVar2 & 0x1f) & uVar10) * 4);
            uVar5 = uVar10 >> (bVar6 & 0x1f);
            uVar10 = uVar10 + 1;
            *(undefined2 *)((int)pvVar3 + uVar5 * 2) = 0xffff;
          } while (uVar10 < uVar4);
        }
      }
      if ((param_1[0x1c] & 0x600080U) != 0) {
        pvVar3 = FUN_00408ba0(param_1,iVar8 * 4);
        iVar9 = 0;
        *(void **)(param_1 + 0x5e) = pvVar3;
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5e] + iVar9 * 4) = pvVar3;
            iVar11 = 0;
            do {
              fVar13 = (float10)_CIpow();
              iVar12 = iVar11 + 2;
              local_20._0_2_ =
                   (undefined2)(int)ROUND(fVar13 * (float10)65535.00000000 + (float10)0.50000000);
              *(undefined2 *)(iVar11 + *(int *)(param_1[0x5e] + iVar9 * 4)) = (undefined2)local_20;
              iVar11 = iVar12;
            } while (iVar12 < 0x200);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
        pvVar3 = FUN_00408ba0(param_1,iVar8 * 4);
        iVar9 = 0;
        *(void **)(param_1 + 0x5d) = pvVar3;
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5d] + iVar9 * 4) = pvVar3;
            iVar11 = 0;
            do {
              fVar13 = (float10)_CIpow();
              pvVar3 = *(void **)(param_1[0x5d] + iVar9 * 4);
              iVar12 = iVar11 + 2;
              local_20._0_2_ =
                   (undefined2)(int)ROUND(fVar13 * (float10)65535.00000000 + (float10)0.50000000);
              *(undefined2 *)(iVar11 + (int)pvVar3) = (undefined2)local_20;
              iVar11 = iVar12;
            } while (iVar12 < 0x200);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
      }
    }
  }
  return pvVar3;
}



void __cdecl FUN_0040f880(int *param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar4 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (bVar1 == 2) {
        iVar7 = 3;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        iVar7 = 4;
      }
      if (iVar4 != 0) {
        pcVar2 = (char *)(param_2 + 2);
        do {
          pcVar2[-2] = pcVar2[-2] + pcVar2[-1];
          *pcVar2 = *pcVar2 + pcVar2[-1];
          pcVar2 = pcVar2 + iVar7;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return;
      }
    }
    else {
      if (*(char *)((int)param_1 + 9) == '\x10') {
        if (bVar1 == 2) {
          iVar7 = 6;
        }
        else {
          if (bVar1 != 6) {
            return;
          }
          iVar7 = 8;
        }
        if (iVar4 != 0) {
          puVar3 = (undefined *)(param_2 + 1);
          do {
            uVar6 = (uint)CONCAT11(puVar3[3],puVar3[4]) + (uint)CONCAT11(puVar3[1],puVar3[2]) &
                    0xffff;
            uVar5 = (uint)CONCAT11(puVar3[-1],*puVar3) + (uint)CONCAT11(puVar3[1],puVar3[2]) &
                    0xffff;
            *puVar3 = (char)uVar5;
            puVar3[-1] = (char)(uVar5 >> 8);
            puVar3[3] = (char)(uVar6 >> 8);
            puVar3[4] = (char)uVar6;
            puVar3 = puVar3 + iVar7;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_0040f950(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  double dVar7;
  bool bVar8;
  undefined uVar9;
  ushort uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  bool in_PF;
  float10 fVar18;
  undefined2 local_3c;
  byte local_3a;
  undefined8 local_38;
  byte local_30;
  undefined local_2c;
  short local_24;
  
  bVar16 = *(byte *)(param_1 + 0x126);
  uVar17 = *(uint *)(param_1 + 0x70);
  if (((uVar17 & 0x100) != 0) && ((uVar17 & 0x1000) != 0)) {
    if ((bVar16 & 2) != 0) {
      if (bVar16 == 3) {
        pbVar11 = (byte *)((uint)*(byte *)(param_1 + 0x138) * 3 + *(int *)(param_1 + 0x114));
        *(ushort *)(param_1 + 0x13a) = (ushort)*pbVar11;
        *(ushort *)(param_1 + 0x13c) = (ushort)pbVar11[1];
        uVar10 = (ushort)pbVar11[2];
        goto LAB_0040fa32;
      }
      goto switchD_0040f9a3_caseD_3;
    }
    switch(*(undefined *)(param_1 + 0x127)) {
    case 1:
      uVar10 = *(short *)(param_1 + 0x140) * 0xff;
      break;
    case 2:
      uVar10 = *(short *)(param_1 + 0x140) * 0x55;
      break;
    default:
      goto switchD_0040f9a3_caseD_3;
    case 4:
      uVar10 = *(short *)(param_1 + 0x140) * 0x11;
      break;
    case 8:
    case 0x10:
      uVar10 = *(ushort *)(param_1 + 0x140);
      *(ushort *)(param_1 + 0x13c) = uVar10;
      *(ushort *)(param_1 + 0x13a) = uVar10;
      goto LAB_0040fa32;
    }
    *(ushort *)(param_1 + 0x140) = uVar10;
    *(ushort *)(param_1 + 0x13c) = uVar10;
    *(ushort *)(param_1 + 0x13a) = uVar10;
LAB_0040fa32:
    *(ushort *)(param_1 + 0x13e) = uVar10;
  }
switchD_0040f9a3_caseD_3:
  *(undefined4 *)(param_1 + 0x142) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x146) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined2 *)(param_1 + 0x14a) = *(undefined2 *)(param_1 + 0x140);
  if (((bVar16 == 3) && (*(short *)(param_1 + 0x11a) != 0)) && (!in_PF)) {
    bVar8 = false;
    iVar12 = 0;
    if (*(short *)(param_1 + 0x11a) != 0) {
      do {
        cVar1 = *(char *)(*(int *)(param_1 + 0x188) + iVar12);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          bVar8 = true;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)(uint)*(ushort *)(param_1 + 0x11a));
      if (bVar8) goto LAB_0040fad8;
    }
    *(uint *)(param_1 + 0x70) = uVar17 & 0xffffdfff;
  }
LAB_0040fad8:
  if ((*(uint *)(param_1 + 0x70) & 0x602000) == 0) {
    if (((char)*(uint *)(param_1 + 0x70) < '\0') && (bVar16 == 3)) {
      uVar10 = *(ushort *)(param_1 + 0x11a);
      bVar3 = *(byte *)(param_1 + 0x13c);
      bVar15 = *(byte *)(param_1 + 0x13a);
      iVar12 = 0;
      bVar2 = *(byte *)(param_1 + 0x13e);
      if (uVar10 != 0) {
        pbVar11 = (byte *)(*(int *)(param_1 + 0x114) + 2);
        do {
          cVar1 = *(char *)(*(int *)(param_1 + 0x188) + iVar12);
          if (cVar1 == '\0') {
            *(ushort *)(pbVar11 + -2) = CONCAT11(bVar3,bVar15);
            *pbVar11 = bVar2;
          }
          else {
            if (cVar1 != -1) {
              bVar4 = *(byte *)(*(int *)(param_1 + 0x188) + iVar12);
              uVar14 = (0xff - (ushort)bVar4) * (ushort)bVar15 + (ushort)pbVar11[-2] * (ushort)bVar4
                       + 0x80;
              pbVar11[-2] = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
              bVar4 = *(byte *)(*(int *)(param_1 + 0x188) + iVar12);
              uVar14 = (0xff - (ushort)bVar4) * (ushort)bVar3 + (ushort)pbVar11[-1] * (ushort)bVar4
                       + 0x80;
              pbVar11[-1] = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
              bVar4 = *(byte *)(*(int *)(param_1 + 0x188) + iVar12);
              uVar14 = (0xff - (ushort)bVar4) * (ushort)bVar2 + (ushort)*pbVar11 * (ushort)bVar4 +
                       0x80;
              *pbVar11 = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
            }
          }
          iVar12 = iVar12 + 1;
          pbVar11 = pbVar11 + 3;
        } while (iVar12 < (int)(uint)uVar10);
      }
    }
  }
  else {
    FUN_0040f160(param_1);
    if ((*(byte *)(param_1 + 0x70) & 0x80) == 0) {
      if (bVar16 == 3) {
        uVar17 = (uint)*(ushort *)(param_1 + 0x118);
        if (*(ushort *)(param_1 + 0x118) != 0) {
          pbVar11 = (byte *)(*(int *)(param_1 + 0x114) + 2);
          do {
            pbVar11[-2] = *(byte *)((uint)pbVar11[-2] + *(int *)(param_1 + 0x164));
            pbVar11[-1] = *(byte *)((uint)pbVar11[-1] + *(int *)(param_1 + 0x164));
            *pbVar11 = *(byte *)((uint)*pbVar11 + *(int *)(param_1 + 0x164));
            pbVar11 = pbVar11 + 3;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
    }
    else {
      if (bVar16 == 3) {
        uVar10 = *(ushort *)(param_1 + 0x118);
        if (*(char *)(param_1 + 0x130) == '\x02') {
          iVar12 = *(int *)(param_1 + 0x164);
          local_3c = CONCAT11(*(undefined *)((uint)*(ushort *)(param_1 + 0x13c) + iVar12),
                              *(undefined *)(iVar12 + (uint)*(ushort *)(param_1 + 0x13a)));
          local_3a = *(byte *)((uint)*(ushort *)(param_1 + 0x13e) + iVar12);
          iVar12 = *(int *)(param_1 + 0x16c);
          bVar15 = *(byte *)(iVar12 + (uint)*(ushort *)(param_1 + 0x13a));
          local_38._0_3_ =
               (uint3)CONCAT11(*(undefined *)(iVar12 + (uint)*(ushort *)(param_1 + 0x13e)),
                               *(undefined *)(iVar12 + (uint)*(ushort *)(param_1 + 0x13c))) << 8;
        }
        else {
          if (in_PF) {
            fVar18 = (float10)_CIpow();
            local_38._0_1_ = (byte)(int)ROUND(fVar18 * (float10)255.00000000 + (float10)0.50000000);
            uVar9 = (byte)local_38;
            fVar18 = (float10)_CIpow();
            local_38._0_1_ = (byte)(int)ROUND(fVar18 * (float10)255.00000000 + (float10)0.50000000);
            local_3c = CONCAT11((byte)local_38,uVar9);
            fVar18 = (float10)_CIpow();
            local_38._0_1_ = (byte)(int)ROUND(fVar18 * (float10)255.00000000 + (float10)0.50000000);
            local_3a = (byte)local_38;
          }
          else {
            local_3c = CONCAT11(*(undefined *)(param_1 + 0x13c),*(undefined *)(param_1 + 0x13a));
            local_3a = *(byte *)(param_1 + 0x13e);
          }
          fVar18 = (float10)_CIpow();
          local_38._0_1_ = (byte)(int)ROUND(fVar18 * (float10)255.00000000 + (float10)0.50000000);
          bVar15 = (byte)local_38;
          fVar18 = (float10)_CIpow();
          local_38._0_1_ = (byte)(int)ROUND(fVar18 * (float10)255.00000000 + (float10)0.50000000);
          fVar18 = (float10)_CIpow();
          local_2c = (undefined)(int)ROUND(fVar18 * (float10)255.00000000 + (float10)0.50000000);
          local_38._0_3_ = CONCAT12(local_2c,CONCAT11((byte)local_38,(byte)local_38));
        }
        local_38 = (ulonglong)(uint3)local_38;
        iVar12 = 0;
        if (uVar10 != 0) {
          pbVar11 = (byte *)(*(int *)(param_1 + 0x114) + 2);
          do {
            if (iVar12 < (int)(uint)*(ushort *)(param_1 + 0x11a)) {
              cVar1 = *(char *)(*(int *)(param_1 + 0x188) + iVar12);
              if (cVar1 == -1) goto LAB_0040ff16;
              if (cVar1 == '\0') {
                *(undefined2 *)(pbVar11 + -2) = local_3c;
                *pbVar11 = local_3a;
              }
              else {
                bVar2 = *(byte *)(*(int *)(param_1 + 0x188) + iVar12);
                uVar14 = (ushort)*(byte *)((uint)pbVar11[-2] + *(int *)(param_1 + 0x16c)) *
                         (ushort)bVar2 + (0xff - (ushort)bVar2) * (ushort)bVar15 + 0x80;
                pbVar11[-2] = *(byte *)(((int)((uint)(uVar14 >> 8) + (uint)uVar14) >> 8 & 0xffU) +
                                       *(int *)(param_1 + 0x168));
                bVar2 = *(byte *)(*(int *)(param_1 + 0x188) + iVar12);
                uVar14 = (ushort)*(byte *)((uint)pbVar11[-1] + *(int *)(param_1 + 0x16c)) *
                         (ushort)bVar2 + (0xff - (ushort)bVar2) * (ushort)local_38._1_1_ + 0x80;
                pbVar11[-1] = *(byte *)(((int)((uint)(uVar14 >> 8) + (uint)uVar14) >> 8 & 0xffU) +
                                       *(int *)(param_1 + 0x168));
                bVar2 = *(byte *)(*(int *)(param_1 + 0x188) + iVar12);
                uVar14 = (ushort)*(byte *)((uint)*pbVar11 + *(int *)(param_1 + 0x16c)) *
                         (ushort)bVar2 + (0xff - (ushort)bVar2) * (ushort)local_38._2_1_ + 0x80;
                *pbVar11 = *(byte *)(((int)((uint)(uVar14 >> 8) + (uint)uVar14) >> 8 & 0xffU) +
                                    *(int *)(param_1 + 0x168));
              }
            }
            else {
LAB_0040ff16:
              pbVar11[-2] = *(byte *)((uint)pbVar11[-2] + *(int *)(param_1 + 0x164));
              pbVar11[-1] = *(byte *)((uint)pbVar11[-1] + *(int *)(param_1 + 0x164));
              *pbVar11 = *(byte *)((uint)*pbVar11 + *(int *)(param_1 + 0x164));
            }
            iVar12 = iVar12 + 1;
            pbVar11 = pbVar11 + 3;
          } while (iVar12 < (int)(uint)uVar10);
        }
      }
      else {
        iVar12 = (1 << (*(byte *)(param_1 + 0x127) & 0x1f)) + -1;
        dVar7 = (double)iVar12;
        if (iVar12 < 0) {
          dVar7 = dVar7 + 4294967296.00000000;
        }
        fVar18 = (float10)_CIpow();
        local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
        *(undefined2 *)(param_1 + 0x14a) = local_24;
        fVar18 = (float10)_CIpow();
        sVar5 = *(short *)(param_1 + 0x13a);
        local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
        *(short *)(param_1 + 0x140) = local_24;
        if (((sVar5 == *(short *)(param_1 + 0x13c)) && (sVar5 == *(short *)(param_1 + 0x13e))) &&
           (sVar5 == local_24)) {
          uVar6 = *(undefined2 *)(param_1 + 0x14a);
          *(undefined2 *)(param_1 + 0x148) = uVar6;
          *(undefined2 *)(param_1 + 0x146) = uVar6;
          *(undefined2 *)(param_1 + 0x144) = uVar6;
          *(short *)(param_1 + 0x13e) = local_24;
          *(short *)(param_1 + 0x13c) = local_24;
          *(short *)(param_1 + 0x13a) = local_24;
        }
        else {
          fVar18 = (float10)_CIpow();
          local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
          *(undefined2 *)(param_1 + 0x144) = local_24;
          fVar18 = (float10)_CIpow();
          local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
          *(undefined2 *)(param_1 + 0x146) = local_24;
          fVar18 = (float10)_CIpow();
          local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
          *(undefined2 *)(param_1 + 0x148) = local_24;
          fVar18 = (float10)_CIpow();
          local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
          *(undefined2 *)(param_1 + 0x13a) = local_24;
          fVar18 = (float10)_CIpow();
          local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
          *(undefined2 *)(param_1 + 0x13c) = local_24;
          fVar18 = (float10)_CIpow();
          local_24 = (short)(int)ROUND(fVar18 * (float10)dVar7 + (float10)0.50000000);
          *(undefined2 *)(param_1 + 0x13e) = local_24;
        }
      }
    }
  }
  if (((*(byte *)(param_1 + 0x70) & 8) != 0) && (bVar16 == 3)) {
    _bVar16 = 8 - (uint)*(byte *)(param_1 + 0x17c);
    bVar16 = (byte)_bVar16;
    iVar12 = 8 - (uint)*(byte *)(param_1 + 0x17d);
    param_1._0_1_ = (byte)iVar12;
    iVar13 = 8 - (uint)*(byte *)(param_1 + 0x17e);
    local_30 = (byte)iVar13;
    if ((_bVar16 < 0) || (8 < _bVar16)) {
      bVar16 = 0;
    }
    if ((iVar12 < 0) || (8 < iVar12)) {
      param_1._0_1_ = 0;
    }
    if ((iVar13 < 0) || (8 < iVar13)) {
      local_30 = 0;
    }
    if (*(ushort *)(param_1 + 0x118) != 0) {
      iVar12 = 0;
      uVar17 = (uint)*(ushort *)(param_1 + 0x118);
      do {
        pbVar11 = (byte *)(*(int *)(param_1 + 0x114) + iVar12);
        *pbVar11 = *pbVar11 >> (bVar16 & 0x1f);
        pbVar11 = (byte *)(*(int *)(param_1 + 0x114) + 1 + iVar12);
        *pbVar11 = *pbVar11 >> ((byte)param_1 & 0x1f);
        pbVar11 = (byte *)(*(int *)(param_1 + 0x114) + 2 + iVar12);
        *pbVar11 = *pbVar11 >> (local_30 & 0x1f);
        iVar12 = iVar12 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  return;
}



void __cdecl FUN_00410530(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uStack52;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&stack0xffffffc8;
  if (param_1[0x3b] == 0) {
    sprintf(&stack0xffffffc8,"NULL row buffer for row %ld, pass %d",param_1[0x39],
            (uint)*(byte *)(param_1 + 0x49));
    FUN_00408740(param_1,&stack0xffffffc8);
  }
  if ((param_1[0x1c] & 0x1000U) != 0) {
    if (*(char *)(param_1 + 0x42) == '\x03') {
      FUN_0040e9a0((uint *)(param_1 + 0x40),param_1[0x3b] + 1,param_1[0x45],param_1[0x62],
                   (uint)*(ushort *)((int)param_1 + 0x11a));
    }
    else {
      if (*(short *)((int)param_1 + 0x11a) == 0) {
        iVar2 = param_1[0x3b];
        piVar4 = (int *)0x0;
      }
      else {
        iVar2 = param_1[0x3b];
        piVar4 = param_1 + 99;
      }
      FUN_0040ebf0(param_1 + 0x40,iVar2 + 1,(int)piVar4);
    }
  }
  if ((param_1[0x1b] & 0x400000U) != 0) {
    FUN_00410b20((uint *)(param_1 + 0x40),(undefined *)(param_1[0x3b] + 1),
                 param_1[0x1b] & 0x400000U | 0x80);
  }
  if ((param_1[0x1c] & 0x600000U) != 0) {
    iVar2 = FUN_0040cee0((int)param_1,param_1 + 0x40,(byte *)(param_1[0x3b] + 1));
    if (iVar2 != 0) {
      *(undefined *)(param_1 + 0x8a) = 1;
      if (param_1[0x1c] == 0x400000) {
        FUN_004087f0((int)param_1,"png_do_rgb_to_gray found nongray pixel");
      }
      if (param_1[0x1c] == 0x200000) {
        FUN_00408740(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1a] & 0x800U) == 0)) {
    FUN_0040cd20(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x80) != 0) &&
     ((*(short *)((int)param_1 + 0x11a) != 0 || ((*(byte *)((int)param_1 + 0x126) & 4) != 0)))) {
    FUN_0040d5e0(param_1 + 0x40,(undefined2 *)(param_1[0x3b] + 1),(int)(param_1 + 99),
                 (int)(param_1 + 0x4e),(int)param_1 + 0x142,param_1[0x59],param_1[0x5a],
                 param_1[0x5b],param_1[0x5c],param_1[0x5d],param_1[0x5e],(ushort)param_1[0x56]);
  }
  if (((param_1[0x1c] & 0x2000U) != 0) &&
     (((-1 < (char)param_1[0x1c] ||
       ((*(short *)((int)param_1 + 0x11a) == 0 && ((*(byte *)((int)param_1 + 0x126) & 4) == 0)))) &&
      (*(char *)((int)param_1 + 0x126) != '\x03')))) {
    FUN_0040e5e0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),param_1[0x59],param_1[0x5c],
                 (byte)param_1[0x56]);
  }
  if ((param_1[0x1c] & 0x400U) != 0) {
    FUN_0040c750(param_1 + 0x40,(undefined *)(param_1[0x3b] + 1));
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    FUN_0040eff0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),param_1[0x7b],param_1[0x7c]);
    if (param_1[0x41] == 0) {
      FUN_00408740(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_004109f0((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
    FUN_0040c570(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 4) != 0) {
    FUN_0040c430(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    FUN_00410dd0(param_1 + 0x40,(undefined *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x10000U) != 0) {
    FUN_00410ac0((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1a] & 0x800U) != 0)) {
    FUN_0040cd20(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x8000U) != 0) {
    FUN_0040ca00((uint *)(param_1 + 0x40),param_1[0x3b] + 1,(uint)*(ushort *)((int)param_1 + 0x12e),
                 (byte)param_1[0x1b]);
  }
  if ((param_1[0x1c] & 0x80000U) != 0) {
    FUN_0040c920(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x20000U) != 0) {
    FUN_0040c7a0(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    FUN_00410a80(param_1 + 0x40,(undefined *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x100000U) != 0) {
    if ((code *)param_1[0x16] != (code *)0x0) {
      (*(code *)param_1[0x16])(param_1,param_1 + 0x40);
    }
    if (*(char *)(param_1 + 0x19) != '\0') {
      *(char *)((int)param_1 + 0x109) = *(char *)(param_1 + 0x19);
    }
    if (*(char *)((int)param_1 + 0x65) != '\0') {
      *(char *)((int)param_1 + 0x10a) = *(char *)((int)param_1 + 0x65);
    }
    bVar1 = *(char *)((int)param_1 + 0x10a) * *(char *)((int)param_1 + 0x109);
    *(byte *)((int)param_1 + 0x10b) = bVar1;
    if (bVar1 < 8) {
      uVar3 = (uint)bVar1 * param_1[0x40] + 7 >> 3;
    }
    else {
      uVar3 = (uint)(bVar1 >> 3) * param_1[0x40];
    }
    param_1[0x41] = uVar3;
  }
  uStack52 = 0x4109c7;
  FUN_00412237();
  return;
}



undefined4 __cdecl FUN_004109d0(int param_1)

{
  if (*(char *)(param_1 + 0x123) != '\0') {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    return 7;
  }
  return 1;
}



void __cdecl FUN_004109f0(int param_1,byte *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      do {
        *param_2 = ~*param_2;
        param_2 = param_2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 8) == '\x04') {
      if (*(char *)(param_1 + 9) == '\b') {
        if (*(int *)(param_1 + 4) != 0) {
          iVar1 = (*(int *)(param_1 + 4) - 1U >> 1) + 1;
          do {
            *param_2 = ~*param_2;
            param_2 = param_2 + 2;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          return;
        }
      }
      else {
        if ((*(char *)(param_1 + 9) == '\x10') && (*(int *)(param_1 + 4) != 0)) {
          param_2 = param_2 + 1;
          iVar1 = (*(int *)(param_1 + 4) - 1U >> 2) + 1;
          do {
            param_2[-1] = ~param_2[-1];
            *param_2 = ~*param_2;
            param_2 = param_2 + 4;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
  }
  return;
}



void __cdecl FUN_00410a80(int *param_1,undefined *param_2)

{
  undefined uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1;
    while (iVar2 != 0) {
      uVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = uVar1;
      param_2 = param_2 + 2;
      iVar2 = iVar2 + -1;
    }
  }
  return;
}



void __cdecl FUN_00410ac0(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_0041c040;
    }
    else {
      if (bVar1 == 2) {
        puVar3 = &DAT_0041c140;
      }
      else {
        if (bVar1 != 4) {
          return;
        }
        puVar3 = &DAT_0041c240;
      }
    }
    if (param_2 < pbVar2) {
      do {
        *param_2 = puVar3[*param_2];
        param_2 = param_2 + 1;
      } while (param_2 < pbVar2);
    }
  }
  return;
}



void __cdecl FUN_00410b20(uint *param_1,undefined *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  cVar1 = *(char *)(param_1 + 2);
  uVar2 = *param_1;
  cVar4 = (char)param_3;
  if (((cVar1 == '\x02') || ((cVar1 == '\x06' && ((param_3 & 0x400000) != 0)))) &&
     (*(char *)((int)param_1 + 10) == '\x04')) {
    if (*(char *)((int)param_1 + 9) == '\b') {
      uVar6 = uVar2;
      puVar3 = param_2;
      if (cVar4 < '\0') {
        if (1 < uVar2) {
          iVar5 = uVar2 - 1;
          do {
            puVar3[3] = param_2[4];
            puVar3[4] = param_2[5];
            puVar3[5] = param_2[6];
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 4;
            puVar3 = puVar3 + 3;
          } while (iVar5 != 0);
          *(undefined *)((int)param_1 + 0xb) = 0x18;
          param_1[1] = uVar2 * 3;
          *(undefined *)((int)param_1 + 10) = 3;
          goto LAB_00410dbe;
        }
      }
      else {
        while (uVar6 != 0) {
          *param_2 = puVar3[1];
          param_2[1] = puVar3[2];
          param_2[2] = puVar3[3];
          param_2 = param_2 + 3;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 4;
        }
      }
      *(undefined *)((int)param_1 + 0xb) = 0x18;
      param_1[1] = uVar2 * 3;
      *(undefined *)((int)param_1 + 10) = 3;
    }
    else {
      uVar6 = uVar2;
      puVar3 = param_2;
      if (cVar4 < '\0') {
        if (1 < uVar2) {
          iVar5 = uVar2 - 1;
          do {
            param_2[6] = puVar3[8];
            param_2[7] = puVar3[9];
            param_2[8] = puVar3[10];
            param_2[9] = puVar3[0xb];
            param_2[10] = puVar3[0xc];
            param_2[0xb] = puVar3[0xd];
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 6;
            puVar3 = puVar3 + 8;
          } while (iVar5 != 0);
        }
      }
      else {
        while (uVar6 != 0) {
          *param_2 = puVar3[2];
          param_2[1] = puVar3[3];
          param_2[2] = puVar3[4];
          param_2[3] = puVar3[5];
          param_2[4] = puVar3[6];
          param_2[5] = puVar3[7];
          param_2 = param_2 + 6;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 8;
        }
      }
      *(undefined *)((int)param_1 + 0xb) = 0x30;
      param_1[1] = uVar2 * 6;
      *(undefined *)((int)param_1 + 10) = 3;
    }
    goto LAB_00410dbe;
  }
  if (cVar1 != '\0') {
    if (cVar1 != '\x04') goto LAB_00410dbe;
    if ((param_3 & 0x400000) == 0) {
      return;
    }
  }
  if (*(char *)((int)param_1 + 10) != '\x02') goto LAB_00410dbe;
  if (*(char *)((int)param_1 + 9) == '\b') {
    uVar6 = uVar2;
    puVar3 = param_2;
    if (cVar4 < '\0') {
      if (uVar2 != 0) {
        do {
          *puVar3 = *param_2;
          param_2 = param_2 + 2;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 1;
        } while (uVar6 != 0);
        *(undefined *)((int)param_1 + 0xb) = 8;
        param_1[1] = uVar2;
        goto LAB_00410dba;
      }
    }
    else {
      while (uVar6 != 0) {
        *param_2 = puVar3[1];
        param_2 = param_2 + 1;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 2;
      }
    }
    *(undefined *)((int)param_1 + 0xb) = 8;
    param_1[1] = uVar2;
  }
  else {
    uVar6 = uVar2;
    puVar3 = param_2;
    if (cVar4 < '\0') {
      if (1 < uVar2) {
        iVar5 = uVar2 - 1;
        do {
          param_2[2] = puVar3[4];
          param_2[3] = puVar3[5];
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 2;
          puVar3 = puVar3 + 4;
        } while (iVar5 != 0);
      }
    }
    else {
      while (uVar6 != 0) {
        *param_2 = puVar3[2];
        param_2[1] = puVar3[3];
        param_2 = param_2 + 2;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 4;
      }
    }
    *(undefined *)((int)param_1 + 0xb) = 0x10;
    param_1[1] = uVar2 * 2;
  }
LAB_00410dba:
  *(undefined *)((int)param_1 + 10) = 1;
LAB_00410dbe:
  if ((param_3 & 0x400000) != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
  }
  return;
}



void __cdecl FUN_00410dd0(int *param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar3 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (bVar1 == 2) {
        if (iVar3 != 0) {
          do {
            uVar2 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar2;
            param_2 = param_2 + 3;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          return;
        }
      }
      else {
        if ((bVar1 == 6) && (iVar3 != 0)) {
          do {
            uVar2 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar2;
            param_2 = param_2 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          return;
        }
      }
    }
    else {
      if (*(char *)((int)param_1 + 9) == '\x10') {
        if (bVar1 == 2) {
          if (iVar3 != 0) {
            param_2 = param_2 + 1;
            do {
              uVar2 = param_2[-1];
              param_2[-1] = param_2[3];
              param_2[3] = uVar2;
              uVar2 = *param_2;
              *param_2 = param_2[4];
              param_2[4] = uVar2;
              param_2 = param_2 + 6;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            return;
          }
        }
        else {
          if ((bVar1 == 6) && (iVar3 != 0)) {
            param_2 = param_2 + 1;
            do {
              uVar2 = param_2[-1];
              param_2[-1] = param_2[3];
              param_2[3] = uVar2;
              uVar2 = *param_2;
              *param_2 = param_2[4];
              param_2[4] = uVar2;
              param_2 = param_2 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
    }
  }
  return;
}



void __cdecl FUN_00410ec0(int param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x5a) = *param_3;
    *(undefined4 *)(param_2 + 0x5e) = param_3[1];
    uVar1 = *(undefined2 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined2 *)(param_2 + 0x62) = uVar1;
  }
  return;
}



void FUN_00410ef0(int param_1,int param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,double param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  bool in_PF;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (in_PF) {
      if (!in_PF) {
        FUN_004087f0(param_1,"Ignoring attempt to set negative chromaticity value");
        return;
      }
      if (((ushort)((ushort)(0.00000000 < param_5) << 8 | (ushort)(param_5 == 0.00000000) << 0xe) ==
           0) || ((ushort)((ushort)(0.00000000 < param_6) << 8 |
                          (ushort)(param_6 == 0.00000000) << 0xe) == 0)) {
LAB_004111f9:
        FUN_004087f0(param_1,"Ignoring attempt to set negative chromaticity value");
        return;
      }
      fVar4 = (float)param_7;
      if (in_PF) {
        fVar3 = (float)param_8;
        if (!in_PF) {
          FUN_004087f0(param_1,"Ignoring attempt to set negative chromaticity value");
          return;
        }
        fVar2 = (float)param_9;
        if (!in_PF) goto LAB_004111f9;
        if (in_PF) {
          if (!in_PF) {
            FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (!in_PF) {
            FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (!in_PF) {
            FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          fVar1 = (float)param_6;
          if ((ushort)((ushort)(fVar1 < 21474.82812500) << 8 |
                      (ushort)(fVar1 == 21474.82812500) << 0xe) == 0) {
            FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if ((ushort)((ushort)(fVar4 < 21474.82812500) << 8 |
                      (ushort)(fVar4 == 21474.82812500) << 0xe) == 0) {
            FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if ((ushort)((ushort)(fVar3 < 21474.82812500) << 8 |
                      (ushort)(fVar3 == 21474.82812500) << 0xe) == 0) {
            FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (((ushort)((ushort)(fVar2 < 21474.82812500) << 8 |
                       (ushort)(fVar2 == 21474.82812500) << 0xe) != 0) && (in_PF)) {
            *(float *)(param_2 + 0x80) = (float)param_3;
            *(float *)(param_2 + 0x84) = (float)param_4;
            *(float *)(param_2 + 0x88) = (float)param_5;
            *(float *)(param_2 + 0x8c) = fVar1;
            *(float *)(param_2 + 0x90) = fVar4;
            *(float *)(param_2 + 0x94) = fVar3;
            *(float *)(param_2 + 0x98) = fVar2;
            *(float *)(param_2 + 0x9c) = (float)param_10;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x100) = uVar5;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x104) = uVar5;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x108) = uVar5;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x10c) = uVar5;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x110) = uVar5;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x114) = uVar5;
            uVar5 = FUN_00412520();
            *(undefined4 *)(param_2 + 0x118) = uVar5;
            uVar5 = FUN_00412520();
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
            *(undefined4 *)(param_2 + 0x11c) = uVar5;
            return;
          }
          FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
          return;
        }
      }
    }
    FUN_004087f0(param_1,"Ignoring attempt to set negative chromaticity value");
  }
  return;
}



void FUN_00411230(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool in_PF;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (((-1 < param_3) && (((-1 < param_4 && (-1 < param_5)) && (-1 < param_6)))) &&
       ((((-1 < param_7 && (-1 < param_8)) && (-1 < param_9)) && (-1 < param_10)))) {
      if (((in_PF) &&
          ((ushort)((ushort)((float)param_4 < 2147483520.00000000) << 8 |
                   (ushort)((float)param_4 == 2147483520.00000000) << 0xe) != 0)) &&
         ((fVar6 = (float)param_5,
          (ushort)((ushort)(fVar6 < 2147483520.00000000) << 8 |
                  (ushort)(fVar6 == 2147483520.00000000) << 0xe) != 0 &&
          ((((fVar5 = (float)param_6,
             (ushort)((ushort)(fVar5 < 2147483520.00000000) << 8 |
                     (ushort)(fVar5 == 2147483520.00000000) << 0xe) != 0 &&
             (fVar4 = (float)param_7,
             (ushort)((ushort)(fVar4 < 2147483520.00000000) << 8 |
                     (ushort)(fVar4 == 2147483520.00000000) << 0xe) != 0)) &&
            (fVar3 = (float)param_8,
            (ushort)((ushort)(fVar3 < 2147483520.00000000) << 8 |
                    (ushort)(fVar3 == 2147483520.00000000) << 0xe) != 0)) &&
           ((fVar2 = (float)param_9,
            (ushort)((ushort)(fVar2 < 2147483520.00000000) << 8 |
                    (ushort)(fVar2 == 2147483520.00000000) << 0xe) != 0 &&
            (fVar1 = (float)param_10,
            (ushort)((ushort)(fVar1 < 2147483520.00000000) << 8 |
                    (ushort)(fVar1 == 2147483520.00000000) << 0xe) != 0)))))))) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
        *(int *)(param_2 + 0x100) = param_3;
        *(int *)(param_2 + 0x114) = param_8;
        *(int *)(param_2 + 0x118) = param_9;
        *(int *)(param_2 + 0x104) = param_4;
        *(int *)(param_2 + 0x10c) = param_6;
        *(int *)(param_2 + 0x110) = param_7;
        *(int *)(param_2 + 0x108) = param_5;
        *(int *)(param_2 + 0x11c) = param_10;
        *(float *)(param_2 + 0x80) = (float)param_3 / 100000.00000000;
        *(float *)(param_2 + 0x84) = (float)param_4 / 100000.00000000;
        *(float *)(param_2 + 0x88) = fVar6 / 100000.00000000;
        *(float *)(param_2 + 0x8c) = fVar5 / 100000.00000000;
        *(float *)(param_2 + 0x90) = fVar4 / 100000.00000000;
        *(float *)(param_2 + 0x94) = fVar3 / 100000.00000000;
        *(float *)(param_2 + 0x98) = fVar2 / 100000.00000000;
        *(float *)(param_2 + 0x9c) = fVar1 / 100000.00000000;
        return;
      }
      FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
      return;
    }
    FUN_004087f0(param_1,"Ignoring attempt to set negative chromaticity value");
  }
  return;
}



void FUN_00411420(int param_1,int param_2,double param_3)

{
  float fVar1;
  undefined4 uVar2;
  bool in_PF;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    fVar1 = (float)param_3;
    if ((ushort)((ushort)(fVar1 < 21474.82812500) << 8 | (ushort)(fVar1 == 21474.82812500) << 0xe)
        == 0) {
      FUN_004087f0(param_1,"Limiting gamma to 21474.83");
      fVar1 = 21474.82812500;
    }
    *(float *)(param_2 + 0x28) = fVar1;
    uVar2 = FUN_00412520();
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    *(undefined4 *)(param_2 + 0xfc) = uVar2;
    if (!in_PF) {
      FUN_004087f0(param_1,"Setting gamma=0");
    }
  }
  return;
}



void __cdecl FUN_004114a0(int param_1,int param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 < -0x80000000) {
      if (param_3 < 0) {
        FUN_004087f0(param_1,"Setting negative gamma to zero");
        param_3 = 0;
      }
    }
    else {
      FUN_004087f0(param_1,"Limiting gamma to 21474.83");
      param_3 = 0x7fffffff;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    *(int *)(param_2 + 0xfc) = param_3;
    *(float *)(param_2 + 0x28) = (float)param_3 / 100000.00000000;
    if (param_3 == 0) {
      FUN_004087f0(param_1,"Setting gamma=0");
    }
  }
  return;
}



void __cdecl FUN_00411520(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (*(short *)(param_2 + 0x14) == 0) {
      FUN_004087f0((int)param_1,"Palette size 0, hIST allocation skipped.");
      return;
    }
    FUN_00407e80((int)param_1,param_2,8,0);
    iVar1 = FUN_00408c20(param_1,0x200);
    param_1[0x7d] = iVar1;
    if (iVar1 == 0) {
      FUN_004087f0((int)param_1,"Insufficient memory for hIST chunk data.");
      return;
    }
    iVar1 = 0;
    if (*(short *)(param_2 + 0x14) != 0) {
      do {
        *(undefined2 *)(param_1[0x7d] + iVar1 * 2) = *(undefined2 *)(param_3 + iVar1 * 2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x14));
    }
    iVar1 = param_1[0x7d];
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 8;
    *(int *)(param_2 + 0x7c) = iVar1;
  }
  return;
}



void __cdecl
FUN_004115e0(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            int param_7,uint param_8,int param_9,int param_10,int param_11)

{
  byte bVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_00408740(param_1,"Image width or height is zero in IHDR");
  }
  if (((uint)param_1[0x99] <= param_3 && param_3 != param_1[0x99]) ||
     ((uint)param_1[0x9a] <= param_4 && param_4 != param_1[0x9a])) {
    FUN_00408740(param_1,"image size exceeds user limits in IHDR");
  }
  if ((0x7fffffff < param_3) || (0x7fffffff < param_4)) {
    FUN_00408740(param_1,"Invalid image size in IHDR");
  }
  if (0x1fffff7e < param_3) {
    FUN_004087f0((int)param_1,"Width is too large for libpng to process pixels");
  }
  if ((((param_7 != 1) && (param_7 != 2)) && (param_7 != 4)) &&
     ((param_7 != 8 && (param_7 != 0x10)))) {
    FUN_00408740(param_1,"Invalid bit depth in IHDR");
  }
  if ((((int)param_8 < 0) || (param_8 == 1)) || ((param_8 == 5 || (6 < (int)param_8)))) {
    FUN_00408740(param_1,"Invalid color type in IHDR");
  }
  if (param_8 == 3) {
    if (param_7 < 9) goto LAB_004116ee;
  }
  else {
    if ((((param_8 != 2) && (param_8 != 4)) && (param_8 != 6)) || (7 < param_7)) goto LAB_004116ee;
  }
  FUN_00408740(param_1,"Invalid color type/bit depth combination in IHDR");
LAB_004116ee:
  if (1 < param_9) {
    FUN_00408740(param_1,"Unknown interlace method in IHDR");
  }
  if (param_10 != 0) {
    FUN_00408740(param_1,"Unknown compression method in IHDR");
  }
  if (((param_1[0x1a] & 0x1000U) != 0) && (param_1[0x8c] != 0)) {
    FUN_004087f0((int)param_1,"MNG features are not allowed in a PNG datastream\n");
  }
  if (param_11 != 0) {
    if ((((*(byte *)(param_1 + 0x8c) & 4) == 0) || (param_11 != 0x40)) ||
       (((param_1[0x1a] & 0x1000U) != 0 || ((param_8 != 2 && (param_8 != 6)))))) {
      FUN_00408740(param_1,"Unknown filter method in IHDR");
    }
    if ((param_1[0x1a] & 0x1000U) != 0) {
      FUN_004087f0((int)param_1,"Invalid filter method in IHDR");
    }
  }
  param_2[1] = param_6;
  *(undefined *)((int)param_2 + 0x1a) = (undefined)param_10;
  *(undefined *)((int)param_2 + 0x1b) = (undefined)param_11;
  *param_2 = param_5;
  *(char *)(param_2 + 6) = (char)param_7;
  *(char *)((int)param_2 + 0x19) = (char)param_8;
  *(undefined *)(param_2 + 7) = (undefined)param_9;
  if (((char)param_8 == '\x03') || ((param_8 & 2) == 0)) {
    *(undefined *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined *)((int)param_2 + 0x1d) = 3;
  }
  if ((param_8 & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  bVar1 = *(char *)((int)param_2 + 0x1d) * (char)param_7;
  *(byte *)((int)param_2 + 0x1e) = bVar1;
  if (param_5 < 0x1fffff7f) {
    if (bVar1 < 8) {
      param_2[3] = bVar1 * param_5 + 7 >> 3;
      return;
    }
    param_2[3] = (bVar1 >> 3) * param_5;
    return;
  }
  param_2[3] = 0;
  return;
}



void __cdecl
FUN_00411810(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
    *(undefined4 *)(param_2 + 100) = param_3;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(undefined *)(param_2 + 0x6c) = param_5;
  }
  return;
}



void __cdecl
FUN_00411840(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined param_6,int param_7,char *param_8,int param_9)

{
  void **ppvVar1;
  char cVar2;
  char *pcVar3;
  void *_Dst;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    _Dst = (void *)FUN_00408c20(param_1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(void **)(param_2 + 0xa0) = _Dst;
    if (_Dst == (void *)0x0) {
      FUN_004087f0((int)param_1,"Insufficient memory for pCAL purpose.");
      return;
    }
    memcpy(_Dst,param_3,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(undefined4 *)(param_2 + 0xa4) = param_4;
    *(undefined *)(param_2 + 0xb5) = (undefined)param_7;
    *(undefined4 *)(param_2 + 0xa8) = param_5;
    *(undefined *)(param_2 + 0xb4) = param_6;
    pcVar3 = param_8;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    _Dst = (void *)FUN_00408c20(param_1,(size_t)(pcVar3 + (1 - (int)(param_8 + 1))));
    *(void **)(param_2 + 0xac) = _Dst;
    if (_Dst == (void *)0x0) {
      FUN_004087f0((int)param_1,"Insufficient memory for pCAL units.");
      return;
    }
    memcpy(_Dst,param_8,(size_t)(pcVar3 + (1 - (int)(param_8 + 1))));
    iVar4 = FUN_00408c20(param_1,param_7 * 4 + 4);
    *(int *)(param_2 + 0xb0) = iVar4;
    if (iVar4 == 0) {
      FUN_004087f0((int)param_1,"Insufficient memory for pCAL params.");
      return;
    }
    iVar7 = 0;
    *(undefined4 *)(iVar4 + param_7 * 4) = 0;
    if (0 < param_7) {
      do {
        pcVar5 = *(char **)(param_9 + iVar7 * 4);
        pcVar3 = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        uVar6 = FUN_00408c20(param_1,(size_t)(pcVar5 + (1 - (int)pcVar3)));
        *(undefined4 *)(*(int *)(param_2 + 0xb0) + iVar7 * 4) = uVar6;
        ppvVar1 = (void **)(*(int *)(param_2 + 0xb0) + iVar7 * 4);
        if (*ppvVar1 == (void *)0x0) {
          FUN_004087f0((int)param_1,"Insufficient memory for pCAL parameter.");
          return;
        }
        memcpy(*ppvVar1,*(void **)(param_9 + iVar7 * 4),(size_t)(pcVar5 + (1 - (int)pcVar3)));
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_7);
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x80;
  }
  return;
}



void __cdecl
FUN_004119e0(int param_1,int param_2,undefined param_3,undefined8 param_4,undefined8 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
    *(undefined8 *)(param_2 + 0xe0) = param_4;
    *(undefined *)(param_2 + 0xdc) = param_3;
    *(undefined8 *)(param_2 + 0xe8) = param_5;
  }
  return;
}



void __cdecl
FUN_00411a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
    *(undefined4 *)(param_2 + 0x70) = param_3;
    *(undefined4 *)(param_2 + 0x74) = param_4;
    *(undefined *)(param_2 + 0x78) = param_5;
  }
  return;
}



void __cdecl FUN_00411a50(int *param_1,int param_2,void *param_3,int param_4)

{
  void *_Dst;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    FUN_00407e80((int)param_1,param_2,0x1000,0);
    _Dst = FUN_00408ba0(param_1,0x300);
    *(void **)(param_1 + 0x45) = _Dst;
    memset(_Dst,0,0x300);
    memcpy((void *)param_1[0x45],param_3,param_4 * 3);
    *(int *)(param_2 + 0x10) = param_1[0x45];
    *(short *)(param_1 + 0x46) = (short)param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x1000;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    *(undefined2 *)(param_2 + 0x14) = (short)param_4;
  }
  return;
}



void __cdecl FUN_00411ae0(int param_1,int param_2,undefined4 *param_3)

{
  undefined uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x44) = *param_3;
    uVar1 = *(undefined *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(undefined *)(param_2 + 0x48) = uVar1;
  }
  return;
}



void __cdecl FUN_00411b10(int param_1,int param_2,undefined param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
    *(undefined *)(param_2 + 0x2c) = param_3;
  }
  return;
}



void __cdecl FUN_00411b30(int param_1,int param_2,undefined param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00411b10(param_1,param_2,param_3);
    FUN_00411420(param_1,param_2,0x3fdd1758e0000000);
    iVar1 = param_1;
    FUN_004114a0(param_1,param_2,0xb18f);
    FUN_00411230(param_1,param_2,0x7a26,0x8084,64000,33000,30000,60000,15000,6000,iVar1);
    FUN_00410ef0(param_1,param_2,0x3fd40346e0000000,0x3fd50e5600000000,0x3fe47ae140000000,
                 0x3fd51eb860000000,0x3fd3333340000000,0x3fe3333340000000,0x3fc3333340000000,
                 0x3faeb851e0000000);
  }
  return;
}



void __cdecl
FUN_00411c10(int *param_1,int param_2,char *param_3,undefined param_4,void *param_5,size_t param_6)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  void *_Dst;
  
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != (char *)0x0)) &&
     (param_5 != (void *)0x0)) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pvVar3 = (void *)FUN_00408c20(param_1,(size_t)(pcVar2 + (1 - (int)(param_3 + 1))));
    if (pvVar3 == (void *)0x0) {
      FUN_004087f0((int)param_1,"Insufficient memory to process iCCP chunk.");
      return;
    }
    _Dst = (void *)((int)pvVar3 - (int)param_3);
    do {
      cVar1 = *param_3;
      *(char *)((int)_Dst + (int)param_3) = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    _Dst = (void *)FUN_00408c20(param_1,param_6);
    if (_Dst == (void *)0x0) {
      FUN_00408bf0((int)param_1,pvVar3);
      FUN_004087f0((int)param_1,"Insufficient memory to process iCCP profile.");
      return;
    }
    memcpy(_Dst,param_5,param_6);
    FUN_00407e80((int)param_1,param_2,0x10,0);
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x10;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
    *(void **)(param_2 + 0xc4) = pvVar3;
    *(size_t *)(param_2 + 0xcc) = param_6;
    *(void **)(param_2 + 200) = _Dst;
    *(undefined *)(param_2 + 0xd0) = param_4;
  }
  return;
}



undefined4 __cdecl FUN_00411d10(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  void *_Src;
  int iVar2;
  void *_Dst;
  int iVar3;
  char *_Size;
  char *_Dst_00;
  char **ppcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char *_Size_00;
  int local_4;
  
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x30) + param_4;
  if (iVar3 < iVar2) {
    _Src = *(void **)(param_2 + 0x38);
    if (_Src == (void *)0x0) {
      *(int *)(param_2 + 0x34) = param_4 + 8;
      *(undefined4 *)(param_2 + 0x30) = 0;
      iVar3 = FUN_00408c20(param_1,(param_4 + 8) * 0x10);
      *(int *)(param_2 + 0x38) = iVar3;
      if (iVar3 == 0) {
        return 1;
      }
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x4000;
    }
    else {
      iVar2 = iVar2 + 8;
      *(int *)(param_2 + 0x34) = iVar2;
      _Dst = (void *)FUN_00408c20(param_1,iVar2 * 0x10);
      *(void **)(param_2 + 0x38) = _Dst;
      if (_Dst == (void *)0x0) {
        FUN_00408bf0((int)param_1,_Src);
        return 1;
      }
      memcpy(_Dst,_Src,iVar3 << 4);
      FUN_00408bf0((int)param_1,_Src);
    }
  }
  local_4 = 0;
  if (0 < param_4) {
    ppcVar6 = (char **)(param_3 + 8);
    do {
      _Size = ppcVar6[-1];
      ppcVar5 = (char **)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
      if (_Size != (char *)0x0) {
        _Size_00 = _Size + 1;
        do {
          cVar1 = *_Size;
          _Size = _Size + 1;
        } while (cVar1 != '\0');
        _Size = _Size + -(int)_Size_00;
        if ((int)ppcVar6[-2] < 1) {
          _Size_00 = *ppcVar6;
          if ((_Size_00 == (char *)0x0) || (*_Size_00 == '\0')) {
            _Size_00 = (char *)0x0;
            *ppcVar5 = (char *)0xffffffff;
          }
          else {
            _Dst_00 = _Size_00 + 1;
            do {
              cVar1 = *_Size_00;
              _Size_00 = _Size_00 + 1;
            } while (cVar1 != '\0');
            _Size_00 = _Size_00 + -(int)_Dst_00;
            *ppcVar5 = ppcVar6[-2];
          }
          _Dst_00 = (char *)FUN_00408c20(param_1,(size_t)(_Size_00 + 4 + (int)_Size));
          ppcVar5[1] = _Dst_00;
          if (_Dst_00 == (char *)0x0) {
            return 1;
          }
          memcpy(_Dst_00,ppcVar6[-1],(size_t)_Size);
          ppcVar5[1][(int)_Size] = '\0';
          ppcVar5[2] = ppcVar5[1] + 1 + (int)_Size;
          if (_Size_00 != (char *)0x0) {
            memcpy(ppcVar5[1] + 1 + (int)_Size,*ppcVar6,(size_t)_Size_00);
          }
          _Size_00[(int)ppcVar5[2]] = '\0';
          ppcVar5[3] = _Size_00;
          ppcVar4 = (char **)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
          *ppcVar4 = *ppcVar5;
          ppcVar4[1] = ppcVar5[1];
          ppcVar4[2] = ppcVar5[2];
          ppcVar4[3] = ppcVar5[3];
          *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
        }
        else {
          FUN_004087f0((int)param_1,"iTXt chunk not supported.");
        }
      }
      local_4 = local_4 + 1;
      ppcVar6 = ppcVar6 + 4;
    } while (local_4 < param_4);
  }
  return 0;
}



void __cdecl FUN_00411f00(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_1 + 0x68) & 0x200) == 0)) {
    *(undefined4 *)(param_2 + 0x3c) = *param_3;
    uVar1 = param_3[1];
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
    *(undefined4 *)(param_2 + 0x40) = uVar1;
  }
  return;
}



void __cdecl FUN_00411f30(int *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  void *pvVar1;
  undefined2 uVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar2 = (undefined2)param_4;
    if (param_3 != (void *)0x0) {
      FUN_00407e80((int)param_1,param_2,0x2000,0);
      pvVar1 = FUN_00408ba0(param_1,0x100);
      *(void **)(param_2 + 0x4c) = pvVar1;
      *(void **)(param_1 + 0x62) = pvVar1;
      memcpy(*(void **)(param_2 + 0x4c),param_3,param_4);
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x2000;
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x50) = *param_5;
      *(undefined4 *)(param_2 + 0x54) = param_5[1];
      *(undefined2 *)(param_2 + 0x58) = *(undefined2 *)(param_5 + 2);
      if (param_4 == 0) {
        uVar2 = 1;
      }
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(undefined2 *)(param_2 + 0x16) = uVar2;
  }
  return;
}



void __cdecl FUN_00411fc0(int *param_1,int param_2,char **param_3,int param_4)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  char *pcVar3;
  char *_Dst_00;
  char **ppcVar4;
  
  iVar2 = param_2;
  _Dst = (void *)FUN_00408c20(param_1,(*(int *)(param_2 + 0xd8) + param_4) * 0x10);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,*(void **)(param_2 + 0xd4),*(int *)(param_2 + 0xd8) << 4);
    FUN_00408bf0((int)param_1,*(void **)(param_2 + 0xd4));
    *(undefined4 *)(param_2 + 0xd4) = 0;
    param_2 = 0;
    if (0 < param_4) {
      do {
        pcVar3 = *param_3;
        ppcVar4 = (char **)((*(int *)(iVar2 + 0xd8) + param_2) * 0x10 + (int)_Dst);
        _Dst_00 = pcVar3 + 1;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (char *)FUN_00408ba0(param_1,(size_t)(pcVar3 + (1 - (int)_Dst_00)));
        *ppcVar4 = pcVar3;
        _Dst_00 = *param_3;
        do {
          cVar1 = *_Dst_00;
          *pcVar3 = cVar1;
          _Dst_00 = _Dst_00 + 1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        _Dst_00 = (char *)FUN_00408ba0(param_1,(int)param_3[3] << 4);
        ppcVar4[2] = _Dst_00;
        memcpy(_Dst_00,param_3[2],(int)param_3[3] << 4);
        ppcVar4[3] = param_3[3];
        *(undefined *)(ppcVar4 + 1) = *(undefined *)(param_3 + 1);
        param_2 = param_2 + 1;
        param_3 = param_3 + 4;
      } while (param_2 < param_4);
    }
    *(int *)(iVar2 + 0xd8) = *(int *)(iVar2 + 0xd8) + param_4;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x2000;
    *(uint *)(iVar2 + 0xb8) = *(uint *)(iVar2 + 0xb8) | 0x20;
    *(void **)(iVar2 + 0xd4) = _Dst;
    return;
  }
  FUN_004087f0((int)param_1,"No memory for sPLT palettes.");
  return;
}



void __cdecl FUN_00412100(int *param_1,int param_2,int param_3,int param_4)

{
  char *_Dest;
  void *_Dst;
  void *_Dst_00;
  int iVar1;
  size_t *psVar2;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) {
    _Dst = (void *)FUN_00408c20(param_1,(*(int *)(param_2 + 0xc0) + param_4) * 0x14);
    if (_Dst == (void *)0x0) {
      FUN_004087f0((int)param_1,"Out of memory while processing unknown chunk.");
      return;
    }
    memcpy(_Dst,*(void **)(param_2 + 0xbc),*(int *)(param_2 + 0xc0) * 0x14);
    FUN_00408bf0((int)param_1,*(void **)(param_2 + 0xbc));
    iVar1 = 0;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    if (0 < param_4) {
      psVar2 = (size_t *)(param_3 + 0xc);
      do {
        _Dest = (char *)((int)_Dst + (*(int *)(param_2 + 0xc0) + iVar1) * 0x14);
        strncpy(_Dest,(char *)(psVar2 + -3),5);
        _Dst_00 = (void *)FUN_00408c20(param_1,*psVar2);
        *(void **)(_Dest + 8) = _Dst_00;
        if (_Dst_00 == (void *)0x0) {
          FUN_004087f0((int)param_1,"Out of memory processing unknown chunk.");
        }
        else {
          memcpy(_Dst_00,(void *)psVar2[-1],*psVar2);
          *(size_t *)(_Dest + 0xc) = *psVar2;
          _Dest[0x10] = *(char *)(param_1 + 0x1a);
        }
        iVar1 = iVar1 + 1;
        psVar2 = psVar2 + 5;
      } while (iVar1 < param_4);
    }
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x200;
    *(void **)(param_2 + 0xbc) = _Dst;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412237(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  int in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 local_res0;
  UINT uExitCode;
  int local_32c;
  undefined4 local_328;
  
  if (in_ECX == DAT_0041c340) {
    return;
  }
  _DAT_0041cb58 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)((undefined *)register0x00000010 == (undefined *)0x32c) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041cb5c = &stack0x00000004;
  _DAT_0041ca98 = 0x10001;
  _DAT_0041ca40 = 0xc0000409;
  _DAT_0041ca44 = 1;
  local_32c = DAT_0041c340;
  local_328 = DAT_0041c344;
  _DAT_0041ca4c = local_res0;
  _DAT_0041cb24 = in_GS;
  _DAT_0041cb28 = in_FS;
  _DAT_0041cb2c = in_ES;
  _DAT_0041cb30 = in_DS;
  _DAT_0041cb34 = unaff_EDI;
  _DAT_0041cb38 = unaff_ESI;
  _DAT_0041cb3c = unaff_EBX;
  _DAT_0041cb40 = in_EDX;
  _DAT_0041cb44 = in_ECX;
  _DAT_0041cb48 = in_EAX;
  _DAT_0041cb4c = unaff_EBP;
  DAT_0041cb50 = local_res0;
  _DAT_0041cb54 = in_CS;
  _DAT_0041cb60 = in_SS;
  _DAT_0041ca90 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_00417b68);
  if (_DAT_0041ca90 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  bool bVar1;
  LONG LVar2;
  int Exchange;
  BOOL BVar3;
  int in_FS_OFFSET;
  
  ___security_init_cookie();
  Exchange = *(int *)(*(int *)(in_FS_OFFSET + 0x18) + 4);
  bVar1 = false;
  do {
    LVar2 = InterlockedCompareExchange((LONG *)&DAT_0041ced8,Exchange,0);
    if (LVar2 == 0) {
LAB_004122dc:
      if (DAT_0041ced4 == 1) {
        _amsg_exit(0x1f);
      }
      else {
        if (DAT_0041ced4 == 0) {
          DAT_0041ced4 = 1;
          Exchange = _initterm_e(&DAT_00416160,&DAT_0041616c);
          if (Exchange != 0) {
            return 0xff;
          }
        }
        else {
          _DAT_0041ca3c = 1;
        }
      }
      if (DAT_0041ced4 == 1) {
        _initterm(&DAT_00416154,&DAT_0041615c);
        DAT_0041ced4 = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_0041ced8,0);
      }
      if ((_DAT_0041cee4 != (code *)0x0) &&
         (BVar3 = __IsNonwritableInCurrentImage(&DAT_0041cee4), BVar3 != 0)) {
        (*_DAT_0041cee4)(0,2,0);
      }
      *(undefined4 *)__initenv_exref = DAT_0041ca24;
      DAT_0041ca38 = FUN_004035b0();
      if (_DAT_0041ca2c != 0) {
        if (_DAT_0041ca3c == 0) {
          _cexit();
        }
        return DAT_0041ca38;
      }
                    // WARNING: Subroutine does not return
      exit(DAT_0041ca38);
    }
    if (LVar2 == Exchange) {
      bVar1 = true;
      goto LAB_004122dc;
    }
    Sleep(1000);
  } while( true );
}



void _setjmp3(void)

{
                    // WARNING: Could not recover jumptable at 0x00412500. Too many branches
                    // WARNING: Treating indirect jump as call
  _setjmp3();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412506. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)memset();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041250c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)memcpy();
  return pvVar1;
}



void _CIpow(void)

{
                    // WARNING: Could not recover jumptable at 0x00412512. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIpow();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00412520(void)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 in_EDX;
  float fVar4;
  float10 in_ST0;
  uint local_20;
  float fStack28;
  
  if (_DAT_0041cecc == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack28 = (float)(uVar1 >> 0x20);
    fVar4 = (float)in_ST0;
    if ((local_20 != 0) || (fVar4 = fStack28, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar4 < 0) {
        uVar2 = (uint)(0x80000000 < ((uint)(float)(in_ST0 - (float10)uVar1) ^ 0x80000000));
        bVar3 = CARRY4(local_20,uVar2);
        local_20 = local_20 + uVar2;
        fStack28 = (float)((int)fStack28 + (uint)bVar3);
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)uVar1));
        bVar3 = local_20 < uVar2;
        local_20 = local_20 - uVar2;
        fStack28 = (float)((int)fStack28 - (uint)bVar3);
      }
    }
    return CONCAT44(fStack28,local_20);
  }
  return CONCAT44(in_EDX,(int)in_ST0);
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004126d0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
  return;
}



// Library Function - Single Match
// Name: __ValidateImageBase
// Library: Visual Studio 2005 Release

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)(*(short *)(pImageBase + *(int *)(pImageBase + 0x3c) + 6) == 0x10b);
  }
  return 0;
}



// Library Function - Single Match
// Name: __FindPESection
// Library: Visual Studio 2005 Release

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER p_Var1;
  uint uVar2;
  
  pImageBase = pImageBase + *(int *)(pImageBase + 0x3c);
  uVar2 = 0;
  p_Var1 = (PIMAGE_SECTION_HEADER)(pImageBase + (uint)*(ushort *)(pImageBase + 0x14) + 0x18);
  if (*(ushort *)(pImageBase + 6) != 0) {
    do {
      if ((p_Var1->VirtualAddress <= rva) && (rva < p_Var1->Misc + p_Var1->VirtualAddress)) {
        return p_Var1;
      }
      uVar2 = uVar2 + 1;
      p_Var1 = p_Var1 + 1;
    } while (uVar2 < *(ushort *)(pImageBase + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
// Name: __IsNonwritableInCurrentImage
// Library: Visual Studio 2005 Release

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  PBYTE pImageBase;
  
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if ((BVar1 != 0) &&
     (p_Var2 = __FindPESection(pImageBase,(DWORD_PTR)(pTarget + -(int)pImageBase)),
     p_Var2 != (PIMAGE_SECTION_HEADER)0x0)) {
    return ~(p_Var2->Characteristics >> 0x1f) & 1;
  }
  return 0;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004128be. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004128c4. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
// Name: __SEH_prolog4
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_res0;
  uint auStack28 [5];
  undefined local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack28 + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack28 + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack28 + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack28 + param_2 + 4) = DAT_0041c340 ^ (uint)&param_2;
  *(uint *)((int)auStack28 + param_2) = local_res0;
  *(undefined **)in_FS_OFFSET = local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
// Name: __SEH_epilog4
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *in_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



// Library Function - Single Match
// Name: ___security_init_cookie
// Library: Visual Studio 2005 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_0041c340 == 0xbb40e64e) || ((DAT_0041c340 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter((LARGE_INTEGER *)&local_14);
    DAT_0041c340 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_10 ^ local_14;
    if (DAT_0041c340 == 0xbb40e64e) {
      DAT_0041c340 = 0xbb40e64f;
    }
    else {
      if ((DAT_0041c340 & 0xffff0000) == 0) {
        DAT_0041c340 = DAT_0041c340 | DAT_0041c340 << 0x10;
      }
    }
    DAT_0041c344 = ~DAT_0041c340;
  }
  else {
    DAT_0041c344 = ~DAT_0041c340;
  }
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
// Name: _has_osfxsr_set
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release

undefined4 _has_osfxsr_set(void)

{
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00412a93)
// WARNING: Removing unreachable block (ram,0x00412a80)
// Library Function - Single Match
// Name: __get_sse2_info
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x400) != 0) * 0x400 |
       (uint)((uVar1 & 0x200) != 0) * 0x200 | (uint)((uVar1 & 0x100) != 0) * 0x100 |
       (uint)((uVar1 & 0x40) != 0) * 0x40 | (uint)((uVar1 & 0x10) != 0) * 0x10 |
       (uint)((uVar1 & 4) != 0) * 4 | (uint)((uVar1 & 0x200000) != 0) * 0x200000 |
      (uint)((uVar1 & 0x40000) != 0) * 0x40000) != uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = _has_osfxsr_set(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ac6. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook();
  return;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00412ade. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



undefined4 __cdecl FUN_00412af0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 **)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    *(undefined4 **)(puVar2 + 0x1b) = puVar1;
    *(undefined4 **)(puVar2 + 0x14) = puVar1;
    *(undefined4 **)(puVar2 + 0x13) = puVar1;
    return 0;
  }
  return 0xfffffffe;
}



undefined4 __cdecl FUN_00412b50(int param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0x414650;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0x414670;
    }
    iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x2530);
    if (iVar1 == 0) {
      return 0xfffffffc;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    if ((int)param_2 < 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      param_2 = -param_2;
    }
    else {
      *(int *)(iVar1 + 8) = ((int)param_2 >> 4) + 1;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if (param_2 - 8 < 8) {
      *(uint *)(iVar1 + 0x24) = param_2;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      uVar2 = FUN_00412af0(param_1);
      return uVar2;
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0xfffffffe;
}



void __cdecl FUN_00412c20(int param_1,char *param_2,int param_3)

{
  FUN_00412b50(param_1,0xf,param_2,param_3);
  return;
}



void FUN_00412c40(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x4c) = 0x417b70;
  *(undefined4 *)(in_EAX + 0x54) = 9;
  *(undefined4 *)(in_EAX + 0x50) = 0x418370;
  *(undefined4 *)(in_EAX + 0x58) = 5;
  return;
}



undefined4 FUN_00412c60(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint _Size;
  int unaff_EBX;
  uint uVar3;
  size_t _Size_00;
  
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    iVar2 = (**(code **)(unaff_EBX + 0x20))
                      (*(undefined4 *)(unaff_EBX + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_EAX - *(int *)(unaff_EBX + 0x10);
  _Size = *(uint *)(iVar1 + 0x28);
  if (_Size <= uVar3) {
    memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EBX + 0xc) - _Size),_Size);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  _Size = _Size - *(int *)(iVar1 + 0x30);
  if (uVar3 < _Size) {
    _Size = uVar3;
  }
  memcpy((void *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30)),
         (void *)(*(int *)(unaff_EBX + 0xc) - uVar3),_Size);
  _Size_00 = uVar3 - _Size;
  if (_Size_00 != 0) {
    memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EBX + 0xc) - _Size_00),_Size_00);
    *(size_t *)(iVar1 + 0x30) = _Size_00;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + _Size;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(int *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + _Size;
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

int __cdecl FUN_00412d50(uint **param_1,int param_2)

{
  undefined uVar1;
  uint *puVar2;
  char cVar3;
  uint *_Size;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint *extraout_EDX;
  uint uVar9;
  uint uVar10;
  uint *_Src;
  undefined *puVar11;
  uint *local_2c;
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  char local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  int local_c;
  uint *local_8;
  uint *local_4;
  
  if ((((param_1 == (uint **)0x0) || (puVar2 = param_1[7], puVar2 == (uint *)0x0)) ||
      (param_1[3] == (uint *)0x0)) || ((*param_1 == (uint *)0x0 && (param_1[1] != (uint *)0x0)))) {
    return -2;
  }
  if (*puVar2 == 0xb) {
    *puVar2 = 0xc;
  }
  local_14 = param_1[3];
  _Size = param_1[1];
  uVar10 = puVar2[0xe];
  _Src = *param_1;
  local_20 = param_1[4];
  uVar5 = *puVar2;
  puVar11 = (undefined *)puVar2[0xf];
  local_c = 0;
  local_2c = _Size;
  local_4 = _Size;
  local_24 = uVar10;
  local_10 = local_20;
  do {
    if (0x1c < uVar5) {
      return -2;
    }
    puVar4 = _Size;
    switch((&switchdataD_004142b8)[uVar5]) {
    case (undefined *)0x412dd7:
      if (puVar2[2] == 0) {
        *puVar2 = 0xc;
      }
      else {
        while (_Size = local_2c, puVar11 < (undefined *)0x10) {
          if (puVar4 == (uint *)0x0) goto LAB_004141ac;
          bVar7 = *(byte *)_Src;
          bVar8 = (byte)puVar11;
          puVar4 = (uint *)((int)puVar4 + -1);
          puVar11 = puVar11 + 8;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
          local_2c = puVar4;
          local_24 = uVar10;
        }
        local_2c = _Size;
        if (((*(byte *)(puVar2 + 2) & 2) == 0) || (uVar10 != 0x8b1f)) {
          puVar2[4] = 0;
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x30) = 0xffffffff;
          }
          if (((*(byte *)(puVar2 + 2) & 1) == 0) ||
             (((uVar10 & 0xff) * 0x100 + (uVar10 >> 8)) % 0x1f != 0)) {
            *(char **)(param_1 + 6) = "incorrect header check";
          }
          else {
            if (((byte)uVar10 & 0xf) == 8) {
              local_24 = uVar10 >> 4;
              uVar5 = (local_24 & 0xf) + 8;
              puVar11 = puVar11 + -4;
              if (uVar5 < puVar2[9] || uVar5 == puVar2[9]) {
                puVar2[5] = 1 << (sbyte)uVar5;
                puVar4 = (uint *)FUN_00415030(0,(byte *)0x0,0);
                *(uint **)(puVar2 + 6) = puVar4;
                param_1[0xc] = puVar4;
                *puVar2 = ~(uVar10 >> 0xc) & 2 | 9;
                uVar10 = 0;
                local_24 = 0;
                puVar11 = (undefined *)0x0;
                break;
              }
              *(char **)(param_1 + 6) = "invalid window size";
              uVar10 = local_24;
            }
            else {
              *(char **)(param_1 + 6) = "unknown compression method";
            }
          }
          goto LAB_00414148;
        }
        uVar5 = FUN_00414630(0,(uint *)0x0,0);
        puVar2[6] = uVar5;
        local_1c = '\x1f';
        local_1b = 0x8b;
        uVar5 = FUN_00414630(puVar2[6],(uint *)&local_1c,2);
        uVar10 = 0;
        puVar2[6] = uVar5;
        local_24 = 0;
        puVar11 = (undefined *)0x0;
        *puVar2 = 1;
      }
      break;
    case (undefined *)0x412f45:
      while (puVar11 < (undefined *)0x10) {
        puVar4 = _Size;
        if (_Size == (uint *)0x0) goto LAB_004141ac;
        bVar7 = *(byte *)_Src;
        bVar8 = (byte)puVar11;
        _Size = (uint *)((int)_Size + -1);
        puVar11 = puVar11 + 8;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
        local_2c = _Size;
        local_24 = uVar10;
      }
      puVar2[4] = uVar10;
      if ((char)uVar10 == '\b') {
        if ((uVar10 & 0xe000) == 0) {
          if ((uint *)puVar2[8] != (uint *)0x0) {
            *(uint *)puVar2[8] = uVar10 >> 8 & 1;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_1b = (undefined)(uVar10 >> 8);
            local_1c = (char)uVar10;
            uVar5 = FUN_00414630(puVar2[6],(uint *)&local_1c,2);
            puVar2[6] = uVar5;
            _Size = local_2c;
          }
          uVar10 = 0;
          puVar11 = (undefined *)0x0;
          *puVar2 = 2;
          do {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = *(byte *)_Src;
            bVar8 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
            local_2c = _Size;
joined_r0x00412ff6:
          } while (puVar11 < (undefined *)0x20);
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 4) = uVar10;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_1c = (char)uVar10;
            local_1b = (undefined)(uVar10 >> 8);
            local_1a = (undefined)(uVar10 >> 0x10);
            local_19 = (undefined)(uVar10 >> 0x18);
            uVar5 = FUN_00414630(puVar2[6],(uint *)&local_1c,4);
            puVar2[6] = uVar5;
            _Size = local_2c;
          }
          uVar10 = 0;
          puVar11 = (undefined *)0x0;
          *puVar2 = 3;
          do {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = *(byte *)_Src;
            bVar8 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
            local_2c = _Size;
joined_r0x00413075:
          } while (puVar11 < (undefined *)0x10);
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 8) = uVar10 & 0xff;
            *(uint *)(puVar2[8] + 0xc) = uVar10 >> 8;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_1c = (char)uVar10;
            local_1b = (undefined)(uVar10 >> 8);
            uVar5 = FUN_00414630(puVar2[6],(uint *)&local_1c,2);
            puVar2[6] = uVar5;
            _Size = local_2c;
          }
          uVar10 = 0;
          local_24 = 0;
          puVar11 = (undefined *)0x0;
          *puVar2 = 4;
          goto switchD_00412dd0_caseD_4130f4;
        }
        *(char **)(param_1 + 6) = "unknown header flags set";
      }
      else {
        *(char **)(param_1 + 6) = "unknown compression method";
      }
      goto LAB_00414148;
    case (undefined *)0x412ff3:
      goto joined_r0x00412ff6;
    case (undefined *)0x413072:
      goto joined_r0x00413075;
    case (undefined *)0x4130f4:
switchD_00412dd0_caseD_4130f4:
      if ((puVar2[4] & 0x400) == 0) {
        if (puVar2[8] != 0) {
          *(undefined4 *)(puVar2[8] + 0x10) = 0;
        }
      }
      else {
        while (puVar11 < (undefined *)0x10) {
          puVar4 = _Size;
          if (_Size == (uint *)0x0) goto LAB_004141ac;
          bVar7 = *(byte *)_Src;
          bVar8 = (byte)puVar11;
          _Size = (uint *)((int)_Size + -1);
          puVar11 = puVar11 + 8;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
          local_2c = _Size;
        }
        puVar2[0x10] = uVar10;
        if (puVar2[8] != 0) {
          *(uint *)(puVar2[8] + 0x14) = uVar10;
        }
        if ((puVar2[4] & 0x200) != 0) {
          local_1c = (char)uVar10;
          local_1b = (undefined)(uVar10 >> 8);
          uVar5 = FUN_00414630(puVar2[6],(uint *)&local_1c,2);
          puVar2[6] = uVar5;
          _Size = local_2c;
        }
        uVar10 = 0;
        local_24 = 0;
        puVar11 = (undefined *)0x0;
      }
      *puVar2 = 5;
    case (undefined *)0x41317f:
      if ((puVar2[4] & 0x400) == 0) {
LAB_0041322e:
        puVar2[0x10] = 0;
        *puVar2 = 6;
switchD_00412dd0_caseD_41323b:
        if ((puVar2[4] & 0x800) == 0) {
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x1c) = 0;
          }
LAB_004132e6:
          puVar2[0x10] = 0;
          *puVar2 = 7;
switchD_00412dd0_caseD_4132f3:
          if ((puVar2[4] & 0x1000) == 0) {
            if (puVar2[8] != 0) {
              *(undefined4 *)(puVar2[8] + 0x24) = 0;
            }
LAB_004133a4:
            *puVar2 = 8;
switchD_00412dd0_caseD_4133aa:
            if ((puVar2[4] & 0x200) != 0) {
              while (puVar11 < (undefined *)0x10) {
                puVar4 = _Size;
                if (_Size == (uint *)0x0) goto LAB_004141ac;
                bVar7 = *(byte *)_Src;
                bVar8 = (byte)puVar11;
                _Size = (uint *)((int)_Size + -1);
                puVar11 = puVar11 + 8;
                _Src = (uint *)((int)_Src + 1);
                uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
                local_2c = _Size;
                local_24 = uVar10;
              }
              if (uVar10 != (uint)*(ushort *)(puVar2 + 6)) {
                *(char **)(param_1 + 6) = "header crc mismatch";
                goto LAB_00414148;
              }
              uVar10 = 0;
              local_24 = 0;
              puVar11 = (undefined *)0x0;
            }
            if (puVar2[8] != 0) {
              *(uint *)(puVar2[8] + 0x2c) = (int)puVar2[4] >> 9 & 1;
              *(undefined4 *)(puVar2[8] + 0x30) = 1;
            }
            _Size = (uint *)FUN_00414630(0,(uint *)0x0,0);
            *(uint **)(puVar2 + 6) = _Size;
            param_1[0xc] = _Size;
            *puVar2 = 0xb;
            _Size = local_2c;
            break;
          }
          puVar4 = _Size;
          if (_Size != (uint *)0x0) {
            puVar4 = (uint *)0x0;
            do {
              bVar7 = *(byte *)((int)puVar4 + (int)_Src);
              local_18 = (uint *)(uint)bVar7;
              puVar4 = (uint *)((int)puVar4 + 1);
              uVar5 = puVar2[8];
              if (((uVar5 != 0) && (local_8 = *(uint **)(uVar5 + 0x24), local_8 != (uint *)0x0)) &&
                 (puVar2[0x10] < *(uint *)(uVar5 + 0x28))) {
                *(byte *)((int)local_8 + puVar2[0x10]) = bVar7;
                puVar2[0x10] = puVar2[0x10] + 1;
                _Size = local_2c;
              }
            } while ((bVar7 != 0) && (puVar4 < _Size));
            if ((puVar2[4] & 0x200) != 0) {
              uVar5 = FUN_00414630(puVar2[6],_Src,(uint)puVar4);
              puVar2[6] = uVar5;
              _Size = local_2c;
            }
            _Size = (uint *)((int)_Size - (int)puVar4);
            _Src = (uint *)((int)_Src + (int)puVar4);
            puVar4 = _Size;
            local_2c = _Size;
            if (local_18 == (uint *)0x0) goto LAB_004133a4;
          }
        }
        else {
          puVar4 = _Size;
          if (_Size != (uint *)0x0) {
            puVar4 = (uint *)0x0;
            do {
              bVar7 = *(byte *)((int)puVar4 + (int)_Src);
              local_18 = (uint *)(uint)bVar7;
              puVar4 = (uint *)((int)puVar4 + 1);
              uVar5 = puVar2[8];
              if (((uVar5 != 0) && (local_8 = *(uint **)(uVar5 + 0x1c), local_8 != (uint *)0x0)) &&
                 (puVar2[0x10] < *(uint *)(uVar5 + 0x20))) {
                *(byte *)((int)local_8 + puVar2[0x10]) = bVar7;
                puVar2[0x10] = puVar2[0x10] + 1;
                _Size = local_2c;
              }
            } while ((bVar7 != 0) && (puVar4 < _Size));
            if ((puVar2[4] & 0x200) != 0) {
              uVar5 = FUN_00414630(puVar2[6],_Src,(uint)puVar4);
              puVar2[6] = uVar5;
              _Size = local_2c;
            }
            _Size = (uint *)((int)_Size - (int)puVar4);
            _Src = (uint *)((int)_Src + (int)puVar4);
            puVar4 = _Size;
            local_2c = _Size;
            if (local_18 == (uint *)0x0) goto LAB_004132e6;
          }
        }
      }
      else {
        puVar4 = (uint *)puVar2[0x10];
        if (_Size < (uint *)puVar2[0x10]) {
          puVar4 = _Size;
        }
        if (puVar4 != (uint *)0x0) {
          if ((puVar2[8] != 0) && (local_8 = *(uint **)(puVar2[8] + 0x10), local_8 != (uint *)0x0))
          {
            local_18 = (uint *)(*(int *)(puVar2[8] + 0x14) - puVar2[0x10]);
            _Size = puVar4;
            if (*(uint *)(puVar2[8] + 0x18) < (uint)((int)local_18 + (int)puVar4)) {
              _Size = (uint *)(*(uint *)(puVar2[8] + 0x18) - (int)local_18);
            }
            memcpy((void *)((int)local_8 + (int)local_18),_Src,(size_t)_Size);
            _Size = local_2c;
          }
          if ((puVar2[4] & 0x200) != 0) {
            uVar5 = FUN_00414630(puVar2[6],_Src,(uint)puVar4);
            puVar2[6] = uVar5;
            _Size = local_2c;
          }
          _Size = (uint *)((int)_Size - (int)puVar4);
          _Src = (uint *)((int)_Src + (int)puVar4);
          puVar2[0x10] = puVar2[0x10] - (int)puVar4;
          local_2c = _Size;
        }
        puVar4 = _Size;
        if (puVar2[0x10] == 0) goto LAB_0041322e;
      }
LAB_004141ac:
      param_1[3] = local_14;
      param_1[4] = local_20;
      *param_1 = _Src;
      param_1[1] = puVar4;
      puVar2[0xe] = uVar10;
      *(undefined **)(puVar2 + 0xf) = puVar11;
      if (((puVar2[10] == 0) && ((0x17 < (int)*puVar2 || (local_10 == param_1[4])))) ||
         (iVar6 = FUN_00412c60(), iVar6 == 0)) {
        _Src = (uint *)((int)local_4 - (int)param_1[1]);
        _Size = (uint *)((int)local_10 - (int)param_1[4]);
        param_1[2] = (uint *)((int)param_1[2] + (int)_Src);
        param_1[5] = (uint *)((int)param_1[5] + (int)_Size);
        puVar2[7] = puVar2[7] + (int)_Size;
        if ((puVar2[2] != 0) && (_Size != (uint *)0x0)) {
          if (puVar2[4] == 0) {
            puVar4 = (uint *)FUN_00415030(puVar2[6],(byte *)((int)param_1[3] - (int)_Size),
                                          (uint)_Size);
          }
          else {
            puVar4 = (uint *)FUN_00414630(puVar2[6],(uint *)((int)param_1[3] - (int)_Size),
                                          (uint)_Size);
          }
          *(uint **)(puVar2 + 6) = puVar4;
          param_1[0xc] = puVar4;
        }
        param_1[0xb] = (uint *)((-(uint)(puVar2[1] != 0) & 0x40) +
                                ((uint)(*puVar2 != 0xb) - 1 & 0x80) + puVar2[0xf]);
        if (((_Src != (uint *)0x0) || (_Size != (uint *)0x0)) && (param_2 != 4)) {
          return local_c;
        }
        if (local_c != 0) {
          return local_c;
        }
        return -5;
      }
      *puVar2 = 0x1c;
switchD_00412dd0_caseD_4141f4:
      return -4;
    case (undefined *)0x41323b:
      goto switchD_00412dd0_caseD_41323b;
    case (undefined *)0x4132f3:
      goto switchD_00412dd0_caseD_4132f3;
    case (undefined *)0x4133aa:
      goto switchD_00412dd0_caseD_4133aa;
    case (undefined *)0x413444:
      while (puVar11 < (undefined *)0x20) {
        puVar4 = _Size;
        if (_Size == (uint *)0x0) goto LAB_004141ac;
        bVar7 = *(byte *)_Src;
        bVar8 = (byte)puVar11;
        _Size = (uint *)((int)_Size + -1);
        puVar11 = puVar11 + 8;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
        local_2c = _Size;
        local_24 = uVar10;
      }
      puVar4 = (uint *)(((uVar10 & 0xff00) + uVar10 * 0x10000) * 0x100 +
                        (local_24 >> 0x10 & 0xff) * 0x100 + (uVar10 >> 0x18));
      *(uint **)(puVar2 + 6) = puVar4;
      param_1[0xc] = puVar4;
      uVar10 = 0;
      puVar11 = (undefined *)0x0;
      *puVar2 = 10;
    case (undefined *)0x4134ac:
      if (puVar2[3] == 0) {
        param_1[3] = local_14;
        *param_1 = _Src;
        param_1[4] = local_20;
        param_1[1] = _Size;
        *(undefined **)(puVar2 + 0xf) = puVar11;
        puVar2[0xe] = uVar10;
        return 2;
      }
      _Size = (uint *)FUN_00415030(0,(byte *)0x0,0);
      *(uint **)(puVar2 + 6) = _Size;
      param_1[0xc] = _Size;
      *puVar2 = 0xb;
      _Size = local_2c;
switchD_00412dd0_caseD_4134d8:
      puVar4 = _Size;
      if (param_2 != 5) {
switchD_00412dd0_caseD_4134e3:
        if (puVar2[1] == 0) {
          while (puVar11 < (undefined *)0x3) {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = *(byte *)_Src;
            bVar8 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
            local_2c = _Size;
          }
          puVar2[1] = uVar10 & 1;
          switch(uVar10 >> 1 & 3) {
          case 0:
            uVar10 = uVar10 >> 3;
            *puVar2 = 0xd;
            puVar11 = puVar11 + -3;
            local_24 = uVar10;
            break;
          case 1:
            FUN_00412c40();
            uVar10 = uVar10 >> 3;
            *puVar2 = 0x12;
            puVar11 = puVar11 + -3;
            _Size = extraout_EDX;
            local_24 = uVar10;
            break;
          case 2:
            uVar10 = uVar10 >> 3;
            *puVar2 = 0xf;
            puVar11 = puVar11 + -3;
            local_24 = uVar10;
            break;
          case 3:
            *(char **)(param_1 + 6) = "invalid block type";
            *puVar2 = 0x1b;
          default:
            uVar10 = uVar10 >> 3;
            puVar11 = puVar11 + -3;
            local_24 = uVar10;
          }
        }
        else {
          uVar10 = uVar10 >> (sbyte)((uint)puVar11 & 7);
          puVar11 = puVar11 + -((uint)puVar11 & 7);
          *puVar2 = 0x18;
          local_24 = uVar10;
        }
        break;
      }
      goto LAB_004141ac;
    case (undefined *)0x4134d8:
      goto switchD_00412dd0_caseD_4134d8;
    case (undefined *)0x4134e3:
      goto switchD_00412dd0_caseD_4134e3;
    case (undefined *)0x4135ae:
      uVar10 = uVar10 >> (sbyte)((uint)puVar11 & 7);
      puVar11 = puVar11 + -((uint)puVar11 & 7);
      while (puVar11 < (undefined *)0x20) {
        puVar4 = _Size;
        if (_Size == (uint *)0x0) goto LAB_004141ac;
        bVar7 = *(byte *)_Src;
        bVar8 = (byte)puVar11;
        _Size = (uint *)((int)_Size + -1);
        puVar11 = puVar11 + 8;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
        local_2c = _Size;
      }
      uVar5 = uVar10 & 0xffff;
      if (uVar5 == ~uVar10 >> 0x10) {
        uVar10 = 0;
        puVar2[0x10] = uVar5;
        local_24 = 0;
        puVar11 = (undefined *)0x0;
        *puVar2 = 0xe;
        goto switchD_00412dd0_caseD_41361b;
      }
      *(char **)(param_1 + 6) = "invalid stored block lengths";
      local_24 = uVar10;
      goto LAB_00414148;
    case (undefined *)0x41361b:
switchD_00412dd0_caseD_41361b:
      local_28 = (uint *)puVar2[0x10];
      if (local_28 == (uint *)0x0) {
LAB_00413cdc:
        *puVar2 = 0xb;
      }
      else {
        if (_Size < local_28) {
          local_28 = _Size;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        puVar4 = _Size;
        if (local_28 == (uint *)0x0) goto LAB_004141ac;
        memcpy(local_14,_Src,(size_t)local_28);
        local_20 = (uint *)((int)local_20 - (int)local_28);
        local_14 = (uint *)((int)local_14 + (int)local_28);
        _Src = (uint *)((int)_Src + (int)local_28);
        puVar2[0x10] = puVar2[0x10] - (int)local_28;
        _Size = (uint *)((int)local_2c - (int)local_28);
        local_2c = (uint *)((int)local_2c - (int)local_28);
      }
      break;
    case (undefined *)0x41367b:
      while (puVar11 < (undefined *)0xe) {
        puVar4 = _Size;
        if (_Size == (uint *)0x0) goto LAB_004141ac;
        bVar7 = *(byte *)_Src;
        bVar8 = (byte)puVar11;
        _Size = (uint *)((int)_Size + -1);
        puVar11 = puVar11 + 8;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
        local_2c = _Size;
      }
      puVar2[0x18] = (uVar10 & 0x1f) + 0x101;
      uVar9 = uVar10 >> 10;
      uVar5 = (uVar10 >> 5 & 0x1f) + 1;
      uVar10 = uVar10 >> 0xe;
      puVar11 = puVar11 + -0xe;
      puVar2[0x19] = uVar5;
      puVar2[0x17] = (uVar9 & 0xf) + 4;
      local_24 = uVar10;
      if ((puVar2[0x18] < 0x11f) && (uVar5 < 0x1f)) {
        puVar2[0x1a] = 0;
        *puVar2 = 0x10;
        goto switchD_00412dd0_caseD_4136fb;
      }
      *(char **)(param_1 + 6) = "too many length or distance symbols";
      goto LAB_00414148;
    case (undefined *)0x4136fb:
switchD_00412dd0_caseD_4136fb:
      if (puVar2[0x1a] < puVar2[0x17]) {
        do {
          while (puVar11 < (undefined *)0x3) {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = *(byte *)_Src;
            bVar8 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
            local_2c = _Size;
          }
          *(ushort *)((int)puVar2 + (uint)*(ushort *)(&DAT_004183f0 + puVar2[0x1a] * 2) * 2 + 0x70)
               = (ushort)uVar10 & 7;
          puVar2[0x1a] = puVar2[0x1a] + 1;
          uVar10 = uVar10 >> 3;
          puVar11 = puVar11 + -3;
          local_24 = uVar10;
        } while (puVar2[0x1a] < puVar2[0x17]);
      }
      uVar5 = puVar2[0x1a];
      while (uVar5 < 0x13) {
        *(undefined2 *)
         ((int)puVar2 + (uint)*(ushort *)(&DAT_004183f0 + puVar2[0x1a] * 2) * 2 + 0x70) = 0;
        puVar2[0x1a] = puVar2[0x1a] + 1;
        uVar5 = puVar2[0x1a];
      }
      *(uint **)(puVar2 + 0x1b) = puVar2 + 0x14c;
      *(uint **)(puVar2 + 0x13) = puVar2 + 0x14c;
      puVar2[0x15] = 7;
      local_c = FUN_00414b40(0,(int)(puVar2 + 0x1c),0x13,(int *)(puVar2 + 0x1b),puVar2 + 0x15,
                             (ushort *)(puVar2 + 0xbc));
      _Size = local_2c;
      if (local_c == 0) {
        puVar2[0x1a] = 0;
        *puVar2 = 0x11;
        goto switchD_00412dd0_caseD_4137f2;
      }
      *(char **)(param_1 + 6) = "invalid code lengths set";
LAB_00414148:
      *puVar2 = 0x1b;
      break;
    case (undefined *)0x4137f2:
switchD_00412dd0_caseD_4137f2:
      if (puVar2[0x1a] < puVar2[0x19] + puVar2[0x18]) {
        do {
          uVar5 = *(uint *)(puVar2[0x13] + ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar10) * 4);
          if (puVar11 < (undefined *)(uVar5 >> 8 & 0xff)) {
            do {
              puVar4 = _Size;
              if (_Size == (uint *)0x0) goto LAB_004141ac;
              bVar7 = (byte)puVar11;
              _Size = (uint *)((int)_Size + -1);
              puVar11 = puVar11 + 8;
              uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
              _Src = (uint *)((int)_Src + 1);
              uVar5 = *(uint *)(puVar2[0x13] +
                               ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar10) * 4);
              local_2c = _Size;
            } while (puVar11 < (undefined *)(uVar5 >> 8 & 0xff));
          }
          local_28._2_2_ = (short)(uVar5 >> 0x10);
          if (uVar5 >> 0x10 < 0x10) {
            if (puVar11 < (undefined *)(uVar5 >> 8 & 0xff)) {
              do {
                puVar4 = _Size;
                if (_Size == (uint *)0x0) goto LAB_004141ac;
                bVar7 = *(byte *)_Src;
                bVar8 = (byte)puVar11;
                _Size = (uint *)((int)_Size + -1);
                puVar11 = puVar11 + 8;
                _Src = (uint *)((int)_Src + 1);
                uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
                local_2c = _Size;
              } while (puVar11 < (undefined *)(uVar5 >> 8 & 0xff));
            }
            uVar5 = uVar5 >> 8 & 0xff;
            local_24 = uVar10 >> ((byte)uVar5 & 0x1f);
            puVar11 = puVar11 + -uVar5;
            *(short *)((int)puVar2 + puVar2[0x1a] * 2 + 0x70) = local_28._2_2_;
            puVar2[0x1a] = puVar2[0x1a] + 1;
          }
          else {
            if (local_28._2_2_ == 0x10) {
              local_18 = (uint *)(uVar5 >> 8 & 0xff);
              if (puVar11 < (undefined *)((int)local_18 + 2U)) {
                do {
                  puVar4 = _Size;
                  if (_Size == (uint *)0x0) goto LAB_004141ac;
                  bVar7 = (byte)puVar11;
                  _Size = (uint *)((int)_Size + -1);
                  puVar11 = puVar11 + 8;
                  uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
                  _Src = (uint *)((int)_Src + 1);
                  local_2c = _Size;
                } while (puVar11 < (undefined *)((int)local_18 + 2U));
              }
              uVar10 = uVar10 >> ((byte)local_18 & 0x1f);
              puVar11 = puVar11 + -(int)local_18;
              if (puVar2[0x1a] == 0) {
                *(char **)(param_1 + 6) = "invalid bit length repeat";
                local_24 = uVar10;
                goto LAB_00414148;
              }
              local_18 = (uint *)(uint)*(ushort *)((int)puVar2 + puVar2[0x1a] * 2 + 0x6e);
              local_28 = (uint *)((uVar10 & 3) + 3);
              local_24 = uVar10 >> 2;
              puVar11 = puVar11 + -2;
            }
            else {
              local_18 = (uint *)(uVar5 >> 8 & 0xff);
              if (local_28._2_2_ == 0x11) {
                if (puVar11 < (undefined *)((int)local_18 + 3U)) {
                  do {
                    puVar4 = _Size;
                    if (_Size == (uint *)0x0) goto LAB_004141ac;
                    bVar7 = (byte)puVar11;
                    _Size = (uint *)((int)_Size + -1);
                    puVar11 = puVar11 + 8;
                    uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
                    _Src = (uint *)((int)_Src + 1);
                    local_2c = _Size;
                  } while (puVar11 < (undefined *)((int)local_18 + 3U));
                }
                uVar10 = uVar10 >> ((byte)local_18 & 0x1f);
                local_28 = (uint *)((uVar10 & 7) + 3);
                local_24 = uVar10 >> 3;
                iVar6 = -3;
              }
              else {
                if (puVar11 < (undefined *)((int)local_18 + 7U)) {
                  do {
                    puVar4 = _Size;
                    if (_Size == (uint *)0x0) goto LAB_004141ac;
                    bVar7 = (byte)puVar11;
                    _Size = (uint *)((int)_Size + -1);
                    puVar11 = puVar11 + 8;
                    uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
                    _Src = (uint *)((int)_Src + 1);
                    local_2c = _Size;
                  } while (puVar11 < (undefined *)((int)local_18 + 7U));
                }
                uVar10 = uVar10 >> ((byte)local_18 & 0x1f);
                local_28 = (uint *)((uVar10 & 0x7f) + 0xb);
                local_24 = uVar10 >> 7;
                iVar6 = -7;
              }
              puVar11 = puVar11 + (iVar6 - (int)local_18);
              local_18 = (uint *)0x0;
            }
            if (puVar2[0x19] + puVar2[0x18] < puVar2[0x1a] + (int)local_28) {
              *(char **)(param_1 + 6) = "invalid bit length repeat";
              uVar10 = local_24;
              goto LAB_00414148;
            }
            while (local_28 != (uint *)0x0) {
              local_28 = (uint *)((int)local_28 + -1);
              *(undefined2 *)((int)puVar2 + puVar2[0x1a] * 2 + 0x70) = (short)local_18;
              puVar2[0x1a] = puVar2[0x1a] + 1;
            }
          }
          uVar10 = local_24;
        } while (puVar2[0x1a] < puVar2[0x19] + puVar2[0x18]);
      }
      if (*puVar2 != 0x1b) {
        *(uint **)(puVar2 + 0x1b) = puVar2 + 0x14c;
        *(uint **)(puVar2 + 0x13) = puVar2 + 0x14c;
        puVar2[0x15] = 9;
        local_c = FUN_00414b40(1,(int)(puVar2 + 0x1c),puVar2[0x18],(int *)(puVar2 + 0x1b),
                               puVar2 + 0x15,(ushort *)(puVar2 + 0xbc));
        _Size = local_2c;
        if (local_c == 0) {
          puVar2[0x14] = puVar2[0x1b];
          puVar2[0x16] = 6;
          local_c = FUN_00414b40(2,(int)puVar2 + puVar2[0x18] * 2 + 0x70,puVar2[0x19],
                                 (int *)(puVar2 + 0x1b),puVar2 + 0x16,(ushort *)(puVar2 + 0xbc));
          if (local_c == 0) {
            *puVar2 = 0x12;
            goto switchD_00412dd0_caseD_413b03;
          }
          *(char **)(param_1 + 6) = "invalid distances set";
        }
        else {
          *(char **)(param_1 + 6) = "invalid literal/lengths set";
        }
        goto LAB_00414148;
      }
      break;
    case (undefined *)0x413b03:
switchD_00412dd0_caseD_413b03:
      if ((_Size < &DAT_00000006) || (local_20 < (uint *)0x102)) {
        uVar5 = *(uint *)(puVar2[0x13] + ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar10) * 4);
        if (puVar11 < (undefined *)(uVar5 >> 8 & 0xff)) {
          do {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
            _Src = (uint *)((int)_Src + 1);
            uVar5 = *(uint *)(puVar2[0x13] + ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar10) * 4)
            ;
            local_2c = _Size;
          } while (puVar11 < (undefined *)(uVar5 >> 8 & 0xff));
        }
        cVar3 = (char)uVar5;
        local_28 = (uint *)uVar5;
        if ((cVar3 != '\0') && ((uVar5 & 0xf0) == 0)) {
          local_8 = (uint *)(uVar5 >> 8);
          local_18 = (uint *)((uint)local_8 & 0xff);
          local_28 = *(uint **)(puVar2[0x13] +
                               ((((1 << (cVar3 + (byte)local_18 & 0x1f)) - 1U & uVar10) >>
                                ((byte)local_18 & 0x1f)) + (uVar5 >> 0x10)) * 4);
          local_8._0_1_ = (byte)(uVar5 >> 8);
          if (puVar11 < (undefined *)(((uint)local_28 >> 8 & 0xff) + ((uint)local_8 & 0xff))) {
            do {
              puVar4 = _Size;
              if (_Size == (uint *)0x0) goto LAB_004141ac;
              bVar7 = (byte)puVar11;
              _Size = (uint *)((int)_Size + -1);
              puVar11 = puVar11 + 8;
              uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
              local_18 = (uint *)(uVar5 >> 8 & 0xff);
              _Src = (uint *)((int)_Src + 1);
              local_28 = *(uint **)(puVar2[0x13] +
                                   ((((1 << (cVar3 + (byte)local_18 & 0x1f)) - 1U & uVar10) >>
                                    ((byte)local_18 & 0x1f)) + (uVar5 >> 0x10)) * 4);
              local_2c = _Size;
            } while (puVar11 < (undefined *)(((uint)local_28 >> 8 & 0xff) + (int)local_18));
          }
          uVar10 = uVar10 >> ((byte)local_8 & 0x1f);
          puVar11 = puVar11 + -(uint)(byte)local_8;
        }
        local_18 = (uint *)((uint)local_28 >> 8 & 0xff);
        uVar10 = uVar10 >> ((byte)local_18 & 0x1f);
        puVar11 = puVar11 + -(int)local_18;
        puVar2[0x10] = (uint)local_28 >> 0x10;
        local_24 = uVar10;
        if ((char)local_28 == '\0') {
          *puVar2 = 0x17;
          break;
        }
        if (((uint)local_28 & 0x20) == 0) {
          if (((uint)local_28 & 0x40) == 0) {
            puVar2[0x12] = (uint)local_28 & 0xf;
            *puVar2 = 0x13;
            goto switchD_00412dd0_caseD_413d07;
          }
          *(char **)(param_1 + 6) = "invalid literal/length code";
          goto LAB_00414148;
        }
        goto LAB_00413cdc;
      }
      param_1[4] = local_20;
      param_1[3] = local_14;
      *param_1 = _Src;
      param_1[1] = local_2c;
      puVar2[0xe] = uVar10;
      *(undefined **)(puVar2 + 0xf) = puVar11;
      FUN_00414680((byte **)param_1,(byte *)local_10);
      local_20 = param_1[4];
      local_14 = param_1[3];
      _Src = *param_1;
      uVar10 = puVar2[0xe];
      puVar11 = (undefined *)puVar2[0xf];
      _Size = param_1[1];
      local_2c = param_1[1];
      local_24 = uVar10;
      break;
    case (undefined *)0x413d07:
switchD_00412dd0_caseD_413d07:
      if ((undefined *)puVar2[0x12] != (undefined *)0x0) {
        if (puVar11 < (undefined *)puVar2[0x12]) {
          do {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = *(byte *)_Src;
            bVar8 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
            local_2c = _Size;
          } while (puVar11 < (undefined *)puVar2[0x12]);
        }
        bVar7 = (byte)puVar2[0x12];
        puVar2[0x10] = puVar2[0x10] + ((1 << (bVar7 & 0x1f)) - 1U & uVar10);
        uVar10 = uVar10 >> (bVar7 & 0x1f);
        puVar11 = puVar11 + -puVar2[0x12];
      }
      *puVar2 = 0x14;
    case (undefined *)0x413d52:
      uVar5 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & uVar10) * 4);
      if (puVar11 < (undefined *)(uVar5 >> 8 & 0xff)) {
        do {
          puVar4 = _Size;
          if (_Size == (uint *)0x0) goto LAB_004141ac;
          bVar7 = (byte)puVar11;
          _Size = (uint *)((int)_Size + -1);
          puVar11 = puVar11 + 8;
          uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
          _Src = (uint *)((int)_Src + 1);
          uVar5 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & uVar10) * 4);
          local_2c = _Size;
        } while (puVar11 < (undefined *)(uVar5 >> 8 & 0xff));
      }
      local_28 = (uint *)uVar5;
      if ((uVar5 & 0xf0) == 0) {
        local_8 = (uint *)(uVar5 >> 8);
        local_18 = (uint *)((uint)local_8 & 0xff);
        local_28 = *(uint **)(puVar2[0x14] +
                             ((((1 << ((char)uVar5 + (byte)local_18 & 0x1f)) - 1U & uVar10) >>
                              ((byte)local_18 & 0x1f)) + (uVar5 >> 0x10)) * 4);
        local_8._0_1_ = (byte)(uVar5 >> 8);
        if (puVar11 < (undefined *)(((uint)local_28 >> 8 & 0xff) + ((uint)local_8 & 0xff))) {
          do {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            uVar10 = uVar10 + ((uint)*(byte *)_Src << (bVar7 & 0x1f));
            local_18 = (uint *)(uVar5 >> 8 & 0xff);
            _Src = (uint *)((int)_Src + 1);
            local_28 = *(uint **)(puVar2[0x14] +
                                 ((((1 << ((char)uVar5 + (byte)local_18 & 0x1f)) - 1U & uVar10) >>
                                  ((byte)local_18 & 0x1f)) + (uVar5 >> 0x10)) * 4);
            local_2c = _Size;
          } while (puVar11 < (undefined *)(((uint)local_28 >> 8 & 0xff) + (int)local_18));
        }
        uVar10 = uVar10 >> ((byte)local_8 & 0x1f);
        puVar11 = puVar11 + -(uint)(byte)local_8;
      }
      local_18 = (uint *)((uint)local_28 >> 8 & 0xff);
      uVar10 = uVar10 >> ((byte)local_18 & 0x1f);
      puVar11 = puVar11 + -(int)local_18;
      local_24 = uVar10;
      if (((uint)local_28 & 0x40) != 0) {
        *(char **)(param_1 + 6) = "invalid distance code";
        goto LAB_00414148;
      }
      puVar2[0x11] = (uint)local_28 >> 0x10;
      puVar2[0x12] = (uint)local_28 & 0xf;
      *puVar2 = 0x15;
switchD_00412dd0_caseD_413ec9:
      if ((undefined *)puVar2[0x12] != (undefined *)0x0) {
        if (puVar11 < (undefined *)puVar2[0x12]) {
          do {
            puVar4 = _Size;
            if (_Size == (uint *)0x0) goto LAB_004141ac;
            bVar7 = *(byte *)_Src;
            bVar8 = (byte)puVar11;
            _Size = (uint *)((int)_Size + -1);
            puVar11 = puVar11 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
            local_2c = _Size;
          } while (puVar11 < (undefined *)puVar2[0x12]);
        }
        bVar7 = (byte)puVar2[0x12];
        puVar2[0x11] = puVar2[0x11] + ((1 << (bVar7 & 0x1f)) - 1U & uVar10);
        uVar10 = uVar10 >> (bVar7 & 0x1f);
        puVar11 = puVar11 + -puVar2[0x12];
        local_24 = uVar10;
      }
      uVar5 = (puVar2[0xb] - (int)local_20) + (int)local_10;
      if (uVar5 <= puVar2[0x11] && puVar2[0x11] != uVar5) {
        *(char **)(param_1 + 6) = "invalid distance too far back";
        goto LAB_00414148;
      }
      *puVar2 = 0x16;
switchD_00412dd0_caseD_413f38:
      puVar4 = _Size;
      if (local_20 != (uint *)0x0) {
        local_28 = (uint *)puVar2[0x11];
        if ((uint *)((int)local_10 - (int)local_20) < local_28) {
          local_28 = (uint *)((int)local_28 - (int)(uint *)((int)local_10 - (int)local_20));
          if ((uint *)puVar2[0xc] < local_28) {
            local_28 = (uint *)((int)local_28 - (int)(uint *)puVar2[0xc]);
            local_18 = (uint *)((puVar2[0xd] + puVar2[10]) - (int)local_28);
          }
          else {
            local_18 = (uint *)((puVar2[0xd] - (int)local_28) + puVar2[0xc]);
          }
          local_8 = (uint *)puVar2[0x10];
          if (local_8 < local_28) goto LAB_00413f9f;
        }
        else {
          local_18 = (uint *)((int)local_14 - (int)local_28);
          local_8 = (uint *)puVar2[0x10];
LAB_00413f9f:
          local_28 = local_8;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        local_20 = (uint *)((int)local_20 - (int)local_28);
        *(uint **)(puVar2 + 0x10) = (uint *)((int)local_8 - (int)local_28);
        do {
          uVar1 = *(undefined *)local_18;
          local_18 = (uint *)((int)local_18 + 1);
          *(undefined *)local_14 = uVar1;
          local_14 = (uint *)((int)local_14 + 1);
          local_28 = (uint *)((int)local_28 + -1);
        } while (local_28 != (uint *)0x0);
        if (puVar2[0x10] == 0) {
          *puVar2 = 0x12;
        }
        break;
      }
      goto LAB_004141ac;
    case (undefined *)0x413ec9:
      goto switchD_00412dd0_caseD_413ec9;
    case (undefined *)0x413f38:
      goto switchD_00412dd0_caseD_413f38;
    case (undefined *)0x413ff4:
      if (local_20 == (uint *)0x0) goto LAB_004141ac;
      *(undefined *)local_14 = *(undefined *)(puVar2 + 0x10);
      local_14 = (uint *)((int)local_14 + 1);
      local_20 = (uint *)((int)local_20 + -1);
      *puVar2 = 0x12;
      break;
    case (undefined *)0x41401f:
      if (puVar2[2] != 0) {
        while (puVar11 < (undefined *)0x20) {
          puVar4 = _Size;
          if (_Size == (uint *)0x0) goto LAB_004141ac;
          bVar7 = *(byte *)_Src;
          bVar8 = (byte)puVar11;
          _Size = (uint *)((int)_Size + -1);
          puVar11 = puVar11 + 8;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
          local_2c = _Size;
          local_24 = uVar10;
        }
        local_10 = (uint *)((int)local_10 - (int)local_20);
        param_1[5] = (uint *)((int)param_1[5] + (int)local_10);
        puVar2[7] = puVar2[7] + (int)local_10;
        if (local_10 != (uint *)0x0) {
          if (puVar2[4] == 0) {
            _Size = (uint *)FUN_00415030(puVar2[6],(byte *)(uint *)((int)local_14 - (int)local_10),
                                         (uint)local_10);
          }
          else {
            _Size = (uint *)FUN_00414630(puVar2[6],(uint *)((int)local_14 - (int)local_10),
                                         (uint)local_10);
          }
          *(uint **)(puVar2 + 6) = _Size;
          param_1[0xc] = _Size;
          _Size = local_2c;
        }
        uVar5 = uVar10;
        if (puVar2[4] == 0) {
          uVar5 = ((uVar10 & 0xff00) + uVar10 * 0x10000) * 0x100 + (local_24 >> 0x10 & 0xff) * 0x100
                  + (uVar10 >> 0x18);
        }
        local_10 = local_20;
        if (uVar5 != puVar2[6]) {
          *(char **)(param_1 + 6) = "incorrect data check";
          goto LAB_00414148;
        }
        uVar10 = 0;
        local_24 = 0;
        puVar11 = (undefined *)0x0;
      }
      *puVar2 = 0x19;
    case (undefined *)0x4140f2:
      if ((puVar2[2] != 0) && (puVar2[4] != 0)) {
        while (puVar11 < (undefined *)0x20) {
          puVar4 = _Size;
          if (_Size == (uint *)0x0) goto LAB_004141ac;
          bVar7 = *(byte *)_Src;
          bVar8 = (byte)puVar11;
          _Size = (uint *)((int)_Size + -1);
          puVar11 = puVar11 + 8;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)bVar7 << (bVar8 & 0x1f));
          local_2c = _Size;
          local_24 = uVar10;
        }
        if (uVar10 != puVar2[7]) {
          *(char **)(param_1 + 6) = "incorrect length check";
          goto LAB_00414148;
        }
        uVar10 = 0;
        puVar11 = (undefined *)0x0;
      }
      *puVar2 = 0x1a;
switchD_00412dd0_caseD_41419a:
      local_c = 1;
      puVar4 = _Size;
      goto LAB_004141ac;
    case (undefined *)0x41419a:
      goto switchD_00412dd0_caseD_41419a;
    case (undefined *)0x4141a4:
      local_c = -3;
      goto LAB_004141ac;
    case (undefined *)0x4141f4:
      goto switchD_00412dd0_caseD_4141f4;
    }
    uVar5 = *puVar2;
  } while( true );
}



undefined4 __cdecl FUN_00414340(int param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(code **)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}



uint __cdecl FUN_00414630(uint param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  if (param_3 != 0) {
    do {
      if (((uint)param_2 & 3) == 0) break;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_004185d8 + ((*(byte *)param_2 ^ param_1) & 0xff) * 4);
      param_2 = (uint *)((int)param_2 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (0x1f < param_3) {
    uVar3 = param_3 >> 5;
    puVar1 = param_2;
    do {
      param_1 = param_1 ^ *puVar1;
      uVar2 = *(uint *)(&DAT_004189d8 + (param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (param_1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (param_1 & 0xff) * 4) ^ puVar1[1];
      uVar2 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4) ^ puVar1[2];
      uVar2 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4) ^ puVar1[3];
      uVar2 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4) ^ puVar1[4];
      uVar2 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4) ^ puVar1[5];
      uVar2 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4) ^ puVar1[6];
      param_2 = puVar1 + 8;
      param_3 = param_3 - 0x20;
      uVar2 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4) ^ puVar1[7];
      param_1 = *(uint *)(&DAT_004189d8 + (uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00418dd8 + (uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004185d8 + (uVar2 >> 0x18) * 4) ^
                *(uint *)(&DAT_004191d8 + (uVar2 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar1 = param_2;
    } while (uVar3 != 0);
  }
  if (3 < param_3) {
    uVar3 = param_3 >> 2;
    do {
      param_1 = param_1 ^ *param_2;
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&DAT_004189d8 + (param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00418dd8 + (param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004185d8 + (param_1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004191d8 + (param_1 & 0xff) * 4);
      param_3 = param_3 - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  while (param_3 != 0) {
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_004185d8 + ((*(byte *)param_2 ^ param_1) & 0xff) * 4);
    param_2 = (uint *)((int)param_2 + 1);
    param_3 = param_3 - 1;
  }
  return ~param_1;
}



void __cdecl FUN_00414680(byte **param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar12;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  int iVar27;
  byte *local_3c;
  uint local_30;
  
  puVar3 = (undefined4 *)param_1[7];
  uVar18 = puVar3[0xe];
  pbVar19 = *param_1 + -1;
  pbVar1 = param_1[1] + -5 + (int)pbVar19;
  pbVar4 = param_1[4];
  iVar13 = -(int)param_2;
  pbVar24 = param_1[3] + -1;
  pbVar2 = pbVar4 + -0x101 + (int)pbVar24;
  iVar27 = puVar3[10];
  pbVar5 = (byte *)puVar3[0xb];
  pbVar6 = (byte *)puVar3[0xc];
  iVar7 = puVar3[0xd];
  iVar8 = puVar3[0x13];
  iVar9 = puVar3[0x14];
  uVar10 = puVar3[0x15];
  uVar11 = puVar3[0x16];
  uVar26 = puVar3[0xf];
  pbVar25 = pbVar24;
  local_3c = pbVar19;
LAB_00414720:
  if (uVar26 < 0xf) {
    pbVar20 = pbVar19 + 1;
    pbVar19 = pbVar19 + 2;
    uVar18 = uVar18 + ((uint)*pbVar20 << ((byte)uVar26 & 0x1f)) +
             ((uint)*pbVar19 << ((byte)uVar26 + 8 & 0x1f));
    uVar26 = uVar26 + 0x10;
    local_3c = pbVar19;
  }
  uVar17 = *(uint *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar18) * 4);
  bVar12 = (byte)(uVar17 >> 0x10);
  uVar15 = uVar17 >> 8 & 0xff;
  uVar18 = uVar18 >> ((byte)uVar15 & 0x1f);
  uVar26 = uVar26 - uVar15;
  while ((uVar17 & 0xff) != 0) {
    if ((uVar17 & 0x10) != 0) {
      param_2 = (byte *)(uVar17 >> 0x10);
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar26 < uVar17) {
          pbVar20 = pbVar19 + 1;
          pbVar19 = pbVar19 + 1;
          uVar18 = uVar18 + ((uint)*pbVar20 << ((byte)uVar26 & 0x1f));
          uVar26 = uVar26 + 8;
          local_3c = pbVar19;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar18);
        uVar18 = uVar18 >> (sbyte)uVar17;
        uVar26 = uVar26 - uVar17;
      }
      if (uVar26 < 0xf) {
        pbVar20 = pbVar19 + 1;
        pbVar14 = pbVar19 + 2;
        pbVar19 = pbVar19 + 2;
        uVar18 = uVar18 + ((uint)*pbVar20 << ((byte)uVar26 & 0x1f)) +
                 ((uint)*pbVar14 << ((byte)uVar26 + 8 & 0x1f));
        uVar26 = uVar26 + 0x10;
        local_3c = pbVar19;
      }
      local_30 = *(uint *)(iVar9 + ((1 << ((byte)uVar11 & 0x1f)) - 1U & uVar18) * 4);
      uVar15 = local_30 >> 8 & 0xff;
      uVar17 = local_30 & 0xff;
      uVar18 = uVar18 >> ((byte)uVar15 & 0x1f);
      uVar26 = uVar26 - uVar15;
      if ((local_30 & 0x10) == 0) goto LAB_00414840;
      goto LAB_0041487b;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) != 0) {
        *puVar3 = 0xb;
        goto LAB_00414ae4;
      }
      *(char **)(param_1 + 6) = "invalid literal/length code";
      goto LAB_00414ad6;
    }
    uVar17 = *(uint *)(iVar8 + (((1 << ((byte)(uVar17 & 0xff) & 0x1f)) - 1U & uVar18) +
                               (uVar17 >> 0x10)) * 4);
    bVar12 = (byte)(uVar17 >> 0x10);
    uVar15 = uVar17 >> 8 & 0xff;
    uVar18 = uVar18 >> ((byte)uVar15 & 0x1f);
    uVar26 = uVar26 - uVar15;
  }
  pbVar25[1] = bVar12;
  pbVar20 = pbVar25 + 1;
  goto LAB_00414a15;
  while( true ) {
    local_30 = *(uint *)(iVar9 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar18) + (local_30 >> 0x10))
                                 * 4);
    uVar15 = local_30 >> 8 & 0xff;
    uVar17 = local_30 & 0xff;
    uVar18 = uVar18 >> ((byte)uVar15 & 0x1f);
    uVar26 = uVar26 - uVar15;
    if ((local_30 & 0x10) != 0) break;
LAB_00414840:
    if ((uVar17 & 0x40) != 0) {
      *(char **)(param_1 + 6) = "invalid distance code";
LAB_00414ad6:
      *puVar3 = 0x1b;
      goto LAB_00414ae4;
    }
  }
LAB_0041487b:
  uVar17 = uVar17 & 0xf;
  pbVar20 = pbVar19;
  uVar15 = uVar26;
  if (uVar26 < uVar17) {
    pbVar20 = pbVar19 + 1;
    uVar15 = uVar26 + 8;
    uVar18 = uVar18 + ((uint)pbVar19[1] << ((byte)uVar26 & 0x1f));
    local_3c = pbVar20;
    if (uVar15 < uVar17) {
      pbVar20 = pbVar19 + 2;
      uVar18 = uVar18 + ((uint)pbVar19[2] << ((byte)uVar15 & 0x1f));
      uVar15 = uVar26 + 0x10;
      local_3c = pbVar20;
    }
  }
  uVar26 = uVar15 - uVar17;
  pbVar14 = (byte *)((local_30 >> 0x10) + ((1 << (sbyte)uVar17) - 1U & uVar18));
  uVar18 = uVar18 >> (sbyte)uVar17;
  if (pbVar14 <= pbVar25 + -(int)(pbVar4 + iVar13 + (int)pbVar24)) {
    pbVar19 = pbVar25 + -(int)pbVar14;
    do {
      pbVar21 = pbVar25;
      pbVar14 = pbVar19;
      pbVar21[1] = pbVar14[1];
      pbVar21[2] = pbVar14[2];
      pbVar25 = pbVar21 + 3;
      *pbVar25 = pbVar14[3];
      param_2 = param_2 + -3;
      pbVar19 = pbVar14 + 3;
    } while ((byte *)0x2 < param_2);
    pbVar19 = pbVar20;
    pbVar20 = pbVar25;
    if (param_2 != (byte *)0x0) {
      pbVar21[4] = pbVar14[4];
      pbVar20 = pbVar21 + 4;
      if ((byte *)0x1 < param_2) {
        pbVar21[5] = pbVar14[5];
        pbVar20 = pbVar21 + 5;
      }
    }
    goto LAB_00414a15;
  }
  pbVar20 = pbVar14 + -(int)(pbVar25 + -(int)(pbVar4 + iVar13 + (int)pbVar24));
  pbVar19 = local_3c;
  if (pbVar5 < pbVar20) {
    *(char **)(param_1 + 6) = "invalid distance too far back";
    *puVar3 = 0x1b;
LAB_00414ae4:
    iVar27 = uVar26 + (uVar26 >> 3) * -8;
    *param_1 = pbVar19 + -(uVar26 >> 3) + 1;
    param_1[3] = pbVar25 + 1;
    param_1[4] = pbVar2 + (0x101 - (int)pbVar25);
    param_1[1] = pbVar1 + (5 - (int)(pbVar19 + -(uVar26 >> 3)));
    puVar3[0xf] = iVar27;
    puVar3[0xe] = uVar18 & (1 << ((byte)iVar27 & 0x1f)) - 1U;
    return;
  }
  pbVar21 = (byte *)(iVar7 + -1);
  if (pbVar6 == (byte *)0x0) {
    pbVar16 = pbVar21 + (iVar27 - (int)pbVar20);
    pbVar21 = pbVar20;
    if (pbVar20 < param_2) {
      do {
        pbVar22 = pbVar16 + 1;
        pbVar16 = pbVar16 + 1;
        pbVar25 = pbVar25 + 1;
        pbVar21 = pbVar21 + -1;
        *pbVar25 = *pbVar22;
      } while (pbVar21 != (byte *)0x0);
LAB_004149a6:
      param_2 = param_2 + -(int)pbVar20;
      pbVar16 = pbVar25 + -(int)pbVar14;
    }
  }
  else {
    if (pbVar6 < pbVar20) {
      pbVar22 = pbVar20 + -(int)pbVar6;
      pbVar16 = pbVar21 + (int)(pbVar6 + (iVar27 - (int)pbVar20));
      if (pbVar22 < param_2) {
        param_2 = param_2 + -(int)pbVar22;
        do {
          pbVar20 = pbVar16 + 1;
          pbVar16 = pbVar16 + 1;
          pbVar25 = pbVar25 + 1;
          pbVar22 = pbVar22 + -1;
          *pbVar25 = *pbVar20;
        } while (pbVar22 != (byte *)0x0);
        pbVar16 = pbVar21;
        if (pbVar6 < param_2) {
          param_2 = param_2 + -(int)pbVar6;
          pbVar20 = pbVar6;
          do {
            pbVar16 = pbVar21 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar25 = pbVar25 + 1;
            pbVar20 = pbVar20 + -1;
            *pbVar25 = *pbVar16;
          } while (pbVar20 != (byte *)0x0);
          pbVar16 = pbVar25 + -(int)pbVar14;
        }
      }
    }
    else {
      pbVar16 = pbVar21 + (int)(pbVar6 + -(int)pbVar20);
      pbVar21 = pbVar20;
      if (pbVar20 < param_2) {
        do {
          pbVar22 = pbVar16 + 1;
          pbVar16 = pbVar16 + 1;
          pbVar25 = pbVar25 + 1;
          pbVar21 = pbVar21 + -1;
          *pbVar25 = *pbVar22;
        } while (pbVar21 != (byte *)0x0);
        goto LAB_004149a6;
      }
    }
  }
  if ((byte *)0x2 < param_2) {
    iVar23 = (uint)(param_2 + -3) / 3 + 1;
    do {
      param_2 = param_2 + -3;
      pbVar25[1] = pbVar16[1];
      pbVar25[2] = pbVar16[2];
      pbVar20 = pbVar16 + 3;
      pbVar16 = pbVar16 + 3;
      pbVar25 = pbVar25 + 3;
      iVar23 = iVar23 + -1;
      *pbVar25 = *pbVar20;
    } while (iVar23 != 0);
  }
  pbVar20 = pbVar25;
  if (param_2 != (byte *)0x0) {
    pbVar20 = pbVar25 + 1;
    *pbVar20 = pbVar16[1];
    if ((byte *)0x1 < param_2) {
      pbVar20 = pbVar25 + 2;
      *pbVar20 = pbVar16[2];
    }
  }
LAB_00414a15:
  pbVar25 = pbVar20;
  if ((pbVar1 <= pbVar19) || (pbVar2 <= pbVar20)) goto LAB_00414ae4;
  goto LAB_00414720;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl
FUN_00414b40(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined4 *puVar12;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  ushort *local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  ushort *local_70;
  int local_6c;
  uint local_68;
  ushort *local_64;
  int *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint *local_50;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ushort auStack36 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_8c;
  local_80 = param_6;
  uVar3 = 0;
  local_48 = param_2;
  local_60 = param_4;
  local_50 = param_5;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_3 != 0) {
    do {
      puVar12 = (undefined4 *)((int)&local_44 + (uint)*(ushort *)(param_2 + uVar3 * 2) * 2);
      *(short *)puVar12 = *(short *)puVar12 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  local_7c = 0xf;
  do {
    if (*(short *)((int)&local_44 + local_7c * 2) != 0) break;
    local_7c = local_7c - 1;
  } while (local_7c != 0);
  local_88 = *param_5;
  if (local_7c < *param_5) {
    local_88 = local_7c;
  }
  if (local_7c == 0) {
    local_8c = 0x140;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    FUN_00412237();
    return;
  }
  uVar3 = 1;
  do {
    if (*(short *)((int)&local_44 + uVar3 * 2) != 0) break;
    if (*(short *)((int)&local_44 + uVar3 * 2 + 2) != 0) {
      uVar3 = uVar3 + 1;
      break;
    }
    if (*(short *)((int)&local_40 + uVar3 * 2) != 0) {
      uVar3 = uVar3 + 2;
      break;
    }
    if (*(short *)((int)&local_40 + uVar3 * 2 + 2) != 0) {
      uVar3 = uVar3 + 3;
      break;
    }
    if (*(short *)((int)&local_3c + uVar3 * 2) != 0) {
      uVar3 = uVar3 + 4;
      break;
    }
    uVar3 = uVar3 + 5;
  } while (uVar3 < 0x10);
  if (local_88 < uVar3) {
    local_88 = uVar3;
  }
  iVar10 = 1;
  uVar4 = 1;
  do {
    iVar10 = iVar10 * 2 - (uint)*(ushort *)((int)&local_44 + uVar4 * 2);
    if (iVar10 < 0) goto LAB_00415015;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if ((iVar10 < 1) || ((param_1 != 0 && (local_7c == 1)))) {
    auStack36[1] = 0;
    uVar4 = 2;
    do {
      uVar5 = uVar4 + 2;
      *(short *)((int)auStack36 + uVar4 + 2) =
           *(short *)((int)auStack36 + uVar4) + *(short *)((int)&local_44 + uVar4);
      uVar4 = uVar5;
    } while (uVar5 < 0x1e);
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        if (*(short *)(param_2 + uVar4 * 2) != 0) {
          param_6[auStack36[*(ushort *)(param_2 + uVar4 * 2)]] = (ushort)uVar4;
          auStack36[*(ushort *)(param_2 + uVar4 * 2)] =
               auStack36[*(ushort *)(param_2 + uVar4 * 2)] + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
    }
    if (param_1 == 0) {
      local_64 = param_6;
      local_70 = param_6;
      local_6c = 0x13;
    }
    else {
      if (param_1 == 1) {
        local_70 = (ushort *)&DAT_0041a4ae;
        local_64 = (ushort *)&DAT_0041a4ee;
        local_6c = 0x100;
      }
      else {
        local_70 = (ushort *)&DAT_0041a730;
        local_64 = (ushort *)&DAT_0041a770;
        local_6c = -1;
      }
    }
    local_78 = *param_4;
    bVar7 = (byte)local_88;
    local_74 = 1 << (bVar7 & 0x1f);
    uVar5 = 0;
    uVar4 = 0;
    local_5c = local_74 - 1;
    local_68 = 0xffffffff;
    local_84 = uVar3;
    local_58 = local_74;
    if ((param_1 != 1) || (local_74 < 0x5b0)) {
LAB_00414dd0:
      do {
        bVar11 = (byte)uVar4;
        bVar2 = (char)local_84 - bVar11;
        uVar1 = *local_80;
        if ((int)(uint)uVar1 < local_6c) {
          local_8c = (uint)bVar2 << 8;
          local_8c = local_8c | (uint)uVar1 << 0x10;
        }
        else {
          if (local_6c < (int)(uint)uVar1) {
            local_8c = CONCAT22(local_70[*local_80],
                                CONCAT11(bVar2,*(undefined *)(local_64 + *local_80)));
          }
          else {
            local_8c = CONCAT31((uint3)bVar2,0x60);
          }
        }
        iVar10 = 1 << ((char)local_84 - bVar11 & 0x1f);
        local_4c = local_58;
        puVar8 = (uint *)(local_78 + ((uVar5 >> (bVar11 & 0x1f)) + local_58) * 4);
        uVar3 = local_58;
        do {
          uVar3 = uVar3 - iVar10;
          puVar8 = puVar8 + iVar10 * 0x3fffffff;
          *puVar8 = local_8c;
        } while (uVar3 != 0);
        uVar3 = 1 << ((char)local_84 - 1U & 0x1f);
        while ((uVar5 & uVar3) != 0) {
          uVar3 = uVar3 >> 1;
        }
        if (uVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uVar3 - 1 & uVar5) + uVar3;
        }
        puVar12 = (undefined4 *)((int)&local_44 + local_84 * 2);
        *(short *)puVar12 = *(short *)puVar12 + -1;
        local_80 = local_80 + 1;
        if (*(short *)((int)&local_44 + local_84 * 2) == 0) {
          if (local_84 == local_7c) {
            local_8c._0_2_ = CONCAT11((char)local_84 - bVar11,0x40);
            local_8c = (uint)(ushort)local_8c;
            uVar3 = local_84;
            iVar10 = local_78;
            goto joined_r0x00414f9d;
          }
          local_84 = (uint)*(ushort *)(param_2 + (uint)*local_80 * 2);
        }
      } while ((local_84 <= local_88) || (local_54 = local_5c & uVar5, local_54 == local_68));
      if (uVar4 == 0) {
        uVar4 = local_88;
      }
      local_78 = local_78 + local_58 * 4;
      iVar9 = local_84 - uVar4;
      uVar3 = uVar4 + iVar9;
      bVar2 = (byte)iVar9;
      iVar10 = 1 << (bVar2 & 0x1f);
      if (uVar3 < local_7c) {
        puVar12 = (undefined4 *)((int)&local_44 + uVar3 * 2);
        do {
          bVar2 = (byte)iVar9;
          uVar1 = *(ushort *)puVar12;
          if ((int)(iVar10 - (uint)uVar1) < 1) break;
          uVar3 = uVar3 + 1;
          iVar9 = iVar9 + 1;
          bVar2 = (byte)iVar9;
          puVar12 = (undefined4 *)((int)puVar12 + 2);
          iVar10 = (iVar10 - (uint)uVar1) * 2;
        } while (uVar3 < local_7c);
      }
      local_58 = 1 << (bVar2 & 0x1f);
      local_74 = local_74 + local_58;
      if ((param_1 != 1) || (local_74 < 0x5b0)) {
        *(byte *)(*param_4 + local_54 * 4) = bVar2;
        *(byte *)(*param_4 + 1 + local_54 * 4) = bVar7;
        *(undefined2 *)(*param_4 + 2 + local_54 * 4) = (short)(local_78 - *param_4 >> 2);
        local_68 = local_54;
        goto LAB_00414dd0;
      }
    }
  }
LAB_00415015:
  FUN_00412237();
  return;
joined_r0x00414f9d:
  if (uVar5 == 0) goto LAB_00414ff5;
  if ((uVar4 != 0) && ((local_5c & uVar5) != local_68)) {
    iVar10 = *param_4;
    uVar4 = 0;
    local_84 = local_88;
    local_8c._0_2_ = CONCAT11(bVar7,(undefined)local_8c);
    local_8c = (uint)(ushort)local_8c;
    uVar3 = local_88;
  }
  *(uint *)(iVar10 + (uVar5 >> ((byte)uVar4 & 0x1f)) * 4) = local_8c;
  uVar6 = 1 << ((char)uVar3 - 1U & 0x1f);
  while ((uVar5 & uVar6) != 0) {
    uVar6 = uVar6 >> 1;
  }
  if (uVar6 == 0) goto LAB_00414ff5;
  uVar5 = (uVar6 - 1 & uVar5) + uVar6;
  goto joined_r0x00414f9d;
LAB_00414ff5:
  *param_4 = *param_4 + local_74 * 4;
  *param_5 = local_88;
  goto LAB_00415015;
}



uint __cdecl FUN_00415030(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar18 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    uVar18 = uVar18 + param_1;
    if (0xfff0 < uVar18) {
      uVar18 = uVar18 - 0xfff1;
    }
    return uVar18 << 0x10 | param_1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      do {
        param_1 = param_1 + *param_2;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
        uVar18 = uVar18 + param_1;
      } while (param_3 != 0);
    }
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    return ((uVar18 / 0xfff1) * 0xf + uVar18) * 0x10000 | param_1;
  }
  if (0x15af < param_3) {
    uVar17 = param_3 / 0x15b0;
    do {
      param_3 = param_3 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar2 = param_1 + *param_2;
        iVar3 = iVar2 + (uint)param_2[1];
        iVar4 = iVar3 + (uint)param_2[2];
        iVar5 = iVar4 + (uint)param_2[3];
        iVar6 = iVar5 + (uint)param_2[4];
        iVar7 = iVar6 + (uint)param_2[5];
        iVar8 = iVar7 + (uint)param_2[6];
        iVar9 = iVar8 + (uint)param_2[7];
        iVar10 = iVar9 + (uint)param_2[8];
        iVar11 = iVar10 + (uint)param_2[9];
        iVar12 = iVar11 + (uint)param_2[10];
        iVar13 = iVar12 + (uint)param_2[0xb];
        iVar14 = iVar13 + (uint)param_2[0xc];
        iVar15 = iVar14 + (uint)param_2[0xd];
        iVar16 = iVar15 + (uint)param_2[0xe];
        param_1 = iVar16 + (uint)param_2[0xf];
        uVar18 = uVar18 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                 iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + param_1;
        param_2 = param_2 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      param_1 = param_1 % 0xfff1;
      uVar18 = uVar18 % 0xfff1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (param_3 != 0) {
    if (0xf < param_3) {
      uVar17 = param_3 >> 4;
      do {
        iVar1 = param_1 + *param_2;
        iVar2 = iVar1 + (uint)param_2[1];
        iVar3 = iVar2 + (uint)param_2[2];
        iVar4 = iVar3 + (uint)param_2[3];
        iVar5 = iVar4 + (uint)param_2[4];
        iVar6 = iVar5 + (uint)param_2[5];
        iVar7 = iVar6 + (uint)param_2[6];
        iVar8 = iVar7 + (uint)param_2[7];
        iVar9 = iVar8 + (uint)param_2[8];
        iVar10 = iVar9 + (uint)param_2[9];
        iVar11 = iVar10 + (uint)param_2[10];
        iVar12 = iVar11 + (uint)param_2[0xb];
        iVar13 = iVar12 + (uint)param_2[0xc];
        iVar14 = iVar13 + (uint)param_2[0xd];
        iVar15 = iVar14 + (uint)param_2[0xe];
        param_1 = iVar15 + (uint)param_2[0xf];
        param_3 = param_3 - 0x10;
        uVar18 = uVar18 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 +
                 iVar10 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + param_1;
        param_2 = param_2 + 0x10;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    while (param_3 != 0) {
      param_1 = param_1 + *param_2;
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
      uVar18 = uVar18 + param_1;
    }
    param_1 = param_1 % 0xfff1;
    uVar18 = uVar18 % 0xfff1;
  }
  return uVar18 << 0x10 | param_1;
}



void _CIsin(void)

{
                    // WARNING: Could not recover jumptable at 0x004152a2. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIsin();
  return;
}



void _CIcos(void)

{
                    // WARNING: Could not recover jumptable at 0x004152a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIcos();
  return;
}



void _CIsqrt(void)

{
                    // WARNING: Could not recover jumptable at 0x004152ae. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIsqrt();
  return;
}


