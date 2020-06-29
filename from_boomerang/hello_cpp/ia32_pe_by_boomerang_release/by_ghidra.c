typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef ulong DWORD;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef long LONG;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ * HDC;

typedef int BOOL;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef uchar BYTE;

struct HDC__ {
    int unused;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagMSG * LPMSG;

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

typedef LONG_PTR LRESULT;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;

typedef char CHAR;

typedef CHAR * LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

struct HINSTANCE__ {
    int unused;
};

typedef int INT_PTR;

typedef INT_PTR (* DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagPAINTSTRUCT * LPPAINTSTRUCT;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef DWORD * LPDWORD;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ {
    int unused;
};

typedef struct HACCEL__ * HACCEL;

typedef ushort WORD;

typedef void * LPVOID;

typedef HINSTANCE HMODULE;

typedef BYTE * LPBYTE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef int (* FARPROC)(void);

typedef WORD * LPWORD;

typedef WORD ATOM;

typedef struct tagRECT * LPRECT;

typedef BOOL * LPBOOL;

typedef void * LPCVOID;

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

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

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

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

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

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

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

typedef CHAR * LPCH;

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef DWORD LCID;

typedef WCHAR * LPWSTR;

typedef CONTEXT * PCONTEXT;

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

typedef ULONG_PTR SIZE_T;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef uint size_t;




WPARAM FUN_00401000(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  HACCEL hAccTable;
  tagMSG local_1c;
  
  LoadStringA(param_1,0x67,&DAT_004054f4,100);
  LoadStringA(param_1,0x6d,&DAT_00405490,100);
  FUN_004010c0(param_1);
  iVar1 = FUN_00401150(param_1,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  hAccTable = LoadAcceleratorsA(param_1,(LPCSTR)0x6d);
  iVar1 = GetMessageA((LPMSG)&local_1c,(HWND)0x0,0,0);
  while (iVar1 != 0) {
    iVar1 = TranslateAcceleratorA(local_1c.hwnd,hAccTable,(LPMSG)&local_1c);
    if (iVar1 == 0) {
      TranslateMessage((MSG *)&local_1c);
      DispatchMessageA((MSG *)&local_1c);
    }
    iVar1 = GetMessageA((LPMSG)&local_1c,(HWND)0x0,0,0);
  }
  return local_1c.wParam;
}



void __cdecl FUN_004010c0(HINSTANCE param_1)

{
  WNDCLASSEXA local_30;
  
  local_30.cbSize = 0x30;
  local_30.style = 3;
  local_30.lpfnWndProc = (WNDPROC)&LAB_004011b0;
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hInstance = param_1;
  local_30.hIcon = LoadIconA(param_1,(LPCSTR)0x6b);
  local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_30.hbrBackground = (HBRUSH)0x6;
  local_30.lpszMenuName = (LPCSTR)0x6d;
  local_30.lpszClassName = &DAT_00405490;
  local_30.hIconSm = LoadIconA(local_30.hInstance,(LPCSTR)0x6c);
  RegisterClassExA(&local_30);
  return;
}



undefined4 __cdecl FUN_00401150(HINSTANCE param_1,int param_2)

{
  HWND hWnd;
  
  DAT_00405558 = param_1;
  hWnd = CreateWindowExA(0,&DAT_00405490,&DAT_004054f4,0xcf0000,-0x80000000,0,-0x80000000,0,
                         (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  ShowWindow(hWnd,param_2);
  UpdateWindow(hWnd);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  DWORD local_6c;
  byte *local_68;
  WPARAM local_64;
  _STARTUPINFOA local_60;
  undefined *local_1c;
  _EXCEPTION_POINTERS *local_18;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_004040f0;
  puStack16 = &LAB_00401e84;
  uStack20 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &uStack20;
  local_1c = &stack0xffffff88;
  DVar1 = GetVersion();
  _DAT_00405580 = DVar1 >> 8 & 0xff;
  _DAT_0040557c = DVar1 & 0xff;
  _DAT_00405578 = _DAT_0040557c * 0x100 + _DAT_00405580;
  _DAT_00405574 = DVar1 >> 0x10;
  iVar2 = FUN_00401d50(0);
  if (iVar2 == 0) {
    FUN_0040146b(0x1c);
  }
  local_8 = 0;
  FUN_00401ba5();
  DAT_00405a78 = GetCommandLineA();
  DAT_0040555c = FUN_00401a73();
  FUN_00401826();
  FUN_0040176d();
  FUN_0040148f();
  local_60.dwFlags = 0;
  GetStartupInfoA((LPSTARTUPINFOA)&local_60);
  pbVar3 = FUN_00401715();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  local_68 = pbVar3;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  local_64 = FUN_00401000((HINSTANCE)pHVar5,uVar6,pbVar3,uVar4);
  FUN_004014bc(local_64);
  local_6c = local_18->ExceptionRecord->ExceptionCode;
  FUN_00401591(local_6c,local_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401446(DWORD param_1)

{
  if (DAT_00405564 == 1) {
    FUN_00401f5c();
  }
  FUN_00401f95(param_1);
  (*_DAT_00405030)(0xff);
  return;
}



void __cdecl FUN_0040146b(DWORD param_1)

{
  if (DAT_00405564 == 1) {
    FUN_00401f5c();
  }
  FUN_00401f95(param_1);
  ExitProcess(0xff);
  return;
}



void FUN_0040148f(void)

{
  if (DAT_00405a74 != (code *)0x0) {
    (*DAT_00405a74)();
  }
  FUN_00401577((undefined **)&DAT_00405008,(undefined **)&DAT_00405010);
  FUN_00401577((undefined **)&DAT_00405000,(undefined **)&DAT_00405004);
  return;
}



void __cdecl FUN_004014bc(UINT param_1)

{
  FUN_004014de(param_1,0,0);
  return;
}



// Library Function - Single Match
// Name: __exit
// Library: Visual Studio 2003 Release

void __cdecl __exit(int _Code)

{
  FUN_004014de(_Code,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004014de(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  code **ppcVar1;
  UINT uExitCode;
  
  if (_DAT_004055b0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004055ac = 1;
  DAT_004055a8 = (undefined)param_3;
  if (param_2 == 0) {
    if ((DAT_00405a70 != (code **)0x0) &&
       (ppcVar1 = (code **)(DAT_00405a6c - 4), DAT_00405a70 <= ppcVar1)) {
      do {
        if (*ppcVar1 != (code *)0x0) {
          (**ppcVar1)();
        }
        ppcVar1 = ppcVar1 + -1;
      } while (DAT_00405a70 <= ppcVar1);
    }
    FUN_00401577((undefined **)&DAT_00405014,(undefined **)&DAT_00405018);
  }
  FUN_00401577((undefined **)&DAT_0040501c,(undefined **)&DAT_00405020);
  if (param_3 == 0) {
    _DAT_004055b0 = 1;
    ExitProcess(param_1);
  }
  return;
}



void __cdecl FUN_00401577(undefined **param_1,undefined **param_2)

{
  while (param_1 < param_2) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
    param_1 = (code **)param_1 + 1;
  }
  return;
}



LONG __cdecl FUN_00401591(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = FUN_004016d2(param_1);
  uVar3 = DAT_004055b4;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else {
    if (pcVar1 == (code *)0x5) {
      piVar4[2] = 0;
      LVar5 = 1;
    }
    else {
      if (pcVar1 != (code *)0x1) {
        DAT_004055b4 = param_2;
        if (piVar4[1] == 8) {
          if (DAT_004050b0 < DAT_004050b4 + DAT_004050b0) {
            iVar6 = (DAT_004050b4 + DAT_004050b0) - DAT_004050b0;
            puVar7 = (undefined4 *)(DAT_004050b0 * 0xc + 0x405040);
            do {
              *puVar7 = 0;
              puVar7 = puVar7 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          uVar2 = DAT_004050bc;
          iVar6 = *piVar4;
          if (iVar6 == -0x3fffff72) {
            DAT_004050bc = 0x83;
          }
          else {
            if (iVar6 == -0x3fffff70) {
              DAT_004050bc = 0x81;
            }
            else {
              if (iVar6 == -0x3fffff6f) {
                DAT_004050bc = 0x84;
              }
              else {
                if (iVar6 == -0x3fffff6d) {
                  DAT_004050bc = 0x85;
                }
                else {
                  if (iVar6 == -0x3fffff73) {
                    DAT_004050bc = 0x82;
                  }
                  else {
                    if (iVar6 == -0x3fffff71) {
                      DAT_004050bc = 0x86;
                    }
                    else {
                      if (iVar6 == -0x3fffff6e) {
                        DAT_004050bc = 0x8a;
                      }
                    }
                  }
                }
              }
            }
          }
          (*pcVar1)(8,DAT_004050bc);
          DAT_004050bc = uVar2;
        }
        else {
          piVar4[2] = 0;
          (*pcVar1)(piVar4[1]);
        }
      }
      LVar5 = -1;
      DAT_004055b4 = (_EXCEPTION_POINTERS *)uVar3;
    }
  }
  return LVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl FUN_004016d2(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_00405038;
  if (_DAT_00405038 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_00405038 + DAT_004050b8 * 0xc <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_00405038 + DAT_004050b8 * 0xc <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte * FUN_00401715(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (_DAT_00405a68 == 0) {
    FUN_004024ee();
  }
  bVar1 = *DAT_00405a78;
  pbVar4 = DAT_00405a78;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_004020e8(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_00401752;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  while ((*pbVar4 != 0 && (*pbVar4 < 0x21))) {
LAB_00401752:
    pbVar4 = pbVar4 + 1;
  }
  return pbVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040176d(void)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  char *_Str;
  
  if (_DAT_00405a68 == 0) {
    FUN_004024ee();
  }
  iVar5 = 0;
  _Str = DAT_0040555c;
  while (*_Str != '\0') {
    if (*_Str != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(_Str);
    _Str = _Str + sVar2 + 1;
  }
  ppcVar4 = (char **)_malloc(iVar5 * 4 + 4);
  _DAT_00405590 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    FUN_00401446(9);
  }
  cVar1 = *DAT_0040555c;
  _Str = DAT_0040555c;
  while (cVar1 != '\0') {
    sVar2 = _strlen(_Str);
    if (*_Str != '=') {
      pcVar3 = (char *)_malloc(sVar2 + 1);
      *ppcVar4 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        FUN_00401446(9);
      }
      FID_conflict___mbscpy(*ppcVar4,_Str);
      ppcVar4 = ppcVar4 + 1;
    }
    _Str = _Str + sVar2 + 1;
    cVar1 = *_Str;
  }
  FUN_0040250a(DAT_0040555c);
  DAT_0040555c = (char *)0x0;
  *ppcVar4 = (char *)0x0;
  _DAT_00405a64 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401826(void)

{
  byte **ppbVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (_DAT_00405a68 == 0) {
    FUN_004024ee();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_004055b8,0x104);
  _DAT_004055a0 = &DAT_004055b8;
  pbVar2 = &DAT_004055b8;
  if (*DAT_00405a78 != 0) {
    pbVar2 = DAT_00405a78;
  }
  FUN_004018bf(pbVar2,(byte **)0x0,(byte *)0x0,&local_8,&local_c);
  ppbVar1 = (byte **)_malloc(local_c + local_8 * 4);
  if (ppbVar1 == (byte **)0x0) {
    FUN_00401446(8);
  }
  FUN_004018bf(pbVar2,ppbVar1,(byte *)(ppbVar1 + local_8),&local_8,&local_c);
  _DAT_00405584 = local_8 + -1;
  _DAT_00405588 = ppbVar1;
  return;
}



void __cdecl FUN_004018bf(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte **ppbVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (byte **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_00405840 + (uint)bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_00405840 + (uint)bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_0040196a;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_0040196a:
      pbVar4 = pbVar4 + -1;
    }
    else {
      if (param_3 != (byte *)0x0) {
        param_3[-1] = 0;
      }
    }
  }
  bVar2 = false;
  ppbVar7 = param_2;
  while (*pbVar4 != 0) {
    while ((*pbVar4 == 0x20 || (*pbVar4 == 9))) {
      pbVar4 = pbVar4 + 1;
    }
    if (*pbVar4 == 0) break;
    if (ppbVar7 != (byte **)0x0) {
      *ppbVar7 = param_3;
      ppbVar7 = ppbVar7 + 1;
      param_2 = ppbVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      while (*pbVar4 == 0x5c) {
        pbVar4 = pbVar4 + 1;
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          ppbVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      while (uVar6 != 0) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
        uVar6 = uVar6 - 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_00405840 + (uint)bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_00405840 + (uint)bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (ppbVar7 != (byte **)0x0) {
    *ppbVar7 = (byte *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}



undefined4 * FUN_00401a73(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int cchWideChar;
  size_t _Size;
  undefined4 *puVar5;
  LPWCH lpWideCharStr;
  undefined4 *puVar6;
  undefined4 *lpMultiByteStr;
  undefined4 *local_8;
  
  lpWideCharStr = (LPWCH)0x0;
  lpMultiByteStr = (undefined4 *)0x0;
  if (DAT_004056bc == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_004056bc = 1;
LAB_00401aca:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (undefined4 *)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      cchWideChar = ((int)((int)pWVar4 - (int)lpWideCharStr) >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      local_8 = (undefined4 *)0x0;
      if (((_Size != 0) &&
          (lpMultiByteStr = (undefined4 *)_malloc(_Size), lpMultiByteStr != (undefined4 *)0x0)) &&
         (cchWideChar = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)lpMultiByteStr,
                                            _Size,(LPCSTR)0x0,(LPBOOL)0x0), local_8 = lpMultiByteStr
         , cchWideChar == 0)) {
        FUN_0040250a(lpMultiByteStr);
        local_8 = (undefined4 *)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    lpMultiByteStr = (undefined4 *)GetEnvironmentStrings();
    if (lpMultiByteStr == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_004056bc = 2;
  }
  else {
    if (DAT_004056bc == 1) goto LAB_00401aca;
    if (DAT_004056bc != 2) {
      return (undefined4 *)0x0;
    }
  }
  if ((lpMultiByteStr == (undefined4 *)0x0) &&
     (lpMultiByteStr = (undefined4 *)GetEnvironmentStrings(), lpMultiByteStr == (undefined4 *)0x0))
  {
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)lpMultiByteStr;
  puVar6 = lpMultiByteStr;
  while (cVar1 != '\0') {
    do {
      puVar5 = puVar6;
      puVar6 = (undefined4 *)((int)puVar5 + 1);
    } while (*(char *)puVar6 != '\0');
    puVar6 = (undefined4 *)((int)puVar5 + 2);
    cVar1 = *(char *)puVar6;
  }
  _Size = (int)puVar6 + (1 - (int)lpMultiByteStr);
  puVar6 = (undefined4 *)_malloc(_Size);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00402730(puVar6,lpMultiByteStr,_Size);
  }
  FreeEnvironmentStringsA((LPCH)lpMultiByteStr);
  return puVar6;
}



void FUN_00401ba5(void)

{
  HANDLE *ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;
  HANDLE hFile;
  HANDLE *ppvVar4;
  int iVar5;
  UINT UVar6;
  UINT UVar7;
  undefined4 *puVar8;
  uint uVar9;
  _STARTUPINFOA local_44;
  
  puVar8 = (undefined4 *)_malloc(0x100);
  if (puVar8 == (undefined4 *)0x0) {
    FUN_00401446(0x1b);
  }
  DAT_00405a60 = 0x20;
  DAT_00405960 = puVar8;
  while (puVar8 < DAT_00405960 + 0x40) {
    *(undefined *)(puVar8 + 1) = 0;
    *puVar8 = 0xffffffff;
    *(undefined *)((int)puVar8 + 5) = 10;
    puVar8 = puVar8 + 2;
  }
  GetStartupInfoA((LPSTARTUPINFOA)&local_44);
  if ((local_44.cbReserved2 != 0) && (local_44.lpReserved2 != (UINT *)0x0)) {
    UVar6 = *local_44.lpReserved2;
    local_44.lpReserved2 = local_44.lpReserved2 + 1;
    ppvVar4 = (HANDLE *)(UVar6 + (int)local_44.lpReserved2);
    if (0x7ff < (int)UVar6) {
      UVar6 = 0x800;
    }
    UVar7 = UVar6;
    if ((int)DAT_00405a60 < (int)UVar6) {
      puVar8 = &DAT_00405964;
      do {
        puVar3 = (undefined4 *)_malloc(0x100);
        UVar7 = DAT_00405a60;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_00405a60 = DAT_00405a60 + 0x20;
        *(undefined4 **)puVar8 = puVar3;
        puVar2 = puVar3;
        while (puVar3 < puVar2 + 0x40) {
          *(undefined *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          *(undefined *)((int)puVar3 + 5) = 10;
          puVar2 = (undefined4 *)*puVar8;
          puVar3 = puVar3 + 2;
        }
        puVar8 = puVar8 + 1;
        UVar7 = UVar6;
      } while ((int)DAT_00405a60 < (int)UVar6);
    }
    uVar9 = 0;
    if (0 < (int)UVar7) {
      do {
        if (((*ppvVar4 != (HANDLE)0xffffffff) && ((*(byte *)local_44.lpReserved2 & 1) != 0)) &&
           (((*(byte *)local_44.lpReserved2 & 8) != 0 ||
            (nStdHandle = GetFileType(*ppvVar4), nStdHandle != 0)))) {
          ppvVar1 = (HANDLE *)((&DAT_00405960)[(int)uVar9 >> 5] + (uVar9 & 0x1f) * 8);
          *ppvVar1 = *ppvVar4;
          *(byte *)(ppvVar1 + 1) = *(byte *)local_44.lpReserved2;
        }
        uVar9 = uVar9 + 1;
        local_44.lpReserved2 = (UINT *)((int)local_44.lpReserved2 + 1);
        ppvVar4 = ppvVar4 + 1;
      } while ((int)uVar9 < (int)UVar7);
    }
  }
  iVar5 = 0;
  do {
    ppvVar4 = (HANDLE *)(DAT_00405960 + iVar5 * 2);
    if (DAT_00405960[iVar5 * 2] == -1) {
      *(undefined *)(ppvVar4 + 1) = 0x81;
      if (iVar5 == 0) {
        nStdHandle = 0xfffffff6;
      }
      else {
        nStdHandle = 0xfffffff5 - (uint)(iVar5 != 1);
      }
      hFile = GetStdHandle(nStdHandle);
      if ((hFile != (HANDLE)0xffffffff) && (nStdHandle = GetFileType(hFile), nStdHandle != 0)) {
        *ppvVar4 = hFile;
        if ((nStdHandle & 0xff) != 2) {
          if ((nStdHandle & 0xff) == 3) {
            *(byte *)(ppvVar4 + 1) = *(byte *)(ppvVar4 + 1) | 8;
          }
          goto LAB_00401d36;
        }
      }
      *(byte *)(ppvVar4 + 1) = *(byte *)(ppvVar4 + 1) | 0x40;
    }
    else {
      *(byte *)(ppvVar4 + 1) = *(byte *)(ppvVar4 + 1) | 0x80;
    }
LAB_00401d36:
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_00405a60);
      return;
    }
  } while( true );
}



undefined4 __cdecl FUN_00401d50(int param_1)

{
  int iVar1;
  
  DAT_00405948 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00405948 != (HANDLE)0x0) {
    iVar1 = FUN_00402a65();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00405948);
  }
  return 0;
}



// Library Function - Single Match
// Name: __global_unwind2
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x401da4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
// Name: __local_unwind2
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack28;
  undefined *puStack24;
  undefined4 local_14;
  int iStack16;
  
  iStack16 = param_1;
  puStack24 = &LAB_00401dac;
  uStack28 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &uStack28;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00401e62(0x101);
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *in_FS_OFFSET = uStack28;
  return;
}



void FUN_00401e62(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_004050d0 = in_EAX;
  DAT_004050d4 = *(undefined4 *)(unaff_EBP + 8);
  DAT_004050d8 = unaff_EBP;
  return;
}



void FUN_00401f41(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401f5c(void)

{
  if ((DAT_00405564 == 1) || ((DAT_00405564 == 0 && (_DAT_00405034 == 1)))) {
    FUN_00401f95(0xfc);
    if (DAT_004056c0 != (code *)0x0) {
      (*DAT_004056c0)();
    }
    FUN_00401f95(0xff);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401f95(DWORD param_1)

{
  char **ppcVar1;
  DWORD *lpNumberOfBytesWritten;
  DWORD DVar2;
  size_t nNumberOfBytesToWrite;
  HANDLE hFile;
  int iVar3;
  char *_Dest;
  LPOVERLAPPED lpOverlapped;
  char local_1a8 [260];
  char local_a4 [160];
  
  iVar3 = 0;
  lpNumberOfBytesWritten = &DAT_004050e0;
  do {
    if (param_1 == *lpNumberOfBytesWritten) break;
    lpNumberOfBytesWritten = lpNumberOfBytesWritten + 2;
    iVar3 = iVar3 + 1;
  } while ((int)lpNumberOfBytesWritten < 0x405170);
  if (param_1 == (&DAT_004050e0)[iVar3 * 2]) {
    if ((DAT_00405564 == 1) || ((DAT_00405564 == 0 && (_DAT_00405034 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      ppcVar1 = (char **)(iVar3 * 8 + 0x4050e4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      nNumberOfBytesToWrite = _strlen(*ppcVar1);
      _Dest = *ppcVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,_Dest,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    }
    else {
      if (param_1 != 0xfc) {
        DVar2 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
        if (DVar2 == 0) {
          FID_conflict___mbscpy(local_1a8,"<program name unknown>");
        }
        _Dest = local_1a8;
        nNumberOfBytesToWrite = _strlen(local_1a8);
        if (0x3c < nNumberOfBytesToWrite + 1) {
          nNumberOfBytesToWrite = _strlen(local_1a8);
          _Dest = &stack0xfffffe1d + nNumberOfBytesToWrite;
          _strncpy(_Dest,"...",3);
        }
        FID_conflict___mbscpy(local_a4,"Runtime Error!\n\nProgram: ");
        FID_conflict__strcat(local_a4,_Dest);
        FID_conflict__strcat(local_a4,"\n\n");
        FID_conflict__strcat(local_a4,*(char **)(iVar3 * 8 + 0x4050e4));
        FUN_004032ae(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
      }
    }
  }
  return;
}



void __cdecl FUN_004020e8(byte param_1)

{
  FUN_004020f9(param_1,0,4);
  return;
}



undefined4 __cdecl FUN_004020f9(byte param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_00405840 + (uint)param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_0040528a + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_0040212a(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  UINT CodePage;
  UINT *pUVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_004022c3(param_1);
  if (CodePage == DAT_0040571c) {
    return 0;
  }
  if (CodePage != 0) {
    iVar9 = 0;
    pUVar4 = &DAT_00405178;
    do {
      if (*pUVar4 == CodePage) {
        iVar7 = 0x40;
        puVar11 = &DAT_00405840;
        while (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        local_8 = 0;
        *(undefined *)puVar11 = 0;
        pbVar10 = &DAT_00405188 + iVar9 * 0x30;
        do {
          bVar2 = *pbVar10;
          pbVar8 = pbVar10;
          while ((bVar2 != 0 && (bVar2 = pbVar8[1], bVar2 != 0))) {
            uVar6 = (uint)*pbVar8;
            if (uVar6 <= bVar2) {
              bVar3 = (&DAT_00405170)[local_8];
              do {
                pbVar1 = (byte *)((int)&DAT_00405840 + uVar6 + 1);
                *pbVar1 = *pbVar1 | bVar3;
                uVar6 = uVar6 + 1;
              } while (uVar6 <= bVar2);
            }
            pbVar8 = pbVar8 + 2;
            bVar2 = *pbVar8;
          }
          local_8 = local_8 + 1;
          pbVar10 = pbVar10 + 8;
        } while (local_8 < 4);
        _DAT_0040572c = 1;
        DAT_0040571c = CodePage;
        DAT_00405944 = FUN_0040230d(CodePage);
        DAT_00405720 = (&DAT_0040517c)[iVar9 * 0xc];
        DAT_00405724 = (&DAT_00405180)[iVar9 * 0xc];
        DAT_00405728 = (&DAT_00405184)[iVar9 * 0xc];
        goto LAB_004022b2;
      }
      pUVar4 = pUVar4 + 0xc;
      iVar9 = iVar9 + 1;
    } while ((int)pUVar4 < 0x405268);
    BVar5 = GetCPInfo(CodePage,(LPCPINFO)&local_1c);
    if (BVar5 == 1) {
      iVar9 = 0x40;
      puVar11 = &DAT_00405840;
      DAT_0040571c = CodePage;
      while (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined *)puVar11 = 0;
      DAT_00405944 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_0040572c = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pbVar10 = local_1c.LeadByte + 1;
          do {
            bVar2 = *pbVar10;
            if (bVar2 == 0) break;
            uVar6 = (uint)pbVar10[-1];
            while (uVar6 <= bVar2) {
              pbVar8 = (byte *)((int)&DAT_00405840 + uVar6 + 1);
              *pbVar8 = *pbVar8 | 4;
              uVar6 = uVar6 + 1;
            }
            pbVar8 = pbVar10 + 1;
            pbVar10 = pbVar10 + 2;
          } while (*pbVar8 != 0);
        }
        uVar6 = 1;
        do {
          pbVar10 = (byte *)((int)&DAT_00405840 + uVar6 + 1);
          *pbVar10 = *pbVar10 | 8;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0xff);
        DAT_00405944 = FUN_0040230d(CodePage);
        _DAT_0040572c = 1;
      }
      DAT_00405720 = 0;
      DAT_00405724 = 0;
      DAT_00405728 = 0;
      goto LAB_004022b2;
    }
    if (_DAT_004056c4 == 0) {
      return 0xffffffff;
    }
  }
  FUN_00402340();
LAB_004022b2:
  FUN_00402369();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

UINT __cdecl FUN_004022c3(int param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    _DAT_004056c4 = 1;
                    // WARNING: Could not recover jumptable at 0x004022dd. Too many branches
                    // WARNING: Treating indirect jump as call
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == -3) {
    _DAT_004056c4 = 1;
                    // WARNING: Could not recover jumptable at 0x004022f2. Too many branches
                    // WARNING: Treating indirect jump as call
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004056ec;
  }
  _DAT_004056c4 = (uint)bVar2;
  return param_1;
}



undefined4 __cdecl FUN_0040230d(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402340(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x40;
  puVar2 = &DAT_00405840;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  DAT_0040571c = 0;
  DAT_00405720 = 0;
  DAT_00405724 = 0;
  DAT_00405728 = 0;
  _DAT_0040572c = 0;
  DAT_00405944 = 0;
  return;
}



void FUN_00402369(void)

{
  BOOL BVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  ushort local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  undefined4 local_118 [64];
  _cpinfo local_18;
  
  BVar1 = GetCPInfo(DAT_0040571c,(LPCPINFO)&local_18);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      *(undefined *)((int)local_118 + uVar2) = (char)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_118[0]._0_1_ = 0x20;
    if (local_18.LeadByte[0] != 0) {
      pbVar8 = local_18.LeadByte + 1;
      do {
        uVar2 = (uint)local_18.LeadByte[0];
        if (uVar2 <= *pbVar8) {
          uVar4 = (*pbVar8 - uVar2) + 1;
          uVar5 = uVar4 >> 2;
          puVar9 = (undefined4 *)((int)local_118 + uVar2);
          while (uVar5 != 0) {
            uVar5 = uVar5 - 1;
            *puVar9 = 0x20202020;
            puVar9 = puVar9 + 1;
          }
          uVar4 = uVar4 & 3;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            *(undefined *)puVar9 = 0x20;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_18.LeadByte[0] = pbVar8[1];
        pbVar8 = pbVar8 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0040368d(1,(LPCSTR)local_118,0x100,local_518,DAT_0040571c,DAT_00405944,0);
    FUN_0040343e(DAT_00405944,0x100,(char *)local_118,(char *)0x100,local_218,0x100,DAT_0040571c,0);
    FUN_0040343e(DAT_00405944,0x200,(char *)local_118,(char *)0x100,local_318,0x100,DAT_0040571c,0);
    uVar2 = 0;
    puVar6 = local_518;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) != 0) {
          pbVar8 = (byte *)((int)&DAT_00405840 + uVar2 + 1);
          *pbVar8 = *pbVar8 | 0x20;
          uVar7 = *(undefined *)((int)local_318 + uVar2);
          goto LAB_00402475;
        }
        (&DAT_00405740)[uVar2] = 0;
      }
      else {
        pbVar8 = (byte *)((int)&DAT_00405840 + uVar2 + 1);
        *pbVar8 = *pbVar8 | 0x10;
        uVar7 = *(undefined *)((int)local_218 + uVar2);
LAB_00402475:
        (&DAT_00405740)[uVar2] = uVar7;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
          pbVar8 = (byte *)((int)&DAT_00405840 + uVar2 + 1);
          *pbVar8 = *pbVar8 | 0x20;
          cVar3 = (char)uVar2 + -0x20;
          goto LAB_004024bf;
        }
        (&DAT_00405740)[uVar2] = 0;
      }
      else {
        pbVar8 = (byte *)((int)&DAT_00405840 + uVar2 + 1);
        *pbVar8 = *pbVar8 | 0x10;
        cVar3 = (char)uVar2 + ' ';
LAB_004024bf:
        (&DAT_00405740)[uVar2] = cVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004024ee(void)

{
  if (_DAT_00405a68 == 0) {
    FUN_0040212a(-3);
    _DAT_00405a68 = 1;
  }
  return;
}



void __cdecl FUN_0040250a(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_00402aa3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_00402ace(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_00405948,0,param_1);
  }
  return;
}



// Library Function - Multiple Matches With Different Base Names
// Name: __mbscpy, _strcpy
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl FID_conflict___mbscpy(char *_Dest,char *_Source)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  
  uVar2 = (uint)_Source & 3;
  puVar4 = (uint *)_Dest;
  while (uVar2 != 0) {
    cVar3 = *_Source;
    _Source = (char *)((int)_Source + 1);
    if (cVar3 == '\0') goto LAB_00402628;
    *(char *)puVar4 = cVar3;
    puVar4 = (uint *)((int)puVar4 + 1);
    uVar2 = (uint)_Source & 3;
  }
  do {
    uVar2 = *(uint *)_Source;
    uVar1 = *(uint *)_Source;
    cVar3 = (char)uVar1;
    _Source = (char *)((uint *)_Source + 1);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if (cVar3 == '\0') {
LAB_00402628:
        *(char *)puVar4 = cVar3;
        return _Dest;
      }
      if ((char)(uVar1 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar1;
        return _Dest;
      }
      if ((uVar1 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar1;
        *(char *)((int)puVar4 + 2) = '\0';
        return _Dest;
      }
      if ((uVar1 & 0xff000000) == 0) {
        *puVar4 = uVar1;
        return _Dest;
      }
    }
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while( true );
}



// Library Function - Multiple Matches With Different Base Names
// Name: __mbscat, _strcat
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl FID_conflict__strcat(char *_Dest,char *_Source)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  uint *puVar5;
  
  uVar2 = (uint)_Dest & 3;
  puVar3 = (uint *)_Dest;
  while (uVar2 != 0) {
    cVar4 = *(char *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (cVar4 == '\0') goto LAB_0040259f;
    uVar2 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar2 = *puVar5;
    if ((char)uVar2 == '\0') goto LAB_004025b1;
    if ((char)(uVar2 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_004025b1;
    }
    if ((uVar2 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_004025b1;
    }
  } while ((uVar2 & 0xff000000) != 0);
LAB_0040259f:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_004025b1:
  uVar2 = (uint)_Source & 3;
  while (uVar2 != 0) {
    cVar4 = *_Source;
    _Source = (char *)((int)_Source + 1);
    if (cVar4 == '\0') goto LAB_00402628;
    *(char *)puVar5 = cVar4;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar2 = (uint)_Source & 3;
  }
  do {
    uVar2 = *(uint *)_Source;
    uVar1 = *(uint *)_Source;
    cVar4 = (char)uVar1;
    _Source = (char *)((uint *)_Source + 1);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if (cVar4 == '\0') {
LAB_00402628:
        *(char *)puVar5 = cVar4;
        return _Dest;
      }
      if ((char)(uVar1 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar1;
        return _Dest;
      }
      if ((uVar1 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar1;
        *(char *)((int)puVar5 + 2) = '\0';
        return _Dest;
      }
      if ((uVar1 & 0xff000000) == 0) {
        *puVar5 = uVar1;
        return _Dest;
      }
    }
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while( true );
}



// Library Function - Single Match
// Name: _malloc
// Library: Visual Studio 2003 Release

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_004056fc);
  return pvVar1;
}



// Library Function - Single Match
// Name: __nh_malloc
// Library: Visual Studio 2003 Release

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_0040266e((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_004037d6(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040266e(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= _DAT_00405270) && (piVar1 = FUN_00402df9(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_00405948,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}



// Library Function - Single Match
// Name: _strlen
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

size_t __cdecl _strlen(char *_Str)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = (uint)_Str & 3;
  puVar4 = (uint *)_Str;
  while (uVar2 != 0) {
    cVar1 = *(char *)puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    if (cVar1 == '\0') goto LAB_00402703;
    uVar2 = (uint)puVar4 & 3;
  }
  do {
    do {
      puVar3 = puVar4;
      puVar4 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar2 = *puVar3;
    if ((char)uVar2 == '\0') {
      return (size_t)((int)puVar3 - (int)_Str);
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (int)puVar3 + (1 - (int)_Str);
    }
    if ((uVar2 & 0xff0000) == 0) {
      return (int)puVar3 + (2 - (int)_Str);
    }
  } while ((uVar2 & 0xff000000) != 0);
LAB_00402703:
  return (int)puVar4 + (-1 - (int)_Str);
}



undefined4 * __cdecl FUN_00402730(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar3 & 3) == 0) {
      uVar2 = param_3 >> 2;
      if (uVar2 < 8) goto LAB_004028f0;
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar3 = *param_2;
        param_2 = param_2 + -1;
        puVar3 = puVar3 + -1;
      }
      switch(param_3 & 3) {
      case 1:
        goto switchD_00402914_caseD_1;
      case 2:
        goto switchD_00402914_caseD_2;
      case 3:
        goto switchD_00402914_caseD_3;
      }
    }
    else {
      switch(param_3) {
      case 0:
        break;
      case 1:
switchD_00402914_caseD_1:
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
        return param_1;
      case 2:
switchD_00402914_caseD_2:
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
        *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
        return param_1;
      case 3:
switchD_00402914_caseD_3:
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
        *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
        *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
        return param_1;
      default:
        param_3 = param_3 - ((uint)puVar3 & 3);
        switch((uint)puVar3 & 3) {
        case 1:
          *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          uVar2 = param_3 >> 2;
          puVar3 = (undefined4 *)((int)puVar3 - 1);
          if (uVar2 < 8) {
LAB_004028f0:
                    // WARNING: Could not recover jumptable at 0x004028f2. Too many branches
                    // WARNING: Treating indirect jump as call
            puVar3 = (undefined4 *)(*(code *)(&PTR_LAB_004029c0)[uVar2 * 0x3fffffff])();
            return puVar3;
          }
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar3 = *param_2;
            param_2 = param_2 + -1;
            puVar3 = puVar3 + -1;
          }
          switch(param_3 & 3) {
          case 3:
            goto switchD_00402914_caseD_3;
          case 2:
            goto switchD_00402914_caseD_2;
          case 1:
            goto switchD_00402914_caseD_1;
          }
          break;
        case 2:
          *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
          uVar2 = param_3 >> 2;
          *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar3 = (undefined4 *)((int)puVar3 - 2);
          if (uVar2 < 8) goto LAB_004028f0;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar3 = *param_2;
            param_2 = param_2 + -1;
            puVar3 = puVar3 + -1;
          }
          switch(param_3 & 3) {
          case 3:
            goto switchD_00402914_caseD_3;
          case 2:
            goto switchD_00402914_caseD_2;
          case 1:
            goto switchD_00402914_caseD_1;
          }
          break;
        case 3:
          *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
          *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
          uVar2 = param_3 >> 2;
          *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar3 = (undefined4 *)((int)puVar3 - 3);
          if (uVar2 < 8) goto LAB_004028f0;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar3 = *param_2;
            param_2 = param_2 + -1;
            puVar3 = puVar3 + -1;
          }
          switch(param_3 & 3) {
          case 3:
            goto switchD_00402914_caseD_3;
          case 2:
            goto switchD_00402914_caseD_2;
          case 1:
            goto switchD_00402914_caseD_1;
          }
        }
      }
    }
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    if (uVar1 < 8) goto LAB_0040278c;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    switch(param_3 & 3) {
    case 1:
      goto switchD_00402784_caseD_1;
    case 2:
      goto switchD_00402784_caseD_2;
    case 3:
      goto switchD_00402784_caseD_3;
    }
  }
  else {
    switch(param_3) {
    case 0:
      break;
    case 1:
switchD_00402784_caseD_1:
      *(undefined *)puVar3 = *(undefined *)param_2;
      return param_1;
    case 2:
switchD_00402784_caseD_2:
      *(undefined *)puVar3 = *(undefined *)param_2;
      *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
      return param_1;
    case 3:
switchD_00402784_caseD_3:
      *(undefined *)puVar3 = *(undefined *)param_2;
      *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
      *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
      return param_1;
    default:
      uVar2 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        *(undefined *)param_1 = *(undefined *)param_2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        uVar1 = uVar2 >> 2;
        *(undefined *)((int)param_1 + 2) = *(undefined *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (uVar1 < 8) {
LAB_0040278c:
                    // WARNING: Could not recover jumptable at 0x0040278c. Too many branches
                    // WARNING: Treating indirect jump as call
          puVar3 = (undefined4 *)(*(code *)(&PTR_LAB_0040280c)[uVar1])();
          return puVar3;
        }
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        switch(uVar2 & 3) {
        case 3:
          goto switchD_00402784_caseD_3;
        case 2:
          goto switchD_00402784_caseD_2;
        case 1:
          goto switchD_00402784_caseD_1;
        }
        break;
      case 2:
        *(undefined *)param_1 = *(undefined *)param_2;
        uVar1 = uVar2 >> 2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (uVar1 < 8) goto LAB_0040278c;
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        switch(uVar2 & 3) {
        case 3:
          goto switchD_00402784_caseD_3;
        case 2:
          goto switchD_00402784_caseD_2;
        case 1:
          goto switchD_00402784_caseD_1;
        }
        break;
      case 3:
        *(undefined *)param_1 = *(undefined *)param_2;
        uVar1 = uVar2 >> 2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (uVar1 < 8) goto LAB_0040278c;
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        switch(uVar2 & 3) {
        case 3:
          goto switchD_00402784_caseD_3;
        case 2:
          goto switchD_00402784_caseD_2;
        case 1:
          goto switchD_00402784_caseD_1;
        }
      }
    }
  }
  return param_1;
}



undefined4 FUN_00402a65(void)

{
  DAT_00405718 = HeapAlloc(DAT_00405948,0,0x140);
  if (DAT_00405718 == (LPVOID)0x0) {
    return 0;
  }
  DAT_00405704 = 0x10;
  DAT_0040570c = DAT_00405718;
  DAT_00405710 = 0;
  DAT_00405714 = 0;
  return 1;
}



uint __cdecl FUN_00402aa3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00405718;
  while( true ) {
    if (DAT_00405718 + DAT_00405714 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



void __cdecl FUN_00402ace(uint *param_1,uint param_2)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar4 = param_1[4];
  iVar5 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar6 = *(uint *)(param_2 - 8);
  local_10 = iVar5 + -1;
  piVar2 = (int *)(uVar10 * 0x204 + 0x144 + uVar4);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar5 + 3 + (int)piVar9) == *(int *)(iVar5 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar4);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar7 = (uint *)(uVar4 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar4);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar4 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar5 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar5 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar5 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar5 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar6 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar6);
    param_2 = ((int)uVar6 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar6;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar4);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar7 = (uint *)(uVar4 + 0x44 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar4);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar4 + 0xc4 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar6 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar2[uVar12 * 2 + 1];
    *(int **)(piVar9 + 2) = piVar2 + uVar12 * 2;
    *(int **)(piVar2 + uVar12 * 2 + 1) = piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar3 = *(char *)(uVar12 + 4 + uVar4);
      *(char *)(uVar12 + 4 + uVar4) = cVar3 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar7 = (uint *)(uVar4 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar4 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar2 = *piVar2 + -1;
  uVar4 = DAT_00405708;
  puVar7 = DAT_00405710;
  if ((*piVar2 == 0) && (uVar4 = uVar10, puVar7 = param_1, DAT_00405710 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_00405708 * 0x8000 + DAT_00405710[3]),0x8000,0x4000);
    DAT_00405710[2] = DAT_00405710[2] | 0x80000000U >> ((byte)DAT_00405708 & 0x1f);
    *(undefined4 *)(DAT_00405710[4] + 0xc4 + DAT_00405708 * 4) = 0;
    *(char *)(DAT_00405710[4] + 0x43) = *(char *)(DAT_00405710[4] + 0x43) + -1;
    if (*(char *)(DAT_00405710[4] + 0x43) == '\0') {
      DAT_00405710[1] = DAT_00405710[1] & 0xfffffffe;
    }
    puVar7 = param_1;
    if (DAT_00405710[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_00405710[3],0,0x8000);
      HeapFree(DAT_00405948,0,(LPVOID)DAT_00405710[4]);
      FUN_00403800(DAT_00405710,DAT_00405710 + 5,
                   (DAT_00405714 * 0x14 - (int)DAT_00405710) + -0x14 + DAT_00405718);
      DAT_00405714 = DAT_00405714 + -1;
      if (DAT_00405710 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_0040570c = DAT_00405718;
      puVar7 = param_1;
    }
  }
  DAT_00405710 = puVar7;
  DAT_00405708 = uVar4;
  return;
}



int * __cdecl FUN_00402df9(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_00405718 + DAT_00405714 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  param_1 = DAT_0040570c;
  if (DAT_0040570c < puVar8) {
    do {
      if ((param_1[1] & local_c | *param_1 & local_10) != 0) break;
      param_1 = param_1 + 5;
    } while (param_1 < puVar8);
  }
  puVar12 = DAT_00405718;
  if (param_1 == puVar8) {
    while ((puVar12 < DAT_0040570c && ((puVar12[1] & local_c | *puVar12 & local_10) == 0))) {
      puVar12 = puVar12 + 5;
    }
    param_1 = puVar12;
    if (puVar12 == DAT_0040570c) {
      while ((puVar12 < puVar8 && (puVar12[2] == 0))) {
        puVar12 = puVar12 + 5;
      }
      puVar13 = DAT_00405718;
      param_1 = puVar12;
      if (puVar12 == puVar8) {
        while ((puVar13 < DAT_0040570c && (puVar13[2] == 0))) {
          puVar13 = puVar13 + 5;
        }
        param_1 = puVar13;
        if ((puVar13 == DAT_0040570c) && (param_1 = FUN_00403102(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_004031b3((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c | piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    uVar10 = piVar4[0x31] & local_c | piVar4[0x11] & local_10;
    while (uVar10 == 0) {
      puVar12 = puVar8 + 0x21;
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 1;
      uVar10 = *puVar12 & local_c | local_10 & *puVar8;
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  while (-1 < (int)local_10) {
    local_10 = local_10 << 1;
    iVar7 = iVar7 + 1;
  }
  piVar11 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar11 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_0040570c = param_1;
  if (iVar14 != iVar7) {
    if (piVar11[1] == piVar11[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar10 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar10 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar10;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar10 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar10;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar10;
        }
      }
    }
    *(int *)(piVar11[2] + 4) = piVar11[1];
    *(int *)(piVar11[1] + 8) = piVar11[2];
    if (iVar9 == 0) goto LAB_004030bf;
    piVar11[1] = piVar2[iVar14 * 2 + 1];
    *(int **)(piVar11 + 2) = piVar2 + iVar14 * 2;
    *(int **)(piVar2 + iVar14 * 2 + 1) = piVar11;
    *(int **)(piVar11[1] + 8) = piVar11;
    if (piVar11[1] == piVar11[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar11 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar11) = iVar9;
  }
LAB_004030bf:
  piVar11 = (int *)((int)piVar11 + iVar9);
  *piVar11 = uVar6 + 1;
  *(int *)((int)piVar11 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_00405710)) && (local_8 == DAT_00405708)) {
    DAT_00405710 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar11 + 1;
}



undefined4 * FUN_00403102(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00405714 == DAT_00405704) {
    pvVar2 = HeapReAlloc(DAT_00405948,0,DAT_00405718,(DAT_00405704 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00405704 = DAT_00405704 + 0x10;
    DAT_00405718 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00405718 + DAT_00405714 * 0x14);
  pvVar2 = HeapAlloc(DAT_00405948,8,0x41c4);
  *(LPVOID *)(puVar1 + 4) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    *(LPVOID *)(puVar1 + 3) = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00405714 = DAT_00405714 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00405948,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



int __cdecl FUN_004031b3(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 8);
  iVar9 = 0;
  while (-1 < iVar4) {
    iVar4 = iVar4 << 1;
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *(int **)piVar7 = piVar7 + 0x3ff;
        *(int **)(piVar7 + 1) = piVar7 + -0x401;
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_004032ae(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (_DAT_004056c8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      _DAT_004056c8 = GetProcAddress(hModule,"MessageBoxA");
      if (_DAT_004056c8 != (FARPROC)0x0) {
        DAT_004056cc = GetProcAddress(hModule,"GetActiveWindow");
        DAT_004056d0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_004032fd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004032fd:
    if (DAT_004056cc != (FARPROC)0x0) {
      iVar1 = (*DAT_004056cc)();
      if ((iVar1 != 0) && (DAT_004056d0 != (FARPROC)0x0)) {
        iVar1 = (*DAT_004056d0)(iVar1);
      }
    }
    iVar1 = (*_DAT_004056c8)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Library Function - Single Match
// Name: _strncpy
// Library: Visual Studio 1998 Release

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      cVar3 = *_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = cVar3;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if (cVar3 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0040337e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        if (uVar4 == 0) goto LAB_004033bb;
        goto LAB_00403429;
      }
      *(undefined *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((uint *)_Source + 1);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00403425:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00403429:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_004033bb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00403425;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00403425;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00403425;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0040337e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = *_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_004033bb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



int __cdecl
FUN_0040343e(LCID param_1,uint param_2,char *param_3,char *param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  undefined *puVar1;
  int cchDest;
  int cchWideChar;
  undefined4 *in_FS_OFFSET;
  int local_2c;
  LPCWSTR local_28;
  undefined *local_24;
  int local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00404430;
  puStack16 = &LAB_00401e84;
  local_14 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffc4;
  puVar1 = &stack0xffffffc4;
  if (DAT_004056f4 == 0) {
    cchDest = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (cchDest != 0) {
      DAT_004056f4 = 1;
      puVar1 = local_1c;
      goto LAB_004034b4;
    }
    cchDest = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (cchDest != 0) {
      DAT_004056f4 = 2;
      puVar1 = local_1c;
      goto LAB_004034b4;
    }
  }
  else {
LAB_004034b4:
    local_1c = puVar1;
    if (0 < (int)param_4) {
      param_4 = FUN_00403662(param_3,(int)param_4);
    }
    if (DAT_004056f4 == 2) {
      cchDest = LCMapStringA(param_1,param_2,param_3,(int)param_4,(LPSTR)param_5,param_6);
      goto LAB_004035ce;
    }
    if (DAT_004056f4 == 1) {
      if (param_7 == 0) {
        param_7 = DAT_004056ec;
      }
      local_28 = (LPCWSTR)&stack0xffffffc4;
      cchWideChar = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)param_4
                                        ,(LPWSTR)0x0,0);
      if (cchWideChar != 0) {
        local_8 = 0;
        local_20 = cchWideChar;
        FUN_00403b40();
        local_8 = 0xffffffff;
        if (((undefined *)register0x00000010 != (undefined *)0x3c) &&
           (local_1c = &stack0xffffffc4,
           cchDest = MultiByteToWideChar(param_7,1,param_3,(int)param_4,(LPWSTR)&stack0xffffffc4,
                                         cchWideChar), cchDest != 0)) {
          local_24 = &stack0xffffffc4;
          cchDest = LCMapStringW(param_1,param_2,local_28,cchWideChar,(LPWSTR)0x0,0);
          if (cchDest != 0) {
            local_2c = cchDest;
            if ((param_2 & 0x400) == 0) {
              local_8 = 1;
              FUN_00403b40();
              local_8 = 0xffffffff;
              if (((undefined *)register0x00000010 != (undefined *)0x3c) &&
                 (local_1c = &stack0xffffffc4,
                 cchWideChar = LCMapStringW(param_1,param_2,local_28,local_20,
                                            (LPWSTR)&stack0xffffffc4,cchDest), cchWideChar != 0)) {
                if (param_6 == 0) {
                  param_6 = 0;
                  param_5 = (LPWSTR)0x0;
                }
                cchDest = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,cchDest,
                                              (LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
                cchWideChar = cchDest;
joined_r0x00403655:
                if (cchWideChar != 0) goto LAB_004035ce;
              }
            }
            else {
              if (param_6 == 0) goto LAB_004035ce;
              if (cchDest <= param_6) {
                cchWideChar = LCMapStringW(param_1,param_2,local_28,cchWideChar,param_5,param_6);
                goto joined_r0x00403655;
              }
            }
          }
        }
      }
    }
  }
  cchDest = 0;
LAB_004035ce:
  *in_FS_OFFSET = local_14;
  return cchDest;
}



char * __cdecl FUN_00403662(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      if (*pcVar1 == '\0') break;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 != 0);
  }
  if (*pcVar1 == '\0') {
    return pcVar1 + -(int)param_1;
  }
  return (char *)param_2;
}



BOOL __cdecl
FUN_0040368d(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  size_t _Size;
  undefined *puVar1;
  BOOL BVar2;
  int cchSrc;
  undefined4 *in_FS_OFFSET;
  undefined *local_28;
  int local_24;
  WORD local_20 [2];
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00404448;
  puStack16 = &LAB_00401e84;
  local_14 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffc8;
  cchSrc = DAT_004056f8;
  puVar1 = &stack0xffffffc8;
  if (DAT_004056f8 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    cchSrc = 1;
    puVar1 = local_1c;
    if (BVar2 != 0) goto LAB_004036fc;
    BVar2 = GetStringTypeA(0,1,"",1,local_20);
    if (BVar2 != 0) {
      cchSrc = 2;
      puVar1 = local_1c;
      goto LAB_004036fc;
    }
  }
  else {
LAB_004036fc:
    local_1c = puVar1;
    DAT_004056f8 = cchSrc;
    if (DAT_004056f8 == 2) {
      if (param_6 == 0) {
        param_6 = DAT_004056dc;
      }
      BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
      goto LAB_004037c4;
    }
    if (DAT_004056f8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_004056ec;
      }
      local_28 = &stack0xffffffc8;
      local_24 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                     (LPWSTR)0x0,0);
      if (local_24 != 0) {
        local_8 = 0;
        _Size = local_24 * 2;
        FUN_00403b40();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,_Size);
        local_8 = 0xffffffff;
        if (((undefined *)register0x00000010 != (undefined *)0x38) &&
           (cchSrc = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,local_24
                                        ), cchSrc != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,cchSrc,param_4);
          goto LAB_004037c4;
        }
      }
    }
  }
  BVar2 = 0;
LAB_004037c4:
  *in_FS_OFFSET = local_14;
  return BVar2;
}



undefined4 __cdecl FUN_004037d6(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00405700 != (code *)0x0) {
    iVar1 = (*DAT_00405700)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 * __cdecl FUN_00403800(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar3 & 3) == 0) {
      uVar2 = param_3 >> 2;
      if (uVar2 < 8) goto LAB_004039c0;
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar3 = *param_2;
        param_2 = param_2 + -1;
        puVar3 = puVar3 + -1;
      }
      switch(param_3 & 3) {
      case 1:
        goto switchD_004039e4_caseD_1;
      case 2:
        goto switchD_004039e4_caseD_2;
      case 3:
        goto switchD_004039e4_caseD_3;
      }
    }
    else {
      switch(param_3) {
      case 0:
        break;
      case 1:
switchD_004039e4_caseD_1:
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
        return param_1;
      case 2:
switchD_004039e4_caseD_2:
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
        *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
        return param_1;
      case 3:
switchD_004039e4_caseD_3:
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
        *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
        *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
        return param_1;
      default:
        param_3 = param_3 - ((uint)puVar3 & 3);
        switch((uint)puVar3 & 3) {
        case 1:
          *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          uVar2 = param_3 >> 2;
          puVar3 = (undefined4 *)((int)puVar3 - 1);
          if (uVar2 < 8) {
LAB_004039c0:
                    // WARNING: Could not recover jumptable at 0x004039c2. Too many branches
                    // WARNING: Treating indirect jump as call
            puVar3 = (undefined4 *)(*(code *)(&PTR_LAB_00403a90)[uVar2 * 0x3fffffff])();
            return puVar3;
          }
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar3 = *param_2;
            param_2 = param_2 + -1;
            puVar3 = puVar3 + -1;
          }
          switch(param_3 & 3) {
          case 3:
            goto switchD_004039e4_caseD_3;
          case 2:
            goto switchD_004039e4_caseD_2;
          case 1:
            goto switchD_004039e4_caseD_1;
          }
          break;
        case 2:
          *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
          uVar2 = param_3 >> 2;
          *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar3 = (undefined4 *)((int)puVar3 - 2);
          if (uVar2 < 8) goto LAB_004039c0;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar3 = *param_2;
            param_2 = param_2 + -1;
            puVar3 = puVar3 + -1;
          }
          switch(param_3 & 3) {
          case 3:
            goto switchD_004039e4_caseD_3;
          case 2:
            goto switchD_004039e4_caseD_2;
          case 1:
            goto switchD_004039e4_caseD_1;
          }
          break;
        case 3:
          *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)param_2 + 3);
          *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
          uVar2 = param_3 >> 2;
          *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar3 = (undefined4 *)((int)puVar3 - 3);
          if (uVar2 < 8) goto LAB_004039c0;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar3 = *param_2;
            param_2 = param_2 + -1;
            puVar3 = puVar3 + -1;
          }
          switch(param_3 & 3) {
          case 3:
            goto switchD_004039e4_caseD_3;
          case 2:
            goto switchD_004039e4_caseD_2;
          case 1:
            goto switchD_004039e4_caseD_1;
          }
        }
      }
    }
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    if (uVar1 < 8) goto LAB_0040385c;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    switch(param_3 & 3) {
    case 1:
      goto switchD_00403854_caseD_1;
    case 2:
      goto switchD_00403854_caseD_2;
    case 3:
      goto switchD_00403854_caseD_3;
    }
  }
  else {
    switch(param_3) {
    case 0:
      break;
    case 1:
switchD_00403854_caseD_1:
      *(undefined *)puVar3 = *(undefined *)param_2;
      return param_1;
    case 2:
switchD_00403854_caseD_2:
      *(undefined *)puVar3 = *(undefined *)param_2;
      *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
      return param_1;
    case 3:
switchD_00403854_caseD_3:
      *(undefined *)puVar3 = *(undefined *)param_2;
      *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)param_2 + 1);
      *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)param_2 + 2);
      return param_1;
    default:
      uVar2 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        *(undefined *)param_1 = *(undefined *)param_2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        uVar1 = uVar2 >> 2;
        *(undefined *)((int)param_1 + 2) = *(undefined *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (uVar1 < 8) {
LAB_0040385c:
                    // WARNING: Could not recover jumptable at 0x0040385c. Too many branches
                    // WARNING: Treating indirect jump as call
          puVar3 = (undefined4 *)(*(code *)(&PTR_LAB_004038dc)[uVar1])();
          return puVar3;
        }
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        switch(uVar2 & 3) {
        case 3:
          goto switchD_00403854_caseD_3;
        case 2:
          goto switchD_00403854_caseD_2;
        case 1:
          goto switchD_00403854_caseD_1;
        }
        break;
      case 2:
        *(undefined *)param_1 = *(undefined *)param_2;
        uVar1 = uVar2 >> 2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (uVar1 < 8) goto LAB_0040385c;
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        switch(uVar2 & 3) {
        case 3:
          goto switchD_00403854_caseD_3;
        case 2:
          goto switchD_00403854_caseD_2;
        case 1:
          goto switchD_00403854_caseD_1;
        }
        break;
      case 3:
        *(undefined *)param_1 = *(undefined *)param_2;
        uVar1 = uVar2 >> 2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (uVar1 < 8) goto LAB_0040385c;
        while (uVar1 != 0) {
          uVar1 = uVar1 - 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        switch(uVar2 & 3) {
        case 3:
          goto switchD_00403854_caseD_3;
        case 2:
          goto switchD_00403854_caseD_2;
        case 1:
          goto switchD_00403854_caseD_1;
        }
      }
    }
  }
  return param_1;
}



// WARNING: Unable to track spacebase fully for stack

void FUN_00403b40(void)

{
  uint in_EAX;
  undefined *puVar1;
  undefined4 local_res0;
  
  puVar1 = &stack0x00000004;
  if (0xfff < in_EAX) {
    do {
      puVar1 = puVar1 + -0x1000;
      in_EAX = in_EAX - 0x1000;
    } while (0xfff < in_EAX);
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = local_res0;
  return;
}



// Library Function - Single Match
// Name: _memset
// Library: Visual Studio 1998 Release

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  int *piVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  piVar4 = (int *)_Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined *)piVar4 = (undefined)_Val;
        piVar4 = (int *)((int)piVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *piVar4 = uVar1;
        piVar4 = piVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)piVar4 = (char)uVar1;
    piVar4 = (int *)((int)piVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x00403bc8. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


