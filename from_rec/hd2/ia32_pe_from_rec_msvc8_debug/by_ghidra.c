typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
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
    char pdbname[58];
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


// WARNING! conflicting data type names: /Demangler/wchar_t - /wchar_t

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_00411970(void)

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
  undefined4 unaff_retaddr;
  UINT uExitCode;
  int iStack812;
  undefined4 uStack808;
  
  if (in_ECX == DAT_00417000) {
    return;
  }
  _DAT_00417288 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&iStack812 < 0) * 0x80 |
       (uint)((undefined *)register0x00000010 == (undefined *)0x32c) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041728c = &stack0x00000004;
  _DAT_004171c8 = 0x10001;
  _DAT_00417170 = 0xc0000409;
  _DAT_00417174 = 1;
  iStack812 = DAT_00417000;
  uStack808 = DAT_00417004;
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



undefined4 thunk_FUN_00412ca0(void)

{
  return DAT_0041753c;
}



void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint uStack28;
  uint uStack24;
  uint uStack16;
  _FILETIME _Stack12;
  
  _Stack12.dwLowDateTime = 0;
  _Stack12.dwHighDateTime = 0;
  if ((DAT_00417000 == 0xbb40e64e) || ((DAT_00417000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&_Stack12);
    uStack16 = _Stack12.dwLowDateTime ^ _Stack12.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    uStack16 = DVar1 ^ uStack16;
    DVar1 = GetCurrentThreadId();
    uStack16 = DVar1 ^ uStack16;
    DVar1 = GetTickCount();
    uStack16 = DVar1 ^ uStack16;
    QueryPerformanceCounter((LARGE_INTEGER *)&uStack28);
    uStack16 = uStack16 ^ uStack28 ^ uStack24;
    if (uStack16 == 0xbb40e64e) {
      uStack16 = 0xbb40e64f;
    }
    else {
      if ((uStack16 & 0xffff0000) == 0) {
        uStack16 = uStack16 << 0x10 | uStack16;
      }
    }
    DAT_00417000 = uStack16;
    DAT_00417004 = ~uStack16;
  }
  else {
    DAT_00417004 = ~DAT_00417000;
  }
  return;
}



int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (uint)(p_Var1 != (_onexit_t)0x0) - 1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139da. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock();
  return;
}



void __fastcall __RTC_CheckStackVars_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *unaff_retaddr;
  int iStack8;
  
  iVar2 = 0;
  iStack8 = 0;
  if (0 < *param_2) {
    do {
      iVar1 = *(int *)(param_2[1] + iVar2);
      if ((*(int *)(iVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(param_2[1] + iVar2 + 4) + iVar1 + param_1) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(param_2[1] + 8 + iVar2));
      }
      iStack8 = iStack8 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iStack8 < *param_2);
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004139bc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041195e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcat();
  return pcVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004133ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411958. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl thunk_FUN_00411410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint auStack316 [50];
  size_t sStack116;
  int iStack104;
  char acStack92 [9];
  char acStack83 [75];
  uint uStack8;
  
  iVar2 = 0x4e;
  puVar3 = auStack316;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  sprintf(acStack92,"%08lX:",param_2);
  __RTC_CheckEsp();
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  iStack104 = 0;
  while (iStack104 < param_3) {
    sprintf(acStack83 + iStack104 * 3," %02lX",(uint)*(byte *)(param_1 + iStack104));
    __RTC_CheckEsp();
    iStack104 = iStack104 + 1;
  }
  while( true ) {
    auStack316[0] = (uint)(iStack104 < 0x10);
    if (iStack104 >= 0x10) break;
    iStack104 = iStack104 + 1;
    strcat(acStack92,"   ");
  }
  iStack104 = iStack104 + 1;
  sStack116 = strlen(acStack92);
  strcpy(acStack92 + sStack116,"  |");
  iVar2 = sStack116 + 3;
  iStack104 = 0;
  while (iStack104 < param_3) {
    if ((*(byte *)(param_1 + iStack104) < 0x20) || (0x7e < *(byte *)(param_1 + iStack104))) {
      auStack316[0] = 0x2e;
    }
    else {
      auStack316[0] = (uint)*(byte *)(param_1 + iStack104);
    }
    acStack92[iVar2 + iStack104] = (char)auStack316[0];
    iStack104 = iStack104 + 1;
  }
  while (iStack104 < 0x10) {
    acStack92[iVar2 + iStack104] = ' ';
    iStack104 = iStack104 + 1;
  }
  iVar1 = iStack104 + sStack116;
  sStack116 = iVar2;
  strcpy(acStack92 + iVar1 + 3,"|");
  printf("%s\n",acStack92);
  __RTC_CheckEsp();
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&LAB_00411600);
  thunk_FUN_00411970();
  uStack8 = 0x4115f9;
  __RTC_CheckEsp();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411952. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcpy();
  return pcVar1;
}



PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER p_Stack16;
  uint uStack12;
  
  pImageBase = pImageBase + *(int *)(pImageBase + 0x3c);
  uStack12 = 0;
  p_Stack16 = (PIMAGE_SECTION_HEADER)(pImageBase + (uint)*(ushort *)(pImageBase + 0x14) + 0x18);
  while( true ) {
    if (*(ushort *)(pImageBase + 6) <= uStack12) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((p_Stack16->VirtualAddress <= rva) && (rva < p_Stack16->VirtualAddress + p_Stack16->Misc))
    break;
    uStack12 = uStack12 + 1;
    p_Stack16 = p_Stack16 + 1;
  }
  return p_Stack16;
}



void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack1033;
  uint uStack8;
  
  uStack8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417010 == -1) goto LAB_0041283e;
  if (*param_2 == '\0') {
LAB_0041281f:
    pcVar4 = "Stack corrupted near unknown variable";
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar4 + (0x2d - (int)(param_2 + 1))) goto LAB_0041281f;
    pcVar4 = (char *)((int)&uStack1033 + 1);
    iVar5 = 0;
    do {
      cVar1 = "Stack around the variable \'"[iVar5];
      *(char *)((int)&uStack1033 + iVar5 + 1) = cVar1;
      iVar5 = iVar5 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)(&stack0xfffffbf4 + 3);
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    uVar6 = (uint)(pcVar2 + -(int)param_2) >> 2;
    puVar7 = (undefined4 *)param_2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar2 + -(int)param_2) & 3;
    while (pcVar2 = "\' was corrupted.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar8 = (undefined4 *)(&stack0xfffffbf4 + 3);
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar3 + -0x415baf) >> 2;
    puVar7 = (undefined4 *)"\' was corrupted.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar3 + -0x415baf) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  failwithmessage(param_1,DAT_00417010,2,pcVar4);
LAB_0041283e:
  thunk_FUN_00411970();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004133f4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook();
  return;
}



BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)(pImageBase + *(int *)(pImageBase + 0x3c) + 6) == 0x10b) {
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



_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int **in_FS_OFFSET;
  undefined4 uStack40;
  _onexit_t p_Stack36;
  int aiStack32 [3];
  int *piStack20;
  undefined *puStack16;
  uint uStack12;
  undefined4 uStack8;
  
  uStack8 = 0xfffffffe;
  puStack16 = &LAB_00411087;
  piStack20 = *in_FS_OFFSET;
  uStack12 = DAT_00417000 ^ 0x416b18;
  uVar1 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  *(int ***)in_FS_OFFSET = &piStack20;
  aiStack32[0] = _decode_pointer(DAT_00417584,uVar1);
  if (aiStack32[0] == -1) {
    p_Stack36 = _onexit(param_1);
  }
  else {
    _lock(8);
    uStack8 = 0;
    aiStack32[0] = _decode_pointer(DAT_00417584,uVar1);
    uStack40 = _decode_pointer(DAT_00417574);
    uVar2 = _encode_pointer(param_1,aiStack32,&uStack40);
    p_Stack36 = (_onexit_t)__dllonexit(uVar2);
    DAT_00417584 = _encode_pointer(aiStack32[0]);
    DAT_00417574 = _encode_pointer(uStack40);
    uStack8 = 0xfffffffe;
    FUN_00412f55();
  }
  *in_FS_OFFSET = piStack20;
  return p_Stack36;
}



// WARNING: Unknown calling convention yet parameter storage is locked

_TEB * _NtCurrentTeb(void)

{
  int in_FS_OFFSET;
  
  return *(_TEB **)(in_FS_OFFSET + 0x18);
}



void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
    _invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}



void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock();
  return;
}



void __cdecl thunk_FUN_004116a0(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack316 [49];
  int iStack120;
  undefined auStack108 [20];
  uint uStack88;
  FILE *pFStack52;
  uint uStack40;
  undefined auStack28 [20];
  uint uStack8;
  
  iVar1 = 0x4e;
  puVar2 = auStack316;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  uStack8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00411860(param_1,auStack108);
  if (iVar1 == 0) {
    fopen(param_1,"rb");
    pFStack52 = (FILE *)__RTC_CheckEsp();
    if (pFStack52 == (FILE *)0x0) {
      perror(param_1);
      __RTC_CheckEsp();
    }
    else {
      uStack40 = 0;
      while (uStack40 < uStack88) {
        fread(auStack28,1,0x10,pFStack52);
        iStack120 = __RTC_CheckEsp();
        if (iStack120 == 0) break;
        thunk_FUN_00411410((int)auStack28,uStack40,iStack120);
        uStack40 = uStack40 + iStack120;
      }
      fclose(pFStack52);
      __RTC_CheckEsp();
    }
  }
  else {
    perror(param_1);
    __RTC_CheckEsp();
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_004117dc);
  thunk_FUN_00411970();
  uStack8 = 0x4117d7;
  __RTC_CheckEsp();
  return;
}



