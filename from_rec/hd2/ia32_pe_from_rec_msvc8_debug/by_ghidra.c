typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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

typedef wchar_t WCHAR;

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

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

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

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

typedef CHAR * LPSTR;

typedef struct _TEB _TEB, *P_TEB;

struct _TEB {
};

typedef WCHAR * LPWSTR;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef WCHAR * LPCWSTR;

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
    char pdbpath[58];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (* FARPROC)(void);

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

typedef struct _RTC_ALLOCA_NODE _RTC_ALLOCA_NODE, *P_RTC_ALLOCA_NODE;

struct _RTC_ALLOCA_NODE { // PlaceHolder Structure
};

typedef int (* _onexit_t)(void);

typedef int errno_t;

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




void __setdefaultprecision(void)

{
  errno_t _ExpressionError;
  wchar_t *_Expression;
  wchar_t *_Function;
  wchar_t *_File;
  uint _Line;
  uintptr_t _Reserved;
  
  _Reserved = 0;
  _Line = 0x1f;
  _File = L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c";
  _Function = L"_setdefaultprecision";
  _Expression = L"_controlfp_s(((void *)0), 0x00010000, 0x00030000)";
  _ExpressionError = _controlfp_s((uint *)0x0,0x10000,0x30000);
  __invoke_watson_if_error(_ExpressionError,_Expression,_Function,_File,_Line,_Reserved);
  return;
}



int __cdecl FID_conflict___wsetargv(void)

{
  return 0;
}



void __fastcall ___security_check_cookie_4(int param_1)

{
  if (param_1 == DAT_00417000) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}



undefined4 thunk_FUN_00412ca0(void)

{
  return DAT_0041753c;
}



void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  LARGE_INTEGER LStack_1c;
  uint uStack_10;
  _FILETIME _Stack_c;
  
  _Stack_c.dwLowDateTime = 0;
  _Stack_c.dwHighDateTime = 0;
  if ((DAT_00417000 == 0xbb40e64e) || ((DAT_00417000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&_Stack_c);
    uStack_10 = _Stack_c.dwLowDateTime ^ _Stack_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    uStack_10 = DVar1 ^ uStack_10;
    DVar1 = GetCurrentThreadId();
    uStack_10 = DVar1 ^ uStack_10;
    DVar1 = GetTickCount();
    uStack_10 = DVar1 ^ uStack_10;
    QueryPerformanceCounter(&LStack_1c);
    uStack_10 = uStack_10 ^ LStack_1c.s.LowPart ^ LStack_1c.s.HighPart;
    if (uStack_10 == 0xbb40e64e) {
      uStack_10 = 0xbb40e64f;
    }
    else if ((uStack_10 & 0xffff0000) == 0) {
      uStack_10 = uStack_10 << 0x10 | uStack_10;
    }
    DAT_00417000 = uStack_10;
    DAT_00417004 = ~uStack_10;
  }
  else {
    DAT_00417004 = ~DAT_00417000;
  }
  return;
}



int __cdecl _atexit(_func_4879 *param_1)

