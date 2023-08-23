typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

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
    char pdbpath[96];
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

typedef BOOL (* PHANDLER_ROUTINE)(DWORD);

typedef char * va_list;

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
  FILE FStack_30;
  FILE *pFStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  pFStack_10 = &FStack_30;
  puStack_8 = (undefined4 *)&stack0x00000010;
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
  pFStack_10->_cnt = _Count;
  pFStack_10->_flag = 0x42;
  pFStack_10->_base = _Dest;
  pFStack_10->_ptr = _Dest;
  iStack_c = __output(pFStack_10,(byte *)_Format,puStack_8);
  if (_Dest != (char *)0x0) {
    pFStack_10->_cnt = pFStack_10->_cnt + -1;
    if (pFStack_10->_cnt < 0) {
      __flsbuf(0,pFStack_10);
    }
    else {
      *pFStack_10->_ptr = '\0';
      pFStack_10->_ptr = pFStack_10->_ptr + 1;
    }
  }
  return iStack_c;
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
  int **ppiStack_1c;
  char *pcStack_14;
  LPWCH pWStack_10;
  LPWCH pWStack_c;
  
  pWStack_c = (LPWCH)0x0;
  if (_DAT_004297d4 == 0) {
    pWStack_c = GetEnvironmentStringsW();
    if (pWStack_c == (LPWCH)0x0) {
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
    if ((pWStack_c == (LPWCH)0x0) && (pWStack_c = GetEnvironmentStringsW(), pWStack_c == (LPWCH)0x0)
       ) {
      ppiStack_1c = (int **)0x0;
    }
    else {
      pWStack_10 = pWStack_c;
      pWVar2 = pWStack_10;
      while (pWStack_10 = pWVar2, *pWStack_10 != L'\0') {
        pWVar2 = pWStack_10 + 1;
        if (pWStack_10[1] == L'\0') {
          pWVar2 = pWStack_10 + 2;
        }
      }
      iVar4 = ((int)pWStack_10 - (int)pWStack_c >> 1) + 1;
      cbMultiByte = (int *)WideCharToMultiByte(0,0,pWStack_c,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,
                                               (LPBOOL)0x0);
      if ((cbMultiByte == (int *)0x0) ||
         (ppiStack_1c = __malloc_dbg(cbMultiByte,(int *)0x2,(int *)"a_env.c",(int *)0x61),
         ppiStack_1c == (int **)0x0)) {
        FreeEnvironmentStringsW(pWStack_c);
        ppiStack_1c = (int **)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,pWStack_c,iVar4,(LPSTR)ppiStack_1c,(int)cbMultiByte,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar4 == 0) {
          __free_dbg(ppiStack_1c,(uint)ppiStack_1c,(int *)0x2);
          ppiStack_1c = (int **)0x0;
        }
        FreeEnvironmentStringsW(pWStack_c);
      }
    }
  }
  else if ((_DAT_004297d4 == 2) || (_DAT_004297d4 == 0)) {
    _Src = GetEnvironmentStrings();
    pCVar1 = _Src;
    if (_Src == (LPCH)0x0) {
      ppiStack_1c = (int **)0x0;
    }
    else {
      while (pcStack_14 = pCVar1, *pcStack_14 != '\0') {
        pCVar1 = pcStack_14 + 1;
        if (pcStack_14[1] == '\0') {
          pCVar1 = pcStack_14 + 2;
        }
      }
      ppiStack_1c = __malloc_dbg((int *)(pcStack_14 + (1 - (int)_Src)),(int *)0x2,(int *)"a_env.c",
                                 (int *)0x8c);
      if (ppiStack_1c == (int **)0x0) {
        FreeEnvironmentStringsA(_Src);
        ppiStack_1c = (int **)0x0;
      }
      else {
        FID_conflict__memcpy(ppiStack_1c,_Src,(size_t)(pcStack_14 + (1 - (int)_Src)));
        FreeEnvironmentStringsA(_Src);
      }
    }
  }
  else {
    ppiStack_1c = (int **)0x0;
  }
  return ppiStack_1c;
}



int __cdecl __alloc_osfhnd(void)

{
  int **ppiStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_c = -1;
  iStack_8 = 0;
  do {
    if (0x3f < iStack_8) {
      return iStack_c;
    }
    if ((&DAT_0042afe0)[iStack_8] == 0) {
      ppiStack_10 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"osfinfo.c",(int *)0x85);
      if (ppiStack_10 == (int **)0x0) {
        return iStack_c;
      }
      (&DAT_0042afe0)[iStack_8] = ppiStack_10;
      DAT_0042af94 = DAT_0042af94 + 0x20;
      for (; ppiStack_10 < (int **)((&DAT_0042afe0)[iStack_8] + 0x100);
          ppiStack_10 = ppiStack_10 + 2) {
        *(undefined *)(ppiStack_10 + 1) = 0;
        *ppiStack_10 = (int *)0xffffffff;
        *(undefined *)((int)ppiStack_10 + 5) = 10;
      }
      return iStack_8 << 5;
    }
    for (ppiStack_10 = (int **)(&DAT_0042afe0)[iStack_8];
        ppiStack_10 < (undefined4 *)((&DAT_0042afe0)[iStack_8] + 0x100);
        ppiStack_10 = ppiStack_10 + 2) {
      if ((*(byte *)(ppiStack_10 + 1) & 1) == 0) {
        *ppiStack_10 = (int *)0xffffffff;
        iStack_c = iStack_8 * 0x20 + ((int)ppiStack_10 - (&DAT_0042afe0)[iStack_8] >> 3);
        break;
      }
    }
    if (iStack_c != -1) {
      return iStack_c;
    }
    iStack_8 = iStack_8 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __setmbcp(int _CodePage)

{
  UINT CodePage;
  BOOL BVar1;
  int iVar2;
  BYTE *pBStack_30;
  _cpinfo _Stack_2c;
  int iStack_18;
  uint uStack_14;
  byte *pbStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iStack_18 = DAT_00428eb0;
  CodePage = _getSystemCP(_CodePage);
  if (CodePage != DAT_0042ae44) {
    if (CodePage == 0) {
      _setSBCS();
      _setSBUpLow();
    }
    else {
      for (uStack_c = 0; uStack_c < 5; uStack_c = uStack_c + 1) {
        if (*(UINT *)(&DAT_00428d80 + uStack_c * 0x30) == CodePage) {
          for (uStack_14 = 0; uStack_14 < 0x101; uStack_14 = uStack_14 + 1) {
            (&DAT_0042ad40)[uStack_14] = 0;
          }
          for (uStack_8 = 0; uStack_8 < 4; uStack_8 = uStack_8 + 1) {
            for (pbStack_10 = &DAT_00428d90 + uStack_8 * 8 + uStack_c * 0x30;
                (*pbStack_10 != 0 && (pbStack_10[1] != 0)); pbStack_10 = pbStack_10 + 2) {
              for (uStack_14 = (uint)*pbStack_10; uStack_14 <= pbStack_10[1];
                  uStack_14 = uStack_14 + 1) {
                (&DAT_0042ad41)[uStack_14] = (&DAT_0042ad41)[uStack_14] | (&DAT_00428d78)[uStack_8];
              }
            }
          }
          _DAT_0042ad2c = 1;
          DAT_0042ae44 = CodePage;
          DAT_0042acb4 = _CPtoLCID(CodePage);
          for (uStack_8 = 0; uStack_8 < 6; uStack_8 = uStack_8 + 1) {
            *(undefined2 *)(&DAT_0042ae50 + uStack_8 * 2) =
                 *(undefined2 *)(&DAT_00428d84 + uStack_8 * 2 + uStack_c * 0x30);
          }
          _setSBUpLow();
          goto LAB_00419980;
        }
      }
      BVar1 = GetCPInfo(CodePage,&_Stack_2c);
      if (BVar1 == 1) {
        for (uStack_14 = 0; uStack_14 < 0x101; uStack_14 = uStack_14 + 1) {
          (&DAT_0042ad40)[uStack_14] = 0;
        }
        DAT_0042acb4 = 0;
        if (_Stack_2c.MaxCharSize < 2) {
          _DAT_0042ad2c = 0;
          DAT_0042ae44 = CodePage;
        }
        else {
          DAT_0042ae44 = CodePage;
          for (pBStack_30 = _Stack_2c.LeadByte; (*pBStack_30 != 0 && (pBStack_30[1] != 0));
              pBStack_30 = pBStack_30 + 2) {
            for (uStack_14 = (uint)*pBStack_30; uStack_14 <= pBStack_30[1];
                uStack_14 = uStack_14 + 1) {
              (&DAT_0042ad41)[uStack_14] = (&DAT_0042ad41)[uStack_14] | 4;
            }
          }
          for (uStack_14 = 1; uStack_14 < 0xff; uStack_14 = uStack_14 + 1) {
            (&DAT_0042ad41)[uStack_14] = (&DAT_0042ad41)[uStack_14] | 8;
          }
          DAT_0042acb4 = _CPtoLCID(DAT_0042ae44);
          _DAT_0042ad2c = 1;
        }
        for (uStack_8 = 0; uStack_8 < 6; uStack_8 = uStack_8 + 1) {
          *(undefined2 *)(&DAT_0042ae50 + uStack_8 * 2) = 0;
        }
        _setSBUpLow();
      }
      else if (_DAT_00429864 != 0) {
        _setSBCS();
        _setSBUpLow();
      }
    }
  }
LAB_00419980:
  iVar2 = ___security_check_cookie_4(iStack_18);
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
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
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
  byte *pbStack_18;
  int iStack_14;
  byte *pbStack_10;
  int iStack_c;
  int **ppiStack_8;
  
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  DAT_0042979c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_00429698,0x104);
  DAT_00429668 = &DAT_00429698;
  if ((DAT_0042b100 == (byte *)0x0) || (*DAT_0042b100 == 0)) {
    pbStack_18 = &DAT_00429698;
  }
  else {
    pbStack_18 = DAT_0042b100;
  }
  pbStack_10 = pbStack_18;
  _parse_cmdline(pbStack_18,(byte **)0x0,(byte *)0x0,&iStack_c,&iStack_14);
  ppiStack_8 = __malloc_dbg((int *)(iStack_14 + iStack_c * 4),(int *)0x2,(int *)"stdargv.c",
                            (int *)0x82);
  if (ppiStack_8 == (int **)0x0) {
    iVar1 = -1;
  }
  else {
    _parse_cmdline(pbStack_10,(byte **)ppiStack_8,(byte *)(ppiStack_8 + iStack_c),&iStack_c,
                   &iStack_14);
    _DAT_0042964c = iStack_c + -1;
    _DAT_00429650 = ppiStack_8;
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



int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  bool bVar1;
  HMODULE hModule;
  int iVar2;
  undefined auStack_1c [4];
  int iStack_18;
  int iStack_14;
  undefined auStack_10 [8];
  uint uStack_8;
  
  iStack_18 = 0;
  bVar1 = false;
  if (DAT_004298c4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_004298c4 = GetProcAddress(hModule,"MessageBoxA"), DAT_004298c4 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_004298c8 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_004298cc = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_00429638 == 2) &&
       (DAT_004298d4 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_004298d4 != (FARPROC)0x0)) {
      DAT_004298d0 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_004298d0 != (FARPROC)0x0) &&
     (((iStack_14 = (*DAT_004298d0)(), iStack_14 == 0 ||
       (iVar2 = (*DAT_004298d4)(iStack_14,1,auStack_10,0xc,auStack_1c), iVar2 == 0)) ||
      ((uStack_8 & 1) == 0)))) {
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
    if (DAT_004298c8 != (FARPROC)0x0) {
      iStack_18 = (*DAT_004298c8)();
    }
    if ((iStack_18 != 0) && (DAT_004298cc != (FARPROC)0x0)) {
      iStack_18 = (*DAT_004298cc)(iStack_18);
    }
  }
  iVar2 = (*DAT_004298c4)(iStack_18,_LpText,_LpCaption,_UType);
  return iVar2;
}



void __fastcall ___security_check_cookie_4(int param_1)

