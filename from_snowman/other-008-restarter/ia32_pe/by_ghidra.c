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
typedef ushort WORD;

typedef void * LPCVOID;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

struct HWND__ {
    int unused;
};

typedef void * LPVOID;

typedef ulong DWORD;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef void * HANDLE;

typedef HANDLE HLOCAL;

typedef struct _FILETIME FILETIME;

typedef int BOOL;

typedef uchar BYTE;

typedef BYTE * LPBYTE;

typedef uint UINT;

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

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef wchar_t WCHAR;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef WCHAR * LPWSTR;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
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

typedef struct _STARTUPINFOW * LPSTARTUPINFOW;

typedef struct _PROCESS_INFORMATION * LPPROCESS_INFORMATION;

typedef struct _WIN32_FIND_DATAW * LPWIN32_FIND_DATAW;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef WCHAR * LPCWSTR;

typedef char * va_list;

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

typedef ulong ULONG_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[19];
};




void FUN_00401000(undefined4 param_1)

{
  LPCWSTR in_EAX;
  DWORD dwMessageId;
  int iVar1;
  int iVar2;
  LPWSTR lpText;
  LPCWSTR local_8;
  
  dwMessageId = GetLastError();
  FormatMessageW(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPWSTR)&local_8,0,(va_list *)0x0);
  iVar1 = lstrlenW(local_8);
  iVar2 = lstrlenW(in_EAX);
  lpText = (LPWSTR)LocalAlloc(0x40,(iVar1 + iVar2) * 2 + 0x2000);
  wsprintfW(lpText,
            L"При обновлении произошла ошибка. Пожалуйста, загрузите обновление самостоятельно. \n\nДополнительная информация о произошедшей ошибке:\n%s(%s) failed with error %d: %s\nПожалуйста, сообщите об этом разработчикам. Спасибо."
           );
  lpText[0x400] = L'\0';
  MessageBoxW((HWND)0x0,lpText,L"Error",0);
  LocalFree(local_8);
  LocalFree(lpText);
                    // WARNING: Subroutine does not return
  ExitProcess(dwMessageId);
}



undefined4 FUN_004010a0(void)

{
  BOOL BVar1;
  HANDLE hFindFile;
  DWORD DVar2;
  int iVar3;
  LPCWSTR unaff_EDI;
  _WIN32_FIND_DATAW local_254;
  
  iVar3 = 0;
  BVar1 = DeleteFileW(unaff_EDI);
  if (BVar1 == 0) {
    SetFileAttributesW(unaff_EDI,0x80);
    BVar1 = DeleteFileW(unaff_EDI);
    if (BVar1 == 0) {
      while (BVar1 = DeleteFileW(unaff_EDI), BVar1 == 0) {
        hFindFile = FindFirstFileW(unaff_EDI,(LPWIN32_FIND_DATAW)&local_254);
        if (hFindFile == (HANDLE)0xffffffff) {
          DVar2 = GetLastError();
          if (DVar2 == 2) {
            return 1;
          }
        }
        else {
          FindClose(hFindFile);
        }
        Sleep(100);
        iVar3 = iVar3 + 1;
        if (9 < iVar3) {
          return 0;
        }
      }
    }
  }
  return 1;
}



int entry(void)

{
  ushort *puVar1;
  LPWSTR pWVar2;
  LPWSTR *ppWVar3;
  LPWSTR pWVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  _STARTUPINFOW *p_Var8;
  _PROCESS_INFORMATION *p_Var9;
  DWORD dwProcessId;
  DWORD extraout_ECX;
  uint uVar10;
  HANDLE hProcess;
  int *pNumArgs;
  int local_64;
  _PROCESS_INFORMATION local_60;
  _STARTUPINFOW local_50;
  
  pNumArgs = &local_64;
  pWVar2 = GetCommandLineW();
  ppWVar3 = CommandLineToArgvW(pWVar2,pNumArgs);
  if (ppWVar3 == (LPWSTR *)0x0) {
    FUN_00401000(&DAT_0040207c);
  }
  if (local_64 != 5) {
    return local_64 + 1000;
  }
  pWVar2 = ppWVar3[1];
  dwProcessId = 0;
  if (pWVar2 != (LPWSTR)0x0) {
    hProcess = (HANDLE)0x14;
    pWVar4 = pWVar2;
    do {
      if (*pWVar4 == L'\0') goto LAB_004011cf;
      pWVar4 = pWVar4 + 1;
      hProcess = (HANDLE)((int)hProcess + -1);
    } while (hProcess != (HANDLE)0x0);
  }
  do {
    uVar10 = 0;
    while( true ) {
      uVar5 = 0;
      if (uVar10 != 0) {
        do {
          puVar1 = (ushort *)(pWVar2 + uVar5);
          uVar5 = uVar5 + 1;
          dwProcessId = (*puVar1 - 0x30) + dwProcessId * 10;
        } while (uVar5 < uVar10);
      }
      hProcess = OpenProcess(1,0,dwProcessId);
      if (hProcess != (HANDLE)0x0) {
        BVar6 = TerminateProcess(hProcess,0);
        if (BVar6 == 0) {
          FUN_00401000(&DAT_0040207c);
        }
        CloseHandle(hProcess);
        iVar7 = FUN_004010a0();
        if (iVar7 == 0) {
          pWVar2 = ppWVar3[4];
        }
        else {
          pWVar2 = ppWVar3[3];
        }
        BVar6 = MoveFileW(ppWVar3[2],pWVar2);
        if (BVar6 == 0) {
          FUN_00401000(ppWVar3[2]);
        }
        iVar7 = 0x44;
        p_Var8 = &local_50;
        do {
          *(undefined *)&p_Var8->cb = 0;
          p_Var8 = (_STARTUPINFOW *)((int)&p_Var8->cb + 1);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_50.cb = 0x44;
        iVar7 = 0x10;
        p_Var9 = &local_60;
        do {
          *(undefined *)&p_Var9->hProcess = 0;
          p_Var9 = (_PROCESS_INFORMATION *)((int)&p_Var9->hProcess + 1);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        BVar6 = CreateProcessW((LPCWSTR)0x0,pWVar2,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,
                               (LPSTARTUPINFOW)&local_50,(LPPROCESS_INFORMATION)&local_60);
        if (BVar6 == 0) {
          FUN_00401000(pWVar2);
        }
        if (pWVar2 != ppWVar3[3]) {
          iVar7 = 100;
          do {
            FUN_004010a0();
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        return 0;
      }
      FUN_00401000(ppWVar3[1]);
      dwProcessId = extraout_ECX;
LAB_004011cf:
      if (hProcess == (HANDLE)0x0) break;
      uVar10 = 0x14 - (int)hProcess;
    }
  } while( true );
}