undefined8 __RTC_CheckEsp(void)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return CONCAT44(in_EDX,in_EAX);
  }
  _RTC_Failure(unaff_retaddr,0);
  return CONCAT44(in_EDX,in_EAX);
}



void __cdecl thunk_FUN_004118c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack220 [49];
  int iStack24;
  int iStack12;
  undefined4 uStack8;
  
  iVar1 = 0x36;
  puVar2 = auStack220;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iStack24 = 0;
  iStack12 = 1;
  while (iStack12 < param_1) {
    iVar1 = thunk_FUN_004116a0(*(char **)(param_2 + iStack12 * 4));
    iStack24 = iVar1 + iStack24;
    iStack12 = iStack12 + 1;
  }
  uStack8 = 0x41192c;
  __RTC_CheckEsp();
  return;
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



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139c2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x004139c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _invoke_watson();
  return;
}


/*
Unable to decompile '_RTC_GetSrcLine'
Cause: 
Low-level Error: PTRSUB off of non structured pointer type
*/


BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  int **in_FS_OFFSET;
  uint uStack76;
  PBYTE pBStack40;
  IMAGE_DOS_HEADER *pIStack32;
  uint *puStack28;
  int *piStack20;
  undefined *puStack16;
  uint uStack12;
  undefined4 uStack8;
  
  puStack16 = &LAB_00411087;
  piStack20 = *in_FS_OFFSET;
  uStack12 = DAT_00417000 ^ 0x416b38;
  uStack76 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  puStack28 = &uStack76;
  *(int ***)in_FS_OFFSET = &piStack20;
  pIStack32 = &IMAGE_DOS_HEADER_00400000;
  uStack8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    pBStack40 = pTarget + -(int)pIStack32;
    p_Var2 = __FindPESection((PBYTE)pIStack32,(DWORD_PTR)pBStack40);
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  *in_FS_OFFSET = piStack20;
  return uVar3;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413118. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  char acStack324 [244];
  char acStack80 [52];
  char acStack28 [20];
  uint uStack8;
  
  iVar1 = DAT_00417018;
  uStack8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417018 != -1) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      _DAT_00417534 = GetProcAddress(hModule,"wsprintfA");
      if ((param_2 != (_RTC_ALLOCA_NODE *)0x0) && (_DAT_00417534 != (FARPROC)0x0)) {
        (*_DAT_00417534)(acStack324,"%s%s%p%s%ld%s%d%s",
                         "Stack area around _alloca memory reserved by this function is corrupted",
                         "\nAddress: 0x",param_2 + 0x20,"\nSize: ",*(int *)(param_2 + 0xc) + -0x24,
                         "\nAllocation number within this function: ",param_3,"\nData: <");
        _getMemBlockDataString
                  (acStack28,acStack80,(char *)(param_2 + 0x20),*(int *)(param_2 + 0xc) - 0x24);
        puVar7 = &DAT_00415de8;
        pcVar6 = acStack80;
        puVar5 = &DAT_00415de4;
        pcVar4 = acStack28;
        pcVar3 = "%s%s%s%s";
        iVar2 = lstrlenA(acStack324);
        (*_DAT_00417534)(acStack324 + iVar2,pcVar3,pcVar4,puVar5,pcVar6,puVar7);
        failwithmessage(param_1,iVar1,4,acStack324);
        thunk_FUN_00411970();
        return;
      }
    }
    failwithmessage(param_1,iVar1,4,
                    "Stack area around _alloca memory reserved by this function is corrupted\n");
  }
  thunk_FUN_00411970();
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



// WARNING: Could not reconcile some variable overlaps

void __cdecl FUN_00411410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint local_13c [50];
  size_t local_74;
  int local_68;
  char local_5c [9];
  char acStack83 [75];
  uint local_8;
  
  iVar2 = 0x4e;
  puVar3 = local_13c;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  sprintf(local_5c,"%08lX:",param_2);
  __RTC_CheckEsp();
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  local_68 = 0;
  while (local_68 < param_3) {
    sprintf(acStack83 + local_68 * 3," %02lX",(uint)*(byte *)(param_1 + local_68));
    __RTC_CheckEsp();
    local_68 = local_68 + 1;
  }
  while( true ) {
    local_13c[0] = (uint)(local_68 < 0x10);
    if (local_68 >= 0x10) break;
    local_68 = local_68 + 1;
    strcat(local_5c,"   ");
  }
  local_68 = local_68 + 1;
  local_74 = strlen(local_5c);
  strcpy(local_5c + local_74,"  |");
  iVar2 = local_74 + 3;
  local_68 = 0;
  while (local_68 < param_3) {
    if ((*(byte *)(param_1 + local_68) < 0x20) || (0x7e < *(byte *)(param_1 + local_68))) {
      local_13c[0] = 0x2e;
    }
    else {
      local_13c[0] = (uint)*(byte *)(param_1 + local_68);
    }
    local_5c[iVar2 + local_68] = (char)local_13c[0];
    local_68 = local_68 + 1;
  }
  while (local_68 < 0x10) {
    local_5c[iVar2 + local_68] = ' ';
    local_68 = local_68 + 1;
  }
  iVar1 = local_68 + local_74;
  local_74 = iVar2;
  strcpy(local_5c + iVar1 + 3,"|");
  printf("%s\n",local_5c);
  __RTC_CheckEsp();
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&LAB_00411600);
  thunk_FUN_00411970();
  local_8 = 0x4115f9;
  __RTC_CheckEsp();
  return;
}



