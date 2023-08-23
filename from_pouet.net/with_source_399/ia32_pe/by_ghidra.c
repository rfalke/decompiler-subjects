typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void * UniqueProcess;
    void * UniqueThread;
};

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
    char pdbpath[41];
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




void __cdecl
FUN_00401000(uint param_1,int param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  byte *pbVar1;
  byte bVar2;
  int *in_EAX;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
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
        param_5 = bVar2;
        param_2 = param_4;
        param_1 = param_3;
      }
      if (uVar8 != 0) {
        iVar9 = in_EAX[3] + iVar7 * param_2 + param_1;
        iVar6 = (uint)param_5 << 0x10;
        iVar5 = 0;
        param_1 = uVar8;
        if (0 < (int)uVar8) {
          do {
            iVar5 = iVar5 + (int)(uVar3 << 0x10) / (int)uVar8;
            iVar6 = iVar6 + (int)(((uint)param_6 - (uint)param_5) * 0x10000) / (int)uVar8;
            pbVar1 = (byte *)((iVar5 >> 0x10) + iVar9);
            puVar4 = (undefined *)((iVar5 >> 0x10) + iVar9);
            iVar9 = iVar9 + iVar7;
            param_1 = param_1 - 1;
            *puVar4 = (&DAT_00478840)[(iVar6 >> 0x10) + (uint)*pbVar1 * 0x40];
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
        iVar5 = 0;
        param_1 = uVar3;
        if (0 < (int)uVar3) {
          do {
            iVar5 = iVar5 + (int)(uVar8 << 0x10) / (int)uVar3;
            iVar7 = iVar7 + (int)(((uint)param_6 - (uint)param_5) * 0x10000) / (int)uVar3;
            iVar9 = (iVar5 >> 0x10) * 0x140;
            pbVar1 = (byte *)(iVar9 + iVar6);
            puVar4 = (undefined *)(iVar9 + iVar6);
            iVar6 = iVar6 + 1;
            param_1 = param_1 - 1;
            *puVar4 = (&DAT_00478840)[(iVar7 >> 0x10) + (uint)*pbVar1 * 0x40];
          } while (param_1 != 0);
        }
      }
    }
  }
  return;
}



void __cdecl FUN_004011e0(int param_1,int param_2,float param_3)

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



void __fastcall FUN_00401600(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBX;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      uVar2 = FUN_00412520(param_1,param_2);
      *(int *)(unaff_EBX + iVar1 * 8) = (int)uVar2;
      uVar2 = FUN_00412520(extraout_ECX,(int)(uVar2 >> 0x20));
      param_2 = (undefined4)(uVar2 >> 0x20);
      *(int *)(unaff_EBX + 4 + iVar1 * 8) = (int)uVar2;
      iVar1 = iVar1 + 1;
      param_1 = extraout_ECX_00;
    } while (iVar1 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401680(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int local_18;
  int iStack_14;
  
  local_18 = 0;
  _CIsin();
  iStack_14 = 4;
  do {
    FUN_004011e0(param_2[3],
                 param_2[1] + ((int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2) * local_18 * 0xc,
                 (float)local_18 * 0.015 + 0.95);
    uVar6 = *param_2 >> 0x1f & 3;
    FUN_00401600(extraout_ECX,uVar6,(int)(*param_2 + uVar6) >> 2);
    iStack_14 = iStack_14 + -1;
    local_18 = local_18 + 1;
  } while (0 < iStack_14);
  local_18 = 0;
  iVar3 = (int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2;
  do {
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = param_2[2] + iVar3 * local_18 * 8;
        uVar6 = *(uint *)(iVar1 + iVar7 * 8);
        iVar2 = *(int *)(iVar1 + 4 + iVar7 * 8);
        iVar4 = (local_18 + 1) * iVar3;
        iVar1 = param_2[2] + iVar4 * 8;
        iVar4 = iVar4 + iVar7;
        uVar8 = FUN_00412520(iVar4,iVar4 * 3);
        uVar5 = (uint)(byte)(0x3f - (char)((int)uVar8 >> 3));
        uVar8 = FUN_00412520(uVar5,(iVar3 * local_18 + iVar7) * 3);
        FUN_00401000(uVar6,iVar2,*(int *)(iVar1 + iVar7 * 8),*(int *)(iVar1 + 4 + iVar7 * 8),
                     0x3f - (char)((int)uVar8 >> 3),(byte)uVar5);
        iVar7 = iVar7 + 1;
        iVar3 = (int)(*param_2 + (*param_2 >> 0x1f & 3U)) >> 2;
      } while (iVar7 < iVar3);
    }
    local_18 = local_18 + 1;
  } while (local_18 < 3);
  return;
}



void __cdecl FUN_004018c0(float param_1)

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
    } while (1.0 < (float)fVar7);
    iVar6 = iVar6 + -1;
    fVar1 = 1.0 / (float)fVar7;
    pfVar5[-2] = param_1 * (((float)iVar2 / 32767.0 + (float)iVar2 / 32767.0) - 1.0) * fVar1;
    pfVar5[-1] = (((float)iVar3 / 32767.0 + (float)iVar3 / 32767.0) - 1.0) * fVar1 * param_1;
    *pfVar5 = param_1 * (((float)iVar4 / 32767.0 + (float)iVar4 / 32767.0) - 1.0) * fVar1;
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
  puVar3[1] = pvVar4;
  pvVar4 = malloc(6000);
  puVar3[2] = pvVar4;
  pvVar4 = malloc(9000);
  puVar3[3] = pvVar4;
  FUN_004019e0();
  FUN_004018c0(256.0);
  pvVar4 = malloc(0xc00);
  iVar1 = *param_1;
  puVar3[4] = pvVar4;
  iVar2 = param_1[1];
  puVar3[9] = (float)iVar1 * 0.5;
  puVar3[10] = (float)-iVar2 * 0.5;
  FUN_004023d0(puVar3 + 5,(void **)(puVar3 + 4),"ball.png");
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00401af0(undefined4 param_1,undefined4 param_2)

{
  size_t *in_EAX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  
  _DAT_0041ca14 = _DAT_0041ce78 + _DAT_0041ca14;
  _DAT_0041ce78 = _DAT_0041ce78 + 0.2;
  if ((float)in_EAX[1] < _DAT_0041ca14) {
    _DAT_0041ce78 = 0.0;
    _DAT_0041ca14 = (float)in_EAX[1];
  }
  uVar1 = FUN_00412520(param_1,param_2);
  FUN_004020e0((void *)0x0,0x3f,0,*in_EAX);
  FUN_00412520(in_EAX[1] + 1,extraout_EDX);
  FUN_004020e0((void *)uVar1,0,0,*in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall
FUN_00401b90(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  size_t _Size;
  size_t sVar1;
  void *_Dst;
  size_t *unaff_EDI;
  
  FUN_00401af0(param_1,param_2);
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
    FUN_00402230(param_3 + 4,0x80);
  }
  _DAT_0041ca18 = _DAT_0041ca18 + 1.0;
  if (param_4 != 0) {
    _DAT_0041ce8c = 0.2;
  }
  _DAT_0041ce84 = _DAT_0041ce88 + _DAT_0041ce84;
  _DAT_0041ce88 = _DAT_0041ce88 + _DAT_0041ce8c;
  if ((float)unaff_EDI[1] < _DAT_0041ce84) {
    _DAT_0041ce88 = 0.0;
    _DAT_0041ce84 = (float)unaff_EDI[1];
  }
  _DAT_0041ce80 = _DAT_0041ce80 + 1;
  if (param_5 != 0) {
    _DAT_0041ce80 = 0;
    _DAT_0041ce7c = 1.0;
  }
  _DAT_0041ce7c = _DAT_0041ce7c * 0.95;
  _CIsin();
  FUN_00401680(unaff_EDI,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 * FUN_00401d00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  int iVar4;
  undefined2 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  
  DAT_0041cd78 = '/';
  DAT_0041cd79 = 'u';
  DAT_0041cd78_1._1_1_ = 's';
  DAT_0041cd78_1._2_1_ = 'r';
  DAT_0041cd7c._0_1_ = '/';
  DAT_0041cd7c._1_1_ = 'l';
  DAT_0041cd7c._2_1_ = 'o';
  DAT_0041cd7c._3_1_ = 'c';
  DAT_0041cd80._0_1_ = 'a';
  DAT_0041cd80._1_1_ = 'l';
  DAT_0041cd80_1._1_1_ = '/';
  DAT_0041cd80_1._2_1_ = 's';
  DAT_0041cd84 = 'h';
  DAT_0041cd84_1._0_1_ = 'a';
  DAT_0041cd84_1._1_1_ = 'r';
  DAT_0041cd84_1._2_1_ = 'e';
  DAT_0041cd88 = 0;
  puVar5 = (undefined2 *)0x41cd77;
  do {
    pcVar6 = (char *)((int)puVar5 + 1);
    puVar5 = (undefined2 *)((int)puVar5 + 1);
  } while (*pcVar6 != '\0');
  *puVar5 = 0x2f;
  puVar1 = (undefined4 *)0x41cd77;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined4 *)((int)puVar2 + 1);
  } while (*(char *)((int)puVar2 + 1) != '\0');
  *(undefined4 *)((int)puVar2 + 1) = 0x68666365;
  *(undefined4 *)((int)puVar2 + 5) = 0x7477612d;
  *(undefined2 *)((int)puVar2 + 9) = 0x73;
  puVar5 = (undefined2 *)0x41cd77;
  do {
    pcVar6 = (char *)((int)puVar5 + 1);
    puVar5 = (undefined2 *)((int)puVar5 + 1);
  } while (*pcVar6 != '\0');
  *puVar5 = 0x2f;
  puVar1 = (undefined4 *)0x41cd77;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined4 *)((int)puVar2 + 1);
  } while (*(char *)((int)puVar2 + 1) != '\0');
  *(undefined4 *)((int)puVar2 + 1) = 0x70696863;
  *(undefined4 *)((int)puVar2 + 5) = 0x6d782e;
  pFVar3 = fopen(&DAT_0041cd78,"r");
  if (pFVar3 == (FILE *)0x0) {
    iVar4 = 0;
    do {
      pcVar6 = &DAT_0041aa90 + iVar4;
      (&DAT_0041cd78)[iVar4] = *pcVar6;
      iVar4 = iVar4 + 1;
    } while (*pcVar6 != '\0');
    pFVar3 = fopen("chip.xm","r");
    if (pFVar3 == (FILE *)0x0) {
      puVar7 = &DAT_0041aa90;
      pcVar6 = "findfile: file %s could not be found\n";
      pFVar3 = __iob_func();
      fprintf(pFVar3 + 2,pcVar6,puVar7);
      return (undefined1 *)0x0;
    }
  }
  fclose(pFVar3);
  return &DAT_0041cd78;
}



void FUN_00401e50(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_14;
  char *local_10;
  int local_c;
  int local_8;
  
  local_10 = "abcdefghijklmnopqrstuvwxyz ";
  piVar9 = &DAT_0041c3c0;
  puVar4 = (undefined4 *)malloc(0x80c);
  puVar5 = (undefined4 *)malloc(0x80);
  uVar2 = *(undefined4 *)(in_EAX + 8);
  iVar8 = *(int *)(in_EAX + 0xc);
  *puVar5 = 0x10;
  puVar5[3] = iVar8;
  puVar5[2] = uVar2;
  puVar5[1] = 0xc;
  puVar5[7] = iVar8 + 0x11;
  puVar5[4] = 0x10;
  puVar5[5] = 0xc;
  puVar5[6] = uVar2;
  puVar5[0xb] = iVar8 + 0x22;
  puVar5[8] = 0x10;
  puVar5[9] = 0xc;
  puVar5[10] = uVar2;
  puVar5[0xf] = iVar8 + 0x33;
  puVar5[0xc] = 0x10;
  puVar5[0xd] = 0xc;
  puVar5[0xe] = uVar2;
  puVar5[0x13] = iVar8 + 0x44;
  puVar5[0x10] = 0x10;
  puVar5[0x11] = 0xc;
  puVar5[0x12] = uVar2;
  puVar5[0x17] = iVar8 + 0x55;
  puVar5[0x14] = 0x10;
  puVar5[0x15] = 0xc;
  puVar5[0x16] = uVar2;
  puVar5[0x1b] = iVar8 + 0x66;
  puVar5[0x18] = 0x10;
  puVar5[0x19] = 0xc;
  puVar5[0x1a] = uVar2;
  puVar5[0x1f] = iVar8 + 0x77;
  puVar5[0x1c] = 0x10;
  puVar5[0x1d] = 0xc;
  puVar5[0x1e] = uVar2;
  puVar6 = (undefined4 *)malloc(0x10);
  *puVar6 = 0x510;
  puVar6[1] = 0x3c;
  puVar6[2] = 0x510;
  pvVar7 = malloc(0x12fc0);
  puVar6[3] = pvVar7;
  puVar4[0x202] = puVar6;
  local_14 = 0;
  local_8 = 0;
  do {
    bVar1 = *local_10;
    local_10 = local_10 + 1;
    iVar8 = 0;
    do {
      local_c = 3;
      iVar10 = local_14;
      do {
        iVar3 = *piVar9;
        piVar9 = piVar9 + 1;
        FUN_00402150(puVar5 + iVar3 * 4,iVar10,iVar8);
        iVar10 = iVar10 + 0x10;
        local_c = local_c + -1;
      } while (local_c != 0);
      iVar8 = iVar8 + 0xc;
    } while (iVar8 < 0x3c);
    local_14 = local_14 + 0x30;
    puVar4[bVar1 + 0x101] = local_8;
    local_8 = local_8 + 0x30;
    puVar4[bVar1 + 1] = 0x30;
  } while (local_8 < 0x510);
  puVar4[0x201] = 0x30;
  *puVar4 = 0x3c;
  return;
}



void __cdecl FUN_00402010(void *param_1,int param_2)

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



void __thiscall FUN_00402070(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
                    // WARNING: Load size is inaccurate
  pcVar5 = "another way to scroll";
  iVar4 = 0x140;
  if (in_EAX <= param_1[1] - *this) {
    iVar1 = *param_1;
    iVar2 = param_1[3];
    uVar3 = 0x61;
    do {
      pcVar5 = (char *)((byte *)pcVar5 + 1);
      iVar6 = *(int *)((int)this + uVar3 * 4 + 4) + 1;
      if ((-1 < iVar4) && (iVar4 <= *param_1 - iVar6)) {
        FUN_00402010((void *)(iVar1 * in_EAX + iVar2 + iVar4),param_2);
      }
      uVar3 = (uint)(byte)*pcVar5;
      iVar4 = iVar4 + iVar6;
    } while (*pcVar5 != 0);
  }
  return;
}



void __thiscall FUN_004020e0(void *this,byte param_1,int param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  void *_Dst;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  if (((((int)this <= iVar1) && (iVar2 = *unaff_EDI, param_2 <= iVar2)) && (0 < (int)param_3)) &&
     (0 < in_EAX)) {
    if (iVar1 < (int)this + in_EAX) {
      in_EAX = iVar1 - (int)this;
    }
    if (iVar2 < (int)(param_3 + param_2)) {
      param_3 = iVar2 - param_2;
    }
    _Dst = (void *)(unaff_EDI[3] + unaff_EDI[2] * (int)this + param_2);
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



void __fastcall FUN_00402150(size_t *param_1,int param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int *in_EAX;
  size_t sVar6;
  void *_Dst;
  void *_Src;
  size_t local_14;
  
  _Src = (void *)param_1[3];
  iVar1 = in_EAX[2];
  sVar2 = param_1[2];
  sVar3 = *param_1;
  sVar6 = param_1[1];
  if ((((SBORROW4(param_2,-sVar3) == (int)(param_2 + sVar3) < 0) &&
       (SBORROW4(param_3,-sVar6) == (int)(param_3 + sVar6) < 0)) &&
      (iVar4 = *in_EAX, param_2 <= iVar4)) && (iVar5 = in_EAX[1], param_3 <= iVar5)) {
    if (param_2 < 0) {
      local_14 = sVar3 + param_2;
      _Src = (void *)((int)_Src - param_2);
      param_2 = 0;
    }
    else {
      local_14 = sVar3;
      if (iVar4 < (int)(sVar3 + param_2)) {
        local_14 = sVar3 + ((iVar4 - sVar3) - param_2);
      }
    }
    if (param_3 < 0) {
      _Src = (void *)((int)_Src - sVar3 * param_3);
      sVar6 = sVar6 + param_3;
      param_3 = 0;
    }
    else if (iVar5 < (int)(sVar6 + param_3)) {
      sVar6 = iVar5 - param_3;
    }
    _Dst = (void *)(in_EAX[3] + iVar1 * param_3 + param_2);
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
  ___security_check_cookie_4(local_4 ^ (uint)local_304);
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
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_30;
  uint local_2c;
  undefined local_28 [4];
  uint local_24;
  uint local_20;
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
    uVar7 = local_20;
    FUN_00407c10((int *)local_c,local_20);
    puVar8 = local_c;
    puVar9 = local_14;
    FUN_00405510(local_14,(int *)local_c,(int)local_14,(int *)puVar10,uVar7);
    FUN_00405140(local_c,local_14,&local_18,&local_10,&local_30,&local_2c,local_28,0,(uint *)0x0,
                 puVar8,puVar9);
    _Memory = (undefined4 *)malloc(local_10 * 4);
    uVar7 = 0;
    if (local_10 != 0) {
      do {
        _Size = FUN_00405120((int)local_c,(int)local_14);
        pvVar2 = malloc(_Size);
        _Memory[uVar7] = pvVar2;
        if (pvVar2 == (void *)0x0) {
          printf("pngloader: could not allocate memory\n");
          return 0xffffffff;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_10);
    }
    FUN_004069c0((int *)local_c,_Memory);
    *param_1 = local_18;
    param_1[2] = local_18;
    param_1[1] = local_10;
    puVar3 = (undefined *)malloc(local_18 * local_10);
    param_1[3] = (uint)puVar3;
    if (puVar3 != (undefined *)0x0) {
      uVar7 = 0;
      if (local_10 != 0) {
        do {
          puVar4 = (undefined *)_Memory[uVar7];
          uVar5 = 0;
          if (local_18 != 0) {
            do {
              *puVar3 = *puVar4;
              uVar5 = uVar5 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            } while (uVar5 < local_18);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_10);
      }
      uVar7 = 0;
      if (local_10 != 0) {
        do {
          free((void *)_Memory[uVar7]);
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_10);
      }
      free(_Memory);
      local_8 = malloc(0x300);
      pvVar2 = malloc(0xc00);
      *param_2 = pvVar2;
      local_24 = 0x100;
      FUN_00405270((int)local_c,(int)local_14,&local_8,&local_24);
      iVar6 = 0;
      iVar1 = 0;
      do {
        *(uint *)(iVar6 + (int)*param_2) = (uint)(*(byte *)(iVar1 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 4 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 1 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 8 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 2 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0xc + (int)*param_2) = (uint)(*(byte *)(iVar1 + 3 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x10 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 4 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x14 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 5 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x18 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 6 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x1c + (int)*param_2) = (uint)(*(byte *)(iVar1 + 7 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x20 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 8 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x24 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 9 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x28 + (int)*param_2) = (uint)(*(byte *)(iVar1 + 10 + (int)local_8) >> 2);
        *(uint *)(iVar6 + 0x2c + (int)*param_2) = (uint)(*(byte *)(iVar1 + 0xb + (int)local_8) >> 2)
        ;
        iVar1 = iVar1 + 0xc;
        iVar6 = iVar6 + 0x30;
      } while (iVar1 < 0x300);
      FUN_00406a20((int *)local_c,(uint)local_14);
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
  puVar2[3] = pvVar1;
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
  undefined4 uStack_c;
  
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
  _DAT_0047850c = uStack_c;
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
      for (iVar6 = iVar3 >> 2; iVar6 != 0; iVar6 = iVar6 + -1) {
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
  _DAT_004784dc = DAT_004784f8 * 0x50 + DAT_004784fc;
  DAT_004784e0 = 0x50;
  _DAT_004784b0 = 0x50;
  _DAT_004784a0 = 0x50;
  DAT_00478490 = 0x50;
  _DAT_004784d8 = DAT_004784f8;
  _DAT_004784e8 = DAT_004784f8;
  _DAT_004784b8 = DAT_004784f8;
  _DAT_004784a8 = DAT_004784f8;
  _DAT_004784ec = DAT_004784fc + 0x50;
  _DAT_004784bc = DAT_004784fc + 0xa0;
  _DAT_004784d0 = 0x6a;
  DAT_004784d4 = 0x18;
  DAT_004784e4 = 0x3c;
  _DAT_004784b4 = 0x3c;
  _DAT_004784ac = DAT_004784fc + 0xf0;
  _DAT_004784a4 = 0x3c;
  DAT_004784c4 = 0x3c;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00402b70(int *param_1)

{
  size_t sVar1;
  int iVar2;
  size_t *in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t *psVar6;
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
    FUN_00402150((size_t *)&DAT_004784d0,0x1e,sVar1 - (DAT_004784d4 * 3) / 2);
    *param_1 = 0;
  }
  uVar3 = *(ushort *)(DAT_00478834 + 0x104) + 4;
  uVar4 = (int)uVar3 >> 4;
  if ((uVar4 < 3) && (DAT_0041ce98 < 0x3f)) {
    DAT_0041ce98 = DAT_0041ce98 + 4;
  }
  if ((3 < uVar4) && (0 < DAT_0041ce98)) {
    DAT_0041ce98 = DAT_0041ce98 + -4;
  }
  if ((uVar3 & 0xf) < 8) {
    if ((int)DAT_0041ce94 < 0x3f) {
      DAT_0041ce94 = DAT_0041ce94 + 3;
    }
  }
  else if (0 < (int)DAT_0041ce94) {
    DAT_0041ce94 = DAT_0041ce94 - 3;
  }
  uVar3 = DAT_0041ce94;
  sVar1 = in_EAX[1];
  FUN_004020e0((void *)((sVar1 - 0x1b) - DAT_004784c4 / 2),0,0xdc - (int)DAT_00478490 / 2,
               DAT_00478490);
  if (uVar4 == 1) {
    psVar6 = (size_t *)&DAT_004784e0;
  }
  else if (uVar4 == 2) {
    psVar6 = (size_t *)&DAT_004784b0;
  }
  else {
    if (uVar4 != 3) goto LAB_00402cc5;
    psVar6 = (size_t *)&DAT_004784a0;
  }
  FUN_00402150(psVar6,0xdc - DAT_004784e0 / 2,(sVar1 - 0x1b) - DAT_004784e4 / 2);
LAB_00402cc5:
  param_1 = (int *)0xe0;
  piVar9 = (int *)(DAT_004784c0 + 0xa84);
  do {
    iVar7 = piVar9[1];
    iVar2 = *piVar9;
    uVar5 = (uint)param_1 & 0xff;
    (&DAT_00478520)[uVar5 * 3] = (char)(piVar9[-1] * uVar3 >> 6);
    (&DAT_00478521)[uVar5 * 3] = (char)(iVar2 * uVar3 >> 6);
    (&DAT_00478522)[uVar5 * 3] = (char)(iVar7 * uVar3 >> 6);
    param_1 = (int *)((int)param_1 + 1);
    piVar9 = piVar9 + 3;
  } while ((int)param_1 < 0xe5);
  uVar5 = uVar3;
  if ((uVar4 != 1) && (uVar4 != 2)) {
    uVar5 = 0;
  }
  iVar7 = (int)uVar5 >> 1;
  DAT_004787d8 = (char)(iVar7 * DAT_0041ce98 >> 6);
  DAT_004787da = (char)((iVar7 + 0x14) * DAT_0041ce98 >> 6);
  DAT_004787d9 = (char)((iVar7 + 10) * DAT_0041ce98 >> 6);
  _DAT_00478508 = 1;
  iVar7 = (int)((uVar4 != 3) - 1 & uVar3) >> 1;
  DAT_004787de = (char)(iVar7 * DAT_0041ce98 >> 6);
  DAT_004787e0 = (char)((iVar7 + 0x14) * DAT_0041ce98 >> 6);
  DAT_004787df = (char)((iVar7 + 10) * DAT_0041ce98 >> 6);
  iVar7 = (int)((uVar4 != 2) - 1 & uVar3) >> 1;
  DAT_004787e4 = (char)(iVar7 * DAT_0041ce98 >> 6);
  DAT_004787e5 = (char)((iVar7 + 10) * DAT_0041ce98 >> 6);
  DAT_004787e6 = (char)((iVar7 + 0x14) * DAT_0041ce98 >> 6);
  return;
}



void FUN_00402e00(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *local_30;
  byte *local_2c;
  int local_28;
  int local_18;
  
  piVar1 = DAT_0047848c;
  iVar3 = *DAT_0047848c;
  pbVar7 = (byte *)DAT_0047848c[3];
  local_30 = pbVar7 + iVar3 + -1;
  pbVar6 = pbVar7 + (DAT_0047848c[1] + -1) * DAT_0047848c[2];
  local_2c = pbVar6 + iVar3 + -1;
  iVar3 = iVar3 / 2;
  iVar2 = DAT_0047848c[2] + iVar3;
  iVar5 = DAT_0047848c[2] - iVar3;
  local_28 = 0;
  if (0 < DAT_0047848c[1] / 2) {
    do {
      local_18 = 0;
      if (0 < iVar3) {
        do {
          _CIsqrt();
          uVar8 = FUN_00412520(extraout_ECX,extraout_EDX);
          _CIsqrt();
          uVar9 = FUN_00412520(extraout_ECX_00,extraout_EDX_00);
          _CIsqrt();
          uVar10 = FUN_00412520(extraout_ECX_01,extraout_EDX_01);
          bVar4 = ((byte)uVar8 & 3 | ((byte)uVar9 & 3) * '\x04') * '\x04' | (byte)uVar10 & 3;
          *pbVar7 = bVar4;
          *local_30 = bVar4;
          local_30 = local_30 + -1;
          *pbVar6 = bVar4;
          *local_2c = bVar4;
          local_2c = local_2c + -1;
          local_18 = local_18 + 1;
          iVar3 = *piVar1 / 2;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (local_18 < iVar3);
      }
      local_30 = local_30 + iVar2;
      local_28 = local_28 + 1;
      local_2c = local_2c + -iVar5;
      pbVar6 = pbVar6 + -iVar2;
      pbVar7 = pbVar7 + iVar5;
    } while (local_28 < piVar1[1] / 2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00403040(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  int local_28;
  
  local_28 = in_EAX[3];
  iVar5 = *(int *)(DAT_0047848c + 8) * param_4 + *(int *)(DAT_0047848c + 0xc) + param_3;
  iVar1 = in_EAX[1];
  iVar8 = *(int *)(DAT_0047848c + 8) * param_2 + *(int *)(DAT_0047848c + 0xc) + param_1;
  param_2 = 0;
  if (0 < iVar1) {
    iVar2 = *in_EAX;
    iVar3 = in_EAX[2];
    do {
      _CIsin();
      uVar9 = FUN_00412520(extraout_ECX,extraout_EDX);
      puVar7 = (uint *)((int)uVar9 + iVar8);
      _CIsin();
      if (iVar2 >> 2 != 0) {
        uVar9 = FUN_00412520(extraout_ECX_00,extraout_EDX_00);
        iVar4 = (int)uVar9 + iVar8;
        uVar9 = FUN_00412520(extraout_ECX_01,(int)(uVar9 >> 0x20));
        iVar6 = iVar2 >> 2;
        do {
          iVar6 = iVar6 + -1;
          *(uint *)((local_28 - iVar4) + (int)puVar7) =
               *(uint *)(((int)uVar9 - iVar4) + iVar5 + (int)puVar7) ^ *puVar7;
          puVar7 = puVar7 + 1;
        } while (iVar6 != 0);
      }
      local_28 = local_28 + iVar3;
      iVar8 = iVar8 + *(int *)(DAT_0047848c + 8);
      iVar5 = iVar5 + *(int *)(DAT_0047848c + 8);
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
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  
  ppvVar2 = (void **)malloc(4);
  iVar8 = *in_EAX + 0x180;
  iVar7 = in_EAX[1] + 200;
  _DAT_00478484 = iVar8;
  _DAT_00478488 = iVar7;
  piVar3 = (int *)malloc(0x10);
  piVar3[1] = iVar7;
  *piVar3 = iVar8;
  piVar3[2] = iVar8;
  if (iVar7 * iVar8 == 0) {
    piVar3[3] = 0;
  }
  else {
    pvVar4 = malloc(iVar7 * iVar8);
    piVar3[3] = (int)pvVar4;
  }
  DAT_0047848c = piVar3;
  FUN_00402e00();
  puVar5 = (undefined4 *)malloc(0xc00);
  *ppvVar2 = puVar5;
  uVar6 = 0;
  do {
    iVar7 = (((int)uVar6 >> 6 & 3U) + ((int)uVar6 >> 4 & 3U) + ((int)uVar6 >> 2 & 3U) + (uVar6 & 3))
            * 4;
    dVar1 = (double)iVar7;
    puVar5[2] = iVar7;
    uVar6 = uVar6 + 1;
    local_c = (undefined4)(longlong)ROUND((dVar1 * 54.0) / 63.0);
    *puVar5 = local_c;
    local_c = (undefined4)(longlong)ROUND((dVar1 * 59.0) / 63.0);
    puVar5[1] = local_c;
    puVar5 = puVar5 + 3;
  } while ((int)uVar6 < 0x40);
  return ppvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_004032d0(void *this,int param_1,int param_2,int param_3)

{
  size_t sVar1;
  size_t _Size;
  size_t sVar2;
  size_t *in_EAX;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  void *_Dst;
  float10 fVar6;
  ulonglong uVar7;
  
  if (_DAT_0041c3bc != 0) {
    _DAT_0041c3bc = 0;
    FUN_00402230((undefined4 *)this,0x40);
  }
  _DAT_0041ceb0 = _DAT_0041ceb0 + 1;
  if (param_1 != 0) {
    _DAT_0041ceb0 = 0;
    _DAT_0041ceac = 1.0;
  }
  _DAT_0041ceac = _DAT_0041ceac * 0.95;
  if (0.0 < _DAT_0041ceac) {
    _DAT_0041ceac = _DAT_0041ceac + 0.01;
  }
  if (param_2 == 0) {
    _DAT_0041cea8 = 1;
  }
  else if (_DAT_0041cea8 != 0) {
    _DAT_0041cea8 = 0;
    _DAT_0041c3ac = -_DAT_0041c3ac;
    _DAT_0041c3b0 = -_DAT_0041c3b0;
    _DAT_0041c3b4 = -_DAT_0041c3b4;
    _DAT_0041c3b8 = -_DAT_0041c3b8;
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
  _CIcos((float)((float10)1 / (fVar6 + (float10)1.75) - (float10)0.36));
  uVar7 = FUN_00412520(extraout_ECX,extraout_EDX);
  iVar3 = (int)uVar7;
  _CIsin();
  uVar7 = FUN_00412520(extraout_ECX_00,extraout_EDX_00);
  iVar5 = (int)uVar7;
  _CIsin();
  uVar7 = FUN_00412520(extraout_ECX_01,extraout_EDX_01);
  iVar4 = (int)uVar7;
  _CIcos();
  uVar7 = FUN_00412520(extraout_ECX_02,extraout_EDX_02);
  FUN_00403040((int)uVar7,iVar4,iVar5,iVar3);
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004035b0(void)

{
  byte bVar1;
  size_t *psVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  uint uVar6;
  uint extraout_EDX_00;
  void *_Dst;
  uint uVar7;
  int iVar8;
  void *local_58;
  uint **local_54;
  int local_50;
  void *local_4c;
  int *local_48;
  int **local_44;
  void **local_40;
  int *local_3c;
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
  
  iVar8 = 0;
  local_58 = (void *)0xc8;
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
  puVar3 = FUN_00401d00();
  FUN_004022c0(puVar3);
  FUN_00402340();
  psVar2 = DAT_00478824;
  _Dst = (void *)DAT_00478824[3];
  if (0 < (int)DAT_00478824[1]) {
    do {
      memset(_Dst,0,*psVar2);
      _Dst = (void *)((int)_Dst + psVar2[2]);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)psVar2[1]);
  }
  local_2c = psVar2[3];
  local_30 = psVar2[2];
  local_38 = 0x140;
  local_34 = 0xb4;
  FUN_004023d0(local_18,&local_4c,"logo.png");
  local_1c = local_c;
  local_28 = 0x140;
  local_24 = 0x14;
  local_20 = local_10;
  piVar4 = FUN_00401a40((int *)&local_38);
  local_48 = piVar4;
  FUN_00403ef0();
  local_40 = FUN_00403190();
  local_54 = FUN_00404080();
  local_44 = FUN_00404fd0();
  local_3c = FUN_00402aa0();
  FUN_00402230(&local_4c,0x100);
  Player_Start(DAT_00478834);
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  do {
    uVar7 = (uint)*(ushort *)(DAT_00478834 + 0x104);
    if (*(ushort *)(DAT_00478834 + 0x106) < 10) {
      bVar1 = (byte)*(ushort *)(DAT_00478834 + 0x104);
      switch(*(ushort *)(DAT_00478834 + 0x106)) {
      case 1:
        FUN_004042f0(local_54,((int)(uVar7 * 4) >> 6) + 1,(int)&local_38,0,(undefined4 *)0x0);
        break;
      case 2:
        uVar6 = 4 - (uVar7 * 4) / 0x1c;
        if ((int)uVar6 < 5) {
          uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
        }
        else {
          uVar6 = 4;
        }
        FUN_004042f0(local_54,uVar6,(int)&local_38,2,(undefined4 *)0x1);
        break;
      case 3:
        FUN_004042f0(local_54,0,(int)&local_38,2,(undefined4 *)0x1);
        break;
      case 4:
        if ((uVar7 < 0x15) || (uVar6 = uVar7 & 0xf, (char)uVar6 != '\x03')) {
          iVar8 = 0;
        }
        else {
          iVar8 = 1;
        }
        FUN_00401b90(uVar5,uVar6,piVar4,(uint)(0xf < uVar7),iVar8);
        if (0xb4 < (int)local_58) {
          local_58 = (void *)((int)local_58 + -1);
          FUN_00402150(&local_28,0,(int)local_58);
        }
        break;
      case 5:
        uVar6 = (uint)((char)(uVar7 & 0xf) == '\x03');
        FUN_00401b90(uVar7 & 0xf,uVar6,piVar4,1,uVar6);
        break;
      case 6:
        FUN_00403fb0(&local_38);
        break;
      case 7:
        FUN_00405030(local_44,(int)&local_38,(uint)((bVar1 & 0xf) == 0xb));
        break;
      case 8:
        FUN_004032d0(local_40,(uint)((bVar1 & 0xf) == 10),(uint)((bVar1 & 7) == 4),
                     (uint)(0x2d < uVar7));
        if ((0x38 < uVar7) && ((int)local_58 < 200)) {
          FUN_00402150(&local_28,0,(int)(void *)((int)local_58 + 1));
          FUN_004020e0(local_58,0,0,*psVar2);
          local_58 = (void *)((int)local_58 + 1);
        }
        break;
      case 9:
        Player_SetVolume(uVar7 * -2 + 0x7f);
        if (uVar7 == 0x3f) {
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
    FUN_00402900((int)psVar2);
    iVar8 = FUN_004028a0();
  } while (((iVar8 == 0) || (_DAT_0047850c != 0x1b)) &&
          (uVar5 = extraout_ECX_00, uVar6 = extraout_EDX_00, piVar4 = local_48, local_50 == 0));
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
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 extraout_EDX;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iStack_850;
  undefined4 *puStack_84c;
  uint uStack_848;
  int iStack_844;
  int iStack_840;
  int iStack_83c;
  int iStack_838;
  int iStack_834;
  uint uStack_830;
  int iStack_82c;
  int aiStack_800 [256];
  int aiStack_400 [256];
  
  iVar2 = DAT_0047847c;
  puVar5 = (undefined4 *)param_1[3];
  iVar1 = param_1[2];
  _CIcos();
  _CIsin();
  uVar17 = FUN_00412520(extraout_ECX,extraout_EDX);
  uVar18 = FUN_00412520(extraout_ECX_00,(int)(uVar17 >> 0x20));
  uVar19 = FUN_00412520(extraout_ECX_01,(int)(uVar18 >> 0x20));
  uVar20 = FUN_00412520(extraout_ECX_02,(int)(uVar19 >> 0x20));
  iVar12 = (int)uVar17 >> 3;
  iVar15 = (int)uVar19 >> 3;
  iVar9 = (int)uVar18 >> 3;
  iVar11 = (int)uVar20 >> 3;
  uVar21 = FUN_00412520(extraout_ECX_03,(int)(uVar20 >> 0x20));
  uStack_830 = (uint)uVar21;
  uVar21 = FUN_00412520(extraout_ECX_04,(int)(uVar21 >> 0x20));
  uStack_848 = (uint)uVar21;
  iStack_83c = 0;
  iStack_850 = 0;
  iStack_844 = iVar15 * 2;
  iStack_840 = iVar12 * 2;
  iVar7 = iVar12 * 6;
  iVar3 = 0;
  puStack_84c = (undefined4 *)(iVar15 * 6);
  iStack_838 = iVar12 * 4;
  iStack_834 = iVar15 * 4;
  do {
    *(int *)((int)aiStack_800 + iVar3) = iStack_83c;
    *(int *)((int)aiStack_400 + iVar3) = iStack_850;
    *(int *)((int)aiStack_800 + iVar3 + 4) = iStack_83c + iVar12;
    *(int *)((int)aiStack_400 + iVar3 + 4) = iStack_850 + iVar15;
    *(int *)((int)aiStack_800 + iVar3 + 8) = iStack_840;
    *(int *)((int)aiStack_400 + iVar3 + 8) = iStack_844;
    *(int *)((int)aiStack_800 + iVar3 + 0xc) = iStack_840 + iVar12;
    *(int *)((int)aiStack_400 + iVar3 + 0xc) = iStack_844 + iVar15;
    *(int *)((int)aiStack_800 + iVar3 + 0x10) = iStack_838;
    iStack_83c = iStack_83c + iVar9;
    iStack_840 = iStack_840 + iVar9;
    iStack_850 = iStack_850 + iVar11;
    iStack_844 = iStack_844 + iVar11;
    *(int *)((int)aiStack_400 + iVar3 + 0x10) = iStack_834;
    *(int *)((int)aiStack_800 + iVar3 + 0x14) = iStack_838 + iVar12;
    *(int *)((int)aiStack_400 + iVar3 + 0x14) = iStack_834 + iVar15;
    *(undefined4 **)((int)aiStack_400 + iVar3 + 0x18) = puStack_84c;
    *(int *)((int)aiStack_800 + iVar3 + 0x1c) = iVar7 + iVar12;
    *(int *)((int)aiStack_800 + iVar3 + 0x18) = iVar7;
    *(int *)((int)aiStack_400 + iVar3 + 0x1c) = (int)puStack_84c + iVar15;
    iVar3 = iVar3 + 0x20;
    iVar7 = iVar7 + iVar9;
    puStack_84c = (undefined4 *)((int)puStack_84c + iVar11);
    iStack_838 = iStack_838 + iVar9;
    iStack_834 = iStack_834 + iVar11;
  } while (iVar3 < 0x100);
  iStack_82c = (int)(param_1[1] + (param_1[1] >> 0x1f & 7U)) >> 3;
  if (0 < iStack_82c) {
    iVar7 = (int)(*param_1 + (*param_1 >> 0x1f & 7U)) >> 3;
    puStack_84c = puVar5;
    do {
      puVar5 = puStack_84c;
      uVar10 = uStack_848;
      uVar13 = uStack_830;
      iStack_83c = iVar7;
      if (0 < iVar7) {
        do {
          if ((uVar13 + 0x5000 < 0xc801) && (uVar10 + 0x8200 < 0xaa01)) {
            uVar4 = uVar10 & 0xff;
            uVar16 = uVar13 & 0xff;
            iVar3 = ((int)uVar13 >> 8) + 0x8080 + (uVar10 & 0xffffff00) + iVar2;
            piVar14 = aiStack_800;
            piVar8 = aiStack_400;
            iStack_834 = 8;
            puVar6 = puVar5;
            do {
              *(undefined *)puVar6 =
                   *(undefined *)
                    (((int)(*piVar14 + uVar16) >> 8) + (*piVar8 + uVar4 & 0xffffff00) + iVar3);
              *(undefined *)((int)puVar6 + 1) =
                   *(undefined *)
                    (((int)(piVar14[1] + uVar16) >> 8) + (piVar8[1] + uVar4 & 0xffffff00) + iVar3);
              *(undefined *)((int)puVar6 + 2) =
                   *(undefined *)
                    (((int)(piVar14[2] + uVar16) >> 8) + (piVar8[2] + uVar4 & 0xffffff00) + iVar3);
              iVar9 = piVar14[4];
              *(undefined *)((int)puVar6 + 3) =
                   *(undefined *)
                    (((int)(piVar14[3] + uVar16) >> 8) + (piVar8[3] + uVar4 & 0xffffff00) + iVar3);
              iVar11 = piVar14[5];
              *(undefined *)(puVar6 + 1) =
                   *(undefined *)
                    (((int)(iVar9 + uVar16) >> 8) + (piVar8[4] + uVar4 & 0xffffff00) + iVar3);
              iVar9 = piVar14[6];
              *(undefined *)((int)puVar6 + 5) =
                   *(undefined *)
                    (((int)(iVar11 + uVar16) >> 8) + (piVar8[5] + uVar4 & 0xffffff00) + iVar3);
              *(undefined *)((int)puVar6 + 6) =
                   *(undefined *)
                    (((int)(iVar9 + uVar16) >> 8) + (piVar8[6] + uVar4 & 0xffffff00) + iVar3);
              *(undefined *)((int)puVar6 + 7) =
                   *(undefined *)
                    (((int)(piVar14[7] + uVar16) >> 8) + (piVar8[7] + uVar4 & 0xffffff00) + iVar3);
              piVar8 = piVar8 + 8;
              piVar14 = piVar14 + 8;
              puVar6 = (undefined4 *)((undefined *)((int)puVar6 + 7) + iVar1 + -7);
              iStack_834 = iStack_834 + -1;
            } while (iStack_834 != 0);
          }
          else {
            iVar3 = 8;
            puVar6 = puVar5;
            do {
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6 = puVar6 + 0x50;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iStack_83c = iStack_83c + -1;
          puVar5 = puVar5 + 2;
          uVar10 = uVar10 + (int)uVar19;
          uVar13 = uVar13 + (int)uVar17;
        } while (iStack_83c != 0);
      }
      uStack_848 = uStack_848 + (int)uVar20;
      uStack_830 = uStack_830 + (int)uVar18;
      puStack_84c = puStack_84c + 0x280;
      iStack_82c = iStack_82c + -1;
    } while (iStack_82c != 0);
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
  psVar2[3] = (size_t)_Dst;
  _DAT_00478460 = psVar2;
  if (0 < (int)psVar2[1]) {
    do {
      memset(_Dst,0,*psVar2);
      _Dst = (void *)((int)_Dst + psVar2[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)psVar2[1]);
  }
  FUN_00402150(local_14,0,0x80);
  _DAT_00478470 = 0x100;
  _DAT_00478474 = 0x100;
  DAT_0047847c = psVar2[2] * 0x80 + psVar2[3];
  _DAT_00478478 = psVar2[2];
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
  _DAT_0041ceb4 = _DAT_0041ceb4 + 1.0;
  fVar3 = (float10)_CIcos();
  _CIsin((float)(fVar3 * (float10)256.0 + (float10)384.0));
  FUN_00403a50((int *)param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint ** FUN_00404080(void)

{
  int iVar1;
  void *this;
  uint **ppuVar2;
  int *piVar3;
  void *pvVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  ppuVar2 = (uint **)malloc(4);
  memset(&DAT_00468280,0,64000);
  piVar3 = (int *)malloc(0x10);
  *piVar3 = 0x1000;
  piVar3[1] = 0x3c;
  piVar3[2] = 0x1000;
  pvVar4 = malloc(0x3c000);
  this = DAT_0047883c;
  piVar3[3] = (int)pvVar4;
  DAT_00458080 = piVar3;
  FUN_00402070(this,piVar3,*piVar3);
  puVar5 = (uint *)malloc(0xc00);
  *ppuVar2 = puVar5;
  uVar6 = 0xfffffffd;
  puVar8 = puVar5;
  do {
    uVar7 = uVar6 - 2;
    if ((int)uVar7 < 0x40) {
      uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
    }
    else {
      uVar7 = 0x3f;
    }
    *puVar8 = uVar7;
    if ((int)uVar6 < 0x40) {
      uVar7 = ((int)uVar6 < 0) - 1 & uVar6;
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
  DAT_00468270 = 0;
  _DAT_00468274 = 0;
  _DAT_00468278 = 0;
  _DAT_0046827c = 0;
  DAT_00458070 = 0;
  _DAT_00458074 = 0;
  _DAT_00458078 = 0;
  _DAT_0045807c = 0;
  return ppuVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004041e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 extraout_EDX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  char *pcStack_18;
  
  iVar7 = DAT_00458080;
  iVar1 = *(int *)(DAT_00458080 + 0xc);
  puVar8 = &DAT_00468280;
  puVar6 = param_1;
  do {
    puVar2 = (undefined4 *)((int)puVar8 + 0x14a);
    puVar9 = puVar6;
    for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar8 = puVar2;
    puVar6 = puVar6 + 0x50;
  } while ((int)puVar2 < 0x478450);
  if (param_2 == (undefined4 *)0x1) {
    _DAT_0041cebc = _DAT_0041cebc + 1;
    _CIsin();
    uVar11 = FUN_00412520(extraout_ECX,extraout_EDX);
    iVar4 = 0;
    if (0 < *(int *)(iVar7 + 4)) {
      param_2 = param_1 + 0x1900;
      pcStack_18 = &DAT_0045e7c0;
      do {
        pbVar5 = (byte *)(*(int *)(iVar7 + 8) * iVar4 + (int)uVar11 + iVar1);
        iVar3 = 0x13f;
        puVar8 = param_2;
        pcVar10 = pcStack_18;
        do {
          if ((*pcVar10 == '\0') && (*pbVar5 != 0)) {
            *(byte *)puVar8 = pcVar10[10] | *pbVar5;
            iVar7 = DAT_00458080;
          }
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          pbVar5 = pbVar5 + 1;
          iVar3 = iVar3 + -1;
          pcVar10 = pcVar10 + 1;
        } while (iVar3 != 0);
        param_2 = param_2 + 0x50;
        pcStack_18 = pcStack_18 + 0x14a;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar7 + 4));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall
FUN_004042f0(undefined4 *param_1,uint param_2,int param_3,int param_4,undefined4 *param_5)

{
  float fVar1;
  byte bVar2;
  float10 fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 extraout_ECX;
  int iVar7;
  int iVar8;
  undefined4 extraout_EDX;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar14;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 local_370;
  float local_364;
  undefined8 local_360;
  double local_358;
  undefined8 local_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  byte local_328 [400];
  byte local_198 [404];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_370;
  if (_DAT_0041c36c != 0) {
    _DAT_0041c36c = 0;
    FUN_00402230(param_1,0xc2);
  }
  if (_DAT_0041ceb8 != 0) {
    DAT_00478520 = 0;
    DAT_00478521 = 0;
    DAT_00478522 = 0x3f;
  }
  memset(local_328,0,400);
  memset(local_198,0,400);
  fVar13 = (float10)1;
  fVar14 = (float10)1;
  fVar3 = (float10)0;
  if (param_4 == 0) {
    uVar15 = FUN_004022a0();
    iVar9 = (int)((ulonglong)uVar15 >> 0x20);
    iVar8 = (int)uVar15;
    if (0 < iVar8) {
      puVar10 = &DAT_00468270;
      for (iVar7 = iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 1;
        puVar10 = puVar10 + 1;
      }
      do {
        fVar1 = (float)(&DAT_00458070)[iVar9] + 0.0125;
        if ((float10)fVar1 <= fVar13) {
          if ((float10)fVar1 < extraout_ST1) {
            fVar1 = (float)extraout_ST0;
          }
        }
        else {
          fVar1 = (float)fVar14;
        }
        local_370 = (double)CONCAT44(local_370._4_4_,fVar1);
        iVar9 = iVar9 + 1;
        (&DAT_0045806c)[iVar9] = fVar1;
        (&DAT_0045805c)[iVar9] = (float)((float10)(float)(&DAT_0045805c)[iVar9] + fVar13);
      } while (iVar9 < iVar8);
    }
  }
  else if (param_4 == 2) {
    DAT_00458060 = (float)((float10)DAT_00458060 + fVar13);
    DAT_00458064 = (float)((float10)DAT_00458064 + fVar13);
    DAT_00458068 = (float)((float10)DAT_00458068 + fVar13);
    DAT_0045806c = (float)((float10)DAT_0045806c + fVar13);
    if ((int)param_2 < 5) {
      uVar5 = ((int)param_2 < 0) - 1 & param_2;
    }
    else {
      uVar5 = 4;
    }
    iVar8 = -uVar5 + 3;
    uVar5 = -uVar5 + 4;
    if (3 < (int)uVar5) {
      uVar5 = uVar5 >> 2;
      pfVar6 = &DAT_00458068 + iVar8;
      iVar8 = iVar8 + uVar5 * -4;
      do {
        fVar12 = (float10)(pfVar6[2] - 0.0125);
        if (fVar12 <= fVar13) {
          local_370._0_4_ = pfVar6[2] - 0.0125;
          if (fVar12 < fVar3) {
            local_370._0_4_ = 0.0;
          }
        }
        else {
          local_370._0_4_ = (float)fVar14;
        }
        pfVar6[2] = (float)local_370;
        local_370._0_4_ = pfVar6[1] - 0.0125;
        if ((float10)(float)local_370 <= fVar13) {
          if ((float10)(float)local_370 < fVar3) {
            local_370._0_4_ = 0.0;
          }
        }
        else {
          local_370._0_4_ = (float)fVar14;
        }
        pfVar6[1] = (float)local_370;
        local_370._0_4_ = *pfVar6 - 0.0125;
        if ((float10)(float)local_370 <= fVar13) {
          if ((float10)(float)local_370 < fVar3) {
            local_370._0_4_ = 0.0;
          }
        }
        else {
          local_370._0_4_ = (float)fVar14;
        }
        *pfVar6 = (float)local_370;
        fVar12 = (float10)(pfVar6[-1] - 0.0125);
        if (fVar12 <= fVar13) {
          if (fVar3 <= fVar12) {
            local_370 = (double)CONCAT44(local_370._4_4_,pfVar6[-1] - 0.0125);
          }
          else {
            local_370 = (double)((ulonglong)local_370._4_4_ << 0x20);
          }
        }
        else {
          local_370 = (double)CONCAT44(local_370._4_4_,(float)fVar14);
        }
        uVar5 = uVar5 - 1;
        pfVar6[-1] = (float)local_370;
        pfVar6 = pfVar6 + -4;
      } while (uVar5 != 0);
    }
    while (-1 < iVar8) {
      local_370._4_4_ = (uint)((ulonglong)local_370 >> 0x20);
      fVar12 = (float10)((float)(&DAT_00458070)[iVar8] - 0.0125);
      if (fVar12 <= fVar13) {
        if (fVar3 <= fVar12) {
          local_370 = (double)CONCAT44(local_370._4_4_,(float)(&DAT_00458070)[iVar8] - 0.0125);
        }
        else {
          local_370 = (double)((ulonglong)local_370._4_4_ << 0x20);
        }
      }
      else {
        local_370 = (double)CONCAT44(local_370._4_4_,(float)fVar14);
      }
      iVar8 = iVar8 + -1;
      *(float *)(&DAT_00458074 + iVar8 * 4) = (float)local_370;
    }
  }
  local_364 = 0.0;
  do {
    iVar8 = (int)local_364;
    fVar1 = (&DAT_00458060)[(int)local_364];
    local_360 = (double)(int)local_364;
    local_358 = (double)fVar1;
    local_364 = (float)(int)local_364 * 1.8 - ((fVar1 / 40.0) * ((float)(int)local_364 + 3.0)) / 7.0
    ;
    local_350 = (double)local_364;
    local_370._0_4_ = fVar1;
    fVar13 = (float10)_CIsin();
    dStack_348 = (double)(((((float10)2.0 - (float10)local_360) * (float10)0.2) / (float10)6.0) *
                         fVar13);
    fVar13 = (float10)_CIsin();
    local_370._0_4_ = (float)(fVar13 * (float10)0.8 + (float10)dStack_348);
    fVar13 = (float10)_CIcos();
    local_358 = (double)(((((float10)3.0 - (float10)local_360) * (float10)0.2) / (float10)5.0) *
                        fVar13);
    fVar13 = (float10)_CIcos();
    local_364 = (float)(fVar13 * (float10)0.8 + (float10)local_358) * 160.0 + 200.0;
    if ((&DAT_00468270)[iVar8] != 0) {
      (&DAT_00478450)[iVar8] = local_364;
    }
    dStack_348 = (double)local_364;
    local_350 = (double)CONCAT44(local_350._4_4_,((float)(&DAT_00478450)[iVar8] - local_364) * 0.5);
    local_358 = (double)(float)local_370;
    fVar4 = (float)local_370 + 2.0;
    dStack_340 = (double)fVar4;
    fVar1 = (float)(&DAT_00458070)[iVar8];
    if (fVar1 <= 1.0) {
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
    local_370 = (double)CONCAT44(local_370._4_4_,fVar1);
    local_360._0_4_ = fVar4 * 5.0;
    fVar13 = (float10)_CIsqrt();
    local_360._0_4_ = (float)(fVar13 * (float10)((float)local_370 * (float)local_360));
    dStack_330 = (double)(float)local_360;
    if ((0.01 <= (float)local_360) && ((&DAT_00478450)[iVar8] = local_364, (float)local_360 < 80.0))
    {
      uVar16 = FUN_00412520(extraout_ECX,extraout_EDX);
      iVar9 = (int)uVar16;
      local_370 = (double)CONCAT44(local_370._4_4_,iVar9);
      dStack_338 = (double)(extraout_ST1_00 + extraout_ST0_00);
      fVar13 = (float10)iVar9;
      if (fVar13 < extraout_ST1_00 + extraout_ST0_00) {
        local_350 = (double)((extraout_ST1_00 + (float10)1.0) * (extraout_ST1_00 + (float10)1.0));
        local_358 = local_358 * 90.0 + 127.0;
        fVar14 = extraout_ST0_00;
        while( true ) {
          local_370 = (double)(fVar13 - fVar14);
          fVar13 = (float10)_CIsqrt();
          local_360._0_4_ = (float)(uint)local_198[iVar9];
          local_364 = (float)(fVar13 * (float10)0.5 + (float10)local_358);
          if (local_364 < (float)(int)(float)local_360 ==
              (local_364 == (float)(int)(float)local_360)) {
            fVar13 = (float10)_CIcos();
            fVar13 = (float10)(float)(fVar13 * (float10)63.0 * (float10)dStack_340 * (float10)0.25);
            if (fVar13 <= (float10)63.0) {
              if (fVar13 < (float10)0.0) {
                fVar13 = (float10)0;
              }
            }
            else {
              fVar13 = (float10)63.0;
            }
            local_370 = (double)CONCAT44(local_370._4_4_,(float)fVar13);
            local_360._0_1_ = (byte)(int)ROUND((float)fVar13);
            local_328[iVar9] = (byte)local_360;
            local_370 = (double)((ulonglong)local_370 & 0xffffffffffff0000);
            local_360._0_4_ = (float)(int)ROUND(local_364);
            local_198[iVar9] = (byte)local_360;
          }
          iVar9 = iVar9 + 1;
          local_370 = (double)CONCAT44(local_370._4_4_,iVar9);
          fVar13 = (float10)iVar9;
          if ((float10)dStack_338 <= fVar13) break;
          fVar14 = (float10)dStack_348;
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
  if (0 < *(int *)(param_3 + 4)) {
    iVar9 = 0;
    do {
      puVar10 = (undefined4 *)((int)&DAT_00468280 + iVar9 + 1);
      puVar11 = (undefined4 *)((int)&DAT_00468280 + iVar9);
      for (iVar7 = 0x52; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined *)puVar11 = *(undefined *)puVar10;
      puVar10 = (undefined4 *)(&DAT_004580a1 + iVar9);
      puVar11 = (undefined4 *)(&DAT_004580a0 + iVar9);
      for (iVar7 = 0x52; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      bVar2 = local_328[iVar8 * 2 + 1];
      *(undefined *)puVar11 = *(undefined *)puVar10;
      (&DAT_004683c9)[iVar9] = (char)((int)((uint)bVar2 + (uint)local_328[iVar8 * 2]) >> 1);
      (&DAT_004581e9)[iVar9] = local_198[iVar8 * 2] & 0x80;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x14a;
    } while (iVar8 < *(int *)(param_3 + 4));
  }
  if (_DAT_0041ceb8 != 0) {
    DAT_00478520 = 0;
    DAT_00478521 = 0x3f;
    DAT_00478522 = 0;
  }
  FUN_004041e0(*(undefined4 **)(param_3 + 0xc),param_5);
  DAT_00478520 = 0;
  DAT_00478521 = 0;
  DAT_00478522 = 0;
  _DAT_00478508 = 1;
  ___security_check_cookie_4(local_4 ^ (uint)&local_370);
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
  undefined uStack_14;
  
  iVar1 = 0;
  do {
    fVar3 = (float10)_CIsin();
    fVar4 = (float10)_CIcos();
    fVar5 = (float10)_CIsin();
    fVar6 = (float10)_CIcos();
    uStack_14 = (undefined)
                (int)ROUND(fVar6 * (float10)(double)(fVar5 * (float10)25.0) +
                           (float10)(double)(fVar4 * (float10)10.0 +
                                            (float10)(double)(fVar3 * (float10)15.0)) +
                           (float10)60.0);
    (&DAT_0042cf00)[iVar1] = uStack_14;
    fVar3 = (float10)_CIsin();
    fVar4 = (float10)_CIcos();
    fVar5 = (float10)_CIsin();
    fVar6 = (float10)_CIcos();
    uStack_14 = (undefined)
                (int)ROUND(fVar6 * (float10)(double)(fVar5 * (float10)25.0) +
                           (float10)(double)(fVar4 * (float10)10.0 +
                                            (float10)(double)(fVar3 * (float10)15.0)) +
                           (float10)60.0);
    (&DAT_0041cf00)[iVar1] = uStack_14;
    fVar3 = (float10)_CIsin();
    fVar4 = (float10)_CIcos();
    fVar5 = (float10)_CIsin();
    fVar6 = (float10)_CIcos();
    iVar2 = iVar1 + 1;
    uStack_14 = (undefined)
                (int)ROUND(fVar6 * (float10)(double)(fVar5 * (float10)25.0) +
                           (float10)(double)(fVar4 * (float10)10.0 +
                                            (float10)(double)(fVar3 * (float10)15.0)) +
                           (float10)60.0);
    (&DAT_00448060)[iVar1] = uStack_14;
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
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte *pbVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piStack_2c;
  int iStack_28;
  
  _CIsin();
  uVar10 = FUN_00412520(extraout_ECX,extraout_EDX);
  piStack_2c = &DAT_0043d064;
  iVar9 = -35000;
  do {
    _CIsin();
    uVar11 = FUN_00412520(extraout_ECX_00,extraout_EDX_00);
    pbVar6 = &DAT_0041cf00 + (int)uVar11;
    _CIsin();
    uVar11 = FUN_00412520(extraout_ECX_01,extraout_EDX_01);
    iVar4 = (int)uVar11 - (int)pbVar6;
    iVar3 = (int)uVar10 - (int)pbVar6;
    pbVar7 = &DAT_00448062 + (int)uVar11;
    iStack_28 = 0x40;
    piVar5 = piStack_2c;
    pbVar8 = &DAT_0042cf02 + (int)uVar10;
    do {
      bVar1 = pbVar8[-1];
      piVar5[-1] = ((uint)pbVar6[(int)(&DAT_0042cf00 + iVar3)] +
                    (uint)pbVar6[(int)(&DAT_00448060 + iVar4)] + (uint)*pbVar6) * 0x80 + iVar9;
      bVar2 = *pbVar8;
      *piVar5 = ((uint)pbVar7[-1] + (uint)bVar1 + (uint)pbVar6[1]) * 0x80 + iVar9;
      bVar1 = pbVar8[1];
      piVar5[1] = ((uint)pbVar6[2] + (uint)bVar2 + (uint)*pbVar7) * 0x80 + iVar9;
      bVar2 = pbVar8[2];
      piVar5[2] = ((uint)pbVar7[1] + (uint)bVar1 + (uint)pbVar6[3]) * 0x80 + iVar9;
      piVar5[3] = ((uint)pbVar7[2] + (uint)bVar2 + (uint)pbVar6[4]) * 0x80 + iVar9;
      piVar5 = piVar5 + 5;
      pbVar7 = pbVar7 + 5;
      pbVar6 = pbVar6 + 5;
      pbVar8 = pbVar8 + 5;
      iStack_28 = iStack_28 + -1;
    } while (iStack_28 != 0);
    piStack_2c = piStack_2c + 0x400;
    iVar9 = iVar9 + 4000;
  } while (iVar9 < 5000);
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
          iVar5 = iVar4;
          for (iVar7 = iVar7 - iVar1; iVar7 != 0; iVar7 = iVar7 + -1) {
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
    _DAT_0041cec4 = 1.0;
  }
  _DAT_0041cec0 = _DAT_0041cec0 + 1;
  _DAT_0041cec4 = _DAT_0041cec4 * 0.95;
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
    ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
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
  piVar2[0x2b] = (int)pvVar5;
  piVar2[0x25] = (int)FUN_00407d70;
  piVar2[0x26] = (int)thunk_FUN_00408bf0;
  piVar2[0x27] = (int)piVar2;
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
  if (iVar3 == 0) {
    ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



void __thiscall FUN_00405510(void *this,int *param_1,int param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  size_t unaff_EBX;
  int *piVar7;
  int unaff_EBP;
  uint uVar8;
  char *pcVar9;
  
  iVar3 = param_2;
  piVar7 = param_1;
  if (*(byte *)(param_1 + 0x4b) < 8) {
    uVar8 = (uint)*(byte *)(param_1 + 0x4b);
    FUN_004088c0(param_1);
    *(undefined *)(piVar7 + 0x4b) = 8;
    iVar2 = FUN_00407c40(iVar3 + 0x20,uVar8,-uVar8 + 8);
    if (iVar2 != 0) {
      if ((uVar8 < 4) && (iVar3 = FUN_00407c40(iVar3 + 0x20,uVar8,-uVar8 + 4), iVar3 != 0)) {
        pcVar9 = "Not a PNG file";
      }
      else {
        pcVar9 = "PNG file corrupted by ASCII conversion";
      }
      FUN_00408740(piVar7,pcVar9);
    }
    if (uVar8 < 3) {
      piVar7[0x1a] = piVar7[0x1a] | 0x1000;
    }
  }
  puVar1 = (uint *)(piVar7 + 0x47);
LAB_00405594:
  do {
    FUN_004088c0(piVar7);
    piVar4 = (int *)FUN_00409d20(piVar7,(undefined *)&param_1);
    FUN_00407dd0((int)piVar7);
    FUN_00408ca0(piVar7,puVar1,4);
    piVar7 = param_3;
    uVar8 = 4;
    puVar5 = (uint *)&DAT_0041640c;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_004055e8;
      uVar8 = uVar8 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar8);
    if (uVar8 == 0) {
LAB_00405645:
      iVar2 = 0;
    }
    else {
LAB_004055e8:
      iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
      if (iVar3 == 0) {
        if (uVar8 == 1) goto LAB_00405645;
        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar3 == 0) {
          if (uVar8 == 2) goto LAB_00405645;
          iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar3 == 0) {
            if ((uVar8 == 3) ||
               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar3 == 0)) goto LAB_00405645;
          }
        }
      }
      iVar2 = 1;
      if (iVar3 < 1) {
        iVar2 = -1;
      }
    }
    if (iVar2 != 0) {
      uVar8 = 4;
      puVar5 = (uint *)&DAT_0041641c;
      puVar6 = puVar1;
      do {
        if (*puVar6 != *puVar5) goto LAB_00405688;
        uVar8 = uVar8 - 4;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (3 < uVar8);
      if (uVar8 == 0) {
LAB_004056e5:
        iVar2 = 0;
      }
      else {
LAB_00405688:
        iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
        if (iVar3 == 0) {
          if (uVar8 == 1) goto LAB_004056e5;
          iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
          if (iVar3 == 0) {
            if (uVar8 == 2) goto LAB_004056e5;
            iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
            if (iVar3 == 0) {
              if ((uVar8 == 3) ||
                 (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                 iVar3 == 0)) goto LAB_004056e5;
            }
          }
        }
        iVar2 = 1;
        if (iVar3 < 1) {
          iVar2 = -1;
        }
      }
      if (iVar2 == 0) {
        FUN_0040a120(param_3);
      }
      else {
        iVar3 = FUN_004082a0((int)param_3,(int *)puVar1);
        piVar7 = param_3;
        uVar8 = 4;
        if (iVar3 == 0) {
          puVar5 = (uint *)&DAT_00416424;
          puVar6 = puVar1;
          do {
            if (*puVar6 != *puVar5) goto LAB_0040590e;
            uVar8 = uVar8 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar8);
          if (uVar8 == 0) {
LAB_0040596b:
            iVar2 = 0;
          }
          else {
LAB_0040590e:
            iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
            if (iVar3 == 0) {
              if (uVar8 == 1) goto LAB_0040596b;
              iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar3 == 0) {
                if (uVar8 == 2) goto LAB_0040596b;
                iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar3 == 0) {
                  if ((uVar8 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar3 == 0)) goto LAB_0040596b;
                }
              }
            }
            iVar2 = 1;
            if (iVar3 < 1) {
              iVar2 = -1;
            }
          }
          if (iVar2 == 0) {
            FUN_00409f90(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX,(int)this);
          }
          else {
            uVar8 = 4;
            puVar5 = (uint *)&DAT_00416414;
            puVar6 = puVar1;
            do {
              if (*puVar6 != *puVar5) goto LAB_004059ad;
              uVar8 = uVar8 - 4;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (3 < uVar8);
            if (uVar8 == 0) {
LAB_00405a0a:
              iVar2 = 0;
            }
            else {
LAB_004059ad:
              iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
              if (iVar3 == 0) {
                if (uVar8 == 1) goto LAB_00405a0a;
                iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                if (iVar3 == 0) {
                  if (uVar8 == 2) goto LAB_00405a0a;
                  iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                  if (iVar3 == 0) {
                    if ((uVar8 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                       iVar3 == 0)) goto LAB_00405a0a;
                  }
                }
              }
              iVar2 = 1;
              if (iVar3 < 1) {
                iVar2 = -1;
              }
            }
            if (iVar2 == 0) {
              if ((param_3[0x1a] & 1U) == 0) {
                pcVar9 = "Missing IHDR before IDAT";
              }
              else {
                if ((*(char *)((int)param_3 + 0x126) != '\x03') || ((param_3[0x1a] & 2U) != 0))
                goto LAB_0040649f;
                pcVar9 = "Missing PLTE before IDAT";
              }
              FUN_00408740(param_3,pcVar9);
LAB_0040649f:
              piVar7[0x1a] = piVar7[0x1a] | 4;
              piVar7[0x43] = (int)piVar4;
              return;
            }
            uVar8 = 4;
            puVar5 = (uint *)&DAT_0041642c;
            puVar6 = puVar1;
            do {
              if (*puVar6 != *puVar5) goto LAB_00405a38;
              uVar8 = uVar8 - 4;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (3 < uVar8);
            if (uVar8 == 0) {
LAB_00405a95:
              iVar2 = 0;
            }
            else {
LAB_00405a38:
              iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
              if (iVar3 == 0) {
                if (uVar8 == 1) goto LAB_00405a95;
                iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                if (iVar3 == 0) {
                  if (uVar8 == 2) goto LAB_00405a95;
                  iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                  if (iVar3 == 0) {
                    if ((uVar8 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                       iVar3 == 0)) goto LAB_00405a95;
                  }
                }
              }
              iVar2 = 1;
              if (iVar3 < 1) {
                iVar2 = -1;
              }
            }
            if (iVar2 == 0) {
              FUN_0040b150(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
            }
            else {
              uVar8 = 4;
              puVar5 = (uint *)&DAT_00416434;
              puVar6 = puVar1;
              do {
                if (*puVar6 != *puVar5) goto LAB_00405ad8;
                uVar8 = uVar8 - 4;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              } while (3 < uVar8);
              if (uVar8 == 0) {
LAB_00405b35:
                iVar2 = 0;
              }
              else {
LAB_00405ad8:
                iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                if (iVar3 == 0) {
                  if (uVar8 == 1) goto LAB_00405b35;
                  iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                  if (iVar3 == 0) {
                    if (uVar8 == 2) goto LAB_00405b35;
                    iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                    if (iVar3 == 0) {
                      if ((uVar8 == 3) ||
                         (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                  (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0)) goto LAB_00405b35;
                    }
                  }
                }
                iVar2 = 1;
                if (iVar3 < 1) {
                  iVar2 = -1;
                }
              }
              if (iVar2 == 0) {
                FUN_0040a450(param_3,param_4,(uint)piVar4);
              }
              else {
                uVar8 = 4;
                puVar5 = (uint *)&DAT_0041643c;
                puVar6 = puVar1;
                do {
                  if (*puVar6 != *puVar5) goto LAB_00405b78;
                  uVar8 = uVar8 - 4;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                } while (3 < uVar8);
                if (uVar8 == 0) {
LAB_00405bd5:
                  iVar2 = 0;
                }
                else {
LAB_00405b78:
                  iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                  if (iVar3 == 0) {
                    if (uVar8 == 1) goto LAB_00405bd5;
                    iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                    if (iVar3 == 0) {
                      if (uVar8 == 2) goto LAB_00405bd5;
                      iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                      if (iVar3 == 0) {
                        if ((uVar8 == 3) ||
                           (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                    (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                        goto LAB_00405bd5;
                      }
                    }
                  }
                  iVar2 = 1;
                  if (iVar3 < 1) {
                    iVar2 = -1;
                  }
                }
                if (iVar2 == 0) {
                  FUN_0040a170(param_3,param_4,(uint)piVar4);
                }
                else {
                  uVar8 = 4;
                  puVar5 = (uint *)&DAT_00416444;
                  puVar6 = puVar1;
                  do {
                    if (*puVar6 != *puVar5) goto LAB_00405c18;
                    uVar8 = uVar8 - 4;
                    puVar5 = puVar5 + 1;
                    puVar6 = puVar6 + 1;
                  } while (3 < uVar8);
                  if (uVar8 == 0) {
LAB_00405c75:
                    iVar2 = 0;
                  }
                  else {
LAB_00405c18:
                    iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                    if (iVar3 == 0) {
                      if (uVar8 == 1) goto LAB_00405c75;
                      iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                      if (iVar3 == 0) {
                        if (uVar8 == 2) goto LAB_00405c75;
                        iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                        if (iVar3 == 0) {
                          if ((uVar8 == 3) ||
                             (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                      (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                          goto LAB_00405c75;
                        }
                      }
                    }
                    iVar2 = 1;
                    if (iVar3 < 1) {
                      iVar2 = -1;
                    }
                  }
                  if (iVar2 == 0) {
                    FUN_0040b390(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                  }
                  else {
                    uVar8 = 4;
                    puVar5 = (uint *)&DAT_0041645c;
                    puVar6 = puVar1;
                    do {
                      if (*puVar6 != *puVar5) goto LAB_00405cb8;
                      uVar8 = uVar8 - 4;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    } while (3 < uVar8);
                    if (uVar8 == 0) {
LAB_00405d15:
                      iVar2 = 0;
                    }
                    else {
LAB_00405cb8:
                      iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                      if (iVar3 == 0) {
                        if (uVar8 == 1) goto LAB_00405d15;
                        iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                        if (iVar3 == 0) {
                          if (uVar8 == 2) goto LAB_00405d15;
                          iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                  (uint)*(byte *)((int)puVar5 + 2);
                          if (iVar3 == 0) {
                            if ((uVar8 == 3) ||
                               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                        (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                            goto LAB_00405d15;
                          }
                        }
                      }
                      iVar2 = 1;
                      if (iVar3 < 1) {
                        iVar2 = -1;
                      }
                    }
                    if (iVar2 == 0) {
                      FUN_0040b650(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                    }
                    else {
                      uVar8 = 4;
                      puVar5 = (uint *)&DAT_00416464;
                      puVar6 = puVar1;
                      do {
                        if (*puVar6 != *puVar5) goto LAB_00405d58;
                        uVar8 = uVar8 - 4;
                        puVar5 = puVar5 + 1;
                        puVar6 = puVar6 + 1;
                      } while (3 < uVar8);
                      if (uVar8 == 0) {
LAB_00405db5:
                        iVar2 = 0;
                      }
                      else {
LAB_00405d58:
                        iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                        if (iVar3 == 0) {
                          if (uVar8 == 1) goto LAB_00405db5;
                          iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                  (uint)*(byte *)((int)puVar5 + 1);
                          if (iVar3 == 0) {
                            if (uVar8 == 2) goto LAB_00405db5;
                            iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                    (uint)*(byte *)((int)puVar5 + 2);
                            if (iVar3 == 0) {
                              if ((uVar8 == 3) ||
                                 (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                          (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                              goto LAB_00405db5;
                            }
                          }
                        }
                        iVar2 = 1;
                        if (iVar3 < 1) {
                          iVar2 = -1;
                        }
                      }
                      if (iVar2 == 0) {
                        FUN_0040b780(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                      }
                      else {
                        uVar8 = 4;
                        puVar5 = (uint *)&DAT_0041646c;
                        puVar6 = puVar1;
                        do {
                          if (*puVar6 != *puVar5) goto LAB_00405df8;
                          uVar8 = uVar8 - 4;
                          puVar5 = puVar5 + 1;
                          puVar6 = puVar6 + 1;
                        } while (3 < uVar8);
                        if (uVar8 == 0) {
LAB_00405e55:
                          iVar2 = 0;
                        }
                        else {
LAB_00405df8:
                          iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                          if (iVar3 == 0) {
                            if (uVar8 == 1) goto LAB_00405e55;
                            iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                    (uint)*(byte *)((int)puVar5 + 1);
                            if (iVar3 == 0) {
                              if (uVar8 == 2) goto LAB_00405e55;
                              iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                      (uint)*(byte *)((int)puVar5 + 2);
                              if (iVar3 == 0) {
                                if ((uVar8 == 3) ||
                                   (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                            (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                goto LAB_00405e55;
                              }
                            }
                          }
                          iVar2 = 1;
                          if (iVar3 < 1) {
                            iVar2 = -1;
                          }
                        }
                        if (iVar2 == 0) {
                          FUN_0040b9e0(param_3,param_4,piVar4);
                        }
                        else {
                          uVar8 = 4;
                          puVar5 = (uint *)&DAT_00416474;
                          puVar6 = puVar1;
                          do {
                            if (*puVar6 != *puVar5) goto LAB_00405e98;
                            uVar8 = uVar8 - 4;
                            puVar5 = puVar5 + 1;
                            puVar6 = puVar6 + 1;
                          } while (3 < uVar8);
                          if (uVar8 == 0) {
LAB_00405ef5:
                            iVar2 = 0;
                          }
                          else {
LAB_00405e98:
                            iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                            if (iVar3 == 0) {
                              if (uVar8 == 1) goto LAB_00405ef5;
                              iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                      (uint)*(byte *)((int)puVar5 + 1);
                              if (iVar3 == 0) {
                                if (uVar8 == 2) goto LAB_00405ef5;
                                iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                        (uint)*(byte *)((int)puVar5 + 2);
                                if (iVar3 == 0) {
                                  if ((uVar8 == 3) ||
                                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                              (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                  goto LAB_00405ef5;
                                }
                              }
                            }
                            iVar2 = 1;
                            if (iVar3 < 1) {
                              iVar2 = -1;
                            }
                          }
                          if (iVar2 == 0) {
                            FUN_0040b530(param_3,param_4,(uint)piVar4,unaff_EBP,unaff_EBX);
                          }
                          else {
                            uVar8 = 4;
                            puVar5 = (uint *)&DAT_0041647c;
                            puVar6 = puVar1;
                            do {
                              if (*puVar6 != *puVar5) goto LAB_00405f3c;
                              uVar8 = uVar8 - 4;
                              puVar5 = puVar5 + 1;
                              puVar6 = puVar6 + 1;
                            } while (3 < uVar8);
                            if (uVar8 == 0) {
LAB_00405f99:
                              iVar2 = 0;
                            }
                            else {
LAB_00405f3c:
                              iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                              if (iVar3 == 0) {
                                if (uVar8 == 1) goto LAB_00405f99;
                                iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                        (uint)*(byte *)((int)puVar5 + 1);
                                if (iVar3 == 0) {
                                  if (uVar8 == 2) goto LAB_00405f99;
                                  iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                          (uint)*(byte *)((int)puVar5 + 2);
                                  if (iVar3 == 0) {
                                    if ((uVar8 == 3) ||
                                       (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                    goto LAB_00405f99;
                                  }
                                }
                              }
                              iVar2 = 1;
                              if (iVar3 < 1) {
                                iVar2 = -1;
                              }
                            }
                            if (iVar2 == 0) {
                              FUN_0040a2e0(param_3,param_4,(uint)piVar4);
                            }
                            else {
                              uVar8 = 4;
                              puVar5 = (uint *)&DAT_0041648c;
                              puVar6 = puVar1;
                              do {
                                if (*puVar6 != *puVar5) goto LAB_00405fdf;
                                uVar8 = uVar8 - 4;
                                puVar5 = puVar5 + 1;
                                puVar6 = puVar6 + 1;
                              } while (3 < uVar8);
                              if (uVar8 == 0) {
LAB_0040603c:
                                iVar2 = 0;
                              }
                              else {
LAB_00405fdf:
                                iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                if (iVar3 == 0) {
                                  if (uVar8 == 1) goto LAB_0040603c;
                                  iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                          (uint)*(byte *)((int)puVar5 + 1);
                                  if (iVar3 == 0) {
                                    if (uVar8 == 2) goto LAB_0040603c;
                                    iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                            (uint)*(byte *)((int)puVar5 + 2);
                                    if (iVar3 == 0) {
                                      if ((uVar8 == 3) ||
                                         (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                  (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                      goto LAB_0040603c;
                                    }
                                  }
                                }
                                iVar2 = 1;
                                if (iVar3 < 1) {
                                  iVar2 = -1;
                                }
                              }
                              if (iVar2 == 0) {
                                FUN_0040a940(param_3,param_4,(uint)piVar4);
                              }
                              else {
                                uVar8 = 4;
                                puVar5 = (uint *)&DAT_0041644c;
                                puVar6 = puVar1;
                                do {
                                  if (*puVar6 != *puVar5) goto LAB_00406082;
                                  uVar8 = uVar8 - 4;
                                  puVar5 = puVar5 + 1;
                                  puVar6 = puVar6 + 1;
                                } while (3 < uVar8);
                                if (uVar8 == 0) {
LAB_004060df:
                                  iVar2 = 0;
                                }
                                else {
LAB_00406082:
                                  iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                  if (iVar3 == 0) {
                                    if (uVar8 == 1) goto LAB_004060df;
                                    iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                            (uint)*(byte *)((int)puVar5 + 1);
                                    if (iVar3 == 0) {
                                      if (uVar8 == 2) goto LAB_004060df;
                                      iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                              (uint)*(byte *)((int)puVar5 + 2);
                                      if (iVar3 == 0) {
                                        if ((uVar8 == 3) ||
                                           (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                    (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                        goto LAB_004060df;
                                      }
                                    }
                                  }
                                  iVar2 = 1;
                                  if (iVar3 < 1) {
                                    iVar2 = -1;
                                  }
                                }
                                if (iVar2 == 0) {
                                  FUN_0040ab30(param_3,param_4,(uint)piVar4);
                                }
                                else {
                                  uVar8 = 4;
                                  puVar5 = (uint *)&DAT_00416484;
                                  puVar6 = puVar1;
                                  do {
                                    if (*puVar6 != *puVar5) goto LAB_0040612c;
                                    uVar8 = uVar8 - 4;
                                    puVar5 = puVar5 + 1;
                                    puVar6 = puVar6 + 1;
                                  } while (3 < uVar8);
                                  if (uVar8 == 0) {
LAB_00406189:
                                    iVar2 = 0;
                                  }
                                  else {
LAB_0040612c:
                                    iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                    if (iVar3 == 0) {
                                      if (uVar8 == 1) goto LAB_00406189;
                                      iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                              (uint)*(byte *)((int)puVar5 + 1);
                                      if (iVar3 == 0) {
                                        if (uVar8 == 2) goto LAB_00406189;
                                        iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                (uint)*(byte *)((int)puVar5 + 2);
                                        if (iVar3 == 0) {
                                          if ((uVar8 == 3) ||
                                             (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                      (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0))
                                          goto LAB_00406189;
                                        }
                                      }
                                    }
                                    iVar2 = 1;
                                    if (iVar3 < 1) {
                                      iVar2 = -1;
                                    }
                                  }
                                  if (iVar2 == 0) {
                                    FUN_0040ace0(param_3,param_4,piVar4,unaff_EBP,unaff_EBX);
                                  }
                                  else {
                                    uVar8 = 4;
                                    puVar5 = (uint *)&DAT_00416494;
                                    puVar6 = puVar1;
                                    do {
                                      if (*puVar6 != *puVar5) goto LAB_004061cf;
                                      uVar8 = uVar8 - 4;
                                      puVar5 = puVar5 + 1;
                                      puVar6 = puVar6 + 1;
                                    } while (3 < uVar8);
                                    if (uVar8 == 0) {
LAB_0040622c:
                                      iVar2 = 0;
                                    }
                                    else {
LAB_004061cf:
                                      iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                      if (iVar3 == 0) {
                                        if (uVar8 == 1) goto LAB_0040622c;
                                        iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                                (uint)*(byte *)((int)puVar5 + 1);
                                        if (iVar3 == 0) {
                                          if (uVar8 == 2) goto LAB_0040622c;
                                          iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                  (uint)*(byte *)((int)puVar5 + 2);
                                          if (iVar3 == 0) {
                                            if ((uVar8 == 3) ||
                                               (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                        (uint)*(byte *)((int)puVar5 + 3), iVar3 == 0
                                               )) goto LAB_0040622c;
                                          }
                                        }
                                      }
                                      iVar2 = 1;
                                      if (iVar3 < 1) {
                                        iVar2 = -1;
                                      }
                                    }
                                    if (iVar2 == 0) {
                                      FUN_0040bcc0(param_3,param_4,piVar4,unaff_EBP,unaff_EBX);
                                    }
                                    else {
                                      uVar8 = 4;
                                      puVar5 = (uint *)&DAT_0041649c;
                                      puVar6 = puVar1;
                                      do {
                                        if (*puVar6 != *puVar5) goto LAB_00406272;
                                        uVar8 = uVar8 - 4;
                                        puVar5 = puVar5 + 1;
                                        puVar6 = puVar6 + 1;
                                      } while (3 < uVar8);
                                      if (uVar8 == 0) {
LAB_004062cf:
                                        iVar2 = 0;
                                      }
                                      else {
LAB_00406272:
                                        iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                        if (iVar3 == 0) {
                                          if (uVar8 == 1) goto LAB_004062cf;
                                          iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                                  (uint)*(byte *)((int)puVar5 + 1);
                                          if (iVar3 == 0) {
                                            if (uVar8 == 2) goto LAB_004062cf;
                                            iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                    (uint)*(byte *)((int)puVar5 + 2);
                                            if (iVar3 == 0) {
                                              if ((uVar8 == 3) ||
                                                 (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                          (uint)*(byte *)((int)puVar5 + 3),
                                                 iVar3 == 0)) goto LAB_004062cf;
                                            }
                                          }
                                        }
                                        iVar2 = 1;
                                        if (iVar3 < 1) {
                                          iVar2 = -1;
                                        }
                                      }
                                      if (iVar2 == 0) {
                                        FUN_0040bba0(param_3,param_4,(uint)piVar4,unaff_EBP,
                                                     unaff_EBX);
                                      }
                                      else {
                                        uVar8 = 4;
                                        puVar5 = (uint *)&DAT_004164a4;
                                        puVar6 = puVar1;
                                        do {
                                          if (*puVar6 != *puVar5) goto LAB_0040631c;
                                          uVar8 = uVar8 - 4;
                                          puVar5 = puVar5 + 1;
                                          puVar6 = puVar6 + 1;
                                        } while (3 < uVar8);
                                        if (uVar8 == 0) {
LAB_00406379:
                                          iVar2 = 0;
                                        }
                                        else {
LAB_0040631c:
                                          iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                          if (iVar3 == 0) {
                                            if (uVar8 == 1) goto LAB_00406379;
                                            iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                                    (uint)*(byte *)((int)puVar5 + 1);
                                            if (iVar3 == 0) {
                                              if (uVar8 == 2) goto LAB_00406379;
                                              iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                      (uint)*(byte *)((int)puVar5 + 2);
                                              if (iVar3 == 0) {
                                                if ((uVar8 == 3) ||
                                                   (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                            (uint)*(byte *)((int)puVar5 + 3),
                                                   iVar3 == 0)) goto LAB_00406379;
                                              }
                                            }
                                          }
                                          iVar2 = 1;
                                          if (iVar3 < 1) {
                                            iVar2 = -1;
                                          }
                                        }
                                        if (iVar2 == 0) {
                                          FUN_0040af00(param_3,param_4,(uint)piVar4,unaff_EBP,
                                                       unaff_EBX);
                                        }
                                        else {
                                          uVar8 = 4;
                                          puVar5 = (uint *)&DAT_004164ac;
                                          puVar6 = puVar1;
                                          do {
                                            if (*puVar6 != *puVar5) goto LAB_004063bf;
                                            uVar8 = uVar8 - 4;
                                            puVar5 = puVar5 + 1;
                                            puVar6 = puVar6 + 1;
                                          } while (3 < uVar8);
                                          if (uVar8 == 0) {
LAB_0040641c:
                                            iVar2 = 0;
                                          }
                                          else {
LAB_004063bf:
                                            iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                            if (iVar3 == 0) {
                                              if (uVar8 == 1) goto LAB_0040641c;
                                              iVar3 = (uint)*(byte *)((int)puVar6 + 1) -
                                                      (uint)*(byte *)((int)puVar5 + 1);
                                              if (iVar3 == 0) {
                                                if (uVar8 == 2) goto LAB_0040641c;
                                                iVar3 = (uint)*(byte *)((int)puVar6 + 2) -
                                                        (uint)*(byte *)((int)puVar5 + 2);
                                                if (iVar3 == 0) {
                                                  if ((uVar8 == 3) ||
                                                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) -
                                                              (uint)*(byte *)((int)puVar5 + 3),
                                                     iVar3 == 0)) goto LAB_0040641c;
                                                }
                                              }
                                            }
                                            iVar2 = 1;
                                            if (iVar3 < 1) {
                                              iVar2 = -1;
                                            }
                                          }
                                          if (iVar2 == 0) {
                                            FUN_0040bde0(param_3,param_4,piVar4,unaff_EBP,unaff_EBX)
                                            ;
                                          }
                                          else {
                                            FUN_0040bf40(param_3,param_4,piVar4,unaff_EBP,unaff_EBX)
                                            ;
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
          puVar5 = (uint *)&DAT_00416414;
          puVar6 = puVar1;
          do {
            if (*puVar6 != *puVar5) goto LAB_0040573d;
            uVar8 = uVar8 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar8);
          if (uVar8 == 0) {
LAB_0040579a:
            iVar2 = 0;
          }
          else {
LAB_0040573d:
            iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
            if (iVar3 == 0) {
              if (uVar8 == 1) goto LAB_0040579a;
              iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar3 == 0) {
                if (uVar8 == 2) goto LAB_0040579a;
                iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar3 == 0) {
                  if ((uVar8 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar3 == 0)) goto LAB_0040579a;
                }
              }
            }
            iVar2 = 1;
            if (iVar3 < 1) {
              iVar2 = -1;
            }
          }
          if (iVar2 == 0) {
            param_3[0x1a] = param_3[0x1a] | 4;
          }
          FUN_0040bf40(param_3,param_4,piVar4,unaff_EBP,unaff_EBX);
          uVar8 = 4;
          puVar5 = (uint *)&DAT_00416424;
          puVar6 = puVar1;
          do {
            if (*puVar6 != *puVar5) goto LAB_004057db;
            uVar8 = uVar8 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar8);
          if (uVar8 == 0) {
LAB_00405838:
            iVar2 = 0;
          }
          else {
LAB_004057db:
            iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
            if (iVar3 == 0) {
              if (uVar8 == 1) goto LAB_00405838;
              iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar3 == 0) {
                if (uVar8 == 2) goto LAB_00405838;
                iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar3 == 0) {
                  if ((uVar8 == 3) ||
                     (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar3 == 0)) goto LAB_00405838;
                }
              }
            }
            iVar2 = 1;
            if (iVar3 < 1) {
              iVar2 = -1;
            }
          }
          if (iVar2 == 0) {
            piVar7[0x1a] = piVar7[0x1a] | 2;
          }
          else {
            uVar8 = 4;
            puVar5 = (uint *)&DAT_00416414;
            puVar6 = puVar1;
            do {
              if (*puVar6 != *puVar5) goto LAB_0040586b;
              uVar8 = uVar8 - 4;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (3 < uVar8);
            if (uVar8 == 0) {
LAB_004058c8:
              iVar2 = 0;
            }
            else {
LAB_0040586b:
              iVar3 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
              if (iVar3 == 0) {
                if (uVar8 == 1) goto LAB_004058c8;
                iVar3 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                if (iVar3 == 0) {
                  if (uVar8 == 2) goto LAB_004058c8;
                  iVar3 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                  if (iVar3 == 0) {
                    if ((uVar8 == 3) ||
                       (iVar3 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                       iVar3 == 0)) goto LAB_004058c8;
                  }
                }
              }
              iVar2 = 1;
              if (iVar3 < 1) {
                iVar2 = -1;
              }
            }
            if (iVar2 == 0) {
              if ((piVar7[0x1a] & 1U) == 0) {
                FUN_00408740(piVar7,"Missing IHDR before IDAT");
                return;
              }
              if ((*(char *)((int)piVar7 + 0x126) == '\x03') && ((piVar7[0x1a] & 2U) == 0)) {
                FUN_00408740(piVar7,"Missing PLTE before IDAT");
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
  byte *pbVar6;
  void *extraout_ECX;
  byte *extraout_ECX_00;
  void *this_00;
  void *this_01;
  uint *puVar7;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *this_02;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  uint *puVar8;
  int iVar9;
  
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_00409a60(param_1);
    this = extraout_ECX;
  }
  pbVar6 = (byte *)CONCAT31((int3)((uint)this >> 8),7);
  if ((*(char *)((int)param_1 + 0x123) != '\0') && ((*(byte *)(param_1 + 0x1c) & 2) != 0)) {
    switch(*(undefined *)(param_1 + 0x49)) {
    case 0:
      if ((*(byte *)(param_1 + 0x39) & 7) != 0) {
        if (param_3 == (byte *)0x0) goto LAB_0040651d;
        uVar3 = 0xff;
LAB_00406513:
        FUN_00409130((int)param_1,param_3,uVar3);
        pbVar6 = extraout_ECX_00;
LAB_0040651d:
        FUN_0040c120(pbVar6,param_1);
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
        pbVar6 = param_3;
        if ((param_3 != (byte *)0x0) && ((param_1[0x39] & 4U) != 0)) {
          FUN_00409130((int)param_1,param_3,0xff);
          FUN_0040c120(this_00,param_1);
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
        pbVar6 = param_3;
        if ((param_3 != (byte *)0x0) && ((param_1[0x39] & 2U) != 0)) {
          FUN_00409130((int)param_1,param_3,0xff);
          FUN_0040c120(this_01,param_1);
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
          puVar7 = (uint *)&DAT_00416414;
          puVar8 = (uint *)(param_1 + 0x47);
          do {
            if (*puVar8 != *puVar7) goto LAB_004066dc;
            uVar3 = uVar3 - 4;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00406739:
            iVar4 = 0;
          }
          else {
LAB_004066dc:
            iVar9 = (uint)*(byte *)puVar8 - (uint)*(byte *)puVar7;
            if (iVar9 == 0) {
              if (uVar3 == 1) goto LAB_00406739;
              iVar9 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
              if (iVar9 == 0) {
                if (uVar3 == 2) goto LAB_00406739;
                iVar9 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                if (iVar9 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar9 = (uint)*(byte *)((int)puVar8 + 3) - (uint)*(byte *)((int)puVar7 + 3),
                     iVar9 == 0)) goto LAB_00406739;
                }
              }
            }
            iVar4 = 1;
            if (iVar9 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 != 0) {
            FUN_00408740(param_1,"Not enough image data");
          }
        } while (param_1[0x43] == 0);
      }
      param_1[0x1e] = param_1[0x2c];
      param_1[0x1d] = (int)(uint *)param_1[0x2b];
      if ((uint)param_1[0x43] < (uint)param_1[0x2c]) {
        param_1[0x1e] = param_1[0x43];
      }
      FUN_00408ca0(param_1,(uint *)param_1[0x2b],param_1[0x1e]);
      param_1[0x43] = param_1[0x43] - param_1[0x1e];
    }
    iVar9 = FUN_00412d50((uint **)(param_1 + 0x1d),1);
    if (iVar9 == 1) {
      if (((param_1[0x21] != 0) || (param_1[0x1e] != 0)) || (param_1[0x43] != 0)) {
        FUN_00408740(param_1,"Extra compressed data");
      }
      param_1[0x1a] = param_1[0x1a] | 8;
      param_1[0x1b] = param_1[0x1b] | 0x20;
      break;
    }
    if (iVar9 != 0) {
      pcVar5 = (char *)param_1[0x23];
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Decompression error";
      }
      FUN_00408740(param_1,pcVar5);
    }
  } while (param_1[0x21] != 0);
  iVar9 = param_1[0x38];
  *(undefined *)(param_1 + 0x42) = *(undefined *)((int)param_1 + 0x126);
  *(undefined *)((int)param_1 + 0x109) = *(undefined *)((int)param_1 + 0x127);
  bVar2 = *(byte *)((int)param_1 + 0x129);
  piVar1 = param_1 + 0x40;
  *(byte *)((int)param_1 + 0x10b) = bVar2;
  *piVar1 = iVar9;
  *(undefined *)((int)param_1 + 0x10a) = *(undefined *)((int)param_1 + 0x12a);
  if (bVar2 < 8) {
    uVar3 = (uint)bVar2 * iVar9 + 7 >> 3;
  }
  else {
    uVar3 = (uint)(bVar2 >> 3) * iVar9;
  }
  param_1[0x41] = uVar3;
  bVar2 = *(byte *)param_1[0x3b];
  if (bVar2 != 0) {
    FUN_00409860((int)param_1,(int)piVar1,(byte *)param_1[0x3b] + 1,(byte *)(param_1[0x3a] + 1),
                 (byte *)(uint)bVar2);
  }
  FUN_00408af0(param_1,(void *)param_1[0x3a],(void *)param_1[0x3b],param_1[0x36] + 1);
  this_02 = extraout_ECX_01;
  if (((*(byte *)(param_1 + 0x8c) & 4) != 0) && (*(char *)(param_1 + 0x8e) == '@')) {
    FUN_0040f880(piVar1,param_1[0x3b] + 1);
    this_02 = extraout_ECX_02;
  }
  if ((param_1[0x1c] != 0) || ((param_1[0x1b] & 0x400000U) != 0)) {
    FUN_00410530(param_1);
    this_02 = extraout_ECX_03;
  }
  if ((*(char *)((int)param_1 + 0x123) == '\0') || ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    if (param_4 != (byte *)0x0) {
      FUN_00409130((int)param_1,param_4,0xff);
      this_02 = extraout_ECX_06;
    }
    if (param_5 == (byte *)0x0) goto LAB_0040696c;
    uVar3 = 0xff;
    pbVar6 = param_5;
  }
  else {
    if (*(byte *)(param_1 + 0x49) < 6) {
      FUN_00409430((int)param_1);
      this_02 = extraout_ECX_04;
    }
    if (param_5 != (byte *)0x0) {
      FUN_00409130((int)param_1,param_5,(&DAT_00416540)[*(byte *)(param_1 + 0x49)]);
      this_02 = extraout_ECX_05;
    }
    if (param_4 == (byte *)0x0) goto LAB_0040696c;
    uVar3 = *(uint *)(&DAT_00416524 + (uint)*(byte *)(param_1 + 0x49) * 4);
    pbVar6 = param_4;
  }
  FUN_00409130((int)param_1,pbVar6,uVar3);
  this_02 = extraout_ECX_07;
LAB_0040696c:
  FUN_0040c120(this_02,param_1);
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
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  piVar4 = param_1;
  piVar5 = (int *)FUN_004109d0((int)param_1);
  iVar1 = param_1[0x33];
  param_1[0x34] = iVar1;
  iVar2 = iVar1;
  puVar3 = param_2;
  this = extraout_ECX;
  param_1 = piVar5;
  if (0 < (int)piVar5) {
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_004064b0(this,piVar4,*puVar3,(byte *)0x0,unaff_EDI,unaff_ESI);
        puVar3 = puVar3 + 1;
        this = extraout_ECX_00;
      }
      param_1 = (int *)((int)param_1 + -1);
      iVar2 = iVar1;
      puVar3 = param_2;
    } while (param_1 != (int *)0x0);
  }
  return;
}



void __cdecl FUN_00406a20(int *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int unaff_EBP;
  uint unaff_ESI;
  int iVar7;
  int unaff_EDI;
  undefined local_4 [4];
  
  FUN_00409d50(param_1,0);
  puVar1 = (uint *)(param_1 + 0x47);
  do {
    FUN_004088c0(param_1);
    piVar2 = (int *)FUN_00409d20(param_1,local_4);
    FUN_00407dd0((int)param_1);
    FUN_00408ca0(param_1,puVar1,4);
    uVar3 = 4;
    puVar5 = (uint *)&DAT_0041640c;
    puVar6 = puVar1;
    do {
      if (*puVar6 != *puVar5) goto LAB_00406a98;
      uVar3 = uVar3 - 4;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (3 < uVar3);
    if (uVar3 == 0) {
LAB_00406af5:
      iVar4 = 0;
    }
    else {
LAB_00406a98:
      iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
      if (iVar7 == 0) {
        if (uVar3 == 1) goto LAB_00406af5;
        iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
        if (iVar7 == 0) {
          if (uVar3 == 2) goto LAB_00406af5;
          iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
          if (iVar7 == 0) {
            if ((uVar3 == 3) ||
               (iVar7 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
               iVar7 == 0)) goto LAB_00406af5;
          }
        }
      }
      iVar4 = 1;
      if (iVar7 < 1) {
        iVar4 = -1;
      }
    }
    if (iVar4 == 0) {
      FUN_00409e10(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
    }
    else {
      uVar3 = 4;
      puVar5 = (uint *)&DAT_0041641c;
      puVar6 = puVar1;
      do {
        if (*puVar6 != *puVar5) goto LAB_00406b38;
        uVar3 = uVar3 - 4;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (3 < uVar3);
      if (uVar3 == 0) {
LAB_00406b95:
        iVar4 = 0;
      }
      else {
LAB_00406b38:
        iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
        if (iVar7 == 0) {
          if (uVar3 == 1) goto LAB_00406b95;
          iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
          if (iVar7 == 0) {
            if (uVar3 == 2) goto LAB_00406b95;
            iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
            if (iVar7 == 0) {
              if ((uVar3 == 3) ||
                 (iVar7 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                 iVar7 == 0)) goto LAB_00406b95;
            }
          }
        }
        iVar4 = 1;
        if (iVar7 < 1) {
          iVar4 = -1;
        }
      }
      if (iVar4 == 0) {
        FUN_0040a120(param_1);
      }
      else {
        iVar7 = FUN_004082a0((int)param_1,(int *)puVar1);
        puVar5 = (uint *)&DAT_00416414;
        uVar3 = 4;
        puVar6 = puVar1;
        if (iVar7 == 0) {
          do {
            if (*puVar6 != *puVar5) goto LAB_00406d30;
            uVar3 = uVar3 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00406d8d:
            iVar4 = 0;
          }
          else {
LAB_00406d30:
            iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
            if (iVar7 == 0) {
              if (uVar3 == 1) goto LAB_00406d8d;
              iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar7 == 0) {
                if (uVar3 == 2) goto LAB_00406d8d;
                iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar7 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar7 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar7 == 0)) goto LAB_00406d8d;
                }
              }
            }
            iVar4 = 1;
            if (iVar7 < 1) {
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
            puVar5 = (uint *)&DAT_00416424;
            puVar6 = puVar1;
            do {
              if (*puVar6 != *puVar5) goto LAB_00406de8;
              uVar3 = uVar3 - 4;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (3 < uVar3);
            if (uVar3 == 0) {
LAB_00406e45:
              iVar4 = 0;
            }
            else {
LAB_00406de8:
              iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
              if (iVar7 == 0) {
                if (uVar3 == 1) goto LAB_00406e45;
                iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                if (iVar7 == 0) {
                  if (uVar3 == 2) goto LAB_00406e45;
                  iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                  if (iVar7 == 0) {
                    if ((uVar3 == 3) ||
                       (iVar7 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                       iVar7 == 0)) goto LAB_00406e45;
                  }
                }
              }
              iVar4 = 1;
              if (iVar7 < 1) {
                iVar4 = -1;
              }
            }
            if (iVar4 == 0) {
              FUN_00409f90(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI,unaff_EBP);
            }
            else {
              uVar3 = 4;
              puVar5 = (uint *)&DAT_0041642c;
              puVar6 = puVar1;
              do {
                if (*puVar6 != *puVar5) goto LAB_00406e88;
                uVar3 = uVar3 - 4;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              } while (3 < uVar3);
              if (uVar3 == 0) {
LAB_00406ee5:
                iVar4 = 0;
              }
              else {
LAB_00406e88:
                iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                if (iVar7 == 0) {
                  if (uVar3 == 1) goto LAB_00406ee5;
                  iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                  if (iVar7 == 0) {
                    if (uVar3 == 2) goto LAB_00406ee5;
                    iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                    if (iVar7 == 0) {
                      if ((uVar3 == 3) ||
                         (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                  (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0)) goto LAB_00406ee5;
                    }
                  }
                }
                iVar4 = 1;
                if (iVar7 < 1) {
                  iVar4 = -1;
                }
              }
              if (iVar4 == 0) {
                FUN_0040b150(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
              }
              else {
                uVar3 = 4;
                puVar5 = (uint *)&DAT_00416434;
                puVar6 = puVar1;
                do {
                  if (*puVar6 != *puVar5) goto LAB_00406f28;
                  uVar3 = uVar3 - 4;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                } while (3 < uVar3);
                if (uVar3 == 0) {
LAB_00406f85:
                  iVar4 = 0;
                }
                else {
LAB_00406f28:
                  iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                  if (iVar7 == 0) {
                    if (uVar3 == 1) goto LAB_00406f85;
                    iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                    if (iVar7 == 0) {
                      if (uVar3 == 2) goto LAB_00406f85;
                      iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                      if (iVar7 == 0) {
                        if ((uVar3 == 3) ||
                           (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                    (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                        goto LAB_00406f85;
                      }
                    }
                  }
                  iVar4 = 1;
                  if (iVar7 < 1) {
                    iVar4 = -1;
                  }
                }
                if (iVar4 == 0) {
                  FUN_0040a450(param_1,param_2,(uint)piVar2);
                }
                else {
                  uVar3 = 4;
                  puVar5 = (uint *)&DAT_0041643c;
                  puVar6 = puVar1;
                  do {
                    if (*puVar6 != *puVar5) goto LAB_00406fc8;
                    uVar3 = uVar3 - 4;
                    puVar5 = puVar5 + 1;
                    puVar6 = puVar6 + 1;
                  } while (3 < uVar3);
                  if (uVar3 == 0) {
LAB_00407025:
                    iVar4 = 0;
                  }
                  else {
LAB_00406fc8:
                    iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                    if (iVar7 == 0) {
                      if (uVar3 == 1) goto LAB_00407025;
                      iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                      if (iVar7 == 0) {
                        if (uVar3 == 2) goto LAB_00407025;
                        iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                        if (iVar7 == 0) {
                          if ((uVar3 == 3) ||
                             (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                      (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                          goto LAB_00407025;
                        }
                      }
                    }
                    iVar4 = 1;
                    if (iVar7 < 1) {
                      iVar4 = -1;
                    }
                  }
                  if (iVar4 == 0) {
                    FUN_0040a170(param_1,param_2,(uint)piVar2);
                  }
                  else {
                    uVar3 = 4;
                    puVar5 = (uint *)&DAT_00416444;
                    puVar6 = puVar1;
                    do {
                      if (*puVar6 != *puVar5) goto LAB_00407068;
                      uVar3 = uVar3 - 4;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    } while (3 < uVar3);
                    if (uVar3 == 0) {
LAB_004070c5:
                      iVar4 = 0;
                    }
                    else {
LAB_00407068:
                      iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                      if (iVar7 == 0) {
                        if (uVar3 == 1) goto LAB_004070c5;
                        iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
                        if (iVar7 == 0) {
                          if (uVar3 == 2) goto LAB_004070c5;
                          iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                  (uint)*(byte *)((int)puVar5 + 2);
                          if (iVar7 == 0) {
                            if ((uVar3 == 3) ||
                               (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                        (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                            goto LAB_004070c5;
                          }
                        }
                      }
                      iVar4 = 1;
                      if (iVar7 < 1) {
                        iVar4 = -1;
                      }
                    }
                    if (iVar4 == 0) {
                      FUN_0040b390(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                    }
                    else {
                      uVar3 = 4;
                      puVar5 = (uint *)&DAT_0041645c;
                      puVar6 = puVar1;
                      do {
                        if (*puVar6 != *puVar5) goto LAB_00407108;
                        uVar3 = uVar3 - 4;
                        puVar5 = puVar5 + 1;
                        puVar6 = puVar6 + 1;
                      } while (3 < uVar3);
                      if (uVar3 == 0) {
LAB_00407165:
                        iVar4 = 0;
                      }
                      else {
LAB_00407108:
                        iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                        if (iVar7 == 0) {
                          if (uVar3 == 1) goto LAB_00407165;
                          iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                  (uint)*(byte *)((int)puVar5 + 1);
                          if (iVar7 == 0) {
                            if (uVar3 == 2) goto LAB_00407165;
                            iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                    (uint)*(byte *)((int)puVar5 + 2);
                            if (iVar7 == 0) {
                              if ((uVar3 == 3) ||
                                 (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                          (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                              goto LAB_00407165;
                            }
                          }
                        }
                        iVar4 = 1;
                        if (iVar7 < 1) {
                          iVar4 = -1;
                        }
                      }
                      if (iVar4 == 0) {
                        FUN_0040b650(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                      }
                      else {
                        uVar3 = 4;
                        puVar5 = (uint *)&DAT_00416464;
                        puVar6 = puVar1;
                        do {
                          if (*puVar6 != *puVar5) goto LAB_004071a8;
                          uVar3 = uVar3 - 4;
                          puVar5 = puVar5 + 1;
                          puVar6 = puVar6 + 1;
                        } while (3 < uVar3);
                        if (uVar3 == 0) {
LAB_00407205:
                          iVar4 = 0;
                        }
                        else {
LAB_004071a8:
                          iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                          if (iVar7 == 0) {
                            if (uVar3 == 1) goto LAB_00407205;
                            iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                    (uint)*(byte *)((int)puVar5 + 1);
                            if (iVar7 == 0) {
                              if (uVar3 == 2) goto LAB_00407205;
                              iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                      (uint)*(byte *)((int)puVar5 + 2);
                              if (iVar7 == 0) {
                                if ((uVar3 == 3) ||
                                   (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                            (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                                goto LAB_00407205;
                              }
                            }
                          }
                          iVar4 = 1;
                          if (iVar7 < 1) {
                            iVar4 = -1;
                          }
                        }
                        if (iVar4 == 0) {
                          FUN_0040b780(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                        }
                        else {
                          uVar3 = 4;
                          puVar5 = (uint *)&DAT_0041646c;
                          puVar6 = puVar1;
                          do {
                            if (*puVar6 != *puVar5) goto LAB_00407248;
                            uVar3 = uVar3 - 4;
                            puVar5 = puVar5 + 1;
                            puVar6 = puVar6 + 1;
                          } while (3 < uVar3);
                          if (uVar3 == 0) {
LAB_004072a5:
                            iVar4 = 0;
                          }
                          else {
LAB_00407248:
                            iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                            if (iVar7 == 0) {
                              if (uVar3 == 1) goto LAB_004072a5;
                              iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                      (uint)*(byte *)((int)puVar5 + 1);
                              if (iVar7 == 0) {
                                if (uVar3 == 2) goto LAB_004072a5;
                                iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                        (uint)*(byte *)((int)puVar5 + 2);
                                if (iVar7 == 0) {
                                  if ((uVar3 == 3) ||
                                     (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                              (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                                  goto LAB_004072a5;
                                }
                              }
                            }
                            iVar4 = 1;
                            if (iVar7 < 1) {
                              iVar4 = -1;
                            }
                          }
                          if (iVar4 == 0) {
                            FUN_0040b9e0(param_1,param_2,piVar2);
                          }
                          else {
                            uVar3 = 4;
                            puVar5 = (uint *)&DAT_00416474;
                            puVar6 = puVar1;
                            do {
                              if (*puVar6 != *puVar5) goto LAB_004072e8;
                              uVar3 = uVar3 - 4;
                              puVar5 = puVar5 + 1;
                              puVar6 = puVar6 + 1;
                            } while (3 < uVar3);
                            if (uVar3 == 0) {
LAB_00407345:
                              iVar4 = 0;
                            }
                            else {
LAB_004072e8:
                              iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                              if (iVar7 == 0) {
                                if (uVar3 == 1) goto LAB_00407345;
                                iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                        (uint)*(byte *)((int)puVar5 + 1);
                                if (iVar7 == 0) {
                                  if (uVar3 == 2) goto LAB_00407345;
                                  iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                          (uint)*(byte *)((int)puVar5 + 2);
                                  if (iVar7 == 0) {
                                    if ((uVar3 == 3) ||
                                       (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                                    goto LAB_00407345;
                                  }
                                }
                              }
                              iVar4 = 1;
                              if (iVar7 < 1) {
                                iVar4 = -1;
                              }
                            }
                            if (iVar4 == 0) {
                              FUN_0040b530(param_1,param_2,(uint)piVar2,unaff_EDI,unaff_ESI);
                            }
                            else {
                              uVar3 = 4;
                              puVar5 = (uint *)&DAT_0041647c;
                              puVar6 = puVar1;
                              do {
                                if (*puVar6 != *puVar5) goto LAB_00407388;
                                uVar3 = uVar3 - 4;
                                puVar5 = puVar5 + 1;
                                puVar6 = puVar6 + 1;
                              } while (3 < uVar3);
                              if (uVar3 == 0) {
LAB_004073e5:
                                iVar4 = 0;
                              }
                              else {
LAB_00407388:
                                iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                if (iVar7 == 0) {
                                  if (uVar3 == 1) goto LAB_004073e5;
                                  iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                          (uint)*(byte *)((int)puVar5 + 1);
                                  if (iVar7 == 0) {
                                    if (uVar3 == 2) goto LAB_004073e5;
                                    iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                            (uint)*(byte *)((int)puVar5 + 2);
                                    if (iVar7 == 0) {
                                      if ((uVar3 == 3) ||
                                         (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                  (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                                      goto LAB_004073e5;
                                    }
                                  }
                                }
                                iVar4 = 1;
                                if (iVar7 < 1) {
                                  iVar4 = -1;
                                }
                              }
                              if (iVar4 == 0) {
                                FUN_0040a2e0(param_1,param_2,(uint)piVar2);
                              }
                              else {
                                uVar3 = 4;
                                puVar5 = (uint *)&DAT_0041648c;
                                puVar6 = puVar1;
                                do {
                                  if (*puVar6 != *puVar5) goto LAB_00407428;
                                  uVar3 = uVar3 - 4;
                                  puVar5 = puVar5 + 1;
                                  puVar6 = puVar6 + 1;
                                } while (3 < uVar3);
                                if (uVar3 == 0) {
LAB_00407485:
                                  iVar4 = 0;
                                }
                                else {
LAB_00407428:
                                  iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                  if (iVar7 == 0) {
                                    if (uVar3 == 1) goto LAB_00407485;
                                    iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                            (uint)*(byte *)((int)puVar5 + 1);
                                    if (iVar7 == 0) {
                                      if (uVar3 == 2) goto LAB_00407485;
                                      iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                              (uint)*(byte *)((int)puVar5 + 2);
                                      if (iVar7 == 0) {
                                        if ((uVar3 == 3) ||
                                           (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                    (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                                        goto LAB_00407485;
                                      }
                                    }
                                  }
                                  iVar4 = 1;
                                  if (iVar7 < 1) {
                                    iVar4 = -1;
                                  }
                                }
                                if (iVar4 == 0) {
                                  FUN_0040a940(param_1,param_2,(uint)piVar2);
                                }
                                else {
                                  uVar3 = 4;
                                  puVar5 = (uint *)&DAT_0041644c;
                                  puVar6 = puVar1;
                                  do {
                                    if (*puVar6 != *puVar5) goto LAB_004074c8;
                                    uVar3 = uVar3 - 4;
                                    puVar5 = puVar5 + 1;
                                    puVar6 = puVar6 + 1;
                                  } while (3 < uVar3);
                                  if (uVar3 == 0) {
LAB_00407525:
                                    iVar4 = 0;
                                  }
                                  else {
LAB_004074c8:
                                    iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                    if (iVar7 == 0) {
                                      if (uVar3 == 1) goto LAB_00407525;
                                      iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                              (uint)*(byte *)((int)puVar5 + 1);
                                      if (iVar7 == 0) {
                                        if (uVar3 == 2) goto LAB_00407525;
                                        iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                                (uint)*(byte *)((int)puVar5 + 2);
                                        if (iVar7 == 0) {
                                          if ((uVar3 == 3) ||
                                             (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                      (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0))
                                          goto LAB_00407525;
                                        }
                                      }
                                    }
                                    iVar4 = 1;
                                    if (iVar7 < 1) {
                                      iVar4 = -1;
                                    }
                                  }
                                  if (iVar4 == 0) {
                                    FUN_0040ab30(param_1,param_2,(uint)piVar2);
                                  }
                                  else {
                                    uVar3 = 4;
                                    puVar5 = (uint *)&DAT_00416484;
                                    puVar6 = puVar1;
                                    do {
                                      if (*puVar6 != *puVar5) goto LAB_00407568;
                                      uVar3 = uVar3 - 4;
                                      puVar5 = puVar5 + 1;
                                      puVar6 = puVar6 + 1;
                                    } while (3 < uVar3);
                                    if (uVar3 == 0) {
LAB_004075c5:
                                      iVar4 = 0;
                                    }
                                    else {
LAB_00407568:
                                      iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                      if (iVar7 == 0) {
                                        if (uVar3 == 1) goto LAB_004075c5;
                                        iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                                (uint)*(byte *)((int)puVar5 + 1);
                                        if (iVar7 == 0) {
                                          if (uVar3 == 2) goto LAB_004075c5;
                                          iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                                  (uint)*(byte *)((int)puVar5 + 2);
                                          if (iVar7 == 0) {
                                            if ((uVar3 == 3) ||
                                               (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                        (uint)*(byte *)((int)puVar5 + 3), iVar7 == 0
                                               )) goto LAB_004075c5;
                                          }
                                        }
                                      }
                                      iVar4 = 1;
                                      if (iVar7 < 1) {
                                        iVar4 = -1;
                                      }
                                    }
                                    if (iVar4 == 0) {
                                      FUN_0040ace0(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
                                    }
                                    else {
                                      uVar3 = 4;
                                      puVar5 = (uint *)&DAT_00416494;
                                      puVar6 = puVar1;
                                      do {
                                        if (*puVar6 != *puVar5) goto LAB_00407608;
                                        uVar3 = uVar3 - 4;
                                        puVar5 = puVar5 + 1;
                                        puVar6 = puVar6 + 1;
                                      } while (3 < uVar3);
                                      if (uVar3 == 0) {
LAB_00407665:
                                        iVar4 = 0;
                                      }
                                      else {
LAB_00407608:
                                        iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                        if (iVar7 == 0) {
                                          if (uVar3 == 1) goto LAB_00407665;
                                          iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                                  (uint)*(byte *)((int)puVar5 + 1);
                                          if (iVar7 == 0) {
                                            if (uVar3 == 2) goto LAB_00407665;
                                            iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                                    (uint)*(byte *)((int)puVar5 + 2);
                                            if (iVar7 == 0) {
                                              if ((uVar3 == 3) ||
                                                 (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                          (uint)*(byte *)((int)puVar5 + 3),
                                                 iVar7 == 0)) goto LAB_00407665;
                                            }
                                          }
                                        }
                                        iVar4 = 1;
                                        if (iVar7 < 1) {
                                          iVar4 = -1;
                                        }
                                      }
                                      if (iVar4 == 0) {
                                        FUN_0040bcc0(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
                                      }
                                      else {
                                        uVar3 = 4;
                                        puVar5 = (uint *)&DAT_0041649c;
                                        puVar6 = puVar1;
                                        do {
                                          if (*puVar6 != *puVar5) goto LAB_004076a8;
                                          uVar3 = uVar3 - 4;
                                          puVar5 = puVar5 + 1;
                                          puVar6 = puVar6 + 1;
                                        } while (3 < uVar3);
                                        if (uVar3 == 0) {
LAB_00407705:
                                          iVar4 = 0;
                                        }
                                        else {
LAB_004076a8:
                                          iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                          if (iVar7 == 0) {
                                            if (uVar3 == 1) goto LAB_00407705;
                                            iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                                    (uint)*(byte *)((int)puVar5 + 1);
                                            if (iVar7 == 0) {
                                              if (uVar3 == 2) goto LAB_00407705;
                                              iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                                      (uint)*(byte *)((int)puVar5 + 2);
                                              if (iVar7 == 0) {
                                                if ((uVar3 == 3) ||
                                                   (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                            (uint)*(byte *)((int)puVar5 + 3),
                                                   iVar7 == 0)) goto LAB_00407705;
                                              }
                                            }
                                          }
                                          iVar4 = 1;
                                          if (iVar7 < 1) {
                                            iVar4 = -1;
                                          }
                                        }
                                        if (iVar4 == 0) {
                                          FUN_0040bba0(param_1,param_2,(uint)piVar2,unaff_EDI,
                                                       unaff_ESI);
                                        }
                                        else {
                                          uVar3 = 4;
                                          puVar5 = (uint *)&DAT_004164a4;
                                          puVar6 = puVar1;
                                          do {
                                            if (*puVar6 != *puVar5) goto LAB_00407748;
                                            uVar3 = uVar3 - 4;
                                            puVar5 = puVar5 + 1;
                                            puVar6 = puVar6 + 1;
                                          } while (3 < uVar3);
                                          if (uVar3 == 0) {
LAB_004077a5:
                                            iVar4 = 0;
                                          }
                                          else {
LAB_00407748:
                                            iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                            if (iVar7 == 0) {
                                              if (uVar3 == 1) goto LAB_004077a5;
                                              iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                                      (uint)*(byte *)((int)puVar5 + 1);
                                              if (iVar7 == 0) {
                                                if (uVar3 == 2) goto LAB_004077a5;
                                                iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                                        (uint)*(byte *)((int)puVar5 + 2);
                                                if (iVar7 == 0) {
                                                  if ((uVar3 == 3) ||
                                                     (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                              (uint)*(byte *)((int)puVar5 + 3),
                                                     iVar7 == 0)) goto LAB_004077a5;
                                                }
                                              }
                                            }
                                            iVar4 = 1;
                                            if (iVar7 < 1) {
                                              iVar4 = -1;
                                            }
                                          }
                                          if (iVar4 == 0) {
                                            FUN_0040af00(param_1,param_2,(uint)piVar2,unaff_EDI,
                                                         unaff_ESI);
                                          }
                                          else {
                                            uVar3 = 4;
                                            puVar5 = (uint *)&DAT_004164ac;
                                            puVar6 = puVar1;
                                            do {
                                              if (*puVar6 != *puVar5) goto LAB_004077ec;
                                              uVar3 = uVar3 - 4;
                                              puVar5 = puVar5 + 1;
                                              puVar6 = puVar6 + 1;
                                            } while (3 < uVar3);
                                            if (uVar3 == 0) {
LAB_00407849:
                                              iVar4 = 0;
                                            }
                                            else {
LAB_004077ec:
                                              iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
                                              if (iVar7 == 0) {
                                                if (uVar3 == 1) goto LAB_00407849;
                                                iVar7 = (uint)*(byte *)((int)puVar6 + 1) -
                                                        (uint)*(byte *)((int)puVar5 + 1);
                                                if (iVar7 == 0) {
                                                  if (uVar3 == 2) goto LAB_00407849;
                                                  iVar7 = (uint)*(byte *)((int)puVar6 + 2) -
                                                          (uint)*(byte *)((int)puVar5 + 2);
                                                  if (iVar7 == 0) {
                                                    if ((uVar3 == 3) ||
                                                       (iVar7 = (uint)*(byte *)((int)puVar6 + 3) -
                                                                (uint)*(byte *)((int)puVar5 + 3),
                                                       iVar7 == 0)) goto LAB_00407849;
                                                  }
                                                }
                                              }
                                              iVar4 = 1;
                                              if (iVar7 < 1) {
                                                iVar4 = -1;
                                              }
                                            }
                                            if (iVar4 == 0) {
                                              FUN_0040bde0(param_1,param_2,piVar2,unaff_EDI,
                                                           unaff_ESI);
                                            }
                                            else {
                                              FUN_0040bf40(param_1,param_2,piVar2,unaff_EDI,
                                                           unaff_ESI);
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
            if (*puVar6 != *puVar5) goto LAB_00406be8;
            uVar3 = uVar3 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00406c45:
            iVar4 = 0;
          }
          else {
LAB_00406be8:
            iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
            if (iVar7 == 0) {
              if (uVar3 == 1) goto LAB_00406c45;
              iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar7 == 0) {
                if (uVar3 == 2) goto LAB_00406c45;
                iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar7 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar7 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar7 == 0)) goto LAB_00406c45;
                }
              }
            }
            iVar4 = 1;
            if (iVar7 < 1) {
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
          FUN_0040bf40(param_1,param_2,piVar2,unaff_EDI,unaff_ESI);
          uVar3 = 4;
          puVar5 = (uint *)&DAT_00416424;
          puVar6 = puVar1;
          do {
            if (*puVar6 != *puVar5) goto LAB_00406ca8;
            uVar3 = uVar3 - 4;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00406d05:
            iVar4 = 0;
          }
          else {
LAB_00406ca8:
            iVar7 = (uint)*(byte *)puVar6 - (uint)*(byte *)puVar5;
            if (iVar7 == 0) {
              if (uVar3 == 1) goto LAB_00406d05;
              iVar7 = (uint)*(byte *)((int)puVar6 + 1) - (uint)*(byte *)((int)puVar5 + 1);
              if (iVar7 == 0) {
                if (uVar3 == 2) goto LAB_00406d05;
                iVar7 = (uint)*(byte *)((int)puVar6 + 2) - (uint)*(byte *)((int)puVar5 + 2);
                if (iVar7 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar7 = (uint)*(byte *)((int)puVar6 + 3) - (uint)*(byte *)((int)puVar5 + 3),
                     iVar7 == 0)) goto LAB_00406d05;
                }
              }
            }
            iVar4 = 1;
            if (iVar7 < 1) {
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
  puVar6 = param_1;
  puVar8 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
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
  puVar6 = local_40;
  puVar8 = param_1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
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
  undefined4 local_c;
  undefined local_8;
  undefined local_7;
  undefined local_6;
  undefined local_5;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_c;
  local_7 = 10;
  local_5 = 10;
  local_c._0_1_ = 0x89;
  local_c._1_1_ = 0x50;
  local_c._2_1_ = 0x4e;
  local_c._3_1_ = 0x47;
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
    ___security_check_cookie_4(local_4 ^ (uint)&local_c);
    return;
  }
  if (8 < param_2 + param_3) {
    param_3 = 8 - param_2;
  }
  piVar1 = (int *)((int)&local_c + param_2);
  piVar2 = (int *)(param_2 + param_1);
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*piVar2 != *piVar1) goto LAB_00407cd0;
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
      ___security_check_cookie_4(local_4 ^ (uint)&local_c);
      return;
    }
  }
LAB_00407d58:
  ___security_check_cookie_4(local_4 ^ (uint)&local_c);
  return;
}



void * __cdecl FUN_00407d70(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = param_1[0x1b];
  if ((uint)(0xffffffff / (ulonglong)param_3) < param_2) {
    FUN_004087f0((int)param_1,"Potential overflow in png_zalloc()");
    return (void *)0x0;
  }
  param_1[0x1b] = uVar1 | 0x100000;
  pvVar2 = FUN_00408ba0(param_1,param_2 * param_3);
  param_1[0x1b] = uVar1;
  return pvVar2;
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
    FUN_00408ad0(param_1,param_2);
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
  else if ((*(uint *)(param_1 + 0x6c) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_00414630(*(undefined4 *)(param_1 + 0x110),param_2,param_3);
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
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x4000) != 0) {
      if (param_4 == -1) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 0x30)) {
          do {
            FUN_00407e80(param_1,param_2,0x4000,iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 0x30));
        }
        FUN_00408bf0(param_1,*(void **)(param_2 + 0x38));
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
      }
      else if (*(int *)(param_2 + 0x38) != 0) {
        pvVar1 = *(void **)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10);
        if (pvVar1 != (void *)0x0) {
          FUN_00408bf0(param_1,pvVar1);
          *(undefined4 *)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10) = 0;
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
        iVar3 = 0;
        if (*(char *)(param_2 + 0xb5) != '\0') {
          do {
            FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xb0) + iVar3 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xb0) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)*(byte *)(param_2 + 0xb5));
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
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xd8)) {
            do {
              FUN_00407e80(param_1,param_2,0x20,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xd8));
          }
          FUN_00408bf0(param_1,*(void **)(param_2 + 0xd4));
          *(undefined4 *)(param_2 + 0xd4) = 0;
          *(undefined4 *)(param_2 + 0xd8) = 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      }
      else if (*(int *)(param_2 + 0xd4) != 0) {
        iVar3 = param_4 * 0x10;
        FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xd4) + iVar3));
        FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xd4) + 8 + iVar3));
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3) = 0;
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + 8 + iVar3) = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x200) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xc0) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xc0)) {
            do {
              FUN_00407e80(param_1,param_2,0x200,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xc0));
          }
          FUN_00408bf0(param_1,*(void **)(param_2 + 0xbc));
          *(undefined4 *)(param_2 + 0xbc) = 0;
          *(undefined4 *)(param_2 + 0xc0) = 0;
        }
      }
      else if (*(int *)(param_2 + 0xbc) != 0) {
        FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14));
        *(undefined4 *)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14) = 0;
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
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 4)) {
          do {
            FUN_00408bf0(param_1,*(void **)(*(int *)(param_2 + 0xf8) + iVar3 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xf8) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 4));
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



undefined __cdecl FUN_004082a0(int param_1,int *param_2)

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
      return *(undefined *)(piVar7 + 1);
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



void __fastcall FUN_004083f0(undefined4 param_1,char *param_2,int param_3)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *_Dest;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = 0;
  do {
    bVar1 = *(byte *)(iVar5 + 0x11c + param_3);
    uVar4 = (uint)bVar1;
    iVar5 = iVar5 + 1;
    if ((uVar4 - 0x41 < 0x3a) && ((uVar4 < 0x5b || (0x60 < uVar4)))) {
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
  if (param_2 == (char *)0x0) {
    *(undefined *)(iVar2 + in_EAX) = 0;
    return;
  }
  *(undefined *)(iVar2 + in_EAX) = 0x3a;
  *(undefined *)(iVar3 + 2 + in_EAX) = 0x20;
  _Dest = (char *)(in_EAX + iVar3 + 3);
  strncpy(_Dest,param_2,0x3f);
  _Dest[0x3f] = '\0';
  return;
}



void FUN_00408490(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  FILE *pFVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_28;
  char *local_24;
  char *local_20;
  int *local_1c;
  undefined4 local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_28;
  local_1c = param_1;
  if (*param_2 == '#') {
    local_28 = local_14 + (3 - (int)param_2);
    local_20 = local_14 + -(int)param_2;
    local_18 = local_14 + (2 - (int)param_2);
    pcVar5 = (char *)0x0;
    local_24 = local_14 + (4 - (int)param_2);
    do {
      cVar2 = param_2[(int)pcVar5];
      cVar1 = (param_2 + 1)[(int)pcVar5];
      pcVar6 = param_2 + (int)pcVar5;
      pcVar6[(int)local_20] = cVar1;
      if (cVar2 == ' ') break;
      cVar2 = (param_2 + 2)[(int)pcVar5];
      pcVar6[(int)(local_14 + (1 - (int)param_2))] = cVar2;
      if (cVar1 == ' ') {
        pcVar5 = pcVar5 + 1;
        break;
      }
      cVar1 = (param_2 + 3)[(int)pcVar5];
      pcVar6[(int)local_18] = cVar1;
      if (cVar2 == ' ') {
        pcVar5 = pcVar5 + 2;
        break;
      }
      cVar2 = (param_2 + 4)[(int)pcVar5];
      pcVar6[(int)local_28] = cVar2;
      if (cVar1 == ' ') {
        pcVar5 = pcVar5 + 3;
        break;
      }
      pcVar6[(int)local_24] = (param_2 + 5)[(int)pcVar5];
      if (cVar2 == ' ') {
        pcVar5 = pcVar5 + 4;
        break;
      }
      pcVar5 = pcVar5 + 5;
    } while ((int)pcVar5 < 0xf);
    if (pcVar5 + -2 < (char *)0xd) {
      pcVar3 = param_2 + (int)pcVar5;
      param_2 = local_14;
      pcVar5[(int)&local_18 + 3] = '\0';
      pcVar6 = "libpng error no. %s: %s\n";
      pcVar5 = pcVar3;
    }
    else {
      pcVar6 = "libpng error: %s, offset=%d\n";
    }
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,pcVar6,param_2,pcVar5);
  }
  else {
    pcVar5 = "libpng error: %s\n";
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,pcVar5,param_2);
  }
                    // WARNING: Subroutine does not return
  longjmp(local_1c,1);
}



void __cdecl FUN_004085c0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  char *_Format;
  char *pcVar6;
  char *local_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_24;
  if (*param_1 != '#') {
    pcVar6 = "libpng warning: %s\n";
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,pcVar6,param_1);
    ___security_check_cookie_4(local_4 ^ (uint)&local_24);
    return;
  }
  local_24 = local_14 + (3 - (int)param_1);
  local_18 = local_14 + -(int)param_1;
  local_20 = local_14 + (2 - (int)param_1);
  iVar5 = 0;
  local_1c = local_14 + (4 - (int)param_1);
  do {
    cVar2 = param_1[iVar5];
    cVar1 = param_1[iVar5 + 1];
    param_1[(int)(local_18 + iVar5)] = cVar1;
    if (cVar2 == ' ') break;
    cVar2 = param_1[iVar5 + 2];
    param_1[(int)(local_14 + iVar5 + (1 - (int)param_1))] = cVar2;
    if (cVar1 == ' ') {
      iVar5 = iVar5 + 1;
      break;
    }
    cVar1 = param_1[iVar5 + 3];
    param_1[(int)(local_20 + iVar5)] = cVar1;
    if (cVar2 == ' ') {
      iVar5 = iVar5 + 2;
      break;
    }
    cVar2 = param_1[iVar5 + 4];
    param_1[(int)(local_24 + iVar5)] = cVar2;
    if (cVar1 == ' ') {
      iVar5 = iVar5 + 3;
      break;
    }
    param_1[(int)(local_1c + iVar5)] = param_1[iVar5 + 5];
    if (cVar2 == ' ') {
      iVar5 = iVar5 + 4;
      break;
    }
    iVar5 = iVar5 + 5;
  } while (iVar5 < 0xf);
  if (0xc < iVar5 - 2U) {
    pcVar6 = "libpng warning: %s\n";
    pFVar4 = __iob_func();
    fprintf(pFVar4 + 2,pcVar6,param_1);
    ___security_check_cookie_4(local_4 ^ (uint)&local_24);
    return;
  }
  pcVar3 = param_1 + iVar5;
  pcVar6 = local_14;
  _Format = "libpng warning no. %s: %s\n";
  local_14[iVar5 + -1] = '\0';
  pFVar4 = __iob_func();
  fprintf(pFVar4 + 2,_Format,pcVar6,pcVar3);
  ___security_check_cookie_4(local_4 ^ (uint)&local_24);
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



void __thiscall FUN_00408850(void *this,int *param_1,char *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  char acStack_b0 [72];
  undefined4 uStack_68;
  char local_58 [4];
  int iStack_54;
  char *pcStack_50;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_58;
  FUN_004083f0(this,param_2,(int)param_1);
  uStack_68 = 0x40887f;
  FUN_00408740(param_1,local_58);
  uVar1 = DAT_0041c340 ^ (uint)acStack_b0;
  FUN_004083f0(extraout_ECX,pcStack_50,iStack_54);
  FUN_004087f0(iStack_54,acStack_b0);
  ___security_check_cookie_4(uVar1 ^ (uint)acStack_b0);
  return;
}



void __thiscall FUN_00408880(void *this,int param_1,char *param_2)

{
  char local_58 [84];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)local_58;
  FUN_004083f0(this,param_2,param_1);
  FUN_004087f0(param_1,local_58);
  ___security_check_cookie_4(local_4 ^ (uint)local_58);
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
    *(undefined **)(param_1 + 0x50) = &LAB_004088e0;
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
      ___security_check_cookie_4(local_4 ^ (uint)local_270);
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
  ___security_check_cookie_4(local_4 ^ (uint)local_270);
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
      ___security_check_cookie_4(local_4 ^ (uint)local_270);
      return;
    }
    free(param_1);
  }
  ___security_check_cookie_4(local_4 ^ (uint)local_270);
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



void __cdecl FUN_00408ad0(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
  }
  return;
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
    FUN_00408ad0(param_1,param_2);
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



bool __cdecl FUN_00408cd0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x47) & 0x20) == 0) {
    if ((param_1[0x1b] & 0x800U) == 0) goto LAB_00408d00;
  }
  else if ((param_1[0x1b] & 0x300U) != 0x300) goto LAB_00408d00;
  bVar1 = false;
LAB_00408d00:
  FUN_004088c0(param_1);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_00408c50((undefined *)&param_1);
  return iVar3 != piVar2[0x44];
}



void __cdecl
FUN_00408d40(int *param_1,int param_2,void *param_3,int param_4,size_t param_5,size_t *param_6)

{
  int iVar1;
  size_t *psVar2;
  size_t _Size;
  void *_Dst;
  char *pcVar3;
  void *local_48;
  size_t *local_44;
  void *local_40;
  size_t *local_3c;
  void *local_38;
  uint *puStack_34;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_48;
  local_3c = param_6;
  local_48 = param_3;
  if (param_2 != 0) {
    sprintf((char *)&local_38,"Unknown zTXt compression type %d",param_2);
    FUN_004087f0((int)param_1,(char *)&local_38);
    *(undefined *)(param_5 + (int)local_48) = 0;
    *local_3c = param_5;
    ___security_check_cookie_4(local_4 ^ (uint)&local_48);
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
    pcVar3 = "Incomplete compressed datastream in %s chunk";
  }
  else {
    do {
      local_44 = (size_t *)FUN_00412d50((uint **)(param_1 + 0x1d),1);
      if ((local_44 != (size_t *)0x0) && (local_44 != (size_t *)0x1)) {
        pcVar3 = (char *)param_1[0x23];
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_Error_decoding_compressed_text_0041c000;
        }
        FUN_004087f0((int)param_1,pcVar3);
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
      pcVar3 = "Buffer error in compressed datastream in %s chunk";
    }
    else {
      if (psVar2 != (size_t *)0xfffffffd) goto LAB_00408fe6;
      pcVar3 = "Data error in compressed datastream in %s chunk";
    }
  }
  sprintf((char *)&local_38,pcVar3,param_1 + 0x47);
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
  *puStack_34 = _Size;
  local_44 = (size_t *)0x409088;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&local_40);
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
  FUN_00408850(param_2,param_1,"invalid chunk type");
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
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
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
    }
  }
  else if (bVar2 == 2) {
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
  else if (bVar2 == 4) {
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
  uint uVar8;
  byte *pbVar9;
  void *_Dst;
  byte *pbVar10;
  undefined auStack_30 [3];
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
  
  local_4 = DAT_0041c340 ^ (uint)auStack_30;
  iVar3 = *(int *)(param_1 + 0xec) + 1;
  uVar8 = *(uint *)(param_1 + 0x70);
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
      pbVar10 = (byte *)((uVar6 >> 3) + iVar3);
      if ((uVar8 & 0x10000) == 0) {
        local_2c = (byte *)(7 - (uVar2 - 1 & 7));
        pbVar4 = (byte *)(7 - (uVar5 - 1 & 7));
        local_20 = (byte *)0x0;
        pbVar9 = (byte *)0x7;
        local_28 = 1;
      }
      else {
        local_2c = (byte *)(uVar2 - 1 & 7);
        pbVar4 = (byte *)(uVar5 - 1 & 7);
        local_20 = (byte *)0x7;
        pbVar9 = (byte *)0x0;
        local_28 = 0xffffffff;
      }
      local_c[0] = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *local_24;
          uVar8 = local_10;
          if (0 < (int)local_10) {
            do {
              local_18 = uVar8;
              *pbVar10 = (byte)(0x7f7f >> (7 - (byte)pbVar4 & 0x1f)) & *pbVar10 |
                         (bVar1 >> ((byte)local_2c & 0x1f) & 1) << ((byte)pbVar4 & 0x1f);
              if (pbVar4 == pbVar9) {
                pbVar10 = pbVar10 + -1;
                pbVar4 = local_20;
              }
              else {
                pbVar4 = pbVar4 + local_28;
              }
              uVar8 = local_18 - 1;
            } while (local_18 - 1 != 0);
            local_18 = 0;
          }
          if (local_2c == pbVar9) {
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
    else if (bVar1 == 2) {
      local_2c = (byte *)((uVar2 - 1 >> 2) + iVar3);
      pbVar10 = (byte *)((uVar6 >> 2) + iVar3);
      if ((uVar8 & 0x10000) == 0) {
        pbVar4 = (byte *)((3 - (uVar2 - 1 & 3)) * 2);
        pbVar9 = (byte *)((3 - (uVar5 - 1 & 3)) * 2);
        local_24 = (byte *)0x0;
        local_20 = (byte *)0x6;
        local_1c = 2;
      }
      else {
        pbVar4 = (byte *)(uVar2 * 2 - 1 & 6);
        pbVar9 = (byte *)(uVar5 * 2 - 1 & 6);
        local_24 = (byte *)0x6;
        local_20 = (byte *)0x0;
        local_1c = 0xfffffffe;
      }
      local_28 = 0;
      if (uVar2 != 0) {
        do {
          local_2d = *local_2c >> ((byte)pbVar4 & 0x1f) & 3;
          uVar8 = local_10;
          if (0 < (int)local_10) {
            do {
              local_18 = uVar8;
              *pbVar10 = (byte)(0x3f3f >> (6 - (byte)pbVar9 & 0x1f)) & *pbVar10 |
                         local_2d << ((byte)pbVar9 & 0x1f);
              if (pbVar9 == local_20) {
                pbVar10 = pbVar10 + -1;
                pbVar9 = local_24;
              }
              else {
                pbVar9 = pbVar9 + local_1c;
              }
              local_18 = local_18 - 1;
              uVar8 = local_18;
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
    else if (bVar1 == 4) {
      local_24 = (byte *)((uVar2 - 1 >> 1) + iVar3);
      pbVar10 = (byte *)((uVar6 >> 1) + iVar3);
      if ((uVar8 & 0x10000) == 0) {
        pbVar4 = (byte *)((uVar2 - 1 & 1) * -4 + 4);
        pbVar9 = (byte *)((uVar5 - 1 & 1) * -4 + 4);
        pbVar7 = (byte *)0x4;
        local_2c = (byte *)0x0;
        local_20 = (byte *)0x4;
      }
      else {
        pbVar4 = (byte *)(uVar2 * -4 - 1 & 4);
        pbVar9 = (byte *)(uVar5 * -4 - 1 & 4);
        local_2c = (byte *)0x4;
        pbVar7 = (byte *)0x0;
        local_20 = (byte *)0xfffffffc;
      }
      local_18 = 0;
      if (uVar2 != 0) {
        do {
          local_2d = *local_24 >> ((byte)pbVar4 & 0x1f) & 0xf;
          uVar8 = local_10;
          if (0 < (int)local_10) {
            do {
              local_28 = uVar8;
              *pbVar10 = (byte)(0xf0f >> (4 - (byte)pbVar9 & 0x1f)) & *pbVar10 |
                         local_2d << ((byte)pbVar9 & 0x1f);
              if (pbVar9 == pbVar7) {
                pbVar10 = pbVar10 + -1;
                pbVar9 = local_2c;
              }
              else {
                pbVar9 = pbVar9 + (int)local_20;
              }
              local_28 = local_28 - 1;
              uVar8 = local_28;
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
      uVar8 = (uint)(bVar1 >> 3);
      _Src = (void *)((uVar2 - 1) * uVar8 + iVar3);
      _Dst = (void *)(uVar6 * uVar8 + iVar3);
      local_28 = 0;
      if (uVar2 != 0) {
        do {
          memcpy(local_c,_Src,uVar8);
          uVar6 = local_10;
          if (0 < (int)local_10) {
            do {
              memcpy(_Dst,local_c,uVar8);
              _Dst = (void *)((int)_Dst - uVar8);
              uVar6 = uVar6 - 1;
              uVar5 = local_1c;
            } while (uVar6 != 0);
          }
          local_28 = local_28 + 1;
          _Src = (void *)((int)_Src - uVar8);
        } while (local_28 < *local_14);
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
  ___security_check_cookie_4(local_4 ^ (uint)auStack_30);
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
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int local_10;
  int local_c;
  
  switch(param_5) {
  case (byte *)0x0:
    break;
  case (byte *)0x1:
    uVar3 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    pbVar10 = param_3 + uVar3;
    if (uVar3 < *(uint *)(param_2 + 4)) {
      pbVar8 = pbVar10 + -uVar3;
      iVar4 = *(uint *)(param_2 + 4) - uVar3;
      do {
        *pbVar10 = *pbVar10 + *pbVar8;
        pbVar10 = pbVar10 + 1;
        pbVar8 = pbVar8 + 1;
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
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    iVar6 = *(int *)(param_2 + 4) - iVar4;
    pbVar10 = param_3;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pbVar10 = *pbVar10 + (*param_4 >> 1);
      param_4 = param_4 + 1;
      pbVar10 = pbVar10 + 1;
    }
    if (iVar6 != 0) {
      do {
        *pbVar10 = *pbVar10 + (char)(((uint)*param_3 + (uint)*param_4) / 2);
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        pbVar10 = pbVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    break;
  case (byte *)0x4:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    local_c = *(int *)(param_2 + 4) - iVar4;
    param_5 = param_3;
    pbVar10 = param_4;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_5 = *param_5 + *pbVar10;
      pbVar10 = pbVar10 + 1;
      param_5 = param_5 + 1;
    }
    if (local_c != 0) {
      do {
        bVar7 = *param_3;
        bVar1 = *pbVar10;
        param_3 = param_3 + 1;
        bVar2 = *param_4;
        param_4 = param_4 + 1;
        iVar4 = (uint)bVar1 - (uint)bVar2;
        pbVar10 = pbVar10 + 1;
        iVar6 = (uint)bVar7 - (uint)bVar2;
        local_10 = iVar4;
        if (iVar4 < 0) {
          local_10 = -iVar4;
        }
        iVar9 = iVar6;
        if (iVar6 < 0) {
          iVar9 = -iVar6;
        }
        iVar4 = iVar4 + iVar6;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (((iVar9 < local_10) || (iVar4 < local_10)) && (bVar7 = bVar2, iVar9 <= iVar4)) {
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
    else if (cVar2 == '\0') {
      if (uVar3 < 8) {
        uVar3 = 8;
      }
      if (*(short *)((int)param_1 + 0x11a) != 0) {
        uVar3 = uVar3 * 2;
      }
    }
    else if ((cVar2 == '\x02') && (*(short *)((int)param_1 + 0x11a) != 0)) {
      uVar3 = (uVar3 * 4) / 3;
    }
  }
  if ((uVar5 & 0x8000) != 0) {
    cVar2 = *(char *)((int)param_1 + 0x126);
    if (cVar2 == '\x03') {
      uVar3 = 0x20;
    }
    else if (cVar2 == '\0') {
      uVar3 = ((8 < uVar3) - 1 & 0xfffffff0) + 0x20;
    }
    else if (cVar2 == '\x02') {
      uVar3 = ((0x20 < uVar3) - 1 & 0xffffffe0) + 0x40;
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
      uVar3 = ((0x10 < (int)uVar3) - 1 & 0xffffffe0) + 0x40;
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
  param_1[0x94] = (int)pvVar4;
  param_1[0x3b] = (int)pvVar4 + 0x20;
  if (param_1[0x36] == -1) {
    FUN_00408740(param_1,"Row has too many bytes to allocate in memory.");
  }
  pvVar4 = FUN_00408ba0(param_1,param_1[0x36] + 1);
  param_1[0x3a] = (int)pvVar4;
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
  bool bVar2;
  undefined3 extraout_var;
  void *this;
  
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
  bVar2 = FUN_00408cd0(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x47) & 0x20) == 0) || ((param_1[0x1b] & 0x200U) != 0)) &&
     (((*(byte *)(param_1 + 0x47) & 0x20) != 0 || ((param_1[0x1b] & 0x400U) == 0)))) {
    FUN_00408850(this,param_1,"CRC error");
    return 1;
  }
  FUN_00408880(this,(int)param_1,"CRC error");
  return 1;
}



void __cdecl
FUN_00409e10(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  byte unaff_retaddr;
  undefined auStack_20 [4];
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  uint *puStack_10;
  uint uStack_c;
  undefined auStack_8 [4];
  undefined4 local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_20;
  local_18 = param_2;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    FUN_00408740(param_1,"Out of place IHDR");
  }
  if (param_5 != 0xd) {
    FUN_00408740(param_1,"Invalid IHDR chunk");
  }
  param_1[0x1a] = param_1[0x1a] | 1;
  FUN_00408ca0(param_1,&uStack_c,0xd);
  FUN_00409d50(param_1,0);
  uVar2 = FUN_00409d20(param_1,(undefined *)&uStack_c);
  uVar3 = FUN_00409d20(param_1,auStack_8);
  local_18 = (uint)local_4._3_1_;
  uStack_14 = (uint)unaff_retaddr;
  *(byte *)((int)param_1 + 0x123) = unaff_retaddr;
  *(byte *)(param_1 + 0x8e) = local_4._3_1_;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(char *)((int)param_1 + 0x127) = (char)local_4;
  *(byte *)((int)param_1 + 0x126) = local_4._1_1_;
  *(byte *)(param_1 + 0x98) = local_4._2_1_;
  switch((uint)local_4._1_1_) {
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
  FUN_004115e0(param_1,puStack_10,uVar2,uVar3,local_4 & 0xff,(uint)local_4._1_1_,uStack_14,
               (uint)local_4._2_1_,local_18,unaff_EBP,unaff_EBX);
  uStack_1c = 0x409f65;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&local_18);
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
  undefined uStack_2f4;
  undefined uStack_2f3;
  undefined uStack_2f2;
  undefined auStack_2f0 [2];
  undefined auStack_2ee [750];
  
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
  if ((0x300 < param_5) || (param_5 != (param_5 / 3) * 3)) {
    if (*(byte *)((int)param_1 + 0x126) != 3) {
      FUN_004087f0((int)param_1,"Invalid palette chunk");
      FUN_00409d50(param_1,param_5);
      return;
    }
    FUN_00408740(param_1,"Invalid palette chunk");
  }
  iVar2 = (int)param_5 / 3;
  if (0 < iVar2) {
    puVar5 = auStack_2ee;
    iVar4 = iVar2;
    do {
      FUN_00408ca0(param_1,(uint *)&uStack_2f4,3);
      puVar5[-2] = uStack_2f4;
      puVar5[-1] = uStack_2f3;
      *puVar5 = uStack_2f2;
      puVar5 = puVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00409d50(param_1,0);
  FUN_00411a50(param_1,param_6,auStack_2f0,iVar2);
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
  int iVar4;
  FILE *pFVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
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
  uVar1 = param_3;
  iVar3 = param_2;
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
     ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
    FUN_004087f0((int)piVar2,"Duplicate gAMA chunk");
    FUN_00409d50(piVar2,param_3);
    return;
  }
  if (param_3 != 4) {
    FUN_004087f0((int)piVar2,"Incorrect gAMA chunk length");
    FUN_00409d50(piVar2,uVar1);
    return;
  }
  FUN_00408ca0(piVar2,(uint *)&param_1,4);
  iVar4 = FUN_00409d50(piVar2,0);
  if (iVar4 == 0) {
    iVar4 = FUN_00408c50((undefined *)&param_1);
    if (iVar4 == 0) {
      FUN_004087f0((int)piVar2,"Ignoring gAMA chunk with gamma=0");
      return;
    }
    if (((*(uint *)(iVar3 + 8) & 0x800) != 0) && ((iVar4 < 45000 || (46000 < iVar4)))) {
      FUN_004087f0((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
      _Format = "gamma = (%d/100000)\n";
      pFVar5 = __iob_func();
      fprintf(pFVar5 + 2,_Format);
      return;
    }
    piVar2[0x57] = (int)((float)iVar4 / 100000.0);
    FUN_00411420(extraout_ECX,extraout_EDX,(int)piVar2,iVar3,(double)((float)iVar4 / 100000.0));
    FUN_004114a0((int)piVar2,iVar3,iVar4);
  }
  return;
}



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
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
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
  FUN_00408ca0(param_1,&uStack_7c,4);
  uStack_64 = FUN_00408c50((undefined *)&uStack_7c);
  FUN_00408ca0(param_1,&uStack_7c,4);
  uStack_68 = FUN_00408c50((undefined *)&uStack_7c);
  if (((uStack_64 < 0x13881) && (uStack_68 < 0x13881)) && (uStack_68 + uStack_64 < 0x186a1)) {
    FUN_00408ca0(param_1,&uStack_7c,4);
    uStack_6c = FUN_00408c50((undefined *)&uStack_7c);
    FUN_00408ca0(param_1,&uStack_7c,4);
    uStack_70 = FUN_00408c50((undefined *)&uStack_7c);
    if (((80000 < uStack_6c) || (80000 < uStack_70)) || (100000 < uStack_70 + uStack_6c)) {
      FUN_004087f0((int)param_1,"Invalid cHRM red point");
      FUN_00409d50(param_1,0x10);
      return;
    }
    FUN_00408ca0(param_1,&uStack_7c,4);
    uStack_74 = FUN_00408c50((undefined *)&uStack_7c);
    FUN_00408ca0(param_1,&uStack_7c,4);
    uStack_78 = FUN_00408c50((undefined *)&uStack_7c);
    if (((80000 < uStack_74) || (80000 < uStack_78)) || (100000 < uStack_78 + uStack_74)) {
      FUN_004087f0((int)param_1,"Invalid cHRM green point");
      FUN_00409d50(param_1,8);
      return;
    }
    FUN_00408ca0(param_1,&uStack_7c,4);
    uVar1 = FUN_00408c50((undefined *)&uStack_7c);
    fStack_5c = (float)uVar1;
    FUN_00408ca0(param_1,&uStack_7c,4);
    uVar2 = FUN_00408c50((undefined *)&uStack_7c);
    if (((uVar1 < 0x13881) && (uVar2 < 0x13881)) && (uVar2 + uVar1 < 0x186a1)) {
      fStack_44 = (float)uStack_64 / 100000.0;
      fStack_48 = (float)uStack_68 / 100000.0;
      fStack_4c = (float)uStack_6c / 100000.0;
      fStack_50 = (float)uStack_70 / 100000.0;
      fStack_54 = (float)uStack_74 / 100000.0;
      fStack_58 = (float)uStack_78 / 100000.0;
      fStack_5c = (float)(int)fStack_5c / 100000.0;
      fStack_60 = (float)uVar2 / 100000.0;
      if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
        FUN_00410ef0(extraout_ECX,extraout_EDX,(int)param_1,param_2,(double)fStack_44,
                     (double)fStack_48,(double)fStack_4c,(double)fStack_50,(double)fStack_54,
                     (double)fStack_58,(double)fStack_5c,(double)fStack_60);
        FUN_00411230((int)param_1,param_2,uStack_64,uStack_68,uStack_6c,uStack_70,uStack_74,
                     uStack_78,uVar1,uVar2);
        FUN_00409d50(param_1,0);
        return;
      }
      if (((((2000 < uStack_64 - 0x763e) || (2000 < uStack_68 - 0x7c9c)) ||
           ((2000 < uStack_6c - 63000 ||
            ((((2000 < uStack_70 - 32000 || (2000 < uStack_74 - 29000)) ||
              (2000 < uStack_78 - 59000)) || (((int)uVar1 < 14000 || (16000 < (int)uVar1)))))))) ||
          ((int)uVar2 < 5000)) || (7000 < (int)uVar2)) {
        FUN_004087f0((int)param_1,"Ignoring incorrect cHRM value when sRGB is also present");
        dVar8 = (double)fStack_50;
        dVar7 = (double)fStack_4c;
        dVar6 = (double)fStack_48;
        dVar5 = (double)fStack_44;
        pcVar4 = "wx=%f, wy=%f, rx=%f, ry=%f\n";
        pFVar3 = __iob_func();
        fprintf(pFVar3 + 2,pcVar4,dVar5,dVar6,dVar7,dVar8);
        dVar8 = (double)fStack_60;
        dVar7 = (double)fStack_5c;
        dVar6 = (double)fStack_58;
        dVar5 = (double)fStack_54;
        pcVar4 = "gx=%f, gy=%f, bx=%f, by=%f\n";
        pFVar3 = __iob_func();
        fprintf(pFVar3 + 2,pcVar4,dVar5,dVar6,dVar7,dVar8);
      }
      FUN_00409d50(param_1,0);
      return;
    }
    fStack_60 = (float)uVar2;
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
  int *piVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  uint uVar5;
  char *_Format;
  
  piVar1 = param_1;
  uVar5 = param_1[0x1a];
  if ((uVar5 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid sRGB after IDAT");
      FUN_00409d50(piVar1,param_3);
      return;
    }
    if ((uVar5 & 2) != 0) {
      FUN_004087f0((int)param_1,"Out of place sRGB chunk");
    }
  }
  uVar5 = param_3;
  iVar2 = param_2;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
    FUN_004087f0((int)piVar1,"Duplicate sRGB chunk");
    FUN_00409d50(piVar1,param_3);
    return;
  }
  if (param_3 != 1) {
    FUN_004087f0((int)piVar1,"Incorrect sRGB chunk length");
    FUN_00409d50(piVar1,uVar5);
    return;
  }
  FUN_00408ca0(piVar1,(uint *)&param_1,1);
  iVar3 = FUN_00409d50(piVar1,0);
  if (iVar3 == 0) {
    uVar5 = (uint)param_1 & 0xff;
    if (3 < uVar5) {
      FUN_004087f0((int)piVar1,"Unknown sRGB intent");
      return;
    }
    if (((*(byte *)(iVar2 + 8) & 1) != 0) &&
       ((*(int *)(iVar2 + 0xfc) < 45000 || (46000 < *(int *)(iVar2 + 0xfc))))) {
      FUN_004087f0((int)piVar1,"Ignoring incorrect gAMA value when sRGB is also present");
      iVar3 = piVar1[0x8d];
      _Format = "incorrect gamma=(%d/100000)\n";
      pFVar4 = __iob_func();
      fprintf(pFVar4 + 2,_Format,iVar3);
    }
    if (((*(byte *)(iVar2 + 8) & 4) != 0) &&
       (((((*(int *)(iVar2 + 0x100) < 0x763e || (0x7e0e < *(int *)(iVar2 + 0x100))) ||
          (*(int *)(iVar2 + 0x104) < 0x7c9c)) ||
         ((((0x846c < *(int *)(iVar2 + 0x104) || (*(int *)(iVar2 + 0x108) < 63000)) ||
           ((65000 < *(int *)(iVar2 + 0x108) ||
            ((*(int *)(iVar2 + 0x10c) < 32000 || (34000 < *(int *)(iVar2 + 0x10c))))))) ||
          (*(int *)(iVar2 + 0x110) < 29000)))) ||
        (((((31000 < *(int *)(iVar2 + 0x110) || (*(int *)(iVar2 + 0x114) < 59000)) ||
           (61000 < *(int *)(iVar2 + 0x114))) ||
          ((*(int *)(iVar2 + 0x118) < 14000 || (16000 < *(int *)(iVar2 + 0x118))))) ||
         ((*(int *)(iVar2 + 0x11c) < 5000 || (7000 < *(int *)(iVar2 + 0x11c))))))))) {
      FUN_004087f0((int)piVar1,"Ignoring incorrect cHRM value when sRGB is also present");
    }
    FUN_00411b30((int)piVar1,iVar2,(char)uVar5);
  }
  return;
}



void __cdecl FUN_0040ab30(int *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  
  piVar4 = param_1;
  uVar9 = param_1[0x1a];
  if ((uVar9 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before iCCP");
  }
  else {
    if ((uVar9 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid iCCP after IDAT");
      FUN_00409d50(piVar4,param_3);
      return;
    }
    if ((uVar9 & 2) != 0) {
      FUN_004087f0((int)param_1,"Out of place iCCP chunk");
    }
  }
  uVar9 = param_3;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x1000) != 0)) {
    FUN_004087f0((int)piVar4,"Duplicate iCCP chunk");
    FUN_00409d50(piVar4,param_3);
    return;
  }
  puVar6 = (uint *)FUN_00408ba0(piVar4,param_3 + 1);
  FUN_00408ca0(piVar4,puVar6,uVar9);
  iVar7 = FUN_00409d50(piVar4,0);
  if (iVar7 != 0) {
    FUN_00408bf0((int)piVar4,puVar6);
    return;
  }
  *(byte *)((int)puVar6 + uVar9) = 0;
  cVar2 = *(char *)puVar6;
  puVar11 = puVar6;
  while (cVar2 != '\0') {
    puVar11 = (uint *)((int)puVar11 + 1);
    cVar2 = *(char *)puVar11;
  }
  if ((byte *)((int)puVar6 + uVar9) <= (byte *)((int)puVar11 + 1)) {
    FUN_00408bf0((int)piVar4,puVar6);
    FUN_004087f0((int)piVar4,"Malformed iCCP chunk");
    return;
  }
  bVar5 = *(byte *)((int)puVar11 + 1);
  if (bVar5 != 0) {
    FUN_004087f0((int)piVar4,"Ignoring nonzero compression type in iCCP chunk");
    bVar5 = 0;
  }
  piVar12 = (int *)((int)puVar11 + (2 - (int)puVar6));
  pcVar8 = (char *)FUN_00408d40(piVar4,(uint)bVar5,puVar6,uVar9,(size_t)piVar12,(size_t *)&param_1);
  uVar9 = (int)param_1 - (int)piVar12;
  if ((piVar12 <= param_1) && (3 < uVar9)) {
    pcVar1 = (char *)((int)piVar12 + (int)pcVar8);
    uVar10 = CONCAT31(CONCAT21(CONCAT11(*(char *)((int)piVar12 + (int)pcVar8),pcVar1[1]),pcVar1[2]),
                      pcVar1[3]);
    if ((uVar9 <= uVar10) && (bVar3 = uVar9 < uVar10, uVar10 = uVar9, bVar3)) {
      FUN_00408bf0((int)piVar4,pcVar8);
      FUN_004087f0((int)piVar4,"Ignoring truncated iCCP profile.\n");
      return;
    }
    FUN_00411c10(piVar4,param_2,pcVar8,bVar5,pcVar1,uVar10);
    FUN_00408bf0((int)piVar4,pcVar8);
    return;
  }
  FUN_00408bf0((int)piVar4,pcVar8);
  FUN_004087f0((int)piVar4,"Profile size field missing from iCCP chunk");
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
  void *pvVar8;
  short *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint *puVar9;
  byte *pbVar10;
  uint *puStack_8;
  char cStack_4;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before sPLT");
  }
  else if ((param_1[0x1a] & 4U) != 0) {
    FUN_004087f0((int)param_1,"Invalid sPLT after IDAT");
    FUN_00409d50(param_1,(uint)param_3);
    return;
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
  puVar9 = puVar4;
  while (cVar2 != '\0') {
    puVar9 = (uint *)((int)puVar9 + 1);
    cVar2 = *(char *)puVar9;
  }
  if ((char *)(param_5 + (int)puVar4) < (char *)((int)puVar9 + 1)) {
    FUN_00408bf0((int)param_1,puVar4);
    FUN_004087f0((int)param_1,"malformed sPLT chunk");
    return;
  }
  cStack_4 = *(char *)((int)puVar9 + 1);
  pbVar10 = (byte *)((int)puVar9 + 2);
  iVar6 = (int)puVar4 + (param_5 - (int)pbVar10);
  iVar5 = (uint)(cStack_4 != '\b') * 4 + 6;
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
  pvVar8 = (void *)FUN_00408c20(param_1,uVar7 * 10);
  if (pvVar8 == (void *)0x0) {
    FUN_004087f0((int)param_1,"sPLT chunk requires too much memory");
    return;
  }
  iVar5 = 0;
  if (0 < (int)uVar7) {
    iVar6 = 0;
    do {
      puVar1 = (ushort *)(iVar6 + (int)pvVar8);
      if (cStack_4 == '\b') {
        *puVar1 = (ushort)*pbVar10;
        puVar1[1] = (ushort)pbVar10[1];
        puVar1[2] = (ushort)pbVar10[2];
        puVar1[3] = (ushort)pbVar10[3];
        pbVar10 = pbVar10 + 4;
      }
      else {
        sVar3 = FUN_00408c80(pbVar10);
        *extraout_EDX = sVar3;
        sVar3 = FUN_00408c80(pbVar10 + 2);
        *(short *)(extraout_EDX_00 + 2) = sVar3;
        sVar3 = FUN_00408c80(pbVar10 + 4);
        *(short *)(extraout_EDX_01 + 4) = sVar3;
        sVar3 = FUN_00408c80(pbVar10 + 6);
        *(short *)(extraout_EDX_02 + 6) = sVar3;
        pbVar10 = pbVar10 + 8;
      }
      sVar3 = FUN_00408c80(pbVar10);
      iVar5 = iVar5 + 1;
      *(short *)(extraout_EDX_03 + 8) = sVar3;
      pbVar10 = pbVar10 + 2;
      iVar6 = iVar6 + 10;
      param_1 = param_3;
    } while (iVar5 < (int)uVar7);
  }
  puStack_8 = puVar4;
  FUN_00411fc0(param_1,param_4,(char **)&puStack_8,1);
  FUN_00408bf0((int)param_1,puVar4);
  FUN_00408bf0((int)param_1,pvVar8);
  return;
}



void __cdecl FUN_0040af00(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined auStack_110 [4];
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  byte abStack_100 [4];
  uint auStack_fc [62];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_110;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before tRNS");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid tRNS after IDAT");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_110);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate tRNS chunk");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_110);
      return;
    }
  }
  cVar1 = *(char *)((int)param_1 + 0x126);
  if (cVar1 == '\0') {
    if (param_5 == 2) {
      FUN_00408ca0(param_1,&uStack_108,2);
      *(undefined2 *)((int)param_1 + 0x11a) = 1;
      sVar2 = FUN_00408c80((byte *)&uStack_108);
      *(short *)(param_1 + 0x65) = sVar2;
LAB_0040b0d3:
      iVar3 = FUN_00409d50(param_1,0);
      if (iVar3 == 0) {
        FUN_00411f30(param_1,param_2,auStack_fc,(uint)*(ushort *)((int)param_1 + 0x11a),param_1 + 99
                    );
        uStack_10c = 0x40b111;
        ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_108);
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
        FUN_00408ca0(param_1,&uStack_104,6);
        *(undefined2 *)((int)param_1 + 0x11a) = 1;
        sVar2 = FUN_00408c80((byte *)&uStack_104);
        *(short *)((int)param_1 + 0x18e) = sVar2;
        sVar2 = FUN_00408c80((byte *)((int)&uStack_104 + 2));
        *(short *)(param_1 + 100) = sVar2;
        sVar2 = FUN_00408c80(abStack_100);
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
        FUN_00408ca0(param_1,auStack_fc,param_5);
        *(short *)((int)param_1 + 0x11a) = (short)param_5;
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
  uStack_10c = 0x40b145;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_108);
  return;
}



void __cdecl FUN_0040b150(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined auStack_c [4];
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_c;
  uVar2 = param_1[0x1a];
  if ((uVar2 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before bKGD");
  }
  else {
    if ((uVar2 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid bKGD after IDAT");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_c);
      return;
    }
    if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((uVar2 & 2) == 0)) {
      FUN_004087f0((int)param_1,"Missing PLTE before bKGD");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_c);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate bKGD chunk");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_c);
      return;
    }
  }
  if (*(byte *)((int)param_1 + 0x126) == 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(byte *)((int)param_1 + 0x126) & 2 | 1) * 2;
  }
  if (param_5 != uVar2) {
    FUN_004087f0((int)param_1,"Incorrect bKGD chunk length");
    FUN_00409d50(param_1,param_5);
    uStack_8 = 0x40b26d;
    ___security_check_cookie_4((uint)param_1 ^ (uint)&local_4);
    return;
  }
  FUN_00408ca0(param_1,&local_4,uVar2);
  iVar3 = FUN_00409d50(param_1,0);
  if (iVar3 == 0) {
    if (*(byte *)((int)param_1 + 0x126) == 3) {
      *(byte *)(param_1 + 0x4e) = (byte)local_4;
      if (*(ushort *)(param_2 + 0x14) != 0) {
        if (*(ushort *)(param_2 + 0x14) < (ushort)(byte)local_4) {
          FUN_004087f0((int)param_1,"Incorrect bKGD chunk index value");
          uStack_8 = 0x40b2d6;
          ___security_check_cookie_4((uint)param_1 ^ (uint)&local_4);
          return;
        }
        iVar3 = (local_4 & 0xff) * 3;
        iVar4 = iVar3 + param_1[0x45];
        *(ushort *)((int)param_1 + 0x13a) = (ushort)*(byte *)(iVar3 + param_1[0x45]);
        *(ushort *)(param_1 + 0x4f) = (ushort)*(byte *)(iVar4 + 1);
        *(ushort *)((int)param_1 + 0x13e) = (ushort)*(byte *)(iVar4 + 2);
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        sVar1 = FUN_00408c80((byte *)&local_4);
        *(short *)(param_1 + 0x50) = sVar1;
        *(short *)(param_1 + 0x4f) = sVar1;
        *(short *)((int)param_1 + 0x13a) = sVar1;
      }
      else {
        sVar1 = FUN_00408c80((byte *)&local_4);
        *(short *)((int)param_1 + 0x13a) = sVar1;
        sVar1 = FUN_00408c80((byte *)((int)&local_4 + 2));
        *(short *)(param_1 + 0x4f) = sVar1;
        sVar1 = FUN_00408c80(&stack0x00000000);
      }
      *(short *)((int)param_1 + 0x13e) = sVar1;
    }
    FUN_00410ec0((int)param_1,param_2,param_1 + 0x4e);
  }
  uStack_8 = 0x40b389;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&local_4);
  return;
}



void __cdecl FUN_0040b390(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined auStack_208 [4];
  undefined4 uStack_204;
  uint uStack_200;
  short asStack_1fc [252];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_208;
  uVar3 = param_1[0x1a];
  if ((uVar3 & 1) == 0) {
    FUN_00408740(param_1,"Missing IHDR before hIST");
  }
  else {
    if ((uVar3 & 4) != 0) {
      FUN_004087f0((int)param_1,"Invalid hIST after IDAT");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_208);
      return;
    }
    if ((uVar3 & 2) == 0) {
      FUN_004087f0((int)param_1,"Missing PLTE before hIST");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_208);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate hIST chunk");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_208);
      return;
    }
  }
  uVar3 = param_5 >> 1;
  if ((uVar3 == *(ushort *)(param_1 + 0x46)) && (uVar3 < 0x101)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        FUN_00408ca0(param_1,&uStack_200,2);
        sVar1 = FUN_00408c80((byte *)&uStack_200);
        asStack_1fc[uVar4] = sVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    iVar2 = FUN_00409d50(param_1,0);
    if (iVar2 == 0) {
      FUN_00411520(param_1,param_2,(int)asStack_1fc);
    }
  }
  else {
    FUN_004087f0((int)param_1,"Incorrect hIST chunk length");
    FUN_00409d50(param_1,param_5);
  }
  uStack_204 = 0x40b527;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_200);
  return;
}



void __cdecl FUN_0040b530(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined unaff_retaddr;
  undefined auStack_10 [4];
  undefined4 uStack_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_10;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before pHYs");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid pHYs after IDAT");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_10);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate pHYs chunk");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_10);
      return;
    }
  }
  if (param_5 != 9) {
    FUN_004087f0((int)param_1,"Incorrect pHYs chunk length");
    FUN_00409d50(param_1,param_5);
    uStack_c = 0x40b58e;
    ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_8);
    return;
  }
  FUN_00408ca0(param_1,&uStack_8,9);
  iVar1 = FUN_00409d50(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_00408c50((undefined *)&local_4);
    uVar3 = FUN_00408c50((undefined *)&uStack_8);
    FUN_00411a20((int)param_1,param_2,uVar3,uVar2,unaff_retaddr);
  }
  uStack_c = 0x40b64a;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_8);
  return;
}



void __cdecl FUN_0040b650(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined unaff_retaddr;
  undefined auStack_10 [4];
  undefined4 uStack_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_10;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00408740(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004087f0((int)param_1,"Invalid oFFs after IDAT");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_10);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_004087f0((int)param_1,"Duplicate oFFs chunk");
      FUN_00409d50(param_1,param_3);
      ___security_check_cookie_4(local_4 ^ (uint)auStack_10);
      return;
    }
  }
  if (param_5 != 9) {
    FUN_004087f0((int)param_1,"Incorrect oFFs chunk length");
    FUN_00409d50(param_1,param_5);
    uStack_c = 0x40b6ae;
    ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_8);
    return;
  }
  FUN_00408ca0(param_1,&uStack_8,9);
  iVar1 = FUN_00409d50(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_00408c50((undefined *)&local_4);
    uVar3 = FUN_00408c50((undefined *)&uStack_8);
    FUN_00411810((int)param_1,param_2,uVar3,uVar2,unaff_retaddr);
  }
  uStack_c = 0x40b76d;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_8);
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
    else if ((bVar3 == 1) || (bVar3 == 2)) {
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
        if (uVar9 != 0) {
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


void __cdecl FUN_0040bba0(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_4;
  
  local_4 = DAT_0041c340 ^ (uint)auStack_14;
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00408740(param_1,"Out of place tIME chunk");
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_004087f0((int)param_1,"Duplicate tIME chunk");
    FUN_00409d50(param_1,param_3);
    ___security_check_cookie_4(local_4 ^ (uint)auStack_14);
    return;
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  if (param_5 != 7) {
    FUN_004087f0((int)param_1,"Incorrect tIME chunk length");
    FUN_00409d50(param_1,param_5);
    uStack_10 = 0x40bc06;
    ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_c);
    return;
  }
  FUN_00408ca0(param_1,&local_4,7);
  iVar1 = FUN_00409d50(param_1,0);
  if (iVar1 == 0) {
    uStack_c._3_1_ = local_4._3_1_;
    uStack_c._2_1_ = local_4._2_1_;
    uStack_c._0_2_ = FUN_00408c80((byte *)&local_4);
    FUN_00411f00((int)param_1,param_2,&uStack_c);
  }
  uStack_10 = 0x40bcb5;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&uStack_c);
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
    puVar5[1] = puVar3;
    puVar5[2] = puVar6;
    pcVar1 = (char *)((int)puVar6 + 1);
    do {
      cVar2 = *(char *)puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
    } while (cVar2 != '\0');
    puVar5[3] = (int)puVar6 - (int)pcVar1;
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
  pvVar6 = (void *)FUN_00408d40(param_1,iVar5,puVar4,param_5,(int)puVar8 - (int)puVar4,&param_5);
  piVar7 = (int *)FUN_00408c20(param_1,0x10);
  if (piVar7 != (int *)0x0) {
    *piVar7 = iVar5;
    piVar7[1] = (int)pvVar6;
    piVar7[2] = ((int)puVar8 - (int)puVar4) + (int)pvVar6;
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



void __cdecl
FUN_0040bf40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,size_t param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *this;
  void *this_00;
  int *piVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  int iStack_18;
  uint uStack_14;
  void *apvStack_10 [2];
  uint *puStack_8;
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_20;
  local_20 = param_2;
  local_1c = 0;
  if ((param_1[0x1a] & 4U) != 0) {
    uVar2 = 4;
    piVar4 = (int *)&DAT_00416414;
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
  if ((((*(byte *)piVar5 & 0x20) == 0) && (iVar6 = FUN_004082a0((int)param_1,piVar5), iVar6 != 3))
     && (param_1[0x87] == 0)) {
    FUN_00408850(this,param_1,"unknown critical chunk");
  }
  if ((param_1[0x1b] & 0x8000U) == 0) goto LAB_0040c0ff;
  piVar4 = piVar5;
  do {
    cVar1 = *(char *)piVar4;
    *(char *)(((int)apvStack_10 - (int)piVar5) + (int)piVar4) = cVar1;
    piVar4 = (int *)((int)piVar4 + 1);
  } while (cVar1 != '\0');
  puStack_8 = (uint *)FUN_00408ba0(param_1,param_5);
  local_4 = param_5;
  FUN_00408ca0(param_1,puStack_8,param_5);
  if ((code *)param_1[0x87] == (code *)0x0) {
LAB_0040c0de:
    FUN_00412100(param_1,iStack_18,(int)apvStack_10,1);
  }
  else {
    iVar6 = (*(code *)param_1[0x87])(param_1,apvStack_10);
    if (iVar6 < 1) {
      if (((*(byte *)piVar5 & 0x20) == 0) && (iVar6 = FUN_004082a0((int)param_1,piVar5), iVar6 != 3)
         ) {
        FUN_00408bf0((int)param_1,apvStack_10[0]);
        FUN_00408850(this_00,param_1,"unknown critical chunk");
      }
      goto LAB_0040c0de;
    }
  }
  FUN_00408bf0((int)param_1,puStack_8);
  param_5 = uStack_14;
LAB_0040c0ff:
  FUN_00409d50(param_1,param_5);
  local_1c = 0x40c117;
  ___security_check_cookie_4((uint)param_1 ^ (uint)&iStack_18);
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
      piVar3[0x20] = (int)&param_1;
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
              puVar7 = (uint *)&DAT_00416414;
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
          piVar3[0x1d] = (int)(uint *)piVar3[0x2b];
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
      for (iVar4 = iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar5 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 1;
        if (iVar3 == 7) {
          iVar3 = 0;
          pbVar6 = pbVar6 + -1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        pbVar5 = pbVar5 + -1;
      }
    }
    else if (bVar1 == 2) {
      pbVar6 = (byte *)((iVar2 - 1U >> 2) + param_2);
      pbVar5 = (byte *)(iVar2 + param_2 + -1);
      iVar4 = (3 - (iVar2 - 1U & 3)) * 2;
      for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar5 = *pbVar6 >> ((byte)iVar4 & 0x1f) & 3;
        if (iVar4 == 6) {
          iVar4 = 0;
          pbVar6 = pbVar6 + -1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        pbVar5 = pbVar5 + -1;
      }
    }
    else if (bVar1 == 4) {
      pbVar6 = (byte *)((iVar2 - 1U >> 1) + param_2);
      pbVar5 = (byte *)(iVar2 + param_2 + -1);
      iVar3 = (1 - (iVar2 - 1U & 1)) * 4;
      for (iVar4 = iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar5 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 0xf;
        if (iVar3 == 4) {
          iVar3 = 0;
          pbVar6 = pbVar6 + -1;
        }
        else {
          iVar3 = 4;
        }
        pbVar5 = pbVar5 + -1;
      }
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) * '\b';
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * iVar2;
  }
  return;
}



byte * __cdecl FUN_0040c570(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  byte *in_EAX;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
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
                                        *(byte *)((int)param_1 + 9) + 2);
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
          bVar6 = (byte)local_10[0];
          uVar4 = 0xf0 >> (bVar6 & 0x1f) & 0xfffffff0;
          bVar2 = (byte)uVar4 | (byte)(0xf >> (bVar6 & 0x1f));
          in_EAX = (byte *)CONCAT31((int3)(uVar4 >> 8),bVar2);
          if (iVar10 != 0) {
            do {
              iVar10 = iVar10 + -1;
              *param_2 = *param_2 >> (bVar6 & 0x1f) & bVar2;
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
              pbVar5 = (byte *)(uVar8 / uVar4);
              uVar7 = uVar8 % uVar4;
              uVar8 = uVar8 + 1;
              *param_2 = *param_2 >> (*(byte *)(local_10 + uVar7) & 0x1f);
              param_2 = param_2 + 1;
            } while (uVar8 < uVar9);
            return pbVar5;
          }
          break;
        case 0x10:
          uVar9 = iVar10 * uVar4;
          uVar8 = 0;
          if (uVar9 != 0) {
            do {
              uVar7 = uVar8 % uVar4;
              uVar8 = uVar8 + 1;
              uVar3 = (ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) >>
                      ((byte)*(undefined2 *)(local_10 + uVar7) & 0x1f);
              in_EAX = (byte *)(uint)uVar3;
              *param_2 = (byte)(uVar3 >> 8);
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
    puVar1 = param_2;
    for (iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 2;
      puVar1 = puVar1 + 1;
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) * '\b';
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
  else if (*(char *)(param_1 + 2) == '\x04') {
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
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar2 = puVar5[-1];
        uVar3 = puVar5[-2];
        puVar4[-1] = puVar5[-3];
        puVar1 = puVar5 + -4;
        puVar5 = puVar5 + -4;
        puVar4[-2] = *puVar1;
        puVar4[-3] = uVar2;
        puVar4 = puVar4 + -4;
        *puVar4 = uVar3;
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
      iVar2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          pcVar3 = (char *)(iVar2 + -1);
          iVar2 = iVar2 + -4;
          iVar6 = iVar6 + -1;
          *pcVar3 = -1 - *pcVar3;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      iVar2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          *(char *)(iVar2 + -1) = -1 - *(char *)(iVar2 + -1);
          iVar6 = iVar6 + -1;
          *(char *)(iVar2 + -2) = -1 - *(char *)(iVar2 + -2);
          iVar2 = iVar2 + -8;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 2) == '\x04') {
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
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)(iVar2 + -1) = -1 - *(char *)(iVar2 + -1);
        *(char *)(iVar2 + -2) = -1 - *(char *)(iVar2 + -2);
        iVar2 = iVar2 + -4;
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
  int iVar10;
  
  puVar4 = param_1;
  puVar9 = param_1 + 2;
  uVar2 = *param_1;
  bVar8 = (byte)(param_3 >> 8);
  param_1 = (uint *)(uint)bVar8;
  uVar7 = (undefined)param_3;
  if (*(char *)puVar9 == '\0') {
    if (*(char *)((int)puVar4 + 9) == '\b') {
      iVar10 = uVar2 + param_2;
      puVar5 = (undefined *)(iVar10 + uVar2);
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar1 = (undefined *)(iVar10 + -1);
          iVar10 = iVar10 + -1;
          puVar5[-1] = *puVar1;
          puVar5 = puVar5 + -2;
          *puVar5 = uVar7;
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
          puVar1 = (undefined *)(iVar10 + -1);
          iVar10 = iVar10 + -1;
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
      iVar10 = param_2 + uVar2 * 2;
      puVar5 = (undefined *)(iVar10 + uVar2 * 2);
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5[-1] = *(undefined *)(iVar10 + -1);
          puVar1 = (undefined *)(iVar10 + -2);
          iVar10 = iVar10 + -2;
          puVar5[-2] = *puVar1;
          puVar5[-3] = bVar8;
          puVar5 = puVar5 + -4;
          *puVar5 = uVar7;
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
          puVar5[-3] = *(undefined *)(iVar10 + -1);
          puVar1 = (undefined *)(iVar10 + -2);
          iVar10 = iVar10 + -2;
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
  else if (*(char *)puVar9 == '\x02') {
    if (*(char *)((int)puVar4 + 9) == '\b') {
      iVar10 = param_2 + uVar2 * 3;
      puVar5 = (undefined *)(iVar10 + uVar2);
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5[-1] = *(undefined *)(iVar10 + -1);
          puVar5[-2] = *(undefined *)(iVar10 + -2);
          puVar1 = (undefined *)(iVar10 + -3);
          iVar10 = iVar10 + -3;
          puVar5[-3] = *puVar1;
          puVar5 = puVar5 + -4;
          *puVar5 = uVar7;
        }
      }
      else {
        if (1 < uVar2) {
          iVar6 = uVar2 - 1;
          do {
            puVar5[-1] = uVar7;
            puVar5[-2] = *(undefined *)(iVar10 + -1);
            puVar5[-3] = *(undefined *)(iVar10 + -2);
            puVar1 = (undefined *)(iVar10 + -3);
            iVar10 = iVar10 + -3;
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
      iVar10 = param_2 + uVar2 * 6;
      puVar5 = (undefined *)(iVar10 + uVar2 * 2);
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5[-1] = *(undefined *)(iVar10 + -1);
          puVar5[-2] = *(undefined *)(iVar10 + -2);
          puVar5[-3] = *(undefined *)(iVar10 + -3);
          puVar5[-4] = *(undefined *)(iVar10 + -4);
          puVar5[-5] = *(undefined *)(iVar10 + -5);
          puVar1 = (undefined *)(iVar10 + -6);
          iVar10 = iVar10 + -6;
          puVar5[-6] = *puVar1;
          puVar5[-7] = bVar8;
          puVar5 = puVar5 + -8;
          *puVar5 = uVar7;
        }
      }
      else {
        if (1 < uVar2) {
          iVar6 = uVar2 - 1;
          puVar9 = (uint *)(param_3 >> 8);
          do {
            puVar5[-1] = (char)puVar9;
            puVar5[-2] = uVar7;
            puVar5[-3] = *(undefined *)(iVar10 + -1);
            puVar5[-4] = *(undefined *)(iVar10 + -2);
            puVar5[-5] = *(undefined *)(iVar10 + -3);
            puVar5[-6] = *(undefined *)(iVar10 + -4);
            puVar5[-7] = *(undefined *)(iVar10 + -5);
            puVar1 = (undefined *)(iVar10 + -6);
            iVar10 = iVar10 + -6;
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
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = *puVar5;
          puVar4[-2] = *puVar5;
          puVar4 = puVar4 + -3;
          puVar5 = puVar5 + -1;
        }
      }
      else {
        puVar5 = (undefined *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar5 + iVar2 * 4;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = *puVar5;
          puVar4[-3] = puVar5[-1];
          puVar4[-4] = *puVar5;
          puVar4[-5] = puVar5[-1];
          puVar4 = puVar4 + -6;
          puVar5 = puVar5 + -2;
        }
      }
    }
    else if (bVar1 == 4) {
      if (bVar3 == 8) {
        puVar5 = (undefined *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar5 + iVar2 * 2;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-1];
          puVar4[-3] = puVar5[-1];
          puVar4 = puVar4 + -4;
          puVar5 = puVar5 + -2;
        }
      }
      else {
        puVar5 = (undefined *)(param_2 + -1 + iVar2 * 4);
        puVar4 = puVar5 + iVar2 * 4;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
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
  byte bVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_24;
  
  iVar1 = *param_2;
  local_24 = 0;
  uVar9 = 0;
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
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            bVar8 = *pbVar6;
            if ((bVar8 == pbVar6[1]) && (bVar8 == pbVar6[2])) {
              *pbVar7 = pbVar6[2];
            }
            else {
              local_24 = 1;
              *pbVar7 = (byte)(pbVar6[2] * uVar11 + pbVar6[1] * uVar13 + bVar8 * uVar14 >> 0xf);
            }
            pbVar6 = pbVar6 + 3;
            pbVar7 = pbVar7 + 1;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            iVar2 = *(int *)(param_1 + 0x16c);
            bVar8 = *(byte *)((uint)*pbVar6 + iVar2);
            if ((bVar8 == *(byte *)((uint)pbVar6[1] + iVar2)) &&
               (bVar8 == *(byte *)((uint)pbVar6[2] + iVar2))) {
              *pbVar7 = pbVar6[2];
            }
            else {
              local_24 = 1;
              *pbVar7 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar11 +
                                   *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + bVar8 * uVar14 >>
                                  0xf) + *(int *)(param_1 + 0x168));
            }
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
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            if ((uVar10 != CONCAT11(pbVar6[2],pbVar6[3])) ||
               (uVar10 != CONCAT11(pbVar6[4],pbVar6[5]))) {
              local_24 = 1;
            }
            uVar12 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar11 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar13
                     + uVar10 * uVar14 >> 0xf & 0xffff;
            *pbVar7 = (byte)(uVar12 >> 8);
            pbVar7[1] = (byte)uVar12;
            pbVar6 = pbVar6 + 6;
            pbVar7 = pbVar7 + 2;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            uVar3 = CONCAT11(pbVar6[2],pbVar6[3]);
            uVar4 = CONCAT11(pbVar6[4],pbVar6[5]);
            if ((uVar10 != uVar3) || (uVar10 != uVar4)) {
              bVar8 = (byte)*(undefined2 *)(param_1 + 0x158);
              iVar2 = *(int *)(param_1 + 0x178);
              uVar12 = *(ushort *)
                        (*(int *)(iVar2 + ((uVar10 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)*pbVar6 * 2) * uVar14 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar3 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)pbVar6[2] * 2) * uVar13 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar4 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)pbVar6[4] * 2) * uVar11 >> 0xf;
              local_24 = 1;
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x174) +
                                 ((uVar12 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        ((uVar12 & 0xffff) >> 8) * 2);
            }
            *pbVar7 = (byte)(uVar10 >> 8);
            pbVar7[1] = (byte)uVar10;
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
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            bVar8 = *pbVar6;
            if ((bVar8 != pbVar6[1]) || (bVar8 != pbVar6[2])) {
              local_24 = 1;
            }
            *param_3 = (byte)(pbVar6[2] * uVar11 + pbVar6[1] * uVar13 + bVar8 * uVar14 >> 0xf);
            param_3[1] = pbVar6[3];
            param_3 = param_3 + 2;
            pbVar6 = pbVar6 + 4;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            iVar2 = *(int *)(param_1 + 0x16c);
            bVar8 = *(byte *)((uint)*pbVar6 + iVar2);
            if ((bVar8 != *(byte *)((uint)pbVar6[1] + iVar2)) ||
               (bVar8 != *(byte *)((uint)pbVar6[2] + iVar2))) {
              local_24 = 1;
            }
            *param_3 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar11 +
                                  *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + bVar8 * uVar14 >>
                                 0xf) + *(int *)(param_1 + 0x168));
            param_3[1] = pbVar6[3];
            param_3 = param_3 + 2;
            pbVar6 = pbVar6 + 4;
          }
        }
      }
      else {
        iVar5 = iVar1;
        pbVar6 = param_3;
        if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
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
            pbVar6 = pbVar6 + 8;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*param_3,param_3[1]);
            uVar3 = CONCAT11(param_3[2],param_3[3]);
            uVar4 = CONCAT11(param_3[4],param_3[5]);
            if ((uVar10 != uVar3) || (uVar10 != uVar4)) {
              iVar2 = *(int *)(param_1 + 0x178);
              bVar8 = (byte)*(undefined2 *)(param_1 + 0x158);
              uVar12 = *(ushort *)
                        (*(int *)(iVar2 + ((uVar10 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)*param_3 * 2) * uVar14 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar3 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)param_3[2] * 2) * uVar13 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar4 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)param_3[4] * 2) * uVar11 >> 0xf;
              local_24 = 1;
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x174) +
                                 ((uVar12 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        ((uVar12 & 0xffff) >> 8) * 2);
            }
            *pbVar6 = (byte)(uVar10 >> 8);
            pbVar6[1] = (byte)uVar10;
            pbVar6[2] = param_3[6];
            pbVar6[3] = param_3[7];
            param_3 = param_3 + 8;
            pbVar6 = pbVar6 + 4;
          }
        }
      }
    }
    *(char *)((int)param_2 + 10) = *(char *)((int)param_2 + 10) + -2;
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
    bVar8 = *(char *)((int)param_2 + 9) * *(char *)((int)param_2 + 10);
    *(byte *)((int)param_2 + 0xb) = bVar8;
    if (7 < bVar8) {
      param_2[1] = (uint)(bVar8 >> 3) * iVar1;
      return local_24;
    }
    param_2[1] = (uint)bVar8 * iVar1 + 7 >> 3;
    uVar9 = local_24;
  }
  return uVar9;
}



void __cdecl
FUN_0040d5e0(int *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,byte param_12)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  undefined uVar5;
  byte bVar6;
  short sVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  int local_c;
  int local_4;
  
  iVar3 = *param_1;
  if ((param_4 != 0) &&
     ((bVar6 = *(byte *)(param_1 + 2), (bVar6 & 4) == 0 || ((bVar6 != 3 && (param_3 != 0)))))) {
    local_c = iVar3;
    switch(bVar6) {
    case 0:
      switch(*(undefined *)((int)param_1 + 9)) {
      case 1:
        iVar15 = 7;
        for (iVar10 = iVar3; iVar10 != 0; iVar10 = iVar10 + -1) {
          bVar6 = (byte)iVar15;
          if ((ushort)(*(byte *)param_2 >> (bVar6 & 0x1f) & 1) == *(ushort *)(param_3 + 8)) {
            bVar4 = (byte)(0x7f7f >> (7 - bVar6 & 0x1f)) & *(byte *)param_2;
            *(byte *)param_2 = bVar4;
            *(byte *)param_2 = *(char *)(param_4 + 8) << (bVar6 & 0x1f) | bVar4;
          }
          if (iVar15 == 0) {
            iVar15 = 7;
            param_2 = (undefined2 *)((int)param_2 + 1);
          }
          else {
            iVar15 = iVar15 + -1;
          }
        }
        break;
      case 2:
        iVar15 = 6;
        iVar10 = iVar3;
        if (param_6 == 0) {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            bVar6 = (byte)iVar15;
            if ((ushort)(*(byte *)param_2 >> (bVar6 & 0x1f) & 3) == *(ushort *)(param_3 + 8)) {
              bVar4 = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar4;
              *(byte *)param_2 = *(char *)(param_4 + 8) << (bVar6 & 0x1f) | bVar4;
            }
            if (iVar15 == 0) {
              iVar15 = 6;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar15 = iVar15 + -2;
            }
          }
        }
        else {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            bVar6 = (byte)iVar15;
            bVar4 = *(byte *)param_2 >> (bVar6 & 0x1f) & 3;
            if ((ushort)bVar4 == *(ushort *)(param_3 + 8)) {
              bVar4 = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar4;
              bVar8 = *(char *)(param_4 + 8) << (bVar6 & 0x1f);
            }
            else {
              uVar12 = (uint)bVar4;
              bVar8 = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *(byte *)param_2;
              bVar4 = (*(byte *)((((uVar12 * 4 | uVar12) * 4 | uVar12) * 4 | uVar12) + param_6) >> 6
                      ) << (bVar6 & 0x1f);
            }
            *(byte *)param_2 = bVar8 | bVar4;
            if (iVar15 == 0) {
              iVar15 = 6;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar15 = iVar15 + -2;
            }
          }
        }
        break;
      case 4:
        iVar15 = 4;
        iVar10 = iVar3;
        if (param_6 == 0) {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            bVar6 = (byte)iVar15;
            if ((ushort)(*(byte *)param_2 >> (bVar6 & 0x1f) & 0xf) == *(ushort *)(param_3 + 8)) {
              bVar4 = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar4;
              *(byte *)param_2 = *(char *)(param_4 + 8) << (bVar6 & 0x1f) | bVar4;
            }
            if (iVar15 == 0) {
              iVar15 = 4;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar15 = iVar15 + -4;
            }
          }
        }
        else {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            bVar6 = (byte)iVar15;
            bVar4 = *(byte *)param_2 >> (bVar6 & 0x1f) & 0xf;
            if ((ushort)bVar4 == *(ushort *)(param_3 + 8)) {
              bVar4 = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *(byte *)param_2;
              *(byte *)param_2 = bVar4;
              bVar8 = *(char *)(param_4 + 8) << (bVar6 & 0x1f);
            }
            else {
              bVar8 = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *(byte *)param_2;
              bVar4 = (*(byte *)(((uint)bVar4 << 4 | (uint)bVar4) + param_6) >> 4) << (bVar6 & 0x1f)
              ;
            }
            *(byte *)param_2 = bVar8 | bVar4;
            if (iVar15 == 0) {
              iVar15 = 4;
              param_2 = (undefined2 *)((int)param_2 + 1);
            }
            else {
              iVar15 = iVar15 + -4;
            }
          }
        }
        break;
      case 8:
        iVar10 = iVar3;
        if (param_6 == 0) {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            if ((ushort)*(byte *)param_2 == *(ushort *)(param_3 + 8)) {
              *(byte *)param_2 = *(byte *)(param_4 + 8);
            }
            param_2 = (undefined2 *)((int)param_2 + 1);
          }
        }
        else {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            if ((ushort)*(byte *)param_2 == *(ushort *)(param_3 + 8)) {
              bVar6 = *(byte *)(param_4 + 8);
            }
            else {
              bVar6 = *(byte *)((uint)*(byte *)param_2 + param_6);
            }
            *(byte *)param_2 = bVar6;
            param_2 = (undefined2 *)((int)param_2 + 1);
          }
        }
        break;
      case 0x10:
        iVar10 = iVar3;
        if (param_9 == 0) {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            if ((ushort)((ushort)*(byte *)param_2 * 0x100 + (ushort)*(byte *)((int)param_2 + 1)) ==
                *(short *)(param_3 + 8)) {
              *(byte *)param_2 = *(byte *)(param_4 + 9);
              *(byte *)((int)param_2 + 1) = *(byte *)(param_4 + 8);
            }
            param_2 = param_2 + 1;
          }
        }
        else {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            if ((ushort)((ushort)*(byte *)param_2 * 0x100 + (ushort)*(byte *)((int)param_2 + 1)) ==
                *(short *)(param_3 + 8)) {
              *(byte *)param_2 = *(byte *)(param_4 + 9);
              uVar9 = (ushort)*(byte *)(param_4 + 8);
            }
            else {
              uVar9 = *(ushort *)
                       (*(int *)(param_9 +
                                (uint)(*(byte *)((int)param_2 + 1) >> (param_12 & 0x1f)) * 4) +
                       (uint)*(byte *)param_2 * 2);
              *(byte *)param_2 = (byte)(uVar9 >> 8);
            }
            *(byte *)((int)param_2 + 1) = (byte)uVar9;
            param_2 = param_2 + 1;
          }
        }
      }
      break;
    case 2:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (param_6 == 0) {
          if (iVar3 != 0) {
            puVar11 = param_2 + 1;
            iVar10 = iVar3;
            do {
              if ((((ushort)*(byte *)(puVar11 + -1) == *(ushort *)(param_3 + 2)) &&
                  ((ushort)*(byte *)((int)puVar11 + -1) == *(ushort *)(param_3 + 4))) &&
                 ((ushort)*(byte *)puVar11 == *(ushort *)(param_3 + 6))) {
                *(byte *)(puVar11 + -1) = *(byte *)(param_4 + 2);
                *(byte *)((int)puVar11 + -1) = *(byte *)(param_4 + 4);
                *(byte *)puVar11 = *(byte *)(param_4 + 6);
              }
              puVar11 = (undefined2 *)((int)puVar11 + 3);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else if (iVar3 != 0) {
          puVar11 = param_2 + 1;
          iVar10 = iVar3;
          do {
            if ((((ushort)*(byte *)(puVar11 + -1) == *(ushort *)(param_3 + 2)) &&
                ((ushort)*(byte *)((int)puVar11 + -1) == *(ushort *)(param_3 + 4))) &&
               ((ushort)*(byte *)puVar11 == *(ushort *)(param_3 + 6))) {
              *(byte *)(puVar11 + -1) = *(byte *)(param_4 + 2);
              *(byte *)((int)puVar11 + -1) = *(byte *)(param_4 + 4);
              bVar6 = *(byte *)(param_4 + 6);
            }
            else {
              *(byte *)(puVar11 + -1) = *(byte *)((uint)*(byte *)(puVar11 + -1) + param_6);
              *(byte *)((int)puVar11 + -1) = *(byte *)((uint)*(byte *)((int)puVar11 + -1) + param_6)
              ;
              bVar6 = *(byte *)((uint)*(byte *)puVar11 + param_6);
            }
            *(byte *)puVar11 = bVar6;
            puVar11 = (undefined2 *)((int)puVar11 + 3);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else if (param_9 == 0) {
        if (iVar3 != 0) {
          puVar11 = param_2 + 1;
          iVar10 = iVar3;
          do {
            if ((((ushort)((ushort)*(byte *)(puVar11 + -1) * 0x100 +
                          (ushort)*(byte *)((int)puVar11 + -1)) == *(short *)(param_3 + 2)) &&
                ((ushort)((ushort)*(byte *)puVar11 * 0x100 + (ushort)*(byte *)((int)puVar11 + 1)) ==
                 *(short *)(param_3 + 4))) &&
               ((ushort)((ushort)*(byte *)(puVar11 + 1) * 0x100 +
                        (ushort)*(byte *)((int)puVar11 + 3)) == *(short *)(param_3 + 6))) {
              *(byte *)(puVar11 + -1) = *(byte *)(param_4 + 3);
              *(byte *)((int)puVar11 + -1) = *(byte *)(param_4 + 2);
              *(byte *)puVar11 = *(byte *)(param_4 + 5);
              *(byte *)((int)puVar11 + 1) = *(byte *)(param_4 + 4);
              *(byte *)(puVar11 + 1) = *(byte *)(param_4 + 7);
              *(byte *)((int)puVar11 + 3) = *(byte *)(param_4 + 6);
            }
            puVar11 = puVar11 + 3;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else if (iVar3 != 0) {
        puVar11 = param_2 + 1;
        do {
          if ((((ushort)((ushort)*(byte *)(puVar11 + -1) * 0x100 +
                        (ushort)*(byte *)((int)puVar11 + -1)) == *(short *)(param_3 + 2)) &&
              ((ushort)((ushort)*(byte *)puVar11 * 0x100 + (ushort)*(byte *)((int)puVar11 + 1)) ==
               *(short *)(param_3 + 4))) &&
             ((ushort)((ushort)*(byte *)(puVar11 + 1) * 0x100 + (ushort)*(byte *)((int)puVar11 + 3))
              == *(short *)(param_3 + 6))) {
            *(byte *)(puVar11 + -1) = *(byte *)(param_4 + 3);
            *(byte *)((int)puVar11 + -1) = *(byte *)(param_4 + 2);
            *(byte *)puVar11 = *(byte *)(param_4 + 5);
            *(byte *)((int)puVar11 + 1) = *(byte *)(param_4 + 4);
            *(byte *)(puVar11 + 1) = *(byte *)(param_4 + 7);
            *(byte *)((int)puVar11 + 3) = *(byte *)(param_4 + 6);
          }
          else {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 +
                              (uint)(*(byte *)((int)puVar11 + -1) >> (param_12 & 0x1f)) * 4) +
                     (uint)*(byte *)(puVar11 + -1) * 2);
            *(byte *)((int)puVar11 + -1) = (byte)uVar2;
            *(byte *)(puVar11 + -1) = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 +
                              (uint)(*(byte *)((int)puVar11 + 1) >> (param_12 & 0x1f)) * 4) +
                     (uint)*(byte *)puVar11 * 2);
            *(byte *)((int)puVar11 + 1) = (byte)uVar2;
            *(byte *)puVar11 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 +
                              (uint)(*(byte *)((int)puVar11 + 3) >> (param_12 & 0x1f)) * 4) +
                     (uint)*(byte *)(puVar11 + 1) * 2);
            *(byte *)(puVar11 + 1) = (byte)((ushort)uVar2 >> 8);
            *(byte *)((int)puVar11 + 3) = (byte)uVar2;
          }
          puVar11 = puVar11 + 3;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      break;
    case 4:
      if (*(char *)((int)param_1 + 9) == '\b') {
        iVar10 = iVar3;
        puVar11 = param_2;
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            bVar6 = *(byte *)((int)param_2 + 1);
            if (bVar6 == 0xff) {
              bVar6 = *(byte *)param_2;
            }
            else if (bVar6 == 0) {
              bVar6 = *(byte *)(param_4 + 8);
            }
            else {
              uVar9 = (0xff - (ushort)bVar6) * *(short *)(param_5 + 8) +
                      (ushort)*(byte *)param_2 * (ushort)bVar6 + 0x80;
              bVar6 = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
            }
            *(byte *)puVar11 = bVar6;
            param_2 = param_2 + 1;
            puVar11 = (undefined2 *)((int)puVar11 + 1);
          }
        }
        else {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            bVar6 = *(byte *)((int)param_2 + 1);
            if (bVar6 == 0xff) {
              *(undefined *)puVar11 = *(undefined *)((uint)*(byte *)param_2 + param_6);
            }
            else if (bVar6 == 0) {
              *(undefined *)puVar11 = *(undefined *)(param_4 + 8);
            }
            else {
              uVar9 = (0xff - (ushort)bVar6) * *(short *)(param_5 + 8) +
                      (ushort)*(byte *)((uint)*(byte *)param_2 + param_8) * (ushort)bVar6 + 0x80;
              *(undefined *)puVar11 =
                   *(undefined *)(((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
            }
            param_2 = param_2 + 1;
            puVar11 = (undefined2 *)((int)puVar11 + 1);
          }
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        if (iVar3 != 0) {
          pbVar13 = (byte *)((int)param_2 + 3);
          do {
            uVar9 = (ushort)pbVar13[-1] * 0x100 + (ushort)*pbVar13;
            if (uVar9 == 0xffff) {
              *param_2 = *(undefined2 *)(pbVar13 + -3);
            }
            else {
              if (uVar9 == 0) {
                *(undefined *)param_2 = *(undefined *)(param_4 + 9);
                uVar5 = *(undefined *)(param_4 + 8);
              }
              else {
                uVar12 = (uint)(ushort)((ushort)pbVar13[-3] * 0x100 + (ushort)pbVar13[-2]) *
                         (uint)uVar9 + 0x8000 +
                         (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar9);
                iVar10 = (uVar12 >> 0x10) + uVar12;
                uVar5 = (undefined)((uint)iVar10 >> 0x10);
                *(char *)param_2 = (char)((uint)iVar10 >> 0x18);
              }
              *(undefined *)((int)param_2 + 1) = uVar5;
            }
            pbVar13 = pbVar13 + 4;
            param_2 = param_2 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
      }
      else if (iVar3 != 0) {
        pbVar13 = (byte *)((int)param_2 + 1);
        do {
          uVar9 = (ushort)pbVar13[1] * 0x100 + (ushort)pbVar13[2];
          if (uVar9 == 0xffff) {
            uVar9 = *(ushort *)
                     (*(int *)(param_9 + (uint)(*pbVar13 >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar13[-1] * 2);
LAB_0040de8e:
            *(char *)param_2 = (char)(uVar9 >> 8);
          }
          else {
            if (uVar9 != 0) {
              uVar12 = (uint)*(ushort *)
                              (*(int *)(param_11 + (uint)(*pbVar13 >> (param_12 & 0x1f)) * 4) +
                              (uint)pbVar13[-1] * 2) * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar9);
              uVar12 = (uVar12 >> 0x10) + uVar12;
              uVar9 = *(ushort *)
                       (*(int *)(param_10 + ((uVar12 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                       (uVar12 >> 0x18) * 2);
              goto LAB_0040de8e;
            }
            *(undefined *)param_2 = *(undefined *)(param_4 + 9);
            uVar9 = (ushort)*(byte *)(param_4 + 8);
          }
          *(char *)((int)param_2 + 1) = (char)uVar9;
          pbVar13 = pbVar13 + 4;
          param_2 = param_2 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      break;
    case 6:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          if (iVar3 != 0) {
            puVar11 = param_2 + 1;
            pbVar13 = (byte *)((int)param_2 + 1);
            do {
              bVar6 = pbVar13[2];
              if (bVar6 == 0xff) {
                *(byte *)(puVar11 + -1) = pbVar13[-1];
                *(byte *)((int)puVar11 + -1) = *pbVar13;
                *(byte *)puVar11 = pbVar13[1];
              }
              else {
                if (bVar6 == 0) {
                  *(byte *)(puVar11 + -1) = *(byte *)(param_4 + 2);
                  *(byte *)((int)puVar11 + -1) = *(byte *)(param_4 + 4);
                  bVar6 = *(byte *)(param_4 + 6);
                }
                else {
                  sVar7 = 0xff - (ushort)bVar6;
                  uVar9 = (ushort)pbVar13[-1] * (ushort)bVar6 + *(short *)(param_4 + 2) * sVar7 +
                          0x80;
                  *(byte *)(puVar11 + -1) = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
                  uVar9 = *(short *)(param_4 + 4) * sVar7 + (ushort)*pbVar13 * (ushort)bVar6 + 0x80;
                  *(byte *)((int)puVar11 + -1) = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
                  uVar9 = (ushort)pbVar13[1] * (ushort)bVar6 + *(short *)(param_4 + 6) * sVar7 +
                          0x80;
                  bVar6 = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
                }
                *(byte *)puVar11 = bVar6;
              }
              pbVar13 = pbVar13 + 4;
              puVar11 = (undefined2 *)((int)puVar11 + 3);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
        }
        else if (iVar3 != 0) {
          puVar11 = param_2 + 1;
          pbVar13 = (byte *)((int)param_2 + 1);
          do {
            bVar6 = pbVar13[2];
            if (bVar6 == 0xff) {
              *(undefined *)(puVar11 + -1) = *(undefined *)((uint)pbVar13[-1] + param_6);
              *(undefined *)((int)puVar11 + -1) = *(undefined *)((uint)*pbVar13 + param_6);
              uVar5 = *(undefined *)((uint)pbVar13[1] + param_6);
            }
            else if (bVar6 == 0) {
              *(undefined *)(puVar11 + -1) = *(undefined *)(param_4 + 2);
              *(undefined *)((int)puVar11 + -1) = *(undefined *)(param_4 + 4);
              uVar5 = *(undefined *)(param_4 + 6);
            }
            else {
              sVar7 = 0xff - (ushort)bVar6;
              uVar9 = (ushort)*(byte *)((uint)pbVar13[-1] + param_8) * (ushort)bVar6 +
                      *(short *)(param_5 + 2) * sVar7 + 0x80;
              *(undefined *)(puVar11 + -1) =
                   *(undefined *)(((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
              uVar9 = (ushort)*(byte *)((uint)*pbVar13 + param_8) * (ushort)bVar6 +
                      *(short *)(param_5 + 4) * sVar7 + 0x80;
              *(undefined *)((int)puVar11 + -1) =
                   *(undefined *)(((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
              uVar9 = (ushort)*(byte *)((uint)pbVar13[1] + param_8) * (ushort)bVar6 +
                      *(short *)(param_5 + 6) * sVar7 + 0x80;
              uVar5 = *(undefined *)
                       (((int)((uint)(uVar9 >> 8) + (uint)uVar9) >> 8 & 0xffU) + param_7);
            }
            *(undefined *)puVar11 = uVar5;
            pbVar13 = pbVar13 + 4;
            puVar11 = (undefined2 *)((int)puVar11 + 3);
            local_c = local_c + -1;
          } while (local_c != 0);
        }
      }
      else {
        local_4 = iVar3;
        if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
          if (iVar3 != 0) {
            puVar11 = param_2 + 1;
            pbVar13 = (byte *)((int)param_2 + 7);
            do {
              uVar9 = (ushort)pbVar13[-1] * 0x100 + (ushort)*pbVar13;
              if (uVar9 == 0xffff) {
                *(undefined4 *)(puVar11 + -1) = *(undefined4 *)(pbVar13 + -7);
                puVar11[1] = *(undefined2 *)(pbVar13 + -3);
              }
              else {
                if (uVar9 == 0) {
                  *(undefined *)(puVar11 + -1) = *(undefined *)(param_4 + 3);
                  *(undefined *)((int)puVar11 + -1) = *(undefined *)(param_4 + 2);
                  *(undefined *)puVar11 = *(undefined *)(param_4 + 5);
                  *(undefined *)((int)puVar11 + 1) = *(undefined *)(param_4 + 4);
                  *(undefined *)(puVar11 + 1) = *(undefined *)(param_4 + 7);
                  uVar5 = *(undefined *)(param_4 + 6);
                }
                else {
                  bVar6 = pbVar13[-5];
                  bVar4 = pbVar13[-4];
                  bVar8 = pbVar13[-2];
                  bVar1 = pbVar13[-3];
                  uVar14 = (uint)uVar9;
                  iVar15 = 0xffff - uVar14;
                  uVar12 = (ushort)((ushort)pbVar13[-7] * 0x100 + (ushort)pbVar13[-6]) * uVar14 +
                           0x8000 + (uint)*(ushort *)(param_4 + 2) * iVar15;
                  iVar10 = (uVar12 >> 0x10) + uVar12;
                  *(char *)(puVar11 + -1) = (char)((uint)iVar10 >> 0x18);
                  *(char *)((int)puVar11 + -1) = (char)((uint)iVar10 >> 0x10);
                  uVar12 = (uint)*(ushort *)(param_4 + 4) * iVar15 + 0x8000 +
                           (ushort)((ushort)bVar6 * 0x100 + (ushort)bVar4) * uVar14;
                  iVar10 = (uVar12 >> 0x10) + uVar12;
                  *(char *)puVar11 = (char)((uint)iVar10 >> 0x18);
                  *(char *)((int)puVar11 + 1) = (char)((uint)iVar10 >> 0x10);
                  uVar12 = (uint)*(ushort *)(param_4 + 6) * iVar15 + 0x8000 +
                           (ushort)((ushort)bVar1 * 0x100 + (ushort)bVar8) * uVar14;
                  iVar10 = (uVar12 >> 0x10) + uVar12;
                  uVar5 = (undefined)((uint)iVar10 >> 0x10);
                  *(char *)(puVar11 + 1) = (char)((uint)iVar10 >> 0x18);
                }
                *(undefined *)((int)puVar11 + 3) = uVar5;
              }
              pbVar13 = pbVar13 + 8;
              puVar11 = puVar11 + 3;
              local_4 = local_4 + -1;
            } while (local_4 != 0);
          }
        }
        else if (iVar3 != 0) {
          puVar11 = param_2 + 1;
          pbVar13 = (byte *)((int)param_2 + 1);
          do {
            uVar9 = (ushort)pbVar13[5] * 0x100 + (ushort)pbVar13[6];
            if (uVar9 == 0xffff) {
              uVar2 = *(undefined2 *)
                       (*(int *)(param_9 + (uint)(*pbVar13 >> (param_12 & 0x1f)) * 4) +
                       (uint)pbVar13[-1] * 2);
              *(char *)(puVar11 + -1) = (char)((ushort)uVar2 >> 8);
              *(char *)((int)puVar11 + -1) = (char)uVar2;
              uVar2 = *(undefined2 *)
                       (*(int *)(param_9 + (uint)(pbVar13[2] >> (param_12 & 0x1f)) * 4) +
                       (uint)pbVar13[1] * 2);
              *(char *)puVar11 = (char)((ushort)uVar2 >> 8);
              *(char *)((int)puVar11 + 1) = (char)uVar2;
              uVar9 = *(ushort *)
                       (*(int *)(param_9 + (uint)(pbVar13[4] >> (param_12 & 0x1f)) * 4) +
                       (uint)pbVar13[3] * 2);
LAB_0040e3e5:
              *(char *)(puVar11 + 1) = (char)(uVar9 >> 8);
            }
            else {
              if (uVar9 != 0) {
                uVar14 = (uint)uVar9;
                iVar10 = 0xffff - uVar14;
                uVar12 = *(ushort *)
                          (*(int *)(param_11 + (uint)(*pbVar13 >> (param_12 & 0x1f)) * 4) +
                          (uint)pbVar13[-1] * 2) * uVar14 + 0x8000 +
                         (uint)*(ushort *)(param_5 + 2) * iVar10;
                uVar12 = (uVar12 >> 0x10) + uVar12;
                uVar2 = *(undefined2 *)
                         (*(int *)(param_10 + ((uVar12 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                         (uVar12 >> 0x18) * 2);
                *(char *)(puVar11 + -1) = (char)((ushort)uVar2 >> 8);
                *(char *)((int)puVar11 + -1) = (char)uVar2;
                uVar12 = *(ushort *)
                          (*(int *)(param_11 + (uint)(pbVar13[2] >> (param_12 & 0x1f)) * 4) +
                          (uint)pbVar13[1] * 2) * uVar14 + 0x8000 +
                         (uint)*(ushort *)(param_5 + 4) * iVar10;
                uVar12 = (uVar12 >> 0x10) + uVar12;
                uVar2 = *(undefined2 *)
                         (*(int *)(param_10 + ((uVar12 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                         (uVar12 >> 0x18) * 2);
                *(char *)puVar11 = (char)((ushort)uVar2 >> 8);
                *(char *)((int)puVar11 + 1) = (char)uVar2;
                uVar12 = *(ushort *)
                          (*(int *)(param_11 + (uint)(pbVar13[4] >> (param_12 & 0x1f)) * 4) +
                          (uint)pbVar13[3] * 2) * uVar14 + 0x8000 +
                         (uint)*(ushort *)(param_5 + 6) * iVar10;
                uVar12 = (uVar12 >> 0x10) + uVar12;
                uVar9 = *(ushort *)
                         (*(int *)(param_10 + ((uVar12 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                         (uVar12 >> 0x18) * 2);
                goto LAB_0040e3e5;
              }
              *(undefined *)(puVar11 + -1) = *(undefined *)(param_4 + 3);
              *(undefined *)((int)puVar11 + -1) = *(undefined *)(param_4 + 2);
              *(undefined *)puVar11 = *(undefined *)(param_4 + 5);
              *(undefined *)((int)puVar11 + 1) = *(undefined *)(param_4 + 4);
              *(undefined *)(puVar11 + 1) = *(undefined *)(param_4 + 7);
              uVar9 = (ushort)*(byte *)(param_4 + 6);
            }
            *(char *)((int)puVar11 + 3) = (char)uVar9;
            pbVar13 = pbVar13 + 8;
            puVar11 = puVar11 + 3;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
        }
      }
    }
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + -1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
      bVar6 = *(char *)((int)param_1 + 9) * *(char *)((int)param_1 + 10);
      *(byte *)((int)param_1 + 0xb) = bVar6;
      if (7 < bVar6) {
        param_1[1] = (uint)(bVar6 >> 3) * iVar3;
        return;
      }
      param_1[1] = (uint)bVar6 * iVar3 + 7 >> 3;
    }
  }
  return;
}



void __cdecl FUN_0040e5e0(int *param_1,byte *param_2,int param_3,int param_4,byte param_5)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
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
          *local_c = (byte)((byte)(*(byte *)(((uVar6 * 4 | uVar6) * 4 | (int)uVar6 >> 2 | uVar6) +
                                            param_3) & 0xcf |
                                  *(byte *)((((uVar5 * 4 | uVar5) * 4 | uVar5) * 4 | uVar5) +
                                           param_3) >> 2) >> 2 |
                           *(byte *)(((int)((int)uVar8 >> 2 | uVar8) >> 2 | uVar8 * 4 | uVar8) +
                                    param_3) & 0xc3) >> 2 |
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
            uVar5 = *param_2 & 0xf0;
            uVar4 = *param_2 & 0xf;
            *param_2 = *(byte *)(((int)uVar5 >> 4 | uVar5) + param_3) & 0xf0 |
                       *(byte *)((uVar4 << 4 | uVar4) + param_3) >> 4;
            param_2 = param_2 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      else if (cVar2 == '\b') {
        if (iVar7 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2 = param_2 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          return;
        }
      }
      else if (cVar2 == '\x10') {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          param_2 = param_2 + 2;
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
      else if (iVar7 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return;
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
      else if (iVar7 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          param_2 = param_2 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return;
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
      else if (iVar7 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return;
      }
    }
  }
  return;
}



void __cdecl FUN_0040e9a0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar5 = *param_1;
  if (*(char *)(param_1 + 2) == '\x03') {
    bVar2 = *(byte *)((int)param_1 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 1) {
        pbVar6 = (byte *)((uVar5 - 1 >> 3) + param_2);
        iVar3 = 7 - (uVar5 - 1 & 7);
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar7 = pbVar7 + -1;
        }
      }
      else if (bVar2 == 2) {
        pbVar6 = (byte *)((uVar5 - 1 >> 2) + param_2);
        iVar3 = (3 - (uVar5 - 1 & 3)) * 2;
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 3;
          if (iVar3 == 6) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 2;
          }
          pbVar7 = pbVar7 + -1;
        }
      }
      else if (bVar2 == 4) {
        pbVar6 = (byte *)((uVar5 - 1 >> 1) + param_2);
        iVar3 = (uVar5 & 1) * 4;
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 0xf;
          if (iVar3 == 4) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 4;
          }
          pbVar7 = pbVar7 + -1;
        }
      }
      *(undefined *)((int)param_1 + 9) = 8;
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar5;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar7 = (byte *)((uVar5 - 1) + param_2);
      if (param_4 != 0) {
        uVar1 = uVar5 * 4;
        puVar4 = (undefined *)((uVar1 - 1) + param_2);
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
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
        }
        param_1[1] = uVar1;
        *(undefined *)((int)param_1 + 0xb) = 0x20;
        *(undefined *)(param_1 + 2) = 6;
        *(undefined *)((int)param_1 + 10) = 4;
        *(undefined *)((int)param_1 + 9) = 8;
        return;
      }
      uVar1 = uVar5 * 3;
      puVar4 = (undefined *)((uVar1 - 1) + param_2);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *(undefined *)((uint)*pbVar7 * 3 + 2 + param_3);
        puVar4[-1] = *(undefined *)((uint)*pbVar7 * 3 + 1 + param_3);
        puVar4[-2] = *(undefined *)(param_3 + (uint)*pbVar7 * 3);
        puVar4 = puVar4 + -3;
        pbVar7 = pbVar7 + -1;
      }
      *(undefined *)((int)param_1 + 0xb) = 0x18;
      *(undefined *)(param_1 + 2) = 2;
      *(undefined *)((int)param_1 + 10) = 3;
      param_1[1] = uVar1;
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
        for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pcVar8 = -((*pbVar7 >> ((byte)iVar6 & 0x1f) & 1) != 0);
          if (iVar6 == 7) {
            iVar6 = 0;
            pbVar7 = pbVar7 + -1;
          }
          else {
            iVar6 = iVar6 + 1;
          }
          pcVar8 = pcVar8 + -1;
        }
      }
      else if (bVar2 == 2) {
        uVar10 = uVar10 * 0x55;
        pbVar11 = (byte *)((iVar1 - 1U >> 2) + param_2);
        iVar6 = (3 - (iVar1 - 1U & 3)) * 2;
        pbVar7 = (byte *)(iVar1 + -1 + param_2);
        for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
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
        }
      }
      else if (bVar2 == 4) {
        uVar10 = uVar10 * 0x11;
        pbVar11 = (byte *)((iVar1 - 1U >> 1) + param_2);
        iVar6 = (iVar1 - 1U & 1) * -4 + 4;
        pbVar7 = (byte *)(iVar1 + -1 + param_2);
        for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
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
          if (*pbVar7 == uVar10) {
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
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar4 = (undefined *)(param_1[1] + -1 + param_2);
      puVar5 = (undefined *)(param_2 + -1 + param_1[1] * 2);
      for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
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
      for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
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
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar4 = (undefined *)(param_1[1] + -1 + param_2);
      puVar5 = (undefined *)(param_2 + -1 + iVar1 * 8);
      for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
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
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *(byte *)((((*param_2 & 0xf8) << 5 | param_2[1] & 0xf8) * 4 |
                          (int)(uint)param_2[2] >> 3) + param_3);
      param_2 = param_2 + 3;
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
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + param_4);
          param_2 = param_2 + 1;
        }
      }
      return;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *(byte *)((((*param_2 & 0xf8) << 5 | param_2[1] & 0xf8) * 4 |
                          (int)(uint)param_2[2] >> 3) + param_3);
      param_2 = param_2 + 4;
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



void __cdecl FUN_0040f160(int *param_1)

{
  double dVar1;
  byte bVar2;
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
  float10 fVar13;
  uint local_38;
  uint local_34;
  undefined local_28;
  ushort uStack_24;
  uint local_20;
  
  if ((float)param_1[0x57] != 0.0) {
    if (*(byte *)((int)param_1 + 0x127) < 9) {
      pvVar3 = FUN_00408ba0(param_1,0x100);
      param_1[0x59] = (int)pvVar3;
      iVar9 = 0;
      do {
        fVar13 = (float10)_CIpow();
        iVar8 = iVar9 + 1;
        local_28 = (undefined)(int)ROUND(fVar13 * (float10)255.0 + (float10)0.5);
        *(undefined *)(iVar9 + param_1[0x59]) = local_28;
        iVar9 = iVar8;
      } while (iVar8 < 0x100);
      if ((param_1[0x1c] & 0x600080U) != 0) {
        pvVar3 = FUN_00408ba0(param_1,0x100);
        param_1[0x5b] = (int)pvVar3;
        iVar9 = 0;
        do {
          fVar13 = (float10)_CIpow();
          iVar8 = iVar9 + 1;
          local_28 = (undefined)(int)ROUND(fVar13 * (float10)255.0 + (float10)0.5);
          *(undefined *)(iVar9 + param_1[0x5b]) = local_28;
          iVar9 = iVar8;
        } while (iVar8 < 0x100);
        pvVar3 = FUN_00408ba0(param_1,0x100);
        param_1[0x5a] = (int)pvVar3;
        iVar9 = 0;
        do {
          fVar13 = (float10)_CIpow();
          iVar8 = iVar9 + 1;
          local_28 = (undefined)(int)ROUND(fVar13 * (float10)255.0 + (float10)0.5);
          *(undefined *)(iVar9 + param_1[0x5a]) = local_28;
          iVar9 = iVar8;
        } while (iVar8 < 0x100);
        return;
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
        if (local_38 < *(byte *)((int)param_1 + 0x17e)) {
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
      param_1[0x5c] = (int)pvVar3;
      if ((param_1[0x1c] & 0x480U) == 0) {
        local_34 = 0;
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5c] + local_34 * 4) = pvVar3;
            iVar9 = 0;
            do {
              fVar13 = (float10)_CIpow();
              iVar11 = iVar9 + 2;
              local_20._0_2_ = (undefined2)(int)ROUND(fVar13 * (float10)65535.0 + (float10)0.5);
              *(undefined2 *)(iVar9 + *(int *)(param_1[0x5c] + local_34 * 4)) = (undefined2)local_20
              ;
              iVar9 = iVar11;
            } while (iVar11 < 0x200);
            local_34 = local_34 + 1;
          } while ((int)local_34 < iVar8);
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
        local_34 = 0;
        dVar1 = (double)uVar4;
        if ((int)uVar4 < 0) {
          dVar1 = dVar1 + 4294967296.0;
        }
        do {
          fVar13 = (float10)_CIpow();
          local_20 = (uint)(longlong)ROUND(fVar13 * (float10)dVar1);
          if (uVar10 <= local_20) {
            uStack_24 = (ushort)((local_34 & 0xff) << 8) | (ushort)local_34;
            do {
              uVar7 = uVar10 >> (bVar6 & 0x1f);
              uVar5 = 0xff >> (bVar2 & 0x1f) & uVar10;
              uVar10 = uVar10 + 1;
              *(ushort *)(*(int *)(param_1[0x5c] + uVar5 * 4) + uVar7 * 2) = uStack_24;
            } while (uVar10 <= local_20);
          }
          local_34 = local_34 + 1;
        } while ((int)local_34 < 0x100);
        if (uVar10 < uVar4) {
          do {
            uVar5 = 0xff >> (bVar2 & 0x1f) & uVar10;
            uVar7 = uVar10 >> (bVar6 & 0x1f);
            uVar10 = uVar10 + 1;
            *(undefined2 *)(*(int *)(param_1[0x5c] + uVar5 * 4) + uVar7 * 2) = 0xffff;
          } while (uVar10 < uVar4);
        }
      }
      if ((param_1[0x1c] & 0x600080U) != 0) {
        pvVar3 = FUN_00408ba0(param_1,iVar8 * 4);
        iVar9 = 0;
        param_1[0x5e] = (int)pvVar3;
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5e] + iVar9 * 4) = pvVar3;
            iVar11 = 0;
            do {
              fVar13 = (float10)_CIpow();
              iVar12 = iVar11 + 2;
              local_20._0_2_ = (undefined2)(int)ROUND(fVar13 * (float10)65535.0 + (float10)0.5);
              *(undefined2 *)(iVar11 + *(int *)(param_1[0x5e] + iVar9 * 4)) = (undefined2)local_20;
              iVar11 = iVar12;
            } while (iVar12 < 0x200);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
        pvVar3 = FUN_00408ba0(param_1,iVar8 * 4);
        iVar9 = 0;
        param_1[0x5d] = (int)pvVar3;
        if (0 < iVar8) {
          do {
            pvVar3 = FUN_00408ba0(param_1,0x200);
            *(void **)(param_1[0x5d] + iVar9 * 4) = pvVar3;
            iVar11 = 0;
            do {
              fVar13 = (float10)_CIpow();
              iVar12 = iVar11 + 2;
              local_20._0_2_ = (undefined2)(int)ROUND(fVar13 * (float10)65535.0 + (float10)0.5);
              *(undefined2 *)(iVar11 + *(int *)(param_1[0x5d] + iVar9 * 4)) = (undefined2)local_20;
              iVar11 = iVar12;
            } while (iVar12 < 0x200);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
      }
    }
  }
  return;
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
    else if (*(char *)((int)param_1 + 9) == '\x10') {
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
          uVar6 = (uint)CONCAT11(puVar3[3],puVar3[4]) + (uint)CONCAT11(puVar3[1],puVar3[2]) & 0xffff
          ;
          uVar5 = (uint)CONCAT11(puVar3[-1],*puVar3) + (uint)CONCAT11(puVar3[1],puVar3[2]) & 0xffff;
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
  return;
}



void __cdecl FUN_0040f950(int *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  undefined2 uVar9;
  double dVar10;
  bool bVar11;
  int *piVar12;
  undefined uVar13;
  ushort uVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  ushort uVar18;
  byte bVar19;
  uint uVar20;
  float10 fVar21;
  undefined2 local_3c;
  byte local_3a;
  undefined local_38 [8];
  int local_30;
  undefined local_2c;
  short local_24;
  
  piVar12 = param_1;
  bVar4 = *(byte *)((int)param_1 + 0x126);
  uVar20 = param_1[0x1c];
  if (((uVar20 & 0x100) != 0) && ((uVar20 & 0x1000) != 0)) {
    if ((bVar4 & 2) != 0) {
      if (bVar4 == 3) {
        pbVar15 = (byte *)((uint)*(byte *)(param_1 + 0x4e) * 3 + param_1[0x45]);
        *(ushort *)((int)param_1 + 0x13a) = (ushort)*pbVar15;
        *(ushort *)(param_1 + 0x4f) = (ushort)pbVar15[1];
        uVar14 = (ushort)pbVar15[2];
        goto LAB_0040fa32;
      }
      goto switchD_0040f9a3_caseD_3;
    }
    switch(*(undefined *)((int)param_1 + 0x127)) {
    case 1:
      uVar14 = *(short *)(param_1 + 0x50) * 0xff;
      break;
    case 2:
      uVar14 = *(short *)(param_1 + 0x50) * 0x55;
      break;
    default:
      goto switchD_0040f9a3_caseD_3;
    case 4:
      uVar14 = *(short *)(param_1 + 0x50) * 0x11;
      break;
    case 8:
    case 0x10:
      uVar14 = *(ushort *)(param_1 + 0x50);
      *(ushort *)(param_1 + 0x4f) = uVar14;
      *(ushort *)((int)param_1 + 0x13a) = uVar14;
      goto LAB_0040fa32;
    }
    *(ushort *)(param_1 + 0x50) = uVar14;
    *(ushort *)(param_1 + 0x4f) = uVar14;
    *(ushort *)((int)param_1 + 0x13a) = uVar14;
LAB_0040fa32:
    *(ushort *)((int)param_1 + 0x13e) = uVar14;
  }
switchD_0040f9a3_caseD_3:
  *(int *)((int)param_1 + 0x142) = param_1[0x4e];
  *(int *)((int)param_1 + 0x146) = param_1[0x4f];
  *(undefined2 *)((int)param_1 + 0x14a) = *(undefined2 *)(param_1 + 0x50);
  if (((bVar4 == 3) && (*(short *)((int)param_1 + 0x11a) != 0)) &&
     (ABS((float)param_1[0x58] * (float)param_1[0x57] - 1.0) < 0.05)) {
    bVar11 = false;
    iVar17 = 0;
    if (*(short *)((int)param_1 + 0x11a) != 0) {
      do {
        if ((*(char *)(param_1[0x62] + iVar17) != '\0') && (*(char *)(param_1[0x62] + iVar17) != -1)
           ) {
          bVar11 = true;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)(uint)*(ushort *)((int)param_1 + 0x11a));
      if (bVar11) goto LAB_0040fad8;
    }
    param_1[0x1c] = uVar20 & 0xffffdfff;
  }
LAB_0040fad8:
  if ((param_1[0x1c] & 0x602000U) == 0) {
    if (((char)param_1[0x1c] < '\0') && (bVar4 == 3)) {
      uVar14 = *(ushort *)((int)param_1 + 0x11a);
      bVar6 = *(byte *)(param_1 + 0x4f);
      bVar19 = *(byte *)((int)param_1 + 0x13a);
      iVar17 = 0;
      bVar5 = *(byte *)((int)param_1 + 0x13e);
      if (uVar14 != 0) {
        pbVar15 = (byte *)(param_1[0x45] + 2);
        do {
          cVar3 = *(char *)(param_1[0x62] + iVar17);
          if (cVar3 == '\0') {
            *(ushort *)(pbVar15 + -2) = CONCAT11(bVar6,bVar19);
            *pbVar15 = bVar5;
          }
          else if (cVar3 != -1) {
            bVar7 = *(byte *)(param_1[0x62] + iVar17);
            uVar18 = (0xff - (ushort)bVar7) * (ushort)bVar19 + (ushort)pbVar15[-2] * (ushort)bVar7 +
                     0x80;
            pbVar15[-2] = (byte)((uint)(uVar18 >> 8) + (uint)uVar18 >> 8);
            uVar18 = (0xff - (ushort)*(byte *)(param_1[0x62] + iVar17)) * (ushort)bVar6 +
                     (ushort)pbVar15[-1] * (ushort)*(byte *)(param_1[0x62] + iVar17) + 0x80;
            pbVar15[-1] = (byte)((uint)(uVar18 >> 8) + (uint)uVar18 >> 8);
            uVar18 = (0xff - (ushort)*(byte *)(param_1[0x62] + iVar17)) * (ushort)bVar5 +
                     (ushort)*pbVar15 * (ushort)*(byte *)(param_1[0x62] + iVar17) + 0x80;
            *pbVar15 = (byte)((uint)(uVar18 >> 8) + (uint)uVar18 >> 8);
          }
          iVar17 = iVar17 + 1;
          pbVar15 = pbVar15 + 3;
        } while (iVar17 < (int)(uint)uVar14);
      }
    }
    goto LAB_0041043f;
  }
  FUN_0040f160(param_1);
  if ((*(byte *)(param_1 + 0x1c) & 0x80) == 0) {
    if (bVar4 == 3) {
      uVar20 = (uint)*(ushort *)(param_1 + 0x46);
      if (uVar20 != 0) {
        pbVar15 = (byte *)(param_1[0x45] + 2);
        do {
          pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + param_1[0x59]);
          pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + param_1[0x59]);
          *pbVar15 = *(byte *)((uint)*pbVar15 + param_1[0x59]);
          pbVar15 = pbVar15 + 3;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    goto LAB_0041043f;
  }
  if (bVar4 != 3) {
    iVar17 = (1 << (*(byte *)((int)param_1 + 0x127) & 0x1f)) + -1;
    dVar10 = (double)iVar17;
    if (iVar17 < 0) {
      dVar10 = dVar10 + 4294967296.0;
    }
    fVar21 = (float10)_CIpow();
    local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
    *(short *)((int)param_1 + 0x14a) = local_24;
    fVar21 = (float10)_CIpow();
    sVar8 = *(short *)((int)param_1 + 0x13a);
    local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
    *(short *)(param_1 + 0x50) = local_24;
    if (((sVar8 == *(short *)(param_1 + 0x4f)) && (sVar8 == *(short *)((int)param_1 + 0x13e))) &&
       (sVar8 == local_24)) {
      uVar9 = *(undefined2 *)((int)param_1 + 0x14a);
      *(undefined2 *)(param_1 + 0x52) = uVar9;
      *(undefined2 *)((int)param_1 + 0x146) = uVar9;
      *(undefined2 *)(param_1 + 0x51) = uVar9;
      *(short *)((int)param_1 + 0x13e) = local_24;
      *(short *)(param_1 + 0x4f) = local_24;
      *(short *)((int)param_1 + 0x13a) = local_24;
    }
    else {
      fVar21 = (float10)_CIpow();
      local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
      *(short *)(param_1 + 0x51) = local_24;
      fVar21 = (float10)_CIpow();
      local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
      *(short *)((int)param_1 + 0x146) = local_24;
      fVar21 = (float10)_CIpow();
      local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
      *(short *)(param_1 + 0x52) = local_24;
      fVar21 = (float10)_CIpow();
      local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
      *(short *)((int)param_1 + 0x13a) = local_24;
      fVar21 = (float10)_CIpow();
      local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
      *(short *)(param_1 + 0x4f) = local_24;
      fVar21 = (float10)_CIpow();
      local_24 = (short)(int)ROUND(fVar21 * (float10)dVar10 + (float10)0.5);
      *(short *)((int)param_1 + 0x13e) = local_24;
    }
    goto LAB_0041043f;
  }
  uVar14 = *(ushort *)(param_1 + 0x46);
  cVar3 = *(char *)(param_1 + 0x4c);
  if (cVar3 == '\x02') {
    iVar17 = param_1[0x59];
    local_3c = CONCAT11(*(undefined *)((uint)*(ushort *)(param_1 + 0x4f) + iVar17),
                        *(undefined *)(iVar17 + (uint)*(ushort *)((int)param_1 + 0x13a)));
    local_3a = *(byte *)((uint)*(ushort *)((int)param_1 + 0x13e) + iVar17);
    iVar17 = param_1[0x5b];
    bVar19 = *(byte *)(iVar17 + (uint)*(ushort *)((int)param_1 + 0x13a));
    local_38._1_2_ =
         CONCAT11(*(undefined *)(iVar17 + (uint)*(ushort *)((int)param_1 + 0x13e)),
                  *(undefined *)(iVar17 + (uint)*(ushort *)(param_1 + 0x4f)));
  }
  else {
    if (cVar3 == '\x01') {
LAB_0040fbb4:
      fVar2 = 1.0;
    }
    else {
      if (cVar3 == '\x02') {
        fVar2 = (float)param_1[0x57];
      }
      else {
        if (cVar3 != '\x03') goto LAB_0040fbb4;
        fVar2 = (float)param_1[0x4d];
      }
      fVar2 = ((float)param_1[0x58] * fVar2) / 1.0;
    }
    if (ABS(fVar2 - 1.0) <= 0.05) {
      fVar21 = (float10)_CIpow();
      local_38[0] = (byte)(int)ROUND(fVar21 * (float10)255.0 + (float10)0.5);
      uVar13 = local_38[0];
      fVar21 = (float10)_CIpow();
      local_38[0] = (byte)(int)ROUND(fVar21 * (float10)255.0 + (float10)0.5);
      local_3c = CONCAT11(local_38[0],uVar13);
      fVar21 = (float10)_CIpow();
      local_38[0] = (byte)(int)ROUND(fVar21 * (float10)255.0 + (float10)0.5);
      local_3a = local_38[0];
    }
    else {
      local_3c = CONCAT11(*(undefined *)(param_1 + 0x4f),*(undefined *)((int)param_1 + 0x13a));
      local_3a = *(byte *)((int)param_1 + 0x13e);
    }
    fVar21 = (float10)_CIpow();
    local_38[0] = (byte)(int)ROUND(fVar21 * (float10)255.0 + (float10)0.5);
    bVar19 = local_38[0];
    fVar21 = (float10)_CIpow();
    local_38[0] = (byte)(int)ROUND(fVar21 * (float10)255.0 + (float10)0.5);
    fVar21 = (float10)_CIpow();
    local_2c = (undefined)(int)ROUND(fVar21 * (float10)255.0 + (float10)0.5);
    local_38._0_3_ = CONCAT12(local_2c,CONCAT11(local_38[0],local_38[0]));
  }
  iVar17 = 0;
  if (uVar14 != 0) {
    pbVar15 = (byte *)(param_1[0x45] + 2);
    do {
      if (iVar17 < (int)(uint)*(ushort *)((int)param_1 + 0x11a)) {
        cVar3 = *(char *)(param_1[0x62] + iVar17);
        if (cVar3 == -1) goto LAB_0040ff16;
        if (cVar3 == '\0') {
          *(undefined2 *)(pbVar15 + -2) = local_3c;
          *pbVar15 = local_3a;
        }
        else {
          bVar5 = *(byte *)(param_1[0x62] + iVar17);
          uVar18 = (ushort)*(byte *)((uint)pbVar15[-2] + param_1[0x5b]) * (ushort)bVar5 +
                   (0xff - (ushort)bVar5) * (ushort)bVar19 + 0x80;
          pbVar15[-2] = *(byte *)(((int)((uint)(uVar18 >> 8) + (uint)uVar18) >> 8 & 0xffU) +
                                 param_1[0x5a]);
          uVar18 = (ushort)*(byte *)((uint)pbVar15[-1] + param_1[0x5b]) *
                   (ushort)*(byte *)(param_1[0x62] + iVar17) +
                   (0xff - (ushort)*(byte *)(param_1[0x62] + iVar17)) * (local_38._1_2_ & 0xff) +
                   0x80;
          pbVar15[-1] = *(byte *)(((int)((uint)(uVar18 >> 8) + (uint)uVar18) >> 8 & 0xffU) +
                                 param_1[0x5a]);
          uVar18 = (ushort)*(byte *)((uint)*pbVar15 + param_1[0x5b]) *
                   (ushort)*(byte *)(param_1[0x62] + iVar17) +
                   (0xff - (ushort)*(byte *)(param_1[0x62] + iVar17)) *
                   ((ushort)local_38._1_2_ >> 8) + 0x80;
          *pbVar15 = *(byte *)(((int)((uint)(uVar18 >> 8) + (uint)uVar18) >> 8 & 0xffU) +
                              param_1[0x5a]);
        }
      }
      else {
LAB_0040ff16:
        pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + param_1[0x59]);
        pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + param_1[0x59]);
        *pbVar15 = *(byte *)((uint)*pbVar15 + param_1[0x59]);
      }
      iVar17 = iVar17 + 1;
      pbVar15 = pbVar15 + 3;
    } while (iVar17 < (int)(uint)uVar14);
  }
LAB_0041043f:
  if (((*(byte *)(param_1 + 0x1c) & 8) != 0) && (bVar4 == 3)) {
    pbVar15 = (byte *)((int)param_1 + 0x17e);
    piVar1 = param_1 + 0x46;
    iVar17 = 8 - (uint)*(byte *)(param_1 + 0x5f);
    param_1 = (int *)(8 - (uint)*(byte *)((int)param_1 + 0x17d));
    local_30 = 8 - (uint)*pbVar15;
    if ((iVar17 < 0) || (8 < iVar17)) {
      iVar17 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((local_30 < 0) || (8 < local_30)) {
      local_30 = 0;
    }
    if (*(ushort *)piVar1 != 0) {
      iVar16 = 0;
      uVar20 = (uint)*(ushort *)piVar1;
      do {
        *(byte *)(piVar12[0x45] + iVar16) =
             *(byte *)(piVar12[0x45] + iVar16) >> ((byte)iVar17 & 0x1f);
        pbVar15 = (byte *)(piVar12[0x45] + 1 + iVar16);
        *pbVar15 = *pbVar15 >> ((byte)param_1 & 0x1f);
        pbVar15 = (byte *)(piVar12[0x45] + 2 + iVar16);
        *pbVar15 = *pbVar15 >> ((byte)local_30 & 0x1f);
        iVar16 = iVar16 + 3;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
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
  undefined auStack_30 [44];
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
                 param_1[0x5b],param_1[0x5c],param_1[0x5d],param_1[0x5e],(byte)param_1[0x56]);
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
    FUN_0040c570(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),(byte *)((int)param_1 + 0x181));
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
  ___security_check_cookie_4((uint)param_1 ^ (uint)auStack_30);
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
  byte *pbVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      do {
        *param_2 = ~*param_2;
        param_2 = param_2 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else if (*(char *)(param_1 + 8) == '\x04') {
    if (*(char *)(param_1 + 9) == '\b') {
      if (*(int *)(param_1 + 4) != 0) {
        iVar2 = (*(int *)(param_1 + 4) - 1U >> 1) + 1;
        do {
          *param_2 = ~*param_2;
          param_2 = param_2 + 2;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return;
      }
    }
    else if ((*(char *)(param_1 + 9) == '\x10') && (*(int *)(param_1 + 4) != 0)) {
      pbVar1 = param_2 + 1;
      iVar2 = (*(int *)(param_1 + 4) - 1U >> 2) + 1;
      do {
        pbVar1[-1] = ~pbVar1[-1];
        *pbVar1 = ~*pbVar1;
        pbVar1 = pbVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}



void __cdecl FUN_00410a80(int *param_1,undefined *param_2)

{
  undefined uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    for (iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = uVar1;
      param_2 = param_2 + 2;
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
    else if (bVar1 == 2) {
      puVar3 = &DAT_0041c140;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_0041c240;
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
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_2 = puVar3[1];
          param_2[1] = puVar3[2];
          param_2[2] = puVar3[3];
          param_2 = param_2 + 3;
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
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_2 = puVar3[2];
          param_2[1] = puVar3[3];
          param_2[2] = puVar3[4];
          param_2[3] = puVar3[5];
          param_2[4] = puVar3[6];
          param_2[5] = puVar3[7];
          param_2 = param_2 + 6;
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
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = puVar3[1];
        param_2 = param_2 + 1;
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
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = puVar3[2];
        param_2[1] = puVar3[3];
        param_2 = param_2 + 2;
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
  undefined *puVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar4 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (bVar1 == 2) {
        if (iVar4 != 0) {
          do {
            uVar2 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar2;
            param_2 = param_2 + 3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (iVar4 != 0)) {
        do {
          uVar2 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar2;
          param_2 = param_2 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if (bVar1 == 2) {
        if (iVar4 != 0) {
          puVar3 = param_2 + 1;
          do {
            uVar2 = puVar3[-1];
            puVar3[-1] = puVar3[3];
            puVar3[3] = uVar2;
            uVar2 = *puVar3;
            *puVar3 = puVar3[4];
            puVar3[4] = uVar2;
            puVar3 = puVar3 + 6;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (iVar4 != 0)) {
        puVar3 = param_2 + 1;
        do {
          uVar2 = puVar3[-1];
          puVar3[-1] = puVar3[3];
          puVar3[3] = uVar2;
          uVar2 = *puVar3;
          *puVar3 = puVar3[4];
          puVar3[4] = uVar2;
          puVar3 = puVar3 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
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



void __fastcall
FUN_00410ef0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,double param_5,
            double param_6,double param_7,double param_8,double param_9,double param_10,
            double param_11,double param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  ulonglong uVar6;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    fVar1 = (float)param_5;
    if (0.0 <= fVar1) {
      if ((float)param_6 < 0.0) {
        FUN_004087f0(param_3,"Ignoring attempt to set negative chromaticity value");
        return;
      }
      if (((float)param_7 < 0.0) || ((float)param_8 < 0.0)) {
LAB_004111f9:
        FUN_004087f0(param_3,"Ignoring attempt to set negative chromaticity value");
        return;
      }
      fVar5 = (float)param_9;
      if (0.0 <= fVar5) {
        fVar4 = (float)param_10;
        if (fVar4 < 0.0) {
          FUN_004087f0(param_3,"Ignoring attempt to set negative chromaticity value");
          return;
        }
        fVar3 = (float)param_11;
        if (fVar3 < 0.0) goto LAB_004111f9;
        fVar2 = (float)param_12;
        if (0.0 <= fVar2) {
          if (21474.83 < fVar1) {
            FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (21474.83 < (float)param_6) {
            FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (21474.83 < (float)param_7) {
            FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (21474.83 < (float)param_8) {
            FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (21474.83 < fVar5) {
            FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if (21474.83 < fVar4) {
            FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
            return;
          }
          if ((fVar3 <= 21474.83) && (fVar2 <= 21474.83)) {
            *(float *)(param_4 + 0x80) = fVar1;
            *(float *)(param_4 + 0x84) = (float)param_6;
            *(float *)(param_4 + 0x88) = (float)param_7;
            *(float *)(param_4 + 0x8c) = (float)param_8;
            *(float *)(param_4 + 0x90) = fVar5;
            *(float *)(param_4 + 0x94) = fVar4;
            *(float *)(param_4 + 0x98) = fVar3;
            *(float *)(param_4 + 0x9c) = fVar2;
            uVar6 = FUN_00412520(param_3,param_2);
            *(int *)(param_4 + 0x100) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX,(int)(uVar6 >> 0x20));
            *(int *)(param_4 + 0x104) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX_00,(int)(uVar6 >> 0x20));
            *(int *)(param_4 + 0x108) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX_01,(int)(uVar6 >> 0x20));
            *(int *)(param_4 + 0x10c) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX_02,(int)(uVar6 >> 0x20));
            *(int *)(param_4 + 0x110) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX_03,(int)(uVar6 >> 0x20));
            *(int *)(param_4 + 0x114) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX_04,(int)(uVar6 >> 0x20));
            *(int *)(param_4 + 0x118) = (int)uVar6;
            uVar6 = FUN_00412520(extraout_ECX_05,(int)(uVar6 >> 0x20));
            *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 4;
            *(int *)(param_4 + 0x11c) = (int)uVar6;
            return;
          }
          FUN_004087f0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
          return;
        }
      }
    }
    FUN_004087f0(param_3,"Ignoring attempt to set negative chromaticity value");
  }
  return;
}



void __cdecl
FUN_00411230(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (((-1 < param_3) && (((-1 < param_4 && (-1 < param_5)) && (-1 < param_6)))) &&
       ((((-1 < param_7 && (-1 < param_8)) && (-1 < param_9)) && (-1 < param_10)))) {
      if ((((float)param_3 <= 2.147484e+09) && ((float)param_4 <= 2.147484e+09)) &&
         (((float)param_5 <= 2.147484e+09 &&
          (((((float)param_6 <= 2.147484e+09 && ((float)param_7 <= 2.147484e+09)) &&
            ((float)param_8 <= 2.147484e+09)) &&
           (((float)param_9 <= 2.147484e+09 && ((float)param_10 <= 2.147484e+09)))))))) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
        *(int *)(param_2 + 0x100) = param_3;
        *(int *)(param_2 + 0x114) = param_8;
        *(int *)(param_2 + 0x118) = param_9;
        *(int *)(param_2 + 0x104) = param_4;
        *(int *)(param_2 + 0x10c) = param_6;
        *(int *)(param_2 + 0x110) = param_7;
        *(int *)(param_2 + 0x108) = param_5;
        *(int *)(param_2 + 0x11c) = param_10;
        *(float *)(param_2 + 0x80) = (float)param_3 / 100000.0;
        *(float *)(param_2 + 0x84) = (float)param_4 / 100000.0;
        *(float *)(param_2 + 0x88) = (float)param_5 / 100000.0;
        *(float *)(param_2 + 0x8c) = (float)param_6 / 100000.0;
        *(float *)(param_2 + 0x90) = (float)param_7 / 100000.0;
        *(float *)(param_2 + 0x94) = (float)param_8 / 100000.0;
        *(float *)(param_2 + 0x98) = (float)param_9 / 100000.0;
        *(float *)(param_2 + 0x9c) = (float)param_10 / 100000.0;
        return;
      }
      FUN_004087f0(param_1,"Ignoring attempt to set chromaticity value exceeding 21474.83");
      return;
    }
    FUN_004087f0(param_1,"Ignoring attempt to set negative chromaticity value");
  }
  return;
}



void __fastcall
FUN_00411420(undefined4 param_1,undefined4 param_2,int param_3,int param_4,double param_5)

{
  float fVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 extraout_ST0;
  ulonglong uVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    fVar1 = (float)param_5;
    if (21474.83 < fVar1) {
      FUN_004087f0(param_3,"Limiting gamma to 21474.83");
      fVar1 = 21474.83;
      param_1 = extraout_ECX;
      param_2 = extraout_EDX;
    }
    *(float *)(param_4 + 0x28) = fVar1;
    uVar2 = FUN_00412520(param_1,param_2);
    *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 1;
    *(int *)(param_4 + 0xfc) = (int)uVar2;
    if ((float10)0 == extraout_ST0) {
      FUN_004087f0(param_3,"Setting gamma=0");
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
    *(float *)(param_2 + 0x28) = (float)param_3 / 100000.0;
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
  else if ((((param_8 != 2) && (param_8 != 4)) && (param_8 != 6)) || (7 < param_7))
  goto LAB_004116ee;
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
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pvVar4 = (void *)FUN_00408c20(param_1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(void **)(param_2 + 0xa0) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_004087f0((int)param_1,"Insufficient memory for pCAL purpose.");
      return;
    }
    memcpy(pvVar4,param_3,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(undefined4 *)(param_2 + 0xa4) = param_4;
    *(undefined *)(param_2 + 0xb5) = (undefined)param_7;
    *(undefined4 *)(param_2 + 0xa8) = param_5;
    *(undefined *)(param_2 + 0xb4) = param_6;
    pcVar3 = param_8;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pvVar4 = (void *)FUN_00408c20(param_1,(size_t)(pcVar3 + (1 - (int)(param_8 + 1))));
    *(void **)(param_2 + 0xac) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_004087f0((int)param_1,"Insufficient memory for pCAL units.");
      return;
    }
    memcpy(pvVar4,param_8,(size_t)(pcVar3 + (1 - (int)(param_8 + 1))));
    iVar5 = FUN_00408c20(param_1,param_7 * 4 + 4);
    *(int *)(param_2 + 0xb0) = iVar5;
    if (iVar5 == 0) {
      FUN_004087f0((int)param_1,"Insufficient memory for pCAL params.");
      return;
    }
    iVar8 = 0;
    *(undefined4 *)(iVar5 + param_7 * 4) = 0;
    if (0 < param_7) {
      do {
        pcVar6 = *(char **)(param_9 + iVar8 * 4);
        pcVar3 = pcVar6 + 1;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        uVar7 = FUN_00408c20(param_1,(size_t)(pcVar6 + (1 - (int)pcVar3)));
        *(undefined4 *)(*(int *)(param_2 + 0xb0) + iVar8 * 4) = uVar7;
        ppvVar1 = (void **)(*(int *)(param_2 + 0xb0) + iVar8 * 4);
        if (*ppvVar1 == (void *)0x0) {
          FUN_004087f0((int)param_1,"Insufficient memory for pCAL parameter.");
          return;
        }
        memcpy(*ppvVar1,*(void **)(param_9 + iVar8 * 4),(size_t)(pcVar6 + (1 - (int)pcVar3)));
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_7);
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
    param_1[0x45] = (int)_Dst;
    memset(_Dst,0,0x300);
    memcpy((void *)param_1[0x45],param_3,param_4 * 3);
    *(int *)(param_2 + 0x10) = param_1[0x45];
    *(short *)(param_1 + 0x46) = (short)param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x1000;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    *(short *)(param_2 + 0x14) = (short)param_4;
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
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00411b10(param_1,param_2,param_3);
    FUN_00411420(extraout_ECX,extraout_EDX,param_1,param_2,0.4545499980449677);
    FUN_004114a0(param_1,param_2,0xb18f);
    FUN_00411230(param_1,param_2,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    FUN_00410ef0(extraout_ECX_00,extraout_EDX_00,param_1,param_2,0.3127000033855438,
                 0.3289999961853027,0.6399999856948853,0.3300000131130219,0.300000011920929,
                 0.6000000238418579,0.1500000059604645,0.05999999865889549);
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
  int iVar4;
  
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
    iVar4 = (int)pvVar3 - (int)param_3;
    do {
      cVar1 = *param_3;
      param_3[iVar4] = cVar1;
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
  char *pcVar4;
  size_t _Size;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
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
    ppcVar8 = (char **)(param_3 + 8);
    do {
      pcVar4 = ppcVar8[-1];
      ppcVar7 = (char **)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
      if (pcVar4 != (char *)0x0) {
        pcVar5 = pcVar4 + 1;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        _Size = (int)pcVar4 - (int)pcVar5;
        if ((int)ppcVar8[-2] < 1) {
          pcVar4 = *ppcVar8;
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
            pcVar4 = (char *)0x0;
            *ppcVar7 = (char *)0xffffffff;
          }
          else {
            pcVar5 = pcVar4 + 1;
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            pcVar4 = pcVar4 + -(int)pcVar5;
            *ppcVar7 = ppcVar8[-2];
          }
          pcVar5 = (char *)FUN_00408c20(param_1,(size_t)(pcVar4 + _Size + 4));
          ppcVar7[1] = pcVar5;
          if (pcVar5 == (char *)0x0) {
            return 1;
          }
          memcpy(pcVar5,ppcVar8[-1],_Size);
          ppcVar7[1][_Size] = '\0';
          ppcVar7[2] = ppcVar7[1] + _Size + 1;
          if (pcVar4 != (char *)0x0) {
            memcpy(ppcVar7[1] + _Size + 1,*ppcVar8,(size_t)pcVar4);
          }
          pcVar4[(int)ppcVar7[2]] = '\0';
          ppcVar7[3] = pcVar4;
          ppcVar6 = (char **)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
          *ppcVar6 = *ppcVar7;
          ppcVar6[1] = ppcVar7[1];
          ppcVar6[2] = ppcVar7[2];
          ppcVar6[3] = ppcVar7[3];
          *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
        }
        else {
          FUN_004087f0((int)param_1,"iTXt chunk not supported.");
        }
      }
      local_4 = local_4 + 1;
      ppcVar8 = ppcVar8 + 4;
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
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if (param_3 != (void *)0x0) {
      FUN_00407e80((int)param_1,param_2,0x2000,0);
      pvVar1 = FUN_00408ba0(param_1,0x100);
      *(void **)(param_2 + 0x4c) = pvVar1;
      param_1[0x62] = (int)pvVar1;
      memcpy(*(void **)(param_2 + 0x4c),param_3,param_4);
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x2000;
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x50) = *param_5;
      *(undefined4 *)(param_2 + 0x54) = param_5[1];
      *(undefined2 *)(param_2 + 0x58) = *(undefined2 *)(param_5 + 2);
      if (param_4 == 0) {
        param_4 = 1;
      }
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(short *)(param_2 + 0x16) = (short)param_4;
  }
  return;
}



void __cdecl FUN_00411fc0(int *param_1,int param_2,char **param_3,int param_4)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  
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
        ppcVar5 = (char **)((*(int *)(iVar2 + 0xd8) + param_2) * 0x10 + (int)_Dst);
        pcVar4 = pcVar3 + 1;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (char *)FUN_00408ba0(param_1,(size_t)(pcVar3 + (1 - (int)pcVar4)));
        *ppcVar5 = pcVar3;
        pcVar4 = *param_3;
        do {
          cVar1 = *pcVar4;
          *pcVar3 = cVar1;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar4 = (char *)FUN_00408ba0(param_1,(int)param_3[3] << 4);
        ppcVar5[2] = pcVar4;
        memcpy(pcVar4,param_3[2],(int)param_3[3] << 4);
        ppcVar5[3] = param_3[3];
        *(undefined *)(ppcVar5 + 1) = *(undefined *)(param_3 + 1);
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



// Library Function - Single Match
//  @__security_check_cookie@4
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void __fastcall ___security_check_cookie_4(int param_1)

{
  if (param_1 == DAT_0041c340) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___tmainCRTStartup
// 
// Library: Visual Studio 2005 Release

int ___tmainCRTStartup(void)

{
  bool bVar1;
  void *Exchange;
  void *pvVar2;
  int iVar3;
  BOOL BVar4;
  
  Exchange = StackBase;
  bVar1 = false;
  do {
    pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_0041ced8,(LONG)Exchange,0);
    if (pvVar2 == (void *)0x0) {
LAB_004122dc:
      if (DAT_0041ced4 == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_0041ced4 == 0) {
        DAT_0041ced4 = 1;
        iVar3 = _initterm_e(&DAT_00416160,&DAT_0041616c);
        if (iVar3 != 0) {
          return 0xff;
        }
      }
      else {
        _DAT_0041ca3c = 1;
      }
      if (DAT_0041ced4 == 1) {
        _initterm(&DAT_00416154,&DAT_0041615c);
        DAT_0041ced4 = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_0041ced8,0);
      }
      if ((DAT_0041cee4 != (code *)0x0) &&
         (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0041cee4), BVar4 != 0)) {
        (*DAT_0041cee4)(0,2,0);
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
    if (pvVar2 == Exchange) {
      bVar1 = true;
      goto LAB_004122dc;
    }
    Sleep(1000);
  } while( true );
}



void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}



void _setjmp3(void)

{
                    // WARNING: Could not recover jumptable at 0x00412500. Too many branches
                    // WARNING: Treating indirect jump as call
  _setjmp3();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412506. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041250c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
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

ulonglong __fastcall FUN_00412520(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (_DAT_0041cecc == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < ((uint)(float)(in_ST0 - (float10)uVar1) ^ 0x80000000));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_gsfailure
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
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
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_0041cb58 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041cb5c = &stack0x00000004;
  _DAT_0041ca98 = 0x10001;
  _DAT_0041ca40 = 0xc0000409;
  _DAT_0041ca44 = 1;
  local_32c = DAT_0041c340;
  local_328 = DAT_0041c344;
  _DAT_0041ca4c = unaff_retaddr;
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
  DAT_0041cb50 = unaff_retaddr;
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



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004126d0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



// Library Function - Single Match
//  __ValidateImageBase
// 
// Library: Visual Studio 2005 Release

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)(*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



// Library Function - Single Match
//  __FindPESection
// 
// Library: Visual Studio 2005 Release

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
//  __IsNonwritableInCurrentImage
// 
// Library: Visual Studio 2005 Release

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  PBYTE pImageBase;
  
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if ((BVar1 != 0) &&
     (p_Var2 = __FindPESection(pImageBase,(int)pTarget - (int)pImageBase),
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
//  __SEH_prolog4
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041c340 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __SEH_epilog4
// 
// Library: Visual Studio

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2005 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_0041c340 == 0xbb40e64e) || ((DAT_0041c340 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_0041c340 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_0041c340 == 0xbb40e64e) {
      DAT_0041c340 = 0xbb40e64f;
    }
    else if ((DAT_0041c340 & 0xffff0000) == 0) {
      DAT_0041c340 = DAT_0041c340 | DAT_0041c340 << 0x10;
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
//  _has_osfxsr_set
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release

undefined4 _has_osfxsr_set(void)

{
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00412a93)
// WARNING: Removing unreachable block (ram,0x00412a80)
// Library Function - Single Match
//  __get_sse2_info
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
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
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
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



void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ac6. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook(param_1);
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
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
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
      *(code **)(param_1 + 0x20) = FUN_00414650;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_00414670;
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
  
  *(undefined **)(in_EAX + 0x4c) = &DAT_00417b70;
  *(undefined4 *)(in_EAX + 0x54) = 9;
  *(undefined **)(in_EAX + 0x50) = &DAT_00418370;
  *(undefined4 *)(in_EAX + 0x58) = 5;
  return;
}



undefined4 FUN_00412c60(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  size_t _Size;
  
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
  uVar4 = in_EAX - *(int *)(unaff_EBX + 0x10);
  uVar3 = *(uint *)(iVar1 + 0x28);
  if (uVar3 <= uVar4) {
    memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EBX + 0xc) - uVar3),uVar3);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  uVar3 = uVar3 - *(int *)(iVar1 + 0x30);
  if (uVar4 < uVar3) {
    uVar3 = uVar4;
  }
  memcpy((void *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30)),
         (void *)(*(int *)(unaff_EBX + 0xc) - uVar4),uVar3);
  _Size = uVar4 - uVar3;
  if (_Size != 0) {
    memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EBX + 0xc) - _Size),_Size);
    *(size_t *)(iVar1 + 0x30) = _Size;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar3;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar3;
  }
  return 0;
}



int __cdecl FUN_00412d50(uint **param_1,int param_2)

{
  byte *pbVar1;
  undefined uVar2;
  uint *puVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *extraout_EDX;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *_Src;
  undefined *puVar15;
  uint *local_2c;
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  char local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  uint *local_14;
  uint *local_10;
  int local_c;
  uint *local_8;
  uint *local_4;
  
  if ((((param_1 == (uint **)0x0) || (puVar3 = param_1[7], puVar3 == (uint *)0x0)) ||
      (param_1[3] == (uint *)0x0)) || ((*param_1 == (uint *)0x0 && (param_1[1] != (uint *)0x0)))) {
    return -2;
  }
  if (*puVar3 == 0xb) {
    *puVar3 = 0xc;
  }
  local_14 = param_1[3];
  puVar7 = param_1[1];
  uVar13 = puVar3[0xe];
  _Src = *param_1;
  local_20 = param_1[4];
  uVar14 = *puVar3;
  puVar15 = (undefined *)puVar3[0xf];
  local_c = 0;
  local_2c = puVar7;
  local_4 = puVar7;
  local_24 = uVar13;
  local_10 = local_20;
  do {
    if (0x1c < uVar14) {
      return -2;
    }
    puVar5 = puVar7;
    puVar10 = local_8;
    switch(uVar14) {
    case 0:
      if (puVar3[2] == 0) {
        *puVar3 = 0xc;
      }
      else {
        for (; puVar7 = local_2c, puVar15 < (undefined *)0x10; puVar15 = puVar15 + 8) {
          if (puVar5 == (uint *)0x0) goto LAB_004141ac;
          bVar9 = *(byte *)_Src;
          puVar5 = (uint *)((int)puVar5 + -1);
          _Src = (uint *)((int)_Src + 1);
          uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
          local_2c = puVar5;
          local_24 = uVar13;
        }
        local_2c = puVar7;
        if (((*(byte *)(puVar3 + 2) & 2) == 0) || (uVar13 != 0x8b1f)) {
          puVar3[4] = 0;
          if (puVar3[8] != 0) {
            *(undefined4 *)(puVar3[8] + 0x30) = 0xffffffff;
          }
          if (((*(byte *)(puVar3 + 2) & 1) == 0) ||
             (((uVar13 & 0xff) * 0x100 + (uVar13 >> 8)) % 0x1f != 0)) {
            param_1[6] = (uint *)"incorrect header check";
          }
          else if (((byte)uVar13 & 0xf) == 8) {
            local_24 = uVar13 >> 4;
            uVar14 = (local_24 & 0xf) + 8;
            puVar15 = puVar15 + -4;
            if (uVar14 < puVar3[9] || uVar14 == puVar3[9]) {
              puVar3[5] = 1 << (sbyte)uVar14;
              puVar5 = (uint *)FUN_00415030(0,(byte *)0x0,0);
              puVar3[6] = (uint)puVar5;
              param_1[0xc] = puVar5;
              *puVar3 = ~(uVar13 >> 0xc) & 2 | 9;
              uVar13 = 0;
              local_24 = 0;
              puVar15 = (undefined *)0x0;
              break;
            }
            param_1[6] = (uint *)"invalid window size";
            uVar13 = local_24;
          }
          else {
            param_1[6] = (uint *)"unknown compression method";
          }
          goto LAB_00414148;
        }
        uVar14 = FUN_00414630(0,(uint *)0x0,0);
        puVar3[6] = uVar14;
        local_1c = '\x1f';
        local_1b = 0x8b;
        uVar14 = FUN_00414630(puVar3[6],(uint *)&local_1c,2);
        uVar13 = 0;
        puVar3[6] = uVar14;
        local_24 = 0;
        puVar15 = (undefined *)0x0;
        *puVar3 = 1;
      }
      break;
    case 1:
      for (; puVar15 < (undefined *)0x10; puVar15 = puVar15 + 8) {
        puVar5 = puVar7;
        if (puVar7 == (uint *)0x0) goto LAB_004141ac;
        bVar9 = *(byte *)_Src;
        puVar7 = (uint *)((int)puVar7 + -1);
        _Src = (uint *)((int)_Src + 1);
        uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
        local_2c = puVar7;
        local_24 = uVar13;
      }
      puVar3[4] = uVar13;
      if ((char)uVar13 == '\b') {
        if ((uVar13 & 0xe000) == 0) {
          if ((uint *)puVar3[8] != (uint *)0x0) {
            *(uint *)puVar3[8] = uVar13 >> 8 & 1;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1b = (undefined)(uVar13 >> 8);
            local_1c = (char)uVar13;
            uVar14 = FUN_00414630(puVar3[6],(uint *)&local_1c,2);
            puVar3[6] = uVar14;
            puVar7 = local_2c;
          }
          uVar13 = 0;
          puVar15 = (undefined *)0x0;
          *puVar3 = 2;
          do {
            puVar5 = puVar7;
            puVar10 = local_8;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = *(byte *)_Src;
            bVar8 = (byte)puVar15;
            puVar7 = (uint *)((int)puVar7 + -1);
            puVar15 = puVar15 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar13 = uVar13 + ((uint)bVar9 << (bVar8 & 0x1f));
            local_2c = puVar7;
joined_r0x00412ff6:
          } while (puVar15 < (undefined *)0x20);
          if (puVar3[8] != 0) {
            *(uint *)(puVar3[8] + 4) = uVar13;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1c = (char)uVar13;
            local_1b = (undefined)(uVar13 >> 8);
            local_1a = (undefined)(uVar13 >> 0x10);
            local_19 = (undefined)(uVar13 >> 0x18);
            uVar14 = FUN_00414630(puVar3[6],(uint *)&local_1c,4);
            puVar3[6] = uVar14;
            puVar7 = local_2c;
          }
          uVar13 = 0;
          puVar15 = (undefined *)0x0;
          *puVar3 = 3;
          do {
            puVar5 = puVar7;
            puVar10 = local_8;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = *(byte *)_Src;
            bVar8 = (byte)puVar15;
            puVar7 = (uint *)((int)puVar7 + -1);
            puVar15 = puVar15 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar13 = uVar13 + ((uint)bVar9 << (bVar8 & 0x1f));
            local_2c = puVar7;
joined_r0x00413075:
          } while (puVar15 < (undefined *)0x10);
          if (puVar3[8] != 0) {
            *(uint *)(puVar3[8] + 8) = uVar13 & 0xff;
            *(uint *)(puVar3[8] + 0xc) = uVar13 >> 8;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1c = (char)uVar13;
            local_1b = (undefined)(uVar13 >> 8);
            uVar14 = FUN_00414630(puVar3[6],(uint *)&local_1c,2);
            puVar3[6] = uVar14;
            puVar7 = local_2c;
          }
          uVar13 = 0;
          local_24 = 0;
          puVar15 = (undefined *)0x0;
          *puVar3 = 4;
          goto switchD_00412dd0_caseD_4;
        }
        param_1[6] = (uint *)"unknown header flags set";
      }
      else {
        param_1[6] = (uint *)"unknown compression method";
      }
      goto LAB_00414148;
    case 2:
      goto joined_r0x00412ff6;
    case 3:
      goto joined_r0x00413075;
    case 4:
switchD_00412dd0_caseD_4:
      if ((puVar3[4] & 0x400) == 0) {
        if (puVar3[8] != 0) {
          *(undefined4 *)(puVar3[8] + 0x10) = 0;
        }
      }
      else {
        for (; puVar15 < (undefined *)0x10; puVar15 = puVar15 + 8) {
          puVar5 = puVar7;
          puVar10 = local_8;
          if (puVar7 == (uint *)0x0) goto LAB_004141ac;
          bVar9 = *(byte *)_Src;
          puVar7 = (uint *)((int)puVar7 + -1);
          _Src = (uint *)((int)_Src + 1);
          uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
          local_2c = puVar7;
        }
        puVar3[0x10] = uVar13;
        if (puVar3[8] != 0) {
          *(uint *)(puVar3[8] + 0x14) = uVar13;
        }
        if ((puVar3[4] & 0x200) != 0) {
          local_1c = (char)uVar13;
          local_1b = (undefined)(uVar13 >> 8);
          uVar14 = FUN_00414630(puVar3[6],(uint *)&local_1c,2);
          puVar3[6] = uVar14;
          puVar7 = local_2c;
        }
        uVar13 = 0;
        local_24 = 0;
        puVar15 = (undefined *)0x0;
      }
      *puVar3 = 5;
    case 5:
      if ((puVar3[4] & 0x400) == 0) {
LAB_0041322e:
        puVar3[0x10] = 0;
        *puVar3 = 6;
switchD_00412dd0_caseD_6:
        if ((puVar3[4] & 0x800) == 0) {
          if (puVar3[8] != 0) {
            *(undefined4 *)(puVar3[8] + 0x1c) = 0;
          }
LAB_004132e6:
          puVar3[0x10] = 0;
          *puVar3 = 7;
switchD_00412dd0_caseD_7:
          if ((puVar3[4] & 0x1000) == 0) {
            if (puVar3[8] != 0) {
              *(undefined4 *)(puVar3[8] + 0x24) = 0;
            }
LAB_004133a4:
            *puVar3 = 8;
switchD_00412dd0_caseD_8:
            if ((puVar3[4] & 0x200) != 0) {
              for (; puVar15 < (undefined *)0x10; puVar15 = puVar15 + 8) {
                puVar5 = puVar7;
                puVar10 = local_8;
                if (puVar7 == (uint *)0x0) goto LAB_004141ac;
                bVar9 = *(byte *)_Src;
                puVar7 = (uint *)((int)puVar7 + -1);
                _Src = (uint *)((int)_Src + 1);
                uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
                local_2c = puVar7;
                local_24 = uVar13;
              }
              if (uVar13 != *(ushort *)(puVar3 + 6)) {
                param_1[6] = (uint *)"header crc mismatch";
                goto LAB_00414148;
              }
              uVar13 = 0;
              local_24 = 0;
              puVar15 = (undefined *)0x0;
            }
            if (puVar3[8] != 0) {
              *(uint *)(puVar3[8] + 0x2c) = (int)puVar3[4] >> 9 & 1;
              *(undefined4 *)(puVar3[8] + 0x30) = 1;
            }
            puVar7 = (uint *)FUN_00414630(0,(uint *)0x0,0);
            puVar3[6] = (uint)puVar7;
            param_1[0xc] = puVar7;
            *puVar3 = 0xb;
            puVar7 = local_2c;
            break;
          }
          puVar5 = puVar7;
          puVar10 = local_8;
          if (puVar7 != (uint *)0x0) {
            puVar5 = (uint *)0x0;
            do {
              pbVar1 = (byte *)((int)puVar5 + (int)_Src);
              local_18 = (undefined *)(uint)*pbVar1;
              puVar5 = (uint *)((int)puVar5 + 1);
              uVar14 = puVar3[8];
              if (((uVar14 != 0) && (local_8 = *(uint **)(uVar14 + 0x24), local_8 != (uint *)0x0))
                 && (puVar3[0x10] < *(uint *)(uVar14 + 0x28))) {
                *(byte *)((int)local_8 + puVar3[0x10]) = *pbVar1;
                puVar3[0x10] = puVar3[0x10] + 1;
                puVar7 = local_2c;
              }
            } while ((local_18 != (undefined *)0x0) && (puVar5 < puVar7));
            if ((puVar3[4] & 0x200) != 0) {
              uVar14 = FUN_00414630(puVar3[6],_Src,(uint)puVar5);
              puVar3[6] = uVar14;
              puVar7 = local_2c;
            }
            puVar7 = (uint *)((int)puVar7 - (int)puVar5);
            _Src = (uint *)((int)_Src + (int)puVar5);
            puVar5 = puVar7;
            local_2c = puVar7;
            puVar10 = local_8;
            if (local_18 == (undefined *)0x0) goto LAB_004133a4;
          }
        }
        else {
          puVar5 = puVar7;
          puVar10 = local_8;
          if (puVar7 != (uint *)0x0) {
            puVar5 = (uint *)0x0;
            do {
              pbVar1 = (byte *)((int)puVar5 + (int)_Src);
              local_18 = (undefined *)(uint)*pbVar1;
              puVar5 = (uint *)((int)puVar5 + 1);
              uVar14 = puVar3[8];
              if (((uVar14 != 0) && (local_8 = *(uint **)(uVar14 + 0x1c), local_8 != (uint *)0x0))
                 && (puVar3[0x10] < *(uint *)(uVar14 + 0x20))) {
                *(byte *)((int)local_8 + puVar3[0x10]) = *pbVar1;
                puVar3[0x10] = puVar3[0x10] + 1;
                puVar7 = local_2c;
              }
            } while ((local_18 != (undefined *)0x0) && (puVar5 < puVar7));
            if ((puVar3[4] & 0x200) != 0) {
              uVar14 = FUN_00414630(puVar3[6],_Src,(uint)puVar5);
              puVar3[6] = uVar14;
              puVar7 = local_2c;
            }
            puVar7 = (uint *)((int)puVar7 - (int)puVar5);
            _Src = (uint *)((int)_Src + (int)puVar5);
            puVar5 = puVar7;
            local_2c = puVar7;
            puVar10 = local_8;
            if (local_18 == (undefined *)0x0) goto LAB_004132e6;
          }
        }
      }
      else {
        puVar5 = (uint *)puVar3[0x10];
        if (puVar7 < (uint *)puVar3[0x10]) {
          puVar5 = puVar7;
        }
        if (puVar5 != (uint *)0x0) {
          if ((puVar3[8] != 0) && (local_8 = *(uint **)(puVar3[8] + 0x10), local_8 != (uint *)0x0))
          {
            local_18 = (undefined *)(*(int *)(puVar3[8] + 0x14) - puVar3[0x10]);
            puVar7 = puVar5;
            if (*(undefined **)(puVar3[8] + 0x18) < local_18 + (int)puVar5) {
              puVar7 = (uint *)(*(undefined **)(puVar3[8] + 0x18) + -(int)local_18);
            }
            memcpy((undefined *)((int)local_8 + (int)local_18),_Src,(size_t)puVar7);
            puVar7 = local_2c;
          }
          if ((puVar3[4] & 0x200) != 0) {
            uVar14 = FUN_00414630(puVar3[6],_Src,(uint)puVar5);
            puVar3[6] = uVar14;
            puVar7 = local_2c;
          }
          puVar7 = (uint *)((int)puVar7 - (int)puVar5);
          _Src = (uint *)((int)_Src + (int)puVar5);
          puVar3[0x10] = puVar3[0x10] - (int)puVar5;
          local_2c = puVar7;
        }
        puVar5 = puVar7;
        puVar10 = local_8;
        if (puVar3[0x10] == 0) goto LAB_0041322e;
      }
LAB_004141ac:
      local_8 = puVar10;
      param_1[3] = local_14;
      param_1[4] = local_20;
      *param_1 = _Src;
      param_1[1] = puVar5;
      puVar3[0xe] = uVar13;
      puVar3[0xf] = (uint)puVar15;
      if (((puVar3[10] == 0) && ((0x17 < (int)*puVar3 || (local_10 == param_1[4])))) ||
         (iVar6 = FUN_00412c60(), iVar6 == 0)) {
        iVar6 = (int)local_4 - (int)param_1[1];
        uVar14 = (int)local_10 - (int)param_1[4];
        param_1[2] = (uint *)((int)param_1[2] + iVar6);
        param_1[5] = (uint *)((int)param_1[5] + uVar14);
        puVar3[7] = puVar3[7] + uVar14;
        if ((puVar3[2] != 0) && (uVar14 != 0)) {
          if (puVar3[4] == 0) {
            puVar7 = (uint *)FUN_00415030(puVar3[6],(byte *)((int)param_1[3] - uVar14),uVar14);
          }
          else {
            puVar7 = (uint *)FUN_00414630(puVar3[6],(uint *)((int)param_1[3] - uVar14),uVar14);
          }
          puVar3[6] = (uint)puVar7;
          param_1[0xc] = puVar7;
        }
        param_1[0xb] = (uint *)((-(uint)(puVar3[1] != 0) & 0x40) + ((*puVar3 != 0xb) - 1 & 0x80) +
                               puVar3[0xf]);
        if (((iVar6 != 0) || (uVar14 != 0)) && (param_2 != 4)) {
          return local_c;
        }
        if (local_c != 0) {
          return local_c;
        }
        return -5;
      }
      *puVar3 = 0x1c;
switchD_00412dd0_caseD_1c:
      return -4;
    case 6:
      goto switchD_00412dd0_caseD_6;
    case 7:
      goto switchD_00412dd0_caseD_7;
    case 8:
      goto switchD_00412dd0_caseD_8;
    case 9:
      for (; puVar15 < (undefined *)0x20; puVar15 = puVar15 + 8) {
        puVar5 = puVar7;
        if (puVar7 == (uint *)0x0) goto LAB_004141ac;
        bVar9 = *(byte *)_Src;
        puVar7 = (uint *)((int)puVar7 + -1);
        _Src = (uint *)((int)_Src + 1);
        uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
        local_2c = puVar7;
        local_24 = uVar13;
      }
      puVar5 = (uint *)(((uVar13 & 0xff00) + uVar13 * 0x10000) * 0x100 +
                        (local_24 >> 0x10 & 0xff) * 0x100 + (uVar13 >> 0x18));
      puVar3[6] = (uint)puVar5;
      param_1[0xc] = puVar5;
      uVar13 = 0;
      puVar15 = (undefined *)0x0;
      *puVar3 = 10;
    case 10:
      if (puVar3[3] == 0) {
        param_1[3] = local_14;
        *param_1 = _Src;
        param_1[4] = local_20;
        param_1[1] = puVar7;
        puVar3[0xf] = (uint)puVar15;
        puVar3[0xe] = uVar13;
        return 2;
      }
      puVar7 = (uint *)FUN_00415030(0,(byte *)0x0,0);
      puVar3[6] = (uint)puVar7;
      param_1[0xc] = puVar7;
      *puVar3 = 0xb;
      puVar7 = local_2c;
switchD_00412dd0_caseD_b:
      puVar5 = puVar7;
      puVar10 = local_8;
      if (param_2 != 5) {
switchD_00412dd0_caseD_c:
        if (puVar3[1] == 0) {
          for (; puVar15 < (undefined *)0x3; puVar15 = puVar15 + 8) {
            puVar5 = puVar7;
            puVar10 = local_8;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = *(byte *)_Src;
            puVar7 = (uint *)((int)puVar7 + -1);
            _Src = (uint *)((int)_Src + 1);
            uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
            local_2c = puVar7;
          }
          puVar3[1] = uVar13 & 1;
          switch(uVar13 >> 1 & 3) {
          case 0:
            uVar13 = uVar13 >> 3;
            *puVar3 = 0xd;
            puVar15 = puVar15 + -3;
            local_24 = uVar13;
            break;
          case 1:
            FUN_00412c40();
            uVar13 = uVar13 >> 3;
            *puVar3 = 0x12;
            puVar15 = puVar15 + -3;
            puVar7 = extraout_EDX;
            local_24 = uVar13;
            break;
          case 2:
            uVar13 = uVar13 >> 3;
            *puVar3 = 0xf;
            puVar15 = puVar15 + -3;
            local_24 = uVar13;
            break;
          case 3:
            param_1[6] = (uint *)"invalid block type";
            *puVar3 = 0x1b;
          default:
            uVar13 = uVar13 >> 3;
            puVar15 = puVar15 + -3;
            local_24 = uVar13;
          }
        }
        else {
          uVar13 = uVar13 >> (sbyte)((uint)puVar15 & 7);
          puVar15 = puVar15 + -((uint)puVar15 & 7);
          *puVar3 = 0x18;
          local_24 = uVar13;
        }
        break;
      }
      goto LAB_004141ac;
    case 0xb:
      goto switchD_00412dd0_caseD_b;
    case 0xc:
      goto switchD_00412dd0_caseD_c;
    case 0xd:
      uVar13 = uVar13 >> (sbyte)((uint)puVar15 & 7);
      for (puVar15 = puVar15 + -((uint)puVar15 & 7); puVar15 < (undefined *)0x20;
          puVar15 = puVar15 + 8) {
        puVar5 = puVar7;
        if (puVar7 == (uint *)0x0) goto LAB_004141ac;
        bVar9 = *(byte *)_Src;
        puVar7 = (uint *)((int)puVar7 + -1);
        _Src = (uint *)((int)_Src + 1);
        uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
        local_2c = puVar7;
      }
      uVar14 = uVar13 & 0xffff;
      if (uVar14 == ~uVar13 >> 0x10) {
        uVar13 = 0;
        puVar3[0x10] = uVar14;
        local_24 = 0;
        puVar15 = (undefined *)0x0;
        *puVar3 = 0xe;
        goto switchD_00412dd0_caseD_e;
      }
      param_1[6] = (uint *)"invalid stored block lengths";
      local_24 = uVar13;
      goto LAB_00414148;
    case 0xe:
switchD_00412dd0_caseD_e:
      local_28 = (uint *)puVar3[0x10];
      if (local_28 == (uint *)0x0) {
LAB_00413cdc:
        *puVar3 = 0xb;
      }
      else {
        if (puVar7 < local_28) {
          local_28 = puVar7;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        puVar5 = puVar7;
        if (local_28 == (uint *)0x0) goto LAB_004141ac;
        memcpy(local_14,_Src,(size_t)local_28);
        local_20 = (uint *)((int)local_20 - (int)local_28);
        local_14 = (uint *)((int)local_14 + (int)local_28);
        _Src = (uint *)((int)_Src + (int)local_28);
        puVar3[0x10] = puVar3[0x10] - (int)local_28;
        puVar7 = (uint *)((int)local_2c - (int)local_28);
        local_2c = (uint *)((int)local_2c - (int)local_28);
      }
      break;
    case 0xf:
      for (; puVar15 < (undefined *)0xe; puVar15 = puVar15 + 8) {
        puVar5 = puVar7;
        if (puVar7 == (uint *)0x0) goto LAB_004141ac;
        bVar9 = *(byte *)_Src;
        puVar7 = (uint *)((int)puVar7 + -1);
        _Src = (uint *)((int)_Src + 1);
        uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
        local_2c = puVar7;
      }
      puVar3[0x18] = (uVar13 & 0x1f) + 0x101;
      uVar12 = uVar13 >> 10;
      uVar14 = (uVar13 >> 5 & 0x1f) + 1;
      uVar13 = uVar13 >> 0xe;
      puVar15 = puVar15 + -0xe;
      puVar3[0x19] = uVar14;
      puVar3[0x17] = (uVar12 & 0xf) + 4;
      local_24 = uVar13;
      if ((puVar3[0x18] < 0x11f) && (uVar14 < 0x1f)) {
        puVar3[0x1a] = 0;
        *puVar3 = 0x10;
        goto switchD_00412dd0_caseD_10;
      }
      param_1[6] = (uint *)"too many length or distance symbols";
      goto LAB_00414148;
    case 0x10:
switchD_00412dd0_caseD_10:
      if (puVar3[0x1a] < puVar3[0x17]) {
        do {
          for (; puVar15 < (undefined *)0x3; puVar15 = puVar15 + 8) {
            puVar5 = puVar7;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = *(byte *)_Src;
            puVar7 = (uint *)((int)puVar7 + -1);
            _Src = (uint *)((int)_Src + 1);
            uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
            local_2c = puVar7;
          }
          *(ushort *)((int)puVar3 + (uint)*(ushort *)(&DAT_004183f0 + puVar3[0x1a] * 2) * 2 + 0x70)
               = (ushort)uVar13 & 7;
          puVar3[0x1a] = puVar3[0x1a] + 1;
          uVar13 = uVar13 >> 3;
          puVar15 = puVar15 + -3;
          local_24 = uVar13;
        } while (puVar3[0x1a] < puVar3[0x17]);
      }
      uVar14 = puVar3[0x1a];
      while (uVar14 < 0x13) {
        *(undefined2 *)
         ((int)puVar3 + (uint)*(ushort *)(&DAT_004183f0 + puVar3[0x1a] * 2) * 2 + 0x70) = 0;
        puVar3[0x1a] = puVar3[0x1a] + 1;
        uVar14 = puVar3[0x1a];
      }
      puVar3[0x1b] = (uint)(puVar3 + 0x14c);
      puVar3[0x13] = (uint)(puVar3 + 0x14c);
      puVar3[0x15] = 7;
      local_c = FUN_00414b40(0,(int)(puVar3 + 0x1c),0x13,(int *)(puVar3 + 0x1b),puVar3 + 0x15,
                             (ushort *)(puVar3 + 0xbc));
      puVar7 = local_2c;
      if (local_c == 0) {
        puVar3[0x1a] = 0;
        *puVar3 = 0x11;
        goto switchD_00412dd0_caseD_11;
      }
      param_1[6] = (uint *)"invalid code lengths set";
LAB_00414148:
      *puVar3 = 0x1b;
      break;
    case 0x11:
switchD_00412dd0_caseD_11:
      if (puVar3[0x1a] < puVar3[0x19] + puVar3[0x18]) {
        do {
          uVar14 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar13) * 4);
          puVar10 = local_8;
          if (puVar15 < (undefined *)(uVar14 >> 8 & 0xff)) {
            do {
              puVar5 = puVar7;
              if (puVar7 == (uint *)0x0) goto LAB_004141ac;
              bVar9 = (byte)puVar15;
              puVar7 = (uint *)((int)puVar7 + -1);
              puVar15 = puVar15 + 8;
              uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
              _Src = (uint *)((int)_Src + 1);
              uVar14 = *(uint *)(puVar3[0x13] +
                                ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar13) * 4);
              local_2c = puVar7;
            } while (puVar15 < (undefined *)(uVar14 >> 8 & 0xff));
          }
          local_28._2_2_ = (short)(uVar14 >> 0x10);
          if (uVar14 >> 0x10 < 0x10) {
            if (puVar15 < (undefined *)(uVar14 >> 8 & 0xff)) {
              do {
                puVar5 = puVar7;
                if (puVar7 == (uint *)0x0) goto LAB_004141ac;
                bVar9 = *(byte *)_Src;
                bVar8 = (byte)puVar15;
                puVar7 = (uint *)((int)puVar7 + -1);
                puVar15 = puVar15 + 8;
                _Src = (uint *)((int)_Src + 1);
                uVar13 = uVar13 + ((uint)bVar9 << (bVar8 & 0x1f));
                local_2c = puVar7;
              } while (puVar15 < (undefined *)(uVar14 >> 8 & 0xff));
            }
            uVar14 = uVar14 >> 8 & 0xff;
            local_24 = uVar13 >> ((byte)uVar14 & 0x1f);
            puVar15 = puVar15 + -uVar14;
            *(short *)((int)puVar3 + puVar3[0x1a] * 2 + 0x70) = local_28._2_2_;
            puVar3[0x1a] = puVar3[0x1a] + 1;
          }
          else {
            if (local_28._2_2_ == 0x10) {
              local_18 = (undefined *)(uVar14 >> 8 & 0xff);
              if (puVar15 < local_18 + 2) {
                do {
                  puVar5 = puVar7;
                  if (puVar7 == (uint *)0x0) goto LAB_004141ac;
                  bVar9 = (byte)puVar15;
                  puVar7 = (uint *)((int)puVar7 + -1);
                  puVar15 = puVar15 + 8;
                  uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
                  _Src = (uint *)((int)_Src + 1);
                  local_2c = puVar7;
                } while (puVar15 < local_18 + 2);
              }
              uVar13 = uVar13 >> ((byte)local_18 & 0x1f);
              puVar15 = puVar15 + -(int)local_18;
              if (puVar3[0x1a] == 0) {
                param_1[6] = (uint *)"invalid bit length repeat";
                local_24 = uVar13;
                goto LAB_00414148;
              }
              local_18 = (undefined *)(uint)*(ushort *)((int)puVar3 + puVar3[0x1a] * 2 + 0x6e);
              local_28 = (uint *)((uVar13 & 3) + 3);
              local_24 = uVar13 >> 2;
              puVar15 = puVar15 + -2;
            }
            else {
              local_18 = (undefined *)(uVar14 >> 8 & 0xff);
              if (local_28._2_2_ == 0x11) {
                if (puVar15 < local_18 + 3) {
                  do {
                    puVar5 = puVar7;
                    if (puVar7 == (uint *)0x0) goto LAB_004141ac;
                    bVar9 = (byte)puVar15;
                    puVar7 = (uint *)((int)puVar7 + -1);
                    puVar15 = puVar15 + 8;
                    uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
                    _Src = (uint *)((int)_Src + 1);
                    local_2c = puVar7;
                  } while (puVar15 < local_18 + 3);
                }
                uVar13 = uVar13 >> ((byte)local_18 & 0x1f);
                local_28 = (uint *)((uVar13 & 7) + 3);
                local_24 = uVar13 >> 3;
                iVar6 = -3;
              }
              else {
                if (puVar15 < local_18 + 7) {
                  do {
                    puVar5 = puVar7;
                    if (puVar7 == (uint *)0x0) goto LAB_004141ac;
                    bVar9 = (byte)puVar15;
                    puVar7 = (uint *)((int)puVar7 + -1);
                    puVar15 = puVar15 + 8;
                    uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
                    _Src = (uint *)((int)_Src + 1);
                    local_2c = puVar7;
                  } while (puVar15 < local_18 + 7);
                }
                uVar13 = uVar13 >> ((byte)local_18 & 0x1f);
                local_28 = (uint *)((uVar13 & 0x7f) + 0xb);
                local_24 = uVar13 >> 7;
                iVar6 = -7;
              }
              puVar15 = puVar15 + (iVar6 - (int)local_18);
              local_18 = (undefined *)0x0;
            }
            if (puVar3[0x19] + puVar3[0x18] < puVar3[0x1a] + (int)local_28) {
              param_1[6] = (uint *)"invalid bit length repeat";
              uVar13 = local_24;
              goto LAB_00414148;
            }
            for (; local_28 != (uint *)0x0; local_28 = (uint *)((int)local_28 + -1)) {
              *(short *)((int)puVar3 + puVar3[0x1a] * 2 + 0x70) = (short)local_18;
              puVar3[0x1a] = puVar3[0x1a] + 1;
            }
          }
          uVar13 = local_24;
        } while (puVar3[0x1a] < puVar3[0x19] + puVar3[0x18]);
      }
      if (*puVar3 != 0x1b) {
        puVar3[0x1b] = (uint)(puVar3 + 0x14c);
        puVar3[0x13] = (uint)(puVar3 + 0x14c);
        puVar3[0x15] = 9;
        local_c = FUN_00414b40(1,(int)(puVar3 + 0x1c),puVar3[0x18],(int *)(puVar3 + 0x1b),
                               puVar3 + 0x15,(ushort *)(puVar3 + 0xbc));
        puVar7 = local_2c;
        if (local_c == 0) {
          puVar3[0x14] = puVar3[0x1b];
          puVar3[0x16] = 6;
          local_c = FUN_00414b40(2,(int)puVar3 + puVar3[0x18] * 2 + 0x70,puVar3[0x19],
                                 (int *)(puVar3 + 0x1b),puVar3 + 0x16,(ushort *)(puVar3 + 0xbc));
          if (local_c == 0) {
            *puVar3 = 0x12;
            goto switchD_00412dd0_caseD_12;
          }
          param_1[6] = (uint *)"invalid distances set";
        }
        else {
          param_1[6] = (uint *)"invalid literal/lengths set";
        }
        goto LAB_00414148;
      }
      break;
    case 0x12:
switchD_00412dd0_caseD_12:
      if ((puVar7 < (uint *)0x6) || (local_20 < (uint *)0x102)) {
        uVar14 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar13) * 4);
        if (puVar15 < (undefined *)(uVar14 >> 8 & 0xff)) {
          do {
            puVar5 = puVar7;
            puVar10 = local_8;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = (byte)puVar15;
            puVar7 = (uint *)((int)puVar7 + -1);
            puVar15 = puVar15 + 8;
            uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
            _Src = (uint *)((int)_Src + 1);
            uVar14 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar13) * 4
                              );
            local_2c = puVar7;
          } while (puVar15 < (undefined *)(uVar14 >> 8 & 0xff));
        }
        cVar4 = (char)uVar14;
        local_28 = (uint *)uVar14;
        if ((cVar4 != '\0') && ((uVar14 & 0xf0) == 0)) {
          puVar10 = (uint *)(uVar14 >> 8);
          local_18 = (undefined *)((uint)puVar10 & 0xff);
          local_28 = *(uint **)(puVar3[0x13] +
                               ((((1 << (cVar4 + (byte)local_18 & 0x1f)) - 1U & uVar13) >>
                                ((byte)local_18 & 0x1f)) + (uVar14 >> 0x10)) * 4);
          local_8._0_1_ = (byte)(uVar14 >> 8);
          if (puVar15 < (undefined *)(((uint)local_28 >> 8 & 0xff) + ((uint)puVar10 & 0xff))) {
            do {
              puVar5 = puVar7;
              if (puVar7 == (uint *)0x0) goto LAB_004141ac;
              bVar9 = (byte)puVar15;
              puVar7 = (uint *)((int)puVar7 + -1);
              puVar15 = puVar15 + 8;
              uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
              local_18 = (undefined *)(uVar14 >> 8 & 0xff);
              _Src = (uint *)((int)_Src + 1);
              local_28 = *(uint **)(puVar3[0x13] +
                                   ((((1 << (cVar4 + (byte)local_18 & 0x1f)) - 1U & uVar13) >>
                                    ((byte)local_18 & 0x1f)) + (uVar14 >> 0x10)) * 4);
              local_2c = puVar7;
            } while (puVar15 < local_18 + ((uint)local_28 >> 8 & 0xff));
          }
          uVar13 = uVar13 >> ((byte)local_8 & 0x1f);
          puVar15 = puVar15 + -(uint)(byte)local_8;
          local_8 = puVar10;
        }
        local_18 = (undefined *)((uint)local_28 >> 8 & 0xff);
        uVar13 = uVar13 >> ((byte)local_18 & 0x1f);
        puVar15 = puVar15 + -(int)local_18;
        puVar3[0x10] = (uint)local_28 >> 0x10;
        local_24 = uVar13;
        if ((char)local_28 == '\0') {
          *puVar3 = 0x17;
          break;
        }
        if (((uint)local_28 & 0x20) == 0) {
          if (((uint)local_28 & 0x40) == 0) {
            puVar3[0x12] = (uint)local_28 & 0xf;
            *puVar3 = 0x13;
            goto switchD_00412dd0_caseD_13;
          }
          param_1[6] = (uint *)"invalid literal/length code";
          goto LAB_00414148;
        }
        goto LAB_00413cdc;
      }
      param_1[4] = local_20;
      param_1[3] = local_14;
      *param_1 = _Src;
      param_1[1] = local_2c;
      puVar3[0xe] = uVar13;
      puVar3[0xf] = (uint)puVar15;
      FUN_00414680((int *)param_1,(uint)local_10);
      local_20 = param_1[4];
      local_14 = param_1[3];
      _Src = *param_1;
      uVar13 = puVar3[0xe];
      puVar15 = (undefined *)puVar3[0xf];
      puVar7 = param_1[1];
      local_2c = param_1[1];
      local_24 = uVar13;
      break;
    case 0x13:
switchD_00412dd0_caseD_13:
      if ((undefined *)puVar3[0x12] != (undefined *)0x0) {
        if (puVar15 < (undefined *)puVar3[0x12]) {
          do {
            puVar5 = puVar7;
            puVar10 = local_8;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = *(byte *)_Src;
            bVar8 = (byte)puVar15;
            puVar7 = (uint *)((int)puVar7 + -1);
            puVar15 = puVar15 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar13 = uVar13 + ((uint)bVar9 << (bVar8 & 0x1f));
            local_2c = puVar7;
          } while (puVar15 < (undefined *)puVar3[0x12]);
        }
        bVar9 = (byte)puVar3[0x12];
        puVar3[0x10] = puVar3[0x10] + ((1 << (bVar9 & 0x1f)) - 1U & uVar13);
        uVar13 = uVar13 >> (bVar9 & 0x1f);
        puVar15 = puVar15 + -puVar3[0x12];
      }
      *puVar3 = 0x14;
    case 0x14:
      uVar14 = *(uint *)(puVar3[0x14] + ((1 << ((byte)puVar3[0x16] & 0x1f)) - 1U & uVar13) * 4);
      if (puVar15 < (undefined *)(uVar14 >> 8 & 0xff)) {
        do {
          puVar5 = puVar7;
          puVar10 = local_8;
          if (puVar7 == (uint *)0x0) goto LAB_004141ac;
          bVar9 = (byte)puVar15;
          puVar7 = (uint *)((int)puVar7 + -1);
          puVar15 = puVar15 + 8;
          uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
          _Src = (uint *)((int)_Src + 1);
          uVar14 = *(uint *)(puVar3[0x14] + ((1 << ((byte)puVar3[0x16] & 0x1f)) - 1U & uVar13) * 4);
          local_2c = puVar7;
        } while (puVar15 < (undefined *)(uVar14 >> 8 & 0xff));
      }
      local_28 = (uint *)uVar14;
      if ((uVar14 & 0xf0) == 0) {
        puVar10 = (uint *)(uVar14 >> 8);
        local_18 = (undefined *)((uint)puVar10 & 0xff);
        local_28 = *(uint **)(puVar3[0x14] +
                             ((((1 << ((char)uVar14 + (byte)local_18 & 0x1f)) - 1U & uVar13) >>
                              ((byte)local_18 & 0x1f)) + (uVar14 >> 0x10)) * 4);
        local_8._0_1_ = (byte)(uVar14 >> 8);
        if (puVar15 < (undefined *)(((uint)local_28 >> 8 & 0xff) + ((uint)puVar10 & 0xff))) {
          do {
            puVar5 = puVar7;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = (byte)puVar15;
            puVar7 = (uint *)((int)puVar7 + -1);
            puVar15 = puVar15 + 8;
            uVar13 = uVar13 + ((uint)*(byte *)_Src << (bVar9 & 0x1f));
            local_18 = (undefined *)(uVar14 >> 8 & 0xff);
            _Src = (uint *)((int)_Src + 1);
            local_28 = *(uint **)(puVar3[0x14] +
                                 ((((1 << ((char)uVar14 + (byte)local_18 & 0x1f)) - 1U & uVar13) >>
                                  ((byte)local_18 & 0x1f)) + (uVar14 >> 0x10)) * 4);
            local_2c = puVar7;
          } while (puVar15 < local_18 + ((uint)local_28 >> 8 & 0xff));
        }
        uVar13 = uVar13 >> ((byte)local_8 & 0x1f);
        puVar15 = puVar15 + -(uint)(byte)local_8;
        local_8 = puVar10;
      }
      local_18 = (undefined *)((uint)local_28 >> 8 & 0xff);
      uVar13 = uVar13 >> ((byte)local_18 & 0x1f);
      puVar15 = puVar15 + -(int)local_18;
      local_24 = uVar13;
      if (((uint)local_28 & 0x40) != 0) {
        param_1[6] = (uint *)"invalid distance code";
        goto LAB_00414148;
      }
      puVar3[0x11] = (uint)local_28 >> 0x10;
      puVar3[0x12] = (uint)local_28 & 0xf;
      *puVar3 = 0x15;
switchD_00412dd0_caseD_15:
      if ((undefined *)puVar3[0x12] != (undefined *)0x0) {
        if (puVar15 < (undefined *)puVar3[0x12]) {
          do {
            puVar5 = puVar7;
            puVar10 = local_8;
            if (puVar7 == (uint *)0x0) goto LAB_004141ac;
            bVar9 = *(byte *)_Src;
            bVar8 = (byte)puVar15;
            puVar7 = (uint *)((int)puVar7 + -1);
            puVar15 = puVar15 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar13 = uVar13 + ((uint)bVar9 << (bVar8 & 0x1f));
            local_2c = puVar7;
          } while (puVar15 < (undefined *)puVar3[0x12]);
        }
        bVar9 = (byte)puVar3[0x12];
        puVar3[0x11] = puVar3[0x11] + ((1 << (bVar9 & 0x1f)) - 1U & uVar13);
        uVar13 = uVar13 >> (bVar9 & 0x1f);
        puVar15 = puVar15 + -puVar3[0x12];
        local_24 = uVar13;
      }
      puVar11 = (undefined *)((puVar3[0xb] - (int)local_20) + (int)local_10);
      if (puVar11 <= (undefined *)puVar3[0x11] && (undefined *)puVar3[0x11] != puVar11) {
        param_1[6] = (uint *)"invalid distance too far back";
        goto LAB_00414148;
      }
      *puVar3 = 0x16;
switchD_00412dd0_caseD_16:
      puVar5 = puVar7;
      puVar10 = local_8;
      if (local_20 != (uint *)0x0) {
        uVar14 = puVar3[0x11];
        if ((uint)((int)local_10 - (int)local_20) < uVar14) {
          local_28 = (uint *)(uVar14 - ((int)local_10 - (int)local_20));
          if ((uint *)puVar3[0xc] < local_28) {
            local_28 = (uint *)((int)local_28 - (int)(uint *)puVar3[0xc]);
            local_18 = (undefined *)((puVar3[0xd] + puVar3[10]) - (int)local_28);
          }
          else {
            local_18 = (undefined *)((puVar3[0xd] - (int)local_28) + puVar3[0xc]);
          }
          local_8 = (uint *)puVar3[0x10];
          if (local_8 < local_28) goto LAB_00413f9f;
        }
        else {
          local_18 = (undefined *)((int)local_14 - uVar14);
          local_8 = (uint *)puVar3[0x10];
LAB_00413f9f:
          local_28 = local_8;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        local_20 = (uint *)((int)local_20 - (int)local_28);
        puVar3[0x10] = (int)local_8 - (int)local_28;
        do {
          uVar2 = *local_18;
          local_18 = local_18 + 1;
          *(undefined *)local_14 = uVar2;
          local_14 = (uint *)((int)local_14 + 1);
          local_28 = (uint *)((int)local_28 + -1);
        } while (local_28 != (uint *)0x0);
        if (puVar3[0x10] == 0) {
          *puVar3 = 0x12;
        }
        break;
      }
      goto LAB_004141ac;
    case 0x15:
      goto switchD_00412dd0_caseD_15;
    case 0x16:
      goto switchD_00412dd0_caseD_16;
    case 0x17:
      if (local_20 == (uint *)0x0) goto LAB_004141ac;
      *(undefined *)local_14 = *(undefined *)(puVar3 + 0x10);
      local_14 = (uint *)((int)local_14 + 1);
      local_20 = (uint *)((int)local_20 + -1);
      *puVar3 = 0x12;
      break;
    case 0x18:
      if (puVar3[2] != 0) {
        for (; puVar15 < (undefined *)0x20; puVar15 = puVar15 + 8) {
          puVar5 = puVar7;
          if (puVar7 == (uint *)0x0) goto LAB_004141ac;
          bVar9 = *(byte *)_Src;
          puVar7 = (uint *)((int)puVar7 + -1);
          _Src = (uint *)((int)_Src + 1);
          uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
          local_2c = puVar7;
          local_24 = uVar13;
        }
        local_10 = (uint *)((int)local_10 - (int)local_20);
        param_1[5] = (uint *)((int)param_1[5] + (int)local_10);
        puVar3[7] = puVar3[7] + (int)local_10;
        if (local_10 != (uint *)0x0) {
          if (puVar3[4] == 0) {
            puVar7 = (uint *)FUN_00415030(puVar3[6],(byte *)(uint *)((int)local_14 - (int)local_10),
                                          (uint)local_10);
          }
          else {
            puVar7 = (uint *)FUN_00414630(puVar3[6],(uint *)((int)local_14 - (int)local_10),
                                          (uint)local_10);
          }
          puVar3[6] = (uint)puVar7;
          param_1[0xc] = puVar7;
          puVar7 = local_2c;
        }
        uVar14 = uVar13;
        if (puVar3[4] == 0) {
          uVar14 = ((uVar13 & 0xff00) + uVar13 * 0x10000) * 0x100 +
                   (local_24 >> 0x10 & 0xff) * 0x100 + (uVar13 >> 0x18);
        }
        local_10 = local_20;
        if (uVar14 != puVar3[6]) {
          param_1[6] = (uint *)"incorrect data check";
          goto LAB_00414148;
        }
        uVar13 = 0;
        local_24 = 0;
        puVar15 = (undefined *)0x0;
      }
      *puVar3 = 0x19;
    case 0x19:
      if ((puVar3[2] != 0) && (puVar3[4] != 0)) {
        for (; puVar15 < (undefined *)0x20; puVar15 = puVar15 + 8) {
          puVar5 = puVar7;
          puVar10 = local_8;
          if (puVar7 == (uint *)0x0) goto LAB_004141ac;
          bVar9 = *(byte *)_Src;
          puVar7 = (uint *)((int)puVar7 + -1);
          _Src = (uint *)((int)_Src + 1);
          uVar13 = uVar13 + ((uint)bVar9 << ((byte)puVar15 & 0x1f));
          local_2c = puVar7;
          local_24 = uVar13;
        }
        if (uVar13 != puVar3[7]) {
          param_1[6] = (uint *)"incorrect length check";
          goto LAB_00414148;
        }
        uVar13 = 0;
        puVar15 = (undefined *)0x0;
      }
      *puVar3 = 0x1a;
switchD_00412dd0_caseD_1a:
      local_c = 1;
      puVar5 = puVar7;
      puVar10 = local_8;
      goto LAB_004141ac;
    case 0x1a:
      goto switchD_00412dd0_caseD_1a;
    case 0x1b:
      local_c = -3;
      goto LAB_004141ac;
    case 0x1c:
      goto switchD_00412dd0_caseD_1c;
    }
    uVar14 = *puVar3;
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



uint __fastcall FUN_00414390(uint *param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = ~in_EAX;
  if (param_2 != 0) {
    do {
      if (((uint)param_1 & 3) == 0) break;
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_004185d8 + ((*(byte *)param_1 ^ uVar1) & 0xff) * 4);
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (0x1f < param_2) {
    uVar3 = param_2 >> 5;
    puVar2 = param_1;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[5];
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[6];
      param_1 = puVar2 + 8;
      param_2 = param_2 - 0x20;
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar2 = param_1;
    } while (uVar3 != 0);
  }
  if (3 < param_2) {
    uVar3 = param_2 >> 2;
    do {
      uVar1 = uVar1 ^ *param_1;
      param_1 = param_1 + 1;
      uVar1 = *(uint *)(&DAT_004189d8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00418dd8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_004185d8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_004191d8 + (uVar1 & 0xff) * 4);
      param_2 = param_2 - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_004185d8 + ((*(byte *)param_1 ^ uVar1) & 0xff) * 4);
    param_1 = (uint *)((int)param_1 + 1);
  }
  return ~uVar1;
}



uint __cdecl FUN_00414630(undefined4 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = FUN_00414390(param_2,param_3);
  return uVar1;
}



void __cdecl FUN_00414650(undefined4 param_1,int param_2,int param_3)

{
  malloc(param_2 * param_3);
  return;
}



void __cdecl FUN_00414670(undefined4 param_1,void *param_2)

{
  free(param_2);
  return;
}



void __cdecl FUN_00414680(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  uint uVar25;
  int iVar26;
  byte *local_3c;
  uint local_30;
  
  puVar3 = (undefined4 *)param_1[7];
  uVar16 = puVar3[0xe];
  pbVar17 = (byte *)(*param_1 + -1);
  pbVar2 = pbVar17 + param_1[1] + -5;
  iVar4 = param_1[4];
  iVar14 = iVar4 - param_2;
  puVar21 = (undefined *)(param_1[3] + -1);
  iVar20 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar26 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar25 = puVar3[0xf];
  puVar22 = puVar21;
  local_3c = pbVar17;
LAB_00414720:
  if (uVar25 < 0xf) {
    pbVar18 = pbVar17 + 1;
    pbVar17 = pbVar17 + 2;
    uVar16 = uVar16 + ((uint)*pbVar18 << ((byte)uVar25 & 0x1f)) +
             ((uint)*pbVar17 << ((byte)uVar25 + 8 & 0x1f));
    uVar25 = uVar25 + 0x10;
    local_3c = pbVar17;
  }
  uVar15 = *(uint *)(iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar16) * 4);
  uVar11 = uVar15 >> 8 & 0xff;
  uVar16 = uVar16 >> ((byte)uVar11 & 0x1f);
  uVar25 = uVar25 - uVar11;
  while ((uVar15 & 0xff) != 0) {
    if ((uVar15 & 0x10) != 0) {
      param_2 = uVar15 >> 0x10;
      uVar15 = uVar15 & 0xf;
      if (uVar15 != 0) {
        if (uVar25 < uVar15) {
          pbVar18 = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
          uVar16 = uVar16 + ((uint)*pbVar18 << ((byte)uVar25 & 0x1f));
          uVar25 = uVar25 + 8;
          local_3c = pbVar17;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar15) - 1U & uVar16);
        uVar16 = uVar16 >> (sbyte)uVar15;
        uVar25 = uVar25 - uVar15;
      }
      if (uVar25 < 0xf) {
        pbVar18 = pbVar17 + 1;
        pbVar1 = pbVar17 + 2;
        pbVar17 = pbVar17 + 2;
        uVar16 = uVar16 + ((uint)*pbVar18 << ((byte)uVar25 & 0x1f)) +
                 ((uint)*pbVar1 << ((byte)uVar25 + 8 & 0x1f));
        uVar25 = uVar25 + 0x10;
        local_3c = pbVar17;
      }
      local_30 = *(uint *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar16) * 4);
      uVar11 = local_30 >> 8 & 0xff;
      uVar15 = local_30 & 0xff;
      uVar16 = uVar16 >> ((byte)uVar11 & 0x1f);
      uVar25 = uVar25 - uVar11;
      if ((local_30 & 0x10) == 0) goto LAB_00414840;
      goto LAB_0041487b;
    }
    if ((uVar15 & 0x40) != 0) {
      if ((uVar15 & 0x20) != 0) {
        *puVar3 = 0xb;
        goto LAB_00414ae4;
      }
      param_1[6] = (int)"invalid literal/length code";
      goto LAB_00414ad6;
    }
    uVar15 = *(uint *)(iVar7 + (((1 << ((byte)(uVar15 & 0xff) & 0x1f)) - 1U & uVar16) +
                               (uVar15 >> 0x10)) * 4);
    uVar11 = uVar15 >> 8 & 0xff;
    uVar16 = uVar16 >> ((byte)uVar11 & 0x1f);
    uVar25 = uVar25 - uVar11;
  }
  puVar22[1] = (char)(uVar15 >> 0x10);
  puVar23 = puVar22 + 1;
  goto LAB_00414a15;
  while( true ) {
    local_30 = *(uint *)(iVar8 + (((1 << ((byte)uVar15 & 0x1f)) - 1U & uVar16) + (local_30 >> 0x10))
                                 * 4);
    uVar11 = local_30 >> 8 & 0xff;
    uVar15 = local_30 & 0xff;
    uVar16 = uVar16 >> ((byte)uVar11 & 0x1f);
    uVar25 = uVar25 - uVar11;
    if ((local_30 & 0x10) != 0) break;
LAB_00414840:
    if ((uVar15 & 0x40) != 0) {
      param_1[6] = (int)"invalid distance code";
LAB_00414ad6:
      *puVar3 = 0x1b;
      goto LAB_00414ae4;
    }
  }
LAB_0041487b:
  uVar15 = uVar15 & 0xf;
  pbVar18 = pbVar17;
  uVar11 = uVar25;
  if (uVar25 < uVar15) {
    pbVar18 = pbVar17 + 1;
    uVar11 = uVar25 + 8;
    uVar16 = uVar16 + ((uint)pbVar17[1] << ((byte)uVar25 & 0x1f));
    local_3c = pbVar18;
    if (uVar11 < uVar15) {
      pbVar18 = pbVar17 + 2;
      uVar16 = uVar16 + ((uint)pbVar17[2] << ((byte)uVar11 & 0x1f));
      uVar11 = uVar25 + 0x10;
      local_3c = pbVar18;
    }
  }
  uVar25 = uVar11 - uVar15;
  uVar11 = (local_30 >> 0x10) + ((1 << (sbyte)uVar15) - 1U & uVar16);
  uVar16 = uVar16 >> (sbyte)uVar15;
  if (uVar11 <= (uint)((int)puVar22 - (int)(puVar21 + iVar14))) {
    iVar12 = (int)puVar22 - uVar11;
    do {
      puVar24 = puVar22;
      iVar13 = iVar12;
      puVar24[1] = *(undefined *)(iVar13 + 1);
      puVar24[2] = *(undefined *)(iVar13 + 2);
      puVar22 = puVar24 + 3;
      *puVar22 = *(undefined *)(iVar13 + 3);
      param_2 = param_2 - 3;
      iVar12 = iVar13 + 3;
    } while (2 < param_2);
    pbVar17 = pbVar18;
    puVar23 = puVar22;
    if (param_2 != 0) {
      puVar24[4] = *(undefined *)(iVar13 + 4);
      puVar23 = puVar24 + 4;
      if (1 < param_2) {
        puVar24[5] = *(undefined *)(iVar13 + 5);
        puVar23 = puVar24 + 5;
      }
    }
    goto LAB_00414a15;
  }
  uVar15 = uVar11 - ((int)puVar22 - (int)(puVar21 + iVar14));
  pbVar17 = local_3c;
  if (uVar5 < uVar15) {
    param_1[6] = (int)"invalid distance too far back";
    *puVar3 = 0x1b;
LAB_00414ae4:
    iVar20 = (int)pbVar17 - (uVar25 >> 3);
    iVar26 = uVar25 + (uVar25 >> 3) * -8;
    *param_1 = iVar20 + 1;
    param_1[3] = (int)(puVar22 + 1);
    param_1[4] = (int)(puVar21 + iVar4 + -0x101 + (0x101 - (int)puVar22));
    param_1[1] = (int)(pbVar2 + (5 - iVar20));
    puVar3[0xf] = iVar26;
    puVar3[0xe] = uVar16 & (1 << ((byte)iVar26 & 0x1f)) - 1U;
    return;
  }
  iVar12 = iVar26 + -1;
  if (uVar6 == 0) {
    iVar13 = iVar12 + (iVar20 - uVar15);
    uVar19 = uVar15;
    if (uVar15 < param_2) {
      do {
        puVar24 = (undefined *)(iVar13 + 1);
        iVar13 = iVar13 + 1;
        puVar22 = puVar22 + 1;
        uVar19 = uVar19 - 1;
        *puVar22 = *puVar24;
      } while (uVar19 != 0);
LAB_004149a6:
      param_2 = param_2 - uVar15;
      iVar13 = (int)puVar22 - uVar11;
    }
  }
  else if (uVar6 < uVar15) {
    uVar19 = uVar15 - uVar6;
    iVar13 = iVar12 + (uVar6 - uVar15) + iVar20;
    if (uVar19 < param_2) {
      param_2 = param_2 - uVar19;
      do {
        puVar24 = (undefined *)(iVar13 + 1);
        iVar13 = iVar13 + 1;
        puVar22 = puVar22 + 1;
        uVar19 = uVar19 - 1;
        *puVar22 = *puVar24;
      } while (uVar19 != 0);
      iVar13 = iVar12;
      if (uVar6 < param_2) {
        param_2 = param_2 - uVar6;
        uVar15 = uVar6;
        do {
          puVar24 = (undefined *)(iVar12 + 1);
          iVar12 = iVar12 + 1;
          puVar22 = puVar22 + 1;
          uVar15 = uVar15 - 1;
          *puVar22 = *puVar24;
        } while (uVar15 != 0);
        iVar13 = (int)puVar22 - uVar11;
      }
    }
  }
  else {
    iVar13 = iVar12 + (uVar6 - uVar15);
    uVar19 = uVar15;
    if (uVar15 < param_2) {
      do {
        puVar24 = (undefined *)(iVar13 + 1);
        iVar13 = iVar13 + 1;
        puVar22 = puVar22 + 1;
        uVar19 = uVar19 - 1;
        *puVar22 = *puVar24;
      } while (uVar19 != 0);
      goto LAB_004149a6;
    }
  }
  if (2 < param_2) {
    iVar12 = (param_2 - 3) / 3 + 1;
    do {
      param_2 = param_2 - 3;
      puVar22[1] = *(undefined *)(iVar13 + 1);
      puVar22[2] = *(undefined *)(iVar13 + 2);
      puVar24 = (undefined *)(iVar13 + 3);
      iVar13 = iVar13 + 3;
      puVar22 = puVar22 + 3;
      iVar12 = iVar12 + -1;
      *puVar22 = *puVar24;
    } while (iVar12 != 0);
  }
  puVar23 = puVar22;
  if (param_2 != 0) {
    puVar23 = puVar22 + 1;
    *puVar23 = *(undefined *)(iVar13 + 1);
    if (1 < param_2) {
      puVar23 = puVar22 + 2;
      *puVar23 = *(undefined *)(iVar13 + 2);
    }
  }
LAB_00414a15:
  puVar22 = puVar23;
  if ((pbVar2 <= pbVar17) || (puVar21 + iVar4 + -0x101 <= puVar23)) goto LAB_00414ae4;
  goto LAB_00414720;
}



void __cdecl
FUN_00414b40(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  short *psVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  ushort *puVar13;
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
  ushort auStack_24 [16];
  uint local_4;
  
  local_4 = DAT_0041c340 ^ (uint)&local_8c;
  local_80 = param_6;
  uVar4 = 0;
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
      psVar1 = (short *)((int)&local_44 + (uint)*(ushort *)(param_2 + uVar4 * 2) * 2);
      *psVar1 = *psVar1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
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
    ___security_check_cookie_4(local_4 ^ (uint)&local_8c);
    return;
  }
  uVar4 = 1;
  do {
    if (*(short *)((int)&local_44 + uVar4 * 2) != 0) break;
    if (*(short *)((int)&local_44 + uVar4 * 2 + 2) != 0) {
      uVar4 = uVar4 + 1;
      break;
    }
    if (*(short *)((int)&local_40 + uVar4 * 2) != 0) {
      uVar4 = uVar4 + 2;
      break;
    }
    if (*(short *)((int)&local_40 + uVar4 * 2 + 2) != 0) {
      uVar4 = uVar4 + 3;
      break;
    }
    if (*(short *)((int)&local_3c + uVar4 * 2) != 0) {
      uVar4 = uVar4 + 4;
      break;
    }
    uVar4 = uVar4 + 5;
  } while (uVar4 < 0x10);
  if (local_88 < uVar4) {
    local_88 = uVar4;
  }
  iVar11 = 1;
  uVar5 = 1;
  do {
    iVar11 = iVar11 * 2 - (uint)*(ushort *)((int)&local_44 + uVar5 * 2);
    if (iVar11 < 0) goto LAB_00415015;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  if ((iVar11 < 1) || ((param_1 != 0 && (local_7c == 1)))) {
    auStack_24[1] = 0;
    uVar5 = 2;
    do {
      uVar6 = uVar5 + 2;
      *(short *)((int)auStack_24 + uVar5 + 2) =
           *(short *)((int)auStack_24 + uVar5) + *(short *)((int)&local_44 + uVar5);
      uVar5 = uVar6;
    } while (uVar6 < 0x1e);
    uVar5 = 0;
    if (param_3 != 0) {
      do {
        if (*(short *)(param_2 + uVar5 * 2) != 0) {
          param_6[auStack_24[*(ushort *)(param_2 + uVar5 * 2)]] = (ushort)uVar5;
          auStack_24[*(ushort *)(param_2 + uVar5 * 2)] =
               auStack_24[*(ushort *)(param_2 + uVar5 * 2)] + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
    if (param_1 == 0) {
      local_64 = param_6;
      local_70 = param_6;
      local_6c = 0x13;
    }
    else if (param_1 == 1) {
      local_70 = (ushort *)&DAT_0041a4ae;
      local_64 = (ushort *)&DAT_0041a4ee;
      local_6c = 0x100;
    }
    else {
      local_70 = (ushort *)&DAT_0041a730;
      local_64 = (ushort *)&DAT_0041a770;
      local_6c = -1;
    }
    local_78 = *param_4;
    bVar8 = (byte)local_88;
    local_74 = 1 << (bVar8 & 0x1f);
    uVar6 = 0;
    uVar5 = 0;
    local_5c = local_74 - 1;
    local_68 = 0xffffffff;
    local_84 = uVar4;
    local_58 = local_74;
    if ((param_1 != 1) || (local_74 < 0x5b0)) {
LAB_00414dd0:
      do {
        bVar12 = (byte)uVar5;
        bVar3 = (char)local_84 - bVar12;
        uVar2 = *local_80;
        if ((int)(uint)uVar2 < local_6c) {
          local_8c = (uint)CONCAT21(uVar2,bVar3) << 8;
        }
        else if (local_6c < (int)(uint)uVar2) {
          local_8c = CONCAT22(local_70[*local_80],
                              CONCAT11(bVar3,*(undefined *)(local_64 + *local_80)));
        }
        else {
          local_8c = CONCAT31((uint3)bVar3,0x60);
        }
        iVar11 = 1 << ((char)local_84 - bVar12 & 0x1f);
        local_4c = local_58;
        puVar9 = (uint *)(local_78 + ((uVar6 >> (bVar12 & 0x1f)) + local_58) * 4);
        uVar4 = local_58;
        do {
          uVar4 = uVar4 - iVar11;
          puVar9 = puVar9 + -iVar11;
          *puVar9 = local_8c;
        } while (uVar4 != 0);
        for (uVar4 = 1 << ((char)local_84 - 1U & 0x1f); (uVar6 & uVar4) != 0; uVar4 = uVar4 >> 1) {
        }
        if (uVar4 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (uVar4 - 1 & uVar6) + uVar4;
        }
        psVar1 = (short *)((int)&local_44 + local_84 * 2);
        *psVar1 = *psVar1 + -1;
        local_80 = local_80 + 1;
        if (*(short *)((int)&local_44 + local_84 * 2) == 0) {
          if (local_84 == local_7c) {
            local_8c._0_2_ = CONCAT11((char)local_84 - bVar12,0x40);
            local_8c = (uint)(ushort)local_8c;
            uVar4 = local_84;
            iVar11 = local_78;
            goto joined_r0x00414f9d;
          }
          local_84 = (uint)*(ushort *)(param_2 + (uint)*local_80 * 2);
        }
      } while ((local_84 <= local_88) || (local_54 = local_5c & uVar6, local_54 == local_68));
      if (uVar5 == 0) {
        uVar5 = local_88;
      }
      local_78 = local_78 + local_58 * 4;
      iVar10 = local_84 - uVar5;
      uVar4 = uVar5 + iVar10;
      iVar11 = 1 << ((byte)iVar10 & 0x1f);
      if (uVar4 < local_7c) {
        puVar13 = (ushort *)((int)&local_44 + uVar4 * 2);
        do {
          uVar2 = *puVar13;
          if ((int)(iVar11 - (uint)uVar2) < 1) break;
          uVar4 = uVar4 + 1;
          iVar10 = iVar10 + 1;
          puVar13 = puVar13 + 1;
          iVar11 = (iVar11 - (uint)uVar2) * 2;
        } while (uVar4 < local_7c);
      }
      local_58 = 1 << ((byte)iVar10 & 0x1f);
      local_74 = local_74 + local_58;
      if ((param_1 != 1) || (local_74 < 0x5b0)) {
        *(byte *)(*param_4 + local_54 * 4) = (byte)iVar10;
        *(byte *)(*param_4 + 1 + local_54 * 4) = bVar8;
        *(short *)(*param_4 + 2 + local_54 * 4) = (short)(local_78 - *param_4 >> 2);
        local_68 = local_54;
        goto LAB_00414dd0;
      }
    }
  }
LAB_00415015:
  ___security_check_cookie_4(local_4 ^ (uint)&local_8c);
  return;
joined_r0x00414f9d:
  if (uVar6 == 0) goto LAB_00414ff5;
  if ((uVar5 != 0) && ((local_5c & uVar6) != local_68)) {
    iVar11 = *param_4;
    uVar5 = 0;
    local_84 = local_88;
    local_8c._0_2_ = CONCAT11(bVar8,(undefined)local_8c);
    local_8c = (uint)(ushort)local_8c;
    uVar4 = local_88;
  }
  *(uint *)(iVar11 + (uVar6 >> ((byte)uVar5 & 0x1f)) * 4) = local_8c;
  for (uVar7 = 1 << ((char)uVar4 - 1U & 0x1f); (uVar6 & uVar7) != 0; uVar7 = uVar7 >> 1) {
  }
  if (uVar7 == 0) goto LAB_00414ff5;
  uVar6 = (uVar7 - 1 & uVar6) + uVar7;
  goto joined_r0x00414f9d;
LAB_00414ff5:
  *param_4 = *param_4 + local_74 * 4;
  *param_5 = local_88;
  goto LAB_00415015;
}



uint __cdecl FUN_00415030(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
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
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  uVar19 = param_1 >> 0x10;
  uVar2 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar2 = uVar2 + *param_2;
    if (0xfff0 < uVar2) {
      uVar2 = uVar2 - 0xfff1;
    }
    uVar19 = uVar19 + uVar2;
    if (0xfff0 < uVar19) {
      uVar19 = uVar19 - 0xfff1;
    }
    return uVar19 << 0x10 | uVar2;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      do {
        uVar2 = uVar2 + *param_2;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
        uVar19 = uVar19 + uVar2;
      } while (param_3 != 0);
    }
    if (0xfff0 < uVar2) {
      uVar2 = uVar2 - 0xfff1;
    }
    return ((uVar19 / 0xfff1) * 0xf + uVar19) * 0x10000 | uVar2;
  }
  if (0x15af < param_3) {
    uVar18 = param_3 / 0x15b0;
    do {
      param_3 = param_3 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar3 = uVar2 + *param_2;
        iVar4 = iVar3 + (uint)param_2[1];
        iVar5 = iVar4 + (uint)param_2[2];
        iVar6 = iVar5 + (uint)param_2[3];
        iVar7 = iVar6 + (uint)param_2[4];
        iVar8 = iVar7 + (uint)param_2[5];
        iVar9 = iVar8 + (uint)param_2[6];
        iVar10 = iVar9 + (uint)param_2[7];
        iVar11 = iVar10 + (uint)param_2[8];
        iVar12 = iVar11 + (uint)param_2[9];
        iVar13 = iVar12 + (uint)param_2[10];
        iVar14 = iVar13 + (uint)param_2[0xb];
        iVar15 = iVar14 + (uint)param_2[0xc];
        iVar16 = iVar15 + (uint)param_2[0xd];
        iVar17 = iVar16 + (uint)param_2[0xe];
        uVar2 = iVar17 + (uint)param_2[0xf];
        uVar19 = uVar19 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
        param_2 = param_2 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar2 = uVar2 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (param_3 != 0) {
    if (0xf < param_3) {
      uVar18 = param_3 >> 4;
      do {
        iVar1 = uVar2 + *param_2;
        iVar3 = iVar1 + (uint)param_2[1];
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
        uVar2 = iVar16 + (uint)param_2[0xf];
        param_3 = param_3 - 0x10;
        uVar19 = uVar19 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                 iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + uVar2;
        param_2 = param_2 + 0x10;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar2 = uVar2 + *param_2;
      param_2 = param_2 + 1;
      uVar19 = uVar19 + uVar2;
    }
    uVar2 = uVar2 % 0xfff1;
    uVar19 = uVar19 % 0xfff1;
  }
  return uVar19 << 0x10 | uVar2;
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


