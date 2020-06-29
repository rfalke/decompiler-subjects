typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
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

typedef unsigned short    wchar16;
typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT * PCONTEXT;

typedef ulong DWORD;

typedef void * PVOID;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef ushort WORD;

typedef union _union_52 _union_52, *P_union_52;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_53 _struct_53, *P_struct_53;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_53 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_52 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_53 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_52 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
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

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

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

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_236 _union_236, *P_union_236;

union _union_236 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_236 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _RUNTIME_FUNCTION * PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionCollidedUnwind=3,
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef wchar_t WCHAR;

typedef WCHAR * LPWSTR;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef WCHAR * LPCWSTR;

typedef struct _M128A * PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef ulonglong * PDWORD64;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_61 {
    PDWORD64 IntegerContext[16];
    struct _struct_62 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE * PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _struct_60 _struct_60, *P_struct_60;

struct _struct_60 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

typedef void * HANDLE;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef union _union_59 _union_59, *P_union_59;

union _union_59 {
    PM128A FloatingContext[16];
    struct _struct_60 s;
};

typedef CHAR * LPSTR;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS * PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_59 u;
    union _union_61 u2;
};

typedef EXCEPTION_ROUTINE * PEXCEPTION_ROUTINE;

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

typedef longlong INT_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[62];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef INT_PTR (* FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void * LPCVOID;

typedef void * LPVOID;

typedef int BOOL;

typedef HINSTANCE HMODULE;

typedef BOOL * LPBOOL;

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

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

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
    word Machine; // 34404
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
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
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


// WARNING! conflicting data type names: /Demangler/wchar_t - /wchar_t

typedef int (* _onexit_t)(void);

typedef ulonglong size_t;




ulonglong thunk_FUN_140001480(int param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 auStack56 [8];
  int iStack24;
  uint uStack20;
  
  lVar2 = 0xc;
  puVar3 = auStack56;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack20 = 0;
  iStack24 = 1;
  while (iStack24 < param_1) {
    iVar1 = thunk_FUN_1400012e0(*(char **)(param_2 + (longlong)iStack24 * 8));
    uStack20 = uStack20 + iVar1;
    iStack24 = iStack24 + 1;
  }
  return (ulonglong)uStack20;
}



// WARNING: Could not reconcile some variable overlaps

void thunk_FUN_140001030(longlong param_1,undefined8 param_2,int param_3)

{
  size_t sVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iStackX24;
  undefined4 auStack184 [12];
  char acStack136 [9];
  char acStack127 [75];
  int iStack52;
  int iStack48;
  uint uStack32;
  uint uStack28;
  ulonglong uStack24;
  
  lVar2 = 0x2c;
  puVar3 = auStack184;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack24 = DAT_140009000 ^ (ulonglong)auStack184;
  sprintf(acStack136,"%08lX:");
  iStackX24 = param_3;
  if (0x10 < param_3) {
    iStackX24 = 0x10;
  }
  iStack52 = 0;
  while (iStack52 < iStackX24) {
    sprintf(acStack127 + iStack52 * 3," %02lX");
    iStack52 = iStack52 + 1;
  }
  while( true ) {
    uStack32 = (uint)(iStack52 < 0x10);
    if (iStack52 >= 0x10) break;
    iStack52 = iStack52 + 1;
    strcat(acStack136,"   ");
  }
  iStack52 = iStack52 + 1;
  sVar1 = strlen(acStack136);
  iStack48 = (int)sVar1;
  strcpy(acStack136 + iStack48,"  |");
  iStack48 = iStack48 + 3;
  iStack52 = 0;
  while (iStack52 < iStackX24) {
    if ((*(byte *)(param_1 + iStack52) < 0x20) || (0x7e < *(byte *)(param_1 + iStack52))) {
      uStack28 = 0x2e;
    }
    else {
      uStack28 = (uint)*(byte *)(param_1 + iStack52);
    }
    acStack136[iStack48 + iStack52] = (char)uStack28;
    iStack52 = iStack52 + 1;
  }
  while (iStack52 < 0x10) {
    acStack136[iStack48 + iStack52] = ' ';
    iStack52 = iStack52 + 1;
  }
  strcpy(acStack136 + (longlong)iStack52 + (longlong)iStack48,"|");
  printf("%s\n");
  _RTC_CheckStackVars((longlong)auStack184,(int *)&DAT_140006800);
  FUN_1400017a0(uStack24 ^ (ulonglong)auStack184);
  return;
}



void thunk_FUN_1400012e0(char *param_1)

{
  int iVar1;
  int extraout_EAX;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 auStack184 [10];
  undefined auStack144 [28];
  uint uStack116;
  FILE *pFStack112;
  undefined auStack96 [20];
  uint uStack76;
  int iStack36;
  ulonglong uStack24;
  
  lVar2 = 0x2c;
  puVar3 = auStack184;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack24 = DAT_140009000 ^ (ulonglong)auStack184;
  iVar1 = FUN_140001430(param_1,auStack96);
  if (iVar1 == 0) {
    pFStack112 = fopen(param_1,"rb");
    if (pFStack112 == (FILE *)0x0) {
      perror(param_1);
    }
    else {
      uStack116 = 0;
      while (uStack116 < uStack76) {
        _extraout_EAX = fread(auStack144,1,0x10,pFStack112);
        extraout_EAX = (int)_extraout_EAX;
        iStack36 = extraout_EAX;
        if (extraout_EAX == 0) break;
        thunk_FUN_140001030((longlong)auStack144,(ulonglong)uStack116,extraout_EAX);
        uStack116 = uStack116 + iStack36;
      }
      fclose(pFStack112);
    }
  }
  else {
    perror(param_1);
  }
  _RTC_CheckStackVars((longlong)auStack184,(int *)&DAT_1400068a0);
  FUN_1400017a0(uStack24 ^ (ulonglong)auStack184);
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140001030(longlong param_1,undefined8 param_2,int param_3)

{
  size_t sVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int local_res18;
  undefined4 auStack184 [12];
  char local_88 [9];
  char acStack127 [75];
  int local_34;
  int local_30;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  lVar2 = 0x2c;
  puVar3 = auStack184;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_18 = DAT_140009000 ^ (ulonglong)auStack184;
  sprintf(local_88,"%08lX:");
  local_res18 = param_3;
  if (0x10 < param_3) {
    local_res18 = 0x10;
  }
  local_34 = 0;
  while (local_34 < local_res18) {
    sprintf(acStack127 + local_34 * 3," %02lX");
    local_34 = local_34 + 1;
  }
  while( true ) {
    local_20 = (uint)(local_34 < 0x10);
    if (local_34 >= 0x10) break;
    local_34 = local_34 + 1;
    strcat(local_88,"   ");
  }
  local_34 = local_34 + 1;
  sVar1 = strlen(local_88);
  local_30 = (int)sVar1;
  strcpy(local_88 + local_30,"  |");
  local_30 = local_30 + 3;
  local_34 = 0;
  while (local_34 < local_res18) {
    if ((*(byte *)(param_1 + local_34) < 0x20) || (0x7e < *(byte *)(param_1 + local_34))) {
      local_1c = 0x2e;
    }
    else {
      local_1c = (uint)*(byte *)(param_1 + local_34);
    }
    local_88[local_30 + local_34] = (char)local_1c;
    local_34 = local_34 + 1;
  }
  while (local_34 < 0x10) {
    local_88[local_30 + local_34] = ' ';
    local_34 = local_34 + 1;
  }
  strcpy(local_88 + (longlong)local_34 + (longlong)local_30,"|");
  printf("%s\n");
  _RTC_CheckStackVars((longlong)auStack184,(int *)&DAT_140006800);
  FUN_1400017a0(local_18 ^ (ulonglong)auStack184);
  return;
}



void FUN_1400012e0(char *param_1)

{
  int iVar1;
  int extraout_EAX;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 auStack184 [10];
  undefined local_90 [28];
  uint local_74;
  FILE *local_70;
  undefined local_60 [20];
  uint local_4c;
  int local_24;
  ulonglong local_18;
  
  lVar2 = 0x2c;
  puVar3 = auStack184;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_18 = DAT_140009000 ^ (ulonglong)auStack184;
  iVar1 = FUN_140001430(param_1,local_60);
  if (iVar1 == 0) {
    local_70 = fopen(param_1,"rb");
    if (local_70 == (FILE *)0x0) {
      perror(param_1);
    }
    else {
      local_74 = 0;
      while (local_74 < local_4c) {
        _extraout_EAX = fread(local_90,1,0x10,local_70);
        extraout_EAX = (int)_extraout_EAX;
        local_24 = extraout_EAX;
        if (extraout_EAX == 0) break;
        thunk_FUN_140001030((longlong)local_90,(ulonglong)local_74,extraout_EAX);
        local_74 = local_74 + local_24;
      }
      fclose(local_70);
    }
  }
  else {
    perror(param_1);
  }
  _RTC_CheckStackVars((longlong)auStack184,(int *)&DAT_1400068a0);
  FUN_1400017a0(local_18 ^ (ulonglong)auStack184);
  return;
}



void FUN_140001430(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 auStack40 [8];
  
  lVar1 = 8;
  puVar2 = auStack40;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  _stat64i32(param_1,param_2);
  return;
}



ulonglong FUN_140001480(int param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 auStack56 [8];
  int local_18;
  uint local_14;
  
  lVar2 = 0xc;
  puVar3 = auStack56;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_14 = 0;
  local_18 = 1;
  while (local_18 < param_1) {
    iVar1 = thunk_FUN_1400012e0(*(char **)(param_2 + (longlong)local_18 * 8));
    local_14 = local_14 + iVar1;
    local_18 = local_18 + 1;
  }
  return (ulonglong)local_14;
}



char * strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00014000176a. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



size_t strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140001770. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



char * strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140001776. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcat(_Dest,_Source);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400017a0(longlong param_1)

{
  HANDLE hProcess;
  DWORD64 local_res0;
  longlong local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  ulonglong local_28;
  longlong local_20;
  undefined8 local_18;
  
  if ((param_1 == DAT_140009000) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  local_res8[0] = param_1;
  RtlCaptureContext(&DAT_140009220);
  local_30 = DAT_140009318;
  local_38 = RtlLookupFunctionEntry(DAT_140009318,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_1400092b8 = local_res8;
    DAT_140009318 = local_res0;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140009220,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140009190 = DAT_140009318;
  _DAT_1400092a0 = local_res8[0];
  _DAT_140009180 = 0xc0000409;
  _DAT_140009184 = 1;
  local_20 = DAT_140009000;
  local_18 = DAT_140009008;
  _DAT_140009218 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1400069b0);
  if (_DAT_140009218 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// Library Function - Single Match
// Name: _RTC_CheckStackVars
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void _RTC_CheckStackVars(longlong param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *local_res0;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *param_2) {
    do {
      lVar1 = (longlong)*(int *)(*(longlong *)(param_2 + 2) + uVar2);
      if ((*(int *)(lVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(*(longlong *)(param_2 + 2) + 4 + uVar2) + lVar1 + param_1) !=
          -0x33333334)) {
        _RTC_StackFailure(local_res0,*(char **)(*(longlong *)(param_2 + 2) + 8 + uVar2));
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 0x10;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *param_2);
  }
  return;
}



// Library Function - Single Match
// Name: _RTC_AllocaHelper
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug, Visual
// Studio 2012 Debug

void _RTC_AllocaHelper(undefined *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) &&
     (lVar1 = param_2, puVar2 = param_1, param_3 != (undefined8 *)0x0)) {
    while (lVar1 != 0) {
      *puVar2 = 0xcc;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 *)(param_1 + 4) = *param_3;
    *(longlong *)(param_1 + 0xc) = param_2;
    *(undefined **)param_3 = param_1;
  }
  return;
}



// Library Function - Single Match
// Name: _RTC_InitBase
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010

void _RTC_InitBase(void)

{
  undefined8 uVar1;
  
  if (DAT_140009150 == '\0') {
    DAT_140009150 = '\x01';
    uVar1 = _CRT_RTC_INITW(0,0,0,1,0);
    _RTC_SetErrorFuncW(uVar1);
  }
  return;
}



void FUN_1400019f0(void)

{
  _CRT_RTC_INITW(0,0,0,1,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140001a40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001d80();
  _DAT_14000915c = (undefined4)uVar1;
  __set_app_type(1);
  DAT_140009740 = _encode_pointer(0xffffffffffffffff);
  DAT_140009758 = DAT_140009740;
  *(undefined4 *)_fmode_exref = DAT_14000970c;
  *(undefined4 *)_commode_exref = DAT_140009708;
  FUN_140002950();
  FUN_140002940();
  if (_DAT_140009028 == 0) {
    __setusermatherr(FUN_140002930);
  }
  if (_DAT_140009024 == -1) {
    _configthreadlocale(-1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140001ae0(void)

{
  atexit(&LAB_140002990);
  _DAT_140009174 = DAT_140009714;
  _DAT_140009170 =
       __getmainargs(&DAT_140009158,&DAT_140009168,&DAT_140009160,(ulonglong)DAT_140009710,
                     &DAT_140009174);
  if (_DAT_140009170 < 0) {
    _amsg_exit(8);
  }
  return;
}



void entry(void)

{
  __security_init_cookie();
  __tmainCRTStartup();
  return;
}



// WARNING: Removing unreachable block (ram,0x000140001bb3)
// WARNING: Removing unreachable block (ram,0x000140001bbf)
// WARNING: Removing unreachable block (ram,0x000140001bc9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: __tmainCRTStartup
// Library: Visual Studio 2008 Debug

ulonglong __tmainCRTStartup(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = FUN_140001d70();
  LOCK();
  DAT_140009738 =
       DAT_140009738 ^ (ulonglong)(DAT_140009738 == 0) * (DAT_140009738 ^ *(ulonglong *)(lVar4 + 8))
  ;
  if (DAT_140009728 == 1) {
    _amsg_exit(0x1f);
  }
  else {
    if (DAT_140009728 == 0) {
      DAT_140009728 = 1;
      iVar2 = _initterm_e(&DAT_140006330,&DAT_140006660);
      if (iVar2 != 0) {
        return 0xff;
      }
    }
    else {
      _DAT_14000917c = 1;
    }
  }
  if (DAT_140009728 == 1) {
    _initterm(&DAT_140006000,&DAT_140006220);
    DAT_140009728 = 2;
  }
  if ((DAT_140009728 != 2) &&
     (iVar2 = _CrtDbgReportW(2,L"f:\\dd\\vctools\\crt_bld\\self_64_amd64\\crt\\src\\crtexe.c",500,0,
                             L"__native_startup_state == __initialized"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  DAT_140009738 = 0;
  if ((_DAT_140009760 != (code *)0x0) &&
     (BVar3 = _IsNonwritableInCurrentImage(&DAT_140009760), BVar3 != 0)) {
    (*_DAT_140009760)(0,2,0);
  }
  _CrtSetCheckCount();
  *(undefined8 *)__initenv_exref = DAT_140009160;
  uVar5 = thunk_FUN_140001480(DAT_140009158,DAT_140009168);
  DAT_140009178 = (uint)uVar5;
  if (_DAT_14000915c != 0) {
    if (_DAT_14000917c == 0) {
      _cexit();
    }
    return (ulonglong)DAT_140009178;
  }
                    // WARNING: Subroutine does not return
  exit(DAT_140009178);
}



undefined8 FUN_140001d70(void)

{
  longlong in_GS_OFFSET;
  
  return *(undefined8 *)(in_GS_OFFSET + 0x30);
}



// WARNING: Removing unreachable block (ram,0x000140001d9d)
// WARNING: Removing unreachable block (ram,0x000140001e46)
// WARNING: Removing unreachable block (ram,0x000140001dfc)
// WARNING: Removing unreachable block (ram,0x000140001e07)
// WARNING: Removing unreachable block (ram,0x000140001e23)
// WARNING: Removing unreachable block (ram,0x000140001e0b)
// WARNING: Removing unreachable block (ram,0x000140001e19)
// WARNING: Removing unreachable block (ram,0x000140001e2b)
// WARNING: Removing unreachable block (ram,0x000140001dfa)
// WARNING: Removing unreachable block (ram,0x000140001e58)
// WARNING: Removing unreachable block (ram,0x000140001dc5)

undefined8 FUN_140001d80(void)

{
  return 0;
}



// Library Function - Single Match
// Name: DebuggerKnownHandle
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

undefined8 DebuggerKnownHandle(void)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = IsDebuggerPresent();
  if (BVar1 != 0) {
    iVar2 = DebuggerProbe(0x1004);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// Library Function - Single Match
// Name: ?DebuggerProbe@@YAHK@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// int __cdecl DebuggerProbe(unsigned long)

int DebuggerProbe(ulong param_1)

{
  byte local_res8 [32];
  undefined4 local_38 [2];
  ulong local_30;
  byte *local_28;
  
  local_res8[0] = 0;
  local_38[0] = 0x1001;
  local_28 = local_res8;
  local_30 = param_1;
  RaiseException(0x406d1388,0,10,(ULONG_PTR *)local_38);
  return (int)(uint)local_res8[0];
}



// Library Function - Single Match
// Name: ?_RTC_Failure@@YAXPEAXH@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl _RTC_Failure(void * __ptr64,int)

void _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (*(int *)(&DAT_140009010 + (longlong)param_2 * 4) != -1) {
      failwithmessage(param_1,*(int *)(&DAT_140009010 + (longlong)param_2 * 4),param_2,
                      (&PTR_s_The_value_of_ESP_was_not_properl_140006c70)[(longlong)param_2]);
      return;
    }
  }
  else {
    failwithmessage(param_1,1,5,"Unknown Runtime Check Error\n\r");
  }
  return;
}



// Library Function - Single Match
// Name: ?failwithmessage@@YAXPEAXHHPEBD@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl failwithmessage(void * __ptr64,int,int,char const * __ptr64)

void failwithmessage(void *param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  uint cchWideChar;
  int iVar2;
  BOOL BVar3;
  code *pcVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  char *pcVar7;
  code *pcVar8;
  uint local_ea8 [4];
  WCHAR local_e98 [264];
  WCHAR local_c88 [264];
  char local_a78 [784];
  CHAR local_768 [784];
  WCHAR local_458 [512];
  ulonglong local_58;
  
  local_58 = DAT_140009000 ^ (ulonglong)&stack0xfffffffffffff118;
  pcVar8 = (code *)0x0;
  pcVar4 = (code *)FUN_140002870();
  if (pcVar4 == (code *)0x0) {
    pcVar8 = (code *)FUN_140002860();
  }
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_4,-1,(LPWSTR)0x0,0);
  if ((cchWideChar < 0x200) &&
     (iVar2 = MultiByteToWideChar(0xfde9,0,param_4,-1,local_458,cchWideChar), iVar2 != 0)) {
    pwVar6 = local_458;
  }
  else {
    pwVar6 = L"Runtime Check Error.\n\r Unable to display RTC Message.";
  }
  iVar2 = DebuggerProbe(0x1002);
  if (iVar2 == 0) {
    cVar1 = '\x01';
  }
  else {
    iVar2 = DebuggerRuntime(param_3,*(int *)(&DAT_140006ca0 + (longlong)param_3 * 4),param_1,
                            (wchar_t *)pwVar6);
    cVar1 = (char)iVar2;
    if (iVar2 != 0) goto LAB_1400022e3;
  }
  if (((pcVar8 != (code *)0x0) || (pcVar4 != (code *)0x0)) &&
     ((cVar1 == '\0' || (BVar3 = IsDebuggerPresent(), BVar3 == 0)))) {
    _RTC_GetSrcLine((uchar *)((longlong)param_1 + -5),(wchar_t *)local_c88,0x104,(int *)local_ea8,
                    (wchar_t *)local_e98,0x104);
    if (pcVar4 == (code *)0x0) {
      iVar2 = WideCharToMultiByte(0xfde9,0,local_c88,-1,local_a78,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar5 = local_a78;
      if (iVar2 == 0) {
        pcVar5 = "Unknown Filename";
      }
      iVar2 = WideCharToMultiByte(0xfde9,0,local_e98,-1,local_768,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar7 = local_768;
      if (iVar2 == 0) {
        pcVar7 = "Unknown Module Name";
      }
      iVar2 = (*pcVar8)((ulonglong)(uint)param_2,pcVar5,(ulonglong)local_ea8[0],pcVar7);
    }
    else {
      iVar2 = (*pcVar4)((ulonglong)(uint)param_2,local_c88,(ulonglong)local_ea8[0],local_e98);
    }
    if (iVar2 != 1) goto LAB_1400022e3;
  }
  DebugBreak();
LAB_1400022e3:
  FUN_1400017a0(local_58 ^ (ulonglong)&stack0xfffffffffffff118);
  return;
}



// Library Function - Single Match
// Name: ?DebuggerRuntime@@YAHKHPEAXPEB_W@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// int __cdecl DebuggerRuntime(unsigned long,int,void * __ptr64,wchar_t const * __ptr64)

int DebuggerRuntime(ulong param_1,int param_2,void *param_3,wchar_t *param_4)

{
  byte local_res8 [32];
  undefined4 local_38 [2];
  ulong local_30;
  int local_2c;
  void *local_28;
  byte *local_20;
  wchar_t *local_18;
  
  local_res8[0] = 0;
  local_38[0] = 0x1002;
  local_20 = local_res8;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_18 = param_4;
  RaiseException(0x406d1388,0,10,(ULONG_PTR *)local_38);
  return (int)(uint)local_res8[0];
}



// Library Function - Single Match
// Name: ?_RTC_StackFailure@@YAXPEAXPEBD@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl _RTC_StackFailure(void * __ptr64,char const * __ptr64)

void _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined auStack1080 [32];
  char local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_140009000 ^ (ulonglong)auStack1080;
  if (DAT_140009018 == -1) goto LAB_140002451;
  if (*param_2 == '\0') {
LAB_140002431:
    pcVar6 = "Stack corrupted near unknown variable";
  }
  else {
    uVar2 = 0xffffffffffffffff;
    pcVar6 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0x400 < ~uVar2 + 0x2c) goto LAB_140002431;
    pcVar6 = local_418;
    lVar3 = 0;
    do {
      cVar1 = "Stack around the variable \'"[lVar3];
      local_418[lVar3] = cVar1;
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
    lVar3 = -1;
    pcVar4 = local_418;
    do {
      pcVar5 = pcVar4;
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    lVar3 = 0;
    do {
      cVar1 = param_2[lVar3];
      pcVar5[lVar3 + -1] = cVar1;
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
    lVar3 = -1;
    pcVar4 = local_418;
    do {
      pcVar5 = pcVar4;
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    lVar3 = 0;
    do {
      cVar1 = "\' was corrupted."[lVar3];
      pcVar5[lVar3 + -1] = cVar1;
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\0');
  }
  failwithmessage(param_1,DAT_140009018,2,pcVar6);
LAB_140002451:
  FUN_1400017a0(local_18 ^ (ulonglong)auStack1080);
  return;
}



// Library Function - Single Match
// Name: _RTC_SetErrorFuncW
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010

undefined8 _RTC_SetErrorFuncW(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_140009700;
  DAT_1400096f8 = 0;
  DAT_140009700 = param_1;
  return uVar1;
}



undefined8 FUN_140002860(void)

{
  return DAT_1400096f8;
}



undefined8 FUN_140002870(void)

{
  return DAT_140009700;
}



void _CRT_RTC_INITW(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002878. Too many branches
                    // WARNING: Treating indirect jump as call
  _CRT_RTC_INITW();
  return;
}



undefined8 FUN_140002930(void)

{
  return 0;
}



undefined8 FUN_140002940(void)

{
  return 0;
}



void FUN_140002950(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)&DAT_1400075c0;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  } while (ppcVar1 < &DAT_1400077d8);
  return;
}



// Library Function - Single Match
// Name: _onexit
// Libraries: Visual Studio 2008 Debug, Visual Studio 2010 Debug

_onexit_t _onexit(_onexit_t _Func)

{
  undefined8 uVar1;
  longlong local_28;
  _onexit_t local_20;
  undefined8 local_18 [3];
  
  local_28 = _decode_pointer(DAT_140009758);
  if (local_28 == -1) {
    local_20 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_28 = _decode_pointer(DAT_140009758);
    local_18[0] = _decode_pointer(DAT_140009740);
    uVar1 = _encode_pointer(_Func);
    local_20 = (_onexit_t)__dllonexit(uVar1,&local_28,local_18);
    DAT_140009758 = _encode_pointer(local_28);
    DAT_140009740 = _encode_pointer(local_18[0]);
    _unlock(8);
  }
  return local_20;
}



// Library Function - Single Match
// Name: atexit
// Libraries: Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual Studio 2012 Debug

int atexit(void *param_1)

{
  _onexit_t p_Var1;
  int local_18;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  if (p_Var1 == (_onexit_t)0x0) {
    local_18 = -1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



void _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140002ad0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



// Library Function - Single Match
// Name: __security_init_cookie
// Library: Visual Studio 2008 Debug

void __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_28;
  _FILETIME local_20;
  ulonglong local_18 [3];
  
  local_28 = (_FILETIME)0x0;
  if (DAT_140009000 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_28);
    local_20 = local_28;
    DVar1 = GetCurrentProcessId();
    local_20 = (_FILETIME)((ulonglong)local_20 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentThreadId();
    local_20 = (_FILETIME)((ulonglong)local_20 ^ (ulonglong)DVar1);
    DVar1 = GetTickCount();
    local_20 = (_FILETIME)((ulonglong)local_20 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(local_18);
    local_20 = (_FILETIME)(((ulonglong)local_20 ^ local_18[0]) & 0xffffffffffff);
    if (local_20 == (_FILETIME)0x2b992ddfa232) {
      local_20 = (_FILETIME)0x2b992ddfa233;
    }
    DAT_140009000 = (ulonglong)local_20;
    DAT_140009008 = ~(ulonglong)local_20;
  }
  else {
    DAT_140009008 = ~DAT_140009000;
  }
  return;
}



int _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002be4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// Library Function - Single Match
// Name: _ValidateImageBase
// Library: Visual Studio 2008 Debug

BOOL _ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)(pImageBase + *(int *)(pImageBase + 0x3c) + 6) == 0x20b) {
        BVar1 = 1;
      }
      else {
        BVar1 = 0;
      }
    }
    else {
      BVar1 = 0;
    }
  }
  else {
    BVar1 = 0;
  }
  return BVar1;
}



// Library Function - Single Match
// Name: _FindPESection
// Library: Visual Studio 2008 Debug

PIMAGE_SECTION_HEADER _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  uint local_20;
  PIMAGE_SECTION_HEADER local_18;
  
  pImageBase = pImageBase + *(int *)(pImageBase + 0x3c);
  local_20 = 0;
  local_18 = (PIMAGE_SECTION_HEADER)(pImageBase + (ulonglong)*(ushort *)(pImageBase + 0x14) + 0x18);
  while( true ) {
    if (*(ushort *)(pImageBase + 6) <= local_20) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((local_18->VirtualAddress <= rva) && (rva < local_18->VirtualAddress + local_18->Misc))
    break;
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
  }
  return local_18;
}



// Library Function - Single Match
// Name: _IsNonwritableInCurrentImage
// Library: Visual Studio 2008 Debug

BOOL _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint local_14;
  
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
  if (BVar1 == 0) {
    local_14 = 0;
  }
  else {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,(DWORD_PTR)(pTarget + -0x140000000));
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  return (BOOL)local_14;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002dd2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140002dde. Too many branches
                    // WARNING: Treating indirect jump as call
  __crt_debugger_hook(param_1);
  return;
}


/*
Unable to decompile '_RTC_GetSrcLine'
Cause: 
Low-level Error: PTRSUB off of non structured pointer type
*/


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked
// Library Function - Single Match
// Name: ?GetPdbDll@@YAPEAUHINSTANCE__@@XZ
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// struct HINSTANCE__ * __ptr64 __cdecl GetPdbDll(void)

HINSTANCE__ * GetPdbDll(void)

{
  undefined *puVar1;
  HINSTANCE__ *pHVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  uint uVar7;
  longlong lVar8;
  undefined auStack360 [32];
  undefined8 *local_148;
  uint *local_140;
  uint local_138;
  undefined local_134 [4];
  undefined8 local_130;
  undefined8 local_128 [34];
  ulonglong local_18;
  
  local_18 = DAT_140009000 ^ (ulonglong)auStack360;
  if (_DAT_140009724 == 0) {
    _DAT_140009724 = 1;
    hModule = LoadLibraryA(PTR_DAT_140009038);
    if ((((hModule == (HMODULE)0x0) &&
         (hModule = LoadLibraryA("ADVAPI32.DLL"), hModule != (HMODULE)0x0)) &&
        (pFVar3 = GetProcAddress(hModule,"RegOpenKeyExA"), pFVar3 != (FARPROC)0x0)) &&
       ((pFVar4 = GetProcAddress(hModule,"RegQueryValueExA"), pFVar4 != (FARPROC)0x0 &&
        (pFVar5 = GetProcAddress(hModule,"RegCloseKey"), pFVar5 != (FARPROC)0x0)))) {
      local_148 = &local_130;
      IVar6 = (*pFVar3)(0xffffffff80000002,"SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS",0,1);
      if ((int)IVar6 == 0) {
        local_140 = &local_138;
        lVar8 = 0;
        local_148 = (undefined8 *)0x0;
        IVar6 = (*pFVar4)(local_130,"EnvironmentDirectory",0,local_134);
        if ((((int)IVar6 == 0) && (0xc < 0x7fffffff - local_138)) && (local_138 + 0xd < 0x104)) {
          local_140 = &local_138;
          local_148 = local_128;
          IVar6 = (*pFVar4)(local_130,"EnvironmentDirectory",0,local_134);
          (*pFVar5)(local_130);
          FreeLibrary(hModule);
          if ((int)IVar6 == 0) {
            if (*(char *)((longlong)local_128 + (ulonglong)(local_138 - 2)) == '\\') {
              uVar7 = local_138 - 1;
              local_138 = uVar7;
            }
            else {
              *(undefined *)((longlong)local_128 + (ulonglong)(local_138 - 1)) = 0x5c;
              uVar7 = local_138;
            }
            do {
              puVar1 = PTR_DAT_140009038 + lVar8;
              lVar8 = lVar8 + 1;
              *(undefined *)((longlong)local_128 + (ulonglong)uVar7) = *puVar1;
              uVar7 = uVar7 + 1;
            } while (lVar8 < 0xc);
            LoadLibraryA((LPCSTR)local_128);
          }
        }
        else {
          FreeLibrary(hModule);
        }
      }
      else {
        FreeLibrary(hModule);
      }
    }
    pHVar2 = (HINSTANCE__ *)FUN_1400017a0(local_18 ^ (ulonglong)auStack360);
    return pHVar2;
  }
  pHVar2 = (HINSTANCE__ *)FUN_1400017a0(local_18 ^ (ulonglong)auStack360);
  return pHVar2;
}



void _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000140003424. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00014000342a. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000140003430. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



PEXCEPTION_ROUTINE
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140003460. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



PRUNTIME_FUNCTION
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x000140003466. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



void FUN_140004c90(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)**(undefined8 **)(param_2 + 0x50);
  _XcptFilter(*(ulong *)(param_2 + 0x48),*(_EXCEPTION_POINTERS **)(param_2 + 0x50));
  return;
}



void FUN_140004cc0(void)

{
  _unlock(8);
  return;
}



// Library Function - Single Match
// Name: _IsNonwritableInCurrentImage$filt$0
// Library: Visual Studio 2005 Debug

ulonglong _IsNonwritableInCurrentImage_filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)**(undefined8 **)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x40) == -0x3ffffffb) {
    *(undefined4 *)(param_2 + 0x48) = 1;
  }
  else {
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return (ulonglong)*(uint *)(param_2 + 0x48);
}


