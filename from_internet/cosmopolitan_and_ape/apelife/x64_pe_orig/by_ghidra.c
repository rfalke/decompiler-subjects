typedef unsigned char   undefined;

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
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef unsigned short    wchar16;
typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef uint UINT;

typedef ulonglong UINT_PTR;

typedef UINT_PTR WPARAM;

typedef longlong LONG_PTR;

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

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ * HDC;

typedef int BOOL;

typedef uchar BYTE;

struct HDC__ {
    int unused;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagWNDCLASSW tagWNDCLASSW, *PtagWNDCLASSW;

typedef struct tagWNDCLASSW WNDCLASSW;

typedef LONG_PTR LRESULT;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;

typedef wchar_t WCHAR;

typedef WCHAR * LPCWSTR;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct tagWNDCLASSW {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct tagMSG * LPMSG;

typedef struct tagPAINTSTRUCT * LPPAINTSTRUCT;

typedef ulong ULONG;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef DWORD * LPDWORD;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef DWORD * PDWORD;

typedef ushort WORD;

typedef void * LPVOID;

typedef HINSTANCE HMODULE;

typedef BYTE * LPBYTE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME * LPFILETIME;

typedef longlong INT_PTR;

typedef INT_PTR (* FARPROC)(void);

typedef WORD ATOM;

typedef struct HRGN__ * HRGN;

typedef BOOL * LPBOOL;

typedef void * HGDIOBJ;

typedef void * LPCVOID;

typedef DWORD COLORREF;

typedef struct HBITMAP__ * HBITMAP;

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

typedef struct _COORD _COORD, *P_COORD;

typedef struct _COORD COORD;

typedef short SHORT;

struct _COORD {
    SHORT X;
    SHORT Y;
};

typedef struct _SMALL_RECT _SMALL_RECT, *P_SMALL_RECT;

typedef struct _SMALL_RECT SMALL_RECT;

struct _SMALL_RECT {
    SHORT Left;
    SHORT Top;
    SHORT Right;
    SHORT Bottom;
};

typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX _CONSOLE_SCREEN_BUFFER_INFOEX, *P_CONSOLE_SCREEN_BUFFER_INFOEX;

struct _CONSOLE_SCREEN_BUFFER_INFOEX {
    ULONG cbSize;
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
    WORD wPopupAttributes;
    BOOL bFullscreenSupported;
    COLORREF ColorTable[16];
};

typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX * PCONSOLE_SCREEN_BUFFER_INFOEX;

typedef BOOL (* PHANDLER_ROUTINE)(DWORD);

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef union _union_552 _union_552, *P_union_552;

typedef ulonglong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef struct _struct_553 _struct_553, *P_struct_553;

struct _struct_553 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_552 {
    DWORD dwOemId;
    struct _struct_553 s;
};

struct _SYSTEM_INFO {
    union _union_552 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

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

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
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

typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo=0,
    FileStandardInfo=1,
    FileNameInfo=2,
    FileRenameInfo=3,
    FileDispositionInfo=4,
    FileAllocationInfo=5,
    FileEndOfFileInfo=6,
    FileStreamInfo=7,
    FileCompressionInfo=8,
    FileAttributeTagInfo=9,
    FileIdBothDirectoryInfo=10,
    FileIdBothDirectoryRestartInfo=11,
    FileIoPriorityHintInfo=12,
    FileRemoteProtocolInfo=13,
    MaximumFileInfoByHandleClass=14
} _FILE_INFO_BY_HANDLE_CLASS;

typedef enum _FILE_INFO_BY_HANDLE_CLASS FILE_INFO_BY_HANDLE_CLASS;

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _BY_HANDLE_FILE_INFORMATION _BY_HANDLE_FILE_INFORMATION, *P_BY_HANDLE_FILE_INFORMATION;

struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
};

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _BY_HANDLE_FILE_INFORMATION * LPBY_HANDLE_FILE_INFORMATION;

typedef struct _PROCESS_INFORMATION * LPPROCESS_INFORMATION;

typedef struct _PRIVILEGE_SET _PRIVILEGE_SET, *P_PRIVILEGE_SET;

typedef struct _LUID_AND_ATTRIBUTES _LUID_AND_ATTRIBUTES, *P_LUID_AND_ATTRIBUTES;

typedef struct _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;

typedef struct _LUID _LUID, *P_LUID;

typedef struct _LUID LUID;

struct _LUID {
    DWORD LowPart;
    LONG HighPart;
};

struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    DWORD Attributes;
};

struct _PRIVILEGE_SET {
    DWORD PrivilegeCount;
    DWORD Control;
    LUID_AND_ATTRIBUTES Privilege[1];
};

typedef PVOID PSECURITY_DESCRIPTOR;

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
} _SECURITY_IMPERSONATION_LEVEL;

typedef enum _SECURITY_IMPERSONATION_LEVEL SECURITY_IMPERSONATION_LEVEL;

typedef struct _PRIVILEGE_SET * PPRIVILEGE_SET;

typedef struct _GENERIC_MAPPING _GENERIC_MAPPING, *P_GENERIC_MAPPING;

typedef DWORD ACCESS_MASK;

struct _GENERIC_MAPPING {
    ACCESS_MASK GenericRead;
    ACCESS_MASK GenericWrite;
    ACCESS_MASK GenericExecute;
    ACCESS_MASK GenericAll;
};

typedef CHAR * LPSTR;

typedef struct _GENERIC_MAPPING GENERIC_MAPPING;

typedef DWORD SECURITY_INFORMATION;

typedef WCHAR * LPWCH;

typedef GENERIC_MAPPING * PGENERIC_MAPPING;

typedef HANDLE * PHANDLE;

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
    byte e_program[2376]; // Actual DOS program
};

typedef struct tagOFNW tagOFNW, *PtagOFNW;

typedef UINT_PTR (* LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNW {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCWSTR lpstrFilter;
    LPWSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPWSTR lpstrFile;
    DWORD nMaxFile;
    LPWSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCWSTR lpstrInitialDir;
    LPCWSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCWSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
    void * pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

typedef struct tagOFNW * LPOPENFILENAMEW;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

typedef WSADATA * LPWSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char * lpVendorInfo;
    char szDescription[257];
    char szSystemStatus[129];
};

typedef UINT_PTR SOCKET;

typedef ULONG_PTR SIZE_T;




longlong FUN_004010b0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  
  uVar4 = (ulonglong)((uint)(unaff_RDI >> 0x27) & 0x1ff);
  if (unaff_ESI != 0) {
    iVar3 = 0x1e;
    do {
      puVar1 = (ulonglong *)(param_2 + uVar4 * 8);
      uVar4 = *puVar1;
      if (uVar4 == 0) {
        uVar4 = *param_1;
        *param_1 = uVar4 - 0x1000;
        uVar4 = uVar4 - 0x1000 | 3;
        *puVar1 = uVar4;
      }
      param_2 = uVar4 & 0x3fffffffff000;
      bVar2 = (byte)iVar3;
      iVar3 = iVar3 + -9;
      uVar4 = (ulonglong)((uint)(unaff_RDI >> (bVar2 & 0x3f)) & 0x1ff);
    } while (unaff_ESI * -9 + 0x1e != iVar3);
  }
  return param_2 + uVar4 * 8;
}



undefined8 FUN_00401114(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    syscall();
    syscall();
    syscall();
  }
  FUN_00416001();
  return 0;
}



bool FUN_004023b0(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  int unaff_EDI;
  bool bVar5;
  uint local_f0;
  
  uVar1 = DAT_00448020;
  if ((DAT_0041c718 & 4) != 0) {
    bVar5 = false;
    uVar4 = FUN_00410c50();
    if ((char)uVar4 != '\0') {
      DVar2 = GetFileType(*(HANDLE *)(DAT_00447b50 + (longlong)unaff_EDI * 0x18));
      bVar5 = DVar2 == 2;
    }
    return bVar5;
  }
  iVar3 = FUN_00402480();
  if (iVar3 != -1) {
    return (local_f0 & 0xf000) == 0x2000;
  }
  DAT_00448020 = uVar1;
  return false;
}



int FUN_00402480(void)

{
  int iVar1;
  
  iVar1 = FUN_004122d0();
  if (iVar1 != -1) {
    FUN_004024b0();
  }
  return iVar1;
}



void FUN_004024b0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (unaff_RDI == (longlong *)0x0) {
    return;
  }
  if ((DAT_0041c718 & 8) == 0) {
    if ((DAT_0041c718 & 0x20) == 0) {
      if ((DAT_0041c718 & 0x10) == 0) {
        return;
      }
      iVar1 = *(int *)unaff_RDI;
      iVar2 = *(int *)((longlong)unaff_RDI + 0x1c);
      lVar9 = unaff_RDI[4];
      lVar8 = unaff_RDI[5];
      *unaff_RDI = (longlong)*(int *)((longlong)unaff_RDI + 4);
      lVar6 = unaff_RDI[10];
      *(int *)(unaff_RDI + 3) = iVar1;
      iVar1 = *(int *)(unaff_RDI + 0xc);
      lVar10 = unaff_RDI[0xb];
      *(undefined8 *)((longlong)unaff_RDI + 0x1c) = *(undefined8 *)((longlong)unaff_RDI + 0x14);
      lVar7 = unaff_RDI[6];
      lVar4 = unaff_RDI[7];
      unaff_RDI[2] = (ulonglong)*(uint *)(unaff_RDI + 2);
      lVar5 = unaff_RDI[8];
      lVar3 = unaff_RDI[9];
      unaff_RDI[5] = (longlong)iVar2;
    }
    else {
      lVar6 = unaff_RDI[0xe];
      iVar1 = *(int *)(unaff_RDI + 0x10);
      lVar10 = unaff_RDI[0xf];
      lVar9 = unaff_RDI[6];
      lVar8 = unaff_RDI[7];
      *(uint *)(unaff_RDI + 3) = (uint)*(ushort *)(unaff_RDI + 3);
      lVar7 = unaff_RDI[8];
      lVar4 = unaff_RDI[9];
      lVar5 = unaff_RDI[10];
      lVar3 = unaff_RDI[0xb];
    }
    unaff_RDI[6] = lVar6;
    unaff_RDI[7] = (longlong)iVar1;
    unaff_RDI[8] = lVar10;
  }
  else {
    lVar3 = unaff_RDI[2];
    unaff_RDI[2] = (ulonglong)*(ushort *)((longlong)unaff_RDI + 6);
    lVar8 = unaff_RDI[5];
    unaff_RDI[5] = (longlong)*(int *)(unaff_RDI + 3);
    lVar9 = unaff_RDI[4];
    *(uint *)(unaff_RDI + 3) = (uint)*(ushort *)((longlong)unaff_RDI + 4);
    lVar7 = unaff_RDI[6];
    lVar4 = unaff_RDI[7];
    *unaff_RDI = (longlong)*(int *)unaff_RDI;
    lVar5 = unaff_RDI[8];
    *(longlong *)((longlong)unaff_RDI + 0x1c) = lVar3;
    unaff_RDI[6] = unaff_RDI[0xc];
    lVar3 = unaff_RDI[9];
    unaff_RDI[7] = (longlong)*(int *)(unaff_RDI + 0xe);
    unaff_RDI[8] = unaff_RDI[0xd];
  }
  unaff_RDI[9] = lVar9;
  unaff_RDI[10] = lVar8;
  unaff_RDI[0xb] = lVar7;
  unaff_RDI[0xc] = lVar4;
  unaff_RDI[0xd] = lVar5;
  unaff_RDI[0xe] = lVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402640(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *unaff_R15;
  
  if ((DAT_0041c718 & 0xc) == 0) {
    lVar2 = *unaff_R15;
    while (lVar2 != 0) {
      if (DAT_00440790 == lVar2) {
        if ((ulonglong *)unaff_R15[1] != (ulonglong *)0x0) {
          _DAT_00448010 = _DAT_00448010 ^ *(ulonglong *)unaff_R15[1];
          return;
        }
        return;
      }
      plVar1 = unaff_R15 + 2;
      unaff_R15 = unaff_R15 + 2;
      lVar2 = *plVar1;
    }
  }
  _DAT_00448010 = _DAT_00448010 ^ 0x139408dcbbf7a44;
  if ((DAT_0041c718 & 4) != 0) {
    uVar3 = FUN_00405e30();
    _DAT_00448010 = _DAT_00448010 ^ uVar3;
    return;
  }
  FUN_00412210();
  return;
}



void FUN_0040286f(void)

