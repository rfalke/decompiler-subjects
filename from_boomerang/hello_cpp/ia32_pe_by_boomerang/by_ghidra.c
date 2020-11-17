typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
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

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void * LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
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

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR * LPSTR;

typedef BYTE * LPBYTE;

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

typedef struct _OVERLAPPED * LPOVERLAPPED;

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

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef LONG * PLONG;

typedef CHAR * LPCH;

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

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef DWORD LCID;

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

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[96];
};

typedef DWORD * LPDWORD;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ {
    int unused;
};

typedef struct HACCEL__ * HACCEL;

typedef DWORD * PDWORD;

typedef HINSTANCE HMODULE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (* FARPROC)(void);

typedef WORD * LPWORD;

typedef WORD ATOM;

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
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_MEM_NOT_CACHED=67108864
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

typedef BOOL (* PHANDLER_ROUTINE)(DWORD);

typedef char * va_list;


// WARNING! conflicting data type names: /Demangler/wchar_t - /wchar_t

typedef struct ImageInfo ImageInfo, *PImageInfo;

struct ImageInfo { // PlaceHolder Structure
};

typedef int (* _onexit_t)(void);

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t * _W_decimal_point;
    wchar_t * _W_thousands_sep;
    wchar_t * _W_int_curr_symbol;
    wchar_t * _W_currency_symbol;
    wchar_t * _W_mon_decimal_point;
    wchar_t * _W_mon_thousands_sep;
    wchar_t * _W_positive_sign;
    wchar_t * _W_negative_sign;
};

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    ushort * ctype1;
    ushort * pctype;
    uchar * pclmap;
    uchar * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
};

struct __lc_time_data {
    char * wday_abbr[7];
    char * wday[7];
    char * month_abbr[12];
    char * month[12];
    char * ampm[2];
    char * ww_sdatefmt;
    char * ww_ldatefmt;
    char * ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t * _W_wday_abbr[7];
    wchar_t * _W_wday[7];
    wchar_t * _W_month_abbr[12];
    wchar_t * _W_month[12];
    wchar_t * _W_ampm[2];
    wchar_t * _W_ww_sdatefmt;
    wchar_t * _W_ww_ldatefmt;
    wchar_t * _W_ww_timefmt;
    wchar_t * _W_ww_locale_name;
};

typedef uint size_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int intptr_t;

typedef struct localeinfo_struct * _locale_t;




int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE FStack48;
  FILE *pFStack16;
  int iStack12;
  undefined4 *puStack8;
  
  pFStack16 = &FStack48;
  puStack8 = (undefined4 *)&stack0x00000010;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\sprintf.c",0x5d,
                           (char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Dest == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\sprintf.c",0x5e,
                           (char *)0x0,"string != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  pFStack16->_cnt = _Count;
  pFStack16->_flag = 0x42;
  pFStack16->_base = _Dest;
  pFStack16->_ptr = _Dest;
  iStack12 = __output(pFStack16,(byte *)_Format,puStack8);
  if (_Dest != (char *)0x0) {
    pFStack16->_cnt = pFStack16->_cnt + -1;
    if (pFStack16->_cnt < 0) {
      __flsbuf(0,pFStack16);
    }
    else {
      *pFStack16->_ptr = '\0';
      pFStack16->_ptr = pFStack16->_ptr + 1;
    }
  }
  return iStack12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  LPCH pCVar1;
  LPWCH pWVar2;
  DWORD DVar3;
  int *cbMultiByte;
  LPCH _Src;
  int iVar4;
  int **ppiStack28;
  char *pcStack20;
  LPWCH pWStack16;
  LPWCH pWStack12;
  
  pWStack12 = (LPWCH)0x0;
  if (_DAT_004297d4 == 0) {
    pWStack12 = GetEnvironmentStringsW();
    if (pWStack12 == (LPWCH)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        _DAT_004297d4 = 2;
      }
    }
    else {
      _DAT_004297d4 = 1;
    }
  }
  if (_DAT_004297d4 == 1) {
    if ((pWStack12 == (LPWCH)0x0) && (pWStack12 = GetEnvironmentStringsW(), pWStack12 == (LPWCH)0x0)
       ) {
      ppiStack28 = (int **)0x0;
    }
    else {
      pWStack16 = pWStack12;
      pWVar2 = pWStack16;
      while (pWStack16 = pWVar2, *pWStack16 != L'\0') {
        pWVar2 = pWStack16 + 1;
        if (pWStack16[1] == L'\0') {
          pWVar2 = pWStack16 + 2;
        }
      }
      iVar4 = ((int)((int)pWStack16 - (int)pWStack12) >> 1) + 1;
      cbMultiByte = (int *)WideCharToMultiByte(0,0,pWStack12,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,
                                               (LPBOOL)0x0);
      if ((cbMultiByte == (int *)0x0) ||
         (ppiStack28 = __malloc_dbg(cbMultiByte,(int *)0x2,(int *)"a_env.c",(int *)0x61),
         ppiStack28 == (int **)0x0)) {
        FreeEnvironmentStringsW(pWStack12);
        ppiStack28 = (int **)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,pWStack12,iVar4,(LPSTR)ppiStack28,(int)cbMultiByte,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar4 == 0) {
          __free_dbg(ppiStack28,(uint)ppiStack28,(int *)0x2);
          ppiStack28 = (int **)0x0;
        }
        FreeEnvironmentStringsW(pWStack12);
      }
    }
  }
  else {
    if ((_DAT_004297d4 == 2) || (_DAT_004297d4 == 0)) {
      _Src = GetEnvironmentStrings();
      pCVar1 = _Src;
      if (_Src == (LPCH)0x0) {
        ppiStack28 = (int **)0x0;
      }
      else {
        while (pcStack20 = pCVar1, *pcStack20 != '\0') {
          pCVar1 = pcStack20 + 1;
          if (pcStack20[1] == '\0') {
            pCVar1 = pcStack20 + 2;
          }
        }
        ppiStack28 = __malloc_dbg((int *)(pcStack20 + (1 - (int)_Src)),(int *)0x2,(int *)"a_env.c",
                                  (int *)0x8c);
        if (ppiStack28 == (int **)0x0) {
          FreeEnvironmentStringsA(_Src);
          ppiStack28 = (int **)0x0;
        }
        else {
          FID_conflict__memcpy(ppiStack28,_Src,(size_t)(pcStack20 + (1 - (int)_Src)));
          FreeEnvironmentStringsA(_Src);
        }
      }
    }
    else {
      ppiStack28 = (int **)0x0;
    }
  }
  return ppiStack28;
}



int __cdecl __alloc_osfhnd(void)

{
  int **ppiStack16;
  int iStack12;
  int iStack8;
  
  iStack12 = -1;
  iStack8 = 0;
  do {
    if (0x3f < iStack8) {
      return iStack12;
    }
    if ((&DAT_0042afe0)[iStack8] == 0) {
      ppiStack16 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"osfinfo.c",(int *)0x85);
      if (ppiStack16 == (int **)0x0) {
        return iStack12;
      }
      (&DAT_0042afe0)[iStack8] = ppiStack16;
      DAT_0042af94 = DAT_0042af94 + 0x20;
      while (ppiStack16 < (int **)((&DAT_0042afe0)[iStack8] + 0x100)) {
        *(undefined *)(ppiStack16 + 1) = 0;
        *ppiStack16 = (int *)0xffffffff;
        *(undefined *)((int)ppiStack16 + 5) = 10;
        ppiStack16 = ppiStack16 + 2;
      }
      return iStack8 << 5;
    }
    ppiStack16 = (int **)(&DAT_0042afe0)[iStack8];
    while (ppiStack16 < (undefined4 *)((&DAT_0042afe0)[iStack8] + 0x100)) {
      if ((*(byte *)(ppiStack16 + 1) & 1) == 0) {
        *ppiStack16 = (int *)0xffffffff;
        iStack12 = iStack8 * 0x20 + ((int)((int)ppiStack16 - (&DAT_0042afe0)[iStack8]) >> 3);
        break;
      }
      ppiStack16 = ppiStack16 + 2;
    }
    if (iStack12 != -1) {
      return iStack12;
    }
    iStack8 = iStack8 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __setmbcp(int _CodePage)

{
  UINT CodePage;
  BOOL BVar1;
  int iVar2;
  byte *pbStack48;
  _cpinfo _Stack44;
  int iStack24;
  uint uStack20;
  byte *pbStack16;
  uint uStack12;
  uint uStack8;
  
  iStack24 = DAT_00428eb0;
  CodePage = _getSystemCP(_CodePage);
  if (CodePage != DAT_0042ae44) {
    if (CodePage == 0) {
      _setSBCS();
      _setSBUpLow();
    }
    else {
      uStack12 = 0;
      while (uStack12 < 5) {
        if (*(UINT *)(&DAT_00428d80 + uStack12 * 0x30) == CodePage) {
          uStack20 = 0;
          while (uStack20 < 0x101) {
            (&DAT_0042ad40)[uStack20] = 0;
            uStack20 = uStack20 + 1;
          }
          uStack8 = 0;
          while (uStack8 < 4) {
            pbStack16 = &DAT_00428d90 + uStack8 * 8 + uStack12 * 0x30;
            while ((*pbStack16 != 0 && (pbStack16[1] != 0))) {
              uStack20 = (uint)*pbStack16;
              while (uStack20 <= pbStack16[1]) {
                (&DAT_0042ad41)[uStack20] = (&DAT_0042ad41)[uStack20] | (&DAT_00428d78)[uStack8];
                uStack20 = uStack20 + 1;
              }
              pbStack16 = pbStack16 + 2;
            }
            uStack8 = uStack8 + 1;
          }
          _DAT_0042ad2c = 1;
          DAT_0042ae44 = CodePage;
          DAT_0042acb4 = _CPtoLCID(CodePage);
          uStack8 = 0;
          while (uStack8 < 6) {
            *(undefined2 *)(&DAT_0042ae50 + uStack8 * 2) =
                 *(undefined2 *)(&DAT_00428d84 + uStack8 * 2 + uStack12 * 0x30);
            uStack8 = uStack8 + 1;
          }
          _setSBUpLow();
          goto LAB_00419980;
        }
        uStack12 = uStack12 + 1;
      }
      BVar1 = GetCPInfo(CodePage,(LPCPINFO)&_Stack44);
      if (BVar1 == 1) {
        uStack20 = 0;
        while (uStack20 < 0x101) {
          (&DAT_0042ad40)[uStack20] = 0;
          uStack20 = uStack20 + 1;
        }
        DAT_0042acb4 = 0;
        if (_Stack44.MaxCharSize < 2) {
          _DAT_0042ad2c = 0;
          DAT_0042ae44 = CodePage;
        }
        else {
          pbStack48 = _Stack44.LeadByte;
          DAT_0042ae44 = CodePage;
          while ((*pbStack48 != 0 && (pbStack48[1] != 0))) {
            uStack20 = (uint)*pbStack48;
            while (uStack20 <= pbStack48[1]) {
              (&DAT_0042ad41)[uStack20] = (&DAT_0042ad41)[uStack20] | 4;
              uStack20 = uStack20 + 1;
            }
            pbStack48 = pbStack48 + 2;
          }
          uStack20 = 1;
          while (uStack20 < 0xff) {
            (&DAT_0042ad41)[uStack20] = (&DAT_0042ad41)[uStack20] | 8;
            uStack20 = uStack20 + 1;
          }
          DAT_0042acb4 = _CPtoLCID(DAT_0042ae44);
          _DAT_0042ad2c = 1;
        }
        uStack8 = 0;
        while (uStack8 < 6) {
          *(undefined2 *)(&DAT_0042ae50 + uStack8 * 2) = 0;
          uStack8 = uStack8 + 1;
        }
        _setSBUpLow();
      }
      else {
        if (_DAT_00429864 != 0) {
          _setSBCS();
          _setSBUpLow();
        }
      }
    }
  }
LAB_00419980:
  iVar2 = thunk_FUN_0041d0f0(iStack24);
  return iVar2;
}



undefined4 __cdecl __set_security_error_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042992c;
  DAT_0042992c = param_1;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  
  if ((((uint)param_1 < DAT_0042af94) &&
      (iVar1 = param_1 >> 5,
      (*(byte *)((&DAT_0042afe0)[iVar1] + 4 + (param_1 & 0x1fU) * 8) & 1) != 0)) &&
     (*(int *)((&DAT_0042afe0)[iVar1] + (param_1 & 0x1fU) * 8) != -1)) {
    if (_DAT_00428b44 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else {
        if (param_1 == 1) {
          SetStdHandle(0xfffffff5,(HANDLE)0x0);
        }
        else {
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,(HANDLE)0x0);
          }
        }
      }
    }
    *(undefined4 *)((&DAT_0042afe0)[iVar1] + (param_1 & 0x1fU) * 8) = 0xffffffff;
    iVar1 = 0;
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __setargv(void)

{
  int iVar1;
  byte *pbStack24;
  int iStack20;
  byte *pbStack16;
  int iStack12;
  int **ppiStack8;
  
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  DAT_0042979c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_00429698,0x104);
  DAT_00429668 = &DAT_00429698;
  if ((DAT_0042b100 == (byte *)0x0) || (*DAT_0042b100 == 0)) {
    pbStack24 = &DAT_00429698;
  }
  else {
    pbStack24 = DAT_0042b100;
  }
  pbStack16 = pbStack24;
  _parse_cmdline(pbStack24,(byte **)0x0,(byte *)0x0,&iStack12,&iStack20);
  ppiStack8 = __malloc_dbg((int *)(iStack20 + iStack12 * 4),(int *)0x2,(int *)"stdargv.c",
                           (int *)0x82);
  if (ppiStack8 == (int **)0x0) {
    iVar1 = -1;
  }
  else {
    _parse_cmdline(pbStack16,(byte **)ppiStack8,(byte *)(ppiStack8 + iStack12),&iStack12,&iStack20);
    _DAT_0042964c = iStack12 + -1;
    _DAT_00429650 = ppiStack8;
    iVar1 = 0;
  }
  return iVar1;
}



void __CrtDbgBreak(void)

{
  DebugBreak();
  return;
}



int ** __cdecl __malloc_dbg(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int **ppiVar1;
  
  ppiVar1 = __nh_malloc_dbg(param_1,DAT_004298f4,param_2,param_3,param_4);
  return ppiVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl __heap_alloc_base(uint param_1)

{
  int *piVar1;
  
  if (((_DAT_0042af90 != 3) || (DAT_0042aca4 < param_1)) ||
     (piVar1 = ___sbh_alloc_block(param_1), piVar1 == (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    if (_DAT_0042af90 != 1) {
      param_1 = param_1 + 0xf & 0xfffffff0;
    }
    piVar1 = (int *)HeapAlloc(DAT_0042af80,0,param_1);
  }
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __heap_init(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int in_stack_00000004;
  
  DAT_0042af80 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_0042af80 == (HANDLE)0x0) {
    iVar2 = 0;
  }
  else {
    _DAT_0042af90 = ___heap_select();
    if ((_DAT_0042af90 == 3) && (bVar1 = ___sbh_heap_init(0x3f8), CONCAT31(extraout_var,bVar1) == 0)
       ) {
      HeapDestroy(DAT_0042af80);
      return 0;
    }
    iVar2 = 1;
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  bool bVar1;
  HMODULE hModule;
  int iVar2;
  undefined auStack28 [4];
  int iStack24;
  int iStack20;
  undefined auStack16 [8];
  uint uStack8;
  
  iStack24 = 0;
  bVar1 = false;
  if (_DAT_004298c4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (_DAT_004298c4 = GetProcAddress(hModule,"MessageBoxA"), _DAT_004298c4 == (FARPROC)0x0)) {
      return 0;
    }
    _DAT_004298c8 = GetProcAddress(hModule,"GetActiveWindow");
    _DAT_004298cc = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_00429638 == 2) &&
       (_DAT_004298d4 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       _DAT_004298d4 != (FARPROC)0x0)) {
      _DAT_004298d0 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((_DAT_004298d0 != (FARPROC)0x0) &&
     (((iStack20 = (*_DAT_004298d0)(), iStack20 == 0 ||
       (iVar2 = (*_DAT_004298d4)(iStack20,1,auStack16,0xc,auStack28), iVar2 == 0)) ||
      ((uStack8 & 1) == 0)))) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_00429644 < 4) {
      _UType = _UType | 0x40000;
    }
    else {
      _UType = _UType | 0x200000;
    }
  }
  else {
    if (_DAT_004298c8 != (FARPROC)0x0) {
      iStack24 = (*_DAT_004298c8)();
    }
    if ((iStack24 != 0) && (_DAT_004298cc != (FARPROC)0x0)) {
      iStack24 = (*_DAT_004298cc)(iStack24);
    }
  }
  iVar2 = (*_DAT_004298c4)(iStack24,_LpText,_LpCaption,_UType);
  return iVar2;
}



void __fastcall thunk_FUN_0041d0f0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  if (param_1 == DAT_00428eb0) {
    return;
  }
  puStack12 = &DAT_00426a30;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  puStack28 = &stack0xffffffd8;
  uStack8 = 0;
  ___security_error_handler(1,0);
  uStack8 = 0xffffffff;
                    // WARNING: Subroutine does not return
  ExitProcess(3);
}



undefined4 __CrtCheckMemory(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack16;
  undefined4 *puStack8;
  
  if ((DAT_00428d4c & 1) == 0) {
    uStack16 = 1;
  }
  else {
    iVar3 = __heapchk();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      uStack16 = 1;
      puStack8 = DAT_00429850;
      while (puStack8 != (undefined4 *)0x0) {
        bVar2 = true;
        if (((((puStack8[5] & 0xffff) == 4) || (puStack8[5] == 1)) || ((puStack8[5] & 0xffff) == 2))
           || (puStack8[5] == 3)) {
          pcVar5 = (&PTR_DAT_00428d5c)[puStack8[5] & 0xffff];
        }
        else {
          pcVar5 = "DAMAGED";
        }
        iVar3 = _CheckBytes((char *)(puStack8 + 7),DAT_00428d58,4);
        if (iVar3 == 0) {
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "DAMAGE: before %hs block (#%d) at 0x%p.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)(pcVar5);
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = _CheckBytes((char *)((int)puStack8 + puStack8[4] + 0x20),DAT_00428d58,4);
        if (iVar3 == 0) {
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "DAMAGE: after %hs block (#%d) at 0x%p.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((puStack8[5] == 0) &&
           (iVar3 = _CheckBytes((char *)(puStack8 + 8),DAT_00428d59,puStack8[4]), iVar3 == 0)) {
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "DAMAGE: on top of Free block at 0x%p.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((puStack8[2] != 0) &&
             (iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                     "%hs allocated at file %hs(%d).\n"), iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "%hs located at 0x%p is %Iu bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          uStack16 = 0;
        }
        puStack8 = (undefined4 *)*puStack8;
      }
    }
    else {
      switch(iVar3) {
      default:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -6:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      uStack16 = 0;
    }
  }
  return uStack16;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 ___initmbctable(void)

{
  if (_DAT_0042b0f8 == 0) {
    __setmbcp(-3);
    _DAT_0042b0f8 = 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  
  if (((uint)param_1 < DAT_0042af94) &&
     (*(int *)((&DAT_0042afe0)[param_1 >> 5] + (param_1 & 0x1fU) * 8) == -1)) {
    if (_DAT_00428b44 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else {
        if (param_1 == 1) {
          SetStdHandle(0xfffffff5,(HANDLE)param_2);
        }
        else {
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,(HANDLE)param_2);
          }
        }
      }
    }
    *(intptr_t *)((&DAT_0042afe0)[param_1 >> 5] + (param_1 & 0x1fU) * 8) = param_2;
    iVar1 = 0;
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



int * __cdecl __nh_malloc_base(uint param_1,int param_2)

{
  int iVar1;
  int *piStack8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        piStack8 = __heap_alloc_base(param_1);
      }
      else {
        piStack8 = (int *)0x0;
      }
      if (piStack8 != (int *)0x0) {
        return piStack8;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar1 = __callnewh(param_1);
    } while (iVar1 != 0);
  }
  return (int *)0x0;
}



int __cdecl ___sbh_alloc_new_group(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID lpAddress;
  int iStack48;
  int iStack44;
  int iStack24;
  LPVOID pvStack20;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iStack48 = *(int *)(param_1 + 8);
  iStack44 = 0;
  while (-1 < iStack48) {
    iStack48 = iStack48 << 1;
    iStack44 = iStack44 + 1;
  }
  iVar2 = iVar4 + 0x144 + iStack44 * 0x204;
  iStack24 = 0;
  while (iStack24 < 0x3f) {
    iVar1 = iVar2 + iStack24 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    iStack24 = iStack24 + 1;
  }
  lpAddress = (LPVOID)(iStack44 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iStack44 = -1;
  }
  else {
    pvStack20 = lpAddress;
    while (pvStack20 <= (LPVOID)((int)lpAddress + 0x7000)) {
      *(undefined4 *)((int)pvStack20 + 8) = 0xffffffff;
      *(undefined4 *)((int)pvStack20 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)pvStack20 + 0xc) = 0xff0;
      *(int *)((int)pvStack20 + 0x10) = (int)pvStack20 + 0x100c;
      *(int *)((int)pvStack20 + 0x14) = (int)pvStack20 + -0xff4;
      *(undefined4 *)((int)pvStack20 + 0xff8) = 0xff0;
      pvStack20 = (LPVOID)((int)pvStack20 + 0x1000);
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + iStack44 * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + iStack44 * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = ~(0x80000000U >> ((byte)iStack44 & 0x1f)) & *(uint *)(param_1 + 8);
  }
  return iStack44;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LPVOID __cdecl __expand_base(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  LPVOID pvStack8;
  
  if (param_2 < 0xffffffe1) {
    if (_DAT_0042af90 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)param_1);
      if (((puVar1 != (uint *)0x0) && (pvStack8 = (LPVOID)0x0, param_2 <= DAT_0042aca4)) &&
         (iVar2 = ___sbh_resize_block(puVar1,(int)param_1,param_2), iVar2 != 0)) {
        pvStack8 = param_1;
      }
      if (puVar1 == (uint *)0x0) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        pvStack8 = HeapReAlloc(DAT_0042af80,0x10,param_1,param_2 + 0xf & 0xfffffff0);
      }
    }
    else {
      if (param_2 == 0) {
        param_2 = 1;
      }
      pvStack8 = HeapReAlloc(DAT_0042af80,0x10,param_1,param_2);
    }
  }
  else {
    pvStack8 = (LPVOID)0x0;
  }
  return pvStack8;
}



uint __cdecl __chvalidator(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (0x100 < param_1 + 1U) {
    iVar2 = __CrtDbgReport(2,"isctype.c",0x38,(char *)0x0,"(unsigned)(c + 1) <= 256");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ushort *)(PTR_DAT_00428ed4 + param_1 * 2) & param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __dosmaperr(ulong param_1)

{
  uint uStack8;
  
  uStack8 = 0;
  while( true ) {
    if (0x2c < uStack8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          _DAT_0042962c = 0x16;
        }
        else {
          _DAT_0042962c = 8;
        }
      }
      else {
        _DAT_0042962c = 0xd;
      }
      _DAT_00429630 = param_1;
      return;
    }
    if (param_1 == *(ulong *)(&DAT_00429220 + uStack8 * 8)) break;
    uStack8 = uStack8 + 1;
  }
  _DAT_0042962c = *(undefined4 *)(&DAT_00429224 + uStack8 * 8);
  _DAT_00429630 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __ismbcspace(uint _Ch)

{
  BOOL BVar1;
  uint uStack16;
  undefined uStack12;
  undefined uStack11;
  ushort uStack8;
  short sStack6;
  
  if (_Ch < 0x100) {
    if (DAT_00428ec4 < 2) {
      uStack16 = __chvalidator(_Ch,8);
    }
    else {
      uStack16 = __isctype(_Ch,8);
    }
  }
  else {
    uStack8 = 0;
    sStack6 = 0;
    uStack12 = (undefined)(_Ch >> 8);
    uStack11 = (undefined)_Ch;
    if (_DAT_0042ad2c == 0) {
      uStack16 = 0;
    }
    else {
      BVar1 = ___crtGetStringTypeA
                        ((_locale_t)0x1,(DWORD)&uStack12,(LPCSTR)0x2,(int)&uStack8,DAT_0042ae44,
                         DAT_0042acb4,1);
      if (BVar1 == 0) {
        uStack16 = 0;
      }
      else {
        if ((sStack6 == 0) && ((uStack8 & 8) != 0)) {
          uStack16 = 1;
        }
        else {
          uStack16 = 0;
        }
      }
    }
  }
  return uStack16;
}



int * __cdecl __malloc_base(uint param_1)

{
  int *piVar1;
  
  piVar1 = __nh_malloc_base(param_1,DAT_004298f4);
  return piVar1;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack

void __chkstk(undefined1 param_1)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &param_1;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return (ulonglong)param_1 * (ulonglong)param_3 & 0xffffffff |
         (ulonglong)
         ((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
         param_2 * param_3 + param_1 * param_4) << 0x20;
}



int __cdecl _fclose(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  int iStack12;
  
  iStack12 = -1;
  if ((_File->_flag & 0x40U) == 0) {
    if (_File == (FILE *)0x0) {
      iVar2 = __CrtDbgReport(2,"fclose.c",0x71,(char *)0x0,"str != NULL");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
    if ((_File->_flag & 0x83U) != 0) {
      iStack12 = __flush(_File);
      __freebuf(_File);
      iVar2 = __close(_File->_file);
      if (iVar2 < 0) {
        iStack12 = -1;
      }
      else {
        if (_File->_tmpfname != (char *)0x0) {
          __free_dbg(_File->_tmpfname,(uint)_File->_tmpfname,(int *)0x2);
          _File->_tmpfname = (char *)0x0;
        }
      }
    }
    _File->_flag = 0;
  }
  else {
    _File->_flag = 0;
    iStack12 = -1;
  }
  return iStack12;
}



uint __cdecl __CrtSetDbgFlag(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00428d4c;
  if (param_1 != 0xffffffff) {
    if ((param_1 & 4) == 0) {
      DAT_00429858 = (int)param_1 >> 0x10 & 0xffff;
    }
    else {
      DAT_00429858 = 1;
    }
    DAT_00429848 = 0;
    DAT_00428d4c = param_1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  char *pcStack1064;
  DWORD DStack1060;
  DWORD DStack1056;
  DWORD DStack1052;
  char *pcStack1048;
  char acStack1044 [1036];
  int iStack8;
  
  iStack8 = DAT_00428eb0;
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar3 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    DStack1052 = 0;
    if (_MaxCharCount != 0) {
      if ((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x20) != 0) {
        __lseeki64(_FileHandle,0,2);
      }
      if (((int)*(char *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x80U) == 0) {
        BVar2 = WriteFile(*(HANDLE *)((&DAT_0042afe0)[iVar3] + (_FileHandle & 0x1fU) * 8),_Buf,
                          _MaxCharCount,&DStack1060,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          DStack1056 = GetLastError();
        }
        else {
          DStack1056 = 0;
          DStack1052 = DStack1060;
        }
      }
      else {
        pcStack1048 = (char *)_Buf;
        DStack1056 = 0;
        do {
          if (_MaxCharCount <= pcStack1048 + -(int)_Buf) break;
          pcStack1064 = acStack1044;
          while (((int)(pcStack1064 + -(int)acStack1044) < 0x400 &&
                 (pcStack1048 + -(int)_Buf < _MaxCharCount))) {
            cVar1 = *pcStack1048;
            pcStack1048 = pcStack1048 + 1;
            if (cVar1 == '\n') {
              *pcStack1064 = '\r';
              pcStack1064 = pcStack1064 + 1;
            }
            *pcStack1064 = cVar1;
            pcStack1064 = pcStack1064 + 1;
          }
          BVar2 = WriteFile(*(HANDLE *)((&DAT_0042afe0)[iVar3] + (_FileHandle & 0x1fU) * 8),
                            acStack1044,(DWORD)(pcStack1064 + -(int)acStack1044),&DStack1060,
                            (LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            DStack1056 = GetLastError();
            break;
          }
          DStack1052 = DStack1052 + DStack1060;
        } while ((int)(pcStack1064 + -(int)acStack1044) <= (int)DStack1060);
      }
      if (DStack1052 == 0) {
        if (DStack1056 == 0) {
          if (((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40) == 0) ||
             (*_Buf != '\x1a'
                    // WARNING: Load size is inaccurate)) {
            _DAT_0042962c = 0x1c;
            _DAT_00429630 = 0;
          }
        }
        else {
          if (DStack1056 == 5) {
            _DAT_0042962c = 9;
            _DAT_00429630 = DStack1056;
          }
          else {
            __dosmaperr(DStack1056);
          }
        }
      }
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
  }
  iVar3 = thunk_FUN_0041d0f0(iStack8);
  return iVar3;
}



void __cdecl __cexit(void)

{
  _doexit(0,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  DWORD DVar1;
  HANDLE hFile;
  int iVar2;
  DWORD DStack16;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar2 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) {
      _DAT_0042962c = 9;
      DVar1 = 0xffffffff;
    }
    else {
      DVar1 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
      if (DVar1 == 0xffffffff) {
        DStack16 = GetLastError();
      }
      else {
        DStack16 = 0;
      }
      if (DStack16 == 0) {
        *(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) =
             *(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) & 0xfd;
      }
      else {
        __dosmaperr(DStack16);
        DVar1 = 0xffffffff;
      }
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    DVar1 = 0xffffffff;
  }
  return DVar1;
}



int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = (uint *)_Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined *)puVar4 = (undefined)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __cdecl
__aligned_offset_realloc_dbg
          (void *param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6)

{
  code *pcVar1;
  void *pvVar2;
  void **this;
  int iVar3;
  size_t sVar4;
  int **ppiVar5;
  uint uVar6;
  uint uStack36;
  uint uStack32;
  
  if (param_1 == (void *)0x0) {
    pvVar2 = (void *)__aligned_offset_malloc_dbg(param_2,param_3,param_4,param_5,param_6);
  }
  else {
    if (param_2 == 0) {
      __aligned_free_dbg((uint)param_1);
      pvVar2 = (void *)0x0;
    }
    else {
      this = (void **)(((uint)param_1 & 0xfffffffc) - 8);
      iVar3 = _CheckBytes((char *)((int)param_1 + -4),DAT_00428d58,4);
      if (iVar3 == 0) {
        iVar3 = _CheckBytes((char *)(((uint)param_1 & 0xfffffffc) - 4),DAT_00428d5b,4);
        if ((iVar3 == 0) &&
           (iVar3 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                   "Damage before 0x%p which was allocated by aligned routine\n"),
           iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          pvVar2 = (void *)(*pcVar1)();
          return pvVar2;
        }
        if ((param_3 - 1 & param_3) == 0) {
          if ((param_4 < param_2) || (param_4 == 0)) {
            sVar4 = __msize(*this);
            uStack36 = sVar4 - (int)((int)param_1 - (int)*this);
            if (param_3 < 5) {
              uStack32 = 4;
            }
            else {
              uStack32 = param_3;
            }
            uStack32 = uStack32 - 1;
            uVar6 = -param_4 & 3;
            ppiVar5 = __malloc_dbg((int *)(uVar6 + param_2 + 8 + uStack32),(int *)0x1,param_5,
                                   param_6);
            if (ppiVar5 == (int **)0x0) {
              pvVar2 = (void *)0x0;
            }
            else {
              pvVar2 = (void *)(((int)ppiVar5 + param_4 + uVar6 + uStack32 + 8 & ~uStack32) -
                               param_4);
              _memset((void *)((int)(void *)((int)pvVar2 - uVar6) + -4),(uint)DAT_00428d5b,4);
              *(int ***)((int)(void *)((int)pvVar2 - uVar6) + -8) = ppiVar5;
              if (param_2 < uStack36) {
                uStack36 = param_2;
              }
              FID_conflict__memcpy(pvVar2,param_1,uStack36);
              __free_dbg(this,(uint)*this,(int *)0x1);
            }
          }
          else {
            iVar3 = __CrtDbgReport(2,"dbgheap.c",0xa28,(char *)0x0,
                                   "(\"offset must be within size\", 0)");
            if (iVar3 == 1) {
              pcVar1 = (code *)swi(3);
              pvVar2 = (void *)(*pcVar1)();
              return pvVar2;
            }
            _DAT_0042962c = 0x16;
            pvVar2 = (void *)0x0;
          }
        }
        else {
          iVar3 = __CrtDbgReport(2,"dbgheap.c",0xa22,(char *)0x0,
                                 "(\"alignment must be a power of 2\",0)");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            pvVar2 = (void *)(*pcVar1)();
            return pvVar2;
          }
          _DAT_0042962c = 0x16;
          pvVar2 = (void *)0x0;
        }
      }
      else {
        iVar3 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                                              
                               "The block at 0x%p was not allocated by _aligned routines, use realloc()"
                              );
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          pvVar2 = (void *)(*pcVar1)();
          return pvVar2;
        }
        pvVar2 = (void *)0x0;
      }
    }
  }
  return pvVar2;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __CrtDbgReport(int param_1,undefined1 *param_2,int param_3,char *param_4,char *param_5)

{
  LONG LVar1;
  size_t nNumberOfBytesToWrite;
  int iVar2;
  undefined4 *puVar3;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  char *pcStack12348;
  char *pcStack12344;
  char acStack12340 [20];
  DWORD DStack12320;
  int iStack12316;
  HMODULE pHStack12312;
  undefined uStack12308;
  undefined4 uStack12307;
  undefined uStack8212;
  undefined4 uStack8211;
  undefined uStack4116;
  undefined4 uStack4115;
  int iStack16;
  undefined4 uStack12;
  va_list pcStack8;
  
  iStack16 = DAT_00428eb0;
  uStack8212 = 0;
  iVar2 = 0x3ff;
  puVar3 = &uStack8211;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  uStack4116 = '\0';
  iVar2 = 0x3ff;
  puVar3 = &uStack4115;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  uStack12308 = '\0';
  iVar2 = 0x3ff;
  puVar3 = &uStack12307;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  pcStack8 = &stack0x00000018;
  if ((-1 < param_1) && (param_1 < 3)) {
    if ((param_1 == 2) && (LVar1 = InterlockedIncrement((LONG *)&DAT_00428d18), 0 < LVar1)) {
      if ((_DAT_004297dc != (FARPROC)0x0) ||
         ((pHStack12312 = LoadLibraryA("user32.dll"), pHStack12312 != (HMODULE)0x0 &&
          (_DAT_004297dc = GetProcAddress(pHStack12312,"wsprintfA"), _DAT_004297dc != (FARPROC)0x0))
         )) {
        (*_DAT_004297dc)(&uStack4116,"Second Chance Assertion Failed: File %s, Line %d\n",param_2,
                         param_3);
        OutputDebugStringA(&uStack4116);
        InterlockedDecrement((LONG *)&DAT_00428d18);
        __CrtDbgBreak();
      }
    }
    else {
      if ((param_5 != (char *)0x0) &&
         (iVar2 = __vsnprintf(&uStack12308,0xfeb,param_5,pcStack8), iVar2 < 0)) {
        thunk_FUN_0041a040((uint *)&uStack12308,(uint *)"_CrtDbgReport: String too long or IO Error"
                          );
      }
      if (param_1 == 2) {
        if (param_5 == (char *)0x0) {
          pcStack12344 = "Assertion failed!";
        }
        else {
          pcStack12344 = "Assertion failed: ";
        }
        thunk_FUN_0041a040((uint *)&uStack8212,(uint *)pcStack12344);
      }
      thunk_FUN_0041a050((uint *)&uStack8212,(uint *)&uStack12308);
      if (param_1 == 2) {
        if ((uRam00428d24 & 1) != 0) {
          thunk_FUN_0041a050((uint *)&uStack8212,(uint *)&DAT_00425be0);
        }
        thunk_FUN_0041a050((uint *)&uStack8212,(uint *)&DAT_00425bdc);
      }
      if (param_2 == (undefined1 *)0x0) {
        thunk_FUN_0041a040((uint *)&uStack4116,(uint *)&uStack8212);
      }
      else {
        iVar2 = __snprintf(&uStack4116,0x1000,"%s(%d) : %s",param_2,param_3,&uStack8212);
        if (iVar2 < 0) {
          thunk_FUN_0041a040((uint *)&uStack4116,
                             (uint *)"_CrtDbgReport: String too long or IO Error");
        }
      }
      if (DAT_0042af7c != 0) {
        iStack12316 = DAT_0042af7c;
        while (iStack12316 != 0) {
          iVar2 = (**(code **)(iStack12316 + 0xc))(param_1,&uStack4116,&uStack12);
          if (iVar2 != 0) {
            if (param_1 == 2) {
              InterlockedDecrement((LONG *)&DAT_00428d18);
            }
            goto LAB_00415772;
          }
          iStack12316 = *(int *)(iStack12316 + 4);
        }
      }
      if ((DAT_0042af6c == (code *)0x0) ||
         (iVar2 = (*DAT_0042af6c)(param_1,&uStack4116,&uStack12), iVar2 == 0)) {
        if (((*(uint *)(&DAT_00428d1c + param_1 * 4) & 1) != 0) &&
           (*(int *)(&DAT_00428d28 + param_1 * 4) != -1)) {
          lpOverlapped = (LPOVERLAPPED)0x0;
          lpNumberOfBytesWritten = &DStack12320;
          nNumberOfBytesToWrite = _strlen(&uStack4116);
          WriteFile(*(HANDLE *)(&DAT_00428d28 + param_1 * 4),&uStack4116,nNumberOfBytesToWrite,
                    lpNumberOfBytesWritten,lpOverlapped);
        }
        if ((*(uint *)(&DAT_00428d1c + param_1 * 4) & 2) != 0) {
          OutputDebugStringA(&uStack4116);
        }
        if ((*(uint *)(&DAT_00428d1c + param_1 * 4) & 4) == 0) {
          if (param_1 == 2) {
            InterlockedDecrement((LONG *)&DAT_00428d18);
          }
        }
        else {
          if (param_3 == 0) {
            pcStack12348 = (char *)0x0;
          }
          else {
            pcStack12348 = __itoa(param_3,acStack12340,10);
          }
          uStack12 = _CrtMessageWindow(param_1,param_2,pcStack12348,param_4,&uStack12308);
          if (param_1 == 2) {
            InterlockedDecrement((LONG *)&DAT_00428d18);
          }
        }
      }
      else {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_00428d18);
        }
      }
    }
  }
LAB_00415772:
  thunk_FUN_0041d0f0(iStack16);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl
__aligned_offset_malloc_dbg(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  uint uStack24;
  
  if ((param_2 - 1 & param_2) == 0) {
    if ((param_3 < param_1) || (param_3 == 0)) {
      if (param_2 < 5) {
        uStack24 = 4;
      }
      else {
        uStack24 = param_2;
      }
      uStack24 = uStack24 - 1;
      uVar4 = -param_3 & 3;
      ppiVar3 = __malloc_dbg((int *)(uVar4 + param_1 + 8 + uStack24),(int *)0x1,param_4,param_5);
      if (ppiVar3 == (int **)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((int)ppiVar3 + param_3 + uVar4 + uStack24 + 8 & ~uStack24) - param_3;
        _memset((void *)((iVar2 - uVar4) + -4),(uint)DAT_00428d5b,4);
        *(int ***)((iVar2 - uVar4) + -8) = ppiVar3;
      }
    }
    else {
      iVar2 = __CrtDbgReport(2,"dbgheap.c",0x9a6,(char *)0x0,"(\"offset must be within size\", 0)");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      _DAT_0042962c = 0x16;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = __CrtDbgReport(2,"dbgheap.c",0x99f,(char *)0x0,"(\"alignment must be a power of 2\",0)")
    ;
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    _DAT_0042962c = 0x16;
    iVar2 = 0;
  }
  return iVar2;
}



void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack28;
  undefined *puStack24;
  undefined4 uStack20;
  int iStack16;
  
  iStack16 = param_1;
  puStack24 = &LAB_004149bc;
  uStack28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack28;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    uStack20 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = uStack20;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00414a72();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *in_FS_OFFSET = uStack28;
  return;
}



uint __cdecl ___sbh_find_block(int param_1)

{
  uint uStack12;
  
  uStack12 = DAT_0042aca0;
  while( true ) {
    if (DAT_0042ac9c * 0x14 + DAT_0042aca0 <= uStack12) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uStack12 + 0xc)) < 0x100000) break;
    uStack12 = uStack12 + 0x14;
  }
  return uStack12;
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



undefined4 ___sbh_heap_check(void)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  byte bVar4;
  int iStack368;
  int iStack364;
  int iStack360;
  uint uStack352;
  int aiStack348 [65];
  int iStack88;
  uint uStack84;
  uint uStack80;
  LPVOID pvStack76;
  uint *puStack72;
  uint *puStack68;
  uint uStack64;
  uint *puStack60;
  uint uStack56;
  uint *puStack52;
  uint *puStack48;
  uint *puStack44;
  uint *puStack40;
  uint *puStack36;
  int iStack32;
  int iStack28;
  uint uStack24;
  uint *puStack20;
  uint uStack16;
  uint *puStack12;
  uint uStack8;
  
  BVar2 = IsBadWritePtr(DAT_0042aca0,DAT_0042ac9c * 0x14);
  if (BVar2 == 0) {
    puStack60 = DAT_0042aca0;
    iStack368 = 0;
    while (iStack368 < DAT_0042ac9c) {
      pvStack76 = (LPVOID)puStack60[4];
      BVar2 = IsBadWritePtr(pvStack76,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      puStack20 = (uint *)puStack60[3];
      puStack72 = (uint *)((int)pvStack76 + 0x144);
      uStack352 = puStack60[2];
      uStack56 = 0;
      uStack84 = 0;
      iStack32 = 0;
      while (iStack32 < 0x20) {
        uStack16 = 0;
        uStack8 = 0;
        uStack24 = 0;
        iStack364 = 0;
        while (iStack364 < 0x40) {
          aiStack348[iStack364] = 0;
          iStack364 = iStack364 + 1;
        }
        if (-1 < (int)uStack352) {
          BVar2 = IsBadWritePtr(puStack20,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          puStack44 = puStack20;
          iStack28 = 0;
          while (iStack28 < 8) {
            puStack40 = puStack44 + 3;
            puStack52 = puStack44 + 0x3ff;
            if ((puStack44[2] != 0xffffffff) || (puStack44[0x3ff] != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *puStack40;
              uStack64 = uVar1;
              if ((uVar1 & 1) == 0) {
                iStack364 = ((int)uVar1 >> 4) + -1;
                if (0x3f < iStack364) {
                  iStack364 = 0x3f;
                }
                aiStack348[iStack364] = aiStack348[iStack364] + 1;
              }
              else {
                uStack64 = uVar1 - 1;
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                uStack24 = uStack24 + 1;
              }
              if ((((int)uStack64 < 0x10) || ((uStack64 & 0xf) != 0)) || (0xff0 < (int)uStack64)) {
                return 0xfffffff9;
              }
              if (*(uint *)((int)puStack40 + (uStack64 - 4)) != uVar1) {
                return 0xfffffff8;
              }
              puStack40 = (uint *)((int)puStack40 + uStack64);
            } while (puStack40 < puStack52);
            if (puStack40 != puStack52) {
              return 0xfffffff8;
            }
            puStack44 = puStack44 + 0x400;
            iStack28 = iStack28 + 1;
          }
          if (*puStack72 != uStack24) {
            return 0xfffffff7;
          }
          puStack68 = puStack72;
          iStack360 = 0;
          while (iStack360 < 0x40) {
            iStack88 = 0;
            puStack40 = puStack68;
            while( true ) {
              puStack12 = (uint *)puStack40[1];
              if ((puStack12 == puStack68) || (iStack88 == aiStack348[iStack360])) break;
              if ((puStack12 < puStack20) || (puStack20 + 0x2000 <= puStack12)) {
                return 0xfffffff6;
              }
              uStack80 = (uint)puStack12 & 0xfffff000;
              puStack48 = (uint *)(uStack80 + 0xc);
              puStack36 = (uint *)(uStack80 + 0xffc);
              while ((puStack48 != puStack36 && (puStack48 != puStack12))) {
                puStack48 = (uint *)((*puStack48 & 0xfffffffe) + (int)puStack48);
              }
              if (puStack48 == puStack36) {
                return 0xfffffff5;
              }
              iStack364 = ((int)*puStack12 >> 4) + -1;
              if (0x3f < iStack364) {
                iStack364 = 0x3f;
              }
              if (iStack364 != iStack360) {
                return 0xfffffff4;
              }
              if ((uint *)puStack12[2] != puStack40) {
                return 0xfffffff3;
              }
              puStack40 = puStack12;
              iStack88 = iStack88 + 1;
            }
            if (iStack88 != 0) {
              bVar4 = (byte)iStack360;
              if (iStack360 < 0x20) {
                uStack16 = 0x80000000U >> (bVar4 & 0x1f) | uStack16;
                uStack56 = 0x80000000U >> (bVar4 & 0x1f) | uStack56;
              }
              else {
                uStack8 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | uStack8;
                uStack84 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | uStack84;
              }
            }
            if (((uint *)puStack40[1] != puStack68) || (iStack88 != aiStack348[iStack360])) {
              return 0xfffffff2;
            }
            if ((uint *)puStack68[2] != puStack40) {
              return 0xfffffff1;
            }
            puStack68 = puStack68 + 2;
            iStack360 = iStack360 + 1;
          }
        }
        if ((uStack16 != *(uint *)((int)pvStack76 + iStack32 * 4 + 0x44)) ||
           (uStack8 != *(uint *)((int)pvStack76 + iStack32 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        puStack20 = puStack20 + 0x2000;
        puStack72 = puStack72 + 0x81;
        uStack352 = uStack352 << 1;
        iStack32 = iStack32 + 1;
      }
      if ((uStack56 != *puStack60) || (uStack84 != puStack60[1])) {
        return 0xffffffef;
      }
      puStack60 = puStack60 + 5;
      iStack368 = iStack368 + 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  if ((_Radix == 10) && (_Value < 0)) {
    _xtoa(_Value,_Dest,10,1);
  }
  else {
    _xtoa(_Value,_Dest,_Radix,0);
  }
  return _Dest;
}



undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iStack52;
  uint uStack48;
  uint uStack12;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar10 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  iStack52 = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + iStack52);
  uVar4 = *puVar7;
  if (iStack52 < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(iStack52 + uVar4) < (int)uVar5)) {
      return 0;
    }
    uStack12 = ((int)uVar4 >> 4) - 1;
    if (0x3f < uStack12) {
      uStack12 = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar8 = (byte)uStack12;
      if (uStack12 < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        *(char *)(uVar3 + uStack12 + 4) = *(char *)(uVar3 + uStack12 + 4) + -1;
        if (*(char *)(uVar3 + uStack12 + 4) == '\0') {
          *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        *(char *)(uVar3 + uStack12 + 4) = *(char *)(uVar3 + uStack12 + 4) + -1;
        if (*(char *)(uVar3 + uStack12 + 4) == '\0') {
          param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar9 = (iStack52 + uVar4) - uVar5;
    if (0 < iVar9) {
      piVar11 = (int *)((int)piVar6 + uVar5);
      uStack12 = (iVar9 >> 4) - 1;
      if (0x3f < uStack12) {
        uStack12 = 0x3f;
      }
      iVar1 = iVar1 + uStack12 * 8;
      piVar11[1] = *(int *)(iVar1 + 4);
      piVar11[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar11;
      *(int **)(piVar11[1] + 8) = piVar11;
      if (piVar11[1] == piVar11[2]) {
        bVar8 = (byte)uStack12;
        if (uStack12 < 0x20) {
          cVar2 = *(char *)(uVar3 + uStack12 + 4);
          *(char *)(uVar3 + uStack12 + 4) = *(char *)(uVar3 + uStack12 + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        }
        else {
          cVar2 = *(char *)(uVar3 + uStack12 + 4);
          *(char *)(uVar3 + uStack12 + 4) = *(char *)(uVar3 + uStack12 + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        }
      }
      *piVar11 = iVar9;
      *(int *)((int)piVar11 + iVar9 + -4) = iVar9;
    }
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
  }
  else {
    if ((int)uVar5 < iStack52) {
      *piVar6 = uVar5 + 1;
      *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
      piVar6 = (int *)((int)piVar6 + uVar5);
      iStack52 = iStack52 - uVar5;
      uStack48 = (iStack52 >> 4) - 1;
      if (0x3f < uStack48) {
        uStack48 = 0x3f;
      }
      if ((uVar4 & 1) == 0) {
        uStack12 = ((int)uVar4 >> 4) - 1;
        if (0x3f < uStack12) {
          uStack12 = 0x3f;
        }
        if (puVar7[1] == puVar7[2]) {
          bVar8 = (byte)uStack12;
          if (uStack12 < 0x20) {
            *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
                 ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
            *(char *)(uVar3 + uStack12 + 4) = *(char *)(uVar3 + uStack12 + 4) + -1;
            if (*(char *)(uVar3 + uStack12 + 4) == '\0') {
              *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
            }
          }
          else {
            *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
                 ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
            *(char *)(uVar3 + uStack12 + 4) = *(char *)(uVar3 + uStack12 + 4) + -1;
            if (*(char *)(uVar3 + uStack12 + 4) == '\0') {
              param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
            }
          }
        }
        *(uint *)(puVar7[2] + 4) = puVar7[1];
        *(uint *)(puVar7[1] + 8) = puVar7[2];
        iStack52 = iStack52 + uVar4;
        uStack48 = (iStack52 >> 4) - 1;
        if (0x3f < uStack48) {
          uStack48 = 0x3f;
        }
      }
      iVar1 = iVar1 + uStack48 * 8;
      piVar6[1] = *(int *)(iVar1 + 4);
      piVar6[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar6;
      *(int **)(piVar6[1] + 8) = piVar6;
      if (piVar6[1] == piVar6[2]) {
        bVar8 = (byte)uStack48;
        if (uStack48 < 0x20) {
          cVar2 = *(char *)(uVar3 + uStack48 + 4);
          *(char *)(uVar3 + uStack48 + 4) = *(char *)(uVar3 + uStack48 + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        }
        else {
          cVar2 = *(char *)(uVar3 + uStack48 + 4);
          *(char *)(uVar3 + uStack48 + 4) = *(char *)(uVar3 + uStack48 + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        }
      }
      *piVar6 = iStack52;
      *(int *)((int)piVar6 + iStack52 + -4) = iStack52;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL __cdecl __CrtIsValidHeapPointer(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = __CrtIsValidPointer((void *)(param_1 + -0x20),0x20,0);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else {
      if (_DAT_0042af90 == 3) {
        uVar3 = ___sbh_find_block(param_1 + -0x20);
        if (uVar3 == 0) {
          if ((DAT_0042963c & 0x8000) == 0) {
            BVar1 = HeapValidate(DAT_0042af80,0,(LPCVOID)(param_1 + -0x20));
          }
          else {
            BVar1 = 1;
          }
        }
        else {
          BVar1 = ___sbh_verify_block(uVar3,param_1 + -0x20);
        }
      }
      else {
        BVar1 = HeapValidate(DAT_0042af80,0,(LPCVOID)(param_1 + -0x20));
      }
    }
  }
  return BVar1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

void __cdecl ___security_error_handler(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  undefined4 *in_FS_OFFSET;
  undefined *puStack328;
  int iStack324;
  char *pcStack320;
  uint auStack316 [65];
  undefined uStack56;
  int iStack48;
  uint *puStack44;
  uint *puStack40;
  char *pcStack36;
  undefined4 uStack32;
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  uStack8 = 0xffffffff;
  puStack12 = &DAT_00427368;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  iStack48 = DAT_00428eb0;
  puStack28 = &stack0xfffffeac;
  if (DAT_0042992c == (code *)0x0) {
    iStack324 = param_1;
    if (param_1 == 1) {
      pcStack320 = "Buffer overrun detected!";
      pcStack36 = 
      "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n"
      ;
      uStack32 = 0xb9;
    }
    else {
      pcStack320 = "Unknown security failure detected!";
      pcStack36 = 
      "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n"
      ;
      uStack32 = 0xd4;
    }
    iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack56 = 0;
    DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)auStack316,0x104);
    if (DVar3 == 0) {
      thunk_FUN_0041a040(auStack316,(uint *)"<program name unknown>");
    }
    puStack44 = auStack316;
    sVar4 = _strlen((char *)auStack316);
    if (0x3c < sVar4 + 0xb) {
      sVar4 = _strlen((char *)auStack316);
      puStack44 = (uint *)((int)puStack44 + (sVar4 - 0x31));
      _strncpy((char *)puStack44,"...",3);
    }
    _strlen((char *)puStack44);
    puStack328 = &stack0xfffffeac;
    puStack40 = (uint *)&stack0xfffffeac;
    puStack28 = &stack0xfffffeac;
    thunk_FUN_0041a040((uint *)&stack0xfffffeac,(uint *)pcStack320);
    thunk_FUN_0041a050(puStack40,(uint *)&DAT_00425b54);
    thunk_FUN_0041a050(puStack40,(uint *)"Program: ");
    thunk_FUN_0041a050(puStack40,puStack44);
    thunk_FUN_0041a050(puStack40,(uint *)&DAT_00425b54);
    thunk_FUN_0041a050(puStack40,(uint *)pcStack36);
    ___crtMessageBoxA((LPCSTR)puStack40,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    uStack8 = 0;
    puStack28 = &stack0xfffffeac;
    (*DAT_0042992c)(param_1,param_2);
    uStack8 = 0xffffffff;
  }
  __exit(3);
  *in_FS_OFFSET = uStack20;
  thunk_FUN_0041d0f0(iStack48);
  return;
}



undefined4 thunk_FUN_00411b80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack196 [48];
  
  iVar1 = 0x30;
  puVar2 = auStack196;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return 5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iStack8;
  
  iStack8 = -2;
  if (_DAT_0042af90 == 3) {
    iVar1 = ___sbh_heap_check();
    if (iVar1 < 0) {
      iStack8 = -4;
    }
  }
  BVar2 = HeapValidate(DAT_0042af80,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      _DAT_00429630 = 0x78;
      _DAT_0042962c = 0x28;
    }
    else {
      iStack8 = -4;
    }
  }
  return iStack8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl __realloc_base(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uStack28;
  uint uStack24;
  uint *puStack20;
  int *piStack8;
  
  if (param_1 == (int *)0x0) {
    piVar1 = __malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      __free_base(param_1);
      piVar1 = (int *)0x0;
    }
    else {
      if (_DAT_0042af90 == 3) {
        do {
          piStack8 = (int *)0x0;
          if (param_2 < 0xffffffe1) {
            puStack20 = (uint *)___sbh_find_block((int)param_1);
            if (puStack20 != (uint *)0x0) {
              if (param_2 <= DAT_0042aca4) {
                iVar2 = ___sbh_resize_block(puStack20,(int)param_1,param_2);
                if (iVar2 == 0) {
                  piStack8 = ___sbh_alloc_block(param_2);
                  if (piStack8 != (int *)0x0) {
                    uStack24 = param_1[-1] - 1;
                    if (param_2 <= uStack24) {
                      uStack24 = param_2;
                    }
                    FID_conflict__memcpy(piStack8,param_1,uStack24);
                    puStack20 = (uint *)___sbh_find_block((int)param_1);
                    ___sbh_free_block(puStack20,(int)param_1);
                  }
                }
                else {
                  piStack8 = param_1;
                }
              }
              if (piStack8 == (int *)0x0) {
                if (param_2 == 0) {
                  param_2 = 1;
                }
                param_2 = param_2 + 0xf & 0xfffffff0;
                piStack8 = (int *)HeapAlloc(DAT_0042af80,0,param_2);
                if (piStack8 != (int *)0x0) {
                  uStack28 = param_2;
                  if (param_1[-1] - 1U < param_2) {
                    uStack28 = param_1[-1] - 1U;
                  }
                  FID_conflict__memcpy(piStack8,param_1,uStack28);
                  ___sbh_free_block(puStack20,(int)param_1);
                }
              }
            }
            if (puStack20 == (uint *)0x0) {
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              piStack8 = (int *)HeapReAlloc(DAT_0042af80,0,param_1,param_2);
            }
          }
          if (piStack8 != (int *)0x0) {
            return piStack8;
          }
          if (DAT_004298f4 == 0) {
            return (int *)0x0;
          }
          iVar2 = __callnewh(param_2);
        } while (iVar2 != 0);
        piVar1 = (int *)0x0;
      }
      else {
        do {
          piStack8 = (int *)0x0;
          if (param_2 < 0xffffffe1) {
            if (param_2 == 0) {
              param_2 = 1;
            }
            piStack8 = (int *)HeapReAlloc(DAT_0042af80,0,param_1,param_2);
          }
          if (piStack8 != (int *)0x0) {
            return piStack8;
          }
          if (DAT_004298f4 == 0) {
            return (int *)0x0;
          }
          iVar2 = __callnewh(param_2);
        } while (iVar2 != 0);
        piVar1 = (int *)0x0;
      }
    }
  }
  return piVar1;
}



uint * __cdecl thunk_FUN_0041a050(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    bVar1 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (bVar1 == 0) goto LAB_0041a0a3;
    uVar4 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto LAB_0041a0b5;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_0041a0b5;
    }
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_0041a0b5;
    }
  } while ((uVar4 & 0xff000000) != 0);
LAB_0041a0a3:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_0041a0b5:
  uVar4 = (uint)param_2 & 3;
  while (uVar4 != 0) {
    bVar1 = *(byte *)param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0041a130;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar4 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar4 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_0041a130:
        *(byte *)puVar5 = (byte)uVar4;
        return param_1;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar4;
        return param_1;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar4;
        *(byte *)((int)puVar5 + 2) = 0;
        return param_1;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar5 = uVar4;
        return param_1;
      }
    }
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while( true );
}



void __cdecl __exit(UINT param_1)

{
  _doexit(param_1,1,0);
  return;
}



int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = _flsall(1);
  return iVar1;
}



undefined4 __cdecl ___sbh_verify_block(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack16;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f) & *(uint *)(param_1 + 8)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    uStack16 = 1;
  }
  else {
    uStack16 = 0;
  }
  return uStack16;
}



void thunk_FUN_004133d0(UINT param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __NMSG_WRITE(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  size_t sVar5;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  undefined *puStack296;
  uint auStack292 [65];
  undefined uStack32;
  int iStack24;
  uint *puStack20;
  undefined *puStack16;
  DWORD DStack12;
  uint uStack8;
  
  iStack24 = DAT_00428eb0;
  uStack8 = 0;
  while ((uStack8 < 0x13 && (param_1 != *(int *)(&DAT_00428c60 + uStack8 * 8)))) {
    uStack8 = uStack8 + 1;
  }
  if (param_1 == *(int *)(&DAT_00428c60 + uStack8 * 8)) {
    if (((param_1 != 0xfc) && (param_1 != 0xff)) &&
       (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                               (&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack8 * 2]),
       iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((_DAT_00429604 == 1) || ((_DAT_00429604 == 0 && (_DAT_00428b44 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &DStack12;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack8 * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack8 * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else {
      if (param_1 != 0xfc) {
        uStack32 = 0;
        DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)auStack292,0x104);
        if (DVar4 == 0) {
          thunk_FUN_0041a040(auStack292,(uint *)"<program name unknown>");
        }
        puStack20 = auStack292;
        sVar3 = _strlen((char *)puStack20);
        if (0x3c < sVar3 + 1) {
          sVar3 = _strlen((char *)auStack292);
          puStack20 = (uint *)((int)puStack20 + (sVar3 - 0x3b));
          _strncpy((char *)puStack20,"...",3);
        }
        sVar3 = _strlen((char *)puStack20);
        sVar5 = _strlen((&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack8 * 2]);
        iVar2 = -(sVar3 + sVar5 + 0x1f & 0xfffffffc);
        puStack296 = (undefined *)((int)auStack292 + iVar2 + -8);
        puStack16 = (undefined *)((int)auStack292 + iVar2 + -8);
        *(char **)(&stack0xfffffed0 + iVar2) = "Runtime Error!\n\nProgram: ";
        *(undefined **)(&stack0xfffffecc + iVar2) = puStack16;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414e7a;
        thunk_FUN_0041a040(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(uint **)(&stack0xfffffed0 + iVar2) = puStack20;
        *(undefined **)(&stack0xfffffecc + iVar2) = puStack16;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414e8a;
        thunk_FUN_0041a050(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(undefined **)(&stack0xfffffed0 + iVar2) = &DAT_00425b54;
        *(undefined **)(&stack0xfffffecc + iVar2) = puStack16;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414e9b;
        thunk_FUN_0041a050(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(undefined **)(&stack0xfffffed0 + iVar2) =
             (&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack8 * 2];
        *(undefined **)(&stack0xfffffecc + iVar2) = puStack16;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414eb2;
        thunk_FUN_0041a050(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(undefined4 *)(&stack0xfffffed0 + iVar2) = 0x12010;
        *(char **)(&stack0xfffffecc + iVar2) = "Microsoft Visual C++ Runtime Library";
        *(undefined **)(&stack0xfffffec8 + iVar2) = puStack16;
        *(undefined4 *)(&stack0xfffffec4 + iVar2) = 0x414ec8;
        ___crtMessageBoxA(*(LPCSTR *)(&stack0xfffffec8 + iVar2),
                          *(LPCSTR *)(&stack0xfffffecc + iVar2),*(UINT *)(&stack0xfffffed0 + iVar2))
        ;
      }
    }
  }
  thunk_FUN_0041d0f0(iStack24);
  return;
}



size_t __cdecl _strlen(char *_Str)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = (uint)_Str & 3;
  puVar3 = (uint *)_Str;
  while (uVar2 != 0) {
    cVar1 = *(char *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (cVar1 == '\0') goto LAB_0041a1e3;
    uVar2 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar4 = puVar3;
      puVar3 = puVar4 + 1;
    } while (((*puVar4 ^ 0xffffffff ^ *puVar4 + 0x7efefeff) & 0x81010100) == 0);
    uVar2 = *puVar4;
    if ((char)uVar2 == '\0') {
      return (size_t)((int)puVar4 - (int)_Str);
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (size_t)((int)puVar4 + (1 - (int)_Str));
    }
    if ((uVar2 & 0xff0000) == 0) {
      return (size_t)((int)puVar4 + (2 - (int)_Str));
    }
  } while ((uVar2 & 0xff000000) != 0);
LAB_0041a1e3:
  return (size_t)((int)puVar3 + (-1 - (int)_Str));
}



void __cdecl __freebuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  void *this;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_freebuf.c",0x30,(char *)0x0,"stream != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((_File->_flag & 0x83U) != 0) && (this = (void *)(_File->_flag & 8), this != (void *)0x0)) {
    __free_dbg(this,(uint)_File->_base,(int *)0x2);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



int __cdecl __isctype(int _C,int _Type)

{
  uint uVar1;
  BOOL BVar2;
  undefined uStack16;
  undefined uStack15;
  undefined uStack14;
  LPCSTR pCStack12;
  ushort auStack8 [2];
  
  if (_C + 1U < 0x101) {
    uVar1 = (uint)*(ushort *)(PTR_DAT_00428ed4 + _C * 2) & _Type;
  }
  else {
    if ((*(ushort *)(PTR_DAT_00428ed4 + (_C >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      uStack16 = (undefined)_C;
      uStack15 = 0;
      pCStack12 = (LPCSTR)0x1;
    }
    else {
      uStack16 = (undefined)((uint)_C >> 8);
      uStack15 = (undefined)_C;
      uStack14 = 0;
      pCStack12 = (LPCSTR)0x2;
    }
    BVar2 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&uStack16,pCStack12,(int)auStack8,DAT_00429914,
                       DAT_00429904,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)auStack8[0] & _Type;
    }
  }
  return uVar1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,int *param_4,int **param_5,int param_6)

{
  undefined *puVar1;
  BOOL BVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined *puStack80;
  _cpinfo _Stack76;
  int iStack56;
  int **ppiStack52;
  int iStack48;
  int iStack44;
  int iStack40;
  int **ppiStack36;
  int iStack32;
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  uStack8 = 0xffffffff;
  puStack12 = &DAT_00427498;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  iStack56 = DAT_00428eb0;
  puStack28 = &stack0xffffffa4;
  ppiStack36 = (int **)0x0;
  iStack48 = 0;
  iStack32 = *param_4;
  iStack40 = 0;
  puVar1 = &stack0xffffffa4;
  if (param_1 != param_2) {
    BVar2 = GetCPInfo(param_1,(LPCPINFO)&_Stack76);
    if ((((BVar2 != 0) && (_Stack76.MaxCharSize == 1)) &&
        (BVar2 = GetCPInfo(param_2,(LPCPINFO)&_Stack76), BVar2 != 0)) && (_Stack76.MaxCharSize == 1)
       ) {
      iStack40 = 1;
    }
    if (iStack40 != 0) {
      if (iStack32 == -1) {
        sVar3 = _strlen(param_3);
        iStack44 = sVar3 + 1;
      }
      else {
        iStack44 = iStack32;
      }
    }
    if ((iStack40 == 0) &&
       (iStack44 = MultiByteToWideChar(param_1,1,param_3,iStack32,(LPWSTR)0x0,0), iStack44 == 0))
    goto LAB_00421580;
    uStack8 = 0;
    puStack80 = &stack0xffffffa4;
    ppiStack52 = (int **)&stack0xffffffa4;
    puStack28 = &stack0xffffffa4;
    _memset(&stack0xffffffa4,0,iStack44 << 1);
    uStack8 = 0xffffffff;
    if (ppiStack52 == (int **)0x0) {
      ppiStack52 = __calloc_dbg(2,iStack44,(int *)0x2,(int *)"convrtcp.c",(int *)0x7e);
      if (ppiStack52 == (int **)0x0) goto LAB_00421580;
      iStack48 = iStack48 + 1;
    }
    iVar4 = MultiByteToWideChar(param_1,1,param_3,iStack32,(LPWSTR)ppiStack52,iStack44);
    puVar1 = puStack28;
    if (iVar4 != 0) {
      if (param_5 == (int **)0x0) {
        if (((iStack40 != 0) ||
            (iStack44 = WideCharToMultiByte(param_2,0,(LPCWSTR)ppiStack52,iStack44,(LPSTR)0x0,0,
                                            (LPCSTR)0x0,(LPBOOL)0x0), puVar1 = puStack28,
            iStack44 != 0)) &&
           (ppiStack36 = __calloc_dbg(1,iStack44,(int *)0x2,(int *)"convrtcp.c",(int *)0xa1),
           puVar1 = puStack28, ppiStack36 != (int **)0x0)) {
          iStack44 = WideCharToMultiByte(param_2,0,(LPCWSTR)ppiStack52,iStack44,(LPSTR)ppiStack36,
                                         iStack44,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iStack44 == 0) {
            __free_dbg(ppiStack36,(uint)ppiStack36,(int *)0x2);
            ppiStack36 = (int **)0x0;
            puVar1 = puStack28;
          }
          else {
            puVar1 = puStack28;
            if (iStack32 != -1) {
              *param_4 = iStack44;
            }
          }
        }
      }
      else {
        iVar4 = WideCharToMultiByte(param_2,0,(LPCWSTR)ppiStack52,iStack44,(LPSTR)param_5,param_6,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        puVar1 = puStack28;
        if (iVar4 != 0) {
          ppiStack36 = param_5;
        }
      }
    }
  }
  puStack28 = puVar1;
  if (iStack48 != 0) {
    __free_dbg(ppiStack52,(uint)ppiStack52,(int *)0x2);
  }
LAB_00421580:
  *in_FS_OFFSET = uStack20;
  thunk_FUN_0041d0f0(iStack56);
  return;
}



uint * __cdecl thunk_FUN_0041a040(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (uint)param_2 & 3;
  puVar4 = param_1;
  while (uVar3 != 0) {
    bVar1 = *(byte *)param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0041a130;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    uVar3 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_0041a130:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  int iVar1;
  int iStack8;
  
  if (_MbCh == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (DAT_00429904 == 0) {
      if ((ushort)_WCh < 0x100) {
        *_MbCh = (char)_WCh;
        iVar1 = 1;
      }
      else {
        _DAT_0042962c = 0x2a;
        iVar1 = -1;
      }
    }
    else {
      iStack8 = 0;
      iVar1 = WideCharToMultiByte(DAT_00429914,0,&_WCh,1,_MbCh,DAT_00428ec4,(LPCSTR)0x0,&iStack8);
      if ((iVar1 == 0) || (iStack8 != 0)) {
        _DAT_0042962c = 0x2a;
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}



int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  code *pcVar1;
  int iVar2;
  FILE FStack44;
  FILE *pFStack12;
  int iStack8;
  
  pFStack12 = &FStack44;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vsprintf.c",0x5a,
                           (char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  pFStack12->_cnt = _Count;
  pFStack12->_flag = 0x42;
  pFStack12->_base = _Dest;
  pFStack12->_ptr = _Dest;
  iStack8 = __output(pFStack12,(byte *)_Format,(undefined4 *)_Args);
  if (_Dest != (char *)0x0) {
    pFStack12->_cnt = pFStack12->_cnt + -1;
    if (pFStack12->_cnt < 0) {
      __flsbuf(0,pFStack12);
    }
    else {
      *pFStack12->_ptr = '\0';
      pFStack12->_ptr = pFStack12->_ptr + 1;
    }
  }
  return iStack8;
}



int __cdecl __fcloseall(void)

{
  int iVar1;
  int iStack12;
  int iStack8;
  
  iStack8 = 0;
  iStack12 = 3;
  while (iStack12 < DAT_0042ac80) {
    if (*(int *)((int)DAT_00429934 + iStack12 * 4) != 0) {
      if ((*(uint *)(*(int *)((int)DAT_00429934 + iStack12 * 4) + 0xc) & 0x83) != 0) {
        iVar1 = _fclose(*(FILE **)((int)DAT_00429934 + iStack12 * 4));
        if (iVar1 != -1) {
          iStack8 = iStack8 + 1;
        }
      }
      if (0x13 < iStack12) {
        __free_dbg(DAT_00429934,*(uint *)((int)DAT_00429934 + iStack12 * 4),(int *)0x2);
        *(undefined4 *)((int)DAT_00429934 + iStack12 * 4) = 0;
      }
    }
    iStack12 = iStack12 + 1;
  }
  return iStack8;
}



undefined4 __cdecl __msize_dbg(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if (DAT_00429858 != 0) {
    if (DAT_00429848 == DAT_00429858 + -1) {
      iVar2 = __CrtCheckMemory();
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4fb,(char *)0x0,"_CrtCheckMemory()"), iVar2 == 1))
      {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      DAT_00429848 = 0;
    }
    else {
      DAT_00429848 = DAT_00429848 + 1;
    }
  }
  BVar4 = __CrtIsValidHeapPointer(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x50b,(char *)0x0,"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
      ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
     ((*(int *)(param_1 + -0xc) != 3 &&
      (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x511,(char *)0x0,
                              "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return *(undefined4 *)(param_1 + -0x10);
}



void __cdecl __CrtMemCheckpoint(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puStack12;
  int iStack8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    *param_1 = DAT_00429850;
    iStack8 = 0;
    while (iStack8 < 5) {
      param_1[iStack8 + 6] = 0;
      param_1[iStack8 + 1] = 0;
      iStack8 = iStack8 + 1;
    }
    puStack12 = DAT_00429850;
    while (puStack12 != (undefined4 *)0x0) {
      if ((puStack12[5] & 0xffff) < 5) {
        param_1[(puStack12[5] & 0xffff) + 1] = param_1[(puStack12[5] & 0xffff) + 1] + 1;
        param_1[(puStack12[5] & 0xffff) + 6] = param_1[(puStack12[5] & 0xffff) + 6] + puStack12[4];
      }
      else {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"Bad memory block found at 0x%p.\n"
                              );
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      puStack12 = (undefined4 *)*puStack12;
    }
    param_1[0xb] = DAT_0042984c;
    param_1[0xc] = DAT_00429840;
  }
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack

void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *apvStack40 [2];
  int aiStack32 [2];
  char *pcStack24;
  int iStack8;
  
  iStack8 = DAT_00428b68;
  if (DAT_00428b68 != -1) {
    pcVar4 = param_2;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcStack24 = (char *)0x412ec4;
    iVar3 = -((uint)(pcVar4 + (0x53 - (int)(param_2 + 1))) & 0xfffffffc);
    iVar5 = 7;
    puVar8 = (undefined4 *)"Stack around the variable \'";
    puVar7 = (undefined4 *)(&stack0xffffffec + iVar3);
    while (pcVar4 = param_2, iVar5 != 0) {
      iVar5 = iVar5 + -1;
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    puVar8 = (undefined4 *)((int)&pcStack24 + iVar3 + 3);
    do {
      pcVar1 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar1 != '\0');
    uVar6 = (uint)(pcVar4 + -(int)param_2) >> 2;
    puVar7 = (undefined4 *)param_2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar4 + -(int)param_2) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar8 = (undefined4 *)((int)&pcStack24 + iVar3 + 3);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined4 *)((int)puVar7 + 1);
    } while (*(char *)((int)puVar7 + 1) != '\0');
    *(undefined4 *)((int)puVar7 + 1) = 0x61772027;
    *(undefined4 *)((int)puVar7 + 5) = 0x6f632073;
    *(undefined4 *)((int)puVar7 + 9) = 0x70757272;
    *(undefined **)((int)&pcStack24 + iVar3) = &stack0xffffffec + iVar3;
    *(undefined4 *)((int)puVar7 + 0xd) = 0x2e646574;
    iVar5 = iStack8;
    *(undefined4 *)((int)aiStack32 + iVar3 + 4) = 2;
    *(int *)((int)aiStack32 + iVar3) = iVar5;
    *(void **)((int)(apvStack40 + 1) + iVar3) = param_1;
    *(undefined *)((int)puVar7 + 0x11) = 0;
    *(undefined4 *)((int)apvStack40 + iVar3) = 0x412f41;
    failwithmessage(*(void **)((int)(apvStack40 + 1) + iVar3),*(int *)((int)aiStack32 + iVar3),
                    *(int *)((int)aiStack32 + iVar3 + 4),*(char **)((int)&pcStack24 + iVar3));
  }
  return;
}



undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_0042ac9c == DAT_0042acac) {
    pvVar1 = HeapReAlloc(DAT_0042af80,0,DAT_0042aca0,(DAT_0042acac + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0042acac = DAT_0042acac + 0x10;
    DAT_0042aca0 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_0042ac9c * 0x14 + (int)DAT_0042aca0);
  pvVar1 = HeapAlloc(DAT_0042af80,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_0042af80,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_0042ac9c = DAT_0042ac9c + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}



void __cdecl __fptrap(void)

{
  __fptrap();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DStack8;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DStack8 = GetLastError();
    }
    else {
      DStack8 = 0;
    }
    if (DStack8 != 0) {
      _DAT_00429630 = DStack8;
      _DAT_0042962c = 9;
      DStack8 = 0xffffffff;
    }
  }
  else {
    _DAT_0042962c = 9;
    DStack8 = 0xffffffff;
  }
  return DStack8;
}



undefined4 thunk_FUN_0041ded0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041ded0();
  return uVar1;
}



undefined4 __cdecl __CrtIsValidPointer(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD DVar1;
  HANDLE hFile;
  DWORD DVar2;
  int iVar3;
  LONG LStack8;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar3 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    LStack8 = _Offset._4_4_;
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) {
      _DAT_0042962c = 9;
      DVar1 = 0xffffffff;
      LStack8 = -1;
    }
    else {
      DVar1 = SetFilePointer(hFile,(LONG)_Offset,&LStack8,_Origin);
      if (DVar1 == 0xffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          __dosmaperr(DVar2);
          DVar1 = 0xffffffff;
          LStack8 = -1;
          goto LAB_0042280a;
        }
      }
      *(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) =
           *(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0xfd;
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    DVar1 = 0xffffffff;
    LStack8 = -1;
  }
LAB_0042280a:
  return CONCAT44(LStack8,DVar1);
}



void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4149b4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl _RTC_GetSrcLine(ulong param_1,char *param_2,int param_3,int *param_4,char **param_5)

{
  char *pcVar1;
  uint *puVar2;
  ushort uVar3;
  char **ppcVar4;
  ImageInfo *pIVar5;
  int iVar6;
  HANDLE pvVar7;
  ushort *lpMem;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  DWORD DVar17;
  undefined auStack1092 [1020];
  undefined4 uStack72;
  undefined auStack56 [4];
  undefined auStack52 [4];
  undefined auStack48 [4];
  undefined auStack44 [4];
  char *pcStack40;
  uint uStack36;
  int iStack32;
  undefined4 uStack28;
  undefined4 uStack24;
  ushort *puStack20;
  undefined *puStack16;
  undefined4 uStack12;
  SIZE_T SStack8;
  
  ppcVar4 = param_5;
  uStack72 = 0x415c53;
  puStack16 = auStack1092;
  *param_4 = 0;
  *param_2 = '\0';
  iStack32 = 0;
  *param_5 = (char *)0x0;
  pIVar5 = GetImageInfo(param_1);
  if (pIVar5 == (ImageInfo *)0x0) {
    return iStack32;
  }
  uVar14 = param_1 - *(int *)(pIVar5 + 4);
  bVar16 = DAT_00429838 == 0;
  *ppcVar4 = *(char **)(pIVar5 + 0x18);
  iStack32 = 1;
  if (bVar16) {
    if (DAT_004297e0 != (HMODULE)0x0) {
      return 1;
    }
    DAT_004297e0 = (HMODULE)GetPdbDll();
    if (DAT_004297e0 == (HMODULE)0x0) {
      return iStack32;
    }
    _DAT_004297f0 = GetProcAddress(DAT_004297e0,"PDBOpenValidate3");
    if (((((_DAT_004297f0 == (FARPROC)0x0) ||
          (_DAT_004297f4 = GetProcAddress(DAT_004297e0,"PDBOpenDBI"), _DAT_004297f4 == (FARPROC)0x0)
          ) || (_DAT_004297f8 = GetProcAddress(DAT_004297e0,"DBIQueryModFromAddr"),
               _DAT_004297f8 == (FARPROC)0x0)) ||
        ((_DAT_004297fc = GetProcAddress(DAT_004297e0,"ModQueryLines"),
         _DAT_004297fc == (FARPROC)0x0 ||
         (_DAT_00429800 = GetProcAddress(DAT_004297e0,"ModClose"), _DAT_00429800 == (FARPROC)0x0))))
       || ((_DAT_00429804 = GetProcAddress(DAT_004297e0,"DBIClose"), _DAT_00429804 == (FARPROC)0x0
           || (_DAT_00429808 = GetProcAddress(DAT_004297e0,"PDBClose"),
              _DAT_00429808 == (FARPROC)0x0)))) {
      return 0;
    }
    DAT_00429838 = 1;
  }
  uVar3 = *(ushort *)(*(int *)(pIVar5 + 0x10) + 6);
  puStack20 = (ushort *)(uint)uVar3;
  uVar13 = 0;
  if (uVar3 == 0) {
    return iStack32;
  }
  while ((iVar6 = (uVar13 & 0xffff) * 0x28,
         uVar14 <= *(uint *)(*(int *)(pIVar5 + 0x14) + 0xc + iVar6) ||
         (iVar6 = iVar6 + *(int *)(pIVar5 + 0x14),
         *(uint *)(iVar6 + 0x10) <= uVar14 - *(int *)(iVar6 + 0xc)))) {
    uVar13 = uVar13 + 1;
    if (uVar3 <= (ushort)uVar13) {
      return iStack32;
    }
  }
  uVar14 = uVar14 - *(int *)(*(int *)(pIVar5 + 0x14) + 0xc + (uVar13 & 0xffff) * 0x28);
  if (uVar14 == 0xffffffff) {
    return iStack32;
  }
  uStack36 = uVar14;
  iVar6 = (*_DAT_004297f0)(*(undefined4 *)(pIVar5 + 0x18),&DAT_004250ec,auStack52,puStack16,
                           &stack0xfffffab8,auStack48,auStack44,&uStack28);
  if (iVar6 == 0) {
    return iStack32;
  }
  iVar6 = (*_DAT_004297f4)(uStack28,&DAT_00425e20,0,&uStack24);
  if (iVar6 != 0) {
    iVar6 = (*_DAT_004297f8)(uStack24,uVar13 + 1,uVar14,&uStack12,(int)&param_5 + 2,auStack56,
                             &SStack8);
    if (iVar6 != 0) {
      iVar6 = (*_DAT_004297fc)(uStack12,0,&SStack8);
      if ((iVar6 != 0) && (SStack8 != 0)) {
        DVar17 = 0;
        pvVar7 = GetProcessHeap();
        lpMem = (ushort *)HeapAlloc(pvVar7,DVar17,SStack8);
        puStack20 = lpMem;
        iVar6 = (*_DAT_004297fc)(uStack12,lpMem,&SStack8);
        if (iVar6 != 0) {
          puStack16 = (undefined *)0x0;
          uVar14 = uStack36;
          if (*lpMem != 0) {
LAB_00415ed2:
            uVar13 = (uint)*(ushort *)(*(int *)(lpMem + (int)puStack16 * 2 + 2) + (int)lpMem);
            iVar8 = *(int *)(lpMem + (int)puStack16 * 2 + 2) + (int)lpMem;
            iVar6 = iVar8 + 4 + uVar13 * 4;
            pcStack40 = (char *)(iVar6 + uVar13 * 8);
            iVar10 = 0;
            if (uVar13 == 0) goto LAB_00415f06;
            while ((puVar2 = (uint *)(iVar6 + iVar10 * 8),
                   uStack36 <= *puVar2 && *puVar2 != uStack36 ||
                   (puVar2 = (uint *)(iVar6 + 4 + iVar10 * 8),
                   *puVar2 <= uStack36 && uStack36 != *puVar2))) {
              iVar10 = iVar10 + 1;
              if ((int)uVar13 <= iVar10) goto LAB_00415f06;
            }
            iVar6 = *(int *)(iVar8 + 4 + iVar10 * 4);
            uVar15 = (uint)*(ushort *)(iVar6 + 2 + (int)lpMem);
            iVar6 = iVar6 + (int)lpMem;
            uVar14 = iVar6 + 4 + uVar15 * 4;
            uVar13 = 0xffffffff;
            puVar12 = (undefined *)0x0;
            puStack16 = (undefined *)0xffffffff;
            lpMem = puStack20;
            if (uVar15 == 0) goto LAB_00415f93;
            do {
              uVar11 = uStack36 - *(int *)(iVar6 + 4 + (int)puVar12 * 4);
              if (uVar11 < uVar13) {
                uVar13 = uVar11;
                puStack16 = puVar12;
              }
              puVar12 = puVar12 + 1;
            } while ((int)puVar12 < (int)uVar15);
            if (-1 < (int)puStack16) {
              *param_4 = (uint)*(ushort *)(uVar14 + (int)puStack16 * 2);
              iVar6 = 0;
              if (*pcStack40 == '\0') {
LAB_00415f82:
                if (param_3 <= iVar6) goto LAB_00415f86;
              }
              else {
                pcVar9 = pcStack40;
                while (iVar6 < param_3) {
                  (param_2 + -(int)pcStack40)[(int)pcVar9] = *pcVar9;
                  pcVar1 = pcVar9 + 1;
                  iVar6 = iVar6 + 1;
                  pcVar9 = pcVar9 + 1;
                  if (*pcVar1 == '\0') goto LAB_00415f82;
                }
LAB_00415f86:
                iVar6 = param_3 + -1;
              }
              param_2[iVar6] = '\0';
            }
          }
LAB_00415f93:
          uStack36 = uVar14;
          DVar17 = 0;
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,DVar17,lpMem);
        }
      }
      (*_DAT_00429800)(uStack12);
    }
    (*_DAT_00429804)(uStack24);
  }
  (*_DAT_00429808)(uStack28);
  return iStack32;
LAB_00415f06:
  puStack16 = puStack16 + 1;
  if ((int)(uint)*lpMem <= (int)puStack16) goto LAB_00415f93;
  goto LAB_00415ed2;
}



undefined8 __cdecl thunk_FUN_00411ea0(HINSTANCE param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 auStack208 [49];
  HWND pHStack12;
  undefined4 uStack8;
  
  iVar1 = 0x33;
  puVar3 = auStack208;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  DAT_004295cc = param_1;
  CreateWindowExA(0,&DAT_00429500,&DAT_00429568,0xcf0000,-0x80000000,0,-0x80000000,0,(HWND)0x0,
                  (HMENU)0x0,param_1,(LPVOID)0x0);
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  pHStack12 = (HWND)uVar4;
  uVar2 = extraout_ECX_00;
  if (pHStack12 != (HWND)0x0) {
    ShowWindow(pHStack12,param_2);
    __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_00);
    UpdateWindow(pHStack12);
    uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_01);
    uVar4 = uVar4 & 0xffffffff00000000 | ZEXT48(pHStack12);
    uVar2 = extraout_ECX_03;
  }
  pHStack12 = (HWND)uVar4;
  uStack8 = 0x411f4a;
  uVar5 = __RTC_CheckEsp(uVar2,(int)(uVar4 >> 0x20));
  return uVar5;
}



void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      if (uVar2 < 8) goto LAB_0041f334;
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_0041f358_caseD_1;
      case 2:
        goto switchD_0041f358_caseD_2;
      case 3:
        goto switchD_0041f358_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_0041f358_caseD_1:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        return _Dst;
      case 2:
switchD_0041f358_caseD_2:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        return _Dst;
      case 3:
switchD_0041f358_caseD_3:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
        return _Dst;
      default:
        uVar3 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar3 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (uVar2 < 8) {
LAB_0041f334:
                    // WARNING: Could not recover jumptable at 0x0041f336. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar1 = (void *)(*(code *)(&PTR_LAB_0041f408)[-uVar2])();
            return pvVar1;
          }
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041f358_caseD_1;
          case 2:
            goto switchD_0041f358_caseD_2;
          case 3:
            goto switchD_0041f358_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (uVar2 < 8) goto LAB_0041f334;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041f358_caseD_1;
          case 2:
            goto switchD_0041f358_caseD_2;
          case 3:
            goto switchD_0041f358_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (uVar2 < 8) goto LAB_0041f334;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041f358_caseD_1;
          case 2:
            goto switchD_0041f358_caseD_2;
          case 3:
            goto switchD_0041f358_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar4 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    if (uVar2 < 8) goto LAB_0041f1cc;
    while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
      uVar2 = uVar2 - 1;
      *puVar4 = *_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar4 = puVar4 + 1;
    }
    switch(_Size & 3) {
    case 1:
      goto switchD_0041f1c4_caseD_1;
    case 2:
      goto switchD_0041f1c4_caseD_2;
    case 3:
      goto switchD_0041f1c4_caseD_3;
    }
  }
  else {
    switch(_Size) {
    case 0:
      break;
    case 1:
switchD_0041f1c4_caseD_1:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      return _Dst;
    case 2:
switchD_0041f1c4_caseD_2:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      return _Dst;
    case 3:
switchD_0041f1c4_caseD_3:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)_Src + 2);
      return _Dst;
    default:
      uVar3 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (undefined4 *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (uVar2 < 8) {
LAB_0041f1cc:
                    // WARNING: Could not recover jumptable at 0x0041f1cc. Too many branches
                    // WARNING: Treating indirect jump as call
          pvVar1 = (void *)(*(code *)(&PTR_LAB_0041f250)[uVar2])();
          return pvVar1;
        }
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041f1c4_caseD_1;
        case 2:
          goto switchD_0041f1c4_caseD_2;
        case 3:
          goto switchD_0041f1c4_caseD_3;
        }
        break;
      case 2:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (undefined4 *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (uVar2 < 8) goto LAB_0041f1cc;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041f1c4_caseD_1;
        case 2:
          goto switchD_0041f1c4_caseD_2;
        case 3:
          goto switchD_0041f1c4_caseD_3;
        }
        break;
      case 3:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        _Src = (undefined4 *)((int)_Src + 1);
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (uVar2 < 8) goto LAB_0041f1cc;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041f1c4_caseD_1;
        case 2:
          goto switchD_0041f1c4_caseD_2;
        case 3:
          goto switchD_0041f1c4_caseD_3;
        }
      }
    }
  }
  return _Dst;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __output(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int **ppiVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **extraout_ECX;
  uint extraout_ECX_00;
  int **extraout_ECX_01;
  int **ppiVar9;
  int **extraout_ECX_02;
  int **extraout_ECX_03;
  int **extraout_ECX_04;
  int **extraout_ECX_05;
  int **extraout_ECX_06;
  int **extraout_ECX_07;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int **ppiStack700;
  uint uStack680;
  char acStack676 [8];
  int iStack668;
  int **ppiStack664;
  int **ppiStack660;
  int iStack656;
  undefined8 uStack652;
  undefined8 uStack644;
  int iStack632;
  undefined4 uStack628;
  undefined4 uStack624;
  uint *puStack620;
  int **ppiStack616;
  int **ppiStack612;
  int **ppiStack608;
  int **ppiStack604;
  undefined2 uStack600;
  int iStack596;
  int iStack592;
  wchar_t wStack588;
  byte bStack581;
  uint uStack580;
  uint uStack576;
  undefined uStack572;
  int *piStack61;
  int iStack56;
  int **ppiStack52;
  undefined4 uStack48;
  int iStack44;
  int **ppiStack40;
  int **ppiStack36;
  int iStack32;
  int iStack28;
  char cStack24;
  char cStack23;
  uint uStack20;
  int iStack16;
  uint uStack12;
  int **ppiStack8;
  
  iStack56 = DAT_00428eb0;
  ppiStack40 = (int **)0x0;
  uStack576 = 0;
  iStack592 = 0;
  ppiStack36 = (int **)0x0;
  pbVar3 = param_2;
  do {
    param_2 = pbVar3;
    bStack581 = *param_2;
    pbVar3 = param_2 + 1;
    if ((bStack581 == 0) || ((int)uStack576 < 0)) {
      thunk_FUN_0041d0f0(iStack56);
      return;
    }
    if (((char)bStack581 < ' ') || ('x' < (char)bStack581)) {
      uStack680 = 0;
    }
    else {
      uStack680 = (int)(char)(&DAT_004273c0)[(char)bStack581] & 0xf;
    }
    uStack580 = uStack680;
    iStack592 = (int)*(char *)(iStack592 + (uStack680 * 2 + 0x109cf8) * 4) >> 4;
    switch(iStack592) {
    case 0:
      goto switchD_0041fe66_caseD_0;
    case 1:
      uStack48 = 0;
      iStack44 = 0;
      iStack28 = 0;
      iStack32 = 0;
      uStack20 = 0;
      ppiStack52 = (int **)0xffffffff;
      iStack16 = 0;
      break;
    case 2:
      switch(bStack581) {
      case 0x20:
        uStack20 = uStack20 | 2;
        break;
      case 0x23:
        uStack20 = uStack20 | 0x80;
        break;
      case 0x2b:
        uStack20 = uStack20 | 1;
        break;
      case 0x2d:
        uStack20 = uStack20 | 4;
        break;
      case 0x30:
        uStack20 = uStack20 | 8;
      }
      break;
    case 3:
      if (bStack581 == 0x2a) {
        iStack28 = _get_int_arg((int *)&param_3);
        if (iStack28 < 0) {
          uStack20 = uStack20 | 4;
          iStack28 = -iStack28;
        }
      }
      else {
        iStack28 = iStack28 * 10 + -0x30 + (int)(char)bStack581;
      }
      break;
    case 4:
      ppiStack52 = (int **)0x0;
      break;
    case 5:
      if (bStack581 == 0x2a) {
        ppiStack52 = (int **)_get_int_arg((int *)&param_3);
        if ((int)ppiStack52 < 0) {
          ppiStack52 = (int **)0xffffffff;
        }
      }
      else {
        ppiStack52 = (int **)((int)ppiStack52 * 10 + -0x30 + (int)(char)bStack581);
      }
      break;
    case 6:
      switch(bStack581) {
      case 0x49:
        if ((*pbVar3 == 0x36) && (param_2[2] == 0x34)) {
          uStack20 = uStack20 | 0x8000;
          pbVar3 = param_2 + 3;
        }
        else {
          if ((*pbVar3 == 0x33) && (param_2[2] == 0x32)) {
            uStack20 = uStack20 & 0xffff7fff;
            pbVar3 = param_2 + 3;
          }
          else {
            if (((((*pbVar3 != 100) && (*pbVar3 != 0x69)) && (*pbVar3 != 0x6f)) &&
                ((*pbVar3 != 0x75 && (*pbVar3 != 0x78)))) && (*pbVar3 != 0x58)) {
              iStack592 = 0;
switchD_0041fe66_caseD_0:
              iStack16 = 0;
              if ((*(ushort *)(PTR_DAT_00428ed4 + (uint)bStack581 * 2) & 0x8000) != 0) {
                _write_char(bStack581,param_1,(int *)&uStack576);
                bStack581 = *pbVar3;
                pbVar3 = param_2 + 2;
                if (bStack581 == 0) {
                  iVar4 = __CrtDbgReport(2,"output.c",0x192,(char *)0x0,"ch != _T(\'\\0\')");
                  if (iVar4 == 1) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                }
              }
              param_2 = pbVar3;
              _write_char(bStack581,param_1,(int *)&uStack576);
              pbVar3 = param_2;
            }
          }
        }
        break;
      case 0x68:
        uStack20 = uStack20 | 0x20;
        break;
      case 0x6c:
        uStack20 = uStack20 | 0x10;
        break;
      case 0x77:
        uStack20 = uStack20 | 0x800;
      }
      break;
    case 7:
      ppiVar9 = (int **)((char)bStack581 + -0x43);
      ppiVar8 = ppiStack8;
      switch(bStack581) {
      case 0x43:
        if ((uStack20 & 0x830) == 0) {
          uStack20 = uStack20 | 0x800;
        }
      case 99:
        if ((uStack20 & 0x810) == 0) {
          uVar6 = _get_int_arg((int *)&param_3);
          uStack600 = (undefined2)uVar6;
          uStack600._0_1_ = (undefined)uVar6;
          ppiVar9 = (int **)(extraout_ECX_00 & 0xffffff00 | uVar6 & 0xff);
          uStack572 = (undefined)uStack600;
          ppiStack40 = (int **)0x1;
        }
        else {
          uVar6 = _get_short_arg((int *)&param_3);
          wStack588 = (wchar_t)uVar6;
          ppiStack40 = (int **)_wctomb(&uStack572,wStack588);
          ppiVar9 = extraout_ECX;
          if ((int)ppiStack40 < 0) {
            iStack44 = 1;
          }
        }
        ppiVar8 = (int **)&uStack572;
        break;
      case 0x45:
      case 0x47:
        uStack48 = 1;
        bStack581 = bStack581 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        uStack20 = uStack20 | 0x40;
        ppiStack8 = (int **)&uStack572;
        if ((int)ppiStack52 < 0) {
          ppiStack52 = (int **)0x6;
        }
        else {
          if ((ppiStack52 == (int **)0x0) && (bStack581 == 0x67)) {
            ppiStack52 = (int **)0x1;
          }
          else {
            if (0x200 < (int)ppiStack52) {
              ppiStack52 = (int **)0x200;
            }
          }
        }
        ppiVar9 = ppiStack8;
        if (0xa3 < (int)ppiStack52) {
          ppiStack36 = __malloc_dbg((int *)((int)ppiStack52 + 0x15d),(int *)0x2,(int *)"output.c",
                                    (int *)0x300);
          ppiVar9 = ppiStack36;
          if (ppiStack36 == (int **)0x0) {
            ppiStack52 = (int **)0xa3;
            ppiVar9 = ppiStack8;
          }
        }
        ppiStack8 = ppiVar9;
        uStack628 = *param_3;
        uStack624 = param_3[1];
        param_3 = param_3 + 2;
        (*_DAT_00429200)(&uStack628,ppiStack8,(int)(char)bStack581,ppiStack52,uStack48);
        if (((uStack20 & 0x80) != 0) && (ppiStack52 == (int **)0x0)) {
          (*(code *)PTR___fptrap_0042920c)(ppiStack8);
        }
        if ((bStack581 == 0x67) && ((uStack20 & 0x80) == 0)) {
          (*_DAT_00429204)(ppiStack8);
        }
        if (*(char *)ppiStack8 == '-') {
          uStack20 = uStack20 | 0x100;
          ppiStack8 = (int **)((int)ppiStack8 + 1);
        }
        ppiStack40 = (int **)_strlen((char *)ppiStack8);
        ppiVar9 = extraout_ECX_03;
        ppiVar8 = ppiStack8;
        break;
      case 0x53:
        if ((uStack20 & 0x830) == 0) {
          uStack20 = uStack20 | 0x800;
        }
      case 0x73:
        if (ppiStack52 == (int **)0xffffffff) {
          ppiStack700 = (int **)0x7fffffff;
        }
        else {
          ppiStack700 = ppiStack52;
        }
        ppiStack612 = ppiStack700;
        ppiStack8 = (int **)_get_int_arg((int *)&param_3);
        if ((uStack20 & 0x810) == 0) {
          if (ppiStack8 == (int **)0x0) {
            ppiStack8 = (int **)PTR_DAT_00428ef0;
          }
          ppiStack608 = ppiStack8;
          while ((ppiVar9 = ppiStack612, ppiStack612 != (int **)0x0 &&
                 (ppiVar9 = (int **)(int)*(char *)ppiStack608, ppiVar9 != (int **)0x0))) {
            ppiStack608 = (int **)((int)ppiStack608 + 1);
            ppiStack612 = (int **)((int)ppiStack612 + -1);
          }
          ppiStack40 = (int **)((int)ppiStack608 - (int)ppiStack8);
          ppiStack612 = (int **)((int)ppiStack612 + -1);
          ppiVar8 = ppiStack8;
        }
        else {
          if (ppiStack8 == (int **)0x0) {
            ppiStack8 = (int **)PTR_DAT_00428ef4;
          }
          iStack16 = 1;
          ppiStack616 = ppiStack8;
          while ((ppiStack612 != (int **)0x0 && (*(wchar_t *)ppiStack616 != L'\0'))) {
            ppiStack616 = (int **)((int)ppiStack616 + 2);
            ppiStack612 = (int **)((int)ppiStack612 + -1);
          }
          ppiVar9 = (int **)((int)((int)ppiStack616 - (int)ppiStack8) >> 1);
          ppiStack612 = (int **)((int)ppiStack612 + -1);
          ppiStack40 = ppiVar9;
          ppiVar8 = ppiStack8;
        }
        break;
      case 0x5a:
        ppiVar9 = (int **)_get_int_arg((int *)&param_3);
        ppiStack604 = ppiVar9;
        if ((ppiVar9 == (int **)0x0) || (ppiVar9[1] == (int *)0x0)) {
          ppiStack8 = (int **)PTR_DAT_00428ef0;
          ppiStack40 = (int **)_strlen(PTR_DAT_00428ef0);
          ppiVar9 = extraout_ECX_01;
          ppiVar8 = ppiStack8;
        }
        else {
          if ((uStack20 & 0x800) == 0) {
            iStack16 = 0;
            ppiStack40 = (int **)(int)*(wchar_t *)ppiVar9;
            ppiVar8 = (int **)ppiVar9[1];
          }
          else {
            iStack16 = 1;
            ppiStack40 = (int **)((int)*(wchar_t *)ppiVar9 / 2);
            ppiVar8 = (int **)ppiVar9[1];
          }
        }
        break;
      case 100:
      case 0x69:
        uStack20 = uStack20 | 0x40;
        uStack12 = 10;
        goto LAB_00420604;
      case 0x6e:
        puStack620 = (uint *)_get_int_arg((int *)&param_3);
        if ((uStack20 & 0x20) == 0) {
          *puStack620 = uStack576;
          ppiVar9 = extraout_ECX_02;
        }
        else {
          ppiVar9 = (int **)((uint)extraout_ECX_02 & 0xffff0000 | uStack576 & 0xffff);
          *(short *)puStack620 = (short)(uStack576 & 0xffff);
        }
        iStack44 = 1;
        ppiVar8 = ppiStack8;
        break;
      case 0x6f:
        uStack12 = 8;
        if ((uStack20 & 0x80) != 0) {
          uStack20 = uStack20 | 0x200;
        }
        goto LAB_00420604;
      case 0x70:
        ppiStack52 = (int **)&DAT_00000008;
      case 0x58:
        iStack596 = 7;
        goto LAB_004205bd;
      case 0x75:
        uStack12 = 10;
        goto LAB_00420604;
      case 0x78:
        iStack596 = 0x27;
LAB_004205bd:
        uStack12 = 0x10;
        if ((uStack20 & 0x80) != 0) {
          cStack24 = '0';
          cStack23 = (char)iStack596 + 'Q';
          iStack32 = 2;
        }
LAB_00420604:
        if ((uStack20 & 0x8000) == 0) {
          if ((uStack20 & 0x20) == 0) {
            if ((uStack20 & 0x40) == 0) {
              uVar6 = _get_int_arg((int *)&param_3);
              uVar11 = (ulonglong)uVar6;
            }
            else {
              iVar4 = _get_int_arg((int *)&param_3);
              uVar11 = SEXT48(iVar4);
            }
          }
          else {
            if ((uStack20 & 0x40) == 0) {
              uVar6 = _get_int_arg((int *)&param_3);
              uStack644._0_4_ = uVar6 & 0xffff;
              uStack644._4_4_ = 0;
            }
            else {
              uVar5 = _get_int_arg((int *)&param_3);
              uStack644._0_4_ = SEXT24((short)uVar5);
              uStack644._4_4_ = (int)(uint)uStack644 >> 0x1f;
            }
            uVar11 = CONCAT44(uStack644._4_4_,(uint)uStack644);
          }
        }
        else {
          uVar11 = _get_int64_arg((int *)&param_3);
        }
        uStack644._4_4_ = (int)(uVar11 >> 0x20);
        uStack644._0_4_ = (uint)uVar11;
        uVar13 = uVar11;
        if ((((uStack20 & 0x40) != 0) && ((longlong)uVar11 < 0x100000000)) && ((longlong)uVar11 < 0)
           ) {
          uStack20 = uStack20 | 0x100;
          uVar13 = CONCAT44(-(uStack644._4_4_ + (uint)((uint)uStack644 != 0)),-(uint)uStack644);
        }
        uStack652._4_4_ = (uint)(uVar13 >> 0x20);
        uStack652._0_4_ = (uint)uVar13;
        if ((uStack20 & 0x8000) == 0) {
          uStack652._4_4_ = 0;
        }
        uVar13 = uVar13 & 0xffffffff | (ulonglong)uStack652._4_4_ << 0x20;
        if ((int)ppiStack52 < 0) {
          ppiStack52 = (int **)0x1;
        }
        else {
          uStack20 = uStack20 & 0xfffffff7;
          if (0x200 < (int)ppiStack52) {
            ppiStack52 = (int **)0x200;
          }
        }
        if (((uint)uStack652 | uStack652._4_4_) == 0) {
          iStack32 = 0;
        }
        ppiStack8 = &piStack61;
        uStack644 = uVar11;
        while( true ) {
          ppiVar2 = ppiStack8;
          uStack652._4_4_ = (uint)(uVar13 >> 0x20);
          uStack652._0_4_ = (uint)uVar13;
          ppiVar7 = (int **)((int)ppiStack52 + -1);
          uStack652 = uVar13;
          if (((int)ppiStack52 < 1) && (uVar13 == 0)) break;
          ppiStack52 = ppiVar7;
          uVar12 = __aullrem((uint)uStack652,uStack652._4_4_,uStack12,(int)uStack12 >> 0x1f);
          iStack632 = (int)uVar12 + 0x30;
          uVar13 = __aulldiv((uint)uStack652,uStack652._4_4_,uStack12,(int)uStack12 >> 0x1f);
          if (0x39 < iStack632) {
            iStack632 = iStack632 + iStack596;
          }
          *(char *)ppiStack8 = (char)iStack632;
          ppiStack8 = (int **)((int)ppiStack8 + -1);
        }
        ppiStack40 = (int **)((int)&piStack61 - (int)ppiStack8);
        ppiVar8 = (int **)((int)ppiStack8 + 1);
        ppiVar9 = ppiStack40;
        ppiStack52 = ppiVar7;
        if (((uStack20 & 0x200) != 0) &&
           ((*(char *)ppiVar8 != '0' || (ppiVar9 = ppiVar8, ppiStack40 == (int **)0x0)))) {
          *(char *)ppiStack8 = '0';
          ppiVar9 = ppiVar2;
          ppiStack40 = (int **)((int)ppiStack40 + 1);
          ppiVar8 = ppiStack8;
        }
      }
      ppiStack8 = ppiVar8;
      if (iStack44 == 0) {
        if ((uStack20 & 0x40) != 0) {
          if ((uStack20 & 0x100) == 0) {
            if ((uStack20 & 1) == 0) {
              if ((uStack20 & 2) != 0) {
                cStack24 = ' ';
                iStack32 = 1;
              }
            }
            else {
              cStack24 = '+';
              iStack32 = 1;
            }
          }
          else {
            cStack24 = '-';
            iStack32 = 1;
          }
        }
        iStack656 = (iStack28 - (int)ppiStack40) - iStack32;
        if ((uStack20 & 0xc) == 0) {
          _write_multi_char(' ',iStack656,param_1,(int *)&uStack576);
        }
        _write_string(&cStack24,iStack32,param_1,(int *)&uStack576);
        if (((uStack20 & 8) != 0) && ((uStack20 & 4) == 0)) {
          _write_multi_char('0',iStack656,param_1,(int *)&uStack576);
        }
        if ((iStack16 == 0) || ((int)ppiStack40 < 1)) {
          _write_string((char *)ppiStack8,(int)ppiStack40,param_1,(int *)&uStack576);
          ppiVar9 = extraout_ECX_06;
        }
        else {
          ppiStack660 = ppiStack8;
          ppiStack664 = ppiStack40;
          ppiVar9 = ppiStack40;
          while (ppiVar8 = (int **)((int)ppiStack664 + -1), bVar10 = ppiStack664 != (int **)0x0,
                ppiStack664 = ppiVar8, bVar10) {
            iStack668 = _wctomb(acStack676,*(wchar_t *)ppiStack660);
            ppiStack660 = (int **)((int)ppiStack660 + 2);
            ppiVar9 = extraout_ECX_04;
            if (iStack668 < 1) break;
            _write_string(acStack676,iStack668,param_1,(int *)&uStack576);
            ppiVar9 = extraout_ECX_05;
          }
        }
        if ((uStack20 & 4) != 0) {
          _write_multi_char(' ',iStack656,param_1,(int *)&uStack576);
          ppiVar9 = extraout_ECX_07;
        }
      }
      if (ppiStack36 != (int **)0x0) {
        __free_dbg(ppiVar9,(uint)ppiStack36,(int *)0x2);
        ppiStack36 = (int **)0x0;
      }
    }
  } while( true );
}



void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      if (uVar2 < 8) goto LAB_0041a3f4;
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_0041a418_caseD_1;
      case 2:
        goto switchD_0041a418_caseD_2;
      case 3:
        goto switchD_0041a418_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_0041a418_caseD_1:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        return _Dst;
      case 2:
switchD_0041a418_caseD_2:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        return _Dst;
      case 3:
switchD_0041a418_caseD_3:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
        return _Dst;
      default:
        uVar3 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar3 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (uVar2 < 8) {
LAB_0041a3f4:
                    // WARNING: Could not recover jumptable at 0x0041a3f6. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar1 = (void *)(*(code *)(&PTR_LAB_0041a4c8)[-uVar2])();
            return pvVar1;
          }
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041a418_caseD_1;
          case 2:
            goto switchD_0041a418_caseD_2;
          case 3:
            goto switchD_0041a418_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (uVar2 < 8) goto LAB_0041a3f4;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041a418_caseD_1;
          case 2:
            goto switchD_0041a418_caseD_2;
          case 3:
            goto switchD_0041a418_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (uVar2 < 8) goto LAB_0041a3f4;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041a418_caseD_1;
          case 2:
            goto switchD_0041a418_caseD_2;
          case 3:
            goto switchD_0041a418_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar4 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    if (uVar2 < 8) goto LAB_0041a28c;
    while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
      uVar2 = uVar2 - 1;
      *puVar4 = *_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar4 = puVar4 + 1;
    }
    switch(_Size & 3) {
    case 1:
      goto switchD_0041a284_caseD_1;
    case 2:
      goto switchD_0041a284_caseD_2;
    case 3:
      goto switchD_0041a284_caseD_3;
    }
  }
  else {
    switch(_Size) {
    case 0:
      break;
    case 1:
switchD_0041a284_caseD_1:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      return _Dst;
    case 2:
switchD_0041a284_caseD_2:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      return _Dst;
    case 3:
switchD_0041a284_caseD_3:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)_Src + 2);
      return _Dst;
    default:
      uVar3 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (undefined4 *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (uVar2 < 8) {
LAB_0041a28c:
                    // WARNING: Could not recover jumptable at 0x0041a28c. Too many branches
                    // WARNING: Treating indirect jump as call
          pvVar1 = (void *)(*(code *)(&PTR_LAB_0041a310)[uVar2])();
          return pvVar1;
        }
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041a284_caseD_1;
        case 2:
          goto switchD_0041a284_caseD_2;
        case 3:
          goto switchD_0041a284_caseD_3;
        }
        break;
      case 2:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (undefined4 *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (uVar2 < 8) goto LAB_0041a28c;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041a284_caseD_1;
        case 2:
          goto switchD_0041a284_caseD_2;
        case 3:
          goto switchD_0041a284_caseD_3;
        }
        break;
      case 3:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        _Src = (undefined4 *)((int)_Src + 1);
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (uVar2 < 8) goto LAB_0041a28c;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041a284_caseD_1;
        case 2:
          goto switchD_0041a284_caseD_2;
        case 3:
          goto switchD_0041a284_caseD_3;
        }
      }
    }
  }
  return _Dst;
}



size_t __cdecl __msize(void *_Memory)

{
  size_t sVar1;
  
  sVar1 = __msize_dbg((int)_Memory);
  return sVar1;
}



_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  uint uVar1;
  uint uStack16;
  int **ppiStack8;
  
  uVar1 = __msize_dbg((int)DAT_0042b0f4);
  if (uVar1 < (uint)((int)DAT_0042b0f0 + (4 - (int)DAT_0042b0f4))) {
    uStack16 = uVar1;
    if (0x7ff < uVar1) {
      uStack16 = 0x800;
    }
    ppiStack8 = __realloc_dbg((uint)DAT_0042b0f4,(int *)(uVar1 + uStack16),(int *)0x2,
                              (int *)"onexit.c",(int *)0x7d);
    if ((ppiStack8 == (int **)0x0) &&
       (ppiStack8 = __realloc_dbg((uint)DAT_0042b0f4,(int *)(uVar1 + 0x10),(int *)0x2,
                                  (int *)"onexit.c",(int *)0x83), ppiStack8 == (int **)0x0)) {
      return (_onexit_t)0x0;
    }
    DAT_0042b0f0 = ppiStack8 + ((int)((int)DAT_0042b0f0 - (int)DAT_0042b0f4) >> 2);
    DAT_0042b0f4 = ppiStack8;
  }
  *DAT_0042b0f0 = (int *)_Func;
  DAT_0042b0f0 = DAT_0042b0f0 + 1;
  return _Func;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t iVar1;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    iVar1 = *(intptr_t *)((&DAT_0042afe0)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 8);
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



undefined4 __cdecl __ValidateEH3RN(uint param_1)

{
  uint uVar1;
  int iVar2;
  LONG LVar3;
  SIZE_T SVar4;
  int in_FS_OFFSET;
  int iStack96;
  _MEMORY_BASIC_INFORMATION _Stack88;
  int iStack60;
  uint uStack56;
  int iStack52;
  undefined4 uStack48;
  int iStack44;
  int iStack40;
  LPCVOID pvStack36;
  int iStack32;
  uint uStack28;
  int *piStack24;
  short *psStack20;
  int *piStack16;
  uint uStack12;
  LPCVOID pvStack8;
  
  pvStack36 = *(LPCVOID *)(param_1 + 8);
  if (((uint)pvStack36 & 3) != 0) {
    return 0;
  }
  iStack40 = *(int *)(in_FS_OFFSET + 0x18);
  if ((*(LPCVOID *)(iStack40 + 8) <= pvStack36) && (pvStack36 < *(LPCVOID *)(iStack40 + 4))) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    return 1;
  }
  iStack32 = 0;
  uStack12 = 0;
  while (uStack12 < *(uint *)(param_1 + 0xc) || uStack12 == *(uint *)(param_1 + 0xc)) {
    uVar1 = *(uint *)((int)pvStack36 + uStack12 * 0xc);
    if ((uVar1 != 0xffffffff) && (uStack12 <= uVar1)) {
      return 0;
    }
    if (*(int *)((int)pvStack36 + uStack12 * 0xc + 4) != 0) {
      iStack32 = iStack32 + 1;
    }
    uStack12 = uStack12 + 1;
  }
  if ((iStack32 != 0) &&
     ((*(uint *)(param_1 - 8) < *(uint *)(iStack40 + 8) || (param_1 <= *(uint *)(param_1 - 8))))) {
    return 0;
  }
  uStack56 = (uint)pvStack36 & 0xfffff000;
  iStack52 = 0;
  while( true ) {
    if (DAT_00429868 <= iStack52) {
      SVar4 = VirtualQuery(pvStack36,(PMEMORY_BASIC_INFORMATION)&_Stack88,0x1c);
      if ((SVar4 == 0) || (_Stack88.Type != 0x1000000)) {
        return 0xffffffff;
      }
      if ((_Stack88.Protect & 0xcc) != 0) {
        psStack20 = (short *)_Stack88.AllocationBase;
                    // WARNING: Load size is inaccurate
        if (*_Stack88.AllocationBase != 0x5a4d) {
          return 0xffffffff;
        }
        piStack24 = (int *)((int)_Stack88.AllocationBase +
                           *(int *)((int)_Stack88.AllocationBase + 0x3c));
        if (*piStack24 != 0x4550) {
          return 0xffffffff;
        }
        piStack16 = piStack24 + 6;
        if (*(short *)piStack16 != 0x10b) {
          return 0xffffffff;
        }
        pvStack8 = (LPCVOID)((int)pvStack36 - (int)_Stack88.AllocationBase);
        uStack48 = 0;
        iStack60 = (int)piStack24 + *(ushort *)(piStack24 + 5) + 0x18;
        if (*(short *)((int)piStack24 + 6) == 0) {
          return 0xffffffff;
        }
        if (((*(LPCVOID *)(iStack60 + 0xc) <= pvStack8) &&
            (pvStack8 < (LPCVOID)(*(int *)(iStack60 + 0xc) + *(int *)(iStack60 + 8)))) &&
           ((*(uint *)(iStack60 + 0x24) & 0x80000000) != 0)) {
          return 0;
        }
      }
      LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1);
      if (LVar3 != 0) {
        return 1;
      }
      iStack52 = DAT_00429868;
      while ((0 < iStack52 && (*(uint *)(&DAT_0042986c + iStack52 * 4) != uStack56))) {
        iStack52 = iStack52 + -1;
      }
      if (iStack52 == 0) {
        if (DAT_00429868 < 0x10) {
          iStack96 = DAT_00429868;
        }
        else {
          iStack96 = 0xf;
        }
        iStack52 = iStack96;
        iStack44 = 0;
        while (iStack44 <= iStack96) {
          uStack28 = *(uint *)(&DAT_00429870 + iStack44 * 4);
          *(uint *)(&DAT_00429870 + iStack44 * 4) = uStack56;
          iStack44 = iStack44 + 1;
          uStack56 = uStack28;
        }
        if (DAT_00429868 < 0x10) {
          DAT_00429868 = DAT_00429868 + 1;
        }
      }
      InterlockedExchange((LONG *)&DAT_004298b0,0);
      return 1;
    }
    if (*(uint *)(&DAT_00429870 + iStack52 * 4) == uStack56) break;
    iStack52 = iStack52 + 1;
  }
  if ((0 < iStack52) && (LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1), LVar3 == 0)) {
    iVar2 = DAT_00429868;
    if (*(uint *)(&DAT_00429870 + iStack52 * 4) != uStack56) {
      do {
        iStack52 = iVar2 + -1;
        if (iStack52 < 0) break;
        iVar2 = iStack52;
      } while (*(uint *)(&DAT_00429870 + iStack52 * 4) != uStack56);
      if (iStack52 < 0) {
        if (DAT_00429868 < 0x10) {
          DAT_00429868 = DAT_00429868 + 1;
        }
        iStack52 = DAT_00429868 + -1;
      }
      else {
        if (iStack52 == 0) {
          InterlockedExchange((LONG *)&DAT_004298b0,0);
          return 1;
        }
      }
    }
    iStack44 = 0;
    while (iStack44 <= iStack52) {
      uStack28 = *(uint *)(&DAT_00429870 + iStack44 * 4);
      *(uint *)(&DAT_00429870 + iStack44 * 4) = uStack56;
      iStack44 = iStack44 + 1;
      uStack56 = uStack28;
    }
    InterlockedExchange((LONG *)&DAT_004298b0,0);
  }
  return 1;
}



int ** __cdecl __heap_alloc_dbg(int *param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int **ppiVar6;
  
  bVar2 = false;
  if (DAT_00429858 != 0) {
    if (DAT_00429848 == DAT_00429858 + -1) {
      iVar5 = __CrtCheckMemory();
      if ((iVar5 == 0) &&
         (iVar5 = __CrtDbgReport(2,"dbgheap.c",0x15a,(char *)0x0,"_CrtCheckMemory()"), iVar5 == 1))
      {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
      DAT_00429848 = 0;
    }
    else {
      DAT_00429848 = DAT_00429848 + 1;
    }
  }
  piVar3 = DAT_00428d50;
  if ((DAT_00428d54 != (int *)0xffffffff) && (DAT_00428d50 == DAT_00428d54)) {
    pcVar1 = (code *)swi(3);
    ppiVar6 = (int **)(*pcVar1)();
    return ppiVar6;
  }
  iVar5 = (*(code *)PTR_thunk_FUN_0041ded0_00428ec0)
                    (1,0,param_1,param_2,DAT_00428d50,param_3,param_4);
  if (iVar5 == 0) {
    if (param_3 == (int *)0x0) {
      iVar5 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
      if (iVar5 == 1) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
    }
    else {
      iVar5 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                             "Client hook allocation failure at file %hs line %d.\n");
      if (iVar5 == 1) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
    }
    ppiVar6 = (int **)0x0;
  }
  else {
    if ((((uint)param_2 & 0xffff) != 2) && ((DAT_00428d4c & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < (int *)0xffffffe1) && (param_1 + 9 < (int *)0xffffffe1)) {
      if ((((((uint)param_2 & 0xffff) != 4) && (param_2 != (int *)0x1)) &&
          (((uint)param_2 & 0xffff) != 2)) &&
         ((param_2 != (int *)0x3 &&
          (iVar5 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,"%s"), iVar5 == 1)))) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
      ppiVar6 = (int **)__heap_alloc_base((uint)(param_1 + 9));
      if (ppiVar6 == (int **)0x0) {
        ppiVar6 = (int **)0x0;
      }
      else {
        DAT_00428d50 = (int *)((int)DAT_00428d50 + 1);
        if (bVar2) {
          *ppiVar6 = (int *)0x0;
          ppiVar6[1] = (int *)0x0;
          ppiVar6[2] = (int *)0x0;
          ppiVar6[3] = (int *)0xfedcbabc;
          ppiVar6[4] = param_1;
          ppiVar6[5] = (int *)0x3;
          ppiVar6[6] = (int *)0x0;
        }
        else {
          DAT_00429840 = DAT_00429840 + (int)param_1;
          DAT_00429854 = DAT_00429854 + (int)param_1;
          if (DAT_0042984c < DAT_00429854) {
            DAT_0042984c = DAT_00429854;
          }
          ppiVar4 = ppiVar6;
          if (DAT_00429850 != (int **)0x0) {
            ((int *)DAT_00429850)[1] = (int)ppiVar6;
            ppiVar4 = DAT_00429844;
          }
          DAT_00429844 = ppiVar4;
          *ppiVar6 = (int *)DAT_00429850;
          ppiVar6[1] = (int *)0x0;
          ppiVar6[2] = param_3;
          ppiVar6[3] = param_4;
          ppiVar6[4] = param_1;
          ppiVar6[5] = param_2;
          ppiVar6[6] = piVar3;
          DAT_00429850 = ppiVar6;
        }
        _memset(ppiVar6 + 7,(uint)DAT_00428d58,4);
        _memset((void *)((int)((int)ppiVar6 + 0x20) + (int)param_1),(uint)DAT_00428d58,4);
        _memset(ppiVar6 + 8,(uint)DAT_00428d5a,(size_t)param_1);
        ppiVar6 = ppiVar6 + 8;
      }
    }
    else {
      iVar5 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                             "Invalid allocation size: %Iu bytes.\n");
      if (iVar5 == 1) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
      ppiVar6 = (int **)0x0;
    }
  }
  return ppiVar6;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x0042314e. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puStack68;
  int **ppiStack64;
  int iStack60;
  int iStack56;
  int iStack52;
  BOOL BStack48;
  BOOL BStack44;
  LPWORD pWStack40;
  DWORD DStack36;
  WORD aWStack32 [2];
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  uStack8 = 0xffffffff;
  puStack12 = &DAT_00427168;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  puStack28 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (_DAT_00429928 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,aWStack32);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      puVar5 = puStack28;
      if (DVar3 == 0x78) {
        _DAT_00429928 = 2;
      }
    }
    else {
      _DAT_00429928 = 1;
      puVar5 = puStack28;
    }
  }
  puStack28 = puVar5;
  if ((_DAT_00429928 == 2) || (_DAT_00429928 == 0)) {
    DStack36 = 0;
    if (_Code_page == 0) {
      _Code_page = DAT_00429904;
    }
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00429914;
    }
    pWStack40 = (LPWORD)___ansicp(_Code_page);
    if (pWStack40 == (LPWORD)0xffffffff) {
      BStack48 = 0;
    }
    else {
      if ((pWStack40 == _LpCharType) ||
         (_DWInfoType = ___convertcp((UINT)_LpCharType,(UINT)pWStack40,(char *)_DWInfoType,
                                     (int *)&_LpSrcStr,(int **)0x0,0), DStack36 = _DWInfoType,
         _DWInfoType != 0)) {
        BStack48 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                  (LPWORD)_CchSrc);
        if (DStack36 != 0) {
          BStack44 = BStack48;
          __free_dbg(this,DStack36,(int *)0x2);
          BStack48 = BStack44;
        }
      }
      else {
        BStack48 = 0;
      }
    }
  }
  else {
    if (_DAT_00429928 == 1) {
      BStack48 = 0;
      iStack60 = 0;
      if (_LpCharType == (LPWORD)0x0) {
        _LpCharType = DAT_00429914;
      }
      iStack56 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,
                                     (LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iStack56 == 0) {
        BStack48 = 0;
      }
      else {
        uStack8 = 0;
        iVar1 = -(iStack56 * 2 + 3U & 0xfffffffc);
        puStack68 = &stack0xffffffb0 + iVar1;
        puStack28 = &stack0xffffffb0 + iVar1;
        ppiStack64 = (int **)(&stack0xffffffb0 + iVar1);
        *(int *)(&stack0xffffffac + iVar1) = iStack56 << 1;
        *(undefined4 *)(&stack0xffffffa8 + iVar1) = 0;
        *(int ***)(&stack0xffffffa4 + iVar1) = ppiStack64;
        *(undefined4 *)(&stack0xffffffa0 + iVar1) = 0x41eff6;
        _memset(*(void **)(&stack0xffffffa4 + iVar1),*(int *)(&stack0xffffffa8 + iVar1),
                *(size_t *)(&stack0xffffffac + iVar1));
        uStack8 = 0xffffffff;
        if (ppiStack64 == (int **)0x0) {
          *(undefined4 *)(&stack0xffffffac + iVar1) = 0xa6;
          *(char **)(&stack0xffffffa8 + iVar1) = "a_str.c";
          *(undefined4 *)(&stack0xffffffa4 + iVar1) = 2;
          *(int *)(&stack0xffffffa0 + iVar1) = iStack56;
          *(undefined4 *)(&stack0xffffff9c + iVar1) = 2;
          *(undefined4 *)(&stack0xffffff98 + iVar1) = 0x41f03b;
          ppiStack64 = __calloc_dbg(*(int *)(&stack0xffffff9c + iVar1),
                                    *(int *)(&stack0xffffffa0 + iVar1),
                                    *(int **)(&stack0xffffffa4 + iVar1),
                                    *(int **)(&stack0xffffffa8 + iVar1),
                                    *(int **)(&stack0xffffffac + iVar1));
          if (ppiStack64 == (int **)0x0) {
            BStack48 = 0;
            goto LAB_0041f0ad;
          }
          iStack60 = iStack60 + 1;
        }
        *(int *)(&stack0xffffffac + iVar1) = iStack56;
        *(int ***)(&stack0xffffffa8 + iVar1) = ppiStack64;
        *(LPCSTR *)(&stack0xffffffa4 + iVar1) = _LpSrcStr;
        *(DWORD *)(&stack0xffffffa0 + iVar1) = _DWInfoType;
        *(undefined4 *)(&stack0xffffff9c + iVar1) = 1;
        *(LPWORD *)(&stack0xffffff98 + iVar1) = _LpCharType;
        puVar4 = &stack0xffffff94 + iVar1;
        *(undefined4 *)(&stack0xffffff94 + iVar1) = 0x41f070;
        iStack52 = MultiByteToWideChar(*(UINT *)(&stack0xffffff98 + iVar1),
                                       *(DWORD *)(&stack0xffffff9c + iVar1),
                                       *(LPCSTR *)(&stack0xffffffa0 + iVar1),
                                       *(int *)(&stack0xffffffa4 + iVar1),
                                       *(LPWSTR *)(&stack0xffffffa8 + iVar1),
                                       *(int *)(&stack0xffffffac + iVar1));
        this_00 = extraout_ECX;
        puVar5 = puVar4;
        if (iStack52 != 0) {
          *(int *)(puVar4 + -4) = _CchSrc;
          *(int *)(puVar4 + -8) = iStack52;
          *(int ***)(puVar4 + -0xc) = ppiStack64;
          *(_locale_t *)(puVar4 + -0x10) = _Plocinfo;
          puVar5 = puVar4 + -0x14;
          *(undefined4 *)(puVar4 + -0x14) = 0x41f08f;
          BStack48 = GetStringTypeW(*(DWORD *)(puVar4 + -0x10),*(LPCWSTR *)(puVar4 + -0xc),
                                    *(int *)(puVar4 + -8),*(LPWORD *)(puVar4 + -4));
          this_00 = extraout_ECX_00;
        }
        if (iStack60 != 0) {
          *(undefined4 *)(puVar5 + -4) = 2;
          *(int ***)(puVar5 + -8) = ppiStack64;
          *(undefined4 *)(puVar5 + -0xc) = 0x41f0a3;
          __free_dbg(this_00,*(uint *)(puVar5 + -8),*(int **)(puVar5 + -4));
        }
      }
    }
    else {
      BStack48 = 0;
    }
  }
LAB_0041f0ad:
  *in_FS_OFFSET = uStack20;
  return BStack48;
}



int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_004298f8 != (code *)0x0) && (iVar1 = (*DAT_004298f8)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



undefined4 __CrtDumpMemoryLeaks(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack56 [2];
  int iStack48;
  int iStack44;
  int iStack36;
  
  __CrtMemCheckpoint(auStack56);
  if (((iStack36 == 0) && (iStack48 == 0)) && (((DAT_00428d4c & 0x10) == 0 || (iStack44 == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    __CrtMemDumpAllObjectsSince((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __free_base(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    if (_DAT_0042af90 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)param_1);
      if (puVar1 == (uint *)0x0) {
        HeapFree(DAT_0042af80,0,param_1);
      }
      else {
        ___sbh_free_block(puVar1,(int)param_1);
      }
    }
    else {
      HeapFree(DAT_0042af80,0,param_1);
    }
  }
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int **this;
  int iVar1;
  DWORD DVar2;
  LPCSTR lpSrcStr;
  undefined *puVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  void *pvVar4;
  void *extraout_ECX_12;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 *in_FS_OFFSET;
  undefined *puStack92;
  undefined *puStack88;
  undefined *puStack84;
  int iStack80;
  int iStack76;
  int iStack72;
  int **ppiStack68;
  int iStack64;
  int iStack60;
  int **ppiStack56;
  int iStack52;
  int iStack48;
  int **ppiStack44;
  UINT UStack40;
  int *piStack36;
  LPCSTR pCStack32;
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  uStack8 = 0xffffffff;
  puStack12 = &DAT_00427130;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  puStack28 = &stack0xffffff98;
  puVar3 = &stack0xffffff98;
  if (_DAT_00429924 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      puVar3 = puStack28;
      if (DVar2 == 0x78) {
        _DAT_00429924 = 2;
      }
    }
    else {
      _DAT_00429924 = 1;
      puVar3 = puStack28;
    }
  }
  puStack28 = puVar3;
  if (0 < (int)_LpSrcStr) {
    _LpSrcStr = (LPCSTR)_strncnt((char *)_DwMapFlag,(size_t)_LpSrcStr);
  }
  if ((_DAT_00429924 != 2) && (_DAT_00429924 != 0)) {
    if (_DAT_00429924 != 1) {
      iStack60 = 0;
      goto LAB_0041ec5f;
    }
    iStack60 = 0;
    iStack64 = 0;
    iStack80 = 0;
    if (_CchDest == 0) {
      _CchDest = DAT_00429914;
    }
    iStack72 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                   (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iStack72 == 0) {
      iStack60 = 0;
      goto LAB_0041ec5f;
    }
    puVar3 = (undefined *)(iStack72 * 2 + 3U & 0xfffffffc);
    iVar1 = -(int)puVar3;
    puStack88 = &stack0xffffff98 + iVar1;
    puStack28 = &stack0xffffff98 + iVar1;
    ppiStack68 = (int **)(&stack0xffffff98 + iVar1);
    uStack8 = 0xffffffff;
    if (&stack0xffffff98 == puVar3) {
      *(undefined4 *)(&stack0xffffff94 + iVar1) = 0x101;
      *(char **)(&stack0xffffff90 + iVar1) = "a_map.c";
      *(undefined4 *)(&stack0xffffff8c + iVar1) = 2;
      *(int *)(&stack0xffffff88 + iVar1) = iStack72 << 1;
      *(undefined4 *)(&stack0xffffff84 + iVar1) = 0x41ea85;
      ppiStack68 = __malloc_dbg(*(int **)(&stack0xffffff88 + iVar1),
                                *(int **)(&stack0xffffff8c + iVar1),
                                *(int **)(&stack0xffffff90 + iVar1),
                                *(int **)(&stack0xffffff94 + iVar1));
      if (ppiStack68 == (int **)0x0) {
        iStack60 = 0;
        goto LAB_0041ec5f;
      }
      iStack64 = iStack64 + 1;
    }
    *(int *)(&stack0xffffff94 + iVar1) = iStack72;
    *(int ***)(&stack0xffffff90 + iVar1) = ppiStack68;
    *(LPCSTR *)(&stack0xffffff8c + iVar1) = _LpSrcStr;
    *(DWORD *)(&stack0xffffff88 + iVar1) = _DwMapFlag;
    *(undefined4 *)(&stack0xffffff84 + iVar1) = 1;
    *(int *)(&stack0xffffff80 + iVar1) = _CchDest;
    puVar3 = &stack0xffffff7c + iVar1;
    *(undefined4 *)(&stack0xffffff7c + iVar1) = 0x41eabd;
    iVar1 = MultiByteToWideChar(*(UINT *)(&stack0xffffff80 + iVar1),
                                *(DWORD *)(&stack0xffffff84 + iVar1),
                                *(LPCSTR *)(&stack0xffffff88 + iVar1),
                                *(int *)(&stack0xffffff8c + iVar1),
                                *(LPWSTR *)(&stack0xffffff90 + iVar1),
                                *(int *)(&stack0xffffff94 + iVar1));
    pvVar4 = extraout_ECX_05;
    if (iVar1 != 0) {
      *(undefined4 *)(puVar3 + -4) = 0;
      *(undefined4 *)(puVar3 + -8) = 0;
      *(int *)(puVar3 + -0xc) = iStack72;
      *(int ***)(puVar3 + -0x10) = ppiStack68;
      *(LPCWSTR *)(puVar3 + -0x14) = _LocaleName;
      *(_locale_t *)(puVar3 + -0x18) = _Plocinfo;
      puVar5 = puVar3 + -0x1c;
      *(undefined4 *)(puVar3 + -0x1c) = 0x41eae0;
      iStack60 = LCMapStringW(*(LCID *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                              *(LPCWSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                              *(LPWSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
      pvVar4 = extraout_ECX_06;
      puVar3 = puVar5;
      if (iStack60 != 0) {
        if (((uint)_LocaleName & 0x400) == 0) {
          iStack76 = iStack60;
          puVar3 = (undefined *)(iStack60 * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar5 + -4) = 0x41eb55;
          iVar1 = -(int)puVar3;
          puStack92 = puVar5 + iVar1;
          puStack28 = puVar5 + iVar1;
          ppiStack56 = (int **)(puVar5 + iVar1);
          uStack8 = 0xffffffff;
          if (puVar5 == puVar3) {
            *(undefined4 *)(puVar5 + iVar1 + -4) = 0x13a;
            *(char **)(puVar5 + iVar1 + -8) = "a_map.c";
            *(undefined4 *)(puVar5 + iVar1 + -0xc) = 2;
            *(int *)(puVar5 + iVar1 + -0x10) = iStack76 << 1;
            *(undefined4 *)(puVar5 + iVar1 + -0x14) = 0x41eba3;
            ppiStack56 = __malloc_dbg(*(int **)(puVar5 + iVar1 + -0x10),
                                      *(int **)(puVar5 + iVar1 + -0xc),
                                      *(int **)(puVar5 + iVar1 + -8),*(int **)(puVar5 + iVar1 + -4))
            ;
            pvVar4 = extraout_ECX_08;
            puVar3 = puVar5 + iVar1;
            if (ppiStack56 == (int **)0x0) goto LAB_0041ec30;
            iStack80 = iStack80 + 1;
          }
          *(int *)(puVar5 + iVar1 + -4) = iStack76;
          *(int ***)(puVar5 + iVar1 + -8) = ppiStack56;
          *(int *)(puVar5 + iVar1 + -0xc) = iStack72;
          *(int ***)(puVar5 + iVar1 + -0x10) = ppiStack68;
          *(LPCWSTR *)(puVar5 + iVar1 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar5 + iVar1 + -0x18) = _Plocinfo;
          puVar7 = puVar5 + iVar1 + -0x1c;
          *(undefined4 *)(puVar5 + iVar1 + -0x1c) = 0x41ebd8;
          iVar1 = LCMapStringW(*(LCID *)(puVar5 + iVar1 + -0x18),*(DWORD *)(puVar5 + iVar1 + -0x14),
                               *(LPCWSTR *)(puVar5 + iVar1 + -0x10),*(int *)(puVar5 + iVar1 + -0xc),
                               *(LPWSTR *)(puVar5 + iVar1 + -8),*(int *)(puVar5 + iVar1 + -4));
          pvVar4 = extraout_ECX_09;
          puVar3 = puVar7;
          if (iVar1 != 0) {
            if (_LpDestStr == (LPSTR)0x0) {
              *(undefined4 *)(puVar7 + -4) = 0;
              *(undefined4 *)(puVar7 + -8) = 0;
              *(undefined4 *)(puVar7 + -0xc) = 0;
              *(undefined4 *)(puVar7 + -0x10) = 0;
              *(int *)(puVar7 + -0x14) = iStack76;
              *(int ***)(puVar7 + -0x18) = ppiStack56;
              *(undefined4 *)(puVar7 + -0x1c) = 0;
              *(int *)(puVar7 + -0x20) = _CchDest;
              puVar8 = puVar7 + -0x24;
              *(undefined4 *)(puVar7 + -0x24) = 0x41ec00;
              iStack60 = WideCharToMultiByte(*(UINT *)(puVar7 + -0x20),*(DWORD *)(puVar7 + -0x1c),
                                             *(LPCWSTR *)(puVar7 + -0x18),*(int *)(puVar7 + -0x14),
                                             *(LPSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                             *(LPCSTR *)(puVar7 + -8),*(LPBOOL *)(puVar7 + -4));
              pvVar4 = extraout_ECX_10;
              puVar3 = puVar8;
            }
            else {
              *(undefined4 *)(puVar7 + -4) = 0;
              *(undefined4 *)(puVar7 + -8) = 0;
              *(LPSTR *)(puVar7 + -0xc) = _LpDestStr;
              *(int *)(puVar7 + -0x10) = _CchSrc;
              *(int *)(puVar7 + -0x14) = iStack76;
              *(int ***)(puVar7 + -0x18) = ppiStack56;
              *(undefined4 *)(puVar7 + -0x1c) = 0;
              *(int *)(puVar7 + -0x20) = _CchDest;
              puVar9 = puVar7 + -0x24;
              *(undefined4 *)(puVar7 + -0x24) = 0x41ec2d;
              iStack60 = WideCharToMultiByte(*(UINT *)(puVar7 + -0x20),*(DWORD *)(puVar7 + -0x1c),
                                             *(LPCWSTR *)(puVar7 + -0x18),*(int *)(puVar7 + -0x14),
                                             *(LPSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                             *(LPCSTR *)(puVar7 + -8),*(LPBOOL *)(puVar7 + -4));
              pvVar4 = extraout_ECX_11;
              puVar3 = puVar9;
            }
          }
        }
        else {
          if ((_LpDestStr != (LPSTR)0x0) && (iStack60 <= (int)_LpDestStr)) {
            *(LPSTR *)(puVar5 + -4) = _LpDestStr;
            *(int *)(puVar5 + -8) = _CchSrc;
            *(int *)(puVar5 + -0xc) = iStack72;
            *(int ***)(puVar5 + -0x10) = ppiStack68;
            *(LPCWSTR *)(puVar5 + -0x14) = _LocaleName;
            *(_locale_t *)(puVar5 + -0x18) = _Plocinfo;
            puVar6 = puVar5 + -0x1c;
            *(undefined4 *)(puVar5 + -0x1c) = 0x41eb2a;
            LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                         *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                         *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
            pvVar4 = extraout_ECX_07;
            puVar3 = puVar6;
          }
        }
      }
    }
LAB_0041ec30:
    if (iStack80 != 0) {
      *(undefined4 *)(puVar3 + -4) = 2;
      this = ppiStack56;
      *(int ***)(puVar3 + -8) = ppiStack56;
      *(undefined4 *)(puVar3 + -0xc) = 0x41ec41;
      __free_dbg(this,*(uint *)(puVar3 + -8),*(int **)(puVar3 + -4));
      pvVar4 = extraout_ECX_12;
    }
    if (iStack64 != 0) {
      *(undefined4 *)(puVar3 + -4) = 2;
      *(int ***)(puVar3 + -8) = ppiStack68;
      *(undefined4 *)(puVar3 + -0xc) = 0x41ec55;
      __free_dbg(pvVar4,*(uint *)(puVar3 + -8),*(int **)(puVar3 + -4));
    }
    goto LAB_0041ec5f;
  }
  pCStack32 = (LPCSTR)0x0;
  ppiStack44 = (int **)0x0;
  iStack48 = 0;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_00429904;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_00429914;
  }
  UStack40 = ___ansicp((LCID)_Plocinfo);
  if (UStack40 == 0xffffffff) {
    iStack60 = 0;
    goto LAB_0041ec5f;
  }
  if (UStack40 == _CchDest) {
    iStack52 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    pvVar4 = extraout_ECX_04;
  }
  else {
    lpSrcStr = (LPCSTR)___convertcp(_CchDest,UStack40,(char *)_DwMapFlag,(int *)&_LpSrcStr,
                                    (int **)0x0,0);
    if (lpSrcStr == (LPCSTR)0x0) {
      iStack60 = 0;
      goto LAB_0041ec5f;
    }
    pCStack32 = lpSrcStr;
    piStack36 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                    (LPSTR)0x0,0);
    pvVar4 = extraout_ECX;
    if (piStack36 != (int *)0x0) {
      uStack8 = 0;
      puStack84 = &stack0xffffff98;
      ppiStack44 = (int **)&stack0xffffff98;
      puStack28 = &stack0xffffff98;
      _memset(&stack0xffffff98,0,(size_t)piStack36);
      uStack8 = 0xffffffff;
      if (ppiStack44 == (int **)0x0) {
        ppiStack44 = __malloc_dbg(piStack36,(int *)0x2,(int *)"a_map.c",(int *)0xa6);
        if (ppiStack44 == (int **)0x0) {
          iStack52 = 0;
          pvVar4 = extraout_ECX_00;
          goto LAB_0041e966;
        }
        _memset(ppiStack44,0,(size_t)piStack36);
        iStack48 = iStack48 + 1;
      }
      piStack36 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                      (LPSTR)ppiStack44,(int)piStack36);
      if (piStack36 == (int *)0x0) {
        iStack52 = 0;
        pvVar4 = extraout_ECX_01;
      }
      else {
        iVar1 = ___convertcp(UStack40,_CchDest,(char *)ppiStack44,(int *)&piStack36,(int **)_CchSrc,
                             (int)_LpDestStr);
        pvVar4 = extraout_ECX_02;
        if (iVar1 == 0) {
          iStack52 = 0;
        }
        else {
          iStack52 = 1;
        }
      }
    }
LAB_0041e966:
    if (iStack48 != 0) {
      __free_dbg(ppiStack44,(uint)ppiStack44,(int *)0x2);
      pvVar4 = extraout_ECX_03;
    }
  }
  iStack60 = iStack52;
  if (pCStack32 != (LPCSTR)0x0) {
    __free_dbg(pvVar4,(uint)pCStack32,(int *)0x2);
    iStack60 = iStack52;
  }
LAB_0041ec5f:
  *in_FS_OFFSET = uStack20;
  return iStack60;
}



int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0,4);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl _raise(int _SigNum)

{
  undefined4 *puVar1;
  undefined4 uStack24;
  code **ppcStack20;
  int iStack16;
  undefined4 uStack12;
  code *pcStack8;
  
  switch(_SigNum) {
  case 2:
    ppcStack20 = &DAT_004298dc;
    pcStack8 = DAT_004298dc;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    puVar1 = _siglookup(_SigNum);
    ppcStack20 = (code **)(puVar1 + 2);
    pcStack8 = *ppcStack20;
    break;
  case 0xf:
    ppcStack20 = &DAT_004298e8;
    pcStack8 = DAT_004298e8;
    break;
  case 0x15:
    ppcStack20 = &DAT_004298e0;
    pcStack8 = DAT_004298e0;
    break;
  case 0x16:
    ppcStack20 = &DAT_004298e4;
    pcStack8 = DAT_004298e4;
  }
  if (pcStack8 != (code *)0x1) {
    if (pcStack8 == (code *)0x0) {
      __exit(3);
    }
    if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
      uStack12 = DAT_00429690;
      DAT_00429690 = 0;
      if (_SigNum == 8) {
        uStack24 = DAT_00428c14;
        DAT_00428c14 = 0x8c;
      }
    }
    if (_SigNum == 8) {
      iStack16 = DAT_00428c08;
      while (iStack16 < DAT_00428c08 + _DAT_00428c0c) {
        *(undefined4 *)(iStack16 * 0xc + 0x428b98) = 0;
        iStack16 = iStack16 + 1;
      }
    }
    else {
      *ppcStack20 = (code *)0x0;
    }
    if (_SigNum == 8) {
      (*pcStack8)(8,DAT_00428c14);
    }
    else {
      (*pcStack8)(_SigNum);
      if ((_SigNum != 0xb) && (_SigNum != 4)) {
        return 0;
      }
    }
    if (_SigNum == 8) {
      DAT_00428c14 = uStack24;
    }
    DAT_00429690 = uStack12;
    return 0;
  }
  return 0;
}



int __cdecl __ioinit(void)

{
  HANDLE *ppvVar1;
  int **ppiVar2;
  int iVar3;
  DWORD DVar4;
  int *hFile;
  DWORD DStack116;
  UINT UStack112;
  HANDLE *ppvStack108;
  int **ppiStack104;
  UINT *pUStack96;
  UINT UStack92;
  uint uStack88;
  int iStack80;
  _STARTUPINFOA _Stack76;
  
  ppiStack104 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"ioinit.c",(int *)0x82);
  if (ppiStack104 == (int **)0x0) {
    iVar3 = -1;
  }
  else {
    DAT_0042af94 = 0x20;
    DAT_0042afe0 = ppiStack104;
    while (ppiStack104 < DAT_0042afe0 + 0x40) {
      *(undefined *)(ppiStack104 + 1) = 0;
      *ppiStack104 = (int *)0xffffffff;
      *(undefined *)((int)ppiStack104 + 5) = 10;
      ppiStack104 = ppiStack104 + 2;
    }
    GetStartupInfoA((LPSTARTUPINFOA)&_Stack76);
    if ((_Stack76.cbReserved2 != 0) && ((UINT *)_Stack76.lpReserved2 != (UINT *)0x0)) {
      UStack112 = *(UINT *)_Stack76.lpReserved2;
      pUStack96 = (UINT *)((int)_Stack76.lpReserved2 + 4);
      ppvStack108 = (HANDLE *)((int)pUStack96 + UStack112);
      if (0x7ff < (int)UStack112) {
        UStack112 = 0x800;
      }
      UStack92 = UStack112;
      iStack80 = 1;
      while ((int)DAT_0042af94 < (int)UStack112) {
        ppiStack104 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"ioinit.c",(int *)0xb7);
        if (ppiStack104 == (int **)0x0) {
          UStack92 = DAT_0042af94;
          break;
        }
        (&DAT_0042afe0)[iStack80] = ppiStack104;
        DAT_0042af94 = DAT_0042af94 + 0x20;
        while (ppiStack104 < (int **)((int)(&DAT_0042afe0)[iStack80] + 0x100)) {
          *(undefined *)(ppiStack104 + 1) = 0;
          *ppiStack104 = (int *)0xffffffff;
          *(undefined *)((int)ppiStack104 + 5) = 10;
          ppiStack104 = ppiStack104 + 2;
        }
        iStack80 = iStack80 + 1;
      }
      uStack88 = 0;
      while ((int)uStack88 < (int)UStack92) {
        if (((*ppvStack108 != (HANDLE)0xffffffff) && ((*(byte *)pUStack96 & 1) != 0)) &&
           (((*(byte *)pUStack96 & 8) != 0 || (DVar4 = GetFileType(*ppvStack108), DVar4 != 0)))) {
          ppvVar1 = (HANDLE *)((int)(&DAT_0042afe0)[(int)uStack88 >> 5] + (uStack88 & 0x1f) * 8);
          *ppvVar1 = *ppvStack108;
          *(byte *)(ppvVar1 + 1) = *(byte *)pUStack96;
        }
        uStack88 = uStack88 + 1;
        pUStack96 = (UINT *)((int)pUStack96 + 1);
        ppvStack108 = ppvStack108 + 1;
      }
    }
    uStack88 = 0;
    while ((int)uStack88 < 3) {
      ppiVar2 = DAT_0042afe0 + uStack88 * 2;
      if (*ppiVar2 == (int *)0xffffffff) {
        *(undefined *)(ppiVar2 + 1) = 0x81;
        if (uStack88 == 0) {
          DStack116 = 0xfffffff6;
        }
        else {
          DStack116 = 0xfffffff5 - (uStack88 != 1);
        }
        hFile = (int *)GetStdHandle(DStack116);
        if ((hFile == (int *)0xffffffff) || (DVar4 = GetFileType(hFile), DVar4 == 0)) {
          *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x40;
        }
        else {
          *ppiVar2 = hFile;
          if ((DVar4 & 0xff) == 2) {
            *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x40;
          }
          else {
            if ((DVar4 & 0xff) == 3) {
              *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 8;
            }
          }
        }
      }
      else {
        *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x80;
      }
      uStack88 = uStack88 + 1;
    }
    SetHandleCount(DAT_0042af94);
    iVar3 = 0;
  }
  return iVar3;
}



void __cdecl __getbuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_getbuf.c",0x2e,(char *)0x0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DAT_00429930 = DAT_00429930 + 1;
  ppiVar3 = __malloc_dbg((int *)0x1000,(int *)0x2,(int *)"_getbuf.c",(int *)0x3a);
  _File->_base = (char *)ppiVar3;
  if (_File->_base == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return;
}



void __thiscall __free_dbg(void *this,uint param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int **_Dst;
  
  if (DAT_00429858 != 0) {
    if (DAT_00429848 == DAT_00429858 + -1) {
      iVar2 = __CrtCheckMemory();
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x44c,(char *)0x0,"_CrtCheckMemory()"), iVar2 == 1))
      {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DAT_00429848 = 0;
    }
    else {
      DAT_00429848 = DAT_00429848 + 1;
    }
  }
  if (param_1 != 0) {
    if ((param_2 == (int *)0x1) &&
       (iVar2 = _CheckBytes((char *)((param_1 & 0xfffffffc) - 4),DAT_00428d5b,4), iVar2 != 0)) {
      iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                                          
                             "The Block at 0x%p was allocated by aligned routines, use _aligned_free()"
                            );
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar2 = (*(code *)PTR_thunk_FUN_0041ded0_00428ec0)(3,param_1,0,param_2,0,0,0,this);
      if (iVar2 == 0) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        BVar3 = __CrtIsValidHeapPointer(param_1);
        if ((BVar3 == 0) &&
           (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x46c,(char *)0x0,
                                   "_CrtIsValidHeapPointer(pUserData)"), iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Dst = (int **)(param_1 - 0x20);
        if (((((*(uint *)(param_1 - 0xc) & 0xffff) != 4) && (*(int *)(param_1 - 0xc) != 1)) &&
            ((*(uint *)(param_1 - 0xc) & 0xffff) != 2)) &&
           ((*(int *)(param_1 - 0xc) != 3 &&
            (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x472,(char *)0x0,
                                    "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((DAT_00428d4c & 4) == 0) {
          iVar2 = _CheckBytes((char *)(_Dst + 7),DAT_00428d58,4);
          if ((iVar2 == 0) &&
             (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                     "DAMAGE: before %hs block (#%d) at 0x%p.\n"), iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar2 = _CheckBytes((char *)((int)((int)_Dst + 0x20) + (int)_Dst[4]),DAT_00428d58,4);
          if ((iVar2 == 0) &&
             (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                     "DAMAGE: after %hs block (#%d) at 0x%p.\n"), iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (_Dst[5] == (int *)0x3) {
          if (((_Dst[3] != (int *)0xfedcbabc) || (_Dst[6] != (int *)0x0)) &&
             (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x489,(char *)0x0,
                                     "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ")
             , iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          _memset(_Dst,(uint)DAT_00428d59,(size_t)(_Dst[4] + 9));
          __free_base(_Dst);
        }
        else {
          if ((_Dst[5] == (int *)0x2) && (param_2 == (int *)0x1)) {
            param_2 = (int *)0x2;
          }
          if ((_Dst[5] != param_2) &&
             (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x497,(char *)0x0,"pHead->nBlockUse == nBlockUse"
                                    ), iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          DAT_00429854 = DAT_00429854 - (int)_Dst[4];
          if ((DAT_00428d4c & 2) == 0) {
            if (*_Dst == (int *)0x0) {
              if ((DAT_00429844 != _Dst) &&
                 (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4a6,(char *)0x0,"_pLastBlock == pHead"),
                 iVar2 == 1)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              DAT_00429844 = (int **)_Dst[1];
            }
            else {
              (*_Dst)[1] = (int)_Dst[1];
            }
            if (_Dst[1] == (int *)0x0) {
              if ((DAT_00429850 != _Dst) &&
                 (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4b0,(char *)0x0,"_pFirstBlock == pHead"),
                 iVar2 == 1)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              DAT_00429850 = (int **)*_Dst;
            }
            else {
              *_Dst[1] = (int)*_Dst;
            }
            _memset(_Dst,(uint)DAT_00428d59,(size_t)(_Dst[4] + 9));
            __free_base(_Dst);
          }
          else {
            _Dst[5] = (int *)0x0;
            _memset(_Dst + 8,(uint)DAT_00428d59,(size_t)_Dst[4]);
          }
        }
      }
    }
  }
  return;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte * __wincmdln(void)

{
  bool bVar1;
  int iVar2;
  byte *pbStack16;
  byte *pbStack8;
  
  bVar1 = false;
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  if (DAT_0042b100 == (byte *)0x0) {
    pbStack16 = &DAT_004250ec;
  }
  else {
    pbStack16 = DAT_0042b100;
  }
  pbStack8 = pbStack16;
  while ((0x20 < *pbStack8 || ((*pbStack8 != 0 && (bVar1))))) {
    if (*pbStack8 == 0x22) {
      bVar1 = !bVar1;
    }
    iVar2 = __ismbblead((uint)*pbStack8);
    if ((iVar2 != 0) && (pbStack8 != (byte *)0x0)) {
      pbStack8 = pbStack8 + 1;
    }
    pbStack8 = pbStack8 + 1;
  }
  while ((*pbStack8 != 0 && (*pbStack8 < 0x21))) {
    pbStack8 = pbStack8 + 1;
  }
  return pbStack8;
}



int ** __cdecl __nh_malloc_dbg(int *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  int iVar2;
  
  while( true ) {
    ppiVar1 = __heap_alloc_dbg(param_1,param_3,param_4,param_5);
    if (ppiVar1 != (int **)0x0) {
      return ppiVar1;
    }
    if (param_2 == 0) break;
    iVar2 = __callnewh((size_t)param_1);
    if (iVar2 == 0) {
      return (int **)0x0;
    }
  }
  return (int **)0x0;
}



undefined4 ___heap_select(void)

{
  undefined4 uVar1;
  
  if ((DAT_00429638 == 2) && (4 < DAT_00429644)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



void __RTC_Initialize(void)

{
  code **ppcVar1;
  undefined4 *in_FS_OFFSET;
  code **ppcStack32;
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  puStack12 = &DAT_004256c8;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  puStack28 = &stack0xffffffd4;
  ppcVar1 = (code **)&DAT_00427828;
  while (ppcVar1 < &DAT_00427a2c) {
    uStack8 = 0;
    if (*ppcVar1 != (code *)0x0) {
      ppcStack32 = ppcVar1;
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  }
  *in_FS_OFFSET = uStack20;
  return;
}



int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE FStack48;
  FILE *pFStack16;
  int iStack12;
  undefined4 *puStack8;
  
  pFStack16 = &FStack48;
  puStack8 = (undefined4 *)&stack0x0000000c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x5d,(char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Dest == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x5e,(char *)0x0,"string != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  pFStack16->_cnt = 0x7fffffff;
  pFStack16->_flag = 0x42;
  pFStack16->_base = _Dest;
  pFStack16->_ptr = _Dest;
  iStack12 = __output(pFStack16,(byte *)_Format,puStack8);
  if (_Dest != (char *)0x0) {
    pFStack16->_cnt = pFStack16->_cnt + -1;
    if (pFStack16->_cnt < 0) {
      __flsbuf(0,pFStack16);
    }
    else {
      *pFStack16->_ptr = '\0';
      pFStack16->_ptr = pFStack16->_ptr + 1;
    }
  }
  return iStack12;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  byte *pbVar3;
  HMODULE pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined auStack292 [148];
  uint uStack132;
  undefined *puStack128;
  int iStack120;
  undefined *puStack116;
  int iStack112;
  byte *pbStack108;
  int iStack104;
  _STARTUPINFOA _Stack100;
  undefined *puStack28;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 uStack8;
  
  uStack8 = 0xffffffff;
  puStack12 = &DAT_00425028;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  auStack292._144_4_ = 0x412400;
  puStack128 = auStack292;
  puStack116 = auStack292;
  puStack28 = auStack292;
  auStack292._0_4_ = 0x94;
  GetVersionExA((LPOSVERSIONINFOA)auStack292);
  DAT_00429638 = *(int *)(puStack116 + 0x10);
  DAT_00429644 = *(int *)(puStack116 + 4);
  _DAT_00429648 = *(int *)(puStack116 + 8);
  DAT_0042963c = *(uint *)(puStack116 + 0xc) & 0x7fff;
  if (DAT_00429638 != 2) {
    DAT_0042963c = DAT_0042963c | 0x8000;
  }
  _DAT_00429640 = DAT_00429644 * 0x100 + _DAT_00429648;
  bVar1 = _check_managed_app();
  iStack112 = CONCAT31(extraout_var,bVar1);
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    _fast_error_exit(0x1c);
  }
  __RTC_Initialize();
  uStack8 = 0;
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0042b100 = GetCommandLineA();
  DAT_004295fc = ___crtGetEnvironmentStringsA();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = __setenvp();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  iStack104 = __cinit(1);
  if (iStack104 != 0) {
    __amsg_exit(iStack104);
  }
  _Stack100.dwFlags = 0;
  GetStartupInfoA((LPSTARTUPINFOA)&_Stack100);
  pbVar3 = __wincmdln();
  if ((_Stack100.dwFlags & 1) == 0) {
    uStack132 = 10;
  }
  else {
    uStack132 = (uint)_Stack100.wShowWindow;
  }
  uVar6 = 0;
  uVar7 = uStack132;
  pbStack108 = pbVar3;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  uVar5 = thunk_FUN_00411bc0((HINSTANCE)pHVar4,uVar6,pbVar3,uVar7);
  iStack120 = (int)uVar5;
  if (iStack112 == 0) {
    _exit(iStack120);
  }
  __cexit();
  *in_FS_OFFSET = uStack20;
  return iStack120;
}



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
        goto joined_r0x0041cfcc;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        if (uVar4 == 0) goto LAB_0041d013;
        goto LAB_0041d089;
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
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x0041d085:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_0041d089:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0041d013;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x0041d085;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x0041d085;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x0041d085;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0041cfcc:
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
LAB_0041d013:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



bool __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_0042aca0 = HeapAlloc(DAT_0042af80,0,0x140);
  if (DAT_0042aca0 != (LPVOID)0x0) {
    DAT_0042aca4 = param_1;
    DAT_0042ac98 = 0;
    DAT_0042ac9c = 0;
    DAT_0042acac = 0x10;
    DAT_0042aca8 = DAT_0042aca0;
  }
  return DAT_0042aca0 != (LPVOID)0x0;
}



void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint uStack64;
  uint uStack60;
  uint uStack52;
  uint *puStack28;
  uint uStack20;
  
  uVar4 = param_1[4];
  uVar9 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar9 * 0x204);
  puStack28 = (uint *)(param_2 + -4);
  uStack64 = *puStack28 - 1;
  if ((uStack64 & 1) == 0) {
    puVar7 = (uint *)((int)puStack28 + uStack64);
    uVar5 = *puVar7;
    uVar6 = *(uint *)(param_2 + -8);
    if ((uVar5 & 1) == 0) {
      uStack20 = ((int)uVar5 >> 4) - 1;
      if (0x3f < uStack20) {
        uStack20 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)uStack20;
        if (uStack20 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
          *(char *)(uVar4 + uStack20 + 4) = *(char *)(uVar4 + uStack20 + 4) + -1;
          if (*(char *)(uVar4 + uStack20 + 4) == '\0') {
            *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
          *(char *)(uVar4 + uStack20 + 4) = *(char *)(uVar4 + uStack20 + 4) + -1;
          if (*(char *)(uVar4 + uStack20 + 4) == '\0') {
            param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      uStack64 = uStack64 + uVar5;
    }
    uStack60 = ((int)uStack64 >> 4) - 1;
    if (0x3f < uStack60) {
      uStack60 = 0x3f;
    }
    if ((uVar6 & 1) == 0) {
      puStack28 = (uint *)((int)puStack28 - uVar6);
      uStack52 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uStack52) {
        uStack52 = 0x3f;
      }
      uStack64 = uStack64 + uVar6;
      uStack60 = ((int)uStack64 >> 4) - 1;
      if (0x3f < uStack60) {
        uStack60 = 0x3f;
      }
      if (uStack52 != uStack60) {
        if (puStack28[1] == puStack28[2]) {
          bVar8 = (byte)uStack52;
          if (uStack52 < 0x20) {
            *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
            *(char *)(uVar4 + uStack52 + 4) = *(char *)(uVar4 + uStack52 + 4) + -1;
            if (*(char *)(uVar4 + uStack52 + 4) == '\0') {
              *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
            }
          }
          else {
            *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
            *(char *)(uVar4 + uStack52 + 4) = *(char *)(uVar4 + uStack52 + 4) + -1;
            if (*(char *)(uVar4 + uStack52 + 4) == '\0') {
              param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
            }
          }
        }
        *(uint *)(puStack28[2] + 4) = puStack28[1];
        *(uint *)(puStack28[1] + 8) = puStack28[2];
      }
    }
    if (((uVar6 & 1) != 0) || (uStack52 != uStack60)) {
      piVar1 = piVar2 + uStack60 * 2;
      puStack28[1] = piVar1[1];
      puStack28[2] = (uint)piVar1;
      piVar1[1] = (int)puStack28;
      *(uint **)(puStack28[1] + 8) = puStack28;
      if (puStack28[1] == puStack28[2]) {
        bVar8 = (byte)uStack60;
        if (uStack60 < 0x20) {
          cVar3 = *(char *)(uVar4 + uStack60 + 4);
          *(char *)(uVar4 + uStack60 + 4) = *(char *)(uVar4 + uStack60 + 4) + '\x01';
          if (cVar3 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar4 + 0x44 + uVar9 * 4);
        }
        else {
          cVar3 = *(char *)(uVar4 + uStack60 + 4);
          *(char *)(uVar4 + uStack60 + 4) = *(char *)(uVar4 + uStack60 + 4) + '\x01';
          if (cVar3 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
        }
      }
    }
    *puStack28 = uStack64;
    *(uint *)((int)puStack28 + (uStack64 - 4)) = uStack64;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (DAT_0042ac98 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_0042acb0 * 0x8000 + DAT_0042ac98[3]),0x8000,0x4000);
        DAT_0042ac98[2] = 0x80000000U >> ((byte)DAT_0042acb0 & 0x1f) | DAT_0042ac98[2];
        *(undefined4 *)(DAT_0042ac98[4] + 0xc4 + DAT_0042acb0 * 4) = 0;
        *(char *)(DAT_0042ac98[4] + 0x43) = *(char *)(DAT_0042ac98[4] + 0x43) + -1;
        if (*(char *)(DAT_0042ac98[4] + 0x43) == '\0') {
          DAT_0042ac98[1] = DAT_0042ac98[1] & 0xfffffffe;
        }
        if (DAT_0042ac98[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_0042ac98[3],0,0x8000);
          HeapFree(DAT_0042af80,0,(LPVOID)DAT_0042ac98[4]);
          FID_conflict__memcpy
                    (DAT_0042ac98,DAT_0042ac98 + 5,
                     (DAT_0042ac9c * 0x14 + DAT_0042aca0) - (int)(DAT_0042ac98 + 5));
          DAT_0042ac9c = DAT_0042ac9c + -1;
          if (DAT_0042ac98 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_0042aca8 = DAT_0042aca0;
        }
      }
      DAT_0042ac98 = param_1;
      DAT_0042acb0 = uVar9;
    }
  }
  return;
}



void thunk_FUN_00414a72(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00428c48 = in_EAX;
  DAT_00428c4c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00428c50 = unaff_EBP;
  return;
}



undefined8 thunk_FUN_00411bc0(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 auStack244 [49];
  HACCEL pHStack48;
  tagMSG tStack36;
  undefined4 uStack8;
  
  iVar1 = 0x3c;
  puVar3 = auStack244;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_00411b80();
  LoadStringA(param_1,0x67,&DAT_00429568,100);
  __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  LoadStringA(param_1,0x6d,&DAT_00429500,100);
  __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  thunk_FUN_00411d60(param_1);
  uVar4 = thunk_FUN_00411ea0(param_1,param_4);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 != 0) {
    LoadAcceleratorsA(param_1,(LPCSTR)0x6d);
    uVar4 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
    pHStack48 = (HACCEL)uVar4;
    while( true ) {
      GetMessageA((LPMSG)&tStack36,(HWND)0x0,0,0);
      uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) break;
      TranslateAcceleratorA(tStack36.hwnd,pHStack48,(LPMSG)&tStack36);
      uVar4 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
      if ((int)uVar4 == 0) {
        TranslateMessage((MSG *)&tStack36);
        __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
        DispatchMessageA((MSG *)&tStack36);
        __RTC_CheckEsp(extraout_ECX_05,extraout_EDX_05);
      }
    }
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411cf4);
  uStack8 = 0x411cee;
  uVar4 = __RTC_CheckEsp(extraout_ECX_06,uVar2);
  return uVar4;
}



int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  code *pcVar1;
  FILE *_File_00;
  int iVar2;
  uint uVar3;
  undefined *puStack24;
  char *pcStack16;
  char *pcStack8;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x66,(char *)0x0,"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  _File_00 = _File;
  uVar3 = _File->_file;
  if (((_File->_flag & 0x82U) != 0) && ((_File->_flag & 0x40U) == 0)) {
    if ((_File->_flag & 1U) != 0) {
      _File->_cnt = 0;
      if ((_File->_flag & 0x10U) == 0) {
        _File->_flag = _File->_flag | 0x20;
        return 0xffffffff;
      }
      _File->_ptr = _File->_base;
      _File->_flag = _File->_flag & 0xfffffffe;
    }
    _File->_flag = _File->_flag | 2;
    _File->_flag = _File->_flag & 0xffffffef;
    _File->_cnt = 0;
    pcStack16 = (char *)0x0;
    if (((_File->_flag & 0x10cU) == 0) &&
       (((_File != (FILE *)&DAT_00428f20 && (_File != (FILE *)&DAT_00428f40)) ||
        (iVar2 = __isatty(uVar3), iVar2 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108U) == 0) {
      pcStack8 = (char *)0x1;
      pcStack16 = (char *)__write(uVar3,&_Ch,1);
    }
    else {
      if (((int)(_File_00->_ptr + -(int)_File_00->_base) < 0) &&
         (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x9d,(char *)0x0,
                                 "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)")
         , iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      pcStack8 = _File_00->_ptr + -(int)_File_00->_base;
      _File_00->_ptr = _File_00->_base + 1;
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)pcStack8 < 1) {
        if (uVar3 == 0xffffffff) {
          puStack24 = &DAT_00428c34;
        }
        else {
          puStack24 = (undefined *)((&DAT_0042afe0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 8);
        }
        if ((puStack24[4] & 0x20) != 0) {
          __lseek(uVar3,0,2);
        }
      }
      else {
        pcStack16 = (char *)__write(uVar3,_File_00->_base,(uint)pcStack8);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (pcStack16 == pcStack8) {
      uVar3 = _Ch & 0xff;
    }
    else {
      _File_00->_flag = _File_00->_flag | 0x20;
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  _File->_flag = _File->_flag | 0x20;
  return 0xffffffff;
}



void __cdecl __CrtMemDumpAllObjectsSince(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puStack12;
  undefined4 *puStack8;
  
  puStack12 = (undefined4 *)0x0;
  iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    puStack12 = (undefined4 *)*param_1;
  }
  puStack8 = DAT_00429850;
  do {
    if ((puStack8 == (undefined4 *)0x0) || (puStack8 == puStack12)) {
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
      if (iVar2 != 1) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((puStack8[5] & 0xffff) != 3) && ((puStack8[5] & 0xffff) != 0)) &&
       (((puStack8[5] & 0xffff) != 2 || ((DAT_00428d4c & 0x10) != 0)))) {
      if (puStack8[2] != 0) {
        iVar2 = __CrtIsValidPointer((void *)puStack8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((puStack8[5] & 0xffff) == 4) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                               "client block at 0x%p, subtype %x, %Iu bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_0042af60 == (code *)0x0) {
          __printMemBlockData((int)puStack8);
        }
        else {
          (*DAT_0042af60)(puStack8 + 8,puStack8[4]);
        }
      }
      else {
        if (puStack8[5] == 1) {
          iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "normal block at 0x%p, %Iu bytes long.\n");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          __printMemBlockData((int)puStack8);
        }
        else {
          if ((puStack8[5] & 0xffff) == 2) {
            iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                   "crt block at 0x%p, subtype %x, %Iu bytes long.\n");
            if (iVar2 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            __printMemBlockData((int)puStack8);
          }
        }
      }
    }
    puStack8 = (undefined4 *)*puStack8;
  } while( true );
}



int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_0042af94) {
    uVar1 = (int)*(char *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40
    ;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __FF_MSGBANNER(void)

{
  if ((_DAT_00429604 == 1) || ((_DAT_00429604 == 0 && (_DAT_00428b44 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (_DAT_004297d8 != (code *)0x0) {
      (*_DAT_004297d8)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __amsg_exit(int param_1)

{
  if (_DAT_00429604 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*_DAT_00428b40)(0xff);
  return;
}



int ** __cdecl __realloc_dbg(uint param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  
  ppiVar1 = _realloc_help(param_1,param_2,param_3,param_4,param_5,1);
  return ppiVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iStack16;
  
  piVar4 = _xcptlookup(_ExceptionNum);
  uVar3 = DAT_00429690;
  if ((piVar4 == (int *)0x0) || (piVar4[2] == 0)) {
    iVar5 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else {
    if (piVar4[2] == 5) {
      piVar4[2] = 0;
      iVar5 = 1;
    }
    else {
      if (piVar4[2] == 1) {
        iVar5 = -1;
        DAT_00429690 = (_EXCEPTION_POINTERS *)uVar3;
      }
      else {
        pcVar1 = (code *)piVar4[2];
        DAT_00429690 = _ExceptionPtr;
        if (piVar4[1] == 8) {
          iStack16 = DAT_00428c08;
          while (uVar2 = DAT_00428c14, iStack16 < DAT_00428c08 + _DAT_00428c0c) {
            *(undefined4 *)(iStack16 * 0xc + 0x428b98) = 0;
            iStack16 = iStack16 + 1;
          }
          if (*piVar4 == -0x3fffff72) {
            DAT_00428c14 = 0x83;
          }
          else {
            if (*piVar4 == -0x3fffff70) {
              DAT_00428c14 = 0x81;
            }
            else {
              if (*piVar4 == -0x3fffff6f) {
                DAT_00428c14 = 0x84;
              }
              else {
                if (*piVar4 == -0x3fffff6d) {
                  DAT_00428c14 = 0x85;
                }
                else {
                  if (*piVar4 == -0x3fffff73) {
                    DAT_00428c14 = 0x82;
                  }
                  else {
                    if (*piVar4 == -0x3fffff71) {
                      DAT_00428c14 = 0x86;
                    }
                    else {
                      if (*piVar4 == -0x3fffff6e) {
                        DAT_00428c14 = 0x8a;
                      }
                    }
                  }
                }
              }
            }
          }
          (*pcVar1)(8,DAT_00428c14);
          DAT_00428c14 = uVar2;
        }
        else {
          piVar4[2] = 0;
          (*pcVar1)(piVar4[1]);
        }
        iVar5 = -1;
        DAT_00429690 = (_EXCEPTION_POINTERS *)uVar3;
      }
    }
  }
  return iVar5;
}



int ** __cdecl __expand_dbg(uint param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  
  ppiVar1 = _realloc_help(param_1,param_2,param_3,param_4,param_5,0);
  return ppiVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __close(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  int iVar4;
  DWORD DStack8;
  
  if ((DAT_0042af94 <= (uint)_FileHandle) ||
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) == 0)) {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    return -1;
  }
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if ((_FileHandle == 1) || (_FileHandle == 2)) {
      iVar1 = __get_osfhandle(1);
      iVar2 = __get_osfhandle(2);
      if (iVar1 == iVar2) goto LAB_00422f77;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DStack8 = GetLastError();
      goto LAB_00422f89;
    }
  }
LAB_00422f77:
  DStack8 = 0;
LAB_00422f89:
  __free_osfhnd(_FileHandle);
  *(undefined *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) = 0;
  if (DStack8 == 0) {
    iVar4 = 0;
  }
  else {
    __dosmaperr(DStack8);
    iVar4 = -1;
  }
  return iVar4;
}



int * __cdecl ___sbh_alloc_block(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iStack56;
  uint uStack52;
  uint *puStack32;
  uint uStack28;
  int iStack24;
  int iStack20;
  uint uStack8;
  
  puVar5 = DAT_0042aca0 + DAT_0042ac9c * 5;
  uVar8 = param_1 + 0x17U & 0xfffffff0;
  iVar9 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar7 = (byte)iVar9;
  if (iVar9 < 0x20) {
    uStack28 = 0xffffffff >> (bVar7 & 0x1f);
    uStack52 = 0xffffffff;
  }
  else {
    uStack28 = 0;
    uStack52 = 0xffffffff >> (bVar7 - 0x20 & 0x1f);
  }
  puStack32 = DAT_0042aca8;
  while ((puStack32 < puVar5 && ((uStack28 & *puStack32 | uStack52 & puStack32[1]) == 0))) {
    puStack32 = puStack32 + 5;
  }
  if (puStack32 == puVar5) {
    puStack32 = DAT_0042aca0;
    while ((puStack32 < DAT_0042aca8 && ((uStack28 & *puStack32 | uStack52 & puStack32[1]) == 0))) {
      puStack32 = puStack32 + 5;
    }
    if (puStack32 == DAT_0042aca8) {
      while ((puStack32 < puVar5 && (puStack32[2] == 0))) {
        puStack32 = puStack32 + 5;
      }
      if (puStack32 == puVar5) {
        puStack32 = DAT_0042aca0;
        while ((puStack32 < DAT_0042aca8 && (puStack32[2] == 0))) {
          puStack32 = puStack32 + 5;
        }
        if ((puStack32 == DAT_0042aca8) &&
           (puStack32 = ___sbh_alloc_new_region(), puStack32 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar9 = ___sbh_alloc_new_group((int)puStack32);
      *(int *)puStack32[4] = iVar9;
      if (*(int *)puStack32[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_0042aca8 = puStack32;
  piVar4 = (int *)puStack32[4];
  iStack24 = *piVar4;
  if ((iStack24 == -1) ||
     ((uStack28 & piVar4[iStack24 + 0x11] | uStack52 & piVar4[iStack24 + 0x31]) == 0)) {
    iStack24 = 0;
    while ((uStack28 & piVar4[iStack24 + 0x11] | uStack52 & piVar4[iStack24 + 0x31]) == 0) {
      iStack24 = iStack24 + 1;
    }
  }
  piVar2 = piVar4 + iStack24 * 0x81 + 0x51;
  iStack56 = 0;
  uStack8 = uStack28 & piVar4[iStack24 + 0x11];
  if (uStack8 == 0) {
    iStack56 = 0x20;
    uStack8 = uStack52 & piVar4[iStack24 + 0x31];
  }
  while (-1 < (int)uStack8) {
    uStack8 = uStack8 << 1;
    iStack56 = iStack56 + 1;
  }
  piVar6 = (int *)piVar2[iStack56 * 2 + 1];
  iVar9 = *piVar6 - uVar8;
  iStack20 = (iVar9 >> 4) + -1;
  if (0x3f < iStack20) {
    iStack20 = 0x3f;
  }
  if (iStack20 != iStack56) {
    if (piVar6[1] == piVar6[2]) {
      bVar7 = (byte)iStack56;
      if (iStack56 < 0x20) {
        piVar4[iStack24 + 0x11] = ~(0x80000000U >> (bVar7 & 0x1f)) & piVar4[iStack24 + 0x11];
        *(char *)((int)piVar4 + iStack56 + 4) = *(char *)((int)piVar4 + iStack56 + 4) + -1;
        if (*(char *)((int)piVar4 + iStack56 + 4) == '\0') {
          *puStack32 = ~(0x80000000U >> (bVar7 & 0x1f)) & *puStack32;
        }
      }
      else {
        piVar4[iStack24 + 0x31] = ~(0x80000000U >> (bVar7 - 0x20 & 0x1f)) & piVar4[iStack24 + 0x31];
        *(char *)((int)piVar4 + iStack56 + 4) = *(char *)((int)piVar4 + iStack56 + 4) + -1;
        if (*(char *)((int)piVar4 + iStack56 + 4) == '\0') {
          puStack32[1] = ~(0x80000000U >> (bVar7 - 0x20 & 0x1f)) & puStack32[1];
        }
      }
    }
    *(int *)(piVar6[2] + 4) = piVar6[1];
    *(int *)(piVar6[1] + 8) = piVar6[2];
    if (iVar9 != 0) {
      piVar1 = piVar2 + iStack20 * 2;
      piVar6[1] = piVar1[1];
      piVar6[2] = (int)piVar1;
      piVar1[1] = (int)piVar6;
      *(int **)(piVar6[1] + 8) = piVar6;
      if (piVar6[1] == piVar6[2]) {
        bVar7 = (byte)iStack20;
        if (iStack20 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + iStack20 + 4);
          *(char *)((int)piVar4 + iStack20 + 4) = *(char *)((int)piVar4 + iStack20 + 4) + '\x01';
          if (cVar3 == '\0') {
            *puStack32 = 0x80000000U >> (bVar7 & 0x1f) | *puStack32;
          }
          piVar4[iStack24 + 0x11] = 0x80000000U >> (bVar7 & 0x1f) | piVar4[iStack24 + 0x11];
        }
        else {
          cVar3 = *(char *)((int)piVar4 + iStack20 + 4);
          *(char *)((int)piVar4 + iStack20 + 4) = *(char *)((int)piVar4 + iStack20 + 4) + '\x01';
          if (cVar3 == '\0') {
            puStack32[1] = 0x80000000U >> (bVar7 - 0x20 & 0x1f) | puStack32[1];
          }
          piVar4[iStack24 + 0x31] = 0x80000000U >> (bVar7 - 0x20 & 0x1f) | piVar4[iStack24 + 0x31];
        }
      }
    }
  }
  if (iVar9 != 0) {
    *piVar6 = iVar9;
    *(int *)((int)piVar6 + iVar9 + -4) = iVar9;
  }
  piVar6 = (int *)((int)piVar6 + iVar9);
  *piVar6 = uVar8 + 1;
  *(uint *)((int)piVar6 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar9 == 0) && (puStack32 == DAT_0042ac98)) && (iStack24 == DAT_0042acb0)) {
    DAT_0042ac98 = (uint *)0x0;
  }
  *piVar4 = iStack24;
  return piVar6 + 1;
}



int __cdecl __flush(FILE *_File)

{
  char *pcVar1;
  char *_MaxCharCount;
  int iStack8;
  
  iStack8 = 0;
  if ((((_File->_flag & 3U) == 2) && ((_File->_flag & 0x108U) != 0)) &&
     (_MaxCharCount = _File->_ptr + -(int)_File->_base, 0 < (int)_MaxCharCount)) {
    pcVar1 = (char *)__write(_File->_file,_File->_base,(uint)_MaxCharCount);
    if (pcVar1 == _MaxCharCount) {
      if ((_File->_flag & 0x80U) != 0) {
        _File->_flag = _File->_flag & 0xfffffffd;
      }
    }
    else {
      _File->_flag = _File->_flag | 0x20;
      iStack8 = -1;
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return iStack8;
}



int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = _flsall(0);
  }
  else {
    iVar1 = __flush(_File);
    if (iVar1 == 0) {
      if ((_File->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __commit(_File->_file);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((param_2 < 4) && (-1 < param_2)) {
    if (*(int *)(&DAT_00428b60 + param_2 * 4) != -1) {
      failwithmessage(param_1,*(int *)(&DAT_00428b60 + param_2 * 4),param_2,
                      (&PTR_s_The_value_of_ESP_was_not_properl_00428b70)[param_2]);
    }
    return;
  }
  failwithmessage(param_1,1,4,PTR_s_Unknown_Runtime_Check_Error_00428b80);
  return;
}



int ** __cdecl __calloc_dbg(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  int **ppiStack12;
  
  ppiVar1 = __malloc_dbg((int *)(param_2 * param_1),param_3,param_4,param_5);
  if (ppiVar1 != (int **)0x0) {
    ppiStack12 = ppiVar1;
    while (ppiStack12 < (int **)((int)ppiVar1 + (int)(int *)(param_2 * param_1))) {
      *(undefined *)ppiStack12 = 0;
      ppiStack12 = (int **)((int)ppiStack12 + 1);
    }
  }
  return ppiVar1;
}



void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR aCStack20 [6];
  undefined uStack14;
  int iStack12;
  long lStack8;
  
  iStack12 = DAT_00428eb0;
  uStack14 = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,aCStack20,6);
  if (iVar1 == 0) {
    lStack8 = -1;
  }
  else {
    lStack8 = _atol(aCStack20);
  }
  thunk_FUN_0041d0f0(iStack12);
  return;
}



long __cdecl _atol(char *_Str)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iStack20;
  uint uStack16;
  long lStack12;
  
  while (iVar2 = __ismbcspace((uint)(byte)*_Str), iVar2 != 0) {
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  if ((uVar3 == 0x2d) || (pbVar1 = (byte *)(_Str + 1), uStack16 = uVar3, uVar3 == 0x2b)) {
    uStack16 = (uint)(byte)_Str[1];
    pbVar1 = (byte *)(_Str + 2);
  }
  _Str = (char *)pbVar1;
  lStack12 = 0;
  while( true ) {
    if ((uStack16 < 0x30) || (0x39 < uStack16)) {
      iStack20 = -1;
    }
    else {
      iStack20 = uStack16 - 0x30;
    }
    if (iStack20 == -1) break;
    lStack12 = lStack12 * 10 + iStack20;
    uStack16 = (uint)(byte)*_Str;
    _Str = _Str + 1;
  }
  if (uVar3 == 0x2d) {
    lStack12 = -lStack12;
  }
  return lStack12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (_DAT_0042b0fc != (code *)0x0) {
    (*_DAT_0042b0fc)(param_1);
  }
  iVar1 = __initterm_e((undefined **)&DAT_0042830c,(undefined **)&DAT_00428520);
  if (iVar1 == 0) {
    _atexit(&LAB_004110cd);
    __initterm((undefined **)&DAT_00428000,(undefined **)&DAT_00428208);
    iVar1 = 0;
  }
  return iVar1;
}



void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __setenvp(void)

{
  int iVar1;
  size_t sVar2;
  int **ppiVar3;
  uint *extraout_ECX;
  uint *this;
  uint **ppuStack16;
  int iStack12;
  uint *puStack8;
  
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  iStack12 = 0;
  puStack8 = DAT_004295fc;
  if (DAT_004295fc == (uint *)0x0) {
    iVar1 = -1;
  }
  else {
    while (*(char *)puStack8 != '\0') {
      if (*(char *)puStack8 != '=') {
        iStack12 = iStack12 + 1;
      }
      sVar2 = _strlen((char *)puStack8);
      puStack8 = (uint *)((int)puStack8 + sVar2 + 1);
    }
    DAT_00429658 = (uint **)__malloc_dbg((int *)(iStack12 * 4 + 4),(int *)0x2,(int *)"stdenvp.c",
                                         (int *)0x75);
    if (DAT_00429658 == (uint **)0x0) {
      iVar1 = -1;
    }
    else {
      puStack8 = DAT_004295fc;
      this = extraout_ECX;
      ppuStack16 = DAT_00429658;
      while (*(char *)puStack8 != '\0') {
        sVar2 = _strlen((char *)puStack8);
        if (*(char *)puStack8 != '=') {
          ppiVar3 = __malloc_dbg((int *)(sVar2 + 1),(int *)0x2,(int *)"stdenvp.c",(int *)0x82);
          *ppuStack16 = (uint *)ppiVar3;
          if (*ppuStack16 == (uint *)0x0) {
            __free_dbg(DAT_00429658,(uint)DAT_00429658,(int *)0x2);
            DAT_00429658 = (uint **)0x0;
            return -1;
          }
          thunk_FUN_0041a040(*ppuStack16,puStack8);
          ppuStack16 = ppuStack16 + 1;
        }
        this = (uint *)((int)puStack8 + (int)(int *)(sVar2 + 1));
        puStack8 = this;
      }
      __free_dbg(this,(uint)DAT_004295fc,(int *)0x2);
      DAT_004295fc = (uint *)0x0;
      *ppuStack16 = (uint *)0x0;
      _DAT_0042b0e0 = 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined8 __cdecl thunk_FUN_00411d60(HINSTANCE param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 auStack252 [49];
  WNDCLASSEXA WStack56;
  undefined4 uStack8;
  
  iVar1 = 0x3e;
  puVar2 = auStack252;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  WStack56.cbSize = 0x30;
  WStack56.style = 3;
  WStack56.lpfnWndProc = (WNDPROC)&LAB_00411447;
  WStack56.cbClsExtra = 0;
  WStack56.cbWndExtra = 0;
  WStack56.hInstance = param_1;
  LoadIconA(param_1,(LPCSTR)0x6b);
  uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  WStack56.hIcon = (HICON)uVar3;
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  uVar3 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  WStack56.hCursor = (HCURSOR)uVar3;
  WStack56.hbrBackground = (HBRUSH)0x6;
  WStack56.lpszMenuName = (LPCSTR)0x6d;
  WStack56.lpszClassName = &DAT_00429500;
  LoadIconA(WStack56.hInstance,(LPCSTR)0x6c);
  uVar3 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  WStack56.hIconSm = (HICON)uVar3;
  RegisterClassExA(&WStack56);
  uVar3 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411e3d);
  uStack8 = 0x411e39;
  uVar3 = __RTC_CheckEsp(extraout_ECX_03,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



void __cdecl __aligned_free_dbg(uint param_1)

{
  void *this;
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = _CheckBytes((char *)(param_1 - 4),DAT_00428d58,4);
    if (iVar2 == 0) {
      iVar2 = _CheckBytes((char *)((param_1 & 0xfffffffc) - 4),DAT_00428d5b,4);
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                 "Damage before 0x%p which was allocated by aligned routine\n"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = *(void **)((param_1 & 0xfffffffc) - 8);
      __free_dbg(this,(uint)this,(int *)0x1);
    }
    else {
      iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                             "The block at 0x%p was not allocated by _aligned routines, use free()")
      ;
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}



undefined4 thunk_FUN_00412850(void)

{
  return DAT_0042960c;
}



undefined4 FUN_00411b80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [48];
  
  iVar1 = 0x30;
  puVar2 = local_c4;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return 5;
}



undefined8 FUN_00411bc0(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_f4 [49];
  HACCEL local_30;
  tagMSG local_24;
  undefined4 uStack8;
  
  iVar1 = 0x3c;
  puVar3 = local_f4;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_00411b80();
  LoadStringA(param_1,0x67,&DAT_00429568,100);
  __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  LoadStringA(param_1,0x6d,&DAT_00429500,100);
  __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  thunk_FUN_00411d60(param_1);
  uVar4 = thunk_FUN_00411ea0(param_1,param_4);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 != 0) {
    LoadAcceleratorsA(param_1,(LPCSTR)0x6d);
    uVar4 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
    local_30 = (HACCEL)uVar4;
    while( true ) {
      GetMessageA((LPMSG)&local_24,(HWND)0x0,0,0);
      uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) break;
      TranslateAcceleratorA(local_24.hwnd,local_30,(LPMSG)&local_24);
      uVar4 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
      if ((int)uVar4 == 0) {
        TranslateMessage((MSG *)&local_24);
        __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
        DispatchMessageA((MSG *)&local_24);
        __RTC_CheckEsp(extraout_ECX_05,extraout_EDX_05);
      }
    }
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411cf4);
  uStack8 = 0x411cee;
  uVar4 = __RTC_CheckEsp(extraout_ECX_06,uVar2);
  return uVar4;
}



undefined8 __cdecl FUN_00411d60(HINSTANCE param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_fc [49];
  WNDCLASSEXA local_38;
  undefined4 uStack8;
  
  iVar1 = 0x3e;
  puVar2 = local_fc;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_38.cbSize = 0x30;
  local_38.style = 3;
  local_38.lpfnWndProc = (WNDPROC)&LAB_00411447;
  local_38.cbClsExtra = 0;
  local_38.cbWndExtra = 0;
  local_38.hInstance = param_1;
  LoadIconA(param_1,(LPCSTR)0x6b);
  uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  local_38.hIcon = (HICON)uVar3;
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  uVar3 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  local_38.hCursor = (HCURSOR)uVar3;
  local_38.hbrBackground = (HBRUSH)0x6;
  local_38.lpszMenuName = (LPCSTR)0x6d;
  local_38.lpszClassName = &DAT_00429500;
  LoadIconA(local_38.hInstance,(LPCSTR)0x6c);
  uVar3 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  local_38.hIconSm = (HICON)uVar3;
  RegisterClassExA(&local_38);
  uVar3 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411e3d);
  uStack8 = 0x411e39;
  uVar3 = __RTC_CheckEsp(extraout_ECX_03,(int)((ulonglong)uVar3 >> 0x20));
  return uVar3;
}



undefined8 __cdecl FUN_00411ea0(HINSTANCE param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 local_d0 [49];
  HWND local_c;
  undefined4 uStack8;
  
  iVar1 = 0x33;
  puVar3 = local_d0;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  DAT_004295cc = param_1;
  CreateWindowExA(0,&DAT_00429500,&DAT_00429568,0xcf0000,-0x80000000,0,-0x80000000,0,(HWND)0x0,
                  (HMENU)0x0,param_1,(LPVOID)0x0);
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  local_c = (HWND)uVar4;
  uVar2 = extraout_ECX_00;
  if (local_c != (HWND)0x0) {
    ShowWindow(local_c,param_2);
    __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_00);
    UpdateWindow(local_c);
    uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_01);
    uVar4 = uVar4 & 0xffffffff00000000 | ZEXT48(local_c);
    uVar2 = extraout_ECX_03;
  }
  local_c = (HWND)uVar4;
  uStack8 = 0x411f4a;
  uVar5 = __RTC_CheckEsp(uVar2,(int)(uVar4 >> 0x20));
  return uVar5;
}



undefined8 FUN_00411f80(HWND param_1,UINT param_2,uint param_3,LPARAM param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint local_134 [50];
  undefined4 local_6c;
  tagPAINTSTRUCT local_60;
  uint local_18;
  uint local_c;
  undefined4 uStack8;
  
  iVar1 = 0x4c;
  puVar2 = local_134;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_134[0] = param_2;
  if (param_2 == 2) {
    PostQuitMessage(0);
    uVar3 = __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
  }
  else {
    if (param_2 == 0xf) {
      BeginPaint(param_1,(LPPAINTSTRUCT)&local_60);
      uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
      local_6c = (undefined4)uVar4;
      EndPaint(param_1,(PAINTSTRUCT *)&local_60);
      uVar3 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
    }
    else {
      if (param_2 != 0x111) {
        DefWindowProcA(param_1,param_2,param_3,param_4);
        uVar3 = __RTC_CheckEsp(extraout_ECX_05,extraout_EDX_05);
        goto LAB_004120cf;
      }
      local_134[0] = param_3 & 0xffff;
      local_18 = param_3 >> 0x10;
      local_c = local_134[0];
      if (local_134[0] == 0x68) {
        DialogBoxParamA(DAT_004295cc,(LPCSTR)0x67,param_1,(DLGPROC)&LAB_00411339,0);
        uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
      }
      else {
        if (local_134[0] != 0x69) {
          DefWindowProcA(param_1,0x111,param_3,param_4);
          uVar3 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
          goto LAB_004120cf;
        }
        DestroyWindow(param_1);
        uVar3 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
      }
    }
  }
  uVar3 = uVar3 & 0xffffffff00000000;
LAB_004120cf:
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_004120f6);
  uStack8 = 0x4120f0;
  uVar4 = __RTC_CheckEsp(extraout_ECX_06,(int)(uVar3 >> 0x20));
  return uVar4;
}



undefined8 __fastcall
FUN_00412170(undefined4 param_1,undefined4 param_2,HWND param_3,int param_4,ushort param_5)

{
  uint uVar1;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  int *piVar2;
  undefined8 uVar3;
  int local_c8 [48];
  undefined4 uStack8;
  
  uVar1 = 0x31;
  piVar2 = local_c8;
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    *piVar2 = -0x33333334;
    piVar2 = piVar2 + 1;
  }
  local_c8[0] = param_4;
  if (((param_4 != 0x110) && (param_4 == 0x111)) &&
     ((param_5 == 1 || (uVar1 = (uint)param_5, uVar1 == 2)))) {
    EndDialog(param_3,(uint)param_5);
    uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = extraout_ECX_00;
  }
  uStack8 = 0x412210;
  uVar3 = __RTC_CheckEsp(uVar1,param_2);
  return uVar3;
}



// Library Function - Single Match
//  __RTC_CheckEsp
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

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
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

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



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _WinMainCRTStartup
// 
// Library: Visual Studio 2003 Debug

int _WinMainCRTStartup(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  byte *pbVar3;
  HMODULE pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined auStack292 [148];
  uint local_84;
  undefined *local_80;
  int local_78;
  undefined *local_74;
  int local_70;
  byte *local_6c;
  int local_68;
  _STARTUPINFOA local_64;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00425028;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  auStack292._144_4_ = 0x412400;
  local_80 = auStack292;
  local_74 = auStack292;
  local_1c = auStack292;
  auStack292._0_4_ = 0x94;
  GetVersionExA((LPOSVERSIONINFOA)auStack292);
  DAT_00429638 = *(int *)(local_74 + 0x10);
  DAT_00429644 = *(int *)(local_74 + 4);
  _DAT_00429648 = *(int *)(local_74 + 8);
  DAT_0042963c = *(uint *)(local_74 + 0xc) & 0x7fff;
  if (DAT_00429638 != 2) {
    DAT_0042963c = DAT_0042963c | 0x8000;
  }
  _DAT_00429640 = DAT_00429644 * 0x100 + _DAT_00429648;
  bVar1 = _check_managed_app();
  local_70 = CONCAT31(extraout_var,bVar1);
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    _fast_error_exit(0x1c);
  }
  __RTC_Initialize();
  local_8 = 0;
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0042b100 = GetCommandLineA();
  DAT_004295fc = ___crtGetEnvironmentStringsA();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = __setenvp();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  local_68 = __cinit(1);
  if (local_68 != 0) {
    __amsg_exit(local_68);
  }
  local_64.dwFlags = 0;
  GetStartupInfoA((LPSTARTUPINFOA)&local_64);
  pbVar3 = __wincmdln();
  if ((local_64.dwFlags & 1) == 0) {
    local_84 = 10;
  }
  else {
    local_84 = (uint)local_64.wShowWindow;
  }
  uVar6 = 0;
  uVar7 = local_84;
  local_6c = pbVar3;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  uVar5 = thunk_FUN_00411bc0((HINSTANCE)pHVar4,uVar6,pbVar3,uVar7);
  local_78 = (int)uVar5;
  if (local_70 == 0) {
    _exit(local_78);
  }
  __cexit();
  *in_FS_OFFSET = local_14;
  return local_78;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 2003 Debug

void __cdecl __amsg_exit(int param_1)

{
  if (_DAT_00429604 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*_DAT_00428b40)(0xff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _fast_error_exit
// 
// Library: Visual Studio 2003 Debug

void __cdecl _fast_error_exit(int param_1)

{
  if (_DAT_00429604 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  thunk_FUN_004133d0(0xff);
  return;
}



// Library Function - Single Match
//  _check_managed_app
// 
// Library: Visual Studio 2003 Debug

bool _check_managed_app(void)

{
  HMODULE pHVar1;
  int *piVar2;
  bool bVar3;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if (*(short *)&pHVar1->unused == 0x5a4d) {
    piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused);
    if (*piVar2 == 0x4550) {
      if (*(short *)(piVar2 + 6) == 0x10b) {
        if ((uint)piVar2[0x1d] < 0xf) {
          bVar3 = false;
        }
        else {
          bVar3 = piVar2[0x3a] != 0;
        }
      }
      else {
        if (*(short *)(piVar2 + 6) == 0x20b) {
          if ((uint)piVar2[0x21] < 0xf) {
            bVar3 = false;
          }
          else {
            bVar3 = piVar2[0x3e] != 0;
          }
        }
        else {
          bVar3 = false;
        }
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



undefined * __cdecl FUN_004127d0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 4)) {
    return (&PTR_s_Stack_pointer_corruption_00428b4c)[param_1];
  }
  return (undefined *)0x0;
}



// Library Function - Single Match
//  __RTC_SetErrorType
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

undefined4 __cdecl __RTC_SetErrorType(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 4)) {
    uVar1 = *(undefined4 *)(&DAT_00428b60 + param_1 * 4);
    *(undefined4 *)(&DAT_00428b60 + param_1 * 4) = param_2;
    return uVar1;
  }
  return 0xffffffff;
}



undefined4 __cdecl FUN_00412830(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042960c;
  DAT_0042960c = param_1;
  return uVar1;
}



undefined4 FUN_00412850(void)

{
  return DAT_0042960c;
}



undefined4 FUN_00412863(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = __CrtDbgReport(1,"i386\\chkesp.c",0x41,"",
                                                  
                         "The value of ESP was not properly saved across a function call.  This is usually a result of calling a function declared with one calling convention with a function pointer declared with a different calling convention. "
                        );
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return in_EAX;
}



undefined * FUN_004128b0(void)

{
  return __CrtDbgReport;
}



// Library Function - Single Match
//  void __cdecl _RTC_Failure(void *,int)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((param_2 < 4) && (-1 < param_2)) {
    if (*(int *)(&DAT_00428b60 + param_2 * 4) != -1) {
      failwithmessage(param_1,*(int *)(&DAT_00428b60 + param_2 * 4),param_2,
                      (&PTR_s_The_value_of_ESP_was_not_properl_00428b70)[param_2]);
    }
    return;
  }
  failwithmessage(param_1,1,4,PTR_s_Unknown_Runtime_Check_Error_00428b80);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  void __cdecl failwithmessage(void *,int,int,char const *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __cdecl failwithmessage(void *param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  wchar_t *local_20;
  code *local_10;
  int local_c;
  char *local_8;
  
  local_20 = (wchar_t *)param_1;
  pcVar4 = (code *)thunk_FUN_00412850();
  local_10 = pcVar4;
  iVar5 = DebuggerProbe(0x1002);
  if (iVar5 == 0) {
    bVar3 = true;
  }
  else {
    pcVar6 = param_4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_20 = (wchar_t *)0x412978;
    iVar5 = -((int)(pcVar6 + -(int)(param_4 + 1)) * 2 + 7U & 0xfffffffc);
    cVar1 = *param_4;
    iVar7 = 0;
    while (cVar1 != '\0') {
      *(short *)(&stack0xffffffe4 + iVar7 * 2) = (short)cVar1;
      cVar1 = param_4[iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    *(undefined **)((int)&local_20 + iVar5) = &stack0xffffffe4;
    *(undefined2 *)(&stack0xffffffe4 + iVar7 * 2) = 0;
    uVar2 = *(undefined4 *)(&DAT_004251f8 + param_3 * 4);
    *(void **)(&stack0xffffffdc + iVar5) = param_1;
    *(undefined4 *)(&stack0xffffffd8 + iVar5) = uVar2;
    *(int *)(&stack0xffffffd4 + iVar5) = param_3;
    *(undefined4 *)(&stack0xffffffd0 + iVar5) = 0x4129ac;
    iVar5 = DebuggerRuntime(*(ulong *)(&stack0xffffffd4 + iVar5),*(int *)(&stack0xffffffd8 + iVar5),
                            *(void **)(&stack0xffffffdc + iVar5),
                            *(wchar_t **)((int)&local_20 + iVar5));
    if (iVar5 != 0) {
      return;
    }
    bVar3 = false;
  }
  if (pcVar4 != (code *)0x0) {
    if (bVar3) {
      local_20 = (wchar_t *)0x4129c6;
      iVar5 = _IsDebuggerPresent();
      if (iVar5 != 0) goto LAB_00412a0f;
    }
    local_20 = (wchar_t *)0x4129d4;
    _RTC_GetSrcLine((int)param_1 - 5,&stack0xfffffde0,0x200,&local_c,&local_8);
    iVar5 = (*local_10)(param_2,&stack0xfffffde0,local_c,local_8,"Run-Time Check Failure #%d - %s",
                        param_3,param_4);
    if (iVar5 != 1) {
      return;
    }
  }
LAB_00412a0f:
  local_20 = (wchar_t *)0x412a15;
  DebugBreak();
  return;
}



// Library Function - Single Match
//  int __cdecl DebuggerProbe(unsigned long)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl DebuggerProbe(ulong param_1)

{
  undefined4 *in_FS_OFFSET;
  ULONG_PTR local_38;
  ulong local_34;
  byte *local_30;
  byte local_1d;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_00425528;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffbc;
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
//  int __cdecl DebuggerRuntime(unsigned long,int,void *,wchar_t const *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl DebuggerRuntime(ulong param_1,int param_2,void *param_3,wchar_t *param_4)

{
  undefined4 *in_FS_OFFSET;
  ULONG_PTR local_38;
  ulong local_34;
  int local_30;
  void *local_2c;
  byte *local_28;
  wchar_t *local_24;
  byte local_1d;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_00425538;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffbc;
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



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  void __cdecl _RTC_MemFailure(void *,int,void const *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __cdecl _RTC_MemFailure(void *param_1,int param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_228;
  undefined4 uStack40;
  int local_18;
  undefined4 *local_14;
  char *local_10;
  undefined4 *local_c;
  int local_8;
  
  uStack40 = 0x412bc3;
  local_14 = &local_228;
  puVar4 = &local_228;
  local_18 = *(int *)(&DAT_00428b60 + param_2 * 4);
  if (local_18 != -1) {
    _RTC_GetSrcLine((int)param_3 - 5,(char *)&local_228,0x200,&local_8,(char **)&local_c);
    if (local_8 == 0) {
      _RTC_Failure(param_1,param_2);
      return;
    }
    pcVar6 = (&PTR_s_The_value_of_ESP_was_not_properl_00428b70)[param_2];
    local_10 = pcVar6;
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    puVar5 = local_c;
    do {
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (cVar1 != '\0');
    iVar2 = -((uint)(pcVar3 + (((int)((int)puVar5 - (int)((int)local_c + 1)) +
                               (int)((int)puVar4 - ((int)&local_228 + 1))) - (int)(pcVar6 + 1)) +
                              0x99) & 0xfffffffc);
    puVar4 = (undefined4 *)((int)&local_228 + iVar2);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)puVar4 = cVar1;
      puVar5 = local_14;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    puVar4 = (undefined4 *)(&stack0xfffffdd7 + iVar2);
    do {
      pcVar6 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (*pcVar6 != '\0');
    iVar8 = 10;
    puVar10 = (undefined4 *)"Invalid pointer was assigned at\n\rFile:\t";
    while (puVar7 = puVar5, iVar8 != 0) {
      iVar8 = iVar8 + -1;
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    do {
      cVar1 = *(char *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    } while (cVar1 != '\0');
    puVar7 = (undefined4 *)((int)puVar7 - (int)puVar5);
    puVar4 = (undefined4 *)(&stack0xfffffdd7 + iVar2);
    do {
      pcVar6 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (*pcVar6 != '\0');
    uVar9 = (uint)puVar7 >> 2;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = (uint)puVar7 & 3;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *(undefined *)puVar4 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)(&stack0xfffffdd7 + iVar2);
    do {
      puVar5 = puVar4;
      puVar4 = (undefined4 *)((int)puVar5 + 1);
    } while (*(char *)((int)puVar5 + 1) != '\0');
    *(undefined4 *)((int)puVar5 + 1) = 0x694c0d0a;
    *(undefined4 *)((int)puVar5 + 5) = 0x93a656e;
    *(undefined *)((int)puVar5 + 9) = 0;
    *(int *)(&stack0xfffffdd4 + iVar2) = local_8;
    *(undefined4 *)(&stack0xfffffdd0 + iVar2) = 0x412cfa;
    puVar5 = (undefined4 *)IntToString(*(int *)(&stack0xfffffdd4 + iVar2));
    puVar4 = puVar5;
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    puVar10 = (undefined4 *)(&stack0xfffffdd7 + iVar2);
    do {
      pcVar6 = (char *)((int)puVar10 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    } while (*pcVar6 != '\0');
    uVar9 = (uint)(undefined4 *)((int)puVar4 - (int)puVar5) >> 2;
    puVar7 = puVar5;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar9 = (uint)(undefined4 *)((int)puVar4 - (int)puVar5) & 3;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *(undefined *)puVar10 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar4 = (undefined4 *)(&stack0xfffffdd7 + iVar2);
    do {
      puVar5 = puVar4;
      puVar4 = (undefined4 *)((int)puVar5 + 1);
    } while (*(char *)((int)puVar5 + 1) != '\0');
    *(undefined4 *)((int)puVar5 + 1) = 0x6f4d0d0a;
    *(undefined4 *)((int)puVar5 + 5) = 0x656c7564;
    *(undefined2 *)((int)puVar5 + 9) = 0x93a;
    *(undefined *)((int)puVar5 + 0xb) = 0;
    puVar4 = local_c;
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    puVar5 = (undefined4 *)(&stack0xfffffdd7 + iVar2);
    do {
      pcVar6 = (char *)((int)puVar5 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (*pcVar6 != '\0');
    uVar9 = (uint)(undefined4 *)((int)puVar4 - (int)local_c) >> 2;
    puVar10 = local_c;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *puVar5 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar9 = (uint)(undefined4 *)((int)puVar4 - (int)local_c) & 3;
    *(undefined4 **)(&stack0xfffffdd4 + iVar2) = (undefined4 *)((int)&local_228 + iVar2);
    while (iVar8 = local_18, uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *(undefined *)puVar5 = *(undefined *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(&stack0xfffffdd0 + iVar2) = param_2;
    *(int *)(&stack0xfffffdcc + iVar2) = iVar8;
    *(void **)(&stack0xfffffdc8 + iVar2) = param_1;
    *(undefined4 *)(&stack0xfffffdc4 + iVar2) = 0x412d9a;
    failwithmessage(*(void **)(&stack0xfffffdc8 + iVar2),*(int *)(&stack0xfffffdcc + iVar2),
                    *(int *)(&stack0xfffffdd0 + iVar2),*(char **)(&stack0xfffffdd4 + iVar2));
  }
  return;
}



// Library Function - Single Match
//  char * __cdecl IntToString(int)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

char * __cdecl IntToString(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_00429622 = 0;
  iVar1 = param_1;
  iVar4 = 0xe;
  do {
    iVar3 = iVar4;
    iVar2 = iVar1 / 10;
    iVar4 = iVar3 + -1;
    *(char *)((int)&DAT_00429610 + iVar3 + 3) = (char)(iVar1 % 10) + '0';
    iVar1 = iVar2;
  } while (iVar2 != 0);
  if (param_1 < 0) {
    iVar4 = iVar3 + -2;
    *(undefined *)((int)&DAT_00429610 + iVar3 + 2) = 0x2d;
  }
  return (char *)(iVar4 + 0x429614);
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  void __cdecl _RTC_StackFailure(void *,char const *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *apvStack40 [2];
  int aiStack32 [2];
  char *pcStack24;
  int local_8;
  
  local_8 = DAT_00428b68;
  if (DAT_00428b68 != -1) {
    pcVar4 = param_2;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcStack24 = (char *)0x412ec4;
    iVar3 = -((uint)(pcVar4 + (0x53 - (int)(param_2 + 1))) & 0xfffffffc);
    iVar5 = 7;
    puVar8 = (undefined4 *)"Stack around the variable \'";
    puVar7 = (undefined4 *)(&stack0xffffffec + iVar3);
    while (pcVar4 = param_2, iVar5 != 0) {
      iVar5 = iVar5 + -1;
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    puVar8 = (undefined4 *)((int)&pcStack24 + iVar3 + 3);
    do {
      pcVar1 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar1 != '\0');
    uVar6 = (uint)(pcVar4 + -(int)param_2) >> 2;
    puVar7 = (undefined4 *)param_2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar4 + -(int)param_2) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar8 = (undefined4 *)((int)&pcStack24 + iVar3 + 3);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined4 *)((int)puVar7 + 1);
    } while (*(char *)((int)puVar7 + 1) != '\0');
    *(undefined4 *)((int)puVar7 + 1) = 0x61772027;
    *(undefined4 *)((int)puVar7 + 5) = 0x6f632073;
    *(undefined4 *)((int)puVar7 + 9) = 0x70757272;
    *(undefined **)((int)&pcStack24 + iVar3) = &stack0xffffffec + iVar3;
    *(undefined4 *)((int)puVar7 + 0xd) = 0x2e646574;
    iVar5 = local_8;
    *(undefined4 *)((int)aiStack32 + iVar3 + 4) = 2;
    *(int *)((int)aiStack32 + iVar3) = iVar5;
    *(void **)((int)(apvStack40 + 1) + iVar3) = param_1;
    *(undefined *)((int)puVar7 + 0x11) = 0;
    *(undefined4 *)((int)apvStack40 + iVar3) = 0x412f41;
    failwithmessage(*(void **)((int)(apvStack40 + 1) + iVar3),*(int *)((int)aiStack32 + iVar3),
                    *(int *)((int)aiStack32 + iVar3 + 4),*(char **)((int)&pcStack24 + iVar3));
  }
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  __RTC_UninitUse
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __cdecl __RTC_UninitUse(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_retaddr;
  void *apvStack36 [2];
  int aiStack28 [2];
  char *pcStack20;
  
  if (DAT_00428b6c != -1) {
    puVar4 = param_1;
    do {
      cVar2 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar2 != '\0');
    pcStack20 = (char *)0x412fb4;
    iVar3 = -((int)puVar4 + (0x53 - ((int)param_1 + 1)) & 0xfffffffcU);
    if (param_1 == (undefined4 *)0x0) {
      iVar6 = 0xc;
      puVar4 = (undefined4 *)"A variable is being used without being defined.";
      puVar8 = (undefined4 *)(&stack0xfffffff0 + iVar3);
      while (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0x20656854;
      *(undefined4 *)(&stack0xfffffff4 + iVar3) = 0x69726176;
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0x656c6261;
      *(undefined2 *)(&stack0xfffffffc + iVar3) = 0x2720;
      (&stack0xfffffffe)[iVar3] = 0;
      puVar4 = param_1;
      do {
        cVar2 = *(char *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (cVar2 != '\0');
      puVar8 = (undefined4 *)((int)&pcStack20 + iVar3 + 3);
      do {
        pcVar1 = (char *)((int)puVar8 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (*pcVar1 != '\0');
      uVar5 = (uint)(undefined4 *)((int)puVar4 - (int)param_1) >> 2;
      puVar7 = param_1;
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar5 = (uint)(undefined4 *)((int)puVar4 - (int)param_1) & 3;
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *(undefined *)puVar8 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar4 = (undefined4 *)((int)&pcStack20 + iVar3 + 3);
      do {
        pcVar1 = (char *)((int)puVar4 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (*pcVar1 != '\0');
      iVar6 = 9;
      puVar8 = (undefined4 *)"\' is being used without being defined.";
      while (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *puVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = *(undefined2 *)puVar8;
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar8 + 2);
    }
    *(undefined **)((int)&pcStack20 + iVar3) = &stack0xfffffff0 + iVar3;
    *(undefined4 *)((int)aiStack28 + iVar3 + 4) = 3;
    *(int *)((int)aiStack28 + iVar3) = DAT_00428b6c;
    *(undefined4 *)((int)(apvStack36 + 1) + iVar3) = unaff_retaddr;
    *(undefined4 *)((int)apvStack36 + iVar3) = 0x413054;
    failwithmessage(*(void **)((int)(apvStack36 + 1) + iVar3),*(int *)((int)aiStack28 + iVar3),
                    *(int *)((int)aiStack28 + iVar3 + 4),*(char **)((int)&pcStack20 + iVar3));
  }
  return;
}



// Library Function - Single Match
//  int __cdecl _IsDebuggerPresent(void)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl _IsDebuggerPresent(void)

{
  int iVar1;
  
  if (DAT_00429628 == 0) {
    iVar1 = Initialize();
    if (iVar1 == 0) {
      RaiseException(0xc0000135,0,0,(ULONG_PTR *)0x0);
    }
    DAT_00429628 = 1;
  }
                    // WARNING: Could not recover jumptable at 0x004130ca. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*DAT_00429610)();
  return iVar1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  int __cdecl Initialize(void)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl Initialize(void)

{
  HMODULE hModule;
  BOOL BVar1;
  DWORD in_stack_ffffff68;
  DWORD in_stack_ffffff74;
  
  hModule = LoadLibraryA("Kernel32.dll");
  DAT_00429610 = GetProcAddress(hModule,"IsDebuggerPresent");
  if ((((DAT_00429610 == (FARPROC)0x0) &&
       (BVar1 = GetVersionExA((LPOSVERSIONINFOA)&stack0xffffff64), BVar1 != 0)) &&
      (in_stack_ffffff74 == 1)) && (in_stack_ffffff68 == 4)) {
    DAT_00429610 = (FARPROC)&LAB_00413180;
    return 1;
  }
  return (uint)(DAT_00429610 != (FARPROC)0x0);
}



undefined4 FUN_00413190(void)

{
  int iVar1;
  
  iVar1 = FUN_004131a0();
  return *(undefined4 *)(iVar1 + 0x20);
}



undefined4 FUN_004131a0(void)

{
  int in_FS_OFFSET;
  
  return *(undefined4 *)(in_FS_OFFSET + 0x18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __cinit
// 
// Library: Visual Studio 2003 Debug

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (_DAT_0042b0fc != (code *)0x0) {
    (*_DAT_0042b0fc)(param_1);
  }
  iVar1 = __initterm_e((undefined **)&DAT_0042830c,(undefined **)&DAT_00428520);
  if (iVar1 == 0) {
    _atexit(&LAB_004110cd);
    __initterm((undefined **)&DAT_00428000,(undefined **)&DAT_00428208);
    iVar1 = 0;
  }
  return iVar1;
}



// Library Function - Single Match
//  _exit
// 
// Library: Visual Studio 2003 Debug

void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 2003 Debug

void __cdecl __exit(UINT param_1)

{
  _doexit(param_1,1,0);
  return;
}



// Library Function - Single Match
//  __cexit
// 
// Library: Visual Studio 2003 Debug

void __cdecl __cexit(void)

{
  _doexit(0,0,1);
  return;
}



// Library Function - Single Match
//  __c_exit
// 
// Library: Visual Studio 2003 Debug

void __cdecl __c_exit(void)

{
  _doexit(0,1,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _doexit
// 
// Library: Visual Studio 2003 Debug

void __cdecl _doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  
  if (_DAT_00429678 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00429674 = 1;
  DAT_00429670 = (undefined)param_3;
  if (param_2 == 0) {
    if (DAT_0042b0f4 != (code **)0x0) {
      while (DAT_0042b0f0 = DAT_0042b0f0 + -1, DAT_0042b0f4 <= DAT_0042b0f0) {
        if (*DAT_0042b0f0 != (code *)0x0) {
          (**DAT_0042b0f0)();
        }
      }
    }
    __initterm((undefined **)&DAT_00428624,(undefined **)&DAT_0042882c);
  }
  __initterm((undefined **)&DAT_00428930,(undefined **)&DAT_00428a34);
  if ((_DAT_0042967c == 0) && (uVar1 = __CrtSetDbgFlag(0xffffffff), (uVar1 & 0x20) != 0)) {
    _DAT_0042967c = 1;
    __CrtDumpMemoryLeaks();
  }
  if (param_3 == 0) {
    _DAT_00429678 = 1;
    thunk_FUN_004133d0(param_1);
  }
  return;
}



void FUN_004133d0(UINT param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



// Library Function - Single Match
//  __initterm
// 
// Library: Visual Studio 2003 Debug

void __cdecl __initterm(undefined **param_1,undefined **param_2)

{
  while (param_1 < param_2) {
    if (*param_1 != (undefined *)0x0) {
      (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}



// Library Function - Single Match
//  __initterm_e
// 
// Library: Visual Studio 2003 Debug

int __cdecl __initterm_e(undefined **param_1,undefined **param_2)

{
  int local_8;
  
  local_8 = 0;
  while ((param_1 < param_2 && (local_8 == 0))) {
    if (*param_1 != (undefined *)0x0) {
      local_8 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return local_8;
}



// Library Function - Single Match
//  ___CppXcptFilter
// 
// Library: Visual Studio 2003 Debug

int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = __XcptFilter(0xe06d7363,_ExceptionPtr);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __XcptFilter
// 
// Library: Visual Studio 2003 Debug

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int local_10;
  
  piVar4 = _xcptlookup(_ExceptionNum);
  uVar3 = DAT_00429690;
  if ((piVar4 == (int *)0x0) || (piVar4[2] == 0)) {
    iVar5 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else {
    if (piVar4[2] == 5) {
      piVar4[2] = 0;
      iVar5 = 1;
    }
    else {
      if (piVar4[2] == 1) {
        iVar5 = -1;
        DAT_00429690 = (_EXCEPTION_POINTERS *)uVar3;
      }
      else {
        pcVar1 = (code *)piVar4[2];
        DAT_00429690 = _ExceptionPtr;
        if (piVar4[1] == 8) {
          local_10 = DAT_00428c08;
          while (uVar2 = DAT_00428c14, local_10 < DAT_00428c08 + _DAT_00428c0c) {
            *(undefined4 *)(local_10 * 0xc + 0x428b98) = 0;
            local_10 = local_10 + 1;
          }
          if (*piVar4 == -0x3fffff72) {
            DAT_00428c14 = 0x83;
          }
          else {
            if (*piVar4 == -0x3fffff70) {
              DAT_00428c14 = 0x81;
            }
            else {
              if (*piVar4 == -0x3fffff6f) {
                DAT_00428c14 = 0x84;
              }
              else {
                if (*piVar4 == -0x3fffff6d) {
                  DAT_00428c14 = 0x85;
                }
                else {
                  if (*piVar4 == -0x3fffff73) {
                    DAT_00428c14 = 0x82;
                  }
                  else {
                    if (*piVar4 == -0x3fffff71) {
                      DAT_00428c14 = 0x86;
                    }
                    else {
                      if (*piVar4 == -0x3fffff6e) {
                        DAT_00428c14 = 0x8a;
                      }
                    }
                  }
                }
              }
            }
          }
          (*pcVar1)(8,DAT_00428c14);
          DAT_00428c14 = uVar2;
        }
        else {
          piVar4[2] = 0;
          (*pcVar1)(piVar4[1]);
        }
        iVar5 = -1;
        DAT_00429690 = (_EXCEPTION_POINTERS *)uVar3;
      }
    }
  }
  return iVar5;
}



// Library Function - Single Match
//  _xcptlookup
// 
// Library: Visual Studio 2003 Debug

int * __cdecl _xcptlookup(int param_1)

{
  int *local_8;
  
  local_8 = &DAT_00428b90;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < &DAT_00428b90 + DAT_00428c10 * 3);
  if ((&DAT_00428b90 + DAT_00428c10 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __wincmdln
// 
// Library: Visual Studio 2003 Debug

byte * __wincmdln(void)

{
  bool bVar1;
  int iVar2;
  byte *local_10;
  byte *local_8;
  
  bVar1 = false;
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  if (DAT_0042b100 == (byte *)0x0) {
    local_10 = &DAT_004250ec;
  }
  else {
    local_10 = DAT_0042b100;
  }
  local_8 = local_10;
  while ((0x20 < *local_8 || ((*local_8 != 0 && (bVar1))))) {
    if (*local_8 == 0x22) {
      bVar1 = !bVar1;
    }
    iVar2 = __ismbblead((uint)*local_8);
    if ((iVar2 != 0) && (local_8 != (byte *)0x0)) {
      local_8 = local_8 + 1;
    }
    local_8 = local_8 + 1;
  }
  while ((*local_8 != 0 && (*local_8 < 0x21))) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setenvp
// 
// Library: Visual Studio 2003 Debug

int __cdecl __setenvp(void)

{
  int iVar1;
  size_t sVar2;
  int **ppiVar3;
  uint *extraout_ECX;
  uint *this;
  uint **local_10;
  int local_c;
  uint *local_8;
  
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  local_c = 0;
  local_8 = DAT_004295fc;
  if (DAT_004295fc == (uint *)0x0) {
    iVar1 = -1;
  }
  else {
    while (*(char *)local_8 != '\0') {
      if (*(char *)local_8 != '=') {
        local_c = local_c + 1;
      }
      sVar2 = _strlen((char *)local_8);
      local_8 = (uint *)((int)local_8 + sVar2 + 1);
    }
    DAT_00429658 = (uint **)__malloc_dbg((int *)(local_c * 4 + 4),(int *)0x2,(int *)"stdenvp.c",
                                         (int *)0x75);
    if (DAT_00429658 == (uint **)0x0) {
      iVar1 = -1;
    }
    else {
      local_8 = DAT_004295fc;
      this = extraout_ECX;
      local_10 = DAT_00429658;
      while (*(char *)local_8 != '\0') {
        sVar2 = _strlen((char *)local_8);
        if (*(char *)local_8 != '=') {
          ppiVar3 = __malloc_dbg((int *)(sVar2 + 1),(int *)0x2,(int *)"stdenvp.c",(int *)0x82);
          *local_10 = (uint *)ppiVar3;
          if (*local_10 == (uint *)0x0) {
            __free_dbg(DAT_00429658,(uint)DAT_00429658,(int *)0x2);
            DAT_00429658 = (uint **)0x0;
            return -1;
          }
          thunk_FUN_0041a040(*local_10,local_8);
          local_10 = local_10 + 1;
        }
        this = (uint *)((int)local_8 + (int)(int *)(sVar2 + 1));
        local_8 = this;
      }
      __free_dbg(this,(uint)DAT_004295fc,(int *)0x2);
      DAT_004295fc = (uint *)0x0;
      *local_10 = (uint *)0x0;
      _DAT_0042b0e0 = 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setargv
// 
// Library: Visual Studio 2003 Debug

int __cdecl __setargv(void)

{
  int iVar1;
  byte *local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int **local_8;
  
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  DAT_0042979c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_00429698,0x104);
  DAT_00429668 = &DAT_00429698;
  if ((DAT_0042b100 == (byte *)0x0) || (*DAT_0042b100 == 0)) {
    local_18 = &DAT_00429698;
  }
  else {
    local_18 = DAT_0042b100;
  }
  local_10 = local_18;
  _parse_cmdline(local_18,(byte **)0x0,(byte *)0x0,&local_c,&local_14);
  local_8 = __malloc_dbg((int *)(local_14 + local_c * 4),(int *)0x2,(int *)"stdargv.c",(int *)0x82);
  if (local_8 == (int **)0x0) {
    iVar1 = -1;
  }
  else {
    _parse_cmdline(local_10,(byte **)local_8,(byte *)(local_8 + local_c),&local_c,&local_14);
    _DAT_0042964c = local_c + -1;
    _DAT_00429650 = local_8;
    iVar1 = 0;
  }
  return iVar1;
}



// Library Function - Single Match
//  _parse_cmdline
// 
// Library: Visual Studio 2003 Debug

void __cdecl _parse_cmdline(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  byte *pbVar2;
  bool bVar3;
  uint local_18;
  byte local_11;
  byte *local_8;
  
  *param_5 = 0;
  *param_4 = 1;
  local_8 = param_1;
  if (param_2 != (byte **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    if (*local_8 == 0x22) {
      bVar1 = !bVar1;
      local_11 = *local_8;
      pbVar2 = local_8 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
      local_11 = *local_8;
      pbVar2 = local_8 + 1;
      if (((&DAT_0042ad41)[local_11] & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = local_8[1];
          param_3 = param_3 + 1;
        }
        pbVar2 = local_8 + 2;
      }
    }
    local_8 = pbVar2;
  } while ((local_11 != 0) && ((bVar1 || ((local_11 != 0x20 && (local_11 != 9))))));
  if (local_11 == 0) {
    local_8 = local_8 + -1;
  }
  else {
    if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar1 = false;
  while( true ) {
    if (*local_8 != 0) {
      while ((*local_8 == 0x20 || (*local_8 == 9))) {
        local_8 = local_8 + 1;
      }
    }
    if (*local_8 == 0) break;
    if (param_2 != (byte **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      local_18 = 0;
      while (*local_8 == 0x5c) {
        local_8 = local_8 + 1;
        local_18 = local_18 + 1;
      }
      if (*local_8 == 0x22) {
        if (local_18 % 2 == 0) {
          if (bVar1) {
            bVar3 = local_8[1] == 0x22;
            if (bVar3) {
              local_8 = local_8 + 1;
            }
          }
          else {
            bVar3 = false;
          }
          bVar1 = !bVar1;
        }
        local_18 = local_18 >> 1;
      }
      while (local_18 != 0) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
        local_18 = local_18 - 1;
      }
      if ((*local_8 == 0) || ((!bVar1 && ((*local_8 == 0x20 || (*local_8 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if (((&DAT_0042ad41)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_0042ad41)[*local_8] & 4) != 0) {
            *param_3 = *local_8;
            param_3 = param_3 + 1;
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *local_8;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      local_8 = local_8 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (byte **)0x0) {
    *param_2 = (byte *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___crtGetEnvironmentStringsA
// 
// Library: Visual Studio 2003 Debug

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  LPCH pCVar1;
  LPWCH pWVar2;
  DWORD DVar3;
  int *cbMultiByte;
  LPCH _Src;
  int iVar4;
  int **local_1c;
  char *local_14;
  LPWCH local_10;
  LPWCH local_c;
  
  local_c = (LPWCH)0x0;
  if (_DAT_004297d4 == 0) {
    local_c = GetEnvironmentStringsW();
    if (local_c == (LPWCH)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        _DAT_004297d4 = 2;
      }
    }
    else {
      _DAT_004297d4 = 1;
    }
  }
  if (_DAT_004297d4 == 1) {
    if ((local_c == (LPWCH)0x0) && (local_c = GetEnvironmentStringsW(), local_c == (LPWCH)0x0)) {
      local_1c = (int **)0x0;
    }
    else {
      local_10 = local_c;
      pWVar2 = local_10;
      while (local_10 = pWVar2, *local_10 != L'\0') {
        pWVar2 = local_10 + 1;
        if (local_10[1] == L'\0') {
          pWVar2 = local_10 + 2;
        }
      }
      iVar4 = ((int)((int)local_10 - (int)local_c) >> 1) + 1;
      cbMultiByte = (int *)WideCharToMultiByte(0,0,local_c,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,
                                               (LPBOOL)0x0);
      if ((cbMultiByte == (int *)0x0) ||
         (local_1c = __malloc_dbg(cbMultiByte,(int *)0x2,(int *)"a_env.c",(int *)0x61),
         local_1c == (int **)0x0)) {
        FreeEnvironmentStringsW(local_c);
        local_1c = (int **)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_c,iVar4,(LPSTR)local_1c,(int)cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          __free_dbg(local_1c,(uint)local_1c,(int *)0x2);
          local_1c = (int **)0x0;
        }
        FreeEnvironmentStringsW(local_c);
      }
    }
  }
  else {
    if ((_DAT_004297d4 == 2) || (_DAT_004297d4 == 0)) {
      _Src = GetEnvironmentStrings();
      pCVar1 = _Src;
      if (_Src == (LPCH)0x0) {
        local_1c = (int **)0x0;
      }
      else {
        while (local_14 = pCVar1, *local_14 != '\0') {
          pCVar1 = local_14 + 1;
          if (local_14[1] == '\0') {
            pCVar1 = local_14 + 2;
          }
        }
        local_1c = __malloc_dbg((int *)(local_14 + (1 - (int)_Src)),(int *)0x2,(int *)"a_env.c",
                                (int *)0x8c);
        if (local_1c == (int **)0x0) {
          FreeEnvironmentStringsA(_Src);
          local_1c = (int **)0x0;
        }
        else {
          FID_conflict__memcpy(local_1c,_Src,(size_t)(local_14 + (1 - (int)_Src)));
          FreeEnvironmentStringsA(_Src);
        }
      }
    }
    else {
      local_1c = (int **)0x0;
    }
  }
  return local_1c;
}



// Library Function - Single Match
//  __ioinit
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ioinit(void)

{
  HANDLE *ppvVar1;
  int **ppiVar2;
  int iVar3;
  DWORD DVar4;
  int *hFile;
  DWORD local_74;
  UINT local_70;
  HANDLE *local_6c;
  int **local_68;
  UINT *local_60;
  UINT local_5c;
  uint local_58;
  int local_50;
  _STARTUPINFOA local_4c;
  
  local_68 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"ioinit.c",(int *)0x82);
  if (local_68 == (int **)0x0) {
    iVar3 = -1;
  }
  else {
    DAT_0042af94 = 0x20;
    DAT_0042afe0 = local_68;
    while (local_68 < DAT_0042afe0 + 0x40) {
      *(undefined *)(local_68 + 1) = 0;
      *local_68 = (int *)0xffffffff;
      *(undefined *)((int)local_68 + 5) = 10;
      local_68 = local_68 + 2;
    }
    GetStartupInfoA((LPSTARTUPINFOA)&local_4c);
    if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
      local_70 = *(UINT *)local_4c.lpReserved2;
      local_60 = (UINT *)((int)local_4c.lpReserved2 + 4);
      local_6c = (HANDLE *)((int)local_60 + local_70);
      if (0x7ff < (int)local_70) {
        local_70 = 0x800;
      }
      local_5c = local_70;
      local_50 = 1;
      while ((int)DAT_0042af94 < (int)local_70) {
        local_68 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"ioinit.c",(int *)0xb7);
        if (local_68 == (int **)0x0) {
          local_5c = DAT_0042af94;
          break;
        }
        (&DAT_0042afe0)[local_50] = local_68;
        DAT_0042af94 = DAT_0042af94 + 0x20;
        while (local_68 < (int **)((int)(&DAT_0042afe0)[local_50] + 0x100)) {
          *(undefined *)(local_68 + 1) = 0;
          *local_68 = (int *)0xffffffff;
          *(undefined *)((int)local_68 + 5) = 10;
          local_68 = local_68 + 2;
        }
        local_50 = local_50 + 1;
      }
      local_58 = 0;
      while ((int)local_58 < (int)local_5c) {
        if (((*local_6c != (HANDLE)0xffffffff) && ((*(byte *)local_60 & 1) != 0)) &&
           (((*(byte *)local_60 & 8) != 0 || (DVar4 = GetFileType(*local_6c), DVar4 != 0)))) {
          ppvVar1 = (HANDLE *)((int)(&DAT_0042afe0)[(int)local_58 >> 5] + (local_58 & 0x1f) * 8);
          *ppvVar1 = *local_6c;
          *(byte *)(ppvVar1 + 1) = *(byte *)local_60;
        }
        local_58 = local_58 + 1;
        local_60 = (UINT *)((int)local_60 + 1);
        local_6c = local_6c + 1;
      }
    }
    local_58 = 0;
    while ((int)local_58 < 3) {
      ppiVar2 = DAT_0042afe0 + local_58 * 2;
      if (*ppiVar2 == (int *)0xffffffff) {
        *(undefined *)(ppiVar2 + 1) = 0x81;
        if (local_58 == 0) {
          local_74 = 0xfffffff6;
        }
        else {
          local_74 = 0xfffffff5 - (local_58 != 1);
        }
        hFile = (int *)GetStdHandle(local_74);
        if ((hFile == (int *)0xffffffff) || (DVar4 = GetFileType(hFile), DVar4 == 0)) {
          *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x40;
        }
        else {
          *ppiVar2 = hFile;
          if ((DVar4 & 0xff) == 2) {
            *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x40;
          }
          else {
            if ((DVar4 & 0xff) == 3) {
              *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 8;
            }
          }
        }
      }
      else {
        *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x80;
      }
      local_58 = local_58 + 1;
    }
    SetHandleCount(DAT_0042af94);
    iVar3 = 0;
  }
  return iVar3;
}



// Library Function - Single Match
//  __ioterm
// 
// Library: Visual Studio 2003 Debug

void __cdecl __ioterm(void)

{
  void *local_8;
  
  local_8 = (void *)0x0;
  while ((int)local_8 < 0x40) {
    if ((&DAT_0042afe0)[(int)local_8] != 0) {
      __free_dbg(local_8,(&DAT_0042afe0)[(int)local_8],(int *)0x2);
      (&DAT_0042afe0)[(int)local_8] = 0;
    }
    local_8 = (void *)((int)local_8 + 1);
  }
  return;
}



// Library Function - Single Match
//  __RTC_Initialize
// 
// Library: Visual Studio 2003 Debug

void __RTC_Initialize(void)

{
  code **ppcVar1;
  undefined4 *in_FS_OFFSET;
  code **local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_004256c8;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffd4;
  ppcVar1 = (code **)&DAT_00427828;
  while (ppcVar1 < &DAT_00427a2c) {
    local_8 = 0;
    if (*ppcVar1 != (code *)0x0) {
      local_20 = ppcVar1;
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  }
  *in_FS_OFFSET = local_14;
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  __RTC_Initialize
//  __RTC_Terminate
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

void __RTC_Terminate(void)

{
  code **ppcVar1;
  undefined4 *in_FS_OFFSET;
  code **local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_004256d8;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffd4;
  ppcVar1 = (code **)&DAT_00427b34;
  while (ppcVar1 < &DAT_00427d38) {
    local_8 = 0;
    if (*ppcVar1 != (code *)0x0) {
      local_20 = ppcVar1;
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  }
  *in_FS_OFFSET = local_14;
  return;
}



// Library Function - Single Match
//  ___heap_select
// 
// Library: Visual Studio 2003 Debug

undefined4 ___heap_select(void)

{
  undefined4 uVar1;
  
  if ((DAT_00429638 == 2) && (4 < DAT_00429644)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __heap_init
// 
// Library: Visual Studio 2003 Debug

int __cdecl __heap_init(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int in_stack_00000004;
  
  DAT_0042af80 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_0042af80 == (HANDLE)0x0) {
    iVar2 = 0;
  }
  else {
    _DAT_0042af90 = ___heap_select();
    if ((_DAT_0042af90 == 3) && (bVar1 = ___sbh_heap_init(0x3f8), CONCAT31(extraout_var,bVar1) == 0)
       ) {
      HeapDestroy(DAT_0042af80);
      return 0;
    }
    iVar2 = 1;
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __heap_term
// 
// Library: Visual Studio 2003 Debug

void __cdecl __heap_term(void)

{
  LPVOID local_c;
  int local_8;
  
  if (_DAT_0042af90 == 3) {
    local_c = DAT_0042aca0;
    local_8 = 0;
    while (local_8 < DAT_0042ac9c) {
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
      HeapFree(DAT_0042af80,0,*(LPVOID *)((int)local_c + 0x10));
      local_c = (LPVOID)((int)local_c + 0x14);
      local_8 = local_8 + 1;
    }
    HeapFree(DAT_0042af80,0,DAT_0042aca0);
  }
  HeapDestroy(DAT_0042af80);
  return;
}



undefined4 FUN_00414990(void)

{
  return DAT_0042af80;
}



// Library Function - Single Match
//  __global_unwind2
// 
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4149b4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  __local_unwind2
// 
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
  puStack24 = &LAB_004149bc;
  uStack28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack28;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00414a72();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *in_FS_OFFSET = uStack28;
  return;
}



void FUN_00414a72(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00428c48 = in_EAX;
  DAT_00428c4c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00428c50 = unaff_EBP;
  return;
}



void FUN_00414bb6(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  __chkstk
// 
// Library: Visual Studio 2003 Debug

void __chkstk(undefined1 param_1)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &param_1;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __FF_MSGBANNER
// 
// Library: Visual Studio 2003 Debug

void __cdecl __FF_MSGBANNER(void)

{
  if ((_DAT_00429604 == 1) || ((_DAT_00429604 == 0 && (_DAT_00428b44 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (_DAT_004297d8 != (code *)0x0) {
      (*_DAT_004297d8)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __NMSG_WRITE
// 
// Library: Visual Studio 2003 Debug

void __cdecl __NMSG_WRITE(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  size_t sVar5;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  undefined *local_128;
  uint local_124 [65];
  undefined local_20;
  int local_18;
  uint *local_14;
  undefined *local_10;
  DWORD local_c;
  uint local_8;
  
  local_18 = DAT_00428eb0;
  local_8 = 0;
  while ((local_8 < 0x13 && (param_1 != *(int *)(&DAT_00428c60 + local_8 * 8)))) {
    local_8 = local_8 + 1;
  }
  if (param_1 == *(int *)(&DAT_00428c60 + local_8 * 8)) {
    if (((param_1 != 0xfc) && (param_1 != 0xff)) &&
       (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                               (&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2]),
       iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((_DAT_00429604 == 1) || ((_DAT_00429604 == 0 && (_DAT_00428b44 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else {
      if (param_1 != 0xfc) {
        local_20 = 0;
        DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_124,0x104);
        if (DVar4 == 0) {
          thunk_FUN_0041a040(local_124,(uint *)"<program name unknown>");
        }
        local_14 = local_124;
        sVar3 = _strlen((char *)local_14);
        if (0x3c < sVar3 + 1) {
          sVar3 = _strlen((char *)local_124);
          local_14 = (uint *)((int)local_14 + (sVar3 - 0x3b));
          _strncpy((char *)local_14,"...",3);
        }
        sVar3 = _strlen((char *)local_14);
        sVar5 = _strlen((&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2]);
        iVar2 = -(sVar3 + sVar5 + 0x1f & 0xfffffffc);
        local_128 = (undefined *)((int)local_124 + iVar2 + -8);
        local_10 = (undefined *)((int)local_124 + iVar2 + -8);
        *(char **)(&stack0xfffffed0 + iVar2) = "Runtime Error!\n\nProgram: ";
        *(undefined **)(&stack0xfffffecc + iVar2) = local_10;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414e7a;
        thunk_FUN_0041a040(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(uint **)(&stack0xfffffed0 + iVar2) = local_14;
        *(undefined **)(&stack0xfffffecc + iVar2) = local_10;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414e8a;
        thunk_FUN_0041a050(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(undefined **)(&stack0xfffffed0 + iVar2) = &DAT_00425b54;
        *(undefined **)(&stack0xfffffecc + iVar2) = local_10;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414e9b;
        thunk_FUN_0041a050(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(undefined **)(&stack0xfffffed0 + iVar2) =
             (&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2];
        *(undefined **)(&stack0xfffffecc + iVar2) = local_10;
        *(undefined4 *)(&stack0xfffffec8 + iVar2) = 0x414eb2;
        thunk_FUN_0041a050(*(uint **)(&stack0xfffffecc + iVar2),*(uint **)(&stack0xfffffed0 + iVar2)
                          );
        *(undefined4 *)(&stack0xfffffed0 + iVar2) = 0x12010;
        *(char **)(&stack0xfffffecc + iVar2) = "Microsoft Visual C++ Runtime Library";
        *(undefined **)(&stack0xfffffec8 + iVar2) = local_10;
        *(undefined4 *)(&stack0xfffffec4 + iVar2) = 0x414ec8;
        ___crtMessageBoxA(*(LPCSTR *)(&stack0xfffffec8 + iVar2),
                          *(LPCSTR *)(&stack0xfffffecc + iVar2),*(UINT *)(&stack0xfffffed0 + iVar2))
        ;
      }
    }
  }
  thunk_FUN_0041d0f0(local_18);
  return;
}



// Library Function - Single Match
//  __GET_RTERRMSG
// 
// Library: Visual Studio 2003 Debug

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  local_8 = 0;
  while ((local_8 < 0x13 && (param_1 != *(int *)(&DAT_00428c60 + local_8 * 8)))) {
    local_8 = local_8 + 1;
  }
  if (param_1 == *(int *)(&DAT_00428c60 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}



// Library Function - Single Match
//  __CrtDbgBreak
// 
// Library: Visual Studio 2003 Debug

void __CrtDbgBreak(void)

{
  DebugBreak();
  return;
}



// Library Function - Single Match
//  __CrtSetReportMode
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __CrtSetReportMode(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == 0xffffffff) {
      uVar1 = *(undefined4 *)(&DAT_00428d1c + param_1 * 4);
    }
    else {
      if ((param_2 & 0xfffffff8) == 0) {
        uVar1 = *(undefined4 *)(&DAT_00428d1c + param_1 * 4);
        *(uint *)(&DAT_00428d1c + param_1 * 4) = param_2;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __CrtSetReportFile
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __CrtSetReportFile(int param_1,int param_2)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (param_2 == -6) {
      uVar1 = *(undefined4 *)(&DAT_00428d28 + param_1 * 4);
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00428d28 + param_1 * 4);
      if (param_2 == -4) {
        pvVar2 = GetStdHandle(0xfffffff5);
        *(HANDLE *)(&DAT_00428d28 + param_1 * 4) = pvVar2;
      }
      else {
        if (param_2 == -5) {
          pvVar2 = GetStdHandle(0xfffffff4);
          *(HANDLE *)(&DAT_00428d28 + param_1 * 4) = pvVar2;
        }
        else {
          *(int *)(&DAT_00428d28 + param_1 * 4) = param_2;
        }
      }
    }
  }
  return uVar1;
}



undefined4 __cdecl FUN_00415100(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042af6c;
  DAT_0042af6c = param_1;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __CrtSetReportHook2
// 
// Library: Visual Studio 2003 Debug

int * __cdecl __CrtSetReportHook2(int param_1,int *param_2)

{
  int **ppiVar1;
  int *local_c;
  int **local_8;
  
  if (((param_1 == 0) || (param_1 == 1)) && (param_2 != (int *)0x0)) {
    local_8 = DAT_0042af7c;
    while ((local_8 != (int **)0x0 && (local_8[3] != param_2))) {
      local_8 = (int **)local_8[1];
    }
    if (param_1 == 1) {
      if (local_8 == (int **)0x0) {
        local_c = (int *)0xffffffff;
        _DAT_0042962c = 0x16;
      }
      else {
        local_8[2] = (int *)((int)local_8[2] + -1);
        local_c = local_8[2];
        if (local_c == (int *)0x0) {
          if (local_8[1] != (int *)0x0) {
            *local_8[1] = (int)*local_8;
          }
          if (*local_8 == (int *)0x0) {
            DAT_0042af7c = (int **)local_8[1];
          }
          else {
            (*local_8)[1] = (int)local_8[1];
          }
          __free_dbg(local_8,(uint)local_8,(int *)0x2);
        }
      }
    }
    else {
      if (local_8 == (int **)0x0) {
        ppiVar1 = __malloc_dbg((int *)0x10,(int *)0x2,(int *)"dbgrpt.c",(int *)0x125);
        if (ppiVar1 == (int **)0x0) {
          local_c = (int *)0xffffffff;
          _DAT_0042962c = 0xc;
        }
        else {
          *ppiVar1 = (int *)0x0;
          ppiVar1[1] = (int *)DAT_0042af7c;
          if (DAT_0042af7c != (int **)0x0) {
            *DAT_0042af7c = (int *)ppiVar1;
          }
          ppiVar1[2] = (int *)0x1;
          local_c = (int *)0x1;
          ppiVar1[3] = param_2;
          DAT_0042af7c = ppiVar1;
        }
      }
      else {
        local_8[2] = (int *)((int)local_8[2] + 1);
        local_c = local_8[2];
        if (local_8 != DAT_0042af7c) {
          if (local_8[1] != (int *)0x0) {
            *local_8[1] = (int)*local_8;
          }
          (*local_8)[1] = (int)local_8[1];
          *local_8 = (int *)0x0;
          local_8[1] = (int *)DAT_0042af7c;
          *DAT_0042af7c = (int *)local_8;
          DAT_0042af7c = local_8;
        }
      }
    }
  }
  else {
    _DAT_0042962c = 0x16;
    local_c = (int *)0xffffffff;
  }
  return local_c;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __CrtDbgReport
// 
// Library: Visual Studio 2003 Debug

void __cdecl __CrtDbgReport(int param_1,undefined1 *param_2,int param_3,char *param_4,char *param_5)

{
  LONG LVar1;
  size_t nNumberOfBytesToWrite;
  int iVar2;
  undefined4 *puVar3;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  char *local_303c;
  char *local_3038;
  char local_3034 [20];
  DWORD local_3020;
  int local_301c;
  HMODULE local_3018;
  undefined local_3014;
  undefined4 local_3013;
  undefined local_2014;
  undefined4 local_2013;
  undefined local_1014;
  undefined4 local_1013;
  int local_10;
  undefined4 local_c;
  va_list local_8;
  
  local_10 = DAT_00428eb0;
  local_2014 = 0;
  iVar2 = 0x3ff;
  puVar3 = &local_2013;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  local_1014 = '\0';
  iVar2 = 0x3ff;
  puVar3 = &local_1013;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  local_3014 = '\0';
  iVar2 = 0x3ff;
  puVar3 = &local_3013;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  local_8 = &stack0x00000018;
  if ((-1 < param_1) && (param_1 < 3)) {
    if ((param_1 == 2) && (LVar1 = InterlockedIncrement((LONG *)&DAT_00428d18), 0 < LVar1)) {
      if ((_DAT_004297dc != (FARPROC)0x0) ||
         ((local_3018 = LoadLibraryA("user32.dll"), local_3018 != (HMODULE)0x0 &&
          (_DAT_004297dc = GetProcAddress(local_3018,"wsprintfA"), _DAT_004297dc != (FARPROC)0x0))))
      {
        (*_DAT_004297dc)(&local_1014,"Second Chance Assertion Failed: File %s, Line %d\n",param_2,
                         param_3);
        OutputDebugStringA(&local_1014);
        InterlockedDecrement((LONG *)&DAT_00428d18);
        __CrtDbgBreak();
      }
    }
    else {
      if ((param_5 != (char *)0x0) &&
         (iVar2 = __vsnprintf(&local_3014,0xfeb,param_5,local_8), iVar2 < 0)) {
        thunk_FUN_0041a040((uint *)&local_3014,(uint *)"_CrtDbgReport: String too long or IO Error")
        ;
      }
      if (param_1 == 2) {
        if (param_5 == (char *)0x0) {
          local_3038 = "Assertion failed!";
        }
        else {
          local_3038 = "Assertion failed: ";
        }
        thunk_FUN_0041a040((uint *)&local_2014,(uint *)local_3038);
      }
      thunk_FUN_0041a050((uint *)&local_2014,(uint *)&local_3014);
      if (param_1 == 2) {
        if ((uRam00428d24 & 1) != 0) {
          thunk_FUN_0041a050((uint *)&local_2014,(uint *)&DAT_00425be0);
        }
        thunk_FUN_0041a050((uint *)&local_2014,(uint *)&DAT_00425bdc);
      }
      if (param_2 == (undefined1 *)0x0) {
        thunk_FUN_0041a040((uint *)&local_1014,(uint *)&local_2014);
      }
      else {
        iVar2 = __snprintf(&local_1014,0x1000,"%s(%d) : %s",param_2,param_3,&local_2014);
        if (iVar2 < 0) {
          thunk_FUN_0041a040((uint *)&local_1014,
                             (uint *)"_CrtDbgReport: String too long or IO Error");
        }
      }
      if (DAT_0042af7c != 0) {
        local_301c = DAT_0042af7c;
        while (local_301c != 0) {
          iVar2 = (**(code **)(local_301c + 0xc))(param_1,&local_1014,&local_c);
          if (iVar2 != 0) {
            if (param_1 == 2) {
              InterlockedDecrement((LONG *)&DAT_00428d18);
            }
            goto LAB_00415772;
          }
          local_301c = *(int *)(local_301c + 4);
        }
      }
      if ((DAT_0042af6c == (code *)0x0) ||
         (iVar2 = (*DAT_0042af6c)(param_1,&local_1014,&local_c), iVar2 == 0)) {
        if (((*(uint *)(&DAT_00428d1c + param_1 * 4) & 1) != 0) &&
           (*(int *)(&DAT_00428d28 + param_1 * 4) != -1)) {
          lpOverlapped = (LPOVERLAPPED)0x0;
          lpNumberOfBytesWritten = &local_3020;
          nNumberOfBytesToWrite = _strlen(&local_1014);
          WriteFile(*(HANDLE *)(&DAT_00428d28 + param_1 * 4),&local_1014,nNumberOfBytesToWrite,
                    lpNumberOfBytesWritten,lpOverlapped);
        }
        if ((*(uint *)(&DAT_00428d1c + param_1 * 4) & 2) != 0) {
          OutputDebugStringA(&local_1014);
        }
        if ((*(uint *)(&DAT_00428d1c + param_1 * 4) & 4) == 0) {
          if (param_1 == 2) {
            InterlockedDecrement((LONG *)&DAT_00428d18);
          }
        }
        else {
          if (param_3 == 0) {
            local_303c = (char *)0x0;
          }
          else {
            local_303c = __itoa(param_3,local_3034,10);
          }
          local_c = _CrtMessageWindow(param_1,param_2,local_303c,param_4,&local_3014);
          if (param_1 == 2) {
            InterlockedDecrement((LONG *)&DAT_00428d18);
          }
        }
      }
      else {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_00428d18);
        }
      }
    }
  }
LAB_00415772:
  thunk_FUN_0041d0f0(local_10);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  _CrtMessageWindow
// 
// Library: Visual Studio 2003 Debug

void __cdecl
_CrtMessageWindow(int param_1,undefined1 *param_2,undefined1 *param_3,char *param_4,char *param_5)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  char *local_1148;
  char *local_1144;
  char *local_1140;
  undefined1 *local_113c;
  char *local_1138;
  undefined1 *local_1134;
  undefined1 *local_1130;
  char *local_112c;
  char *local_1128;
  char *local_1124;
  uint local_111c [65];
  undefined local_1018;
  uint local_1014 [1025];
  int local_10;
  uint *local_c;
  char *local_8;
  
  local_8 = (char *)0x41588d;
  local_10 = DAT_00428eb0;
  if ((param_5 == (char *)0x0) &&
     (iVar1 = __CrtDbgReport(2,"dbgrpt.c",0x23a,(char *)0x0,"szUserMessage != NULL"), iVar1 == 1)) {
    __CrtDbgBreak();
  }
  local_1018 = 0;
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_111c,0x104);
  if (DVar2 == 0) {
    thunk_FUN_0041a040(local_111c,(uint *)"<program name unknown>");
  }
  local_c = local_111c;
  sVar3 = _strlen((char *)local_c);
  if (0x40 < sVar3) {
    sVar3 = _strlen((char *)local_c);
    local_c = (uint *)((int)local_c + (sVar3 - 0x40));
    _strncpy((char *)local_c,"...",3);
  }
  local_8 = param_4;
  if ((param_4 != (char *)0x0) && (sVar3 = _strlen(param_4), 0x40 < sVar3)) {
    sVar3 = _strlen(local_8);
    local_8 = local_8 + (sVar3 - 0x40);
    _strncpy(local_8,"...",3);
  }
  if (param_1 == 2) {
    local_1124 = 
    "\n\nFor information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts."
    ;
  }
  else {
    local_1124 = "";
  }
  if (*param_5 == '\0') {
    local_1128 = "";
  }
  else {
    local_1128 = param_5;
  }
  if ((*param_5 == '\0') || (param_1 != 2)) {
    local_112c = "";
  }
  else {
    local_112c = "Expression: ";
  }
  if (*param_5 == '\0') {
    local_1130 = &DAT_004250ec;
  }
  else {
    local_1130 = &DAT_00425b54;
  }
  if (param_3 == (undefined1 *)0x0) {
    local_1134 = &DAT_004250ec;
    local_1138 = "";
    param_3 = local_1134;
  }
  else {
    local_1138 = "\nLine: ";
  }
  if (param_2 == (undefined1 *)0x0) {
    local_113c = &DAT_004250ec;
    local_1140 = "";
    param_2 = local_113c;
  }
  else {
    local_1140 = "\nFile: ";
  }
  if (local_8 == (char *)0x0) {
    local_1144 = "";
    local_1148 = "";
  }
  else {
    local_1148 = "\nModule: ";
    local_1144 = local_8;
  }
  iVar1 = __snprintf((char *)local_1014,0x1000,
                                          
                     "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                     ,(&PTR_s_Warning_00428d34)[param_1],local_c,local_1148,local_1144,local_1140,
                     param_2,local_1138,param_3,local_1130,local_112c,local_1128,local_1124);
  if (iVar1 < 0) {
    thunk_FUN_0041a040(local_1014,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  iVar1 = ___crtMessageBoxA((LPCSTR)local_1014,"Microsoft Visual C++ Debug Library",0x12012);
  if (iVar1 == 3) {
    _raise(0x16);
    __exit(3);
  }
  thunk_FUN_0041d0f0(local_10);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  int __cdecl _RTC_GetSrcLine(unsigned long,char *,int,int *,char * *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl _RTC_GetSrcLine(ulong param_1,char *param_2,int param_3,int *param_4,char **param_5)

{
  char *pcVar1;
  uint *puVar2;
  ushort uVar3;
  char **ppcVar4;
  ImageInfo *pIVar5;
  int iVar6;
  HANDLE pvVar7;
  ushort *lpMem;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  DWORD DVar17;
  undefined auStack1092 [1020];
  undefined4 uStack72;
  undefined local_38 [4];
  undefined local_34 [4];
  undefined local_30 [4];
  undefined local_2c [4];
  char *local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ushort *local_14;
  undefined *local_10;
  undefined4 local_c;
  SIZE_T local_8;
  
  ppcVar4 = param_5;
  uStack72 = 0x415c53;
  local_10 = auStack1092;
  *param_4 = 0;
  *param_2 = '\0';
  local_20 = 0;
  *param_5 = (char *)0x0;
  pIVar5 = GetImageInfo(param_1);
  if (pIVar5 == (ImageInfo *)0x0) {
    return local_20;
  }
  uVar14 = param_1 - *(int *)(pIVar5 + 4);
  bVar16 = DAT_00429838 == 0;
  *ppcVar4 = *(char **)(pIVar5 + 0x18);
  local_20 = 1;
  if (bVar16) {
    if (DAT_004297e0 != (HMODULE)0x0) {
      return 1;
    }
    DAT_004297e0 = (HMODULE)GetPdbDll();
    if (DAT_004297e0 == (HMODULE)0x0) {
      return local_20;
    }
    _DAT_004297f0 = GetProcAddress(DAT_004297e0,"PDBOpenValidate3");
    if (((((_DAT_004297f0 == (FARPROC)0x0) ||
          (_DAT_004297f4 = GetProcAddress(DAT_004297e0,"PDBOpenDBI"), _DAT_004297f4 == (FARPROC)0x0)
          ) || (_DAT_004297f8 = GetProcAddress(DAT_004297e0,"DBIQueryModFromAddr"),
               _DAT_004297f8 == (FARPROC)0x0)) ||
        ((_DAT_004297fc = GetProcAddress(DAT_004297e0,"ModQueryLines"),
         _DAT_004297fc == (FARPROC)0x0 ||
         (_DAT_00429800 = GetProcAddress(DAT_004297e0,"ModClose"), _DAT_00429800 == (FARPROC)0x0))))
       || ((_DAT_00429804 = GetProcAddress(DAT_004297e0,"DBIClose"), _DAT_00429804 == (FARPROC)0x0
           || (_DAT_00429808 = GetProcAddress(DAT_004297e0,"PDBClose"),
              _DAT_00429808 == (FARPROC)0x0)))) {
      return 0;
    }
    DAT_00429838 = 1;
  }
  uVar3 = *(ushort *)(*(int *)(pIVar5 + 0x10) + 6);
  local_14 = (ushort *)(uint)uVar3;
  uVar13 = 0;
  if (uVar3 == 0) {
    return local_20;
  }
  while ((iVar6 = (uVar13 & 0xffff) * 0x28,
         uVar14 <= *(uint *)(*(int *)(pIVar5 + 0x14) + 0xc + iVar6) ||
         (iVar6 = iVar6 + *(int *)(pIVar5 + 0x14),
         *(uint *)(iVar6 + 0x10) <= uVar14 - *(int *)(iVar6 + 0xc)))) {
    uVar13 = uVar13 + 1;
    if (uVar3 <= (ushort)uVar13) {
      return local_20;
    }
  }
  uVar14 = uVar14 - *(int *)(*(int *)(pIVar5 + 0x14) + 0xc + (uVar13 & 0xffff) * 0x28);
  if (uVar14 == 0xffffffff) {
    return local_20;
  }
  local_24 = uVar14;
  iVar6 = (*_DAT_004297f0)(*(undefined4 *)(pIVar5 + 0x18),&DAT_004250ec,local_34,local_10,
                           &stack0xfffffab8,local_30,local_2c,&local_1c);
  if (iVar6 == 0) {
    return local_20;
  }
  iVar6 = (*_DAT_004297f4)(local_1c,&DAT_00425e20,0,&local_18);
  if (iVar6 != 0) {
    iVar6 = (*_DAT_004297f8)(local_18,uVar13 + 1,uVar14,&local_c,(int)&param_5 + 2,local_38,&local_8
                            );
    if (iVar6 != 0) {
      iVar6 = (*_DAT_004297fc)(local_c,0,&local_8);
      if ((iVar6 != 0) && (local_8 != 0)) {
        DVar17 = 0;
        pvVar7 = GetProcessHeap();
        lpMem = (ushort *)HeapAlloc(pvVar7,DVar17,local_8);
        local_14 = lpMem;
        iVar6 = (*_DAT_004297fc)(local_c,lpMem,&local_8);
        if (iVar6 != 0) {
          local_10 = (undefined *)0x0;
          uVar14 = local_24;
          if (*lpMem != 0) {
LAB_00415ed2:
            uVar13 = (uint)*(ushort *)(*(int *)(lpMem + (int)local_10 * 2 + 2) + (int)lpMem);
            iVar8 = *(int *)(lpMem + (int)local_10 * 2 + 2) + (int)lpMem;
            iVar6 = iVar8 + 4 + uVar13 * 4;
            local_28 = (char *)(iVar6 + uVar13 * 8);
            iVar10 = 0;
            if (uVar13 == 0) goto LAB_00415f06;
            while ((puVar2 = (uint *)(iVar6 + iVar10 * 8),
                   local_24 <= *puVar2 && *puVar2 != local_24 ||
                   (puVar2 = (uint *)(iVar6 + 4 + iVar10 * 8),
                   *puVar2 <= local_24 && local_24 != *puVar2))) {
              iVar10 = iVar10 + 1;
              if ((int)uVar13 <= iVar10) goto LAB_00415f06;
            }
            iVar6 = *(int *)(iVar8 + 4 + iVar10 * 4);
            uVar15 = (uint)*(ushort *)(iVar6 + 2 + (int)lpMem);
            iVar6 = iVar6 + (int)lpMem;
            uVar14 = iVar6 + 4 + uVar15 * 4;
            uVar13 = 0xffffffff;
            puVar12 = (undefined *)0x0;
            local_10 = (undefined *)0xffffffff;
            lpMem = local_14;
            if (uVar15 == 0) goto LAB_00415f93;
            do {
              uVar11 = local_24 - *(int *)(iVar6 + 4 + (int)puVar12 * 4);
              if (uVar11 < uVar13) {
                uVar13 = uVar11;
                local_10 = puVar12;
              }
              puVar12 = puVar12 + 1;
            } while ((int)puVar12 < (int)uVar15);
            if (-1 < (int)local_10) {
              *param_4 = (uint)*(ushort *)(uVar14 + (int)local_10 * 2);
              iVar6 = 0;
              if (*local_28 == '\0') {
LAB_00415f82:
                if (param_3 <= iVar6) goto LAB_00415f86;
              }
              else {
                pcVar9 = local_28;
                while (iVar6 < param_3) {
                  (param_2 + -(int)local_28)[(int)pcVar9] = *pcVar9;
                  pcVar1 = pcVar9 + 1;
                  iVar6 = iVar6 + 1;
                  pcVar9 = pcVar9 + 1;
                  if (*pcVar1 == '\0') goto LAB_00415f82;
                }
LAB_00415f86:
                iVar6 = param_3 + -1;
              }
              param_2[iVar6] = '\0';
            }
          }
LAB_00415f93:
          local_24 = uVar14;
          DVar17 = 0;
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,DVar17,lpMem);
        }
      }
      (*_DAT_00429800)(local_c);
    }
    (*_DAT_00429804)(local_18);
  }
  (*_DAT_00429808)(local_1c);
  return local_20;
LAB_00415f06:
  local_10 = local_10 + 1;
  if ((int)(uint)*lpMem <= (int)local_10) goto LAB_00415f93;
  goto LAB_00415ed2;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  struct ImageInfo * __cdecl GetImageInfo(unsigned long)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

ImageInfo * __cdecl GetImageInfo(ulong param_1)

{
  int iVar1;
  code *pcVar2;
  HANDLE pvVar3;
  int iVar4;
  ImageInfo *pIVar5;
  HANDLE hHeap;
  uint uVar6;
  undefined4 in_stack_fffff5c8;
  undefined4 in_stack_fffff5cc;
  undefined4 in_stack_fffff5d0;
  SIZE_T SVar7;
  LPVOID lpMem;
  ImageInfo *pIVar8;
  char cVar9;
  HANDLE in_stack_fffff7d0;
  DWORD DVar10;
  undefined4 local_814 [121];
  undefined4 uStack1584;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  pIVar5 = DAT_00429824;
  if (DAT_00429824 != (ImageInfo *)0x0) {
    do {
      if ((*(uint *)(pIVar5 + 4) <= param_1) &&
         (uVar6 = param_1 - *(uint *)(pIVar5 + 4),
         uVar6 < *(uint *)(pIVar5 + 8) || uVar6 == *(uint *)(pIVar5 + 8))) {
        return pIVar5;
      }
      pIVar5 = *(ImageInfo **)(pIVar5 + 0x1c);
    } while (pIVar5 != (ImageInfo *)0x0);
    do {
      pIVar5 = *(ImageInfo **)(DAT_00429824 + 0x1c);
      DVar10 = 0;
      pIVar8 = DAT_00429824;
      pvVar3 = GetProcessHeap();
      in_stack_fffff7d0 = (HANDLE)0x416107;
      HeapFree(pvVar3,DVar10,pIVar8);
      DAT_00429824 = pIVar5;
    } while (pIVar5 != (ImageInfo *)0x0);
  }
  if (DAT_004297e8 == (HMODULE)0x0) {
    DAT_004297ec = LoadLibraryA("KERNEL32.DLL");
    DAT_004297e8 = LoadLibraryA("IMAGEHLP.DLL");
    if (DAT_004297ec == (HMODULE)0x0) {
      return (ImageInfo *)0x0;
    }
    if (DAT_004297e8 == (HMODULE)0x0) {
      return (ImageInfo *)0x0;
    }
    _DAT_0042980c = GetProcAddress(DAT_004297e8,"ImageNtHeader");
    if (_DAT_0042980c == (FARPROC)0x0) {
      return (ImageInfo *)0x0;
    }
    DAT_00429818 = GetProcAddress(DAT_004297ec,"CreateToolhelp32Snapshot");
    if (DAT_00429818 == (FARPROC)0x0) {
      DAT_004297e4 = LoadLibraryA("PSAPI.DLL");
      if (DAT_004297e4 == (HMODULE)0x0) {
        return (ImageInfo *)0x0;
      }
      _DAT_00429814 = GetProcAddress(DAT_004297e4,"EnumProcessModules");
      if (_DAT_00429814 == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
      _DAT_00429810 = GetProcAddress(DAT_004297e4,"GetModuleInformation");
      if (_DAT_00429810 == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
    }
    else {
      _DAT_0042981c = GetProcAddress(DAT_004297ec,"Module32First");
      if (_DAT_0042981c == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
      _DAT_00429820 = GetProcAddress(DAT_004297ec,"Module32Next");
      if (_DAT_00429820 == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
    }
  }
  pcVar2 = HeapAlloc_exref;
  if (DAT_00429818 == (FARPROC)0x0) {
    in_stack_fffff7d0 = GetCurrentProcess();
    iVar4 = (*_DAT_00429814)();
    if (iVar4 == 0) {
      return (ImageInfo *)0x0;
    }
    local_8 = local_8 >> 2;
    uVar6 = 0;
    pIVar5 = DAT_00429824;
    if (local_8 != 0) {
      do {
        iVar4 = (*_DAT_00429810)();
        if (iVar4 == 0) {
          return (ImageInfo *)0x0;
        }
        SVar7 = 0x20;
        DVar10 = 0;
        pvVar3 = GetProcessHeap();
        pIVar5 = (ImageInfo *)HeapAlloc(pvVar3,DVar10,SVar7);
        if (pIVar5 == (ImageInfo *)0x0) goto joined_r0x0041635a;
        *(undefined4 *)(pIVar5 + 0xc) = local_814[uVar6];
        *(undefined4 *)(pIVar5 + 4) = local_14;
        *(undefined4 *)(pIVar5 + 8) = local_10;
        *(undefined4 *)(pIVar5 + 0x18) = 0;
        *(ImageInfo **)(pIVar5 + 0x1c) = DAT_00429824;
        uVar6 = uVar6 + 1;
        DAT_00429824 = pIVar5;
      } while (uVar6 < local_8);
    }
  }
  else {
    pvVar3 = (HANDLE)(*DAT_00429818)();
    if (pvVar3 == (HANDLE)0xffffffff) {
      return (ImageInfo *)0x0;
    }
    iVar4 = (*_DAT_0042981c)(pvVar3,&stack0xfffff5b4);
    while (iVar4 != 0) {
      SVar7 = 0x20;
      DVar10 = 0;
      hHeap = GetProcessHeap();
      pIVar5 = (ImageInfo *)HeapAlloc(hHeap,DVar10,SVar7);
      if (pIVar5 == (ImageInfo *)0x0) {
        CloseHandle(pvVar3);
        goto joined_r0x0041635a;
      }
      *(undefined4 *)(pIVar5 + 0xc) = in_stack_fffff5d0;
      *(undefined4 *)(pIVar5 + 4) = in_stack_fffff5c8;
      *(undefined4 *)(pIVar5 + 8) = in_stack_fffff5cc;
      *(undefined4 *)(pIVar5 + 0x18) = 0;
      *(ImageInfo **)(pIVar5 + 0x1c) = DAT_00429824;
      DAT_00429824 = pIVar5;
      iVar4 = (*_DAT_00429820)();
    }
    CloseHandle(pvVar3);
    pIVar5 = DAT_00429824;
  }
  while (pIVar5 != (ImageInfo *)0x0) {
    iVar4 = (*_DAT_0042980c)();
    *(int *)(pIVar5 + 0x10) = iVar4;
    *(uint *)(pIVar5 + 0x14) = *(ushort *)(iVar4 + 0x14) + 0x18 + iVar4;
    uStack1584 = 0x416300;
    DVar10 = GetModuleFileNameA(*(HMODULE *)(pIVar5 + 0xc),&stack0xfffff7d0,0x200);
    if (DVar10 == 0) goto joined_r0x0041635a;
    cVar9 = (char)in_stack_fffff7d0;
    iVar4 = 0;
    while (cVar9 != '\0') {
      cVar9 = *(char *)((int)local_814 + iVar4 + -0x1b);
      iVar4 = iVar4 + 1;
    }
    GetProcessHeap();
    iVar4 = (*pcVar2)();
    *(int *)(pIVar5 + 0x18) = iVar4;
    if (iVar4 == 0) goto joined_r0x0041635a;
    iVar4 = 0;
    do {
      iVar1 = iVar4 + -0x1c;
      *(undefined *)(iVar4 + *(int *)(pIVar5 + 0x18)) =
           *(undefined *)((int)local_814 + iVar4 + -0x1c);
      iVar4 = iVar4 + 1;
    } while (*(char *)((int)local_814 + iVar1) != '\0');
    pIVar5 = *(ImageInfo **)(pIVar5 + 0x1c);
    pcVar2 = HeapAlloc_exref;
  }
  pIVar5 = DAT_00429824;
  if (DAT_00429824 != (ImageInfo *)0x0) {
    do {
      if ((*(uint *)(pIVar5 + 4) <= param_1) &&
         (uVar6 = param_1 - *(uint *)(pIVar5 + 4),
         uVar6 < *(uint *)(pIVar5 + 8) || uVar6 == *(uint *)(pIVar5 + 8))) {
        return pIVar5;
      }
      pIVar5 = *(ImageInfo **)(pIVar5 + 0x1c);
    } while (pIVar5 != (ImageInfo *)0x0);
joined_r0x0041635a:
    while (DAT_00429824 != (ImageInfo *)0x0) {
      lpMem = *(LPVOID *)(DAT_00429824 + 0x18);
      pIVar5 = *(ImageInfo **)(DAT_00429824 + 0x1c);
      if (lpMem != (LPVOID)0x0) {
        DVar10 = 0;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,DVar10,lpMem);
      }
      DVar10 = 0;
      pIVar8 = DAT_00429824;
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,DVar10,pIVar8);
      DAT_00429824 = pIVar5;
    }
  }
  return (ImageInfo *)0x0;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  struct HINSTANCE__ * __cdecl GetPdbDll(void)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

HINSTANCE__ * __cdecl GetPdbDll(void)

{
  undefined4 uVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  FARPROC local_18;
  undefined local_14 [4];
  FARPROC local_10;
  undefined4 local_c;
  int local_8;
  
  if (DAT_0042983c == 0) {
    DAT_0042983c = 1;
    pHVar2 = LoadLibraryA(PTR_s_MSPDB71_DLL_00428d48);
    if (pHVar2 != (HMODULE)0x0) {
      return (HINSTANCE__ *)pHVar2;
    }
    pHVar2 = LoadLibraryA("ADVAPI32.DLL");
    if ((((pHVar2 != (HMODULE)0x0) &&
         (local_10 = GetProcAddress(pHVar2,"RegOpenKeyExA"), local_10 != (FARPROC)0x0)) &&
        (pFVar3 = GetProcAddress(pHVar2,"RegQueryValueExA"), pFVar3 != (FARPROC)0x0)) &&
       (local_18 = GetProcAddress(pHVar2,"RegCloseKey"), local_18 != (FARPROC)0x0)) {
      iVar4 = (*local_10)();
      if (iVar4 == 0) {
        iVar5 = (*pFVar3)();
        iVar4 = local_8;
        uVar1 = local_c;
        if (iVar5 == 0) {
          local_8 = local_8 + 0xd;
          iVar4 = -(iVar4 + 0x10U & 0xfffffffc);
          puVar6 = &stack0xffffffb0 + iVar4;
          *(int **)(&stack0xffffffac + iVar4) = &local_8;
          *(undefined **)(&stack0xffffffa8 + iVar4) = &stack0xffffffb0 + iVar4;
          *(undefined **)(&stack0xffffffa4 + iVar4) = local_14;
          *(undefined4 *)(&stack0xffffffa0 + iVar4) = 0;
          *(char **)(&stack0xffffff9c + iVar4) = "EnvironmentDirectory";
          *(undefined4 *)(&stack0xffffff98 + iVar4) = uVar1;
          puVar7 = &stack0xffffff94 + iVar4;
          *(undefined4 *)(&stack0xffffff94 + iVar4) = 0x416654;
          iVar5 = (*pFVar3)();
          *(undefined4 *)(puVar7 + -4) = local_c;
          puVar8 = puVar7 + -8;
          *(undefined4 *)(puVar7 + -8) = 0x41665d;
          (*local_18)();
          *(HMODULE *)(puVar8 + -4) = pHVar2;
          puVar9 = puVar8 + -8;
          *(undefined4 *)(puVar8 + -8) = 0x416664;
          FreeLibrary(*(HMODULE *)(puVar8 + -4));
          if (iVar5 == 0) {
            if ((&stack0xffffffae)[local_8 + iVar4] == '\\') {
              local_8 = local_8 + -1;
            }
            else {
              (&stack0xffffffaf)[local_8 + iVar4] = 0x5c;
            }
            iVar5 = 0xc;
            do {
              puVar6[local_8] =
                   (PTR_s_MSPDB71_DLL_00428d48 + -(int)(&stack0xffffffb0 + iVar4))[(int)puVar6];
              puVar6 = puVar6 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            *(undefined **)(puVar9 + -4) = &stack0xffffffb0 + iVar4;
            *(undefined4 *)(puVar9 + -8) = 0x4166a4;
            pHVar2 = LoadLibraryA(*(LPCSTR *)(puVar9 + -4));
            return (HINSTANCE__ *)pHVar2;
          }
        }
      }
      else {
        FreeLibrary(pHVar2);
      }
    }
  }
  return (HINSTANCE__ *)0x0;
}



// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2003 Debug

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  uint uVar1;
  uint local_10;
  int **local_8;
  
  uVar1 = __msize_dbg((int)DAT_0042b0f4);
  if (uVar1 < (uint)((int)DAT_0042b0f0 + (4 - (int)DAT_0042b0f4))) {
    local_10 = uVar1;
    if (0x7ff < uVar1) {
      local_10 = 0x800;
    }
    local_8 = __realloc_dbg((uint)DAT_0042b0f4,(int *)(uVar1 + local_10),(int *)0x2,
                            (int *)"onexit.c",(int *)0x7d);
    if ((local_8 == (int **)0x0) &&
       (local_8 = __realloc_dbg((uint)DAT_0042b0f4,(int *)(uVar1 + 0x10),(int *)0x2,
                                (int *)"onexit.c",(int *)0x83), local_8 == (int **)0x0)) {
      return (_onexit_t)0x0;
    }
    DAT_0042b0f0 = local_8 + ((int)((int)DAT_0042b0f0 - (int)DAT_0042b0f4) >> 2);
    DAT_0042b0f4 = local_8;
  }
  *DAT_0042b0f0 = (int *)_Func;
  DAT_0042b0f0 = DAT_0042b0f0 + 1;
  return _Func;
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2003 Debug

int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  ___onexitinit
// 
// Library: Visual Studio 2003 Debug

undefined4 ___onexitinit(void)

{
  undefined4 uVar1;
  
  DAT_0042b0f4 = __malloc_dbg((int *)0x80,(int *)0x2,(int *)"onexit.c",(int *)0xc6);
  if (DAT_0042b0f4 == (int **)0x0) {
    uVar1 = 0x18;
  }
  else {
    *DAT_0042b0f4 = (int *)0x0;
    DAT_0042b0f0 = DAT_0042b0f4;
    uVar1 = 0;
  }
  return uVar1;
}



// Library Function - Single Match
//  _malloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl _malloc(size_t _Size)

{
  int **ppiVar1;
  
  ppiVar1 = __nh_malloc_dbg((int *)_Size,DAT_004298f4,(int *)0x1,(int *)0x0,(int *)0x0);
  return ppiVar1;
}



// Library Function - Single Match
//  __malloc_dbg
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl __malloc_dbg(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int **ppiVar1;
  
  ppiVar1 = __nh_malloc_dbg(param_1,DAT_004298f4,param_2,param_3,param_4);
  return ppiVar1;
}



// Library Function - Single Match
//  __nh_malloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int **ppiVar1;
  
  ppiVar1 = __nh_malloc_dbg((int *)_Size,_NhFlag,(int *)0x1,(int *)0x0,(int *)0x0);
  return ppiVar1;
}



// Library Function - Single Match
//  __nh_malloc_dbg
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl __nh_malloc_dbg(int *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  int iVar2;
  
  while( true ) {
    ppiVar1 = __heap_alloc_dbg(param_1,param_3,param_4,param_5);
    if (ppiVar1 != (int **)0x0) {
      return ppiVar1;
    }
    if (param_2 == 0) break;
    iVar2 = __callnewh((size_t)param_1);
    if (iVar2 == 0) {
      return (int **)0x0;
    }
  }
  return (int **)0x0;
}



// Library Function - Single Match
//  __heap_alloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl __heap_alloc(size_t _Size)

{
  int **ppiVar1;
  
  ppiVar1 = __heap_alloc_dbg((int *)_Size,(int *)0x1,(int *)0x0,(int *)0x0);
  return ppiVar1;
}



// Library Function - Single Match
//  __heap_alloc_dbg
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl __heap_alloc_dbg(int *param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int **ppiVar6;
  
  bVar2 = false;
  if (DAT_00429858 != 0) {
    if (DAT_00429848 == DAT_00429858 + -1) {
      iVar5 = __CrtCheckMemory();
      if ((iVar5 == 0) &&
         (iVar5 = __CrtDbgReport(2,"dbgheap.c",0x15a,(char *)0x0,"_CrtCheckMemory()"), iVar5 == 1))
      {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
      DAT_00429848 = 0;
    }
    else {
      DAT_00429848 = DAT_00429848 + 1;
    }
  }
  piVar3 = DAT_00428d50;
  if ((DAT_00428d54 != (int *)0xffffffff) && (DAT_00428d50 == DAT_00428d54)) {
    pcVar1 = (code *)swi(3);
    ppiVar6 = (int **)(*pcVar1)();
    return ppiVar6;
  }
  iVar5 = (*(code *)PTR_thunk_FUN_0041ded0_00428ec0)
                    (1,0,param_1,param_2,DAT_00428d50,param_3,param_4);
  if (iVar5 == 0) {
    if (param_3 == (int *)0x0) {
      iVar5 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
      if (iVar5 == 1) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
    }
    else {
      iVar5 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                             "Client hook allocation failure at file %hs line %d.\n");
      if (iVar5 == 1) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
    }
    ppiVar6 = (int **)0x0;
  }
  else {
    if ((((uint)param_2 & 0xffff) != 2) && ((DAT_00428d4c & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < (int *)0xffffffe1) && (param_1 + 9 < (int *)0xffffffe1)) {
      if ((((((uint)param_2 & 0xffff) != 4) && (param_2 != (int *)0x1)) &&
          (((uint)param_2 & 0xffff) != 2)) &&
         ((param_2 != (int *)0x3 &&
          (iVar5 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,"%s"), iVar5 == 1)))) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
      ppiVar6 = (int **)__heap_alloc_base((uint)(param_1 + 9));
      if (ppiVar6 == (int **)0x0) {
        ppiVar6 = (int **)0x0;
      }
      else {
        DAT_00428d50 = (int *)((int)DAT_00428d50 + 1);
        if (bVar2) {
          *ppiVar6 = (int *)0x0;
          ppiVar6[1] = (int *)0x0;
          ppiVar6[2] = (int *)0x0;
          ppiVar6[3] = (int *)0xfedcbabc;
          ppiVar6[4] = param_1;
          ppiVar6[5] = (int *)0x3;
          ppiVar6[6] = (int *)0x0;
        }
        else {
          DAT_00429840 = DAT_00429840 + (int)param_1;
          DAT_00429854 = DAT_00429854 + (int)param_1;
          if (DAT_0042984c < DAT_00429854) {
            DAT_0042984c = DAT_00429854;
          }
          ppiVar4 = ppiVar6;
          if (DAT_00429850 != (int **)0x0) {
            ((int *)DAT_00429850)[1] = (int)ppiVar6;
            ppiVar4 = DAT_00429844;
          }
          DAT_00429844 = ppiVar4;
          *ppiVar6 = (int *)DAT_00429850;
          ppiVar6[1] = (int *)0x0;
          ppiVar6[2] = param_3;
          ppiVar6[3] = param_4;
          ppiVar6[4] = param_1;
          ppiVar6[5] = param_2;
          ppiVar6[6] = piVar3;
          DAT_00429850 = ppiVar6;
        }
        _memset(ppiVar6 + 7,(uint)DAT_00428d58,4);
        _memset((void *)((int)((int)ppiVar6 + 0x20) + (int)param_1),(uint)DAT_00428d58,4);
        _memset(ppiVar6 + 8,(uint)DAT_00428d5a,(size_t)param_1);
        ppiVar6 = ppiVar6 + 8;
      }
    }
    else {
      iVar5 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                             "Invalid allocation size: %Iu bytes.\n");
      if (iVar5 == 1) {
        pcVar1 = (code *)swi(3);
        ppiVar6 = (int **)(*pcVar1)();
        return ppiVar6;
      }
      ppiVar6 = (int **)0x0;
    }
  }
  return ppiVar6;
}



// Library Function - Single Match
//  _calloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int **ppiVar1;
  
  ppiVar1 = __calloc_dbg(_Count,_Size,(int *)0x1,(int *)0x0,(int *)0x0);
  return ppiVar1;
}



// Library Function - Single Match
//  __calloc_dbg
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl __calloc_dbg(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  int **local_c;
  
  ppiVar1 = __malloc_dbg((int *)(param_2 * param_1),param_3,param_4,param_5);
  if (ppiVar1 != (int **)0x0) {
    local_c = ppiVar1;
    while (local_c < (int **)((int)ppiVar1 + (int)(int *)(param_2 * param_1))) {
      *(undefined *)local_c = 0;
      local_c = (int **)((int)local_c + 1);
    }
  }
  return ppiVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __expand
//  _realloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl FID_conflict___expand(void *_Memory,size_t _NewSize)

{
  int **ppiVar1;
  
  ppiVar1 = __realloc_dbg((uint)_Memory,(int *)_NewSize,(int *)0x1,(int *)0x0,(int *)0x0);
  return ppiVar1;
}



// Library Function - Single Match
//  __realloc_dbg
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl __realloc_dbg(uint param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  
  ppiVar1 = _realloc_help(param_1,param_2,param_3,param_4,param_5,1);
  return ppiVar1;
}



// Library Function - Single Match
//  _realloc_help
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl
_realloc_help(uint param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  int **ppiVar5;
  BOOL BVar6;
  bool bVar7;
  int **local_10;
  
  if (param_1 == 0) {
    ppiVar3 = __malloc_dbg(param_2,param_3,param_4,param_5);
  }
  else {
    if ((param_6 == 0) || (param_2 != (int *)0x0)) {
      if (DAT_00429858 != 0) {
        if (DAT_00429848 == DAT_00429858 + -1) {
          iVar4 = __CrtCheckMemory();
          if ((iVar4 == 0) &&
             (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x264,(char *)0x0,"_CrtCheckMemory()"),
             iVar4 == 1)) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
          DAT_00429848 = 0;
        }
        else {
          DAT_00429848 = DAT_00429848 + 1;
        }
      }
      piVar2 = DAT_00428d50;
      if ((DAT_00428d54 != (int *)0xffffffff) && (DAT_00428d50 == DAT_00428d54)) {
        pcVar1 = (code *)swi(3);
        ppiVar5 = (int **)(*pcVar1)();
        return ppiVar5;
      }
      iVar4 = (*(code *)PTR_thunk_FUN_0041ded0_00428ec0)
                        (2,param_1,param_2,param_3,DAT_00428d50,param_4,param_5);
      if (iVar4 == 0) {
        if (param_4 == (int *)0x0) {
          iVar4 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
        }
        else {
          iVar4 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "Client hook re-allocation failure at file %hs line %d.\n");
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
        }
        ppiVar3 = (int **)0x0;
      }
      else {
        if (param_2 < (int *)0xffffffdc) {
          if (((param_3 == (int *)0x1) || (((uint)param_3 & 0xffff) == 4)) ||
             (((uint)param_3 & 0xffff) == 2)) {
            iVar4 = _CheckBytes((char *)((param_1 & 0xfffffffc) - 4),DAT_00428d5b,4);
            if (iVar4 != 0) {
              iVar4 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                                                          
                                     "The Block at 0x%p was allocated by aligned routines, use _aligned_realloc()"
                                    );
              if (iVar4 != 1) {
                return (int **)0x0;
              }
              pcVar1 = (code *)swi(3);
              ppiVar5 = (int **)(*pcVar1)();
              return ppiVar5;
            }
          }
          else {
            iVar4 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,"%s");
            if (iVar4 == 1) {
              pcVar1 = (code *)swi(3);
              ppiVar5 = (int **)(*pcVar1)();
              return ppiVar5;
            }
          }
          BVar6 = __CrtIsValidHeapPointer(param_1);
          if ((BVar6 == 0) &&
             (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x297,(char *)0x0,
                                     "_CrtIsValidHeapPointer(pUserData)"), iVar4 == 1)) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
          ppiVar5 = (int **)(param_1 - 0x20);
          bVar7 = *(int *)(param_1 - 0xc) == 3;
          if (((bVar7) && ((*(int *)(param_1 - 0x14) != -0x1234544 || (*(int *)(param_1 - 8) != 0)))
              ) && (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x2a1,(char *)0x0,
                                                                                      
                                           "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                          ), iVar4 == 1)) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
          if (param_6 == 0) {
            local_10 = (int **)__expand_base(ppiVar5,(uint)(param_2 + 9));
            if (local_10 == (int **)0x0) {
              return (int **)0x0;
            }
          }
          else {
            local_10 = (int **)__realloc_base((int *)ppiVar5,(uint)(param_2 + 9));
            if (local_10 == (int **)0x0) {
              return (int **)0x0;
            }
          }
          DAT_00428d50 = (int *)((int)DAT_00428d50 + 1);
          if (!bVar7) {
            DAT_00429840 = (DAT_00429840 - (int)local_10[4]) + (int)param_2;
            DAT_00429854 = (DAT_00429854 - (int)local_10[4]) + (int)param_2;
            if (DAT_0042984c < DAT_00429854) {
              DAT_0042984c = DAT_00429854;
            }
          }
          ppiVar3 = local_10 + 8;
          if (local_10[4] <= param_2 && param_2 != local_10[4]) {
            _memset((void *)((int)ppiVar3 + (int)local_10[4]),(uint)DAT_00428d5a,
                    (size_t)((int)param_2 - (int)local_10[4]));
          }
          _memset((void *)((int)ppiVar3 + (int)param_2),(uint)DAT_00428d58,4);
          if (!bVar7) {
            local_10[2] = param_4;
            local_10[3] = param_5;
            local_10[6] = piVar2;
          }
          local_10[4] = param_2;
          if (((param_6 == 0) && (local_10 != ppiVar5)) &&
             (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x2eb,(char *)0x0,
                                     "fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
             iVar4 == 1)) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
          if ((local_10 != ppiVar5) && (!bVar7)) {
            if (*local_10 == (int *)0x0) {
              if ((DAT_00429844 != ppiVar5) &&
                 (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x2fc,(char *)0x0,"_pLastBlock == pOldBlock")
                 , iVar4 == 1)) {
                pcVar1 = (code *)swi(3);
                ppiVar5 = (int **)(*pcVar1)();
                return ppiVar5;
              }
              DAT_00429844 = (int **)local_10[1];
            }
            else {
              (*local_10)[1] = (int)local_10[1];
            }
            if (local_10[1] == (int *)0x0) {
              if ((DAT_00429850 != ppiVar5) &&
                 (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x307,(char *)0x0,"_pFirstBlock == pOldBlock"
                                        ), iVar4 == 1)) {
                pcVar1 = (code *)swi(3);
                ppiVar5 = (int **)(*pcVar1)();
                return ppiVar5;
              }
              DAT_00429850 = (int **)*local_10;
            }
            else {
              *local_10[1] = (int)*local_10;
            }
            if (DAT_00429850 == (int **)0x0) {
              DAT_00429844 = local_10;
            }
            else {
              DAT_00429850[1] = (int *)local_10;
            }
            *local_10 = (int *)DAT_00429850;
            local_10[1] = (int *)0x0;
            DAT_00429850 = local_10;
          }
        }
        else {
          iVar4 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                 "Allocation too large or negative: %Iu bytes.\n");
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            ppiVar5 = (int **)(*pcVar1)();
            return ppiVar5;
          }
          ppiVar3 = (int **)0x0;
        }
      }
    }
    else {
      __free_dbg(param_3,param_1,param_3);
      ppiVar3 = (int **)0x0;
    }
  }
  return ppiVar3;
}



// Library Function - Multiple Matches With Different Base Names
//  __expand
//  _realloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl FID_conflict___expand(void *_Memory,size_t _NewSize)

{
  int **ppiVar1;
  
  ppiVar1 = __expand_dbg((uint)_Memory,(int *)_NewSize,(int *)0x1,(int *)0x0,(int *)0x0);
  return ppiVar1;
}



// Library Function - Single Match
//  __expand_dbg
// 
// Library: Visual Studio 2003 Debug

int ** __cdecl __expand_dbg(uint param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int **ppiVar1;
  
  ppiVar1 = _realloc_help(param_1,param_2,param_3,param_4,param_5,0);
  return ppiVar1;
}



// Library Function - Single Match
//  __free_lk
// 
// Library: Visual Studio 2003 Debug

void __thiscall __free_lk(void *this,uint param_1)

{
  __free_dbg(this,param_1,(int *)0x1);
  return;
}



// Library Function - Single Match
//  __free_dbg
// 
// Library: Visual Studio 2003 Debug

void __thiscall __free_dbg(void *this,uint param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int **_Dst;
  
  if (DAT_00429858 != 0) {
    if (DAT_00429848 == DAT_00429858 + -1) {
      iVar2 = __CrtCheckMemory();
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x44c,(char *)0x0,"_CrtCheckMemory()"), iVar2 == 1))
      {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      DAT_00429848 = 0;
    }
    else {
      DAT_00429848 = DAT_00429848 + 1;
    }
  }
  if (param_1 != 0) {
    if ((param_2 == (int *)0x1) &&
       (iVar2 = _CheckBytes((char *)((param_1 & 0xfffffffc) - 4),DAT_00428d5b,4), iVar2 != 0)) {
      iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                                          
                             "The Block at 0x%p was allocated by aligned routines, use _aligned_free()"
                            );
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar2 = (*(code *)PTR_thunk_FUN_0041ded0_00428ec0)(3,param_1,0,param_2,0,0,0,this);
      if (iVar2 == 0) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        BVar3 = __CrtIsValidHeapPointer(param_1);
        if ((BVar3 == 0) &&
           (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x46c,(char *)0x0,
                                   "_CrtIsValidHeapPointer(pUserData)"), iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Dst = (int **)(param_1 - 0x20);
        if (((((*(uint *)(param_1 - 0xc) & 0xffff) != 4) && (*(int *)(param_1 - 0xc) != 1)) &&
            ((*(uint *)(param_1 - 0xc) & 0xffff) != 2)) &&
           ((*(int *)(param_1 - 0xc) != 3 &&
            (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x472,(char *)0x0,
                                    "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((DAT_00428d4c & 4) == 0) {
          iVar2 = _CheckBytes((char *)(_Dst + 7),DAT_00428d58,4);
          if ((iVar2 == 0) &&
             (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                     "DAMAGE: before %hs block (#%d) at 0x%p.\n"), iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar2 = _CheckBytes((char *)((int)((int)_Dst + 0x20) + (int)_Dst[4]),DAT_00428d58,4);
          if ((iVar2 == 0) &&
             (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                     "DAMAGE: after %hs block (#%d) at 0x%p.\n"), iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (_Dst[5] == (int *)0x3) {
          if (((_Dst[3] != (int *)0xfedcbabc) || (_Dst[6] != (int *)0x0)) &&
             (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x489,(char *)0x0,
                                     "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ")
             , iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          _memset(_Dst,(uint)DAT_00428d59,(size_t)(_Dst[4] + 9));
          __free_base(_Dst);
        }
        else {
          if ((_Dst[5] == (int *)0x2) && (param_2 == (int *)0x1)) {
            param_2 = (int *)0x2;
          }
          if ((_Dst[5] != param_2) &&
             (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x497,(char *)0x0,"pHead->nBlockUse == nBlockUse"
                                    ), iVar2 == 1)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          DAT_00429854 = DAT_00429854 - (int)_Dst[4];
          if ((DAT_00428d4c & 2) == 0) {
            if (*_Dst == (int *)0x0) {
              if ((DAT_00429844 != _Dst) &&
                 (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4a6,(char *)0x0,"_pLastBlock == pHead"),
                 iVar2 == 1)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              DAT_00429844 = (int **)_Dst[1];
            }
            else {
              (*_Dst)[1] = (int)_Dst[1];
            }
            if (_Dst[1] == (int *)0x0) {
              if ((DAT_00429850 != _Dst) &&
                 (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4b0,(char *)0x0,"_pFirstBlock == pHead"),
                 iVar2 == 1)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              DAT_00429850 = (int **)*_Dst;
            }
            else {
              *_Dst[1] = (int)*_Dst;
            }
            _memset(_Dst,(uint)DAT_00428d59,(size_t)(_Dst[4] + 9));
            __free_base(_Dst);
          }
          else {
            _Dst[5] = (int *)0x0;
            _memset(_Dst + 8,(uint)DAT_00428d59,(size_t)_Dst[4]);
          }
        }
      }
    }
  }
  return;
}



// Library Function - Single Match
//  __msize
// 
// Library: Visual Studio 2003 Debug

size_t __cdecl __msize(void *_Memory)

{
  size_t sVar1;
  
  sVar1 = __msize_dbg((int)_Memory);
  return sVar1;
}



// Library Function - Single Match
//  __msize_dbg
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __msize_dbg(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if (DAT_00429858 != 0) {
    if (DAT_00429848 == DAT_00429858 + -1) {
      iVar2 = __CrtCheckMemory();
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x4fb,(char *)0x0,"_CrtCheckMemory()"), iVar2 == 1))
      {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      DAT_00429848 = 0;
    }
    else {
      DAT_00429848 = DAT_00429848 + 1;
    }
  }
  BVar4 = __CrtIsValidHeapPointer(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x50b,(char *)0x0,"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
      ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
     ((*(int *)(param_1 + -0xc) != 3 &&
      (iVar2 = __CrtDbgReport(2,"dbgheap.c",0x511,(char *)0x0,
                              "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return *(undefined4 *)(param_1 + -0x10);
}



undefined4 __cdecl FUN_00417c50(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00428d54;
  DAT_00428d54 = param_1;
  return uVar1;
}



// Library Function - Single Match
//  __CrtSetDbgBlockType
// 
// Library: Visual Studio 2003 Debug

void __cdecl __CrtSetDbgBlockType(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = __CrtIsValidHeapPointer(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) && (*(int *)(param_1 + -0xc) != 3)) {
      iVar3 = __CrtDbgReport(2,"dbgheap.c",0x562,(char *)0x0,
                             "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  return;
}



undefined * __cdecl FUN_00417d20(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_thunk_FUN_0041ded0_00428ec0;
  PTR_thunk_FUN_0041ded0_00428ec0 = param_1;
  return puVar1;
}



// Library Function - Single Match
//  _CheckBytes
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl _CheckBytes(char *param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 1;
  while (iVar2 = param_3 + -1, param_3 != 0) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_3 = iVar2;
    if (cVar1 != param_2) {
      local_8 = 0;
    }
  }
  return local_8;
}



// Library Function - Single Match
//  __CrtCheckMemory
// 
// Library: Visual Studio 2003 Debug

undefined4 __CrtCheckMemory(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 local_10;
  undefined4 *local_8;
  
  if ((DAT_00428d4c & 1) == 0) {
    local_10 = 1;
  }
  else {
    iVar3 = __heapchk();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      local_10 = 1;
      local_8 = DAT_00429850;
      while (local_8 != (undefined4 *)0x0) {
        bVar2 = true;
        if (((((local_8[5] & 0xffff) == 4) || (local_8[5] == 1)) || ((local_8[5] & 0xffff) == 2)) ||
           (local_8[5] == 3)) {
          pcVar5 = (&PTR_DAT_00428d5c)[local_8[5] & 0xffff];
        }
        else {
          pcVar5 = "DAMAGED";
        }
        iVar3 = _CheckBytes((char *)(local_8 + 7),DAT_00428d58,4);
        if (iVar3 == 0) {
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "DAMAGE: before %hs block (#%d) at 0x%p.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)(pcVar5);
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = _CheckBytes((char *)((int)local_8 + local_8[4] + 0x20),DAT_00428d58,4);
        if (iVar3 == 0) {
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "DAMAGE: after %hs block (#%d) at 0x%p.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_8[5] == 0) &&
           (iVar3 = _CheckBytes((char *)(local_8 + 8),DAT_00428d59,local_8[4]), iVar3 == 0)) {
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "DAMAGE: on top of Free block at 0x%p.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_8[2] != 0) &&
             (iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                     "%hs allocated at file %hs(%d).\n"), iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "%hs located at 0x%p is %Iu bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_10 = 0;
        }
        local_8 = (undefined4 *)*local_8;
      }
    }
    else {
      switch(iVar3) {
      default:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -6:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      local_10 = 0;
    }
  }
  return local_10;
}



// Library Function - Single Match
//  __CrtSetDbgFlag
// 
// Library: Visual Studio 2003 Debug

uint __cdecl __CrtSetDbgFlag(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00428d4c;
  if (param_1 != 0xffffffff) {
    if ((param_1 & 4) == 0) {
      DAT_00429858 = (int)param_1 >> 0x10 & 0xffff;
    }
    else {
      DAT_00429858 = 1;
    }
    DAT_00429848 = 0;
    DAT_00428d4c = param_1;
  }
  return uVar1;
}



// Library Function - Single Match
//  __CrtDoForAllClientObjects
// 
// Library: Visual Studio 2003 Debug

void __cdecl __CrtDoForAllClientObjects(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_00428d4c & 1) != 0) {
    local_8 = DAT_00429850;
    while (local_8 != (undefined4 *)0x0) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
      local_8 = (undefined4 *)*local_8;
    }
  }
  return;
}



// Library Function - Single Match
//  __CrtIsValidPointer
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __CrtIsValidPointer(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __CrtIsValidHeapPointer
// 
// Library: Visual Studio 2003 Debug

BOOL __cdecl __CrtIsValidHeapPointer(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = __CrtIsValidPointer((void *)(param_1 + -0x20),0x20,0);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else {
      if (_DAT_0042af90 == 3) {
        uVar3 = ___sbh_find_block(param_1 + -0x20);
        if (uVar3 == 0) {
          if ((DAT_0042963c & 0x8000) == 0) {
            BVar1 = HeapValidate(DAT_0042af80,0,(LPCVOID)(param_1 + -0x20));
          }
          else {
            BVar1 = 1;
          }
        }
        else {
          BVar1 = ___sbh_verify_block(uVar3,param_1 + -0x20);
        }
      }
      else {
        BVar1 = HeapValidate(DAT_0042af80,0,(LPCVOID)(param_1 + -0x20));
      }
    }
  }
  return BVar1;
}



// Library Function - Single Match
//  __CrtIsMemoryBlock
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl
__CrtIsMemoryBlock(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  BVar1 = __CrtIsValidHeapPointer((int)param_1);
  if (BVar1 == 0) {
    local_8 = 0;
  }
  else {
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = __CrtIsValidPointer(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_00428d50)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}



// Library Function - Single Match
//  __CrtReportBlockType
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __CrtReportBlockType(int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = __CrtIsValidHeapPointer(param_1);
  if (BVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + -0xc);
  }
  return uVar2;
}



undefined4 __cdecl FUN_00418500(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042af60;
  DAT_0042af60 = param_1;
  return uVar1;
}



// Library Function - Single Match
//  __CrtMemCheckpoint
// 
// Library: Visual Studio 2003 Debug

void __cdecl __CrtMemCheckpoint(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    *param_1 = DAT_00429850;
    local_8 = 0;
    while (local_8 < 5) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
      local_8 = local_8 + 1;
    }
    local_c = DAT_00429850;
    while (local_c != (undefined4 *)0x0) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"Bad memory block found at 0x%p.\n"
                              );
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_c = (undefined4 *)*local_c;
    }
    param_1[0xb] = DAT_0042984c;
    param_1[0xc] = DAT_00429840;
  }
  return;
}



// Library Function - Single Match
//  __CrtMemDifference
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __CrtMemDifference(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_8 = 0;
  }
  else {
    local_c = 0;
    while (local_c < 5) {
      param_1[local_c + 6] =
           *(int *)(param_3 + 0x18 + local_c * 4) - *(int *)(param_2 + 0x18 + local_c * 4);
      param_1[local_c + 1] =
           *(int *)(param_3 + 4 + local_c * 4) - *(int *)(param_2 + 4 + local_c * 4);
      if (((param_1[local_c + 6] != 0) || (param_1[local_c + 1] != 0)) &&
         ((local_c != 0 && ((local_c != 2 || ((DAT_00428d4c & 0x10) != 0)))))) {
        local_8 = 1;
      }
      local_c = local_c + 1;
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_8;
}



// Library Function - Single Match
//  __CrtMemDumpAllObjectsSince
// 
// Library: Visual Studio 2003 Debug

void __cdecl __CrtMemDumpAllObjectsSince(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_00429850;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
      if (iVar2 != 1) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_00428d4c & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = __CrtIsValidPointer((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                               "client block at 0x%p, subtype %x, %Iu bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_0042af60 == (code *)0x0) {
          __printMemBlockData((int)local_8);
        }
        else {
          (*DAT_0042af60)(local_8 + 8,local_8[4]);
        }
      }
      else {
        if (local_8[5] == 1) {
          iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                 "normal block at 0x%p, %Iu bytes long.\n");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          __printMemBlockData((int)local_8);
        }
        else {
          if ((local_8[5] & 0xffff) == 2) {
            iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                                   "crt block at 0x%p, subtype %x, %Iu bytes long.\n");
            if (iVar2 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            __printMemBlockData((int)local_8);
          }
        }
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}



// Library Function - Single Match
//  __printMemBlockData
// 
// Library: Visual Studio 2003 Debug

void __cdecl __printMemBlockData(int param_1)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint local_60;
  int local_5c;
  byte local_54 [20];
  char local_40 [52];
  int local_c;
  int local_8;
  
  local_c = DAT_00428eb0;
  local_8 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) < 0x10) {
      local_5c = *(int *)(param_1 + 0x10);
    }
    else {
      local_5c = 0x10;
    }
    if (local_5c <= local_8) break;
    bVar1 = *(byte *)(param_1 + local_8 + 0x20);
    if (DAT_00428ec4 < 2) {
      local_60 = __chvalidator((uint)bVar1,0x157);
    }
    else {
      local_60 = __isctype((uint)bVar1,0x157);
    }
    bVar3 = bVar1;
    if (local_60 == 0) {
      bVar3 = 0x20;
    }
    local_54[local_8] = bVar3;
    _sprintf(local_40 + local_8 * 3,"%.2X ",(uint)bVar1);
    local_8 = local_8 + 1;
  }
  local_54[local_8] = 0;
  iVar4 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0," Data: <%s> %s\n");
  if (iVar4 != 1) {
    thunk_FUN_0041d0f0(local_c);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// Library Function - Single Match
//  __CrtDumpMemoryLeaks
// 
// Library: Visual Studio 2003 Debug

undefined4 __CrtDumpMemoryLeaks(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  __CrtMemCheckpoint(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_00428d4c & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    __CrtMemDumpAllObjectsSince((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}



// Library Function - Single Match
//  __CrtMemDumpStatistics
// 
// Library: Visual Studio 2003 Debug

void __cdecl __CrtMemDumpStatistics(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    local_8 = 0;
    while (local_8 < 5) {
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%Id bytes in %Id %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_8 = local_8 + 1;
    }
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"Largest number used: %Id bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"Total allocations: %Id bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



// Library Function - Single Match
//  __aligned_malloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl __aligned_malloc(size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = (void *)__aligned_offset_malloc_dbg(_Size,_Alignment,0,(int *)0x0,(int *)0x0);
  return pvVar1;
}



// Library Function - Single Match
//  __aligned_malloc_dbg
// 
// Library: Visual Studio 2003 Debug

void __cdecl __aligned_malloc_dbg(uint param_1,uint param_2,int *param_3,int *param_4)

{
  __aligned_offset_malloc_dbg(param_1,param_2,0,param_3,param_4);
  return;
}



// Library Function - Single Match
//  __aligned_realloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl __aligned_realloc(void *_Memory,size_t _NewSize,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = __aligned_offset_realloc_dbg(_Memory,_NewSize,_Alignment,0,(int *)0x0,(int *)0x0);
  return pvVar1;
}



// Library Function - Single Match
//  __aligned_realloc_dbg
// 
// Library: Visual Studio 2003 Debug

void __cdecl
__aligned_realloc_dbg(void *param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  __aligned_offset_realloc_dbg(param_1,param_2,param_3,0,param_4,param_5);
  return;
}



// Library Function - Single Match
//  __aligned_offset_malloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl __aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)__aligned_offset_malloc_dbg(_Size,_Alignment,_Offset,(int *)0x0,(int *)0x0);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __aligned_offset_malloc_dbg
// 
// Library: Visual Studio 2003 Debug

int __cdecl
__aligned_offset_malloc_dbg(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  uint local_18;
  
  if ((param_2 - 1 & param_2) == 0) {
    if ((param_3 < param_1) || (param_3 == 0)) {
      if (param_2 < 5) {
        local_18 = 4;
      }
      else {
        local_18 = param_2;
      }
      local_18 = local_18 - 1;
      uVar4 = -param_3 & 3;
      ppiVar3 = __malloc_dbg((int *)(uVar4 + param_1 + 8 + local_18),(int *)0x1,param_4,param_5);
      if (ppiVar3 == (int **)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((int)ppiVar3 + param_3 + uVar4 + local_18 + 8 & ~local_18) - param_3;
        _memset((void *)((iVar2 - uVar4) + -4),(uint)DAT_00428d5b,4);
        *(int ***)((iVar2 - uVar4) + -8) = ppiVar3;
      }
    }
    else {
      iVar2 = __CrtDbgReport(2,"dbgheap.c",0x9a6,(char *)0x0,"(\"offset must be within size\", 0)");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      _DAT_0042962c = 0x16;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = __CrtDbgReport(2,"dbgheap.c",0x99f,(char *)0x0,"(\"alignment must be a power of 2\",0)")
    ;
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    _DAT_0042962c = 0x16;
    iVar2 = 0;
  }
  return iVar2;
}



// Library Function - Single Match
//  __aligned_offset_realloc
// 
// Library: Visual Studio 2003 Debug

void * __cdecl
__aligned_offset_realloc(void *_Memory,size_t _NewSize,size_t _Alignment,size_t _Offset)

{
  void *pvVar1;
  
  pvVar1 = __aligned_offset_realloc_dbg(_Memory,_NewSize,_Alignment,_Offset,(int *)0x0,(int *)0x0);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __aligned_offset_realloc_dbg
// 
// Library: Visual Studio 2003 Debug

void * __cdecl
__aligned_offset_realloc_dbg
          (void *param_1,uint param_2,uint param_3,uint param_4,int *param_5,int *param_6)

{
  code *pcVar1;
  void *pvVar2;
  void **this;
  int iVar3;
  size_t sVar4;
  int **ppiVar5;
  uint uVar6;
  uint local_24;
  uint local_20;
  
  if (param_1 == (void *)0x0) {
    pvVar2 = (void *)__aligned_offset_malloc_dbg(param_2,param_3,param_4,param_5,param_6);
  }
  else {
    if (param_2 == 0) {
      __aligned_free_dbg((uint)param_1);
      pvVar2 = (void *)0x0;
    }
    else {
      this = (void **)(((uint)param_1 & 0xfffffffc) - 8);
      iVar3 = _CheckBytes((char *)((int)param_1 + -4),DAT_00428d58,4);
      if (iVar3 == 0) {
        iVar3 = _CheckBytes((char *)(((uint)param_1 & 0xfffffffc) - 4),DAT_00428d5b,4);
        if ((iVar3 == 0) &&
           (iVar3 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                   "Damage before 0x%p which was allocated by aligned routine\n"),
           iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          pvVar2 = (void *)(*pcVar1)();
          return pvVar2;
        }
        if ((param_3 - 1 & param_3) == 0) {
          if ((param_4 < param_2) || (param_4 == 0)) {
            sVar4 = __msize(*this);
            local_24 = sVar4 - (int)((int)param_1 - (int)*this);
            if (param_3 < 5) {
              local_20 = 4;
            }
            else {
              local_20 = param_3;
            }
            local_20 = local_20 - 1;
            uVar6 = -param_4 & 3;
            ppiVar5 = __malloc_dbg((int *)(uVar6 + param_2 + 8 + local_20),(int *)0x1,param_5,
                                   param_6);
            if (ppiVar5 == (int **)0x0) {
              pvVar2 = (void *)0x0;
            }
            else {
              pvVar2 = (void *)(((int)ppiVar5 + param_4 + uVar6 + local_20 + 8 & ~local_20) -
                               param_4);
              _memset((void *)((int)(void *)((int)pvVar2 - uVar6) + -4),(uint)DAT_00428d5b,4);
              *(int ***)((int)(void *)((int)pvVar2 - uVar6) + -8) = ppiVar5;
              if (param_2 < local_24) {
                local_24 = param_2;
              }
              FID_conflict__memcpy(pvVar2,param_1,local_24);
              __free_dbg(this,(uint)*this,(int *)0x1);
            }
          }
          else {
            iVar3 = __CrtDbgReport(2,"dbgheap.c",0xa28,(char *)0x0,
                                   "(\"offset must be within size\", 0)");
            if (iVar3 == 1) {
              pcVar1 = (code *)swi(3);
              pvVar2 = (void *)(*pcVar1)();
              return pvVar2;
            }
            _DAT_0042962c = 0x16;
            pvVar2 = (void *)0x0;
          }
        }
        else {
          iVar3 = __CrtDbgReport(2,"dbgheap.c",0xa22,(char *)0x0,
                                 "(\"alignment must be a power of 2\",0)");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            pvVar2 = (void *)(*pcVar1)();
            return pvVar2;
          }
          _DAT_0042962c = 0x16;
          pvVar2 = (void *)0x0;
        }
      }
      else {
        iVar3 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                                              
                               "The block at 0x%p was not allocated by _aligned routines, use realloc()"
                              );
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          pvVar2 = (void *)(*pcVar1)();
          return pvVar2;
        }
        pvVar2 = (void *)0x0;
      }
    }
  }
  return pvVar2;
}



// Library Function - Single Match
//  __aligned_free
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug

void __cdecl __aligned_free(void *_Memory)

{
  __aligned_free_dbg((uint)_Memory);
  return;
}



// Library Function - Single Match
//  __aligned_free_dbg
// 
// Library: Visual Studio 2003 Debug

void __cdecl __aligned_free_dbg(uint param_1)

{
  void *this;
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = _CheckBytes((char *)(param_1 - 4),DAT_00428d58,4);
    if (iVar2 == 0) {
      iVar2 = _CheckBytes((char *)((param_1 & 0xfffffffc) - 4),DAT_00428d5b,4);
      if ((iVar2 == 0) &&
         (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                                 "Damage before 0x%p which was allocated by aligned routine\n"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = *(void **)((param_1 & 0xfffffffc) - 8);
      __free_dbg(this,(uint)this,(int *)0x1);
    }
    else {
      iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                             "The block at 0x%p was not allocated by _aligned routines, use free()")
      ;
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}



// Library Function - Single Match
//  __ismbbkalnum
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbkalnum(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0,1);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbkprint
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbkprint(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0,3);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbkpunct
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbkpunct(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0,2);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbalnum
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbalnum(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0x107,1);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbalpha
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbalpha(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0x103,1);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbgraph
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbgraph(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0x117,3);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbprint
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbprint(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0x157,3);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbpunct
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbpunct(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0x10,2);
  return iVar1;
}



// Library Function - Single Match
//  __ismbblead
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0,4);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbtrail
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbtrail(uint _C)

{
  int iVar1;
  
  iVar1 = _x_ismbbtype((byte)_C,0,8);
  return iVar1;
}



// Library Function - Single Match
//  __ismbbkana
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbbkana(uint _C)

{
  int iVar1;
  
  if ((DAT_0042ae44 == 0x3a4) && (iVar1 = _x_ismbbtype((byte)_C,0,3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// Library Function - Single Match
//  _x_ismbbtype
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl _x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint local_8;
  
  if (((&DAT_0042ad41)[param_1] & param_3) == 0) {
    if (param_2 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(ushort *)(PTR_DAT_00428ed4 + (uint)param_1 * 2) & param_2;
    }
    if (local_8 == 0) {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setmbcp
// 
// Library: Visual Studio 2003 Debug

int __cdecl __setmbcp(int _CodePage)

{
  UINT CodePage;
  BOOL BVar1;
  int iVar2;
  byte *local_30;
  _cpinfo local_2c;
  int local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  local_18 = DAT_00428eb0;
  CodePage = _getSystemCP(_CodePage);
  if (CodePage != DAT_0042ae44) {
    if (CodePage == 0) {
      _setSBCS();
      _setSBUpLow();
    }
    else {
      local_c = 0;
      while (local_c < 5) {
        if (*(UINT *)(&DAT_00428d80 + local_c * 0x30) == CodePage) {
          local_14 = 0;
          while (local_14 < 0x101) {
            (&DAT_0042ad40)[local_14] = 0;
            local_14 = local_14 + 1;
          }
          local_8 = 0;
          while (local_8 < 4) {
            local_10 = &DAT_00428d90 + local_8 * 8 + local_c * 0x30;
            while ((*local_10 != 0 && (local_10[1] != 0))) {
              local_14 = (uint)*local_10;
              while (local_14 <= local_10[1]) {
                (&DAT_0042ad41)[local_14] = (&DAT_0042ad41)[local_14] | (&DAT_00428d78)[local_8];
                local_14 = local_14 + 1;
              }
              local_10 = local_10 + 2;
            }
            local_8 = local_8 + 1;
          }
          _DAT_0042ad2c = 1;
          DAT_0042ae44 = CodePage;
          DAT_0042acb4 = _CPtoLCID(CodePage);
          local_8 = 0;
          while (local_8 < 6) {
            *(undefined2 *)(&DAT_0042ae50 + local_8 * 2) =
                 *(undefined2 *)(&DAT_00428d84 + local_8 * 2 + local_c * 0x30);
            local_8 = local_8 + 1;
          }
          _setSBUpLow();
          goto LAB_00419980;
        }
        local_c = local_c + 1;
      }
      BVar1 = GetCPInfo(CodePage,(LPCPINFO)&local_2c);
      if (BVar1 == 1) {
        local_14 = 0;
        while (local_14 < 0x101) {
          (&DAT_0042ad40)[local_14] = 0;
          local_14 = local_14 + 1;
        }
        DAT_0042acb4 = 0;
        if (local_2c.MaxCharSize < 2) {
          _DAT_0042ad2c = 0;
          DAT_0042ae44 = CodePage;
        }
        else {
          local_30 = local_2c.LeadByte;
          DAT_0042ae44 = CodePage;
          while ((*local_30 != 0 && (local_30[1] != 0))) {
            local_14 = (uint)*local_30;
            while (local_14 <= local_30[1]) {
              (&DAT_0042ad41)[local_14] = (&DAT_0042ad41)[local_14] | 4;
              local_14 = local_14 + 1;
            }
            local_30 = local_30 + 2;
          }
          local_14 = 1;
          while (local_14 < 0xff) {
            (&DAT_0042ad41)[local_14] = (&DAT_0042ad41)[local_14] | 8;
            local_14 = local_14 + 1;
          }
          DAT_0042acb4 = _CPtoLCID(DAT_0042ae44);
          _DAT_0042ad2c = 1;
        }
        local_8 = 0;
        while (local_8 < 6) {
          *(undefined2 *)(&DAT_0042ae50 + local_8 * 2) = 0;
          local_8 = local_8 + 1;
        }
        _setSBUpLow();
      }
      else {
        if (_DAT_00429864 != 0) {
          _setSBCS();
          _setSBUpLow();
        }
      }
    }
  }
LAB_00419980:
  iVar2 = thunk_FUN_0041d0f0(local_18);
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _getSystemCP
// 
// Library: Visual Studio 2003 Debug

UINT __cdecl _getSystemCP(UINT param_1)

{
  _DAT_00429864 = 0;
  if (param_1 == 0xfffffffe) {
    _DAT_00429864 = 1;
    param_1 = GetOEMCP();
  }
  else {
    if (param_1 == 0xfffffffd) {
      _DAT_00429864 = 1;
      param_1 = GetACP();
    }
    else {
      if (param_1 == 0xfffffffc) {
        _DAT_00429864 = 1;
        param_1 = DAT_00429914;
      }
    }
  }
  return param_1;
}



// Library Function - Single Match
//  _CPtoLCID
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl _CPtoLCID(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3a4:
    uVar1 = 0x411;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x3a8:
    uVar1 = 0x804;
    break;
  case 0x3b5:
    uVar1 = 0x412;
    break;
  case 0x3b6:
    uVar1 = 0x404;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _setSBCS
// 
// Library: Visual Studio 2003 Debug

void _setSBCS(void)

{
  int local_8;
  
  local_8 = 0;
  while (local_8 < 0x101) {
    (&DAT_0042ad40)[local_8] = 0;
    local_8 = local_8 + 1;
  }
  DAT_0042ae44 = 0;
  _DAT_0042ad2c = 0;
  DAT_0042acb4 = 0;
  local_8 = 0;
  while (local_8 < 6) {
    *(undefined2 *)(&DAT_0042ae50 + local_8 * 2) = 0;
    local_8 = local_8 + 1;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Library Function - Single Match
//  _setSBUpLow
// 
// Library: Visual Studio 2003 Debug

void _setSBUpLow(void)

{
  BOOL BVar1;
  UINT in_stack_fffffad4;
  byte local_526 [14];
  uint local_518;
  undefined local_514 [260];
  byte *local_410;
  undefined local_40c [256];
  undefined local_30c [256];
  ushort local_20c [258];
  int local_8;
  
  local_8 = DAT_00428eb0;
  BVar1 = GetCPInfo((UINT)DAT_0042ae44,(LPCPINFO)&stack0xfffffad4);
  if (BVar1 == 1) {
    local_518 = 0;
    while (local_518 < 0x100) {
      local_514[local_518] = (undefined)local_518;
      local_518 = local_518 + 1;
    }
    local_514[0] = 0x20;
    local_410 = local_526;
    while (*local_410 != 0) {
      local_518 = (uint)*local_410;
      while (local_518 <= local_410[1]) {
        local_514[local_518] = 0x20;
        local_518 = local_518 + 1;
      }
      local_410 = local_410 + 2;
    }
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_514,(LPCSTR)0x100,(int)local_20c,DAT_0042ae44,
               (int)DAT_0042acb4,0);
    ___crtLCMapStringA(DAT_0042acb4,(LPCWSTR)0x100,(DWORD)local_514,(LPCSTR)0x100,(int)local_30c,
                       (LPSTR)0x100,(int)DAT_0042ae44,0,in_stack_fffffad4);
    ___crtLCMapStringA(DAT_0042acb4,(LPCWSTR)0x200,(DWORD)local_514,(LPCSTR)0x100,(int)local_40c,
                       (LPSTR)0x100,(int)DAT_0042ae44,0,in_stack_fffffad4);
    local_518 = 0;
    while (local_518 < 0x100) {
      if ((local_20c[local_518] & 1) == 0) {
        if ((local_20c[local_518] & 2) == 0) {
          (&DAT_0042ae60)[local_518] = 0;
        }
        else {
          (&DAT_0042ad41)[local_518] = (&DAT_0042ad41)[local_518] | 0x20;
          (&DAT_0042ae60)[local_518] = local_40c[local_518];
        }
      }
      else {
        (&DAT_0042ad41)[local_518] = (&DAT_0042ad41)[local_518] | 0x10;
        (&DAT_0042ae60)[local_518] = local_30c[local_518];
      }
      local_518 = local_518 + 1;
    }
  }
  else {
    local_518 = 0;
    while (local_518 < 0x100) {
      if ((local_518 < 0x41) || (0x5a < local_518)) {
        if ((local_518 < 0x61) || (0x7a < local_518)) {
          (&DAT_0042ae60)[local_518] = 0;
        }
        else {
          (&DAT_0042ad41)[local_518] = (&DAT_0042ad41)[local_518] | 0x20;
          (&DAT_0042ae60)[local_518] = (char)local_518 + -0x20;
        }
      }
      else {
        (&DAT_0042ad41)[local_518] = (&DAT_0042ad41)[local_518] | 0x10;
        (&DAT_0042ae60)[local_518] = (char)local_518 + ' ';
      }
      local_518 = local_518 + 1;
    }
  }
  thunk_FUN_0041d0f0(local_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00419ff0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042ae44;
  if (_DAT_0042ad2c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___initmbctable
// 
// Library: Visual Studio 2003 Debug

undefined4 ___initmbctable(void)

{
  if (_DAT_0042b0f8 == 0) {
    __setmbcp(-3);
    _DAT_0042b0f8 = 1;
  }
  return 0;
}



uint * __cdecl FUN_0041a040(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (uint)param_2 & 3;
  puVar4 = param_1;
  while (uVar3 != 0) {
    bVar1 = *(byte *)param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0041a130;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    uVar3 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_0041a130:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



uint * __cdecl FUN_0041a050(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    bVar1 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (bVar1 == 0) goto LAB_0041a0a3;
    uVar4 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto LAB_0041a0b5;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_0041a0b5;
    }
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_0041a0b5;
    }
  } while ((uVar4 & 0xff000000) != 0);
LAB_0041a0a3:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_0041a0b5:
  uVar4 = (uint)param_2 & 3;
  while (uVar4 != 0) {
    bVar1 = *(byte *)param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0041a130;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar4 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar4 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_0041a130:
        *(byte *)puVar5 = (byte)uVar4;
        return param_1;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar4;
        return param_1;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar4;
        *(byte *)((int)puVar5 + 2) = 0;
        return param_1;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar5 = uVar4;
        return param_1;
      }
    }
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while( true );
}



// Library Function - Single Match
//  _strlen
// 
// Library: Visual Studio

size_t __cdecl _strlen(char *_Str)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = (uint)_Str & 3;
  puVar3 = (uint *)_Str;
  while (uVar2 != 0) {
    cVar1 = *(char *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (cVar1 == '\0') goto LAB_0041a1e3;
    uVar2 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar4 = puVar3;
      puVar3 = puVar4 + 1;
    } while (((*puVar4 ^ 0xffffffff ^ *puVar4 + 0x7efefeff) & 0x81010100) == 0);
    uVar2 = *puVar4;
    if ((char)uVar2 == '\0') {
      return (size_t)((int)puVar4 - (int)_Str);
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (size_t)((int)puVar4 + (1 - (int)_Str));
    }
    if ((uVar2 & 0xff0000) == 0) {
      return (size_t)((int)puVar4 + (2 - (int)_Str));
    }
  } while ((uVar2 & 0xff000000) != 0);
LAB_0041a1e3:
  return (size_t)((int)puVar3 + (-1 - (int)_Str));
}



// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      if (uVar2 < 8) goto LAB_0041a3f4;
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_0041a418_caseD_1;
      case 2:
        goto switchD_0041a418_caseD_2;
      case 3:
        goto switchD_0041a418_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_0041a418_caseD_1:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        return _Dst;
      case 2:
switchD_0041a418_caseD_2:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        return _Dst;
      case 3:
switchD_0041a418_caseD_3:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
        return _Dst;
      default:
        uVar3 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar3 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (uVar2 < 8) {
LAB_0041a3f4:
                    // WARNING: Could not recover jumptable at 0x0041a3f6. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar1 = (void *)(*(code *)(&PTR_LAB_0041a4c8)[-uVar2])();
            return pvVar1;
          }
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041a418_caseD_1;
          case 2:
            goto switchD_0041a418_caseD_2;
          case 3:
            goto switchD_0041a418_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (uVar2 < 8) goto LAB_0041a3f4;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041a418_caseD_1;
          case 2:
            goto switchD_0041a418_caseD_2;
          case 3:
            goto switchD_0041a418_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (uVar2 < 8) goto LAB_0041a3f4;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041a418_caseD_1;
          case 2:
            goto switchD_0041a418_caseD_2;
          case 3:
            goto switchD_0041a418_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar4 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    if (uVar2 < 8) goto LAB_0041a28c;
    while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
      uVar2 = uVar2 - 1;
      *puVar4 = *_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar4 = puVar4 + 1;
    }
    switch(_Size & 3) {
    case 1:
      goto switchD_0041a284_caseD_1;
    case 2:
      goto switchD_0041a284_caseD_2;
    case 3:
      goto switchD_0041a284_caseD_3;
    }
  }
  else {
    switch(_Size) {
    case 0:
      break;
    case 1:
switchD_0041a284_caseD_1:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      return _Dst;
    case 2:
switchD_0041a284_caseD_2:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      return _Dst;
    case 3:
switchD_0041a284_caseD_3:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)_Src + 2);
      return _Dst;
    default:
      uVar3 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (undefined4 *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (uVar2 < 8) {
LAB_0041a28c:
                    // WARNING: Could not recover jumptable at 0x0041a28c. Too many branches
                    // WARNING: Treating indirect jump as call
          pvVar1 = (void *)(*(code *)(&PTR_LAB_0041a310)[uVar2])();
          return pvVar1;
        }
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041a284_caseD_1;
        case 2:
          goto switchD_0041a284_caseD_2;
        case 3:
          goto switchD_0041a284_caseD_3;
        }
        break;
      case 2:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (undefined4 *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (uVar2 < 8) goto LAB_0041a28c;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041a284_caseD_1;
        case 2:
          goto switchD_0041a284_caseD_2;
        case 3:
          goto switchD_0041a284_caseD_3;
        }
        break;
      case 3:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        _Src = (undefined4 *)((int)_Src + 1);
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (uVar2 < 8) goto LAB_0041a28c;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041a284_caseD_1;
        case 2:
          goto switchD_0041a284_caseD_2;
        case 3:
          goto switchD_0041a284_caseD_3;
        }
      }
    }
  }
  return _Dst;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0041a640(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042aca4;
  if (_DAT_0042af90 != 3) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __set_sbh_threshold
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __set_sbh_threshold(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  if (_DAT_0042af90 == 3) {
    if (param_1 < 0x3f9) {
      DAT_0042aca4 = param_1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if ((((_DAT_0042af90 == 1) && (param_1 != 0)) && (param_1 < 0x3f9)) &&
       (bVar1 = ___sbh_heap_init(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
      DAT_0042aca4 = param_1;
      _DAT_0042af90 = 3;
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// Library Function - Single Match
//  ___sbh_heap_init
// 
// Library: Visual Studio 2003 Debug

bool __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_0042aca0 = HeapAlloc(DAT_0042af80,0,0x140);
  if (DAT_0042aca0 != (LPVOID)0x0) {
    DAT_0042aca4 = param_1;
    DAT_0042ac98 = 0;
    DAT_0042ac9c = 0;
    DAT_0042acac = 0x10;
    DAT_0042aca8 = DAT_0042aca0;
  }
  return DAT_0042aca0 != (LPVOID)0x0;
}



// Library Function - Single Match
//  ___sbh_find_block
// 
// Library: Visual Studio 2003 Debug

uint __cdecl ___sbh_find_block(int param_1)

{
  uint local_c;
  
  local_c = DAT_0042aca0;
  while( true ) {
    if (DAT_0042ac9c * 0x14 + DAT_0042aca0 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}



// Library Function - Single Match
//  ___sbh_verify_block
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl ___sbh_verify_block(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f) & *(uint *)(param_1 + 8)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// Library Function - Single Match
//  ___sbh_free_block
// 
// Library: Visual Studio 2003 Debug

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint *local_1c;
  uint local_14;
  
  uVar4 = param_1[4];
  uVar9 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar9 * 0x204);
  local_1c = (uint *)(param_2 + -4);
  local_40 = *local_1c - 1;
  if ((local_40 & 1) == 0) {
    puVar7 = (uint *)((int)local_1c + local_40);
    uVar5 = *puVar7;
    uVar6 = *(uint *)(param_2 + -8);
    if ((uVar5 & 1) == 0) {
      local_14 = ((int)uVar5 >> 4) - 1;
      if (0x3f < local_14) {
        local_14 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)local_14;
        if (local_14 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
          *(char *)(uVar4 + local_14 + 4) = *(char *)(uVar4 + local_14 + 4) + -1;
          if (*(char *)(uVar4 + local_14 + 4) == '\0') {
            *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
          *(char *)(uVar4 + local_14 + 4) = *(char *)(uVar4 + local_14 + 4) + -1;
          if (*(char *)(uVar4 + local_14 + 4) == '\0') {
            param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_40 = local_40 + uVar5;
    }
    local_3c = ((int)local_40 >> 4) - 1;
    if (0x3f < local_3c) {
      local_3c = 0x3f;
    }
    if ((uVar6 & 1) == 0) {
      local_1c = (uint *)((int)local_1c - uVar6);
      local_34 = ((int)uVar6 >> 4) - 1;
      if (0x3f < local_34) {
        local_34 = 0x3f;
      }
      local_40 = local_40 + uVar6;
      local_3c = ((int)local_40 >> 4) - 1;
      if (0x3f < local_3c) {
        local_3c = 0x3f;
      }
      if (local_34 != local_3c) {
        if (local_1c[1] == local_1c[2]) {
          bVar8 = (byte)local_34;
          if (local_34 < 0x20) {
            *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
            *(char *)(uVar4 + local_34 + 4) = *(char *)(uVar4 + local_34 + 4) + -1;
            if (*(char *)(uVar4 + local_34 + 4) == '\0') {
              *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
            }
          }
          else {
            *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
            *(char *)(uVar4 + local_34 + 4) = *(char *)(uVar4 + local_34 + 4) + -1;
            if (*(char *)(uVar4 + local_34 + 4) == '\0') {
              param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
            }
          }
        }
        *(uint *)(local_1c[2] + 4) = local_1c[1];
        *(uint *)(local_1c[1] + 8) = local_1c[2];
      }
    }
    if (((uVar6 & 1) != 0) || (local_34 != local_3c)) {
      piVar1 = piVar2 + local_3c * 2;
      local_1c[1] = piVar1[1];
      local_1c[2] = (uint)piVar1;
      piVar1[1] = (int)local_1c;
      *(uint **)(local_1c[1] + 8) = local_1c;
      if (local_1c[1] == local_1c[2]) {
        bVar8 = (byte)local_3c;
        if (local_3c < 0x20) {
          cVar3 = *(char *)(uVar4 + local_3c + 4);
          *(char *)(uVar4 + local_3c + 4) = *(char *)(uVar4 + local_3c + 4) + '\x01';
          if (cVar3 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar4 + 0x44 + uVar9 * 4);
        }
        else {
          cVar3 = *(char *)(uVar4 + local_3c + 4);
          *(char *)(uVar4 + local_3c + 4) = *(char *)(uVar4 + local_3c + 4) + '\x01';
          if (cVar3 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
        }
      }
    }
    *local_1c = local_40;
    *(uint *)((int)local_1c + (local_40 - 4)) = local_40;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (DAT_0042ac98 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_0042acb0 * 0x8000 + DAT_0042ac98[3]),0x8000,0x4000);
        DAT_0042ac98[2] = 0x80000000U >> ((byte)DAT_0042acb0 & 0x1f) | DAT_0042ac98[2];
        *(undefined4 *)(DAT_0042ac98[4] + 0xc4 + DAT_0042acb0 * 4) = 0;
        *(char *)(DAT_0042ac98[4] + 0x43) = *(char *)(DAT_0042ac98[4] + 0x43) + -1;
        if (*(char *)(DAT_0042ac98[4] + 0x43) == '\0') {
          DAT_0042ac98[1] = DAT_0042ac98[1] & 0xfffffffe;
        }
        if (DAT_0042ac98[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_0042ac98[3],0,0x8000);
          HeapFree(DAT_0042af80,0,(LPVOID)DAT_0042ac98[4]);
          FID_conflict__memcpy
                    (DAT_0042ac98,DAT_0042ac98 + 5,
                     (DAT_0042ac9c * 0x14 + DAT_0042aca0) - (int)(DAT_0042ac98 + 5));
          DAT_0042ac9c = DAT_0042ac9c + -1;
          if (DAT_0042ac98 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_0042aca8 = DAT_0042aca0;
        }
      }
      DAT_0042ac98 = param_1;
      DAT_0042acb0 = uVar9;
    }
  }
  return;
}



// Library Function - Single Match
//  ___sbh_alloc_block
// 
// Library: Visual Studio 2003 Debug

int * __cdecl ___sbh_alloc_block(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int local_38;
  uint local_34;
  uint *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_8;
  
  puVar5 = DAT_0042aca0 + DAT_0042ac9c * 5;
  uVar8 = param_1 + 0x17U & 0xfffffff0;
  iVar9 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar7 = (byte)iVar9;
  if (iVar9 < 0x20) {
    local_1c = 0xffffffff >> (bVar7 & 0x1f);
    local_34 = 0xffffffff;
  }
  else {
    local_1c = 0;
    local_34 = 0xffffffff >> (bVar7 - 0x20 & 0x1f);
  }
  local_20 = DAT_0042aca8;
  while ((local_20 < puVar5 && ((local_1c & *local_20 | local_34 & local_20[1]) == 0))) {
    local_20 = local_20 + 5;
  }
  if (local_20 == puVar5) {
    local_20 = DAT_0042aca0;
    while ((local_20 < DAT_0042aca8 && ((local_1c & *local_20 | local_34 & local_20[1]) == 0))) {
      local_20 = local_20 + 5;
    }
    if (local_20 == DAT_0042aca8) {
      while ((local_20 < puVar5 && (local_20[2] == 0))) {
        local_20 = local_20 + 5;
      }
      if (local_20 == puVar5) {
        local_20 = DAT_0042aca0;
        while ((local_20 < DAT_0042aca8 && (local_20[2] == 0))) {
          local_20 = local_20 + 5;
        }
        if ((local_20 == DAT_0042aca8) &&
           (local_20 = ___sbh_alloc_new_region(), local_20 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar9 = ___sbh_alloc_new_group((int)local_20);
      *(int *)local_20[4] = iVar9;
      if (*(int *)local_20[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_0042aca8 = local_20;
  piVar4 = (int *)local_20[4];
  local_18 = *piVar4;
  if ((local_18 == -1) ||
     ((local_1c & piVar4[local_18 + 0x11] | local_34 & piVar4[local_18 + 0x31]) == 0)) {
    local_18 = 0;
    while ((local_1c & piVar4[local_18 + 0x11] | local_34 & piVar4[local_18 + 0x31]) == 0) {
      local_18 = local_18 + 1;
    }
  }
  piVar2 = piVar4 + local_18 * 0x81 + 0x51;
  local_38 = 0;
  local_8 = local_1c & piVar4[local_18 + 0x11];
  if (local_8 == 0) {
    local_38 = 0x20;
    local_8 = local_34 & piVar4[local_18 + 0x31];
  }
  while (-1 < (int)local_8) {
    local_8 = local_8 << 1;
    local_38 = local_38 + 1;
  }
  piVar6 = (int *)piVar2[local_38 * 2 + 1];
  iVar9 = *piVar6 - uVar8;
  local_14 = (iVar9 >> 4) + -1;
  if (0x3f < local_14) {
    local_14 = 0x3f;
  }
  if (local_14 != local_38) {
    if (piVar6[1] == piVar6[2]) {
      bVar7 = (byte)local_38;
      if (local_38 < 0x20) {
        piVar4[local_18 + 0x11] = ~(0x80000000U >> (bVar7 & 0x1f)) & piVar4[local_18 + 0x11];
        *(char *)((int)piVar4 + local_38 + 4) = *(char *)((int)piVar4 + local_38 + 4) + -1;
        if (*(char *)((int)piVar4 + local_38 + 4) == '\0') {
          *local_20 = ~(0x80000000U >> (bVar7 & 0x1f)) & *local_20;
        }
      }
      else {
        piVar4[local_18 + 0x31] = ~(0x80000000U >> (bVar7 - 0x20 & 0x1f)) & piVar4[local_18 + 0x31];
        *(char *)((int)piVar4 + local_38 + 4) = *(char *)((int)piVar4 + local_38 + 4) + -1;
        if (*(char *)((int)piVar4 + local_38 + 4) == '\0') {
          local_20[1] = ~(0x80000000U >> (bVar7 - 0x20 & 0x1f)) & local_20[1];
        }
      }
    }
    *(int *)(piVar6[2] + 4) = piVar6[1];
    *(int *)(piVar6[1] + 8) = piVar6[2];
    if (iVar9 != 0) {
      piVar1 = piVar2 + local_14 * 2;
      piVar6[1] = piVar1[1];
      piVar6[2] = (int)piVar1;
      piVar1[1] = (int)piVar6;
      *(int **)(piVar6[1] + 8) = piVar6;
      if (piVar6[1] == piVar6[2]) {
        bVar7 = (byte)local_14;
        if (local_14 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + local_14 + 4);
          *(char *)((int)piVar4 + local_14 + 4) = *(char *)((int)piVar4 + local_14 + 4) + '\x01';
          if (cVar3 == '\0') {
            *local_20 = 0x80000000U >> (bVar7 & 0x1f) | *local_20;
          }
          piVar4[local_18 + 0x11] = 0x80000000U >> (bVar7 & 0x1f) | piVar4[local_18 + 0x11];
        }
        else {
          cVar3 = *(char *)((int)piVar4 + local_14 + 4);
          *(char *)((int)piVar4 + local_14 + 4) = *(char *)((int)piVar4 + local_14 + 4) + '\x01';
          if (cVar3 == '\0') {
            local_20[1] = 0x80000000U >> (bVar7 - 0x20 & 0x1f) | local_20[1];
          }
          piVar4[local_18 + 0x31] = 0x80000000U >> (bVar7 - 0x20 & 0x1f) | piVar4[local_18 + 0x31];
        }
      }
    }
  }
  if (iVar9 != 0) {
    *piVar6 = iVar9;
    *(int *)((int)piVar6 + iVar9 + -4) = iVar9;
  }
  piVar6 = (int *)((int)piVar6 + iVar9);
  *piVar6 = uVar8 + 1;
  *(uint *)((int)piVar6 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar9 == 0) && (local_20 == DAT_0042ac98)) && (local_18 == DAT_0042acb0)) {
    DAT_0042ac98 = (uint *)0x0;
  }
  *piVar4 = local_18;
  return piVar6 + 1;
}



// Library Function - Single Match
//  ___sbh_alloc_new_region
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_0042ac9c == DAT_0042acac) {
    pvVar1 = HeapReAlloc(DAT_0042af80,0,DAT_0042aca0,(DAT_0042acac + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0042acac = DAT_0042acac + 0x10;
    DAT_0042aca0 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_0042ac9c * 0x14 + (int)DAT_0042aca0);
  pvVar1 = HeapAlloc(DAT_0042af80,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_0042af80,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_0042ac9c = DAT_0042ac9c + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}



// Library Function - Single Match
//  ___sbh_alloc_new_group
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID lpAddress;
  int local_30;
  int local_2c;
  int local_18;
  LPVOID local_14;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_30 = *(int *)(param_1 + 8);
  local_2c = 0;
  while (-1 < local_30) {
    local_30 = local_30 << 1;
    local_2c = local_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + local_2c * 0x204;
  local_18 = 0;
  while (local_18 < 0x3f) {
    iVar1 = iVar2 + local_18 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    local_18 = local_18 + 1;
  }
  lpAddress = (LPVOID)(local_2c * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    local_2c = -1;
  }
  else {
    local_14 = lpAddress;
    while (local_14 <= (LPVOID)((int)lpAddress + 0x7000)) {
      *(undefined4 *)((int)local_14 + 8) = 0xffffffff;
      *(undefined4 *)((int)local_14 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)local_14 + 0xc) = 0xff0;
      *(int *)((int)local_14 + 0x10) = (int)local_14 + 0x100c;
      *(int *)((int)local_14 + 0x14) = (int)local_14 + -0xff4;
      *(undefined4 *)((int)local_14 + 0xff8) = 0xff0;
      local_14 = (LPVOID)((int)local_14 + 0x1000);
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + local_2c * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + local_2c * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = ~(0x80000000U >> ((byte)local_2c & 0x1f)) & *(uint *)(param_1 + 8);
  }
  return local_2c;
}



// Library Function - Single Match
//  ___sbh_resize_block
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int local_34;
  uint local_30;
  uint local_c;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar10 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  local_34 = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + local_34);
  uVar4 = *puVar7;
  if (local_34 < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(local_34 + uVar4) < (int)uVar5)) {
      return 0;
    }
    local_c = ((int)uVar4 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar8 = (byte)local_c;
      if (local_c < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
        if (*(char *)(uVar3 + local_c + 4) == '\0') {
          *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
        if (*(char *)(uVar3 + local_c + 4) == '\0') {
          param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar9 = (local_34 + uVar4) - uVar5;
    if (0 < iVar9) {
      piVar11 = (int *)((int)piVar6 + uVar5);
      local_c = (iVar9 >> 4) - 1;
      if (0x3f < local_c) {
        local_c = 0x3f;
      }
      iVar1 = iVar1 + local_c * 8;
      piVar11[1] = *(int *)(iVar1 + 4);
      piVar11[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar11;
      *(int **)(piVar11[1] + 8) = piVar11;
      if (piVar11[1] == piVar11[2]) {
        bVar8 = (byte)local_c;
        if (local_c < 0x20) {
          cVar2 = *(char *)(uVar3 + local_c + 4);
          *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        }
        else {
          cVar2 = *(char *)(uVar3 + local_c + 4);
          *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        }
      }
      *piVar11 = iVar9;
      *(int *)((int)piVar11 + iVar9 + -4) = iVar9;
    }
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
  }
  else {
    if ((int)uVar5 < local_34) {
      *piVar6 = uVar5 + 1;
      *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
      piVar6 = (int *)((int)piVar6 + uVar5);
      local_34 = local_34 - uVar5;
      local_30 = (local_34 >> 4) - 1;
      if (0x3f < local_30) {
        local_30 = 0x3f;
      }
      if ((uVar4 & 1) == 0) {
        local_c = ((int)uVar4 >> 4) - 1;
        if (0x3f < local_c) {
          local_c = 0x3f;
        }
        if (puVar7[1] == puVar7[2]) {
          bVar8 = (byte)local_c;
          if (local_c < 0x20) {
            *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
                 ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
            *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
            if (*(char *)(uVar3 + local_c + 4) == '\0') {
              *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
            }
          }
          else {
            *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
                 ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
            *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
            if (*(char *)(uVar3 + local_c + 4) == '\0') {
              param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
            }
          }
        }
        *(uint *)(puVar7[2] + 4) = puVar7[1];
        *(uint *)(puVar7[1] + 8) = puVar7[2];
        local_34 = local_34 + uVar4;
        local_30 = (local_34 >> 4) - 1;
        if (0x3f < local_30) {
          local_30 = 0x3f;
        }
      }
      iVar1 = iVar1 + local_30 * 8;
      piVar6[1] = *(int *)(iVar1 + 4);
      piVar6[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar6;
      *(int **)(piVar6[1] + 8) = piVar6;
      if (piVar6[1] == piVar6[2]) {
        bVar8 = (byte)local_30;
        if (local_30 < 0x20) {
          cVar2 = *(char *)(uVar3 + local_30 + 4);
          *(char *)(uVar3 + local_30 + 4) = *(char *)(uVar3 + local_30 + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        }
        else {
          cVar2 = *(char *)(uVar3 + local_30 + 4);
          *(char *)(uVar3 + local_30 + 4) = *(char *)(uVar3 + local_30 + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        }
      }
      *piVar6 = local_34;
      *(int *)((int)piVar6 + local_34 + -4) = local_34;
    }
  }
  return 1;
}



// Library Function - Single Match
//  ___sbh_heapmin
// 
// Library: Visual Studio 2003 Debug

void ___sbh_heapmin(void)

{
  if (DAT_0042ac98 != (void *)0x0) {
    VirtualFree((LPVOID)(DAT_0042acb0 * 0x8000 + *(int *)((int)DAT_0042ac98 + 0xc)),0x8000,0x4000);
    *(uint *)((int)DAT_0042ac98 + 8) =
         0x80000000U >> ((byte)DAT_0042acb0 & 0x1f) | *(uint *)((int)DAT_0042ac98 + 8);
    *(undefined4 *)(*(int *)((int)DAT_0042ac98 + 0x10) + 0xc4 + DAT_0042acb0 * 4) = 0;
    *(char *)(*(int *)((int)DAT_0042ac98 + 0x10) + 0x43) =
         *(char *)(*(int *)((int)DAT_0042ac98 + 0x10) + 0x43) + -1;
    if (*(char *)(*(int *)((int)DAT_0042ac98 + 0x10) + 0x43) == '\0') {
      *(uint *)((int)DAT_0042ac98 + 4) = *(uint *)((int)DAT_0042ac98 + 4) & 0xfffffffe;
    }
    if ((*(int *)((int)DAT_0042ac98 + 8) == -1) && (1 < DAT_0042ac9c)) {
      HeapFree(DAT_0042af80,0,*(LPVOID *)((int)DAT_0042ac98 + 0x10));
      FID_conflict__memcpy
                (DAT_0042ac98,(void *)((int)DAT_0042ac98 + 0x14),
                 (DAT_0042ac9c * 0x14 + DAT_0042aca0) - ((int)DAT_0042ac98 + 0x14));
      DAT_0042ac9c = DAT_0042ac9c + -1;
    }
    DAT_0042ac98 = (void *)0x0;
  }
  return;
}



// Library Function - Single Match
//  ___sbh_heap_check
// 
// Library: Visual Studio 2003 Debug

undefined4 ___sbh_heap_check(void)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  byte bVar4;
  int local_170;
  int local_16c;
  int local_168;
  uint local_160;
  int aiStack348 [65];
  int local_58;
  uint local_54;
  uint local_50;
  LPVOID local_4c;
  uint *local_48;
  uint *local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = IsBadWritePtr(DAT_0042aca0,DAT_0042ac9c * 0x14);
  if (BVar2 == 0) {
    local_3c = DAT_0042aca0;
    local_170 = 0;
    while (local_170 < DAT_0042ac9c) {
      local_4c = (LPVOID)local_3c[4];
      BVar2 = IsBadWritePtr(local_4c,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      local_14 = (uint *)local_3c[3];
      local_48 = (uint *)((int)local_4c + 0x144);
      local_160 = local_3c[2];
      local_38 = 0;
      local_54 = 0;
      local_20 = 0;
      while (local_20 < 0x20) {
        local_10 = 0;
        local_8 = 0;
        local_18 = 0;
        local_16c = 0;
        while (local_16c < 0x40) {
          aiStack348[local_16c] = 0;
          local_16c = local_16c + 1;
        }
        if (-1 < (int)local_160) {
          BVar2 = IsBadWritePtr(local_14,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          local_2c = local_14;
          local_1c = 0;
          while (local_1c < 8) {
            local_28 = local_2c + 3;
            local_34 = local_2c + 0x3ff;
            if ((local_2c[2] != 0xffffffff) || (local_2c[0x3ff] != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *local_28;
              local_40 = uVar1;
              if ((uVar1 & 1) == 0) {
                local_16c = ((int)uVar1 >> 4) + -1;
                if (0x3f < local_16c) {
                  local_16c = 0x3f;
                }
                aiStack348[local_16c] = aiStack348[local_16c] + 1;
              }
              else {
                local_40 = uVar1 - 1;
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                local_18 = local_18 + 1;
              }
              if ((((int)local_40 < 0x10) || ((local_40 & 0xf) != 0)) || (0xff0 < (int)local_40)) {
                return 0xfffffff9;
              }
              if (*(uint *)((int)local_28 + (local_40 - 4)) != uVar1) {
                return 0xfffffff8;
              }
              local_28 = (uint *)((int)local_28 + local_40);
            } while (local_28 < local_34);
            if (local_28 != local_34) {
              return 0xfffffff8;
            }
            local_2c = local_2c + 0x400;
            local_1c = local_1c + 1;
          }
          if (*local_48 != local_18) {
            return 0xfffffff7;
          }
          local_44 = local_48;
          local_168 = 0;
          while (local_168 < 0x40) {
            local_58 = 0;
            local_28 = local_44;
            while( true ) {
              local_c = (uint *)local_28[1];
              if ((local_c == local_44) || (local_58 == aiStack348[local_168])) break;
              if ((local_c < local_14) || (local_14 + 0x2000 <= local_c)) {
                return 0xfffffff6;
              }
              local_50 = (uint)local_c & 0xfffff000;
              local_30 = (uint *)(local_50 + 0xc);
              local_24 = (uint *)(local_50 + 0xffc);
              while ((local_30 != local_24 && (local_30 != local_c))) {
                local_30 = (uint *)((*local_30 & 0xfffffffe) + (int)local_30);
              }
              if (local_30 == local_24) {
                return 0xfffffff5;
              }
              local_16c = ((int)*local_c >> 4) + -1;
              if (0x3f < local_16c) {
                local_16c = 0x3f;
              }
              if (local_16c != local_168) {
                return 0xfffffff4;
              }
              if ((uint *)local_c[2] != local_28) {
                return 0xfffffff3;
              }
              local_28 = local_c;
              local_58 = local_58 + 1;
            }
            if (local_58 != 0) {
              bVar4 = (byte)local_168;
              if (local_168 < 0x20) {
                local_10 = 0x80000000U >> (bVar4 & 0x1f) | local_10;
                local_38 = 0x80000000U >> (bVar4 & 0x1f) | local_38;
              }
              else {
                local_8 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | local_8;
                local_54 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | local_54;
              }
            }
            if (((uint *)local_28[1] != local_44) || (local_58 != aiStack348[local_168])) {
              return 0xfffffff2;
            }
            if ((uint *)local_44[2] != local_28) {
              return 0xfffffff1;
            }
            local_44 = local_44 + 2;
            local_168 = local_168 + 1;
          }
        }
        if ((local_10 != *(uint *)((int)local_4c + local_20 * 4 + 0x44)) ||
           (local_8 != *(uint *)((int)local_4c + local_20 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        local_14 = local_14 + 0x2000;
        local_48 = local_48 + 0x81;
        local_160 = local_160 << 1;
        local_20 = local_20 + 1;
      }
      if ((local_38 != *local_3c) || (local_54 != local_3c[1])) {
        return 0xffffffef;
      }
      local_3c = local_3c + 5;
      local_170 = local_170 + 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// Library Function - Single Match
//  __ValidateEH3RN
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __ValidateEH3RN(uint param_1)

{
  uint uVar1;
  int iVar2;
  LONG LVar3;
  SIZE_T SVar4;
  int in_FS_OFFSET;
  int local_60;
  _MEMORY_BASIC_INFORMATION local_58;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  LPCVOID local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  short *local_14;
  int *local_10;
  uint local_c;
  LPCVOID local_8;
  
  local_24 = *(LPCVOID *)(param_1 + 8);
  if (((uint)local_24 & 3) != 0) {
    return 0;
  }
  local_28 = *(int *)(in_FS_OFFSET + 0x18);
  if ((*(LPCVOID *)(local_28 + 8) <= local_24) && (local_24 < *(LPCVOID *)(local_28 + 4))) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    return 1;
  }
  local_20 = 0;
  local_c = 0;
  while (local_c < *(uint *)(param_1 + 0xc) || local_c == *(uint *)(param_1 + 0xc)) {
    uVar1 = *(uint *)((int)local_24 + local_c * 0xc);
    if ((uVar1 != 0xffffffff) && (local_c <= uVar1)) {
      return 0;
    }
    if (*(int *)((int)local_24 + local_c * 0xc + 4) != 0) {
      local_20 = local_20 + 1;
    }
    local_c = local_c + 1;
  }
  if ((local_20 != 0) &&
     ((*(uint *)(param_1 - 8) < *(uint *)(local_28 + 8) || (param_1 <= *(uint *)(param_1 - 8))))) {
    return 0;
  }
  local_38 = (uint)local_24 & 0xfffff000;
  local_34 = 0;
  while( true ) {
    if (DAT_00429868 <= local_34) {
      SVar4 = VirtualQuery(local_24,(PMEMORY_BASIC_INFORMATION)&local_58,0x1c);
      if ((SVar4 == 0) || (local_58.Type != 0x1000000)) {
        return 0xffffffff;
      }
      if ((local_58.Protect & 0xcc) != 0) {
        local_14 = (short *)local_58.AllocationBase;
                    // WARNING: Load size is inaccurate
        if (*local_58.AllocationBase != 0x5a4d) {
          return 0xffffffff;
        }
        local_18 = (int *)((int)local_58.AllocationBase +
                          *(int *)((int)local_58.AllocationBase + 0x3c));
        if (*local_18 != 0x4550) {
          return 0xffffffff;
        }
        local_10 = local_18 + 6;
        if (*(short *)local_10 != 0x10b) {
          return 0xffffffff;
        }
        local_8 = (LPCVOID)((int)local_24 - (int)local_58.AllocationBase);
        local_30 = 0;
        local_3c = (int)local_18 + *(ushort *)(local_18 + 5) + 0x18;
        if (*(short *)((int)local_18 + 6) == 0) {
          return 0xffffffff;
        }
        if (((*(LPCVOID *)(local_3c + 0xc) <= local_8) &&
            (local_8 < (LPCVOID)(*(int *)(local_3c + 0xc) + *(int *)(local_3c + 8)))) &&
           ((*(uint *)(local_3c + 0x24) & 0x80000000) != 0)) {
          return 0;
        }
      }
      LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1);
      if (LVar3 != 0) {
        return 1;
      }
      local_34 = DAT_00429868;
      while ((0 < local_34 && (*(uint *)(&DAT_0042986c + local_34 * 4) != local_38))) {
        local_34 = local_34 + -1;
      }
      if (local_34 == 0) {
        if (DAT_00429868 < 0x10) {
          local_60 = DAT_00429868;
        }
        else {
          local_60 = 0xf;
        }
        local_34 = local_60;
        local_2c = 0;
        while (local_2c <= local_60) {
          local_1c = *(uint *)(&DAT_00429870 + local_2c * 4);
          *(uint *)(&DAT_00429870 + local_2c * 4) = local_38;
          local_2c = local_2c + 1;
          local_38 = local_1c;
        }
        if (DAT_00429868 < 0x10) {
          DAT_00429868 = DAT_00429868 + 1;
        }
      }
      InterlockedExchange((LONG *)&DAT_004298b0,0);
      return 1;
    }
    if (*(uint *)(&DAT_00429870 + local_34 * 4) == local_38) break;
    local_34 = local_34 + 1;
  }
  if ((0 < local_34) && (LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1), LVar3 == 0)) {
    iVar2 = DAT_00429868;
    if (*(uint *)(&DAT_00429870 + local_34 * 4) != local_38) {
      do {
        local_34 = iVar2 + -1;
        if (local_34 < 0) break;
        iVar2 = local_34;
      } while (*(uint *)(&DAT_00429870 + local_34 * 4) != local_38);
      if (local_34 < 0) {
        if (DAT_00429868 < 0x10) {
          DAT_00429868 = DAT_00429868 + 1;
        }
        local_34 = DAT_00429868 + -1;
      }
      else {
        if (local_34 == 0) {
          InterlockedExchange((LONG *)&DAT_004298b0,0);
          return 1;
        }
      }
    }
    local_2c = 0;
    while (local_2c <= local_34) {
      local_1c = *(uint *)(&DAT_00429870 + local_2c * 4);
      *(uint *)(&DAT_00429870 + local_2c * 4) = local_38;
      local_2c = local_2c + 1;
      local_38 = local_1c;
    }
    InterlockedExchange((LONG *)&DAT_004298b0,0);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___crtMessageBoxA
// 
// Library: Visual Studio 2003 Debug

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  bool bVar1;
  HMODULE hModule;
  int iVar2;
  undefined local_1c [4];
  int local_18;
  int local_14;
  undefined local_10 [8];
  uint local_8;
  
  local_18 = 0;
  bVar1 = false;
  if (_DAT_004298c4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (_DAT_004298c4 = GetProcAddress(hModule,"MessageBoxA"), _DAT_004298c4 == (FARPROC)0x0)) {
      return 0;
    }
    _DAT_004298c8 = GetProcAddress(hModule,"GetActiveWindow");
    _DAT_004298cc = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_00429638 == 2) &&
       (_DAT_004298d4 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       _DAT_004298d4 != (FARPROC)0x0)) {
      _DAT_004298d0 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((_DAT_004298d0 != (FARPROC)0x0) &&
     (((local_14 = (*_DAT_004298d0)(), local_14 == 0 ||
       (iVar2 = (*_DAT_004298d4)(local_14,1,local_10,0xc,local_1c), iVar2 == 0)) ||
      ((local_8 & 1) == 0)))) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_00429644 < 4) {
      _UType = _UType | 0x40000;
    }
    else {
      _UType = _UType | 0x200000;
    }
  }
  else {
    if (_DAT_004298c8 != (FARPROC)0x0) {
      local_18 = (*_DAT_004298c8)();
    }
    if ((local_18 != 0) && (_DAT_004298cc != (FARPROC)0x0)) {
      local_18 = (*_DAT_004298cc)(local_18);
    }
  }
  iVar2 = (*_DAT_004298c4)(local_18,_LpText,_LpCaption,_UType);
  return iVar2;
}



// Library Function - Single Match
//  _strncpy
// 
// Library: Visual Studio 2003 Debug

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
        goto joined_r0x0041cfcc;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        if (uVar4 == 0) goto LAB_0041d013;
        goto LAB_0041d089;
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
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x0041d085:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_0041d089:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0041d013;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x0041d085;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x0041d085;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x0041d085;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0041cfcc:
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
LAB_0041d013:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



void __fastcall FUN_0041d0f0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined *local_1c;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  if (param_1 == DAT_00428eb0) {
    return;
  }
  puStack12 = &DAT_00426a30;
  puStack16 = &LAB_004111a4;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  local_1c = &stack0xffffffd8;
  local_8 = 0;
  ___security_error_handler(1,0);
  local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
  ExitProcess(3);
}



// Library Function - Single Match
//  __itoa
// 
// Library: Visual Studio 2003 Debug

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  if ((_Radix == 10) && (_Value < 0)) {
    _xtoa(_Value,_Dest,10,1);
  }
  else {
    _xtoa(_Value,_Dest,_Radix,0);
  }
  return _Dest;
}



// Library Function - Single Match
//  _xtoa
// 
// Library: Visual Studio 2003 Debug

void __cdecl _xtoa(uint param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *local_14;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = -param_1;
  }
  local_14 = local_8;
  do {
    pcVar2 = local_8;
    uVar3 = param_1 % param_3;
    param_1 = param_1 / param_3;
    cVar1 = (char)uVar3;
    if (uVar3 < 10) {
      *local_8 = cVar1 + '0';
    }
    else {
      *local_8 = cVar1 + 'W';
    }
    local_8 = local_8 + 1;
  } while (param_1 != 0);
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_14;
    *local_14 = cVar1;
    local_8 = local_8 + -1;
    local_14 = local_14 + 1;
  } while (local_14 < local_8);
  return;
}



// Library Function - Single Match
//  __ltoa
// 
// Library: Visual Studio 2003 Debug

char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  int local_8;
  
  if ((_Radix == 10) && (_Value < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  _xtoa(_Value,_Dest,_Radix,local_8);
  return _Dest;
}



// Library Function - Single Match
//  __ultoa
// 
// Library: Visual Studio 2003 Debug

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  _xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}



// Library Function - Single Match
//  __i64toa
// 
// Library: Visual Studio 2003 Debug

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  int local_8;
  
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  _x64toa_20((uint)_Val,_Val._4_4_,_DstBuf,_Radix,local_8);
  return _DstBuf;
}



// Library Function - Single Match
//  _x64toa@20
// 
// Library: Visual Studio 2003 Debug

void _x64toa_20(uint param_1,uint param_2,char *param_3,uint param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *local_14;
  char *local_8;
  
  local_8 = param_3;
  if (param_5 != 0) {
    *param_3 = '-';
    local_8 = param_3 + 1;
    bVar3 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar3);
  }
  lVar5 = CONCAT44(param_2,param_1);
  local_14 = local_8;
  do {
    pcVar2 = local_8;
    param_2 = (uint)((ulonglong)lVar5 >> 0x20);
    param_1 = (uint)lVar5;
    uVar4 = __aullrem(param_1,param_2,param_4,0);
    lVar5 = __aulldiv(param_1,param_2,param_4,0);
    if ((uint)uVar4 < 10) {
      *local_8 = (char)uVar4 + '0';
    }
    else {
      *local_8 = (char)uVar4 + 'W';
    }
    local_8 = local_8 + 1;
  } while (lVar5 != 0);
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_14;
    *local_14 = cVar1;
    local_8 = local_8 + -1;
    local_14 = local_14 + 1;
  } while (local_14 < local_8);
  return;
}



// Library Function - Single Match
//  __ui64toa
// 
// Library: Visual Studio 2003 Debug

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  _x64toa_20((uint)_Val,_Val._4_4_,_DstBuf,_Radix,0);
  return _DstBuf;
}



// Library Function - Single Match
//  __snprintf
// 
// Library: Visual Studio 2003 Debug

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE local_30;
  FILE *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_10 = &local_30;
  local_8 = (undefined4 *)&stack0x00000010;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\sprintf.c",0x5d,
                           (char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Dest == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\sprintf.c",0x5e,
                           (char *)0x0,"string != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_10->_cnt = _Count;
  local_10->_flag = 0x42;
  local_10->_base = _Dest;
  local_10->_ptr = _Dest;
  local_c = __output(local_10,(byte *)_Format,local_8);
  if (_Dest != (char *)0x0) {
    local_10->_cnt = local_10->_cnt + -1;
    if (local_10->_cnt < 0) {
      __flsbuf(0,local_10);
    }
    else {
      *local_10->_ptr = '\0';
      local_10->_ptr = local_10->_ptr + 1;
    }
  }
  return local_c;
}



// Library Function - Single Match
//  __vsnprintf
// 
// Library: Visual Studio 2003 Debug

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  code *pcVar1;
  int iVar2;
  FILE local_2c;
  FILE *local_c;
  int local_8;
  
  local_c = &local_2c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vsprintf.c",0x5a,
                           (char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_c->_cnt = _Count;
  local_c->_flag = 0x42;
  local_c->_base = _Dest;
  local_c->_ptr = _Dest;
  local_8 = __output(local_c,(byte *)_Format,(undefined4 *)_Args);
  if (_Dest != (char *)0x0) {
    local_c->_cnt = local_c->_cnt + -1;
    if (local_c->_cnt < 0) {
      __flsbuf(0,local_c);
    }
    else {
      *local_c->_ptr = '\0';
      local_c->_ptr = local_c->_ptr + 1;
    }
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _signal
// 
// Library: Visual Studio 2003 Debug

void __cdecl _signal(int param_1)

{
  BOOL BVar1;
  int in_stack_00000008;
  undefined4 *local_c;
  
  if ((in_stack_00000008 != 4) && (in_stack_00000008 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      if (((param_1 == 2) || (param_1 == 0x15)) && (_DAT_004298ec == 0)) {
        BVar1 = SetConsoleCtrlHandler(_ctrlevent_capture_4,1);
        if (BVar1 != 1) {
          _DAT_00429630 = GetLastError();
          _DAT_0042962c = 0x16;
          return;
        }
        _DAT_004298ec = 1;
      }
      switch(param_1) {
      case 2:
        DAT_004298dc = in_stack_00000008;
        return;
      default:
        return;
      case 0xf:
        DAT_004298e8 = in_stack_00000008;
        return;
      case 0x15:
        DAT_004298e0 = in_stack_00000008;
        return;
      case 0x16:
        DAT_004298e4 = in_stack_00000008;
        return;
      }
    }
    if ((((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) &&
       (local_c = _siglookup(param_1), local_c != (undefined4 *)0x0)) {
      do {
        if (local_c[1] != param_1) {
          return;
        }
        local_c[2] = in_stack_00000008;
        local_c = local_c + 3;
      } while (local_c < &DAT_00428b90 + DAT_00428c10 * 3);
      return;
    }
  }
  _DAT_0042962c = 0x16;
  return;
}



// Library Function - Single Match
//  _ctrlevent_capture@4
// 
// Library: Visual Studio 2003 Debug

undefined4 _ctrlevent_capture_4(int param_1)

{
  undefined4 uVar1;
  undefined4 *local_10;
  undefined4 local_c;
  code *local_8;
  
  if (param_1 == 0) {
    local_10 = &DAT_004298dc;
    local_8 = DAT_004298dc;
    local_c = 2;
  }
  else {
    local_10 = &DAT_004298e0;
    local_8 = DAT_004298e0;
    local_c = 0x15;
  }
  if (local_8 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    if (local_8 != (code *)0x1) {
      *local_10 = 0;
      (*local_8)(local_c);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _raise
// 
// Library: Visual Studio 2003 Debug

int __cdecl _raise(int _SigNum)

{
  undefined4 *puVar1;
  undefined4 local_18;
  code **local_14;
  int local_10;
  undefined4 local_c;
  code *local_8;
  
  switch(_SigNum) {
  case 2:
    local_14 = &DAT_004298dc;
    local_8 = DAT_004298dc;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    puVar1 = _siglookup(_SigNum);
    local_14 = (code **)(puVar1 + 2);
    local_8 = *local_14;
    break;
  case 0xf:
    local_14 = &DAT_004298e8;
    local_8 = DAT_004298e8;
    break;
  case 0x15:
    local_14 = &DAT_004298e0;
    local_8 = DAT_004298e0;
    break;
  case 0x16:
    local_14 = &DAT_004298e4;
    local_8 = DAT_004298e4;
  }
  if (local_8 != (code *)0x1) {
    if (local_8 == (code *)0x0) {
      __exit(3);
    }
    if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
      local_c = DAT_00429690;
      DAT_00429690 = 0;
      if (_SigNum == 8) {
        local_18 = DAT_00428c14;
        DAT_00428c14 = 0x8c;
      }
    }
    if (_SigNum == 8) {
      local_10 = DAT_00428c08;
      while (local_10 < DAT_00428c08 + _DAT_00428c0c) {
        *(undefined4 *)(local_10 * 0xc + 0x428b98) = 0;
        local_10 = local_10 + 1;
      }
    }
    else {
      *local_14 = (code *)0x0;
    }
    if (_SigNum == 8) {
      (*local_8)(8,DAT_00428c14);
    }
    else {
      (*local_8)(_SigNum);
      if ((_SigNum != 0xb) && (_SigNum != 4)) {
        return 0;
      }
    }
    if (_SigNum == 8) {
      DAT_00428c14 = local_18;
    }
    DAT_00429690 = local_c;
    return 0;
  }
  return 0;
}



// Library Function - Single Match
//  _siglookup
// 
// Library: Visual Studio 2003 Debug

undefined4 * __cdecl _siglookup(int param_1)

{
  undefined4 *local_8;
  
  local_8 = &DAT_00428b90;
  do {
    if (local_8[1] == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < &DAT_00428b90 + DAT_00428c10 * 3);
  if ((&DAT_00428b90 + DAT_00428c10 * 3 <= local_8) || (local_8[1] != param_1)) {
    local_8 = (undefined4 *)0x0;
  }
  return local_8;
}



undefined4 __cdecl FUN_0041dca0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004298f8;
  DAT_004298f8 = param_1;
  return uVar1;
}



undefined4 FUN_0041dcd0(void)

{
  return DAT_004298f8;
}



// Library Function - Single Match
//  __callnewh
// 
// Library: Visual Studio 2003 Debug

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_004298f8 != (code *)0x0) && (iVar1 = (*DAT_004298f8)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// Library Function - Single Match
//  _memset
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = (uint *)_Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined *)puVar4 = (undefined)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



// Library Function - Single Match
//  __malloc_base
// 
// Library: Visual Studio 2003 Debug

int * __cdecl __malloc_base(uint param_1)

{
  int *piVar1;
  
  piVar1 = __nh_malloc_base(param_1,DAT_004298f4);
  return piVar1;
}



// Library Function - Single Match
//  __nh_malloc_base
// 
// Library: Visual Studio 2003 Debug

int * __cdecl __nh_malloc_base(uint param_1,int param_2)

{
  int iVar1;
  int *local_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        local_8 = __heap_alloc_base(param_1);
      }
      else {
        local_8 = (int *)0x0;
      }
      if (local_8 != (int *)0x0) {
        return local_8;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar1 = __callnewh(param_1);
    } while (iVar1 != 0);
  }
  return (int *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __heap_alloc_base
// 
// Library: Visual Studio 2003 Debug

int * __cdecl __heap_alloc_base(uint param_1)

{
  int *piVar1;
  
  if (((_DAT_0042af90 != 3) || (DAT_0042aca4 < param_1)) ||
     (piVar1 = ___sbh_alloc_block(param_1), piVar1 == (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    if (_DAT_0042af90 != 1) {
      param_1 = param_1 + 0xf & 0xfffffff0;
    }
    piVar1 = (int *)HeapAlloc(DAT_0042af80,0,param_1);
  }
  return piVar1;
}



undefined4 FUN_0041ded0(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __expand_base
// 
// Library: Visual Studio 2003 Debug

LPVOID __cdecl __expand_base(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  LPVOID local_8;
  
  if (param_2 < 0xffffffe1) {
    if (_DAT_0042af90 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)param_1);
      if (((puVar1 != (uint *)0x0) && (local_8 = (LPVOID)0x0, param_2 <= DAT_0042aca4)) &&
         (iVar2 = ___sbh_resize_block(puVar1,(int)param_1,param_2), iVar2 != 0)) {
        local_8 = param_1;
      }
      if (puVar1 == (uint *)0x0) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        local_8 = HeapReAlloc(DAT_0042af80,0x10,param_1,param_2 + 0xf & 0xfffffff0);
      }
    }
    else {
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_0042af80,0x10,param_1,param_2);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __realloc_base
// 
// Library: Visual Studio 2003 Debug

int * __cdecl __realloc_base(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint local_1c;
  uint local_18;
  uint *local_14;
  int *local_8;
  
  if (param_1 == (int *)0x0) {
    piVar1 = __malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      __free_base(param_1);
      piVar1 = (int *)0x0;
    }
    else {
      if (_DAT_0042af90 == 3) {
        do {
          local_8 = (int *)0x0;
          if (param_2 < 0xffffffe1) {
            local_14 = (uint *)___sbh_find_block((int)param_1);
            if (local_14 != (uint *)0x0) {
              if (param_2 <= DAT_0042aca4) {
                iVar2 = ___sbh_resize_block(local_14,(int)param_1,param_2);
                if (iVar2 == 0) {
                  local_8 = ___sbh_alloc_block(param_2);
                  if (local_8 != (int *)0x0) {
                    local_18 = param_1[-1] - 1;
                    if (param_2 <= local_18) {
                      local_18 = param_2;
                    }
                    FID_conflict__memcpy(local_8,param_1,local_18);
                    local_14 = (uint *)___sbh_find_block((int)param_1);
                    ___sbh_free_block(local_14,(int)param_1);
                  }
                }
                else {
                  local_8 = param_1;
                }
              }
              if (local_8 == (int *)0x0) {
                if (param_2 == 0) {
                  param_2 = 1;
                }
                param_2 = param_2 + 0xf & 0xfffffff0;
                local_8 = (int *)HeapAlloc(DAT_0042af80,0,param_2);
                if (local_8 != (int *)0x0) {
                  local_1c = param_2;
                  if (param_1[-1] - 1U < param_2) {
                    local_1c = param_1[-1] - 1U;
                  }
                  FID_conflict__memcpy(local_8,param_1,local_1c);
                  ___sbh_free_block(local_14,(int)param_1);
                }
              }
            }
            if (local_14 == (uint *)0x0) {
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              local_8 = (int *)HeapReAlloc(DAT_0042af80,0,param_1,param_2);
            }
          }
          if (local_8 != (int *)0x0) {
            return local_8;
          }
          if (DAT_004298f4 == 0) {
            return (int *)0x0;
          }
          iVar2 = __callnewh(param_2);
        } while (iVar2 != 0);
        piVar1 = (int *)0x0;
      }
      else {
        do {
          local_8 = (int *)0x0;
          if (param_2 < 0xffffffe1) {
            if (param_2 == 0) {
              param_2 = 1;
            }
            local_8 = (int *)HeapReAlloc(DAT_0042af80,0,param_1,param_2);
          }
          if (local_8 != (int *)0x0) {
            return local_8;
          }
          if (DAT_004298f4 == 0) {
            return (int *)0x0;
          }
          iVar2 = __callnewh(param_2);
        } while (iVar2 != 0);
        piVar1 = (int *)0x0;
      }
    }
  }
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __free_base
// 
// Library: Visual Studio 2003 Debug

void __cdecl __free_base(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    if (_DAT_0042af90 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)param_1);
      if (puVar1 == (uint *)0x0) {
        HeapFree(DAT_0042af80,0,param_1);
      }
      else {
        ___sbh_free_block(puVar1,(int)param_1);
      }
    }
    else {
      HeapFree(DAT_0042af80,0,param_1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __heapchk
// 
// Library: Visual Studio 2003 Debug

int __cdecl __heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int local_8;
  
  local_8 = -2;
  if (_DAT_0042af90 == 3) {
    iVar1 = ___sbh_heap_check();
    if (iVar1 < 0) {
      local_8 = -4;
    }
  }
  BVar2 = HeapValidate(DAT_0042af80,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      _DAT_00429630 = 0x78;
      _DAT_0042962c = 0x28;
    }
    else {
      local_8 = -4;
    }
  }
  return local_8;
}



// Library Function - Single Match
//  __heapset
// 
// Library: Visual Studio 2003 Debug

int __cdecl __heapset(uint _Fill)

{
  int iVar1;
  
  iVar1 = __heapchk();
  return iVar1;
}



// Library Function - Single Match
//  _sprintf
// 
// Library: Visual Studio 2003 Debug

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE local_30;
  FILE *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_10 = &local_30;
  local_8 = (undefined4 *)&stack0x0000000c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x5d,(char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Dest == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x5e,(char *)0x0,"string != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_10->_cnt = 0x7fffffff;
  local_10->_flag = 0x42;
  local_10->_base = _Dest;
  local_10->_ptr = _Dest;
  local_c = __output(local_10,(byte *)_Format,local_8);
  if (_Dest != (char *)0x0) {
    local_10->_cnt = local_10->_cnt + -1;
    if (local_10->_cnt < 0) {
      __flsbuf(0,local_10);
    }
    else {
      *local_10->_ptr = '\0';
      local_10->_ptr = local_10->_ptr + 1;
    }
  }
  return local_c;
}



// Library Function - Single Match
//  __scprintf
// 
// Library: Visual Studio 2003 Debug

int __cdecl __scprintf(char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE local_30;
  FILE *local_10;
  undefined4 *local_8;
  
  local_10 = &local_30;
  local_8 = (undefined4 *)&stack0x00000008;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x91,(char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_10->_cnt = 0x7fffffff;
  local_10->_flag = 0x42;
  local_10->_base = (char *)0x0;
  local_10->_ptr = (char *)0x0;
  iVar2 = __output(local_10,(byte *)_Format,local_8);
  return iVar2;
}



// Library Function - Single Match
//  __chvalidator
// 
// Library: Visual Studio 2003 Debug

uint __cdecl __chvalidator(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (0x100 < param_1 + 1U) {
    iVar2 = __CrtDbgReport(2,"isctype.c",0x38,(char *)0x0,"(unsigned)(c + 1) <= 256");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ushort *)(PTR_DAT_00428ed4 + param_1 * 2) & param_2;
}



// Library Function - Single Match
//  __isctype
// 
// Library: Visual Studio 2003 Debug

int __cdecl __isctype(int _C,int _Type)

{
  uint uVar1;
  BOOL BVar2;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  LPCSTR local_c;
  ushort local_8 [2];
  
  if (_C + 1U < 0x101) {
    uVar1 = (uint)*(ushort *)(PTR_DAT_00428ed4 + _C * 2) & _Type;
  }
  else {
    if ((*(ushort *)(PTR_DAT_00428ed4 + (_C >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_10 = (undefined)_C;
      local_f = 0;
      local_c = (LPCSTR)0x1;
    }
    else {
      local_10 = (undefined)((uint)_C >> 8);
      local_f = (undefined)_C;
      local_e = 0;
      local_c = (LPCSTR)0x2;
    }
    BVar2 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_10,local_c,(int)local_8,DAT_00429914,
                       DAT_00429904,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)local_8[0] & _Type;
    }
  }
  return uVar1;
}



undefined * FUN_0041e6f0(void)

{
  return PTR_DAT_00428ed8;
}



undefined * FUN_0041e700(void)

{
  return PTR_DAT_00428ed4;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___crtLCMapStringA
// 
// Library: Visual Studio 2003 Debug

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int **this;
  int iVar1;
  DWORD DVar2;
  LPCSTR lpSrcStr;
  undefined *puVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  void *pvVar4;
  void *extraout_ECX_12;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 *in_FS_OFFSET;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int **local_44;
  int local_40;
  int local_3c;
  int **local_38;
  int local_34;
  int local_30;
  int **local_2c;
  UINT local_28;
  int *local_24;
  LPCSTR local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00427130;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff98;
  puVar3 = &stack0xffffff98;
  if (_DAT_00429924 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      puVar3 = local_1c;
      if (DVar2 == 0x78) {
        _DAT_00429924 = 2;
      }
    }
    else {
      _DAT_00429924 = 1;
      puVar3 = local_1c;
    }
  }
  local_1c = puVar3;
  if (0 < (int)_LpSrcStr) {
    _LpSrcStr = (LPCSTR)_strncnt((char *)_DwMapFlag,(size_t)_LpSrcStr);
  }
  if ((_DAT_00429924 != 2) && (_DAT_00429924 != 0)) {
    if (_DAT_00429924 != 1) {
      local_3c = 0;
      goto LAB_0041ec5f;
    }
    local_3c = 0;
    local_40 = 0;
    local_50 = 0;
    if (_CchDest == 0) {
      _CchDest = DAT_00429914;
    }
    local_48 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                   (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (local_48 == 0) {
      local_3c = 0;
      goto LAB_0041ec5f;
    }
    puVar3 = (undefined *)(local_48 * 2 + 3U & 0xfffffffc);
    iVar1 = -(int)puVar3;
    local_58 = &stack0xffffff98 + iVar1;
    local_1c = &stack0xffffff98 + iVar1;
    local_44 = (int **)(&stack0xffffff98 + iVar1);
    local_8 = 0xffffffff;
    if (&stack0xffffff98 == puVar3) {
      *(undefined4 *)(&stack0xffffff94 + iVar1) = 0x101;
      *(char **)(&stack0xffffff90 + iVar1) = "a_map.c";
      *(undefined4 *)(&stack0xffffff8c + iVar1) = 2;
      *(int *)(&stack0xffffff88 + iVar1) = local_48 << 1;
      *(undefined4 *)(&stack0xffffff84 + iVar1) = 0x41ea85;
      local_44 = __malloc_dbg(*(int **)(&stack0xffffff88 + iVar1),
                              *(int **)(&stack0xffffff8c + iVar1),
                              *(int **)(&stack0xffffff90 + iVar1),
                              *(int **)(&stack0xffffff94 + iVar1));
      if (local_44 == (int **)0x0) {
        local_3c = 0;
        goto LAB_0041ec5f;
      }
      local_40 = local_40 + 1;
    }
    *(int *)(&stack0xffffff94 + iVar1) = local_48;
    *(int ***)(&stack0xffffff90 + iVar1) = local_44;
    *(LPCSTR *)(&stack0xffffff8c + iVar1) = _LpSrcStr;
    *(DWORD *)(&stack0xffffff88 + iVar1) = _DwMapFlag;
    *(undefined4 *)(&stack0xffffff84 + iVar1) = 1;
    *(int *)(&stack0xffffff80 + iVar1) = _CchDest;
    puVar3 = &stack0xffffff7c + iVar1;
    *(undefined4 *)(&stack0xffffff7c + iVar1) = 0x41eabd;
    iVar1 = MultiByteToWideChar(*(UINT *)(&stack0xffffff80 + iVar1),
                                *(DWORD *)(&stack0xffffff84 + iVar1),
                                *(LPCSTR *)(&stack0xffffff88 + iVar1),
                                *(int *)(&stack0xffffff8c + iVar1),
                                *(LPWSTR *)(&stack0xffffff90 + iVar1),
                                *(int *)(&stack0xffffff94 + iVar1));
    pvVar4 = extraout_ECX_05;
    if (iVar1 != 0) {
      *(undefined4 *)(puVar3 + -4) = 0;
      *(undefined4 *)(puVar3 + -8) = 0;
      *(int *)(puVar3 + -0xc) = local_48;
      *(int ***)(puVar3 + -0x10) = local_44;
      *(LPCWSTR *)(puVar3 + -0x14) = _LocaleName;
      *(_locale_t *)(puVar3 + -0x18) = _Plocinfo;
      puVar5 = puVar3 + -0x1c;
      *(undefined4 *)(puVar3 + -0x1c) = 0x41eae0;
      local_3c = LCMapStringW(*(LCID *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                              *(LPCWSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                              *(LPWSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
      pvVar4 = extraout_ECX_06;
      puVar3 = puVar5;
      if (local_3c != 0) {
        if (((uint)_LocaleName & 0x400) == 0) {
          local_4c = local_3c;
          puVar3 = (undefined *)(local_3c * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar5 + -4) = 0x41eb55;
          iVar1 = -(int)puVar3;
          local_5c = puVar5 + iVar1;
          local_1c = puVar5 + iVar1;
          local_38 = (int **)(puVar5 + iVar1);
          local_8 = 0xffffffff;
          if (puVar5 == puVar3) {
            *(undefined4 *)(puVar5 + iVar1 + -4) = 0x13a;
            *(char **)(puVar5 + iVar1 + -8) = "a_map.c";
            *(undefined4 *)(puVar5 + iVar1 + -0xc) = 2;
            *(int *)(puVar5 + iVar1 + -0x10) = local_4c << 1;
            *(undefined4 *)(puVar5 + iVar1 + -0x14) = 0x41eba3;
            local_38 = __malloc_dbg(*(int **)(puVar5 + iVar1 + -0x10),
                                    *(int **)(puVar5 + iVar1 + -0xc),*(int **)(puVar5 + iVar1 + -8),
                                    *(int **)(puVar5 + iVar1 + -4));
            pvVar4 = extraout_ECX_08;
            puVar3 = puVar5 + iVar1;
            if (local_38 == (int **)0x0) goto LAB_0041ec30;
            local_50 = local_50 + 1;
          }
          *(int *)(puVar5 + iVar1 + -4) = local_4c;
          *(int ***)(puVar5 + iVar1 + -8) = local_38;
          *(int *)(puVar5 + iVar1 + -0xc) = local_48;
          *(int ***)(puVar5 + iVar1 + -0x10) = local_44;
          *(LPCWSTR *)(puVar5 + iVar1 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar5 + iVar1 + -0x18) = _Plocinfo;
          puVar7 = puVar5 + iVar1 + -0x1c;
          *(undefined4 *)(puVar5 + iVar1 + -0x1c) = 0x41ebd8;
          iVar1 = LCMapStringW(*(LCID *)(puVar5 + iVar1 + -0x18),*(DWORD *)(puVar5 + iVar1 + -0x14),
                               *(LPCWSTR *)(puVar5 + iVar1 + -0x10),*(int *)(puVar5 + iVar1 + -0xc),
                               *(LPWSTR *)(puVar5 + iVar1 + -8),*(int *)(puVar5 + iVar1 + -4));
          pvVar4 = extraout_ECX_09;
          puVar3 = puVar7;
          if (iVar1 != 0) {
            if (_LpDestStr == (LPSTR)0x0) {
              *(undefined4 *)(puVar7 + -4) = 0;
              *(undefined4 *)(puVar7 + -8) = 0;
              *(undefined4 *)(puVar7 + -0xc) = 0;
              *(undefined4 *)(puVar7 + -0x10) = 0;
              *(int *)(puVar7 + -0x14) = local_4c;
              *(int ***)(puVar7 + -0x18) = local_38;
              *(undefined4 *)(puVar7 + -0x1c) = 0;
              *(int *)(puVar7 + -0x20) = _CchDest;
              puVar8 = puVar7 + -0x24;
              *(undefined4 *)(puVar7 + -0x24) = 0x41ec00;
              local_3c = WideCharToMultiByte(*(UINT *)(puVar7 + -0x20),*(DWORD *)(puVar7 + -0x1c),
                                             *(LPCWSTR *)(puVar7 + -0x18),*(int *)(puVar7 + -0x14),
                                             *(LPSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                             *(LPCSTR *)(puVar7 + -8),*(LPBOOL *)(puVar7 + -4));
              pvVar4 = extraout_ECX_10;
              puVar3 = puVar8;
            }
            else {
              *(undefined4 *)(puVar7 + -4) = 0;
              *(undefined4 *)(puVar7 + -8) = 0;
              *(LPSTR *)(puVar7 + -0xc) = _LpDestStr;
              *(int *)(puVar7 + -0x10) = _CchSrc;
              *(int *)(puVar7 + -0x14) = local_4c;
              *(int ***)(puVar7 + -0x18) = local_38;
              *(undefined4 *)(puVar7 + -0x1c) = 0;
              *(int *)(puVar7 + -0x20) = _CchDest;
              puVar9 = puVar7 + -0x24;
              *(undefined4 *)(puVar7 + -0x24) = 0x41ec2d;
              local_3c = WideCharToMultiByte(*(UINT *)(puVar7 + -0x20),*(DWORD *)(puVar7 + -0x1c),
                                             *(LPCWSTR *)(puVar7 + -0x18),*(int *)(puVar7 + -0x14),
                                             *(LPSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                             *(LPCSTR *)(puVar7 + -8),*(LPBOOL *)(puVar7 + -4));
              pvVar4 = extraout_ECX_11;
              puVar3 = puVar9;
            }
          }
        }
        else {
          if ((_LpDestStr != (LPSTR)0x0) && (local_3c <= (int)_LpDestStr)) {
            *(LPSTR *)(puVar5 + -4) = _LpDestStr;
            *(int *)(puVar5 + -8) = _CchSrc;
            *(int *)(puVar5 + -0xc) = local_48;
            *(int ***)(puVar5 + -0x10) = local_44;
            *(LPCWSTR *)(puVar5 + -0x14) = _LocaleName;
            *(_locale_t *)(puVar5 + -0x18) = _Plocinfo;
            puVar6 = puVar5 + -0x1c;
            *(undefined4 *)(puVar5 + -0x1c) = 0x41eb2a;
            LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                         *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                         *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
            pvVar4 = extraout_ECX_07;
            puVar3 = puVar6;
          }
        }
      }
    }
LAB_0041ec30:
    if (local_50 != 0) {
      *(undefined4 *)(puVar3 + -4) = 2;
      this = local_38;
      *(int ***)(puVar3 + -8) = local_38;
      *(undefined4 *)(puVar3 + -0xc) = 0x41ec41;
      __free_dbg(this,*(uint *)(puVar3 + -8),*(int **)(puVar3 + -4));
      pvVar4 = extraout_ECX_12;
    }
    if (local_40 != 0) {
      *(undefined4 *)(puVar3 + -4) = 2;
      *(int ***)(puVar3 + -8) = local_44;
      *(undefined4 *)(puVar3 + -0xc) = 0x41ec55;
      __free_dbg(pvVar4,*(uint *)(puVar3 + -8),*(int **)(puVar3 + -4));
    }
    goto LAB_0041ec5f;
  }
  local_20 = (LPCSTR)0x0;
  local_2c = (int **)0x0;
  local_30 = 0;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_00429904;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_00429914;
  }
  local_28 = ___ansicp((LCID)_Plocinfo);
  if (local_28 == 0xffffffff) {
    local_3c = 0;
    goto LAB_0041ec5f;
  }
  if (local_28 == _CchDest) {
    local_34 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    pvVar4 = extraout_ECX_04;
  }
  else {
    lpSrcStr = (LPCSTR)___convertcp(_CchDest,local_28,(char *)_DwMapFlag,(int *)&_LpSrcStr,
                                    (int **)0x0,0);
    if (lpSrcStr == (LPCSTR)0x0) {
      local_3c = 0;
      goto LAB_0041ec5f;
    }
    local_20 = lpSrcStr;
    local_24 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                   (LPSTR)0x0,0);
    pvVar4 = extraout_ECX;
    if (local_24 != (int *)0x0) {
      local_8 = 0;
      local_54 = &stack0xffffff98;
      local_2c = (int **)&stack0xffffff98;
      local_1c = &stack0xffffff98;
      _memset(&stack0xffffff98,0,(size_t)local_24);
      local_8 = 0xffffffff;
      if (local_2c == (int **)0x0) {
        local_2c = __malloc_dbg(local_24,(int *)0x2,(int *)"a_map.c",(int *)0xa6);
        if (local_2c == (int **)0x0) {
          local_34 = 0;
          pvVar4 = extraout_ECX_00;
          goto LAB_0041e966;
        }
        _memset(local_2c,0,(size_t)local_24);
        local_30 = local_30 + 1;
      }
      local_24 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                     (LPSTR)local_2c,(int)local_24);
      if (local_24 == (int *)0x0) {
        local_34 = 0;
        pvVar4 = extraout_ECX_01;
      }
      else {
        iVar1 = ___convertcp(local_28,_CchDest,(char *)local_2c,(int *)&local_24,(int **)_CchSrc,
                             (int)_LpDestStr);
        pvVar4 = extraout_ECX_02;
        if (iVar1 == 0) {
          local_34 = 0;
        }
        else {
          local_34 = 1;
        }
      }
    }
LAB_0041e966:
    if (local_30 != 0) {
      __free_dbg(local_2c,(uint)local_2c,(int *)0x2);
      pvVar4 = extraout_ECX_03;
    }
  }
  local_3c = local_34;
  if (local_20 != (LPCSTR)0x0) {
    __free_dbg(pvVar4,(uint)local_20,(int *)0x2);
    local_3c = local_34;
  }
LAB_0041ec5f:
  *in_FS_OFFSET = local_14;
  return local_3c;
}



// Library Function - Single Match
//  _strncnt
// 
// Library: Visual Studio 2003 Debug

size_t __cdecl _strncnt(char *_String,size_t _Cnt)

{
  size_t local_c;
  char *local_8;
  
  local_c = _Cnt;
  local_8 = _String;
  while ((local_c != 0 && (*local_8 != '\0'))) {
    local_8 = local_8 + 1;
    local_c = local_c - 1;
  }
  return (_Cnt - (local_c - 1)) - 1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___crtGetStringTypeA
// 
// Library: Visual Studio 2003 Debug

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined *local_44;
  int **local_40;
  int local_3c;
  int local_38;
  int local_34;
  BOOL local_30;
  BOOL local_2c;
  LPWORD local_28;
  DWORD local_24;
  WORD local_20 [2];
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00427168;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (_DAT_00429928 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      puVar5 = local_1c;
      if (DVar3 == 0x78) {
        _DAT_00429928 = 2;
      }
    }
    else {
      _DAT_00429928 = 1;
      puVar5 = local_1c;
    }
  }
  local_1c = puVar5;
  if ((_DAT_00429928 == 2) || (_DAT_00429928 == 0)) {
    local_24 = 0;
    if (_Code_page == 0) {
      _Code_page = DAT_00429904;
    }
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00429914;
    }
    local_28 = (LPWORD)___ansicp(_Code_page);
    if (local_28 == (LPWORD)0xffffffff) {
      local_30 = 0;
    }
    else {
      if ((local_28 == _LpCharType) ||
         (_DWInfoType = ___convertcp((UINT)_LpCharType,(UINT)local_28,(char *)_DWInfoType,
                                     (int *)&_LpSrcStr,(int **)0x0,0), local_24 = _DWInfoType,
         _DWInfoType != 0)) {
        local_30 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                  (LPWORD)_CchSrc);
        if (local_24 != 0) {
          local_2c = local_30;
          __free_dbg(this,local_24,(int *)0x2);
          local_30 = local_2c;
        }
      }
      else {
        local_30 = 0;
      }
    }
  }
  else {
    if (_DAT_00429928 == 1) {
      local_30 = 0;
      local_3c = 0;
      if (_LpCharType == (LPWORD)0x0) {
        _LpCharType = DAT_00429914;
      }
      local_38 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,
                                     (LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0,0);
      if (local_38 == 0) {
        local_30 = 0;
      }
      else {
        local_8 = 0;
        iVar1 = -(local_38 * 2 + 3U & 0xfffffffc);
        local_44 = &stack0xffffffb0 + iVar1;
        local_1c = &stack0xffffffb0 + iVar1;
        local_40 = (int **)(&stack0xffffffb0 + iVar1);
        *(int *)(&stack0xffffffac + iVar1) = local_38 << 1;
        *(undefined4 *)(&stack0xffffffa8 + iVar1) = 0;
        *(int ***)(&stack0xffffffa4 + iVar1) = local_40;
        *(undefined4 *)(&stack0xffffffa0 + iVar1) = 0x41eff6;
        _memset(*(void **)(&stack0xffffffa4 + iVar1),*(int *)(&stack0xffffffa8 + iVar1),
                *(size_t *)(&stack0xffffffac + iVar1));
        local_8 = 0xffffffff;
        if (local_40 == (int **)0x0) {
          *(undefined4 *)(&stack0xffffffac + iVar1) = 0xa6;
          *(char **)(&stack0xffffffa8 + iVar1) = "a_str.c";
          *(undefined4 *)(&stack0xffffffa4 + iVar1) = 2;
          *(int *)(&stack0xffffffa0 + iVar1) = local_38;
          *(undefined4 *)(&stack0xffffff9c + iVar1) = 2;
          *(undefined4 *)(&stack0xffffff98 + iVar1) = 0x41f03b;
          local_40 = __calloc_dbg(*(int *)(&stack0xffffff9c + iVar1),
                                  *(int *)(&stack0xffffffa0 + iVar1),
                                  *(int **)(&stack0xffffffa4 + iVar1),
                                  *(int **)(&stack0xffffffa8 + iVar1),
                                  *(int **)(&stack0xffffffac + iVar1));
          if (local_40 == (int **)0x0) {
            local_30 = 0;
            goto LAB_0041f0ad;
          }
          local_3c = local_3c + 1;
        }
        *(int *)(&stack0xffffffac + iVar1) = local_38;
        *(int ***)(&stack0xffffffa8 + iVar1) = local_40;
        *(LPCSTR *)(&stack0xffffffa4 + iVar1) = _LpSrcStr;
        *(DWORD *)(&stack0xffffffa0 + iVar1) = _DWInfoType;
        *(undefined4 *)(&stack0xffffff9c + iVar1) = 1;
        *(LPWORD *)(&stack0xffffff98 + iVar1) = _LpCharType;
        puVar4 = &stack0xffffff94 + iVar1;
        *(undefined4 *)(&stack0xffffff94 + iVar1) = 0x41f070;
        local_34 = MultiByteToWideChar(*(UINT *)(&stack0xffffff98 + iVar1),
                                       *(DWORD *)(&stack0xffffff9c + iVar1),
                                       *(LPCSTR *)(&stack0xffffffa0 + iVar1),
                                       *(int *)(&stack0xffffffa4 + iVar1),
                                       *(LPWSTR *)(&stack0xffffffa8 + iVar1),
                                       *(int *)(&stack0xffffffac + iVar1));
        this_00 = extraout_ECX;
        puVar5 = puVar4;
        if (local_34 != 0) {
          *(int *)(puVar4 + -4) = _CchSrc;
          *(int *)(puVar4 + -8) = local_34;
          *(int ***)(puVar4 + -0xc) = local_40;
          *(_locale_t *)(puVar4 + -0x10) = _Plocinfo;
          puVar5 = puVar4 + -0x14;
          *(undefined4 *)(puVar4 + -0x14) = 0x41f08f;
          local_30 = GetStringTypeW(*(DWORD *)(puVar4 + -0x10),*(LPCWSTR *)(puVar4 + -0xc),
                                    *(int *)(puVar4 + -8),*(LPWORD *)(puVar4 + -4));
          this_00 = extraout_ECX_00;
        }
        if (local_3c != 0) {
          *(undefined4 *)(puVar5 + -4) = 2;
          *(int ***)(puVar5 + -8) = local_40;
          *(undefined4 *)(puVar5 + -0xc) = 0x41f0a3;
          __free_dbg(this_00,*(uint *)(puVar5 + -8),*(int **)(puVar5 + -4));
        }
      }
    }
    else {
      local_30 = 0;
    }
  }
LAB_0041f0ad:
  *in_FS_OFFSET = local_14;
  return local_30;
}



// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      if (uVar2 < 8) goto LAB_0041f334;
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_0041f358_caseD_1;
      case 2:
        goto switchD_0041f358_caseD_2;
      case 3:
        goto switchD_0041f358_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_0041f358_caseD_1:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        return _Dst;
      case 2:
switchD_0041f358_caseD_2:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        return _Dst;
      case 3:
switchD_0041f358_caseD_3:
        *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
        *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
        return _Dst;
      default:
        uVar3 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar3 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (uVar2 < 8) {
LAB_0041f334:
                    // WARNING: Could not recover jumptable at 0x0041f336. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar1 = (void *)(*(code *)(&PTR_LAB_0041f408)[-uVar2])();
            return pvVar1;
          }
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041f358_caseD_1;
          case 2:
            goto switchD_0041f358_caseD_2;
          case 3:
            goto switchD_0041f358_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (uVar2 < 8) goto LAB_0041f334;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041f358_caseD_1;
          case 2:
            goto switchD_0041f358_caseD_2;
          case 3:
            goto switchD_0041f358_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar5 + 3) = *(undefined *)((int)puVar4 + 3);
          *(undefined *)((int)puVar5 + 2) = *(undefined *)((int)puVar4 + 2);
          uVar2 = uVar3 >> 2;
          *(undefined *)((int)puVar5 + 1) = *(undefined *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (uVar2 < 8) goto LAB_0041f334;
          while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            *puVar5 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
          }
          switch(uVar3 & 3) {
          case 1:
            goto switchD_0041f358_caseD_1;
          case 2:
            goto switchD_0041f358_caseD_2;
          case 3:
            goto switchD_0041f358_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar4 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    if (uVar2 < 8) goto LAB_0041f1cc;
    while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
      uVar2 = uVar2 - 1;
      *puVar4 = *_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar4 = puVar4 + 1;
    }
    switch(_Size & 3) {
    case 1:
      goto switchD_0041f1c4_caseD_1;
    case 2:
      goto switchD_0041f1c4_caseD_2;
    case 3:
      goto switchD_0041f1c4_caseD_3;
    }
  }
  else {
    switch(_Size) {
    case 0:
      break;
    case 1:
switchD_0041f1c4_caseD_1:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      return _Dst;
    case 2:
switchD_0041f1c4_caseD_2:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      return _Dst;
    case 3:
switchD_0041f1c4_caseD_3:
                    // WARNING: Load size is inaccurate
      *(undefined *)puVar4 = *_Src;
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)_Src + 1);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)_Src + 2);
      return _Dst;
    default:
      uVar3 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (undefined4 *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (uVar2 < 8) {
LAB_0041f1cc:
                    // WARNING: Could not recover jumptable at 0x0041f1cc. Too many branches
                    // WARNING: Treating indirect jump as call
          pvVar1 = (void *)(*(code *)(&PTR_LAB_0041f250)[uVar2])();
          return pvVar1;
        }
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041f1c4_caseD_1;
        case 2:
          goto switchD_0041f1c4_caseD_2;
        case 3:
          goto switchD_0041f1c4_caseD_3;
        }
        break;
      case 2:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (undefined4 *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (uVar2 < 8) goto LAB_0041f1cc;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041f1c4_caseD_1;
        case 2:
          goto switchD_0041f1c4_caseD_2;
        case 3:
          goto switchD_0041f1c4_caseD_3;
        }
        break;
      case 3:
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar2 = uVar3 >> 2;
        _Src = (undefined4 *)((int)_Src + 1);
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (uVar2 < 8) goto LAB_0041f1cc;
        while (uVar2 != 0
                    // WARNING: Load size is inaccurate) {
          uVar2 = uVar2 - 1;
          *puVar4 = *_Src;
          _Src = (undefined4 *)((int)_Src + 4);
          puVar4 = puVar4 + 1;
        }
        switch(uVar3 & 3) {
        case 1:
          goto switchD_0041f1c4_caseD_1;
        case 2:
          goto switchD_0041f1c4_caseD_2;
        case 3:
          goto switchD_0041f1c4_caseD_3;
        }
      }
    }
  }
  return _Dst;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2003 Debug

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  _FILETIME local_c;
  
  if ((DAT_00428eb0 == 0) || (DAT_00428eb0 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    local_10 = local_c.dwLowDateTime ^ local_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetCurrentThreadId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetTickCount();
    local_10 = DVar1 ^ local_10;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_1c);
    local_20 = local_10 ^ local_1c ^ local_18;
    if (local_20 == 0) {
      local_20 = 0xbb40e64e;
    }
    DAT_00428eb0 = local_20;
  }
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  ___security_error_handler
// 
// Library: Visual Studio 2003 Debug

void __cdecl ___security_error_handler(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  undefined4 *in_FS_OFFSET;
  undefined *local_148;
  int local_144;
  char *local_140;
  uint local_13c [65];
  undefined local_38;
  int local_30;
  uint *local_2c;
  uint *local_28;
  char *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00427368;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_30 = DAT_00428eb0;
  local_1c = &stack0xfffffeac;
  if (DAT_0042992c == (code *)0x0) {
    local_144 = param_1;
    if (param_1 == 1) {
      local_140 = "Buffer overrun detected!";
      local_24 = 
      "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n"
      ;
      local_20 = 0xb9;
    }
    else {
      local_140 = "Unknown security failure detected!";
      local_24 = 
      "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n"
      ;
      local_20 = 0xd4;
    }
    iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38 = 0;
    DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_13c,0x104);
    if (DVar3 == 0) {
      thunk_FUN_0041a040(local_13c,(uint *)"<program name unknown>");
    }
    local_2c = local_13c;
    sVar4 = _strlen((char *)local_13c);
    if (0x3c < sVar4 + 0xb) {
      sVar4 = _strlen((char *)local_13c);
      local_2c = (uint *)((int)local_2c + (sVar4 - 0x31));
      _strncpy((char *)local_2c,"...",3);
    }
    _strlen((char *)local_2c);
    local_148 = &stack0xfffffeac;
    local_28 = (uint *)&stack0xfffffeac;
    local_1c = &stack0xfffffeac;
    thunk_FUN_0041a040((uint *)&stack0xfffffeac,(uint *)local_140);
    thunk_FUN_0041a050(local_28,(uint *)&DAT_00425b54);
    thunk_FUN_0041a050(local_28,(uint *)"Program: ");
    thunk_FUN_0041a050(local_28,local_2c);
    thunk_FUN_0041a050(local_28,(uint *)&DAT_00425b54);
    thunk_FUN_0041a050(local_28,(uint *)local_24);
    ___crtMessageBoxA((LPCSTR)local_28,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = 0;
    local_1c = &stack0xfffffeac;
    (*DAT_0042992c)(param_1,param_2);
    local_8 = 0xffffffff;
  }
  __exit(3);
  *in_FS_OFFSET = local_14;
  thunk_FUN_0041d0f0(local_30);
  return;
}



// Library Function - Single Match
//  __set_security_error_handler
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl __set_security_error_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0042992c;
  DAT_0042992c = param_1;
  return uVar1;
}



// Library Function - Single Match
//  ___buffer_overrun
// 
// Library: Visual Studio 2003 Debug

void ___buffer_overrun(void)

{
  ___security_error_handler(1,0);
  return;
}



// Library Function - Single Match
//  ___set_buffer_overrun_handler
// 
// Library: Visual Studio 2003 Debug

void __cdecl ___set_buffer_overrun_handler(undefined4 param_1)

{
  __set_security_error_handler(param_1);
  return;
}



// Library Function - Single Match
//  __aulldiv
// 
// Library: Visual Studio 2003 Debug

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
//  __aullrem
// 
// Library: Visual Studio 2003 Debug

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



// Library Function - Single Match
//  __flsbuf
// 
// Library: Visual Studio 2003 Debug

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  code *pcVar1;
  FILE *_File_00;
  int iVar2;
  uint uVar3;
  undefined *local_18;
  char *local_10;
  char *local_8;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x66,(char *)0x0,"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  _File_00 = _File;
  uVar3 = _File->_file;
  if (((_File->_flag & 0x82U) != 0) && ((_File->_flag & 0x40U) == 0)) {
    if ((_File->_flag & 1U) != 0) {
      _File->_cnt = 0;
      if ((_File->_flag & 0x10U) == 0) {
        _File->_flag = _File->_flag | 0x20;
        return 0xffffffff;
      }
      _File->_ptr = _File->_base;
      _File->_flag = _File->_flag & 0xfffffffe;
    }
    _File->_flag = _File->_flag | 2;
    _File->_flag = _File->_flag & 0xffffffef;
    _File->_cnt = 0;
    local_10 = (char *)0x0;
    if (((_File->_flag & 0x10cU) == 0) &&
       (((_File != (FILE *)&DAT_00428f20 && (_File != (FILE *)&DAT_00428f40)) ||
        (iVar2 = __isatty(uVar3), iVar2 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108U) == 0) {
      local_8 = (char *)0x1;
      local_10 = (char *)__write(uVar3,&_Ch,1);
    }
    else {
      if (((int)(_File_00->_ptr + -(int)_File_00->_base) < 0) &&
         (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x9d,(char *)0x0,
                                 "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)")
         , iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      local_8 = _File_00->_ptr + -(int)_File_00->_base;
      _File_00->_ptr = _File_00->_base + 1;
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)local_8 < 1) {
        if (uVar3 == 0xffffffff) {
          local_18 = &DAT_00428c34;
        }
        else {
          local_18 = (undefined *)((&DAT_0042afe0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 8);
        }
        if ((local_18[4] & 0x20) != 0) {
          __lseek(uVar3,0,2);
        }
      }
      else {
        local_10 = (char *)__write(uVar3,_File_00->_base,(uint)local_8);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (local_10 == local_8) {
      uVar3 = _Ch & 0xff;
    }
    else {
      _File_00->_flag = _File_00->_flag | 0x20;
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  _File->_flag = _File->_flag | 0x20;
  return 0xffffffff;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __output
// 
// Library: Visual Studio 2003 Debug

void __cdecl __output(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int **ppiVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **extraout_ECX;
  uint extraout_ECX_00;
  int **extraout_ECX_01;
  int **ppiVar9;
  int **extraout_ECX_02;
  int **extraout_ECX_03;
  int **extraout_ECX_04;
  int **extraout_ECX_05;
  int **extraout_ECX_06;
  int **extraout_ECX_07;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int **local_2bc;
  uint local_2a8;
  char local_2a4 [8];
  int local_29c;
  int **local_298;
  int **local_294;
  int local_290;
  undefined8 local_28c;
  undefined8 local_284;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  uint *local_26c;
  int **local_268;
  int **local_264;
  int **local_260;
  int **local_25c;
  undefined2 local_258;
  int local_254;
  int local_250;
  wchar_t local_24c;
  byte local_245;
  uint local_244;
  uint local_240;
  undefined local_23c;
  int *local_3d;
  int local_38;
  int **local_34;
  undefined4 local_30;
  int local_2c;
  int **local_28;
  int **local_24;
  int local_20;
  int local_1c;
  char local_18;
  char local_17;
  uint local_14;
  int local_10;
  uint local_c;
  int **local_8;
  
  local_38 = DAT_00428eb0;
  local_28 = (int **)0x0;
  local_240 = 0;
  local_250 = 0;
  local_24 = (int **)0x0;
  pbVar3 = param_2;
  do {
    param_2 = pbVar3;
    local_245 = *param_2;
    pbVar3 = param_2 + 1;
    if ((local_245 == 0) || ((int)local_240 < 0)) {
      thunk_FUN_0041d0f0(local_38);
      return;
    }
    if (((char)local_245 < ' ') || ('x' < (char)local_245)) {
      local_2a8 = 0;
    }
    else {
      local_2a8 = (int)(char)(&DAT_004273c0)[(char)local_245] & 0xf;
    }
    local_244 = local_2a8;
    local_250 = (int)*(char *)(local_250 + (local_2a8 * 2 + 0x109cf8) * 4) >> 4;
    switch(local_250) {
    case 0:
      goto switchD_0041fe66_caseD_0;
    case 1:
      local_30 = 0;
      local_2c = 0;
      local_1c = 0;
      local_20 = 0;
      local_14 = 0;
      local_34 = (int **)0xffffffff;
      local_10 = 0;
      break;
    case 2:
      switch(local_245) {
      case 0x20:
        local_14 = local_14 | 2;
        break;
      case 0x23:
        local_14 = local_14 | 0x80;
        break;
      case 0x2b:
        local_14 = local_14 | 1;
        break;
      case 0x2d:
        local_14 = local_14 | 4;
        break;
      case 0x30:
        local_14 = local_14 | 8;
      }
      break;
    case 3:
      if (local_245 == 0x2a) {
        local_1c = _get_int_arg((int *)&param_3);
        if (local_1c < 0) {
          local_14 = local_14 | 4;
          local_1c = -local_1c;
        }
      }
      else {
        local_1c = local_1c * 10 + -0x30 + (int)(char)local_245;
      }
      break;
    case 4:
      local_34 = (int **)0x0;
      break;
    case 5:
      if (local_245 == 0x2a) {
        local_34 = (int **)_get_int_arg((int *)&param_3);
        if ((int)local_34 < 0) {
          local_34 = (int **)0xffffffff;
        }
      }
      else {
        local_34 = (int **)((int)local_34 * 10 + -0x30 + (int)(char)local_245);
      }
      break;
    case 6:
      switch(local_245) {
      case 0x49:
        if ((*pbVar3 == 0x36) && (param_2[2] == 0x34)) {
          local_14 = local_14 | 0x8000;
          pbVar3 = param_2 + 3;
        }
        else {
          if ((*pbVar3 == 0x33) && (param_2[2] == 0x32)) {
            local_14 = local_14 & 0xffff7fff;
            pbVar3 = param_2 + 3;
          }
          else {
            if (((((*pbVar3 != 100) && (*pbVar3 != 0x69)) && (*pbVar3 != 0x6f)) &&
                ((*pbVar3 != 0x75 && (*pbVar3 != 0x78)))) && (*pbVar3 != 0x58)) {
              local_250 = 0;
switchD_0041fe66_caseD_0:
              local_10 = 0;
              if ((*(ushort *)(PTR_DAT_00428ed4 + (uint)local_245 * 2) & 0x8000) != 0) {
                _write_char(local_245,param_1,(int *)&local_240);
                local_245 = *pbVar3;
                pbVar3 = param_2 + 2;
                if (local_245 == 0) {
                  iVar4 = __CrtDbgReport(2,"output.c",0x192,(char *)0x0,"ch != _T(\'\\0\')");
                  if (iVar4 == 1) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                }
              }
              param_2 = pbVar3;
              _write_char(local_245,param_1,(int *)&local_240);
              pbVar3 = param_2;
            }
          }
        }
        break;
      case 0x68:
        local_14 = local_14 | 0x20;
        break;
      case 0x6c:
        local_14 = local_14 | 0x10;
        break;
      case 0x77:
        local_14 = local_14 | 0x800;
      }
      break;
    case 7:
      ppiVar9 = (int **)((char)local_245 + -0x43);
      ppiVar8 = local_8;
      switch(local_245) {
      case 0x43:
        if ((local_14 & 0x830) == 0) {
          local_14 = local_14 | 0x800;
        }
      case 99:
        if ((local_14 & 0x810) == 0) {
          uVar6 = _get_int_arg((int *)&param_3);
          local_258 = (undefined2)uVar6;
          local_258._0_1_ = (undefined)uVar6;
          ppiVar9 = (int **)(extraout_ECX_00 & 0xffffff00 | uVar6 & 0xff);
          local_23c = (undefined)local_258;
          local_28 = (int **)0x1;
        }
        else {
          uVar6 = _get_short_arg((int *)&param_3);
          local_24c = (wchar_t)uVar6;
          local_28 = (int **)_wctomb(&local_23c,local_24c);
          ppiVar9 = extraout_ECX;
          if ((int)local_28 < 0) {
            local_2c = 1;
          }
        }
        ppiVar8 = (int **)&local_23c;
        break;
      case 0x45:
      case 0x47:
        local_30 = 1;
        local_245 = local_245 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        local_14 = local_14 | 0x40;
        local_8 = (int **)&local_23c;
        if ((int)local_34 < 0) {
          local_34 = (int **)0x6;
        }
        else {
          if ((local_34 == (int **)0x0) && (local_245 == 0x67)) {
            local_34 = (int **)0x1;
          }
          else {
            if (0x200 < (int)local_34) {
              local_34 = (int **)0x200;
            }
          }
        }
        ppiVar9 = local_8;
        if (0xa3 < (int)local_34) {
          local_24 = __malloc_dbg((int *)((int)local_34 + 0x15d),(int *)0x2,(int *)"output.c",
                                  (int *)0x300);
          ppiVar9 = local_24;
          if (local_24 == (int **)0x0) {
            local_34 = (int **)0xa3;
            ppiVar9 = local_8;
          }
        }
        local_8 = ppiVar9;
        local_274 = *param_3;
        local_270 = param_3[1];
        param_3 = param_3 + 2;
        (*_DAT_00429200)(&local_274,local_8,(int)(char)local_245,local_34,local_30);
        if (((local_14 & 0x80) != 0) && (local_34 == (int **)0x0)) {
          (*(code *)PTR___fptrap_0042920c)(local_8);
        }
        if ((local_245 == 0x67) && ((local_14 & 0x80) == 0)) {
          (*_DAT_00429204)(local_8);
        }
        if (*(char *)local_8 == '-') {
          local_14 = local_14 | 0x100;
          local_8 = (int **)((int)local_8 + 1);
        }
        local_28 = (int **)_strlen((char *)local_8);
        ppiVar9 = extraout_ECX_03;
        ppiVar8 = local_8;
        break;
      case 0x53:
        if ((local_14 & 0x830) == 0) {
          local_14 = local_14 | 0x800;
        }
      case 0x73:
        if (local_34 == (int **)0xffffffff) {
          local_2bc = (int **)0x7fffffff;
        }
        else {
          local_2bc = local_34;
        }
        local_264 = local_2bc;
        local_8 = (int **)_get_int_arg((int *)&param_3);
        if ((local_14 & 0x810) == 0) {
          if (local_8 == (int **)0x0) {
            local_8 = (int **)PTR_DAT_00428ef0;
          }
          local_260 = local_8;
          while ((ppiVar9 = local_264, local_264 != (int **)0x0 &&
                 (ppiVar9 = (int **)(int)*(char *)local_260, ppiVar9 != (int **)0x0))) {
            local_260 = (int **)((int)local_260 + 1);
            local_264 = (int **)((int)local_264 + -1);
          }
          local_28 = (int **)((int)local_260 - (int)local_8);
          local_264 = (int **)((int)local_264 + -1);
          ppiVar8 = local_8;
        }
        else {
          if (local_8 == (int **)0x0) {
            local_8 = (int **)PTR_DAT_00428ef4;
          }
          local_10 = 1;
          local_268 = local_8;
          while ((local_264 != (int **)0x0 && (*(wchar_t *)local_268 != L'\0'))) {
            local_268 = (int **)((int)local_268 + 2);
            local_264 = (int **)((int)local_264 + -1);
          }
          ppiVar9 = (int **)((int)((int)local_268 - (int)local_8) >> 1);
          local_264 = (int **)((int)local_264 + -1);
          local_28 = ppiVar9;
          ppiVar8 = local_8;
        }
        break;
      case 0x5a:
        ppiVar9 = (int **)_get_int_arg((int *)&param_3);
        local_25c = ppiVar9;
        if ((ppiVar9 == (int **)0x0) || (ppiVar9[1] == (int *)0x0)) {
          local_8 = (int **)PTR_DAT_00428ef0;
          local_28 = (int **)_strlen(PTR_DAT_00428ef0);
          ppiVar9 = extraout_ECX_01;
          ppiVar8 = local_8;
        }
        else {
          if ((local_14 & 0x800) == 0) {
            local_10 = 0;
            local_28 = (int **)(int)*(wchar_t *)ppiVar9;
            ppiVar8 = (int **)ppiVar9[1];
          }
          else {
            local_10 = 1;
            local_28 = (int **)((int)*(wchar_t *)ppiVar9 / 2);
            ppiVar8 = (int **)ppiVar9[1];
          }
        }
        break;
      case 100:
      case 0x69:
        local_14 = local_14 | 0x40;
        local_c = 10;
        goto LAB_00420604;
      case 0x6e:
        local_26c = (uint *)_get_int_arg((int *)&param_3);
        if ((local_14 & 0x20) == 0) {
          *local_26c = local_240;
          ppiVar9 = extraout_ECX_02;
        }
        else {
          ppiVar9 = (int **)((uint)extraout_ECX_02 & 0xffff0000 | local_240 & 0xffff);
          *(short *)local_26c = (short)(local_240 & 0xffff);
        }
        local_2c = 1;
        ppiVar8 = local_8;
        break;
      case 0x6f:
        local_c = 8;
        if ((local_14 & 0x80) != 0) {
          local_14 = local_14 | 0x200;
        }
        goto LAB_00420604;
      case 0x70:
        local_34 = (int **)&DAT_00000008;
      case 0x58:
        local_254 = 7;
        goto LAB_004205bd;
      case 0x75:
        local_c = 10;
        goto LAB_00420604;
      case 0x78:
        local_254 = 0x27;
LAB_004205bd:
        local_c = 0x10;
        if ((local_14 & 0x80) != 0) {
          local_18 = '0';
          local_17 = (char)local_254 + 'Q';
          local_20 = 2;
        }
LAB_00420604:
        if ((local_14 & 0x8000) == 0) {
          if ((local_14 & 0x20) == 0) {
            if ((local_14 & 0x40) == 0) {
              uVar6 = _get_int_arg((int *)&param_3);
              uVar11 = (ulonglong)uVar6;
            }
            else {
              iVar4 = _get_int_arg((int *)&param_3);
              uVar11 = SEXT48(iVar4);
            }
          }
          else {
            if ((local_14 & 0x40) == 0) {
              uVar6 = _get_int_arg((int *)&param_3);
              local_284._0_4_ = uVar6 & 0xffff;
              local_284._4_4_ = 0;
            }
            else {
              uVar5 = _get_int_arg((int *)&param_3);
              local_284._0_4_ = SEXT24((short)uVar5);
              local_284._4_4_ = (int)(uint)local_284 >> 0x1f;
            }
            uVar11 = CONCAT44(local_284._4_4_,(uint)local_284);
          }
        }
        else {
          uVar11 = _get_int64_arg((int *)&param_3);
        }
        local_284._4_4_ = (int)(uVar11 >> 0x20);
        local_284._0_4_ = (uint)uVar11;
        uVar13 = uVar11;
        if ((((local_14 & 0x40) != 0) && ((longlong)uVar11 < 0x100000000)) && ((longlong)uVar11 < 0)
           ) {
          local_14 = local_14 | 0x100;
          uVar13 = CONCAT44(-(local_284._4_4_ + (uint)((uint)local_284 != 0)),-(uint)local_284);
        }
        local_28c._4_4_ = (uint)(uVar13 >> 0x20);
        local_28c._0_4_ = (uint)uVar13;
        if ((local_14 & 0x8000) == 0) {
          local_28c._4_4_ = 0;
        }
        uVar13 = uVar13 & 0xffffffff | (ulonglong)local_28c._4_4_ << 0x20;
        if ((int)local_34 < 0) {
          local_34 = (int **)0x1;
        }
        else {
          local_14 = local_14 & 0xfffffff7;
          if (0x200 < (int)local_34) {
            local_34 = (int **)0x200;
          }
        }
        if (((uint)local_28c | local_28c._4_4_) == 0) {
          local_20 = 0;
        }
        local_8 = &local_3d;
        local_284 = uVar11;
        while( true ) {
          ppiVar2 = local_8;
          local_28c._4_4_ = (uint)(uVar13 >> 0x20);
          local_28c._0_4_ = (uint)uVar13;
          ppiVar7 = (int **)((int)local_34 + -1);
          local_28c = uVar13;
          if (((int)local_34 < 1) && (uVar13 == 0)) break;
          local_34 = ppiVar7;
          uVar12 = __aullrem((uint)local_28c,local_28c._4_4_,local_c,(int)local_c >> 0x1f);
          local_278 = (int)uVar12 + 0x30;
          uVar13 = __aulldiv((uint)local_28c,local_28c._4_4_,local_c,(int)local_c >> 0x1f);
          if (0x39 < local_278) {
            local_278 = local_278 + local_254;
          }
          *(char *)local_8 = (char)local_278;
          local_8 = (int **)((int)local_8 + -1);
        }
        local_28 = (int **)((int)&local_3d - (int)local_8);
        ppiVar8 = (int **)((int)local_8 + 1);
        ppiVar9 = local_28;
        local_34 = ppiVar7;
        if (((local_14 & 0x200) != 0) &&
           ((*(char *)ppiVar8 != '0' || (ppiVar9 = ppiVar8, local_28 == (int **)0x0)))) {
          *(char *)local_8 = '0';
          ppiVar9 = ppiVar2;
          local_28 = (int **)((int)local_28 + 1);
          ppiVar8 = local_8;
        }
      }
      local_8 = ppiVar8;
      if (local_2c == 0) {
        if ((local_14 & 0x40) != 0) {
          if ((local_14 & 0x100) == 0) {
            if ((local_14 & 1) == 0) {
              if ((local_14 & 2) != 0) {
                local_18 = ' ';
                local_20 = 1;
              }
            }
            else {
              local_18 = '+';
              local_20 = 1;
            }
          }
          else {
            local_18 = '-';
            local_20 = 1;
          }
        }
        local_290 = (local_1c - (int)local_28) - local_20;
        if ((local_14 & 0xc) == 0) {
          _write_multi_char(' ',local_290,param_1,(int *)&local_240);
        }
        _write_string(&local_18,local_20,param_1,(int *)&local_240);
        if (((local_14 & 8) != 0) && ((local_14 & 4) == 0)) {
          _write_multi_char('0',local_290,param_1,(int *)&local_240);
        }
        if ((local_10 == 0) || ((int)local_28 < 1)) {
          _write_string((char *)local_8,(int)local_28,param_1,(int *)&local_240);
          ppiVar9 = extraout_ECX_06;
        }
        else {
          local_294 = local_8;
          local_298 = local_28;
          ppiVar9 = local_28;
          while (ppiVar8 = (int **)((int)local_298 + -1), bVar10 = local_298 != (int **)0x0,
                local_298 = ppiVar8, bVar10) {
            local_29c = _wctomb(local_2a4,*(wchar_t *)local_294);
            local_294 = (int **)((int)local_294 + 2);
            ppiVar9 = extraout_ECX_04;
            if (local_29c < 1) break;
            _write_string(local_2a4,local_29c,param_1,(int *)&local_240);
            ppiVar9 = extraout_ECX_05;
          }
        }
        if ((local_14 & 4) != 0) {
          _write_multi_char(' ',local_290,param_1,(int *)&local_240);
          ppiVar9 = extraout_ECX_07;
        }
      }
      if (local_24 != (int **)0x0) {
        __free_dbg(ppiVar9,(uint)local_24,(int *)0x2);
        local_24 = (int **)0x0;
      }
    }
  } while( true );
}



// Library Function - Single Match
//  _write_char
// 
// Library: Visual Studio 2003 Debug

void __cdecl _write_char(char param_1,FILE *param_2,int *param_3)

{
  uint local_8;
  
  if (((param_2->_flag & 0x40U) == 0) || (param_2->_base != (char *)0x0)) {
    param_2->_cnt = param_2->_cnt + -1;
    if (param_2->_cnt < 0) {
      local_8 = __flsbuf((int)param_1,param_2);
    }
    else {
      *param_2->_ptr = param_1;
      local_8 = (int)param_1 & 0xff;
      param_2->_ptr = param_2->_ptr + 1;
    }
    if (local_8 == 0xffffffff) {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}



// Library Function - Single Match
//  _write_multi_char
// 
// Library: Visual Studio 2003 Debug

void __cdecl _write_multi_char(char param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    _write_char(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Library Function - Single Match
//  _write_string
// 
// Library: Visual Studio 2003 Debug

void __cdecl _write_string(char *param_1,int param_2,FILE *param_3,int *param_4)

{
  if (((param_3->_flag & 0x40U) == 0) || (param_3->_base != (char *)0x0)) {
    do {
      if (param_2 < 1) {
        return;
      }
      _write_char(*param_1,param_3,param_4);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (*param_4 != -1);
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}



// Library Function - Single Match
//  _get_int_arg
// 
// Library: Visual Studio 2003 Debug

undefined4 __cdecl _get_int_arg(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Library Function - Single Match
//  _get_int64_arg
// 
// Library: Visual Studio 2003 Debug

undefined8 __cdecl _get_int64_arg(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Library Function - Single Match
//  _get_short_arg
// 
// Library: Visual Studio 2003 Debug

uint __cdecl _get_short_arg(int *param_1)

{
  *param_1 = *param_1 + 4;
  return (uint)param_1 & 0xffff0000 | (uint)*(ushort *)(*param_1 + -4);
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  __resetstkoflw
// 
// Library: Visual Studio 2003 Debug

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  int iVar2;
  undefined4 uStack108;
  undefined4 *local_68;
  LPCVOID local_64;
  LPVOID local_60;
  _MEMORY_BASIC_INFORMATION local_5c;
  _SYSTEM_INFO local_40;
  SIZE_T local_1c;
  LPCVOID local_18;
  undefined4 *local_14;
  DWORD local_10;
  LPCVOID local_c;
  DWORD local_8;
  
  uStack108 = 0x421100;
  local_68 = &uStack108;
  local_14 = &uStack108;
  SVar1 = VirtualQuery(&uStack108,(PMEMORY_BASIC_INFORMATION)&local_5c,0x1c);
  if (SVar1 == 0) {
    iVar2 = 0;
  }
  else {
    local_64 = local_5c.AllocationBase;
    GetSystemInfo((LPSYSTEM_INFO)&local_40);
    local_1c = local_40.dwPageSize;
    local_18 = (LPCVOID)((~(local_40.dwPageSize - 1) & (uint)local_14) - local_40.dwPageSize);
    local_c = (LPCVOID)(((-(uint)(DAT_00429638 != 1) & 0xfffffff1) + 0x11) * local_40.dwPageSize +
                       (int)local_64);
    if (local_18 < local_c) {
      iVar2 = 0;
    }
    else {
      local_60 = local_18;
      if (DAT_00429638 != 1) {
        local_60 = local_64;
        do {
          SVar1 = VirtualQuery(local_60,(PMEMORY_BASIC_INFORMATION)&local_5c,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          local_60 = (LPVOID)((int)local_60 + local_5c.RegionSize);
        } while ((local_5c.State & 0x1000) == 0);
        local_60 = local_5c.BaseAddress;
        if ((local_5c.Protect & 0x100) != 0) {
          return 1;
        }
        if (local_18 < local_5c.BaseAddress) {
          return 0;
        }
        if (local_5c.BaseAddress < local_c) {
          local_60 = local_c;
        }
        VirtualAlloc(local_60,local_1c,0x1000,4);
      }
      local_8 = (-(uint)(DAT_00429638 != 1) & 0x103) + 1;
      iVar2 = VirtualProtect(local_60,local_1c,local_8,&local_10);
    }
  }
  return iVar2;
}



// Library Function - Single Match
//  ___ansicp
// 
// Library: Visual Studio 2003 Debug

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_14 [6];
  undefined local_e;
  int local_c;
  long local_8;
  
  local_c = DAT_00428eb0;
  local_e = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_14,6);
  if (iVar1 == 0) {
    local_8 = -1;
  }
  else {
    local_8 = _atol(local_14);
  }
  thunk_FUN_0041d0f0(local_c);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  ___convertcp
// 
// Library: Visual Studio 2003 Debug

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,int *param_4,int **param_5,int param_6)

{
  undefined *puVar1;
  BOOL BVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined *local_50;
  _cpinfo local_4c;
  int local_38;
  int **local_34;
  int local_30;
  int local_2c;
  int local_28;
  int **local_24;
  int local_20;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_00427498;
  puStack16 = &LAB_004111a4;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_38 = DAT_00428eb0;
  local_1c = &stack0xffffffa4;
  local_24 = (int **)0x0;
  local_30 = 0;
  local_20 = *param_4;
  local_28 = 0;
  puVar1 = &stack0xffffffa4;
  if (param_1 != param_2) {
    BVar2 = GetCPInfo(param_1,(LPCPINFO)&local_4c);
    if ((((BVar2 != 0) && (local_4c.MaxCharSize == 1)) &&
        (BVar2 = GetCPInfo(param_2,(LPCPINFO)&local_4c), BVar2 != 0)) && (local_4c.MaxCharSize == 1)
       ) {
      local_28 = 1;
    }
    if (local_28 != 0) {
      if (local_20 == -1) {
        sVar3 = _strlen(param_3);
        local_2c = sVar3 + 1;
      }
      else {
        local_2c = local_20;
      }
    }
    if ((local_28 == 0) &&
       (local_2c = MultiByteToWideChar(param_1,1,param_3,local_20,(LPWSTR)0x0,0), local_2c == 0))
    goto LAB_00421580;
    local_8 = 0;
    local_50 = &stack0xffffffa4;
    local_34 = (int **)&stack0xffffffa4;
    local_1c = &stack0xffffffa4;
    _memset(&stack0xffffffa4,0,local_2c << 1);
    local_8 = 0xffffffff;
    if (local_34 == (int **)0x0) {
      local_34 = __calloc_dbg(2,local_2c,(int *)0x2,(int *)"convrtcp.c",(int *)0x7e);
      if (local_34 == (int **)0x0) goto LAB_00421580;
      local_30 = local_30 + 1;
    }
    iVar4 = MultiByteToWideChar(param_1,1,param_3,local_20,(LPWSTR)local_34,local_2c);
    puVar1 = local_1c;
    if (iVar4 != 0) {
      if (param_5 == (int **)0x0) {
        if (((local_28 != 0) ||
            (local_2c = WideCharToMultiByte(param_2,0,(LPCWSTR)local_34,local_2c,(LPSTR)0x0,0,
                                            (LPCSTR)0x0,(LPBOOL)0x0), puVar1 = local_1c,
            local_2c != 0)) &&
           (local_24 = __calloc_dbg(1,local_2c,(int *)0x2,(int *)"convrtcp.c",(int *)0xa1),
           puVar1 = local_1c, local_24 != (int **)0x0)) {
          local_2c = WideCharToMultiByte(param_2,0,(LPCWSTR)local_34,local_2c,(LPSTR)local_24,
                                         local_2c,(LPCSTR)0x0,(LPBOOL)0x0);
          if (local_2c == 0) {
            __free_dbg(local_24,(uint)local_24,(int *)0x2);
            local_24 = (int **)0x0;
            puVar1 = local_1c;
          }
          else {
            puVar1 = local_1c;
            if (local_20 != -1) {
              *param_4 = local_2c;
            }
          }
        }
      }
      else {
        iVar4 = WideCharToMultiByte(param_2,0,(LPCWSTR)local_34,local_2c,(LPSTR)param_5,param_6,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        puVar1 = local_1c;
        if (iVar4 != 0) {
          local_24 = param_5;
        }
      }
    }
  }
  local_1c = puVar1;
  if (local_30 != 0) {
    __free_dbg(local_34,(uint)local_34,(int *)0x2);
  }
LAB_00421580:
  *in_FS_OFFSET = local_14;
  thunk_FUN_0041d0f0(local_38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __lseek
// 
// Library: Visual Studio 2003 Debug

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  DWORD DVar1;
  HANDLE hFile;
  int iVar2;
  DWORD local_10;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar2 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) {
      _DAT_0042962c = 9;
      DVar1 = 0xffffffff;
    }
    else {
      DVar1 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
      if (DVar1 == 0xffffffff) {
        local_10 = GetLastError();
      }
      else {
        local_10 = 0;
      }
      if (local_10 == 0) {
        *(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) =
             *(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) & 0xfd;
      }
      else {
        __dosmaperr(local_10);
        DVar1 = 0xffffffff;
      }
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    DVar1 = 0xffffffff;
  }
  return DVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __write
// 
// Library: Visual Studio 2003 Debug

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  char *local_428;
  DWORD local_424;
  DWORD local_420;
  DWORD local_41c;
  char *local_418;
  char local_414 [1036];
  int local_8;
  
  local_8 = DAT_00428eb0;
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar3 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    local_41c = 0;
    if (_MaxCharCount != 0) {
      if ((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x20) != 0) {
        __lseeki64(_FileHandle,0,2);
      }
      if (((int)*(char *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x80U) == 0) {
        BVar2 = WriteFile(*(HANDLE *)((&DAT_0042afe0)[iVar3] + (_FileHandle & 0x1fU) * 8),_Buf,
                          _MaxCharCount,&local_424,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_420 = GetLastError();
        }
        else {
          local_420 = 0;
          local_41c = local_424;
        }
      }
      else {
        local_418 = (char *)_Buf;
        local_420 = 0;
        do {
          if (_MaxCharCount <= local_418 + -(int)_Buf) break;
          local_428 = local_414;
          while (((int)(local_428 + -(int)local_414) < 0x400 &&
                 (local_418 + -(int)_Buf < _MaxCharCount))) {
            cVar1 = *local_418;
            local_418 = local_418 + 1;
            if (cVar1 == '\n') {
              *local_428 = '\r';
              local_428 = local_428 + 1;
            }
            *local_428 = cVar1;
            local_428 = local_428 + 1;
          }
          BVar2 = WriteFile(*(HANDLE *)((&DAT_0042afe0)[iVar3] + (_FileHandle & 0x1fU) * 8),
                            local_414,(DWORD)(local_428 + -(int)local_414),&local_424,
                            (LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            local_420 = GetLastError();
            break;
          }
          local_41c = local_41c + local_424;
        } while ((int)(local_428 + -(int)local_414) <= (int)local_424);
      }
      if (local_41c == 0) {
        if (local_420 == 0) {
          if (((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40) == 0) ||
             (*_Buf != '\x1a'
                    // WARNING: Load size is inaccurate)) {
            _DAT_0042962c = 0x1c;
            _DAT_00429630 = 0;
          }
        }
        else {
          if (local_420 == 5) {
            _DAT_0042962c = 9;
            _DAT_00429630 = local_420;
          }
          else {
            __dosmaperr(local_420);
          }
        }
      }
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
  }
  iVar3 = thunk_FUN_0041d0f0(local_8);
  return iVar3;
}



// Library Function - Single Match
//  __getbuf
// 
// Library: Visual Studio 2003 Debug

void __cdecl __getbuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_getbuf.c",0x2e,(char *)0x0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DAT_00429930 = DAT_00429930 + 1;
  ppiVar3 = __malloc_dbg((int *)0x1000,(int *)0x2,(int *)"_getbuf.c",(int *)0x3a);
  _File->_base = (char *)ppiVar3;
  if (_File->_base == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return;
}



// Library Function - Single Match
//  __isatty
// 
// Library: Visual Studio 2003 Debug

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_0042af94) {
    uVar1 = (int)*(char *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40
    ;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined ** FUN_00421c90(void)

{
  return &PTR_DAT_00428f00;
}



// Library Function - Single Match
//  ___initstdio
// 
// Library: Visual Studio 2003 Debug

undefined4 ___initstdio(void)

{
  uint local_8;
  
  if (DAT_0042ac80 == 0) {
    DAT_0042ac80 = 0x200;
  }
  else {
    if (DAT_0042ac80 < 0x14) {
      DAT_0042ac80 = 0x14;
    }
  }
  DAT_00429934 = __calloc_dbg(DAT_0042ac80,4,(int *)0x2,(int *)"_file.c",(int *)0x89);
  if (DAT_00429934 == (int **)0x0) {
    DAT_0042ac80 = 0x14;
    DAT_00429934 = __calloc_dbg(0x14,4,(int *)0x2,(int *)"_file.c",(int *)0x8c);
    if (DAT_00429934 == (int **)0x0) {
      return 0x1a;
    }
  }
  local_8 = 0;
  while ((int)local_8 < 0x14) {
    DAT_00429934[local_8] = (int *)(&PTR_DAT_00428f00 + local_8 * 8);
    local_8 = local_8 + 1;
  }
  local_8 = 0;
  while ((int)local_8 < 3) {
    if ((*(int *)((&DAT_0042afe0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 8) == -1) ||
       (*(int *)((&DAT_0042afe0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 8) == 0)) {
      *(undefined4 *)(&DAT_00428f10 + local_8 * 0x20) = 0xffffffff;
    }
    local_8 = local_8 + 1;
  }
  return 0;
}



// Library Function - Single Match
//  ___endstdio
// 
// Library: Visual Studio 2003 Debug

void ___endstdio(void)

{
  __flushall();
  if (DAT_00429670 != '\0') {
    __fcloseall();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _wctomb
// 
// Library: Visual Studio 2003 Debug

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  int iVar1;
  int local_8;
  
  if (_MbCh == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (DAT_00429904 == 0) {
      if ((ushort)_WCh < 0x100) {
        *_MbCh = (char)_WCh;
        iVar1 = 1;
      }
      else {
        _DAT_0042962c = 0x2a;
        iVar1 = -1;
      }
    }
    else {
      local_8 = 0;
      iVar1 = WideCharToMultiByte(DAT_00429914,0,&_WCh,1,_MbCh,DAT_00428ec4,(LPCSTR)0x0,&local_8);
      if ((iVar1 == 0) || (local_8 != 0)) {
        _DAT_0042962c = 0x2a;
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}



// Library Function - Single Match
//  _atol
// 
// Library: Visual Studio 2003 Debug

long __cdecl _atol(char *_Str)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  uint local_10;
  long local_c;
  
  while (iVar2 = __ismbcspace((uint)(byte)*_Str), iVar2 != 0) {
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  if ((uVar3 == 0x2d) || (pbVar1 = (byte *)(_Str + 1), local_10 = uVar3, uVar3 == 0x2b)) {
    local_10 = (uint)(byte)_Str[1];
    pbVar1 = (byte *)(_Str + 2);
  }
  _Str = (char *)pbVar1;
  local_c = 0;
  while( true ) {
    if ((local_10 < 0x30) || (0x39 < local_10)) {
      local_14 = -1;
    }
    else {
      local_14 = local_10 - 0x30;
    }
    if (local_14 == -1) break;
    local_c = local_c * 10 + local_14;
    local_10 = (uint)(byte)*_Str;
    _Str = _Str + 1;
  }
  if (uVar3 == 0x2d) {
    local_c = -local_c;
  }
  return local_c;
}



// Library Function - Single Match
//  _atoi
// 
// Library: Visual Studio 2003 Debug

int __cdecl _atoi(char *_Str)

{
  long lVar1;
  
  lVar1 = _atol(_Str);
  return lVar1;
}



// Library Function - Single Match
//  __atoi64
// 
// Library: Visual Studio 2003 Debug

longlong __cdecl __atoi64(char *_String)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  while (iVar3 = __ismbcspace((uint)(byte)*_String), iVar3 != 0) {
    _String = _String + 1;
  }
  uVar4 = (uint)(byte)*_String;
  if ((uVar4 == 0x2d) || (pbVar2 = (byte *)(_String + 1), local_18 = uVar4, uVar4 == 0x2b)) {
    local_18 = (uint)(byte)_String[1];
    pbVar2 = (byte *)(_String + 2);
  }
  _String = (char *)pbVar2;
  lVar1 = 0;
  while( true ) {
    local_10 = (uint)((ulonglong)lVar1 >> 0x20);
    local_14 = (uint)lVar1;
    if ((local_18 < 0x30) || (0x39 < local_18)) {
      local_1c = -1;
    }
    else {
      local_1c = local_18 - 0x30;
    }
    if (local_1c == -1) break;
    uVar5 = __allmul(local_14,local_10,10,0);
    lVar1 = uVar5 + (longlong)local_1c;
    local_18 = (uint)(byte)*_String;
    _String = _String + 1;
  }
  if (uVar4 == 0x2d) {
    lVar1 = CONCAT44(-(local_10 + (local_14 != 0)),-local_14);
  }
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __dosmaperr
// 
// Library: Visual Studio 2003 Debug

void __cdecl __dosmaperr(ulong param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          _DAT_0042962c = 0x16;
        }
        else {
          _DAT_0042962c = 8;
        }
      }
      else {
        _DAT_0042962c = 0xd;
      }
      _DAT_00429630 = param_1;
      return;
    }
    if (param_1 == *(ulong *)(&DAT_00429220 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  _DAT_0042962c = *(undefined4 *)(&DAT_00429224 + local_8 * 8);
  _DAT_00429630 = param_1;
  return;
}



// Library Function - Single Match
//  __alloc_osfhnd
// 
// Library: Visual Studio 2003 Debug

int __cdecl __alloc_osfhnd(void)

{
  int **local_10;
  int local_c;
  int local_8;
  
  local_c = -1;
  local_8 = 0;
  do {
    if (0x3f < local_8) {
      return local_c;
    }
    if ((&DAT_0042afe0)[local_8] == 0) {
      local_10 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"osfinfo.c",(int *)0x85);
      if (local_10 == (int **)0x0) {
        return local_c;
      }
      (&DAT_0042afe0)[local_8] = local_10;
      DAT_0042af94 = DAT_0042af94 + 0x20;
      while (local_10 < (int **)((&DAT_0042afe0)[local_8] + 0x100)) {
        *(undefined *)(local_10 + 1) = 0;
        *local_10 = (int *)0xffffffff;
        *(undefined *)((int)local_10 + 5) = 10;
        local_10 = local_10 + 2;
      }
      return local_8 << 5;
    }
    local_10 = (int **)(&DAT_0042afe0)[local_8];
    while (local_10 < (undefined4 *)((&DAT_0042afe0)[local_8] + 0x100)) {
      if ((*(byte *)(local_10 + 1) & 1) == 0) {
        *local_10 = (int *)0xffffffff;
        local_c = local_8 * 0x20 + ((int)((int)local_10 - (&DAT_0042afe0)[local_8]) >> 3);
        break;
      }
      local_10 = local_10 + 2;
    }
    if (local_c != -1) {
      return local_c;
    }
    local_8 = local_8 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __set_osfhnd
// 
// Library: Visual Studio 2003 Debug

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  
  if (((uint)param_1 < DAT_0042af94) &&
     (*(int *)((&DAT_0042afe0)[param_1 >> 5] + (param_1 & 0x1fU) * 8) == -1)) {
    if (_DAT_00428b44 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else {
        if (param_1 == 1) {
          SetStdHandle(0xfffffff5,(HANDLE)param_2);
        }
        else {
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,(HANDLE)param_2);
          }
        }
      }
    }
    *(intptr_t *)((&DAT_0042afe0)[param_1 >> 5] + (param_1 & 0x1fU) * 8) = param_2;
    iVar1 = 0;
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __free_osfhnd
// 
// Library: Visual Studio 2003 Debug

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  
  if ((((uint)param_1 < DAT_0042af94) &&
      (iVar1 = param_1 >> 5,
      (*(byte *)((&DAT_0042afe0)[iVar1] + 4 + (param_1 & 0x1fU) * 8) & 1) != 0)) &&
     (*(int *)((&DAT_0042afe0)[iVar1] + (param_1 & 0x1fU) * 8) != -1)) {
    if (_DAT_00428b44 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else {
        if (param_1 == 1) {
          SetStdHandle(0xfffffff5,(HANDLE)0x0);
        }
        else {
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,(HANDLE)0x0);
          }
        }
      }
    }
    *(undefined4 *)((&DAT_0042afe0)[iVar1] + (param_1 & 0x1fU) * 8) = 0xffffffff;
    iVar1 = 0;
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __get_osfhandle
// 
// Library: Visual Studio 2003 Debug

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t iVar1;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    iVar1 = *(intptr_t *)((&DAT_0042afe0)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 8);
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __open_osfhandle
// 
// Library: Visual Studio 2003 Debug

int __cdecl __open_osfhandle(intptr_t _OSFileHandle,int _Flags)

{
  DWORD DVar1;
  uint uVar2;
  byte local_5;
  
  local_5 = 0;
  if ((_Flags & 8U) != 0) {
    local_5 = 0x20;
  }
  if ((_Flags & 0x4000U) != 0) {
    local_5 = local_5 | 0x80;
  }
  if ((_Flags & 0x80U) != 0) {
    local_5 = local_5 | 0x10;
  }
  DVar1 = GetFileType((HANDLE)_OSFileHandle);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    uVar2 = 0xffffffff;
  }
  else {
    if (DVar1 == 2) {
      local_5 = local_5 | 0x40;
    }
    else {
      if (DVar1 == 3) {
        local_5 = local_5 | 8;
      }
    }
    uVar2 = __alloc_osfhnd();
    if (uVar2 == 0xffffffff) {
      _DAT_0042962c = 0x18;
      _DAT_00429630 = 0;
      uVar2 = 0xffffffff;
    }
    else {
      __set_osfhnd(uVar2,_OSFileHandle);
      *(byte *)((&DAT_0042afe0)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 8) = local_5 | 1;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __lseeki64
// 
// Library: Visual Studio 2003 Debug

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD DVar1;
  HANDLE hFile;
  DWORD DVar2;
  int iVar3;
  LONG local_8;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar3 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    local_8 = _Offset._4_4_;
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) {
      _DAT_0042962c = 9;
      DVar1 = 0xffffffff;
      local_8 = -1;
    }
    else {
      DVar1 = SetFilePointer(hFile,(LONG)_Offset,&local_8,_Origin);
      if (DVar1 == 0xffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          __dosmaperr(DVar2);
          DVar1 = 0xffffffff;
          local_8 = -1;
          goto LAB_0042280a;
        }
      }
      *(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) =
           *(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0xfd;
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    DVar1 = 0xffffffff;
    local_8 = -1;
  }
LAB_0042280a:
  return CONCAT44(local_8,DVar1);
}



// Library Function - Single Match
//  __fcloseall
// 
// Library: Visual Studio 2003 Debug

int __cdecl __fcloseall(void)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 3;
  while (local_c < DAT_0042ac80) {
    if (*(int *)((int)DAT_00429934 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)((int)DAT_00429934 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = _fclose(*(FILE **)((int)DAT_00429934 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        __free_dbg(DAT_00429934,*(uint *)((int)DAT_00429934 + local_c * 4),(int *)0x2);
        *(undefined4 *)((int)DAT_00429934 + local_c * 4) = 0;
      }
    }
    local_c = local_c + 1;
  }
  return local_8;
}



// Library Function - Single Match
//  _fflush
// 
// Library: Visual Studio 2003 Debug

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = _flsall(0);
  }
  else {
    iVar1 = __flush(_File);
    if (iVar1 == 0) {
      if ((_File->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __commit(_File->_file);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



// Library Function - Single Match
//  __flush
// 
// Library: Visual Studio 2003 Debug

int __cdecl __flush(FILE *_File)

{
  char *pcVar1;
  char *_MaxCharCount;
  int local_8;
  
  local_8 = 0;
  if ((((_File->_flag & 3U) == 2) && ((_File->_flag & 0x108U) != 0)) &&
     (_MaxCharCount = _File->_ptr + -(int)_File->_base, 0 < (int)_MaxCharCount)) {
    pcVar1 = (char *)__write(_File->_file,_File->_base,(uint)_MaxCharCount);
    if (pcVar1 == _MaxCharCount) {
      if ((_File->_flag & 0x80U) != 0) {
        _File->_flag = _File->_flag & 0xfffffffd;
      }
    }
    else {
      _File->_flag = _File->_flag | 0x20;
      local_8 = -1;
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return local_8;
}



// Library Function - Single Match
//  __flushall
// 
// Library: Visual Studio 2003 Debug

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = _flsall(1);
  return iVar1;
}



// Library Function - Single Match
//  _flsall
// 
// Library: Visual Studio 2003 Debug

int __cdecl _flsall(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  while (local_c < DAT_0042ac80) {
    if ((*(int *)(DAT_00429934 + local_c * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_00429934 + local_c * 4) + 0xc) & 0x83) != 0)) {
      if (param_1 == 1) {
        iVar1 = _fflush(*(FILE **)(DAT_00429934 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if (((param_1 == 0) && ((*(uint *)(*(int *)(DAT_00429934 + local_c * 4) + 0xc) & 2) != 0))
           && (iVar1 = _fflush(*(FILE **)(DAT_00429934 + local_c * 4)), iVar1 == -1)) {
          local_10 = -1;
        }
      }
    }
    local_c = local_c + 1;
  }
  if (param_1 == 1) {
    local_10 = local_8;
  }
  return local_10;
}



// Library Function - Single Match
//  __fptrap
// 
// Library: Visual Studio 2003 Debug

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __ismbcspace
// 
// Library: Visual Studio 2003 Debug

int __cdecl __ismbcspace(uint _Ch)

{
  BOOL BVar1;
  uint local_10;
  undefined local_c;
  undefined local_b;
  ushort local_8;
  short local_6;
  
  if (_Ch < 0x100) {
    if (DAT_00428ec4 < 2) {
      local_10 = __chvalidator(_Ch,8);
    }
    else {
      local_10 = __isctype(_Ch,8);
    }
  }
  else {
    local_8 = 0;
    local_6 = 0;
    local_c = (undefined)(_Ch >> 8);
    local_b = (undefined)_Ch;
    if (_DAT_0042ad2c == 0) {
      local_10 = 0;
    }
    else {
      BVar1 = ___crtGetStringTypeA
                        ((_locale_t)0x1,(DWORD)&local_c,(LPCSTR)0x2,(int)&local_8,DAT_0042ae44,
                         DAT_0042acb4,1);
      if (BVar1 == 0) {
        local_10 = 0;
      }
      else {
        if ((local_6 == 0) && ((local_8 & 8) != 0)) {
          local_10 = 1;
        }
        else {
          local_10 = 0;
        }
      }
    }
  }
  return local_10;
}



// Library Function - Single Match
//  __allmul
// 
// Library: Visual Studio 2003 Debug

ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return (ulonglong)param_1 * (ulonglong)param_3 & 0xffffffff |
         (ulonglong)
         ((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
         param_2 * param_3 + param_1 * param_4) << 0x20;
}



// Library Function - Single Match
//  _fclose
// 
// Library: Visual Studio 2003 Debug

int __cdecl _fclose(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  int local_c;
  
  local_c = -1;
  if ((_File->_flag & 0x40U) == 0) {
    if (_File == (FILE *)0x0) {
      iVar2 = __CrtDbgReport(2,"fclose.c",0x71,(char *)0x0,"str != NULL");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
    if ((_File->_flag & 0x83U) != 0) {
      local_c = __flush(_File);
      __freebuf(_File);
      iVar2 = __close(_File->_file);
      if (iVar2 < 0) {
        local_c = -1;
      }
      else {
        if (_File->_tmpfname != (char *)0x0) {
          __free_dbg(_File->_tmpfname,(uint)_File->_tmpfname,(int *)0x2);
          _File->_tmpfname = (char *)0x0;
        }
      }
    }
    _File->_flag = 0;
  }
  else {
    _File->_flag = 0;
    local_c = -1;
  }
  return local_c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __commit
// 
// Library: Visual Studio 2003 Debug

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_8;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 != 0) {
      _DAT_00429630 = local_8;
      _DAT_0042962c = 9;
      local_8 = 0xffffffff;
    }
  }
  else {
    _DAT_0042962c = 9;
    local_8 = 0xffffffff;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __close
// 
// Library: Visual Studio 2003 Debug

int __cdecl __close(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  int iVar4;
  DWORD local_8;
  
  if ((DAT_0042af94 <= (uint)_FileHandle) ||
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) == 0)) {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
    return -1;
  }
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if ((_FileHandle == 1) || (_FileHandle == 2)) {
      iVar1 = __get_osfhandle(1);
      iVar2 = __get_osfhandle(2);
      if (iVar1 == iVar2) goto LAB_00422f77;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_00422f89;
    }
  }
LAB_00422f77:
  local_8 = 0;
LAB_00422f89:
  __free_osfhnd(_FileHandle);
  *(undefined *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) = 0;
  if (local_8 == 0) {
    iVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    iVar4 = -1;
  }
  return iVar4;
}



// Library Function - Single Match
//  __freebuf
// 
// Library: Visual Studio 2003 Debug

void __cdecl __freebuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  void *this;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_freebuf.c",0x30,(char *)0x0,"stream != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((_File->_flag & 0x83U) != 0) && (this = (void *)(_File->_flag & 8), this != (void *)0x0)) {
    __free_dbg(this,(uint)_File->_base,(int *)0x2);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x0042314e. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