{
  int iVar1;
  
  iVar1 = __onexit((_onexit_t)param_1);
  return (iVar1 != 0) - 1;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139da. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void __fastcall __RTC_CheckStackVars_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *unaff_retaddr;
  int iStack_8;
  
  iVar2 = 0;
  iStack_8 = 0;
  if (0 < *param_2) {
    do {
      iVar1 = *(int *)(param_2[1] + iVar2);
      if ((*(int *)(iVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(param_2[1] + iVar2 + 4) + iVar1 + param_1) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(param_2[1] + 8 + iVar2));
      }
      iStack_8 = iStack_8 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iStack_8 < *param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  undefined4 uStack_32c;
  undefined4 uStack_328;
  
  _DAT_00417288 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&uStack_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&uStack_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041728c = &stack0x00000004;
  _DAT_004171c8 = 0x10001;
  _DAT_00417170 = 0xc0000409;
  _DAT_00417174 = 1;
  uStack_32c = DAT_00417000;
  uStack_328 = DAT_00417004;
  _DAT_0041717c = unaff_retaddr;
  _DAT_00417254 = in_GS;
  _DAT_00417258 = in_FS;
  _DAT_0041725c = in_ES;
  _DAT_00417260 = in_DS;
  _DAT_00417264 = unaff_EDI;
  _DAT_00417268 = unaff_ESI;
  _DAT_0041726c = unaff_EBX;
  _DAT_00417270 = in_EDX;
  _DAT_00417274 = in_ECX;
  _DAT_00417278 = in_EAX;
  _DAT_0041727c = unaff_EBP;
  DAT_00417280 = unaff_retaddr;
  _DAT_00417284 = in_CS;
  _DAT_00417290 = in_SS;
  _DAT_004171c0 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_00415838);
  if (_DAT_004171c0 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004139bc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



char * __cdecl strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041195e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcat(_Dest,_Source);
  return pcVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004133ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411958. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



undefined8 __cdecl thunk_FUN_00411410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint *puVar3;
  undefined8 uVar4;
  uint auStack_13c [50];
  size_t sStack_74;
  int iStack_68;
  char acStack_5c [9];
  char acStack_53 [75];
  uint uStack_8;
  
  puVar3 = auStack_13c;
  for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  sprintf(acStack_5c,"%08lX:");
  __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  for (iStack_68 = 0; iStack_68 < param_3; iStack_68 = iStack_68 + 1) {
    sprintf(acStack_53 + iStack_68 * 3," %02lX");
    __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  }
  while( true ) {
    auStack_13c[0] = (uint)(iStack_68 < 0x10);
    if (auStack_13c[0] == 0) break;
    iStack_68 = iStack_68 + 1;
    strcat(acStack_5c,"   ");
  }
  iStack_68 = iStack_68 + 1;
  sStack_74 = strlen(acStack_5c);
  strcpy(acStack_5c + sStack_74,"  |");
  iVar2 = sStack_74 + 3;
  for (iStack_68 = 0; iStack_68 < param_3; iStack_68 = iStack_68 + 1) {
    if ((*(byte *)(param_1 + iStack_68) < 0x20) || (0x7e < *(byte *)(param_1 + iStack_68))) {
      auStack_13c[0] = 0x2e;
    }
    else {
      auStack_13c[0] = (uint)*(byte *)(param_1 + iStack_68);
    }
    acStack_5c[iVar2 + iStack_68] = (char)auStack_13c[0];
  }
  for (; iStack_68 < 0x10; iStack_68 = iStack_68 + 1) {
    acStack_5c[iVar2 + iStack_68] = ' ';
  }
  iVar1 = iStack_68 + sStack_74;
  sStack_74 = iVar2;
  strcpy(acStack_5c + iVar1 + 3,"|");
  printf("%s\n");
  __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&LAB_00411600);
  ___security_check_cookie_4(uStack_8 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0x4115f9;
  uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  return uVar4;
}



char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411952. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Stack_10;
  uint uStack_c;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uStack_c = 0;
  p_Stack_10 = (PIMAGE_SECTION_HEADER)
               (pImageBase + (uint)*(ushort *)(pImageBase + iVar1 + 0x14) + iVar1 + 0x18);
  while( true ) {
    if (*(ushort *)(pImageBase + iVar1 + 6) <= uStack_c) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((p_Stack_10->VirtualAddress <= rva) &&
       (rva < p_Stack_10->VirtualAddress + (p_Stack_10->Misc).PhysicalAddress)) break;
    uStack_c = uStack_c + 1;
    p_Stack_10 = p_Stack_10 + 1;
  }
  return p_Stack_10;
}



void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined auStack_40c [4];
  char acStack_408 [1024];
  uint uStack_8;
  
  uStack_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  auStack_40c = (undefined  [4])param_1;
  if (DAT_00417010 == -1) goto LAB_0041283e;
  if (*param_2 == '\0') {
LAB_0041281f:
    pcVar5 = "Stack corrupted near unknown variable";
  }
  else {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar5 + (0x2d - (int)(param_2 + 1))) goto LAB_0041281f;
    pcVar5 = acStack_408;
    iVar6 = 0;
    do {
      cVar1 = "Stack around the variable \'"[iVar6];
      acStack_408[iVar6] = cVar1;
      iVar6 = iVar6 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)param_2;
    puVar9 = (undefined4 *)(auStack_40c + 3);
    do {
      pcVar2 = (char *)((int)puVar9 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    } while (*pcVar2 != '\0');
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *(undefined4 *)param_2;
      param_2 = (char *)((int)param_2 + 4);
      puVar9 = puVar9 + 1;
    }
    for (uVar3 = uVar3 & 3; pcVar2 = "\' was corrupted.", uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar9 = *param_2;
      param_2 = (char *)((int)param_2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    puVar9 = (undefined4 *)(auStack_40c + 3);
    do {
      pcVar2 = (char *)((int)puVar9 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    } while (*pcVar2 != '\0');
    puVar8 = (undefined4 *)"\' was corrupted.";
    for (uVar3 = (uint)(pcVar4 + -0x415baf) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar3 = (uint)(pcVar4 + -0x415baf) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  failwithmessage(param_1,DAT_00417010,2,pcVar5);
LAB_0041283e:
  ___security_check_cookie_4(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004133f4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook(param_1);
  return;
}



BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b) {
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



void __onexit(_onexit_t param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [3];
  void *pvStack_14;
  undefined *puStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xfffffffe;
  puStack_10 = &LAB_00411087;
  pvStack_14 = ExceptionList;
  uStack_c = DAT_00417000 ^ 0x416b18;
  uVar1 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_14;
  aiStack_20[0] = _decode_pointer(DAT_00417584,uVar1);
  if (aiStack_20[0] == -1) {
    _onexit(param_1);
    ExceptionList = pvStack_14;
    return;
  }
  _lock(8);
  uStack_8 = 0;
  aiStack_20[0] = _decode_pointer(DAT_00417584,uVar1);
  uStack_28 = _decode_pointer(DAT_00417574);
  uVar2 = _encode_pointer(param_1,aiStack_20,&uStack_28);
  uStack_24 = __dllonexit(uVar2);
  DAT_00417584 = _encode_pointer(aiStack_20[0]);
  DAT_00417574 = _encode_pointer(uStack_28);
  uStack_8 = 0xfffffffe;
  FUN_00412f55();
  FUN_00412f60();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

_TEB * _NtCurrentTeb(void)

{
  return (_TEB *)&ExceptionList;
}



void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  _invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
}



void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



undefined8 __cdecl thunk_FUN_004116a0(char *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 auStack_13c [49];
  int iStack_78;
  undefined auStack_6c [20];
  uint uStack_58;
  FILE *pFStack_34;
  uint uStack_28;
  undefined auStack_1c [20];
  uint uStack_8;
  
  puVar2 = auStack_13c;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  uStack_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  uVar3 = FUN_00411860(param_1,auStack_6c);
  if ((int)uVar3 == 0) {
    fopen(param_1,"rb");
    uVar3 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
    pFStack_34 = (FILE *)uVar3;
    if (pFStack_34 == (FILE *)0x0) {
      perror(param_1);
      __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
    }
    else {
      for (uStack_28 = 0; uStack_28 < uStack_58; uStack_28 = uStack_28 + iStack_78) {
        fread(auStack_1c,1,0x10,pFStack_34);
        uVar3 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
        iStack_78 = (int)uVar3;
        if (iStack_78 == 0) break;
        thunk_FUN_00411410((int)auStack_1c,uStack_28,iStack_78);
      }
      fclose(pFStack_34);
      __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
    }
  }
  else {
    perror(param_1);
    __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_004117dc);
  ___security_check_cookie_4(uStack_8 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0x4117d7;
  uVar3 = __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
  return uVar3;
}



undefined8 __fastcall __RTC_CheckEsp(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return CONCAT44(param_2,in_EAX);
  }
  _RTC_Failure(unaff_retaddr,0);
  return CONCAT44(param_2,in_EAX);
}



undefined8 __fastcall
thunk_FUN_004118c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 auStack_dc [49];
  int iStack_18;
  int iStack_c;
  undefined4 uStack_8;
  
  puVar3 = auStack_dc;
  for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  iStack_18 = 0;
  uVar2 = 0;
  for (iStack_c = 1; iStack_c < param_3; iStack_c = iStack_c + 1) {
    uVar4 = thunk_FUN_004116a0(*(char **)(param_4 + iStack_c * 4));
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    iStack_18 = (int)uVar4 + iStack_18;
    uVar2 = extraout_ECX;
  }
  uStack_8 = 0x41192c;
  uVar4 = __RTC_CheckEsp(uVar2,param_2);
  return uVar4;
}



void __RTC_Initialize(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)&DAT_004164a0;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  } while (ppcVar1 < &DAT_004166a4);
  return;
}



errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139c2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}



void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x004139c8. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  return;
}



int __cdecl
_RTC_GetSrcLine(uchar *param_1,wchar_t *param_2,ulong param_3,int *param_4,wchar_t *param_5,
               ulong param_6)