{
  FUN_0040ee90();
  FUN_0040288a();
  FUN_00416001();
  do {
    invalidInstructionException();
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0040289d)

void FUN_0040288a(void)

{
  return;
}



undefined8 FUN_00402acd(void)

{
  DAT_00448020 = DAT_004407d0;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b21(void)

{
  DAT_00448020 = DAT_00440820;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b8a(void)

{
  DAT_00448020 = DAT_00440868;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402b9f(void)

{
  DAT_00448020 = DAT_00440870;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402bb4(void)

{
  DAT_00448020 = DAT_00440890;
  return 0xffffffffffffffff;
}



undefined8 FUN_00402bc9(void)

{
  DAT_00448020 = DAT_00440898;
  return 0xffffffffffffffff;
}



void FUN_00402c0f(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402c52(void)

{
  GetCursor();
  return;
}



void FUN_00402c92(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402cc5(void)

{
  FUN_0040607a();
  return;
}



void FUN_00402ce8(void)

{
  ReleaseCapture();
  return;
}



void FUN_00402d08(void)

{
  HWND unaff_RDI;
  
  SetCapture(unaff_RDI);
  return;
}



void FUN_00402d1b(void)

{
  HCURSOR unaff_RDI;
  
  SetCursor(unaff_RDI);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402de0(void)

{
  ushort *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 local_438;
  ushort local_430 [512];
  
  lVar4 = DAT_00447b50;
  if (unaff_RSI < 0x41) {
    if (unaff_RSI == 0) {
      iVar2 = FUN_004033bc();
      if (iVar2 != -1) {
        return;
      }
    }
    else {
      puVar1 = (ushort *)(unaff_RDI + 4);
      uVar5 = DAT_00440978 | DAT_00440968 | _DAT_00440970;
      puVar6 = local_430;
      puVar8 = puVar1;
      do {
        iVar2 = *(int *)(puVar8 + -2);
        uVar3 = FUN_00410c50();
        if ((char)uVar3 == '\0') {
          FUN_00402acd();
          return;
        }
        puVar7 = puVar8 + 4;
        *(undefined8 *)(puVar6 + -4) = *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
        *puVar6 = *puVar8 & uVar5;
        puVar6 = puVar6 + 8;
        puVar8 = puVar7;
      } while (puVar7 != puVar1 + unaff_RSI * 4);
      iVar2 = FUN_004033bc();
      lVar4 = 0;
      if (iVar2 != -1) {
        do {
          *(ushort *)(unaff_RDI + 6 + lVar4) = local_430[lVar4 + 1];
          lVar4 = lVar4 + 8;
        } while (lVar4 != unaff_RSI * 8);
        return;
      }
    }
    FUN_00403070();
  }
  else {
    FUN_00402b21();
  }
  return;
}



undefined8 FUN_00403070(void)

{
  FUN_004033ac();
  DAT_00448020 = FUN_004031c0();
  return 0xffffffffffffffff;
}



ulonglong FUN_00403110(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *unaff_RSI;
  undefined4 *unaff_RDI;
  ulonglong uVar4;
  
  uVar2 = 0x10;
  if (param_2 < 0x11) {
    uVar2 = param_2;
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0x7ffff000;
    uVar4 = 0;
    do {
      *(undefined8 *)(unaff_RDI + 2) = *unaff_RSI;
      uVar1 = unaff_RSI[1];
      if (uVar3 <= uVar1) {
        *unaff_RDI = (int)uVar3;
        return uVar4;
      }
      *unaff_RDI = (int)uVar1;
      uVar4 = uVar4 + 1;
      unaff_RDI = unaff_RDI + 4;
      uVar3 = uVar3 - (uVar1 & 0xffffffff);
      unaff_RSI = unaff_RSI + 2;
    } while (uVar4 < uVar2);
  }
  return uVar4;
}



// WARNING: Removing unreachable block (ram,0x004031c8)
// WARNING: Removing unreachable block (ram,0x004031d0)
// WARNING: Removing unreachable block (ram,0x004032a7)
// WARNING: Removing unreachable block (ram,0x00403280)
// WARNING: Removing unreachable block (ram,0x00403210)
// WARNING: Removing unreachable block (ram,0x0040321f)
// WARNING: Removing unreachable block (ram,0x00403356)
// WARNING: Removing unreachable block (ram,0x0040335d)
// WARNING: Removing unreachable block (ram,0x004032de)
// WARNING: Removing unreachable block (ram,0x004032e6)
// WARNING: Removing unreachable block (ram,0x004032ee)
// WARNING: Removing unreachable block (ram,0x00403230)
// WARNING: Removing unreachable block (ram,0x0040323c)
// WARNING: Removing unreachable block (ram,0x004032d0)
// WARNING: Removing unreachable block (ram,0x004032dc)
// WARNING: Removing unreachable block (ram,0x004032f5)
// WARNING: Removing unreachable block (ram,0x004032fd)
// WARNING: Removing unreachable block (ram,0x00403305)
// WARNING: Removing unreachable block (ram,0x0040330c)
// WARNING: Removing unreachable block (ram,0x00403242)
// WARNING: Removing unreachable block (ram,0x0040324e)
// WARNING: Removing unreachable block (ram,0x004032b0)
// WARNING: Removing unreachable block (ram,0x00403292)
// WARNING: Removing unreachable block (ram,0x004032be)
// WARNING: Removing unreachable block (ram,0x004032c6)
// WARNING: Removing unreachable block (ram,0x00403256)
// WARNING: Removing unreachable block (ram,0x00403265)
// WARNING: Removing unreachable block (ram,0x0040334f)
// WARNING: Removing unreachable block (ram,0x004031dc)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00403180(undefined8 param_1)

{
  ulonglong uVar1;
  
  FUN_0040ed60(param_1);
  uVar1 = FUN_004033ec();
  if (((int)uVar1 == 0) && (_DAT_004464c0 == 0x202)) {
    return uVar1;
  }
  FUN_00401114();
  return 0x202;
}



uint FUN_004031c0(void)

{
  uint unaff_EDI;
  
  if (unaff_EDI < 0xeb) {
    switch(unaff_EDI) {
    case 1:
      return DAT_00440820;
    case 2:
    case 3:
    case 0x12:
    case 0x35:
    case 0x43:
    case 0xa1:
    case 0xce:
LAB_00403317:
      return DAT_00440860;
    default:
      return unaff_EDI;
    case 8:
    case 0x44:
      goto LAB_00403305;
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1b:
    case 0x1c:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x41:
    case 0x52:
    case 0x9e:
      return DAT_004407b0;
    case 0x32:
      return DAT_00440888;
    case 0x33:
LAB_0040333a:
      return DAT_004407f0;
    case 0x34:
      return DAT_004407b8;
    case 0x36:
    case 0x3a:
LAB_0040331e:
      return DAT_00440850;
    case 0x3b:
    case 0x40:
LAB_0040332c:
      return DAT_004407e8;
    case 0x47:
      return uRam00000000004407c8;
    case 0x79:
      return DAT_004408a8;
    case 0x7a:
      return DAT_00440800;
    case 0x7e:
LAB_00403341:
      return DAT_00440870;
    case 0x91:
      return uRam0000000000440880;
    case 0xe9:
      goto LAB_00403325;
    case 0xea:
      return DAT_00440840;
    }
  }
  if (0x5ac < unaff_EDI) {
    if (unaff_EDI == 0x271e) {
      return DAT_00440800;
    }
    if (unaff_EDI < 0x271f) {
      if (unaff_EDI == 0x6f8) {
        return DAT_00440840;
      }
      if (unaff_EDI < 0x6f9) {
        if (unaff_EDI == 0x5ae) {
          return DAT_00440868;
        }
        if (unaff_EDI != 0x5af) {
          if (unaff_EDI != 0x5ad) {
            return unaff_EDI;
          }
          return DAT_00440868;
        }
        return DAT_00440868;
      }
      if (unaff_EDI == 0x718) {
        return DAT_00440868;
      }
      if (unaff_EDI != 0x271d) {
        return unaff_EDI;
      }
      return DAT_004407b0;
    }
    if (0x2775 < unaff_EDI) {
      return unaff_EDI;
    }
    if (unaff_EDI < 0x274a) {
      if (unaff_EDI == 0x2726) {
        return DAT_00440820;
      }
      if (unaff_EDI == 0x2734) {
        return DAT_004407d8;
      }
      return unaff_EDI;
    }
    switch(unaff_EDI) {
    case 0x274a:
    case 0x2775:
LAB_00403325:
      return DAT_004408a0;
    default:
      return unaff_EDI;
    case 0x2753:
      goto LAB_00403305;
    case 0x276b:
    case 0x276d:
      goto LAB_0040331e;
    case 0x276c:
      goto LAB_00403341;
    }
  }
  if (unaff_EDI < 0x5aa) {
    if (0x4e8 < unaff_EDI) {
      return unaff_EDI;
    }
    if (unaff_EDI < 0x490) {
      if (unaff_EDI == 0x3e5) {
        return DAT_00440810;
      }
      if (0x3e5 < unaff_EDI) {
        if (unaff_EDI == 0x3e6) {
          return DAT_00440800;
        }
        return unaff_EDI;
      }
      if (unaff_EDI == 0x1e7) {
        return DAT_004407c0;
      }
      if (unaff_EDI == 0x3e3) {
        return DAT_00440818;
      }
      return unaff_EDI;
    }
    switch(unaff_EDI) {
    case 0x490:
      goto LAB_00403317;
    default:
      return unaff_EDI;
    case 0x4be:
      return DAT_004407c0;
    case 0x4c9:
      goto LAB_0040333a;
    case 0x4ca:
      goto LAB_00403325;
    case 0x4ce:
      return DAT_00440828;
    case 0x4cf:
    case 0x4d1:
      return DAT_00440858;
    case 0x4d0:
    case 0x4e8:
      return DAT_00440808;
    case 0x4d2:
      return DAT_004407f8;
    case 0x4d3:
      return DAT_00440818;
    case 0x4d4:
      goto LAB_0040332c;
    }
  }
LAB_00403305:
  return DAT_00440868;
}



void FUN_0040339c(void)

{
  WSACleanup();
  return;
}



void FUN_004033ac(void)

{
  WSAGetLastError();
  return;
}



void FUN_004033bc(void)

{
  FUN_0040607a();
  return;
}



void FUN_004033cc(void)

{
  FUN_0040606a();
  return;
}



void FUN_004033dc(void)

{
  FUN_0040606a();
  return;
}



void FUN_004033ec(void)

{
  FUN_0040607a();
  return;
}



void FUN_004036a0(undefined *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint local_3c [3];
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      (*(code *)param_1)(local_3c,param_2 - uVar1,0);
      uVar1 = uVar1 + local_3c[0];
    } while (uVar1 < param_2);
    return;
  }
  return;
}



void FUN_00403720(undefined8 param_1,ulonglong param_2)

{
  FUN_004036a0(&DAT_00405fd4,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403730(void)

{
  DWORD DVar1;
  uint uVar2;
  HANDLE hFileMappingObject;
  WCHAR *pWVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong dwNumberOfBytesToMap;
  int *piVar6;
  LPVOID lpBaseAddress;
  undefined local_104 [100];
  WCHAR local_a0;
  WCHAR local_9e [47];
  undefined *hFileMappingObject_00;
  
  DVar1 = GetEnvironmentVariableW(L"_FORK",&local_a0,0x2c);
  if (0x2a < DVar1 - 1) {
    return;
  }
  pWVar3 = &local_a0;
  uVar5 = (ushort)local_a0 - 0x30;
  uVar4 = (ushort)uVar5;
  while (uVar4 < 10) {
    pWVar3 = pWVar3 + 1;
    local_a0 = *pWVar3;
    uVar5 = (ushort)local_a0 - 0x30;
    uVar4 = (ushort)uVar5;
  }
  hFileMappingObject_00 = (undefined *)(ulonglong)uVar5;
  if (local_a0 == L' ') goto LAB_00403962;
  do {
    uVar5 = 0;
    piVar6 = &DAT_00446ee8;
    FUN_00403720(hFileMappingObject_00,0x40);
    FUN_00403720(hFileMappingObject_00,4);
    if (_DAT_00446ee0 != 0) {
      do {
        FUN_00403720(hFileMappingObject_00,0x18);
        lpBaseAddress = (LPVOID)((longlong)*piVar6 << 0x10);
        uVar2 = (piVar6[4] & 7U) - 1;
        dwNumberOfBytesToMap = (longlong)(piVar6[1] - *piVar6) * 0x10000 + 0x10000;
        if (uVar2 < 7) {
          DVar1 = *(DWORD *)(&DAT_004187f0 + (ulonglong)uVar2 * 4);
        }
        else {
          DVar1 = 0;
        }
        if ((*(byte *)(piVar6 + 5) & 2) == 0) {
          hFileMappingObject_00 = *(undefined **)(piVar6 + 2);
          MapViewOfFileExNuma(hFileMappingObject_00,DVar1,0,0,dwNumberOfBytesToMap,lpBaseAddress,
                              0xffffffff);
        }
        else {
          hFileMappingObject =
               CreateFileMappingNumaW
                         ((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,0x40,0,
                          (DWORD)dwNumberOfBytesToMap,(LPCWSTR)0x0,0xffffffff);
          *(HANDLE *)(piVar6 + 2) = hFileMappingObject;
          MapViewOfFileExNuma(hFileMappingObject,0x26,0,0,dwNumberOfBytesToMap,lpBaseAddress,
                              0xffffffff);
          FUN_00403720(hFileMappingObject,dwNumberOfBytesToMap);
          hFileMappingObject_00 = local_104;
          FUN_00405ff4();
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 6;
      } while (uVar5 < _DAT_00446ee0);
    }
    FUN_00403720(hFileMappingObject_00,0x2d000);
    FUN_00405ef5();
    pWVar3 = (WCHAR *)FUN_00416315();
LAB_00403962:
    uVar5 = (ushort)pWVar3[1] - 0x30;
    if ((ushort)uVar5 < 10) {
      pWVar3 = pWVar3 + 1;
      do {
        pWVar3 = pWVar3 + 1;
        uVar5 = (ushort)*pWVar3 - 0x30;
      } while ((ushort)uVar5 < 10);
    }
    hFileMappingObject_00 = (undefined *)(ulonglong)uVar5;
    FUN_00405ef5();
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  char cVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  LPWCH pWVar5;
  HANDLE hFile;
  HANDLE hFile_00;
  HANDLE hFile_01;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong unaff_GS_OFFSET;
  
  uVar6 = 0x800;
  SetDefaultDllDirectories();
  FUN_00403180(uVar6);
  FUN_00403730();
  do {
    do {
      DAT_0041c718 = 4;
      DAT_00446ef0 = CreateFileMappingNumaW
                               ((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,0x40,0,0x20000
                                ,(LPCWSTR)0x0,0xffffffff);
      pvVar3 = MapViewOfFileExNuma(DAT_00446ef0,6,0,0,0x20000,(LPVOID)0x777000000000,0xffffffff);
      DAT_00446ef8 = 3;
      DAT_00446ee8 = (int)((ulonglong)pvVar3 >> 0x10);
      DAT_00446eec = DAT_00446ee8 + 1;
      plVar8 = (longlong *)((longlong)pvVar3 + 0x11ff0);
      _DAT_00446efc = DAT_004408c8 | 2;
      _DAT_00446ee0 = 1;
      GetCommandLineW();
      uVar4 = FUN_004047d0((longlong)plVar8,0x3fff,0x200);
      pcVar9 = *(char **)((longlong)pvVar3 + 0x11ff0);
      cVar1 = *pcVar9;
      if (cVar1 != '\0') {
        lVar7 = 1;
        do {
          if (cVar1 == '\\') {
            *pcVar9 = '/';
          }
          pcVar9 = (char *)(*plVar8 + lVar7);
          lVar7 = lVar7 + 1;
          cVar1 = *pcVar9;
        } while (cVar1 != '\0');
      }
      pWVar5 = GetEnvironmentStringsW();
      FUN_00404b30((longlong)pvVar3 + 0x12ff0,0x7fff,0x200);
      FreeEnvironmentStringsW(pWVar5);
      *(undefined8 *)((longlong)pvVar3 + 0x13ff0) = 0;
      *(undefined8 *)((longlong)pvVar3 + 0x13ff8) = 0;
      FUN_0040f84e(plVar8,uVar4 & 0xffffffff,(longlong)pvVar3 + 0x12ff0,(longlong)pvVar3 + 0x13ff0);
    } while (((*(uint *)(*(longlong *)(unaff_GS_OFFSET + 0x60) + 0x118) & 0xff) << 8 |
             *(uint *)(*(longlong *)(unaff_GS_OFFSET + 0x60) + 0x11c)) < 0xa00);
    FUN_0040ed60(plVar8);
    hFile = GetStdHandle(0xfffffff6);
    hFile_00 = GetStdHandle(0xfffffff5);
    hFile_01 = GetStdHandle(0xfffffff4);
    DVar2 = GetFileType(hFile);
    if (DVar2 == 2) {
      SetEnvironmentVariableW(L"TERM",L"xterm-truecolor");
      DAT_00447b10 = hFile;
      DAT_00447b08 = GetConsoleCP();
      SetConsoleCP(0xfde9);
      GetConsoleMode(hFile,&DAT_00447b0c);
      SetConsoleMode(hFile,DAT_00447b0c | 0x20f);
    }
    DVar2 = GetFileType(hFile_00);
    if ((DVar2 == 2) || (DVar2 = GetFileType(hFile_01), hFile_00 = hFile_01, DVar2 == 2)) {
      SetEnvironmentVariableW(L"TERM",L"xterm-truecolor");
      DAT_00447b20 = hFile_00;
      DAT_00447b18 = GetConsoleOutputCP();
      SetConsoleOutputCP(0xfde9);
      GetConsoleMode(hFile_00,&DAT_00447b1c);
      SetConsoleMode(hFile_00,~-(uint)(((*(uint *)(*(longlong *)(unaff_GS_OFFSET + 0x60) + 0x118) &
                                        0xff) << 8 |
                                       *(uint *)(*(longlong *)(unaff_GS_OFFSET + 0x60) + 0x11c)) <
                                      0xa00) & 4 | DAT_00447b1c | 3);
    }
  } while( true );
}



uint FUN_00404760(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort **unaff_RDI;
  
  puVar2 = *unaff_RDI;
  do {
    puVar3 = puVar2;
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_00404783;
    puVar2 = puVar3 + 1;
  } while ((uVar1 & 0xfc00) == 0xdc00);
  if ((uVar1 & 0xfc00) == 0xd800) {
    *unaff_RDI = puVar3 + 2;
    if (puVar3[1] == 0) {
      return 0;
    }
    return puVar3[1] + 0x2400 + (uVar1 - 0xd800) * 0x400;
  }
LAB_00404783:
  *unaff_RDI = puVar3 + 1;
  return (uint)uVar1;
}



ulonglong FUN_004047d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined7 extraout_var_00;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined *unaff_RSI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_40;
  
  puVar3 = unaff_RSI + param_2;
  uVar11 = 0;
  puVar6 = unaff_RSI;
  local_40 = FUN_00404760();
  if (local_40 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      while (bVar1 = FUN_004148d0(), (int)CONCAT71(extraout_var,bVar1) != 0) {
        local_40 = FUN_00404760();
        if (local_40 == 0) {
          uVar5 = uVar11 & 0xffffffff;
          goto LAB_00404a90;
        }
      }
      uVar11 = uVar11 + 1;
      if (uVar11 < param_3) {
        puVar4 = puVar6;
        if (puVar3 <= puVar6) {
          puVar4 = (undefined *)0x0;
        }
        *(undefined **)(param_1 + -8 + uVar11 * 8) = puVar4;
      }
      bVar1 = false;
      if (local_40 == 0) {
        puVar4 = puVar6;
        if (puVar3 <= puVar6) break;
LAB_004048f8:
        puVar4 = puVar6 + 1;
        *puVar6 = 0;
      }
      else {
        do {
          if ((!bVar1) && (bVar2 = FUN_004148d0(), (int)CONCAT71(extraout_var_00,bVar2) != 0))
          break;
          if ((local_40 == 0x22) || (local_40 == 0x5c)) {
            uVar5 = 0;
            if (local_40 == 0x5c) {
              do {
                local_40 = FUN_00404760();
                uVar5 = uVar5 + 1;
              } while (local_40 == 0x5c);
              if (local_40 == 0x22) {
LAB_0040494e:
                uVar10 = 0;
                do {
                  uVar9 = uVar10;
                  local_40 = FUN_00404760();
                  uVar10 = uVar9 + 1;
                } while (local_40 == 0x22);
                if (uVar10 != 0) {
                  uVar7 = uVar5;
                  puVar4 = puVar6;
                  if (1 < uVar5) {
                    do {
                      puVar4 = puVar6;
                      if (puVar6 < puVar3) {
                        puVar4 = puVar6 + 1;
                        *puVar6 = 0x5c;
                      }
                      uVar7 = uVar7 - 2;
                      puVar6 = puVar4;
                    } while (1 < uVar7);
                    uVar5 = (ulonglong)((uint)uVar5 & 1);
                  }
                  puVar6 = puVar4;
                  if (uVar5 != 0) {
                    if (puVar4 < puVar3) {
                      puVar6 = puVar4 + 1;
                      *puVar4 = 0x22;
                    }
                    uVar10 = uVar9;
                    if (uVar9 == 0) goto LAB_004048e9;
                  }
                  if (bVar1) {
                    uVar9 = uVar10 + 1;
                    uVar5 = uVar10;
                  }
                  else {
                    uVar5 = uVar10 - 1;
                    uVar9 = uVar10;
                  }
                  uVar10 = 3;
                  puVar4 = puVar6;
                  if (2 < uVar9) {
                    do {
                      puVar6 = puVar4;
                      if (puVar4 < puVar3) {
                        puVar6 = puVar4 + 1;
                        *puVar4 = 0x22;
                      }
                      uVar10 = uVar10 + 3;
                      puVar4 = puVar6;
                    } while (uVar10 <= uVar9);
                  }
                  bVar1 = uVar5 * -0x5555555555555555 < 0x5555555555555556;
                  goto LAB_004048e9;
                }
              }
              lVar8 = uVar5 - 1;
              puVar4 = puVar6;
              if (uVar5 != 0) {
                do {
                  puVar6 = puVar4;
                  if (puVar4 < puVar3) {
                    puVar6 = puVar4 + 1;
                    *puVar4 = 0x5c;
                  }
                  lVar8 = lVar8 + -1;
                  puVar4 = puVar6;
                } while (lVar8 != -1);
              }
            }
            else if (local_40 == 0x22) goto LAB_0040494e;
          }
          else {
            uVar5 = (ulonglong)(int)local_40;
            puVar4 = puVar6;
            if (0x7f < local_40) {
              uVar5 = FUN_00414845();
              puVar4 = puVar6;
            }
            do {
              puVar6 = puVar4;
              if (puVar3 <= puVar4) break;
              puVar6 = puVar4 + 1;
              *puVar4 = (char)uVar5;
              uVar5 = uVar5 >> 8;
              puVar4 = puVar6;
            } while (uVar5 != 0);
            local_40 = FUN_00404760();
          }
LAB_004048e9:
        } while (local_40 != 0);
        puVar4 = puVar6;
        if (puVar6 < puVar3) goto LAB_004048f8;
      }
      puVar6 = puVar4;
    } while (local_40 != 0);
    uVar5 = uVar11 & 0xffffffff;
    puVar6 = puVar4;
  }
LAB_00404a90:
  puVar4 = puVar6;
  if (puVar6 < puVar3) {
    puVar4 = puVar6 + 1;
    *puVar6 = 0;
  }
  if (param_2 != 0) {
    uVar10 = (longlong)puVar4 - (longlong)unaff_RSI;
    if (param_2 - 1U < (ulonglong)((longlong)puVar4 - (longlong)unaff_RSI)) {
      uVar10 = param_2 - 1U;
    }
    unaff_RSI[uVar10] = 0;
  }
  if (param_3 != 0) {
    uVar10 = param_3 - 1;
    if (uVar11 < param_3 - 1) {
      uVar10 = uVar11;
    }
    *(undefined8 *)(param_1 + uVar10 * 8) = 0;
  }
  return uVar5;
}



int FUN_00404b30(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined (*pauVar4) [16];
  undefined *unaff_RSI;
  undefined (*unaff_RDI) [16];
  int iVar5;
  
  iVar5 = 0;
  if (param_2 != 0) {
    lVar3 = param_1;
    if (*(short *)*unaff_RDI == 0) {
      param_2 = 0;
    }
    else {
      do {
        iVar1 = iVar5 + 1;
        param_2 = (longlong)iVar5;
        if ((ulonglong)(longlong)iVar1 < param_3) {
          *(undefined **)(param_1 + (longlong)iVar5 * 8) = unaff_RSI;
          param_2 = (longlong)iVar1;
          iVar5 = iVar1;
        }
        pauVar4 = unaff_RDI;
        uVar2 = FUN_00414e40(lVar3,unaff_RDI);
        unaff_RDI = (undefined (*) [16])(*unaff_RDI + (longlong)pauVar4 * 2);
        unaff_RSI = unaff_RSI + uVar2 + 1;
      } while (*(short *)*unaff_RDI != 0);
    }
    *unaff_RSI = 0;
  }
  if (param_2 < param_3) {
    *(undefined8 *)(param_1 + param_2 * 8) = 0;
  }
  return iVar5;
}



undefined8 FUN_004051d0(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  undefined8 uVar3;
  HANDLE hConsoleHandle;
  longlong lVar4;
  short *unaff_RSI;
  int unaff_EDI;
  int *piVar5;
  DWORD local_98;
  int local_94;
  undefined8 local_90;
  int local_88 [3];
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  
  piVar5 = &local_94;
  lVar4 = (longlong)unaff_EDI;
  local_90 = 1;
  uVar3 = FUN_00410c50();
  if ((char)uVar3 != '\0') goto LAB_00405243;
  do {
    uVar3 = FUN_00410c50();
    if ((char)uVar3 != '\0') goto LAB_00405243;
    FUN_00402acd();
    while( true ) {
      piVar5 = piVar5 + 1;
      if (local_88 == piVar5) {
        return 0xffffffff;
      }
      lVar4 = (longlong)*piVar5;
      uVar3 = FUN_00410c50();
      if ((char)uVar3 == '\0') break;
LAB_00405243:
      hConsoleHandle = *(HANDLE *)(DAT_00447b50 + lVar4 * 0x18);
      BVar2 = GetConsoleMode(hConsoleHandle,&local_98);
      if (BVar2 == 0) {
        FUN_00402bb4();
      }
      else {
        FUN_0041561f(hConsoleHandle,0x60);
        local_88[0] = 0x60;
        uVar3 = FUN_00405f4b();
        if ((int)uVar3 != 0) {
          *(undefined4 *)(unaff_RSI + 2) = 0;
          unaff_RSI[1] = (local_76 + 1) - local_7a;
          *unaff_RSI = (local_74 + 1) - local_78;
          return 0;
        }
        if ((DAT_00447f9c & 8) != 0) {
          unaff_RSI[1] = (short)DAT_00447f90;
          uVar1 = DAT_00447f94;
          *(undefined4 *)(unaff_RSI + 2) = 0;
          *unaff_RSI = (short)uVar1;
          return uVar3;
        }
        FUN_004162a0();
      }
    }
  } while( true );
}



ulonglong FUN_004056c0(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  LPOVERLAPPED lpOverlapped;
  ulonglong uVar2;
  LPVOID lpBuffer;
  LPVOID *unaff_RSI;
  HANDLE *unaff_RDI;
  DWORD nNumberOfBytesToRead;
  longlong unaff_GS_OFFSET;
  uint local_4c [11];
  
  if (param_2 != 0) {
    do {
      if (unaff_RSI[1] != (LPVOID)0x0) {
        lpOverlapped = (LPOVERLAPPED)FUN_00405e00();
        nNumberOfBytesToRead = 0x7ffff000;
        lpBuffer = *unaff_RSI;
        if (unaff_RSI[1] < (LPVOID)0x7ffff001) {
          nNumberOfBytesToRead = (DWORD)unaff_RSI[1];
        }
        goto LAB_00405717;
      }
      unaff_RSI = unaff_RSI + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  lpOverlapped = (LPOVERLAPPED)FUN_00405e00();
  nNumberOfBytesToRead = 0;
  lpBuffer = (LPVOID)0x0;
LAB_00405717:
  BVar1 = ReadFile(*unaff_RDI,lpBuffer,nNumberOfBytesToRead,local_4c,lpOverlapped);
  if (BVar1 != 0) {
    return (ulonglong)local_4c[0];
  }
  if (*(int *)(unaff_GS_OFFSET + 0x68) != 0x6d) {
    uVar2 = FUN_004162a0();
    return uVar2;
  }
  return 0;
}



ulonglong FUN_00405ac0(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  LPOVERLAPPED lpOverlapped;
  ulonglong uVar2;
  LPCVOID lpBuffer;
  LPCVOID *unaff_RSI;
  HANDLE *unaff_RDI;
  DWORD nNumberOfBytesToWrite;
  LPCVOID *ppvVar3;
  uint local_4c [9];
  
  if (param_2 != 0) {
    do {
      if (unaff_RSI[1] != (LPCVOID)0x0) {
        lpOverlapped = (LPOVERLAPPED)FUN_00405e00();
        nNumberOfBytesToWrite = 0x7ffff000;
        lpBuffer = *unaff_RSI;
        if (unaff_RSI[1] < (LPCVOID)0x7ffff001) {
          nNumberOfBytesToWrite = (DWORD)unaff_RSI[1];
        }
        goto LAB_00405b23;
      }
      unaff_RSI = unaff_RSI + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_2 = 0;
  lpOverlapped = (LPOVERLAPPED)FUN_00405e00();
  nNumberOfBytesToWrite = 0;
  lpBuffer = (LPCVOID)0x0;
LAB_00405b23:
  BVar1 = WriteFile(*unaff_RDI,lpBuffer,nNumberOfBytesToWrite,local_4c,lpOverlapped);
  if (BVar1 == 0) {
    uVar2 = FUN_004162a0();
    return uVar2;
  }
  if (local_4c[0] == 0) {
    ppvVar3 = unaff_RSI + param_2 * 2;
    do {
      unaff_RSI = unaff_RSI + 2;
    } while (ppvVar3 != unaff_RSI);
  }
  FlushFileBuffers(*unaff_RDI);
  return (ulonglong)local_4c[0];
}



undefined (*) [16] FUN_00405e00(void)

{
  undefined (*unaff_RSI) [16];
  longlong unaff_RDI;
  
  if (unaff_RDI != -1) {
    unaff_RSI[1] = (undefined  [16])0x0;
    *unaff_RSI = (undefined  [16])0x0;
    *(longlong *)unaff_RSI[1] = unaff_RDI;
    return unaff_RSI;
  }
  return (undefined (*) [16])0x0;
}



ulonglong FUN_00405e30(void)

{
  int iVar1;
  undefined8 in_RAX;
  code *pcVar2;
  ulonglong uVar3;
  longlong unaff_GS_OFFSET;
  int local_20;
  int local_1c;
  
  uVar3 = rdtsc();
  uVar3 = (ulonglong)*(uint *)(unaff_GS_OFFSET + 0x40) << 0x11 ^
          (ulonglong)*(uint *)(unaff_GS_OFFSET + 0x48) ^
          (uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar3));
  FUN_00405f9e();
  pcVar2 = (code *)FUN_00405fb1();
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)();
    if (iVar1 != 0) {
      uVar3 = uVar3 ^ (longlong)(local_20 * local_1c);
    }
  }
  return uVar3;
}



void FUN_00405ef5(void)

{
  HANDLE unaff_RDI;
  
  CloseHandle(unaff_RDI);
  return;
}



void FUN_00405f4b(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405f8e(void)

{
  GetLastError();
  return;
}



void FUN_00405f9e(void)

{
  LPCSTR unaff_RDI;
  
  GetModuleHandleA(unaff_RDI);
  return;
}



void FUN_00405fb1(void)

{
  FUN_0040607a();
  return;
}



void FUN_00405ff4(void)

{
  FUN_0040607a();
  return;
}



void FUN_0040606a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}



void FUN_0040607a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}



void FUN_004060a0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong local_88;
  longlong local_68;
  longlong local_60;
  longlong local_40;
  
  lVar2 = DAT_00446400;
  lVar3 = DAT_00446450 >> 3;
  lVar9 = DAT_00446448 >> 3;
  if (0 < lVar3) {
    local_68 = DAT_00446400;
    local_60 = DAT_00446408;
    local_40 = 0;
    local_88 = 0;
    do {
      lVar4 = local_88 + 1;
      if (0 < lVar9) {
        lVar6 = lVar3;
        if (local_88 != 0) {
          lVar6 = local_88;
        }
        lVar5 = (lVar6 + -1) * lVar9;
        lVar6 = 0;
        if (lVar4 < lVar3) {
          lVar6 = lVar4;
        }
        lVar6 = lVar6 * lVar9;
        lVar8 = 0;
        do {
          uVar1 = *(ulonglong *)(local_60 + lVar8 * 8);
          uVar7 = *(ulonglong *)(DAT_00446408 + lVar5 * 8 + lVar8 * 8);
          uVar12 = uVar7 >> 0x38;
          lVar19 = lVar8;
          if (lVar8 == 0) {
            lVar19 = lVar9;
          }
          lVar19 = lVar19 + -1;
          uVar13 = uVar12 | uVar1 << 8;
          uVar23 = *(ulonglong *)(DAT_00446408 + (local_40 + lVar19) * 8);
          uVar20 = uVar23 >> 7;
          uVar12 = *(ulonglong *)(DAT_00446408 + (lVar5 + lVar19) * 8) >> 0x3f |
                   (uVar1 << 9 | uVar12 * 2) & 0xfefefefefefefefe | (uVar20 & 0x1010101010101) << 8;
          uVar20 = uVar20 & 0x101010101010101 | uVar1 * 2 & 0xfefefefefefefefe;
          uVar21 = uVar12 & uVar20;
          uVar12 = uVar12 ^ uVar20;
          lVar11 = *(longlong *)(DAT_00446408 + lVar6 * 8 + lVar8 * 8);
          uVar23 = lVar11 << 0x39 | (uVar1 >> 8) * 2 & 0xfefefefefefefefe |
                   uVar23 >> 0xf & 0x1010101010101 |
                   (*(ulonglong *)(DAT_00446408 + (lVar19 + lVar6) * 8) & 0x80) << 0x31;
          uVar16 = uVar23 & uVar12;
          uVar12 = uVar12 ^ uVar23;
          uVar24 = uVar21 ^ uVar16;
          uVar20 = uVar13 ^ uVar12;
          uVar13 = uVar13 & uVar12;
          uVar17 = uVar24 ^ uVar13;
          uVar25 = lVar11 << 0x38;
          lVar8 = lVar8 + 1;
          uVar23 = uVar1 >> 8 | uVar25;
          uVar12 = uVar23 ^ uVar20;
          uVar23 = uVar23 & uVar20;
          uVar20 = uVar17 ^ uVar23;
          lVar19 = lVar5;
          lVar11 = lVar6;
          lVar14 = local_40;
          if (lVar8 < lVar9) {
            lVar19 = lVar5 + lVar8;
            lVar11 = lVar6 + lVar8;
            lVar14 = local_40 + lVar8;
          }
          uVar10 = *(ulonglong *)(DAT_00446408 + lVar14 * 8);
          uVar15 = uVar10 << 7;
          uVar7 = (ulonglong)
                  ((uint)((ulonglong)*(undefined8 *)(DAT_00446408 + lVar19 * 8) >> 0x31) & 0x80) |
                  (uVar10 & 0x1010101010101) << 0xf |
                  (uVar1 << 8) >> 1 & 0x7f7f7f7f7f7f7f7f | uVar7 >> 0x39;
          uVar10 = uVar7 & uVar12;
          uVar12 = uVar12 ^ uVar7;
          uVar18 = uVar20 ^ uVar10;
          uVar7 = uVar15 & 0x8080808080808080 | uVar1 >> 1 & 0x7f7f7f7f7f7f7f7f;
          uVar22 = uVar7 & uVar12;
          uVar12 = uVar12 ^ uVar7;
          uVar7 = uVar18 ^ uVar22;
          uVar15 = uVar15 >> 8 & 0x80808080808080 |
                   (uVar25 >> 1 | uVar1 >> 9) & 0x7f7f7f7f7f7f7f7f |
                   *(longlong *)(DAT_00446408 + lVar11 * 8) << 0x3f;
          uVar25 = uVar15 & uVar12;
          *(ulonglong *)(local_68 + -8 + lVar8 * 8) =
               (uVar1 | uVar12 ^ uVar15) & (uVar7 ^ uVar25) &
               ~(uVar7 & uVar25 |
                uVar23 & uVar17 | uVar21 & uVar16 | uVar24 & uVar13 | uVar20 & uVar10 |
                uVar18 & uVar22);
        } while (lVar8 != lVar9);
      }
      local_40 = local_40 + lVar9;
      local_68 = local_68 + lVar9 * 8;
      local_60 = local_60 + lVar9 * 8;
      local_88 = lVar4;
    } while (lVar3 != lVar4);
  }
  DAT_00446400 = DAT_00446408;
  DAT_00446410 = DAT_00446410 + 1;
  DAT_00446408 = lVar2;
  return;
}



void FUN_00406480(void)

{
  ulonglong *puVar1;
  byte bVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  bVar2 = (char)unaff_RDI * '\b' & 0x38U | (byte)unaff_RSI & 7;
  puVar1 = (ulonglong *)
           (DAT_00446408 + ((DAT_00446448 >> 3) * (unaff_RDI >> 3) + (unaff_RSI >> 3)) * 8);
  *puVar1 = *puVar1 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00406570(void)

{
  longlong lVar1;
  byte bVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = _DAT_00446460;
  if (DAT_00446440 != 0) {
    lVar1 = _DAT_00446460 * 2;
  }
  bVar2 = (byte)DAT_00446440;
  DAT_00446480 = (unaff_RDI << (bVar2 & 0x3f)) + DAT_00446480;
  DAT_00446470 = (unaff_RSI << (bVar2 & 0x3f)) + DAT_00446470;
  DAT_00446478 = (lVar1 << (bVar2 & 0x3f)) + DAT_00446480;
  DAT_00446468 = DAT_00446470 + (DAT_00446458 << (bVar2 & 0x3f));
  return;
}



void FUN_004065d0(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong unaff_RSI;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  
  DAT_004464a1 = 1;
  DAT_004464a5 = 0;
  lVar6 = (unaff_RDI << ((DAT_00446440 != 0) + (byte)DAT_00446440 & 0x3f)) + DAT_00446480;
  DAT_00446428 = unaff_RSI;
  DAT_00446430 = unaff_RDI;
  if ((((-1 < lVar6) &&
       (lVar5 = (unaff_RSI << ((byte)DAT_00446440 & 0x3f)) + DAT_00446470, lVar6 < DAT_00446450)) &&
      (-1 < lVar5)) && (lVar5 < DAT_00446448)) {
    puVar1 = (ulonglong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar5 >> 3)) * 8);
    uVar2 = *puVar1;
    uVar4 = (int)lVar6 * 8 & 0x38U | (uint)lVar5 & 7;
    uVar3 = uVar2 >> (sbyte)uVar4;
    DAT_004464a5 = (byte)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      FUN_00406480();
      return;
    }
    *puVar1 = uVar2 | 1L << uVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004066a0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  lVar1 = DAT_00446430 - unaff_RDI << ((byte)DAT_00446440 & 0x3f);
  lVar3 = DAT_00446428 - unaff_RSI << ((byte)DAT_00446440 & 0x3f);
  if (DAT_00446440 != 0) {
    lVar1 = lVar1 * 2;
  }
  if (DAT_004464a3 != '\0') {
    lVar1 = -lVar1;
    lVar3 = -lVar3;
  }
  lVar4 = DAT_00446478 - DAT_00446480;
  lVar2 = DAT_00446468 - DAT_00446470;
  DAT_00446480 = lVar1 + _DAT_00446420;
  DAT_00446470 = lVar3 + _DAT_00446418;
  DAT_00446478 = lVar1 + _DAT_00446420 + lVar4;
  DAT_00446468 = lVar3 + _DAT_00446418 + lVar2;
  return;
}



void FUN_004068a0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint unaff_ESI;
  
  uVar1 = unaff_ESI + 1 + DAT_004463e0;
  uVar2 = DAT_004463e4;
  lVar3 = DAT_004463e8;
  if (DAT_004463e4 < uVar1) {
    uVar2 = (DAT_004463e4 >> 1) + DAT_004463e4;
    if (uVar2 < 0x10) {
      uVar2 = 0x10;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    lVar3 = FUN_0040b70d();
    uVar2 = uVar1;
    if (lVar3 == 0) {
      return;
    }
  }
  DAT_004463e8 = lVar3;
  DAT_004463e4 = uVar2;
  DAT_004463e0 = unaff_ESI + DAT_004463e0;
  uVar4 = (ulonglong)DAT_004463e0;
  lVar3 = DAT_004463e8;
  FUN_004154c0(param_1,(ulonglong)unaff_ESI);
  *(undefined *)(lVar3 + uVar4) = 0;
  return;
}



void FUN_00406d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  
  lVar1 = DAT_00446448 * DAT_00446450 >> 6;
  if (0 < lVar1) {
    uVar2 = DAT_0041c020 & 0x800000;
    lVar1 = DAT_00446408 + lVar1 * 8;
    lVar3 = DAT_00446408;
    do {
      while (uVar2 != 0) {
        lVar3 = lVar3 + 8;
        if (lVar1 == lVar3) goto LAB_00406e06;
      }
      lVar3 = lVar3 + 8;
      FUN_0040ecb0();
      param_1 = extraout_XMM0_Da;
    } while (lVar1 != lVar3);
  }
LAB_00406e06:
  FUN_00413ac0(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00406e60(void)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong unaff_RSI;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  
  lVar5 = DAT_00446470;
  if ((DAT_00446430 != unaff_RDI) || (DAT_00446428 != unaff_RSI)) {
    bVar2 = (byte)DAT_00446440;
    bVar4 = (DAT_00446440 != 0) + bVar2;
    lVar6 = (unaff_RDI << (bVar4 & 0x3f)) + DAT_00446480;
    DAT_00446428 = unaff_RSI;
    DAT_00446430 = unaff_RDI;
    uVar3 = FUN_00412150();
    lVar6 = (~(-1L << (bVar4 & 0x3f)) & uVar3) + lVar6;
    uVar3 = FUN_00412150();
    if ((-1 < lVar6) &&
       (((lVar5 = lVar5 + (unaff_RSI << (bVar2 & 0x3f)) + (~(-1L << (bVar2 & 0x3f)) & uVar3),
         lVar6 < DAT_00446450 && (-1 < lVar5)) && (lVar5 < DAT_00446448)))) {
      if (DAT_004464a5 != '\0') {
        FUN_00406480();
        return;
      }
      puVar1 = (ulonglong *)(DAT_00446408 + ((DAT_00446448 >> 3) * (lVar6 >> 3) + (lVar5 >> 3)) * 8)
      ;
      *puVar1 = *puVar1 | 1L << ((char)lVar6 * '\b' & 0x38U | (byte)lVar5 & 7);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00407100(undefined8 param_1)

{
  ulonglong uVar1;
  ushort uVar2;
  
  uVar1 = DAT_00446458;
  uVar2 = DAT_00446460 + 1;
  FUN_00409ce0(param_1);
  DAT_00446458 = uVar1 & 0xffff;
  _DAT_00446460 = (longlong)(int)(uVar2 - 1);
  DAT_00446468 = (uVar1 & 0xffff) + DAT_00446470;
  DAT_00446478 = _DAT_00446460 + DAT_00446480;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00407170(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if ((((-1 < unaff_RDI) && (unaff_RDI < _DAT_00446460)) && (-1 < unaff_RSI)) &&
     (unaff_RSI < DAT_00446458)) {
    lVar1 = param_2 + DAT_00446440;
    DAT_00446440 = 0;
    if (-1 < lVar1) {
      DAT_00446440 = lVar1;
    }
    if (0xe < DAT_00446440) {
      DAT_00446440 = 0xe;
    }
    FUN_00406570();
    return;
  }
  return;
}



void FUN_00407850(undefined8 param_1)

{
  byte unaff_SIL;
  int unaff_EDI;
  
  if (*(int *)(&DAT_00446488 + (ulonglong)unaff_SIL * 4) != unaff_EDI) {
    FUN_004068a0(param_1);
    FUN_00412600();
    FUN_004068a0(param_1);
    FUN_004068a0(param_1);
    FUN_00412600();
    FUN_004068a0(param_1);
    FUN_004068a0(param_1);
    *(int *)(&DAT_00446488 + (ulonglong)unaff_SIL * 4) = unaff_EDI;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004078f0(ulonglong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char cVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  ulonglong local_60;
  
  DAT_004463e0 = 0;
  _DAT_00446488 = 0xffffffffffffffff;
  FUN_004068a0(param_1);
  uVar20 = DAT_00446480;
  lVar12 = CONCAT44(DAT_00446440._4_4_,(uint)DAT_00446440);
  if (lVar12 == 0) {
    FUN_00407850(param_1);
    FUN_00407850(param_1);
    uVar2 = DAT_00446478;
    uVar18 = DAT_00446470;
    uVar20 = DAT_00446468;
    uVar23 = DAT_00446480;
    if ((longlong)DAT_00446480 < (longlong)DAT_00446478) {
      do {
        if ((longlong)uVar18 < (longlong)uVar20) {
          uVar21 = uVar18;
LAB_004079e0:
          do {
            if ((((longlong)uVar23 < 0) || ((longlong)DAT_00446450 <= (longlong)uVar23)) ||
               (((longlong)uVar21 < 0 || ((longlong)DAT_00446448 <= (longlong)uVar21)))) {
              FUN_004068a0(param_1);
            }
            else {
              if ((*(ulonglong *)
                    (DAT_00446408 +
                    (((longlong)DAT_00446448 >> 3) * ((longlong)uVar23 >> 3) +
                    ((longlong)uVar21 >> 3)) * 8) >> ((uint)uVar21 & 7 | (int)uVar23 * 8 & 0x38U) &
                  1) != 0) {
                uVar21 = uVar21 + 1;
                FUN_004068a0(param_1);
                if (uVar21 == uVar20) break;
                goto LAB_004079e0;
              }
              FUN_004068a0(param_1);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar20);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar2);
    }
  }
  else {
    local_60 = DAT_00446478;
    uVar23 = DAT_00446478 + 0xf & 0xfffffffffffffff0;
    uVar2 = DAT_00446480 & 0xfffffffffffffff0;
    uVar21 = DAT_00446470 & 0xfffffffffffffff0;
    uVar18 = DAT_00446468 + 0xf & 0xfffffffffffffff0;
    lVar13 = uVar18 - uVar21;
    lVar3 = FUN_0040b6fb();
    lVar19 = DAT_00446408;
    if (lVar3 != 0) {
      uVar22 = uVar2;
      if ((longlong)uVar2 < 0) {
        uVar22 = 0;
      }
      uVar9 = uVar23;
      if ((longlong)DAT_00446450 <= (longlong)uVar23) {
        uVar9 = DAT_00446450;
      }
      if ((longlong)uVar22 < (longlong)uVar9) {
        if ((longlong)DAT_00446448 < (longlong)uVar18) {
          uVar18 = DAT_00446448;
        }
        lVar10 = (longlong)DAT_00446448 >> 3;
        uVar4 = 0;
        if (-1 < (longlong)uVar21) {
          uVar4 = uVar21;
        }
        lVar17 = ((uVar22 - uVar2) * lVar13 - uVar21) + lVar3;
        do {
          if ((longlong)uVar4 < (longlong)uVar18) {
            uVar14 = uVar4;
            do {
              lVar16 = 8;
              uVar11 = *(ulonglong *)
                        (lVar19 + (((longlong)uVar14 >> 3) + ((longlong)uVar22 >> 3) * lVar10) * 8);
              pcVar5 = (char *)(uVar14 + lVar17);
              do {
                *pcVar5 = -((byte)uVar11 & 1);
                pcVar5[1] = -((byte)(uVar11 >> 1) & 1);
                pcVar5[2] = -((byte)(uVar11 >> 2) & 1);
                pcVar5[3] = -((byte)(uVar11 >> 3) & 1);
                pcVar5[4] = -((byte)(uVar11 >> 4) & 1);
                pcVar5[5] = -((byte)(uVar11 >> 5) & 1);
                pcVar5[6] = -((byte)(uVar11 >> 6) & 1);
                uVar8 = uVar11 & 0xffffffff;
                uVar11 = uVar11 >> 8;
                cVar6 = (char)uVar8 >> 7;
                param_1 = CONCAT71((int7)(uVar8 >> 8),cVar6);
                pcVar5[7] = cVar6;
                pcVar5 = pcVar5 + lVar13;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              uVar14 = uVar14 + 8;
            } while ((longlong)uVar14 < (longlong)uVar18);
          }
          uVar22 = uVar22 + 8;
          lVar17 = lVar17 + lVar13 * 8;
        } while ((longlong)uVar22 < (longlong)uVar9);
      }
      lVar10 = 0;
      uVar18 = uVar23 - uVar2;
      lVar19 = lVar13;
      if (0 < lVar12) {
        do {
          param_1 = uVar18;
          FUN_00408250(param_1,lVar3,lVar19);
          uVar18 = (longlong)param_1 >> 1;
          FUN_004082b0(param_1,lVar3,lVar19);
          lVar10 = lVar10 + 1;
          lVar19 = lVar19 >> 1;
        } while (lVar10 < CONCAT44(DAT_00446440._4_4_,(uint)DAT_00446440));
        local_60 = DAT_00446478;
        uVar20 = DAT_00446480;
      }
      if ((longlong)uVar20 < (longlong)local_60) {
        do {
          if ((longlong)DAT_00446470 < (longlong)DAT_00446468) {
            uVar18 = DAT_00446470;
            do {
              if (((((longlong)uVar20 < 0) || ((longlong)DAT_00446450 <= (longlong)uVar20)) ||
                  ((longlong)uVar18 < 0)) || ((longlong)DAT_00446448 <= (longlong)uVar18)) {
                FUN_00407850(param_1);
                FUN_00407850(param_1);
                FUN_004068a0(param_1);
              }
              else {
                bVar7 = (byte)(uint)DAT_00446440;
                lVar12 = ((longlong)(uVar18 - uVar21) >> (bVar7 & 0x3f)) + lVar3;
                bVar15 = *(byte *)(lVar12 + ((longlong)(uVar20 - uVar2) >> (bVar7 & 0x3f)) * lVar13)
                ;
                if ((1L << (bVar7 & 0x3f)) + uVar20 < DAT_00446478) {
                  bVar7 = *(byte *)(lVar12 + ((longlong)((uVar20 + 1) - uVar2) >> (bVar7 & 0x3f)) *
                                             lVar13);
                  uVar23 = (ulonglong)bVar7;
                  bVar15 = bVar15 | bVar7;
                }
                else {
                  uVar23 = 0;
                }
                if (bVar15 == 0) {
                  FUN_00407850(uVar23);
                  FUN_00407850(uVar23);
                  FUN_004068a0(uVar23);
                }
                else {
                  FUN_00407850(uVar23);
                  if (DAT_004464a4 != '\0') {
                    uVar23 = (ulonglong)
                             (0x1e7 - ((int)((double)(uint)(byte)uVar23 * 0.00390625 * 24.0 + 232.0)
                                      & 0xffU));
                  }
                  FUN_00407850(uVar23);
                  FUN_004068a0(uVar23);
                }
              }
              param_1 = CONCAT44(DAT_00446440._4_4_,(uint)DAT_00446440);
              uVar18 = uVar18 + (1L << ((byte)(uint)DAT_00446440 & 0x3f));
            } while ((longlong)uVar18 < (longlong)DAT_00446468);
          }
          param_1 = (ulonglong)(uint)DAT_00446440;
          uVar20 = uVar20 + (2L << ((byte)(uint)DAT_00446440 & 0x3f));
        } while ((longlong)uVar20 < (longlong)DAT_00446478);
      }
      FUN_0040b701();
    }
  }
  lVar12 = 0;
  uVar24 = FUN_004068a0(param_1);
  FUN_00406d30(uVar24,param_2,param_3,param_4);
  FUN_0041571a();
  FUN_004068a0(param_1);
  iVar1 = FUN_0040a570();
  lVar19 = DAT_00446458 - iVar1;
  if (0 < lVar19) {
    do {
      lVar12 = lVar12 + 1;
      FUN_004068a0(param_1);
    } while (lVar19 != lVar12);
  }
  FUN_004068a0(param_1);
  FUN_00411a10(param_1);
  return;
}



void FUN_00408230(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_004123c0();
    return;
  }
  FUN_00402de0();
  return;
}



undefined8 FUN_00408250(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((1 < param_3) && (0 < param_1)) {
    lVar2 = 0;
    lVar1 = param_1;
    do {
      lVar2 = lVar2 + 1;
      FUN_004097e0(lVar1,(char *)&DAT_00447ff8);
    } while (param_1 != lVar2);
  }
  return param_2;
}


/*
Unable to decompile 'FUN_004082b0'
Cause: 
Recoverable Error: Unable to find unique hash for varnode
*/


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004097e0(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined auVar13 [32];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [20];
  undefined auVar19 [24];
  undefined auVar20 [24];
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  char local_128;
  char cStack_127;
  char cStack_126;
  char cStack_125;
  char cStack_124;
  char cStack_123;
  char cStack_122;
  char cStack_121;
  char cStack_120;
  char cStack_11f;
  char cStack_11e;
  char cStack_11d;
  char cStack_11c;
  char cStack_11b;
  char cStack_11a;
  char cStack_119;
  char local_118;
  char cStack_117;
  char cStack_116;
  char cStack_115;
  char cStack_114;
  char cStack_113;
  char cStack_112;
  char cStack_111;
  char cStack_110;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
  char cStack_10c;
  char cStack_10b;
  char cStack_10a;
  char cStack_109;
  char local_108;
  char cStack_107;
  char cStack_106;
  char cStack_105;
  char cStack_104;
  char cStack_103;
  char cStack_102;
  char cStack_101;
  char cStack_100;
  char cStack_ff;
  char cStack_fe;
  char cStack_fd;
  char cStack_fc;
  char cStack_fb;
  char cStack_fa;
  char cStack_f9;
  char local_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  char cStack_f2;
  char cStack_f1;
  char cStack_f0;
  char cStack_ef;
  char cStack_ee;
  char cStack_ed;
  char cStack_ec;
  char cStack_eb;
  char cStack_ea;
  char cStack_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined local_b8 [16];
  undefined local_a8 [16];
  byte local_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  undefined local_88 [16];
  undefined local_78 [4];
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  undefined local_68 [4];
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  undefined local_58 [4];
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  undefined local_48 [4];
  short sStack_44;
  short sStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  
  local_128 = *param_2;
  cStack_127 = param_2[1];
  local_118 = param_2[2];
  cStack_117 = param_2[3];
  local_108 = param_2[4];
  cStack_107 = param_2[5];
  local_f8 = param_2[6];
  cStack_f7 = param_2[7];
  if (7 < unaff_RDI) {
    pbVar27 = unaff_RSI + (unaff_RDI - 1);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = CONCAT71(0,*unaff_RSI);
    auVar30 = auVar30 * ZEXT816(0x101010101010101);
    local_e8 = auVar30._0_4_;
    uStack_e4 = auVar30._4_4_;
    uStack_e0 = auVar30._8_8_ + CONCAT71(0,*unaff_RSI) * 0x101010101010101;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT71(0,*pbVar27);
    auVar3 = auVar3 * ZEXT816(0x101010101010101);
    lVar21 = CONCAT71(0,*pbVar27) * 0x101010101010101;
    local_d8 = auVar3._0_4_;
    uStack_d4 = auVar3._4_4_;
    uStack_d0 = auVar3._8_8_ + lVar21;
    uVar28 = 0x10;
    if (unaff_RDI < 0x11) {
      uVar28 = unaff_RDI;
    }
    auVar30 = _DAT_00418700;
    cStack_126 = local_128;
    cStack_125 = cStack_127;
    cStack_124 = local_128;
    cStack_123 = cStack_127;
    cStack_122 = local_128;
    cStack_121 = cStack_127;
    cStack_120 = local_128;
    cStack_11f = cStack_127;
    cStack_11e = local_128;
    cStack_11d = cStack_127;
    cStack_11c = local_128;
    cStack_11b = cStack_127;
    cStack_11a = local_128;
    cStack_119 = cStack_127;
    cStack_116 = local_118;
    cStack_115 = cStack_117;
    cStack_114 = local_118;
    cStack_113 = cStack_117;
    cStack_112 = local_118;
    cStack_111 = cStack_117;
    cStack_110 = local_118;
    cStack_10f = cStack_117;
    cStack_10e = local_118;
    cStack_10d = cStack_117;
    cStack_10c = local_118;
    cStack_10b = cStack_117;
    cStack_10a = local_118;
    cStack_109 = cStack_117;
    cStack_106 = local_108;
    cStack_105 = cStack_107;
    cStack_104 = local_108;
    cStack_103 = cStack_107;
    cStack_102 = local_108;
    cStack_101 = cStack_107;
    cStack_100 = local_108;
    cStack_ff = cStack_107;
    cStack_fe = local_108;
    cStack_fd = cStack_107;
    cStack_fc = local_108;
    cStack_fb = cStack_107;
    cStack_fa = local_108;
    cStack_f9 = cStack_107;
    cStack_f6 = local_f8;
    cStack_f5 = cStack_f7;
    cStack_f4 = local_f8;
    cStack_f3 = cStack_f7;
    cStack_f2 = local_f8;
    cStack_f1 = cStack_f7;
    cStack_f0 = local_f8;
    cStack_ef = cStack_f7;
    cStack_ee = local_f8;
    cStack_ed = cStack_f7;
    cStack_ec = local_f8;
    cStack_eb = cStack_f7;
    cStack_ea = local_f8;
    cStack_e9 = cStack_f7;
    FUN_004154c0(lVar21,uVar28);
    uVar28 = unaff_RDI + 1 >> 1;
    if (uVar28 != 0) {
      uVar26 = (ulonglong)DAT_0041c020;
      uVar24 = 0;
      do {
        uVar25 = uVar24 + 8;
        if (unaff_RDI < uVar24 * 2 + 0x20) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT71(0,*pbVar27);
          auVar4 = auVar4 * ZEXT816(0x101010101010101);
          lVar22 = CONCAT71(0,*pbVar27) * 0x101010101010101;
          local_c8 = auVar4._0_4_;
          uStack_c4 = auVar4._4_4_;
          lVar21 = auVar4._8_8_ + lVar22;
          if (unaff_RDI <= uVar24 * 2 + 0x10) goto LAB_00409a5d;
          uStack_c0 = lVar21;
          FUN_004154c0(lVar22,unaff_RDI + uVar25 * -2);
          lVar22 = uStack_d0;
          lVar21 = uStack_c0;
          if ((uVar26 & 0x200) != 0) goto LAB_00409a6a;
LAB_00409bd8:
          FUN_00415200(0xd,&local_e8);
          FUN_00415200(0xf,&local_e8);
          FUN_00415200(1,&local_d8);
          uVar23 = 3;
          FUN_00415200(3,&local_d8);
          FUN_00415240(uVar23,&local_128);
          FUN_00415240(uVar23,&local_118);
          FUN_00415240(uVar23,&local_108);
          FUN_00415240(uVar23,&local_f8);
          uVar26 = (ulonglong)DAT_0041c020;
          auVar30 = _DAT_00418700;
          uStack_e0 = uStack_d0;
          uStack_d0 = uStack_c0;
        }
        else {
          puVar1 = (undefined4 *)(unaff_RSI + uVar25 * 2);
          local_c8 = *puVar1;
          uStack_c4 = puVar1[1];
          lVar21 = *(longlong *)(puVar1 + 2);
LAB_00409a5d:
          lVar22 = uStack_d0;
          uStack_c0 = lVar21;
          if ((uVar26 & 0x200) == 0) goto LAB_00409bd8;
LAB_00409a6a:
          uStack_c0._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
          uStack_c0._0_4_ = (undefined4)lVar21;
          uStack_d0._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
          uStack_d0._0_4_ = (undefined4)lVar22;
          auVar13._4_4_ = uStack_d4;
          auVar13._0_4_ = local_d8;
          auVar13._8_4_ = (undefined4)uStack_d0;
          auVar13._12_4_ = uStack_d0._4_4_;
          auVar20._8_4_ = local_d8;
          auVar20._0_8_ = uStack_e0;
          auVar20._12_4_ = uStack_d4;
          auVar20._16_4_ = (undefined4)uStack_d0;
          auVar20._20_4_ = uStack_d0._4_4_;
          auVar19._8_4_ = local_d8;
          auVar19._0_8_ = uStack_e0;
          auVar19._12_4_ = uStack_d4;
          auVar19._16_4_ = (undefined4)uStack_d0;
          auVar19._20_4_ = uStack_d0._4_4_;
          auVar18._4_4_ = uStack_d4;
          auVar18._0_4_ = local_d8;
          auVar18._8_4_ = (undefined4)uStack_d0;
          auVar18._12_4_ = uStack_d0._4_4_;
          auVar18._16_4_ = local_c8;
          auVar14[1] = cStack_127;
          auVar14[0] = local_128;
          auVar14[2] = cStack_126;
          auVar14[3] = cStack_125;
          auVar14[4] = cStack_124;
          auVar14[5] = cStack_123;
          auVar14[6] = cStack_122;
          auVar14[7] = cStack_121;
          auVar14[8] = cStack_120;
          auVar14[9] = cStack_11f;
          auVar14[10] = cStack_11e;
          auVar14[11] = cStack_11d;
          auVar14[12] = cStack_11c;
          auVar14[13] = cStack_11b;
          auVar14[14] = cStack_11a;
          auVar14[15] = cStack_119;
          auVar15[1] = cStack_117;
          auVar15[0] = local_118;
          auVar15[2] = cStack_116;
          auVar15[3] = cStack_115;
          auVar15[4] = cStack_114;
          auVar15[5] = cStack_113;
          auVar15[6] = cStack_112;
          auVar15[7] = cStack_111;
          auVar15[8] = cStack_110;
          auVar15[9] = cStack_10f;
          auVar15[10] = cStack_10e;
          auVar15[11] = cStack_10d;
          auVar15[12] = cStack_10c;
          auVar15[13] = cStack_10b;
          auVar15[14] = cStack_10a;
          auVar15[15] = cStack_109;
          local_b8 = auVar19._5_16_;
          local_a8 = auVar20._7_16_;
          auVar13._20_4_ = uStack_c4;
          auVar13._16_4_ = local_c8;
          auVar13._24_4_ = (undefined4)uStack_c0;
          auVar13._28_4_ = uStack_c0._4_4_;
          _local_78 = pmaddubsw(local_b8,auVar14);
          local_88 = auVar13._3_16_;
          auVar16[1] = cStack_107;
          auVar16[0] = local_108;
          auVar16[2] = cStack_106;
          auVar16[3] = cStack_105;
          auVar16[4] = cStack_104;
          auVar16[5] = cStack_103;
          auVar16[6] = cStack_102;
          auVar16[7] = cStack_101;
          auVar16[8] = cStack_100;
          auVar16[9] = cStack_ff;
          auVar16[10] = cStack_fe;
          auVar16[11] = cStack_fd;
          auVar16[12] = cStack_fc;
          auVar16[13] = cStack_fb;
          auVar16[14] = cStack_fa;
          auVar16[15] = cStack_f9;
          _local_68 = pmaddubsw(local_a8,auVar15);
          auVar17[1] = cStack_f7;
          auVar17[0] = local_f8;
          auVar17[2] = cStack_f6;
          auVar17[3] = cStack_f5;
          auVar17[4] = cStack_f4;
          auVar17[5] = cStack_f3;
          auVar17[6] = cStack_f2;
          auVar17[7] = cStack_f1;
          auVar17[8] = cStack_f0;
          auVar17[9] = cStack_ef;
          auVar17[10] = cStack_ee;
          auVar17[11] = cStack_ed;
          auVar17[12] = cStack_ec;
          auVar17[13] = cStack_eb;
          auVar17[14] = cStack_ea;
          auVar17[15] = cStack_e9;
          _local_58 = pmaddubsw(auVar18._1_16_,auVar16);
          _local_48 = pmaddubsw(local_88,auVar17);
          uStack_e0 = lVar22;
          uStack_d0 = lVar21;
        }
        uStack_e4 = uStack_d4;
        local_e8 = local_d8;
        local_d8 = local_c8;
        uStack_d4 = uStack_c4;
        auVar29._0_2_ =
             local_78._0_2_ + auVar30._0_2_ + local_68._0_2_ + local_58._0_2_ + local_48._0_2_;
        auVar29._2_2_ =
             local_78._2_2_ + auVar30._2_2_ + local_68._2_2_ + local_58._2_2_ + local_48._2_2_;
        auVar29._4_2_ = sStack_74 + auVar30._4_2_ + sStack_64 + sStack_54 + sStack_44;
        auVar29._6_2_ = sStack_72 + auVar30._6_2_ + sStack_62 + sStack_52 + sStack_42;
        auVar29._8_2_ = sStack_70 + auVar30._8_2_ + sStack_60 + sStack_50 + sStack_40;
        auVar29._10_2_ = sStack_6e + auVar30._10_2_ + sStack_5e + sStack_4e + sStack_3e;
        auVar29._12_2_ = sStack_6c + auVar30._12_2_ + sStack_5c + sStack_4c + sStack_3c;
        auVar29._14_2_ = sStack_6a + auVar30._14_2_ + sStack_5a + sStack_4a + sStack_3a;
        _local_78 = psraw(auVar29,5);
        sVar5 = SUB162(_local_78,0);
        local_98 = (0 < sVar5) * (sVar5 < 0xff) * SUB161(_local_78,0) - (0xff < sVar5);
        sVar6 = SUB162(_local_78,2);
        bStack_97 = (0 < sVar6) * (sVar6 < 0xff) * SUB161(_local_78,2) - (0xff < sVar6);
        sVar7 = SUB162(_local_78,4);
        bStack_96 = (0 < sVar7) * (sVar7 < 0xff) * SUB161(_local_78,4) - (0xff < sVar7);
        sVar8 = SUB162(_local_78,6);
        bStack_95 = (0 < sVar8) * (sVar8 < 0xff) * SUB161(_local_78,6) - (0xff < sVar8);
        sVar9 = SUB162(_local_78,8);
        bStack_94 = (0 < sVar9) * (sVar9 < 0xff) * SUB161(_local_78,8) - (0xff < sVar9);
        sVar10 = SUB162(_local_78,10);
        bStack_93 = (0 < sVar10) * (sVar10 < 0xff) * SUB161(_local_78,10) - (0xff < sVar10);
        sVar11 = SUB162(_local_78,0xc);
        bStack_92 = (0 < sVar11) * (sVar11 < 0xff) * SUB161(_local_78,0xc) - (0xff < sVar11);
        sVar12 = SUB162(_local_78,0xe);
        bStack_91 = (0 < sVar12) * (sVar12 < 0xff) * SUB161(_local_78,0xe) - (0xff < sVar12);
        cStack_90 = (0 < sVar5) * (sVar5 < 0xff) * SUB161(_local_78,0) - (0xff < sVar5);
        cStack_8f = (0 < sVar6) * (sVar6 < 0xff) * SUB161(_local_78,2) - (0xff < sVar6);
        cStack_8e = (0 < sVar7) * (sVar7 < 0xff) * SUB161(_local_78,4) - (0xff < sVar7);
        cStack_8d = (0 < sVar8) * (sVar8 < 0xff) * SUB161(_local_78,6) - (0xff < sVar8);
        cStack_8c = (0 < sVar9) * (sVar9 < 0xff) * SUB161(_local_78,8) - (0xff < sVar9);
        cStack_8b = (0 < sVar10) * (sVar10 < 0xff) * SUB161(_local_78,10) - (0xff < sVar10);
        cStack_8a = (0 < sVar11) * (sVar11 < 0xff) * SUB161(_local_78,0xc) - (0xff < sVar11);
        cStack_89 = (0 < sVar12) * (sVar12 < 0xff) * SUB161(_local_78,0xe) - (0xff < sVar12);
        pbVar2 = unaff_RSI + uVar24;
        *pbVar2 = local_98;
        pbVar2[1] = bStack_97;
        pbVar2[2] = bStack_96;
        pbVar2[3] = bStack_95;
        pbVar2[4] = bStack_94;
        pbVar2[5] = bStack_93;
        pbVar2[6] = bStack_92;
        pbVar2[7] = bStack_91;
        uVar24 = uVar25;
      } while (uVar25 < uVar28);
    }
  }
  return;
}



undefined8 FUN_00409ce0(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined2 *unaff_RSI;
  
  bVar1 = FUN_00409d70();
  if (bVar1) {
    FUN_004108b0();
    uVar2 = FUN_004142f0(param_1,0);
    unaff_RSI[1] = (short)uVar2;
    FUN_004108b0();
    uVar2 = FUN_004142f0(param_1,0);
    *(undefined4 *)(unaff_RSI + 2) = 0;
    *unaff_RSI = (short)uVar2;
    return 0;
  }
  uVar3 = FUN_00410ae0();
  return uVar3;
}



bool FUN_00409d70(void)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  pbVar1 = (byte *)FUN_004108b0();
  bVar6 = false;
  bVar4 = false;
  bVar5 = pbVar1 == (byte *)0x0;
  if (!bVar5) {
    lVar2 = 5;
    pbVar3 = &DAT_00418738;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar4 = *pbVar1 < *pbVar3;
      bVar5 = *pbVar1 == *pbVar3;
      pbVar1 = pbVar1 + 1;
      pbVar3 = pbVar3 + 1;
    } while (bVar5);
    bVar6 = (!bVar4 && !bVar5) == bVar4;
  }
  return bVar6;
}



void FUN_0040a570(void)

{
  FUN_0040a580();
  return;
}



int FUN_0040a580(void)

{
  byte bVar1;
  longlong unaff_RSI;
  uint uVar2;
  byte *unaff_RDI;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  
  if (unaff_RSI == 0) {
    return 0;
  }
  pbVar4 = unaff_RDI + 1;
  iVar8 = 0;
  lVar7 = unaff_RSI + -1;
  uVar2 = (uint)*unaff_RDI;
  if (*unaff_RDI == 0) {
    return 0;
  }
  do {
    while ((lVar5 = lVar7 + -1, uVar2 - 0x20 < 0x5f || (uVar2 == 9))) {
      iVar8 = iVar8 + 1;
      if (lVar7 == 0) {
        return iVar8;
      }
LAB_0040a679:
      uVar2 = (uint)*pbVar4;
      if (*pbVar4 == 0) {
        return iVar8;
      }
      pbVar4 = pbVar4 + 1;
      lVar7 = lVar5;
    }
    if (uVar2 == 0x1b) {
      if (lVar7 == 0) {
        return iVar8;
      }
      bVar1 = *pbVar4;
joined_r0x0040a71e:
      if (bVar1 == 0) {
        return iVar8;
      }
      pbVar6 = pbVar4 + 1;
      lVar7 = lVar5 + -1;
      if (bVar1 == 0x5b) {
        if (lVar5 == 0) {
          return iVar8;
        }
        bVar1 = *pbVar6;
        pbVar6 = pbVar4 + 2;
        lVar5 = lVar7;
        while( true ) {
          if (bVar1 == 0) {
            return iVar8;
          }
          lVar7 = lVar5 + -1;
          if (0xf < bVar1 - 0x30) break;
          if (lVar7 == -1) {
            return iVar8;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          lVar5 = lVar7;
        }
        if (lVar5 == 0) {
          return iVar8;
        }
        bVar1 = *pbVar6;
        goto joined_r0x0040a6dd;
      }
      if (bVar1 - 0x20 < 0x10) break;
      if (lVar5 == 0) {
        return iVar8;
      }
      bVar1 = *pbVar6;
      pbVar4 = pbVar4 + 2;
    }
    else {
      if (uVar2 < 0xc0) {
        if (lVar7 == 0) {
          return iVar8;
        }
        goto LAB_0040a679;
      }
      if (uVar2 < 0xfc) {
        iVar3 = 0x1f;
        if ((uVar2 ^ 0xff) != 0) {
          for (; (uVar2 ^ 0xff) >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 6 - iVar3;
        if (lVar7 == 0) {
          return iVar8;
        }
        pbVar6 = pbVar4 + 1;
        bVar1 = *pbVar4;
        lVar7 = lVar5;
        if (bVar1 == 0) {
          return iVar8;
        }
LAB_0040a62c:
        pbVar4 = pbVar6 + (iVar3 - 1);
        lVar5 = lVar7;
        while ((lVar7 = lVar5 + -1, ((int)(char)bVar1 & 0xc0U) == 0x80 && (pbVar4 != pbVar6))) {
          if (lVar7 == -1) {
            return iVar8;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          lVar5 = lVar7;
          if (bVar1 == 0) {
            return iVar8;
          }
        }
      }
      else {
        if (lVar7 == 0) {
          return iVar8;
        }
        if (*pbVar4 == 0) {
          return iVar8;
        }
        if (((int)(char)*pbVar4 & 0xc0U) == 0x80) {
          lVar7 = lVar7 + -2;
          if (lVar5 == 0) {
            return iVar8;
          }
          pbVar6 = pbVar4 + 2;
          bVar1 = pbVar4[1];
          if (bVar1 == 0) {
            return iVar8;
          }
          iVar3 = 4;
          goto LAB_0040a62c;
        }
        pbVar6 = pbVar4 + 1;
        lVar7 = lVar7 + -2;
      }
      iVar3 = FUN_0040a810();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar8 = iVar8 + iVar3;
      if (lVar5 == 0) {
        return iVar8;
      }
      bVar1 = *pbVar6;
joined_r0x0040a6dd:
      pbVar4 = pbVar6 + 1;
    }
    uVar2 = (uint)bVar1;
    if (bVar1 == 0) {
      return iVar8;
    }
  } while( true );
  if (lVar7 == -1) {
    return iVar8;
  }
  bVar1 = *pbVar6;
  lVar5 = lVar7;
  pbVar4 = pbVar6;
  goto joined_r0x0040a71e;
}



int FUN_0040a810(void)

{
  int iVar1;
  uint unaff_EDI;
  
  iVar1 = 0;
  if (unaff_EDI != 0) {
    if ((unaff_EDI - 0x7f < 0x21) || (unaff_EDI < 0x20)) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
      if (-1 < (int)unaff_EDI) {
        if ((unaff_EDI < 0xe0200) &&
           (((byte)(&DAT_0041c728)[(int)unaff_EDI >> 3] >> (unaff_EDI & 7) & 1) != 0)) {
          return 0;
        }
        iVar1 = 1;
        if (unaff_EDI < 0x40000) {
          return ((int)(uint)(byte)(&DAT_00438768)[(int)unaff_EDI >> 3] >> ((byte)unaff_EDI & 7) &
                 1U) + 1;
        }
      }
    }
  }
  return iVar1;
}



int FUN_0040a950(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RDI;
  int iVar5;
  
  if (unaff_RDI == 0) {
    if (DAT_00446660 != 0) {
      lVar4 = DAT_00446660 + -1;
      iVar5 = 0;
      do {
        if (*(longlong *)(DAT_00446670 + lVar4 * 8) != 0) {
          iVar2 = FUN_0040a950(param_1);
          if (iVar2 == -1) {
            return -1;
          }
          iVar5 = iVar5 + iVar2;
        }
        lVar4 = lVar4 + -1;
      } while (lVar4 != -1);
      return iVar5;
    }
  }
  else {
    if (*(int *)(unaff_RDI + 0xc) == -1) {
      uVar1 = *(uint *)(unaff_RDI + 0x10);
      if (uVar1 == 0) {
        return 0;
      }
      if (*(uint *)(unaff_RDI + 0x20) <= uVar1) {
        return 0;
      }
      *(undefined *)(*(longlong *)(unaff_RDI + 0x18) + (ulonglong)uVar1) = 0;
      return 0;
    }
    iVar5 = *(int *)(unaff_RDI + 8);
    if (iVar5 == 0) {
      while( true ) {
        if (*(int *)(unaff_RDI + 0x10) == 0) {
          return iVar5;
        }
        if (*(int *)(unaff_RDI + 0x14) != 0) break;
        uVar3 = FUN_0040ade0(param_1);
        param_1 = (ulonglong)*(uint *)(unaff_RDI + 8);
        if ((int)uVar3 != -1) {
          iVar5 = iVar5 + (int)uVar3;
        }
        if (*(uint *)(unaff_RDI + 8) != 0) {
          return iVar5;
        }
      }
      return iVar5;
    }
  }
  return 0;
}



undefined8 FUN_0040ada0(void)

{
  int iVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  
  iVar1 = *(int *)(unaff_RDI + 8);
  if (unaff_ESI == 0) {
    if (iVar1 < 1) {
      *(undefined4 *)(unaff_RDI + 8) = 0xffffffff;
      return 0xffffffffffffffff;
    }
  }
  else {
    if (iVar1 < 1) {
      iVar1 = unaff_ESI;
    }
    *(int *)(unaff_RDI + 8) = iVar1;
    if (0 < unaff_ESI) {
      DAT_00448020 = unaff_ESI;
    }
  }
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_0040ade0(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_00411a10(param_1);
  if (uVar1 == 0xffffffffffffffff) {
    uVar1 = 0;
    if (DAT_00448020 != _DAT_00440818) {
      uVar1 = FUN_0040b0b0();
      return uVar1;
    }
  }
  else {
    if (*(uint *)(unaff_RDI + 0x10) == uVar1) {
      *(undefined4 *)(unaff_RDI + 0x10) = 0;
      return uVar1;
    }
    uVar1 = FUN_004154c0(param_1,*(uint *)(unaff_RDI + 0x10) - uVar1);
    *(int *)(unaff_RDI + 0x10) = *(int *)(unaff_RDI + 0x10) - (int)uVar1;
  }
  return uVar1;
}



void FUN_0040b0b0(void)

{
  FUN_0040ada0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b6fb(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b6fb. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c078)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b701(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b701. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c080)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b707(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b707. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c090)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040b70d(void)

{
                    // WARNING: Could not recover jumptable at 0x0040b70d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c0b0)();
  return;
}



void FUN_0040b7a0(undefined8 param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  pcVar1 = FUN_0041571a();
  lVar2 = FUN_0040b707();
  if (lVar2 != 0) {
    FUN_004154c0(param_1,(ulonglong)(pcVar1 + 1));
  }
  return;
}



uint FUN_0040ecb0(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = unaff_RDI - (unaff_RDI >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (int)(uVar3 >> 0x20) + (int)uVar3;
  lVar2 = (ulonglong)(uVar1 >> 0x10) + (ulonglong)uVar1;
  return (int)((ulonglong)lVar2 >> 8) + (int)lVar2 & 0x7f;
}



void FUN_0040ed60(undefined8 param_1)

{
  FUN_0040ede0(param_1,0);
  return;
}



undefined8 FUN_0040ede0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  if (DAT_00446ac0 == (uint *)0x0) {
    DAT_00446ac0 = &DAT_00446ac8;
  }
  puVar2 = DAT_00446ac0;
  uVar5 = *DAT_00446ac0;
  if (uVar5 == 0xffffffff) {
    puVar3 = (uint *)FUN_0040b6fb();
    if (puVar3 == (uint *)0x0) {
      uVar4 = FUN_00402b8a();
      return uVar4;
    }
    *(uint **)(puVar3 + 2) = puVar2;
    uVar5 = *puVar3;
    DAT_00446ac0 = puVar3;
  }
  puVar2 = DAT_00446ac0;
  uVar1 = 0x1f;
  if (~uVar5 != 0) {
    for (; ~uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  *DAT_00446ac0 = uVar5 | 1 << (uVar1 & 0x1f);
  *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 4) = unaff_RDI;
  *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 6) = unaff_RSI;
  *(undefined8 *)(puVar2 + (ulonglong)uVar1 * 6 + 8) = param_2;
  return 0;
}



void FUN_0040ee90(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong unaff_RDI;
  uint *puVar5;
  
  puVar5 = DAT_00446ac0;
  if (DAT_00446ac0 != (uint *)0x0) {
    do {
      uVar4 = *puVar5;
      do {
        do {
          if (uVar4 == 0) {
            puVar5 = *(uint **)(puVar5 + 2);
            puVar2 = DAT_00446ac0;
            if ((unaff_RDI == 0) && (puVar2 = puVar5, puVar5 != (uint *)0x0)) {
              FUN_0040b701();
            }
            goto joined_r0x0040ef2c;
          }
          uVar1 = 0;
          for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          uVar3 = ~(1 << ((byte)uVar1 & 0x1f));
          uVar4 = uVar4 & uVar3;
        } while ((unaff_RDI != 0) && (*(longlong *)(puVar5 + (ulonglong)uVar1 * 6 + 8) != unaff_RDI)
                );
        *puVar5 = *puVar5 & uVar3;
      } while (*(code **)(puVar5 + (ulonglong)uVar1 * 6 + 4) == (code *)0x0);
      (**(code **)(puVar5 + (ulonglong)uVar1 * 6 + 4))();
      puVar5 = DAT_00446ac0;
      puVar2 = DAT_00446ac0;
joined_r0x0040ef2c:
      DAT_00446ac0 = puVar2;
    } while (puVar5 != (uint *)0x0);
  }
  return;
}



undefined8 FUN_0040f180(longlong param_1,ulonglong param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *unaff_RSI;
  ulonglong uVar11;
  longlong *unaff_RDI;
  longlong lVar12;
  
  lVar9 = param_1;
  FUN_0040f2d0();
  bVar6 = FUN_0040f2d0();
  if (bVar6) {
    lVar12 = *unaff_RDI;
    uVar7 = *unaff_RSI;
    lVar8 = lVar12;
  }
  else {
    lVar8 = *unaff_RDI;
    uVar7 = *unaff_RSI;
    lVar12 = 0;
  }
  if (lVar8 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    uVar10 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / auVar1,0);
    uVar11 = 4;
    if (3 < uVar10) {
      uVar11 = uVar10;
    }
  }
  else {
    uVar11 = (uVar7 >> 1) + uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar7;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  uVar7 = SUB168(auVar2 * auVar4,0);
  if (SUB168(auVar2 * auVar4,8) == 0) {
    uVar11 = uVar11 + 1 + param_1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    if (SUB168(auVar3 * auVar5,8) == 0) {
      lVar8 = FUN_0040b70d();
      if (lVar8 == 0) {
        FUN_00402b8a();
        return 0;
      }
      if ((lVar12 == 0) && (*unaff_RDI != 0)) {
        FUN_004154c0(lVar9,uVar7);
      }
      lVar9 = FUN_0041561f(lVar9,SUB168(auVar3 * auVar5,0) - uVar7);
      *unaff_RSI = uVar11;
      *unaff_RDI = lVar9;
      return 1;
    }
  }
  FUN_00402bc9();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_0040f2d0(void)

{
  uint uVar1;
  int iVar2;
  ulonglong unaff_RDI;
  bool bVar3;
  bool bVar4;
  
  bVar3 = false;
  bVar4 = false;
  if (((((ulonglong)&stack0xfffffffffffffff8 ^ unaff_RDI) & 0xffffffffffff0000) != 0) &&
     (bVar4 = bVar3, 0x449000 < (longlong)unaff_RDI)) {
    uVar1 = FUN_0040f8b0();
    if ((int)uVar1 < _DAT_00446ee0) {
      iVar2 = (int)(unaff_RDI >> 0x10);
      if ((&DAT_00446ee8)[(longlong)(int)uVar1 * 6] == iVar2 ||
          (int)(&DAT_00446ee8)[(longlong)(int)uVar1 * 6] < iVar2) {
        bVar4 = iVar2 <= (int)(&DAT_00446eec)[(longlong)(int)uVar1 * 6];
      }
    }
  }
  return bVar4;
}



void FUN_0040f84e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined8 *)(unaff_RDI + -8) = 0x40f865;
  (*unaff_RSI)(param_4,param_3);
  do {
    invalidInstructionException();
  } while( true );
}



uint FUN_0040f8b0(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  uint *unaff_RDI;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *unaff_RDI;
  while (uVar2 = uVar1, uVar3 < uVar2) {
    uVar1 = uVar2 + uVar3 >> 1;
    if ((int)unaff_RDI[(ulonglong)uVar1 * 6 + 2] < unaff_ESI) {
      uVar3 = uVar1 + 1;
      uVar1 = uVar2;
    }
  }
  if ((uVar3 != 0) && (unaff_ESI <= (int)unaff_RDI[(ulonglong)(uVar3 - 1) * 6 + 3])) {
    uVar3 = uVar3 - 1;
  }
  return uVar3;
}



char * FUN_004108b0(void)

{
  longlong lVar1;
  char **ppcVar2;
  char cVar3;
  char *pcVar4;
  char *unaff_RDI;
  char *pcVar5;
  
  if (DAT_00448018 == (char **)0x0) {
    return (char *)0x0;
  }
  pcVar5 = *DAT_00448018;
  if (pcVar5 != (char *)0x0) {
    ppcVar2 = DAT_00448018;
    do {
      ppcVar2 = ppcVar2 + 1;
      if (*unaff_RDI == '\0') {
        lVar1 = 0;
        pcVar4 = pcVar5;
      }
      else {
        lVar1 = 0;
        cVar3 = *unaff_RDI;
        do {
          if (pcVar5[lVar1] != cVar3) goto LAB_004108f2;
          lVar1 = lVar1 + 1;
          cVar3 = unaff_RDI[lVar1];
        } while (cVar3 != '\0');
        pcVar4 = pcVar5 + lVar1;
      }
      if (*pcVar4 == '=') {
        return pcVar5 + lVar1 + 1;
      }
LAB_004108f2:
      pcVar5 = *ppcVar2;
    } while (pcVar5 != (char *)0x0);
  }
  return pcVar5;
}



void FUN_00410ae0(void)

{
  if (((byte)DAT_0041c718 & 4) == 0) {
    FUN_00412380();
    return;
  }
  FUN_004051d0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00410c50(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar2 = 0;
  if ((-1 < unaff_EDI) && ((ulonglong)(longlong)unaff_EDI < _DAT_00447b48)) {
    lVar1 = DAT_00447b50 + (longlong)unaff_EDI * 0x18;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x10) == unaff_ESI);
  }
  return uVar2;
}



void FUN_00410f70(undefined8 param_1)

{
  FUN_00411370(param_1,1);
  return;
}



// WARNING: Removing unreachable block (ram,0x004110b6)
// WARNING: Removing unreachable block (ram,0x004110c5)
// WARNING: Removing unreachable block (ram,0x004110dc)
// WARNING: Removing unreachable block (ram,0x00411258)
// WARNING: Removing unreachable block (ram,0x00411267)
// WARNING: Removing unreachable block (ram,0x00411282)
// WARNING: Removing unreachable block (ram,0x0041106b)
// WARNING: Removing unreachable block (ram,0x00411078)
// WARNING: Removing unreachable block (ram,0x00411097)
// WARNING: Removing unreachable block (ram,0x004110ad)
// WARNING: Removing unreachable block (ram,0x00411115)
// WARNING: Removing unreachable block (ram,0x00411122)
// WARNING: Removing unreachable block (ram,0x004110f8)
// WARNING: Removing unreachable block (ram,0x00411106)

longlong FUN_00410f90(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte *unaff_RSI;
  int iVar4;
  int iVar5;
  byte local_39;
  
  if ((param_2 != 0) && (*unaff_RSI = 0, 2 < param_2)) {
    lVar1 = FUN_00410f70(param_1);
    if (lVar1 != 1) {
      return -1;
    }
    unaff_RSI[1] = 0;
    *unaff_RSI = local_39;
    lVar1 = 1;
    while( true ) {
      iVar4 = (int)lVar1;
      if (-1 < (char)local_39) goto code_r0x0041100a;
      param_1 = lVar1 + 2;
      if (0xbf < local_39) break;
      if (param_2 - 2 == lVar1) goto LAB_00410fa6;
      lVar3 = FUN_00410f70(param_1);
      if (lVar3 != 1) {
        return -1;
      }
      unaff_RSI[lVar1 + 1] = 0;
      unaff_RSI[lVar1] = local_39;
      lVar1 = lVar1 + 1;
    }
    if (0xfb < local_39) {
      if (param_2 <= param_1) goto LAB_00410fa6;
      lVar1 = FUN_00410f70(param_1);
      if (lVar1 != 1) {
        return -1;
      }
      unaff_RSI[iVar4] = local_39;
      unaff_RSI[iVar4 + 1] = 0;
      if (param_2 <= (ulonglong)(longlong)(iVar4 + 3)) goto LAB_00410fa6;
      lVar1 = FUN_00410f70(param_1);
      if (lVar1 != 1) {
        return -1;
      }
      lVar1 = (longlong)(iVar4 + 2);
      unaff_RSI[iVar4 + 1] = local_39;
      iVar5 = 4;
      unaff_RSI[param_1] = 0;
      goto LAB_004111af;
    }
    iVar5 = 0x1f;
    if ((byte)~local_39 != 0) {
      for (; (byte)~local_39 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 6 - iVar5;
    if (param_1 < param_2) {
      lVar1 = FUN_00410f70(param_1);
      if (lVar1 != 1) {
        return -1;
      }
      lVar1 = (longlong)(iVar4 + 1);
      unaff_RSI[iVar4] = local_39;
      unaff_RSI[lVar1] = 0;
LAB_004111af:
      lVar3 = lVar1;
      while( true ) {
        if ((ulonglong)(iVar5 - 1) + lVar1 == lVar3) {
          return (longlong)(int)lVar3;
        }
        if (param_2 <= lVar3 + 2U) break;
        lVar2 = FUN_00410f70(param_1);
        if (lVar2 != 1) {
          return -1;
        }
        unaff_RSI[lVar3 + 1] = 0;
        unaff_RSI[lVar3] = local_39;
        lVar3 = lVar3 + 1;
      }
    }
  }
LAB_00410fa6:
  lVar1 = FUN_00402b8a();
  return lVar1;
code_r0x0041100a:
  if (local_39 != 0x1b) {
    return (longlong)iVar4;
  }
  if ((ulonglong)(longlong)(iVar4 + 2) < param_2) {
    lVar1 = FUN_00410f70(param_1);
    if (lVar1 != 1) {
      return -1;
    }
    unaff_RSI[iVar4] = 0x1b;
    unaff_RSI[iVar4 + 1] = 0;
    return (longlong)(iVar4 + 1);
  }
  goto LAB_00410fa6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00411370(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int unaff_EDI;
  
  if ((unaff_EDI < 0) || (param_2 < 0)) {
    uVar2 = FUN_00402b21();
    uVar3 = (ulonglong)(int)uVar2;
  }
  else {
    uVar3 = (ulonglong)unaff_EDI;
    if (uVar3 < _DAT_00447b48) {
      iVar1 = *(int *)(DAT_00447b50 + uVar3 * 0x18 + 0x10);
      if (iVar1 == 6) {
                    // WARNING: Treating indirect jump as call
        uVar3 = (*(code *)0x0)(0xffffffffffffffff,(longlong)param_2);
        return uVar3;
      }
      if (iVar1 == 5) {
        uVar3 = FUN_00411ee0(uVar3 * 3,param_2);
        return uVar3;
      }
      if (((byte)DAT_0041c718 & 4) == 0) goto LAB_004113f0;
      if ((iVar1 == 1) || (iVar1 == 4)) {
        uVar3 = FUN_004056c0(0xffffffffffffffff,(longlong)param_2);
        return uVar3;
      }
      if (iVar1 == 2) {
        FUN_00403110(0,(longlong)param_2);
        iVar1 = FUN_004033cc();
        if (iVar1 == -1) {
          uVar3 = FUN_00403070();
          return uVar3;
        }
        return 0;
      }
    }
    else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_004113f0:
      uVar3 = FUN_004123e0();
      return uVar3;
    }
    uVar3 = FUN_00402acd();
  }
  return uVar3;
}



void FUN_00411a10(undefined8 param_1)

{
  FUN_00411a30(param_1,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00411a30(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int unaff_EDI;
  uint uStack_12c;
  
  if ((unaff_EDI < 0) || (param_2 < 0)) {
    uVar2 = FUN_00402b21();
    uVar3 = (ulonglong)(int)uVar2;
  }
  else {
    uVar3 = (ulonglong)unaff_EDI;
    if (uVar3 < _DAT_00447b48) {
      iVar1 = *(int *)(DAT_00447b50 + uVar3 * 0x18 + 0x10);
      if (iVar1 == 6) {
                    // WARNING: Treating indirect jump as call
        uVar3 = (*(code *)0x0)(0xffffffffffffffff,(longlong)param_2);
        return uVar3;
      }
      if (iVar1 == 5) {
        uVar3 = FUN_00411fa0(uVar3 * 3,param_2);
        return uVar3;
      }
      if (((byte)DAT_0041c718 & 4) == 0) goto LAB_00411ab0;
      if ((iVar1 == 1) || (iVar1 == 4)) {
        uVar3 = FUN_00405ac0(0xffffffffffffffff,(longlong)param_2);
        return uVar3;
      }
      if (iVar1 == 2) {
        FUN_00403110(0,(longlong)param_2);
        iVar1 = FUN_004033dc();
        if (iVar1 == -1) {
          uVar3 = FUN_00403070();
          return uVar3;
        }
        return (ulonglong)uStack_12c;
      }
    }
    else if (((byte)DAT_0041c718 & 4) == 0) {
LAB_00411ab0:
      uVar3 = FUN_00412440();
      return uVar3;
    }
    uVar3 = FUN_00402acd();
  }
  return uVar3;
}



longlong FUN_00411ee0(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < param_2) {
    plVar4 = (longlong *)(unaff_RSI + 8);
    do {
      if (*plVar4 != 0) {
        do {
          uVar3 = *unaff_RDI;
          bVar1 = in((short)uVar3 + 5);
        } while ((bVar1 & 1) == 0);
        lVar6 = 0;
        lVar5 = 0;
        lVar7 = 0;
        do {
          lVar6 = lVar6 + 1;
          uVar2 = in((short)uVar3);
          plVar4 = (longlong *)(lVar7 * 0x10 + unaff_RSI);
          *(undefined *)(*plVar4 + lVar5) = uVar2;
          lVar5 = lVar5 + 1;
          if (plVar4[1] == lVar5) {
            lVar7 = lVar7 + 1;
            if (param_2 == lVar7) {
              return lVar6;
            }
            lVar5 = 0;
          }
          uVar3 = *unaff_RDI;
          bVar1 = in((short)uVar3 + 5);
        } while ((bVar1 & 1) != 0);
        return lVar6;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != (longlong *)(unaff_RSI + 0x18 + (ulonglong)(param_2 - 1) * 0x10));
  }
  return 0;
}



longlong FUN_00411fa0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar6;
  
  if ((longlong)param_2 != 0) {
    plVar2 = unaff_RSI + (longlong)param_2 * 2;
    lVar4 = 0;
    do {
      if (unaff_RSI[1] != 0) {
        uVar5 = *unaff_RDI;
        uVar6 = 0;
        lVar1 = lVar4 + 1;
        do {
          while( true ) {
            bVar3 = in((short)uVar5 + 5);
            if ((bVar3 & 0x20) != 0) break;
            uVar5 = *unaff_RDI;
          }
          out((short)uVar5,*(undefined *)(*unaff_RSI + uVar6));
          lVar4 = lVar1 + uVar6;
          uVar6 = uVar6 + 1;
        } while (uVar6 <= (ulonglong)unaff_RSI[1] && unaff_RSI[1] != uVar6);
      }
      unaff_RSI = unaff_RSI + 2;
    } while (plVar2 != unaff_RSI);
    return lVar4;
  }
  return 0;
}



ulonglong FUN_00412150(void)

{
  ulonglong uVar1;
  ulonglong local_10;
  
  if ((DAT_0041c020._3_1_ & 0x40) == 0) {
    if (((byte)DAT_0041c718 & 4) == 0) {
      FUN_00412210();
    }
    else {
      local_10 = FUN_00405e30();
    }
    uVar1 = FUN_004121e0();
    return uVar1 ^ local_10;
  }
  uVar1 = FUN_004121b0();
  return uVar1;
}



undefined8 FUN_004121b0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  do {
    lVar1 = 10;
    do {
      uVar2 = rdrand();
      bVar3 = (bool)rdrandIsValid();
      if (bVar3) {
        return uVar2;
      }
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  } while( true );
}



void FUN_004121e0(void)

{
  ulonglong uVar1;
  ulonglong *unaff_RDI;
  
  uVar1 = *unaff_RDI << 0xd ^ *unaff_RDI;
  uVar1 = uVar1 ^ uVar1 >> 7;
  *unaff_RDI = uVar1 << 0x11 ^ uVar1;
  return;
}



ulonglong FUN_00412210(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  if (((byte)DAT_0041c718 & 4) == 0) {
    uVar1 = FUN_004123b0();
    uVar2 = (ulonglong)uVar1;
    if (uVar1 != 0xffffffff) {
      uVar2 = unaff_RSI + unaff_RDI;
      if (unaff_RDI < uVar2) {
        do {
          lVar3 = FUN_004123d0();
          if ((lVar3 == -1) || (lVar3 == 0)) {
            FUN_00412330();
            return 0xffffffff;
          }
          unaff_RDI = unaff_RDI + lVar3;
        } while (unaff_RDI < uVar2);
      }
      FUN_00412330();
      return (ulonglong)-(uint)(uVar2 != unaff_RDI);
    }
  }
  else {
    uVar2 = FUN_00402b9f();
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004122d0(void)

{
                    // WARNING: Could not recover jumptable at 0x004122da. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412330(void)

{
                    // WARNING: Could not recover jumptable at 0x0041233a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412380(void)

{
                    // WARNING: Could not recover jumptable at 0x0041238a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123b0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123c0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123d0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123da. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004123e0(void)

{
                    // WARNING: Could not recover jumptable at 0x004123ea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00412440(void)

{
                    // WARNING: Could not recover jumptable at 0x0041244a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0041c720)();
  return;
}



ulonglong FUN_00412580(void)

{
  undefined uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
    *(char *)(unaff_RSI + -1 + uVar5) = (char)unaff_RDI + (char)(unaff_RDI / 10) * -10 + '0';
    bVar2 = 9 < unaff_RDI;
    unaff_RDI = unaff_RDI / 10;
  } while (bVar2);
  *(undefined *)(unaff_RSI + uVar5) = 0;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar1 = *(undefined *)(unaff_RSI + uVar3);
      *(undefined *)(unaff_RSI + uVar3) = *(undefined *)(unaff_RSI + uVar4);
      uVar3 = uVar3 + 1;
      *(undefined *)(unaff_RSI + uVar4) = uVar1;
      uVar4 = uVar4 - 1;
    } while (uVar3 < uVar4);
  }
  return uVar5;
}



ulonglong FUN_00412600(void)

{
  ulonglong uVar1;
  undefined *unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI < 0) {
    *unaff_RSI = 0x2d;
    uVar1 = FUN_00412580();
    return uVar1 + 1;
  }
  uVar1 = FUN_00412580();
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x004126bf)
// WARNING: Removing unreachable block (ram,0x00412b30)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00412660(ulonglong param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  code *unaff_RDI;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  uint uVar10;
  float10 in_ST0;
  float10 fVar11;
  float10 fVar12;
  float10 local_res8;
  ulonglong local_90;
  char cStack_79;
  undefined4 local_78;
  
  uVar10 = param_3 & 3;
  fVar11 = ABS(local_res8);
  uVar5 = param_1;
  local_90 = param_1;
  if ((_DAT_004189b0 < fVar11) ||
     ((local_res8 != (float10)0 && (iVar2 = FUN_004147b4(), 0x3f < iVar2)))) {
    local_78 = 0x696e66;
    uVar7 = 3;
LAB_0041270f:
    if (local_res8 < (float10)0) {
      uVar4 = (ulonglong)((int)uVar7 + 1);
      *(undefined *)((longlong)&local_78 + (uVar7 & 0xffffffff)) = 0x2d;
    }
    else if ((param_3 & 4) == 0) {
      uVar4 = uVar7 & 0xffffffff;
      if ((param_3 & 8) != 0) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        *(undefined *)((longlong)&local_78 + (uVar7 & 0xffffffff)) = 0x20;
      }
    }
    else {
      uVar4 = (ulonglong)((int)uVar7 + 1);
      *(undefined *)((longlong)&local_78 + (uVar7 & 0xffffffff)) = 0x2b;
    }
LAB_00412750:
    if (((uVar10 == 0) && (uVar4 < local_90)) &&
       (uVar10 = FUN_00413b40(uVar5,local_90 - uVar4), uVar10 == 0xffffffff)) {
      return -1;
    }
  }
  else {
    if ((param_3 & 0x20) == 0) {
      in_ST0 = (float10)1000000.0;
      uVar5 = 0;
      param_2 = 6;
    }
    else {
      uVar7 = 1;
      if (param_2 < 0xf) {
        FUN_00414795();
        uVar5 = 0;
      }
      else {
        do {
          uVar5 = uVar7;
          (&cStack_79)[uVar5] = '0';
          param_2 = param_2 + -1;
          if (0x3f < (uint)uVar5) break;
          uVar7 = uVar5 + 1;
        } while (0xe < param_2);
        FUN_00414795();
        uVar5 = uVar5 & 0xffffffff;
      }
    }
    uVar7 = (ulonglong)ROUND(fVar11);
    fVar12 = (fVar11 - (float10)uVar7) * in_ST0;
    uVar8 = (ulonglong)ROUND(fVar12);
    fVar12 = fVar12 - (float10)uVar8;
    if (fVar12 <= (float10)0.5) {
      if (((float10)0.5 <= fVar12) && ((uVar8 == 0 || ((uVar8 & 1) != 0)))) {
        uVar8 = uVar8 + 1;
      }
    }
    else {
      uVar8 = uVar8 + 1;
      if (in_ST0 <= (float10)uVar8) {
        uVar7 = uVar7 + 1;
        uVar8 = 0;
      }
    }
    if (param_2 != 0) {
      do {
        iVar2 = param_2;
        uVar4 = uVar5 & 0xffffffff;
        if (0x3f < (uint)uVar5) goto LAB_00412a84;
        uVar3 = (uint)uVar5 + 1;
        uVar4 = (ulonglong)uVar3;
        param_2 = iVar2 + -1;
        uVar1 = (longlong)uVar8 / 10;
        *(char *)((longlong)&local_78 + uVar5) = (char)uVar8 + (char)uVar1 * -10 + '0';
        uVar5 = uVar5 + 1;
        uVar8 = uVar1;
      } while (uVar1 != 0);
      if (uVar3 != 0x40) {
        if (param_2 != 0) {
          puVar9 = (undefined *)((longlong)&local_78 + (ulonglong)uVar3);
          do {
            uVar6 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar6;
            *puVar9 = 0x30;
            if (uVar6 == 0x40) {
              if (uVar10 != 1) goto LAB_00412750;
              if (param_1 != 0) goto LAB_00412a9c;
              goto LAB_00412770;
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 != (undefined *)
                             ((longlong)&local_78 + (ulonglong)(iVar2 - 2) + (ulonglong)uVar3 + 1));
        }
        *(undefined *)((longlong)&local_78 + uVar4) = 0x2e;
        uVar5 = (ulonglong)((int)uVar4 + 1);
        goto LAB_004128c8;
      }
LAB_00412a84:
      if (uVar10 == 1) goto LAB_00412a8e;
      goto LAB_00412750;
    }
    if ((float10)0.5 <= fVar11 - (float10)uVar7) {
      uVar7 = (uVar7 + 1) - (ulonglong)((uVar7 & 1) == 0);
    }
LAB_004128c8:
    do {
      uVar4 = uVar5 & 0xffffffff;
      if (0x3f < (uint)uVar5) goto LAB_00412a84;
      uVar4 = (ulonglong)((uint)uVar5 + 1);
      uVar8 = uVar7 / 10;
      *(char *)((longlong)&local_78 + uVar5) = (char)uVar7 + (char)uVar8 * -10 + '0';
      uVar5 = uVar5 + 1;
      uVar7 = uVar8;
    } while (uVar8 != 0);
    uVar7 = uVar4;
    if (uVar10 != 1) {
LAB_00412909:
      if ((uint)uVar7 < 0x40) goto LAB_0041270f;
      uVar4 = uVar7 & 0xffffffff;
      goto LAB_00412750;
    }
LAB_00412a8e:
    uVar7 = uVar4;
    if (param_1 == 0) goto LAB_00412909;
LAB_00412a9c:
    if ((local_res8 < (float10)0) || ((param_3 & 0xc) != 0)) {
      local_90 = param_1 - 1;
    }
    uVar7 = uVar4;
    if (local_90 <= uVar4) goto LAB_00412909;
    uVar7 = (ulonglong)((uint)uVar4 + 1);
    if ((uint)uVar4 < 0x40) {
      do {
        *(undefined *)((longlong)&local_78 + uVar4) = 0x30;
        uVar5 = uVar4 & 0xffffffff;
        uVar3 = (uint)uVar5;
        uVar8 = uVar7 & 0xffffffff;
        if (local_90 <= uVar7) goto LAB_00412909;
        uVar4 = uVar4 + 1;
        uVar7 = uVar7 + 1;
      } while ((uint)uVar4 < 0x40);
      goto LAB_0041277c;
    }
  }
LAB_00412770:
  uVar3 = (int)uVar4 - 1;
  uVar8 = uVar4;
LAB_0041277c:
  uVar10 = uVar3 - (int)uVar8;
  uVar5 = (ulonglong)uVar10;
  do {
    uVar3 = uVar3 - 1;
    iVar2 = (*unaff_RDI)();
    if (iVar2 == -1) {
                    // WARNING: Read-only address (ram,0x004189b0) is written
      return -1;
    }
  } while (uVar10 != uVar3);
  iVar2 = 0;
  if (((param_3 & 2) != 0) && (uVar8 < local_90)) {
    uVar10 = FUN_00413b40(uVar5,local_90 - uVar8);
    iVar2 = -(uint)(uVar10 == 0xffffffff);
  }
  return iVar2;
}



int FUN_00412c10(ulonglong param_1,ulonglong param_2,char param_3,uint param_4)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  code *unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  uint local_res8;
  uint local_res10;
  uint local_res18;
  longlong local_res20;
  uint local_d8;
  char acStack_c8 [152];
  
  if (((param_1 | param_2) == 0) &&
     (uVar3 = local_res18 & 0xffffffef, uVar4 = local_res18 & 0x20, local_res18 = uVar3, uVar4 != 0)
     ) {
    uVar5 = 0;
  }
  else {
    bVar1 = (byte)param_4;
    iVar7 = 0;
    uVar5 = 0;
    do {
      if (param_4 == 0) {
        param_1 = 10;
        param_2 = FUN_00414650(0,10,(ulonglong *)&local_d8);
        uVar8 = (ulonglong)local_d8;
      }
      else {
        uVar8 = (ulonglong)((uint)param_2 & ~(-1 << (bVar1 & 0x1f)));
        uVar9 = param_1 >> (bVar1 & 0x3f);
        param_2 = param_2 >> (bVar1 & 0x3f) | param_1 << 0x40 - (bVar1 & 0x3f);
        param_1 = uVar9;
        if ((param_4 & 0x40) != 0) {
          param_2 = uVar9;
          param_1 = 0;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar9 = (ulonglong)uVar4;
      if ((iVar7 == 3) && ((char)local_res18 < '\0')) {
        iVar7 = 1;
        uVar4 = (int)uVar5 + 2;
        acStack_c8[uVar5] = ',';
      }
      else {
        iVar7 = iVar7 + 1;
        uVar9 = uVar5;
      }
      uVar5 = (ulonglong)uVar4;
      acStack_c8[uVar9] = *(char *)(local_res20 + uVar8);
    } while ((param_1 | param_2) != 0);
  }
  if ((local_res18 & 2) == 0) {
    uVar4 = (uint)uVar5;
    bVar10 = uVar4 < 0x90;
    bVar6 = uVar4 < local_res8 && bVar10;
    if (local_res10 == 0) {
      if (bVar6) goto LAB_00412d7e;
LAB_00412da9:
      if ((local_res18 & 1) == 0) goto LAB_00412df8;
      bVar10 = (uint)uVar5 < 0x90;
    }
    else {
      if ((local_res18 & 1) == 0) {
        if (uVar4 >= local_res8 || !bVar10) goto LAB_00412df8;
LAB_00412d7e:
        pcVar2 = acStack_c8 + uVar5;
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          *pcVar2 = '0';
          pcVar2 = pcVar2 + 1;
          if (local_res8 <= uVar4) break;
        } while (uVar4 < 0x90);
        goto LAB_00412da9;
      }
      if ((param_3 != '\0') || ((local_res18 & 0xc) != 0)) {
        local_res10 = local_res10 - 1;
      }
      if (bVar6) goto LAB_00412d7e;
    }
    if (((uint)uVar5 < local_res10) && (bVar10)) {
      pcVar2 = acStack_c8 + uVar5;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *pcVar2 = '0';
        pcVar2 = pcVar2 + 1;
        if (local_res10 <= uVar4) break;
      } while (uVar4 < 0x90);
    }
  }
LAB_00412df8:
  if ((local_res18 & 0x10) == 0) {
LAB_00412e48:
    uVar4 = (uint)uVar5;
    if (0x8f < uVar4) goto LAB_00412eb0;
    if (param_3 == '\0') {
      if ((local_res18 & 4) == 0) {
        if ((local_res18 & 8) == 0) goto LAB_00412eb0;
        acStack_c8[uVar5] = ' ';
      }
      else {
        acStack_c8[uVar5] = '+';
      }
    }
    else {
      acStack_c8[uVar5] = '-';
    }
    uVar4 = uVar4 + 1;
    uVar5 = (ulonglong)(local_res18 & 3);
    if ((((local_res18 & 3) == 0) && (uVar4 < local_res10)) &&
       (uVar3 = FUN_00413b40(uVar5,(ulonglong)(local_res10 - uVar4)), uVar3 == 0xffffffff)) {
      return -1;
    }
  }
  else {
    bVar10 = param_4 == 4;
    uVar4 = (uint)uVar5;
    if ((local_res18 & 0x20) == 0) {
      if (uVar4 == 0) {
        bVar6 = true;
        goto LAB_00412e19;
      }
      bVar6 = local_res8 == uVar4 || uVar4 == local_res10;
      if ((local_res8 != uVar4 && uVar4 != local_res10) ||
         (uVar3 = uVar4 - 1, acStack_c8[uVar3] != '0')) goto LAB_00412e0d;
      if (uVar3 == 0) {
        uVar5 = 0;
        goto LAB_00412e19;
      }
      bVar6 = param_4 == 1 || bVar10;
      if (param_4 == 1 || bVar10) {
        uVar5 = (ulonglong)(uVar4 - 2);
        if (acStack_c8[uVar5] != '0') {
          uVar5 = (ulonglong)uVar3;
          bVar6 = uVar3 < 0x90;
          bVar10 = bVar10 && bVar6;
        }
        goto LAB_00412e19;
      }
      uVar8 = (ulonglong)uVar3;
    }
    else {
LAB_00412e0d:
      bVar6 = uVar4 < 0x90;
      bVar10 = bVar10 && bVar6;
LAB_00412e19:
      if (bVar10) {
        acStack_c8[uVar5] = 'x';
        uVar8 = (ulonglong)((int)uVar5 + 1);
      }
      else {
        uVar8 = uVar5;
        if ((param_4 == 1) && (bVar6)) {
          uVar8 = (ulonglong)((int)uVar5 + 1);
          acStack_c8[uVar5] = 'b';
        }
      }
    }
    uVar4 = (uint)uVar8;
    if (uVar4 < 0x90) {
      uVar5 = (ulonglong)(uVar4 + 1);
      acStack_c8[uVar8] = '0';
      goto LAB_00412e48;
    }
LAB_00412eb0:
    uVar5 = (ulonglong)(local_res18 & 3);
    if ((((local_res18 & 3) == 0) && (uVar4 < local_res10)) &&
       (uVar3 = FUN_00413b40(uVar5,(ulonglong)(local_res10 - uVar4)), uVar3 == 0xffffffff)) {
      return -1;
    }
    if (uVar4 == 0) {
      uVar3 = 0;
      goto LAB_00412f00;
    }
  }
  uVar3 = 0;
  do {
    iVar7 = (*unaff_RDI)();
    if (iVar7 == -1) {
      return -1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar4);
LAB_00412f00:
  if (((local_res18 & 2) != 0) && (uVar3 < local_res10)) {
    uVar4 = FUN_00413b40(uVar5,(ulonglong)(local_res10 - uVar3));
    return -(uint)(uVar4 == 0xffffffff);
  }
  return 0;
}



void FUN_004130c0(byte param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  byte local_res10;
  
  if ((local_res10 & 0x20) != 0) {
    local_res10 = local_res10 & 0xfe;
  }
  uVar1 = *param_2;
  if (param_1 < 0x40) {
    if (uVar1 < 0x30) {
      puVar6 = (ulonglong *)((ulonglong)uVar1 + *(longlong *)(param_2 + 4));
      *param_2 = uVar1 + 8;
    }
    else {
      puVar6 = *(ulonglong **)(param_2 + 2);
      *(ulonglong **)(param_2 + 2) = puVar6 + 1;
    }
    uVar9 = *puVar6;
    uVar5 = 0;
  }
  else {
    if (uVar1 < 0x28) {
      puVar6 = (ulonglong *)((ulonglong)uVar1 + *(longlong *)(param_2 + 4));
      *param_2 = uVar1 + 0x10;
    }
    else {
      puVar6 = (ulonglong *)(*(longlong *)(param_2 + 2) + 0xfU & 0xfffffffffffffff0);
      *(ulonglong **)(param_2 + 2) = puVar6 + 2;
    }
    uVar9 = *puVar6;
    uVar5 = puVar6[1];
  }
  uVar7 = 1L << (param_1 & 0x3f);
  uVar8 = uVar7;
  uVar2 = 0L << (param_1 & 0x3f) | 1UL >> 0x40 - (param_1 & 0x3f);
  if ((param_1 & 0x40) != 0) {
    uVar8 = 0;
    uVar2 = uVar7;
  }
  uVar3 = (uVar2 - 1) + (ulonglong)(uVar8 != 0);
  uVar7 = uVar8 - 1 | uVar8;
  uVar4 = uVar3 | uVar2;
  uVar5 = uVar5 & uVar4;
  uVar9 = uVar9 & uVar7;
  bVar11 = false;
  if (((local_res10 & 0x40) != 0) && (bVar11 = true, (uVar2 ^ uVar5 | uVar8 ^ uVar9) != 0)) {
    bVar11 = (uVar2 & uVar5 | uVar8 & uVar9) != 0;
    if (bVar11) {
      bVar10 = uVar9 != 0;
      uVar9 = uVar7 & -uVar9;
      uVar5 = uVar4 & -(uVar5 + bVar10);
    }
    uVar5 = uVar5 & uVar3;
    uVar9 = uVar8 - 1 & uVar9;
  }
  FUN_00412c10(uVar5,uVar9,bVar11,param_3);
  return;
}



// WARNING: Removing unreachable block (ram,0x004135c4)
// WARNING: Removing unreachable block (ram,0x004133fe)
// WARNING: Type propagation algorithm not settling

undefined8 FUN_00413260(uint *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
  code *unaff_RDI;
  char *pcVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_3c [3];
  
  pcVar8 = (code *)0x40116a;
  if (unaff_RDI != (code *)0x0) {
    pcVar8 = unaff_RDI;
  }
  cVar3 = *param_2;
joined_r0x0041328b:
  if (cVar3 == '\0') {
    return 0;
  }
  if (cVar3 == '%') {
    uVar5 = 0;
    pcVar11 = param_2 + 1;
LAB_004132e3:
    while( true ) {
      while( true ) {
        cVar3 = *pcVar11;
        pcVar14 = pcVar11 + 1;
        if (cVar3 != ',') break;
        uVar5 = uVar5 | 0x80;
        pcVar11 = pcVar14;
      }
      if (cVar3 < '-') break;
      if (cVar3 == '0') {
        uVar5 = uVar5 | 1;
        pcVar11 = pcVar14;
      }
      else if (cVar3 == '`') {
        uVar5 = uVar5 | 4;
LAB_00413310:
        uVar5 = uVar5 | 8;
        pcVar11 = pcVar14;
      }
      else {
        if (cVar3 != '-') {
          iVar10 = (int)cVar3;
          iVar4 = 0;
          if ((iVar10 - 0x30U < 10) && (iVar4 = 0, (byte)(cVar3 - 0x30U) < 10)) {
            while( true ) {
              iVar4 = iVar10 + -0x30 + iVar4 * 10;
              cVar3 = *pcVar14;
              pcVar11 = pcVar14;
              if (9 < (byte)(cVar3 - 0x30U)) break;
              pcVar14 = pcVar14 + 1;
              iVar10 = (int)cVar3;
            }
          }
          goto LAB_00413800;
        }
        uVar5 = uVar5 | 2;
        pcVar11 = pcVar14;
      }
    }
    if (cVar3 == '\'') goto LAB_00413310;
    if (cVar3 < '(') {
      if (cVar3 == ' ') goto LAB_00413310;
      if (cVar3 != '#') goto LAB_00413340;
      uVar5 = uVar5 | 0x10;
      pcVar11 = pcVar14;
      goto LAB_004132e3;
    }
    if (cVar3 == '+') {
      uVar5 = uVar5 | 4;
      pcVar11 = pcVar14;
      goto LAB_004132e3;
    }
    if (cVar3 != '*') goto LAB_00413340;
    uVar1 = *param_1;
    if (uVar1 < 0x30) {
      piVar7 = (int *)((ulonglong)uVar1 + *(longlong *)(param_1 + 4));
      *param_1 = uVar1 + 8;
    }
    else {
      piVar7 = *(int **)(param_1 + 2);
      *(int **)(param_1 + 2) = piVar7 + 2;
    }
    iVar4 = *piVar7;
    if (iVar4 < 0) {
      uVar5 = uVar5 | 2;
      iVar4 = -iVar4;
    }
    cVar3 = pcVar11[1];
    pcVar11 = pcVar14;
LAB_00413800:
    pcVar14 = pcVar11;
    if (cVar3 != '.') goto LAB_00413343;
    cVar3 = pcVar11[1];
    iVar10 = (int)cVar3;
    uVar5 = uVar5 | 0x20;
    pcVar14 = pcVar11 + 1;
    if (iVar10 - 0x30U < 10) {
      if (9 < (byte)(cVar3 - 0x30U)) goto LAB_00413343;
      iVar6 = 0;
      while( true ) {
        pcVar14 = pcVar14 + 1;
        iVar6 = iVar10 + -0x30 + iVar6 * 10;
        cVar3 = *pcVar14;
        if (9 < (byte)(cVar3 - 0x30U)) break;
        iVar10 = (int)cVar3;
      }
    }
    else {
      if (cVar3 != '*') goto LAB_00413343;
      uVar1 = *param_1;
      if (uVar1 < 0x30) {
        piVar7 = (int *)((ulonglong)uVar1 + *(longlong *)(param_1 + 4));
        *param_1 = uVar1 + 8;
      }
      else {
        piVar7 = *(int **)(param_1 + 2);
        *(int **)(param_1 + 2) = piVar7 + 2;
      }
      iVar6 = 0;
      if (-1 < *piVar7) {
        iVar6 = *piVar7;
      }
      cVar3 = pcVar11[2];
      pcVar14 = pcVar11 + 2;
    }
    goto LAB_00413345;
  }
  iVar4 = (*pcVar8)();
  if (iVar4 == -1) {
    return 0xffffffff;
  }
  param_2 = param_2 + 1;
  goto LAB_004132b2;
LAB_00413340:
  iVar4 = 0;
  pcVar14 = pcVar11;
LAB_00413343:
  iVar6 = 0;
LAB_00413345:
  if (cVar3 == 'j') {
    cVar3 = pcVar14[1];
    pcVar11 = pcVar14 + 1;
    bVar9 = 0x7f;
LAB_00413380:
    param_2 = pcVar11 + 1;
    if (cVar3 == 'o') {
LAB_0041393d:
      uVar5 = 3;
    }
    else {
      if ('o' < cVar3) {
        if (cVar3 != 's') {
          if ('s' < cVar3) {
            if (cVar3 == 'u') goto LAB_0041344c;
            if (cVar3 != 'x') goto LAB_004134b3;
LAB_00413666:
            uVar5 = 4;
            goto LAB_004133c1;
          }
joined_r0x004137b2:
          if (cVar3 != 'q') {
            if (cVar3 != 'r') {
              if (cVar3 != 'p') {
LAB_004134b3:
                iVar4 = (*pcVar8)();
                if (iVar4 == -1) {
                  return 0xffffffff;
                }
                cVar3 = *param_2;
                goto joined_r0x0041328b;
              }
LAB_00413720:
              uVar5 = 4;
              bVar9 = 0x2f;
              goto LAB_004133c1;
            }
LAB_004136b8:
            uVar5 = uVar5 | 4;
          }
LAB_004136bb:
          uVar5 = uVar5 | 8;
        }
LAB_004136be:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar12 = (undefined8 *)((ulonglong)uVar1 + *(longlong *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar12 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar12 + 1;
        }
        puVar13 = (undefined4 *)*puVar12;
LAB_004136e0:
        iVar4 = FUN_00413cc0((longlong)(int)uVar5,(char *)puVar13,(longlong)iVar6,(longlong)iVar4);
        goto joined_r0x0041358d;
      }
      if (cVar3 == 'c') {
LAB_00413858:
        uVar1 = *param_1;
joined_r0x004139e7:
        uVar5 = uVar5 | 0x20;
        if (uVar1 < 0x30) {
          puVar13 = (undefined4 *)((ulonglong)uVar1 + *(longlong *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar13 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar13 + 2;
        }
        local_3c[0] = *puVar13;
        iVar6 = 1;
        puVar13 = local_3c;
        goto LAB_004136e0;
      }
      if (cVar3 < 'd') {
        if (cVar3 == 'X') goto LAB_0041389e;
        if ('X' < cVar3) {
joined_r0x004133bb:
          uVar5 = 1;
          if (cVar3 != 'b') goto LAB_004134b3;
          goto LAB_004133c1;
        }
        if (cVar3 == '%') {
LAB_00413580:
          iVar4 = (*pcVar8)();
          goto joined_r0x0041358d;
        }
        if (cVar3 != 'F') goto LAB_004134b3;
LAB_00413688:
        if (param_1[1] < 0xb0) {
          param_1[1] = param_1[1] + 0x10;
        }
        else {
          *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + 8;
        }
        goto LAB_00413612;
      }
      if (cVar3 != 'i') {
        if ('i' < cVar3) {
LAB_004135ae:
          if (cVar3 != 'm') goto LAB_004134b3;
          goto LAB_004135b6;
        }
        if (cVar3 != 'd') {
          if (cVar3 != 'f') goto LAB_004134b3;
          goto LAB_00413688;
        }
      }
LAB_0041344c:
      uVar5 = 0;
    }
  }
  else if (cVar3 < 'k') {
    if (cVar3 == 'h') {
      cVar3 = pcVar14[1];
      pcVar11 = pcVar14 + 1;
      bVar9 = 0xf;
      if (cVar3 == 'h') {
        cVar3 = pcVar14[2];
        pcVar11 = pcVar14 + 2;
        bVar9 = 7;
      }
      goto LAB_00413380;
    }
    if ((cVar3 != 'i') && ((cVar3 == 'L' || (cVar3 == 'Z')))) goto LAB_00413468;
LAB_00413420:
    param_2 = pcVar14 + 1;
    if (cVar3 == 'b') {
      uVar5 = 1;
      bVar9 = 0x1f;
    }
    else {
      if ('b' < cVar3) {
        if (cVar3 != 'd') {
          if (cVar3 < 'e') {
            if (cVar3 != 'c') goto LAB_004134b3;
            goto LAB_00413858;
          }
          if (cVar3 == 'f') goto LAB_00413688;
          if (cVar3 != 'i') goto LAB_004134b3;
        }
        bVar9 = 0x1f;
        goto LAB_0041344c;
      }
      if (cVar3 == 'F') goto LAB_00413688;
      if (cVar3 != 'X') {
        if (cVar3 != '%') goto LAB_004134b3;
        goto LAB_00413580;
      }
      bVar9 = 0x1f;
LAB_0041389e:
      uVar5 = 4;
    }
  }
  else {
    if (cVar3 != 'l') {
      if ((cVar3 != 'k') && ((cVar3 == 't' || (cVar3 == 'z')))) {
LAB_00413468:
        cVar3 = pcVar14[1];
        goto LAB_0041346d;
      }
      param_2 = pcVar14 + 1;
      if (cVar3 != 'm') {
        if (cVar3 < 'n') goto LAB_00413420;
        if (cVar3 == 'r') goto LAB_004136b8;
        if ('r' < cVar3) {
          if (cVar3 == 'u') {
            bVar9 = 0x1f;
            goto LAB_0041344c;
          }
          if (cVar3 == 'x') {
            bVar9 = 0x1f;
            goto LAB_00413666;
          }
          if (cVar3 != 's') goto LAB_004134b3;
          goto LAB_004136be;
        }
        if (cVar3 == 'p') goto LAB_00413720;
        if (cVar3 != 'q') {
          if (cVar3 != 'o') goto LAB_004134b3;
          bVar9 = 0x1f;
          goto LAB_0041393d;
        }
        goto LAB_004136bb;
      }
LAB_004135b6:
      puVar13 = (undefined4 *)&DAT_004189d1;
      goto LAB_004136e0;
    }
    cVar3 = pcVar14[1];
    if (cVar3 == 'l') {
      cVar3 = pcVar14[2];
      param_2 = pcVar14 + 3;
      cVar2 = cVar3 + -0x6f;
      bVar15 = cVar2 == '\0';
      if (bVar15) {
LAB_0041350e:
        bVar9 = 0x3f;
        goto LAB_0041393d;
      }
    }
    else {
LAB_0041346d:
      param_2 = pcVar14 + 2;
      cVar2 = cVar3 + -0x6f;
      bVar15 = cVar3 == 'o';
      if (bVar15) goto LAB_0041350e;
    }
    if (bVar15 || SBORROW1(cVar3,'o') != cVar2 < '\0') {
      if (cVar3 == 'c') {
        uVar1 = *param_1;
        goto joined_r0x004139e7;
      }
      if ('c' < cVar3) {
        if (cVar3 != 'i') {
          if ('i' < cVar3) goto LAB_004135ae;
          if (cVar3 != 'd') {
            if (cVar3 != 'f') goto LAB_004134b3;
            goto LAB_004135fc;
          }
        }
        bVar9 = 0x3f;
        goto LAB_0041344c;
      }
      if (cVar3 == 'X') {
        bVar9 = 0x3f;
        goto LAB_0041389e;
      }
      if ('X' < cVar3) {
        bVar9 = 0x3f;
        goto joined_r0x004133bb;
      }
      if (cVar3 == '%') goto LAB_00413580;
      if (cVar3 != 'F') goto LAB_004134b3;
LAB_004135fc:
      *(ulonglong *)(param_1 + 2) = (*(longlong *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0) + 0x10;
LAB_00413612:
      iVar4 = FUN_00412660((longlong)iVar4,iVar6,uVar5);
      goto joined_r0x0041358d;
    }
    if (cVar3 == 's') goto LAB_004136be;
    if (cVar3 < 't') goto joined_r0x004137b2;
    if (cVar3 != 'u') {
      if (cVar3 != 'x') goto LAB_004134b3;
      bVar9 = 0x3f;
      goto LAB_00413666;
    }
    bVar9 = 0x3f;
    uVar5 = 0;
  }
LAB_004133c1:
  iVar4 = FUN_004130c0(bVar9,param_1,uVar5);
joined_r0x0041358d:
  if (iVar4 == -1) {
    return 0xffffffff;
  }
LAB_004132b2:
  cVar3 = *param_2;
  goto joined_r0x0041328b;
}



void FUN_00413ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char in_AL;
  char *in_RDX;
  undefined in_register_00001204 [12];
  undefined in_register_00001224 [12];
  undefined in_register_00001244 [12];
  undefined in_register_00001264 [12];
  undefined local_res8 [32];
  uint local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [48];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  
  if (in_AL != '\0') {
    local_88._4_12_ = in_register_00001204;
    local_88._0_4_ = param_1;
    local_78._4_12_ = in_register_00001224;
    local_78._0_4_ = param_2;
    local_68._4_12_ = in_register_00001244;
    local_68._0_4_ = param_3;
    local_58._4_12_ = in_register_00001264;
    local_58._0_4_ = param_4;
  }
  local_c8 = local_res8;
  local_d0 = 0x18;
  local_c0 = local_b8;
  local_cc = 0x30;
  FUN_00414600(&local_d0,in_RDX);
  return;
}



uint FUN_00413b40(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  code *unaff_RDI;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar1 = (*unaff_RDI)();
      uVar3 = uVar3 | uVar1;
    } while ((int)param_2 != iVar2);
  }
  return uVar3;
}



undefined8 FUN_00413c40(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_2 & 0xffffff80) == 0) {
                    // WARNING: Could not recover jumptable at 0x00413c6a. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  uVar2 = FUN_00414845();
  do {
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    if ((int)uVar1 == -1) {
      return uVar1;
    }
    uVar2 = uVar2 >> 8;
  } while (uVar2 != 0);
  return 0;
}



void FUN_00413cb0(undefined8 param_1,uint param_2)

{
  FUN_00413c40(param_1,(uint)*(ushort *)((ulonglong)param_2 * 2));
  return;
}



// WARNING: Removing unreachable block (ram,0x00414069)
// WARNING: Removing unreachable block (ram,0x00414296)
// WARNING: Removing unreachable block (ram,0x004140da)

int FUN_00413cc0(ulonglong param_1,char *param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  code *unaff_RDI;
  char cVar9;
  char local_res8;
  uint local_54;
  ulonglong local_48;
  code *local_40;
  
  uVar3 = (uint)param_1;
  uVar7 = param_1;
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
    if ((param_1 & 4) != 0) {
      param_2 = &DAT_004189d3;
    }
    uVar8 = 0;
    local_res8 = '\0';
    local_48 = (ulonglong)(uVar3 & 0xffffffdf) | 0x80;
LAB_00414059:
    if ((local_48 & 8) != 0) goto LAB_0041408a;
    local_40 = (code *)&LAB_00413ba0;
    cVar6 = '\x01';
LAB_00413d64:
    uVar7 = 0;
joined_r0x004140af:
    cVar9 = cVar6;
    if (local_res8 == '?') {
      local_54 = FUN_004158c8();
      param_3 = (ulonglong)(int)local_54;
      cVar6 = cVar9;
      if (param_4 != 0) goto LAB_00413dcd;
      goto LAB_00413e28;
    }
    if (local_res8 == '\x0f') {
      iVar2 = FUN_004158b1();
      param_3 = (ulonglong)iVar2;
    }
    else {
      param_3 = FUN_004157a4();
      uVar7 = uVar7 & 0xff;
    }
    local_54 = (uint)param_3;
    if (param_4 == 0) goto LAB_00413e28;
LAB_00413db5:
    cVar6 = cVar9;
    if (local_res8 != '\x0f') {
      local_54 = FUN_0040a580();
      uVar7 = uVar7 & 0xff;
    }
LAB_00413dcd:
    cVar9 = cVar6;
    if (param_4 <= local_54) goto LAB_00413e28;
    local_54 = (int)param_4 - local_54;
    if (local_54 == 0) {
      if (cVar9 != '\0') goto LAB_00414107;
      if (param_3 == 0) goto LAB_00413f2a;
LAB_004141ba:
      uVar3 = (uint)uVar7;
      goto LAB_00413e45;
    }
    if ((local_48 & 2) == 0) {
      uVar3 = FUN_00413b40(uVar7,(ulonglong)local_54);
      uVar7 = uVar7 & 0xff;
      if (uVar3 == 0xffffffff) {
        return -1;
      }
    }
    if (cVar9 != '\0') goto LAB_00414107;
    if (param_3 != 0) goto LAB_004141ba;
  }
  else {
    local_48 = param_1;
    if ((param_1 & 4) == 0) {
      uVar8 = uVar3 & 0x20;
      if ((local_res8 != '\x0f') && (local_res8 != '?')) goto LAB_00414059;
    }
    else {
      if ((local_res8 != '?') && (local_res8 != '\x0f')) {
        iVar2 = (*unaff_RDI)();
        if (iVar2 == -1) {
          return -1;
        }
        uVar8 = uVar3 & 0x20;
        goto LAB_00414059;
      }
      iVar2 = (*unaff_RDI)();
      if (iVar2 == -1) {
        return -1;
      }
      iVar2 = (*unaff_RDI)();
      if (iVar2 == -1) {
        return -1;
      }
    }
    uVar8 = uVar3 & 0x20;
    if ((param_1 & 8) == 0) {
      local_40 = FUN_00413c40;
      cVar6 = '\0';
      goto LAB_00413d64;
    }
LAB_0041408a:
    local_40 = (code *)&LAB_00413bb0;
    uVar7 = CONCAT71((int7)(uVar7 >> 8),uVar8 != 0);
    cVar9 = '\0';
    cVar6 = '\0';
    if ((uVar8 == 0) || (cVar6 = cVar9, uVar8 == 0)) goto joined_r0x004140af;
    if (param_4 != 0) {
      local_54 = (uint)param_3;
      cVar6 = '\0';
      if (local_res8 != '?') goto LAB_00413db5;
      goto LAB_00413dcd;
    }
LAB_00413e28:
    uVar3 = (uint)uVar7;
    if (cVar9 == '\0') {
      if (param_3 == 0) goto LAB_00413f2a;
      local_54 = 0;
LAB_00413e45:
      uVar7 = (ulonglong)(uVar3 ^ 1);
      cVar6 = (char)(uVar3 ^ 1);
      do {
        uVar5 = param_3 - 1;
        if (local_res8 == '\x0f') {
          uVar7 = (ulonglong)*(ushort *)param_2;
          if ((*(ushort *)param_2 == 0) && (cVar6 != '\0')) break;
          uVar7 = uVar7 & 0xfffffffffffffc00;
          if ((short)uVar7 == -0x2800) {
            if (uVar5 == 0) break;
            uVar5 = param_3 - 2;
            piVar4 = (int *)param_2;
          }
          else {
            piVar4 = (int *)((longlong)param_2 + 2);
          }
LAB_00413ef0:
          iVar2 = (*local_40)();
          if (iVar2 == -1) {
            return -1;
          }
        }
        else {
          if (local_res8 == '?') {
            if (((*(int *)param_2 != 0) || (cVar6 == '\0')) &&
               (piVar4 = (int *)((longlong)param_2 + 4), *(int *)param_2 != 0)) goto LAB_00413ef0;
            break;
          }
          bVar1 = *param_2;
          piVar4 = (int *)((longlong)param_2 + 1);
          uVar3 = (uint)bVar1;
          uVar7 = (ulonglong)(uint)(int)(char)bVar1;
          if ((uVar3 == 0) && (cVar6 != '\0')) break;
          if ((bVar1 & 0x80) == 0) goto LAB_00413ef0;
          if (((int)(char)bVar1 & 0xc0U) != 0x80) {
            if (uVar3 < 0xfc) {
              uVar8 = 0x1f;
              if ((uVar3 ^ 0xff) != 0) {
                for (; (uVar3 ^ 0xff) >> uVar8 == 0; uVar8 = uVar8 - 1) {
                }
              }
              uVar7 = (ulonglong)uVar8;
              uVar8 = 6 - uVar8;
              if (uVar5 < uVar8) break;
              uVar5 = uVar5 - uVar8;
              if (uVar8 == 0) goto LAB_00413ef0;
            }
            else {
              if (uVar5 < 5) break;
              uVar5 = param_3 - 6;
              uVar8 = 5;
            }
            do {
              bVar1 = *(byte *)piVar4;
              piVar4 = (int *)((longlong)piVar4 + 1);
              uVar7 = (ulonglong)(bVar1 & 0x3f);
            } while (piVar4 != (int *)((longlong)param_2 + (ulonglong)(uVar8 - 1) + 2));
            piVar4 = (int *)((longlong)param_2 + (ulonglong)(uVar8 - 1) + 2);
            goto LAB_00413ef0;
          }
        }
        param_3 = uVar5;
        param_2 = (char *)piVar4;
      } while (uVar5 != 0);
    }
    else {
      local_54 = 0;
LAB_00414107:
      uVar3 = (uint)uVar7 ^ 1;
      uVar7 = (ulonglong)uVar3;
      piVar4 = (int *)(param_3 + (longlong)param_2);
      while (((int *)param_2 != piVar4 &&
             ((bVar1 = *param_2, param_2 = (char *)((longlong)param_2 + 1), bVar1 != 0 ||
              ((char)uVar3 == '\0'))))) {
        iVar2 = (*local_40)();
        if (iVar2 == -1) {
          return -1;
        }
      }
    }
    if (local_54 == 0) goto LAB_00413f2a;
  }
  if ((((uint)local_48 & 2) != 0) &&
     (uVar3 = FUN_00413b40(uVar7,(ulonglong)local_54), uVar3 == 0xffffffff)) {
    return -1;
  }
LAB_00413f2a:
  if (((uint)local_48 & 0x84) == 4) {
    iVar2 = (*unaff_RDI)();
    return -(uint)(iVar2 == -1);
  }
  return 0;
}



ulonglong FUN_004142f0(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  bool bVar8;
  uint uVar9;
  undefined7 extraout_var;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte **unaff_RSI;
  byte *unaff_RDI;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  
  while( true ) {
    bVar15 = *unaff_RDI;
    bVar8 = FUN_004148d0();
    if ((int)CONCAT71(extraout_var,bVar8) == 0) break;
    unaff_RDI = unaff_RDI + 1;
  }
  bVar8 = false;
  if (bVar15 == 0x2b) {
LAB_00414337:
    bVar15 = unaff_RDI[1];
    unaff_RDI = unaff_RDI + 1;
  }
  else if (bVar15 == 0x2d) {
    bVar8 = true;
    goto LAB_00414337;
  }
  if (param_2 - 2 < 0x23) {
    if (bVar15 == 0x30) {
      bVar15 = unaff_RDI[1];
      unaff_RDI = unaff_RDI + 1;
    }
  }
  else {
    param_2 = 10;
    if (bVar15 == 0x30) {
      bVar15 = unaff_RDI[1];
      if ((bVar15 & 0xdf) == 0x58) {
        bVar15 = unaff_RDI[2];
        unaff_RDI = unaff_RDI + 2;
        param_2 = 0x10;
      }
      else if ((bVar15 & 0xdf) == 0x42) {
        bVar15 = unaff_RDI[2];
        unaff_RDI = unaff_RDI + 2;
        param_2 = 2;
      }
      else {
        unaff_RDI = unaff_RDI + 1;
        param_2 = 8;
      }
    }
  }
  bVar15 = (&DAT_0041c380)[bVar15];
  if ((param_2 < bVar15) || (bVar15 == 0)) {
    uVar14 = 0;
LAB_0041444a:
    if (unaff_RSI == (byte **)0x0) goto LAB_00414458;
  }
  else {
    uVar13 = (ulonglong)(int)param_2;
    uVar11 = bVar15 - 1;
    auVar4 = ZEXT816(0);
    do {
      do {
        pbVar12 = unaff_RDI;
        auVar6._4_4_ = 0;
        auVar6._0_4_ = uVar11;
        unaff_RDI = pbVar12 + 1;
        auVar6._8_8_ = auVar4._8_8_ * uVar13 + ((longlong)uVar13 >> 0x3f) * auVar4._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar4._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar13;
        auVar4 = auVar2 * auVar4 + auVar6;
        uVar14 = auVar4._0_8_;
        uVar9 = (uint)(byte)(&DAT_0041c380)[pbVar12[1]];
        if ((uVar9 == 0) || (param_2 < uVar9)) goto LAB_0041444a;
        uVar11 = uVar9 - 1;
      } while ((uVar9 == 1) || (auVar4 == (undefined  [16])0x0));
      iVar1 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar10 = FUN_004153f4();
      uVar9 = iVar1 + (int)uVar10;
    } while (uVar9 < 0x7f);
    if (bVar8) {
      if ((uVar9 == 0x7f) &&
         (auVar3._8_8_ = 0, auVar3._0_8_ = uVar14, auVar5._8_8_ = 0, auVar5._0_8_ = uVar13,
         auVar7._4_4_ = 0, auVar7._0_4_ = uVar11,
         auVar7._8_8_ = auVar4._8_8_ * uVar13 + ((longlong)uVar13 >> 0x3f) * uVar14,
         auVar3 * auVar5 + auVar7 == (undefined  [16])0x8000000000000000)) {
        unaff_RDI = pbVar12 + 2;
      }
      uVar14 = 0;
    }
    else {
      uVar14 = 0xffffffffffffffff;
    }
    if (unaff_RSI == (byte **)0x0) {
      return uVar14;
    }
  }
  *unaff_RSI = unaff_RDI;
LAB_00414458:
  if (bVar8) {
    uVar14 = -uVar14;
  }
  return uVar14;
}



ulonglong FUN_004145a0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_004142f0(param_1,(uint)param_2);
  if ((SBORROW8(param_2,-1) != SBORROW8(param_2 + 1,(ulonglong)(uVar1 < 0x8000000000000000))) ==
      (longlong)((param_2 + 1) - (ulonglong)(uVar1 < 0x8000000000000000)) < 0) {
    if ((SBORROW8(-param_2,(ulonglong)(0x7fffffffffffffff < uVar1)) != false) !=
        (longlong)(-param_2 - (ulonglong)(0x7fffffffffffffff < uVar1)) < 0) {
      uVar1 = 0x7fffffffffffffff;
    }
    return uVar1;
  }
  return 0x8000000000000000;
}



undefined8 FUN_00414600(uint *param_1,char *param_2)

{
  longlong unaff_RSI;
  undefined *unaff_RDI;
  
  FUN_00413260(param_1,param_2);
  if (unaff_RSI != 0) {
    *unaff_RDI = 0;
  }
  return 0;
}



ulonglong FUN_00414650(ulonglong param_1,ulonglong param_2,ulonglong *param_3)

{
  longlong lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong unaff_RSI;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  bool bVar14;
  undefined8 local_28;
  
  if (unaff_RSI < param_1 || unaff_RSI - param_1 < (ulonglong)(unaff_RDI < param_2)) {
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = unaff_RDI;
      param_3[1] = unaff_RSI;
      return 0;
    }
    return 0;
  }
  if (param_1 != 0) {
    lVar9 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    lVar1 = 0x3f;
    if (unaff_RSI != 0) {
      for (; unaff_RSI >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar8 = ((uint)lVar9 ^ 0x3f) - ((uint)lVar1 ^ 0x3f);
    bVar6 = (byte)uVar8 & 0x3f;
    uVar11 = param_2 << ((byte)uVar8 & 0x3f);
    uVar12 = uVar11;
    uVar13 = param_1 << bVar6 | param_2 >> 0x40 - bVar6;
    if ((uVar8 & 0x40) != 0) {
      uVar12 = 0;
      uVar13 = uVar11;
    }
    uVar11 = 0;
    if (-1 < (int)uVar8) {
      uVar11 = 0;
      do {
        lVar9 = (((uVar13 - 1) + (ulonglong)(uVar12 != 0)) - unaff_RSI) -
                (ulonglong)(uVar12 - 1 < unaff_RDI);
        uVar10 = lVar9 >> 0x3f;
        uVar11 = uVar11 * 2 | (ulonglong)((uint)(lVar9 >> 0x3f) & 1);
        uVar7 = uVar10 & uVar12;
        bVar14 = unaff_RDI < uVar7;
        unaff_RDI = unaff_RDI - uVar7;
        unaff_RSI = (unaff_RSI - (uVar10 & uVar13)) - (ulonglong)bVar14;
        uVar8 = uVar8 - 1;
        uVar12 = uVar12 >> 1 | uVar13 << 0x3f;
        uVar13 = uVar13 >> 1;
      } while (uVar8 != 0xffffffff);
    }
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = unaff_RDI;
      param_3[1] = unaff_RSI;
    }
    return uVar11;
  }
  if (unaff_RSI < param_2) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar5._8_8_ = unaff_RSI;
    auVar5._0_8_ = unaff_RDI;
    uVar13 = SUB168(auVar5 / auVar3,0);
    local_28 = SUB168(auVar5 % auVar3,0);
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    auVar4._8_8_ = unaff_RSI % param_2;
    auVar4._0_8_ = unaff_RDI;
    uVar13 = SUB168(auVar4 / auVar2,0);
    local_28 = SUB168(auVar4 % auVar2,0);
  }
  if (param_3 != (ulonglong *)0x0) {
    *(undefined4 *)param_3 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_3 + 4) = local_28._4_4_;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  }
  return uVar13;
}



void FUN_00414795(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 local_res8;
  
  fVar1 = ROUND((float10)3.321928094887362 * local_res8);
  fVar2 = (float10)f2xm1((float10)3.321928094887362 * local_res8 - fVar1);
  fscale((float10)1 + fVar2,fVar1);
  return;
}



int FUN_004147b4(void)

{
  float10 local_res8;
  
  return (int)local_res8;
}



ulonglong FUN_00414845(void)

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
    uVar2 = (ulonglong)*(uint *)(&DAT_004189d2 + (ulonglong)uVar1 * 2);
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



bool FUN_004148d0(void)

{
  int unaff_EDI;
  
  return unaff_EDI - 9U < 5 || unaff_EDI == 0x20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_00414e40(undefined8 param_1,undefined (*param_2) [16])

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong unaff_RSI;
  uint uVar7;
  longlong unaff_RDI;
  undefined (*pauVar8) [16];
  ulonglong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  uVar4 = 0;
  lVar6 = 0;
  pauVar8 = param_2;
  auVar13 = _DAT_00418a20;
  if (((ulonglong)param_2 & 0xf) == 0) goto LAB_00414ee0;
LAB_00414e70:
  uVar2 = *(ushort *)*param_2;
  lVar1 = lVar6 + 1;
  lVar5 = lVar6;
  do {
    lVar6 = lVar1;
    if (uVar2 == 0) {
joined_r0x00414f76:
      if (uVar4 < unaff_RSI) {
        *(undefined *)(unaff_RDI + uVar4) = 0;
      }
      return uVar4;
    }
    uVar7 = (uint)uVar2;
                    // WARNING: Read-only address (ram,0x00418a20) is written
    if ((uVar2 & 0xfc00) != 0xdc00) {
      if ((uVar2 & 0xfc00) == 0xd800) {
        lVar1 = lVar6 * 2;
        lVar6 = lVar5 + 2;
        if (*(ushort *)(*pauVar8 + lVar1) == 0) goto joined_r0x00414f76;
        uVar7 = *(ushort *)(*pauVar8 + lVar1) + 0xfca02400 + uVar7 * 0x400;
      }
      uVar3 = (ulonglong)(int)uVar7;
      if (0x7f < uVar7) {
        uVar3 = FUN_00414845();
      }
      while ((uVar3 != 0 && (uVar9 = uVar4 + 1, uVar9 < unaff_RSI))) {
        *(char *)(unaff_RDI + -1 + uVar9) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        uVar4 = uVar9;
      }
    }
    param_2 = (undefined (*) [16])(*pauVar8 + lVar6 * 2);
    if (((ulonglong)param_2 & 0xf) != 0) goto LAB_00414e70;
LAB_00414ee0:
    lVar5 = lVar6;
    uVar3 = uVar4 + 8;
    if (unaff_RSI <= uVar4 + 8) goto LAB_00414e70;
    do {
      uVar9 = uVar3;
      lVar6 = lVar5;
      auVar12 = *param_2;
      auVar11._0_2_ = -(ushort)(0 < auVar12._0_2_);
      auVar11._2_2_ = -(ushort)(0 < auVar12._2_2_);
      auVar11._4_2_ = -(ushort)(0 < auVar12._4_2_);
      auVar11._6_2_ = -(ushort)(0 < auVar12._6_2_);
      auVar11._8_2_ = -(ushort)(0 < auVar12._8_2_);
      auVar11._10_2_ = -(ushort)(0 < auVar12._10_2_);
      auVar11._12_2_ = -(ushort)(0 < auVar12._12_2_);
      auVar11._14_2_ = -(ushort)(0 < auVar12._14_2_);
      auVar10._0_2_ = -(ushort)(auVar13._0_2_ < auVar12._0_2_);
      auVar10._2_2_ = -(ushort)(auVar13._2_2_ < auVar12._2_2_);
      auVar10._4_2_ = -(ushort)(auVar13._4_2_ < auVar12._4_2_);
      auVar10._6_2_ = -(ushort)(auVar13._6_2_ < auVar12._6_2_);
      auVar10._8_2_ = -(ushort)(auVar13._8_2_ < auVar12._8_2_);
      auVar10._10_2_ = -(ushort)(auVar13._10_2_ < auVar12._10_2_);
      auVar10._12_2_ = -(ushort)(auVar13._12_2_ < auVar12._12_2_);
      auVar10._14_2_ = -(ushort)(auVar13._14_2_ < auVar12._14_2_);
      auVar11 = ~auVar10 & auVar11;
      if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar11[15] >> 7) << 0xf) != 0xffff) goto LAB_00414e70;
      uVar3 = uVar9 + 8;
      param_2 = param_2[1];
      lVar5 = lVar6 + 8;
      auVar12 = packsswb(auVar12,auVar12);
      *(longlong *)(unaff_RDI + uVar4) = auVar12._0_8_;
      uVar4 = uVar4 + 8;
    } while (uVar3 < unaff_RSI);
    uVar2 = *(ushort *)(pauVar8[1] + lVar6 * 2);
    lVar1 = lVar6 + 9;
    uVar4 = uVar9;
  } while( true );
}



void FUN_00415200(ulonglong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 local_38 [7];
  undefined4 uStack_1c;
  undefined local_18 [16];
  
  if (0x1f < param_1) {
    param_1 = 0x20;
  }
  local_18 = (undefined  [16])0x0;
  local_38[0] = *param_2;
  local_38[1] = param_2[1];
  local_38[2] = param_2[2];
  local_38[3] = param_2[3];
  local_38[4] = *unaff_RSI;
  local_38[5] = unaff_RSI[1];
  local_38[6] = unaff_RSI[2];
  uStack_1c = unaff_RSI[3];
  uVar1 = *(undefined4 *)((longlong)local_38 + param_1 + 4);
  uVar2 = *(undefined4 *)((longlong)local_38 + param_1 + 8);
  uVar3 = *(undefined4 *)((longlong)local_38 + param_1 + 0xc);
  *unaff_RDI = *(undefined4 *)((longlong)local_38 + param_1);
  unaff_RDI[1] = uVar1;
  unaff_RDI[2] = uVar2;
  unaff_RDI[3] = uVar3;
  return;
}



void FUN_00415240(undefined8 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  byte *unaff_RSI;
  undefined2 *unaff_RDI;
  
  iVar1 = (int)param_2[1] * (uint)unaff_RSI[1] + (uint)*unaff_RSI * (int)*param_2;
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  *unaff_RDI = (short)iVar2;
  iVar1 = (int)param_2[3] * (uint)unaff_RSI[3] + (int)param_2[2] * (uint)unaff_RSI[2];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[1] = (short)iVar2;
  iVar1 = (int)param_2[5] * (uint)unaff_RSI[5] + (uint)unaff_RSI[4] * (int)param_2[4];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[2] = (short)iVar2;
  iVar1 = (int)param_2[7] * (uint)unaff_RSI[7] + (uint)unaff_RSI[6] * (int)param_2[6];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[3] = (short)iVar2;
  iVar1 = (int)param_2[9] * (uint)unaff_RSI[9] + (uint)unaff_RSI[8] * (int)param_2[8];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[4] = (short)iVar2;
  iVar1 = (int)param_2[0xb] * (uint)unaff_RSI[0xb] + (uint)unaff_RSI[10] * (int)param_2[10];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[5] = (short)iVar2;
  iVar1 = (int)param_2[0xd] * (uint)unaff_RSI[0xd] + (uint)unaff_RSI[0xc] * (int)param_2[0xc];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[6] = (short)iVar2;
  iVar1 = (uint)unaff_RSI[0xe] * (int)param_2[0xe] + (int)param_2[0xf] * (uint)unaff_RSI[0xf];
  iVar2 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar2 = -0x8000, -0x8001 < iVar1)) {
    iVar2 = iVar1;
  }
  unaff_RDI[7] = (short)iVar2;
  return;
}



ulonglong FUN_004153f4(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  
  lVar1 = 0x3f;
  if (unaff_RSI != 0) {
    for (; unaff_RSI >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (unaff_RSI != 0) {
    uVar2 = (ulonglong)((int)lVar1 + 0x40);
  }
  else {
    uVar2 = 0x3f;
    if (unaff_RDI != 0) {
      for (; unaff_RDI >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
  }
  return uVar2;
}



ulonglong FUN_00415409(void)

{
  ulonglong uVar1;
  byte unaff_DIL;
  
  if ((byte)(unaff_DIL - 7) < 0x56) {
                    // WARNING: Could not emulate address calculation at 0x0041541d
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(&DAT_0041c0c0 + (ulonglong)(byte)(unaff_DIL - 7) * 8))();
    return uVar1;
  }
  if (unaff_DIL - 0x20 < 0x5f) {
    return (ulonglong)unaff_DIL;
  }
  return (ulonglong)
         (((unaff_DIL & 7) << 0x18 | (unaff_DIL & 0x38) << 0xd) + (unaff_DIL & 0xffffffc0) * 4 +
         0x3030305c);
}



void FUN_004154c0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x004154d0
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_0041c500 + uVar1 * 8))();
  return;
}



void FUN_0041561f(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x20;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
                    // WARNING: Could not emulate address calculation at 0x00415639
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_0041c608 + uVar1 * 8))();
  return;
}



char * FUN_0041571a(void)

{
  uint uVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  bVar5 = (byte)unaff_EDI & 0xf;
  pcVar3 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) & 0xfffffffffffffff0);
  auVar7[0] = -(*pcVar3 == '\0');
  auVar7[1] = -(pcVar3[1] == '\0');
  auVar7[2] = -(pcVar3[2] == '\0');
  auVar7[3] = -(pcVar3[3] == '\0');
  auVar7[4] = -(pcVar3[4] == '\0');
  auVar7[5] = -(pcVar3[5] == '\0');
  auVar7[6] = -(pcVar3[6] == '\0');
  auVar7[7] = -(pcVar3[7] == '\0');
  auVar7[8] = -(pcVar3[8] == '\0');
  auVar7[9] = -(pcVar3[9] == '\0');
  auVar7[10] = -(pcVar3[10] == '\0');
  auVar7[11] = -(pcVar3[0xb] == '\0');
  auVar7[12] = -(pcVar3[0xc] == '\0');
  auVar7[13] = -(pcVar3[0xd] == '\0');
  auVar7[14] = -(pcVar3[0xe] == '\0');
  auVar7[15] = -(pcVar3[0xf] == '\0');
  uVar6 = (uint)((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar7[15] >> 7) << 0xf) >> bVar5) << bVar5;
  uVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar4 = pcVar3;
  if (uVar6 == 0) {
    do {
      pcVar3 = pcVar4 + 0x10;
      auVar8[0] = -(*pcVar3 == '\0');
      auVar8[1] = -(pcVar4[0x11] == '\0');
      auVar8[2] = -(pcVar4[0x12] == '\0');
      auVar8[3] = -(pcVar4[0x13] == '\0');
      auVar8[4] = -(pcVar4[0x14] == '\0');
      auVar8[5] = -(pcVar4[0x15] == '\0');
      auVar8[6] = -(pcVar4[0x16] == '\0');
      auVar8[7] = -(pcVar4[0x17] == '\0');
      auVar8[8] = -(pcVar4[0x18] == '\0');
      auVar8[9] = -(pcVar4[0x19] == '\0');
      auVar8[10] = -(pcVar4[0x1a] == '\0');
      auVar8[11] = -(pcVar4[0x1b] == '\0');
      auVar8[12] = -(pcVar4[0x1c] == '\0');
      auVar8[13] = -(pcVar4[0x1d] == '\0');
      auVar8[14] = -(pcVar4[0x1e] == '\0');
      auVar8[15] = -(pcVar4[0x1f] == '\0');
      uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[15] >> 7) << 0xf;
      uVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = pcVar3;
    } while (uVar2 == 0);
  }
  return pcVar3 + ((ulonglong)uVar1 - CONCAT44(unaff_0000003c,unaff_EDI));
}



ulonglong FUN_004157a4(void)

{
  uint uVar1;
  undefined (*pauVar2) [32];
  undefined (*pauVar3) [32];
  uint uVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R9;
  bool bVar5;
  undefined in_YMM0 [32];
  undefined in_YMM1 [32];
  undefined auVar6 [16];
  undefined auVar7 [32];
  undefined auVar8 [16];
  undefined auVar9 [32];
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  pauVar3 = (undefined (*) [32])(unaff_RDI + -1);
  do {
    pauVar2 = (undefined (*) [32])(*pauVar3 + 1);
    bVar5 = unaff_RSI == 0;
    unaff_RSI = unaff_RSI - 1;
    if (bVar5) {
      in_R9 = 0xffffffffffffffff;
      break;
    }
    if (((ulonglong)pauVar2 & 0x1f) == 0) {
      pauVar2 = (undefined (*) [32])(pauVar3[-1] + 1);
      if ((DAT_0041c03c & 0x20) == 0) {
        in_YMM0._0_16_ = ZEXT816(0);
        in_YMM1._0_16_ = ZEXT816(0);
        pauVar3 = pauVar2;
        do {
          pauVar2 = pauVar3[1];
          bVar5 = unaff_RSI < 0x20;
          unaff_RSI = unaff_RSI - 0x20;
          if (bVar5) goto LAB_00415812;
          auVar8[0] = -(pauVar3[1][0x10] == '\0');
          auVar8[1] = -(pauVar3[1][0x11] == '\0');
          auVar8[2] = -(pauVar3[1][0x12] == '\0');
          auVar8[3] = -(pauVar3[1][0x13] == '\0');
          auVar8[4] = -(pauVar3[1][0x14] == '\0');
          auVar8[5] = -(pauVar3[1][0x15] == '\0');
          auVar8[6] = -(pauVar3[1][0x16] == '\0');
          auVar8[7] = -(pauVar3[1][0x17] == '\0');
          auVar8[8] = -(pauVar3[1][0x18] == '\0');
          auVar8[9] = -(pauVar3[1][0x19] == '\0');
          auVar8[10] = -(pauVar3[1][0x1a] == '\0');
          auVar8[11] = -(pauVar3[1][0x1b] == '\0');
          auVar8[12] = -(pauVar3[1][0x1c] == '\0');
          auVar8[13] = -(pauVar3[1][0x1d] == '\0');
          auVar8[14] = -(pauVar3[1][0x1e] == '\0');
          auVar8[15] = -(pauVar3[1][0x1f] == '\0');
          auVar10[0] = -(pauVar3[1][0x10] == '\0');
          auVar10[1] = -(pauVar3[1][0x11] == '\0');
          auVar10[2] = -(pauVar3[1][0x12] == '\0');
          auVar10[3] = -(pauVar3[1][0x13] == '\0');
          auVar10[4] = -(pauVar3[1][0x14] == '\0');
          auVar10[5] = -(pauVar3[1][0x15] == '\0');
          auVar10[6] = -(pauVar3[1][0x16] == '\0');
          auVar10[7] = -(pauVar3[1][0x17] == '\0');
          auVar10[8] = -(pauVar3[1][0x18] == '\0');
          auVar10[9] = -(pauVar3[1][0x19] == '\0');
          auVar10[10] = -(pauVar3[1][0x1a] == '\0');
          auVar10[11] = -(pauVar3[1][0x1b] == '\0');
          auVar10[12] = -(pauVar3[1][0x1c] == '\0');
          auVar10[13] = -(pauVar3[1][0x1d] == '\0');
          auVar10[14] = -(pauVar3[1][0x1e] == '\0');
          auVar10[15] = -(pauVar3[1][0x1f] == '\0');
          auVar8 = auVar8 | auVar10;
          auVar6[0] = -((*pauVar2)[0] == '\0');
          auVar6[1] = -(pauVar3[1][1] == '\0');
          auVar6[2] = -(pauVar3[1][2] == '\0');
          auVar6[3] = -(pauVar3[1][3] == '\0');
          auVar6[4] = -(pauVar3[1][4] == '\0');
          auVar6[5] = -(pauVar3[1][5] == '\0');
          auVar6[6] = -(pauVar3[1][6] == '\0');
          auVar6[7] = -(pauVar3[1][7] == '\0');
          auVar6[8] = -(pauVar3[1][8] == '\0');
          auVar6[9] = -(pauVar3[1][9] == '\0');
          auVar6[10] = -(pauVar3[1][10] == '\0');
          auVar6[11] = -(pauVar3[1][0xb] == '\0');
          auVar6[12] = -(pauVar3[1][0xc] == '\0');
          auVar6[13] = -(pauVar3[1][0xd] == '\0');
          auVar6[14] = -(pauVar3[1][0xe] == '\0');
          auVar6[15] = -(pauVar3[1][0xf] == '\0');
          auVar11[0] = -((*pauVar2)[0] == '\0');
          auVar11[1] = -(pauVar3[1][1] == '\0');
          auVar11[2] = -(pauVar3[1][2] == '\0');
          auVar11[3] = -(pauVar3[1][3] == '\0');
          auVar11[4] = -(pauVar3[1][4] == '\0');
          auVar11[5] = -(pauVar3[1][5] == '\0');
          auVar11[6] = -(pauVar3[1][6] == '\0');
          auVar11[7] = -(pauVar3[1][7] == '\0');
          auVar11[8] = -(pauVar3[1][8] == '\0');
          auVar11[9] = -(pauVar3[1][9] == '\0');
          auVar11[10] = -(pauVar3[1][10] == '\0');
          auVar11[11] = -(pauVar3[1][0xb] == '\0');
          auVar11[12] = -(pauVar3[1][0xc] == '\0');
          auVar11[13] = -(pauVar3[1][0xd] == '\0');
          auVar11[14] = -(pauVar3[1][0xe] == '\0');
          auVar11[15] = -(pauVar3[1][0xf] == '\0');
          auVar6 = auVar6 | auVar11;
          uVar4 = CONCAT22((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar8[15] >> 7) << 0xf,
                           (ushort)(SUB161(auVar6 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar6[15] >> 7) << 0xf);
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pauVar3 = pauVar2;
        } while (uVar4 == 0);
      }
      else {
        in_YMM0 = vpbroadcastb_avx2(ZEXT416(0));
        in_YMM1 = vpbroadcastb_avx2(ZEXT116(0));
        do {
          pauVar2 = pauVar2[1];
          bVar5 = unaff_RSI < 0x20;
          unaff_RSI = unaff_RSI - 0x20;
LAB_00415812:
          if (bVar5) {
            unaff_RSI = unaff_RSI + 0x20;
            goto LAB_004157c3;
          }
          auVar9 = vpcmpeqb_avx2(*pauVar2,in_YMM0);
          auVar7 = vpcmpeqb_avx2(*pauVar2,in_YMM1);
          auVar7 = vpor_avx2(auVar7,auVar9);
          uVar4 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar7[31] >> 7) << 0x1f;
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
        } while (uVar4 == 0);
        in_YMM0 = ZEXT1632(in_YMM0._0_16_);
        in_YMM1 = ZEXT1632(in_YMM1._0_16_);
      }
      pauVar2 = (undefined (*) [32])(*pauVar2 + uVar1);
    }
LAB_004157c3:
    if ((*pauVar2)[0] == '\0') {
      return (longlong)pauVar2 - unaff_RDI;
    }
    pauVar3 = pauVar2;
  } while ((*pauVar2)[0] != '\0');
  return (longlong)pauVar2 - unaff_RDI & in_R9;
}



void FUN_004158b1(void)

{
  ulonglong uVar1;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  for (uVar1 = 0; ((uint)uVar1 < unaff_ESI && (*(short *)(unaff_RDI + uVar1 * 2) != 0));
      uVar1 = (ulonglong)((uint)uVar1 + 1)) {
  }
  return;
}



void FUN_004158c8(void)

{
  ulonglong uVar1;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  for (uVar1 = 0; ((uint)uVar1 < unaff_ESI && (*(int *)(unaff_RDI + uVar1 * 4) != 0));
      uVar1 = (ulonglong)((uint)uVar1 + 1)) {
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00416001(void)

{
  byte unaff_DIL;
  
  if (((byte)DAT_0041c718 & 4) != 0) {
                    // WARNING: Subroutine does not return
    ExitProcess((uint)unaff_DIL);
  }
  syscall();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined8 FUN_004162a0(void)

{
  undefined8 uVar1;
  
  if (((byte)DAT_0041c718 & 4) == 0) {
    uVar1 = FUN_00402b9f();
    return uVar1;
  }
  DAT_00448020 = FUN_00405f8e();
  return 0xffffffffffffffff;
}



void FUN_00416315(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Could not recover jumptable at 0x00416338. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_RDI + 0x38))();
  return;
}


