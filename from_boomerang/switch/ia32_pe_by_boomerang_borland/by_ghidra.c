typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
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
typedef int BOOL;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef BOOL (* WNDENUMPROC)(HWND, LPARAM);

struct HWND__ {
    int unused;
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef ulong DWORD;

typedef int (* FARPROC)(void);

typedef ushort WORD;

typedef WORD * LPWORD;

typedef DWORD * LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef BOOL * LPBOOL;

typedef struct HINSTANCE__ * HINSTANCE;

typedef void * LPCVOID;

typedef void * LPVOID;

typedef HINSTANCE HMODULE;

typedef BYTE * LPBYTE;

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

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
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

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    dword AddressOfFunctions;
    dword AddressOfNames;
    dword AddressOfNameOrdinals;
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

typedef struct IMAGE_RESOURCE_DIR_STRING_U_12 IMAGE_RESOURCE_DIR_STRING_U_12, *PIMAGE_RESOURCE_DIR_STRING_U_12;

struct IMAGE_RESOURCE_DIR_STRING_U_12 {
    word Length;
    wchar16 NameString[6];
};

typedef BOOL (* PHANDLER_ROUTINE)(DWORD);

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef void * HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _MEMORYSTATUS _MEMORYSTATUS, *P_MEMORYSTATUS;

typedef ulong ULONG_PTR;

typedef ULONG_PTR SIZE_T;

struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _MEMORYSTATUS * LPMEMORYSTATUS;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

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

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef wchar_t WCHAR;

typedef CHAR * LPCSTR;

typedef long LONG;

typedef LONG * PLONG;

typedef CHAR * LPCH;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA * LPOSVERSIONINFOA;

typedef WCHAR * LPWSTR;

typedef CONTEXT * PCONTEXT;

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
    byte e_program[448]; // Actual DOS program
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall entry(void)

{
  char cVar1;
  int *piVar2;
  UINT UVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int iStack24;
  undefined auStack20 [8];
  undefined **ppuVar7;
  
  _DAT_0040a113 = DAT_0040a10f << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00402134();
  FUN_004014d0();
  FUN_00402138();
  FUN_00402d50((undefined4 *)0x0);
  ppuVar7 = &PTR_DAT_0040a0b8;
  _DAT_0040a117 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0040bbf4 = (uint)ppuVar7[4] & 1;
  FUN_00405010();
  FUN_00405348(ppuVar7[7],ppuVar7[8]);
  FUN_004033a0(ppuVar7[10]);
  FUN_004033b0((undefined4 *)ppuVar7[0x11]);
  _DAT_0040ccd4 = 1;
  DAT_0040ccc0 = auStack20;
  _DAT_0040ccd8 = ppuVar7;
  FUN_00402f38();
  DAT_0040ccb0 = GetEnvironmentStrings();
  DAT_0040ccac = GetCommandLineA();
  FUN_00406f78((undefined4 *)ppuVar7[0xb],(undefined4 *)ppuVar7[0xc]);
  FUN_00406fbc(ppuVar7[0xd],ppuVar7[0xe],ppuVar7[0xf],ppuVar7[0x10]);
  piVar2 = (int *)FUN_00407a50();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_00407a58(piVar2,0);
    piVar5 = piVar2;
    for (iStack24 = 0; piVar5 = piVar5 + 1, iStack24 < *piVar2; iStack24 = iStack24 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_00407a58((int *)&DAT_0040ccd4,0);
  pcVar6 = DAT_0040ccac;
  if ((*(byte *)(ppuVar7 + 4) & 1) == 0) {
    UVar3 = (*(code *)ppuVar7[6])();
    FUN_00406f28(UVar3);
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    FUN_00407d1c();
    GetModuleHandleA((LPCSTR)0x0);
    UVar3 = (*(code *)ppuVar7[6])();
    FUN_00406f28(UVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall FUN_00401012(void)

{
  char cVar1;
  int *piVar2;
  UINT UVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int local_18;
  undefined local_14 [8];
  undefined **ppuVar7;
  
  _DAT_0040a113 = DAT_0040a10f << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00402134();
  FUN_004014d0();
  FUN_00402138();
  FUN_00402d50((undefined4 *)0x0);
  ppuVar7 = &PTR_DAT_0040a0b8;
  _DAT_0040a117 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0040bbf4 = (uint)ppuVar7[4] & 1;
  FUN_00405010();
  FUN_00405348(ppuVar7[7],ppuVar7[8]);
  FUN_004033a0(ppuVar7[10]);
  FUN_004033b0((undefined4 *)ppuVar7[0x11]);
  _DAT_0040ccd4 = 1;
  DAT_0040ccc0 = local_14;
  _DAT_0040ccd8 = ppuVar7;
  FUN_00402f38();
  DAT_0040ccb0 = GetEnvironmentStrings();
  DAT_0040ccac = GetCommandLineA();
  FUN_00406f78((undefined4 *)ppuVar7[0xb],(undefined4 *)ppuVar7[0xc]);
  FUN_00406fbc(ppuVar7[0xd],ppuVar7[0xe],ppuVar7[0xf],ppuVar7[0x10]);
  piVar2 = (int *)FUN_00407a50();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_00407a58(piVar2,0);
    piVar5 = piVar2;
    for (local_18 = 0; piVar5 = piVar5 + 1, local_18 < *piVar2; local_18 = local_18 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_00407a58((int *)&DAT_0040ccd4,0);
  pcVar6 = DAT_0040ccac;
  if ((*(byte *)(ppuVar7 + 4) & 1) == 0) {
    UVar3 = (*(code *)ppuVar7[6])();
    FUN_00406f28(UVar3);
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    FUN_00407d1c();
    GetModuleHandleA((LPCSTR)0x0);
    UVar3 = (*(code *)ppuVar7[6])();
    FUN_00406f28(UVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    // 0x1059  1  __GetExceptDLLinfo
  _DAT_0040a5cc = FUN_00401140();
  _DAT_0040a5cc = _DAT_0040a5cc + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_0040a5b8;
  return;
}



undefined4 __stdcall FUN_00401140(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + DAT_0040a10f * 4);
}



undefined4 __cdecl FUN_00401150(undefined4 param_1)

{
  switch(param_1) {
  default:
    FUN_004038e4((byte *)s_Other__0040a152);
    break;
  case 2:
    FUN_004038e4((byte *)s_Two__0040a128);
    break;
  case 3:
    FUN_004038e4((byte *)s_Three__0040a12e);
    break;
  case 4:
    FUN_004038e4((byte *)s_Four__0040a136);
    break;
  case 5:
    FUN_004038e4((byte *)s_Five__0040a13d);
    break;
  case 6:
    FUN_004038e4((byte *)s_Six__0040a144);
    break;
  case 7:
    FUN_004038e4((byte *)s_Seven__0040a14a);
  }
  return 0;
}



undefined4 * __cdecl FUN_004011e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004013e0(param_1 * param_2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004021ac(puVar1,0,param_1 * param_2);
  }
  return puVar1;
}



void __stdcall FUN_0040120c(undefined4 param_1)

{
  FUN_004013f0(param_1);
  return;
}



void __stdcall FUN_0040121c(undefined4 param_1)

{
  FUN_0040120c(param_1);
  return;
}



bool FUN_0040122c(int param_1,LPVOID *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_0040a15c == 0) {
    if ((DAT_0040cc78 == 2) || (DAT_0040cc78 == 1)) {
      DAT_0040a15c = 0x100000;
    }
    else {
      DAT_0040a15c = 0x400000;
    }
  }
  dwSize = (DAT_0040a15c + param_1) - 1U & ~(DAT_0040a15c - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return pvVar1 != (LPVOID)0x0;
}



bool FUN_00401298(LPVOID *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc(*param_1,param_2,0x1000,4);
  *param_1 = pvVar1;
  return pvVar1 != (LPVOID)0x0;
}



undefined4 FUN_004012c0(LPVOID param_1,int param_2)

{
  LPVOID pvVar1;
  LPVOID lpAddress;
  
  lpAddress = param_1;
  if (param_2 != 0) {
    do {
      pvVar1 = VirtualAlloc(lpAddress,0x1000,0x1000,4);
      if (pvVar1 == (LPVOID)0x0) {
        FUN_0040130c(param_1,(int)lpAddress - (int)param_1);
        return 0;
      }
      lpAddress = (LPVOID)((int)lpAddress + 0x1000);
      param_2 = param_2 + -0x1000;
    } while (param_2 != 0);
  }
  return 1;
}



undefined4 FUN_0040130c(LPVOID param_1,SIZE_T param_2)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,param_2,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00401324(LPVOID param_1)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}



undefined4 __cdecl FUN_00401360(FARPROC *param_1,FARPROC *param_2,FARPROC *param_3)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (((param_1 == (FARPROC *)0x0) || (param_2 == (FARPROC *)0x0)) || (param_3 == (FARPROC *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA(s_borlndmm_0040a199);
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysGetMem_qqri_0040a1a2);
      *param_1 = pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysFreeMem_qqrpv_0040a1bb);
      *param_2 = pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysReallocMem_qqrpvi_0040a1d6);
      *param_3 = pFVar2;
      if (((*param_1 == (FARPROC)0x0) || (*param_2 == (FARPROC)0x0)) || (*param_3 == (FARPROC)0x0))
      {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



undefined4 __stdcall FUN_004013dc(void)

{
  return 0;
}



void __stdcall FUN_004013e0(undefined4 param_1)

{
  (*(code *)PTR_FUN_0040a20c)();
  return;
}



void __stdcall FUN_004013f0(undefined4 param_1)

{
  (*(code *)PTR_FUN_0040a208)();
  return;
}



void __stdcall FUN_00401400(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_0040a210)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401418(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004013dc();
  if (iVar1 == 0) {
    PTR_FUN_0040a208 = FUN_00401ab8;
    PTR_FUN_0040a20c = FUN_00401c28;
    PTR_FUN_0040a210 = FUN_00402080;
    PTR_LAB_0040a214 = FUN_00401e40;
    _DAT_0040a204 = 1;
  }
  _DAT_0040a200 = param_1;
  return;
}



void __cdecl FUN_00401460(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00401418(1);
  (*(code *)PTR_FUN_0040a208)(param_1,extraout_EDX,uVar1,param_1);
  return;
}



void __cdecl FUN_00401478(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00401418(1);
  (*(code *)PTR_FUN_0040a20c)(param_1,extraout_EDX,uVar1,param_1);
  return;
}



void __cdecl FUN_00401490(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00401418(1);
  (*(code *)PTR_FUN_0040a210)(param_2,param_1,uVar1,param_1,param_2);
  return;
}



void __stdcall FUN_004014d0(void)

{
  return;
}



void __stdcall FUN_004014d4(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0xc; iVar2 < DAT_0040a228; iVar2 = iVar2 + 4) {
    iVar1 = iVar2 * 2 + DAT_0040a23c;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar2 = DAT_0040a228 * 2 + DAT_0040a23c;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00401514(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_2 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[2] = 1;
    param_1[3] = (uint)param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[0x23] = (uint)DAT_0040a234;
    param_1[0x24] = 0;
    if (DAT_0040a234 == (uint *)0x0) {
      _DAT_0040a238 = param_1;
    }
    else {
      DAT_0040a234[0x24] = (uint)param_1;
    }
    DAT_0040a234 = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if (DAT_0040a23c == (uint *)0x0) {
      uVar5 = DAT_0040a228 * 2 + 3 & 0xfffffffc;
      DAT_0040a23c = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_004014d4();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_0040a24c;
    if (uVar5 < DAT_0040a228) {
      puVar2 = (undefined *)((int)DAT_0040a23c + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 __cdecl FUN_00401614(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = param_2 & 0xfffff000;
  uVar1 = *param_1;
  iVar2 = uVar1 + (int)param_1;
  puVar3 = (uint *)(iVar2 + -4);
  if (uVar4 < uVar1) {
    if ((*(byte *)puVar3 & 2) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)((int)puVar3 - *(int *)(iVar2 + -8));
    if ((*puVar3 & 0xfffffffc) - 0xc < uVar1 - uVar4) {
      return 0xffffffff;
    }
    *puVar3 = *puVar3 - (uVar1 - uVar4);
    *(uint *)((int)puVar3 + (*puVar3 & 0xfffffffc)) = (*puVar3 & 0xfffffffc) + 4;
    *(undefined4 *)((int)puVar3 + (*puVar3 & 0xfffffffc) + 4) = 2;
    if ((*puVar3 & 0xfffffffc) < DAT_0040a228) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_0040a23c + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_0040a23c) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_0040a23c + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar1 = *param_1;
    *puVar3 = *puVar3 + (uVar4 - uVar1) + -4;
    *(undefined4 *)(iVar2 + (*puVar3 & 0xfffffffc)) = 0;
    FUN_00401ae4(iVar2);
    *param_1 = *param_1 + (uVar4 - uVar1);
  }
  return 0;
}



undefined4 __cdecl FUN_00401700(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint *local_8;
  uint uVar4;
  
  uVar7 = param_1 + 0xfffU & 0xfffff000;
  if (DAT_0040a250 == 0) {
    DAT_0040a250 = FUN_00401e28();
  }
  puVar1 = DAT_0040a234;
  if (DAT_0040a23c == 0) {
    uVar7 = uVar7 + (DAT_0040a228 * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_0040a220;
      if ((uint)(DAT_0040a254 + DAT_0040a21c) < DAT_0040a250) {
        iVar3 = DAT_0040a21c;
      }
      iVar6 = DAT_0040a220;
      if ((uint)(DAT_0040a254 + DAT_0040a21c) < DAT_0040a250) {
        iVar6 = DAT_0040a21c;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_0040a220;
        if ((uint)(DAT_0040a254 + DAT_0040a21c) < DAT_0040a250) {
          iVar3 = DAT_0040a21c;
        }
        iVar6 = DAT_0040a220;
        if ((uint)(DAT_0040a254 + DAT_0040a21c) < DAT_0040a250) {
          iVar6 = DAT_0040a21c;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_004012c0((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        DAT_0040a254 = DAT_0040a254 + (uVar7 - *puVar1);
        FUN_00401614(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_004012c0((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        DAT_0040a254 = DAT_0040a254 + 0x1000;
        FUN_00401614(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_0040a218;
  if (DAT_0040a218 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_0040122c(uVar4,&local_8,&local_c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_0040a220;
    if ((uint)(DAT_0040a254 + DAT_0040a21c) < DAT_0040a250) {
      iVar3 = DAT_0040a21c;
    }
    iVar6 = DAT_0040a220;
    if ((uint)(DAT_0040a254 + DAT_0040a21c) < DAT_0040a250) {
      iVar6 = DAT_0040a21c;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_0040a234; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == local_8) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_004012c0((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          DAT_0040a254 = DAT_0040a254 + iVar3;
          FUN_00401614(puVar1,puVar1[1]);
        }
        iVar6 = FUN_004012c0(local_8,uVar7 - iVar3);
        if (iVar6 != 0) {
          DAT_0040a254 = DAT_0040a254 + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)local_8;
          puVar1[1] = puVar1[1] + local_c;
          FUN_00401614(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_004012c0(local_8,uVar7);
    if (iVar3 == 0) {
      FUN_00401324(local_8);
      uVar5 = 0xffffffff;
    }
    else {
      DAT_0040a254 = DAT_0040a254 + uVar7;
      FUN_00401514(local_8,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}



undefined4 __cdecl FUN_004019c4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  uVar4 = DAT_0040a230;
  if (DAT_0040a254 < DAT_0040a250) {
    uVar4 = DAT_0040a22c;
  }
  if ((uVar4 <= *param_1 - 0xc) && (puVar2 = DAT_0040a234, DAT_0040a234 != (uint *)0x0)) {
    do {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_00401614(puVar2,uVar4);
        while (uVar4 + (int)puVar2 < puVar2[puVar2[2] + 2] ||
               uVar4 + (int)puVar2 == puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          SVar3 = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_0040130c((LPVOID)puVar2[puVar2[2] + 3],SVar3);
          DAT_0040a254 = DAT_0040a254 - SVar3;
          FUN_00401324((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_0040130c((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_0040a254 = DAT_0040a254 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
      puVar2 = (uint *)puVar2[0x23];
    } while (puVar2 != (uint *)0x0);
  }
  return 0;
}



void __cdecl FUN_00401ab8(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_00401324((LPVOID)(param_1 + -4));
      return;
    }
    FUN_00401ae4(param_1);
  }
  return;
}



void __cdecl FUN_00401ae4(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + -4);
    uVar3 = *puVar2;
    if ((uVar3 & 2) == 0) {
      *puVar2 = *puVar2 | 1;
    }
    else {
      puVar2 = (uint *)((int)puVar2 - *(int *)(param_1 + -8));
      *puVar2 = *puVar2 + (uVar3 & 0xfffffffc) + 4;
      if (puVar2 == (uint *)PTR_DAT_0040a24c) {
        PTR_DAT_0040a24c = *(undefined **)(PTR_DAT_0040a24c + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*(byte *)puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_0040a24c) {
        PTR_DAT_0040a24c = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_0040a228) {
      uVar5 = (uVar3 * 2 + DAT_0040a23c) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_0040a24c + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_0040a230;
      if (DAT_0040a254 < DAT_0040a250) {
        uVar3 = DAT_0040a22c;
      }
      if (uVar3 < *puVar2) {
        FUN_004019c4(puVar2);
      }
    }
  }
  return;
}



int * __cdecl FUN_00401bec(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar2 = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_00401298(&local_8,uVar2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *local_8 = uVar2 - 4;
    local_8 = local_8 + 1;
  }
  return local_8;
}



uint * __cdecl FUN_00401c28(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_00401bec(param_1);
    return puVar1;
  }
  puVar1 = FUN_00401c50(param_1);
  return puVar1;
}



uint * __cdecl FUN_00401c50(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (param_1 < 0xc) {
      uVar6 = 0xc;
    }
    else {
      uVar6 = param_1 + 3 & 0xfffffffc;
    }
    if (DAT_0040a23c == 0) {
      FUN_00401700(1);
    }
    puVar1 = PTR_DAT_0040a24c;
    if (uVar6 < DAT_0040a228) {
      iVar3 = uVar6 * 2 + DAT_0040a23c;
      puVar4 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar4) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        *(uint *)(puVar4[2] + 4) = uVar6;
        return puVar4 + 1;
      }
      puVar4 = (uint *)PTR_DAT_0040a244;
      if ((undefined4 *)PTR_DAT_0040a244 == &DAT_0040a240) {
        for (iVar3 = uVar6 * 2 + DAT_0040a23c + -4; iVar3 == *(int *)(iVar3 + 4); iVar3 = iVar3 + 8)
        {
        }
        puVar4 = (uint *)PTR_DAT_0040a24c;
        if (*(uint **)(iVar3 + 4) != (uint *)0x0) {
          puVar4 = *(uint **)(iVar3 + 4);
        }
      }
    }
    else {
      uVar8 = *(uint *)PTR_DAT_0040a24c;
      puVar4 = (uint *)PTR_DAT_0040a24c;
      if (uVar8 < uVar6) {
        *(undefined4 *)PTR_DAT_0040a24c = 0xfffffffd;
        for (puVar4 = *(uint **)(puVar1 + 4); *puVar4 <= uVar6 && uVar6 != *puVar4;
            puVar4 = (uint *)puVar4[1]) {
        }
        *(uint *)PTR_DAT_0040a24c = uVar8;
        if (puVar4 == (uint *)PTR_DAT_0040a24c) {
          puVar4 = &DAT_0040a240;
        }
      }
    }
    if (puVar4 == &DAT_0040a240) {
      iVar3 = FUN_00401700(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_00401c50(param_1);
      }
      else {
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar8 = *puVar4;
      uVar7 = (uVar8 & 0xfffffffc) - uVar6;
      if (uVar7 < 0x10) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_0040a228 <= (uVar8 & 0xfffffffc)) {
          PTR_DAT_0040a24c = (undefined *)puVar4[1];
        }
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        puVar2 = puVar4 + 1;
        *(uint *)(puVar4[2] + 4) = uVar6;
      }
      else {
        uVar8 = uVar7 - 4;
        *puVar4 = uVar6;
        piVar5 = (int *)((int)puVar4 + uVar6 + 4);
        *piVar5 = uVar7 - 3;
        *(uint *)((int)piVar5 + uVar8) = uVar7;
        if (uVar8 < DAT_0040a228) {
          iVar3 = uVar8 * 2 + DAT_0040a23c;
          *(undefined4 *)((int)puVar4 + uVar6 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar4 + uVar6 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar4 + uVar6 + 8) + 8) = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          if (puVar4 == (uint *)PTR_DAT_0040a24c) {
            PTR_DAT_0040a24c = (undefined *)puVar4[1];
          }
          uVar6 = puVar4[1];
          *(uint *)(uVar6 + 8) = puVar4[2];
          *(uint *)(puVar4[2] + 4) = uVar6;
        }
        else {
          uVar8 = puVar4[2];
          *(int **)(uVar8 + 4) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 0xc) = uVar8;
          uVar8 = puVar4[1];
          *(int **)(uVar8 + 8) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 8) = uVar8;
          PTR_DAT_0040a24c = (undefined *)piVar5;
        }
        puVar2 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}



SIZE_T __stdcall FUN_00401e28(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}



void __stdcall FUN_00401e40(void)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  LPVOID pvVar4;
  LPVOID *ppvVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = DAT_0040a234;
  if (DAT_0040a234 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[0x23];
      piVar7[2] = piVar7[2] + -1;
      iVar6 = piVar7[2];
      ppvVar5 = (LPVOID *)(piVar7 + iVar6 + 3);
      for (; -1 < iVar6; iVar6 = iVar6 + -1) {
        pvVar2 = *ppvVar5;
        iVar3 = *piVar7;
        pvVar4 = *ppvVar5;
        piVar7[1] = (int)pvVar4 - (int)piVar7;
        *piVar7 = (int)pvVar4 - (int)piVar7;
        FUN_0040130c(pvVar2,iVar3 - ((int)pvVar2 - (int)piVar7));
        FUN_00401324(pvVar2);
        ppvVar5 = ppvVar5 + -1;
      }
      piVar7 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}



int __cdecl FUN_00401ea0(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int local_8;
  
  puVar4 = (uint *)(param_1 + -4);
  uVar1 = *puVar4 & 0xfffffffc;
  puVar2 = (uint *)((int)puVar4 + uVar1 + 4);
  if (param_2 < 0xc) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = param_2 + 3 & 0xfffffffc;
  }
  uVar6 = *puVar4 & 0xfffffffc;
  if (uVar3 != uVar6) {
    if ((*puVar2 & 1) != 0) {
      uVar6 = uVar6 + (*puVar2 & 0xfffffffc) + 4;
    }
    if (uVar6 < uVar3) {
      param_1 = 0;
    }
    else {
      local_8 = 0;
      if ((*puVar2 & 1) != 0) {
        if (DAT_0040a228 <= (*puVar2 & 0xfffffffc)) {
          local_8 = *(int *)((int)puVar4 + uVar1 + 0xc);
        }
        if (puVar2 == (uint *)PTR_DAT_0040a24c) {
          PTR_DAT_0040a24c = *(undefined **)((int)puVar4 + uVar1 + 8);
        }
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 8) + 8) =
             *(undefined4 *)((int)puVar4 + uVar1 + 0xc);
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 0xc) + 4) =
             *(undefined4 *)((int)puVar4 + uVar1 + 8);
        puVar2 = (uint *)((int)puVar4 + (*puVar2 & 0xfffffffc) + uVar1 + 8);
        *puVar2 = *puVar2 & 0xfffffffd;
        *puVar4 = (*puVar4 & 2) + uVar6;
      }
      uVar6 = uVar6 - uVar3;
      if (0xf < uVar6) {
        uVar1 = uVar6 - 4;
        uVar3 = (*puVar4 & 2) + uVar3;
        *puVar4 = uVar3;
        uVar3 = uVar3 & 0xfffffffc;
        piVar5 = (int *)((int)puVar4 + uVar3 + 4);
        *piVar5 = uVar6 - 3;
        puVar2 = (uint *)((int)puVar4 + uVar6 + 4 + uVar3);
        *puVar2 = *puVar2 | 2;
        if (uVar1 < DAT_0040a228) {
          local_8 = uVar1 * 2 + DAT_0040a23c + -0xc;
        }
        else if (local_8 == 0) {
          local_8 = *(int *)(PTR_DAT_0040a24c + 4);
        }
        *(undefined4 *)((int)puVar4 + uVar3 + 8) = *(undefined4 *)(local_8 + 4);
        *(int *)((int)puVar4 + uVar3 + 0xc) = local_8;
        *(int **)(*(int *)((int)puVar4 + uVar3 + 8) + 8) = piVar5;
        *(int **)(local_8 + 4) = piVar5;
        *(uint *)((int)piVar5 + uVar1) = uVar6;
      }
    }
  }
  return param_1;
}



uint * __cdecl FUN_00401fc8(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + 0x1003 & 0xfffff000;
  uVar3 = param_1[-1] & 0xfffffffc;
  puVar1 = param_1;
  if (uVar3 != uVar2 - 4) {
    if (uVar3 < uVar2 - 4) {
      puVar1 = FUN_00401c28(param_2);
      if (puVar1 != (uint *)0x0) {
        FUN_0040213c(puVar1,param_1,uVar3);
        FUN_00401ab8((int)param_1);
      }
    }
    else if (uVar2 - 4 < 0x100000) {
      puVar1 = FUN_00401c28(param_2);
      if (puVar1 != (uint *)0x0) {
        FUN_0040213c(puVar1,param_1,param_2);
        FUN_00401ab8((int)param_1);
      }
    }
    else {
      FUN_0040130c((LPVOID)((int)param_1 + (uVar2 - 4)),(uVar3 + 4) - uVar2);
      param_1[-1] = uVar2 - 4;
    }
  }
  return puVar1;
}



uint * __cdecl FUN_00402080(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_00401ab8((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_00401c28(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_00401ea0((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_00401c28(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_00402160(puVar1,param_1,param_2);
        FUN_00401ab8((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_00401fc8(param_1,param_2);
  }
  return puVar1;
}



uint __cdecl FUN_00402118(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}



void __stdcall FUN_00402134(void)

{
  return;
}



void __stdcall FUN_00402138(void)

{
  return;
}



undefined4 * __cdecl FUN_0040213c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)puVar2 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_1;
}



undefined4 * __cdecl FUN_00402160(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  if (param_1 < param_2) {
    puVar3 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)puVar3 = *(undefined *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (param_1 != param_2) {
    puVar2 = (undefined *)((int)param_2 + (param_3 - 1));
    puVar4 = (undefined *)((int)param_1 + (param_3 - 1));
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return param_1;
}



undefined4 * __cdecl FUN_004021ac(undefined4 *param_1,undefined param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = CONCAT11(param_2,param_2);
  if ((param_3 & 0xfffffffc) == 0) {
    if ((param_3 & 3) != 0) {
      *(undefined *)param_1 = param_2;
      bVar4 = (char)(param_3 & 3) - 1;
      if (bVar4 != 0) {
        *(undefined2 *)((int)param_1 + (bVar4 - 1)) = uVar3;
      }
    }
    return param_1;
  }
  *(undefined2 *)param_1 = uVar3;
  puVar1 = (undefined4 *)((int)param_1 + (param_3 - 4));
  *(undefined2 *)((int)param_1 + 2) = uVar3;
  uVar2 = *param_1;
  uVar5 = param_3 >> 3;
  puVar6 = param_1;
  if (uVar5 == 0) {
    *puVar1 = uVar2;
    return param_1;
  }
  do {
    *puVar6 = uVar2;
    puVar6[1] = uVar2;
    if (uVar5 == 1) break;
    puVar6[2] = uVar2;
    puVar6[3] = uVar2;
    if (uVar5 == 2) break;
    puVar6[4] = uVar2;
    puVar6[5] = uVar2;
    if (uVar5 == 3) break;
    puVar6[6] = uVar2;
    puVar6[7] = uVar2;
    if (uVar5 == 4) break;
    puVar6[8] = uVar2;
    puVar6[9] = uVar2;
    if (uVar5 == 5) break;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar2;
    puVar6 = puVar6 + 0xc;
    uVar5 = uVar5 - 6;
  } while (uVar5 != 0);
  *puVar1 = uVar2;
  puVar1[-1] = uVar2;
  return param_1;
}



undefined2 * __cdecl FUN_00402238(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



char * __cdecl FUN_00402250(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_00402258:
    do {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar1 + 0xfefefeff & 0x80808080;
      } while (uVar3 == 0);
      uVar3 = uVar3 & ~uVar1;
    } while (uVar3 == 0);
    if ((char)uVar3 == '\0') {
      if ((char)(uVar3 >> 8) == '\0') {
        if ((uVar3 & 0xff0000) == 0) goto LAB_004022a2;
        goto LAB_004022a1;
      }
    }
    else {
LAB_0040229f:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_004022a0:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = param_1 + 1;
    if (*(char *)param_1 == '\0') goto LAB_0040229f;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_004022a0;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_00402258;
    }
  }
LAB_004022a1:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_004022a2:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
}



char * __cdecl FUN_004022ac(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar3 = param_3 >> 2;
  while( true ) {
    if (uVar3 == 0) {
      *pcVar4 = '\0';
      return param_1;
    }
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[1];
    pcVar4[1] = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[2];
    pcVar4[2] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    pcVar4[3] = cVar1;
    pcVar4 = pcVar4 + 4;
    if (cVar1 == '\0') {
      return param_1;
    }
    uVar3 = uVar3 - 1;
  }
  return param_1;
}



int __cdecl FUN_0040231c(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  do {
    if ((((param_3 < 4) || (*param_2 != *param_1)) || (param_2[1] != param_1[1])) ||
       ((param_2[2] != param_1[2] || (param_2[3] != param_1[3])))) break;
    param_3 = param_3 + -4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  } while (3 < param_3);
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      if (bVar2 != bVar1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar3 = (uint)bVar1 - (uint)bVar2;
  }
  return iVar3;
}



undefined4 * __cdecl FUN_00402388(uint *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = FUN_00402250(param_1);
  puVar2 = (undefined4 *)FUN_004013e0(pcVar1 + 1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0040213c(puVar2,param_1,(uint)(pcVar1 + 1));
  }
  return puVar2;
}



int __cdecl FUN_004023bc(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



short * __cdecl FUN_004023d4(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_004023bc(param_2);
  uVar2 = 0;
  psVar3 = param_1;
  if (uVar1 != 0) {
    do {
      *psVar3 = *param_2;
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar1);
  }
  param_1[uVar1] = 0;
  return param_1;
}



void FUN_00402414(int param_1,undefined param_2,undefined param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar2 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar2[2] = param_1;
  puVar2[3] = &param_4;
  puVar2[1] = &LAB_0040245b;
  *(undefined2 *)(puVar2 + 4) = 0;
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  puVar2[7] = 0;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar2 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar2;
  return;
}



undefined4 __cdecl FUN_00402484(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_00406b6c(s_IS_STRUC_base__tpMask__0040a2cf,s_xxtype_cpp_0040a2e6,0x13b);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_00406b6c(s_IS_STRUC_derv__tpMask__0040a2f1,s_xxtype_cpp_0040a308,0x13c);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    FUN_00406b6c(s_derv__tpClass_tpcFlags___CF_HAS__0040a313,s_xxtype_cpp_0040a339,0x13e);
  }
  ppiVar4 = (int **)((uint)*(ushort *)(param_1 + 0x12) + param_1);
  do {
    piVar1 = *ppiVar4;
    if (piVar1 == (int *)0x0) {
      ppiVar4 = (int **)((uint)*(ushort *)(param_1 + 0x10) + param_1);
      while( true ) {
        piVar1 = *ppiVar4;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if ((param_4 == 0) || (((uint)ppiVar4[2] & 3) != 3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        iVar2 = FUN_00402970(param_2,piVar1);
        if ((iVar2 != 0) && (iVar3 != 0)) break;
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (iVar3 = FUN_00402484((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
          return 1;
        }
        ppiVar4 = ppiVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(ppiVar4 + 2) & 8) == 0) {
      if ((param_4 == 0) || (((uint)ppiVar4[2] & 3) != 3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      iVar2 = FUN_00402970(param_2,piVar1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        return 1;
      }
      if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
         (iVar3 = FUN_00402484((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
        return 1;
      }
    }
    ppiVar4 = ppiVar4 + 3;
  } while( true );
}



void __stdcall FUN_004025db(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined in_CL;
  undefined in_DL;
  undefined1 unaff_SI;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00402414((int)&DAT_0040a25c,in_DL,in_CL,unaff_SI);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_0040c4a8)[iVar3];
    if ((undefined4 *)(&DAT_0040c4a8)[iVar3] != (undefined4 *)0x0) {
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[3];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  *in_FS_OFFSET = local_28;
  return;
}



undefined4 * __cdecl
FUN_0040262e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6,
            uint *param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  if ((param_2 == (int *)0x0) || ((*(byte *)(param_2 + 1) & 1) == 0)) {
    FUN_00406b6c(s_topTypPtr____0____IS_STRUC_topTy_0040a37f,s_xxtype_cpp_0040a3ad,0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_00406b6c(s_tgtTypPtr____0____IS_STRUC_tgtTy_0040a3b8,s_xxtype_cpp_0040a3e6,0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_00406b6c(s_srcTypPtr____0____IS_STRUC_srcTy_0040a3f1,s_xxtype_cpp_0040a41f,0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_00402970(param_6,param_4);
    if (iVar3 != 0) {
      FUN_00406b6c(s___isSameTypeID_srcTypPtr__tgtTyp_0040a42a,s_xxtype_cpp_0040a454,0x355);
    }
    iVar3 = FUN_00402970(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_00402970(param_2,param_4), iVar3 != 0)) {
    FUN_00406b6c(s_tgtTypPtr____0______isSameTypeID_0040a45f,s_xxtype_cpp_0040a49b,0x35b);
  }
  if ((*(byte *)(param_2 + 3) & 4) == 0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  ppiVar5 = (int **)((uint)*(ushort *)((int)param_2 + 0x12) + (int)param_2);
  do {
    while (piVar1 = *ppiVar5, piVar1 == (int *)0x0) {
      if (bVar2) {
        *param_7 = local_c;
        if (local_14 == 1) {
          return local_10;
        }
        return (undefined4 *)0x0;
      }
      bVar2 = true;
      ppiVar5 = (int **)((uint)*(ushort *)(param_2 + 4) + (int)param_2);
    }
    if ((*(byte *)(ppiVar5 + 2) & 8) == 0) {
      if ((param_8 == 0) || (((uint)ppiVar5[2] & 3) != 3)) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
      puVar6 = (undefined4 *)(param_1 + (int)ppiVar5[1]);
      if ((*(byte *)(ppiVar5 + 2) & 4) != 0) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar3 = FUN_00402970(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_0040262e((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_00402839;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_00406b6c(s_srcTypPtr_0040a4a6,s_xxtype_cpp_0040a4b0,0x3d0);
          }
          puVar4 = FUN_0040262e((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_00402858;
        }
LAB_00402839:
        if ((local_14 == 0) || (puVar6 != local_10)) {
          local_14 = local_14 + 1;
          local_c = local_18;
          local_10 = puVar6;
        }
        else {
          local_c = local_c | local_18;
        }
      }
      else if (puVar6 == param_3) {
        return puVar6;
      }
    }
LAB_00402858:
    ppiVar5 = ppiVar5 + 3;
  } while( true );
}



undefined4 __cdecl FUN_00402895(int **param_1,int param_2,int *param_3,int **param_4)

{
  int *piVar1;
  int iVar2;
  int **local_8;
  
  if (*param_4 == (int *)0x0) {
    FUN_00406b6c(&DAT_0040a4ed,s_xxtype_cpp_0040a4f2,0x515);
  }
  while( true ) {
    piVar1 = *param_1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_8 = (int **)((int)*param_4 + (int)param_1[1]);
    if (param_2 != 0) {
      local_8 = (int **)*local_8;
    }
    iVar2 = FUN_00402970(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((int **)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (int **)0x0)) &&
       (iVar2 = FUN_00402895((int **)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
                             (int **)&local_8), iVar2 != 0)) {
      *param_4 = (int *)local_8;
      return 1;
    }
    param_1 = param_1 + 3;
  }
  *param_4 = (int *)local_8;
  return 1;
}



char * __cdecl FUN_00402938(int param_1)

{
  if (param_1 == 0) {
    return s__notype__0040a264;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_00406b6c(s_id__tpName_0040a26d,s_xxtype_cpp_0040a278,0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}



undefined4 __cdecl FUN_00402970(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_00406b6c(&DAT_0040a283,s_xxtype_cpp_0040a287,0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_00406b6c(&DAT_0040a292,s_xxtype_cpp_0040a296,0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if ((*(short *)(param_1 + 1) == *(short *)(param_2 + 1)) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_00406b6c(s_tp1__tpName_0040a2a1,s_xxtype_cpp_0040a2ad,0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_00406b6c(s_tp2__tpName_0040a2b8,s_xxtype_cpp_0040a2c4,0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 __cdecl FUN_00402a4c(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    while( true ) {
      if (param_2 == param_1) {
        return 1;
      }
      uVar1 = *(ushort *)(param_1 + 1);
      uVar2 = *(ushort *)(param_2 + 1);
      if ((uVar2 & uVar1 & 0x10) == 0) break;
      uVar6 = uVar1 & 0x300;
      uVar3 = uVar2 & 0x300;
      if (uVar6 != uVar3) {
        if ((param_3 != 0) || (uVar6 == uVar3)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar3 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      param_3 = 1;
      param_1 = (int *)param_1[2];
      param_2 = (int *)param_2[2];
    }
    if ((uVar2 & uVar1 & 0x400) == 0) break;
    if ((param_1[3] != param_2[3]) && ((param_3 != 0 || ((param_1[3] | param_2[3]) != 0)))) {
      return 0;
    }
    param_3 = 1;
    param_1 = (int *)param_1[2];
    param_2 = (int *)param_2[2];
  }
  iVar4 = FUN_00402970(param_1,param_2);
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar1 & 2) != 0) && ((uVar2 & 1) != 0)) && ((*(byte *)(param_1 + 3) & 4) != 0)) {
    uVar5 = FUN_00402484((int)param_1,param_2,param_4,1);
    return uVar5;
  }
  return 0;
}



int * __cdecl FUN_00402b5c(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != (int *)0x0) &&
      (iVar2 = FUN_00402895((int **)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,&param_1
                           ), iVar2 == 0)) &&
     (iVar3 = FUN_00402895((int **)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1),
     iVar3 == 0)) {
    FUN_00406b6c(s___Can_t_adjust_class_address__no_0040a534,s_xxtype_cpp_0040a56e,0x57e);
    param_1 = (int *)0x0;
  }
  return param_1;
}



void __stdcall FUN_00402bd8(void)

{
  if (DAT_0040a57c == (code *)0x0) {
    DAT_0040a57c = FUN_00402c00;
  }
  if (DAT_0040a580 == (undefined *)0x0) {
    DAT_0040a580 = &LAB_00402c50;
  }
  return;
}



void __stdcall FUN_00402c00(void)

{
  undefined in_CL;
  undefined in_DL;
  undefined1 unaff_DI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00402414((int)&DAT_0040a5a4,in_DL,in_CL,unaff_DI);
  if (DAT_0040a57c != FUN_00402c00) {
    (*DAT_0040a57c)();
  }
  FUN_00406ec0();
  *in_FS_OFFSET = local_28;
  return;
}



void __stdcall FUN_00402ca4(void)

{
  int iVar1;
  undefined in_CL;
  undefined in_DL;
  undefined1 unaff_DI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00402414((int)&DAT_0040a688,in_DL,in_CL,unaff_DI);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0040c8b4 == 2) {
    FUN_00408021(4,1);
  }
  FUN_004031a8();
  (*DAT_0040a57c)();
  FUN_00406ec0();
  *in_FS_OFFSET = local_28;
  return;
}



void __stdcall FUN_00402d18(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0040c8b4 == 2) {
    FUN_00408021(5,1);
  }
  (*DAT_0040a580)();
  FUN_00406ec0();
  return;
}



void __cdecl FUN_00402d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00402d9c(&local_c);
    param_1 = local_8;
  }
  uVar2 = 0x9c;
  puVar1 = (undefined4 *)FUN_00401140();
  FUN_0040213c(puVar1,param_1,uVar2);
  FUN_00402bd8();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00402d9c(undefined4 *param_1)

{
  _DAT_0040a5cc = FUN_00401140();
  _DAT_0040a5cc = _DAT_0040a5cc + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_0040a5b8;
  return;
}



undefined4 __stdcall FUN_00402dc4(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LONG __cdecl FUN_00402dd0(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_00402f9a(param_2,param_1);
      FUN_00402ca4();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (_DAT_0040a69c != 0)) {
      FUN_00406e08((uint *)s_Stack_Overflow__0040a6a0);
    }
    if ((DAT_0040c8bc != (code *)0x0) && (iVar2 = (*DAT_0040c8bc)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0040c8b8 != (code *)0x0) && (iVar2 = (*DAT_0040c8b8)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_0040cce4 != (int *)0x0) && ((*DAT_0040cce4 == 1 || (*DAT_0040cce4 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_00408021(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}



void __cdecl FUN_00402ec0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = FUN_00402dd0;
  FUN_00402f4c(param_1);
  return;
}



void __cdecl FUN_00402edc(undefined4 *param_1)

{
  FUN_00402f61(param_1);
  return;
}



undefined4 __cdecl FUN_00402eec(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0040c8bc;
  DAT_0040c8bc = param_1;
  return uVar1;
}



void __stdcall FUN_00402f38(void)

{
  if (DAT_0040ccc0 != (undefined4 *)0x0) {
    FUN_00402ec0(DAT_0040ccc0);
  }
  return;
}



void __cdecl FUN_00402f4c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *param_1 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = param_1;
  return;
}



void __cdecl FUN_00402f61(undefined4 *param_1)

{
  undefined4 *puVar1;
  int **ppiVar2;
  undefined2 in_FS;
  
  ppiVar2 = (int **)segment(in_FS,0);
  ppiVar2 = (int **)*ppiVar2;
  if ((int **)param_1 == ppiVar2) {
    puVar1 = (undefined4 *)segment(in_FS,0);
    *puVar1 = *param_1;
  }
  else {
    for (; ppiVar2 != (int **)0xffffffff; ppiVar2 = (int **)*ppiVar2) {
      if (*ppiVar2 == param_1) {
        *ppiVar2 = (int *)*param_1;
        return;
      }
    }
  }
  return;
}



void FUN_00402f9a(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x402fab,param_2,(PVOID)0x0);
  return;
}



void __stdcall FUN_00402faf(void)

{
  code **unaff_EBX;
  
  (**unaff_EBX)();
  return;
}



bool __cdecl FUN_00402fb8(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_0040ab68 <= param_1) {
    return false;
  }
  DVar1 = GetFileType((HANDLE)(&DAT_0040c988)[param_1]);
  return DVar1 == 2;
}



bool __cdecl FUN_00402fe8(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}



DWORD __cdecl FUN_00403000(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_0040ab68) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_0040375c(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_0040ab6c)[param_1] = (&DAT_0040ab6c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer((HANDLE)(&DAT_0040c988)[param_1],param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_004037c0();
    }
  }
  else {
    DVar1 = FUN_0040375c(6);
  }
  return DVar1;
}



int __cdecl FUN_00403078(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_0040ab68) {
    if (param_3 + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_0040ab6c + param_1 * 4 + 1) & 8) != 0) {
        FUN_00403000(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_0040ab6c + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_004031e0(param_1,param_2,param_3);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = local_20c;
          while (((int)pcVar3 - (int)local_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              local_8 = local_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004031e0(param_1,local_20c,(int)pcVar3 - (int)local_20c);
          if (iVar2 != (int)pcVar3 - (int)local_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (local_c - local_8) + iVar2;
          }
          local_c = local_c + iVar2;
        }
        local_c = local_c - local_8;
      }
    }
  }
  else {
    local_c = FUN_0040375c(-6);
  }
  return local_c;
}



undefined4 __cdecl FUN_00403194(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    *param_1 = 0;
  }
  return 0;
}



int __stdcall FUN_004031a8(void)

{
  int **ppiVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  ppiVar1 = (int **)&DAT_0040a6b8;
  iVar2 = DAT_0040ab68;
  while (iVar2 != 0) {
    if (((*(byte *)((int)ppiVar1 + 0x12) & 3) != 0) && (ppiVar1[2] != (int *)0x0)) {
      FUN_004032c4(ppiVar1);
      iVar3 = iVar3 + 1;
    }
    ppiVar1 = ppiVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}



undefined4 __cdecl FUN_004031e0(uint param_1,LPCVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_0040ab68 <= param_1) {
    uVar1 = FUN_0040375c(6);
    return uVar1;
  }
  BVar2 = WriteFile((HANDLE)(&DAT_0040c988)[param_1],param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_004037c0();
    return uVar1;
  }
  return local_8;
}



void __cdecl FUN_00403228(uint param_1,char *param_2,uint param_3)

{
  FUN_00403078(param_1,param_2,param_3);
  return;
}



undefined4 __cdecl FUN_00403244(int *param_1,int param_2,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    FUN_004013f0(param_1[1]);
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_0040ba5c = &LAB_0040440c;
    if (param_2 == 0) {
      param_2 = FUN_004013e0(param_4);
      if (param_2 == 0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_004032c4(int **param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int **)0x0) {
    FUN_00403344();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if ((int)param_1[2] < 0) {
      uVar3 = (int)param_1[3] + (int)param_1[2] + 1;
      param_1[2] = (int *)((int)param_1[2] - uVar3);
      *param_1 = param_1[1];
      uVar2 = FUN_00403078((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],uVar3);
      if ((uVar3 == uVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)param_1 + 0x12) & 8) != 0) || (param_1 + 5 == (int **)*param_1)) &&
         (param_1[2] = (int *)0x0, param_1 + 5 == (int **)*param_1)) {
        *param_1 = param_1[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



int __stdcall FUN_00403344(void)

{
  char *pcVar1;
  char **ppcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar3 = 0;
  ppcVar2 = (char **)&DAT_0040a6b8;
  iVar5 = DAT_0040ab68;
  while (iVar5 != 0) {
    if ((int)ppcVar2[2] < 0) {
      pcVar4 = ppcVar2[3] + (int)ppcVar2[2] + 1;
      ppcVar2[2] = ppcVar2[2] + -(int)pcVar4;
      *ppcVar2 = ppcVar2[1];
      pcVar1 = (char *)FUN_00403078((int)*(char *)((int)ppcVar2 + 0x16),ppcVar2[1],(uint)pcVar4);
      if ((pcVar4 != pcVar1) && ((*(byte *)((int)ppcVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)ppcVar2 + 0x12) = *(ushort *)((int)ppcVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    ppcVar2 = ppcVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}



void __cdecl FUN_004033a0(undefined *param_1)

{
  PTR_DAT_0040ac38 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004033b0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_0040a6b4 = *param_1;
  }
  return;
}



int * __cdecl FUN_004033c4(undefined4 *param_1,int *param_2,int **param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *local_8;
  
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    piVar3 = param_3[3];
    if ((piVar3 == (int *)0x0) || (piVar3 < param_2)) {
      if ((param_3[3] == (int *)0x0) ||
         ((param_3[2] == (int *)0x0 || (iVar2 = FUN_004032c4(param_3), iVar2 == 0)))) {
        piVar3 = (int *)FUN_00403078((int)*(char *)((int)param_3 + 0x16),(char *)param_1,
                                     (uint)param_2);
        if ((piVar3 == (int *)0xffffffff) || (piVar3 < param_2)) {
          param_2 = (int *)0x0;
        }
      }
      else {
        param_2 = (int *)0x0;
      }
    }
    else {
      if (-1 < (int)param_3[2] + (int)param_2) {
        if (param_3[2] == (int *)0x0) {
          param_3[2] = (int *)(-1 - (int)piVar3);
        }
        else {
          iVar2 = FUN_004032c4(param_3);
          if (iVar2 != 0) {
            return (int *)0x0;
          }
        }
      }
      FUN_0040213c(*param_3,param_1,(uint)param_2);
      param_3[2] = (int *)((int)param_3[2] + (int)param_2);
      *param_3 = (int *)((int)*param_3 + (int)param_2);
    }
  }
  else {
    local_8 = param_2;
    if (param_2 != (int *)0x0) {
      do {
        uVar1 = FUN_004037d4(*(byte *)param_1,param_3);
        if (uVar1 == 0xffffffff) {
          return (int *)0x0;
        }
        local_8 = (int *)((int)local_8 + -1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      } while (local_8 != (int *)0x0);
    }
  }
  return param_2;
}



int __cdecl FUN_004034a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_0040ab6c; (iVar1 < DAT_0040ab68 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_0040ab68) {
    return -1;
  }
  (&DAT_0040ab6c)[iVar1] = param_2;
  (&DAT_0040c988)[iVar1] = param_1;
  return iVar1;
}



uint __cdecl FUN_004034e0(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_0040ab6c; ((int)param_2 < (int)DAT_0040ab68 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_0040ab68) && (param_2 < DAT_0040ab68)) {
    if (((&DAT_0040ab6c)[param_1] != 0) && ((&DAT_0040ab6c)[param_2] == 0)) {
      (&DAT_0040ab6c)[param_2] = (&DAT_0040ab6c)[param_1];
      (&DAT_0040c988)[param_2] = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}



void __cdecl FUN_00403548(uint param_1)

{
  if (param_1 < DAT_0040ab68) {
    (&DAT_0040ab6c)[param_1] = 0;
  }
  return;
}



int __cdecl FUN_00403564(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint *local_c;
  int local_8;
  
  piVar4 = &DAT_0040ab68 + DAT_0040ab68;
  iVar2 = DAT_0040ab68;
  if (DAT_0040ab68 != 0) {
    do {
      if (*piVar4 != 0) break;
      iVar2 = iVar2 + -1;
      piVar4 = piVar4 + -1;
    } while (iVar2 != 0);
  }
  if (param_1 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *param_1 = iVar2;
    local_8 = 0;
    piVar4 = param_1 + 1;
    local_c = &DAT_0040ab6c;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *(byte *)piVar4 = bVar3;
        piVar4 = (int *)((int)piVar4 + 1);
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    FUN_0040213c(piVar4,&DAT_0040c988,iVar2 << 2);
    iVar2 = 0;
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall FUN_00403600(void)

{
  byte bVar1;
  bool bVar2;
  UINT UVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  _STARTUPINFOA local_50;
  
  UVar3 = SetHandleCount(DAT_0040ab68);
  if (UVar3 < DAT_0040ab68) {
    DAT_0040ab68 = UVar3;
  }
  PTR_FUN_0040a6b0 = FUN_00403564;
  bVar2 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    local_50.lpReserved2 = (LPBYTE)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar2 = true;
      iVar6 = 0;
      puVar8 = &DAT_0040ab6c;
      if (0 < (int)uVar7) {
        do {
          bVar1 = *local_50.lpReserved2;
          local_50.lpReserved2 = (LPBYTE)((int)local_50.lpReserved2 + 1);
          uVar4 = 0;
          if ((bVar1 & 0x20) != 0) {
            uVar4 = 0x800;
          }
          if ((bVar1 & 0x40) != 0) {
            uVar4 = uVar4 | 0x2000;
          }
          if ((bVar1 & 0x80) == 0) {
            uVar4 = uVar4 | 0x8000;
          }
          else {
            uVar4 = uVar4 | 0x4000;
          }
          iVar6 = iVar6 + 1;
          *puVar8 = *puVar8 & 3 | uVar4;
          puVar8 = puVar8 + 1;
        } while (iVar6 < (int)uVar7);
      }
      puVar5 = &DAT_0040ab6c + uVar7;
      for (uVar4 = uVar7; uVar4 < DAT_0040ab68; uVar4 = uVar4 + 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_00402160(&DAT_0040c988,(undefined4 *)local_50.lpReserved2,uVar7 << 2);
    }
  }
  if (!bVar2) {
    DAT_0040c988 = GetStdHandle(0xfffffff6);
    _DAT_0040c98c = GetStdHandle(0xfffffff5);
    _DAT_0040c990 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_0040ab6c;
    do {
      bVar2 = FUN_00402fb8(uVar7);
      if ((CONCAT31(extraout_var,bVar2) == 0) && (_DAT_0040bbf4 == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (_DAT_0040bbf4 != 0) {
          *puVar8 = *puVar8 | 0x10000;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)uVar7 < 3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_0040375c(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < _DAT_0040ae2c) {
      _DAT_0040b9fc = -param_1;
      _DAT_0040ca50 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00403772;
  param_1 = 1;
LAB_00403772:
  _DAT_0040b9fc = (int)(char)(&DAT_0040ac3c)[param_1];
  _DAT_0040ca50 = param_1;
  return 0xffffffff;
}



void __stdcall FUN_004037c0(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  FUN_0040375c(DVar1 & 0xffff);
  return;
}



// WARNING: Could not reconcile some variable overlaps

uint __cdecl FUN_004037d4(byte param_1,int **param_2)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  undefined4 uStack8;
  
  uStack8._0_3_ = CONCAT12(param_1,(short)in_ECX);
  uStack8 = in_ECX & 0xff000000 | (uint)(uint3)uStack8;
  if ((int)param_2[2] < -1) {
    FUN_0040213c(*param_2,(undefined4 *)((int)&uStack8 + 2),1);
    param_2[2] = (int *)((int)param_2[2] + 1);
    *param_2 = (int *)((int)*param_2 + 1);
    if ((((*(byte *)((int)param_2 + 0x12) & 8) != 0) && ((param_1 == 10 || (param_1 == 0xd)))) &&
       (iVar1 = FUN_004032c4(param_2), iVar1 != 0)) {
      return 0xffffffff;
    }
    uVar2 = (uint)param_1;
  }
  else if (((*(ushort *)((int)param_2 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)param_2 + 0x12) & 2) != 0)) {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x100;
    if (param_2[3] == (int *)0x0) {
      iVar1 = FUN_00403078((int)*(char *)((int)param_2 + 0x16),(char *)((int)&uStack8 + 2),1);
      if ((iVar1 == 1) || ((*(byte *)((int)param_2 + 0x13) & 2) != 0)) {
        uVar2 = (uint)param_1;
      }
      else {
        *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
        uVar2 = 0xffffffff;
      }
    }
    else {
      if ((param_2[2] != (int *)0x0) && (iVar1 = FUN_004032c4(param_2), iVar1 != 0)) {
        return 0xffffffff;
      }
      param_2[2] = (int *)-(int)param_2[3];
      FUN_0040213c(*param_2,(undefined4 *)((int)&uStack8 + 2),1);
      param_2[2] = param_2[2];
      *param_2 = (int *)((int)*param_2 + 1);
      if (((*(byte *)((int)param_2 + 0x12) & 8) != 0) &&
         (((param_1 == 10 || (param_1 == 0xd)) && (iVar1 = FUN_004032c4(param_2), iVar1 != 0)))) {
        return 0xffffffff;
      }
      uVar2 = (uint)param_1;
    }
  }
  else {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



void __cdecl FUN_004038e4(byte *param_1)

{
  FUN_00403ad0(FUN_004033c4,&DAT_0040a6d0,param_1,0,0,(uint **)&stack0x00000008);
  return;
}



void __cdecl FUN_00403a20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = (**(code **)(param_1 + 0x54))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



void __cdecl FUN_00403a68(undefined param_1,int param_2)

{
  uint uVar1;
  
  if (0x4f < *(int *)(param_2 + 0x50)) {
    FUN_00403a20(param_2);
  }
  if ((*(uint **)(param_2 + 100) == (uint *)0x0) ||
     (uVar1 = **(uint **)(param_2 + 100),
     *(uint *)(param_2 + 0x5c) <= uVar1 && uVar1 != *(uint *)(param_2 + 0x5c))) {
    *(undefined *)(param_2 + *(int *)(param_2 + 0x50)) = param_1;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  return;
}



void __cdecl FUN_00403a9c(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 7;
  pcVar1 = (char *)(param_2 + 7);
  do {
    cVar3 = (char)(param_1 & 0xf);
    if ((param_1 & 0xf) < 10) {
      *pcVar1 = cVar3 + '0';
    }
    else {
      *pcVar1 = cVar3 + '7';
    }
    param_1 = param_1 >> 4;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  return;
}



// WARNING: Could not reconcile some variable overlaps

uint __cdecl
FUN_00403ad0(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5,
            uint **param_6)

{
  undefined uVar1;
  ushort uVar2;
  uint **ppuVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  bool bVar19;
  undefined local_524 [80];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  uint local_4c8;
  int local_4c4;
  undefined4 *local_4c0;
  uint local_4bc [256];
  undefined local_bc [2];
  undefined2 local_ba;
  undefined local_b4;
  CHAR local_5a [2];
  char *local_58;
  int local_54;
  char *local_50;
  uint *local_48;
  char *local_44;
  char *local_40;
  uint local_3c;
  ushort local_36;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  char local_21;
  int local_20;
  char *local_1c;
  byte *local_18;
  int local_14;
  byte local_d;
  uint *local_c;
  uint *local_8;
  
  local_4c4 = 0;
  local_4c8 = 0;
  local_4d4 = 0;
  local_4d0 = param_1;
  local_4cc = param_2;
  if (param_4 == 0) {
    local_4c0 = (undefined4 *)0x0;
  }
  else {
    local_4c0 = &param_5;
  }
LAB_00403b18:
  pbVar16 = param_3;
  bVar14 = *pbVar16;
  param_3 = pbVar16 + 1;
  if (bVar14 != 0) {
    if (bVar14 == 0x25) {
      bVar14 = *param_3;
      if (bVar14 != 0x25) {
        uVar8 = 0;
        local_14 = 0;
        local_d = 0;
        local_c = (uint *)0xffffffff;
        local_8 = (uint *)0xffffffff;
        uVar18 = 0;
        bVar7 = false;
        bVar5 = false;
        bVar19 = false;
        bVar6 = false;
        local_20 = 0;
switchD_00403bb9_caseD_1b:
        pbVar17 = param_3;
        bVar4 = false;
        bVar14 = *pbVar17;
        param_3 = pbVar17 + 1;
        local_18 = pbVar16;
        if (((char)bVar14 < ' ') || ('\x7f' < (char)bVar14)) goto switchD_00403bb9_caseD_15;
        switch((&DAT_0040b1fa)[(byte)(bVar14 - 0x20)]) {
        case 0:
          local_18 = pbVar16;
          if (uVar8 != 0) goto switchD_00403bb9_caseD_15;
          if (local_d != 0x2b) {
            local_d = bVar14;
          }
          goto switchD_00403bb9_caseD_1b;
        case 1:
          local_18 = pbVar16;
          if (uVar8 != 0) goto switchD_00403bb9_caseD_15;
          bVar5 = true;
          goto switchD_00403bb9_caseD_1b;
        case 2:
          ppuVar3 = param_6 + 1;
          local_34 = *param_6;
          param_6 = ppuVar3;
          if (uVar8 < 2) {
            local_8 = local_34;
            if ((int)local_34 < 0) {
              local_8 = (uint *)-(int)local_34;
              bVar6 = true;
            }
            uVar8 = 3;
          }
          else {
            local_18 = pbVar16;
            if (uVar8 != 4) goto switchD_00403bb9_caseD_15;
            uVar8 = 5;
            local_c = local_34;
          }
          goto switchD_00403bb9_caseD_1b;
        case 3:
          local_18 = pbVar16;
          if (uVar8 != 0) goto switchD_00403bb9_caseD_15;
          bVar6 = true;
          goto switchD_00403bb9_caseD_1b;
        case 4:
          local_18 = pbVar16;
          if (3 < uVar8) goto switchD_00403bb9_caseD_15;
          uVar8 = 4;
          local_c = (uint *)((int)local_c + 1);
          goto switchD_00403bb9_caseD_1b;
        case 5:
          goto switchD_00403bb9_caseD_5;
        case 6:
          uVar18 = uVar18 | 0x10;
          uVar8 = 5;
          goto switchD_00403bb9_caseD_1b;
        case 7:
          uVar8 = 5;
          uVar18 = uVar18 & 0xffffffef;
          bVar7 = true;
          goto switchD_00403bb9_caseD_1b;
        case 8:
          uVar8 = 5;
          uVar18 = 0x200;
          goto switchD_00403bb9_caseD_1b;
        case 9:
          if (uVar8 == 0) {
            if (!bVar6) {
              bVar19 = true;
              uVar8 = 1;
            }
          }
          else {
switchD_00403bb9_caseD_5:
            cVar15 = bVar14 - 0x30;
            if (uVar8 < 3) {
              uVar8 = 2;
              if (local_8 == (uint *)0xffffffff) {
                local_8 = (uint *)(int)cVar15;
              }
              else {
                local_8 = (uint *)((int)local_8 * 10 + (int)cVar15);
              }
            }
            else {
              local_18 = pbVar16;
              if (uVar8 != 4) goto switchD_00403bb9_caseD_15;
              local_c = (uint *)((int)local_c * 10 + (int)cVar15);
            }
          }
          goto switchD_00403bb9_caseD_1b;
        case 10:
          goto switchD_00403bb9_caseD_a;
        case 0xb:
          local_3c = 8;
          break;
        case 0xc:
          local_3c = 10;
          break;
        case 0xd:
          local_3c = 0x10;
          local_21 = bVar14 - 0x17;
          break;
        case 0xe:
          local_1c = (char *)*param_6;
          param_6 = param_6 + 1;
          FUN_00403a9c((uint)local_1c,(int)local_bc);
          local_b4 = 0;
          local_1c = local_bc;
          goto LAB_00404148;
        case 0xf:
          local_1c = local_bc + 1;
          thunk_FUN_00404fe0();
          param_6 = (uint **)thunk_FUN_00404fe0();
          goto LAB_00404148;
        case 0x10:
          goto switchD_00403bb9_caseD_10;
        case 0x11:
          goto switchD_00403bb9_caseD_11;
        case 0x12:
          if (uVar18 == 0) {
            uVar18 = 0x10;
          }
switchD_00403bb9_caseD_10:
          if ((uVar18 & 0x10) == 0) {
            local_1c = local_bc;
            local_bc = (ushort)*(byte *)param_6;
            local_20 = 0;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          else {
            local_1c = local_bc;
            local_bc = *(ushort *)param_6;
            local_ba = 0;
            local_20 = 1;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          goto LAB_004041b6;
        case 0x13:
          if (uVar18 == 0) {
            uVar18 = 0x10;
          }
switchD_00403bb9_caseD_11:
          if ((uVar18 & 0x10) == 0) {
            local_1c = (char *)*param_6;
            local_20 = 0;
            if ((uint *)local_1c == (uint *)0x0) {
              local_1c = s__null__0040b1e4;
            }
          }
          else {
            local_1c = (char *)*param_6;
            local_20 = 1;
            if ((uint *)local_1c == (uint *)0x0) {
              local_1c = (char *)&DAT_0040b1ec;
            }
          }
          param_6 = param_6 + 1;
          if (local_20 == 0) {
            puVar9 = local_c;
            if ((int)local_c < 0) {
              puVar9 = (uint *)0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar12 = (uint *)local_1c; (puVar9 != (uint *)0x0 && (*(char *)puVar12 != '\0'));
                puVar12 = (uint *)((int)puVar12 + 1)) {
              puVar9 = (uint *)((int)puVar9 - 1);
              local_44 = local_44 + 1;
            }
          }
          else {
            puVar9 = local_c;
            if ((int)local_c < 0) {
              puVar9 = (uint *)0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar12 = (uint *)local_1c; (puVar9 != (uint *)0x0 && (*(ushort *)puVar12 != 0));
                puVar12 = (uint *)((int)puVar12 + 2)) {
              puVar9 = (uint *)((int)puVar9 - 1);
              local_44 = local_44 + 1;
            }
          }
          goto LAB_004041b6;
        case 0x14:
          ppuVar3 = param_6 + 1;
          local_1c = (char *)*param_6;
          param_6 = ppuVar3;
          if ((uVar18 & 0x10) == 0) {
            if ((uVar18 & 0x200) == 0) {
              *(uint *)local_1c = local_4c8;
            }
            else {
              *(ushort *)local_1c = (ushort)local_4c8;
            }
          }
          else {
            *(uint *)local_1c = local_4c8;
          }
          goto LAB_00403b18;
        case 0x15:
        case 0x16:
        case 0x17:
          goto switchD_00403bb9_caseD_15;
        case 0x18:
          uVar8 = 5;
          goto switchD_00403bb9_caseD_1b;
        case 0x19:
          uVar8 = 5;
          goto switchD_00403bb9_caseD_1b;
        case 0x1a:
          if ((*param_3 == 0x36) && (pbVar17[2] == 0x34)) {
            uVar18 = 0;
            bVar7 = true;
            uVar8 = 5;
            param_3 = pbVar17 + 3;
          }
          else if ((*param_3 == 0x33) && (pbVar17[2] == 0x32)) {
            uVar18 = 0x10;
            bVar7 = false;
            uVar8 = 5;
            param_3 = pbVar17 + 3;
          }
          else if ((*param_3 == 0x31) && (pbVar17[2] == 0x36)) {
            uVar18 = 0x200;
            bVar7 = false;
            uVar8 = 5;
            param_3 = pbVar17 + 3;
          }
          else if (*param_3 == 0x38) {
            uVar18 = 0;
            bVar7 = false;
            uVar8 = 5;
            param_3 = pbVar17 + 2;
          }
        default:
          goto switchD_00403bb9_caseD_1b;
        }
        local_d = 0;
        cVar15 = '\0';
        goto LAB_00403e34;
      }
      param_3 = pbVar16 + 2;
    }
    if ((((&DAT_0040ca55)[bVar14] & 4) != 0) && (*param_3 != 0)) {
      FUN_00403a68(bVar14,(int)local_524);
      bVar14 = *param_3;
      param_3 = param_3 + 1;
    }
    FUN_00403a68(bVar14,(int)local_524);
    goto LAB_00403b18;
  }
  goto LAB_004043e4;
switchD_00403bb9_caseD_a:
  local_3c = 10;
  cVar15 = '\x01';
LAB_00403e34:
  if (bVar7) {
    local_2c = *param_6;
    local_28 = param_6[1];
    param_6 = param_6 + 2;
  }
  else if ((uVar18 & 0x10) == 0) {
    if ((uVar18 & 0x200) == 0) {
      local_34 = *param_6;
      local_2c = local_34;
      if (cVar15 == '\0') {
        local_28 = (uint *)0x0;
        param_6 = param_6 + 1;
      }
      else {
        local_28 = (uint *)((int)local_34 >> 0x1f);
        param_6 = param_6 + 1;
      }
    }
    else {
      local_36 = *(ushort *)param_6;
      if (cVar15 == '\0') {
        local_2c = (uint *)(uint)local_36;
        local_28 = (uint *)0x0;
        param_6 = param_6 + 1;
      }
      else {
        local_2c = (uint *)(int)(short)local_36;
        local_28 = (uint *)((int)local_2c >> 0x1f);
        param_6 = param_6 + 1;
      }
    }
  }
  else {
    local_30 = *param_6;
    local_2c = local_30;
    if (cVar15 == '\0') {
      local_28 = (uint *)0x0;
      param_6 = param_6 + 1;
    }
    else {
      local_28 = (uint *)((int)local_30 >> 0x1f);
      param_6 = param_6 + 1;
    }
  }
  local_1c = local_bc + 1;
  if (((local_28 == (uint *)0x0) && (local_2c == (uint *)0x0)) && (local_c == (uint *)0x0)) {
                    // WARNING: Ignoring partial resolution of indirect
    local_bc[1] = 0;
  }
  else {
    FUN_00405090((int)local_2c,(uint)local_28,local_1c,local_3c,cVar15,local_21);
  }
  if ((int)local_c < 0) {
LAB_00404148:
    if ((bVar19) && (0 < (int)local_8)) {
      local_44 = FUN_00402250((uint *)local_1c);
      if (*local_1c == 0x2d) {
        local_44 = local_44 + -1;
      }
      if ((int)local_44 < (int)local_8) {
        local_14 = (int)local_8 - (int)local_44;
      }
    }
    if ((*local_1c == 0x2d) || (local_d != 0)) {
      if (*local_1c != 0x2d) {
        local_1c = (char *)((int)local_1c + -1);
        *local_1c = local_d;
      }
      if (0 < local_14) {
        local_14 = local_14 + -1;
      }
    }
    local_44 = FUN_00402250((uint *)local_1c);
  }
  else {
    local_40 = FUN_00402250((uint *)local_1c);
    local_44 = local_40;
    if (*local_1c == '-') {
      local_40 = local_40 + -1;
    }
    else if (local_d != 0) {
      local_44 = local_40 + 1;
      local_1c = (char *)((int)local_1c + -1);
      *local_1c = local_d;
    }
    if ((int)local_40 < (int)local_c) {
      local_14 = (int)local_c - (int)local_40;
    }
  }
LAB_004041b6:
  if (bVar5) {
    if (bVar14 == 0x6f) {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((bVar14 == 0x78) || (bVar14 == 0x58)) {
      bVar4 = true;
      local_8 = (uint *)((int)local_8 - 2);
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_44 = local_44 + local_14;
  if ((!bVar6) && ((int)local_44 < (int)local_8)) {
    do {
      FUN_00403a68(0x20,(int)local_524);
      local_8 = (uint *)((int)local_8 - 1);
    } while ((int)local_44 < (int)local_8);
  }
  if (bVar4) {
    FUN_00403a68(0x30,(int)local_524);
    FUN_00403a68(bVar14,(int)local_524);
  }
  if (0 < local_14) {
    local_44 = local_44 + -local_14;
    local_8 = (uint *)((int)local_8 - local_14);
    if (((*local_1c == '-') || (*local_1c == ' ')) || (*local_1c == '+')) {
      uVar1 = *local_1c;
      local_1c = (char *)((int)local_1c + 1);
      FUN_00403a68(uVar1,(int)local_524);
      local_44 = local_44 + -1;
      local_8 = (uint *)((int)local_8 - 1);
    }
    while (iVar11 = local_14 + -1, bVar19 = local_14 != 0, local_14 = iVar11, bVar19) {
      FUN_00403a68(0x30,(int)local_524);
    }
  }
  if (local_20 != 0) {
    local_48 = (uint *)local_1c;
    local_50 = (char *)0x0;
    local_58 = local_44;
    while (pcVar10 = local_58 + -1, bVar19 = 0 < (int)local_58, local_58 = pcVar10, bVar19) {
      uVar2 = *(ushort *)local_48;
      local_48 = (uint *)((int)local_48 + 2);
      local_54 = FUN_0040487c(local_5a,uVar2);
      if (local_54 < 1) break;
      iVar11 = 0;
      pcVar13 = (char *)((int)local_4bc + (int)local_50);
      pcVar10 = local_5a;
      if (0 < local_54) {
        do {
          cVar15 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar13 = cVar15;
          pcVar13 = pcVar13 + 1;
          local_50 = local_50 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_54);
      }
    }
    local_1c = (char *)local_4bc;
    local_44 = local_50;
  }
  if (local_44 != (char *)0x0) {
    local_8 = (uint *)((int)local_8 - (int)local_44);
    while (pcVar10 = local_44 + -1, bVar19 = local_44 != (char *)0x0, local_44 = pcVar10, bVar19) {
      uVar1 = *local_1c;
      local_1c = (char *)((int)local_1c + 1);
      FUN_00403a68(uVar1,(int)local_524);
    }
  }
  while (puVar9 = (uint *)((int)local_8 - 1), bVar19 = 0 < (int)local_8, local_8 = puVar9, bVar19) {
    FUN_00403a68(0x20,(int)local_524);
  }
  goto LAB_00403b18;
switchD_00403bb9_caseD_15:
  while( true ) {
    pbVar16 = local_18 + 1;
    bVar14 = *local_18;
    local_18 = pbVar16;
    if (bVar14 == 0) break;
    FUN_00403a68(bVar14,(int)local_524);
  }
LAB_004043e4:
  FUN_00403a20((int)local_524);
  if (local_4c4 != 0) {
    local_4c8 = 0xffffffff;
  }
  return local_4c8;
}



undefined4 __cdecl FUN_00404434(int param_1)

{
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0040b59c + 0x18) + 8);
    }
    if (param_1 == 0xe) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0040b59c + 0x18) + 4);
    }
    if (param_1 == 0xf) {
      return **(undefined4 **)(PTR_DAT_0040b59c + 0x18);
    }
  }
  else {
    if (param_1 == 0x50) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0040b59c + 0x18) + 0xc);
    }
    if (param_1 == 0x51) {
      return *(undefined4 *)(*(int *)(PTR_DAT_0040b59c + 0x18) + 0x10);
    }
  }
  return 0;
}



void __cdecl FUN_00404488(uint param_1)

{
  FUN_00404690(param_1,0x104);
  return;
}



bool __cdecl FUN_004044a0(uint param_1)

{
  return param_1 < 0x80;
}



void __cdecl FUN_004044b4(uint param_1)

{
  FUN_00404690(param_1,0x100);
  return;
}



void __cdecl FUN_004044cc(uint param_1)

{
  FUN_00404690(param_1,0x20);
  return;
}



void __cdecl FUN_004044e0(uint param_1)

{
  FUN_00404690(param_1,4);
  return;
}



void __cdecl FUN_004044f4(uint param_1)

{
  FUN_00404690(param_1,0x194);
  return;
}



void __cdecl FUN_0040450c(uint param_1)

{
  FUN_00404690(param_1,2);
  return;
}



void __cdecl FUN_00404520(uint param_1)

{
  FUN_00404690(param_1,0x1d4);
  return;
}



void __cdecl FUN_00404538(uint param_1)

{
  FUN_00404690(param_1,0x10);
  return;
}



void __cdecl FUN_0040454c(uint param_1)

{
  FUN_00404690(param_1,8);
  return;
}



void __cdecl FUN_00404560(uint param_1)

{
  FUN_00404690(param_1,1);
  return;
}



void __cdecl FUN_00404574(uint param_1)

{
  FUN_00404690(param_1,0x80);
  return;
}



void __cdecl FUN_0040458c(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x104);
  return;
}



bool __cdecl FUN_004045a4(ushort param_1)

{
  return param_1 < 0x80;
}



void __cdecl FUN_004045b8(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x100);
  return;
}



void __cdecl FUN_004045d0(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x20);
  return;
}



void __cdecl FUN_004045e4(ushort param_1)

{
  FUN_004046d4((uint)param_1,4);
  return;
}



void __cdecl FUN_004045f8(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x194);
  return;
}



void __cdecl FUN_00404610(ushort param_1)

{
  FUN_004046d4((uint)param_1,2);
  return;
}



void __cdecl FUN_00404624(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x1d4);
  return;
}



void __cdecl FUN_0040463c(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x10);
  return;
}



void __cdecl FUN_00404650(ushort param_1)

{
  FUN_004046d4((uint)param_1,8);
  return;
}



void __cdecl FUN_00404664(ushort param_1)

{
  FUN_004046d4((uint)param_1,1);
  return;
}



void __cdecl FUN_00404678(ushort param_1)

{
  FUN_004046d4((uint)param_1,0x80);
  return;
}



ushort __cdecl FUN_00404690(uint param_1,ushort param_2)

{
  if (0xff < param_1) {
    return 0;
  }
  if ((*(int *)(PTR_DAT_0040b59c + 8) == 0) && (*(int *)(PTR_DAT_0040b59c + 0x10) != 0)) {
    return param_2 & *(ushort *)(*(int *)(PTR_DAT_0040b59c + 0x10) + 2 + param_1 * 2);
  }
  return *(ushort *)(&DAT_0040b25e + (short)param_1 * 2) & param_2;
}



uint __cdecl FUN_004046d4(WCHAR param_1,uint param_2)

{
  uint uVar1;
  ushort local_6;
  
  uVar1 = param_2;
  if (param_1 == L'\xffff') {
    uVar1 = 0;
  }
  else if ((*(int *)(PTR_DAT_0040b59c + 8) == 0) || (L'ÿ' < param_1)) {
    GetStringTypeW(1,&param_1,1,&local_6);
    uVar1 = local_6 & uVar1;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0040b25e + (short)param_1 * 2) & param_2;
  }
  return uVar1;
}



undefined4 __cdecl FUN_0040472c(byte *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != (byte *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    if (((&DAT_0040ca55)[*param_1] & 4) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,9,(LPCSTR)param_1,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    if (1 < param_2) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,9,(LPCSTR)param_1,2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        return 2;
      }
    }
    return 0xffffffff;
  }
  return 0;
}



undefined4 __cdecl FUN_004047a8(LPWSTR param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else if (*param_2 == 0) {
    if (param_1 != (LPWSTR)0x0) {
      *(undefined2 *)param_1 = 0;
    }
    uVar1 = 0;
  }
  else if (*(int *)(PTR_DAT_0040b59c + 8) == 0) {
    if (((&DAT_0040ca55)[*param_2] & 4) == 0) {
      iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,9,(LPCSTR)param_2,1,param_1,
                                  (uint)(param_1 != (LPWSTR)0x0));
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (((param_3 < 2) ||
             (iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,9,(LPCSTR)param_2,2,param_1,
                                          (uint)(param_1 != (LPWSTR)0x0)), iVar2 == 0)) &&
            ((param_3 < 2 || (param_2[1] == 0)))) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    if (param_1 != (LPWSTR)0x0) {
      *(ushort *)param_1 = (ushort)*param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



int __cdecl FUN_0040487c(LPSTR param_1,ushort param_2)

{
  int iVar1;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (*(int *)(PTR_DAT_0040b59c + 8) != 0) {
    if (0xff < param_2) {
      return -1;
    }
    *param_1 = (CHAR)param_2;
    return 1;
  }
  local_8 = 0;
  iVar1 = WideCharToMultiByte(*(UINT *)PTR_DAT_0040b59c,0x220,(LPCWSTR)&param_2,1,param_1,2,
                              (LPCSTR)0x0,&local_8);
  if ((iVar1 != 0) && (local_8 == 0)) {
    return iVar1;
  }
  return -1;
}



char * __cdecl FUN_004048f0(LPWSTR param_1,uint *param_2,char *param_3)

{
  int iVar1;
  DWORD DVar2;
  uint *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  if ((param_1 == (LPWSTR)0x0) || (param_3 != (char *)0x0)) {
    if (param_1 == (LPWSTR)0x0) {
      if (*(int *)(PTR_DAT_0040b59c + 8) == 0) {
        iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
        if (iVar1 == 0) {
          pcVar4 = (char *)0xffffffff;
        }
        else {
          pcVar4 = (char *)(iVar1 + -1);
        }
      }
      else {
        pcVar4 = FUN_00402250(param_2);
      }
    }
    else if (*(int *)(PTR_DAT_0040b59c + 8) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,9,(LPCSTR)param_2,-1,param_1,
                                  (int)param_3);
      if (iVar1 == 0) {
        DVar2 = GetLastError();
        puVar3 = param_2;
        pcVar4 = param_3;
        if (DVar2 == 0x7a) {
          for (; (pcVar4 != (char *)0x0 && (*(byte *)puVar3 != 0));
              puVar3 = (uint *)((int)puVar3 + 1)) {
            if (((&DAT_0040ca55)[*(byte *)puVar3] & 4) != 0) {
              puVar3 = (uint *)((int)puVar3 + 1);
            }
            pcVar4 = pcVar4 + -1;
          }
          pcVar4 = (char *)MultiByteToWideChar(*(UINT *)PTR_DAT_0040b59c,1,(LPCSTR)param_2,
                                               (int)puVar3 - (int)param_2,param_1,(int)param_3);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0xffffffff;
          }
        }
        else {
          pcVar4 = (char *)0xffffffff;
        }
      }
      else {
        pcVar4 = (char *)(iVar1 + -1);
      }
    }
    else if (param_3 != (char *)0x0) {
      do {
        *(ushort *)param_1 = (ushort)*(byte *)((int)param_2 + (int)pcVar4);
        if (*(char *)((int)param_2 + (int)pcVar4) == '\0') {
          return pcVar4;
        }
        pcVar4 = pcVar4 + 1;
        param_1 = (LPWSTR)((int)param_1 + 2);
      } while (pcVar4 < param_3);
    }
  }
  else {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}



int __cdecl FUN_00404a1c(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = param_2 + 1;
  for (psVar1 = param_1; (iVar2 = iVar2 + -1, iVar2 != 0 && (*psVar1 != 0)); psVar1 = psVar1 + 1) {
  }
  if ((iVar2 != 0) && (*psVar1 == 0)) {
    iVar2 = (int)psVar1 - (int)param_1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)(((int)psVar1 - (int)param_1 & 1U) != 0);
    }
    return iVar2 + 1;
  }
  return param_2;
}



uint __cdecl FUN_00404a58(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  CHAR local_a [2];
  int local_8;
  
  local_10 = 0;
  uVar5 = 0;
  if ((param_1 == (LPSTR)0x0) || (param_3 != 0)) {
    if (param_1 == (LPSTR)0x0) {
      if (*(int *)(PTR_DAT_0040b59c + 8) == 0) {
        iVar6 = WideCharToMultiByte(*(UINT *)PTR_DAT_0040b59c,0x220,param_2,-1,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,&local_10);
        if ((iVar6 == 0) || (local_10 != 0)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = iVar6 - 1;
        }
      }
      else {
        uVar5 = FUN_004023bc((short *)param_2);
      }
    }
    else if (*(int *)(PTR_DAT_0040b59c + 8) == 0) {
      uVar5 = WideCharToMultiByte(*(UINT *)PTR_DAT_0040b59c,0x220,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_10);
      if ((uVar5 == 0) || (local_10 != 0)) {
        if ((local_10 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
          while (uVar5 < param_3) {
            local_8 = WideCharToMultiByte(*(UINT *)PTR_DAT_0040b59c,0,param_2,1,local_a,2,
                                          (LPCSTR)0x0,&local_10);
            if ((local_8 == 0) || (local_10 != 0)) {
              return 0xffffffff;
            }
            if (param_3 < local_8 + uVar5) {
              return uVar5;
            }
            iVar6 = 0;
            pcVar4 = param_1 + uVar5;
            pcVar3 = local_a;
            if (0 < local_8) {
              do {
                cVar1 = *pcVar3;
                *pcVar4 = cVar1;
                if (cVar1 == '\0') {
                  return uVar5;
                }
                pcVar3 = pcVar3 + 1;
                iVar6 = iVar6 + 1;
                pcVar4 = pcVar4 + 1;
                uVar5 = uVar5 + 1;
              } while (iVar6 < local_8);
            }
            param_2 = (LPCWSTR)((int)param_2 + 2);
          }
        }
        else {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    else if (param_3 != 0) {
      while (*(ushort *)param_2 < 0x100) {
        param_1[uVar5] = *(CHAR *)param_2;
        if (*(short *)param_2 == 0) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        param_2 = (LPCWSTR)((int)param_2 + 2);
        if (param_3 <= uVar5) {
          return uVar5;
        }
      }
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



int FUN_00404c97(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    param_1 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_4);
  }
  else {
    iVar1 = 0x40;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = param_1 < 0;
      param_1 = param_1 * 2;
      bVar5 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar4;
      bVar4 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar5;
      uVar3 = uVar3 << 1 | (uint)bVar4;
      if ((param_5 <= uVar3) && ((param_5 < uVar3 || (param_4 <= uVar2)))) {
        bVar4 = uVar2 < param_4;
        uVar2 = uVar2 - param_4;
        uVar3 = (uVar3 - param_5) - (uint)bVar4;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_1;
}



uint FUN_00404d5a(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    uVar2 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_4);
  }
  else {
    iVar1 = 0x40;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = param_1 < 0;
      param_1 = param_1 * 2;
      bVar5 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar4;
      bVar4 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar5;
      uVar3 = uVar3 << 1 | (uint)bVar4;
      if ((param_5 <= uVar3) && ((param_5 < uVar3 || (param_4 <= uVar2)))) {
        bVar4 = uVar2 < param_4;
        uVar2 = uVar2 - param_4;
        uVar3 = (uVar3 - param_5) - (uint)bVar4;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall FUN_00404dfc(int param_1)

{
  return;
}



undefined2 __stdcall FUN_00404f84(void)

{
  undefined2 in_FPUStatusWord;
  
  return in_FPUStatusWord;
}



void __cdecl FUN_00404f98(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    DAT_0040b850 = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall thunk_FUN_00404fe0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404fc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0040b780)();
  return;
}



void __stdcall thunk_FUN_00404fe0(void)

{
                    // WARNING: Could not recover jumptable at 0x00404fce. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR_FUN_0040b784)();
  return;
}



void __stdcall FUN_00404fe0(void)

{
  FUN_00406e08((uint *)s_printf___floating_point_formats_n_0040b790);
  return;
}



void __stdcall FUN_00405010(void)

{
  FUN_00404f98(DAT_0040b850,0x1fff);
  return;
}



void __cdecl FUN_00405028(int param_1)

{
  if ((*(byte *)(param_1 + 7) & 0x80) == 0) {
    return;
  }
  return;
}



void __cdecl FUN_00405058(longlong *param_1,float10 *param_2)

{
  if (*(short *)((int)param_2 + 8) != 0x403e) {
    *param_1 = (longlong)ROUND(*param_2);
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
  return;
}



ushort __cdecl FUN_0040507c(float10 *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = *param_1;
  fVar2 = (float10)0;
  return (ushort)(fVar1 < fVar2) << 9 | (ushort)(fVar1 != fVar2) << 10 |
         (ushort)(fVar1 == fVar2) << 0xe;
}



// WARNING: Removing unreachable block (ram,0x004050bd)

char * __cdecl
FUN_00405090(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char local_48 [68];
  
  pcVar4 = param_3;
  if ((1 < (int)param_4) && ((int)param_4 < 0x25)) {
    if ((param_2 != 0) && (((int)param_2 < 0 && (param_5 != '\0')))) {
      *param_3 = '-';
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(param_2 + bVar5);
      pcVar4 = param_3 + 1;
    }
    pcVar3 = local_48;
    do {
      do {
        uVar2 = FUN_00404d5a(param_1,param_2,in_ECX,param_4,(int)param_4 >> 0x1f);
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        param_1 = FUN_00404c97(param_1,param_2,extraout_ECX,param_4,(int)param_4 >> 0x1f);
        in_ECX = extraout_ECX_00;
        param_2 = extraout_EDX;
      } while (extraout_EDX != 0);
    } while (param_1 != 0);
    while (pcVar3 != local_48) {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
      if (cVar1 < '\n') {
        *pcVar4 = cVar1 + '0';
        pcVar4 = pcVar4 + 1;
      }
      else {
        *pcVar4 = cVar1 + param_6 + -10;
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  *pcVar4 = '\0';
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00405144(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_1 == 0) {
    uVar2 = 0x407e;
    uVar4 = 0x3f6a;
  }
  else {
    uVar2 = 0x43fe;
    uVar4 = 0x3bcd;
  }
  uVar3 = param_4 & 0x7fff;
  if (uVar3 == 0x7fff) {
    return;
  }
  if (uVar3 <= uVar2) {
    if (uVar2 == uVar3) {
      uVar1 = FUN_00404f98(0,0);
      FUN_00404f98(0xc00,0xc00);
      FUN_00404f98(uVar1,0xc00);
      return;
    }
    if ((ushort)((ushort)param_2 | uVar3 | param_2._2_2_ | (ushort)param_3 | param_3._2_2_) == 0) {
      return;
    }
    if (uVar4 <= uVar3) {
      return;
    }
  }
  _DAT_0040b9fc = 0x22;
  return;
}



char * __cdecl FUN_0040525c(uint param_1,char *param_2,uint param_3,char param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_28 [36];
  
  pcVar3 = param_2;
  if ((1 < (int)param_3) && ((int)param_3 < 0x25)) {
    if (((int)param_1 < 0) && (param_4 != '\0')) {
      *param_2 = '-';
      pcVar3 = param_2 + 1;
      param_1 = -param_1;
    }
    pcVar2 = local_28;
    do {
      *pcVar2 = (char)(param_1 % param_3);
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 / param_3;
    } while (param_1 != 0);
    while (pcVar2 != local_28) {
      pcVar2 = pcVar2 + -1;
      cVar1 = *pcVar2;
      if (cVar1 < '\n') {
        *pcVar3 = cVar1 + '0';
        pcVar3 = pcVar3 + 1;
      }
      else {
        *pcVar3 = cVar1 + param_5 + -10;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  *pcVar3 = '\0';
  return param_2;
}



void __cdecl FUN_004052d0(uint param_1,char *param_2)

{
  FUN_0040525c(param_1,param_2,10,'\0','a');
  return;
}



undefined4 __cdecl FUN_004052ec(int *param_1)

{
  if (*param_1 == 4) {
    param_1[6] = 0;
    param_1[7] = 0;
    return 1;
  }
  if (*param_1 == 5) {
    return 1;
  }
  return 0;
}



undefined4 __cdecl FUN_00405318(int *param_1)

{
  if (*param_1 == 4) {
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    return 1;
  }
  if (*param_1 == 5) {
    return 1;
  }
  return 0;
}



void __cdecl FUN_00405348(undefined *param_1,undefined *param_2)

{
  PTR_FUN_0040b8d8 = param_1;
  PTR_FUN_0040b8dc = param_2;
  return;
}



undefined4 __cdecl FUN_00405360(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar1 % 10;
    param_1[1] = uVar1 / 10;
  }
  uVar2 = *param_1;
  *param_1 = (int)(CONCAT44(uVar3,uVar2) / 10);
  return (int)(CONCAT44(uVar3,uVar2) % 10);
}



int __cdecl FUN_00405388(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)((ulonglong)*param_1 * 10);
  uVar3 = (int)((ulonglong)*param_1 * 10 >> 0x20) + (uint)CARRY4(uVar1,param_2);
  *param_1 = uVar1 + param_2;
  uVar1 = param_1[1];
  uVar2 = (uint)((ulonglong)uVar1 * 10);
  param_1[1] = uVar2 + uVar3;
  return (int)((ulonglong)uVar1 * 10 >> 0x20) + (uint)CARRY4(uVar2,uVar3);
}



uint __cdecl FUN_004053b8(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00404434(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_004053ea;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_004053ea:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}



undefined4 * __cdecl
FUN_004053fc(float10 *param_1,uint param_2,undefined4 *param_3,byte param_4,char param_5,int param_6
            )

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined4 local_3c;
  byte local_e;
  byte local_d;
  uint local_c;
  uint local_8;
  
  pbVar3 = (byte *)FUN_00404434(0xe);
  local_e = *pbVar3;
  if (0x28 < (int)param_2) {
    param_2 = 0x28;
  }
  local_c = param_2;
  local_d = param_4 & 0xdf;
  if (local_d == 0x46) {
    uVar7 = -param_2;
    if (-param_2 != 0 && (int)param_2 < 1) {
      param_2 = 0;
      uVar7 = 0;
    }
  }
  else if ((int)param_2 < 1) {
    uVar7 = 1;
  }
  else {
    uVar7 = param_2;
    if (local_d == 0x45) {
      uVar7 = param_2 + 1;
      param_2 = param_2 + 1;
    }
  }
  iVar4 = FUN_004063ac(param_1,uVar7,&local_8,&local_3c,param_6);
  if (iVar4 == 0x7fff) {
    if (local_8 == 0) {
      pcVar5 = &DAT_0040b8e5;
    }
    else {
      pcVar5 = &DAT_0040b8e0;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar9 = (undefined4 *)(pcVar11 + -uVar7);
    puVar6 = param_3;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined *)puVar6 = *(undefined *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    return param_3;
  }
  if (iVar4 == 0x7ffe) {
    if (local_8 == 0) {
      pcVar5 = &DAT_0040b8ef;
    }
    else {
      pcVar5 = &DAT_0040b8ea;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar9 = (undefined4 *)(pcVar11 + -uVar7);
    puVar6 = param_3;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined *)puVar6 = *(undefined *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    return param_3;
  }
  puVar9 = param_3;
  if (local_8 != 0) {
    *(undefined *)param_3 = 0x2d;
    puVar9 = (undefined4 *)((int)param_3 + 1);
  }
  if (local_d != 0x46) {
    if ((local_d != 0x47) || (iVar4 < -3)) goto LAB_004055c6;
    uVar7 = param_2;
    if (param_2 == 0) {
      uVar7 = 1;
    }
    if ((int)uVar7 < iVar4) goto LAB_004055c6;
  }
  if (iVar4 < 0x29) {
    if (iVar4 < 1) {
      *(undefined *)puVar9 = 0x30;
      *(byte *)((int)puVar9 + 1) = local_e;
      puVar9 = (undefined4 *)((int)puVar9 + 2);
      for (; iVar4 != 0; iVar4 = iVar4 + 1) {
        *(undefined *)puVar9 = 0x30;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    iVar12 = 0;
    for (puVar6 = &local_3c; *(char *)puVar6 != '\0'; puVar6 = (undefined4 *)((int)puVar6 + 1)) {
      *(char *)puVar9 = *(char *)puVar6;
      puVar10 = (undefined4 *)((int)puVar9 + 1);
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        *(byte *)puVar10 = local_e;
        puVar10 = (undefined4 *)((int)puVar9 + 2);
        iVar12 = iVar12 + 1;
      }
      puVar9 = puVar10;
    }
    if ((int)(iVar12 + local_c) < (int)param_2) {
      uVar7 = param_2 - (iVar12 + local_c);
      puVar6 = FUN_004021ac(puVar9,0x30,uVar7);
      puVar9 = (undefined4 *)((int)puVar9 + uVar7);
    }
    else if ((iVar4 != 1) && (param_5 == '\0')) {
      puVar6 = (undefined4 *)FUN_004053b8(param_4,(uint)param_3,(uint)puVar9);
      puVar9 = puVar6;
    }
    if (puVar9 == param_3) {
      *(char *)puVar9 = '0';
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(char *)puVar9 = '\0';
    return puVar6;
  }
LAB_004055c6:
  *(undefined *)puVar9 = (undefined)local_3c;
  pbVar3 = (byte *)((int)puVar9 + 1);
  if (local_3c._1_1_ == 0) {
    if (param_5 != '\0') {
      *pbVar3 = local_e;
      pbVar3 = (byte *)((int)puVar9 + 2);
    }
  }
  else {
    *pbVar3 = local_e;
    pbVar3 = (byte *)((int)puVar9 + 2);
    pbVar2 = (byte *)((int)&local_3c + 2);
    while (local_3c._1_1_ != 0) {
      *pbVar3 = local_3c._1_1_;
      pbVar3 = pbVar3 + 1;
      local_3c._1_1_ = *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    if (param_5 == '\0') {
      pbVar3 = (byte *)FUN_004053b8(param_4,(uint)param_3,(uint)pbVar3);
    }
  }
  *pbVar3 = param_4 & 0x20 | 0x45;
  puVar9 = (undefined4 *)(iVar4 + -1);
  if ((int)puVar9 < 0) {
    puVar9 = (undefined4 *)-(int)puVar9;
    pbVar3[1] = 0x2d;
  }
  else {
    pbVar3[1] = 0x2b;
  }
  if ((int)puVar9 < 1000) {
    if ((int)puVar9 < 100) {
      iVar4 = 2;
    }
    else {
      iVar4 = 3;
    }
  }
  else {
    iVar4 = 4;
  }
  pbVar3[iVar4 + 2] = 0;
  puVar6 = (undefined4 *)(pbVar3 + iVar4 + 2);
  puVar10 = puVar6;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar6 = (undefined4 *)((int)puVar6 + -1);
    *(char *)puVar6 = (char)((int)puVar9 % 10) + '0';
    puVar10 = (undefined4 *)((int)puVar9 / 10);
    puVar9 = puVar10;
  }
  return puVar10;
}



int __cdecl FUN_00405684(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = param_1 + 8;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  return iVar1;
}



uint __cdecl FUN_004056b4(short param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_00404434(0xe);
  if ((param_1 == 0x47) || (uVar1 = param_3, param_1 == 0x67)) {
    do {
      uVar1 = param_3;
      if (*(short *)(param_3 - 2) != 0x30) goto LAB_004056eb;
      param_3 = param_3 - 2;
    } while (param_2 < param_3);
  }
  else {
LAB_004056eb:
    param_2 = uVar1;
    if (*psVar2 == *(short *)(param_2 - 2)) {
      param_2 = param_2 - 2;
    }
  }
  return param_2;
}



void __cdecl
FUN_00405700(float10 *param_1,int param_2,undefined4 *param_3,ushort param_4,short param_5,
            int param_6)

{
  ushort *puVar1;
  int iVar2;
  wchar16 *pwVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  int iVar8;
  ushort local_68 [44];
  ushort local_10;
  ushort local_e;
  int local_c;
  uint local_8;
  
  puVar1 = (ushort *)FUN_00404434(0xe);
  local_10 = *puVar1;
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  local_c = param_2;
  local_e = param_4 & 0xdf;
  if (local_e == 0x46) {
    iVar2 = -param_2;
    if (-param_2 != 0 && param_2 < 1) {
      param_2 = 0;
      iVar2 = 0;
    }
  }
  else if (param_2 < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = param_2;
    if (local_e == 0x45) {
      iVar2 = param_2 + 1;
      param_2 = param_2 + 1;
    }
  }
  iVar2 = FUN_00406680(param_1,iVar2,&local_8,local_68,param_6);
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pwVar3 = u__INF_0040b8fe;
    }
    else {
      pwVar3 = u__INF_0040b8f4;
    }
    FUN_004023d4((short *)param_3,pwVar3);
    return;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pwVar3 = u__NAN_0040b912;
    }
    else {
      pwVar3 = u__NAN_0040b908;
    }
    FUN_004023d4((short *)param_3,pwVar3);
    return;
  }
  puVar5 = param_3;
  if (local_8 != 0) {
    *(undefined2 *)param_3 = 0x2d;
    puVar5 = (undefined4 *)((int)param_3 + 2);
  }
  if (local_e != 0x46) {
    if ((local_e != 0x47) || (iVar2 < -3)) goto LAB_004058cb;
    iVar8 = param_2;
    if (param_2 == 0) {
      iVar8 = 1;
    }
    if (iVar8 < iVar2) goto LAB_004058cb;
  }
  if (iVar2 < 0x29) {
    if (iVar2 < 1) {
      *(undefined2 *)puVar5 = 0x30;
      *(ushort *)((int)puVar5 + 2) = local_10;
      puVar5 = puVar5 + 1;
      for (; iVar2 != 0; iVar2 = iVar2 + 1) {
        *(undefined2 *)puVar5 = 0x30;
        puVar5 = (undefined4 *)((int)puVar5 + 2);
      }
    }
    iVar8 = 0;
    for (puVar1 = local_68; *puVar1 != 0; puVar1 = puVar1 + 1) {
      *(ushort *)puVar5 = *puVar1;
      puVar6 = (undefined4 *)((int)puVar5 + 2);
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *(ushort *)puVar6 = local_10;
        puVar6 = puVar5 + 1;
        iVar8 = iVar8 + 1;
      }
      puVar5 = puVar6;
    }
    if (iVar8 + local_c < param_2) {
      uVar4 = param_2 - (iVar8 + local_c);
      FUN_004021ac(puVar5,0x30,uVar4);
      puVar5 = (undefined4 *)((int)puVar5 + uVar4 * 2);
    }
    else if ((iVar2 != 1) && (param_5 == 0)) {
      puVar5 = (undefined4 *)FUN_004056b4(param_4,(uint)param_3,(uint)puVar5);
    }
    if (puVar5 == param_3) {
      *(undefined2 *)puVar5 = 0x30;
      puVar5 = (undefined4 *)((int)puVar5 + 2);
    }
    *(undefined2 *)puVar5 = 0;
    return;
  }
LAB_004058cb:
  *(ushort *)puVar5 = local_68[0];
  puVar6 = (undefined4 *)((int)puVar5 + 2);
  if (local_68[1] == 0) {
    if (param_5 != 0) {
      *(ushort *)puVar6 = local_10;
      puVar6 = puVar5 + 1;
    }
  }
  else {
    *(ushort *)puVar6 = local_10;
    puVar6 = puVar5 + 1;
    puVar1 = local_68 + 2;
    while (local_68[1] != 0) {
      *(ushort *)puVar6 = local_68[1];
      puVar6 = (undefined4 *)((int)puVar6 + 2);
      local_68[1] = *puVar1;
      puVar1 = puVar1 + 1;
    }
    if (param_5 == 0) {
      puVar6 = (undefined4 *)FUN_004056b4(param_4,(uint)param_3,(uint)puVar6);
    }
  }
  *(ushort *)puVar6 = param_4 & 0x20 | 0x45;
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    *(ushort *)((int)puVar6 + 2) = 0x2d;
  }
  else {
    *(ushort *)((int)puVar6 + 2) = 0x2b;
  }
  if (iVar2 < 1000) {
    if (iVar2 < 100) {
      iVar8 = 2;
    }
    else {
      iVar8 = 3;
    }
  }
  else {
    iVar8 = 4;
  }
  *(undefined2 *)((int)puVar6 + iVar8 * 2 + 4) = 0;
  psVar7 = (short *)((int)puVar6 + iVar8 * 2 + 4);
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    psVar7 = psVar7 + -1;
    *psVar7 = (short)(iVar2 % 10) + 0x30;
    iVar2 = iVar2 / 10;
  }
  return;
}



int __cdecl FUN_004059b8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = param_1 + 8;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl
FUN_004059e8(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5,
            int *param_6,undefined4 *param_7)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 in_ST0;
  float10 in_ST1;
  uint uVar11;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined local_28 [4];
  undefined auStack36 [8];
  undefined4 local_1c;
  int local_18;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  local_38 = (undefined2 *)local_28;
  local_8 = 0x8000;
  local_c = 0x13;
  local_d = '\0';
  local_e = '\x01';
  local_f = '\0';
  local_10 = '\0';
  local_11 = '\0';
  local_18 = 0;
  iVar9 = -2;
  local_1c = 1;
  _local_28 = (float10)((unkuint10)_local_28 & 0);
  uVar11 = 0xe;
  pbVar4 = (byte *)FUN_00404434(0xe);
  bVar1 = *pbVar4;
  uVar6 = (uint)pbVar4 & 0xffffff00 | (uint)bVar1;
  do {
    local_18 = local_18 + 1;
    uVar3 = param_4;
    uVar5 = (*(code *)param_2)(uVar6,param_4,uVar11);
    uVar11 = uVar3;
    uVar6 = uVar5 + 1;
    if (uVar6 == 0) {
      local_1c = 0xffffffff;
      goto LAB_00405d1c;
    }
  } while (((uVar5 & 0x80) == 0) && (uVar11 = uVar5, uVar6 = FUN_00406ab0(uVar5), uVar6 != 0));
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar10 = local_c;
    if (uVar5 == 0x2b) {
      local_f = '\x01';
    }
    else {
      iVar8 = iVar9;
      if (uVar5 != 0x2d) goto LAB_00405aa9;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar10, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar11 = param_4;
      uVar6 = (*(code *)param_2)();
      uVar5 = uVar6;
      iVar8 = iVar9;
LAB_00405aa9:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar5 == 0x49) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)(uVar6,param_4,uVar11);
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_00405d17;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x46)) goto LAB_00405d17;
          if (local_d == '\0') {
            _local_28 = CONCAT44(DAT_0040b920,DAT_0040b91c);
            _local_28 = (float10)CONCAT28(DAT_0040b924,_local_28);
          }
          else {
            _local_28 = CONCAT44(DAT_0040b92a,DAT_0040b926);
            _local_28 = (float10)CONCAT28(DAT_0040b92e,_local_28);
          }
          goto LAB_00405cec;
        }
        if (uVar5 == 0x4e) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x41)) goto LAB_00405d17;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_00405d17;
          if (local_d == '\0') {
            _local_28 = CONCAT44(DAT_0040b934,DAT_0040b930);
            _local_28 = (float10)CONCAT28(DAT_0040b938,_local_28);
          }
          else {
            _local_28 = CONCAT44(DAT_0040b93e,DAT_0040b93a);
            _local_28 = (float10)CONCAT28(DAT_0040b942,_local_28);
          }
          goto LAB_00405cec;
        }
      }
      local_e = '\0';
      iVar9 = iVar8;
      iVar10 = local_c;
      if (uVar5 == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_00405b8f;
        local_8 = iVar8;
        if (iVar8 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar5 < 0x30) || (0x39 < (int)uVar5)) goto LAB_00405b8f;
        uVar5 = uVar5 - 0x30;
        iVar9 = iVar8 + 1;
        if (iVar9 < 1) {
          *local_38 = (short)uVar5;
          iVar10 = local_c;
          if (uVar5 == 0) {
            iVar9 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar9 = 1;
          }
        }
        else if (iVar9 < 10) {
          _local_28 = (float10)CONCAT64(auStack36._0_6_,local_28 * 10 + uVar5);
        }
        else if (iVar9 <= local_c) {
          local_40 = local_28;
          local_3c = auStack36._0_4_;
          iVar7 = FUN_00405388(&local_40,uVar5);
          iVar10 = iVar8;
          if (iVar7 == 0) {
            _local_28 = CONCAT44(local_3c,local_40);
            iVar10 = local_c;
          }
        }
      }
    }
  }
  uVar5 = 0x65;
LAB_00405b8f:
  iVar10 = param_5;
  if (iVar9 == -2) {
LAB_00405d17:
    param_5 = iVar10;
    local_1c = 0;
LAB_00405d1c:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    _local_28 = (float10)((unkuint10)_local_28 & 0);
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar9;
    }
    iVar10 = 0;
    if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
      bVar2 = true;
LAB_00405bb7:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar8 = (*(code *)param_2)();
        if (!bVar2) goto LAB_00405be4;
        bVar2 = false;
        if (iVar8 != 0x2d) goto LAB_00405bdf;
        local_10 = '\x01';
      }
    }
    else {
LAB_00405c0a:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar10 = -iVar10;
      local_11 = -local_11;
    }
    if (iVar9 < 0) {
      _local_28 = (float10)((unkuint10)auStack36._0_6_ << 0x20);
      _local_28 = (float10)((unkuint10)_local_28 & 0xffffffff);
    }
    else if (local_11 == '\0') {
      if (local_c < iVar9) {
        iVar9 = local_c;
      }
      iVar10 = iVar10 + (local_8 - iVar9);
      FUN_00405028((int)local_28);
      _local_28 = in_ST0;
      if (iVar10 != 0) {
        iVar9 = iVar10;
        if (iVar10 < 1) {
          iVar9 = -iVar10;
        }
        FUN_00404dfc(iVar9);
        if (iVar10 < 0) {
          _local_28 = _local_28 / in_ST1;
        }
        else {
          _local_28 = in_ST1 * _local_28;
        }
      }
    }
    else {
      if (local_11 == '\x01') {
        local_38[3] = 0xffff;
        local_38[2] = 0xffff;
        local_38[1] = 0xffff;
        *local_38 = 0xffff;
        local_38[4] = 0x7ffe;
      }
      else {
        _local_28 = (float10)((unkuint10)auStack36._0_6_ << 0x20);
        _local_28 = (float10)((unkuint10)_local_28 & 0xffffffff);
      }
      local_1c = 2;
    }
  }
  if (local_d != '\0') {
    _local_28 = -_local_28;
  }
LAB_00405cec:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = local_28;
  param_1[1] = auStack36._0_4_;
  *(undefined2 *)(param_1 + 2) = auStack36._4_2_;
  return;
LAB_00405bdf:
  if (iVar8 != 0x2b) {
LAB_00405be4:
    if ((iVar8 < 0x30) || (0x39 < iVar8)) goto LAB_00405c0a;
    iVar10 = iVar8 + iVar10 * 10 + -0x30;
    if (0x1344 < iVar10) {
      local_11 = '\x01';
    }
  }
  goto LAB_00405bb7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00405e34(float *param_1,double *param_2,uint param_3)

{
  float10 in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_00405144(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_00405144(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl
FUN_00405ecc(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5,
            int *param_6,undefined4 *param_7)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 in_ST0;
  float10 in_ST1;
  uint uVar10;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined local_28 [4];
  undefined auStack36 [8];
  undefined4 local_1c;
  int local_18;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  local_38 = (undefined2 *)local_28;
  local_8 = 0x8000;
  local_c = 0x13;
  local_d = '\0';
  local_e = '\x01';
  local_f = '\0';
  local_10 = '\0';
  local_11 = '\0';
  local_18 = 0;
  iVar8 = -2;
  local_1c = 1;
  _local_28 = (float10)((unkuint10)_local_28 & 0);
  uVar10 = 0xe;
  puVar3 = (ushort *)FUN_00404434(0xe);
  uVar1 = *puVar3;
  uVar5 = (uint)puVar3 & 0xffff0000 | (uint)uVar1;
  do {
    local_18 = local_18 + 1;
    uVar4 = (*(code *)param_2)(uVar5,param_4,uVar10,param_4);
    if (uVar4 == 0xffffffff) {
      local_1c = 0xffffffff;
      goto LAB_004061fd;
    }
    uVar10 = uVar4;
    uVar5 = FUN_00404650((ushort)uVar4);
  } while (uVar5 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar9 = local_c;
    if (uVar4 == 0x2b) {
      local_f = '\x01';
    }
    else {
      iVar7 = iVar8;
      if (uVar4 != 0x2d) goto LAB_00405f8a;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar9, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar10 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar7 = iVar8;
LAB_00405f8a:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)(uVar5,param_4,uVar10);
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_004061f8;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x46)) goto LAB_004061f8;
          if (local_d == '\0') {
            _local_28 = CONCAT44(DAT_0040b948,DAT_0040b944);
            _local_28 = (float10)CONCAT28(DAT_0040b94c,_local_28);
          }
          else {
            _local_28 = CONCAT44(DAT_0040b952,DAT_0040b94e);
            _local_28 = (float10)CONCAT28(DAT_0040b956,_local_28);
          }
          goto LAB_004061cd;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x41)) goto LAB_004061f8;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_004061f8;
          if (local_d == '\0') {
            _local_28 = CONCAT44(DAT_0040b95c,DAT_0040b958);
            _local_28 = (float10)CONCAT28(DAT_0040b960,_local_28);
          }
          else {
            _local_28 = CONCAT44(DAT_0040b966,DAT_0040b962);
            _local_28 = (float10)CONCAT28(DAT_0040b96a,_local_28);
          }
          goto LAB_004061cd;
        }
      }
      local_e = '\0';
      iVar8 = iVar7;
      iVar9 = local_c;
      if (uVar4 == uVar1) {
        if (local_8 != 0x8000) goto LAB_00406070;
        local_8 = iVar7;
        if (iVar7 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_00406070;
        uVar4 = uVar4 - 0x30;
        iVar8 = iVar7 + 1;
        if (iVar8 < 1) {
          *local_38 = (short)uVar4;
          iVar9 = local_c;
          if (uVar4 == 0) {
            iVar8 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar8 = 1;
          }
        }
        else if (iVar8 < 10) {
          _local_28 = (float10)CONCAT64(auStack36._0_6_,local_28 * 10 + uVar4);
        }
        else if (iVar8 <= local_c) {
          local_40 = local_28;
          local_3c = auStack36._0_4_;
          iVar6 = FUN_00405388(&local_40,uVar4);
          iVar9 = iVar7;
          if (iVar6 == 0) {
            _local_28 = CONCAT44(local_3c,local_40);
            iVar9 = local_c;
          }
        }
      }
    }
  }
  uVar4 = 0x65;
LAB_00406070:
  iVar9 = param_5;
  if (iVar8 == -2) {
LAB_004061f8:
    param_5 = iVar9;
    local_1c = 0;
LAB_004061fd:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    _local_28 = (float10)((unkuint10)_local_28 & 0);
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar8;
    }
    iVar9 = 0;
    if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
      bVar2 = true;
LAB_00406098:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar7 = (*(code *)param_2)();
        if (!bVar2) goto LAB_004060c5;
        bVar2 = false;
        if (iVar7 != 0x2d) goto LAB_004060c0;
        local_10 = '\x01';
      }
    }
    else {
LAB_004060eb:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar9 = -iVar9;
      local_11 = -local_11;
    }
    if (iVar8 < 0) {
      _local_28 = (float10)((unkuint10)auStack36._0_6_ << 0x20);
      _local_28 = (float10)((unkuint10)_local_28 & 0xffffffff);
    }
    else if (local_11 == '\0') {
      if (local_c < iVar8) {
        iVar8 = local_c;
      }
      iVar9 = iVar9 + (local_8 - iVar8);
      FUN_00405028((int)local_28);
      _local_28 = in_ST0;
      if (iVar9 != 0) {
        iVar8 = iVar9;
        if (iVar9 < 1) {
          iVar8 = -iVar9;
        }
        FUN_00404dfc(iVar8);
        if (iVar9 < 0) {
          _local_28 = _local_28 / in_ST1;
        }
        else {
          _local_28 = in_ST1 * _local_28;
        }
      }
    }
    else {
      if (local_11 == '\x01') {
        local_38[3] = 0xffff;
        local_38[2] = 0xffff;
        local_38[1] = 0xffff;
        *local_38 = 0xffff;
        local_38[4] = 0x7ffe;
      }
      else {
        _local_28 = (float10)((unkuint10)auStack36._0_6_ << 0x20);
        _local_28 = (float10)((unkuint10)_local_28 & 0xffffffff);
      }
      local_1c = 2;
    }
  }
  if (local_d != '\0') {
    _local_28 = -_local_28;
  }
LAB_004061cd:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = local_28;
  param_1[1] = auStack36._0_4_;
  *(undefined2 *)(param_1 + 2) = auStack36._4_2_;
  return;
LAB_004060c0:
  if (iVar7 != 0x2b) {
LAB_004060c5:
    if ((iVar7 < 0x30) || (0x39 < iVar7)) goto LAB_004060eb;
    iVar9 = iVar7 + iVar9 * 10 + -0x30;
    if (0x1344 < iVar9) {
      local_11 = '\x01';
    }
  }
  goto LAB_00406098;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00406314(float *param_1,double *param_2,uint param_3)

{
  float10 in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_00405144(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_00405144(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: stack

int __cdecl
FUN_004063ac(float10 *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5)

{
  float10 fVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined4 *local_28;
  int local_18;
  undefined local_10 [8];
  ushort uStack8;
  short local_6;
  
  local_6 = 10;
  if (param_5 == 2) {
    _local_10 = (float10)*(float *)param_1;
  }
  else if (param_5 == 6) {
    _local_10 = (float10)*(double *)param_1;
  }
  else if (param_5 == 8) {
    _local_10 = *param_1;
  }
  fVar1 = _local_10;
  _local_10 = (float10)((unkuint10)_local_10 & 0xffffffffffffffff);
  *param_3 = (uint)(((unkuint10)fVar1 & 0x8000) != 0);
  uVar2 = FUN_0040507c((float10 *)local_10);
  uVar2 = uVar2 & 0x4700;
  if (uVar2 != 0x4000) {
    if (uVar2 == 0x500) {
      return 0x7fff;
    }
    if (uVar2 == 0x100) {
      return 0x7ffe;
    }
    uVar3 = ((uStack8 & 0x7fff) - 0x3fff) * 0x4d10 +
            (int)(short)(((ushort)local_10[7] * 2 & 0xff) * 0x4d);
    local_18 = (int)uVar3 >> 0x10;
    if ((uVar3 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    uVar3 = param_2;
    if ((0 < (int)param_2) || (uVar3 = local_18 - param_2, -1 < (int)uVar3)) {
      if (0x13 < (int)uVar3) {
        uVar3 = 0x13;
      }
      for (iVar7 = uVar3 - local_18; iVar7 != 0; iVar7 = iVar7 + iVar5) {
        iVar5 = iVar7;
        if (iVar7 < 0) {
          iVar5 = -iVar7;
        }
        if (0x1344 < iVar5) {
          iVar5 = 0x1344;
        }
        FUN_00404dfc(iVar5);
        if (iVar7 < 0) {
          _local_10 = _local_10 / in_ST0;
        }
        else {
          _local_10 = _local_10 * in_ST0;
          iVar5 = -iVar5;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_00404dfc(uVar3);
      if (_local_10 <= in_ST0) {
        FUN_00404dfc(uVar3 - 1);
        uVar8 = uVar3;
        if (_local_10 < in_ST1) {
          local_18 = local_18 + -1;
          uVar8 = uVar3 - 1;
          if (0 < (int)param_2) {
            _local_10 = _local_10 * (float10)(int)local_6;
            uVar8 = uVar3;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        uVar8 = uVar3 + 1;
        if (((int)uVar8 < 0x14) && (0 < (int)param_2)) {
          _local_10 = _local_10 / (float10)(int)local_6;
          uVar8 = uVar3;
        }
      }
      if (-1 < (int)uVar8) {
        FUN_00405058((longlong *)local_10,(float10 *)local_10);
        local_28 = (undefined4 *)((int)param_4 + uVar8);
        uVar3 = 0;
        *(undefined *)local_28 = 0;
        pcVar6 = (char *)((int)local_28 + -1);
        if (uVar8 == 0) {
          uVar3 = local_10[0] ^ 1;
          if (uVar3 != 0) goto LAB_00406435;
        }
        else {
          do {
            uVar4 = FUN_00405360((undefined4 *)local_10);
            uVar3 = uVar3 | (int)(char)uVar4;
            *pcVar6 = (char)uVar4 + '0';
            pcVar6 = pcVar6 + -1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (uVar3 == 0) {
          local_18 = local_18 + 1;
          if ((int)param_2 < 1) {
            *(undefined *)local_28 = 0x30;
          }
          local_28 = (undefined4 *)((int)local_28 + 1);
          pcVar6[1] = '1';
        }
        if ((int)param_2 < 1) {
          param_2 = local_18 - param_2;
        }
        if (0x28 < (int)param_2) {
          param_2 = 0x28;
        }
        *(undefined *)local_28 = 0;
        uVar3 = param_2 - ((int)local_28 - (int)param_4);
        if ((int)uVar3 < 1) {
          return local_18;
        }
        FUN_004021ac(local_28,0x30,uVar3);
        *(undefined *)((int)local_28 + uVar3) = 0;
        return local_18;
      }
    }
  }
LAB_00406435:
  if ((int)param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < (int)param_2) {
    param_2 = 0x28;
  }
  FUN_004021ac(param_4,0x30,param_2);
  *(undefined *)((int)param_4 + param_2) = 0;
  return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: stack

int __cdecl FUN_00406680(float10 *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5)

{
  float10 fVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  undefined2 *local_28;
  int local_18;
  undefined local_10 [8];
  ushort uStack8;
  short local_6;
  
  local_6 = 10;
  if (param_5 == 2) {
    _local_10 = (float10)*(float *)param_1;
  }
  else if (param_5 == 6) {
    _local_10 = (float10)*(double *)param_1;
  }
  else if (param_5 == 8) {
    _local_10 = *param_1;
  }
  fVar1 = _local_10;
  _local_10 = (float10)((unkuint10)_local_10 & 0xffffffffffffffff);
  *param_3 = (uint)(((unkuint10)fVar1 & 0x8000) != 0);
  uVar2 = FUN_0040507c((float10 *)local_10);
  uVar2 = uVar2 & 0x4700;
  if (uVar2 != 0x4000) {
    if (uVar2 == 0x500) {
      return 0x7fff;
    }
    if (uVar2 == 0x100) {
      return 0x7ffe;
    }
    uVar3 = ((uStack8 & 0x7fff) - 0x3fff) * 0x4d10 +
            (int)(short)(((ushort)local_10[7] * 2 & 0xff) * 0x4d);
    local_18 = (int)uVar3 >> 0x10;
    if ((uVar3 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    iVar8 = param_2;
    if ((0 < param_2) || (iVar8 = local_18 - param_2, -1 < iVar8)) {
      if (0x13 < iVar8) {
        iVar8 = 0x13;
      }
      for (iVar7 = iVar8 - local_18; iVar7 != 0; iVar7 = iVar7 + iVar5) {
        iVar5 = iVar7;
        if (iVar7 < 0) {
          iVar5 = -iVar7;
        }
        if (0x1344 < iVar5) {
          iVar5 = 0x1344;
        }
        FUN_00404dfc(iVar5);
        if (iVar7 < 0) {
          _local_10 = _local_10 / in_ST0;
        }
        else {
          _local_10 = _local_10 * in_ST0;
          iVar5 = -iVar5;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_00404dfc(iVar8);
      if (_local_10 <= in_ST0) {
        FUN_00404dfc(iVar8 + -1);
        iVar7 = iVar8;
        if (_local_10 < in_ST1) {
          local_18 = local_18 + -1;
          iVar7 = iVar8 + -1;
          if (0 < param_2) {
            _local_10 = _local_10 * (float10)(int)local_6;
            iVar7 = iVar8;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        iVar7 = iVar8 + 1;
        if ((iVar7 < 0x14) && (0 < param_2)) {
          _local_10 = _local_10 / (float10)(int)local_6;
          iVar7 = iVar8;
        }
      }
      if (-1 < iVar7) {
        FUN_00405058((longlong *)local_10,(float10 *)local_10);
        uVar3 = 0;
        local_28 = param_4 + iVar7;
        *local_28 = 0;
        psVar6 = local_28 + -1;
        if (iVar7 == 0) {
          uVar3 = local_10[0] ^ 1;
          if (uVar3 != 0) goto LAB_00406709;
        }
        else {
          do {
            uVar4 = FUN_00405360((undefined4 *)local_10);
            uVar3 = uVar3 | (int)(char)uVar4;
            *psVar6 = (char)uVar4 + 0x30;
            psVar6 = psVar6 + -1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (uVar3 == 0) {
          local_18 = local_18 + 1;
          if (param_2 < 1) {
            *local_28 = 0x30;
          }
          local_28 = local_28 + 1;
          psVar6[1] = 0x31;
        }
        if (param_2 < 1) {
          param_2 = local_18 - param_2;
        }
        if (0x28 < param_2) {
          param_2 = 0x28;
        }
        *local_28 = 0;
        iVar8 = (int)local_28 - (int)param_4 >> 1;
        if (iVar8 < 0) {
          iVar8 = iVar8 + (uint)(((int)local_28 - (int)param_4 & 1U) != 0);
        }
        iVar8 = param_2 - iVar8;
        if (iVar8 < 1) {
          return local_18;
        }
        FUN_00402238(local_28,0x30,iVar8);
        local_28[iVar8] = 0;
        return local_18;
      }
    }
  }
LAB_00406709:
  if (param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  FUN_00402238(param_4,0x30,param_2);
  param_4[param_2] = 0;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00406974(UINT param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  BYTE *pBVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  _cpinfo local_18;
  
  if (param_1 == 0xfffffffe) {
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    param_1 = *(UINT *)PTR_DAT_0040b59c;
  }
  if ((param_1 == 0) || (BVar1 = GetCPInfo(param_1,&local_18), BVar1 != 0)) {
    iVar3 = 0;
    puVar6 = &DAT_0040ca54;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if ((param_1 == 0) || (local_18.MaxCharSize < 2)) {
      _DAT_0040cb58 = 0;
    }
    else {
      for (pBVar5 = local_18.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar7 = &DAT_0040ca55 + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar7 = 4;
          puVar7 = puVar7 + 1;
        }
      }
      iVar3 = 1;
      pbVar8 = &DAT_0040ca56;
      do {
        *pbVar8 = *pbVar8 | 8;
        iVar3 = iVar3 + 1;
        pbVar8 = pbVar8 + 1;
      } while (iVar3 < 0xff);
      _DAT_0040cb58 = param_1;
      if (param_1 == 0x3a4) {
        uVar4 = (uint)DAT_0040b96c;
        pbVar8 = &DAT_0040ca55 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_0040b96d; uVar4 = uVar4 + 1) {
          *pbVar8 = *pbVar8 | 1;
          pbVar8 = pbVar8 + 1;
        }
        uVar4 = (uint)DAT_0040b96e;
        pbVar8 = &DAT_0040ca55 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_0040b96f; uVar4 = uVar4 + 1) {
          *pbVar8 = *pbVar8 | 2;
          pbVar8 = pbVar8 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_00406cdc((uint *)s_Error__system_code_page_access_f_0040b970);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 __cdecl FUN_00406ab0(uint param_1)

{
  undefined4 uVar1;
  
  if (0xff < param_1) {
    return 0;
  }
  uVar1 = FUN_0040454c(param_1);
  return uVar1;
}



byte * __cdecl FUN_00406acc(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  do {
    if (((&DAT_0040ca55)[*param_1] & 4) == 0) {
      if (param_2 == *param_1) {
        pbVar2 = param_1;
      }
    }
    else {
      if (param_1[1] == 0) {
        if (param_2 != 0) {
          return pbVar2;
        }
        return param_1 + 1;
      }
      if (param_2 == CONCAT11(*param_1,param_1[1])) {
        pbVar2 = param_1;
      }
      param_1 = param_1 + 1;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return pbVar2;
}



void __cdecl FUN_00406b24(uint *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char **local_8;
  
  *(undefined *)param_1 = 0;
  local_8 = (char **)&stack0x0000000c;
  while( true ) {
    pcVar1 = *local_8;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    pcVar2 = FUN_00402250(param_1);
    uVar3 = (param_2 - (int)pcVar2) - 1;
    if ((int)uVar3 < 1) break;
    FUN_004022ac((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}



void __cdecl FUN_00406b6c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  
  FUN_00406b24((uint *)&DAT_0040cb5c,0xf6);
  pcVar1 = FUN_00402250((uint *)&DAT_0040cb5c);
  FUN_004052d0(param_3,pcVar1 + 0x40cb5c);
  FUN_00406cdc((uint *)&DAT_0040cb5c);
  FUN_00406ec0();
  return;
}



undefined * __stdcall FUN_00406bcc(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  wsprintfA(&DAT_0040cc5c,s__02d__02d__04d__02d__02d__02d__0_0040b9d8,(uint)local_10.wMonth,
            (uint)local_10.wDay,(uint)local_10.wYear,(uint)local_10.wHour,(uint)local_10.wMinute,
            (uint)local_10.wSecond,(uint)local_10.wMilliseconds);
  return &DAT_0040cc5c;
}



void __cdecl FUN_00406c1c(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  uint *lpBuffer;
  char *pcVar1;
  DWORD *pDVar2;
  LPOVERLAPPED p_Var3;
  DWORD local_8;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    lpBuffer = (uint *)FUN_00406bcc();
    pDVar2 = &local_8;
    p_Var3 = (LPOVERLAPPED)0x0;
    pcVar1 = FUN_00402250(lpBuffer);
    WriteFile(hFile,lpBuffer,(DWORD)pcVar1,pDVar2,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    pDVar2 = &local_8;
    pcVar1 = FUN_00402250(param_2);
    WriteFile(hFile,param_2,(DWORD)pcVar1,pDVar2,p_Var3);
    CloseHandle(hFile);
  }
  return;
}



undefined4 __stdcall FUN_00406c84(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}



undefined4 __stdcall FUN_00406c98(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  code *lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 >> 0x10 & 0x8000) == 0) {
    return 0x2000;
  }
  lpfn = FUN_00406c84;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  else {
    uVar2 = 0x2000;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00406cdc(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_0040ba04 == (LPCSTR)0x0) && (DAT_0040ba00 == (code *)0x0)) {
    if (_DAT_0040bbf4 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_00406acc(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_00406acc(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_00406c98();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_0040ba08,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_00402250(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_0040ba0b,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_0040ba00 != (code *)0x0) {
    if (DAT_0040ba00 == (code *)0xffffffff) {
      return;
    }
    (*DAT_0040ba00)();
  }
  if (DAT_0040ba04 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_0040ba04 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_0040ba04 == '\0') {
    return;
  }
  FUN_00406c1c(DAT_0040ba04,param_1);
  return;
}



void __cdecl FUN_00406df8(uint *param_1)

{
  FUN_00406cdc(param_1);
  return;
}



void __cdecl FUN_00406e08(uint *param_1)

{
  FUN_00406cdc(param_1);
  FUN_00406f40(1);
  return;
}



void __stdcall FUN_00406eac(void)

{
  FUN_00406cdc((uint *)s_Abnormal_program_termination_0040ba38);
  FUN_00406f40(3);
  return;
}



void __stdcall FUN_00406ec0(void)

{
  FUN_004079d0(0x16);
  FUN_00406eac();
  return;
}



void __stdcall FUN_00406ed0(void)

{
  return;
}



void __cdecl FUN_00406ed4(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_0040ba58 != (code *)0x0) {
      (*DAT_0040ba58)();
    }
    FUN_00407b2c();
    (*(code *)PTR_FUN_0040ba5c)();
  }
  else {
    DAT_0040ba58 = (code *)0x0;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_0040ba60)();
      (*(code *)PTR_FUN_0040ba64)();
    }
    FUN_00407a40(param_3);
  }
  return;
}



void __cdecl FUN_00406f28(UINT param_1)

{
  FUN_00406ed4(0,0,param_1);
  return;
}



void __cdecl FUN_00406f40(UINT param_1)

{
  FUN_00406ed4(1,0,param_1);
  return;
}



void __cdecl FUN_00406f78(undefined4 *param_1,undefined4 *param_2)

{
  PTR_FUN_0040bb18 = (undefined *)*param_1;
  PTR_FUN_0040bb1c = (undefined *)*param_2;
  return;
}



void __cdecl FUN_00406f94(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}



void __cdecl FUN_00406fa8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}



void __cdecl
FUN_00406fbc(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  PTR_FUN_0040ba68 = param_1;
  PTR_LAB_0040ba6c = param_2;
  PTR_FUN_0040ba70 = param_3;
  PTR_LAB_0040ba74 = param_4;
  return;
}



void __cdecl FUN_004070a0(uint *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (DAT_0040ccb4 == DAT_0040cc80) {
    DAT_0040cc80 = DAT_0040cc80 + 0x10;
    DAT_0040cc7c = FUN_00401400(DAT_0040cc7c,DAT_0040cc80 * 4);
    if (DAT_0040cc7c == 0) {
      FUN_00406e08((uint *)s_No_space_for_command_line_argume_0040ba7c);
    }
  }
  puVar3 = param_1;
  if (param_2 != 0) {
    pcVar2 = FUN_00402250(param_1);
    puVar3 = (uint *)FUN_004013e0(pcVar2 + 1);
    if (puVar3 == (uint *)0x0) {
      FUN_00406e08((uint *)s_No_space_for_command_line_argume_0040baa6);
    }
    uVar4 = 0xffffffff;
    do {
      puVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      puVar6 = (uint *)((int)param_1 + 1);
      cVar1 = *(char *)param_1;
      param_1 = puVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    puVar6 = (uint *)((int)puVar6 - uVar4);
    puVar7 = puVar3;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar7 = *(undefined *)puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
  }
  *(uint **)(DAT_0040cc7c + DAT_0040ccb4 * 4) = puVar3;
  DAT_0040ccb4 = DAT_0040ccb4 + 1;
  return;
}



undefined4 __cdecl FUN_00407150(undefined4 param_1,uint *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  char *pcVar4;
  byte *local_c;
  uint *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; (*(char *)local_8 == ' ' || (*(char *)local_8 == '\t'));
      local_8 = (uint *)((int)local_8 + 1)) {
  }
  if (*(char *)local_8 == '\"') {
    do {
      puVar3 = local_8;
      local_8 = (uint *)((int)puVar3 + 1);
      if (*(char *)local_8 == '\"') break;
    } while (*(char *)local_8 != '\0');
    if (*(char *)local_8 == '\"') {
      local_8 = (uint *)((int)puVar3 + 2);
    }
  }
  else {
    for (; ((cVar1 = *(char *)local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'));
        local_8 = (uint *)((int)local_8 + 1)) {
    }
  }
  pcVar4 = FUN_00402250(local_8);
  DAT_0040cc88 = (byte *)FUN_004013e0(pcVar4 + 1);
  local_c = DAT_0040cc88;
  if (DAT_0040cc88 == (byte *)0x0) {
    FUN_00406e08((uint *)s_No_space_for_copy_of_command_lin_0040bad0);
  }
  while( true ) {
    if (*(char *)local_8 == '\0') {
      return 1;
    }
    bVar2 = false;
    for (; (*(char *)local_8 == ' ' || (*(char *)local_8 == '\t'));
        local_8 = (uint *)((int)local_8 + 1)) {
    }
    if (*(char *)local_8 == '\0') break;
    while (((cVar1 = *(char *)local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
      if (cVar1 == '\"') {
        local_8 = (uint *)((int)local_8 + 1);
        while ((*(char *)local_8 != '\"' && (*(char *)local_8 != '\0'))) {
          FUN_004072c4(&local_c,(byte **)&local_8);
        }
        if (*(char *)local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if ((*(char *)local_8 == '*') || (*(char *)local_8 == '?')) {
          bVar2 = true;
        }
        FUN_004072c4(&local_c,(byte **)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_0040bb18)();
    }
    else {
      (*(code *)param_3)();
    }
    if (*(char *)local_8 == '\0') {
      return 1;
    }
    local_8 = (uint *)((int)local_8 + 1);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004072c4(byte **param_1,byte **param_2)

{
  byte bVar1;
  
  if ((**param_2 == 0x5c) && ((*param_2)[1] == 0x22)) {
    **param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((_DAT_0040bacc == 0) || ((**param_2 != 0x5c || ((*param_2)[1] != 0x5c)))) {
    bVar1 = **param_2;
    if ((((&DAT_0040ca55)[bVar1] & 4) != 0) && ((*param_2)[1] != 0)) {
      **param_1 = bVar1;
      *param_2 = *param_2 + 1;
      *param_1 = *param_1 + 1;
    }
    **param_1 = **param_2;
    *param_2 = *param_2 + 1;
  }
  else {
    **param_1 = 0x5c;
    *param_2 = *param_2 + 2;
  }
  *param_1 = *param_1 + 1;
  return;
}



undefined4 __cdecl FUN_00407338(undefined4 param_1,short *param_2,undefined *param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  short *local_c;
  short *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
  }
  if (*local_8 == 0x22) {
    do {
      psVar3 = local_8;
      local_8 = psVar3 + 1;
      if (*local_8 == 0x22) break;
    } while (*local_8 != 0);
    if (*local_8 == 0x22) {
      local_8 = psVar3 + 2;
    }
  }
  else {
    for (; ((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0));
        local_8 = local_8 + 1) {
    }
  }
  iVar4 = FUN_004023bc(local_8);
  DAT_0040cc8c = (short *)FUN_004013e0(iVar4 * 2 + 2);
  local_c = DAT_0040cc8c;
  if (DAT_0040cc8c == (short *)0x0) {
    FUN_00406e08((uint *)s_No_space_for_copy_of_command_lin_0040baf4);
  }
  while( true ) {
    if (*local_8 == 0) {
      return 1;
    }
    bVar2 = false;
    for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
    }
    if (*local_8 == 0) break;
    while (((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0))) {
      if (sVar1 == 0x22) {
        local_8 = local_8 + 1;
        while ((*local_8 != 0x22 && (*local_8 != 0))) {
          FUN_004074e8(&local_c,&local_8);
        }
        if (*local_8 == 0x22) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if ((*local_8 == 0x2a) || (*local_8 == 0x3f)) {
          bVar2 = true;
        }
        FUN_004074e8(&local_c,&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_0040bb1c)();
    }
    else {
      (*(code *)param_3)();
    }
    if (*local_8 == 0) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004074e8(short **param_1,short **param_2)

{
  if ((**param_2 == 0x5c) && ((*param_2)[1] == 0x22)) {
    **param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((_DAT_0040bacc == 0) || ((**param_2 != 0x5c || ((*param_2)[1] != 0x5c)))) {
    **param_1 = **param_2;
    *param_2 = *param_2 + 1;
  }
  else {
    **param_1 = 0x5c;
    *param_2 = *param_2 + 2;
  }
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __stdcall FUN_004075dc(void)

{
  char *pcVar1;
  uint **ppuVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint **ppuVar5;
  char *pcVar6;
  uint **ppuVar7;
  int iVar8;
  
  if (DAT_0040cc90 == (uint **)0x0) {
    if ((DAT_0040ccb0 == (uint *)0x0) &&
       (DAT_0040ccb0 = (uint *)GetEnvironmentStrings(), DAT_0040ccb0 == (uint *)0x0)) {
      FUN_00406e08((uint *)s_GetEnvironmentStrings_failed_0040bb44);
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = DAT_0040ccb0;
    while (pcVar1 = FUN_00402250(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_0040cc94 = (uint *)FUN_004013e0(pcVar6 + 1);
    if (DAT_0040cc94 == (uint *)0x0) {
      return 0;
    }
    FUN_0040213c(DAT_0040cc94,DAT_0040ccb0,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (ppuVar2 = DAT_0040cc90; *ppuVar2 != (uint *)0x0; ppuVar2 = ppuVar2 + 1) {
      pcVar6 = FUN_00402250(*ppuVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0040cc98 = iVar8 + 4;
  ppuVar2 = (uint **)FUN_004011e0(iVar8 + 5,4);
  if (ppuVar2 == (uint **)0x0) {
    uVar3 = 0;
  }
  else {
    ppuVar5 = DAT_0040cc90;
    puVar4 = DAT_0040cc94;
    ppuVar7 = ppuVar2;
    if (DAT_0040cc90 == (uint **)0x0) {
      while (pcVar6 = FUN_00402250(puVar4), pcVar6 != (char *)0x0) {
        *ppuVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        ppuVar7 = ppuVar7 + 1;
      }
    }
    else {
      for (; *ppuVar5 != (uint *)0x0; ppuVar5 = ppuVar5 + 1) {
        pcVar6 = FUN_00402250(*ppuVar5);
        if (pcVar6 == (char *)0x0) {
          ppuVar7 = ppuVar7 + -1;
        }
        else {
          *ppuVar7 = *ppuVar5;
        }
        ppuVar7 = ppuVar7 + 1;
      }
    }
    if (DAT_0040cc90 != (uint **)0x0) {
      FUN_004013f0(DAT_0040cc90);
    }
    uVar3 = 1;
    DAT_0040cc90 = ppuVar2;
  }
  return uVar3;
}



int __cdecl FUN_00407748(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0040bbc0;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}



undefined4 __cdecl FUN_00407768(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  
  uVar3 = 0;
  local_c = 0;
  iVar2 = *param_1;
  if (iVar2 < -0x3fffff6f) {
    if (iVar2 == -0x3fffff70) {
      iVar2 = 2;
      uVar3 = 1;
    }
    else if (iVar2 < -0x3ffffffa) {
      if (iVar2 == -0x3ffffffb) {
        iVar2 = 3;
      }
      else if (iVar2 == -0x7ffffffd) {
        iVar2 = 1;
      }
      else {
        if (iVar2 != -0x7ffffffc) {
          return 1;
        }
        iVar2 = 1;
      }
    }
    else if (iVar2 == -0x3fffffe3) {
      iVar2 = 1;
    }
    else {
      if (iVar2 != -0x3fffff72) {
        return 1;
      }
      iVar2 = 2;
      uVar3 = 4;
    }
  }
  else {
    switch(iVar2) {
    case -0x3fffff6f:
      iVar2 = 2;
      uVar3 = 8;
      break;
    case -0x3fffff6e:
      iVar2 = 2;
      uVar3 = 0x49;
      break;
    case -0x3fffff6d:
      iVar2 = 2;
      uVar3 = 0x10;
      break;
    case -0x3fffff6c:
      iVar2 = 2;
      break;
    default:
      return 1;
    case -0x3fffff6a:
      iVar2 = 1;
    }
  }
  pcVar1 = *(code **)(&DAT_0040bb98 + iVar2 * 4);
  if (pcVar1 == (code *)0x1) {
    local_c = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    local_c = 1;
  }
  else {
    *(undefined4 *)(&DAT_0040bb98 + iVar2 * 4) = 0;
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 2)) {
      FUN_00404f84();
      FUN_00404f98(DAT_0040b850,7999);
      (*pcVar1)();
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & ~uVar3;
    }
    else {
      (*pcVar1)();
    }
  }
  return local_c;
}



undefined4 __stdcall FUN_00407948(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x15;
  }
  FUN_004079d0(iVar1);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00407970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0040bb94 == '\0') {
    DAT_0040c8b8 = FUN_00407768;
    SetConsoleCtrlHandler(FUN_00407948,1);
    DAT_0040bb94 = '\x01';
  }
  iVar2 = FUN_00407748(param_1);
  if (iVar2 == -1) {
    _DAT_0040b9fc = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_0040bb98 + iVar2 * 4);
  *(undefined4 *)(&DAT_0040bb98 + iVar2 * 4) = param_2;
  return uVar1;
}



undefined4 __cdecl FUN_004079d0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_00407748(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_0040bb98 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_00406eac();
          }
          else {
            FUN_00406f40(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_0040bb98 + iVar2 * 4) = 0;
        (*pcVar1)(pcVar1,(&DAT_0040bbe8)[iVar2],iVar4,param_1,(&DAT_0040bbe8)[iVar2],0);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



void __stdcall FUN_00407a40(UINT param_1)

{
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



undefined4 __stdcall FUN_00407a50(void)

{
  return 0;
}



undefined4 __stdcall FUN_00407a54(void)

{
  return 0;
}



void __cdecl FUN_00407a58(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint **local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 0) {
    local_10 = 0x100;
    local_14 = 1;
    iVar3 = 0;
  }
  else {
    local_10 = -1;
    local_14 = -1;
    iVar3 = 0xff;
  }
  for (; iVar3 != local_10; iVar3 = iVar3 + local_14) {
    local_18 = (uint **)(param_1 + 1);
    for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
      puVar1 = *local_18;
      if (param_2 == 0) {
        uVar5 = *puVar1;
        uVar4 = puVar1[1];
      }
      else {
        uVar5 = puVar1[2];
        uVar4 = puVar1[3];
      }
      if (param_2 == 0) {
        for (; uVar5 < uVar4; uVar5 = uVar5 + 6) {
          if ((char)iVar3 == *(char *)(uVar5 + 1)) {
            (**(code **)(uVar5 + 2))();
          }
        }
      }
      else {
        while (uVar2 = uVar4, uVar4 = uVar2 - 6, uVar5 <= uVar4) {
          if ((char)iVar3 == *(char *)(uVar2 - 5)) {
            (**(code **)(uVar2 - 4))();
          }
        }
      }
      local_18 = local_18 + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall FUN_00407b2c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (_DAT_0040bbf8 == 0) {
    _DAT_0040bbf8 = 1;
    FUN_00407a58((int *)&DAT_0040ccd4,1);
    FUN_00407a58((int *)&DAT_0040ccb8,1);
    piVar1 = (int *)FUN_00407a54();
    if (piVar1 != (int *)0x0) {
      FUN_00407a58(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}



WORD __stdcall FUN_00407d1c(void)

{
  undefined auStack68 [48];
  WORD local_14;
  
  GetStartupInfoA((LPSTARTUPINFOA)auStack68);
  if ((auStack68[44] & 1) == 0) {
    local_14 = 10;
  }
  return local_14;
}



void __stdcall FUN_00407d44(DWORD param_1)

{
  TlsFree(param_1);
  return;
}



void __stdcall FUN_00407d54(DWORD param_1)

{
  TlsGetValue(param_1);
  return;
}



void __stdcall FUN_00407d64(DWORD param_1,LPVOID param_2)

{
  TlsSetValue(param_1,param_2);
  return;
}



void __stdcall FUN_00407d78(void)

{
  return;
}



void __stdcall FUN_00407d80(void)

{
  return;
}



void FUN_00407db7(undefined *UNRECOVERED_JUMPTABLE)

{
                    // WARNING: Could not recover jumptable at 0x00407dbb. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



int __cdecl FUN_00407dbe(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004013e0(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = FUN_00401140();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_00407deb;
  }
  FUN_00406ec0();
LAB_00407deb:
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = FUN_00401140();
  return *(int *)(iVar1 + 0x14);
}



void __cdecl FUN_00407e08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  if (param_1 == *(int *)(iVar1 + 0x14)) {
    iVar1 = FUN_00401140();
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    return;
  }
  FUN_004013f0(param_1);
  return;
}



undefined4 __cdecl FUN_00407e35(int *param_1,undefined4 param_2,int *param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_00402a4c(param_1,param_3,0,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_3 + 1);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_00402a4c(param_1,(int *)param_3[2],1,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = *(ushort *)((int *)param_3[2] + 1);
    if ((uVar2 & 0x10) == 0) {
      return 0;
    }
    iVar3 = FUN_00402a4c(param_1,(int *)param_3[2],0,param_2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if ((param_4 & 1) != 0) {
      return 1;
    }
    if ((uVar1 & 0x10) == 0) {
      return 0;
    }
    if ((((uVar2 & 0x40) != 0) && (((uVar2 & 0x100) != 0 || ((uVar1 & 0x100) == 0)))) &&
       (((uVar2 & 0x200) != 0 || ((uVar1 & 0x200) == 0)))) {
      return 1;
    }
  }
  return 0;
}



void __cdecl FUN_00407efb(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_00406b6c(s__ctorMask___0x0100_____0_____cto_0040bcd8,s_xx_cpp_0040bd0d,0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_00406b6c(s__ctorMask___0x0080_____0_0040bd14,s_xx_cpp_0040bd2d,0x207);
  }
  if ((param_4 & 0x1000) == 0) {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_00406b6c(s___what___0040bd50,s_xx_cpp_0040bd59,0x25e);
    }
  }
  else {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,0,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_00406b6c(s___what___0040bd3a,s_xx_cpp_0040bd43,0x232);
    }
  }
  return;
}



int __cdecl FUN_00408009(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    while (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



void __cdecl FUN_00408021(ULONG_PTR param_1,int param_2)

{
  RaiseException(0xeedfae6,0,param_2 + 2,&param_1);
  return;
}



void __cdecl
FUN_0040803e(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6
            )

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  if ((param_3 & 2) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*DAT_0040cce4 == 2) {
    pcVar1 = FUN_00402938(param_2);
    FUN_00408009(pcVar1);
    FUN_00408021(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_00406b6c(s__dtorMask___0x0080_____0_0040bd60,s_xx_cpp_0040bd79,0x2cd);
  }
  uVar3 = param_5 & 7;
  if (uVar3 == 1) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 2) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 3) {
    (*(code *)param_4)(param_1,uVar2);
  }
  else if (uVar3 == 5) {
    (*(code *)param_4)();
  }
  else {
    FUN_00406b6c(s___what___0040bd86,s_xx_cpp_0040bd8f,0x2f4);
  }
  return;
}



void __cdecl FUN_0040810e(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_00406b6c(s__mfnMask___0x0080_____0_0040bd96,s_xx_cpp_0040bdae,0x2fc);
  }
  uVar1 = param_3 & 7;
  if (uVar1 == 1) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 2) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 3) {
    (*(code *)param_2)(param_1);
    return;
  }
  if (uVar1 == 5) {
    (*(code *)param_2)();
    return;
  }
  FUN_00406b6c(s___what___0040bdbb,s_xx_cpp_0040bdc4,0x323);
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl
FUN_0040818c(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined in_CL;
  undefined in_DL;
  int iVar6;
  undefined1 unaff_DI;
  undefined2 in_FS;
  ULONG_PTR local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00402414((int)&DAT_0040bc20,in_DL,in_CL,unaff_DI);
  iVar4 = FUN_00401140();
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 2;
  iVar4 = FUN_00401140();
  if (param_1 == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)((int)param_1 + 6) + (int)param_1;
  }
  *(int *)(iVar4 + 0x10) = iVar6;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 0xc) = param_7;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 8) = param_8;
  local_2c = param_1;
  uVar2 = *(ushort *)(param_1 + 1);
  uVar3 = *param_1;
  if ((uVar2 & 2) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[3];
  }
  if ((uVar2 & 0x30) != 0) {
    local_2c = (uint *)param_1[2];
  }
  local_34 = (undefined4 *)FUN_00407dbe(uVar3 + 0x52);
  *local_34 = 0;
  local_34[1] = param_1;
  local_34[3] = param_6;
  local_34[4] = uVar3;
  *(ushort *)(local_34 + 6) = uVar2;
  *(undefined2 *)((int)local_34 + 0x1a) = (undefined2)local_30;
  local_34[5] = local_2c;
  local_34[2] = param_3;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[7] = FUN_00407e08;
  local_34[0xd] = param_7;
  local_34[0xe] = param_8;
  local_34[8] = param_4;
  local_34[9] = param_5;
  *(undefined *)((int)local_34 + 0x45) = 0;
  *(undefined *)(local_34 + 0x11) = 1;
  FUN_0040213c((undefined4 *)((int)local_34 + 0x52),param_2,uVar3);
  if ((*DAT_0040cce4 == 1) || (*DAT_0040cce4 == 2)) {
    pcVar5 = FUN_00402938((int)param_1);
    FUN_00408009(pcVar5);
    FUN_00408021(1,0xb);
  }
  if ((local_30 & 1) != 0) {
    if (param_4 == (undefined *)0x0) {
      FUN_00406b6c(s_cctrAddr_0040bdcb,s_xx_cpp_0040bdd4,0x445);
    }
    local_38 = DAT_0040cce0;
    local_18 = 8;
    FUN_00407efb((int)local_34 + 0x52,param_2,param_4,param_5);
    local_18 = 0;
    DAT_0040cce0 = local_38;
  }
  iVar4 = FUN_00401140();
  local_44 = *(ULONG_PTR *)(iVar4 + 0x10);
  local_40 = param_9;
  local_3c = local_34;
  RaiseException(0xeefface,1,3,&local_44);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}



void __cdecl FUN_00408411(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000000;
  
  piVar2 = (int *)FUN_00401140();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_00402ca4();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    puVar3 = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0x52);
  }
  FUN_0040818c(*(uint **)(iVar1 + 4),puVar3,*(undefined4 *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20)
               ,*(uint *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0xc),param_1,param_2,
               in_stack_00000000);
  return;
}



void __cdecl FUN_0040847c(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  EXCEPTION_RECORD local_54;
  
  if (param_2 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    param_2 = &local_54;
    local_54.NumberParameters = 0;
  }
  param_2->ExceptionFlags = param_2->ExceptionFlags | 2;
  FUN_00402f9a(param_1,param_2);
  return;
}



void __cdecl FUN_004084bb(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined in_CL;
  undefined in_DL;
  undefined1 unaff_DI;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_00402414((int)&DAT_0040bc54,in_DL,in_CL,unaff_DI);
  if (param_3 == (undefined *)0x0) {
    FUN_00406b6c(s_dtorAddr_0040bddb,s_xx_cpp_0040bde4,0x5b9);
  }
  FUN_0040803e(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}



void __cdecl FUN_00408530(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0040cce0;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_004084bb(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_0040cce0 = uVar2;
    *(undefined *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_00406b6c(s_argType_0040bdeb,s_xx_cpp_0040bdf3,0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_004084bb(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined *)(param_1 + 0x45) = 0;
  }
  return;
}



// WARNING: Unable to track spacebase fully for stack

void __stdcall FUN_004085b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_00401140();
  if (*piVar4 == 0) {
    FUN_00406b6c(s___CPPexceptionList_0040bdfa,s_xx_cpp_0040be0d,0x629);
  }
  piVar4 = (int *)FUN_00401140();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_00401140();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_00406b6c(&DAT_0040be14,s_xx_cpp_0040be17,0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_00406b6c(s_xdrPtr__xdERRaddr____xl_0040be1e,s_xx_cpp_0040be36,0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_00408530((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_0040cce4 == 2) {
    FUN_00408021(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}



void __cdecl FUN_004086a9(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int **ppiVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  int **local_c;
  uint local_8;
  
  if (*(int *)(param_3 + 0x28) != param_2) {
    FUN_00406b6c(s_dscPtr__xdERRaddr____errPtr_0040be3d,s_xx_cpp_0040be59,0x722);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_00406b6c(s_dscPtr__xdHtabAdr____hdtPtr_0040be60,s_xx_cpp_0040be7c,0x723);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_00406b6c(s_dscPtr__xdArgCopy____0_0040be83,s_xx_cpp_0040be9a,0x725);
  }
  puVar6 = *(uint **)(param_1 + 4);
  *(uint **)(param_3 + 0x3c) = puVar6;
  if ((puVar6 != (uint *)0x0) && ((*(byte *)(param_1 + 8) & 0x80) == 0)) {
    bVar7 = (*(byte *)(param_1 + 8) & 1) == 0;
    local_c = (int **)(param_3 + 0x52);
    *(undefined *)(param_3 + 0x45) = 1;
    *(int *)(param_3 + 0x40) = *param_4 + param_5;
    uVar1 = *(ushort *)(puVar6 + 1);
    uVar3 = *puVar6;
    uVar2 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      puVar6 = (uint *)puVar6[2];
      uVar2 = *(ushort *)(puVar6 + 1);
    }
    local_8 = (uint)uVar2;
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      if (((uVar2 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar3 != *(uint *)(param_3 + 0x10)) {
              FUN_00406b6c(s_dscPtr__xdSize____size_0040bf48,s_xx_cpp_0040bf5f,0x7f8);
            }
            FUN_0040213c(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            FUN_0040213c(*(undefined4 **)(param_3 + 0x40),&local_c,uVar3);
            bVar7 = true;
          }
        }
        else {
          if (*(int *)(param_3 + 4) != *(int *)(param_3 + 0x14)) {
            FUN_00406b6c(s_dscPtr__xdTypeID____dscPtr__xdBa_0040bf04,s_xx_cpp_0040bf27,0x7b6);
          }
          iVar5 = FUN_00402970(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar5 == 0) {
            local_c = (int **)FUN_00402b5c((int *)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar5 == 0 || bVar7;
          if ((*(byte *)(puVar6 + 3) & 1) == 0) {
            FUN_0040213c(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_00406b6c(s_hdtPtr__HDcctrAddr_0040bf2e,s_xx_cpp_0040bf41,2000);
            }
            FUN_00407efb(*(undefined4 *)(param_3 + 0x40),local_c,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_00406b6c(s_mask___TM_IS_PTR_0040beca,s_xx_cpp_0040bedb,0x795);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_00406b6c(s_dscPtr__xdMask___TM_IS_PTR_0040bee2,s_xx_cpp_0040befd,0x796);
          }
          local_c = (int **)*local_c;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_00406b6c(s__dscPtr__xdMask___TM_IS_PTR_____0_0040bea1,s_xx_cpp_0040bec3,0x782);
          }
          bVar7 = true;
        }
        iVar5 = FUN_00402970(*(int **)(param_3 + 0x14),(int *)puVar6);
        ppiVar4 = local_c;
        if (iVar5 == 0) {
          local_c = (int **)FUN_00402b5c((int *)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          if (local_c != ppiVar4) {
            bVar7 = true;
          }
        }
        FUN_0040213c(*(undefined4 **)(param_3 + 0x40),&local_c,uVar3);
      }
    }
    else {
      FUN_004021ac(*(undefined4 **)(param_3 + 0x40),0,uVar3);
      bVar7 = true;
    }
    if ((!bVar7) && ((local_8 & 3) != 0)) {
      if ((*(byte *)(puVar6 + 3) & 2) != 0) {
        FUN_004084bb(local_c,(int)puVar6,(undefined *)puVar6[10],(uint)*(ushort *)(puVar6 + 0xb));
      }
      *(undefined *)(param_3 + 0x44) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040897d(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  
  puVar5 = &stack0xfffffffc;
  uVar6 = (uint)*(ushort *)(param_1 + 0x10);
  while ((uVar4 = uVar6, uVar4 != 0 && (uVar4 != *(uint *)(puVar5 + 0xc)))) {
    uVar6 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    uVar3 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4 + 2);
    *(ushort *)(*(int *)(puVar5 + 8) + 0x10) = *(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    if (uVar3 == 0) {
      _DAT_0040cce8 = *(undefined4 *)(*(int *)(puVar5 + -4) + 4 + uVar4 + 4);
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 1;
      FUN_00402faf();
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 0;
    }
    else if (2 < uVar3 - 1) {
      if (uVar3 == 4) {
        uVar2 = FUN_00401140();
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        while ((puVar1 = (undefined4 *)**(int **)(puVar5 + -0x10), puVar1 != (undefined4 *)0x0 &&
               ((puVar1[10] != *(int *)(puVar5 + 8) || (uVar4 != puVar1[0xc]))))) {
          *(undefined4 **)(puVar5 + -0x10) = puVar1;
        }
        if ((puVar1 == (undefined4 *)0x0) || (puVar1 != (undefined4 *)**(int **)(puVar5 + -0x10))) {
          FUN_00406b6c(s_xdrPtr____xdrPtr_____xdrLPP_0040bf66,s_xx_cpp_0040bf82,0x8ba);
        }
        **(undefined4 **)(puVar5 + -0x10) = *puVar1;
        FUN_00408530((int)puVar1);
        (*(code *)puVar1[7])();
      }
      else if (uVar3 - 1 == 4) {
        uVar2 = FUN_00409456(*(int **)(*(int *)(puVar5 + -4) + uVar4 + 8),
                             *(int *)(*(int *)(puVar5 + -4) + uVar4 + 4) + *(int *)(puVar5 + -0xc),
                             *(int *)(puVar5 + 8),*(int *)(puVar5 + -8));
        *(undefined4 *)(puVar5 + -0xc) = uVar2;
      }
      else {
        FUN_00406b6c(s___bogus_context_in_Local_unwind__0040bfa9,s_xx_cpp_0040bfcc,0x8e9);
      }
    }
  }
  return;
}



void __cdecl FUN_00408ae8(int param_1)

{
  FUN_0040897d(param_1);
  return;
}



void __cdecl FUN_00408afb(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_0040897d((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}



int * __cdecl FUN_00408b17(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_00407e35(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00408b5c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int **ppiVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined *UNRECOVERED_JUMPTABLE;
  int *piVar10;
  undefined2 in_FS;
  
  puVar8 = &stack0xfffffffc;
  iVar9 = param_1[7];
  piVar10 = (int *)param_2[2];
  if (*param_1 == 0xeedfae6) {
    uVar1 = 0;
  }
  else {
    FUN_00405010();
    if ((*(byte *)(param_1 + 1) & 6) == 0) {
      uVar7 = (uint)*(ushort *)(param_2 + 4);
      while (uVar7 != 0) {
        *(uint *)(puVar8 + -8) = (uint)*(ushort *)((int)piVar10 + uVar7);
        *(uint *)(puVar8 + -0x14) = (uint)*(ushort *)((int)piVar10 + uVar7 + 2);
        iVar9 = uVar7 + 4;
        switch(*(undefined4 *)(puVar8 + -0x14)) {
        case 0:
        case 4:
        case 5:
          break;
        case 1:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(puVar8 + -0x28) = *(undefined4 *)(puVar8 + 8);
            *(undefined4 *)(puVar8 + -0x24) = *(undefined4 *)(puVar8 + 0x10);
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            *(undefined **)(*(int *)(puVar8 + 0xc) + 0x18) = puVar8 + -0x28;
            _DAT_0040ccec = *(undefined4 *)((int)piVar10 + iVar9);
            iVar2 = FUN_00402faf();
LAB_00408e47:
            if (iVar2 < 0) {
              if ((*(byte *)(*(int *)(puVar8 + 8) + 4) & 1) != 0) {
                *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -8);
              }
              return 0;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x18) = 0;
              *(undefined4 *)(puVar8 + -0x20) = *(undefined4 *)(puVar8 + -8);
              UNRECOVERED_JUMPTABLE = *(undefined **)((int)piVar10 + iVar9 + 4);
LAB_00408d1a:
              FUN_0040847c(*(PVOID *)(puVar8 + 0xc),*(PEXCEPTION_RECORD *)(puVar8 + 8));
              FUN_0040897d(*(int *)(puVar8 + 0xc));
              *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -0x20);
              if (*(int *)(puVar8 + -0x14) == 3) {
                FUN_004086a9(*(int *)(puVar8 + -0x18),*(int *)(puVar8 + 0xc),*(int *)(puVar8 + -4),
                             *(int **)(puVar8 + -0x1c),*(int *)(puVar8 + -0xc));
              }
              iVar9 = FUN_00401140();
              *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffd;
              if ((*DAT_0040cce4 == 2) && (*(int *)(puVar8 + -0x14) == 3)) {
                pcVar5 = FUN_00402938(*(int *)(*(int *)(puVar8 + -4) + 4));
                FUN_00408009(pcVar5);
                FUN_00408021(3,5);
              }
              FUN_00407db7(UNRECOVERED_JUMPTABLE);
            }
          }
          break;
        case 2:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            iVar2 = *(int *)((int)piVar10 + iVar9);
            goto LAB_00408e47;
          }
          break;
        case 3:
          if (**(int **)(puVar8 + 8) == 0xeefface) {
            *(undefined4 *)(puVar8 + -0x1c) = *(undefined4 *)((int)piVar10 + iVar9);
            piVar3 = FUN_00408b17(*(int *)(puVar8 + -0x1c),*(int *)(puVar8 + -4));
            *(int **)(puVar8 + -0x18) = piVar3;
            if (*(int *)(puVar8 + -0x18) != 0) {
              if (((*DAT_0040cce4 == 1) || (*DAT_0040cce4 == 2)) &&
                 ((**(uint **)(puVar8 + 8) < 0xeedface || (0xeefface < **(uint **)(puVar8 + 8))))) {
                FUN_00408021(2,3);
              }
              puVar4 = (undefined4 *)FUN_00401140();
              **(undefined4 **)(puVar8 + -4) = *puVar4;
              puVar4 = (undefined4 *)FUN_00401140();
              *puVar4 = *(undefined4 *)(puVar8 + -4);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x28) = *(undefined4 *)(puVar8 + 0xc);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x2c) = *(undefined4 *)(puVar8 + -0x18);
              *(uint *)(*(int *)(puVar8 + -4) + 0x30) = uVar7 + 8;
              *(uint *)(puVar8 + -0x20) = uVar7 + 8;
              UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(puVar8 + -0x18);
              goto LAB_00408d1a;
            }
          }
          break;
        default:
          FUN_00406b6c(s___bogus_context_in__ExceptionHan_0040bff8,s_xx_cpp_0040c020,0xc00);
        }
        uVar7 = *(uint *)(puVar8 + -8);
      }
      uVar1 = 1;
    }
    else {
      FUN_0040897d((int)param_2);
      if ((*param_1 == 0xeefface) && (ppiVar6 = (int **)*piVar10, ppiVar6 != (int **)0x0)) {
        for (; *ppiVar6 != (int *)0x0; ppiVar6 = ppiVar6 + 1) {
          iVar2 = FUN_00407e35(*(int **)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),*ppiVar6,
                               (byte)*(undefined4 *)(iVar9 + 0xc));
          if (iVar2 != 0) goto LAB_00408c0c;
        }
        puVar4 = (undefined4 *)segment(in_FS,0);
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = *param_2;
        FUN_00402d18();
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = uVar1;
      }
LAB_00408c0c:
      uVar1 = 1;
    }
  }
  return uVar1;
}



void __cdecl FUN_00408eb9(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined in_CL;
  undefined in_DL;
  undefined1 unaff_DI;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_00402414((int)&DAT_0040bca8,in_DL,in_CL,unaff_DI);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_00406b6c(s_varType__tpClass_tpcFlags___CF_H_0040c027,s_xx_cpp_0040c04f,0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_00406b6c(s_varType__tpClass_tpcDtorAddr_0040c056,s_xx_cpp_0040c073,0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_00406b6c(s__errPtr__ERRcInitDtc____varType__0040c07a,s_xx_cpp_0040c0ba,0xc28);
  }
  if ((param_3 & 2) == 0) {
    if (param_4 == 0) {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar2;
  }
  FUN_0040803e(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}



void __cdecl FUN_00408fb0(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  while (piVar2 = param_3 + -3, param_4 <= piVar2) {
    puVar1 = (undefined4 *)(param_3[-2] + param_1);
    if (in_stack_00000018 != 0) {
      puVar1 = (undefined4 *)*puVar1;
    }
    param_3 = piVar2;
    if ((*(byte *)(*piVar2 + 0xc) & 2) != 0) {
      FUN_00408ffb(puVar1,*piVar2,param_2,in_stack_00000014,0,in_stack_0000001c,in_stack_00000020);
      in_stack_00000014 = 0;
    }
  }
  return;
}



void __cdecl
FUN_00408ffb(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6,
            int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_00406b6c(s_varType__tpClass_tpcFlags___CF_H_0040c0c1,s_xx_cpp_0040c0e9,0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_00408eb9(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_00406b6c(s_dtorCnt___varCount_0040c0f0,s_xx_cpp_0040c103,0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_00406b6c(s_IS_STRUC_blType__tpMask__0040c10a,s_xx_cpp_0040c123,0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_00408fb0(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_00406b6c(s_IS_STRUC_blType__tpMask__0040c12a,s_xx_cpp_0040c143,0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_00408fb0(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_00408fb0(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar2 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        FUN_00406b6c(s_memType_0040c14a,s_xx_cpp_0040c152,0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_00406b6c(s_memType__tpClass_tpcFlags___CF_H_0040c159,s_xx_cpp_0040c181,0xd73);
      }
      local_1c = local_1c * *(int *)(iVar2 + 0x20);
      if (param_4 <= local_1c) break;
      param_4 = param_4 - local_1c;
      piVar6 = piVar6 + 2;
    }
    do {
      iVar2 = *piVar6;
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (local_1c < 2) {
        FUN_00408ffb(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_004092ab(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_00408fb0(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_00408fb0(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}



void __cdecl FUN_004092ab(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_00406b6c(s_varType__tpMask___TM_IS_ARRAY_0040c188,s_xx_cpp_0040c1a6,0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_00406b6c(s_varType__tpArr_tpaElemType__tpCl_0040c1ad,s_xx_cpp_0040c1e8,0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_00406b6c(s_vdtCount_0040c1ef,s_xx_cpp_0040c1f8,0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_00406b6c(s_etdCount____elemCount____elemCou_0040c1ff,s_xx_cpp_0040c227,0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_00406b6c(s_dtrCount____vdtCount_0040c22e,s_xx_cpp_0040c243,0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_00408ffb(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_00408ffb(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}



int __cdecl FUN_004093cf(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_00406b6c(s_IS_CLASS_varType__tpMask__0040c24a,s_xx_cpp_0040c264,0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_00406b6c(s___unsigned___far___vftAddr___1____0040c26b,s_xx_cpp_0040c290,0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}



undefined4 __cdecl FUN_00409456(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_8 = *(int *)(param_3 + 0x1c) - param_2;
    if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 1) & 0x11) == 0) {
        FUN_00406b6c(s_dttPtr__dttFlags____DTCVF_PTRVAL_0040c297,s_xx_cpp_0040c2c6,0xe78);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_00406b6c(s_dttPtr__dttType__tpMask___TM_IS__0040c2cd,s_xx_cpp_0040c2f1,0xe7c);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_00406b6c(s_dttPtr__dttType__tpPtr_tppBaseTy_0040c2f8,s_xx_cpp_0040c33b,0xe7d);
      }
      local_8 = *(uint *)(*(int *)(*param_1 + 8) + 0x20);
    }
    if ((*(byte *)((int)param_1 + 5) & 1) == 0) {
      piVar5 = param_1;
      if (((int)local_8 < 1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
        if ((param_1[1] & 3U) != 3) {
          return 0;
        }
        local_c = local_c + 1;
      }
      else {
        for (; *piVar5 != 0; piVar5 = piVar5 + 3) {
          if ((*(byte *)((int)piVar5 + 5) & 0x10) == 0) {
            local_10 = *piVar5;
          }
          else {
            if ((*(byte *)(*piVar5 + 5) & 4) == 0) {
              FUN_00406b6c(s_dtvtPtr__dttType__tpMask___TM_IS_0040c3a0,s_xx_cpp_0040c3c7,0xed7);
            }
            local_10 = *(int *)(*piVar5 + 8);
          }
          iVar8 = 1;
          if (((((*(byte *)(local_10 + 4) & 0x10) != 0) &&
               (local_10 = *(int *)(local_10 + 8), (*(byte *)(local_10 + 4) & 2) != 0)) &&
              ((*(byte *)(local_10 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar5 + 1) & 8) != 0)) {
            iVar6 = 0;
            if ((*(byte *)(local_10 + 0xc) & 2) == 0) {
              FUN_00406b6c(s_varType__tpClass_tpcFlags___CF_H_0040c3ce,s_xx_cpp_0040c3f6,0xef7);
            }
            if ((*(byte *)(piVar5 + 1) & 4) == 0) {
              local_14 = (int *)piVar5[2];
            }
            else {
              local_14 = (int *)(param_4 + piVar5[2]);
            }
            iVar1 = *local_14;
            if ((*(byte *)((int)piVar5 + 5) & 0x10) != 0) {
              iVar6 = local_14[1];
            }
            local_14 = (int *)iVar1;
            if ((*(byte *)(piVar5 + 1) & 0x40) != 0) {
              local_14 = (int *)(iVar1 + 4);
            }
            local_14 = (int *)FUN_004093cf((int)local_14,&local_10,iVar6);
          }
          iVar6 = local_10;
          if ((*(byte *)(local_10 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_10 + 0xc);
            iVar6 = *(int *)(local_10 + 8);
          }
          if ((*(byte *)(iVar6 + 0xc) & 2) == 0) {
            FUN_00406b6c(s_elemType__tpClass_tpcFlags___CF__0040c3fd,s_xx_cpp_0040c426,0xf22);
          }
          uVar7 = iVar8 * *(int *)(iVar6 + 0x20);
          if (local_8 <= uVar7) goto LAB_00409691;
          local_8 = local_8 - uVar7;
        }
        piVar5 = piVar5 + -3;
      }
LAB_00409691:
      do {
        local_18 = *piVar5;
        uVar7 = piVar5[1];
        if ((uVar7 & 4) == 0) {
          local_1c = (int *)piVar5[2];
        }
        else {
          local_1c = (int *)(param_4 + piVar5[2]);
        }
        if ((uVar7 & 0x1000) != 0) {
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00406b6c(s_varType__tpMask___TM_IS_ARRAY_0040c42d,s_xx_cpp_0040c44b,0xf52);
          }
          local_18 = *(int *)(local_18 + 8);
        }
        if ((uVar7 & 0x11) != 0) {
          iVar8 = 0;
          if ((*(byte *)(local_18 + 4) & 0x10) == 0) {
            FUN_00406b6c(s_varType__tpMask___TM_IS_PTR_0040c452,s_xx_cpp_0040c46e,0xf5c);
          }
          local_18 = *(int *)(local_18 + 8);
          local_20 = (int *)*local_1c;
          if ((uVar7 & 0x1000) != 0) {
            iVar8 = local_1c[1];
          }
          local_1c = local_20;
          if ((uVar7 & 0x48) == 0x40) {
            local_1c = local_20 + 1;
          }
          if ((((*(byte *)(local_18 + 4) & 2) != 0) && ((*(byte *)(local_18 + 0xc) & 0x20) != 0)) &&
             ((uVar7 & 8) != 0)) {
            local_20 = (int *)FUN_004093cf((int)local_1c,&local_18,iVar8);
            local_1c = local_20;
          }
        }
        if (local_c == 0) {
          if ((uVar7 & 0x400) == 0) {
            uVar4 = 0;
          }
          else {
            if (*(short *)(local_18 + 0x10) == 0) {
              uVar4 = 0;
            }
            else {
              piVar9 = (int *)((uint)*(ushort *)(local_18 + 0x10) + local_18);
              if (piVar9 == (int *)0x0) {
                FUN_00406b6c(&DAT_0040c475,s_xx_cpp_0040c478,0xf92);
              }
              uVar4 = *(uint *)(*piVar9 + 0x20);
            }
            if (local_8 < uVar4) {
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
            }
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00408ffb(local_1c,local_18,uVar4,local_8,1,param_4,param_3);
          }
          else {
            FUN_004092ab((int)local_1c,local_18,local_8,param_4,param_3);
          }
          if ((((uVar7 & 0x400) != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
             (*(char *)(param_3 + 0x20) != -1)) {
            (**(code **)(*local_1c + -8))(local_1c);
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((uVar7 & 0x48) == 0x48) {
            local_20 = local_20 + -1;
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            if (*(int *)(local_18 + 0x14) == 0) {
              FUN_0040120c(local_20);
            }
            else {
              FUN_0040810e(local_20,*(undefined **)(local_18 + 0x14),
                           (uint)*(ushort *)(local_18 + 0x18));
            }
          }
          else {
            local_18 = *(int *)(local_18 + 8);
            if (*(int *)(local_18 + 0x1c) == 0) {
              FUN_0040121c(local_20);
            }
            else {
              FUN_0040810e(local_20,*(undefined **)(local_18 + 0x1c),
                           (uint)*(ushort *)(local_18 + 0x1a));
            }
          }
        }
        local_8 = 0;
        bVar2 = param_1 < piVar5;
        piVar5 = piVar5 + -3;
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      if (((*(byte *)(*param_1 + 4) & 2) == 0) || ((*(byte *)(*param_1 + 0xc) & 2) == 0)) {
        FUN_00406b6c(s_IS_CLASS_dttPtr__dttType__tpMask_0040c342,s_xx_cpp_0040c399,0xe8b);
      }
      uVar3 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar3;
}



uint __cdecl FUN_004098da(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  if (**(short **)(param_1 + 4) == 0x25ff) {
    iVar1 = **(int **)(*(int *)(param_1 + 4) + 2);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  iVar1 = FUN_0040231c((byte *)(iVar1 + -8),(byte *)s___BCCxh1_0040c47f,8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409930. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = CloseHandle();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409936. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (HANDLE)CreateFileA();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __stdcall ExitProcess(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x0040993c. Too many branches
                    // WARNING: Treating indirect jump as call
  ExitProcess();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

UINT __stdcall GetACP(void)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409942. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = GetACP();
  return UVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409948. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetCPInfo();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040994e. Too many branches
                    // WARNING: Treating indirect jump as call
  pCVar1 = (LPSTR)GetCommandLineA();
  return pCVar1;
}



// WARNING: Exceeded maximum restarts with more pending

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409954. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



// WARNING: Exceeded maximum restarts with more pending

LPCH __stdcall GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040995a. Too many branches
                    // WARNING: Treating indirect jump as call
  pCVar1 = (LPCH)GetEnvironmentStrings();
  return pCVar1;
}



// WARNING: Exceeded maximum restarts with more pending

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409960. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetFileType();
  return DVar1;
}



// WARNING: Exceeded maximum restarts with more pending

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409966. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetLastError();
  return DVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    // WARNING: Could not recover jumptable at 0x0040996c. Too many branches
                    // WARNING: Treating indirect jump as call
  GetLocalTime();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409972. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetModuleFileNameA();
  return DVar1;
}



// WARNING: Exceeded maximum restarts with more pending

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409978. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = (HMODULE)GetModuleHandleA();
  return pHVar1;
}



// WARNING: Exceeded maximum restarts with more pending

UINT __stdcall GetOEMCP(void)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040997e. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = GetOEMCP();
  return UVar1;
}



// WARNING: Exceeded maximum restarts with more pending

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409984. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FARPROC)GetProcAddress();
  return pFVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    // WARNING: Could not recover jumptable at 0x00409990. Too many branches
                    // WARNING: Treating indirect jump as call
  GetStartupInfoA();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409996. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (HANDLE)GetStdHandle();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040999c. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetStringTypeW();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099a2. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetVersion();
  return DVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __stdcall GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    // WARNING: Could not recover jumptable at 0x004099ae. Too many branches
                    // WARNING: Treating indirect jump as call
  GlobalMemoryStatus();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099c6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MultiByteToWideChar();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    // WARNING: Could not recover jumptable at 0x004099cc. Too many branches
                    // WARNING: Treating indirect jump as call
  RaiseException();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __stdcall
RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x004099d2. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099d8. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = SetConsoleCtrlHandler();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099de. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = SetFilePointer();
  return DVar1;
}



// WARNING: Exceeded maximum restarts with more pending

UINT __stdcall SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099e4. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = SetHandleCount();
  return UVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099f0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TlsFree();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099f6. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (LPVOID)TlsGetValue();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x004099fc. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TlsSetValue();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a02. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = UnhandledExceptionFilter();
  return LVar1;
}



// WARNING: Exceeded maximum restarts with more pending

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a08. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (LPVOID)VirtualAlloc();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a0e. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VirtualFree();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WideCharToMultiByte();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a1a. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = WriteFile();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a20. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = EnumThreadWindows();
  return BVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a26. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MessageBoxA();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl wsprintfA(LPSTR param_1,LPCSTR param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00409a2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = wsprintfA();
  return iVar1;
}


