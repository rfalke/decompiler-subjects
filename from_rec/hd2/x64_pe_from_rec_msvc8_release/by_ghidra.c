typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
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

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    ImageBaseOffset32 EndAddress;
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

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

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

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

struct _struct_55 {
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

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
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
    union _union_54 u;
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

typedef union _union_238 _union_238, *P_union_238;

union _union_238 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_238 Misc;
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
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef struct _M128A * PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
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

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong * PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
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

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
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

typedef void * HANDLE;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS * PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
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

typedef ULONG_PTR DWORD_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[64];
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

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

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

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
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

typedef ulonglong uintptr_t;

typedef int (* _onexit_t)(void);

typedef ulonglong size_t;




void FUN_140001000(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined auStack_a8 [32];
  undefined4 local_88 [2];
  char local_7f [71];
  ulonglong local_38;
  
  local_38 = DAT_140003000 ^ (ulonglong)auStack_a8;
  sprintf((char *)local_88,"%08lX:");
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  uVar2 = 0;
  lVar6 = (longlong)param_3;
  uVar5 = uVar2;
  uVar7 = uVar2;
  iVar10 = 0;
  if (0 < param_3) {
    do {
      sprintf(local_7f + (int)uVar7," %02lX");
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)((int)uVar7 + 3);
    } while ((longlong)uVar5 < lVar6);
    iVar10 = param_3;
    if (0xf < param_3) goto LAB_1400010c6;
  }
  uVar5 = (ulonglong)(0x10 - iVar10);
  do {
    lVar3 = -1;
    puVar8 = local_88;
    do {
      puVar9 = puVar8;
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      puVar9 = (undefined4 *)((longlong)puVar8 + 1);
      cVar1 = *(char *)puVar8;
      puVar8 = puVar9;
    } while (cVar1 != '\0');
    uVar5 = uVar5 - 1;
    *(undefined4 *)((longlong)puVar9 + -1) = 0x202020;
  } while (uVar5 != 0);
LAB_1400010c6:
  lVar3 = -1;
  puVar8 = local_88;
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    cVar1 = *(char *)puVar8;
    puVar8 = (undefined4 *)((longlong)puVar8 + 1);
  } while (cVar1 != '\0');
  *(undefined4 *)((longlong)local_88 + (longlong)(int)(~(uint)lVar3 - 1)) = 0x7c2020;
  lVar3 = (longlong)(int)(~(uint)lVar3 + 2);
  iVar10 = 0;
  if (0 < lVar6) {
    do {
      bVar4 = *(byte *)(uVar2 + param_1);
      if ((bVar4 < 0x20) || (0x7e < bVar4)) {
        bVar4 = 0x2e;
      }
      *(byte *)((longlong)local_88 + uVar2 + lVar3) = bVar4;
      uVar2 = uVar2 + 1;
      iVar10 = param_3;
    } while ((longlong)uVar2 < lVar6);
  }
  lVar6 = (longlong)iVar10;
  if (lVar6 < 0x10) {
    memset((void *)((longlong)local_88 + lVar6 + lVar3),
           (int)CONCAT71((int7)(int3)((uint)iVar10 >> 8),0x20),0x10U - lVar6);
    iVar10 = iVar10 + (int)(0x10U - lVar6);
  }
  *(undefined2 *)((longlong)local_88 + iVar10 + lVar3) = 0x7c;
  printf("%s\n");
  __security_check_cookie(local_38 ^ (ulonglong)auStack_a8);
  return;
}



void FUN_140001190(char *param_1)

{
  int iVar1;
  int extraout_EAX;
  FILE *_File;
  uint uVar3;
  undefined auStack_78 [32];
  undefined local_58 [20];
  uint local_44;
  undefined local_28 [16];
  ulonglong local_18;
  size_t sVar2;
  
  local_18 = DAT_140003000 ^ (ulonglong)auStack_78;
  iVar1 = _stat64i32(param_1,local_58);
  if (iVar1 != 0) {
    perror(param_1);
    __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
    return;
  }
  _File = fopen(param_1,"rb");
  if (_File == (FILE *)0x0) {
    perror(param_1);
  }
  else {
    uVar3 = 0;
    if (local_44 != 0) {
      do {
        sVar2 = fread(local_28,1,0x10,_File);
        extraout_EAX = (int)sVar2;
        if (extraout_EAX == 0) break;
        FUN_140001000((longlong)local_28,(ulonglong)uVar3,extraout_EAX);
        uVar3 = uVar3 + extraout_EAX;
      } while (uVar3 < local_44);
    }
    fclose(_File);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}



int FUN_140001290(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 1;
  iVar2 = 0;
  if (1 < (longlong)param_1) {
    do {
      iVar1 = FUN_140001190(*(char **)(param_2 + lVar3 * 8));
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + iVar1;
    } while (lVar3 < param_1);
  }
  return iVar2;
}



// Library Function - Single Match
//  __security_check_cookie
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140003000) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __report_gsfailure(_StackCookie);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __tmainCRTStartup
// 
// Library: Visual Studio 2008 Release