void __cdecl FUN_004116a0(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_13c [49];
  int local_78;
  undefined local_6c [20];
  uint local_58;
  FILE *local_34;
  uint local_28;
  undefined local_1c [20];
  uint local_8;
  
  iVar1 = 0x4e;
  puVar2 = local_13c;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00411860(param_1,local_6c);
  if (iVar1 == 0) {
    fopen(param_1,"rb");
    local_34 = (FILE *)__RTC_CheckEsp();
    if (local_34 == (FILE *)0x0) {
      perror(param_1);
      __RTC_CheckEsp();
    }
    else {
      local_28 = 0;
      while (local_28 < local_58) {
        fread(local_1c,1,0x10,local_34);
        local_78 = __RTC_CheckEsp();
        if (local_78 == 0) break;
        thunk_FUN_00411410((int)local_1c,local_28,local_78);
        local_28 = local_28 + local_78;
      }
      fclose(local_34);
      __RTC_CheckEsp();
    }
  }
  else {
    perror(param_1);
    __RTC_CheckEsp();
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_004117dc);
  thunk_FUN_00411970();
  local_8 = 0x4117d7;
  __RTC_CheckEsp();
  return;
}



void __cdecl FUN_00411860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [47];
  undefined4 uStack8;
  
  iVar1 = 0x30;
  puVar2 = local_c4;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  _stat64i32(param_1,param_2);
  __RTC_CheckEsp();
  uStack8 = 0x4118a8;
  __RTC_CheckEsp();
  return;
}



void __cdecl FUN_004118c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_dc [49];
  int local_18;
  int local_c;
  undefined4 uStack8;
  
  iVar1 = 0x36;
  puVar2 = local_dc;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_18 = 0;
  local_c = 1;
  while (local_c < param_1) {
    iVar1 = thunk_FUN_004116a0(*(char **)(param_2 + local_c * 4));
    local_18 = iVar1 + local_18;
    local_c = local_c + 1;
  }
  uStack8 = 0x41192c;
  __RTC_CheckEsp();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411952. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcpy();
  return pcVar1;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411958. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041195e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcat();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00411970(void)

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
  
  if (in_ECX == DAT_00417000) {
    return;
  }
  _DAT_00417288 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)((undefined *)register0x00000010 == (undefined *)0x32c) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041728c = &stack0x00000004;
  _DAT_004171c8 = 0x10001;
  _DAT_00417170 = 0xc0000409;
  _DAT_00417174 = 1;
  local_32c = DAT_00417000;
  local_328 = DAT_00417004;
  _DAT_0041717c = local_res0;
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
  DAT_00417280 = local_res0;
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
// Name: __RTC_CheckEsp
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug

undefined8 __RTC_CheckEsp(void)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  bool in_ZF;
  void *local_res0;
  
  if (in_ZF) {
    return CONCAT44(in_EDX,in_EAX);
  }
  _RTC_Failure(local_res0,0);
  return CONCAT44(in_EDX,in_EAX);
}



// Library Function - Single Match
// Name: @_RTC_CheckStackVars@8
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __fastcall __RTC_CheckStackVars_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *local_res0;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *param_2) {
    do {
      iVar1 = *(int *)(param_2[1] + iVar2);
      if ((*(int *)(iVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(param_2[1] + iVar2 + 4) + iVar1 + param_1) != -0x33333334)) {
        _RTC_StackFailure(local_res0,*(char **)(param_2[1] + 8 + iVar2));
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0xc;
    } while (local_8 < *param_2);
  }
  return;
}



// Library Function - Single Match
// Name: @_RTC_AllocaHelper@12
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010

void __fastcall __RTC_AllocaHelper_12(undefined *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) &&
     (iVar1 = param_2, puVar2 = param_1, param_3 != (undefined4 *)0x0)) {
    while (iVar1 != 0) {
      *puVar2 = 0xcc;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(int *)(param_1 + 0xc) = param_2;
    *(undefined **)param_3 = param_1;
  }
  return;
}