{
  char cVar1;
  SIZE_T SVar2;
  DWORD DVar3;
  int *piVar4;
  uint *puVar5;
  FARPROC pFVar6;
  int iVar7;
  HANDLE pvVar8;
  uint uVar9;
  uint uVar10;
  uchar *lpAddress;
  uint uVar11;
  uint uVar12;
  _MEMORY_BASIC_INFORMATION _Stack_48;
  undefined auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  int *piStack_14;
  int *piStack_10;
  uint uStack_c;
  int *piStack_8;
  
  *param_4 = 0;
  lpAddress = param_1 + -1;
  *param_2 = L'\0';
  SVar2 = VirtualQuery(lpAddress,&_Stack_48,0x1c);
  if ((((SVar2 == 0) ||
       (DVar3 = GetModuleFileNameW((HMODULE)_Stack_48.AllocationBase,param_5,param_6), DVar3 == 0))
      || (*(short *)(int *)_Stack_48.AllocationBase != 0x5a4d)) ||
     ((((HMODULE)((int)_Stack_48.AllocationBase + 0x3c))->unused < 1 ||
      (piVar4 = (int *)((int)(int *)_Stack_48.AllocationBase +
                       ((HMODULE)((int)_Stack_48.AllocationBase + 0x3c))->unused), *piVar4 != 0x4550
      )))) {
    return 0;
  }
  uVar9 = (uint)*(ushort *)((int)piVar4 + 6);
  uVar11 = (int)lpAddress - (int)_Stack_48.AllocationBase;
  uVar12 = 0;
  uVar10 = 0;
  if (uVar9 != 0) {
    puVar5 = (uint *)((int)piVar4 + *(ushort *)(piVar4 + 5) + 0x24);
    do {
      if ((*puVar5 <= uVar11) && (uVar12 = uVar11 - *puVar5, uVar11 < puVar5[-1])) break;
      uVar10 = uVar10 + 1;
      puVar5 = puVar5 + 10;
    } while (uVar10 < uVar9);
  }
  if (uVar10 == uVar9) {
    return 0;
  }
  if (DAT_00417558 == '\0') {
    if (DAT_00417554 != (HMODULE)0x0) {
      return 0;
    }
    DAT_00417554 = GetPdbDll();
    if (DAT_00417554 == (HINSTANCE__ *)0x0) {
      return 0;
    }
    DAT_00417558 = '\x01';
  }
  pFVar6 = GetProcAddress(DAT_00417554,"PDBOpenValidate5");
  puVar5 = (uint *)0x0;
  if (pFVar6 == (FARPROC)0x0) {
    return 0;
  }
  iVar7 = (*pFVar6)(param_5,0,0,0,auStack_2c,0,0,&piStack_14);
  if (iVar7 == 0) {
    return 0;
  }
  iStack_20 = 0;
  iVar7 = (**(code **)*piStack_14)();
  if ((iVar7 != 0x131a5b5) ||
     (iVar7 = (**(code **)(*piStack_14 + 0x1c))(0,&DAT_00416154,&piStack_1c), iVar7 == 0))
  goto LAB_004136ac;
  iVar7 = (**(code **)(*piStack_1c + 0x20))(uVar10 + 1,uVar12,&piStack_10,0,0,0);
  if (iVar7 != 0) {
    piStack_8 = (int *)0x0;
    cVar1 = (**(code **)(*piStack_10 + 0x68))(&piStack_8);
    if ((cVar1 != '\0') && (piStack_8 != (int *)0x0)) {
      iVar7 = (**(code **)(*piStack_8 + 8))();
      while (iVar7 != 0) {
        cVar1 = (**(code **)(*piStack_8 + 0xc))(0,&uStack_18,&param_1,&iStack_24,&uStack_c,0);
        if (cVar1 == '\0') goto LAB_0041368f;
        if (((((uint)param_1 & 0xffff) == uVar10 + 1) && (uStack_18 <= uVar12)) &&
           (uVar12 < uStack_18 + iStack_24)) {
          if ((uStack_c == 0) || (0x1ffffffe < uStack_c)) goto LAB_0041368f;
          SVar2 = uStack_c * 8;
          DVar3 = 0;
          pvVar8 = GetProcessHeap();
          puVar5 = (uint *)HeapAlloc(pvVar8,DVar3,SVar2);
          if (puVar5 == (uint *)0x0) goto LAB_0041368f;
          cVar1 = (**(code **)(*piStack_8 + 0xc))(&uStack_28,0,0,0,&uStack_c,puVar5);
          if ((cVar1 == '\0') || (uVar12 - uStack_18 < *puVar5)) break;
          uVar9 = 1;
          if (1 < uStack_c) goto LAB_00413640;
          goto LAB_0041364a;
        }
        iVar7 = (**(code **)(*piStack_8 + 8))();
      }
      goto LAB_0041367f;
    }
    goto LAB_00413698;
  }
  goto LAB_004136a2;
  while (uVar9 = uVar9 + 1, uVar9 < uStack_c) {
LAB_00413640:
    if (uVar12 - uStack_18 < puVar5[uVar9 * 2]) break;
  }
LAB_0041364a:
  *param_4 = puVar5[uVar9 * 2 + -1] & 0xffffff;
  cVar1 = (**(code **)(*piStack_10 + 0x70))(uStack_28,param_2,&param_3,0,0,0);
  if (cVar1 != '\0') {
    iStack_20 = 1;
  }
LAB_0041367f:
  DVar3 = 0;
  pvVar8 = GetProcessHeap();
  HeapFree(pvVar8,DVar3,puVar5);
LAB_0041368f:
  (**(code **)*piStack_8)();
LAB_00413698:
  (**(code **)(*piStack_10 + 0x40))();
LAB_004136a2:
  (**(code **)(*piStack_1c + 0x38))();
LAB_004136ac:
  (**(code **)(*piStack_14 + 0x28))();
  return iStack_20;
}



BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  void *pvStack_14;
  undefined *puStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  puStack_10 = &LAB_00411087;
  pvStack_14 = ExceptionList;
  uStack_c = DAT_00417000 ^ 0x416b38;
  ExceptionList = &pvStack_14;
  uStack_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  ExceptionList = pvStack_14;
  return uVar3;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413118. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (*(int *)(&DAT_00417008 + param_2 * 4) != -1) {
      failwithmessage(param_1,*(int *)(&DAT_00417008 + param_2 * 4),param_2,
                      (&PTR_s_The_value_of_ESP_was_not_properl_00415b64)[param_2]);
    }
    return;
  }
  failwithmessage(param_1,1,5,"Unknown Runtime Check Error\n\r");
  return;
}



void __cdecl _RTC_AllocaFailure(void *param_1,_RTC_ALLOCA_NODE *param_2,int param_3)

{
  int iVar1;
  HMODULE hModule;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  CHAR aCStack_144 [244];
  char acStack_50 [52];
  char acStack_1c [20];
  uint uStack_8;
  
  iVar1 = DAT_00417018;
  uStack_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417018 != -1) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00417534 = GetProcAddress(hModule,"wsprintfA");
      if ((param_2 != (_RTC_ALLOCA_NODE *)0x0) && (DAT_00417534 != (FARPROC)0x0)) {
        (*DAT_00417534)(aCStack_144,"%s%s%p%s%ld%s%d%s",
                        "Stack area around _alloca memory reserved by this function is corrupted",
                        "\nAddress: 0x",param_2 + 0x20,"\nSize: ",*(int *)(param_2 + 0xc) + -0x24,
                        "\nAllocation number within this function: ",param_3,"\nData: <");
        _getMemBlockDataString
                  (acStack_1c,acStack_50,(char *)(param_2 + 0x20),*(int *)(param_2 + 0xc) - 0x24);
        puVar7 = &DAT_00415de8;
        pcVar6 = acStack_50;
        puVar5 = &DAT_00415de4;
        pcVar4 = acStack_1c;
        pcVar3 = "%s%s%s%s";
        iVar2 = lstrlenA(aCStack_144);
        (*DAT_00417534)(aCStack_144 + iVar2,pcVar3,pcVar4,puVar5,pcVar6,puVar7);
        failwithmessage(param_1,iVar1,4,aCStack_144);
        ___security_check_cookie_4(uStack_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    failwithmessage(param_1,iVar1,4,
                    "Stack area around _alloca memory reserved by this function is corrupted\n");
  }
  ___security_check_cookie_4(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004139d4. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004133b2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



undefined4 thunk_FUN_00412c90(void)

{
  return DAT_00417538;
}



undefined8 __cdecl FUN_00411410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint *puVar3;
  undefined8 uVar4;
  uint local_13c [50];
  size_t local_74;
  int local_68;
  char local_5c [9];
  char acStack_53 [75];
  uint local_8;
  
  puVar3 = local_13c;
  for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  sprintf(local_5c,"%08lX:");
  __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  for (local_68 = 0; local_68 < param_3; local_68 = local_68 + 1) {
    sprintf(acStack_53 + local_68 * 3," %02lX");
    __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  }
  while( true ) {
    local_13c[0] = (uint)(local_68 < 0x10);
    if (local_13c[0] == 0) break;
    local_68 = local_68 + 1;
    strcat(local_5c,"   ");
  }
  local_68 = local_68 + 1;
  local_74 = strlen(local_5c);
  strcpy(local_5c + local_74,"  |");
  iVar2 = local_74 + 3;
  for (local_68 = 0; local_68 < param_3; local_68 = local_68 + 1) {
    if ((*(byte *)(param_1 + local_68) < 0x20) || (0x7e < *(byte *)(param_1 + local_68))) {
      local_13c[0] = 0x2e;
    }
    else {
      local_13c[0] = (uint)*(byte *)(param_1 + local_68);
    }
    local_5c[iVar2 + local_68] = (char)local_13c[0];
  }
  for (; local_68 < 0x10; local_68 = local_68 + 1) {
    local_5c[iVar2 + local_68] = ' ';
  }
  iVar1 = local_68 + local_74;
  local_74 = iVar2;
  strcpy(local_5c + iVar1 + 3,"|");
  printf("%s\n");
  __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&LAB_00411600);
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  local_8 = 0x4115f9;
  uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  return uVar4;
}