int __tmainCRTStartup(void)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  BOOL BVar4;
  bool bVar5;
  
  pvVar2 = StackBase;
  bVar1 = false;
  do {
    LOCK();
    bVar5 = DAT_1400035d8 == 0;
    DAT_1400035d8 = DAT_1400035d8 ^ (ulonglong)bVar5 * (DAT_1400035d8 ^ (ulonglong)pvVar2);
    UNLOCK();
    if (bVar5) {
LAB_1400013ce:
      if (DAT_1400035d0 == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_1400035d0 == 0) {
        DAT_1400035d0 = 1;
        iVar3 = _initterm_e(&DAT_140002190,&DAT_1400021a8);
        if (iVar3 != 0) {
          return 0xff;
        }
      }
      else {
        _DAT_140003044 = 1;
      }
      if (DAT_1400035d0 == 1) {
        _initterm(&DAT_140002178,&DAT_140002188);
        DAT_1400035d0 = 2;
      }
      if (!bVar1) {
        LOCK();
        DAT_1400035d8 = 0;
        UNLOCK();
      }
      if ((DAT_1400035f0 != (code *)0x0) &&
         (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1400035f0), BVar4 != 0)) {
        (*DAT_1400035f0)(0,2);
      }
      *(undefined8 *)__initenv_exref = DAT_140003028;
      DAT_140003040 = FUN_140001290(DAT_140003020,DAT_140003030);
      if (_DAT_140003024 != 0) {
        if (_DAT_140003044 == 0) {
          _cexit();
        }
        return DAT_140003040;
      }
                    // WARNING: Subroutine does not return
      exit(DAT_140003040);
    }
    if ((void *)(!bVar5 * DAT_1400035d8) == pvVar2) {
      bVar1 = true;
      goto LAB_1400013ce;
    }
    Sleep(1000);
  } while( true );
}



void entry(void)

{
  __security_init_cookie();
  __tmainCRTStartup();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __report_gsfailure
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  uintptr_t local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  DWORD64 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8[0] = _StackCookie;
  RtlCaptureContext(&DAT_1400030f0);
  local_30 = DAT_1400031e8;
  local_38 = RtlLookupFunctionEntry(DAT_1400031e8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140003188 = local_res8;
    DAT_1400031e8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1400030f0,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140003060 = DAT_1400031e8;
  _DAT_140003170 = local_res8[0];
  _DAT_140003050 = 0xc0000409;
  _DAT_140003054 = 1;
  local_20 = DAT_140003000;
  local_18 = DAT_140003008;
  _DAT_1400030e8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1400021d0);
  if (_DAT_1400030e8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}



undefined8 FUN_140001794(void)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_140001750);
  return 0;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001400017ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



// Library Function - Single Match
//  _onexit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_1400035e8);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1400035e8);
    local_res18[0] = _decode_pointer(DAT_1400035e0);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1400035e8 = _encode_pointer(local_res10);
    DAT_1400035e0 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}



// Library Function - Single Match
//  atexit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



void FUN_14000187c(void)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_140002260; ppcVar1 < &DAT_140002260; ppcVar1 = ppcVar1 + 1) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400018f2. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// Library Function - Single Match
//  _ValidateImageBase
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)(*(short *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b)
    ;
  }
  return uVar1;
}



// Library Function - Single Match
//  _FindPESection
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  _IsNonwritableInCurrentImage
// 
// Library: Visual Studio 2008 Release

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_140000000;
  uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
  p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)uVar1;
  if (uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)(~(p_Var2->Characteristics >> 0x1f) & 1);
    }
  }
  return (BOOL)p_Var2;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400019c2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400019c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



undefined8 FUN_1400019d0(void)

{
  return 0;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_140003000 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140003000 =
         (local_res10.QuadPart ^
         (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff
    ;
    if (DAT_140003000 == 0x2b992ddfa232) {
      DAT_140003000 = 0x2b992ddfa233;
    }
    DAT_140003008 = ~DAT_140003000;
  }
  else {
    DAT_140003008 = ~DAT_140003000;
  }
  return;
}



void __cdecl __crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140001a88. Too many branches
                    // WARNING: Treating indirect jump as call
  __crt_debugger_hook(param_1);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000140001a8e. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000140001a94. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140001a9a. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x000140001aa0. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140001aa6. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}



PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x000140001aac. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}



// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
// Visual Studio 2019 Release

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*(byte *)param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  __security_check_cookie(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140001b36. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void FUN_140001b40(_EXCEPTION_POINTERS *param_1)

{
  _XcptFilter(param_1->ExceptionRecord->ExceptionCode,param_1);
  return;
}



bool FUN_140001b80(int **param_1)

{
  return **param_1 == -0x3ffffffb;
}