// Library Function - Single Match
// Name: @_RTC_CheckStackVars2@12
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __fastcall __RTC_CheckStackVars2_12(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_res0;
  int local_8;
  
  iVar3 = 0;
  if ((param_2 != (int *)0x0) && (local_8 = 0, 0 < *param_2)) {
    do {
      iVar1 = *(int *)(param_2[1] + iVar3);
      if ((*(int *)(iVar1 + -4 + param_1) != -0x33333334) ||
         (*(int *)(*(int *)(param_2[1] + iVar3 + 4) + iVar1 + param_1) != -0x33333334)) {
        _RTC_StackFailure(local_res0,*(char **)(iVar3 + 8 + param_2[1]));
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
          _RTC_AllocaFailure(local_res0,(_RTC_ALLOCA_NODE *)param_3,iVar3);
        }
        if (*(int *)(param_3[3] + -4 + (int)param_3) != -0x33333334) {
          _RTC_AllocaFailure(local_res0,(_RTC_ALLOCA_NODE *)param_3,iVar3);
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
// Name: _pre_c_init
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
// Name: _pre_cpp_init
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
// Studio 2012 Debug

void _pre_cpp_init(void)

{
  _atexit(&LAB_0041102d);
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
// Name: _mainCRTStartup, _wmainCRTStartup
// Library: Visual Studio 2008 Debug

void FID_conflict__wmainCRTStartup(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: ___tmainCRTStartup
// Library: Visual Studio 2008 Debug

int ___tmainCRTStartup(void)

{
  code *pcVar1;
  _TEB *p_Var2;
  int iVar3;
  BOOL BVar4;
  int **in_FS_OFFSET;
  uint uStack64;
  LONG local_28;
  LONG local_24;
  int local_20;
  uint *local_1c;
  int *local_14;
  undefined *puStack16;
  uint local_c;
  undefined4 local_8;
  
  puStack16 = &LAB_00411087;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00417000 ^ 0x416ab8;
  uStack64 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack64;
  *(int ***)in_FS_OFFSET = &local_14;
  local_8 = 0;
  local_28 = 0;
  p_Var2 = _NtCurrentTeb();
  local_24 = *(LONG *)(p_Var2 + 4);
  local_20 = 0;
  while (local_28 = InterlockedCompareExchange((LONG *)&DAT_00417570,local_24,0), local_28 != 0) {
    if (local_28 == local_24) {
      local_20 = 1;
      break;
    }
    Sleep(1000);
  }
  if (_DAT_00417560 == 1) {
    _amsg_exit(0x1f);
  }
  else {
    if (_DAT_00417560 == 0) {
      _DAT_00417560 = 1;
      iVar3 = _initterm_e(&DAT_0041530c,&DAT_00415618);
      if (iVar3 != 0) {
        iVar3 = 0xff;
        goto LAB_00411fa4;
      }
    }
    else {
      _DAT_00417160 = 1;
    }
  }
  if (_DAT_00417560 == 1) {
    _initterm(&DAT_00415000,&DAT_00415208);
    _DAT_00417560 = 2;
  }
  if ((_DAT_00417560 != 2) &&
     (iVar3 = _CrtDbgReportW(2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\crtexe.c",500,0,
                             L"__native_startup_state == __initialized"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (local_20 == 0) {
    InterlockedExchange((LONG *)&DAT_00417570,0);
  }
  if ((_DAT_00417594 != (code *)0x0) &&
     (BVar4 = __IsNonwritableInCurrentImage(&DAT_00417594), BVar4 != 0)) {
    (*_DAT_00417594)(0,2,0);
  }
  _CrtSetCheckCount(1);
  *(undefined4 *)__initenv_exref = DAT_00417148;
  DAT_0041715c = thunk_FUN_004118c0(DAT_00417144,DAT_0041714c);
  if (_DAT_00417150 == 0) {
                    // WARNING: Subroutine does not return
    exit(DAT_0041715c);
  }
  iVar3 = DAT_0041715c;
  if (_DAT_00417160 == 0) {
    _cexit();
    iVar3 = DAT_0041715c;
  }
LAB_00411fa4:
  *in_FS_OFFSET = local_14;
  return iVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Library Function - Single Match
// Name: _NtCurrentTeb
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

_TEB * _NtCurrentTeb(void)

{
  int in_FS_OFFSET;
  
  return *(_TEB **)(in_FS_OFFSET + 0x18);
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
// Name: _check_managed_app
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

undefined4 _check_managed_app(void)

{
  return 0;
}



// Library Function - Single Match
// Name: ?DebuggerProbe@@YAHK@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// int __cdecl DebuggerProbe(unsigned long)

int __cdecl DebuggerProbe(ulong param_1)

{
  int **in_FS_OFFSET;
  uint uStack72;
  ULONG_PTR local_38;
  ulong local_34;
  byte *local_30;
  byte local_1d;
  uint *local_1c;
  int *local_14;
  undefined *puStack16;
  uint local_c;
  undefined4 local_8;
  
  puStack16 = &LAB_00411087;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00417000 ^ 0x416ad8;
  uStack72 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack72;
  *(int ***)in_FS_OFFSET = &local_14;
  local_1d = 0;
  local_38 = 0x1001;
  local_34 = param_1;
  local_30 = &local_1d;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,&local_38);
  *in_FS_OFFSET = local_14;
  return (uint)local_1d;
}



// Library Function - Single Match
// Name: ?_RTC_Failure@@YAXPAXH@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl _RTC_Failure(void *,int)

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
// Name: ?failwithmessage@@YAXPAXHHPBD@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl failwithmessage(void *,int,int,char const *)

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
  char local_a30 [780];
  CHAR local_724 [780];
  WCHAR local_418 [260];
  WCHAR local_210 [260];
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
    iVar3 = DebuggerRuntime(param_3,*(int *)(&DAT_00415b7c + param_3 * 4),param_1,
                            (wchar_t *)local_e38);
    if (iVar3 != 0) goto LAB_004125e6;
    bVar1 = false;
  }
  pcVar2 = local_e34;
  if ((local_e3c != (code *)0x0) || (local_e34 != (code *)0x0)) {
    if (bVar1) {
      BVar4 = IsDebuggerPresent();
      if (BVar4 != 0) goto LAB_004125e0;
    }
    _RTC_GetSrcLine((uchar *)((int)param_1 + -5),(wchar_t *)local_210,0x104,(int *)&local_e34,
                    (wchar_t *)local_418,0x104);
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
  thunk_FUN_00411970();
  return;
}



// Library Function - Single Match
// Name: ?DebuggerRuntime@@YAHKHPAXPB_W@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// int __cdecl DebuggerRuntime(unsigned long,int,void *,wchar_t const *)

int __cdecl DebuggerRuntime(ulong param_1,int param_2,void *param_3,wchar_t *param_4)

{
  int **in_FS_OFFSET;
  uint uStack72;
  ULONG_PTR local_38;
  ulong local_34;
  int local_30;
  void *local_2c;
  byte *local_28;
  wchar_t *local_24;
  byte local_1d;
  uint *local_1c;
  int *local_14;
  undefined *puStack16;
  uint local_c;
  undefined4 local_8;
  
  puStack16 = &LAB_00411087;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00417000 ^ 0x416af8;
  uStack72 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack72;
  *(int ***)in_FS_OFFSET = &local_14;
  local_1d = 0;
  local_38 = 0x1002;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = &local_1d;
  local_24 = param_4;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,&local_38);
  *in_FS_OFFSET = local_14;
  return (uint)local_1d;
}



// Library Function - Single Match
// Name: ?_RTC_StackFailure@@YAXPAXPBD@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl _RTC_StackFailure(void *,char const *)

void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack1033;
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417010 == -1) goto LAB_0041283e;
  if (*param_2 == '\0') {
LAB_0041281f:
    pcVar4 = "Stack corrupted near unknown variable";
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar4 + (0x2d - (int)(param_2 + 1))) goto LAB_0041281f;
    pcVar4 = (char *)((int)&uStack1033 + 1);
    iVar5 = 0;
    do {
      cVar1 = "Stack around the variable \'"[iVar5];
      *(char *)((int)&uStack1033 + iVar5 + 1) = cVar1;
      iVar5 = iVar5 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)(&stack0xfffffbf4 + 3);
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    uVar6 = (uint)(pcVar2 + -(int)param_2) >> 2;
    puVar7 = (undefined4 *)param_2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar2 + -(int)param_2) & 3;
    while (pcVar2 = "\' was corrupted.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar8 = (undefined4 *)(&stack0xfffffbf4 + 3);
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar3 + -0x415baf) >> 2;
    puVar7 = (undefined4 *)"\' was corrupted.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar3 + -0x415baf) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  failwithmessage(param_1,DAT_00417010,2,pcVar4);
LAB_0041283e:
  thunk_FUN_00411970();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: ?_RTC_AllocaFailure@@YAXPAXPAU_RTC_ALLOCA_NODE@@H@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// void __cdecl _RTC_AllocaFailure(void *,struct _RTC_ALLOCA_NODE *,int)

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
  char local_144 [244];
  char local_50 [52];
  char local_1c [20];
  uint local_8;
  
  iVar1 = DAT_00417018;
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417018 != -1) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      _DAT_00417534 = GetProcAddress(hModule,"wsprintfA");
      if ((param_2 != (_RTC_ALLOCA_NODE *)0x0) && (_DAT_00417534 != (FARPROC)0x0)) {
        (*_DAT_00417534)(local_144,"%s%s%p%s%ld%s%d%s",
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
        (*_DAT_00417534)(local_144 + iVar2,pcVar3,pcVar4,puVar5,pcVar6,puVar7);
        failwithmessage(param_1,iVar1,4,local_144);
        thunk_FUN_00411970();
        return;
      }
    }
    failwithmessage(param_1,iVar1,4,
                    "Stack area around _alloca memory reserved by this function is corrupted\n");
  }
  thunk_FUN_00411970();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: ?_getMemBlockDataString@@YAXPAD00I@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug
// void __cdecl _getMemBlockDataString(char *,char *,char *,unsigned int)

void __cdecl _getMemBlockDataString(char *param_1,char *param_2,char *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  char *local_8;
  
  local_8 = param_2;
  uVar4 = 0;
  pbVar3 = (byte *)param_1;
  while( true ) {
    uVar2 = param_4;
    if (0xf < param_4) {
      uVar2 = 0x10;
    }
    if (uVar2 <= uVar4) break;
    bVar1 = (param_3 + -(int)param_1)[(int)pbVar3];
    (*_DAT_00417534)(local_8,"%.2X ",(uint)bVar1);
    local_8 = local_8 + 3;
    *pbVar3 = bVar1;
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  param_1[uVar4] = '\0';
  param_2[uVar4 * 3] = '\0';
  return;
}



// Library Function - Single Match
// Name: __RTC_UninitUse
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release

void __cdecl __RTC_UninitUse(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *local_res0;
  char local_408 [1024];
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (DAT_00417014 == -1) goto LAB_00412b7b;
  if (param_1 == (undefined4 *)0x0) {
LAB_00412b5f:
    pcVar7 = "A variable is being used without being initialized.";
  }
  else {
    puVar3 = param_1;
    do {
      cVar1 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar1 != '\0');
    if (0x400 < (uint)((int)puVar3 + (0x3a - ((int)param_1 + 1)))) goto LAB_00412b5f;
    pcVar7 = local_408;
    iVar5 = 0;
    do {
      cVar1 = "The variable \'"[iVar5];
      local_408[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
      puVar3 = param_1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar1 != '\0');
    puVar3 = (undefined4 *)((int)puVar3 - (int)param_1);
    puVar8 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)puVar3 >> 2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)puVar3 & 3;
    while (pcVar2 = "\' is being used without being initialized.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    puVar3 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar2 = (char *)((int)puVar3 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar4 + -0x415bd3) >> 2;
    puVar8 = (undefined4 *)"\' is being used without being initialized.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar6 = (uint)(pcVar4 + -0x415bd3) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar3 = *(undefined *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  failwithmessage(local_res0,DAT_00417014,3,pcVar7);
LAB_00412b7b:
  thunk_FUN_00411970();
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
// Name: __RTC_SetErrorType
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
  DAT_00417538 = 0;
  DAT_0041753c = param_1;
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
// Name: ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release, Visual Studio 2010 Debug, Visual
// Studio 2012 Debug
// long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)

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
// Name: __setdefaultprecision
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
// Name: __invoke_watson_if_error
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
    _invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}



undefined4 FUN_00412de0(void)

{
  return 0;
}



// Library Function - Multiple Matches With Different Base Names
// Name: __setargv, __wsetargv
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

int __cdecl FID_conflict___wsetargv(void)

{
  return 0;
}



// Library Function - Single Match
// Name: __RTC_Initialize
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
// Name: __onexit
// Library: Visual Studio 2008 Debug

_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int **in_FS_OFFSET;
  undefined4 local_28;
  _onexit_t local_24;
  int local_20 [3];
  int *local_14;
  undefined *puStack16;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack16 = &LAB_00411087;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00417000 ^ 0x416b18;
  uVar1 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  *(int ***)in_FS_OFFSET = &local_14;
  local_20[0] = _decode_pointer(DAT_00417584,uVar1);
  if (local_20[0] == -1) {
    local_24 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = 0;
    local_20[0] = _decode_pointer(DAT_00417584,uVar1);
    local_28 = _decode_pointer(DAT_00417574);
    uVar2 = _encode_pointer(param_1,local_20,&local_28);
    local_24 = (_onexit_t)__dllonexit(uVar2);
    DAT_00417584 = _encode_pointer(local_20[0]);
    DAT_00417574 = _encode_pointer(local_28);
    local_8 = 0xfffffffe;
    FUN_00412f55();
  }
  *in_FS_OFFSET = local_14;
  return local_24;
}



void FUN_00412f55(void)

{
  _unlock(8);
  return;
}



// Library Function - Single Match
// Name: _atexit
// Library: Visual Studio 2008 Debug

int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (uint)(p_Var1 != (_onexit_t)0x0) - 1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
  return;
}



// Library Function - Single Match
// Name: ___security_init_cookie
// Library: Visual Studio 2008 Debug

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint local_1c;
  uint local_18;
  uint local_10;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00417000 == 0xbb40e64e) || ((DAT_00417000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    local_10 = local_c.dwLowDateTime ^ local_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetCurrentThreadId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetTickCount();
    local_10 = DVar1 ^ local_10;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_1c);
    local_10 = local_10 ^ local_1c ^ local_18;
    if (local_10 == 0xbb40e64e) {
      local_10 = 0xbb40e64f;
    }
    else {
      if ((local_10 & 0xffff0000) == 0) {
        local_10 = local_10 << 0x10 | local_10;
      }
    }
    DAT_00417000 = local_10;
    DAT_00417004 = ~local_10;
  }
  else {
    DAT_00417004 = ~DAT_00417000;
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413118. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter();
  return iVar1;
}



// Library Function - Single Match
// Name: __ValidateImageBase
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)(pImageBase + *(int *)(pImageBase + 0x3c) + 6) == 0x10b) {
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
// Name: __FindPESection
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER local_10;
  uint local_c;
  
  pImageBase = pImageBase + *(int *)(pImageBase + 0x3c);
  local_c = 0;
  local_10 = (PIMAGE_SECTION_HEADER)(pImageBase + (uint)*(ushort *)(pImageBase + 0x14) + 0x18);
  while( true ) {
    if (*(ushort *)(pImageBase + 6) <= local_c) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((local_10->VirtualAddress <= rva) && (rva < local_10->VirtualAddress + local_10->Misc))
    break;
    local_c = local_c + 1;
    local_10 = local_10 + 1;
  }
  return local_10;
}



// Library Function - Single Match
// Name: __IsNonwritableInCurrentImage
// Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  int **in_FS_OFFSET;
  uint uStack76;
  PBYTE local_28;
  IMAGE_DOS_HEADER *local_20;
  uint *local_1c;
  int *local_14;
  undefined *puStack16;
  uint local_c;
  undefined4 local_8;
  
  puStack16 = &LAB_00411087;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00417000 ^ 0x416b38;
  uStack76 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack76;
  *(int ***)in_FS_OFFSET = &local_14;
  local_20 = &IMAGE_DOS_HEADER_00400000;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    local_28 = pTarget + -(int)local_20;
    p_Var2 = __FindPESection((PBYTE)local_20,(DWORD_PTR)local_28);
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  *in_FS_OFFSET = local_14;
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
// Name: __except_handler4
// Library: Visual Studio

void __cdecl
__except_handler4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _except_handler4_common(&DAT_00417000,thunk_FUN_00411970,param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004133f4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook();
  return;
}


/*
Unable to decompile '_RTC_GetSrcLine'
Cause: 
Low-level Error: PTRSUB off of non structured pointer type
*/


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: ?GetPdbDll@@YAPAUHINSTANCE__@@XZ
// Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release
// struct HINSTANCE__ * __cdecl GetPdbDll(void)

HINSTANCE__ * __cdecl GetPdbDll(void)

{
  HINSTANCE__ *pHVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  int iVar4;
  undefined local_11c [4];
  FARPROC local_118;
  undefined4 local_114;
  int local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_00417000 ^ (uint)&stack0xfffffffc;
  if (_DAT_0041755c != 0) {
    pHVar1 = (HINSTANCE__ *)thunk_FUN_00411970();
    return pHVar1;
  }
  _DAT_0041755c = 1;
  hModule = LoadLibraryA(PTR_s_MSPDB80_DLL_00417034);
  if (hModule == (HMODULE)0x0) {
    hModule = LoadLibraryA("ADVAPI32.DLL");
    if (hModule == (HMODULE)0x0) {
      pHVar1 = (HINSTANCE__ *)thunk_FUN_00411970();
      return pHVar1;
    }
    local_118 = GetProcAddress(hModule,"RegOpenKeyExA");
    if (local_118 == (FARPROC)0x0) {
      pHVar1 = (HINSTANCE__ *)thunk_FUN_00411970();
      return pHVar1;
    }
    pFVar2 = GetProcAddress(hModule,"RegQueryValueExA");
    if ((pFVar2 != (FARPROC)0x0) &&
       (pFVar3 = GetProcAddress(hModule,"RegCloseKey"), pFVar3 != (FARPROC)0x0)) {
      iVar4 = (*local_118)(0x80000002,"SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS",0,1,
                           &local_114);
      if ((iVar4 == 0) &&
         (((iVar4 = (*pFVar2)(local_114,"EnvironmentDirectory",0,local_11c,0,&local_110), iVar4 == 0
           && (0xc < 0x7fffffffU - local_110)) && (local_110 + 0xdU < 0x104)))) {
        iVar4 = (*pFVar2)(local_114,"EnvironmentDirectory",0,local_11c,local_10c,&local_110);
        (*pFVar3)(local_114);
        FreeLibrary(hModule);
        if (iVar4 == 0) {
          if (*(char *)((int)&local_110 + local_110 + 2) == '\\') {
            local_110 = local_110 + -1;
          }
          else {
            *(undefined *)((int)&local_110 + local_110 + 3) = 0x5c;
          }
          iVar4 = 0;
          do {
            local_10c[iVar4 + local_110] = PTR_s_MSPDB80_DLL_00417034[iVar4];
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0xc);
          LoadLibraryA(local_10c);
          pHVar1 = (HINSTANCE__ *)thunk_FUN_00411970();
          return pHVar1;
        }
      }
      else {
        FreeLibrary(hModule);
      }
    }
  }
  pHVar1 = (HINSTANCE__ *)thunk_FUN_00411970();
  return pHVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004139bc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139c2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x004139c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _invoke_watson();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock();
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004139d4. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139da. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock();
  return;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}