undefined8 __cdecl FUN_004116a0(char *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_13c [49];
  int local_78;
  undefined local_6c [20];
  uint local_58;
  FILE *local_34;
  uint local_28;
  undefined local_1c [20];
  uint local_8;
  
  puVar2 = local_13c;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  uVar3 = FUN_00411860(param_1,local_6c);
  if ((int)uVar3 == 0) {
    fopen(param_1,"rb");
    uVar3 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
    local_34 = (FILE *)uVar3;
    if (local_34 == (FILE *)0x0) {
      perror(param_1);
      __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
    }
    else {
      for (local_28 = 0; local_28 < local_58; local_28 = local_28 + local_78) {
        fread(local_1c,1,0x10,local_34);
        uVar3 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
        local_78 = (int)uVar3;
        if (local_78 == 0) break;
        thunk_FUN_00411410((int)local_1c,local_28,local_78);
      }
      fclose(local_34);
      __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
    }
  }
  else {
    perror(param_1);
    __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_004117dc);
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  local_8 = 0x4117d7;
  uVar3 = __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
  return uVar3;
}



undefined8 __cdecl FUN_00411860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_c4 [47];
  undefined4 uStack_8;
  
  puVar2 = local_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  _stat64i32(param_1,param_2);
  uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  uStack_8 = 0x4118a8;
  uVar3 = __RTC_CheckEsp(extraout_ECX_00,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



undefined8 __fastcall FUN_004118c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_dc [49];
  int local_18;
  int local_c;
  undefined4 uStack_8;
  
  puVar3 = local_dc;
  for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_18 = 0;
  uVar2 = 0;
  for (local_c = 1; local_c < param_3; local_c = local_c + 1) {
    uVar4 = thunk_FUN_004116a0(*(char **)(param_4 + local_c * 4));
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_18 = (int)uVar4 + local_18;
    uVar2 = extraout_ECX;
  }
  uStack_8 = 0x41192c;
  uVar4 = __RTC_CheckEsp(uVar2,param_2);
  return uVar4;
}



char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411952. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411958. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



char * __cdecl strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041195e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcat(_Dest,_Source);
  return pcVar1;
}



// Library Function - Single Match
//  @__security_check_cookie@4
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug

void __fastcall ___security_check_cookie_4(int param_1)

{
  if (param_1 == DAT_00417000) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}



// Library Function - Single Match
//  __RTC_CheckEsp
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug

undefined8 __fastcall __RTC_CheckEsp(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return CONCAT44(param_2,in_EAX);
  }
  _RTC_Failure(unaff_retaddr,0);
  return CONCAT44(param_2,in_EAX);
}



// Library Function - Single Match
//  @_RTC_CheckStackVars@8
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __fastcall __RTC_CheckStackVars_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *unaff_retaddr;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *param_2) {
    do {
      iVar1 = *(int *)(param_2[1] + iVar2);
      if ((*(int *)(iVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(param_2[1] + iVar2 + 4) + iVar1 + param_1) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(param_2[1] + 8 + iVar2));
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0xc;
    } while (local_8 < *param_2);
  }
  return;
}



// Library Function - Single Match
//  @_RTC_AllocaHelper@12
// 
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010

void __fastcall __RTC_AllocaHelper_12(undefined *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) &&
     (iVar1 = param_2, puVar2 = param_1, param_3 != (undefined4 *)0x0)) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xcc;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(int *)(param_1 + 0xc) = param_2;
    *param_3 = param_1;
  }
  return;
}