{
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if (param_1 == DAT_00428eb0) {
    return;
  }
  puStack_c = &DAT_00426a30;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  ___security_error_handler(1,0);
  uStack_8 = 0xffffffff;
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
  undefined4 uStack_10;
  undefined4 *puStack_8;
  
  if ((DAT_00428d4c & 1) == 0) {
    uStack_10 = 1;
  }
  else {
    iVar3 = __heapchk();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      uStack_10 = 1;
      for (puStack_8 = DAT_00429850; puStack_8 != (undefined4 *)0x0;
          puStack_8 = (undefined4 *)*puStack_8) {
        bVar2 = true;
        if (((((puStack_8[5] & 0xffff) == 4) || (puStack_8[5] == 1)) ||
            ((puStack_8[5] & 0xffff) == 2)) || (puStack_8[5] == 3)) {
          pcVar5 = (&PTR_DAT_00428d5c)[puStack_8[5] & 0xffff];
        }
        else {
          pcVar5 = "DAMAGED";
        }
        iVar3 = _CheckBytes((char *)(puStack_8 + 7),DAT_00428d58,4);
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
        iVar3 = _CheckBytes((char *)((int)puStack_8 + puStack_8[4] + 0x20),DAT_00428d58,4);
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
        if ((puStack_8[5] == 0) &&
           (iVar3 = _CheckBytes((char *)(puStack_8 + 8),DAT_00428d59,puStack_8[4]), iVar3 == 0)) {
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
          if ((puStack_8[2] != 0) &&
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
          uStack_10 = 0;
        }
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
      uStack_10 = 0;
    }
  }
  return uStack_10;
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
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
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
  int *piStack_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        piStack_8 = __heap_alloc_base(param_1);
      }
      else {
        piStack_8 = (int *)0x0;
      }
      if (piStack_8 != (int *)0x0) {
        return piStack_8;
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
  int iStack_30;
  int iStack_2c;
  int iStack_18;
  LPVOID pvStack_14;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iStack_30 = *(int *)(param_1 + 8);
  iStack_2c = 0;
  for (; -1 < iStack_30; iStack_30 = iStack_30 << 1) {
    iStack_2c = iStack_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + iStack_2c * 0x204;
  for (iStack_18 = 0; iStack_18 < 0x3f; iStack_18 = iStack_18 + 1) {
    iVar1 = iVar2 + iStack_18 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  lpAddress = (LPVOID)(iStack_2c * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iStack_2c = -1;
  }
  else {
    for (pvStack_14 = lpAddress; pvStack_14 <= (LPVOID)((int)lpAddress + 0x7000);
        pvStack_14 = (LPVOID)((int)pvStack_14 + 0x1000)) {
      *(undefined4 *)((int)pvStack_14 + 8) = 0xffffffff;
      *(undefined4 *)((int)pvStack_14 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)pvStack_14 + 0xc) = 0xff0;
      *(int *)((int)pvStack_14 + 0x10) = (int)pvStack_14 + 0x100c;
      *(int *)((int)pvStack_14 + 0x14) = (int)pvStack_14 + -0xff4;
      *(undefined4 *)((int)pvStack_14 + 0xff8) = 0xff0;
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + iStack_2c * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + iStack_2c * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = ~(0x80000000U >> ((byte)iStack_2c & 0x1f)) & *(uint *)(param_1 + 8);
  }
  return iStack_2c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LPVOID __cdecl __expand_base(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  LPVOID pvStack_8;
  
  if (param_2 < 0xffffffe1) {
    if (_DAT_0042af90 == 3) {
      puVar1 = (uint *)___sbh_find_block((int)param_1);
      if (((puVar1 != (uint *)0x0) && (pvStack_8 = (LPVOID)0x0, param_2 <= DAT_0042aca4)) &&
         (iVar2 = ___sbh_resize_block(puVar1,(int)param_1,param_2), iVar2 != 0)) {
        pvStack_8 = param_1;
      }
      if (puVar1 == (uint *)0x0) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        pvStack_8 = HeapReAlloc(DAT_0042af80,0x10,param_1,param_2 + 0xf & 0xfffffff0);
      }
    }
    else {
      if (param_2 == 0) {
        param_2 = 1;
      }
      pvStack_8 = HeapReAlloc(DAT_0042af80,0x10,param_1,param_2);
    }
  }
  else {
    pvStack_8 = (LPVOID)0x0;
  }
  return pvStack_8;
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
  uint uStack_8;
  
  _DAT_00429630 = param_1;
  uStack_8 = 0;
  while( true ) {
    if (0x2c < uStack_8) {
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
      return;
    }
    if (param_1 == *(ulong *)(&DAT_00429220 + uStack_8 * 8)) break;
    uStack_8 = uStack_8 + 1;
  }
  _DAT_0042962c = *(undefined4 *)(&DAT_00429224 + uStack_8 * 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl __ismbcspace(uint _Ch)

{
  BOOL BVar1;
  uint uStack_10;
  undefined uStack_c;
  undefined uStack_b;
  ushort uStack_8;
  short sStack_6;
  
  if (_Ch < 0x100) {
    if (DAT_00428ec4 < 2) {
      uStack_10 = __chvalidator(_Ch,8);
    }
    else {
      uStack_10 = __isctype(_Ch,8);
    }
  }
  else {
    uStack_8 = 0;
    sStack_6 = 0;
    uStack_c = (undefined)(_Ch >> 8);
    uStack_b = (undefined)_Ch;
    if (_DAT_0042ad2c == 0) {
      uStack_10 = 0;
    }
    else {
      BVar1 = ___crtGetStringTypeA
                        ((_locale_t)0x1,(DWORD)&uStack_c,(LPCSTR)0x2,(int)&uStack_8,DAT_0042ae44,
                         DAT_0042acb4,1);
      if (BVar1 == 0) {
        uStack_10 = 0;
      }
      else if ((sStack_6 == 0) && ((uStack_8 & 8) != 0)) {
        uStack_10 = 1;
      }
      else {
        uStack_10 = 0;
      }
    }
  }
  return uStack_10;
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



longlong __allmul(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



int __cdecl _fclose(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  int iStack_c;
  
  iStack_c = -1;
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
      iStack_c = __flush(_File);
      __freebuf(_File);
      iVar2 = __close(_File->_file);
      if (iVar2 < 0) {
        iStack_c = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        __free_dbg(_File->_tmpfname,(uint)_File->_tmpfname,(int *)0x2);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  else {
    _File->_flag = 0;
    iStack_c = -1;
  }
  return iStack_c;
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
  char *pcStack_428;
  DWORD DStack_424;
  DWORD DStack_420;
  DWORD DStack_41c;
  char *pcStack_418;
  char acStack_414 [1036];
  int iStack_8;
  
  iStack_8 = DAT_00428eb0;
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar3 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    DStack_41c = 0;
    if (_MaxCharCount != 0) {
      if ((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x20) != 0) {
        __lseeki64(_FileHandle,0,2);
      }
      if (((int)*(char *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x80U) == 0) {
        BVar2 = WriteFile(*(HANDLE *)((&DAT_0042afe0)[iVar3] + (_FileHandle & 0x1fU) * 8),_Buf,
                          _MaxCharCount,&DStack_424,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          DStack_420 = GetLastError();
        }
        else {
          DStack_420 = 0;
          DStack_41c = DStack_424;
        }
      }
      else {
        pcStack_418 = (char *)_Buf;
        DStack_420 = 0;
        do {
          if (_MaxCharCount <= (uint)((int)pcStack_418 - (int)_Buf)) break;
          pcStack_428 = acStack_414;
          while (((int)pcStack_428 - (int)acStack_414 < 0x400 &&
                 ((uint)((int)pcStack_418 - (int)_Buf) < _MaxCharCount))) {
            cVar1 = *pcStack_418;
            pcStack_418 = pcStack_418 + 1;
            if (cVar1 == '\n') {
              *pcStack_428 = '\r';
              pcStack_428 = pcStack_428 + 1;
            }
            *pcStack_428 = cVar1;
            pcStack_428 = pcStack_428 + 1;
          }
          BVar2 = WriteFile(*(HANDLE *)((&DAT_0042afe0)[iVar3] + (_FileHandle & 0x1fU) * 8),
                            acStack_414,(int)pcStack_428 - (int)acStack_414,&DStack_424,
                            (LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            DStack_420 = GetLastError();
            break;
          }
          DStack_41c = DStack_41c + DStack_424;
        } while ((int)pcStack_428 - (int)acStack_414 <= (int)DStack_424);
      }
      if (DStack_41c == 0) {
        if (DStack_420 == 0) {
                    // WARNING: Load size is inaccurate
          if (((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40) == 0) ||
             (*_Buf != '\x1a')) {
            _DAT_0042962c = 0x1c;
            _DAT_00429630 = 0;
          }
        }
        else if (DStack_420 == 5) {
          _DAT_0042962c = 9;
          _DAT_00429630 = DStack_420;
        }
        else {
          __dosmaperr(DStack_420);
        }
      }
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
  }
  iVar3 = ___security_check_cookie_4(iStack_8);
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
  DWORD DStack_10;
  
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
        DStack_10 = GetLastError();
      }
      else {
        DStack_10 = 0;
      }
      if (DStack_10 == 0) {
        *(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) =
             *(byte *)((&DAT_0042afe0)[iVar2] + 4 + (_FileHandle & 0x1fU) * 8) & 0xfd;
      }
      else {
        __dosmaperr(DStack_10);
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



int __cdecl _atexit(_func_4879 *param_1)

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
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
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
  uint uStack_24;
  uint uStack_20;
  
  if (param_1 == (void *)0x0) {
    pvVar2 = (void *)__aligned_offset_malloc_dbg(param_2,param_3,param_4,param_5,param_6);
  }
  else if (param_2 == 0) {
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
          uStack_24 = sVar4 - ((int)param_1 - (int)*this);
          if (param_3 < 5) {
            uStack_20 = 4;
          }
          else {
            uStack_20 = param_3;
          }
          uStack_20 = uStack_20 - 1;
          uVar6 = -param_4 & 3;
          ppiVar5 = __malloc_dbg((int *)(uVar6 + param_2 + 8 + uStack_20),(int *)0x1,param_5,param_6
                                );
          if (ppiVar5 == (int **)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = (void *)(((int)ppiVar5 + param_4 + uVar6 + uStack_20 + 8 & ~uStack_20) -
                             param_4);
            _memset((void *)((int)pvVar2 + (-4 - uVar6)),(uint)DAT_00428d5b,4);
            *(int ***)((int)pvVar2 + (-8 - uVar6)) = ppiVar5;
            if (param_2 < uStack_24) {
              uStack_24 = param_2;
            }
            FID_conflict__memcpy(pvVar2,param_1,uStack_24);
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
  return pvVar2;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

void __cdecl __CrtDbgReport(int param_1,undefined1 *param_2,int param_3,char *param_4,char *param_5)

{
  LONG LVar1;
  size_t nNumberOfBytesToWrite;
  int iVar2;
  undefined4 *puVar3;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  char *pcStack_303c;
  char *pcStack_3038;
  char acStack_3034 [20];
  DWORD DStack_3020;
  int iStack_301c;
  HMODULE pHStack_3018;
  undefined uStack_3014;
  undefined4 uStack_3013;
  undefined uStack_2014;
  undefined4 uStack_2013;
  undefined uStack_1014;
  undefined4 uStack_1013;
  int iStack_10;
  undefined4 uStack_c;
  va_list pcStack_8;
  
  iStack_10 = DAT_00428eb0;
  uStack_2014 = 0;
  puVar3 = &uStack_2013;
  for (iVar2 = 0x3ff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  uStack_1014 = '\0';
  puVar3 = &uStack_1013;
  for (iVar2 = 0x3ff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  uStack_3014 = '\0';
  puVar3 = &uStack_3013;
  for (iVar2 = 0x3ff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  pcStack_8 = &stack0x00000018;
  if ((-1 < param_1) && (param_1 < 3)) {
    if ((param_1 == 2) && (LVar1 = InterlockedIncrement((LONG *)&DAT_00428d18), 0 < LVar1)) {
      if ((DAT_004297dc != (FARPROC)0x0) ||
         ((pHStack_3018 = LoadLibraryA("user32.dll"), pHStack_3018 != (HMODULE)0x0 &&
          (DAT_004297dc = GetProcAddress(pHStack_3018,"wsprintfA"), DAT_004297dc != (FARPROC)0x0))))
      {
        (*DAT_004297dc)(&uStack_1014,"Second Chance Assertion Failed: File %s, Line %d\n",param_2,
                        param_3);
        OutputDebugStringA(&uStack_1014);
        InterlockedDecrement((LONG *)&DAT_00428d18);
        __CrtDbgBreak();
      }
    }
    else {
      if ((param_5 != (char *)0x0) &&
         (iVar2 = __vsnprintf(&uStack_3014,0xfeb,param_5,pcStack_8), iVar2 < 0)) {
        thunk_FUN_0041a040((uint *)&uStack_3014,(uint *)"_CrtDbgReport: String too long or IO Error"
                          );
      }
      if (param_1 == 2) {
        if (param_5 == (char *)0x0) {
          pcStack_3038 = "Assertion failed!";
        }
        else {
          pcStack_3038 = "Assertion failed: ";
        }
        thunk_FUN_0041a040((uint *)&uStack_2014,(uint *)pcStack_3038);
      }
      thunk_FUN_0041a050((uint *)&uStack_2014,(uint *)&uStack_3014);
      if (param_1 == 2) {
        if ((uRam00428d24 & 1) != 0) {
          thunk_FUN_0041a050((uint *)&uStack_2014,(uint *)&DAT_00425be0);
        }
        thunk_FUN_0041a050((uint *)&uStack_2014,(uint *)&DAT_00425bdc);
      }
      if (param_2 == (undefined1 *)0x0) {
        thunk_FUN_0041a040((uint *)&uStack_1014,(uint *)&uStack_2014);
      }
      else {
        iVar2 = __snprintf(&uStack_1014,0x1000,"%s(%d) : %s",param_2,param_3,&uStack_2014);
        if (iVar2 < 0) {
          thunk_FUN_0041a040((uint *)&uStack_1014,
                             (uint *)"_CrtDbgReport: String too long or IO Error");
        }
      }
      if (DAT_0042af7c != 0) {
        for (iStack_301c = DAT_0042af7c; iStack_301c != 0; iStack_301c = *(int *)(iStack_301c + 4))
        {
          iVar2 = (**(code **)(iStack_301c + 0xc))(param_1,&uStack_1014,&uStack_c);
          if (iVar2 != 0) {
            if (param_1 == 2) {
              InterlockedDecrement((LONG *)&DAT_00428d18);
            }
            goto LAB_00415772;
          }
        }
      }
      if ((DAT_0042af6c == (code *)0x0) ||
         (iVar2 = (*DAT_0042af6c)(param_1,&uStack_1014,&uStack_c), iVar2 == 0)) {
        if (((*(uint *)(&DAT_00428d1c + param_1 * 4) & 1) != 0) &&
           (*(int *)(&DAT_00428d28 + param_1 * 4) != -1)) {
          lpOverlapped = (LPOVERLAPPED)0x0;
          lpNumberOfBytesWritten = &DStack_3020;
          nNumberOfBytesToWrite = _strlen(&uStack_1014);
          WriteFile(*(HANDLE *)(&DAT_00428d28 + param_1 * 4),&uStack_1014,nNumberOfBytesToWrite,
                    lpNumberOfBytesWritten,lpOverlapped);
        }
        if ((*(uint *)(&DAT_00428d1c + param_1 * 4) & 2) != 0) {
          OutputDebugStringA(&uStack_1014);
        }
        if ((*(uint *)(&DAT_00428d1c + param_1 * 4) & 4) == 0) {
          if (param_1 == 2) {
            InterlockedDecrement((LONG *)&DAT_00428d18);
          }
        }
        else {
          if (param_3 == 0) {
            pcStack_303c = (char *)0x0;
          }
          else {
            pcStack_303c = __itoa(param_3,acStack_3034,10);
          }
          uStack_c = _CrtMessageWindow(param_1,param_2,pcStack_303c,param_4,&uStack_3014);
          if (param_1 == 2) {
            InterlockedDecrement((LONG *)&DAT_00428d18);
          }
        }
      }
      else if (param_1 == 2) {
        InterlockedDecrement((LONG *)&DAT_00428d18);
      }
    }
  }
LAB_00415772:
  ___security_check_cookie_4(iStack_10);
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
  uint uStack_18;
  
  if ((param_2 - 1 & param_2) == 0) {
    if ((param_3 < param_1) || (param_3 == 0)) {
      if (param_2 < 5) {
        uStack_18 = 4;
      }
      else {
        uStack_18 = param_2;
      }
      uStack_18 = uStack_18 - 1;
      uVar4 = -param_3 & 3;
      ppiVar3 = __malloc_dbg((int *)(uVar4 + param_1 + 8 + uStack_18),(int *)0x1,param_4,param_5);
      if (ppiVar3 == (int **)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((int)ppiVar3 + param_3 + uVar4 + uStack_18 + 8 & ~uStack_18) - param_3;
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
  void *pvStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_004149bc;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    uStack_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = uStack_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00414a72();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



uint __cdecl ___sbh_find_block(int param_1)

{
  uint uStack_c;
  
  uStack_c = DAT_0042aca0;
  while( true ) {
    if (DAT_0042ac9c * 0x14 + DAT_0042aca0 <= uStack_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uStack_c + 0xc)) < 0x100000) break;
    uStack_c = uStack_c + 0x14;
  }
  return uStack_c;
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



undefined4 ___sbh_heap_check(void)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  byte bVar4;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  uint uStack_160;
  int aiStack_15c [65];
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  LPVOID pvStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  uint uStack_40;
  uint *puStack_3c;
  uint uStack_38;
  uint *puStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint *puStack_14;
  uint uStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  BVar2 = IsBadWritePtr(DAT_0042aca0,DAT_0042ac9c * 0x14);
  if (BVar2 == 0) {
    puStack_3c = DAT_0042aca0;
    for (iStack_170 = 0; iStack_170 < DAT_0042ac9c; iStack_170 = iStack_170 + 1) {
      pvStack_4c = (LPVOID)puStack_3c[4];
      BVar2 = IsBadWritePtr(pvStack_4c,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      puStack_14 = (uint *)puStack_3c[3];
      puStack_48 = (uint *)((int)pvStack_4c + 0x144);
      uStack_160 = puStack_3c[2];
      uStack_38 = 0;
      uStack_54 = 0;
      for (iStack_20 = 0; iStack_20 < 0x20; iStack_20 = iStack_20 + 1) {
        uStack_10 = 0;
        uStack_8 = 0;
        uStack_18 = 0;
        for (iStack_16c = 0; iStack_16c < 0x40; iStack_16c = iStack_16c + 1) {
          aiStack_15c[iStack_16c] = 0;
        }
        if (-1 < (int)uStack_160) {
          BVar2 = IsBadWritePtr(puStack_14,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          puStack_2c = puStack_14;
          for (iStack_1c = 0; iStack_1c < 8; iStack_1c = iStack_1c + 1) {
            puStack_28 = puStack_2c + 3;
            puStack_34 = puStack_2c + 0x3ff;
            if ((puStack_2c[2] != 0xffffffff) || (puStack_2c[0x3ff] != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *puStack_28;
              uStack_40 = uVar1;
              if ((uVar1 & 1) == 0) {
                iStack_16c = ((int)uVar1 >> 4) + -1;
                if (0x3f < iStack_16c) {
                  iStack_16c = 0x3f;
                }
                aiStack_15c[iStack_16c] = aiStack_15c[iStack_16c] + 1;
              }
              else {
                uStack_40 = uVar1 - 1;
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                uStack_18 = uStack_18 + 1;
              }
              if ((((int)uStack_40 < 0x10) || ((uStack_40 & 0xf) != 0)) || (0xff0 < (int)uStack_40))
              {
                return 0xfffffff9;
              }
              if (*(uint *)((int)puStack_28 + (uStack_40 - 4)) != uVar1) {
                return 0xfffffff8;
              }
              puStack_28 = (uint *)((int)puStack_28 + uStack_40);
            } while (puStack_28 < puStack_34);
            if (puStack_28 != puStack_34) {
              return 0xfffffff8;
            }
            puStack_2c = puStack_2c + 0x400;
          }
          if (*puStack_48 != uStack_18) {
            return 0xfffffff7;
          }
          puStack_44 = puStack_48;
          for (iStack_168 = 0; iStack_168 < 0x40; iStack_168 = iStack_168 + 1) {
            iStack_58 = 0;
            puStack_28 = puStack_44;
            while( true ) {
              puStack_c = (uint *)puStack_28[1];
              if ((puStack_c == puStack_44) || (iStack_58 == aiStack_15c[iStack_168])) break;
              if ((puStack_c < puStack_14) || (puStack_14 + 0x2000 <= puStack_c)) {
                return 0xfffffff6;
              }
              uStack_50 = (uint)puStack_c & 0xfffff000;
              puStack_24 = (uint *)(uStack_50 + 0xffc);
              for (puStack_30 = (uint *)(uStack_50 + 0xc);
                  (puStack_30 != puStack_24 && (puStack_30 != puStack_c));
                  puStack_30 = (uint *)((*puStack_30 & 0xfffffffe) + (int)puStack_30)) {
              }
              if (puStack_30 == puStack_24) {
                return 0xfffffff5;
              }
              iStack_16c = ((int)*puStack_c >> 4) + -1;
              if (0x3f < iStack_16c) {
                iStack_16c = 0x3f;
              }
              if (iStack_16c != iStack_168) {
                return 0xfffffff4;
              }
              if ((uint *)puStack_c[2] != puStack_28) {
                return 0xfffffff3;
              }
              puStack_28 = puStack_c;
              iStack_58 = iStack_58 + 1;
            }
            if (iStack_58 != 0) {
              bVar4 = (byte)iStack_168;
              if (iStack_168 < 0x20) {
                uStack_10 = 0x80000000U >> (bVar4 & 0x1f) | uStack_10;
                uStack_38 = 0x80000000U >> (bVar4 & 0x1f) | uStack_38;
              }
              else {
                uStack_8 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | uStack_8;
                uStack_54 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | uStack_54;
              }
            }
            if (((uint *)puStack_28[1] != puStack_44) || (iStack_58 != aiStack_15c[iStack_168])) {
              return 0xfffffff2;
            }
            if ((uint *)puStack_44[2] != puStack_28) {
              return 0xfffffff1;
            }
            puStack_44 = puStack_44 + 2;
          }
        }
        if ((uStack_10 != *(uint *)((int)pvStack_4c + iStack_20 * 4 + 0x44)) ||
           (uStack_8 != *(uint *)((int)pvStack_4c + iStack_20 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        puStack_14 = puStack_14 + 0x2000;
        puStack_48 = puStack_48 + 0x81;
        uStack_160 = uStack_160 << 1;
      }
      if ((uStack_38 != *puStack_3c) || (uStack_54 != puStack_3c[1])) {
        return 0xffffffef;
      }
      puStack_3c = puStack_3c + 5;
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
  int iStack_34;
  uint uStack_30;
  uint uStack_c;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar10 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  iStack_34 = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + iStack_34);
  uVar4 = *puVar7;
  if (iStack_34 < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(iStack_34 + uVar4) < (int)uVar5)) {
      return 0;
    }
    uStack_c = ((int)uVar4 >> 4) - 1;
    if (0x3f < uStack_c) {
      uStack_c = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar8 = (byte)uStack_c;
      if (uStack_c < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        *(char *)(uVar3 + uStack_c + 4) = *(char *)(uVar3 + uStack_c + 4) + -1;
        if (*(char *)(uVar3 + uStack_c + 4) == '\0') {
          *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        *(char *)(uVar3 + uStack_c + 4) = *(char *)(uVar3 + uStack_c + 4) + -1;
        if (*(char *)(uVar3 + uStack_c + 4) == '\0') {
          param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar9 = (iStack_34 + uVar4) - uVar5;
    if (0 < iVar9) {
      piVar11 = (int *)((int)piVar6 + uVar5);
      uStack_c = (iVar9 >> 4) - 1;
      if (0x3f < uStack_c) {
        uStack_c = 0x3f;
      }
      iVar1 = iVar1 + uStack_c * 8;
      piVar11[1] = *(int *)(iVar1 + 4);
      piVar11[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar11;
      *(int **)(piVar11[1] + 8) = piVar11;
      if (piVar11[1] == piVar11[2]) {
        bVar8 = (byte)uStack_c;
        if (uStack_c < 0x20) {
          cVar2 = *(char *)(uVar3 + uStack_c + 4);
          *(char *)(uVar3 + uStack_c + 4) = *(char *)(uVar3 + uStack_c + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        }
        else {
          cVar2 = *(char *)(uVar3 + uStack_c + 4);
          *(char *)(uVar3 + uStack_c + 4) = *(char *)(uVar3 + uStack_c + 4) + '\x01';
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
  else if ((int)uVar5 < iStack_34) {
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
    piVar6 = (int *)((int)piVar6 + uVar5);
    iStack_34 = iStack_34 - uVar5;
    uStack_30 = (iStack_34 >> 4) - 1;
    if (0x3f < uStack_30) {
      uStack_30 = 0x3f;
    }
    if ((uVar4 & 1) == 0) {
      uStack_c = ((int)uVar4 >> 4) - 1;
      if (0x3f < uStack_c) {
        uStack_c = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)uStack_c;
        if (uStack_c < 0x20) {
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
          *(char *)(uVar3 + uStack_c + 4) = *(char *)(uVar3 + uStack_c + 4) + -1;
          if (*(char *)(uVar3 + uStack_c + 4) == '\0') {
            *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
          }
        }
        else {
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
          *(char *)(uVar3 + uStack_c + 4) = *(char *)(uVar3 + uStack_c + 4) + -1;
          if (*(char *)(uVar3 + uStack_c + 4) == '\0') {
            param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      iStack_34 = iStack_34 + uVar4;
      uStack_30 = (iStack_34 >> 4) - 1;
      if (0x3f < uStack_30) {
        uStack_30 = 0x3f;
      }
    }
    iVar1 = iVar1 + uStack_30 * 8;
    piVar6[1] = *(int *)(iVar1 + 4);
    piVar6[2] = iVar1;
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)(piVar6[1] + 8) = piVar6;
    if (piVar6[1] == piVar6[2]) {
      bVar8 = (byte)uStack_30;
      if (uStack_30 < 0x20) {
        cVar2 = *(char *)(uVar3 + uStack_30 + 4);
        *(char *)(uVar3 + uStack_30 + 4) = *(char *)(uVar3 + uStack_30 + 4) + '\x01';
        if (cVar2 == '\0') {
          *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
        }
        *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
             0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
      }
      else {
        cVar2 = *(char *)(uVar3 + uStack_30 + 4);
        *(char *)(uVar3 + uStack_30 + 4) = *(char *)(uVar3 + uStack_30 + 4) + '\x01';
        if (cVar2 == '\0') {
          param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
        }
        *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
             0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
      }
    }
    *piVar6 = iStack_34;
    *(int *)((int)piVar6 + iStack_34 + -4) = iStack_34;
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
    else if (_DAT_0042af90 == 3) {
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
  return BVar1;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe

void __cdecl ___security_error_handler(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  char *pcStack_140;
  uint auStack_13c [65];
  undefined uStack_38;
  int iStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00427368;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  iStack_30 = DAT_00428eb0;
  puStack_1c = &stack0xfffffeac;
  if (DAT_0042992c == (code *)0x0) {
    if (param_1 == 1) {
      pcStack_140 = "Buffer overrun detected!";
      pcStack_24 = 
      "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n"
      ;
      uStack_20 = 0xb9;
    }
    else {
      pcStack_140 = "Unknown security failure detected!";
      pcStack_24 = 
      "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n"
      ;
      uStack_20 = 0xd4;
    }
    ExceptionList = &pvStack_14;
    iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_38 = 0;
    DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)auStack_13c,0x104);
    if (DVar3 == 0) {
      thunk_FUN_0041a040(auStack_13c,(uint *)"<program name unknown>");
    }
    puStack_2c = auStack_13c;
    sVar4 = _strlen((char *)auStack_13c);
    if (0x3c < sVar4 + 0xb) {
      sVar4 = _strlen((char *)auStack_13c);
      puStack_2c = (uint *)((int)puStack_2c + (sVar4 - 0x31));
      _strncpy((char *)puStack_2c,"...",3);
    }
    _strlen((char *)puStack_2c);
    puStack_28 = (uint *)&stack0xfffffeac;
    puStack_1c = &stack0xfffffeac;
    thunk_FUN_0041a040((uint *)&stack0xfffffeac,(uint *)pcStack_140);
    thunk_FUN_0041a050(puStack_28,(uint *)&DAT_00425b54);
    thunk_FUN_0041a050(puStack_28,(uint *)"Program: ");
    thunk_FUN_0041a050(puStack_28,puStack_2c);
    thunk_FUN_0041a050(puStack_28,(uint *)&DAT_00425b54);
    thunk_FUN_0041a050(puStack_28,(uint *)pcStack_24);
    ___crtMessageBoxA((LPCSTR)puStack_28,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    uStack_8 = 0;
    ExceptionList = &pvStack_14;
    puStack_1c = &stack0xfffffeac;
    (*DAT_0042992c)(param_1,param_2);
    uStack_8 = 0xffffffff;
  }
  __exit(3);
  ExceptionList = pvStack_14;
  ___security_check_cookie_4(iStack_30);
  return;
}



undefined4 thunk_FUN_00411b80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_c4 [48];
  
  puVar2 = auStack_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
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
  int iStack_8;
  
  iStack_8 = -2;
  if (_DAT_0042af90 == 3) {
    iVar1 = ___sbh_heap_check();
    if (iVar1 < 0) {
      iStack_8 = -4;
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
      iStack_8 = -4;
    }
  }
  return iStack_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __cdecl __realloc_base(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uStack_1c;
  uint uStack_18;
  uint *puStack_14;
  int *piStack_8;
  
  if (param_1 == (int *)0x0) {
    piVar1 = __malloc_base(param_2);
  }
  else if (param_2 == 0) {
    __free_base(param_1);
    piVar1 = (int *)0x0;
  }
  else if (_DAT_0042af90 == 3) {
    do {
      piStack_8 = (int *)0x0;
      if (param_2 < 0xffffffe1) {
        puStack_14 = (uint *)___sbh_find_block((int)param_1);
        if (puStack_14 != (uint *)0x0) {
          if (param_2 <= DAT_0042aca4) {
            iVar2 = ___sbh_resize_block(puStack_14,(int)param_1,param_2);
            if (iVar2 == 0) {
              piStack_8 = ___sbh_alloc_block(param_2);
              if (piStack_8 != (int *)0x0) {
                uStack_18 = param_1[-1] - 1;
                if (param_2 <= uStack_18) {
                  uStack_18 = param_2;
                }
                FID_conflict__memcpy(piStack_8,param_1,uStack_18);
                puStack_14 = (uint *)___sbh_find_block((int)param_1);
                ___sbh_free_block(puStack_14,(int)param_1);
              }
            }
            else {
              piStack_8 = param_1;
            }
          }
          if (piStack_8 == (int *)0x0) {
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            piStack_8 = (int *)HeapAlloc(DAT_0042af80,0,param_2);
            if (piStack_8 != (int *)0x0) {
              uStack_1c = param_2;
              if (param_1[-1] - 1U < param_2) {
                uStack_1c = param_1[-1] - 1U;
              }
              FID_conflict__memcpy(piStack_8,param_1,uStack_1c);
              ___sbh_free_block(puStack_14,(int)param_1);
            }
          }
        }
        if (puStack_14 == (uint *)0x0) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          param_2 = param_2 + 0xf & 0xfffffff0;
          piStack_8 = (int *)HeapReAlloc(DAT_0042af80,0,param_1,param_2);
        }
      }
      if (piStack_8 != (int *)0x0) {
        return piStack_8;
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
      piStack_8 = (int *)0x0;
      if (param_2 < 0xffffffe1) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        piStack_8 = (int *)HeapReAlloc(DAT_0042af80,0,param_1,param_2);
      }
      if (piStack_8 != (int *)0x0) {
        return piStack_8;
      }
      if (DAT_004298f4 == 0) {
        return (int *)0x0;
      }
      iVar2 = __callnewh(param_2);
    } while (iVar2 != 0);
    piVar1 = (int *)0x0;
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
  undefined4 uStack_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f) & *(uint *)(param_1 + 8)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    uStack_10 = 1;
  }
  else {
    uStack_10 = 0;
  }
  return uStack_10;
}



void __cdecl ___crtExitProcess(int param_1)

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
  uint auStack_124 [65];
  undefined uStack_20;
  int iStack_18;
  uint *puStack_14;
  undefined *puStack_10;
  DWORD DStack_c;
  uint uStack_8;
  
  iStack_18 = DAT_00428eb0;
  for (uStack_8 = 0; (uStack_8 < 0x13 && (param_1 != *(int *)(&DAT_00428c60 + uStack_8 * 8)));
      uStack_8 = uStack_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_00428c60 + uStack_8 * 8)) {
    if (((param_1 != 0xfc) && (param_1 != 0xff)) &&
       (iVar2 = __CrtDbgReport(1,(undefined1 *)0x0,0,(char *)0x0,
                               (&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack_8 * 2]),
       iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((_DAT_00429604 == 1) || ((_DAT_00429604 == 0 && (_DAT_00428b44 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &DStack_c;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack_8 * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack_8 * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      uStack_20 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)auStack_124,0x104);
      if (DVar4 == 0) {
        thunk_FUN_0041a040(auStack_124,(uint *)"<program name unknown>");
      }
      puStack_14 = auStack_124;
      sVar3 = _strlen((char *)puStack_14);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)auStack_124);
        puStack_14 = (uint *)((int)puStack_14 + (sVar3 - 0x3b));
        _strncpy((char *)puStack_14,"...",3);
      }
      sVar3 = _strlen((char *)puStack_14);
      sVar5 = _strlen((&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack_8 * 2]);
      iVar2 = -(sVar3 + sVar5 + 0x1f & 0xfffffffc);
      puStack_10 = (undefined *)((int)auStack_124 + iVar2 + -8);
      *(char **)((int)auStack_124 + iVar2 + -0xc) = "Runtime Error!\n\nProgram: ";
      *(undefined **)((int)auStack_124 + iVar2 + -0x10) = puStack_10;
      *(undefined4 *)((int)auStack_124 + iVar2 + -0x14) = 0x414e7a;
      thunk_FUN_0041a040(*(uint **)((int)auStack_124 + iVar2 + -0x10),
                         *(uint **)((int)auStack_124 + iVar2 + -0xc));
      *(uint **)((int)auStack_124 + iVar2 + -0xc) = puStack_14;
      *(undefined **)((int)auStack_124 + iVar2 + -0x10) = puStack_10;
      *(undefined4 *)((int)auStack_124 + iVar2 + -0x14) = 0x414e8a;
      thunk_FUN_0041a050(*(uint **)((int)auStack_124 + iVar2 + -0x10),
                         *(uint **)((int)auStack_124 + iVar2 + -0xc));
      *(undefined **)((int)auStack_124 + iVar2 + -0xc) = &DAT_00425b54;
      *(undefined **)((int)auStack_124 + iVar2 + -0x10) = puStack_10;
      *(undefined4 *)((int)auStack_124 + iVar2 + -0x14) = 0x414e9b;
      thunk_FUN_0041a050(*(uint **)((int)auStack_124 + iVar2 + -0x10),
                         *(uint **)((int)auStack_124 + iVar2 + -0xc));
      *(undefined **)((int)auStack_124 + iVar2 + -0xc) =
           (&PTR_s_R6002___floating_point_not_loade_00428c64)[uStack_8 * 2];
      *(undefined **)((int)auStack_124 + iVar2 + -0x10) = puStack_10;
      *(undefined4 *)((int)auStack_124 + iVar2 + -0x14) = 0x414eb2;
      thunk_FUN_0041a050(*(uint **)((int)auStack_124 + iVar2 + -0x10),
                         *(uint **)((int)auStack_124 + iVar2 + -0xc));
      *(undefined4 *)((int)auStack_124 + iVar2 + -0xc) = 0x12010;
      *(char **)((int)auStack_124 + iVar2 + -0x10) = "Microsoft Visual C++ Runtime Library";
      *(undefined **)((int)auStack_124 + iVar2 + -0x14) = puStack_10;
      *(undefined4 *)((int)auStack_124 + iVar2 + -0x18) = 0x414ec8;
      ___crtMessageBoxA(*(LPCSTR *)((int)auStack_124 + iVar2 + -0x14),
                        *(LPCSTR *)((int)auStack_124 + iVar2 + -0x10),
                        *(UINT *)((int)auStack_124 + iVar2 + -0xc));
    }
  }
  ___security_check_cookie_4(iStack_18);
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
      return (int)puVar4 - (int)_Str;
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
  undefined uStack_10;
  undefined uStack_f;
  undefined uStack_e;
  LPCSTR pCStack_c;
  ushort auStack_8 [2];
  
  if (_C + 1U < 0x101) {
    uVar1 = (uint)*(ushort *)(PTR_DAT_00428ed4 + _C * 2) & _Type;
  }
  else {
    if ((*(ushort *)(PTR_DAT_00428ed4 + (_C >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      uStack_10 = (undefined)_C;
      uStack_f = 0;
      pCStack_c = (LPCSTR)0x1;
    }
    else {
      uStack_10 = (undefined)((uint)_C >> 8);
      uStack_f = (undefined)_C;
      uStack_e = 0;
      pCStack_c = (LPCSTR)0x2;
    }
    BVar2 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&uStack_10,pCStack_c,(int)auStack_8,DAT_00429914,
                       DAT_00429904,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)auStack_8[0] & _Type;
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
  _cpinfo _Stack_4c;
  int iStack_38;
  int **ppiStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int **ppiStack_24;
  int iStack_20;
  undefined *puStack_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00427498;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  iStack_38 = DAT_00428eb0;
  puStack_1c = &stack0xffffffa4;
  ppiStack_24 = (int **)0x0;
  iStack_30 = 0;
  iStack_20 = *param_4;
  iStack_28 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffa4;
  if (param_1 != param_2) {
    ExceptionList = &pvStack_14;
    BVar2 = GetCPInfo(param_1,&_Stack_4c);
    if ((((BVar2 != 0) && (_Stack_4c.MaxCharSize == 1)) &&
        (BVar2 = GetCPInfo(param_2,&_Stack_4c), BVar2 != 0)) && (_Stack_4c.MaxCharSize == 1)) {
      iStack_28 = 1;
    }
    if (iStack_28 != 0) {
      if (iStack_20 == -1) {
        sVar3 = _strlen(param_3);
        iStack_2c = sVar3 + 1;
      }
      else {
        iStack_2c = iStack_20;
      }
    }
    if ((iStack_28 == 0) &&
       (iStack_2c = MultiByteToWideChar(param_1,1,param_3,iStack_20,(LPWSTR)0x0,0), iStack_2c == 0))
    goto LAB_00421580;
    uStack_8 = 0;
    ppiStack_34 = (int **)&stack0xffffffa4;
    puStack_1c = &stack0xffffffa4;
    _memset(&stack0xffffffa4,0,iStack_2c << 1);
    uStack_8 = 0xffffffff;
    if (ppiStack_34 == (int **)0x0) {
      ppiStack_34 = __calloc_dbg(2,iStack_2c,(int *)0x2,(int *)"convrtcp.c",(int *)0x7e);
      if (ppiStack_34 == (int **)0x0) goto LAB_00421580;
      iStack_30 = iStack_30 + 1;
    }
    iVar4 = MultiByteToWideChar(param_1,1,param_3,iStack_20,(LPWSTR)ppiStack_34,iStack_2c);
    puVar1 = puStack_1c;
    if (iVar4 != 0) {
      if (param_5 == (int **)0x0) {
        if (((iStack_28 != 0) ||
            (iStack_2c = WideCharToMultiByte(param_2,0,(LPCWSTR)ppiStack_34,iStack_2c,(LPSTR)0x0,0,
                                             (LPCSTR)0x0,(LPBOOL)0x0), puVar1 = puStack_1c,
            iStack_2c != 0)) &&
           (ppiStack_24 = __calloc_dbg(1,iStack_2c,(int *)0x2,(int *)"convrtcp.c",(int *)0xa1),
           puVar1 = puStack_1c, ppiStack_24 != (int **)0x0)) {
          iStack_2c = WideCharToMultiByte(param_2,0,(LPCWSTR)ppiStack_34,iStack_2c,
                                          (LPSTR)ppiStack_24,iStack_2c,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iStack_2c == 0) {
            __free_dbg(ppiStack_24,(uint)ppiStack_24,(int *)0x2);
            ppiStack_24 = (int **)0x0;
            puVar1 = puStack_1c;
          }
          else {
            puVar1 = puStack_1c;
            if (iStack_20 != -1) {
              *param_4 = iStack_2c;
            }
          }
        }
      }
      else {
        iVar4 = WideCharToMultiByte(param_2,0,(LPCWSTR)ppiStack_34,iStack_2c,(LPSTR)param_5,param_6,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        puVar1 = puStack_1c;
        if (iVar4 != 0) {
          ppiStack_24 = param_5;
        }
      }
    }
  }
  puStack_1c = puVar1;
  if (iStack_30 != 0) {
    __free_dbg(ppiStack_34,(uint)ppiStack_34,(int *)0x2);
  }
LAB_00421580:
  ExceptionList = pvStack_14;
  ___security_check_cookie_4(iStack_38);
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
  int iStack_8;
  
  if (_MbCh == (char *)0x0) {
    iVar1 = 0;
  }
  else if (DAT_00429904 == 0) {
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
    iStack_8 = 0;
    iVar1 = WideCharToMultiByte(DAT_00429914,0,&_WCh,1,_MbCh,DAT_00428ec4,(LPCSTR)0x0,&iStack_8);
    if ((iVar1 == 0) || (iStack_8 != 0)) {
      _DAT_0042962c = 0x2a;
      iVar1 = -1;
    }
  }
  return iVar1;
}



int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  code *pcVar1;
  int iVar2;
  FILE FStack_2c;
  FILE *pFStack_c;
  int iStack_8;
  
  pFStack_c = &FStack_2c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vsprintf.c",0x5a,
                           (char *)0x0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  pFStack_c->_cnt = _Count;
  pFStack_c->_flag = 0x42;
  pFStack_c->_base = _Dest;
  pFStack_c->_ptr = _Dest;
  iStack_8 = __output(pFStack_c,(byte *)_Format,(undefined4 *)_Args);
  if (_Dest != (char *)0x0) {
    pFStack_c->_cnt = pFStack_c->_cnt + -1;
    if (pFStack_c->_cnt < 0) {
      __flsbuf(0,pFStack_c);
    }
    else {
      *pFStack_c->_ptr = '\0';
      pFStack_c->_ptr = pFStack_c->_ptr + 1;
    }
  }
  return iStack_8;
}



int __cdecl __fcloseall(void)

{
  int iVar1;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  for (iStack_c = 3; iStack_c < DAT_0042ac80; iStack_c = iStack_c + 1) {
    if (*(int *)((int)DAT_00429934 + iStack_c * 4) != 0) {
      if ((*(uint *)(*(int *)((int)DAT_00429934 + iStack_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = _fclose(*(FILE **)((int)DAT_00429934 + iStack_c * 4));
        if (iVar1 != -1) {
          iStack_8 = iStack_8 + 1;
        }
      }
      if (0x13 < iStack_c) {
        __free_dbg(DAT_00429934,*(uint *)((int)DAT_00429934 + iStack_c * 4),(int *)0x2);
        *(undefined4 *)((int)DAT_00429934 + iStack_c * 4) = 0;
      }
    }
  }
  return iStack_8;
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
  undefined4 *puStack_c;
  int iStack_8;
  
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
    for (iStack_8 = 0; iStack_8 < 5; iStack_8 = iStack_8 + 1) {
      param_1[iStack_8 + 6] = 0;
      param_1[iStack_8 + 1] = 0;
    }
    for (puStack_c = DAT_00429850; puStack_c != (undefined4 *)0x0;
        puStack_c = (undefined4 *)*puStack_c) {
      if ((puStack_c[5] & 0xffff) < 5) {
        param_1[(puStack_c[5] & 0xffff) + 1] = param_1[(puStack_c[5] & 0xffff) + 1] + 1;
        param_1[(puStack_c[5] & 0xffff) + 6] = param_1[(puStack_c[5] & 0xffff) + 6] + puStack_c[4];
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
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *apvStack_28 [2];
  int aiStack_20 [2];
  char *pcStack_18;
  int iStack_8;
  
  iStack_8 = DAT_00428b68;
  if (DAT_00428b68 != -1) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcStack_18 = (char *)0x412ec4;
    iVar2 = -((uint)(pcVar3 + (0x53 - (int)(param_2 + 1))) & 0xfffffffc);
    puVar8 = (undefined4 *)"Stack around the variable \'";
    puVar7 = (undefined4 *)(&stack0xffffffec + iVar2);
    for (iVar5 = 7; pcVar3 = param_2, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)param_2;
    puVar8 = (undefined4 *)((int)&pcStack_18 + iVar2 + 3);
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *(undefined4 *)param_2;
      param_2 = (char *)((int)param_2 + 4);
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar8 = *param_2;
      param_2 = (char *)((int)param_2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar8 = (undefined4 *)((int)&pcStack_18 + iVar2 + 3);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined4 *)((int)puVar7 + 1);
    } while (*(char *)((int)puVar7 + 1) != '\0');
    *(undefined4 *)((int)puVar7 + 1) = 0x61772027;
    *(undefined4 *)((int)puVar7 + 5) = 0x6f632073;
    *(undefined4 *)((int)puVar7 + 9) = 0x70757272;
    *(undefined **)((int)&pcStack_18 + iVar2) = &stack0xffffffec + iVar2;
    *(undefined4 *)((int)puVar7 + 0xd) = 0x2e646574;
    *(undefined4 *)((int)aiStack_20 + iVar2 + 4) = 2;
    *(int *)((int)aiStack_20 + iVar2) = iStack_8;
    *(void **)((int)apvStack_28 + iVar2 + 4) = param_1;
    *(undefined *)((int)puVar7 + 0x11) = 0;
    *(undefined4 *)((int)apvStack_28 + iVar2) = 0x412f41;
    failwithmessage(*(void **)((int)apvStack_28 + iVar2 + 4),*(int *)((int)aiStack_20 + iVar2),
                    *(int *)((int)aiStack_20 + iVar2 + 4),*(char **)((int)&pcStack_18 + iVar2));
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
  DWORD DStack_8;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     ((*(byte *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DStack_8 = GetLastError();
    }
    else {
      DStack_8 = 0;
    }
    if (DStack_8 != 0) {
      _DAT_00429630 = DStack_8;
      _DAT_0042962c = 9;
      DStack_8 = 0xffffffff;
    }
  }
  else {
    _DAT_0042962c = 9;
    DStack_8 = 0xffffffff;
  }
  return DStack_8;
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
  LONG LStack_8;
  
  if (((uint)_FileHandle < DAT_0042af94) &&
     (iVar3 = _FileHandle >> 5,
     (*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 1) != 0)) {
    LStack_8 = _Offset._4_4_;
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    if (hFile == (HANDLE)0xffffffff) {
      _DAT_0042962c = 9;
      DVar1 = 0xffffffff;
      LStack_8 = -1;
    }
    else {
      DVar1 = SetFilePointer(hFile,(LONG)_Offset,&LStack_8,_Origin);
      if (DVar1 == 0xffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          __dosmaperr(DVar2);
          DVar1 = 0xffffffff;
          LStack_8 = -1;
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
    LStack_8 = -1;
  }
LAB_0042280a:
  return CONCAT44(LStack_8,DVar1);
}



void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4149b4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Type propagation algorithm not settling

int __cdecl _RTC_GetSrcLine(ulong param_1,char *param_2,int param_3,int *param_4,char **param_5)

{
  char *pcVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  char **ppcVar5;
  ImageInfo *pIVar6;
  int iVar7;
  HANDLE pvVar8;
  ushort *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *lpMem;
  bool bVar17;
  DWORD DVar18;
  undefined auStack_548 [248];
  undefined4 uStack_450;
  undefined auStack_444 [1020];
  undefined4 uStack_48;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined auStack_30 [4];
  undefined auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  ushort *puStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  SIZE_T SStack_8;
  
  ppcVar5 = param_5;
  uStack_48 = 0x415c53;
  puStack_10 = auStack_444;
  *param_4 = 0;
  *param_2 = '\0';
  iStack_20 = 0;
  *param_5 = (char *)0x0;
  pIVar6 = GetImageInfo(param_1);
  if (pIVar6 == (ImageInfo *)0x0) {
    return iStack_20;
  }
  uVar15 = param_1 - *(int *)(pIVar6 + 4);
  bVar17 = DAT_00429838 == 0;
  *ppcVar5 = *(char **)(pIVar6 + 0x18);
  iStack_20 = 1;
  if (bVar17) {
    if (DAT_004297e0 != (HMODULE)0x0) {
      return 1;
    }
    DAT_004297e0 = GetPdbDll();
    if (DAT_004297e0 == (HINSTANCE__ *)0x0) {
      return iStack_20;
    }
    uStack_450 = 0x415cd6;
    DAT_004297f0 = GetProcAddress(DAT_004297e0,"PDBOpenValidate3");
    if (DAT_004297f0 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415cf0;
    DAT_004297f4 = GetProcAddress(DAT_004297e0,"PDBOpenDBI");
    if (DAT_004297f4 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d07;
    DAT_004297f8 = GetProcAddress(DAT_004297e0,"DBIQueryModFromAddr");
    if (DAT_004297f8 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d1e;
    DAT_004297fc = GetProcAddress(DAT_004297e0,"ModQueryLines");
    if (DAT_004297fc == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d34;
    DAT_00429800 = GetProcAddress(DAT_004297e0,"ModClose");
    if (DAT_00429800 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d4b;
    DAT_00429804 = GetProcAddress(DAT_004297e0,"DBIClose");
    if (DAT_00429804 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d62;
    DAT_00429808 = GetProcAddress(DAT_004297e0,"PDBClose");
    if (DAT_00429808 == (FARPROC)0x0) {
      return 0;
    }
    DAT_00429838 = 1;
  }
  uVar3 = *(ushort *)(*(int *)(pIVar6 + 0x10) + 6);
  puStack_14 = (ushort *)(uint)uVar3;
  uVar14 = 0;
  if (uVar3 == 0) {
    return iStack_20;
  }
  while ((iVar7 = (uVar14 & 0xffff) * 0x28,
         uVar15 <= *(uint *)(*(int *)(pIVar6 + 0x14) + 0xc + iVar7) ||
         (iVar7 = iVar7 + *(int *)(pIVar6 + 0x14),
         *(uint *)(iVar7 + 0x10) <= uVar15 - *(int *)(iVar7 + 0xc)))) {
    uVar14 = uVar14 + 1;
    if (uVar3 <= (ushort)uVar14) {
      return iStack_20;
    }
  }
  uVar15 = uVar15 - *(int *)(*(int *)(pIVar6 + 0x14) + 0xc + (uVar14 & 0xffff) * 0x28);
  if (uVar15 == 0xffffffff) {
    return iStack_20;
  }
  uStack_24 = uVar15;
  iVar7 = (*DAT_004297f0)(*(undefined4 *)(pIVar6 + 0x18),&DAT_004250ec,auStack_34,puStack_10,
                          auStack_548,auStack_30,auStack_2c,&uStack_1c);
  if (iVar7 == 0) {
    return iStack_20;
  }
  iVar7 = (*DAT_004297f4)(uStack_1c,&DAT_00425e20,0,&uStack_18);
  if (iVar7 != 0) {
    iVar7 = (*DAT_004297f8)(uStack_18,uVar14 + 1,uVar15,&uStack_c,(int)&param_5 + 2,auStack_38,
                            &SStack_8);
    if (iVar7 != 0) {
      iVar7 = (*DAT_004297fc)(uStack_c,0,&SStack_8);
      if ((iVar7 != 0) && (SStack_8 != 0)) {
        DVar18 = 0;
        pvVar8 = GetProcessHeap();
        puVar9 = (ushort *)HeapAlloc(pvVar8,DVar18,SStack_8);
        puStack_14 = puVar9;
        iVar7 = (*DAT_004297fc)(uStack_c,puVar9,&SStack_8);
        if (iVar7 != 0) {
          puStack_10 = (undefined *)0x0;
          lpMem = puVar9;
          uVar15 = uStack_24;
          if (*puVar9 != 0) {
LAB_00415ed2:
            iVar7 = *(int *)(puVar9 + (int)puStack_10 * 2 + 2);
            uVar14 = (uint)*(ushort *)(iVar7 + (int)puVar9);
            iVar4 = uVar14 * 4 + iVar7 + 4;
            pcStack_28 = (char *)((int)puVar9 + uVar14 * 8 + iVar4);
            iVar11 = 0;
            if (uVar14 == 0) goto LAB_00415f06;
            while ((puVar2 = (uint *)((int)puVar9 + iVar11 * 8 + iVar4),
                   uStack_24 <= *puVar2 && *puVar2 != uStack_24 ||
                   (puVar2 = (uint *)((int)puVar9 + iVar11 * 8 + iVar4 + 4),
                   *puVar2 <= uStack_24 && uStack_24 != *puVar2))) {
              iVar11 = iVar11 + 1;
              if ((int)uVar14 <= iVar11) goto LAB_00415f06;
            }
            iVar7 = *(int *)((int)puVar9 + iVar11 * 4 + iVar7 + 4);
            uVar16 = (uint)*(ushort *)(iVar7 + 2 + (int)puVar9);
            uVar15 = (int)puVar9 + uVar16 * 4 + iVar7 + 4;
            uVar14 = 0xffffffff;
            puVar13 = (undefined *)0x0;
            puStack_10 = (undefined *)0xffffffff;
            lpMem = puStack_14;
            if (uVar16 == 0) goto LAB_00415f93;
            do {
              uVar12 = uStack_24 - *(int *)((int)puVar9 + (int)puVar13 * 4 + iVar7 + 4);
              if (uVar12 < uVar14) {
                uVar14 = uVar12;
                puStack_10 = puVar13;
              }
              puVar13 = puVar13 + 1;
            } while ((int)puVar13 < (int)uVar16);
            if (-1 < (int)puStack_10) {
              *param_4 = (uint)*(ushort *)(uVar15 + (int)puStack_10 * 2);
              iVar7 = 0;
              if (*pcStack_28 == '\0') {
LAB_00415f82:
                if (param_3 <= iVar7) goto LAB_00415f86;
              }
              else {
                pcVar10 = pcStack_28;
                while (iVar7 < param_3) {
                  pcVar10[(int)param_2 - (int)pcStack_28] = *pcVar10;
                  pcVar1 = pcVar10 + 1;
                  iVar7 = iVar7 + 1;
                  pcVar10 = pcVar10 + 1;
                  if (*pcVar1 == '\0') goto LAB_00415f82;
                }
LAB_00415f86:
                iVar7 = param_3 + -1;
              }
              param_2[iVar7] = '\0';
            }
          }
LAB_00415f93:
          uStack_24 = uVar15;
          DVar18 = 0;
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,DVar18,lpMem);
        }
      }
      (*DAT_00429800)(uStack_c);
    }
    (*DAT_00429804)(uStack_18);
  }
  (*DAT_00429808)(uStack_1c);
  return iStack_20;
LAB_00415f06:
  puStack_10 = puStack_10 + 1;
  if ((int)(uint)*puVar9 <= (int)puStack_10) goto LAB_00415f93;
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
  undefined8 uVar4;
  undefined4 auStack_d0 [49];
  HWND pHStack_c;
  undefined4 uStack_8;
  
  puVar3 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  DAT_004295cc = param_1;
  CreateWindowExA(0,&DAT_00429500,&DAT_00429568,0xcf0000,-0x80000000,0,-0x80000000,0,(HWND)0x0,
                  (HMENU)0x0,param_1,(LPVOID)0x0);
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  pHStack_c = (HWND)uVar4;
  uVar2 = extraout_ECX_00;
  if (pHStack_c != (HWND)0x0) {
    ShowWindow(pHStack_c,param_2);
    __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_00);
    UpdateWindow(pHStack_c);
    uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_01);
    uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),pHStack_c);
    uVar2 = extraout_ECX_03;
  }
  pHStack_c = (HWND)uVar4;
  uStack_8 = 0x411f4a;
  uVar4 = __RTC_CheckEsp(uVar2,(int)((ulonglong)uVar4 >> 0x20));
  return uVar4;
}



void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_0041f32b_caseD_2;
        case 3:
          goto switchD_0041f32b_caseD_3;
        }
        goto switchD_0041f32b_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0041f32b_caseD_0;
      case 1:
        goto switchD_0041f32b_caseD_1;
      case 2:
        goto switchD_0041f32b_caseD_2;
      case 3:
        goto switchD_0041f32b_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041f32b_caseD_2;
            case 3:
              goto switchD_0041f32b_caseD_3;
            }
            goto switchD_0041f32b_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041f32b_caseD_2;
            case 3:
              goto switchD_0041f32b_caseD_3;
            }
            goto switchD_0041f32b_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041f32b_caseD_2;
            case 3:
              goto switchD_0041f32b_caseD_3;
            }
            goto switchD_0041f32b_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0041f32b_caseD_1:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0041f32b_caseD_2:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0041f32b_caseD_3:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0041f32b_caseD_0:
    return _Dst;
  }
  puVar3 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0041f1a5_caseD_2;
      case 3:
        goto switchD_0041f1a5_caseD_3;
      }
      goto switchD_0041f1a5_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0041f1a5_caseD_0;
    case 1:
      goto switchD_0041f1a5_caseD_1;
    case 2:
      goto switchD_0041f1a5_caseD_2;
    case 3:
      goto switchD_0041f1a5_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041f1a5_caseD_2;
          case 3:
            goto switchD_0041f1a5_caseD_3;
          }
          goto switchD_0041f1a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041f1a5_caseD_2;
          case 3:
            goto switchD_0041f1a5_caseD_3;
          }
          goto switchD_0041f1a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041f1a5_caseD_2;
          case 3:
            goto switchD_0041f1a5_caseD_3;
          }
          goto switchD_0041f1a5_caseD_1;
        }
      }
    }
  }
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 8:
  case 9:
  case 10:
  case 0xb:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 4:
  case 5:
  case 6:
  case 7:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0041f1a5_caseD_1:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    return _Dst;
  case 2:
switchD_0041f1a5_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0041f1a5_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0041f1a5_caseD_0:
  return _Dst;
}



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
  undefined4 extraout_ECX_00;
  int **extraout_ECX_01;
  int **ppiVar9;
  int **extraout_ECX_02;
  int **extraout_ECX_03;
  int **extraout_ECX_04;
  int **extraout_ECX_05;
  int **extraout_ECX_06;
  int **extraout_ECX_07;
  bool bVar10;
  undefined8 uVar11;
  int **ppiStack_2bc;
  uint uStack_2a8;
  byte abStack_2a4 [8];
  int iStack_29c;
  int **ppiStack_298;
  int **ppiStack_294;
  int iStack_290;
  undefined8 uStack_28c;
  undefined8 uStack_284;
  int iStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  int *piStack_26c;
  int **ppiStack_268;
  int **ppiStack_264;
  int **ppiStack_260;
  int **ppiStack_25c;
  undefined2 uStack_258;
  int iStack_254;
  int iStack_250;
  wchar_t wStack_24c;
  byte bStack_245;
  uint uStack_244;
  int iStack_240;
  undefined uStack_23c;
  int *piStack_3d;
  int iStack_38;
  int **ppiStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int **ppiStack_28;
  int **ppiStack_24;
  int iStack_20;
  int iStack_1c;
  byte bStack_18;
  char cStack_17;
  uint uStack_14;
  int iStack_10;
  uint uStack_c;
  int **ppiStack_8;
  
  iStack_38 = DAT_00428eb0;
  ppiStack_28 = (int **)0x0;
  iStack_240 = 0;
  iStack_250 = 0;
  ppiStack_24 = (int **)0x0;
  pbVar3 = param_2;
  do {
    param_2 = pbVar3;
    bStack_245 = *param_2;
    pbVar3 = param_2 + 1;
    if ((bStack_245 == 0) || (iStack_240 < 0)) {
      ___security_check_cookie_4(iStack_38);
      return;
    }
    if (((char)bStack_245 < ' ') || ('x' < (char)bStack_245)) {
      uStack_2a8 = 0;
    }
    else {
      uStack_2a8 = (int)(char)(&DAT_004273c0)[(char)bStack_245] & 0xf;
    }
    uStack_244 = uStack_2a8;
    iStack_250 = (int)*(char *)(iStack_250 + (uStack_2a8 * 2 + 0x109cf8) * 4) >> 4;
    switch(iStack_250) {
    case 0:
      goto switchD_0041fe66_caseD_0;
    case 1:
      uStack_30 = 0;
      iStack_2c = 0;
      iStack_1c = 0;
      iStack_20 = 0;
      uStack_14 = 0;
      ppiStack_34 = (int **)0xffffffff;
      iStack_10 = 0;
      break;
    case 2:
      switch(bStack_245) {
      case 0x20:
        uStack_14 = uStack_14 | 2;
        break;
      case 0x23:
        uStack_14 = uStack_14 | 0x80;
        break;
      case 0x2b:
        uStack_14 = uStack_14 | 1;
        break;
      case 0x2d:
        uStack_14 = uStack_14 | 4;
        break;
      case 0x30:
        uStack_14 = uStack_14 | 8;
      }
      break;
    case 3:
      if (bStack_245 == 0x2a) {
        iStack_1c = _get_int_arg((int *)&param_3);
        if (iStack_1c < 0) {
          uStack_14 = uStack_14 | 4;
          iStack_1c = -iStack_1c;
        }
      }
      else {
        iStack_1c = iStack_1c * 10 + -0x30 + (int)(char)bStack_245;
      }
      break;
    case 4:
      ppiStack_34 = (int **)0x0;
      break;
    case 5:
      if (bStack_245 == 0x2a) {
        ppiStack_34 = (int **)_get_int_arg((int *)&param_3);
        if ((int)ppiStack_34 < 0) {
          ppiStack_34 = (int **)0xffffffff;
        }
      }
      else {
        ppiStack_34 = (int **)((int)ppiStack_34 * 10 + -0x30 + (int)(char)bStack_245);
      }
      break;
    case 6:
      switch(bStack_245) {
      case 0x49:
        if ((*pbVar3 == 0x36) && (param_2[2] == 0x34)) {
          uStack_14 = uStack_14 | 0x8000;
          pbVar3 = param_2 + 3;
        }
        else if ((*pbVar3 == 0x33) && (param_2[2] == 0x32)) {
          uStack_14 = uStack_14 & 0xffff7fff;
          pbVar3 = param_2 + 3;
        }
        else if (((((*pbVar3 != 100) && (*pbVar3 != 0x69)) && (*pbVar3 != 0x6f)) &&
                 ((*pbVar3 != 0x75 && (*pbVar3 != 0x78)))) && (*pbVar3 != 0x58)) {
          iStack_250 = 0;
switchD_0041fe66_caseD_0:
          iStack_10 = 0;
          if ((*(ushort *)(PTR_DAT_00428ed4 + (uint)bStack_245 * 2) & 0x8000) != 0) {
            _write_char(bStack_245,param_1,&iStack_240);
            bStack_245 = *pbVar3;
            pbVar3 = param_2 + 2;
            if ((bStack_245 == 0) &&
               (iVar4 = __CrtDbgReport(2,"output.c",0x192,(char *)0x0,"ch != _T(\'\\0\')"),
               iVar4 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          param_2 = pbVar3;
          _write_char(bStack_245,param_1,&iStack_240);
          pbVar3 = param_2;
        }
        break;
      case 0x68:
        uStack_14 = uStack_14 | 0x20;
        break;
      case 0x6c:
        uStack_14 = uStack_14 | 0x10;
        break;
      case 0x77:
        uStack_14 = uStack_14 | 0x800;
      }
      break;
    case 7:
      ppiVar9 = (int **)((char)bStack_245 + -0x43);
      ppiVar8 = ppiStack_8;
      switch(bStack_245) {
      case 0x43:
        if ((uStack_14 & 0x830) == 0) {
          uStack_14 = uStack_14 | 0x800;
        }
      case 99:
        if ((uStack_14 & 0x810) == 0) {
          uVar5 = _get_int_arg((int *)&param_3);
          uStack_258._0_1_ = (undefined)uVar5;
          ppiVar9 = (int **)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),(undefined)uStack_258);
          uStack_23c = (undefined)uStack_258;
          ppiStack_28 = (int **)0x1;
          uStack_258 = (short)uVar5;
        }
        else {
          wStack_24c = _get_short_arg((int *)&param_3);
          ppiStack_28 = (int **)_wctomb(&uStack_23c,wStack_24c);
          ppiVar9 = extraout_ECX;
          if ((int)ppiStack_28 < 0) {
            iStack_2c = 1;
          }
        }
        ppiVar8 = (int **)&uStack_23c;
        break;
      case 0x45:
      case 0x47:
        uStack_30 = 1;
        bStack_245 = bStack_245 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        uStack_14 = uStack_14 | 0x40;
        ppiStack_8 = (int **)&uStack_23c;
        if ((int)ppiStack_34 < 0) {
          ppiStack_34 = (int **)0x6;
        }
        else if ((ppiStack_34 == (int **)0x0) && (bStack_245 == 0x67)) {
          ppiStack_34 = (int **)0x1;
        }
        else if (0x200 < (int)ppiStack_34) {
          ppiStack_34 = (int **)0x200;
        }
        ppiVar9 = ppiStack_8;
        if ((0xa3 < (int)ppiStack_34) &&
           (ppiStack_24 = __malloc_dbg((int *)((int)ppiStack_34 + 0x15d),(int *)0x2,
                                       (int *)"output.c",(int *)0x300), ppiVar9 = ppiStack_24,
           ppiStack_24 == (int **)0x0)) {
          ppiStack_34 = (int **)0xa3;
          ppiVar9 = ppiStack_8;
        }
        ppiStack_8 = ppiVar9;
        uStack_274 = *param_3;
        uStack_270 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_00429200)
                  (&uStack_274,ppiStack_8,(int)(char)bStack_245,ppiStack_34,uStack_30);
        if (((uStack_14 & 0x80) != 0) && (ppiStack_34 == (int **)0x0)) {
          (*(code *)PTR___fptrap_0042920c)(ppiStack_8);
        }
        if ((bStack_245 == 0x67) && ((uStack_14 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_00429204)(ppiStack_8);
        }
        if (*(char *)ppiStack_8 == '-') {
          uStack_14 = uStack_14 | 0x100;
          ppiStack_8 = (int **)((int)ppiStack_8 + 1);
        }
        ppiStack_28 = (int **)_strlen((char *)ppiStack_8);
        ppiVar9 = extraout_ECX_03;
        ppiVar8 = ppiStack_8;
        break;
      case 0x53:
        if ((uStack_14 & 0x830) == 0) {
          uStack_14 = uStack_14 | 0x800;
        }
      case 0x73:
        if (ppiStack_34 == (int **)0xffffffff) {
          ppiStack_2bc = (int **)0x7fffffff;
        }
        else {
          ppiStack_2bc = ppiStack_34;
        }
        ppiStack_264 = ppiStack_2bc;
        ppiStack_8 = (int **)_get_int_arg((int *)&param_3);
        if ((uStack_14 & 0x810) == 0) {
          if (ppiStack_8 == (int **)0x0) {
            ppiStack_8 = (int **)PTR_DAT_00428ef0;
          }
          for (ppiStack_260 = ppiStack_8;
              (ppiVar9 = ppiStack_264, ppiStack_264 != (int **)0x0 &&
              (ppiVar9 = (int **)(int)*(char *)ppiStack_260, ppiVar9 != (int **)0x0));
              ppiStack_260 = (int **)((int)ppiStack_260 + 1)) {
            ppiStack_264 = (int **)((int)ppiStack_264 + -1);
          }
          ppiStack_28 = (int **)((int)ppiStack_260 - (int)ppiStack_8);
          ppiStack_264 = (int **)((int)ppiStack_264 + -1);
          ppiVar8 = ppiStack_8;
        }
        else {
          if (ppiStack_8 == (int **)0x0) {
            ppiStack_8 = (int **)PTR_DAT_00428ef4;
          }
          iStack_10 = 1;
          for (ppiStack_268 = ppiStack_8;
              (ppiStack_264 != (int **)0x0 && (*(wchar_t *)ppiStack_268 != L'\0'));
              ppiStack_268 = (int **)((int)ppiStack_268 + 2)) {
            ppiStack_264 = (int **)((int)ppiStack_264 + -1);
          }
          ppiVar9 = (int **)((int)ppiStack_268 - (int)ppiStack_8 >> 1);
          ppiStack_264 = (int **)((int)ppiStack_264 + -1);
          ppiStack_28 = ppiVar9;
          ppiVar8 = ppiStack_8;
        }
        break;
      case 0x5a:
        ppiVar9 = (int **)_get_int_arg((int *)&param_3);
        ppiStack_25c = ppiVar9;
        if ((ppiVar9 == (int **)0x0) || (ppiVar9[1] == (int *)0x0)) {
          ppiStack_8 = (int **)PTR_DAT_00428ef0;
          ppiStack_28 = (int **)_strlen(PTR_DAT_00428ef0);
          ppiVar9 = extraout_ECX_01;
          ppiVar8 = ppiStack_8;
        }
        else if ((uStack_14 & 0x800) == 0) {
          iStack_10 = 0;
          ppiStack_28 = (int **)(int)*(wchar_t *)ppiVar9;
          ppiVar8 = (int **)ppiVar9[1];
        }
        else {
          iStack_10 = 1;
          ppiStack_28 = (int **)((int)*(wchar_t *)ppiVar9 / 2);
          ppiVar8 = (int **)ppiVar9[1];
        }
        break;
      case 100:
      case 0x69:
        uStack_14 = uStack_14 | 0x40;
        uStack_c = 10;
        goto LAB_00420604;
      case 0x6e:
        piStack_26c = (int *)_get_int_arg((int *)&param_3);
        if ((uStack_14 & 0x20) == 0) {
          *piStack_26c = iStack_240;
          ppiVar9 = extraout_ECX_02;
        }
        else {
          ppiVar9 = (int **)CONCAT22((short)((uint)extraout_ECX_02 >> 0x10),(undefined2)iStack_240);
          *(undefined2 *)piStack_26c = (undefined2)iStack_240;
        }
        iStack_2c = 1;
        ppiVar8 = ppiStack_8;
        break;
      case 0x6f:
        uStack_c = 8;
        if ((uStack_14 & 0x80) != 0) {
          uStack_14 = uStack_14 | 0x200;
        }
        goto LAB_00420604;
      case 0x70:
        ppiStack_34 = (int **)0x8;
      case 0x58:
        iStack_254 = 7;
        goto LAB_004205bd;
      case 0x75:
        uStack_c = 10;
        goto LAB_00420604;
      case 0x78:
        iStack_254 = 0x27;
LAB_004205bd:
        uStack_c = 0x10;
        if ((uStack_14 & 0x80) != 0) {
          bStack_18 = 0x30;
          cStack_17 = (char)iStack_254 + 'Q';
          iStack_20 = 2;
        }
LAB_00420604:
        if ((uStack_14 & 0x8000) == 0) {
          if ((uStack_14 & 0x20) == 0) {
            if ((uStack_14 & 0x40) == 0) {
              uVar6 = _get_int_arg((int *)&param_3);
              uStack_284 = (ulonglong)uVar6;
            }
            else {
              iVar4 = _get_int_arg((int *)&param_3);
              uStack_284 = (ulonglong)iVar4;
            }
          }
          else if ((uStack_14 & 0x40) == 0) {
            uVar6 = _get_int_arg((int *)&param_3);
            uStack_284 = (ulonglong)(uVar6 & 0xffff);
          }
          else {
            uVar5 = _get_int_arg((int *)&param_3);
            uStack_284 = (ulonglong)(int)(short)uVar5;
          }
        }
        else {
          uStack_284 = _get_int64_arg((int *)&param_3);
        }
        if ((((uStack_14 & 0x40) == 0) || (0 < uStack_284._4_4_)) || (-1 < (longlong)uStack_284)) {
          uStack_28c = uStack_284;
        }
        else {
          uStack_28c = CONCAT44(-(uStack_284._4_4_ + (uint)((int)uStack_284 != 0)),-(int)uStack_284)
          ;
          uStack_14 = uStack_14 | 0x100;
        }
        if ((uStack_14 & 0x8000) == 0) {
          uStack_28c = uStack_28c & 0xffffffff;
        }
        if ((int)ppiStack_34 < 0) {
          ppiStack_34 = (int **)0x1;
        }
        else {
          uStack_14 = uStack_14 & 0xfffffff7;
          if (0x200 < (int)ppiStack_34) {
            ppiStack_34 = (int **)0x200;
          }
        }
        if (((uint)uStack_28c | uStack_28c._4_4_) == 0) {
          iStack_20 = 0;
        }
        ppiStack_8 = &piStack_3d;
        while( true ) {
          ppiVar2 = ppiStack_8;
          ppiVar7 = (int **)((int)ppiStack_34 + -1);
          if (((int)ppiStack_34 < 1) && (((uint)uStack_28c | uStack_28c._4_4_) == 0)) break;
          ppiStack_34 = ppiVar7;
          uVar11 = __aullrem((uint)uStack_28c,uStack_28c._4_4_,uStack_c,(int)uStack_c >> 0x1f);
          iStack_278 = (int)uVar11 + 0x30;
          uStack_28c = __aulldiv((uint)uStack_28c,uStack_28c._4_4_,uStack_c,(int)uStack_c >> 0x1f);
          if (0x39 < iStack_278) {
            iStack_278 = iStack_278 + iStack_254;
          }
          *(char *)ppiStack_8 = (char)iStack_278;
          ppiStack_8 = (int **)((int)ppiStack_8 + -1);
        }
        ppiStack_28 = (int **)((int)&piStack_3d - (int)ppiStack_8);
        ppiVar8 = (int **)((int)ppiStack_8 + 1);
        ppiVar9 = ppiStack_28;
        ppiStack_34 = ppiVar7;
        if (((uStack_14 & 0x200) != 0) &&
           ((*(char *)ppiVar8 != '0' || (ppiVar9 = ppiVar8, ppiStack_28 == (int **)0x0)))) {
          *(char *)ppiStack_8 = '0';
          ppiVar9 = ppiVar2;
          ppiStack_28 = (int **)((int)ppiStack_28 + 1);
          ppiVar8 = ppiStack_8;
        }
      }
      ppiStack_8 = ppiVar8;
      if (iStack_2c == 0) {
        if ((uStack_14 & 0x40) != 0) {
          if ((uStack_14 & 0x100) == 0) {
            if ((uStack_14 & 1) == 0) {
              if ((uStack_14 & 2) != 0) {
                bStack_18 = 0x20;
                iStack_20 = 1;
              }
            }
            else {
              bStack_18 = 0x2b;
              iStack_20 = 1;
            }
          }
          else {
            bStack_18 = 0x2d;
            iStack_20 = 1;
          }
        }
        iStack_290 = (iStack_1c - (int)ppiStack_28) - iStack_20;
        if ((uStack_14 & 0xc) == 0) {
          _write_multi_char(0x20,iStack_290,param_1,&iStack_240);
        }
        _write_string(&bStack_18,iStack_20,param_1,&iStack_240);
        if (((uStack_14 & 8) != 0) && ((uStack_14 & 4) == 0)) {
          _write_multi_char(0x30,iStack_290,param_1,&iStack_240);
        }
        if ((iStack_10 == 0) || ((int)ppiStack_28 < 1)) {
          _write_string((byte *)ppiStack_8,(int)ppiStack_28,param_1,&iStack_240);
          ppiVar9 = extraout_ECX_06;
        }
        else {
          ppiStack_294 = ppiStack_8;
          ppiStack_298 = ppiStack_28;
          ppiVar9 = ppiStack_28;
          while (ppiVar8 = (int **)((int)ppiStack_298 + -1), bVar10 = ppiStack_298 != (int **)0x0,
                ppiStack_298 = ppiVar8, bVar10) {
            iStack_29c = _wctomb((char *)abStack_2a4,*(wchar_t *)ppiStack_294);
            ppiStack_294 = (int **)((int)ppiStack_294 + 2);
            ppiVar9 = extraout_ECX_04;
            if (iStack_29c < 1) break;
            _write_string(abStack_2a4,iStack_29c,param_1,&iStack_240);
            ppiVar9 = extraout_ECX_05;
          }
        }
        if ((uStack_14 & 4) != 0) {
          _write_multi_char(0x20,iStack_290,param_1,&iStack_240);
          ppiVar9 = extraout_ECX_07;
        }
      }
      if (ppiStack_24 != (int **)0x0) {
        __free_dbg(ppiVar9,(uint)ppiStack_24,(int *)0x2);
        ppiStack_24 = (int **)0x0;
      }
    }
  } while( true );
}



void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_0041a3eb_caseD_2;
        case 3:
          goto switchD_0041a3eb_caseD_3;
        }
        goto switchD_0041a3eb_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0041a3eb_caseD_0;
      case 1:
        goto switchD_0041a3eb_caseD_1;
      case 2:
        goto switchD_0041a3eb_caseD_2;
      case 3:
        goto switchD_0041a3eb_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a3eb_caseD_2;
            case 3:
              goto switchD_0041a3eb_caseD_3;
            }
            goto switchD_0041a3eb_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a3eb_caseD_2;
            case 3:
              goto switchD_0041a3eb_caseD_3;
            }
            goto switchD_0041a3eb_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a3eb_caseD_2;
            case 3:
              goto switchD_0041a3eb_caseD_3;
            }
            goto switchD_0041a3eb_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0041a3eb_caseD_1:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0041a3eb_caseD_2:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0041a3eb_caseD_3:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0041a3eb_caseD_0:
    return _Dst;
  }
  puVar3 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0041a265_caseD_2;
      case 3:
        goto switchD_0041a265_caseD_3;
      }
      goto switchD_0041a265_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0041a265_caseD_0;
    case 1:
      goto switchD_0041a265_caseD_1;
    case 2:
      goto switchD_0041a265_caseD_2;
    case 3:
      goto switchD_0041a265_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a265_caseD_2;
          case 3:
            goto switchD_0041a265_caseD_3;
          }
          goto switchD_0041a265_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a265_caseD_2;
          case 3:
            goto switchD_0041a265_caseD_3;
          }
          goto switchD_0041a265_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a265_caseD_2;
          case 3:
            goto switchD_0041a265_caseD_3;
          }
          goto switchD_0041a265_caseD_1;
        }
      }
    }
  }
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 8:
  case 9:
  case 10:
  case 0xb:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 4:
  case 5:
  case 6:
  case 7:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0041a265_caseD_1:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    return _Dst;
  case 2:
switchD_0041a265_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0041a265_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0041a265_caseD_0:
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
  uint uStack_10;
  int **ppiStack_8;
  
  uVar1 = __msize_dbg((int)DAT_0042b0f4);
  if (uVar1 < (uint)((int)DAT_0042b0f0 + (4 - (int)DAT_0042b0f4))) {
    uStack_10 = uVar1;
    if (0x7ff < uVar1) {
      uStack_10 = 0x800;
    }
    ppiStack_8 = __realloc_dbg((uint)DAT_0042b0f4,(int *)(uVar1 + uStack_10),(int *)0x2,
                               (int *)"onexit.c",(int *)0x7d);
    if ((ppiStack_8 == (int **)0x0) &&
       (ppiStack_8 = __realloc_dbg((uint)DAT_0042b0f4,(int *)(uVar1 + 0x10),(int *)0x2,
                                   (int *)"onexit.c",(int *)0x83), ppiStack_8 == (int **)0x0)) {
      return (_onexit_t)0x0;
    }
    DAT_0042b0f0 = ppiStack_8 + ((int)DAT_0042b0f0 - (int)DAT_0042b0f4 >> 2);
    DAT_0042b0f4 = ppiStack_8;
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
  int iStack_60;
  _MEMORY_BASIC_INFORMATION _Stack_58;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  void **ppvStack_28;
  LPCVOID pvStack_24;
  int iStack_20;
  uint uStack_1c;
  int *piStack_18;
  short *psStack_14;
  int *piStack_10;
  uint uStack_c;
  uint uStack_8;
  
  pvStack_24 = *(LPCVOID *)(param_1 + 8);
  if (((uint)pvStack_24 & 3) != 0) {
    return 0;
  }
  ppvStack_28 = &ExceptionList;
  if ((StackLimit <= pvStack_24) && (pvStack_24 < StackBase)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    return 1;
  }
  iStack_20 = 0;
  for (uStack_c = 0; uStack_c < *(uint *)(param_1 + 0xc) || uStack_c == *(uint *)(param_1 + 0xc);
      uStack_c = uStack_c + 1) {
    uVar1 = *(uint *)((int)pvStack_24 + uStack_c * 0xc);
    if ((uVar1 != 0xffffffff) && (uStack_c <= uVar1)) {
      return 0;
    }
    if (*(int *)((int)pvStack_24 + uStack_c * 0xc + 4) != 0) {
      iStack_20 = iStack_20 + 1;
    }
  }
  if ((iStack_20 != 0) &&
     ((*(void **)(param_1 - 8) < StackLimit || (param_1 <= *(uint *)(param_1 - 8))))) {
    return 0;
  }
  uStack_38 = (uint)pvStack_24 & 0xfffff000;
  iStack_34 = 0;
  while( true ) {
    if (DAT_00429868 <= iStack_34) {
      SVar4 = VirtualQuery(pvStack_24,&_Stack_58,0x1c);
      if ((SVar4 == 0) || (_Stack_58.Type != 0x1000000)) {
        return 0xffffffff;
      }
      if ((_Stack_58.Protect & 0xcc) != 0) {
        psStack_14 = (short *)_Stack_58.AllocationBase;
                    // WARNING: Load size is inaccurate
        if (*_Stack_58.AllocationBase != 0x5a4d) {
          return 0xffffffff;
        }
        piStack_18 = (int *)((int)_Stack_58.AllocationBase +
                            *(int *)((int)_Stack_58.AllocationBase + 0x3c));
        if (*piStack_18 != 0x4550) {
          return 0xffffffff;
        }
        piStack_10 = piStack_18 + 6;
        if (*(short *)piStack_10 != 0x10b) {
          return 0xffffffff;
        }
        uStack_8 = (int)pvStack_24 - (int)_Stack_58.AllocationBase;
        uStack_30 = 0;
        iStack_3c = (int)piStack_18 + *(ushort *)(piStack_18 + 5) + 0x18;
        if (*(short *)((int)piStack_18 + 6) == 0) {
          return 0xffffffff;
        }
        if (((*(uint *)(iStack_3c + 0xc) <= uStack_8) &&
            (uStack_8 < (uint)(*(int *)(iStack_3c + 0xc) + *(int *)(iStack_3c + 8)))) &&
           ((*(uint *)(iStack_3c + 0x24) & 0x80000000) != 0)) {
          return 0;
        }
      }
      LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1);
      if (LVar3 != 0) {
        return 1;
      }
      for (iStack_34 = DAT_00429868;
          (0 < iStack_34 && (*(uint *)(&DAT_0042986c + iStack_34 * 4) != uStack_38));
          iStack_34 = iStack_34 + -1) {
      }
      if (iStack_34 == 0) {
        if (DAT_00429868 < 0x10) {
          iStack_60 = DAT_00429868;
        }
        else {
          iStack_60 = 0xf;
        }
        iStack_34 = iStack_60;
        for (iStack_2c = 0; iStack_2c <= iStack_60; iStack_2c = iStack_2c + 1) {
          uStack_1c = *(uint *)(&DAT_00429870 + iStack_2c * 4);
          *(uint *)(&DAT_00429870 + iStack_2c * 4) = uStack_38;
          uStack_38 = uStack_1c;
        }
        if (DAT_00429868 < 0x10) {
          DAT_00429868 = DAT_00429868 + 1;
        }
      }
      InterlockedExchange((LONG *)&DAT_004298b0,0);
      return 1;
    }
    if (*(uint *)(&DAT_00429870 + iStack_34 * 4) == uStack_38) break;
    iStack_34 = iStack_34 + 1;
  }
  if ((0 < iStack_34) && (LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1), LVar3 == 0)) {
    iVar2 = DAT_00429868;
    if (*(uint *)(&DAT_00429870 + iStack_34 * 4) != uStack_38) {
      do {
        iStack_34 = iVar2 + -1;
        if (iStack_34 < 0) break;
        iVar2 = iStack_34;
      } while (*(uint *)(&DAT_00429870 + iStack_34 * 4) != uStack_38);
      if (iStack_34 < 0) {
        if (DAT_00429868 < 0x10) {
          DAT_00429868 = DAT_00429868 + 1;
        }
        iStack_34 = DAT_00429868 + -1;
      }
      else if (iStack_34 == 0) {
        InterlockedExchange((LONG *)&DAT_004298b0,0);
        return 1;
      }
    }
    for (iStack_2c = 0; iStack_2c <= iStack_34; iStack_2c = iStack_2c + 1) {
      uStack_1c = *(uint *)(&DAT_00429870 + iStack_2c * 4);
      *(uint *)(&DAT_00429870 + iStack_2c * 4) = uStack_38;
      uStack_38 = uStack_1c;
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
        _memset((void *)((int)(ppiVar6 + 8) + (int)param_1),(uint)DAT_00428d58,4);
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
  LPWORD pWVar4;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uStackY_6c;
  int **ppiStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  BOOL BStack_30;
  DWORD DStack_24;
  WORD aWStack_20 [2];
  undefined *puStack_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00427168;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffffb0;
  ExceptionList = &pvStack_14;
  puVar6 = &stack0xffffffb0;
  if (_DAT_00429928 == 0) {
    ExceptionList = &pvStack_14;
    BVar2 = GetStringTypeW(1,L"",1,aWStack_20);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      puVar6 = puStack_1c;
      if (DVar3 == 0x78) {
        _DAT_00429928 = 2;
      }
    }
    else {
      _DAT_00429928 = 1;
      puVar6 = puStack_1c;
    }
  }
  puStack_1c = puVar6;
  if ((_DAT_00429928 == 2) || (_DAT_00429928 == 0)) {
    DStack_24 = 0;
    if (_Code_page == 0) {
      _Code_page = DAT_00429904;
    }
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00429914;
    }
    pWVar4 = (LPWORD)___ansicp(_Code_page);
    if (pWVar4 == (LPWORD)0xffffffff) {
      BStack_30 = 0;
    }
    else {
      if (pWVar4 != _LpCharType) {
        uStackY_6c = 0x41ef0f;
        _DWInfoType = ___convertcp((UINT)_LpCharType,(UINT)pWVar4,(char *)_DWInfoType,
                                   (int *)&_LpSrcStr,(int **)0x0,0);
        DStack_24 = _DWInfoType;
        if (_DWInfoType == 0) {
          ExceptionList = pvStack_14;
          return 0;
        }
      }
      BStack_30 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                 (LPWORD)_CchSrc);
      if (DStack_24 != 0) {
        __free_dbg(this,DStack_24,(int *)0x2);
      }
    }
  }
  else if (_DAT_00429928 == 1) {
    BStack_30 = 0;
    iStack_3c = 0;
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00429914;
    }
    uStackY_6c = 0x41efb2;
    iStack_38 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,
                                    (LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iStack_38 == 0) {
      BStack_30 = 0;
    }
    else {
      uStack_8 = 0;
      iVar1 = -(iStack_38 * 2 + 3U & 0xfffffffc);
      ppiStack_40 = (int **)(&stack0xffffffb0 + iVar1);
      puStack_1c = &stack0xffffffb0 + iVar1;
      *(int *)(&stack0xffffffac + iVar1) = iStack_38 << 1;
      *(undefined4 *)(&stack0xffffffa8 + iVar1) = 0;
      *(int ***)(&stack0xffffffa4 + iVar1) = ppiStack_40;
      *(undefined4 *)(&stack0xffffffa0 + iVar1) = 0x41eff6;
      _memset(*(void **)(&stack0xffffffa4 + iVar1),*(int *)(&stack0xffffffa8 + iVar1),
              *(size_t *)(&stack0xffffffac + iVar1));
      uStack_8 = 0xffffffff;
      if (ppiStack_40 == (int **)0x0) {
        *(undefined4 *)(&stack0xffffffac + iVar1) = 0xa6;
        *(char **)(&stack0xffffffa8 + iVar1) = "a_str.c";
        *(undefined4 *)(&stack0xffffffa4 + iVar1) = 2;
        *(int *)(&stack0xffffffa0 + iVar1) = iStack_38;
        *(undefined4 *)(&stack0xffffff9c + iVar1) = 2;
        *(undefined4 *)(&stack0xffffff98 + iVar1) = 0x41f03b;
        ppiStack_40 = __calloc_dbg(*(int *)(&stack0xffffff9c + iVar1),
                                   *(int *)(&stack0xffffffa0 + iVar1),
                                   *(int **)(&stack0xffffffa4 + iVar1),
                                   *(int **)(&stack0xffffffa8 + iVar1),
                                   *(int **)(&stack0xffffffac + iVar1));
        if (ppiStack_40 == (int **)0x0) {
          ExceptionList = pvStack_14;
          return 0;
        }
        iStack_3c = iStack_3c + 1;
      }
      *(int *)(&stack0xffffffac + iVar1) = iStack_38;
      *(int ***)(&stack0xffffffa8 + iVar1) = ppiStack_40;
      *(LPCSTR *)(&stack0xffffffa4 + iVar1) = _LpSrcStr;
      *(DWORD *)(&stack0xffffffa0 + iVar1) = _DWInfoType;
      *(undefined4 *)(&stack0xffffff9c + iVar1) = 1;
      *(LPWORD *)(&stack0xffffff98 + iVar1) = _LpCharType;
      puVar5 = (undefined *)((int)&uStackY_6c + iVar1);
      *(undefined4 *)((int)&uStackY_6c + iVar1) = 0x41f070;
      iStack_34 = MultiByteToWideChar(*(UINT *)(&stack0xffffff98 + iVar1),
                                      *(DWORD *)(&stack0xffffff9c + iVar1),
                                      *(LPCSTR *)(&stack0xffffffa0 + iVar1),
                                      *(int *)(&stack0xffffffa4 + iVar1),
                                      *(LPWSTR *)(&stack0xffffffa8 + iVar1),
                                      *(int *)(&stack0xffffffac + iVar1));
      this_00 = extraout_ECX;
      puVar6 = puVar5;
      if (iStack_34 != 0) {
        *(int *)(puVar5 + -4) = _CchSrc;
        *(int *)(puVar5 + -8) = iStack_34;
        *(int ***)(puVar5 + -0xc) = ppiStack_40;
        *(_locale_t *)(puVar5 + -0x10) = _Plocinfo;
        puVar6 = puVar5 + -0x14;
        *(undefined4 *)(puVar5 + -0x14) = 0x41f08f;
        BStack_30 = GetStringTypeW(*(DWORD *)(puVar5 + -0x10),*(LPCWSTR *)(puVar5 + -0xc),
                                   *(int *)(puVar5 + -8),*(LPWORD *)(puVar5 + -4));
        this_00 = extraout_ECX_00;
      }
      if (iStack_3c != 0) {
        *(undefined4 *)(puVar6 + -4) = 2;
        *(int ***)(puVar6 + -8) = ppiStack_40;
        *(undefined4 *)(puVar6 + -0xc) = 0x41f0a3;
        __free_dbg(this_00,*(uint *)(puVar6 + -8),*(int **)(puVar6 + -4));
      }
    }
  }
  else {
    BStack_30 = 0;
  }
  ExceptionList = pvStack_14;
  return BStack_30;
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
  undefined4 auStack_38 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  
  __CrtMemCheckpoint(auStack_38);
  if (((iStack_24 == 0) && (iStack_30 == 0)) && (((DAT_00428d4c & 0x10) == 0 || (iStack_2c == 0))))
  {
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
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  UINT UVar4;
  LPCSTR lpSrcStr;
  undefined *puVar5;
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
  void *pvVar6;
  void *extraout_ECX_12;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uStackY_84;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int **ppiStack_44;
  int iStack_40;
  int iStack_3c;
  int **ppiStack_38;
  int iStack_34;
  int **ppiStack_2c;
  int *piStack_24;
  LPCSTR pCStack_20;
  undefined *puStack_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00427130;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff98;
  ExceptionList = &pvStack_14;
  puVar5 = &stack0xffffff98;
  if (_DAT_00429924 == 0) {
    uStackY_84 = 0x41e757;
    ExceptionList = &pvStack_14;
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      puVar5 = puStack_1c;
      if (DVar3 == 0x78) {
        _DAT_00429924 = 2;
      }
    }
    else {
      _DAT_00429924 = 1;
      puVar5 = puStack_1c;
    }
  }
  puStack_1c = puVar5;
  if (0 < (int)_LpSrcStr) {
    _LpSrcStr = (LPCSTR)_strncnt((char *)_DwMapFlag,(size_t)_LpSrcStr);
  }
  if ((_DAT_00429924 != 2) && (_DAT_00429924 != 0)) {
    if (_DAT_00429924 != 1) {
      ExceptionList = pvStack_14;
      return 0;
    }
    iStack_3c = 0;
    iStack_40 = 0;
    iStack_50 = 0;
    if (_CchDest == 0) {
      _CchDest = DAT_00429914;
    }
    uStackY_84 = 0x41ea10;
    iStack_48 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                    (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iStack_48 == 0) {
      ExceptionList = pvStack_14;
      return 0;
    }
    puVar5 = (undefined *)(iStack_48 * 2 + 3U & 0xfffffffc);
    iVar2 = -(int)puVar5;
    ppiStack_44 = (int **)(&stack0xffffff98 + iVar2);
    puStack_1c = &stack0xffffff98 + iVar2;
    uStack_8 = 0xffffffff;
    if (&stack0xffffff98 == puVar5) {
      *(undefined4 *)(&stack0xffffff94 + iVar2) = 0x101;
      *(char **)(&stack0xffffff90 + iVar2) = "a_map.c";
      *(undefined4 *)(&stack0xffffff8c + iVar2) = 2;
      *(int *)(&stack0xffffff88 + iVar2) = iStack_48 << 1;
      *(undefined4 *)(&stack0xffffff84 + iVar2) = 0x41ea85;
      ppiStack_44 = __malloc_dbg(*(int **)(&stack0xffffff88 + iVar2),
                                 *(int **)(&stack0xffffff8c + iVar2),
                                 *(int **)(&stack0xffffff90 + iVar2),
                                 *(int **)(&stack0xffffff94 + iVar2));
      if (ppiStack_44 == (int **)0x0) {
        ExceptionList = pvStack_14;
        return 0;
      }
      iStack_40 = iStack_40 + 1;
    }
    *(int *)(&stack0xffffff94 + iVar2) = iStack_48;
    *(int ***)(&stack0xffffff90 + iVar2) = ppiStack_44;
    *(LPCSTR *)(&stack0xffffff8c + iVar2) = _LpSrcStr;
    *(DWORD *)(&stack0xffffff88 + iVar2) = _DwMapFlag;
    *(undefined4 *)(&stack0xffffff84 + iVar2) = 1;
    *(int *)(&stack0xffffff80 + iVar2) = _CchDest;
    puVar5 = (undefined *)((int)&uStackY_84 + iVar2);
    *(undefined4 *)((int)&uStackY_84 + iVar2) = 0x41eabd;
    iVar2 = MultiByteToWideChar(*(UINT *)(&stack0xffffff80 + iVar2),
                                *(DWORD *)(&stack0xffffff84 + iVar2),
                                *(LPCSTR *)(&stack0xffffff88 + iVar2),
                                *(int *)(&stack0xffffff8c + iVar2),
                                *(LPWSTR *)(&stack0xffffff90 + iVar2),
                                *(int *)(&stack0xffffff94 + iVar2));
    pvVar6 = extraout_ECX_05;
    if (iVar2 != 0) {
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -8) = 0;
      *(int *)(puVar5 + -0xc) = iStack_48;
      *(int ***)(puVar5 + -0x10) = ppiStack_44;
      *(LPCWSTR *)(puVar5 + -0x14) = _LocaleName;
      *(_locale_t *)(puVar5 + -0x18) = _Plocinfo;
      puVar7 = puVar5 + -0x1c;
      *(undefined4 *)(puVar5 + -0x1c) = 0x41eae0;
      iStack_4c = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                               *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                               *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
      pvVar6 = extraout_ECX_06;
      puVar5 = puVar7;
      iStack_3c = iStack_4c;
      if (iStack_4c != 0) {
        if (((uint)_LocaleName & 0x400) == 0) {
          puVar5 = (undefined *)(iStack_4c * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar7 + -4) = 0x41eb55;
          iVar2 = -(int)puVar5;
          ppiStack_38 = (int **)(puVar7 + iVar2);
          puStack_1c = puVar7 + iVar2;
          uStack_8 = 0xffffffff;
          if (puVar7 == puVar5) {
            *(undefined4 *)(puVar7 + iVar2 + -4) = 0x13a;
            *(char **)(puVar7 + iVar2 + -8) = "a_map.c";
            *(undefined4 *)(puVar7 + iVar2 + -0xc) = 2;
            *(int *)(puVar7 + iVar2 + -0x10) = iStack_4c << 1;
            *(undefined4 *)(puVar7 + iVar2 + -0x14) = 0x41eba3;
            ppiStack_38 = __malloc_dbg(*(int **)(puVar7 + iVar2 + -0x10),
                                       *(int **)(puVar7 + iVar2 + -0xc),
                                       *(int **)(puVar7 + iVar2 + -8),*(int **)(puVar7 + iVar2 + -4)
                                      );
            pvVar6 = extraout_ECX_08;
            puVar5 = puVar7 + iVar2;
            if (ppiStack_38 == (int **)0x0) goto LAB_0041ec30;
            iStack_50 = iStack_50 + 1;
          }
          *(int *)(puVar7 + iVar2 + -4) = iStack_4c;
          *(int ***)(puVar7 + iVar2 + -8) = ppiStack_38;
          *(int *)(puVar7 + iVar2 + -0xc) = iStack_48;
          *(int ***)(puVar7 + iVar2 + -0x10) = ppiStack_44;
          *(LPCWSTR *)(puVar7 + iVar2 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + iVar2 + -0x18) = _Plocinfo;
          puVar9 = puVar7 + iVar2 + -0x1c;
          *(undefined4 *)(puVar7 + iVar2 + -0x1c) = 0x41ebd8;
          iVar2 = LCMapStringW(*(LCID *)(puVar7 + iVar2 + -0x18),*(DWORD *)(puVar7 + iVar2 + -0x14),
                               *(LPCWSTR *)(puVar7 + iVar2 + -0x10),*(int *)(puVar7 + iVar2 + -0xc),
                               *(LPWSTR *)(puVar7 + iVar2 + -8),*(int *)(puVar7 + iVar2 + -4));
          pvVar6 = extraout_ECX_09;
          puVar5 = puVar9;
          if (iVar2 != 0) {
            if (_LpDestStr == (LPSTR)0x0) {
              *(undefined4 *)(puVar9 + -4) = 0;
              *(undefined4 *)(puVar9 + -8) = 0;
              *(undefined4 *)(puVar9 + -0xc) = 0;
              *(undefined4 *)(puVar9 + -0x10) = 0;
              *(int *)(puVar9 + -0x14) = iStack_4c;
              *(int ***)(puVar9 + -0x18) = ppiStack_38;
              *(undefined4 *)(puVar9 + -0x1c) = 0;
              *(int *)(puVar9 + -0x20) = _CchDest;
              puVar10 = puVar9 + -0x24;
              *(undefined4 *)(puVar9 + -0x24) = 0x41ec00;
              iStack_3c = WideCharToMultiByte(*(UINT *)(puVar9 + -0x20),*(DWORD *)(puVar9 + -0x1c),
                                              *(LPCWSTR *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                              *(LPSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                              *(LPCSTR *)(puVar9 + -8),*(LPBOOL *)(puVar9 + -4));
              pvVar6 = extraout_ECX_10;
              puVar5 = puVar10;
            }
            else {
              *(undefined4 *)(puVar9 + -4) = 0;
              *(undefined4 *)(puVar9 + -8) = 0;
              *(LPSTR *)(puVar9 + -0xc) = _LpDestStr;
              *(int *)(puVar9 + -0x10) = _CchSrc;
              *(int *)(puVar9 + -0x14) = iStack_4c;
              *(int ***)(puVar9 + -0x18) = ppiStack_38;
              *(undefined4 *)(puVar9 + -0x1c) = 0;
              *(int *)(puVar9 + -0x20) = _CchDest;
              puVar11 = puVar9 + -0x24;
              *(undefined4 *)(puVar9 + -0x24) = 0x41ec2d;
              iStack_3c = WideCharToMultiByte(*(UINT *)(puVar9 + -0x20),*(DWORD *)(puVar9 + -0x1c),
                                              *(LPCWSTR *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                              *(LPSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                              *(LPCSTR *)(puVar9 + -8),*(LPBOOL *)(puVar9 + -4));
              pvVar6 = extraout_ECX_11;
              puVar5 = puVar11;
            }
          }
        }
        else if ((_LpDestStr != (LPSTR)0x0) && (iStack_4c <= (int)_LpDestStr)) {
          *(LPSTR *)(puVar7 + -4) = _LpDestStr;
          *(int *)(puVar7 + -8) = _CchSrc;
          *(int *)(puVar7 + -0xc) = iStack_48;
          *(int ***)(puVar7 + -0x10) = ppiStack_44;
          *(LPCWSTR *)(puVar7 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + -0x18) = _Plocinfo;
          puVar8 = puVar7 + -0x1c;
          *(undefined4 *)(puVar7 + -0x1c) = 0x41eb2a;
          LCMapStringW(*(LCID *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                       *(LPCWSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),*(LPWSTR *)(puVar7 + -8)
                       ,*(int *)(puVar7 + -4));
          pvVar6 = extraout_ECX_07;
          puVar5 = puVar8;
        }
      }
    }
LAB_0041ec30:
    if (iStack_50 != 0) {
      *(undefined4 *)(puVar5 + -4) = 2;
      *(int ***)(puVar5 + -8) = ppiStack_38;
      *(undefined4 *)(puVar5 + -0xc) = 0x41ec41;
      __free_dbg(ppiStack_38,*(uint *)(puVar5 + -8),*(int **)(puVar5 + -4));
      pvVar6 = extraout_ECX_12;
    }
    if (iStack_40 == 0) {
      ExceptionList = pvStack_14;
      return iStack_3c;
    }
    *(undefined4 *)(puVar5 + -4) = 2;
    *(int ***)(puVar5 + -8) = ppiStack_44;
    *(undefined4 *)(puVar5 + -0xc) = 0x41ec55;
    __free_dbg(pvVar6,*(uint *)(puVar5 + -8),*(int **)(puVar5 + -4));
    ExceptionList = pvStack_14;
    return iStack_3c;
  }
  pCStack_20 = (LPCSTR)0x0;
  ppiStack_2c = (int **)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_00429904;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_00429914;
  }
  UVar4 = ___ansicp((LCID)_Plocinfo);
  if (UVar4 == 0xffffffff) {
    ExceptionList = pvStack_14;
    return 0;
  }
  if (UVar4 == _CchDest) {
    uStackY_84 = 0x41e99a;
    iStack_34 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                             (LPSTR)_CchSrc,(int)_LpDestStr);
    pvVar6 = extraout_ECX_04;
    goto LAB_0041e99d;
  }
  uStackY_84 = 0x41e81e;
  lpSrcStr = (LPCSTR)___convertcp(_CchDest,UVar4,(char *)_DwMapFlag,(int *)&_LpSrcStr,(int **)0x0,0)
  ;
  if (lpSrcStr == (LPCSTR)0x0) {
    ExceptionList = pvStack_14;
    return 0;
  }
  uStackY_84 = 0x41e851;
  pCStack_20 = lpSrcStr;
  piStack_24 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                   (LPSTR)0x0,0);
  pvVar6 = extraout_ECX;
  if (piStack_24 != (int *)0x0) {
    uStack_8 = 0;
    ppiStack_2c = (int **)&stack0xffffff98;
    puStack_1c = &stack0xffffff98;
    _memset(&stack0xffffff98,0,(size_t)piStack_24);
    uStack_8 = 0xffffffff;
    if (&stack0x00000000 == (undefined *)0x68) {
      ppiStack_2c = __malloc_dbg(piStack_24,(int *)0x2,(int *)"a_map.c",(int *)0xa6);
      if (ppiStack_2c == (int **)0x0) {
        iStack_34 = 0;
        pvVar6 = extraout_ECX_00;
        goto LAB_0041e966;
      }
      _memset(ppiStack_2c,0,(size_t)piStack_24);
      bVar1 = true;
    }
    uStackY_84 = 0x41e920;
    piStack_24 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                     (LPSTR)ppiStack_2c,(int)piStack_24);
    if (piStack_24 == (int *)0x0) {
      iStack_34 = 0;
      pvVar6 = extraout_ECX_01;
    }
    else {
      uStackY_84 = 0x41e94f;
      iVar2 = ___convertcp(UVar4,_CchDest,(char *)ppiStack_2c,(int *)&piStack_24,(int **)_CchSrc,
                           (int)_LpDestStr);
      pvVar6 = extraout_ECX_02;
      if (iVar2 == 0) {
        iStack_34 = 0;
      }
      else {
        iStack_34 = 1;
      }
    }
  }
LAB_0041e966:
  if (bVar1) {
    __free_dbg(ppiStack_2c,(uint)ppiStack_2c,(int *)0x2);
    pvVar6 = extraout_ECX_03;
  }
LAB_0041e99d:
  if (pCStack_20 != (LPCSTR)0x0) {
    __free_dbg(pvVar6,(uint)pCStack_20,(int *)0x2);
  }
  ExceptionList = pvStack_14;
  return iStack_34;
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
  undefined4 uStack_18;
  code **ppcStack_14;
  int iStack_10;
  undefined4 uStack_c;
  code *pcStack_8;
  
  switch(_SigNum) {
  case 2:
    ppcStack_14 = &DAT_004298dc;
    pcStack_8 = DAT_004298dc;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    puVar1 = _siglookup(_SigNum);
    ppcStack_14 = (code **)(puVar1 + 2);
    pcStack_8 = *ppcStack_14;
    break;
  case 0xf:
    ppcStack_14 = &DAT_004298e8;
    pcStack_8 = DAT_004298e8;
    break;
  case 0x15:
    ppcStack_14 = &DAT_004298e0;
    pcStack_8 = DAT_004298e0;
    break;
  case 0x16:
    ppcStack_14 = &DAT_004298e4;
    pcStack_8 = DAT_004298e4;
  }
  if (pcStack_8 != (code *)0x1) {
    if (pcStack_8 == (code *)0x0) {
      __exit(3);
    }
    if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
      uStack_c = DAT_00429690;
      DAT_00429690 = 0;
      if (_SigNum == 8) {
        uStack_18 = DAT_00428c14;
        DAT_00428c14 = 0x8c;
      }
    }
    if (_SigNum == 8) {
      for (iStack_10 = DAT_00428c08; iStack_10 < DAT_00428c08 + _DAT_00428c0c;
          iStack_10 = iStack_10 + 1) {
        *(undefined4 *)(iStack_10 * 0xc + 0x428b98) = 0;
      }
    }
    else {
      *ppcStack_14 = (code *)0x0;
    }
    if (_SigNum == 8) {
      (*pcStack_8)(8,DAT_00428c14);
    }
    else {
      (*pcStack_8)(_SigNum);
      if ((_SigNum != 0xb) && (_SigNum != 4)) {
        return 0;
      }
    }
    if (_SigNum == 8) {
      DAT_00428c14 = uStack_18;
    }
    DAT_00429690 = uStack_c;
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
  DWORD DStack_74;
  UINT UStack_70;
  HANDLE *ppvStack_6c;
  int **ppiStack_68;
  UINT *pUStack_60;
  UINT UStack_5c;
  uint uStack_58;
  int iStack_50;
  _STARTUPINFOA _Stack_4c;
  
  ppiStack_68 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"ioinit.c",(int *)0x82);
  if (ppiStack_68 == (int **)0x0) {
    iVar3 = -1;
  }
  else {
    DAT_0042af94 = 0x20;
    DAT_0042afe0 = ppiStack_68;
    for (; ppiStack_68 < DAT_0042afe0 + 0x40; ppiStack_68 = ppiStack_68 + 2) {
      *(undefined *)(ppiStack_68 + 1) = 0;
      *ppiStack_68 = (int *)0xffffffff;
      *(undefined *)((int)ppiStack_68 + 5) = 10;
    }
    GetStartupInfoA(&_Stack_4c);
    if ((_Stack_4c.cbReserved2 != 0) && ((UINT *)_Stack_4c.lpReserved2 != (UINT *)0x0)) {
      UStack_70 = *(UINT *)_Stack_4c.lpReserved2;
      pUStack_60 = (UINT *)((int)_Stack_4c.lpReserved2 + 4);
      ppvStack_6c = (HANDLE *)((int)pUStack_60 + UStack_70);
      if (0x7ff < (int)UStack_70) {
        UStack_70 = 0x800;
      }
      UStack_5c = UStack_70;
      iStack_50 = 1;
      while ((int)DAT_0042af94 < (int)UStack_70) {
        ppiStack_68 = __malloc_dbg((int *)0x100,(int *)0x2,(int *)"ioinit.c",(int *)0xb7);
        if (ppiStack_68 == (int **)0x0) {
          UStack_5c = DAT_0042af94;
          break;
        }
        (&DAT_0042afe0)[iStack_50] = ppiStack_68;
        DAT_0042af94 = DAT_0042af94 + 0x20;
        for (; ppiStack_68 < (int **)((int)(&DAT_0042afe0)[iStack_50] + 0x100);
            ppiStack_68 = ppiStack_68 + 2) {
          *(undefined *)(ppiStack_68 + 1) = 0;
          *ppiStack_68 = (int *)0xffffffff;
          *(undefined *)((int)ppiStack_68 + 5) = 10;
        }
        iStack_50 = iStack_50 + 1;
      }
      for (uStack_58 = 0; (int)uStack_58 < (int)UStack_5c; uStack_58 = uStack_58 + 1) {
        if (((*ppvStack_6c != (HANDLE)0xffffffff) && ((*(byte *)pUStack_60 & 1) != 0)) &&
           (((*(byte *)pUStack_60 & 8) != 0 || (DVar4 = GetFileType(*ppvStack_6c), DVar4 != 0)))) {
          ppvVar1 = (HANDLE *)((int)(&DAT_0042afe0)[(int)uStack_58 >> 5] + (uStack_58 & 0x1f) * 8);
          *ppvVar1 = *ppvStack_6c;
          *(byte *)(ppvVar1 + 1) = *(byte *)pUStack_60;
        }
        pUStack_60 = (UINT *)((int)pUStack_60 + 1);
        ppvStack_6c = ppvStack_6c + 1;
      }
    }
    for (uStack_58 = 0; (int)uStack_58 < 3; uStack_58 = uStack_58 + 1) {
      ppiVar2 = DAT_0042afe0 + uStack_58 * 2;
      if (*ppiVar2 == (int *)0xffffffff) {
        *(undefined *)(ppiVar2 + 1) = 0x81;
        if (uStack_58 == 0) {
          DStack_74 = 0xfffffff6;
        }
        else {
          DStack_74 = 0xfffffff5 - (uStack_58 != 1);
        }
        hFile = (int *)GetStdHandle(DStack_74);
        if ((hFile == (int *)0xffffffff) || (DVar4 = GetFileType(hFile), DVar4 == 0)) {
          *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x40;
        }
        else {
          *ppiVar2 = hFile;
          if ((DVar4 & 0xff) == 2) {
            *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x40;
          }
          else if ((DVar4 & 0xff) == 3) {
            *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 8;
          }
        }
      }
      else {
        *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x80;
      }
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
          iVar2 = _CheckBytes((char *)((int)(_Dst + 8) + (int)_Dst[4]),DAT_00428d58,4);
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
  byte *pbStack_10;
  byte *pbStack_8;
  
  bVar1 = false;
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  if (DAT_0042b100 == (byte *)0x0) {
    pbStack_10 = &DAT_004250ec;
  }
  else {
    pbStack_10 = DAT_0042b100;
  }
  pbStack_8 = pbStack_10;
  while ((0x20 < *pbStack_8 || ((*pbStack_8 != 0 && (bVar1))))) {
    if (*pbStack_8 == 0x22) {
      bVar1 = !bVar1;
    }
    iVar2 = __ismbblead((uint)*pbStack_8);
    if ((iVar2 != 0) && (pbStack_8 != (byte *)0x0)) {
      pbStack_8 = pbStack_8 + 1;
    }
    pbStack_8 = pbStack_8 + 1;
  }
  for (; (*pbStack_8 != 0 && (*pbStack_8 < 0x21)); pbStack_8 = pbStack_8 + 1) {
  }
  return pbStack_8;
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
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_004256c8;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  for (ppcVar1 = (code **)&DAT_00427828; ppcVar1 < &DAT_00427a2c; ppcVar1 = ppcVar1 + 1) {
    uStack_8 = 0;
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  ExceptionList = pvStack_14;
  return;
}



int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE FStack_30;
  FILE *pFStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  pFStack_10 = &FStack_30;
  puStack_8 = (undefined4 *)&stack0x0000000c;
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
  pFStack_10->_cnt = 0x7fffffff;
  pFStack_10->_flag = 0x42;
  pFStack_10->_base = _Dest;
  pFStack_10->_ptr = _Dest;
  iStack_c = __output(pFStack_10,(byte *)_Format,puStack_8);
  if (_Dest != (char *)0x0) {
    pFStack_10->_cnt = pFStack_10->_cnt + -1;
    if (pFStack_10->_cnt < 0) {
      __flsbuf(0,pFStack_10);
    }
    else {
      *pFStack_10->_ptr = '\0';
      pFStack_10->_ptr = pFStack_10->_ptr + 1;
    }
  }
  return iStack_c;
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
  undefined8 uVar5;
  undefined4 uVar6;
  _OSVERSIONINFOA _Stack_124;
  uint uStack_84;
  _STARTUPINFOA _Stack_64;
  _OSVERSIONINFOA *p_Stack_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00425028;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  _Stack_124.szCSDVersion[124] = '\0';
  _Stack_124.szCSDVersion[125] = '$';
  _Stack_124.szCSDVersion[126] = 'A';
  _Stack_124.szCSDVersion[127] = '\0';
  p_Stack_1c = &_Stack_124;
  _Stack_124.dwOSVersionInfoSize = 0x94;
  ExceptionList = &pvStack_14;
  GetVersionExA(&_Stack_124);
  DAT_00429638 = _Stack_124.dwPlatformId;
  DAT_00429644 = _Stack_124.dwMajorVersion;
  _DAT_00429648 = _Stack_124.dwMinorVersion;
  DAT_0042963c = _Stack_124.dwBuildNumber & 0x7fff;
  if (_Stack_124.dwPlatformId != 2) {
    DAT_0042963c = DAT_0042963c | 0x8000;
  }
  _DAT_00429640 = _Stack_124.dwMajorVersion * 0x100 + _Stack_124.dwMinorVersion;
  bVar1 = _check_managed_app();
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    _fast_error_exit(0x1c);
  }
  __RTC_Initialize();
  uStack_8 = 0;
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
  iVar2 = __cinit(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  _Stack_64.dwFlags = 0;
  GetStartupInfoA(&_Stack_64);
  pbVar3 = __wincmdln();
  if ((_Stack_64.dwFlags & 1) == 0) {
    uStack_84 = 10;
  }
  else {
    uStack_84 = (uint)_Stack_64.wShowWindow;
  }
  uVar6 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  uVar5 = thunk_FUN_00411bc0(pHVar4,uVar6,pbVar3,uStack_84);
  if (CONCAT31(extraout_var,bVar1) == 0) {
                    // WARNING: Subroutine does not return
    _exit((int)uVar5);
  }
  __cexit();
  ExceptionList = pvStack_14;
  return (int)uVar5;
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
        cVar3 = '\0';
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
  uint uStack_40;
  uint uStack_3c;
  uint uStack_34;
  uint *puStack_1c;
  uint uStack_14;
  
  uVar4 = param_1[4];
  uVar9 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar9 * 0x204);
  puStack_1c = (uint *)(param_2 + -4);
  uStack_40 = *puStack_1c - 1;
  if ((uStack_40 & 1) == 0) {
    puVar7 = (uint *)((int)puStack_1c + uStack_40);
    uVar5 = *puVar7;
    uVar6 = *(uint *)(param_2 + -8);
    if ((uVar5 & 1) == 0) {
      uStack_14 = ((int)uVar5 >> 4) - 1;
      if (0x3f < uStack_14) {
        uStack_14 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)uStack_14;
        if (uStack_14 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
          *(char *)(uVar4 + uStack_14 + 4) = *(char *)(uVar4 + uStack_14 + 4) + -1;
          if (*(char *)(uVar4 + uStack_14 + 4) == '\0') {
            *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
          *(char *)(uVar4 + uStack_14 + 4) = *(char *)(uVar4 + uStack_14 + 4) + -1;
          if (*(char *)(uVar4 + uStack_14 + 4) == '\0') {
            param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      uStack_40 = uStack_40 + uVar5;
    }
    uStack_3c = ((int)uStack_40 >> 4) - 1;
    if (0x3f < uStack_3c) {
      uStack_3c = 0x3f;
    }
    if ((uVar6 & 1) == 0) {
      puStack_1c = (uint *)((int)puStack_1c - uVar6);
      uStack_34 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uStack_34) {
        uStack_34 = 0x3f;
      }
      uStack_40 = uStack_40 + uVar6;
      uStack_3c = ((int)uStack_40 >> 4) - 1;
      if (0x3f < uStack_3c) {
        uStack_3c = 0x3f;
      }
      if (uStack_34 != uStack_3c) {
        if (puStack_1c[1] == puStack_1c[2]) {
          bVar8 = (byte)uStack_34;
          if (uStack_34 < 0x20) {
            *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
            *(char *)(uVar4 + uStack_34 + 4) = *(char *)(uVar4 + uStack_34 + 4) + -1;
            if (*(char *)(uVar4 + uStack_34 + 4) == '\0') {
              *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
            }
          }
          else {
            *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
            *(char *)(uVar4 + uStack_34 + 4) = *(char *)(uVar4 + uStack_34 + 4) + -1;
            if (*(char *)(uVar4 + uStack_34 + 4) == '\0') {
              param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
            }
          }
        }
        *(uint *)(puStack_1c[2] + 4) = puStack_1c[1];
        *(uint *)(puStack_1c[1] + 8) = puStack_1c[2];
      }
    }
    if (((uVar6 & 1) != 0) || (uStack_34 != uStack_3c)) {
      piVar1 = piVar2 + uStack_3c * 2;
      puStack_1c[1] = piVar1[1];
      puStack_1c[2] = (uint)piVar1;
      piVar1[1] = (int)puStack_1c;
      *(uint **)(puStack_1c[1] + 8) = puStack_1c;
      if (puStack_1c[1] == puStack_1c[2]) {
        bVar8 = (byte)uStack_3c;
        if (uStack_3c < 0x20) {
          cVar3 = *(char *)(uVar4 + uStack_3c + 4);
          *(char *)(uVar4 + uStack_3c + 4) = *(char *)(uVar4 + uStack_3c + 4) + '\x01';
          if (cVar3 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar4 + 0x44 + uVar9 * 4);
        }
        else {
          cVar3 = *(char *)(uVar4 + uStack_3c + 4);
          *(char *)(uVar4 + uStack_3c + 4) = *(char *)(uVar4 + uStack_3c + 4) + '\x01';
          if (cVar3 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
        }
      }
    }
    *puStack_1c = uStack_40;
    *(uint *)((int)puStack_1c + (uStack_40 - 4)) = uStack_40;
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
  
  DAT_00428c4c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00428c48 = in_EAX;
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
  undefined4 auStack_f4 [49];
  HACCEL pHStack_30;
  tagMSG tStack_24;
  undefined4 uStack_8;
  
  puVar3 = auStack_f4;
  for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
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
    pHStack_30 = (HACCEL)uVar4;
    while( true ) {
      GetMessageA(&tStack_24,(HWND)0x0,0,0);
      uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) break;
      TranslateAcceleratorA(tStack_24.hwnd,pHStack_30,&tStack_24);
      uVar4 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
      if ((int)uVar4 == 0) {
        TranslateMessage(&tStack_24);
        __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
        DispatchMessageA(&tStack_24);
        __RTC_CheckEsp(extraout_ECX_05,extraout_EDX_05);
      }
    }
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411cf4);
  uStack_8 = 0x411cee;
  uVar4 = __RTC_CheckEsp(extraout_ECX_06,uVar2);
  return uVar4;
}



int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  code *pcVar1;
  FILE *_File_00;
  int iVar2;
  uint uVar3;
  undefined *puStack_18;
  uint uStack_10;
  uint uStack_8;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x66,(char *)0x0,"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  _File_00 = _File;
  uVar3 = _File->_file;
  if (((_File->_flag & 0x82U) != 0) && ((_File->_flag & 0x40U) == 0)) {
    if ((_File->_flag & 1U) != 0) {
      _File->_cnt = 0;
      if ((_File->_flag & 0x10U) == 0) {
        _File->_flag = _File->_flag | 0x20;
        return -1;
      }
      _File->_ptr = _File->_base;
      _File->_flag = _File->_flag & 0xfffffffe;
    }
    _File->_flag = _File->_flag | 2;
    _File->_flag = _File->_flag & 0xffffffef;
    _File->_cnt = 0;
    uStack_10 = 0;
    if (((_File->_flag & 0x10cU) == 0) &&
       (((_File != (FILE *)&DAT_00428f20 && (_File != (FILE *)&DAT_00428f40)) ||
        (iVar2 = __isatty(uVar3), iVar2 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108U) == 0) {
      uStack_8 = 1;
      uStack_10 = __write(uVar3,&_Ch,1);
    }
    else {
      if (((int)_File_00->_ptr - (int)_File_00->_base < 0) &&
         (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x9d,(char *)0x0,
                                 "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)")
         , iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      uStack_8 = (int)_File_00->_ptr - (int)_File_00->_base;
      _File_00->_ptr = _File_00->_base + 1;
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)uStack_8 < 1) {
        if (uVar3 == 0xffffffff) {
          puStack_18 = &DAT_00428c34;
        }
        else {
          puStack_18 = (undefined *)((&DAT_0042afe0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 8);
        }
        if ((puStack_18[4] & 0x20) != 0) {
          __lseek(uVar3,0,2);
        }
      }
      else {
        uStack_10 = __write(uVar3,_File_00->_base,uStack_8);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (uStack_10 == uStack_8) {
      uVar3 = _Ch & 0xff;
    }
    else {
      _File_00->_flag = _File_00->_flag | 0x20;
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  _File->_flag = _File->_flag | 0x20;
  return -1;
}



void __cdecl __CrtMemDumpAllObjectsSince(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_c = (undefined4 *)0x0;
  iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    puStack_c = (undefined4 *)*param_1;
  }
  puStack_8 = DAT_00429850;
  do {
    if ((puStack_8 == (undefined4 *)0x0) || (puStack_8 == puStack_c)) {
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%s");
      if (iVar2 != 1) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((puStack_8[5] & 0xffff) != 3) && ((puStack_8[5] & 0xffff) != 0)) &&
       (((puStack_8[5] & 0xffff) != 2 || ((DAT_00428d4c & 0x10) != 0)))) {
      if (puStack_8[2] != 0) {
        iVar2 = __CrtIsValidPointer((void *)puStack_8[2],1,0);
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
      if ((puStack_8[5] & 0xffff) == 4) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                               "client block at 0x%p, subtype %x, %Iu bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_0042af60 == (code *)0x0) {
          __printMemBlockData((int)puStack_8);
        }
        else {
          (*DAT_0042af60)(puStack_8 + 8,puStack_8[4]);
        }
      }
      else if (puStack_8[5] == 1) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                               "normal block at 0x%p, %Iu bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        __printMemBlockData((int)puStack_8);
      }
      else if ((puStack_8[5] & 0xffff) == 2) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                               "crt block at 0x%p, subtype %x, %Iu bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        __printMemBlockData((int)puStack_8);
      }
    }
    puStack_8 = (undefined4 *)*puStack_8;
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
    if (DAT_004297d8 != (code *)0x0) {
      (*DAT_004297d8)();
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
  (*(code *)PTR___exit_00428b40)(0xff);
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
  int iStack_10;
  
  piVar4 = _xcptlookup(_ExceptionNum);
  uVar3 = DAT_00429690;
  if ((piVar4 == (int *)0x0) || (piVar4[2] == 0)) {
    iVar5 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar4[2] == 5) {
    piVar4[2] = 0;
    iVar5 = 1;
  }
  else if (piVar4[2] == 1) {
    iVar5 = -1;
    DAT_00429690 = (_EXCEPTION_POINTERS *)uVar3;
  }
  else {
    pcVar1 = (code *)piVar4[2];
    DAT_00429690 = _ExceptionPtr;
    if (piVar4[1] == 8) {
      for (iStack_10 = DAT_00428c08; uVar2 = DAT_00428c14, iStack_10 < DAT_00428c08 + _DAT_00428c0c;
          iStack_10 = iStack_10 + 1) {
        *(undefined4 *)(iStack_10 * 0xc + 0x428b98) = 0;
      }
      if (*piVar4 == -0x3fffff72) {
        DAT_00428c14 = 0x83;
      }
      else if (*piVar4 == -0x3fffff70) {
        DAT_00428c14 = 0x81;
      }
      else if (*piVar4 == -0x3fffff6f) {
        DAT_00428c14 = 0x84;
      }
      else if (*piVar4 == -0x3fffff6d) {
        DAT_00428c14 = 0x85;
      }
      else if (*piVar4 == -0x3fffff73) {
        DAT_00428c14 = 0x82;
      }
      else if (*piVar4 == -0x3fffff71) {
        DAT_00428c14 = 0x86;
      }
      else if (*piVar4 == -0x3fffff6e) {
        DAT_00428c14 = 0x8a;
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
  DWORD DStack_8;
  
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
      DStack_8 = GetLastError();
      goto LAB_00422f89;
    }
  }
LAB_00422f77:
  DStack_8 = 0;
LAB_00422f89:
  __free_osfhnd(_FileHandle);
  *(undefined *)((&DAT_0042afe0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 8) = 0;
  if (DStack_8 == 0) {
    iVar4 = 0;
  }
  else {
    __dosmaperr(DStack_8);
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
  int iStack_38;
  uint uStack_34;
  uint *puStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_8;
  
  puVar5 = DAT_0042aca0 + DAT_0042ac9c * 5;
  uVar8 = param_1 + 0x17U & 0xfffffff0;
  iVar9 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar7 = (byte)iVar9;
  if (iVar9 < 0x20) {
    uStack_1c = 0xffffffff >> (bVar7 & 0x1f);
    uStack_34 = 0xffffffff;
  }
  else {
    uStack_1c = 0;
    uStack_34 = 0xffffffff >> (bVar7 - 0x20 & 0x1f);
  }
  for (puStack_20 = DAT_0042aca8;
      (puStack_20 < puVar5 && ((uStack_1c & *puStack_20 | uStack_34 & puStack_20[1]) == 0));
      puStack_20 = puStack_20 + 5) {
  }
  if (puStack_20 == puVar5) {
    for (puStack_20 = DAT_0042aca0;
        (puStack_20 < DAT_0042aca8 && ((uStack_1c & *puStack_20 | uStack_34 & puStack_20[1]) == 0));
        puStack_20 = puStack_20 + 5) {
    }
    if (puStack_20 == DAT_0042aca8) {
      for (; (puStack_20 < puVar5 && (puStack_20[2] == 0)); puStack_20 = puStack_20 + 5) {
      }
      if (puStack_20 == puVar5) {
        for (puStack_20 = DAT_0042aca0; (puStack_20 < DAT_0042aca8 && (puStack_20[2] == 0));
            puStack_20 = puStack_20 + 5) {
        }
        if ((puStack_20 == DAT_0042aca8) &&
           (puStack_20 = ___sbh_alloc_new_region(), puStack_20 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar9 = ___sbh_alloc_new_group((int)puStack_20);
      *(int *)puStack_20[4] = iVar9;
      if (*(int *)puStack_20[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_0042aca8 = puStack_20;
  piVar4 = (int *)puStack_20[4];
  iStack_18 = *piVar4;
  if ((iStack_18 == -1) ||
     ((uStack_1c & piVar4[iStack_18 + 0x11] | uStack_34 & piVar4[iStack_18 + 0x31]) == 0)) {
    iStack_18 = 0;
    while ((uStack_1c & piVar4[iStack_18 + 0x11] | uStack_34 & piVar4[iStack_18 + 0x31]) == 0) {
      iStack_18 = iStack_18 + 1;
    }
  }
  piVar2 = piVar4 + iStack_18 * 0x81 + 0x51;
  iStack_38 = 0;
  uStack_8 = uStack_1c & piVar4[iStack_18 + 0x11];
  if (uStack_8 == 0) {
    iStack_38 = 0x20;
    uStack_8 = uStack_34 & piVar4[iStack_18 + 0x31];
  }
  for (; -1 < (int)uStack_8; uStack_8 = uStack_8 << 1) {
    iStack_38 = iStack_38 + 1;
  }
  piVar6 = (int *)piVar2[iStack_38 * 2 + 1];
  iVar9 = *piVar6 - uVar8;
  iStack_14 = (iVar9 >> 4) + -1;
  if (0x3f < iStack_14) {
    iStack_14 = 0x3f;
  }
  if (iStack_14 != iStack_38) {
    if (piVar6[1] == piVar6[2]) {
      bVar7 = (byte)iStack_38;
      if (iStack_38 < 0x20) {
        piVar4[iStack_18 + 0x11] = ~(0x80000000U >> (bVar7 & 0x1f)) & piVar4[iStack_18 + 0x11];
        *(char *)((int)piVar4 + iStack_38 + 4) = *(char *)((int)piVar4 + iStack_38 + 4) + -1;
        if (*(char *)((int)piVar4 + iStack_38 + 4) == '\0') {
          *puStack_20 = ~(0x80000000U >> (bVar7 & 0x1f)) & *puStack_20;
        }
      }
      else {
        piVar4[iStack_18 + 0x31] =
             ~(0x80000000U >> (bVar7 - 0x20 & 0x1f)) & piVar4[iStack_18 + 0x31];
        *(char *)((int)piVar4 + iStack_38 + 4) = *(char *)((int)piVar4 + iStack_38 + 4) + -1;
        if (*(char *)((int)piVar4 + iStack_38 + 4) == '\0') {
          puStack_20[1] = ~(0x80000000U >> (bVar7 - 0x20 & 0x1f)) & puStack_20[1];
        }
      }
    }
    *(int *)(piVar6[2] + 4) = piVar6[1];
    *(int *)(piVar6[1] + 8) = piVar6[2];
    if (iVar9 != 0) {
      piVar1 = piVar2 + iStack_14 * 2;
      piVar6[1] = piVar1[1];
      piVar6[2] = (int)piVar1;
      piVar1[1] = (int)piVar6;
      *(int **)(piVar6[1] + 8) = piVar6;
      if (piVar6[1] == piVar6[2]) {
        bVar7 = (byte)iStack_14;
        if (iStack_14 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + iStack_14 + 4);
          *(char *)((int)piVar4 + iStack_14 + 4) = *(char *)((int)piVar4 + iStack_14 + 4) + '\x01';
          if (cVar3 == '\0') {
            *puStack_20 = 0x80000000U >> (bVar7 & 0x1f) | *puStack_20;
          }
          piVar4[iStack_18 + 0x11] = 0x80000000U >> (bVar7 & 0x1f) | piVar4[iStack_18 + 0x11];
        }
        else {
          cVar3 = *(char *)((int)piVar4 + iStack_14 + 4);
          *(char *)((int)piVar4 + iStack_14 + 4) = *(char *)((int)piVar4 + iStack_14 + 4) + '\x01';
          if (cVar3 == '\0') {
            puStack_20[1] = 0x80000000U >> (bVar7 - 0x20 & 0x1f) | puStack_20[1];
          }
          piVar4[iStack_18 + 0x31] = 0x80000000U >> (bVar7 - 0x20 & 0x1f) | piVar4[iStack_18 + 0x31]
          ;
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
  if (((iVar9 == 0) && (puStack_20 == DAT_0042ac98)) && (iStack_18 == DAT_0042acb0)) {
    DAT_0042ac98 = (uint *)0x0;
  }
  *piVar4 = iStack_18;
  return piVar6 + 1;
}



int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  uint _MaxCharCount;
  int iStack_8;
  
  iStack_8 = 0;
  if ((((_File->_flag & 3U) == 2) && ((_File->_flag & 0x108U) != 0)) &&
     (_MaxCharCount = (int)_File->_ptr - (int)_File->_base, 0 < (int)_MaxCharCount)) {
    uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
    if (uVar1 == _MaxCharCount) {
      if ((_File->_flag & 0x80U) != 0) {
        _File->_flag = _File->_flag & 0xfffffffd;
      }
    }
    else {
      _File->_flag = _File->_flag | 0x20;
      iStack_8 = -1;
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return iStack_8;
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
  int **ppiStack_c;
  
  ppiVar1 = __malloc_dbg((int *)(param_2 * param_1),param_3,param_4,param_5);
  if (ppiVar1 != (int **)0x0) {
    for (ppiStack_c = ppiVar1; ppiStack_c < (int **)((int)ppiVar1 + (int)(int *)(param_2 * param_1))
        ; ppiStack_c = (int **)((int)ppiStack_c + 1)) {
      *(undefined *)ppiStack_c = 0;
    }
  }
  return ppiVar1;
}



void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR aCStack_14 [6];
  undefined uStack_e;
  int iStack_c;
  long lStack_8;
  
  iStack_c = DAT_00428eb0;
  uStack_e = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,aCStack_14,6);
  if (iVar1 == 0) {
    lStack_8 = -1;
  }
  else {
    lStack_8 = _atol(aCStack_14);
  }
  ___security_check_cookie_4(iStack_c);
  return;
}



long __cdecl _atol(char *_Str)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iStack_14;
  uint uStack_10;
  long lStack_c;
  
  while (iVar2 = __ismbcspace((uint)(byte)*_Str), iVar2 != 0) {
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  if ((uVar3 == 0x2d) || (pbVar1 = (byte *)(_Str + 1), uStack_10 = uVar3, uVar3 == 0x2b)) {
    uStack_10 = (uint)(byte)_Str[1];
    pbVar1 = (byte *)(_Str + 2);
  }
  _Str = (char *)pbVar1;
  lStack_c = 0;
  while( true ) {
    if ((uStack_10 < 0x30) || (0x39 < uStack_10)) {
      iStack_14 = -1;
    }
    else {
      iStack_14 = uStack_10 - 0x30;
    }
    if (iStack_14 == -1) break;
    lStack_c = lStack_c * 10 + iStack_14;
    uStack_10 = (uint)(byte)*_Str;
    _Str = _Str + 1;
  }
  if (uVar3 == 0x2d) {
    lStack_c = -lStack_c;
  }
  return lStack_c;
}



int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (DAT_0042b0fc != (code *)0x0) {
    (*DAT_0042b0fc)(param_1);
  }
  iVar1 = __initterm_e((undefined **)&DAT_0042830c,(undefined **)&DAT_00428520);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_004110cd);
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
  uint **ppuStack_10;
  int iStack_c;
  uint *puStack_8;
  
  if (_DAT_0042b0f8 == 0) {
    ___initmbctable();
  }
  iStack_c = 0;
  puStack_8 = DAT_004295fc;
  if (DAT_004295fc == (uint *)0x0) {
    iVar1 = -1;
  }
  else {
    for (; *(char *)puStack_8 != '\0'; puStack_8 = (uint *)((int)puStack_8 + sVar2 + 1)) {
      if (*(char *)puStack_8 != '=') {
        iStack_c = iStack_c + 1;
      }
      sVar2 = _strlen((char *)puStack_8);
    }
    DAT_00429658 = (uint **)__malloc_dbg((int *)(iStack_c * 4 + 4),(int *)0x2,(int *)"stdenvp.c",
                                         (int *)0x75);
    if (DAT_00429658 == (uint **)0x0) {
      iVar1 = -1;
    }
    else {
      puStack_8 = DAT_004295fc;
      this = extraout_ECX;
      ppuStack_10 = DAT_00429658;
      while (*(char *)puStack_8 != '\0') {
        sVar2 = _strlen((char *)puStack_8);
        if (*(char *)puStack_8 != '=') {
          ppiVar3 = __malloc_dbg((int *)(sVar2 + 1),(int *)0x2,(int *)"stdenvp.c",(int *)0x82);
          *ppuStack_10 = (uint *)ppiVar3;
          if (*ppuStack_10 == (uint *)0x0) {
            __free_dbg(DAT_00429658,(uint)DAT_00429658,(int *)0x2);
            DAT_00429658 = (uint **)0x0;
            return -1;
          }
          thunk_FUN_0041a040(*ppuStack_10,puStack_8);
          ppuStack_10 = ppuStack_10 + 1;
        }
        this = (uint *)((int)puStack_8 + (int)(int *)(sVar2 + 1));
        puStack_8 = this;
      }
      __free_dbg(this,(uint)DAT_004295fc,(int *)0x2);
      DAT_004295fc = (uint *)0x0;
      *ppuStack_10 = (uint *)0x0;
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
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 auStack_fc [49];
  WNDCLASSEXA WStack_38;
  undefined4 uStack_8;
  
  puVar3 = auStack_fc;
  for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  WStack_38.cbSize = 0x30;
  WStack_38.style = 3;
  WStack_38.lpfnWndProc = (WNDPROC)&LAB_00411447;
  WStack_38.cbClsExtra = 0;
  WStack_38.cbWndExtra = 0;
  WStack_38.hInstance = param_1;
  LoadIconA(param_1,(LPCSTR)0x6b);
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  WStack_38.hIcon = (HICON)uVar4;
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  uVar4 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  WStack_38.hCursor = (HCURSOR)uVar4;
  WStack_38.hbrBackground = (HBRUSH)0x6;
  WStack_38.lpszMenuName = (LPCSTR)0x6d;
  WStack_38.lpszClassName = &DAT_00429500;
  LoadIconA(WStack_38.hInstance,(LPCSTR)0x6c);
  uVar4 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  WStack_38.hIconSm = (HICON)uVar4;
  RegisterClassExA(&WStack_38);
  uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411e3d);
  uStack_8 = 0x411e39;
  uVar4 = __RTC_CheckEsp(extraout_ECX_03,uVar2);
  return uVar4;
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
  
  puVar2 = local_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
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
  undefined4 uStack_8;
  
  puVar3 = local_f4;
  for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
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
      GetMessageA(&local_24,(HWND)0x0,0,0);
      uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) break;
      TranslateAcceleratorA(local_24.hwnd,local_30,&local_24);
      uVar4 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
      if ((int)uVar4 == 0) {
        TranslateMessage(&local_24);
        __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
        DispatchMessageA(&local_24);
        __RTC_CheckEsp(extraout_ECX_05,extraout_EDX_05);
      }
    }
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411cf4);
  uStack_8 = 0x411cee;
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
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_fc [49];
  WNDCLASSEXA local_38;
  undefined4 uStack_8;
  
  puVar3 = local_fc;
  for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_38.cbSize = 0x30;
  local_38.style = 3;
  local_38.lpfnWndProc = (WNDPROC)&LAB_00411447;
  local_38.cbClsExtra = 0;
  local_38.cbWndExtra = 0;
  local_38.hInstance = param_1;
  LoadIconA(param_1,(LPCSTR)0x6b);
  uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
  local_38.hIcon = (HICON)uVar4;
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  uVar4 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
  local_38.hCursor = (HCURSOR)uVar4;
  local_38.hbrBackground = (HBRUSH)0x6;
  local_38.lpszMenuName = (LPCSTR)0x6d;
  local_38.lpszClassName = &DAT_00429500;
  LoadIconA(local_38.hInstance,(LPCSTR)0x6c);
  uVar4 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
  local_38.hIconSm = (HICON)uVar4;
  RegisterClassExA(&local_38);
  uVar4 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&DAT_00411e3d);
  uStack_8 = 0x411e39;
  uVar4 = __RTC_CheckEsp(extraout_ECX_03,uVar2);
  return uVar4;
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
  undefined8 uVar4;
  undefined4 local_d0 [49];
  HWND local_c;
  undefined4 uStack_8;
  
  puVar3 = local_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
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
    uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),local_c);
    uVar2 = extraout_ECX_03;
  }
  local_c = (HWND)uVar4;
  uStack_8 = 0x411f4a;
  uVar4 = __RTC_CheckEsp(uVar2,(int)((ulonglong)uVar4 >> 0x20));
  return uVar4;
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
  undefined8 uVar3;
  undefined4 uVar4;
  uint local_134 [50];
  undefined4 local_6c;
  tagPAINTSTRUCT local_60;
  uint local_18;
  uint local_c;
  undefined4 uStack_8;
  
  puVar2 = local_134;
  for (iVar1 = 0x4c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_134[0] = param_2;
  if (param_2 == 2) {
    PostQuitMessage(0);
    uVar3 = __RTC_CheckEsp(extraout_ECX_04,extraout_EDX_04);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else if (param_2 == 0xf) {
    BeginPaint(param_1,&local_60);
    uVar3 = __RTC_CheckEsp(extraout_ECX_02,extraout_EDX_02);
    local_6c = (undefined4)uVar3;
    EndPaint(param_1,&local_60);
    uVar3 = __RTC_CheckEsp(extraout_ECX_03,extraout_EDX_03);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else if (param_2 == 0x111) {
    local_134[0] = param_3 & 0xffff;
    local_18 = param_3 >> 0x10;
    local_c = local_134[0];
    if (local_134[0] == 0x68) {
      DialogBoxParamA(DAT_004295cc,(LPCSTR)0x67,param_1,(DLGPROC)&LAB_00411339,0);
      uVar3 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else if (local_134[0] == 0x69) {
      DestroyWindow(param_1);
      uVar3 = __RTC_CheckEsp(extraout_ECX_00,extraout_EDX_00);
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      DefWindowProcA(param_1,0x111,param_3,param_4);
      uVar3 = __RTC_CheckEsp(extraout_ECX_01,extraout_EDX_01);
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
  }
  else {
    DefWindowProcA(param_1,param_2,param_3,param_4);
    uVar3 = __RTC_CheckEsp(extraout_ECX_05,extraout_EDX_05);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  __RTC_CheckStackVars_8((int)&stack0xfffffffc,(int *)&LAB_004120f6);
  uStack_8 = 0x4120f0;
  uVar3 = __RTC_CheckEsp(extraout_ECX_06,uVar4);
  return uVar3;
}



undefined8 __fastcall
FUN_00412170(undefined4 param_1,undefined4 param_2,HWND param_3,int param_4,ushort param_5)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint uVar2;
  undefined4 extraout_EDX;
  int *piVar3;
  undefined8 uVar4;
  int local_c8 [48];
  undefined4 uStack_8;
  
  piVar3 = local_c8;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = -0x33333334;
    piVar3 = piVar3 + 1;
  }
  local_c8[0] = param_4;
  uVar2 = 0;
  if (((param_4 != 0x110) && (param_4 == 0x111)) &&
     ((param_5 == 1 || (uVar2 = (uint)param_5, uVar2 == 2)))) {
    EndDialog(param_3,(uint)param_5);
    uVar4 = __RTC_CheckEsp(extraout_ECX,extraout_EDX);
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar2 = extraout_ECX_00;
  }
  uStack_8 = 0x412210;
  uVar4 = __RTC_CheckEsp(uVar2,param_2);
  return uVar4;
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
  undefined8 uVar5;
  undefined4 uVar6;
  _OSVERSIONINFOA local_124;
  uint local_84;
  _STARTUPINFOA local_64;
  _OSVERSIONINFOA *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00425028;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_124.szCSDVersion[124] = '\0';
  local_124.szCSDVersion[125] = '$';
  local_124.szCSDVersion[126] = 'A';
  local_124.szCSDVersion[127] = '\0';
  local_1c = &local_124;
  local_124.dwOSVersionInfoSize = 0x94;
  ExceptionList = &local_14;
  GetVersionExA(&local_124);
  DAT_00429638 = local_124.dwPlatformId;
  DAT_00429644 = local_124.dwMajorVersion;
  _DAT_00429648 = local_124.dwMinorVersion;
  DAT_0042963c = local_124.dwBuildNumber & 0x7fff;
  if (local_124.dwPlatformId != 2) {
    DAT_0042963c = DAT_0042963c | 0x8000;
  }
  _DAT_00429640 = local_124.dwMajorVersion * 0x100 + local_124.dwMinorVersion;
  bVar1 = _check_managed_app();
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
  iVar2 = __cinit(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  local_64.dwFlags = 0;
  GetStartupInfoA(&local_64);
  pbVar3 = __wincmdln();
  if ((local_64.dwFlags & 1) == 0) {
    local_84 = 10;
  }
  else {
    local_84 = (uint)local_64.wShowWindow;
  }
  uVar6 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  uVar5 = thunk_FUN_00411bc0(pHVar4,uVar6,pbVar3,local_84);
  if (CONCAT31(extraout_var,bVar1) == 0) {
                    // WARNING: Subroutine does not return
    _exit((int)uVar5);
  }
  __cexit();
  ExceptionList = local_14;
  return (int)uVar5;
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
  (*(code *)PTR___exit_00428b40)(0xff);
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
  ___crtExitProcess(0xff);
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
      else if (*(short *)(piVar2 + 6) == 0x20b) {
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
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char acStack_220 [496];
  ulong auStack_30 [3];
  wchar_t *local_20;
  code *local_10;
  int local_c;
  char *local_8;
  
  local_20 = (wchar_t *)param_1;
  pcVar5 = (code *)thunk_FUN_00412850();
  auStack_30[2] = 0x412951;
  iVar6 = DebuggerProbe(0x1002);
  local_10 = pcVar5;
  if (iVar6 == 0) {
    bVar4 = true;
  }
  else {
    pcVar7 = param_4;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    local_20 = L"ྊ쀳즄풋ᅴས즾襦䈌䲊ĸ葀痉勯읦䈄";
    iVar6 = -(((int)pcVar7 - (int)(param_4 + 1)) * 2 + 7U & 0xfffffffc);
    iVar8 = 0;
    cVar2 = *param_4;
    while (cVar2 != '\0') {
      *(short *)(&stack0xffffffe4 + iVar8 * 2) = (short)cVar2;
      iVar1 = iVar8 + 1;
      iVar8 = iVar8 + 1;
      cVar2 = param_4[iVar1];
    }
    *(undefined **)((int)&local_20 + iVar6) = &stack0xffffffe4;
    *(undefined2 *)(&stack0xffffffe4 + iVar8 * 2) = 0;
    uVar3 = *(undefined4 *)(&DAT_004251f8 + param_3 * 4);
    *(void **)(&stack0xffffffdc + iVar6) = param_1;
    *(undefined4 *)((int)auStack_30 + iVar6 + 8) = uVar3;
    *(int *)((int)auStack_30 + iVar6 + 4) = param_3;
    *(undefined4 *)((int)auStack_30 + iVar6) = 0x4129ac;
    iVar6 = DebuggerRuntime(*(ulong *)((int)auStack_30 + iVar6 + 4),
                            *(int *)((int)auStack_30 + iVar6 + 8),
                            *(void **)(&stack0xffffffdc + iVar6),
                            *(wchar_t **)((int)&local_20 + iVar6));
    if (iVar6 != 0) {
      return;
    }
    bVar4 = false;
  }
  if (pcVar5 != (code *)0x0) {
    if (bVar4) {
      local_20 = L"삅䕵Ҹ\x02\xe800≌";
      iVar6 = _IsDebuggerPresent();
      if (iVar6 != 0) goto LAB_00412a0f;
    }
    local_20 = 
    L"\xf48b䖍僼䶍凸h\x02嘀쎃叻䟨￩诿ၕ䖋诼\xf84d剗喋栌哼B児剖嗿菴ツ\xf883甁＆琕䋂贀\xe865幟譛工쳃쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌譕櫬棿唨Bꑨ䄑搀¡"
    ;
    _RTC_GetSrcLine((int)param_1 - 5,acStack_220,0x200,&local_c,&local_8);
    iVar6 = (*local_10)(param_2,acStack_220,local_c,local_8,"Run-Time Check Failure #%d - %s",
                        param_3,param_4);
    if (iVar6 != 1) {
      return;
    }
  }
LAB_00412a0f:
  local_20 = 
  L"斍忨孞\xe58b썝쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌쳌嗌\xec8bｪ⡨䉕栀ᆤAꅤ"
  ;
  DebugBreak();
  return;
}



// Library Function - Single Match
//  int __cdecl DebuggerProbe(unsigned long)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl DebuggerProbe(ulong param_1)

{
  ULONG_PTR local_38;
  ulong local_34;
  byte *local_30;
  byte local_1d;
  undefined *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00425528;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  local_1d = 0;
  local_38 = 0x1001;
  local_34 = param_1;
  local_30 = &local_1d;
  local_8 = 0;
  ExceptionList = &local_14;
  RaiseException(0x406d1388,0,6,&local_38);
  ExceptionList = local_14;
  return (uint)local_1d;
}



// Library Function - Single Match
//  int __cdecl DebuggerRuntime(unsigned long,int,void *,wchar_t const *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl DebuggerRuntime(ulong param_1,int param_2,void *param_3,wchar_t *param_4)

{
  ULONG_PTR local_38;
  ulong local_34;
  int local_30;
  void *local_2c;
  byte *local_28;
  wchar_t *local_24;
  byte local_1d;
  undefined *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00425538;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  local_1d = 0;
  local_38 = 0x1002;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = &local_1d;
  local_24 = param_4;
  local_8 = 0;
  ExceptionList = &local_14;
  RaiseException(0x406d1388,0,6,&local_38);
  ExceptionList = local_14;
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
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 local_228;
  undefined4 uStack_28;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_c;
  int local_8;
  
  uStack_28 = 0x412bc3;
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
    iVar2 = -((uint)(pcVar3 + (int)((int)puVar4 +
                                   (int)((int)puVar5 +
                                        ((-(int)((int)local_c + 1) - ((int)&local_228 + 1)) -
                                        (int)(pcVar6 + 1)) + 0x99))) & 0xfffffffc);
    pcVar3 = (char *)((int)&local_228 + iVar2);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    puVar4 = (undefined4 *)((int)&local_228 + iVar2 + -1);
    do {
      pcVar6 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (*pcVar6 != '\0');
    puVar5 = (undefined4 *)"Invalid pointer was assigned at\n\rFile:\t";
    for (iVar9 = 10; puVar7 = local_14, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    do {
      cVar1 = *(char *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    } while (cVar1 != '\0');
    uVar8 = (int)puVar7 - (int)local_14;
    puVar4 = (undefined4 *)((int)&local_228 + iVar2 + -1);
    do {
      pcVar6 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (*pcVar6 != '\0');
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar4 = *local_14;
      local_14 = local_14 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined *)puVar4 = *(undefined *)local_14;
      local_14 = (undefined4 *)((int)local_14 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)((int)&local_228 + iVar2 + -1);
    do {
      puVar5 = puVar4;
      puVar4 = (undefined4 *)((int)puVar5 + 1);
    } while (*(char *)((int)puVar5 + 1) != '\0');
    *(undefined4 *)((int)puVar5 + 1) = 0x694c0d0a;
    *(undefined4 *)((int)puVar5 + 5) = 0x93a656e;
    *(undefined *)((int)puVar5 + 9) = 0;
    *(int *)((int)&local_228 + iVar2 + -4) = local_8;
    *(undefined4 *)((int)&local_228 + iVar2 + -8) = 0x412cfa;
    puVar5 = (undefined4 *)IntToString(*(int *)((int)&local_228 + iVar2 + -4));
    puVar4 = puVar5;
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    puVar7 = (undefined4 *)((int)&local_228 + iVar2 + -1);
    do {
      pcVar6 = (char *)((int)puVar7 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    } while (*pcVar6 != '\0');
    puVar11 = puVar5;
    for (uVar8 = (uint)((int)puVar4 - (int)puVar5) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar8 = (int)puVar4 - (int)puVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined *)puVar7 = *(undefined *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar4 = (undefined4 *)((int)&local_228 + iVar2 + -1);
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
    puVar5 = (undefined4 *)((int)&local_228 + iVar2 + -1);
    do {
      pcVar6 = (char *)((int)puVar5 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (*pcVar6 != '\0');
    puVar7 = local_c;
    for (uVar8 = (uint)((int)puVar4 - (int)local_c) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    *(int *)((int)&local_228 + iVar2 + -4) = (int)&local_228 + iVar2;
    for (uVar8 = (int)puVar4 - (int)local_c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined *)puVar5 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)((int)&local_228 + iVar2 + -8) = param_2;
    *(int *)((int)&local_228 + iVar2 + -0xc) = local_18;
    *(void **)((int)&local_228 + iVar2 + -0x10) = param_1;
    *(undefined4 *)((int)&local_228 + iVar2 + -0x14) = 0x412d9a;
    failwithmessage(*(void **)((int)&local_228 + iVar2 + -0x10),
                    *(int *)((int)&local_228 + iVar2 + -0xc),*(int *)((int)&local_228 + iVar2 + -8),
                    *(char **)((int)&local_228 + iVar2 + -4));
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
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *apvStack_28 [2];
  int aiStack_20 [2];
  char *pcStack_18;
  int local_8;
  
  local_8 = DAT_00428b68;
  if (DAT_00428b68 != -1) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcStack_18 = (char *)0x412ec4;
    iVar2 = -((uint)(pcVar3 + (0x53 - (int)(param_2 + 1))) & 0xfffffffc);
    puVar8 = (undefined4 *)"Stack around the variable \'";
    puVar7 = (undefined4 *)(&stack0xffffffec + iVar2);
    for (iVar5 = 7; pcVar3 = param_2, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)param_2;
    puVar8 = (undefined4 *)((int)&pcStack_18 + iVar2 + 3);
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *(undefined4 *)param_2;
      param_2 = (char *)((int)param_2 + 4);
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar8 = *param_2;
      param_2 = (char *)((int)param_2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar8 = (undefined4 *)((int)&pcStack_18 + iVar2 + 3);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined4 *)((int)puVar7 + 1);
    } while (*(char *)((int)puVar7 + 1) != '\0');
    *(undefined4 *)((int)puVar7 + 1) = 0x61772027;
    *(undefined4 *)((int)puVar7 + 5) = 0x6f632073;
    *(undefined4 *)((int)puVar7 + 9) = 0x70757272;
    *(undefined **)((int)&pcStack_18 + iVar2) = &stack0xffffffec + iVar2;
    *(undefined4 *)((int)puVar7 + 0xd) = 0x2e646574;
    *(undefined4 *)((int)aiStack_20 + iVar2 + 4) = 2;
    *(int *)((int)aiStack_20 + iVar2) = local_8;
    *(void **)((int)apvStack_28 + iVar2 + 4) = param_1;
    *(undefined *)((int)puVar7 + 0x11) = 0;
    *(undefined4 *)((int)apvStack_28 + iVar2) = 0x412f41;
    failwithmessage(*(void **)((int)apvStack_28 + iVar2 + 4),*(int *)((int)aiStack_20 + iVar2),
                    *(int *)((int)aiStack_20 + iVar2 + 4),*(char **)((int)&pcStack_18 + iVar2));
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
  void *apvStack_24 [2];
  int aiStack_1c [2];
  char *pcStack_14;
  
  if (DAT_00428b6c != -1) {
    puVar4 = param_1;
    do {
      cVar2 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar2 != '\0');
    pcStack_14 = (char *)0x412fb4;
    iVar3 = -((uint)((int)puVar4 + (0x53 - ((int)param_1 + 1))) & 0xfffffffc);
    if (param_1 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)"A variable is being used without being defined.";
      puVar8 = (undefined4 *)(&stack0xfffffff0 + iVar3);
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
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
      puVar8 = (undefined4 *)((int)&pcStack_14 + iVar3 + 3);
      do {
        pcVar1 = (char *)((int)puVar8 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (*pcVar1 != '\0');
      puVar7 = param_1;
      for (uVar5 = (uint)((int)puVar4 - (int)param_1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = (int)puVar4 - (int)param_1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar4 = (undefined4 *)((int)&pcStack_14 + iVar3 + 3);
      do {
        pcVar1 = (char *)((int)puVar4 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (*pcVar1 != '\0');
      puVar8 = (undefined4 *)"\' is being used without being defined.";
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = *(undefined2 *)puVar8;
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar8 + 2);
    }
    *(undefined **)((int)&pcStack_14 + iVar3) = &stack0xfffffff0 + iVar3;
    *(undefined4 *)((int)aiStack_1c + iVar3 + 4) = 3;
    *(int *)((int)aiStack_1c + iVar3) = DAT_00428b6c;
    *(undefined4 *)((int)apvStack_24 + iVar3 + 4) = unaff_retaddr;
    *(undefined4 *)((int)apvStack_24 + iVar3) = 0x413054;
    failwithmessage(*(void **)((int)apvStack_24 + iVar3 + 4),*(int *)((int)aiStack_1c + iVar3),
                    *(int *)((int)aiStack_1c + iVar3 + 4),*(char **)((int)&pcStack_14 + iVar3));
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
  DWORD DStack_9c;
  DWORD DStack_98;
  DWORD DStack_8c;
  undefined4 uStack_14;
  
  hModule = LoadLibraryA("Kernel32.dll");
  uStack_14._0_1_ = -5;
  uStack_14._1_1_ = '0';
  uStack_14._2_1_ = 'A';
  uStack_14._3_1_ = '\0';
  DAT_00429610 = GetProcAddress(hModule,"IsDebuggerPresent");
  if (DAT_00429610 == (FARPROC)0x0) {
    DStack_9c = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&DStack_9c);
    if (((BVar1 != 0) && (DStack_8c == 1)) && (DStack_98 == 4)) {
      DAT_00429610 = (FARPROC)&LAB_00413180;
      return 1;
    }
  }
  return (uint)(DAT_00429610 != (FARPROC)0x0);
}



void * FUN_00413190(void)

{
  void **ppvVar1;
  
  ppvVar1 = FUN_004131a0();
  return ppvVar1[8];
}



void ** FUN_004131a0(void)

{
  return &ExceptionList;
}



// Library Function - Single Match
//  __cinit
// 
// Library: Visual Studio 2003 Debug

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (DAT_0042b0fc != (code *)0x0) {
    (*DAT_0042b0fc)(param_1);
  }
  iVar1 = __initterm_e((undefined **)&DAT_0042830c,(undefined **)&DAT_00428520);
  if (iVar1 == 0) {
    _atexit((_func_4879 *)&LAB_004110cd);
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
    ___crtExitProcess(param_1);
  }
  return;
}



// Library Function - Single Match
//  ___crtExitProcess
// 
// Library: Visual Studio 2003 Debug

void __cdecl ___crtExitProcess(int param_1)

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
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != (undefined *)0x0) {
      (*(code *)*param_1)();
    }
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
  else if (piVar4[2] == 5) {
    piVar4[2] = 0;
    iVar5 = 1;
  }
  else if (piVar4[2] == 1) {
    iVar5 = -1;
    DAT_00429690 = (_EXCEPTION_POINTERS *)uVar3;
  }
  else {
    pcVar1 = (code *)piVar4[2];
    DAT_00429690 = _ExceptionPtr;
    if (piVar4[1] == 8) {
      for (local_10 = DAT_00428c08; uVar2 = DAT_00428c14, local_10 < DAT_00428c08 + _DAT_00428c0c;
          local_10 = local_10 + 1) {
        *(undefined4 *)(local_10 * 0xc + 0x428b98) = 0;
      }
      if (*piVar4 == -0x3fffff72) {
        DAT_00428c14 = 0x83;
      }
      else if (*piVar4 == -0x3fffff70) {
        DAT_00428c14 = 0x81;
      }
      else if (*piVar4 == -0x3fffff6f) {
        DAT_00428c14 = 0x84;
      }
      else if (*piVar4 == -0x3fffff6d) {
        DAT_00428c14 = 0x85;
      }
      else if (*piVar4 == -0x3fffff73) {
        DAT_00428c14 = 0x82;
      }
      else if (*piVar4 == -0x3fffff71) {
        DAT_00428c14 = 0x86;
      }
      else if (*piVar4 == -0x3fffff6e) {
        DAT_00428c14 = 0x8a;
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
  for (; (*local_8 != 0 && (*local_8 < 0x21)); local_8 = local_8 + 1) {
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
    for (; *(char *)local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar2 + 1)) {
      if (*(char *)local_8 != '=') {
        local_c = local_c + 1;
      }
      sVar2 = _strlen((char *)local_8);
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
  else if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
  bVar1 = false;
  while( true ) {
    if (*local_8 != 0) {
      for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
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
      for (; *local_8 == 0x5c; local_8 = local_8 + 1) {
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
      iVar4 = ((int)local_10 - (int)local_c >> 1) + 1;
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
  else if ((_DAT_004297d4 == 2) || (_DAT_004297d4 == 0)) {
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
    for (; local_68 < DAT_0042afe0 + 0x40; local_68 = local_68 + 2) {
      *(undefined *)(local_68 + 1) = 0;
      *local_68 = (int *)0xffffffff;
      *(undefined *)((int)local_68 + 5) = 10;
    }
    GetStartupInfoA(&local_4c);
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
        for (; local_68 < (int **)((int)(&DAT_0042afe0)[local_50] + 0x100); local_68 = local_68 + 2)
        {
          *(undefined *)(local_68 + 1) = 0;
          *local_68 = (int *)0xffffffff;
          *(undefined *)((int)local_68 + 5) = 10;
        }
        local_50 = local_50 + 1;
      }
      for (local_58 = 0; (int)local_58 < (int)local_5c; local_58 = local_58 + 1) {
        if (((*local_6c != (HANDLE)0xffffffff) && ((*(byte *)local_60 & 1) != 0)) &&
           (((*(byte *)local_60 & 8) != 0 || (DVar4 = GetFileType(*local_6c), DVar4 != 0)))) {
          ppvVar1 = (HANDLE *)((int)(&DAT_0042afe0)[(int)local_58 >> 5] + (local_58 & 0x1f) * 8);
          *ppvVar1 = *local_6c;
          *(byte *)(ppvVar1 + 1) = *(byte *)local_60;
        }
        local_60 = (UINT *)((int)local_60 + 1);
        local_6c = local_6c + 1;
      }
    }
    for (local_58 = 0; (int)local_58 < 3; local_58 = local_58 + 1) {
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
          else if ((DVar4 & 0xff) == 3) {
            *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 8;
          }
        }
      }
      else {
        *(byte *)(ppiVar2 + 1) = *(byte *)(ppiVar2 + 1) | 0x80;
      }
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
  
  for (local_8 = (void *)0x0; (int)local_8 < 0x40; local_8 = (void *)((int)local_8 + 1)) {
    if ((&DAT_0042afe0)[(int)local_8] != 0) {
      __free_dbg(local_8,(&DAT_0042afe0)[(int)local_8],(int *)0x2);
      (&DAT_0042afe0)[(int)local_8] = 0;
    }
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
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004256c8;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (ppcVar1 = (code **)&DAT_00427828; ppcVar1 < &DAT_00427a2c; ppcVar1 = ppcVar1 + 1) {
    local_8 = 0;
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  ExceptionList = local_14;
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
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004256d8;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (ppcVar1 = (code **)&DAT_00427b34; ppcVar1 < &DAT_00427d38; ppcVar1 = ppcVar1 + 1) {
    local_8 = 0;
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  ExceptionList = local_14;
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
    for (local_8 = 0; local_8 < DAT_0042ac9c; local_8 = local_8 + 1) {
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
      HeapFree(DAT_0042af80,0,*(LPVOID *)((int)local_c + 0x10));
      local_c = (LPVOID)((int)local_c + 0x14);
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
  void *pvStack_1c;
  undefined *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_004149bc;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
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
  ExceptionList = pvStack_1c;
  return;
}



void FUN_00414a72(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00428c4c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00428c48 = in_EAX;
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
    if (DAT_004297d8 != (code *)0x0) {
      (*DAT_004297d8)();
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
  uint local_124 [65];
  undefined local_20;
  int local_18;
  uint *local_14;
  undefined *local_10;
  DWORD local_c;
  uint local_8;
  
  local_18 = DAT_00428eb0;
  for (local_8 = 0; (local_8 < 0x13 && (param_1 != *(int *)(&DAT_00428c60 + local_8 * 8)));
      local_8 = local_8 + 1) {
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
    else if (param_1 != 0xfc) {
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
      local_10 = (undefined *)((int)local_124 + iVar2 + -8);
      *(char **)((int)local_124 + iVar2 + -0xc) = "Runtime Error!\n\nProgram: ";
      *(undefined **)((int)local_124 + iVar2 + -0x10) = local_10;
      *(undefined4 *)((int)local_124 + iVar2 + -0x14) = 0x414e7a;
      thunk_FUN_0041a040(*(uint **)((int)local_124 + iVar2 + -0x10),
                         *(uint **)((int)local_124 + iVar2 + -0xc));
      *(uint **)((int)local_124 + iVar2 + -0xc) = local_14;
      *(undefined **)((int)local_124 + iVar2 + -0x10) = local_10;
      *(undefined4 *)((int)local_124 + iVar2 + -0x14) = 0x414e8a;
      thunk_FUN_0041a050(*(uint **)((int)local_124 + iVar2 + -0x10),
                         *(uint **)((int)local_124 + iVar2 + -0xc));
      *(undefined **)((int)local_124 + iVar2 + -0xc) = &DAT_00425b54;
      *(undefined **)((int)local_124 + iVar2 + -0x10) = local_10;
      *(undefined4 *)((int)local_124 + iVar2 + -0x14) = 0x414e9b;
      thunk_FUN_0041a050(*(uint **)((int)local_124 + iVar2 + -0x10),
                         *(uint **)((int)local_124 + iVar2 + -0xc));
      *(undefined **)((int)local_124 + iVar2 + -0xc) =
           (&PTR_s_R6002___floating_point_not_loade_00428c64)[local_8 * 2];
      *(undefined **)((int)local_124 + iVar2 + -0x10) = local_10;
      *(undefined4 *)((int)local_124 + iVar2 + -0x14) = 0x414eb2;
      thunk_FUN_0041a050(*(uint **)((int)local_124 + iVar2 + -0x10),
                         *(uint **)((int)local_124 + iVar2 + -0xc));
      *(undefined4 *)((int)local_124 + iVar2 + -0xc) = 0x12010;
      *(char **)((int)local_124 + iVar2 + -0x10) = "Microsoft Visual C++ Runtime Library";
      *(undefined **)((int)local_124 + iVar2 + -0x14) = local_10;
      *(undefined4 *)((int)local_124 + iVar2 + -0x18) = 0x414ec8;
      ___crtMessageBoxA(*(LPCSTR *)((int)local_124 + iVar2 + -0x14),
                        *(LPCSTR *)((int)local_124 + iVar2 + -0x10),
                        *(UINT *)((int)local_124 + iVar2 + -0xc));
    }
  }
  ___security_check_cookie_4(local_18);
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
  
  for (local_8 = 0; (local_8 < 0x13 && (param_1 != *(int *)(&DAT_00428c60 + local_8 * 8)));
      local_8 = local_8 + 1) {
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
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_00428d1c + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_00428d1c + param_1 * 4);
    *(uint *)(&DAT_00428d1c + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
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
  else if (param_2 == -6) {
    uVar1 = *(undefined4 *)(&DAT_00428d28 + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_00428d28 + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_00428d28 + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_00428d28 + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_00428d28 + param_1 * 4) = param_2;
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
    for (local_8 = DAT_0042af7c; (local_8 != (int **)0x0 && (local_8[3] != param_2));
        local_8 = (int **)local_8[1]) {
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
    else if (local_8 == (int **)0x0) {
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
  else {
    _DAT_0042962c = 0x16;
    local_c = (int *)0xffffffff;
  }
  return local_c;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
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
  puVar3 = &local_2013;
  for (iVar2 = 0x3ff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  local_1014 = '\0';
  puVar3 = &local_1013;
  for (iVar2 = 0x3ff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  local_3014 = '\0';
  puVar3 = &local_3013;
  for (iVar2 = 0x3ff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined *)((int)puVar3 + 2) = 0;
  local_8 = &stack0x00000018;
  if ((-1 < param_1) && (param_1 < 3)) {
    if ((param_1 == 2) && (LVar1 = InterlockedIncrement((LONG *)&DAT_00428d18), 0 < LVar1)) {
      if ((DAT_004297dc != (FARPROC)0x0) ||
         ((local_3018 = LoadLibraryA("user32.dll"), local_3018 != (HMODULE)0x0 &&
          (DAT_004297dc = GetProcAddress(local_3018,"wsprintfA"), DAT_004297dc != (FARPROC)0x0)))) {
        (*DAT_004297dc)(&local_1014,"Second Chance Assertion Failed: File %s, Line %d\n",param_2,
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
        for (local_301c = DAT_0042af7c; local_301c != 0; local_301c = *(int *)(local_301c + 4)) {
          iVar2 = (**(code **)(local_301c + 0xc))(param_1,&local_1014,&local_c);
          if (iVar2 != 0) {
            if (param_1 == 2) {
              InterlockedDecrement((LONG *)&DAT_00428d18);
            }
            goto LAB_00415772;
          }
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
      else if (param_1 == 2) {
        InterlockedDecrement((LONG *)&DAT_00428d18);
      }
    }
  }
LAB_00415772:
  ___security_check_cookie_4(local_10);
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
  ___security_check_cookie_4(local_10);
  return;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// WARNING: Type propagation algorithm not settling
// Library Function - Single Match
//  int __cdecl _RTC_GetSrcLine(unsigned long,char *,int,int *,char * *)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

int __cdecl _RTC_GetSrcLine(ulong param_1,char *param_2,int param_3,int *param_4,char **param_5)

{
  char *pcVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  char **ppcVar5;
  ImageInfo *pIVar6;
  int iVar7;
  HANDLE pvVar8;
  ushort *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *lpMem;
  bool bVar17;
  DWORD DVar18;
  undefined auStack_548 [248];
  undefined4 uStack_450;
  undefined auStack_444 [1020];
  undefined4 uStack_48;
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
  
  ppcVar5 = param_5;
  uStack_48 = 0x415c53;
  local_10 = auStack_444;
  *param_4 = 0;
  *param_2 = '\0';
  local_20 = 0;
  *param_5 = (char *)0x0;
  pIVar6 = GetImageInfo(param_1);
  if (pIVar6 == (ImageInfo *)0x0) {
    return local_20;
  }
  uVar15 = param_1 - *(int *)(pIVar6 + 4);
  bVar17 = DAT_00429838 == 0;
  *ppcVar5 = *(char **)(pIVar6 + 0x18);
  local_20 = 1;
  if (bVar17) {
    if (DAT_004297e0 != (HMODULE)0x0) {
      return 1;
    }
    DAT_004297e0 = GetPdbDll();
    if (DAT_004297e0 == (HINSTANCE__ *)0x0) {
      return local_20;
    }
    uStack_450 = 0x415cd6;
    DAT_004297f0 = GetProcAddress(DAT_004297e0,"PDBOpenValidate3");
    if (DAT_004297f0 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415cf0;
    DAT_004297f4 = GetProcAddress(DAT_004297e0,"PDBOpenDBI");
    if (DAT_004297f4 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d07;
    DAT_004297f8 = GetProcAddress(DAT_004297e0,"DBIQueryModFromAddr");
    if (DAT_004297f8 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d1e;
    DAT_004297fc = GetProcAddress(DAT_004297e0,"ModQueryLines");
    if (DAT_004297fc == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d34;
    DAT_00429800 = GetProcAddress(DAT_004297e0,"ModClose");
    if (DAT_00429800 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d4b;
    DAT_00429804 = GetProcAddress(DAT_004297e0,"DBIClose");
    if (DAT_00429804 == (FARPROC)0x0) {
      return 0;
    }
    uStack_450 = 0x415d62;
    DAT_00429808 = GetProcAddress(DAT_004297e0,"PDBClose");
    if (DAT_00429808 == (FARPROC)0x0) {
      return 0;
    }
    DAT_00429838 = 1;
  }
  uVar3 = *(ushort *)(*(int *)(pIVar6 + 0x10) + 6);
  local_14 = (ushort *)(uint)uVar3;
  uVar14 = 0;
  if (uVar3 == 0) {
    return local_20;
  }
  while ((iVar7 = (uVar14 & 0xffff) * 0x28,
         uVar15 <= *(uint *)(*(int *)(pIVar6 + 0x14) + 0xc + iVar7) ||
         (iVar7 = iVar7 + *(int *)(pIVar6 + 0x14),
         *(uint *)(iVar7 + 0x10) <= uVar15 - *(int *)(iVar7 + 0xc)))) {
    uVar14 = uVar14 + 1;
    if (uVar3 <= (ushort)uVar14) {
      return local_20;
    }
  }
  uVar15 = uVar15 - *(int *)(*(int *)(pIVar6 + 0x14) + 0xc + (uVar14 & 0xffff) * 0x28);
  if (uVar15 == 0xffffffff) {
    return local_20;
  }
  local_24 = uVar15;
  iVar7 = (*DAT_004297f0)(*(undefined4 *)(pIVar6 + 0x18),&DAT_004250ec,local_34,local_10,auStack_548
                          ,local_30,local_2c,&local_1c);
  if (iVar7 == 0) {
    return local_20;
  }
  iVar7 = (*DAT_004297f4)(local_1c,&DAT_00425e20,0,&local_18);
  if (iVar7 != 0) {
    iVar7 = (*DAT_004297f8)(local_18,uVar14 + 1,uVar15,&local_c,(int)&param_5 + 2,local_38,&local_8)
    ;
    if (iVar7 != 0) {
      iVar7 = (*DAT_004297fc)(local_c,0,&local_8);
      if ((iVar7 != 0) && (local_8 != 0)) {
        DVar18 = 0;
        pvVar8 = GetProcessHeap();
        puVar9 = (ushort *)HeapAlloc(pvVar8,DVar18,local_8);
        local_14 = puVar9;
        iVar7 = (*DAT_004297fc)(local_c,puVar9,&local_8);
        if (iVar7 != 0) {
          local_10 = (undefined *)0x0;
          lpMem = puVar9;
          uVar15 = local_24;
          if (*puVar9 != 0) {
LAB_00415ed2:
            iVar7 = *(int *)(puVar9 + (int)local_10 * 2 + 2);
            uVar14 = (uint)*(ushort *)(iVar7 + (int)puVar9);
            iVar4 = uVar14 * 4 + iVar7 + 4;
            local_28 = (char *)((int)puVar9 + uVar14 * 8 + iVar4);
            iVar11 = 0;
            if (uVar14 == 0) goto LAB_00415f06;
            while ((puVar2 = (uint *)((int)puVar9 + iVar11 * 8 + iVar4),
                   local_24 <= *puVar2 && *puVar2 != local_24 ||
                   (puVar2 = (uint *)((int)puVar9 + iVar11 * 8 + iVar4 + 4),
                   *puVar2 <= local_24 && local_24 != *puVar2))) {
              iVar11 = iVar11 + 1;
              if ((int)uVar14 <= iVar11) goto LAB_00415f06;
            }
            iVar7 = *(int *)((int)puVar9 + iVar11 * 4 + iVar7 + 4);
            uVar16 = (uint)*(ushort *)(iVar7 + 2 + (int)puVar9);
            uVar15 = (int)puVar9 + uVar16 * 4 + iVar7 + 4;
            uVar14 = 0xffffffff;
            puVar13 = (undefined *)0x0;
            local_10 = (undefined *)0xffffffff;
            lpMem = local_14;
            if (uVar16 == 0) goto LAB_00415f93;
            do {
              uVar12 = local_24 - *(int *)((int)puVar9 + (int)puVar13 * 4 + iVar7 + 4);
              if (uVar12 < uVar14) {
                uVar14 = uVar12;
                local_10 = puVar13;
              }
              puVar13 = puVar13 + 1;
            } while ((int)puVar13 < (int)uVar16);
            if (-1 < (int)local_10) {
              *param_4 = (uint)*(ushort *)(uVar15 + (int)local_10 * 2);
              iVar7 = 0;
              if (*local_28 == '\0') {
LAB_00415f82:
                if (param_3 <= iVar7) goto LAB_00415f86;
              }
              else {
                pcVar10 = local_28;
                while (iVar7 < param_3) {
                  pcVar10[(int)param_2 - (int)local_28] = *pcVar10;
                  pcVar1 = pcVar10 + 1;
                  iVar7 = iVar7 + 1;
                  pcVar10 = pcVar10 + 1;
                  if (*pcVar1 == '\0') goto LAB_00415f82;
                }
LAB_00415f86:
                iVar7 = param_3 + -1;
              }
              param_2[iVar7] = '\0';
            }
          }
LAB_00415f93:
          local_24 = uVar15;
          DVar18 = 0;
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,DVar18,lpMem);
        }
      }
      (*DAT_00429800)(local_c);
    }
    (*DAT_00429804)(local_18);
  }
  (*DAT_00429808)(local_1c);
  return local_20;
LAB_00415f06:
  local_10 = local_10 + 1;
  if ((int)(uint)*puVar9 <= (int)local_10) goto LAB_00415f93;
  goto LAB_00415ed2;
}



// WARNING: Function: __chkstk replaced with injection: alloca_probe
// Library Function - Single Match
//  struct ImageInfo * __cdecl GetImageInfo(unsigned long)
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release

ImageInfo * __cdecl GetImageInfo(ulong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  HANDLE pvVar5;
  int iVar6;
  HANDLE pvVar7;
  ImageInfo *pIVar8;
  uint uVar9;
  undefined4 auStack_a4c [5];
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_844;
  HANDLE pvStack_840;
  SIZE_T SVar10;
  LPVOID lpMem;
  ImageInfo *pIVar11;
  undefined4 uStack_830;
  DWORD DVar12;
  undefined4 local_814 [121];
  undefined4 uStack_630;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  pIVar8 = DAT_00429824;
  if (DAT_00429824 != (ImageInfo *)0x0) {
    do {
      if ((*(uint *)(pIVar8 + 4) <= param_1) &&
         (uVar9 = param_1 - *(uint *)(pIVar8 + 4),
         uVar9 < *(uint *)(pIVar8 + 8) || uVar9 == *(uint *)(pIVar8 + 8))) {
        return pIVar8;
      }
      pIVar8 = *(ImageInfo **)(pIVar8 + 0x1c);
    } while (pIVar8 != (ImageInfo *)0x0);
    do {
      pIVar8 = *(ImageInfo **)(DAT_00429824 + 0x1c);
      DVar12 = 0;
      pIVar11 = DAT_00429824;
      pvVar5 = GetProcessHeap();
      uStack_830 = (HANDLE)0x416107;
      HeapFree(pvVar5,DVar12,pIVar11);
      DAT_00429824 = pIVar8;
    } while (pIVar8 != (ImageInfo *)0x0);
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
    DAT_0042980c = GetProcAddress(DAT_004297e8,"ImageNtHeader");
    if (DAT_0042980c == (FARPROC)0x0) {
      return (ImageInfo *)0x0;
    }
    DAT_00429818 = GetProcAddress(DAT_004297ec,"CreateToolhelp32Snapshot");
    if (DAT_00429818 == (FARPROC)0x0) {
      DAT_004297e4 = LoadLibraryA("PSAPI.DLL");
      if (DAT_004297e4 == (HMODULE)0x0) {
        return (ImageInfo *)0x0;
      }
      DAT_00429814 = GetProcAddress(DAT_004297e4,"EnumProcessModules");
      if (DAT_00429814 == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
      DAT_00429810 = GetProcAddress(DAT_004297e4,"GetModuleInformation");
      if (DAT_00429810 == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
    }
    else {
      DAT_0042981c = GetProcAddress(DAT_004297ec,"Module32First");
      if (DAT_0042981c == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
      DAT_00429820 = GetProcAddress(DAT_004297ec,"Module32Next");
      if (DAT_00429820 == (FARPROC)0x0) {
        return (ImageInfo *)0x0;
      }
    }
  }
  pcVar4 = HeapAlloc_exref;
  if (DAT_00429818 == (FARPROC)0x0) {
    pvVar5 = GetCurrentProcess();
    uStack_830 = pvVar5;
    iVar6 = (*DAT_00429814)();
    if (iVar6 == 0) {
      return (ImageInfo *)0x0;
    }
    local_8 = local_8 >> 2;
    uVar9 = 0;
    pIVar8 = DAT_00429824;
    if (local_8 != 0) {
      do {
        uStack_844 = 0x416269;
        pvStack_840 = pvVar5;
        iVar6 = (*DAT_00429810)();
        if (iVar6 == 0) {
          return (ImageInfo *)0x0;
        }
        SVar10 = 0x20;
        DVar12 = 0;
        pvVar7 = GetProcessHeap();
        pvStack_840 = (HANDLE)0x41627e;
        pIVar8 = (ImageInfo *)HeapAlloc(pvVar7,DVar12,SVar10);
        if (pIVar8 == (ImageInfo *)0x0) goto joined_r0x0041635a;
        *(undefined4 *)(pIVar8 + 0xc) = local_814[uVar9];
        *(undefined4 *)(pIVar8 + 4) = local_14;
        *(undefined4 *)(pIVar8 + 8) = local_10;
        *(undefined4 *)(pIVar8 + 0x18) = 0;
        *(ImageInfo **)(pIVar8 + 0x1c) = DAT_00429824;
        uVar9 = uVar9 + 1;
        DAT_00429824 = pIVar8;
      } while (uVar9 < local_8);
    }
  }
  else {
    pvVar5 = (HANDLE)(*DAT_00429818)();
    if (pvVar5 == (HANDLE)0xffffffff) {
      return (ImageInfo *)0x0;
    }
    auStack_a4c[0] = 0x224;
    iVar6 = (*DAT_0042981c)(pvVar5,auStack_a4c);
    while (iVar6 != 0) {
      SVar10 = 0x20;
      DVar12 = 0;
      pvVar7 = GetProcessHeap();
      pvStack_840 = (HANDLE)0x4162fd;
      pIVar8 = (ImageInfo *)HeapAlloc(pvVar7,DVar12,SVar10);
      if (pIVar8 == (ImageInfo *)0x0) {
        CloseHandle(pvVar5);
        goto joined_r0x0041635a;
      }
      *(undefined4 *)(pIVar8 + 0xc) = uStack_a30;
      *(undefined4 *)(pIVar8 + 4) = uStack_a38;
      *(undefined4 *)(pIVar8 + 8) = uStack_a34;
      *(undefined4 *)(pIVar8 + 0x18) = 0;
      *(ImageInfo **)(pIVar8 + 0x1c) = DAT_00429824;
      DAT_00429824 = pIVar8;
      iVar6 = (*DAT_00429820)();
    }
    CloseHandle(pvVar5);
    pIVar8 = DAT_00429824;
  }
  for (; pIVar8 != (ImageInfo *)0x0; pIVar8 = *(ImageInfo **)(pIVar8 + 0x1c)) {
    iVar6 = (*DAT_0042980c)();
    *(int *)(pIVar8 + 0x10) = iVar6;
    *(uint *)(pIVar8 + 0x14) = *(ushort *)(iVar6 + 0x14) + 0x18 + iVar6;
    uStack_630 = 0x416300;
    pvStack_840 = (HANDLE)0x4163eb;
    DVar12 = GetModuleFileNameA(*(HMODULE *)(pIVar8 + 0xc),(LPSTR)&uStack_830,0x200);
    if (DVar12 == 0) goto joined_r0x0041635a;
    iVar6 = 0;
    cVar2 = (char)uStack_830;
    while (cVar2 != '\0') {
      iVar3 = iVar6 + 1;
      iVar6 = iVar6 + 1;
      cVar2 = *(char *)((int)&uStack_830 + iVar3);
    }
    GetProcessHeap();
    pvStack_840 = (HANDLE)0x416416;
    iVar6 = (*pcVar4)();
    *(int *)(pIVar8 + 0x18) = iVar6;
    if (iVar6 == 0) goto joined_r0x0041635a;
    iVar6 = 0;
    do {
      pcVar1 = (char *)((int)&uStack_830 + iVar6);
      *(undefined *)(iVar6 + *(int *)(pIVar8 + 0x18)) = *(undefined *)((int)&uStack_830 + iVar6);
      iVar6 = iVar6 + 1;
    } while (*pcVar1 != '\0');
    pcVar4 = HeapAlloc_exref;
  }
  pIVar8 = DAT_00429824;
  if (DAT_00429824 != (ImageInfo *)0x0) {
    do {
      if ((*(uint *)(pIVar8 + 4) <= param_1) &&
         (uVar9 = param_1 - *(uint *)(pIVar8 + 4),
         uVar9 < *(uint *)(pIVar8 + 8) || uVar9 == *(uint *)(pIVar8 + 8))) {
        return pIVar8;
      }
      pIVar8 = *(ImageInfo **)(pIVar8 + 0x1c);
    } while (pIVar8 != (ImageInfo *)0x0);
joined_r0x0041635a:
    while (DAT_00429824 != (ImageInfo *)0x0) {
      lpMem = *(LPVOID *)(DAT_00429824 + 0x18);
      pIVar8 = *(ImageInfo **)(DAT_00429824 + 0x1c);
      if (lpMem != (LPVOID)0x0) {
        DVar12 = 0;
        pvVar5 = GetProcessHeap();
        pvStack_840 = (HANDLE)0x41637a;
        HeapFree(pvVar5,DVar12,lpMem);
      }
      DVar12 = 0;
      pIVar11 = DAT_00429824;
      pvVar5 = GetProcessHeap();
      pvStack_840 = (HANDLE)0x41638f;
      HeapFree(pvVar5,DVar12,pIVar11);
      DAT_00429824 = pIVar8;
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
  char *apcStackY_6c [4];
  int iStackY_5c;
  undefined auStackY_58 [4];
  undefined4 uStackY_54;
  undefined4 uStackY_50;
  char *pcStackY_4c;
  undefined4 uStackY_48;
  undefined *puStackY_44;
  undefined4 uStackY_40;
  FARPROC local_18;
  undefined local_14 [4];
  FARPROC local_10;
  undefined4 local_c;
  int local_8;
  
  if (DAT_0042983c == 0) {
    DAT_0042983c = 1;
    pHVar2 = LoadLibraryA(PTR_s_MSPDB71_DLL_00428d48);
    if (pHVar2 != (HMODULE)0x0) {
      return pHVar2;
    }
    pHVar2 = LoadLibraryA("ADVAPI32.DLL");
    if ((((pHVar2 != (HMODULE)0x0) &&
         (local_10 = GetProcAddress(pHVar2,"RegOpenKeyExA"), local_10 != (FARPROC)0x0)) &&
        (pFVar3 = GetProcAddress(pHVar2,"RegQueryValueExA"), pFVar3 != (FARPROC)0x0)) &&
       (local_18 = GetProcAddress(pHVar2,"RegCloseKey"), local_18 != (FARPROC)0x0)) {
      iVar4 = (*local_10)();
      if (iVar4 == 0) {
        uStackY_40 = 0;
        puStackY_44 = local_14;
        uStackY_48 = 0;
        pcStackY_4c = "EnvironmentDirectory";
        uStackY_50 = local_c;
        uStackY_54 = 0x416624;
        iVar4 = (*pFVar3)();
        uVar1 = local_c;
        if (iVar4 == 0) {
          uStackY_54 = 0x41663c;
          iVar4 = -(local_8 + 0x10U & 0xfffffffc);
          puVar6 = (undefined *)((int)&uStackY_50 + iVar4);
          local_8 = local_8 + 0xd;
          *(int **)((int)&uStackY_54 + iVar4) = &local_8;
          *(int *)(auStackY_58 + iVar4) = (int)&uStackY_50 + iVar4;
          *(undefined **)((int)apcStackY_6c + iVar4 + 0x10) = local_14;
          *(undefined4 *)((int)apcStackY_6c + iVar4 + 0xc) = 0;
          *(char **)((int)apcStackY_6c + iVar4 + 8) = "EnvironmentDirectory";
          *(undefined4 *)((int)apcStackY_6c + iVar4 + 4) = uVar1;
          puVar7 = (undefined *)((int)apcStackY_6c + iVar4);
          *(undefined4 *)((int)apcStackY_6c + iVar4) = 0x416654;
          iVar5 = (*pFVar3)();
          *(undefined4 *)(puVar7 + -4) = local_c;
          puVar8 = puVar7 + -8;
          *(undefined4 *)(puVar7 + -8) = 0x41665d;
          (*local_18)();
          *(HMODULE *)(puVar8 + -4) = pHVar2;
          *(undefined4 *)(puVar8 + -8) = 0x416664;
          FreeLibrary(*(HMODULE *)(puVar8 + -4));
          if (iVar5 == 0) {
            if (*(char *)((int)&uStackY_54 + local_8 + iVar4 + 2) == '\\') {
              local_8 = local_8 + -1;
            }
            else {
              *(undefined *)((int)&uStackY_54 + local_8 + iVar4 + 3) = 0x5c;
            }
            iVar5 = 0xc;
            do {
              puVar6[local_8] = puVar6[(int)PTR_s_MSPDB71_DLL_00428d48 - ((int)&uStackY_50 + iVar4)]
              ;
              puVar6 = puVar6 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            *(int *)((int)puVar8 + -4) = (int)&uStackY_50 + iVar4;
            *(undefined4 *)(puVar8 + -8) = 0x4166a4;
            pHVar2 = LoadLibraryA(*(LPCSTR *)(puVar8 + -4));
            return pHVar2;
          }
        }
      }
      else {
        uStackY_40 = 0x416601;
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
    DAT_0042b0f0 = local_8 + ((int)DAT_0042b0f0 - (int)DAT_0042b0f4 >> 2);
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

int __cdecl _atexit(_func_4879 *param_1)

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
        _memset((void *)((int)(ppiVar6 + 8) + (int)param_1),(uint)DAT_00428d58,4);
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
    for (local_c = ppiVar1; local_c < (int **)((int)ppiVar1 + (int)(int *)(param_2 * param_1));
        local_c = (int **)((int)local_c + 1)) {
      *(undefined *)local_c = 0;
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
  else if ((param_6 == 0) || (param_2 != (int *)0x0)) {
    if (DAT_00429858 != 0) {
      if (DAT_00429848 == DAT_00429858 + -1) {
        iVar4 = __CrtCheckMemory();
        if ((iVar4 == 0) &&
           (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x264,(char *)0x0,"_CrtCheckMemory()"), iVar4 == 1)
           ) {
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
    else if (param_2 < (int *)0xffffffdc) {
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
         (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x297,(char *)0x0,"_CrtIsValidHeapPointer(pUserData)"
                                ), iVar4 == 1)) {
        pcVar1 = (code *)swi(3);
        ppiVar5 = (int **)(*pcVar1)();
        return ppiVar5;
      }
      ppiVar5 = (int **)(param_1 - 0x20);
      bVar7 = *(int *)(param_1 - 0xc) == 3;
      if (((bVar7) && ((*(int *)(param_1 - 0x14) != -0x1234544 || (*(int *)(param_1 - 8) != 0)))) &&
         (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x2a1,(char *)0x0,
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
                (int)param_2 - (int)local_10[4]);
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
                                 "fRealloc || (!fRealloc && pNewBlock == pOldBlock)"), iVar4 == 1))
      {
        pcVar1 = (code *)swi(3);
        ppiVar5 = (int **)(*pcVar1)();
        return ppiVar5;
      }
      if ((local_10 != ppiVar5) && (!bVar7)) {
        if (*local_10 == (int *)0x0) {
          if ((DAT_00429844 != ppiVar5) &&
             (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x2fc,(char *)0x0,"_pLastBlock == pOldBlock"),
             iVar4 == 1)) {
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
             (iVar4 = __CrtDbgReport(2,"dbgheap.c",0x307,(char *)0x0,"_pFirstBlock == pOldBlock"),
             iVar4 == 1)) {
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
  else {
    __free_dbg(param_3,param_1,param_3);
    ppiVar3 = (int **)0x0;
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
          iVar2 = _CheckBytes((char *)((int)(_Dst + 8) + (int)_Dst[4]),DAT_00428d58,4);
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
      for (local_8 = DAT_00429850; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
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
    for (local_8 = DAT_00429850; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
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
    else if (_DAT_0042af90 == 3) {
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
  else if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) ||
             (*(int *)((int)param_1 + -0xc) == 1)) ||
            ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
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
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
    }
    for (local_c = DAT_00429850; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
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
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      param_1[local_c + 6] =
           *(int *)(param_3 + 0x18 + local_c * 4) - *(int *)(param_2 + 0x18 + local_c * 4);
      param_1[local_c + 1] =
           *(int *)(param_3 + 4 + local_c * 4) - *(int *)(param_2 + 4 + local_c * 4);
      if (((param_1[local_c + 6] != 0) || (param_1[local_c + 1] != 0)) &&
         ((local_c != 0 && ((local_c != 2 || ((DAT_00428d4c & 0x10) != 0)))))) {
        local_8 = 1;
      }
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
      else if (local_8[5] == 1) {
        iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,
                               "normal block at 0x%p, %Iu bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        __printMemBlockData((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
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
    ___security_check_cookie_4(local_c);
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
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = __CrtDbgReport(0,(undefined1 *)0x0,0,(char *)0x0,"%Id bytes in %Id %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
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
  else if (param_2 == 0) {
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
          local_24 = sVar4 - ((int)param_1 - (int)*this);
          if (param_3 < 5) {
            local_20 = 4;
          }
          else {
            local_20 = param_3;
          }
          local_20 = local_20 - 1;
          uVar6 = -param_4 & 3;
          ppiVar5 = __malloc_dbg((int *)(uVar6 + param_2 + 8 + local_20),(int *)0x1,param_5,param_6)
          ;
          if (ppiVar5 == (int **)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = (void *)(((int)ppiVar5 + param_4 + uVar6 + local_20 + 8 & ~local_20) - param_4)
            ;
            _memset((void *)((int)pvVar2 + (-4 - uVar6)),(uint)DAT_00428d5b,4);
            *(int ***)((int)pvVar2 + (-8 - uVar6)) = ppiVar5;
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
  BYTE *local_30;
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
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        if (*(UINT *)(&DAT_00428d80 + local_c * 0x30) == CodePage) {
          for (local_14 = 0; local_14 < 0x101; local_14 = local_14 + 1) {
            (&DAT_0042ad40)[local_14] = 0;
          }
          for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
            for (local_10 = &DAT_00428d90 + local_8 * 8 + local_c * 0x30;
                (*local_10 != 0 && (local_10[1] != 0)); local_10 = local_10 + 2) {
              for (local_14 = (uint)*local_10; local_14 <= local_10[1]; local_14 = local_14 + 1) {
                (&DAT_0042ad41)[local_14] = (&DAT_0042ad41)[local_14] | (&DAT_00428d78)[local_8];
              }
            }
          }
          _DAT_0042ad2c = 1;
          DAT_0042ae44 = CodePage;
          DAT_0042acb4 = _CPtoLCID(CodePage);
          for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
            *(undefined2 *)(&DAT_0042ae50 + local_8 * 2) =
                 *(undefined2 *)(&DAT_00428d84 + local_8 * 2 + local_c * 0x30);
          }
          _setSBUpLow();
          goto LAB_00419980;
        }
      }
      BVar1 = GetCPInfo(CodePage,&local_2c);
      if (BVar1 == 1) {
        for (local_14 = 0; local_14 < 0x101; local_14 = local_14 + 1) {
          (&DAT_0042ad40)[local_14] = 0;
        }
        DAT_0042acb4 = 0;
        if (local_2c.MaxCharSize < 2) {
          _DAT_0042ad2c = 0;
          DAT_0042ae44 = CodePage;
        }
        else {
          DAT_0042ae44 = CodePage;
          for (local_30 = local_2c.LeadByte; (*local_30 != 0 && (local_30[1] != 0));
              local_30 = local_30 + 2) {
            for (local_14 = (uint)*local_30; local_14 <= local_30[1]; local_14 = local_14 + 1) {
              (&DAT_0042ad41)[local_14] = (&DAT_0042ad41)[local_14] | 4;
            }
          }
          for (local_14 = 1; local_14 < 0xff; local_14 = local_14 + 1) {
            (&DAT_0042ad41)[local_14] = (&DAT_0042ad41)[local_14] | 8;
          }
          DAT_0042acb4 = _CPtoLCID(DAT_0042ae44);
          _DAT_0042ad2c = 1;
        }
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)(&DAT_0042ae50 + local_8 * 2) = 0;
        }
        _setSBUpLow();
      }
      else if (_DAT_00429864 != 0) {
        _setSBCS();
        _setSBUpLow();
      }
    }
  }
LAB_00419980:
  iVar2 = ___security_check_cookie_4(local_18);
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
  else if (param_1 == 0xfffffffd) {
    _DAT_00429864 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    _DAT_00429864 = 1;
    param_1 = DAT_00429914;
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
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_0042ad40)[local_8] = 0;
  }
  DAT_0042ae44 = 0;
  _DAT_0042ad2c = 0;
  DAT_0042acb4 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_0042ae50 + local_8 * 2) = 0;
  }
  return;
}



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
    for (local_518 = 0; local_518 < 0x100; local_518 = local_518 + 1) {
      local_514[local_518] = (undefined)local_518;
    }
    local_514[0] = 0x20;
    for (local_410 = local_526; *local_410 != 0; local_410 = local_410 + 2) {
      for (local_518 = (uint)*local_410; local_518 <= local_410[1]; local_518 = local_518 + 1) {
        local_514[local_518] = 0x20;
      }
    }
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_514,(LPCSTR)0x100,(int)local_20c,DAT_0042ae44,
               (int)DAT_0042acb4,0);
    ___crtLCMapStringA(DAT_0042acb4,(LPCWSTR)0x100,(DWORD)local_514,(LPCSTR)0x100,(int)local_30c,
                       (LPSTR)0x100,(int)DAT_0042ae44,0,in_stack_fffffad4);
    ___crtLCMapStringA(DAT_0042acb4,(LPCWSTR)0x200,(DWORD)local_514,(LPCSTR)0x100,(int)local_40c,
                       (LPSTR)0x100,(int)DAT_0042ae44,0,in_stack_fffffad4);
    for (local_518 = 0; local_518 < 0x100; local_518 = local_518 + 1) {
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
    }
  }
  else {
    for (local_518 = 0; local_518 < 0x100; local_518 = local_518 + 1) {
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
    }
  }
  ___security_check_cookie_4(local_8);
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
      return (int)puVar4 - (int)_Str;
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
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_0041a3eb_caseD_2;
        case 3:
          goto switchD_0041a3eb_caseD_3;
        }
        goto switchD_0041a3eb_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0041a3eb_caseD_0;
      case 1:
        goto switchD_0041a3eb_caseD_1;
      case 2:
        goto switchD_0041a3eb_caseD_2;
      case 3:
        goto switchD_0041a3eb_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a3eb_caseD_2;
            case 3:
              goto switchD_0041a3eb_caseD_3;
            }
            goto switchD_0041a3eb_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a3eb_caseD_2;
            case 3:
              goto switchD_0041a3eb_caseD_3;
            }
            goto switchD_0041a3eb_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a3eb_caseD_2;
            case 3:
              goto switchD_0041a3eb_caseD_3;
            }
            goto switchD_0041a3eb_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0041a3eb_caseD_1:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0041a3eb_caseD_2:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0041a3eb_caseD_3:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0041a3eb_caseD_0:
    return _Dst;
  }
  puVar3 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0041a265_caseD_2;
      case 3:
        goto switchD_0041a265_caseD_3;
      }
      goto switchD_0041a265_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0041a265_caseD_0;
    case 1:
      goto switchD_0041a265_caseD_1;
    case 2:
      goto switchD_0041a265_caseD_2;
    case 3:
      goto switchD_0041a265_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a265_caseD_2;
          case 3:
            goto switchD_0041a265_caseD_3;
          }
          goto switchD_0041a265_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a265_caseD_2;
          case 3:
            goto switchD_0041a265_caseD_3;
          }
          goto switchD_0041a265_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a265_caseD_2;
          case 3:
            goto switchD_0041a265_caseD_3;
          }
          goto switchD_0041a265_caseD_1;
        }
      }
    }
  }
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 8:
  case 9:
  case 10:
  case 0xb:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 4:
  case 5:
  case 6:
  case 7:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0041a265_caseD_1:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    return _Dst;
  case 2:
switchD_0041a265_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0041a265_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0041a265_caseD_0:
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
  for (local_20 = DAT_0042aca8;
      (local_20 < puVar5 && ((local_1c & *local_20 | local_34 & local_20[1]) == 0));
      local_20 = local_20 + 5) {
  }
  if (local_20 == puVar5) {
    for (local_20 = DAT_0042aca0;
        (local_20 < DAT_0042aca8 && ((local_1c & *local_20 | local_34 & local_20[1]) == 0));
        local_20 = local_20 + 5) {
    }
    if (local_20 == DAT_0042aca8) {
      for (; (local_20 < puVar5 && (local_20[2] == 0)); local_20 = local_20 + 5) {
      }
      if (local_20 == puVar5) {
        for (local_20 = DAT_0042aca0; (local_20 < DAT_0042aca8 && (local_20[2] == 0));
            local_20 = local_20 + 5) {
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
  for (; -1 < (int)local_8; local_8 = local_8 << 1) {
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
  for (; -1 < local_30; local_30 = local_30 << 1) {
    local_2c = local_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + local_2c * 0x204;
  for (local_18 = 0; local_18 < 0x3f; local_18 = local_18 + 1) {
    iVar1 = iVar2 + local_18 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  lpAddress = (LPVOID)(local_2c * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    local_2c = -1;
  }
  else {
    for (local_14 = lpAddress; local_14 <= (LPVOID)((int)lpAddress + 0x7000);
        local_14 = (LPVOID)((int)local_14 + 0x1000)) {
      *(undefined4 *)((int)local_14 + 8) = 0xffffffff;
      *(undefined4 *)((int)local_14 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)local_14 + 0xc) = 0xff0;
      *(int *)((int)local_14 + 0x10) = (int)local_14 + 0x100c;
      *(int *)((int)local_14 + 0x14) = (int)local_14 + -0xff4;
      *(undefined4 *)((int)local_14 + 0xff8) = 0xff0;
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
  else if ((int)uVar5 < local_34) {
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
  int aiStack_15c [65];
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
    for (local_170 = 0; local_170 < DAT_0042ac9c; local_170 = local_170 + 1) {
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
      for (local_20 = 0; local_20 < 0x20; local_20 = local_20 + 1) {
        local_10 = 0;
        local_8 = 0;
        local_18 = 0;
        for (local_16c = 0; local_16c < 0x40; local_16c = local_16c + 1) {
          aiStack_15c[local_16c] = 0;
        }
        if (-1 < (int)local_160) {
          BVar2 = IsBadWritePtr(local_14,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          local_2c = local_14;
          for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
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
                aiStack_15c[local_16c] = aiStack_15c[local_16c] + 1;
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
          }
          if (*local_48 != local_18) {
            return 0xfffffff7;
          }
          local_44 = local_48;
          for (local_168 = 0; local_168 < 0x40; local_168 = local_168 + 1) {
            local_58 = 0;
            local_28 = local_44;
            while( true ) {
              local_c = (uint *)local_28[1];
              if ((local_c == local_44) || (local_58 == aiStack_15c[local_168])) break;
              if ((local_c < local_14) || (local_14 + 0x2000 <= local_c)) {
                return 0xfffffff6;
              }
              local_50 = (uint)local_c & 0xfffff000;
              local_24 = (uint *)(local_50 + 0xffc);
              for (local_30 = (uint *)(local_50 + 0xc);
                  (local_30 != local_24 && (local_30 != local_c));
                  local_30 = (uint *)((*local_30 & 0xfffffffe) + (int)local_30)) {
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
            if (((uint *)local_28[1] != local_44) || (local_58 != aiStack_15c[local_168])) {
              return 0xfffffff2;
            }
            if ((uint *)local_44[2] != local_28) {
              return 0xfffffff1;
            }
            local_44 = local_44 + 2;
          }
        }
        if ((local_10 != *(uint *)((int)local_4c + local_20 * 4 + 0x44)) ||
           (local_8 != *(uint *)((int)local_4c + local_20 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        local_14 = local_14 + 0x2000;
        local_48 = local_48 + 0x81;
        local_160 = local_160 << 1;
      }
      if ((local_38 != *local_3c) || (local_54 != local_3c[1])) {
        return 0xffffffef;
      }
      local_3c = local_3c + 5;
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
  int local_60;
  _MEMORY_BASIC_INFORMATION local_58;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  void **local_28;
  LPCVOID local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  short *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_24 = *(LPCVOID *)(param_1 + 8);
  if (((uint)local_24 & 3) != 0) {
    return 0;
  }
  local_28 = &ExceptionList;
  if ((StackLimit <= local_24) && (local_24 < StackBase)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    return 1;
  }
  local_20 = 0;
  for (local_c = 0; local_c < *(uint *)(param_1 + 0xc) || local_c == *(uint *)(param_1 + 0xc);
      local_c = local_c + 1) {
    uVar1 = *(uint *)((int)local_24 + local_c * 0xc);
    if ((uVar1 != 0xffffffff) && (local_c <= uVar1)) {
      return 0;
    }
    if (*(int *)((int)local_24 + local_c * 0xc + 4) != 0) {
      local_20 = local_20 + 1;
    }
  }
  if ((local_20 != 0) &&
     ((*(void **)(param_1 - 8) < StackLimit || (param_1 <= *(uint *)(param_1 - 8))))) {
    return 0;
  }
  local_38 = (uint)local_24 & 0xfffff000;
  local_34 = 0;
  while( true ) {
    if (DAT_00429868 <= local_34) {
      SVar4 = VirtualQuery(local_24,&local_58,0x1c);
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
        local_8 = (int)local_24 - (int)local_58.AllocationBase;
        local_30 = 0;
        local_3c = (int)local_18 + *(ushort *)(local_18 + 5) + 0x18;
        if (*(short *)((int)local_18 + 6) == 0) {
          return 0xffffffff;
        }
        if (((*(uint *)(local_3c + 0xc) <= local_8) &&
            (local_8 < (uint)(*(int *)(local_3c + 0xc) + *(int *)(local_3c + 8)))) &&
           ((*(uint *)(local_3c + 0x24) & 0x80000000) != 0)) {
          return 0;
        }
      }
      LVar3 = InterlockedExchange((LONG *)&DAT_004298b0,1);
      if (LVar3 != 0) {
        return 1;
      }
      for (local_34 = DAT_00429868;
          (0 < local_34 && (*(uint *)(&DAT_0042986c + local_34 * 4) != local_38));
          local_34 = local_34 + -1) {
      }
      if (local_34 == 0) {
        if (DAT_00429868 < 0x10) {
          local_60 = DAT_00429868;
        }
        else {
          local_60 = 0xf;
        }
        local_34 = local_60;
        for (local_2c = 0; local_2c <= local_60; local_2c = local_2c + 1) {
          local_1c = *(uint *)(&DAT_00429870 + local_2c * 4);
          *(uint *)(&DAT_00429870 + local_2c * 4) = local_38;
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
      else if (local_34 == 0) {
        InterlockedExchange((LONG *)&DAT_004298b0,0);
        return 1;
      }
    }
    for (local_2c = 0; local_2c <= local_34; local_2c = local_2c + 1) {
      local_1c = *(uint *)(&DAT_00429870 + local_2c * 4);
      *(uint *)(&DAT_00429870 + local_2c * 4) = local_38;
      local_38 = local_1c;
    }
    InterlockedExchange((LONG *)&DAT_004298b0,0);
  }
  return 1;
}



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
  if (DAT_004298c4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_004298c4 = GetProcAddress(hModule,"MessageBoxA"), DAT_004298c4 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_004298c8 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_004298cc = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_00429638 == 2) &&
       (DAT_004298d4 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_004298d4 != (FARPROC)0x0)) {
      DAT_004298d0 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_004298d0 != (FARPROC)0x0) &&
     (((local_14 = (*DAT_004298d0)(), local_14 == 0 ||
       (iVar2 = (*DAT_004298d4)(local_14,1,local_10,0xc,local_1c), iVar2 == 0)) ||
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
    if (DAT_004298c8 != (FARPROC)0x0) {
      local_18 = (*DAT_004298c8)();
    }
    if ((local_18 != 0) && (DAT_004298cc != (FARPROC)0x0)) {
      local_18 = (*DAT_004298cc)(local_18);
    }
  }
  iVar2 = (*DAT_004298c4)(local_18,_LpText,_LpCaption,_UType);
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
        cVar3 = '\0';
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



// Library Function - Single Match
//  @__security_check_cookie@4
// 
// Library: Visual Studio 2003 Debug

void __fastcall ___security_check_cookie_4(int param_1)

{
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  if (param_1 == DAT_00428eb0) {
    return;
  }
  puStack_c = &DAT_00426a30;
  puStack_10 = &LAB_004111a4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
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
  _x64toa_20(_Val,_DstBuf,_Radix,local_8);
  return _DstBuf;
}



// Library Function - Single Match
//  _x64toa@20
// 
// Library: Visual Studio 2003 Debug

void _x64toa_20(undefined8 param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_14;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = CONCAT44(-(param_1._4_4_ + ((uint)param_1 != 0)),-(uint)param_1);
  }
  local_14 = local_8;
  do {
    pcVar2 = local_8;
    uVar4 = __aullrem((uint)param_1,param_1._4_4_,param_3,0);
    uVar5 = __aulldiv((uint)param_1,param_1._4_4_,param_3,0);
    if ((uint)uVar4 < 10) {
      *local_8 = (char)uVar4 + '0';
    }
    else {
      *local_8 = (char)uVar4 + 'W';
    }
    local_8 = local_8 + 1;
    param_1._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = param_1._4_4_ != 0;
    param_1 = uVar5;
  } while ((bVar3) || (param_1._0_4_ = (uint)uVar5, bVar3 = (uint)param_1 != 0, bVar3));
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
  _x64toa_20(_Val,_DstBuf,_Radix,0);
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
      for (local_10 = DAT_00428c08; local_10 < DAT_00428c08 + _DAT_00428c0c; local_10 = local_10 + 1
          ) {
        *(undefined4 *)(local_10 * 0xc + 0x428b98) = 0;
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
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
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
  else if (param_2 == 0) {
    __free_base(param_1);
    piVar1 = (int *)0x0;
  }
  else if (_DAT_0042af90 == 3) {
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
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  UINT UVar4;
  LPCSTR lpSrcStr;
  undefined *puVar5;
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
  void *pvVar6;
  void *extraout_ECX_12;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uStackY_84;
  int local_50;
  int local_4c;
  int local_48;
  int **local_44;
  int local_40;
  int local_3c;
  int **local_38;
  int local_34;
  int **local_2c;
  int *local_24;
  LPCSTR local_20;
  undefined *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00427130;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff98;
  ExceptionList = &local_14;
  puVar5 = &stack0xffffff98;
  if (_DAT_00429924 == 0) {
    uStackY_84 = 0x41e757;
    ExceptionList = &local_14;
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      puVar5 = local_1c;
      if (DVar3 == 0x78) {
        _DAT_00429924 = 2;
      }
    }
    else {
      _DAT_00429924 = 1;
      puVar5 = local_1c;
    }
  }
  local_1c = puVar5;
  if (0 < (int)_LpSrcStr) {
    _LpSrcStr = (LPCSTR)_strncnt((char *)_DwMapFlag,(size_t)_LpSrcStr);
  }
  if ((_DAT_00429924 != 2) && (_DAT_00429924 != 0)) {
    if (_DAT_00429924 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    local_3c = 0;
    local_40 = 0;
    local_50 = 0;
    if (_CchDest == 0) {
      _CchDest = DAT_00429914;
    }
    uStackY_84 = 0x41ea10;
    local_48 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                   (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (local_48 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    puVar5 = (undefined *)(local_48 * 2 + 3U & 0xfffffffc);
    iVar2 = -(int)puVar5;
    local_44 = (int **)(&stack0xffffff98 + iVar2);
    local_1c = &stack0xffffff98 + iVar2;
    local_8 = 0xffffffff;
    if (&stack0xffffff98 == puVar5) {
      *(undefined4 *)(&stack0xffffff94 + iVar2) = 0x101;
      *(char **)(&stack0xffffff90 + iVar2) = "a_map.c";
      *(undefined4 *)(&stack0xffffff8c + iVar2) = 2;
      *(int *)(&stack0xffffff88 + iVar2) = local_48 << 1;
      *(undefined4 *)(&stack0xffffff84 + iVar2) = 0x41ea85;
      local_44 = __malloc_dbg(*(int **)(&stack0xffffff88 + iVar2),
                              *(int **)(&stack0xffffff8c + iVar2),
                              *(int **)(&stack0xffffff90 + iVar2),
                              *(int **)(&stack0xffffff94 + iVar2));
      if (local_44 == (int **)0x0) {
        ExceptionList = local_14;
        return 0;
      }
      local_40 = local_40 + 1;
    }
    *(int *)(&stack0xffffff94 + iVar2) = local_48;
    *(int ***)(&stack0xffffff90 + iVar2) = local_44;
    *(LPCSTR *)(&stack0xffffff8c + iVar2) = _LpSrcStr;
    *(DWORD *)(&stack0xffffff88 + iVar2) = _DwMapFlag;
    *(undefined4 *)(&stack0xffffff84 + iVar2) = 1;
    *(int *)(&stack0xffffff80 + iVar2) = _CchDest;
    puVar5 = (undefined *)((int)&uStackY_84 + iVar2);
    *(undefined4 *)((int)&uStackY_84 + iVar2) = 0x41eabd;
    iVar2 = MultiByteToWideChar(*(UINT *)(&stack0xffffff80 + iVar2),
                                *(DWORD *)(&stack0xffffff84 + iVar2),
                                *(LPCSTR *)(&stack0xffffff88 + iVar2),
                                *(int *)(&stack0xffffff8c + iVar2),
                                *(LPWSTR *)(&stack0xffffff90 + iVar2),
                                *(int *)(&stack0xffffff94 + iVar2));
    pvVar6 = extraout_ECX_05;
    if (iVar2 != 0) {
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -8) = 0;
      *(int *)(puVar5 + -0xc) = local_48;
      *(int ***)(puVar5 + -0x10) = local_44;
      *(LPCWSTR *)(puVar5 + -0x14) = _LocaleName;
      *(_locale_t *)(puVar5 + -0x18) = _Plocinfo;
      puVar7 = puVar5 + -0x1c;
      *(undefined4 *)(puVar5 + -0x1c) = 0x41eae0;
      local_4c = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                              *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                              *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
      pvVar6 = extraout_ECX_06;
      puVar5 = puVar7;
      local_3c = local_4c;
      if (local_4c != 0) {
        if (((uint)_LocaleName & 0x400) == 0) {
          puVar5 = (undefined *)(local_4c * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar7 + -4) = 0x41eb55;
          iVar2 = -(int)puVar5;
          local_38 = (int **)(puVar7 + iVar2);
          local_1c = puVar7 + iVar2;
          local_8 = 0xffffffff;
          if (puVar7 == puVar5) {
            *(undefined4 *)(puVar7 + iVar2 + -4) = 0x13a;
            *(char **)(puVar7 + iVar2 + -8) = "a_map.c";
            *(undefined4 *)(puVar7 + iVar2 + -0xc) = 2;
            *(int *)(puVar7 + iVar2 + -0x10) = local_4c << 1;
            *(undefined4 *)(puVar7 + iVar2 + -0x14) = 0x41eba3;
            local_38 = __malloc_dbg(*(int **)(puVar7 + iVar2 + -0x10),
                                    *(int **)(puVar7 + iVar2 + -0xc),*(int **)(puVar7 + iVar2 + -8),
                                    *(int **)(puVar7 + iVar2 + -4));
            pvVar6 = extraout_ECX_08;
            puVar5 = puVar7 + iVar2;
            if (local_38 == (int **)0x0) goto LAB_0041ec30;
            local_50 = local_50 + 1;
          }
          *(int *)(puVar7 + iVar2 + -4) = local_4c;
          *(int ***)(puVar7 + iVar2 + -8) = local_38;
          *(int *)(puVar7 + iVar2 + -0xc) = local_48;
          *(int ***)(puVar7 + iVar2 + -0x10) = local_44;
          *(LPCWSTR *)(puVar7 + iVar2 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + iVar2 + -0x18) = _Plocinfo;
          puVar9 = puVar7 + iVar2 + -0x1c;
          *(undefined4 *)(puVar7 + iVar2 + -0x1c) = 0x41ebd8;
          iVar2 = LCMapStringW(*(LCID *)(puVar7 + iVar2 + -0x18),*(DWORD *)(puVar7 + iVar2 + -0x14),
                               *(LPCWSTR *)(puVar7 + iVar2 + -0x10),*(int *)(puVar7 + iVar2 + -0xc),
                               *(LPWSTR *)(puVar7 + iVar2 + -8),*(int *)(puVar7 + iVar2 + -4));
          pvVar6 = extraout_ECX_09;
          puVar5 = puVar9;
          if (iVar2 != 0) {
            if (_LpDestStr == (LPSTR)0x0) {
              *(undefined4 *)(puVar9 + -4) = 0;
              *(undefined4 *)(puVar9 + -8) = 0;
              *(undefined4 *)(puVar9 + -0xc) = 0;
              *(undefined4 *)(puVar9 + -0x10) = 0;
              *(int *)(puVar9 + -0x14) = local_4c;
              *(int ***)(puVar9 + -0x18) = local_38;
              *(undefined4 *)(puVar9 + -0x1c) = 0;
              *(int *)(puVar9 + -0x20) = _CchDest;
              puVar10 = puVar9 + -0x24;
              *(undefined4 *)(puVar9 + -0x24) = 0x41ec00;
              local_3c = WideCharToMultiByte(*(UINT *)(puVar9 + -0x20),*(DWORD *)(puVar9 + -0x1c),
                                             *(LPCWSTR *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                             *(LPSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                             *(LPCSTR *)(puVar9 + -8),*(LPBOOL *)(puVar9 + -4));
              pvVar6 = extraout_ECX_10;
              puVar5 = puVar10;
            }
            else {
              *(undefined4 *)(puVar9 + -4) = 0;
              *(undefined4 *)(puVar9 + -8) = 0;
              *(LPSTR *)(puVar9 + -0xc) = _LpDestStr;
              *(int *)(puVar9 + -0x10) = _CchSrc;
              *(int *)(puVar9 + -0x14) = local_4c;
              *(int ***)(puVar9 + -0x18) = local_38;
              *(undefined4 *)(puVar9 + -0x1c) = 0;
              *(int *)(puVar9 + -0x20) = _CchDest;
              puVar11 = puVar9 + -0x24;
              *(undefined4 *)(puVar9 + -0x24) = 0x41ec2d;
              local_3c = WideCharToMultiByte(*(UINT *)(puVar9 + -0x20),*(DWORD *)(puVar9 + -0x1c),
                                             *(LPCWSTR *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                             *(LPSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                             *(LPCSTR *)(puVar9 + -8),*(LPBOOL *)(puVar9 + -4));
              pvVar6 = extraout_ECX_11;
              puVar5 = puVar11;
            }
          }
        }
        else if ((_LpDestStr != (LPSTR)0x0) && (local_4c <= (int)_LpDestStr)) {
          *(LPSTR *)(puVar7 + -4) = _LpDestStr;
          *(int *)(puVar7 + -8) = _CchSrc;
          *(int *)(puVar7 + -0xc) = local_48;
          *(int ***)(puVar7 + -0x10) = local_44;
          *(LPCWSTR *)(puVar7 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + -0x18) = _Plocinfo;
          puVar8 = puVar7 + -0x1c;
          *(undefined4 *)(puVar7 + -0x1c) = 0x41eb2a;
          LCMapStringW(*(LCID *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                       *(LPCWSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),*(LPWSTR *)(puVar7 + -8)
                       ,*(int *)(puVar7 + -4));
          pvVar6 = extraout_ECX_07;
          puVar5 = puVar8;
        }
      }
    }
LAB_0041ec30:
    if (local_50 != 0) {
      *(undefined4 *)(puVar5 + -4) = 2;
      *(int ***)(puVar5 + -8) = local_38;
      *(undefined4 *)(puVar5 + -0xc) = 0x41ec41;
      __free_dbg(local_38,*(uint *)(puVar5 + -8),*(int **)(puVar5 + -4));
      pvVar6 = extraout_ECX_12;
    }
    if (local_40 == 0) {
      ExceptionList = local_14;
      return local_3c;
    }
    *(undefined4 *)(puVar5 + -4) = 2;
    *(int ***)(puVar5 + -8) = local_44;
    *(undefined4 *)(puVar5 + -0xc) = 0x41ec55;
    __free_dbg(pvVar6,*(uint *)(puVar5 + -8),*(int **)(puVar5 + -4));
    ExceptionList = local_14;
    return local_3c;
  }
  local_20 = (LPCSTR)0x0;
  local_2c = (int **)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_00429904;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_00429914;
  }
  UVar4 = ___ansicp((LCID)_Plocinfo);
  if (UVar4 == 0xffffffff) {
    ExceptionList = local_14;
    return 0;
  }
  if (UVar4 == _CchDest) {
    uStackY_84 = 0x41e99a;
    local_34 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    pvVar6 = extraout_ECX_04;
    goto LAB_0041e99d;
  }
  uStackY_84 = 0x41e81e;
  lpSrcStr = (LPCSTR)___convertcp(_CchDest,UVar4,(char *)_DwMapFlag,(int *)&_LpSrcStr,(int **)0x0,0)
  ;
  if (lpSrcStr == (LPCSTR)0x0) {
    ExceptionList = local_14;
    return 0;
  }
  uStackY_84 = 0x41e851;
  local_20 = lpSrcStr;
  local_24 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                 (LPSTR)0x0,0);
  pvVar6 = extraout_ECX;
  if (local_24 != (int *)0x0) {
    local_8 = 0;
    local_2c = (int **)&stack0xffffff98;
    local_1c = &stack0xffffff98;
    _memset(&stack0xffffff98,0,(size_t)local_24);
    local_8 = 0xffffffff;
    if (&stack0x00000000 == (undefined *)0x68) {
      local_2c = __malloc_dbg(local_24,(int *)0x2,(int *)"a_map.c",(int *)0xa6);
      if (local_2c == (int **)0x0) {
        local_34 = 0;
        pvVar6 = extraout_ECX_00;
        goto LAB_0041e966;
      }
      _memset(local_2c,0,(size_t)local_24);
      bVar1 = true;
    }
    uStackY_84 = 0x41e920;
    local_24 = (int *)LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,lpSrcStr,(int)_LpSrcStr,
                                   (LPSTR)local_2c,(int)local_24);
    if (local_24 == (int *)0x0) {
      local_34 = 0;
      pvVar6 = extraout_ECX_01;
    }
    else {
      uStackY_84 = 0x41e94f;
      iVar2 = ___convertcp(UVar4,_CchDest,(char *)local_2c,(int *)&local_24,(int **)_CchSrc,
                           (int)_LpDestStr);
      pvVar6 = extraout_ECX_02;
      if (iVar2 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
    }
  }
LAB_0041e966:
  if (bVar1) {
    __free_dbg(local_2c,(uint)local_2c,(int *)0x2);
    pvVar6 = extraout_ECX_03;
  }
LAB_0041e99d:
  if (local_20 != (LPCSTR)0x0) {
    __free_dbg(pvVar6,(uint)local_20,(int *)0x2);
  }
  ExceptionList = local_14;
  return local_34;
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
  for (local_8 = _String; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
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
  LPWORD pWVar4;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uStackY_6c;
  int **local_40;
  int local_3c;
  int local_38;
  int local_34;
  BOOL local_30;
  DWORD local_24;
  WORD local_20 [2];
  undefined *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00427168;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar6 = &stack0xffffffb0;
  if (_DAT_00429928 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      puVar6 = local_1c;
      if (DVar3 == 0x78) {
        _DAT_00429928 = 2;
      }
    }
    else {
      _DAT_00429928 = 1;
      puVar6 = local_1c;
    }
  }
  local_1c = puVar6;
  if ((_DAT_00429928 == 2) || (_DAT_00429928 == 0)) {
    local_24 = 0;
    if (_Code_page == 0) {
      _Code_page = DAT_00429904;
    }
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00429914;
    }
    pWVar4 = (LPWORD)___ansicp(_Code_page);
    if (pWVar4 == (LPWORD)0xffffffff) {
      local_30 = 0;
    }
    else {
      if (pWVar4 != _LpCharType) {
        uStackY_6c = 0x41ef0f;
        _DWInfoType = ___convertcp((UINT)_LpCharType,(UINT)pWVar4,(char *)_DWInfoType,
                                   (int *)&_LpSrcStr,(int **)0x0,0);
        local_24 = _DWInfoType;
        if (_DWInfoType == 0) {
          ExceptionList = local_14;
          return 0;
        }
      }
      local_30 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                (LPWORD)_CchSrc);
      if (local_24 != 0) {
        __free_dbg(this,local_24,(int *)0x2);
      }
    }
  }
  else if (_DAT_00429928 == 1) {
    local_30 = 0;
    local_3c = 0;
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_00429914;
    }
    uStackY_6c = 0x41efb2;
    local_38 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,
                                   (LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0,0);
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      local_8 = 0;
      iVar1 = -(local_38 * 2 + 3U & 0xfffffffc);
      local_40 = (int **)(&stack0xffffffb0 + iVar1);
      local_1c = &stack0xffffffb0 + iVar1;
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
          ExceptionList = local_14;
          return 0;
        }
        local_3c = local_3c + 1;
      }
      *(int *)(&stack0xffffffac + iVar1) = local_38;
      *(int ***)(&stack0xffffffa8 + iVar1) = local_40;
      *(LPCSTR *)(&stack0xffffffa4 + iVar1) = _LpSrcStr;
      *(DWORD *)(&stack0xffffffa0 + iVar1) = _DWInfoType;
      *(undefined4 *)(&stack0xffffff9c + iVar1) = 1;
      *(LPWORD *)(&stack0xffffff98 + iVar1) = _LpCharType;
      puVar5 = (undefined *)((int)&uStackY_6c + iVar1);
      *(undefined4 *)((int)&uStackY_6c + iVar1) = 0x41f070;
      local_34 = MultiByteToWideChar(*(UINT *)(&stack0xffffff98 + iVar1),
                                     *(DWORD *)(&stack0xffffff9c + iVar1),
                                     *(LPCSTR *)(&stack0xffffffa0 + iVar1),
                                     *(int *)(&stack0xffffffa4 + iVar1),
                                     *(LPWSTR *)(&stack0xffffffa8 + iVar1),
                                     *(int *)(&stack0xffffffac + iVar1));
      this_00 = extraout_ECX;
      puVar6 = puVar5;
      if (local_34 != 0) {
        *(int *)(puVar5 + -4) = _CchSrc;
        *(int *)(puVar5 + -8) = local_34;
        *(int ***)(puVar5 + -0xc) = local_40;
        *(_locale_t *)(puVar5 + -0x10) = _Plocinfo;
        puVar6 = puVar5 + -0x14;
        *(undefined4 *)(puVar5 + -0x14) = 0x41f08f;
        local_30 = GetStringTypeW(*(DWORD *)(puVar5 + -0x10),*(LPCWSTR *)(puVar5 + -0xc),
                                  *(int *)(puVar5 + -8),*(LPWORD *)(puVar5 + -4));
        this_00 = extraout_ECX_00;
      }
      if (local_3c != 0) {
        *(undefined4 *)(puVar6 + -4) = 2;
        *(int ***)(puVar6 + -8) = local_40;
        *(undefined4 *)(puVar6 + -0xc) = 0x41f0a3;
        __free_dbg(this_00,*(uint *)(puVar6 + -8),*(int **)(puVar6 + -4));
      }
    }
  }
  else {
    local_30 = 0;
  }
  ExceptionList = local_14;
  return local_30;
}



// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_0041f32b_caseD_2;
        case 3:
          goto switchD_0041f32b_caseD_3;
        }
        goto switchD_0041f32b_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0041f32b_caseD_0;
      case 1:
        goto switchD_0041f32b_caseD_1;
      case 2:
        goto switchD_0041f32b_caseD_2;
      case 3:
        goto switchD_0041f32b_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041f32b_caseD_2;
            case 3:
              goto switchD_0041f32b_caseD_3;
            }
            goto switchD_0041f32b_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041f32b_caseD_2;
            case 3:
              goto switchD_0041f32b_caseD_3;
            }
            goto switchD_0041f32b_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041f32b_caseD_2;
            case 3:
              goto switchD_0041f32b_caseD_3;
            }
            goto switchD_0041f32b_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0041f32b_caseD_1:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0041f32b_caseD_2:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0041f32b_caseD_3:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0041f32b_caseD_0:
    return _Dst;
  }
  puVar3 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0041f1a5_caseD_2;
      case 3:
        goto switchD_0041f1a5_caseD_3;
      }
      goto switchD_0041f1a5_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0041f1a5_caseD_0;
    case 1:
      goto switchD_0041f1a5_caseD_1;
    case 2:
      goto switchD_0041f1a5_caseD_2;
    case 3:
      goto switchD_0041f1a5_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041f1a5_caseD_2;
          case 3:
            goto switchD_0041f1a5_caseD_3;
          }
          goto switchD_0041f1a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041f1a5_caseD_2;
          case 3:
            goto switchD_0041f1a5_caseD_3;
          }
          goto switchD_0041f1a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
                    // WARNING: Load size is inaccurate
        *(undefined *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
                    // WARNING: Load size is inaccurate
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041f1a5_caseD_2;
          case 3:
            goto switchD_0041f1a5_caseD_3;
          }
          goto switchD_0041f1a5_caseD_1;
        }
      }
    }
  }
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 8:
  case 9:
  case 10:
  case 0xb:
                    // WARNING: This code block may not be properly labeled as switch case
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 4:
  case 5:
  case 6:
  case 7:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0041f1a5_caseD_1:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    return _Dst;
  case 2:
switchD_0041f1a5_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0041f1a5_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0041f1a5_caseD_0:
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
  LARGE_INTEGER local_1c;
  uint local_10;
  _FILETIME local_c;
  
  if ((DAT_00428eb0 == 0) || (DAT_00428eb0 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    local_10 = local_c.dwLowDateTime ^ local_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetCurrentThreadId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetTickCount();
    local_10 = DVar1 ^ local_10;
    QueryPerformanceCounter(&local_1c);
    local_20 = local_10 ^ local_1c.s.LowPart ^ local_1c.s.HighPart;
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
  char *local_140;
  uint local_13c [65];
  undefined local_38;
  int local_30;
  uint *local_2c;
  uint *local_28;
  char *local_24;
  undefined4 local_20;
  undefined *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00427368;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_30 = DAT_00428eb0;
  local_1c = &stack0xfffffeac;
  if (DAT_0042992c == (code *)0x0) {
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
    ExceptionList = &local_14;
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
    ExceptionList = &local_14;
    local_1c = &stack0xfffffeac;
    (*DAT_0042992c)(param_1,param_2);
    local_8 = 0xffffffff;
  }
  __exit(3);
  ExceptionList = local_14;
  ___security_check_cookie_4(local_30);
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
  uint local_10;
  uint local_8;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x66,(char *)0x0,"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  _File_00 = _File;
  uVar3 = _File->_file;
  if (((_File->_flag & 0x82U) != 0) && ((_File->_flag & 0x40U) == 0)) {
    if ((_File->_flag & 1U) != 0) {
      _File->_cnt = 0;
      if ((_File->_flag & 0x10U) == 0) {
        _File->_flag = _File->_flag | 0x20;
        return -1;
      }
      _File->_ptr = _File->_base;
      _File->_flag = _File->_flag & 0xfffffffe;
    }
    _File->_flag = _File->_flag | 2;
    _File->_flag = _File->_flag & 0xffffffef;
    _File->_cnt = 0;
    local_10 = 0;
    if (((_File->_flag & 0x10cU) == 0) &&
       (((_File != (FILE *)&DAT_00428f20 && (_File != (FILE *)&DAT_00428f40)) ||
        (iVar2 = __isatty(uVar3), iVar2 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108U) == 0) {
      local_8 = 1;
      local_10 = __write(uVar3,&_Ch,1);
    }
    else {
      if (((int)_File_00->_ptr - (int)_File_00->_base < 0) &&
         (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x9d,(char *)0x0,
                                 "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)")
         , iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      local_8 = (int)_File_00->_ptr - (int)_File_00->_base;
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
        local_10 = __write(uVar3,_File_00->_base,local_8);
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
  return -1;
}



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
  undefined4 extraout_ECX_00;
  int **extraout_ECX_01;
  int **ppiVar9;
  int **extraout_ECX_02;
  int **extraout_ECX_03;
  int **extraout_ECX_04;
  int **extraout_ECX_05;
  int **extraout_ECX_06;
  int **extraout_ECX_07;
  bool bVar10;
  undefined8 uVar11;
  int **local_2bc;
  uint local_2a8;
  byte local_2a4 [8];
  int local_29c;
  int **local_298;
  int **local_294;
  int local_290;
  undefined8 local_28c;
  undefined8 local_284;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  int *local_26c;
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
  int local_240;
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
  byte local_18;
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
    if ((local_245 == 0) || (local_240 < 0)) {
      ___security_check_cookie_4(local_38);
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
        else if ((*pbVar3 == 0x33) && (param_2[2] == 0x32)) {
          local_14 = local_14 & 0xffff7fff;
          pbVar3 = param_2 + 3;
        }
        else if (((((*pbVar3 != 100) && (*pbVar3 != 0x69)) && (*pbVar3 != 0x6f)) &&
                 ((*pbVar3 != 0x75 && (*pbVar3 != 0x78)))) && (*pbVar3 != 0x58)) {
          local_250 = 0;
switchD_0041fe66_caseD_0:
          local_10 = 0;
          if ((*(ushort *)(PTR_DAT_00428ed4 + (uint)local_245 * 2) & 0x8000) != 0) {
            _write_char(local_245,param_1,&local_240);
            local_245 = *pbVar3;
            pbVar3 = param_2 + 2;
            if ((local_245 == 0) &&
               (iVar4 = __CrtDbgReport(2,"output.c",0x192,(char *)0x0,"ch != _T(\'\\0\')"),
               iVar4 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          param_2 = pbVar3;
          _write_char(local_245,param_1,&local_240);
          pbVar3 = param_2;
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
          uVar5 = _get_int_arg((int *)&param_3);
          local_258._0_1_ = (undefined)uVar5;
          ppiVar9 = (int **)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),(undefined)local_258);
          local_23c = (undefined)local_258;
          local_28 = (int **)0x1;
          local_258 = (short)uVar5;
        }
        else {
          local_24c = _get_short_arg((int *)&param_3);
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
        else if ((local_34 == (int **)0x0) && (local_245 == 0x67)) {
          local_34 = (int **)0x1;
        }
        else if (0x200 < (int)local_34) {
          local_34 = (int **)0x200;
        }
        ppiVar9 = local_8;
        if ((0xa3 < (int)local_34) &&
           (local_24 = __malloc_dbg((int *)((int)local_34 + 0x15d),(int *)0x2,(int *)"output.c",
                                    (int *)0x300), ppiVar9 = local_24, local_24 == (int **)0x0)) {
          local_34 = (int **)0xa3;
          ppiVar9 = local_8;
        }
        local_8 = ppiVar9;
        local_274 = *param_3;
        local_270 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_00429200)(&local_274,local_8,(int)(char)local_245,local_34,local_30);
        if (((local_14 & 0x80) != 0) && (local_34 == (int **)0x0)) {
          (*(code *)PTR___fptrap_0042920c)(local_8);
        }
        if ((local_245 == 0x67) && ((local_14 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_00429204)(local_8);
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
          for (local_260 = local_8;
              (ppiVar9 = local_264, local_264 != (int **)0x0 &&
              (ppiVar9 = (int **)(int)*(char *)local_260, ppiVar9 != (int **)0x0));
              local_260 = (int **)((int)local_260 + 1)) {
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
          for (local_268 = local_8; (local_264 != (int **)0x0 && (*(wchar_t *)local_268 != L'\0'));
              local_268 = (int **)((int)local_268 + 2)) {
            local_264 = (int **)((int)local_264 + -1);
          }
          ppiVar9 = (int **)((int)local_268 - (int)local_8 >> 1);
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
        else if ((local_14 & 0x800) == 0) {
          local_10 = 0;
          local_28 = (int **)(int)*(wchar_t *)ppiVar9;
          ppiVar8 = (int **)ppiVar9[1];
        }
        else {
          local_10 = 1;
          local_28 = (int **)((int)*(wchar_t *)ppiVar9 / 2);
          ppiVar8 = (int **)ppiVar9[1];
        }
        break;
      case 100:
      case 0x69:
        local_14 = local_14 | 0x40;
        local_c = 10;
        goto LAB_00420604;
      case 0x6e:
        local_26c = (int *)_get_int_arg((int *)&param_3);
        if ((local_14 & 0x20) == 0) {
          *local_26c = local_240;
          ppiVar9 = extraout_ECX_02;
        }
        else {
          ppiVar9 = (int **)CONCAT22((short)((uint)extraout_ECX_02 >> 0x10),(undefined2)local_240);
          *(undefined2 *)local_26c = (undefined2)local_240;
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
        local_34 = (int **)0x8;
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
          local_18 = 0x30;
          local_17 = (char)local_254 + 'Q';
          local_20 = 2;
        }
LAB_00420604:
        if ((local_14 & 0x8000) == 0) {
          if ((local_14 & 0x20) == 0) {
            if ((local_14 & 0x40) == 0) {
              uVar6 = _get_int_arg((int *)&param_3);
              local_284 = (ulonglong)uVar6;
            }
            else {
              iVar4 = _get_int_arg((int *)&param_3);
              local_284 = (ulonglong)iVar4;
            }
          }
          else if ((local_14 & 0x40) == 0) {
            uVar6 = _get_int_arg((int *)&param_3);
            local_284 = (ulonglong)(uVar6 & 0xffff);
          }
          else {
            uVar5 = _get_int_arg((int *)&param_3);
            local_284 = (ulonglong)(int)(short)uVar5;
          }
        }
        else {
          local_284 = _get_int64_arg((int *)&param_3);
        }
        if ((((local_14 & 0x40) == 0) || (0 < local_284._4_4_)) || (-1 < (longlong)local_284)) {
          local_28c = local_284;
        }
        else {
          local_28c = CONCAT44(-(local_284._4_4_ + (uint)((int)local_284 != 0)),-(int)local_284);
          local_14 = local_14 | 0x100;
        }
        if ((local_14 & 0x8000) == 0) {
          local_28c = local_28c & 0xffffffff;
        }
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
        while( true ) {
          ppiVar2 = local_8;
          ppiVar7 = (int **)((int)local_34 + -1);
          if (((int)local_34 < 1) && (((uint)local_28c | local_28c._4_4_) == 0)) break;
          local_34 = ppiVar7;
          uVar11 = __aullrem((uint)local_28c,local_28c._4_4_,local_c,(int)local_c >> 0x1f);
          local_278 = (int)uVar11 + 0x30;
          local_28c = __aulldiv((uint)local_28c,local_28c._4_4_,local_c,(int)local_c >> 0x1f);
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
                local_18 = 0x20;
                local_20 = 1;
              }
            }
            else {
              local_18 = 0x2b;
              local_20 = 1;
            }
          }
          else {
            local_18 = 0x2d;
            local_20 = 1;
          }
        }
        local_290 = (local_1c - (int)local_28) - local_20;
        if ((local_14 & 0xc) == 0) {
          _write_multi_char(0x20,local_290,param_1,&local_240);
        }
        _write_string(&local_18,local_20,param_1,&local_240);
        if (((local_14 & 8) != 0) && ((local_14 & 4) == 0)) {
          _write_multi_char(0x30,local_290,param_1,&local_240);
        }
        if ((local_10 == 0) || ((int)local_28 < 1)) {
          _write_string((byte *)local_8,(int)local_28,param_1,&local_240);
          ppiVar9 = extraout_ECX_06;
        }
        else {
          local_294 = local_8;
          local_298 = local_28;
          ppiVar9 = local_28;
          while (ppiVar8 = (int **)((int)local_298 + -1), bVar10 = local_298 != (int **)0x0,
                local_298 = ppiVar8, bVar10) {
            local_29c = _wctomb((char *)local_2a4,*(wchar_t *)local_294);
            local_294 = (int **)((int)local_294 + 2);
            ppiVar9 = extraout_ECX_04;
            if (local_29c < 1) break;
            _write_string(local_2a4,local_29c,param_1,&local_240);
            ppiVar9 = extraout_ECX_05;
          }
        }
        if ((local_14 & 4) != 0) {
          _write_multi_char(0x20,local_290,param_1,&local_240);
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

void __cdecl _write_char(byte param_1,FILE *param_2,int *param_3)

{
  uint local_8;
  
  if (((param_2->_flag & 0x40U) == 0) || (param_2->_base != (char *)0x0)) {
    param_2->_cnt = param_2->_cnt + -1;
    if (param_2->_cnt < 0) {
      local_8 = __flsbuf((int)(char)param_1,param_2);
    }
    else {
      *param_2->_ptr = param_1;
      local_8 = (uint)param_1;
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

void __cdecl _write_multi_char(byte param_1,int param_2,FILE *param_3,int *param_4)

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

void __cdecl _write_string(byte *param_1,int param_2,FILE *param_3,int *param_4)

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

undefined2 __cdecl _get_short_arg(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
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
  undefined4 uStack_6c;
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
  
  uStack_6c = 0x421100;
  local_68 = &uStack_6c;
  local_14 = &uStack_6c;
  SVar1 = VirtualQuery(&uStack_6c,&local_5c,0x1c);
  if (SVar1 == 0) {
    iVar2 = 0;
  }
  else {
    local_64 = local_5c.AllocationBase;
    GetSystemInfo(&local_40);
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
          SVar1 = VirtualQuery(local_60,&local_5c,0x1c);
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
  ___security_check_cookie_4(local_c);
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
  _cpinfo local_4c;
  int local_38;
  int **local_34;
  int local_30;
  int local_2c;
  int local_28;
  int **local_24;
  int local_20;
  undefined *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00427498;
  puStack_10 = &LAB_004111a4;
  local_14 = ExceptionList;
  local_38 = DAT_00428eb0;
  local_1c = &stack0xffffffa4;
  local_24 = (int **)0x0;
  local_30 = 0;
  local_20 = *param_4;
  local_28 = 0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffa4;
  if (param_1 != param_2) {
    ExceptionList = &local_14;
    BVar2 = GetCPInfo(param_1,&local_4c);
    if ((((BVar2 != 0) && (local_4c.MaxCharSize == 1)) &&
        (BVar2 = GetCPInfo(param_2,&local_4c), BVar2 != 0)) && (local_4c.MaxCharSize == 1)) {
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
  ExceptionList = local_14;
  ___security_check_cookie_4(local_38);
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
          if (_MaxCharCount <= (uint)((int)local_418 - (int)_Buf)) break;
          local_428 = local_414;
          while (((int)local_428 - (int)local_414 < 0x400 &&
                 ((uint)((int)local_418 - (int)_Buf) < _MaxCharCount))) {
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
                            local_414,(int)local_428 - (int)local_414,&local_424,(LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            local_420 = GetLastError();
            break;
          }
          local_41c = local_41c + local_424;
        } while ((int)local_428 - (int)local_414 <= (int)local_424);
      }
      if (local_41c == 0) {
        if (local_420 == 0) {
                    // WARNING: Load size is inaccurate
          if (((*(byte *)((&DAT_0042afe0)[iVar3] + 4 + (_FileHandle & 0x1fU) * 8) & 0x40) == 0) ||
             (*_Buf != '\x1a')) {
            _DAT_0042962c = 0x1c;
            _DAT_00429630 = 0;
          }
        }
        else if (local_420 == 5) {
          _DAT_0042962c = 9;
          _DAT_00429630 = local_420;
        }
        else {
          __dosmaperr(local_420);
        }
      }
    }
  }
  else {
    _DAT_0042962c = 9;
    _DAT_00429630 = 0;
  }
  iVar3 = ___security_check_cookie_4(local_8);
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
  else if (DAT_0042ac80 < 0x14) {
    DAT_0042ac80 = 0x14;
  }
  DAT_00429934 = __calloc_dbg(DAT_0042ac80,4,(int *)0x2,(int *)"_file.c",(int *)0x89);
  if (DAT_00429934 == (int **)0x0) {
    DAT_0042ac80 = 0x14;
    DAT_00429934 = __calloc_dbg(0x14,4,(int *)0x2,(int *)"_file.c",(int *)0x8c);
    if (DAT_00429934 == (int **)0x0) {
      return 0x1a;
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    DAT_00429934[local_8] = (int *)(&PTR_DAT_00428f00 + local_8 * 8);
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_0042afe0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 8) == -1) ||
       (*(int *)((&DAT_0042afe0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 8) == 0)) {
      *(undefined4 *)(&DAT_00428f10 + local_8 * 0x20) = 0xffffffff;
    }
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
  else if (DAT_00429904 == 0) {
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
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_1c;
  uint local_18;
  undefined8 local_14;
  
  while (iVar2 = __ismbcspace((uint)(byte)*_String), iVar2 != 0) {
    _String = _String + 1;
  }
  uVar3 = (uint)(byte)*_String;
  if ((uVar3 == 0x2d) || (pbVar1 = (byte *)(_String + 1), local_18 = uVar3, uVar3 == 0x2b)) {
    local_18 = (uint)(byte)_String[1];
    pbVar1 = (byte *)(_String + 2);
  }
  _String = (char *)pbVar1;
  local_14 = 0;
  while( true ) {
    if ((local_18 < 0x30) || (0x39 < local_18)) {
      local_1c = -1;
    }
    else {
      local_1c = local_18 - 0x30;
    }
    if (local_1c == -1) break;
    local_14 = __allmul((uint)local_14,local_14._4_4_,10,0);
    local_14 = local_14 + local_1c;
    local_18 = (uint)(byte)*_String;
    _String = _String + 1;
  }
  if (uVar3 == 0x2d) {
    bVar4 = (uint)local_14 != 0;
    local_14._0_4_ = -(uint)local_14;
    local_14._4_4_ = -(local_14._4_4_ + bVar4);
  }
  return CONCAT44(local_14._4_4_,(uint)local_14);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __dosmaperr
// 
// Library: Visual Studio 2003 Debug

void __cdecl __dosmaperr(ulong param_1)

{
  uint local_8;
  
  _DAT_00429630 = param_1;
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
      return;
    }
    if (param_1 == *(ulong *)(&DAT_00429220 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  _DAT_0042962c = *(undefined4 *)(&DAT_00429224 + local_8 * 8);
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
      for (; local_10 < (int **)((&DAT_0042afe0)[local_8] + 0x100); local_10 = local_10 + 2) {
        *(undefined *)(local_10 + 1) = 0;
        *local_10 = (int *)0xffffffff;
        *(undefined *)((int)local_10 + 5) = 10;
      }
      return local_8 << 5;
    }
    for (local_10 = (int **)(&DAT_0042afe0)[local_8];
        local_10 < (undefined4 *)((&DAT_0042afe0)[local_8] + 0x100); local_10 = local_10 + 2) {
      if ((*(byte *)(local_10 + 1) & 1) == 0) {
        *local_10 = (int *)0xffffffff;
        local_c = local_8 * 0x20 + ((int)local_10 - (&DAT_0042afe0)[local_8] >> 3);
        break;
      }
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
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
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
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
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
    else if (DVar1 == 3) {
      local_5 = local_5 | 8;
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
  for (local_c = 3; local_c < DAT_0042ac80; local_c = local_c + 1) {
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
  uint uVar1;
  uint _MaxCharCount;
  int local_8;
  
  local_8 = 0;
  if ((((_File->_flag & 3U) == 2) && ((_File->_flag & 0x108U) != 0)) &&
     (_MaxCharCount = (int)_File->_ptr - (int)_File->_base, 0 < (int)_MaxCharCount)) {
    uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
    if (uVar1 == _MaxCharCount) {
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
  for (local_c = 0; local_c < DAT_0042ac80; local_c = local_c + 1) {
    if ((*(int *)(DAT_00429934 + local_c * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_00429934 + local_c * 4) + 0xc) & 0x83) != 0)) {
      if (param_1 == 1) {
        iVar1 = _fflush(*(FILE **)(DAT_00429934 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      else if (((param_1 == 0) && ((*(uint *)(*(int *)(DAT_00429934 + local_c * 4) + 0xc) & 2) != 0)
               ) && (iVar1 = _fflush(*(FILE **)(DAT_00429934 + local_c * 4)), iVar1 == -1)) {
        local_10 = -1;
      }
    }
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
      else if ((local_6 == 0) && ((local_8 & 8) != 0)) {
        local_10 = 1;
      }
      else {
        local_10 = 0;
      }
    }
  }
  return local_10;
}



// Library Function - Single Match
//  __allmul
// 
// Library: Visual Studio 2003 Debug

longlong __allmul(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
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
      else if (_File->_tmpfname != (char *)0x0) {
        __free_dbg(_File->_tmpfname,(uint)_File->_tmpfname,(int *)0x2);
        _File->_tmpfname = (char *)0x0;
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