// Library Function - Single Match
//  @_RTC_CheckStackVars2@12
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __fastcall __RTC_CheckStackVars2_12(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *unaff_retaddr;
  int local_8;
  
  iVar3 = 0;
  if ((param_2 != (int *)0x0) && (local_8 = 0, 0 < *param_2)) {
    do {
      iVar1 = *(int *)(param_2[1] + iVar3);
      if ((*(int *)(iVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(param_2[1] + iVar3 + 4) + iVar1 + param_1) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(iVar3 + 8 + param_2[1]));
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0xc;
    } while (local_8 < *param_2);
  }
  iVar3 = 0;
  piVar2 = param_3;
  if (param_3 != (int *)0x0) {
    do {
      piVar2 = (int *)piVar2[1];
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if (param_3 != (int *)0x0) {
      do {
        if ((((*param_3 != -0x33333334) || (param_3[5] != -0x33333334)) ||
            (param_3[6] != -0x33333334)) || (param_3[7] != -0x33333334)) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_3,iVar3);
        }
        if (*(int *)(param_3[3] + -4 + (int)param_3) != -0x33333334) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_3,iVar3);
        }
        param_3 = (int *)param_3[1];
        iVar3 = iVar3 + -1;
      } while (param_3 != (int *)0x0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _pre_c_init
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

undefined4 _pre_c_init(void)

{
  undefined4 *puVar1;
  
  _DAT_00417150 = _check_managed_app();
  __set_app_type(1);
  DAT_00417574 = _encode_pointer(0xffffffff);
  DAT_00417584 = DAT_00417574;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00417548;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_00417544;
  _DAT_00417588 = *(undefined4 *)_adjust_fdiv_exref;
  __RTC_Initialize();
  FID_conflict___wsetargv();
  if (_DAT_00417024 == 0) {
    __setusermatherr(&LAB_004111d1);
  }
  __setdefaultprecision();
  if (_DAT_00417020 == -1) {
    _configthreadlocale(-1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _pre_cpp_init
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
// Studio 2012 Debug

void _pre_cpp_init(void)

{
  _atexit((_func_4879 *)&LAB_0041102d);
  _DAT_00417158 = DAT_00417550;
  _DAT_00417154 =
       __getmainargs(&DAT_00417144,(char ***)&DAT_0041714c,(char ***)&DAT_00417148,DAT_0041754c,
                     (_startupinfo *)&DAT_00417158);
  if (_DAT_00417154 < 0) {
    _amsg_exit(8);
  }
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  _mainCRTStartup
//  _wmainCRTStartup
// 
// Library: Visual Studio 2008 Debug

void FID_conflict__wmainCRTStartup(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___tmainCRTStartup
// 
// Library: Visual Studio 2008 Debug

int ___tmainCRTStartup(void)

{
  code *pcVar1;
  bool bVar2;
  _TEB *p_Var3;
  LONG LVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 uVar7;
  void *local_14;
  undefined *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_00411087;
  local_14 = ExceptionList;
  local_c = DAT_00417000 ^ 0x416ab8;
  ExceptionList = &local_14;
  local_8 = 0;
  p_Var3 = _NtCurrentTeb();
  iVar5 = *(int *)(p_Var3 + 4);
  bVar2 = false;
  do {
    LVar4 = InterlockedCompareExchange((LONG *)&DAT_00417570,iVar5,0);
    if (LVar4 == 0) {
LAB_00411dfd:
      if (_DAT_00417560 == 1) {
        _amsg_exit(0x1f);
      }
      else if (_DAT_00417560 == 0) {
        _DAT_00417560 = 1;
        iVar5 = _initterm_e(&DAT_0041530c,&DAT_00415618);
        if (iVar5 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
      }
      else {
        _DAT_00417160 = 1;
      }
      if (_DAT_00417560 == 1) {
        _initterm(&DAT_00415000,&DAT_00415208);
        _DAT_00417560 = 2;
      }
      if ((_DAT_00417560 != 2) &&
         (iVar5 = _CrtDbgReportW(2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\crtexe.c",500,0,
                                 L"__native_startup_state == __initialized"), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if (!bVar2) {
        InterlockedExchange((LONG *)&DAT_00417570,0);
      }
      if ((DAT_00417594 != (code *)0x0) &&
         (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00417594), BVar6 != 0)) {
        (*DAT_00417594)(0,2,0);
      }
      _CrtSetCheckCount(1);
      *(undefined4 *)__initenv_exref = DAT_00417148;
      uVar7 = thunk_FUN_004118c0(DAT_0041714c,DAT_00417144,DAT_00417144,DAT_0041714c);
      DAT_0041715c = (int)uVar7;
      if (_DAT_00417150 != 0) {
        if (_DAT_00417160 == 0) {
          _cexit();
        }
        ExceptionList = local_14;
        return DAT_0041715c;
      }
                    // WARNING: Subroutine does not return
      exit(DAT_0041715c);
    }
    if (LVar4 == iVar5) {
      bVar2 = true;
      goto LAB_00411dfd;
    }
    Sleep(1000);
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Library Function - Single Match
//  _NtCurrentTeb
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

_TEB * _NtCurrentTeb(void)

{
  return (_TEB *)&ExceptionList;
}



// WARNING: Removing unreachable block (ram,0x0041207d)
// WARNING: Removing unreachable block (ram,0x004120ba)
// WARNING: Removing unreachable block (ram,0x004120c3)
// WARNING: Removing unreachable block (ram,0x004120f4)
// WARNING: Removing unreachable block (ram,0x004120e5)
// WARNING: Removing unreachable block (ram,0x004120f8)
// WARNING: Removing unreachable block (ram,0x004120ce)
// WARNING: Removing unreachable block (ram,0x0041209b)
// Library Function - Single Match
//  _check_managed_app
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

undefined _check_managed_app(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_gsfailure
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug

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
  
  _DAT_00417288 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041728c = &stack0x00000004;
  _DAT_004171c8 = 0x10001;
  _DAT_00417170 = 0xc0000409;
  _DAT_00417174 = 1;
  local_32c = DAT_00417000;
  local_328 = DAT_00417004;
  _DAT_0041717c = unaff_retaddr;
  _DAT_00417254 = in_GS;
  _DAT_00417258 = in_FS;
  _DAT_0041725c = in_ES;
  _DAT_00417260 = in_DS;
  _DAT_00417264 = unaff_EDI;
  _DAT_00417268 = unaff_ESI;
  _DAT_0041726c = unaff_EBX;
  _DAT_00417270 = in_EDX;
  _DAT_00417274 = in_ECX;
  _DAT_00417278 = in_EAX;
  _DAT_0041727c = unaff_EBP;
  DAT_00417280 = unaff_retaddr;
  _DAT_00417284 = in_CS;
  _DAT_00417290 = in_SS;
  _DAT_004171c0 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_00415838);
  if (_DAT_004171c0 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// Library Function - Single Match
//  int __cdecl DebuggerProbe(unsigned long)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

int __cdecl DebuggerProbe(ulong param_1)

{
  uint uStack_48;
  ULONG_PTR local_38;
  ulong local_34;
  byte *local_30;
  byte local_1d;
  uint *local_1c;
  void *local_14;
  undefined *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_00411087;
  local_14 = ExceptionList;
  local_c = DAT_00417000 ^ 0x416ad8;
  uStack_48 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack_48;
  ExceptionList = &local_14;
  local_1d = 0;
  local_38 = 0x1001;
  local_34 = param_1;
  local_30 = &local_1d;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,&local_38);
  ExceptionList = local_14;
  return (uint)local_1d;
}



// Library Function - Single Match
//  void __cdecl _RTC_Failure(void *,int)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (*(int *)(&DAT_00417008 + param_2 * 4) != -1) {
      failwithmessage(param_1,*(int *)(&DAT_00417008 + param_2 * 4),param_2,
                      (&PTR_s_The_value_of_ESP_was_not_properl_00415b64)[param_2]);
    }
    return;
  }
  failwithmessage(param_1,1,5,"Unknown Runtime Check Error\n\r");
  return;
}



// Library Function - Single Match
//  void __cdecl failwithmessage(void *,int,int,char const *)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl failwithmessage(void *param_1,int param_2,int param_3,char *param_4)

{
  bool bVar1;
  code *pcVar2;
  uint cchWideChar;
  int iVar3;
  BOOL BVar4;
  char *pcVar5;
  char *pcVar6;
  code *local_e3c;
  wchar_t *local_e38;
  code *local_e34;
  WCHAR local_e30 [512];
  CHAR local_a30 [780];
  CHAR local_724 [780];
  wchar_t local_418 [260];
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_e3c = (code *)0x0;
  local_e34 = (code *)thunk_FUN_00412ca0();
  if (local_e34 == (code *)0x0) {
    local_e3c = (code *)thunk_FUN_00412c90();
  }
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_4,-1,(LPWSTR)0x0,0);
  if (cchWideChar < 0x200) {
    iVar3 = MultiByteToWideChar(0xfde9,0,param_4,-1,local_e30,cchWideChar);
    if (iVar3 == 0) goto LAB_00412483;
    local_e38 = local_e30;
  }
  else {
LAB_00412483:
    local_e38 = L"Runtime Check Error.\n\r Unable to display RTC Message.";
  }
  iVar3 = DebuggerProbe(0x1002);
  if (iVar3 == 0) {
    bVar1 = true;
  }
  else {
    iVar3 = DebuggerRuntime(param_3,*(int *)(&DAT_00415b7c + param_3 * 4),param_1,local_e38);
    if (iVar3 != 0) goto LAB_004125e6;
    bVar1 = false;
  }
  pcVar2 = local_e34;
  if ((local_e3c != (code *)0x0) || (local_e34 != (code *)0x0)) {
    if (bVar1) {
      BVar4 = IsDebuggerPresent();
      if (BVar4 != 0) goto LAB_004125e0;
    }
    _RTC_GetSrcLine((uchar *)((int)param_1 + -5),local_210,0x104,(int *)&local_e34,local_418,0x104);
    if (pcVar2 == (code *)0x0) {
      pcVar5 = "Unknown Filename";
      iVar3 = WideCharToMultiByte(0xfde9,0,local_210,-1,local_a30,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 != 0) {
        pcVar5 = local_a30;
      }
      pcVar6 = "Unknown Module Name";
      iVar3 = WideCharToMultiByte(0xfde9,0,local_418,-1,local_724,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 != 0) {
        pcVar6 = local_724;
      }
      iVar3 = (*local_e3c)(param_2,pcVar5,local_e34,pcVar6,"Run-Time Check Failure #%d - %s",param_3
                           ,param_4);
    }
    else {
      iVar3 = (*pcVar2)(param_2,local_210,local_e34,local_418,L"Run-Time Check Failure #%d - %s",
                        param_3,local_e38);
    }
    if (iVar3 != 1) goto LAB_004125e6;
  }
LAB_004125e0:
  DebugBreak();
LAB_004125e6:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// Library Function - Single Match
//  int __cdecl DebuggerRuntime(unsigned long,int,void *,wchar_t const *)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

int __cdecl DebuggerRuntime(ulong param_1,int param_2,void *param_3,wchar_t *param_4)

{
  uint uStack_48;
  ULONG_PTR local_38;
  ulong local_34;
  int local_30;
  void *local_2c;
  byte *local_28;
  wchar_t *local_24;
  byte local_1d;
  uint *local_1c;
  void *local_14;
  undefined *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_00411087;
  local_14 = ExceptionList;
  local_c = DAT_00417000 ^ 0x416af8;
  uStack_48 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack_48;
  ExceptionList = &local_14;
  local_1d = 0;
  local_38 = 0x1002;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = &local_1d;
  local_24 = param_4;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,&local_38);
  ExceptionList = local_14;
  return (uint)local_1d;
}



// Library Function - Single Match
//  void __cdecl _RTC_StackFailure(void *,char const *)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined local_40c [4];
  char local_408 [1024];
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_40c = (undefined  [4])param_1;
  if (DAT_00417010 == -1) goto LAB_0041283e;
  if (*param_2 == '\0') {
LAB_0041281f:
    pcVar5 = "Stack corrupted near unknown variable";
  }
  else {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar5 + (0x2d - (int)(param_2 + 1))) goto LAB_0041281f;
    pcVar5 = local_408;
    iVar6 = 0;
    do {
      cVar1 = "Stack around the variable \'"[iVar6];
      local_408[iVar6] = cVar1;
      iVar6 = iVar6 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)param_2;
    puVar9 = (undefined4 *)(local_40c + 3);
    do {
      pcVar2 = (char *)((int)puVar9 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    } while (*pcVar2 != '\0');
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *(undefined4 *)param_2;
      param_2 = (char *)((int)param_2 + 4);
      puVar9 = puVar9 + 1;
    }
    for (uVar3 = uVar3 & 3; pcVar2 = "\' was corrupted.", uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar9 = *param_2;
      param_2 = (char *)((int)param_2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    puVar9 = (undefined4 *)(local_40c + 3);
    do {
      pcVar2 = (char *)((int)puVar9 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    } while (*pcVar2 != '\0');
    puVar8 = (undefined4 *)"\' was corrupted.";
    for (uVar3 = (uint)(pcVar4 + -0x415baf) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar3 = (uint)(pcVar4 + -0x415baf) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  failwithmessage(param_1,DAT_00417010,2,pcVar5);
LAB_0041283e:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// Library Function - Single Match
//  void __cdecl _RTC_AllocaFailure(void *,struct _RTC_ALLOCA_NODE *,int)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl _RTC_AllocaFailure(void *param_1,_RTC_ALLOCA_NODE *param_2,int param_3)

{
  int iVar1;
  HMODULE hModule;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  CHAR local_144 [244];
  char local_50 [52];
  char local_1c [20];
  uint local_8;
  
  iVar1 = DAT_00417018;
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417018 != -1) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00417534 = GetProcAddress(hModule,"wsprintfA");
      if ((param_2 != (_RTC_ALLOCA_NODE *)0x0) && (DAT_00417534 != (FARPROC)0x0)) {
        (*DAT_00417534)(local_144,"%s%s%p%s%ld%s%d%s",
                        "Stack area around _alloca memory reserved by this function is corrupted",
                        "\nAddress: 0x",param_2 + 0x20,"\nSize: ",*(int *)(param_2 + 0xc) + -0x24,
                        "\nAllocation number within this function: ",param_3,"\nData: <");
        _getMemBlockDataString
                  (local_1c,local_50,(char *)(param_2 + 0x20),*(int *)(param_2 + 0xc) - 0x24);
        puVar7 = &DAT_00415de8;
        pcVar6 = local_50;
        puVar5 = &DAT_00415de4;
        pcVar4 = local_1c;
        pcVar3 = "%s%s%s%s";
        iVar2 = lstrlenA(local_144);
        (*DAT_00417534)(local_144 + iVar2,pcVar3,pcVar4,puVar5,pcVar6,puVar7);
        failwithmessage(param_1,iVar1,4,local_144);
        ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    failwithmessage(param_1,iVar1,4,
                    "Stack area around _alloca memory reserved by this function is corrupted\n");
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// Library Function - Single Match
//  void __cdecl _getMemBlockDataString(char *,char *,char *,unsigned int)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug

void __cdecl _getMemBlockDataString(char *param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *local_8;
  
  local_8 = param_2;
  uVar4 = 0;
  pcVar3 = param_1;
  while( true ) {
    uVar2 = param_4;
    if (0xf < param_4) {
      uVar2 = 0x10;
    }
    if (uVar2 <= uVar4) break;
    cVar1 = pcVar3[(int)param_3 - (int)param_1];
    (*DAT_00417534)(local_8,"%.2X ",cVar1);
    local_8 = local_8 + 3;
    *pcVar3 = cVar1;
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 1;
  }
  param_1[uVar4] = '\0';
  param_2[uVar4 * 3] = '\0';
  return;
}



// Library Function - Single Match
//  __RTC_UninitUse
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl __RTC_UninitUse(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  void *unaff_retaddr;
  char local_408 [1024];
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417014 == -1) goto LAB_00412b7b;
  if (param_1 == (undefined4 *)0x0) {
LAB_00412b5f:
    pcVar8 = "A variable is being used without being initialized.";
  }
  else {
    puVar5 = param_1;
    do {
      cVar2 = *(char *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (cVar2 != '\0');
    if ((char *)0x400 < (char *)((int)puVar5 + (0x3a - ((int)param_1 + 1)))) goto LAB_00412b5f;
    pcVar8 = local_408;
    iVar6 = 0;
    do {
      cVar2 = "The variable \'"[iVar6];
      local_408[iVar6] = cVar2;
      iVar6 = iVar6 + 1;
      puVar5 = param_1;
    } while (cVar2 != '\0');
    do {
      cVar2 = *(char *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (cVar2 != '\0');
    uVar3 = (int)puVar5 - (int)param_1;
    puVar5 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar1 = (char *)((int)puVar5 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (*pcVar1 != '\0');
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; pcVar1 = "\' is being used without being initialized.", uVar3 != 0;
        uVar3 = uVar3 - 1) {
      *(undefined *)puVar5 = *(undefined *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    puVar5 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar1 = (char *)((int)puVar5 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (*pcVar1 != '\0');
    puVar9 = (undefined4 *)"\' is being used without being initialized.";
    for (uVar3 = (uint)(pcVar4 + -0x415bd3) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = (uint)(pcVar4 + -0x415bd3) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar5 = *(undefined *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  failwithmessage(unaff_retaddr,DAT_00417014,3,pcVar8);
LAB_00412b7b:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined * __cdecl FUN_00412be0(uint param_1)

{
  if (param_1 < 5) {
    return (&PTR_s_Stack_pointer_corruption_00415fec)[param_1];
  }
  return (undefined *)0x0;
}



// Library Function - Single Match
//  __RTC_SetErrorType
// 
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010

undefined4 __cdecl __RTC_SetErrorType(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 5) {
    uVar1 = *(undefined4 *)(&DAT_00417008 + param_1 * 4);
    *(undefined4 *)(&DAT_00417008 + param_1 * 4) = param_2;
    return uVar1;
  }
  return 0xffffffff;
}



undefined4 __cdecl FUN_00412c30(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00417538;
  DAT_00417538 = param_1;
  DAT_0041753c = 0;
  return uVar1;
}



undefined4 __cdecl FUN_00412c60(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0041753c;
  DAT_0041753c = param_1;
  DAT_00417538 = 0;
  return uVar1;
}



undefined4 FUN_00412c90(void)

{
  return DAT_00417538;
}



undefined4 FUN_00412ca0(void)

{
  return DAT_0041753c;
}



// Library Function - Single Match
//  long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug, Visual
// Studio 2012 Debug

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  long lVar1;
  
  if (((param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) &&
      (param_1->ExceptionRecord->NumberParameters == 3)) &&
     ((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930520 ||
      (((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930521 ||
        (param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930522)) ||
       (param_1->ExceptionRecord->ExceptionInformation[0] == 0x1994000)))))) {
    terminate();
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



undefined4 FUN_00412d30(void)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_0041113b);
  return 0;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

void __setdefaultprecision(void)

{
  errno_t _ExpressionError;
  wchar_t *_Expression;
  wchar_t *_Function;
  wchar_t *_File;
  uint _Line;
  uintptr_t _Reserved;
  
  _Reserved = 0;
  _Line = 0x1f;
  _File = L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c";
  _Function = L"_setdefaultprecision";
  _Expression = L"_controlfp_s(((void *)0), 0x00010000, 0x00030000)";
  _ExpressionError = _controlfp_s((uint *)0x0,0x10000,0x30000);
  __invoke_watson_if_error(_ExpressionError,_Expression,_Function,_File,_Line,_Reserved);
  return;
}



// Library Function - Single Match
//  __invoke_watson_if_error
// 
// Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  _invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
}



undefined4 FUN_00412de0(void)

{
  return 0;
}



// Library Function - Multiple Matches With Different Base Names
//  __setargv
//  __wsetargv
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

int __cdecl FID_conflict___wsetargv(void)

{
  return 0;
}



// Library Function - Single Match
//  __RTC_Initialize
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

void __RTC_Initialize(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)&DAT_004164a0;
  do {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  } while (ppcVar1 < &DAT_004166a4);
  return;
}



// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2008 Debug

void __onexit(_onexit_t param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_00411087;
  local_14 = ExceptionList;
  local_c = DAT_00417000 ^ 0x416b18;
  uVar1 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_14;
  local_20[0] = _decode_pointer(DAT_00417584,uVar1);
  if (local_20[0] == -1) {
    _onexit(param_1);
    ExceptionList = local_14;
    return;
  }
  _lock(8);
  local_8 = 0;
  local_20[0] = _decode_pointer(DAT_00417584,uVar1);
  local_28 = _decode_pointer(DAT_00417574);
  uVar2 = _encode_pointer(param_1,local_20,&local_28);
  local_24 = __dllonexit(uVar2);
  DAT_00417584 = _encode_pointer(local_20[0]);
  DAT_00417574 = _encode_pointer(local_28);
  local_8 = 0xfffffffe;
  FUN_00412f55();
  FUN_00412f60();
  return;
}



void FUN_00412f55(void)

{
  _unlock(8);
  return;
}



undefined4 FUN_00412f60(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x20);
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2008 Debug

int __cdecl _atexit(_func_4879 *param_1)

{
  int iVar1;
  
  iVar1 = __onexit((_onexit_t)param_1);
  return (iVar1 != 0) - 1;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2008 Debug

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_1c;
  uint local_10;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00417000 == 0xbb40e64e) || ((DAT_00417000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    local_10 = local_c.dwLowDateTime ^ local_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetCurrentThreadId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetTickCount();
    local_10 = DVar1 ^ local_10;
    QueryPerformanceCounter(&local_1c);
    local_10 = local_10 ^ local_1c.s.LowPart ^ local_1c.s.HighPart;
    if (local_10 == 0xbb40e64e) {
      local_10 = 0xbb40e64f;
    }
    else if ((local_10 & 0xffff0000) == 0) {
      local_10 = local_10 << 0x10 | local_10;
    }
    DAT_00417000 = local_10;
    DAT_00417004 = ~local_10;
  }
  else {
    DAT_00417004 = ~DAT_00417000;
  }
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413118. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



// Library Function - Single Match
//  __ValidateImageBase
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b) {
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
//  __FindPESection
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER local_10;
  uint local_c;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  local_c = 0;
  local_10 = (PIMAGE_SECTION_HEADER)
             (pImageBase + (uint)*(ushort *)(pImageBase + iVar1 + 0x14) + iVar1 + 0x18);
  while( true ) {
    if (*(ushort *)(pImageBase + iVar1 + 6) <= local_c) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((local_10->VirtualAddress <= rva) &&
       (rva < local_10->VirtualAddress + (local_10->Misc).PhysicalAddress)) break;
    local_c = local_c + 1;
    local_10 = local_10 + 1;
  }
  return local_10;
}



// Library Function - Single Match
//  __IsNonwritableInCurrentImage
// 
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  void *local_14;
  undefined *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_00411087;
  local_14 = ExceptionList;
  local_c = DAT_00417000 ^ 0x416b38;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  ExceptionList = local_14;
  return uVar3;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004133ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004133b2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



// Library Function - Single Match
//  __except_handler4
// 
// Library: Visual Studio

void __cdecl
__except_handler4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _except_handler4_common(&DAT_00417000,___security_check_cookie_4,param_1,param_2,param_3,param_4);
  return;
}



void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004133f4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook(param_1);
  return;
}



// Library Function - Single Match
//  int __cdecl _RTC_GetSrcLine(unsigned char *,wchar_t *,unsigned long,int *,wchar_t *,unsigned
// long)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

int __cdecl
_RTC_GetSrcLine(uchar *param_1,wchar_t *param_2,ulong param_3,int *param_4,wchar_t *param_5,
               ulong param_6)

{
  char cVar1;
  SIZE_T SVar2;
  DWORD DVar3;
  int *piVar4;
  uint *puVar5;
  FARPROC pFVar6;
  int iVar7;
  HANDLE pvVar8;
  uint uVar9;
  uint uVar10;
  uchar *lpAddress;
  uint uVar11;
  uint uVar12;
  _MEMORY_BASIC_INFORMATION local_48;
  undefined local_2c [4];
  undefined4 local_28;
  int local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  int *local_8;
  
  *param_4 = 0;
  lpAddress = param_1 + -1;
  *param_2 = L'\0';
  SVar2 = VirtualQuery(lpAddress,&local_48,0x1c);
  if ((((SVar2 == 0) ||
       (DVar3 = GetModuleFileNameW((HMODULE)local_48.AllocationBase,param_5,param_6), DVar3 == 0))
      || (*(short *)(int *)local_48.AllocationBase != 0x5a4d)) ||
     ((((HMODULE)((int)local_48.AllocationBase + 0x3c))->unused < 1 ||
      (piVar4 = (int *)((int)(int *)local_48.AllocationBase +
                       ((HMODULE)((int)local_48.AllocationBase + 0x3c))->unused), *piVar4 != 0x4550)
      ))) {
    return 0;
  }
  uVar9 = (uint)*(ushort *)((int)piVar4 + 6);
  uVar11 = (int)lpAddress - (int)local_48.AllocationBase;
  uVar12 = 0;
  uVar10 = 0;
  if (uVar9 != 0) {
    puVar5 = (uint *)((int)piVar4 + *(ushort *)(piVar4 + 5) + 0x24);
    do {
      if ((*puVar5 <= uVar11) && (uVar12 = uVar11 - *puVar5, uVar11 < puVar5[-1])) break;
      uVar10 = uVar10 + 1;
      puVar5 = puVar5 + 10;
    } while (uVar10 < uVar9);
  }
  if (uVar10 == uVar9) {
    return 0;
  }
  if (DAT_00417558 == '\0') {
    if (DAT_00417554 != (HMODULE)0x0) {
      return 0;
    }
    DAT_00417554 = GetPdbDll();
    if (DAT_00417554 == (HINSTANCE__ *)0x0) {
      return 0;
    }
    DAT_00417558 = '\x01';
  }
  pFVar6 = GetProcAddress(DAT_00417554,"PDBOpenValidate5");
  puVar5 = (uint *)0x0;
  if (pFVar6 == (FARPROC)0x0) {
    return 0;
  }
  iVar7 = (*pFVar6)(param_5,0,0,0,local_2c,0,0,&local_14);
  if (iVar7 == 0) {
    return 0;
  }
  local_20 = 0;
  iVar7 = (**(code **)*local_14)();
  if ((iVar7 != 0x131a5b5) ||
     (iVar7 = (**(code **)(*local_14 + 0x1c))(0,&DAT_00416154,&local_1c), iVar7 == 0))
  goto LAB_004136ac;
  iVar7 = (**(code **)(*local_1c + 0x20))(uVar10 + 1,uVar12,&local_10,0,0,0);
  if (iVar7 != 0) {
    local_8 = (int *)0x0;
    cVar1 = (**(code **)(*local_10 + 0x68))(&local_8);
    if ((cVar1 != '\0') && (local_8 != (int *)0x0)) {
      iVar7 = (**(code **)(*local_8 + 8))();
      while (iVar7 != 0) {
        cVar1 = (**(code **)(*local_8 + 0xc))(0,&local_18,&param_1,&local_24,&local_c,0);
        if (cVar1 == '\0') goto LAB_0041368f;
        if (((((uint)param_1 & 0xffff) == uVar10 + 1) && (local_18 <= uVar12)) &&
           (uVar12 < local_18 + local_24)) {
          if ((local_c == 0) || (0x1ffffffe < local_c)) goto LAB_0041368f;
          SVar2 = local_c * 8;
          DVar3 = 0;
          pvVar8 = GetProcessHeap();
          puVar5 = (uint *)HeapAlloc(pvVar8,DVar3,SVar2);
          if (puVar5 == (uint *)0x0) goto LAB_0041368f;
          cVar1 = (**(code **)(*local_8 + 0xc))(&local_28,0,0,0,&local_c,puVar5);
          if ((cVar1 == '\0') || (uVar12 - local_18 < *puVar5)) break;
          uVar9 = 1;
          if (1 < local_c) goto LAB_00413640;
          goto LAB_0041364a;
        }
        iVar7 = (**(code **)(*local_8 + 8))();
      }
      goto LAB_0041367f;
    }
    goto LAB_00413698;
  }
  goto LAB_004136a2;
  while (uVar9 = uVar9 + 1, uVar9 < local_c) {
LAB_00413640:
    if (uVar12 - local_18 < puVar5[uVar9 * 2]) break;
  }
LAB_0041364a:
  *param_4 = puVar5[uVar9 * 2 + -1] & 0xffffff;
  cVar1 = (**(code **)(*local_10 + 0x70))(local_28,param_2,&param_3,0,0,0);
  if (cVar1 != '\0') {
    local_20 = 1;
  }
LAB_0041367f:
  DVar3 = 0;
  pvVar8 = GetProcessHeap();
  HeapFree(pvVar8,DVar3,puVar5);
LAB_0041368f:
  (**(code **)*local_8)();
LAB_00413698:
  (**(code **)(*local_10 + 0x40))();
LAB_004136a2:
  (**(code **)(*local_1c + 0x38))();
LAB_004136ac:
  (**(code **)(*local_14 + 0x28))();
  return local_20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  struct HINSTANCE__ * __cdecl GetPdbDll(void)
// 
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

HINSTANCE__ * __cdecl GetPdbDll(void)

{
  HINSTANCE__ *pHVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  int iVar5;
  undefined local_11c [4];
  FARPROC local_118;
  undefined4 local_114;
  undefined4 local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (_DAT_0041755c != 0) {
    pHVar1 = (HINSTANCE__ *)___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
    return pHVar1;
  }
  _DAT_0041755c = 1;
  pHVar2 = LoadLibraryA(PTR_s_MSPDB80_DLL_00417034);
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryA("ADVAPI32.DLL");
    if (pHVar2 == (HMODULE)0x0) {
      pHVar1 = (HINSTANCE__ *)___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
      return pHVar1;
    }
    local_118 = GetProcAddress(pHVar2,"RegOpenKeyExA");
    if (local_118 == (FARPROC)0x0) {
      pHVar1 = (HINSTANCE__ *)___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
      return pHVar1;
    }
    pFVar3 = GetProcAddress(pHVar2,"RegQueryValueExA");
    if ((pFVar3 != (FARPROC)0x0) &&
       (pFVar4 = GetProcAddress(pHVar2,"RegCloseKey"), pFVar4 != (FARPROC)0x0)) {
      iVar5 = (*local_118)(0x80000002,"SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS",0,1,
                           &local_114);
      if ((iVar5 == 0) &&
         (((iVar5 = (*pFVar3)(local_114,"EnvironmentDirectory",0,local_11c,0,&local_110), iVar5 == 0
           && (0xc < 0x7fffffffU - local_110)) && (local_110 + 0xdU < 0x104)))) {
        iVar5 = (*pFVar3)(local_114,"EnvironmentDirectory",0,local_11c,local_10c,&local_110);
        (*pFVar4)(local_114);
        FreeLibrary(pHVar2);
        if (iVar5 == 0) {
          if (local_10c[local_110 + -2] == '\\') {
            local_110 = local_110 + -1;
          }
          else {
            local_10c[local_110 + -1] = '\\';
          }
          iVar5 = 0;
          do {
            local_10c[iVar5 + local_110] = PTR_s_MSPDB80_DLL_00417034[iVar5];
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0xc);
          LoadLibraryA(local_10c);
          pHVar1 = (HINSTANCE__ *)___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
          return pHVar1;
        }
      }
      else {
        FreeLibrary(pHVar2);
      }
    }
  }
  pHVar1 = (HINSTANCE__ *)___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar1;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004139bc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139c2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}



void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x004139c8. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004139d4. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139da. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}


