typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
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
typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef ulong DWORD;

typedef void * LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void * HANDLE;

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

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef wchar_t WCHAR;

typedef WCHAR * LPWSTR;

typedef ushort WORD;

typedef BYTE * LPBYTE;

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

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

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

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef char CHAR;

typedef CHAR * LPCSTR;

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

typedef LARGE_INTEGER * PLARGE_INTEGER;

typedef CHAR * LPSTR;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;

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

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef ulong ULONG;

typedef int (* FARPROC)(void);

typedef DWORD * LPDWORD;

typedef WORD * LPWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef BOOL * LPBOOL;

typedef BYTE * PBYTE;

typedef struct HINSTANCE__ * HINSTANCE;

typedef HINSTANCE HMODULE;

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

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
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

typedef struct _CONSOLE_READCONSOLE_CONTROL _CONSOLE_READCONSOLE_CONTROL, *P_CONSOLE_READCONSOLE_CONTROL;

struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
};

typedef struct _CONSOLE_READCONSOLE_CONTROL * PCONSOLE_READCONSOLE_CONTROL;

typedef uint uintptr_t;

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata * _ptiddata;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

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

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t * pchLanguage;
    wchar_t * pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

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

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char * _token;
    wchar_t * _wtoken;
    uchar * _mtoken;
    char * _errmsg;
    wchar_t * _werrmsg;
    char * _namebuf0;
    wchar_t * _wnamebuf0;
    char * _namebuf1;
    wchar_t * _wnamebuf1;
    char * _asctimebuf;
    wchar_t * _wasctimebuf;
    void * _gmtimebuf;
    char * _cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void * _initaddr;
    void * _initarg;
    void * _pxcptacttab;
    void * _tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void * _terminate;
    void * _unexpected;
    void * _translator;
    void * _purecall;
    void * _curexception;
    void * _curcontext;
    int _ProcessingThrow;
    void * _curexcspec;
    void * _pFrameInfoChain;
    _setloc_struct _setloc_data;
    void * _reserved1;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    void * _reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
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


// WARNING! conflicting data type names: /Demangler/wchar_t - /wchar_t

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data { // PlaceHolder Structure
};

typedef ushort wint_t;

typedef uint size_t;

typedef size_t rsize_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef struct localeinfo_struct * _locale_t;




undefined4 __thiscall FUN_00401000(void *this,uint *param_1)

{
  byte bVar1;
  byte bVar2;
  uint3 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if ((this != (void *)0x0) && (param_1 != (uint *)0x0)) {
    param_1[0x3c] = 10;
    puVar4 = param_1 + 1;
    *param_1 = CONCAT31(CONCAT21(CONCAT11(*(undefined *)this,*(undefined *)((int)this + 1)),
                                 *(undefined *)((int)this + 2)),*(undefined *)((int)this + 3));
    *puVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined *)((int)this + 4),*(undefined *)((int)this + 5)
                                        ),*(undefined *)((int)this + 6)),
                       *(undefined *)((int)this + 7));
    param_1[2] = CONCAT31(CONCAT21(CONCAT11(*(undefined *)((int)this + 8),
                                            *(undefined *)((int)this + 9)),
                                   *(undefined *)((int)this + 10)),*(undefined *)((int)this + 0xb));
    bVar1 = *(byte *)((int)this + 0xc);
    uVar3 = CONCAT21(CONCAT11(bVar1,*(undefined *)((int)this + 0xd)),*(undefined *)((int)this + 0xe)
                    );
    bVar2 = *(byte *)((int)this + 0xf);
    uVar7 = CONCAT31(uVar3,bVar2);
    param_1[3] = uVar7;
    uVar6 = (*(uint *)(&DAT_00416130 + ((((uint)uVar3 & 0xff00) << 8) >> 0x10) * 4) ^ 0x1000000) &
            0xff000000 ^ *(uint *)(&DAT_00416130 + ((uint)uVar3 & 0xff) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_00416130)[(uint)bVar1 * 4] ^
            *(uint *)(&DAT_00416130 + (uint)bVar2 * 4) & 0xff00 ^ *param_1;
    uVar5 = *puVar4 ^ uVar6;
    param_1[4] = uVar6;
    param_1[5] = uVar5;
    uVar5 = param_1[2] ^ uVar5;
    param_1[6] = uVar5;
    param_1[7] = uVar7 ^ uVar5;
    puVar8 = &DAT_00414d04;
    do {
      uVar5 = puVar4[6];
      uVar5 = *(uint *)(&DAT_00416130 + (uVar5 >> 8 & 0xff) * 4) & 0xff0000 ^
              *(uint *)(&DAT_00416130 + (uVar5 >> 0x10 & 0xff) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_00416130)[(uVar5 >> 0x18) * 4] ^
              *(uint *)(&DAT_00416130 + (uVar5 & 0xff) * 4) & 0xff00 ^ puVar4[3] ^ *puVar8;
      puVar8 = puVar8 + 1;
      puVar4[7] = uVar5;
      uVar5 = puVar4[4] ^ uVar5;
      puVar4[8] = uVar5;
      uVar5 = puVar4[5] ^ uVar5;
      puVar4[9] = uVar5;
      puVar4[10] = puVar4[6] ^ uVar5;
      puVar4 = puVar4 + 4;
    } while (puVar8 != (uint *)&DAT_00414d28);
    return 0;
  }
  return 0xffffffff;
}



void __fastcall FUN_004011c0(undefined *param_1,undefined *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ *param_3;
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ param_3[1];
  uVar8 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]) ^ param_3[2];
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) ^
          param_3[3];
  uVar3 = *(uint *)(&DAT_00416930 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00416d30 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00417130 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00416530 + (uVar7 & 0xff) * 4) ^ param_3[4];
  uVar4 = *(uint *)(&DAT_00416930 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00416d30 + (uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00417130 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00416530 + (uVar5 & 0xff) * 4) ^ param_3[5];
  uVar1 = *(uint *)(&DAT_00416d30 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00416930 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00417130 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_00416530 + (uVar6 & 0xff) * 4) ^ param_3[6];
  puVar9 = param_3 + 8;
  uVar5 = *(uint *)(&DAT_00416930 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00416d30 + (uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00417130 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_00416530 + (uVar8 & 0xff) * 4) ^ param_3[7];
  iVar2 = (int)param_3[0x3c] >> 1;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    uVar6 = *(uint *)(&DAT_00416930 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00416d30 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar5 & 0xff) * 4) ^ *puVar9;
    uVar7 = *(uint *)(&DAT_00416930 + (uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00416d30 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar3 & 0xff) * 4) ^ puVar9[1];
    uVar8 = *(uint *)(&DAT_00416d30 + (uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00416930 + (uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar1 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar4 & 0xff) * 4) ^ puVar9[2];
    uVar5 = *(uint *)(&DAT_00416930 + (uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00416d30 + (uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar1 & 0xff) * 4) ^ puVar9[3];
    uVar3 = *(uint *)(&DAT_00416930 + (uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00416d30 + (uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar5 & 0xff) * 4) ^ puVar9[4];
    uVar4 = *(uint *)(&DAT_00416930 + (uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00416d30 + (uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar6 & 0xff) * 4) ^ puVar9[5];
    uVar1 = *(uint *)(&DAT_00416d30 + (uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00416930 + (uVar6 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar7 & 0xff) * 4) ^ puVar9[6];
    uVar5 = *(uint *)(&DAT_00416930 + (uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00416d30 + (uVar6 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00417130 + (uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_00416530 + (uVar8 & 0xff) * 4) ^ puVar9[7];
    puVar9 = puVar9 + 8;
  }
  uVar6 = *(uint *)(&DAT_00416130 + (uVar4 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00416130 + (uVar1 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00416130 + (uVar3 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_00416130)[(uVar5 & 0xff) * 4] ^ *puVar9;
  param_2[3] = (char)uVar6;
  *param_2 = (char)(uVar6 >> 0x18);
  param_2[1] = (char)(uVar6 >> 0x10);
  param_2[2] = (char)(uVar6 >> 8);
  uVar6 = *(uint *)(&DAT_00416130 + (uVar1 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00416130 + (uVar5 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00416130 + (uVar4 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_00416130)[(uVar3 & 0xff) * 4] ^ puVar9[1];
  param_2[7] = (char)uVar6;
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  uVar6 = *(uint *)(&DAT_00416130 + (uVar5 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00416130 + (uVar3 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00416130 + (uVar1 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_00416130)[(uVar4 & 0xff) * 4] ^ puVar9[2];
  param_2[8] = (char)(uVar6 >> 0x18);
  param_2[9] = (char)(uVar6 >> 0x10);
  param_2[10] = (char)(uVar6 >> 8);
  uVar4 = *(uint *)(&DAT_00416130 + (uVar4 >> 8 & 0xff) * 4);
  param_2[0xb] = (char)uVar6;
  uVar3 = *(uint *)(&DAT_00416130 + (uVar3 >> 0x10 & 0xff) * 4) & 0xff0000 ^ uVar4 & 0xff00 ^
          *(uint *)(&DAT_00416130 + (uVar5 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_00416130)[(uVar1 & 0xff) * 4] ^ puVar9[3];
  param_2[0xf] = (char)uVar3;
  param_2[0xc] = (char)(uVar3 >> 0x18);
  param_2[0xd] = (char)(uVar3 >> 0x10);
  param_2[0xe] = (char)(uVar3 >> 8);
  return;
}



void __fastcall
FUN_00401780(undefined *param_1,undefined *param_2,uint param_3,uint *param_4,byte *param_5)

{
  undefined auVar1 [16];
  byte *pbVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined local_2c [16];
  byte *local_1c;
  byte **local_18;
  undefined *local_14;
  undefined *local_10;
  byte *local_c;
  undefined *local_8;
  
  puVar4 = param_1;
  local_8 = param_2;
  if (0xf < param_3) {
    puVar5 = param_1 + -(int)param_5;
    local_c = (byte *)(param_3 >> 4);
    local_10 = param_1;
    do {
      if ((puVar5 + 0xf + (int)param_5 < local_2c) || (local_2c + 0xf < param_1)) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
        local_2c = *(undefined *)param_1 ^ *(undefined *)param_5;
      }
      else {
        iVar3 = 0x10;
        pbVar2 = param_5;
        do {
          (pbVar2 + 1)[(int)(&stack0xffffffd3 + -(int)param_5)] = puVar5[(int)pbVar2] ^ *pbVar2;
          iVar3 = iVar3 + -1;
          pbVar2 = pbVar2 + 1;
        } while (iVar3 != 0);
      }
      FUN_004011c0(local_2c,local_8,param_4);
      param_3 = param_3 - 0x10;
      param_1 = param_1 + 0x10;
      puVar5 = puVar5 + 0x10;
                    // WARNING: Load size is inaccurate
      auVar1 = *(undefined *)local_8;
      local_8 = local_8 + 0x10;
      local_c = local_c + -1;
                    // WARNING: Store size is inaccurate
      *(undefined *)param_5 = auVar1;
      puVar4 = param_1;
    } while (local_c != (byte *)0x0);
  }
  local_10 = puVar4;
  if (param_3 != 0) {
    uVar6 = 0;
    if (param_3 != 0) {
      if ((0x1f < param_3) &&
         ((local_10 + (param_3 - 1) < local_2c || (&stack0xffffffd3 + param_3 < local_10)))) {
        local_14 = local_2c + -(int)local_10;
        local_c = param_5 + -(int)local_10;
        local_18 = (byte **)((int)&local_1c + -(int)local_10);
        local_1c = param_5 + 0x10;
        puVar4 = local_10;
        do {
                    // WARNING: Load size is inaccurate
          puVar5 = puVar4 + 0x20;
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
          auVar1 = *(undefined *)(puVar4 + 0x10);
                    // WARNING: Store size is inaccurate
          *(undefined *)(puVar5 + (int)(&stack0xffffffb4 + -(int)local_10)) =
               *(undefined *)(local_c + (int)puVar4) ^ *(undefined *)puVar4;
                    // WARNING: Load size is inaccurate
          pbVar2 = local_1c + uVar6;
          uVar6 = uVar6 + 0x20;
                    // WARNING: Store size is inaccurate
          *(undefined *)(puVar5 + (int)(&stack0xffffffc4 + -(int)local_10)) =
               *(undefined *)pbVar2 ^ auVar1;
          puVar4 = puVar5;
        } while (uVar6 < param_3 - (param_3 & 0x1f));
      }
      if (uVar6 < param_3) {
        puVar4 = local_10 + -(int)param_5;
        iVar3 = param_3 - uVar6;
        pbVar2 = param_5 + uVar6;
        do {
          pbVar2[(int)(local_2c + -(int)param_5)] = pbVar2[(int)puVar4] ^ *pbVar2;
          iVar3 = iVar3 + -1;
          pbVar2 = pbVar2 + 1;
        } while (iVar3 != 0);
      }
    }
    if (param_3 < 0x10) {
      FID_conflict__memcpy(local_2c + param_3,param_5 + param_3,0x10 - param_3);
    }
    FUN_004011c0(local_2c,local_2c,param_4);
                    // WARNING: Store size is inaccurate
    *(undefined *)param_5 = local_2c;
                    // WARNING: Store size is inaccurate
    *(undefined *)local_8 = local_2c;
  }
  return;
}



uint FUN_00401960(void)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  uint *in_ECX;
  uint *puVar3;
  int in_EDX;
  int iVar4;
  undefined local_c;
  undefined4 local_8;
  
  puVar3 = in_ECX;
  do {
    bVar1 = *(byte *)puVar3;
    in_EAX = in_EAX & 0xffffff00 | (uint)bVar1;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while (bVar1 != 0);
  if ((uint *)((int)puVar3 - (int)((int)in_ECX + 1)) != (uint *)0x20) {
    return in_EAX;
  }
  local_8._2_1_ = 0;
  iVar4 = 0;
  do {
    FUN_00401c00(&local_8,in_ECX,2);
    uVar2 = FUN_00401d24((char *)&local_8,(int)&DAT_00417530);
    if (uVar2 != 1) {
      return uVar2 & 0xffffff00;
    }
    in_ECX = (uint *)((int)in_ECX + 2);
    *(undefined *)(iVar4 + in_EDX) = local_c;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return 1;
}



void __fastcall FUN_004019e0(int param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar2 = (char)iVar3;
    pbVar1 = (byte *)(iVar3 + param_1);
    iVar3 = iVar3 + 1;
    *pbVar1 = cVar2 * '\x02' ^ *pbVar1 ^ 0x55;
  } while (iVar3 < 0x10);
  return;
}



undefined4 __cdecl FUN_00401a00(uint param_1,int param_2)

{
  FILE *_File;
  char cVar1;
  FILE *_File_00;
  uint _Size;
  int *_Memory;
  int iVar2;
  char *pcVar3;
  ushort *extraout_ECX;
  uint local_138 [61];
  byte local_44 [16];
  undefined local_34 [16];
  undefined8 local_24;
  undefined2 local_1c;
  undefined local_1a;
  byte local_18 [16];
  FILE *local_8;
  
  if (param_1 != 4) {
    return 1;
  }
  cVar1 = FUN_00401960();
  if (cVar1 == '\0') {
    return 2;
  }
  iVar2 = 0;
  do {
    local_18[iVar2] = (char)iVar2 * '\x02' ^ local_18[iVar2] ^ 0x55;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  _File_00 = _fopen(*(char **)(param_2 + 8),"rb");
  if (_File_00 == (FILE *)0x0) {
    return 3;
  }
  local_8 = _fopen(*(char **)(param_2 + 0xc),"wb");
  if (local_8 == (FILE *)0x0) {
    _fclose(_File_00);
    return 4;
  }
  FUN_00402000(_File_00,0,2);
  _Size = FUN_00402413(_File_00);
  param_1 = _Size;
  FUN_004019e0((int)local_18);
  if ((_Size & 0xf) != 0) {
    _Size = (_Size - (_Size & 0xf)) + 0x10;
  }
  FUN_00402000(_File_00,0,0);
  _File = local_8;
  pcVar3 = local_34;
  local_1c = 0x2174;
  local_34 = (undefined  [16])0x6f74206c61746f54;
  local_1a = 0;
  local_24 = 0x6c65737365756c68;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004025d8((ushort *)local_34,(uint)(pcVar3 + -(int)(local_34 + 1)),1,local_8);
  FUN_004025d8((ushort *)&param_1,4,1,_File);
  FUN_004019e0((int)local_18);
  FUN_004025d8(extraout_ECX,0x10,1,_File);
  FUN_004019e0((int)local_18);
  local_8 = (FILE *)_malloc(_Size);
  FUN_00407390((int *)local_8,0,_Size);
  _fread(local_8,param_1,1,_File_00);
  _fclose(_File_00);
  _Memory = (int *)_malloc(_Size);
  FUN_00407390(_Memory,0,_Size);
  iVar2 = 0;
  do {
    local_44[iVar2] = (byte)param_1 ^ (byte)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = FUN_00401000(local_18,local_138);
  if (iVar2 != 0) {
    return 4;
  }
  FUN_00401780((undefined *)local_8,(undefined *)_Memory,_Size,local_138,local_44);
  FUN_004025d8((ushort *)_Memory,_Size,1,_File);
  FID_conflict__free(local_8);
  FID_conflict__free(_Memory);
  _fclose(_File);
  return 0;
}



uint * __cdecl FUN_00401c00(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar5 = param_1;
  if (((uint)param_2 & 3) != 0) {
    while( true ) {
      cVar3 = *(char *)param_2;
      param_2 = (uint *)((int)param_2 + 1);
      *(char *)puVar5 = cVar3;
      puVar5 = (uint *)((int)puVar5 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return param_1;
      }
      if (cVar3 == '\0') break;
      if (((uint)param_2 & 3) == 0) {
        uVar4 = param_3 >> 2;
        goto joined_r0x00401c4c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = param_3 >> 2;
        if (uVar4 == 0) goto LAB_00401c93;
        goto LAB_00401d09;
      }
      *(undefined *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return param_1;
  }
  uVar4 = param_3 >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00401d05:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00401d09:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          param_3 = param_3 & 3;
          if (param_3 != 0) goto LAB_00401c93;
          return param_1;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00401d05;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00401d05;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00401d05;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00401c4c:
    } while (uVar4 != 0);
    param_3 = param_3 & 3;
    if (param_3 == 0) {
      return param_1;
    }
  }
  do {
    cVar3 = *(char *)param_2;
    param_2 = (uint *)((int)param_2 + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (param_3 = param_3 - 1, param_3 != 0) {
LAB_00401c93:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return param_1;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return param_1;
}



void __cdecl FUN_00401d24(char *param_1,int param_2)

{
  FUN_00401d42(FUN_00402e75,param_1,param_2,0,&stack0x0000000c);
  return;
}



undefined4 __cdecl
FUN_00401d42(undefined *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  size_t *psVar5;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_24 = (char *)0x0;
  iVar4 = 7;
  psVar5 = &local_20;
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    *psVar5 = 0;
    psVar5 = psVar5 + 1;
  }
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    uVar2 = 0xffffffff;
  }
  else {
    sVar3 = _strlen(param_2);
    local_18 = 0x49;
    local_1c = param_2;
    local_24 = param_2;
    local_20 = 0x7fffffff;
    if (sVar3 < 0x80000000) {
      local_20 = sVar3;
    }
    uVar2 = (*(code *)param_1)(&local_24,param_3,param_4,param_5);
  }
  return uVar2;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
// Name: __fsopen
// Library: Visual Studio 2012 Release

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  int *piVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  undefined local_14 [8];
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_004175c0;
  uStack12 = 0x401dc1;
  if (((_Filename == (char *)0x0) || (_Mode == (char *)0x0)) || (*_Mode == '\0')) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  else {
    puVar2 = FUN_004041f0();
    if (puVar2 == (undefined4 *)0x0) {
      piVar1 = __errno();
      *piVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != '\0') {
        pFVar3 = (FILE *)FUN_0040430f(_Filename,(ushort *)_Mode,_ShFlag,puVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_00401e71();
        return pFVar3;
      }
      piVar1 = __errno();
      *piVar1 = 0x16;
      __local_unwind4(&DAT_004183f0,(int)local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}



void FUN_00401e71(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



// Library Function - Single Match
// Name: _fopen
// Library: Visual Studio 2012 Release

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}



// Library Function - Single Match
// Name: __fclose_nolock
// Library: Visual Studio 2012 Release

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    iVar4 = -1;
  }
  else {
    if ((*(byte *)&_File->_flag & 0x83) != 0) {
      iVar4 = FUN_00404af1(_File);
      __freebuf(_File);
      uVar2 = __fileno(_File);
      iVar3 = FUN_00404906(uVar2);
      if (iVar3 < 0) {
        iVar4 = -1;
      }
      else {
        if (_File->_tmpfname != (char *)0x0) {
          FID_conflict__free(_File->_tmpfname);
          _File->_tmpfname = (char *)0x0;
        }
      }
    }
    _File->_flag = 0;
  }
  return iVar4;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
// Name: _fclose
// Library: Visual Studio 2012 Release

int __cdecl _fclose(FILE *_File)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  else {
    if ((*(byte *)&_File->_flag & 0x40) == 0) {
      __lock_file(_File);
      iVar2 = __fclose_nolock(_File);
      FUN_00401f69();
    }
    else {
      _File->_flag = 0;
    }
  }
  return iVar2;
}



void FUN_00401f69(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



int __cdecl FUN_00401f71(FILE *param_1,int param_2,DWORD param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1->_flag & 0x83U) == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_00402083(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_00404af1(param_1);
    uVar3 = param_1->_flag;
    if ((char)uVar3 < '\0') {
      param_1->_flag = uVar3 & 0xfffffffc;
    }
    else {
      if ((((uVar3 & 1) != 0) && ((uVar3 & 8) != 0)) && ((uVar3 & 0x400) == 0)) {
        param_1->_bufsiz = 0x200;
      }
    }
    uVar3 = __fileno(param_1);
    iVar2 = FUN_00404c42(uVar3,param_2,param_3);
    iVar2 = (uint)(iVar2 != -1) - 1;
  }
  return iVar2;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

int __cdecl FUN_00402000(FILE *param_1,int param_2,DWORD param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (FILE *)0x0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    iVar2 = -1;
  }
  else {
    __lock_file(param_1);
    iVar2 = FUN_00401f71(param_1,param_2,param_3);
    FUN_0040207b();
  }
  return iVar2;
}



void FUN_0040207b(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_00402083(FILE *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *local_1020;
  uint local_101c;
  FILE *local_1018;
  int local_1014;
  int local_1010;
  byte local_1009 [4097];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_1018 = param_1;
  if (param_1 == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00402c77();
  }
  else {
    uVar3 = __fileno(param_1);
    if (param_1->_cnt < 0) {
      param_1->_cnt = 0;
    }
    local_101c = uVar3;
    local_1010 = FUN_00404c42(uVar3,0,1);
    if (-1 < local_1010) {
      local_1014 = (int)uVar3 >> 5;
      iVar6 = (uVar3 & 0x1f) * 0x40;
      uVar3 = param_1->_flag;
      local_1009[0] = *(char *)(iVar6 + 0x24 + (&DAT_004191d0)[local_1014]) * '\x02' >> 1;
      if ((uVar3 & 0x108) != 0) {
        pcVar10 = param_1->_ptr;
        local_1020 = param_1->_base;
        if ((uVar3 & 3) == 0) {
          if ((uVar3 & 0x80) == 0) {
            piVar2 = __errno();
            *piVar2 = 0x16;
            goto LAB_00402404;
          }
        }
        else {
          if ((local_1009[0] == 1) && (*(int *)(iVar6 + 0x30 + (&DAT_004191d0)[local_1014]) != 0)) {
            pcVar10 = (char *)((uint)(pcVar10 + -(int)local_1020) >> 1);
            if (local_1018->_cnt != 0) {
              uVar11 = FUN_00404dd8(local_101c,
                                    *(undefined4 *)(iVar6 + 0x28 + (&DAT_004191d0)[local_1014]),
                                    *(undefined4 *)(iVar6 + 0x2c + (&DAT_004191d0)[local_1014]),0);
              iVar1 = (&DAT_004191d0)[local_1014];
              if (((((int)uVar11 == *(int *)(iVar6 + 0x28 + iVar1)) &&
                   ((int)((ulonglong)uVar11 >> 0x20) == *(int *)(iVar6 + 0x2c + iVar1))) &&
                  (BVar4 = ReadFile(*(HANDLE *)(iVar6 + iVar1),local_1009 + 1,0x1000,
                                    (LPDWORD)&local_1020,(LPOVERLAPPED)0x0), BVar4 != 0)) &&
                 (((iVar6 = FUN_00404c42(local_101c,local_1010,0), -1 < iVar6 &&
                   (pcVar10 <= local_1020)) && (pbVar7 = local_1009 + 1, pcVar10 != (char *)0x0))))
              {
                pbVar8 = pbVar7 + (int)local_1020;
                do {
                  pcVar10 = pcVar10 + -1;
                  if (pbVar8 <= pbVar7) break;
                  if (*pbVar7 == 0xd) {
                    if ((pbVar7 < local_1009 + (int)local_1020) && (pbVar7[1] == 10)) {
                      pbVar7 = pbVar7 + 1;
                    }
                  }
                  else {
                    pbVar7 = pbVar7 + (char)(&DAT_00418400)[*pbVar7];
                  }
                  pbVar7 = pbVar7 + 1;
                } while (pcVar10 != (char *)0x0);
              }
            }
            goto LAB_00402404;
          }
          pcVar9 = local_1020;
          if ((*(byte *)(iVar6 + 4 + (&DAT_004191d0)[local_1014]) & 0x80) != 0) {
            while (pcVar9 < pcVar10) {
              pcVar9 = pcVar9 + 1;
            }
          }
        }
        if (((local_1010 != 0) && ((uVar3 & 1) != 0)) && (local_1018->_cnt != 0)) {
          pcVar9 = local_1018->_base;
          iVar1 = local_1018->_cnt;
          uVar3 = 0;
          if ((*(byte *)(iVar6 + 4 + (&DAT_004191d0)[local_1014]) & 0x80) != 0) {
            iVar6 = FUN_00404c42(local_101c,0,2);
            if (iVar6 == local_1010) {
              uVar5 = ~-(uint)(local_1018->_base + (int)(pcVar10 + (iVar1 - (int)pcVar9)) <
                              local_1018->_base) &
                      (uint)(local_1018->_base + (int)(pcVar10 + (iVar1 - (int)pcVar9)) +
                            -(int)local_1018->_base);
              if (uVar5 != 0) {
                do {
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar5);
              }
            }
            else {
              FUN_00404c42(local_101c,local_1010,0);
            }
          }
        }
      }
    }
  }
LAB_00402404:
  FUN_00404f47();
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00402413(FILE *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    uVar2 = 0xffffffff;
  }
  else {
    __lock_file(param_1);
    uVar2 = FUN_00402083(param_1);
    FUN_00402477();
  }
  return uVar2;
}



void FUN_00402477(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



uint __cdecl FUN_0040247f(ushort *param_1,uint param_2,uint param_3,FILE *param_4)

{
  int *piVar1;
  ushort *_Size;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (ushort *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      puVar7 = (ushort *)(param_2 * param_3);
      puVar6 = puVar7;
      if ((param_4->_flag & 0x10cU) == 0) {
        local_8 = (ushort *)0x1000;
      }
      else {
        local_8 = (ushort *)param_4->_bufsiz;
      }
      do {
        while( true ) {
          if (puVar6 == (ushort *)0x0) {
            return param_3;
          }
          uVar5 = param_4->_flag & 0x108;
          if (uVar5 != 0) break;
LAB_0040252c:
          if (local_8 <= puVar6) {
            if ((uVar5 != 0) && (iVar2 = FUN_00404af1(param_4), iVar2 != 0)) goto LAB_004025ca;
            puVar3 = puVar6;
            if (local_8 != (ushort *)0x0) {
              puVar3 = (ushort *)((int)puVar6 - (uint)puVar6 % (uint)local_8);
            }
            _Size = param_1;
            puVar8 = puVar3;
            puVar4 = (ushort *)__fileno(param_4);
            puVar8 = (ushort *)FUN_00406284(puVar4,_Size,puVar8);
            if (puVar8 != (ushort *)0xffffffff) {
              _Size = puVar3;
              if (puVar8 <= puVar3) {
                _Size = puVar8;
              }
              puVar6 = (ushort *)((int)puVar6 - (int)_Size);
              if (puVar3 <= puVar8) goto LAB_00402589;
            }
            goto LAB_004025c6;
          }
          uVar5 = FUN_00405ae4((int)*(char *)param_1,param_4);
          if (uVar5 == 0xffffffff) goto LAB_004025ca;
          param_1 = (ushort *)((int)param_1 + 1);
          puVar6 = (ushort *)((int)puVar6 - 1);
          local_8 = (ushort *)param_4->_bufsiz;
          if ((int)local_8 < 1) {
            local_8 = (ushort *)0x1;
          }
        }
        _Size = (ushort *)param_4->_cnt;
        if (_Size == (ushort *)0x0) goto LAB_0040252c;
        if ((int)_Size < 0) {
LAB_004025c6:
          param_4->_flag = param_4->_flag | 0x20;
LAB_004025ca:
          return (uint)((int)puVar7 - (int)puVar6) / param_2;
        }
        if (puVar6 < _Size) {
          _Size = puVar6;
        }
        FID_conflict__memcpy(param_4->_ptr,param_1,(size_t)_Size);
        param_4->_cnt = param_4->_cnt - (int)_Size;
        puVar6 = (ushort *)((int)puVar6 - (int)_Size);
        param_4->_ptr = param_4->_ptr + (int)_Size;
LAB_00402589:
        param_1 = (ushort *)((int)param_1 + (int)_Size);
      } while( true );
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  return 0;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

uint __cdecl FUN_004025d8(ushort *param_1,uint param_2,uint param_3,FILE *param_4)

{
  int *piVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 != (FILE *)0x0) {
      __lock_file(param_4);
      uVar2 = FUN_0040247f(param_1,param_2,param_3,param_4);
      FUN_00402652();
      return uVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  return 0;
}



void FUN_00402652(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _malloc
// Library: Visual Studio 2012 Release

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  SIZE_T dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_0041993c == (HANDLE)0x0) {
        __FF_MSGBANNER();
        FUN_0040701b(0x1e);
        ___crtExitProcess(0xff);
      }
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
      pvVar1 = HeapAlloc(DAT_0041993c,0,dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (_DAT_00419938 == 0) {
        piVar3 = __errno();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



uint __cdecl FUN_004026ec(int *param_1,LPWSTR param_2,uint param_3,uint param_4,FILE *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  int *piVar3;
  LPWSTR _MaxCount;
  uint uVar4;
  LPWSTR pWVar5;
  LPWSTR local_10;
  LPWSTR local_c;
  int *local_8;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
LAB_00402712:
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4)) {
      if (param_2 != (LPWSTR)0xffffffff) {
        FUN_00407390(param_1,0,(uint)param_2);
      }
      if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4))
      goto LAB_00402712;
    }
    pWVar5 = (LPWSTR)(param_3 * param_4);
    pWVar2 = pWVar5;
    local_8 = param_1;
    local_c = param_2;
    if ((param_5->_flag & 0x10cU) == 0) {
      local_10 = (LPWSTR)0x1000;
    }
    else {
      local_10 = (LPWSTR)param_5->_bufsiz;
    }
    while( true ) {
      if (pWVar2 == (LPWSTR)0x0) {
        return param_4;
      }
      if ((param_5->_flag & 0x10cU) == 0) break;
      _MaxCount = (LPWSTR)param_5->_cnt;
      if (_MaxCount == (LPWSTR)0x0) break;
      if ((int)_MaxCount < 0) {
LAB_00402899:
        param_5->_flag = param_5->_flag | 0x20;
LAB_0040289d:
        return (uint)((int)pWVar5 - (int)pWVar2) / param_3;
      }
      if (pWVar2 < _MaxCount) {
        _MaxCount = pWVar2;
      }
      if (local_c < _MaxCount) goto LAB_00402873;
      _memcpy_s(local_8,(rsize_t)local_c,param_5->_ptr,(rsize_t)_MaxCount);
      param_5->_cnt = param_5->_cnt - (int)_MaxCount;
      param_5->_ptr = param_5->_ptr + (int)_MaxCount;
LAB_00402831:
      iVar1 = -(int)_MaxCount;
      local_8 = (int *)((int)local_8 + (int)_MaxCount);
      local_c = (LPWSTR)((int)local_c - (int)_MaxCount);
LAB_00402863:
      pWVar2 = (LPWSTR)((int)pWVar2 + iVar1);
    }
    if (pWVar2 < local_10) {
      uVar4 = FUN_004071ed(param_5);
      if (uVar4 == 0xffffffff) goto LAB_0040289d;
      if (local_c != (LPWSTR)0x0) {
        *(char *)local_8 = (char)uVar4;
        local_8 = (int *)((int)local_8 + 1);
        iVar1 = -1;
        local_c = (LPWSTR)((int)local_c - 1);
        local_10 = (LPWSTR)param_5->_bufsiz;
        goto LAB_00402863;
      }
    }
    else {
      if (local_10 == (LPWSTR)0x0) {
        _MaxCount = (LPWSTR)0x7fffffff;
        if (pWVar2 < (LPWSTR)0x80000000) {
          _MaxCount = pWVar2;
        }
      }
      else {
        if (pWVar2 < (LPWSTR)0x80000000) {
          uVar4 = (uint)pWVar2 % (uint)local_10;
          _MaxCount = pWVar2;
        }
        else {
          uVar4 = (uint)(0x7fffffff % ZEXT48(local_10));
          _MaxCount = (LPWSTR)0x7fffffff;
        }
        _MaxCount = (LPWSTR)((int)_MaxCount - uVar4);
      }
      if (_MaxCount <= local_c) {
        piVar3 = local_8;
        uVar4 = __fileno(param_5);
        _MaxCount = FUN_0040509f(uVar4,(LPWSTR)piVar3,(uint)_MaxCount);
        if (_MaxCount == (LPWSTR)0x0) {
          param_5->_flag = param_5->_flag | 0x10;
          goto LAB_0040289d;
        }
        if (_MaxCount != (LPWSTR)0xffffffff) goto LAB_00402831;
        goto LAB_00402899;
      }
    }
LAB_00402873:
    if (param_2 != (LPWSTR)0xffffffff) {
      FUN_00407390(param_1,0,(uint)param_2);
    }
    piVar3 = __errno();
    *piVar3 = 0x22;
  }
  FUN_00402c77();
  return 0;
}



// Library Function - Single Match
// Name: _fread
// Library: Visual Studio 2012 Release

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = _fread_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
// Name: _fread_s
// Library: Visual Studio 2012 Release

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      uVar2 = FUN_004026ec((int *)_DstBuf,(LPWSTR)_DstSize,_ElementSize,_Count,_File);
      FUN_00402955();
      return uVar2;
    }
    if (_DstSize != 0xffffffff) {
      FUN_00407390((int *)_DstBuf,0,_DstSize);
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  return 0;
}



void FUN_00402955(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



// Library Function - Multiple Matches With Different Base Names
// Name: __free_base, _free
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __cdecl FID_conflict__free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_0041993c,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}



// Library Function - Single Match
// Name: _fast_error_exit
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __cdecl _fast_error_exit(int param_1)

{
  if (DAT_00419a48 != 2) {
    __FF_MSGBANNER();
  }
  FUN_0040701b(param_1);
  ___crtExitProcess(0xff);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Removing unreachable block (ram,0x004029b7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  uint uVar1;
  int _Code;
  
  ___security_init_cookie();
  FUN_00407bdc(1);
  uVar1 = FUN_004071d8();
  if (uVar1 == 0) {
    _fast_error_exit(0x1c);
  }
  _Code = FUN_00407839();
  if (_Code == 0) {
    _fast_error_exit(0x10);
  }
  FUN_00407cc5();
  _Code = FUN_00405830();
  if (_Code < 0) {
    _fast_error_exit(0x1b);
  }
  DAT_0041b008 = GetCommandLineA();
  DAT_004191c0 = FUN_00407d05();
  _Code = FUN_004078cc();
  if (_Code < 0) {
    __amsg_exit(8);
  }
  _Code = FUN_00407afb();
  if (_Code < 0) {
    __amsg_exit(9);
  }
  _Code = FUN_00406d41(1);
  if (_Code != 0) {
    __amsg_exit(_Code);
  }
  _DAT_00419304 = DAT_004192e4;
  _Code = FUN_00401a00(DAT_004192d8,DAT_004192dc);
  _exit(_Code);
  __cexit();
  return _Code;
}



void FUN_00402b1a(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  byte in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4 [39];
  PCONTEXT local_224;
  uint local_214;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  if (param_1 != -1) {
    FUN_00408152();
  }
  local_324.ExceptionCode = 0;
  FUN_00407390((int *)&local_324.ExceptionFlags,0,0x4c);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)local_2d4;
  local_214 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY4((int)&stack0xfffffcc4,0xc) * 0x800 |
              (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
              (uint)((int)&stack0xfffffcd0 < 0) * 0x80 |
              (uint)((undefined *)register0x00000010 == (undefined *)0x330) * 0x40 |
              (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
              (uint)((undefined *)0xfffffff3 < &stack0xfffffcc4) | (uint)(in_ID & 1) * 0x200000 |
              (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
              (uint)(in_AC & 1) * 0x40000;
  local_2d4[0] = 0x10001;
  local_324.ExceptionCode = param_2;
  local_324.ExceptionFlags = param_3;
  local_224 = local_32c.ContextRecord;
  BVar1 = IsDebuggerPresent();
  LVar2 = ___crtUnhandledException(&local_32c);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_00408152();
  }
  FUN_00404f47();
  return;
}



void __cdecl FUN_00402c3f(undefined4 param_1)

{
  DAT_004191c8 = param_1;
  return;
}



// Library Function - Single Match
// Name: __invalid_parameter
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void __invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                        uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)DecodePointer(DAT_004191c8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00402c60. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00402c77(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



// Library Function - Single Match
// Name: __invoke_watson
// Library: Visual Studio 2012 Release

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
  FUN_00402b1a(2,0xc0000417,1);
  ___crtTerminateProcess(0xc0000417);
  return;
}



// Library Function - Single Match
// Name: _strlen
// Library: Visual Studio

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
    if (cVar1 == '\0') goto LAB_00402d23;
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
LAB_00402d23:
  return (int)puVar4 + (-1 - (int)_Str);
}



pthreadlocinfo * __thiscall FUN_00402d4b(void *this,pthreadlocinfo *param_1)

{
  uint uVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  *(undefined *)((int)this + 0xc) = 0;
  if (param_1 == (pthreadlocinfo *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)((int)this + 8) = p_Var2;
    ptVar3 = p_Var2->ptlocinfo;
    *(pthreadlocinfo *)this = ptVar3;
    *(pthreadmbcinfo *)((int)this + 4) = p_Var2->ptmbcinfo;
    if ((ptVar3 != (pthreadlocinfo)PTR_DAT_00418bdc) && ((p_Var2->_ownlocale & DAT_00418c98) == 0))
    {
      ptVar3 = FUN_004084c9();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)((int)this + 4) != PTR_DAT_00418974) &&
       ((*(uint *)(*(int *)((int)this + 8) + 0x70) & DAT_00418c98) == 0)) {
      ptVar4 = FUN_0040884b();
      *(pthreadmbcinfo *)((int)this + 4) = ptVar4;
    }
    uVar1 = *(uint *)(*(int *)((int)this + 8) + 0x70);
    if ((uVar1 & 2) == 0) {
      *(uint *)(*(int *)((int)this + 8) + 0x70) = uVar1 | 2;
      *(undefined *)((int)this + 0xc) = 1;
    }
  }
  else {
    *(pthreadlocinfo *)this = *param_1;
    *(pthreadlocinfo *)((int)this + 4) = param_1[1];
  }
  return (pthreadlocinfo *)this;
}



undefined4 __cdecl
FUN_00402dd3(uint param_1,uint *param_2,void **param_3,void *param_4,undefined4 *param_5)

{
  uint uVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  uVar1 = *param_2;
  if (param_1 == uVar1) {
    if (*param_3 == param_4) {
      pvVar2 = FUN_00408f5b(uVar1,2);
      *param_3 = pvVar2;
      if (pvVar2 != (LPVOID)0x0) {
        *param_5 = 1;
        FID_conflict__memcpy(*param_3,param_4,*param_2);
LAB_00402e29:
        *param_2 = *param_2 << 1;
        goto LAB_00402e2b;
      }
    }
    else {
      pvVar4 = FUN_00409034(*param_3,uVar1,2);
      if (pvVar4 != (void *)0x0) {
        *param_3 = pvVar4;
        goto LAB_00402e29;
      }
    }
    uVar3 = 0;
  }
  else {
LAB_00402e2b:
    uVar3 = 1;
  }
  return uVar3;
}



uint __cdecl FUN_00402e32(byte param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _isdigit((uint)param_1);
  uVar2 = SEXT14((char)param_1);
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}



// Library Function - Single Match
// Name: __inc
// Library: Visual Studio 2012 Release

uint __cdecl __inc(FILE *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &param_1->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_004071ed(param_1);
  }
  else {
    uVar2 = (uint)(byte)*param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
  }
  return uVar2;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl FUN_00402e75(FILE *param_1,byte *param_2,pthreadlocinfo *param_3,int **param_4)

{
  byte bVar1;
  FILE *pFVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined *puVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;
  ulonglong uVar21;
  longlong lVar22;
  pthreadlocinfo *pptVar23;
  pthreadlocinfo local_200 [2];
  int local_1f8;
  char local_1f4;
  int **local_1f0;
  int **local_1ec;
  undefined4 local_1e8;
  byte local_1e4;
  undefined local_1e3;
  int local_1e0;
  uint local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  uint local_1cc;
  int *local_1c8;
  int local_1c4;
  uint local_1c0;
  byte *local_1bc;
  undefined *local_1b8;
  byte local_1b1;
  uint local_1b0;
  char local_1aa;
  byte local_1a9;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  char local_19a;
  char local_199;
  FILE *local_198;
  int local_194;
  int local_190;
  char local_18c;
  char local_18b;
  char local_18a;
  char local_189;
  undefined local_188 [352];
  int local_28 [2];
  undefined local_1d;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_1ec = param_4;
  local_1b8 = local_188;
  local_198 = param_1;
  local_1dc = 0x15e;
  local_1d8 = 0;
  local_1cc = 0;
  local_1b0 = 0;
  local_1e8 = 0;
  local_1a4 = 0;
  local_1f0 = (int **)0x0;
  if ((param_2 == (byte *)0x0) || (param_1 == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00402c77();
    lVar22 = CONCAT44(local_1b0,local_1cc);
    goto LAB_00403fb4;
  }
  if ((*(byte *)&param_1->_flag & 0x40) == 0) {
    uVar4 = __fileno(param_1);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar9 = &DAT_00418500;
    }
    else {
      puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar4 >> 5]);
    }
    if ((puVar9[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_00418500;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x80) == 0) goto LAB_00402f76;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00402c77();
    lVar22 = CONCAT44(local_1b0,local_1cc);
  }
  else {
LAB_00402f76:
    FUN_00402d4b(local_200,param_3);
    lVar22 = CONCAT44(local_1b0,local_1cc);
    bVar11 = *param_2;
    iVar14 = 0;
    local_18b = '\0';
    local_194 = 0;
    local_1a0 = 0;
    local_1d4 = 0;
    if (bVar11 != 0) {
LAB_00402faa:
      iVar5 = _isspace((uint)bVar11);
      pFVar2 = local_198;
      local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
      local_1cc = (uint)lVar22;
      if (iVar5 != 0) {
        local_1a0 = iVar14 + -1;
        uVar4 = __whiteout(&local_1a0,local_198);
        local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
        local_1cc = (uint)lVar22;
        pbVar18 = param_2;
        if (uVar4 != 0xffffffff) {
          FUN_0040815a(uVar4,pFVar2);
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
        }
        do {
          pbVar18 = pbVar18 + 1;
          iVar14 = _isspace((uint)*pbVar18);
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
        } while (iVar14 != 0);
        local_194 = local_1a0;
        iVar14 = local_1a0;
        goto LAB_00403f35;
      }
      if (*param_2 == 0x25) {
        if (param_2[1] == 0x25) {
          if (param_2[1] == 0x25) {
            param_2 = param_2 + 1;
          }
          goto LAB_00403ece;
        }
        local_1d0 = 0;
        iVar14 = 0;
        local_1b1 = 0;
        uVar4 = 0x100;
        local_1c0 = 0;
        local_1c4 = 0;
        local_1a9 = 0;
        local_1aa = '\0';
        local_18a = '\0';
        local_19a = '\0';
        local_189 = '\0';
        local_1e0 = 0;
        do {
          pbVar19 = param_2 + 1;
          local_1c8 = (int *)(uint)*pbVar19;
          iVar5 = _isdigit((int)local_1c8);
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
          pbVar18 = pbVar19;
          if (iVar5 == 0) {
            cVar12 = (char)uVar4;
            cVar13 = (char)(uVar4 >> 8);
            if ((int)local_1c8 < 0x4f) {
              if (local_1c8 != (int *)0x4e) {
                if (local_1c8 == (int *)0x2a) {
                  local_18a = local_18a + '\x01';
                }
                else {
                  if (local_1c8 != (int *)0x46) {
                    if (local_1c8 == (int *)0x49) {
                      bVar11 = param_2[2];
                      if ((bVar11 == 0x36) && (pbVar18 = param_2 + 3, *pbVar18 == 0x34))
                      goto LAB_00403122;
                      if ((((((bVar11 != 0x33) || (pbVar18 = param_2 + 3, *pbVar18 != 0x32)) &&
                            (pbVar18 = pbVar19, bVar11 != 100)) &&
                           ((bVar11 != 0x69 && (bVar11 != 0x6f)))) && (bVar11 != 0x78)) &&
                         (bVar11 != 0x58)) goto LAB_00403195;
                    }
                    else {
                      if (local_1c8 == (int *)0x4c) {
                        uVar4 = (uint)CONCAT11(cVar13 + '\x01',cVar12);
                      }
                      else {
LAB_00403195:
                        uVar4 = uVar4 & 0xffffff00 | (uint)(byte)(cVar12 + 1);
                        pbVar18 = pbVar19;
                      }
                    }
                  }
                }
              }
            }
            else {
              if (local_1c8 == (int *)0x68) {
                uVar4 = (uint)CONCAT11(cVar13 + -1,cVar12);
                local_189 = local_189 + -1;
              }
              else {
                if (local_1c8 == (int *)0x6c) {
                  pbVar18 = param_2 + 2;
                  if (*pbVar18 == 0x6c) {
LAB_00403122:
                    local_1e0 = local_1e0 + 1;
                    lVar22 = 0;
                    goto LAB_00403094;
                  }
                  uVar4 = (uint)CONCAT11(cVar13 + '\x01',cVar12);
                }
                else {
                  if (local_1c8 != (int *)0x77) goto LAB_00403195;
                }
                local_189 = local_189 + '\x01';
                pbVar18 = pbVar19;
              }
            }
          }
          else {
            local_1c4 = local_1c4 + 1;
            iVar14 = ((int)local_1c8 - 0x30U) + iVar14 * 10;
          }
LAB_00403094:
          param_2 = pbVar18;
        } while ((char)uVar4 == '\0');
        local_199 = (char)(uVar4 >> 8);
        if (local_18a == '\0') {
          local_1f0 = local_1ec;
          local_1c8 = *local_1ec;
          local_1ec = local_1ec + 1;
        }
        else {
          local_1c8 = (int *)0x0;
        }
        local_18c = '\0';
        if ((local_189 == '\0') && ((*pbVar18 == 0x53 || (local_189 = -1, *pbVar18 == 0x43)))) {
          local_189 = '\x01';
        }
        local_1a8 = (uint)*pbVar18 | 0x20;
        iVar5 = local_194;
        local_1bc = pbVar18;
        local_190 = iVar14;
        if (local_1a8 != 0x6e) {
          if ((local_1a8 == 99) || (local_1a8 == 0x7b)) {
            iVar5 = local_194 + 1;
            local_1a0 = iVar5;
            local_194 = iVar5;
            local_1a4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
          }
          else {
            local_1a4 = __whiteout(&local_1a0,local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            local_194 = local_1a0;
            iVar5 = local_1a0;
          }
          if (local_1a4 == 0xffffffff) goto LAB_00403f70;
        }
        pFVar2 = local_198;
        uVar4 = local_1a4;
        if ((local_1c4 != 0) && (local_190 == 0)) goto joined_r0x00403f60;
        if ((int)local_1a8 < 0x70) {
          if (local_1a8 == 0x6f) {
LAB_00403b65:
            if (local_1a4 == 0x2d) {
              local_1aa = '\x01';
            }
            else {
              cVar12 = local_18c;
              if (local_1a4 != 0x2b) goto LAB_00403bb6;
            }
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1c4 != 0)) {
              cVar12 = '\x01';
            }
            else {
              iVar5 = iVar5 + 1;
              local_1a0 = iVar5;
              local_194 = iVar5;
              local_1a4 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              cVar12 = local_18c;
            }
            goto LAB_00403bb6;
          }
          if (local_1a8 == 99) {
            if (local_1c4 == 0) {
              local_190 = local_190 + 1;
              local_1c4 = 1;
            }
LAB_004036c7:
            if ('\0' < local_189) {
              local_19a = '\x01';
            }
LAB_004036d8:
            piVar3 = local_1c8;
            local_1a0 = local_194 + -1;
            local_194 = local_1a0;
            uVar15 = local_1a8;
            if (uVar4 != 0xffffffff) {
              FUN_0040815a(uVar4,local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              uVar15 = local_1a8;
            }
            do {
              if ((local_1c4 != 0) &&
                 (iVar14 = local_190 + -1, bVar20 = local_190 == 0, local_190 = iVar14, bVar20))
              goto LAB_00403b0d;
              local_1a0 = local_194 + 1;
              local_194 = local_1a0;
              uVar4 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              local_1a4 = uVar4;
              if (uVar4 == 0xffffffff) goto LAB_00403ae7;
              bVar11 = (byte)uVar4;
              if (uVar15 != 99) {
                if (uVar15 == 0x73) {
                  if ((8 < (int)uVar4) && ((int)uVar4 < 0xe)) goto LAB_00403ae7;
                  if (uVar4 != 0x20) goto LAB_004037a5;
                }
                if ((uVar15 != 0x7b) ||
                   (((int)(char)(*(byte *)((int)local_28 + ((int)uVar4 >> 3)) ^ local_1a9) &
                    1 << (bVar11 & 7)) == 0)) goto LAB_00403ae7;
              }
LAB_004037a5:
              if (local_18a == '\0') {
                if (local_19a == '\0') {
                  *(byte *)local_1c8 = bVar11;
                  local_1c8 = (int *)((int)local_1c8 + 1);
                }
                else {
                  local_1e4 = bVar11;
                  iVar14 = FUN_00408e3d(uVar4 & 0xff);
                  local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
                  local_1cc = (uint)lVar22;
                  if (iVar14 != 0) {
                    local_1a0 = local_194 + 1;
                    local_194 = local_1a0;
                    uVar16 = __inc(local_198);
                    local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
                    local_1cc = (uint)lVar22;
                    local_1e3 = (undefined)uVar16;
                  }
                  local_1e8 = 0x3f;
                  FUN_00408e4e((ushort *)&local_1e8,&local_1e4,local_200[0]->mb_cur_max,local_200);
                  local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
                  local_1cc = (uint)lVar22;
                  *(undefined2 *)local_1c8 = (undefined2)local_1e8;
                  local_1c8 = (int *)((int)local_1c8 + 2);
                }
              }
              else {
                piVar3 = (int *)((int)piVar3 + 1);
              }
            } while( true );
          }
          if (local_1a8 == 100) goto LAB_00403b65;
          if ((int)local_1a8 < 0x65) {
LAB_00403870:
            if ((uint)*pbVar18 != local_1a4) goto joined_r0x00403f60;
            local_18b = local_18b + -1;
            if (local_18a == '\0') {
              local_1ec = local_1f0;
            }
            goto LAB_0040369e;
          }
          if (0x67 < (int)local_1a8) {
            if (local_1a8 == 0x69) {
              local_1a8 = 100;
              goto LAB_0040398b;
            }
            if (local_1a8 != 0x6e) goto LAB_00403870;
            if (local_18a != '\0') goto LAB_0040369e;
            goto LAB_00403e80;
          }
          uVar15 = 0;
          if (local_1a4 == 0x2d) {
            uVar15 = 1;
            *local_1b8 = 0x2d;
LAB_004032fc:
            local_190 = local_190 + -1;
            iVar14 = local_194 + 1;
            local_1a4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
          }
          else {
            iVar14 = local_194;
            if (local_1a4 == 0x2b) goto LAB_004032fc;
          }
          uVar4 = local_1a4;
          if (local_1c4 == 0) {
            local_190 = -1;
          }
          iVar5 = _isdigit(local_1a4 & 0xff);
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
          while ((iVar5 != 0 &&
                 (iVar5 = local_190 + -1, bVar20 = local_190 != 0, local_190 = iVar5, bVar20))) {
            local_1c0 = local_1c0 + 1;
            local_1b8[uVar15] = (byte)uVar4;
            uVar15 = uVar15 + 1;
            iVar5 = FUN_00402dd3(uVar15,&local_1dc,&local_1b8,local_188,&local_1d8);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            if (iVar5 == 0) goto LAB_00403f70;
            iVar14 = iVar14 + 1;
            uVar4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            local_1a4 = uVar4;
            iVar5 = _isdigit(uVar4 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
          }
          local_1a9 = *local_200[0]->lconv->decimal_point;
          if ((local_1a9 == (byte)uVar4) &&
             (iVar5 = local_190 + -1, bVar20 = local_190 != 0, local_190 = iVar5, bVar20)) {
            uVar4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            local_1b8[uVar15] = local_1a9;
            uVar15 = uVar15 + 1;
            local_1a4 = uVar4;
            iVar5 = FUN_00402dd3(uVar15,&local_1dc,&local_1b8,local_188,&local_1d8);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            if (iVar5 == 0) goto LAB_00403f70;
            iVar5 = _isdigit(uVar4 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            while ((iVar14 = iVar14 + 1, iVar5 != 0 &&
                   (iVar5 = local_190 + -1, bVar20 = local_190 != 0, local_190 = iVar5, bVar20))) {
              local_1c0 = local_1c0 + 1;
              local_1b8[uVar15] = (char)uVar4;
              uVar15 = uVar15 + 1;
              iVar5 = FUN_00402dd3(uVar15,&local_1dc,&local_1b8,local_188,&local_1d8);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              if (iVar5 == 0) goto LAB_00403f70;
              uVar4 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              local_1a4 = uVar4;
              iVar5 = _isdigit(uVar4 & 0xff);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
          }
          if ((local_1c0 != 0) &&
             (((uVar4 == 0x65 || (uVar4 == 0x45)) &&
              (iVar5 = local_190 + -1, bVar20 = local_190 != 0, local_190 = iVar5, bVar20)))) {
            local_1b8[uVar15] = 0x65;
            uVar16 = uVar15 + 1;
            iVar5 = FUN_00402dd3(uVar16,&local_1dc,&local_1b8,local_188,&local_1d8);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            if (iVar5 == 0) goto LAB_00403f70;
            uVar4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            iVar5 = iVar14 + 1;
            local_1a4 = uVar4;
            if (uVar4 == 0x2d) {
              local_1b8[uVar16] = 0x2d;
              uVar16 = uVar15 + 2;
              iVar6 = FUN_00402dd3(uVar16,&local_1dc,&local_1b8,local_188,&local_1d8);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              if (iVar6 == 0) goto LAB_00403f70;
LAB_00403575:
              uVar15 = uVar16;
              if (local_190 == 0) {
                local_190 = 0;
              }
              else {
                local_190 = local_190 + -1;
                uVar4 = __inc(local_198);
                local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
                local_1cc = (uint)lVar22;
                iVar5 = iVar14 + 2;
                local_1a4 = uVar4;
              }
            }
            else {
              uVar15 = uVar16;
              if (uVar4 == 0x2b) goto LAB_00403575;
            }
            iVar14 = iVar5;
            iVar5 = _isdigit(uVar4 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            while ((iVar5 != 0 &&
                   (iVar5 = local_190 + -1, bVar20 = local_190 != 0, local_190 = iVar5, bVar20))) {
              local_1c0 = local_1c0 + 1;
              local_1b8[uVar15] = (char)uVar4;
              uVar15 = uVar15 + 1;
              iVar5 = FUN_00402dd3(uVar15,&local_1dc,&local_1b8,local_188,&local_1d8);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              if (iVar5 == 0) goto LAB_00403f70;
              iVar14 = iVar14 + 1;
              uVar4 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              local_1a4 = uVar4;
              iVar5 = _isdigit(uVar4 & 0xff);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
          }
          local_1a0 = iVar14 + -1;
          local_194 = local_1a0;
          if (uVar4 != 0xffffffff) {
            FUN_0040815a(uVar4,local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
          }
          if (local_1c0 != 0) {
            pbVar18 = local_1bc;
            if (local_18a == '\0') {
              pptVar23 = local_200;
              local_1d4 = local_1d4 + 1;
              local_1b8[uVar15] = 0;
              iVar14 = (int)local_199 + -1;
              piVar3 = local_1c8;
              puVar9 = local_1b8;
              pcVar7 = (code *)DecodePointer(PTR_LAB_00418cb8);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              (*pcVar7)(iVar14,piVar3,puVar9,pptVar23);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              pbVar18 = local_1bc;
            }
            goto LAB_0040369e;
          }
          goto LAB_00403f70;
        }
        if (local_1a8 == 0x70) {
          local_199 = '\x01';
          goto LAB_00403b65;
        }
        if (local_1a8 == 0x73) goto LAB_004036c7;
        if (local_1a8 == 0x75) goto LAB_00403b65;
        if (local_1a8 != 0x78) {
          if (local_1a8 == 0x7b) {
            if ('\0' < local_189) {
              local_19a = '\x01';
            }
            pbVar19 = pbVar18 + 1;
            if (*pbVar19 == 0x5e) {
              pbVar19 = pbVar18 + 2;
              local_1a9 = 0xff;
            }
            FUN_00407390(local_28,0,0x20);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            local_1bc = pbVar19;
            bVar11 = local_1b1;
            if (*pbVar19 == 0x5d) {
              local_1d = 0x20;
              local_1bc = pbVar19 + 1;
              bVar11 = 0x5d;
            }
            while (bVar10 = *local_1bc, bVar10 != 0x5d) {
              if (((bVar10 == 0x2d) && (bVar11 != 0)) && (bVar1 = local_1bc[1], bVar1 != 0x5d)) {
                bVar10 = bVar1;
                if (bVar11 < bVar1) {
                  bVar10 = bVar11;
                  bVar11 = bVar1;
                }
                uVar15 = (uint)bVar11 << 8;
                if (bVar10 < bVar11) {
                  uVar17 = (uint)bVar10;
                  uVar15 = (uint)CONCAT11(bVar11,bVar11 - bVar10);
                  uVar16 = (uint)(byte)(bVar11 - bVar10);
                  do {
                    uVar15 = uVar15 & 0xffffff00;
                    pbVar18 = (byte *)((int)local_28 + (uVar17 >> 3));
                    *pbVar18 = *pbVar18 | '\x01' << ((byte)uVar17 & 7);
                    uVar17 = uVar17 + 1;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                pbVar18 = (byte *)((int)local_28 + (uVar15 >> 0xb));
                *pbVar18 = *pbVar18 | '\x01' << ((byte)(uVar15 >> 8) & 7);
                local_1bc = local_1bc + 2;
                bVar11 = 0;
              }
              else {
                pbVar18 = (byte *)((int)local_28 + (uint)(bVar10 >> 3));
                *pbVar18 = *pbVar18 | '\x01' << (bVar10 & 7);
                local_1bc = local_1bc + 1;
                bVar11 = bVar10;
                local_1b1 = bVar10;
              }
            }
            goto LAB_004036d8;
          }
          goto LAB_00403870;
        }
LAB_0040398b:
        if (local_1a4 == 0x2d) {
          local_1aa = '\x01';
LAB_0040399e:
          local_190 = local_190 + -1;
          if ((local_190 == 0) && (local_1c4 != 0)) {
            local_18c = '\x01';
          }
          else {
            iVar5 = iVar5 + 1;
            local_1a0 = iVar5;
            local_194 = iVar5;
            local_1a4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
          }
        }
        else {
          if (local_1a4 == 0x2b) goto LAB_0040399e;
        }
        cVar12 = local_18c;
        if (local_1a4 == 0x30) {
          iVar14 = iVar5 + 1;
          local_1a0 = iVar14;
          local_194 = iVar14;
          local_1a4 = __inc(pFVar2);
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
          if (((char)local_1a4 == 'x') || ((char)local_1a4 == 'X')) {
            iVar5 = iVar5 + 2;
            local_1a0 = iVar5;
            local_194 = iVar5;
            local_1a4 = __inc(pFVar2);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            if ((local_1c4 != 0) && (local_190 = local_190 + -2, local_190 < 1)) {
              local_18c = local_18c + '\x01';
            }
            local_1a8 = 0x78;
            cVar12 = local_18c;
          }
          else {
            local_1c0 = 1;
            if (local_1a8 == 0x78) {
              local_1a0 = iVar5;
              local_194 = iVar5;
              if (local_1a4 != 0xffffffff) {
                FUN_0040815a(local_1a4,pFVar2);
                local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
                local_1cc = (uint)lVar22;
              }
              local_1a4 = 0x30;
              cVar12 = local_18c;
            }
            else {
              if ((local_1c4 != 0) && (local_190 = local_190 + -1, local_190 == 0)) {
                local_18c = local_18c + '\x01';
              }
              local_1a8 = 0x6f;
              iVar5 = iVar14;
              cVar12 = local_18c;
            }
          }
        }
LAB_00403bb6:
        uVar15 = local_1a8;
        uVar4 = local_1a4;
        if (local_1e0 == 0) {
          if (cVar12 == '\0') {
            while ((uVar4 = local_1a4, local_1a8 != 0x78 && (local_1a8 != 0x70))) {
              iVar14 = _isdigit(local_1a4 & 0xff);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              if (iVar14 == 0) goto LAB_00403e0f;
              if (local_1a8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_00403e0f;
                local_1d0 = local_1d0 << 3;
              }
              else {
                local_1d0 = local_1d0 * 10;
              }
LAB_00403dbb:
              local_1c0 = local_1c0 + 1;
              local_1d0 = local_1d0 + -0x30 + uVar4;
              if ((local_1c4 != 0) &&
                 (local_190 = local_190 + -1, uVar15 = local_1a8, local_190 == 0))
              goto LAB_00403e3d;
              iVar5 = iVar5 + 1;
              local_1a0 = iVar5;
              local_194 = iVar5;
              local_1a4 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
            iVar14 = _isxdigit(local_1a4 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            if (iVar14 != 0) {
              local_1d0 = local_1d0 << 4;
              uVar4 = FUN_00402e32((byte)uVar4);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              local_1a4 = uVar4;
              goto LAB_00403dbb;
            }
LAB_00403e0f:
            uVar15 = local_1a8;
            local_1a0 = iVar5 + -1;
            local_194 = local_1a0;
            if (uVar4 != 0xffffffff) {
              FUN_0040815a(uVar4,local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
          }
LAB_00403e3d:
          if (local_1aa != '\0') {
            local_1d0 = -local_1d0;
          }
        }
        else {
          if (cVar12 == '\0') {
            while ((uVar4 = local_1a4, local_1a8 != 0x78 && (local_1a8 != 0x70))) {
              iVar14 = _isdigit(local_1a4 & 0xff);
              uVar15 = local_1a8;
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
              if (iVar14 == 0) goto LAB_00403ce6;
              if (local_1a8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_00403ce6;
                uVar21 = lVar22 << 3;
              }
              else {
                uVar21 = __allmul(local_1cc,local_1b0,10,0);
                local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
                local_1cc = (uint)lVar22;
              }
LAB_00403c83:
              local_1c0 = local_1c0 + 1;
              lVar22 = uVar21 + (longlong)(int)(uVar4 - 0x30);
              if ((local_1c4 != 0) && (local_190 = local_190 + -1, local_190 == 0))
              goto LAB_00403d1a;
              iVar5 = iVar5 + 1;
              local_1a0 = iVar5;
              local_194 = iVar5;
              local_1a4 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
            iVar14 = _isxdigit(local_1a4 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
            local_1cc = (uint)lVar22;
            if (iVar14 != 0) {
              uVar21 = lVar22 << 4;
              uVar4 = FUN_00402e32((byte)uVar4);
              local_1b0 = (uint)(uVar21 >> 0x20);
              local_1cc = (uint)uVar21;
              uVar15 = local_1a8;
              local_1a4 = uVar4;
              goto LAB_00403c83;
            }
LAB_00403ce6:
            uVar15 = local_1a8;
            local_1a0 = iVar5 + -1;
            local_194 = local_1a0;
            if (uVar4 != 0xffffffff) {
              FUN_0040815a(uVar4,local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
          }
LAB_00403d1a:
          if (local_1aa != '\0') {
            lVar22 = CONCAT44(-((int)((ulonglong)lVar22 >> 0x20) + (uint)((int)lVar22 != 0)),
                              -(int)lVar22);
          }
        }
        if ((-(uint)(uVar15 != 0x46) & local_1c0) == 0) goto LAB_00403f70;
        pbVar18 = local_1bc;
        if (local_18a == '\0') {
          local_1d4 = local_1d4 + 1;
          iVar5 = local_1d0;
LAB_00403e80:
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
          if (local_1e0 == 0) {
            if (local_199 == '\0') {
              *(short *)local_1c8 = (short)iVar5;
            }
            else {
              *local_1c8 = iVar5;
            }
          }
          else {
            *local_1c8 = local_1cc;
            local_1c8[1] = local_1b0;
          }
        }
LAB_0040369e:
        local_18b = local_18b + '\x01';
        pbVar18 = pbVar18 + 1;
        iVar14 = local_194;
        iVar5 = local_1a0;
        iVar6 = local_194;
LAB_00403f25:
        local_194 = iVar6;
        local_1a0 = iVar5;
        if ((uVar4 == 0xffffffff) && ((*pbVar18 != 0x25 || (pbVar18[1] != 0x6e))))
        goto LAB_00403f70;
LAB_00403f35:
        bVar11 = *pbVar18;
        param_2 = pbVar18;
        if (bVar11 == 0) goto LAB_00403f70;
        goto LAB_00402faa;
      }
LAB_00403ece:
      iVar14 = iVar14 + 1;
      local_1a0 = iVar14;
      local_194 = iVar14;
      uVar4 = __inc(local_198);
      local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
      local_1cc = (uint)lVar22;
      pbVar18 = param_2 + 1;
      local_1a4 = uVar4;
      pFVar2 = local_198;
      if ((uint)*param_2 == uVar4) {
        iVar8 = FUN_00408e3d(uVar4 & 0xff);
        local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
        local_1cc = (uint)lVar22;
        iVar5 = local_1a0;
        iVar6 = local_194;
        if (iVar8 != 0) {
          uVar15 = __inc(local_198);
          pFVar2 = local_198;
          local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
          local_1cc = (uint)lVar22;
          bVar11 = *pbVar18;
          pbVar18 = param_2 + 2;
          iVar5 = iVar14;
          iVar6 = iVar14;
          if ((uint)bVar11 != uVar15) {
            if (uVar15 != 0xffffffff) {
              FUN_0040815a(uVar15,local_198);
              local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
              local_1cc = (uint)lVar22;
            }
            goto joined_r0x00403f60;
          }
        }
        goto LAB_00403f25;
      }
joined_r0x00403f60:
      if (uVar4 != 0xffffffff) {
        FUN_0040815a(uVar4,pFVar2);
        local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
        local_1cc = (uint)lVar22;
      }
LAB_00403f70:
      if (local_1d8 == 1) {
        FID_conflict__free(local_1b8);
        local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
        local_1cc = (uint)lVar22;
      }
    }
    if (local_1f4 != '\0') {
      *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
    }
  }
LAB_00403fb4:
  FUN_00404f47();
  local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
  local_1cc = (uint)lVar22;
  return;
LAB_00403ae7:
  local_1a0 = local_194 + -1;
  local_194 = local_1a0;
  if (uVar4 != 0xffffffff) {
    FUN_0040815a(uVar4,local_198);
    local_1b0 = (uint)((ulonglong)lVar22 >> 0x20);
    local_1cc = (uint)lVar22;
  }
LAB_00403b0d:
  if (piVar3 == local_1c8) goto LAB_00403f70;
  pbVar18 = local_1bc;
  if ((local_18a == '\0') && (local_1d4 = local_1d4 + 1, uVar15 != 99)) {
    if (local_19a == '\0') {
      *(undefined *)local_1c8 = 0;
    }
    else {
      *(undefined2 *)local_1c8 = 0;
    }
  }
  goto LAB_0040369e;
}



// Library Function - Single Match
// Name: __whiteout
// Library: Visual Studio 2012 Release

uint __cdecl __whiteout(int *param_1,FILE *param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = __inc(param_2);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = _isspace(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}



// Library Function - Single Match
// Name: ___doserrno
// Library: Visual Studio 2012 Release

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_0041816c;
  }
  return &p_Var1->_tdoserrno;
}



// Library Function - Multiple Matches With Different Base Names
// Name: ___acrt_errno_map_os_error, __dosmaperr
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __cdecl FID_conflict___dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}



// Library Function - Single Match
// Name: __errno
// Library: Visual Studio 2012 Release

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_00418168;
  }
  return &p_Var1->_terrno;
}



// Library Function - Single Match
// Name: __get_errno_from_oserr
// Library: Visual Studio 2012 Release

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00418000)[uVar1 * 2]) {
      return (&DAT_00418004)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



undefined ** FUN_00404114(void)

{
  return &PTR_DAT_00418170;
}



// Library Function - Single Match
// Name: __lock_file
// Library: Visual Studio 2012 Release

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_00418170) || ((FILE *)&DAT_004183d0 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)&_File[-0x20c0c]._file >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}



// Library Function - Single Match
// Name: __lock_file2
// Library: Visual Studio 2012 Release

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



// Library Function - Single Match
// Name: __unlock_file
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x41816f < _File) && (_File < (FILE *)0x4183d1)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_004092ea(((int)&_File[-0x20c0c]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



// Library Function - Single Match
// Name: __unlock_file2
// Library: Visual Studio 2012 Release

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_004092ea(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 * FUN_004041f0(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *_File;
  int _Index;
  
  puVar3 = (undefined4 *)0x0;
  __lock(1);
  _Index = 0;
  do {
    _File = puVar3;
    if (DAT_0041b004 <= _Index) {
LAB_004042d5:
      if (_File != (undefined4 *)0x0) {
        _File[3] = _File[3] & 0x8000;
        _File[1] = 0;
        _File[2] = 0;
        *_File = 0;
        _File[7] = 0;
        _File[4] = 0xffffffff;
      }
      FUN_00404306();
      return _File;
    }
    iVar1 = *(int *)(DAT_0041b000 + _Index * 4);
    if (iVar1 == 0) {
      pvVar2 = FUN_00408fa3(0x38);
      *(void **)(DAT_0041b000 + _Index * 4) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        FUN_00407e10((LPCRITICAL_SECTION)(*(int *)(DAT_0041b000 + _Index * 4) + 0x20),4000,0);
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0041b000 + _Index * 4) + 0x20));
        _File = *(undefined4 **)(DAT_0041b000 + _Index * 4);
        _File[3] = 0;
      }
      goto LAB_004042d5;
    }
    if (((*(byte *)(iVar1 + 0xc) & 0x83) == 0) && ((*(uint *)(iVar1 + 0xc) & 0x8000) == 0)) {
      if ((_Index - 3U < 0x11) && (iVar1 = FUN_00409208(_Index + 0x10), iVar1 == 0))
      goto LAB_004042d5;
      __lock_file2(_Index,*(void **)(DAT_0041b000 + _Index * 4));
      _File = *(undefined4 **)(DAT_0041b000 + _Index * 4);
      if ((*(byte *)(_File + 3) & 0x83) == 0) goto LAB_004042d5;
      __unlock_file2(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}



void FUN_00404306(void)

{
  FUN_004092ea(1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __cdecl FUN_0040430f(LPCSTR param_1,ushort *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int local_8;
  
  bVar4 = false;
  local_8 = 0;
  bVar3 = false;
  puVar9 = param_2;
  while (*(char *)puVar9 == ' ') {
    puVar9 = (ushort *)((int)puVar9 + 1);
  }
  cVar1 = *(char *)puVar9;
  if (cVar1 == 'a') {
    uVar8 = 0x109;
LAB_0040436a:
    uVar12 = DAT_00419bc0 | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') goto LAB_00404340;
      uVar8 = 0x301;
      goto LAB_0040436a;
    }
    uVar8 = 0;
    uVar12 = DAT_00419bc0 | 1;
  }
  bVar2 = true;
  pbVar10 = (byte *)((int)puVar9 + 1);
  bVar5 = *pbVar10;
  if (bVar5 != 0) {
    param_2 = (ushort *)0x1000;
    do {
      if (!bVar2) break;
      iVar7 = (int)(char)bVar5;
      if (iVar7 < 0x54) {
        if (iVar7 == 0x53) {
          if (local_8 != 0) goto LAB_0040447c;
          local_8 = 1;
          uVar8 = uVar8 | 0x20;
        }
        else {
          if (iVar7 != 0x20) {
            if (iVar7 == 0x2b) {
              if ((uVar8 & 2) != 0) goto LAB_0040447c;
              uVar8 = uVar8 & 0xfffffffe | 2;
              uVar12 = uVar12 & 0xfffffffc | 0x80;
            }
            else {
              if (iVar7 == 0x2c) {
                bVar3 = true;
LAB_0040447c:
                bVar2 = false;
              }
              else {
                if (iVar7 == 0x44) {
                  if ((uVar8 & 0x40) != 0) goto LAB_0040447c;
                  uVar8 = uVar8 | 0x40;
                }
                else {
                  if (iVar7 == 0x4e) {
                    uVar8 = uVar8 | 0x80;
                  }
                  else {
                    if (iVar7 != 0x52) goto LAB_00404340;
                    if (local_8 != iVar7 + -0x52) goto LAB_0040447c;
                    local_8 = 1;
                    uVar8 = uVar8 | 0x10;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (iVar7 == 0x54) {
          if ((uVar8 & 0x1000) != 0) goto LAB_0040447c;
          uVar8 = uVar8 | 0x1000;
        }
        else {
          if (iVar7 == 0x62) {
            if ((uVar8 & 0xc000) != 0) goto LAB_0040447c;
            uVar8 = uVar8 | 0x8000;
          }
          else {
            if (iVar7 == 99) {
              if (bVar4) goto LAB_0040447c;
              bVar4 = true;
              uVar12 = uVar12 | 0x4000;
            }
            else {
              if (iVar7 == 0x6e) {
                if (bVar4) goto LAB_0040447c;
                bVar4 = true;
                uVar12 = uVar12 & 0xffffbfff;
              }
              else {
                if (iVar7 != 0x74) goto LAB_00404340;
                if ((uVar8 & 0xc000) != 0) goto LAB_0040447c;
                uVar8 = uVar8 | 0x4000;
              }
            }
          }
        }
      }
      pbVar10 = pbVar10 + 1;
      bVar5 = *pbVar10;
    } while (bVar5 != 0);
    if (bVar3) {
      while (*pbVar10 == 0x20) {
        pbVar10 = pbVar10 + 1;
      }
      iVar7 = FUN_00409434(&DAT_00411150,pbVar10,3);
      if (iVar7 != 0) goto LAB_00404340;
      pbVar10 = pbVar10 + 3;
      while (*pbVar10 == 0x20) {
        pbVar10 = pbVar10 + 1;
      }
      if (*pbVar10 != 0x3d) goto LAB_00404340;
      do {
        pbVar11 = pbVar10;
        pbVar10 = pbVar11 + 1;
      } while (*pbVar10 == 0x20);
      iVar7 = FUN_00409563(pbVar10,(byte *)"UTF-8",5);
      if (iVar7 == 0) {
        pbVar10 = pbVar11 + 6;
        uVar8 = uVar8 | 0x40000;
      }
      else {
        iVar7 = FUN_00409563(pbVar10,(byte *)"UTF-16LE",8);
        if (iVar7 == 0) {
          pbVar10 = pbVar11 + 9;
          uVar8 = uVar8 | 0x20000;
        }
        else {
          iVar7 = FUN_00409563(pbVar10,(byte *)"UNICODE",7);
          if (iVar7 != 0) goto LAB_00404340;
          pbVar10 = pbVar11 + 8;
          uVar8 = uVar8 | 0x10000;
        }
      }
    }
  }
  while (*pbVar10 == 0x20) {
    pbVar10 = pbVar10 + 1;
  }
  if (*pbVar10 == 0) {
    iVar7 = FUN_00409416(&param_2,param_1,uVar8,param_3,0x180);
    if (iVar7 != 0) {
      return (undefined4 *)0x0;
    }
    _DAT_004191cc = _DAT_004191cc + 1;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[3] = uVar12;
    *(ushort **)(param_4 + 4) = param_2;
    return param_4;
  }
LAB_00404340:
  piVar6 = __errno();
  *piVar6 = 0x16;
  FUN_00402c77();
  return (undefined4 *)0x0;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
// Name: __SEH_prolog4
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_res0;
  uint auStack28 [5];
  undefined local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack28 + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack28 + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack28 + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack28 + param_2 + 4) = DAT_004183f0 ^ (uint)&param_2;
  *(uint *)((int)auStack28 + param_2) = local_res0;
  *(undefined **)in_FS_OFFSET = local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
// Name: __SEH_epilog4
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *in_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

PVOID __cdecl FUN_004045f0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  PVOID pvVar5;
  int *piVar6;
  PEXCEPTION_RECORD local_1c;
  DWORD local_18;
  _EXCEPTION_RECORD *local_14;
  PVOID local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  piVar6 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_004183f0);
  local_10 = (PVOID)0x1;
  if (*piVar6 != -2) {
    FUN_00404f47();
  }
  FUN_00404f47();
  if ((*(byte *)&param_1->ExceptionFlags & 0x66) == 0) {
    local_1c = param_1;
    local_18 = param_3;
    *(PEXCEPTION_RECORD *)((int)param_2 + -4) = (PEXCEPTION_RECORD)&local_1c;
    local_c = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (_EXCEPTION_RECORD *)(piVar6 + local_c * 3 + 4);
      uVar1 = local_14->ExceptionCode;
      if ((undefined *)piVar6[local_c * 3 + 5] != (undefined *)0x0) {
        iVar3 = __EH4_CallFilterFunc_8((undefined *)piVar6[local_c * 3 + 5]);
        local_5 = '\x01';
        if (iVar3 < 0) {
          local_10 = (PVOID)0x0;
          goto LAB_0040472b;
        }
        if (0 < iVar3) {
          if (((param_1->ExceptionCode == 0xe06d7363) && (_DAT_00419ffc != (code *)0x0)) &&
             (BVar4 = __IsNonwritableInCurrentImage(&DAT_00419ffc), BVar4 != 0)) {
            (*_DAT_00419ffc)(param_1,1);
          }
          __EH4_GlobalUnwind2_8(param_2,param_1);
          if (*(uint *)((int)param_2 + 0xc) != local_c) {
            __EH4_LocalUnwind_16((int)param_2,local_c,(int)param_2 + 0x10,&DAT_004183f0);
          }
          *(uint *)((int)param_2 + 0xc) = uVar1;
          if (*piVar6 != -2) {
            FUN_00404f47();
          }
          FUN_00404f47();
          FUN_00404899((undefined *)local_14->ExceptionRecord);
          pcVar2 = (code *)swi(3);
          pvVar5 = (PVOID)(*pcVar2)();
          return pvVar5;
        }
      }
      local_c = uVar1;
    } while (uVar1 != 0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return local_10;
    }
    __EH4_LocalUnwind_16((int)param_2,0xfffffffe,(int)param_2 + 0x10,&DAT_004183f0);
  }
LAB_0040472b:
  if (*piVar6 != -2) {
    FUN_00404f47();
  }
  FUN_00404f47();
  return local_10;
}



// Library Function - Single Match
// Name: __local_unwind4
// Library: Visual Studio 2012 Release

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack40;
  undefined *puStack36;
  uint local_20;
  uint uStack28;
  int iStack24;
  uint *puStack20;
  
  puStack20 = param_1;
  iStack24 = param_2;
  uStack28 = param_3;
  puStack36 = &LAB_00404820;
  uStack40 = *in_FS_OFFSET;
  local_20 = DAT_004183f0 ^ (uint)&uStack40;
  *(undefined4 **)in_FS_OFFSET = &uStack40;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      FUN_004099a5(0x101);
      FUN_004099c4();
    }
  }
  *in_FS_OFFSET = uStack40;
  return;
}



void FUN_00404866(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



// Library Function - Single Match
// Name: @_EH4_CallFilterFunc@8
// Library: Visual Studio

void __fastcall __EH4_CallFilterFunc_8(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



void __fastcall FUN_00404899(undefined *UNRECOVERED_JUMPTABLE)

{
  FUN_004099a5(1);
                    // WARNING: Could not recover jumptable at 0x004048b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Library Function - Single Match
// Name: @_EH4_GlobalUnwind2@8
// Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015

void __fastcall __EH4_GlobalUnwind2_8(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x4048c6,param_2,(PVOID)0x0);
  return;
}



// Library Function - Single Match
// Name: @_EH4_LocalUnwind@16
// Library: Visual Studio

void __fastcall __EH4_LocalUnwind_16(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



// Library Function - Single Match
// Name: __fileno
// Library: Visual Studio 2012 Release

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    return -1;
  }
  return _File->_file;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00404906(uint param_1)

{
  ulong *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_00419ff8 <= param_1)) {
      puVar1 = ___doserrno();
      *puVar1 = 0;
    }
    else {
      iVar4 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
        FUN_004099c7(param_1);
        if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = FUN_004049e1(param_1);
        }
        FUN_004049b9();
        return uVar3;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
    }
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00402c77();
  }
  return 0xffffffff;
}



void FUN_004049b9(void)

{
  uint unaff_ESI;
  
  FUN_00409d6d(unaff_ESI);
  return;
}



undefined4 __cdecl FUN_004049e1(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00409c84(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_004191d0 + 0x84) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_004191d0 + 0x44) & 1) != 0)))) {
      iVar1 = FUN_00409c84(2);
      iVar2 = FUN_00409c84(1);
      if (iVar2 == iVar1) goto LAB_00404a45;
    }
    hObject = (HANDLE)FUN_00409c84(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00404a47;
    }
  }
LAB_00404a45:
  DVar4 = 0;
LAB_00404a47:
  FUN_00409bfe(param_1);
  *(undefined *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FID_conflict___dosmaperr(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Library Function - Single Match
// Name: __freebuf
// Library: Visual Studio 2012 Release

void __cdecl __freebuf(FILE *_File)

{
  if (((*(byte *)&_File->_flag & 0x83) != 0) && ((*(byte *)&_File->_flag & 8) != 0)) {
    FID_conflict__free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



int __cdecl FUN_00404aab(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = _flsall(0);
  }
  else {
    iVar1 = FUN_00404af1(param_1);
    if (iVar1 == 0) {
      if ((param_1->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        uVar2 = __fileno(param_1);
        DVar3 = FUN_00409d93(uVar2);
        iVar1 = -(uint)(DVar3 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



undefined4 __cdecl FUN_00404af1(FILE *param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = 0;
  if (((((byte)param_1->_flag & 3) == 2) && ((param_1->_flag & 0x108U) != 0)) &&
     (puVar3 = (ushort *)(param_1->_ptr + -(int)param_1->_base), 0 < (int)puVar3)) {
    puVar4 = (ushort *)param_1->_base;
    puVar5 = puVar3;
    puVar1 = (ushort *)__fileno(param_1);
    puVar4 = (ushort *)FUN_00406284(puVar1,puVar4,puVar5);
    if (puVar4 == puVar3) {
      if ((char)param_1->_flag < '\0') {
        param_1->_flag = param_1->_flag & 0xfffffffd;
      }
    }
    else {
      param_1->_flag = param_1->_flag | 0x20;
      uVar2 = 0xffffffff;
    }
  }
  param_1->_cnt = 0;
  param_1->_ptr = param_1->_base;
  return uVar2;
}



void FUN_00404b55(void)

{
  _flsall(1);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
// Name: _flsall
// Library: Visual Studio 2012 Release

int __cdecl _flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int _Index;
  int iVar3;
  int local_28;
  
  iVar3 = 0;
  local_28 = 0;
  __lock(1);
  _Index = 0;
  while (_Index < DAT_0041b004) {
    _File = *(void **)(DAT_0041b000 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      pFVar1 = *(FILE **)(DAT_0041b000 + _Index * 4);
      if ((*(byte *)&pFVar1->_flag & 0x83) != 0) {
        if (param_1 == 1) {
          iVar2 = FUN_00404aab(pFVar1);
          if (iVar2 != -1) {
            iVar3 = iVar3 + 1;
          }
        }
        else {
          if ((param_1 == 0) && ((*(byte *)&pFVar1->_flag & 2) != 0)) {
            iVar2 = FUN_00404aab(pFVar1);
            if (iVar2 == -1) {
              local_28 = -1;
            }
          }
        }
      }
      FUN_00404c06();
    }
    _Index = _Index + 1;
  }
  FUN_00404c39();
  if (param_1 != 1) {
    iVar3 = local_28;
  }
  return iVar3;
}



void FUN_00404c06(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_0041b000 + unaff_ESI * 4));
  return;
}



void FUN_00404c39(void)

{
  FUN_004092ea(1);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00404c42(uint param_1,int param_2,DWORD param_3)

{
  ulong *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_00419ff8 <= param_1)) {
      puVar1 = ___doserrno();
      *puVar1 = 0;
    }
    else {
      iVar4 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
        FUN_004099c7(param_1);
        if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = FUN_00404d31(param_1,param_2,param_3);
        }
        FUN_00404d09();
        return uVar3;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
    }
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00402c77();
  }
  return 0xffffffff;
}



void FUN_00404d09(void)

{
  uint unaff_ESI;
  
  FUN_00409d6d(unaff_ESI);
  return;
}



undefined4 __cdecl FUN_00404d31(uint param_1,int param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  hFile = (HANDLE)FUN_00409c84(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    BVar3 = SetFilePointerEx(hFile,0,(PLARGE_INTEGER)&local_c,1);
    if ((BVar3 == 0) ||
       (BVar3 = SetFilePointerEx(hFile,(longlong)param_2,(PLARGE_INTEGER)&local_14,param_3),
       BVar3 == 0)) {
      DVar4 = GetLastError();
      FID_conflict___dosmaperr(DVar4);
    }
    else {
      if (local_10 == 0) {
        pbVar1 = (byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40);
        *pbVar1 = *pbVar1 & 0xfd;
        return local_14;
      }
      SetFilePointerEx(hFile,CONCAT44(local_8,local_c),(PLARGE_INTEGER)0x0,0);
      piVar2 = __errno();
      *piVar2 = 0x16;
    }
  }
  return 0xffffffff;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined8 __cdecl FUN_00404dd8(uint param_1,undefined4 param_2,undefined4 param_3,DWORD param_4)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
      iVar3 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
        FUN_004099c7(param_1);
        if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          uVar4 = 0xffffffffffffffff;
        }
        else {
          uVar4 = FUN_00404ed4(param_1,param_2,param_3,param_4);
        }
        FUN_00404eaa();
        return uVar4;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00402c77();
  }
  return 0xffffffffffffffff;
}



void FUN_00404eaa(void)

{
  uint unaff_EDI;
  
  FUN_00409d6d(unaff_EDI);
  return;
}



undefined8 __cdecl FUN_00404ed4(uint param_1,undefined4 param_2,undefined4 param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  hFile = (HANDLE)FUN_00409c84(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    BVar3 = SetFilePointerEx(hFile,CONCAT44(param_3,param_2),(PLARGE_INTEGER)&local_c,param_4);
    if (BVar3 != 0) {
      pbVar1 = (byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_00404f41;
    }
    DVar4 = GetLastError();
    FID_conflict___dosmaperr(DVar4);
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
LAB_00404f41:
  return CONCAT44(local_8,local_c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404f47(void)

{
  code *pcVar1;
  BOOL BVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 local_4;
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
  
  if (in_ECX == DAT_004183f0) {
    return;
  }
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    return;
  }
  _DAT_00419cd8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
       (uint)(BVar2 < 0) * 0x80 | (uint)(BVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)(in_PF & 1) * 4 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
       (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00419cdc = &stack0x00000004;
  _DAT_00419c18 = 0x10001;
  _DAT_00419bc8 = 0xc0000409;
  _DAT_00419bcc = 1;
  _DAT_00419bd8 = 1;
  _DAT_00419bdc = 2;
  _DAT_00419bd4 = local_res0;
  _DAT_00419ca4 = in_GS;
  _DAT_00419ca8 = in_FS;
  _DAT_00419cac = in_ES;
  _DAT_00419cb0 = in_DS;
  _DAT_00419cb4 = unaff_EDI;
  _DAT_00419cb8 = unaff_ESI;
  _DAT_00419cbc = unaff_EBX;
  _DAT_00419cc0 = extraout_EDX;
  _DAT_00419cc4 = extraout_ECX;
  _DAT_00419cc8 = BVar2;
  _DAT_00419ccc = local_4;
  DAT_00419cd0 = local_res0;
  _DAT_00419cd4 = in_CS;
  _DAT_00419ce0 = in_SS;
  ___raise_securityfailure((EXCEPTION_POINTERS *)&PTR_DAT_0041231c);
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
// Name: __chkstk
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

void __alloca_probe(void)

{
  undefined *in_EAX;
  undefined4 *puVar1;
  undefined4 local_res0;
  undefined auStack4 [4];
  
  puVar1 = (undefined4 *)((uint)auStack4 & 0xfffff000);
  while ((undefined4 *)
         ((uint)(&stack0x00000000 + -(int)in_EAX) & ~-(uint)(register0x00000010 < in_EAX)) < puVar1)
  {
    puVar1 = puVar1 + -0x400;
  }
  *(undefined4 *)((uint)(&stack0x00000000 + -(int)in_EAX) & ~-(uint)(register0x00000010 < in_EAX)) =
       local_res0;
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

LPWSTR __cdecl FUN_00404f8b(uint param_1,LPWSTR param_2,uint param_3)

{
  ulong *puVar1;
  int *piVar2;
  LPWSTR pWVar3;
  int iVar4;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return (LPWSTR)0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_00419ff8 <= param_1)) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
  }
  else {
    iVar4 = (param_1 & 0x1f) * 0x40;
    if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      if (param_3 < 0x80000000) {
        FUN_004099c7(param_1);
        if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          pWVar3 = (LPWSTR)0xffffffff;
        }
        else {
          pWVar3 = FUN_0040509f(param_1,param_2,param_3);
        }
        FUN_00405077();
        return pWVar3;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      *piVar2 = 0x16;
      goto LAB_00405091;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
  }
  piVar2 = __errno();
  *piVar2 = 9;
LAB_00405091:
  FUN_00402c77();
  return (LPWSTR)0xffffffff;
}



void FUN_00405077(void)

{
  uint unaff_ESI;
  
  FUN_00409d6d(unaff_ESI);
  return;
}



// WARNING: Could not reconcile some variable overlaps

LPWSTR __cdecl FUN_0040509f(uint param_1,LPWSTR param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  byte bVar5;
  WCHAR WVar6;
  ulong *puVar7;
  int *piVar8;
  BOOL BVar9;
  ulong uVar10;
  DWORD DVar11;
  int iVar12;
  int iVar13;
  LPWSTR pWVar14;
  uint uVar15;
  uint nNumberOfBytesToRead;
  LPWSTR cbMultiByte;
  LPWSTR pWVar16;
  WCHAR *pWVar17;
  bool bVar18;
  undefined8 uVar19;
  WCHAR *local_24;
  LPWSTR local_20;
  LPWSTR local_1c;
  DWORD local_18;
  LPWSTR local_14;
  int local_10;
  undefined2 local_c;
  char local_5;
  
  pWVar16 = (LPWSTR)0x0;
  local_1c = (LPWSTR)0xfffffffe;
  local_24 = (WCHAR *)0x0;
  if (param_1 == 0xfffffffe) {
    puVar7 = ___doserrno();
    *puVar7 = 0;
    piVar8 = __errno();
    *piVar8 = 9;
    return (LPWSTR)0xffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
    local_10 = (int)param_1 >> 5;
    iVar13 = (param_1 & 0x1f) * 0x40;
    bVar5 = *(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13);
    if ((bVar5 & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((bVar5 & 2) != 0)) {
          return (LPWSTR)0x0;
        }
        if (param_2 != (LPWSTR)0x0) {
          cVar4 = *(char *)((&DAT_004191d0)[local_10] + 0x24 + iVar13) * '\x02' >> 1;
          if (cVar4 == '\x01') {
            if ((~param_3 & 1) == 0) goto LAB_00405145;
            uVar15 = param_3 >> 1;
            if (uVar15 < 4) {
              uVar15 = 4;
            }
            local_14 = (LPWSTR)FUN_00408fa3(uVar15);
            if (local_14 == (LPWSTR)0x0) {
              piVar8 = __errno();
              *piVar8 = 0xc;
              puVar7 = ___doserrno();
              *puVar7 = 8;
              return (LPWSTR)0xffffffff;
            }
            uVar19 = FUN_00404ed4(param_1,0,0,1);
            iVar12 = (&DAT_004191d0)[local_10];
            *(undefined4 *)(iVar12 + 0x28 + iVar13) = (int)uVar19;
            *(undefined4 *)(iVar12 + 0x2c + iVar13) = (int)((ulonglong)uVar19 >> 0x20);
          }
          else {
            uVar15 = param_3;
            if (cVar4 == '\x02') {
              if ((~param_3 & 1) == 0) goto LAB_00405145;
              uVar15 = param_3 & 0xfffffffe;
            }
            local_14 = param_2;
          }
          nNumberOfBytesToRead = uVar15;
          local_20 = local_14;
          if ((((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) != 0) &&
              (cVar2 = *(char *)((&DAT_004191d0)[local_10] + 5 + iVar13), cVar2 != '\n')) &&
             (uVar15 != 0)) {
            *(char *)local_14 = cVar2;
            local_20 = (LPWSTR)((int)local_14 + 1);
            pWVar16 = (LPWSTR)0x1;
            nNumberOfBytesToRead = uVar15 - 1;
            *(undefined *)((&DAT_004191d0)[local_10] + 5 + iVar13) = 10;
            if (((cVar4 != '\0') &&
                (cVar2 = *(char *)((&DAT_004191d0)[local_10] + 0x25 + iVar13), cVar2 != '\n')) &&
               (nNumberOfBytesToRead != 0)) {
              *(char *)local_20 = cVar2;
              local_20 = local_14 + 1;
              nNumberOfBytesToRead = uVar15 - 2;
              pWVar16 = (LPWSTR)0x2;
              *(undefined *)((&DAT_004191d0)[local_10] + 0x25 + iVar13) = 10;
              if (((cVar4 == '\x01') &&
                  (cVar2 = *(char *)((&DAT_004191d0)[local_10] + 0x26 + iVar13), cVar2 != '\n')) &&
                 (nNumberOfBytesToRead != 0)) {
                *(char *)local_20 = cVar2;
                local_20 = (LPWSTR)((int)local_14 + 3);
                nNumberOfBytesToRead = uVar15 - 3;
                pWVar16 = (LPWSTR)0x3;
                *(undefined *)((&DAT_004191d0)[local_10] + 0x26 + iVar13) = 10;
              }
            }
          }
          uVar15 = FUN_00409fb4(param_1);
          if ((((uVar15 == 0) || ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x80) == 0))
              || (local_24 = (WCHAR *)GetConsoleMode(*(HANDLE *)((&DAT_004191d0)[local_10] + iVar13)
                                                     ,(LPDWORD)&local_24), local_24 == (WCHAR *)0x0)
              ) || (cVar4 != '\x02')) {
            BVar9 = ReadFile(*(HANDLE *)((&DAT_004191d0)[local_10] + iVar13),local_20,
                             nNumberOfBytesToRead,&local_18,(LPOVERLAPPED)0x0);
            if (((BVar9 != 0) && (-1 < (int)local_18)) && (local_18 <= nNumberOfBytesToRead))
            goto LAB_0040532c;
            uVar10 = GetLastError();
            if (uVar10 != 5) {
              if (uVar10 == 0x6d) {
                pWVar14 = (LPWSTR)0x0;
                goto LAB_004055a1;
              }
              goto LAB_004052d7;
            }
            piVar8 = __errno();
            *piVar8 = 9;
            puVar7 = ___doserrno();
            *puVar7 = 5;
          }
          else {
            BVar9 = ReadConsoleW(*(HANDLE *)((&DAT_004191d0)[local_10] + iVar13),local_20,
                                 nNumberOfBytesToRead >> 1,&local_18,
                                 (PCONSOLE_READCONSOLE_CONTROL)0x0);
            if (BVar9 != 0) {
              local_18 = local_18 * 2;
LAB_0040532c:
              pWVar16 = (LPWSTR)((int)pWVar16 + local_18);
              iVar12 = (&DAT_004191d0)[local_10];
              bVar5 = *(byte *)(iVar12 + 4 + iVar13);
              pWVar14 = local_1c;
              if (-1 < (char)bVar5) goto LAB_004055a1;
              if (cVar4 == '\x02') {
                if (local_24 == (WCHAR *)0x0) {
                  if ((local_18 == 0) || (*local_14 != L'\n')) {
                    bVar5 = bVar5 & 0xfb;
                  }
                  else {
                    bVar5 = bVar5 | 4;
                  }
                  *(byte *)(iVar12 + 4 + iVar13) = bVar5;
                  local_24 = (WCHAR *)((int)local_14 + (int)pWVar16);
                  iVar12 = local_10;
                  pWVar16 = local_14;
                  pWVar17 = local_14;
                  if (local_14 < local_24) {
                    do {
                      WVar6 = *pWVar17;
                      if (WVar6 == L'\x1a') {
                        bVar5 = *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13);
                        if ((bVar5 & 0x40) == 0) {
                          *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13) = bVar5 | 2;
                        }
                        else {
                          *pWVar16 = *pWVar17;
                          pWVar16 = pWVar16 + 1;
                        }
                        break;
                      }
                      if (WVar6 == L'\r') {
                        if (pWVar17 < local_24 + -1) {
                          if (pWVar17[1] != L'\n') {
                            *pWVar16 = L'\r';
                            iVar12 = local_10;
                            goto LAB_004056b6;
                          }
                          pWVar17 = pWVar17 + 2;
                          *pWVar16 = L'\n';
LAB_00405798:
                          pWVar16 = pWVar16 + 1;
                          iVar12 = local_10;
                        }
                        else {
                          pWVar17 = pWVar17 + 1;
                          BVar9 = ReadFile(*(HANDLE *)((&DAT_004191d0)[iVar12] + iVar13),&local_c,2,
                                           &local_18,(LPOVERLAPPED)0x0);
                          if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                             (local_18 == 0)) {
                            *pWVar16 = L'\r';
                            pWVar16 = pWVar16 + 1;
                            iVar12 = local_10;
                          }
                          else {
                            iVar12 = local_10;
                            if ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) == 0) {
                              if ((pWVar16 == local_14) && (local_c == 10)) {
                                *pWVar16 = L'\n';
                                pWVar16 = pWVar16 + 1;
                              }
                              else {
                                FUN_00404ed4(param_1,0xfffffffe,0xffffffff,1);
                                iVar12 = local_10;
                                if (local_c != 10) {
                                  *pWVar16 = L'\r';
                                  goto LAB_00405798;
                                }
                              }
                            }
                            else {
                              if (local_c == 10) {
                                *pWVar16 = L'\n';
                                pWVar16 = pWVar16 + 1;
                              }
                              else {
                                *pWVar16 = L'\r';
                                pWVar16 = pWVar16 + 1;
                                *(undefined *)((&DAT_004191d0)[local_10] + 5 + iVar13) =
                                     (undefined)local_c;
                                *(undefined *)((&DAT_004191d0)[local_10] + 0x25 + iVar13) =
                                     local_c._1_1_;
                                *(undefined *)((&DAT_004191d0)[local_10] + 0x26 + iVar13) = 10;
                              }
                            }
                          }
                        }
                      }
                      else {
                        *pWVar16 = WVar6;
LAB_004056b6:
                        pWVar16 = pWVar16 + 1;
                        pWVar17 = pWVar17 + 1;
                      }
                    } while (pWVar17 < local_24);
                  }
                  pWVar16 = (LPWSTR)((int)pWVar16 - (int)local_14);
                  pWVar14 = local_1c;
                }
                else {
                  cbMultiByte = local_14;
                  pWVar17 = local_14;
                  while (cbMultiByte < local_14 + (int)pWVar16 / 2) {
                    WVar6 = *cbMultiByte;
                    if (WVar6 == L'\x1a') {
                      pbVar1 = (byte *)((&DAT_004191d0)[local_10] + 4 + iVar13);
                      *pbVar1 = *pbVar1 | 2;
                      break;
                    }
                    if (WVar6 == L'\r') {
                      if (cbMultiByte < local_14 + (int)pWVar16 / 2 + -1) {
                        cbMultiByte = cbMultiByte + 1;
                        WVar6 = L'\n';
                        if (*cbMultiByte != L'\n') {
                          WVar6 = L'\r';
                        }
                        *pWVar17 = WVar6;
                        pWVar17 = pWVar17 + 1;
                      }
                    }
                    else {
                      *pWVar17 = WVar6;
                      pWVar17 = pWVar17 + 1;
                      cbMultiByte = cbMultiByte + 1;
                    }
                  }
                  pWVar16 = (LPWSTR)((uint)((int)pWVar17 - (int)local_14) & 0xfffffffe);
                }
                goto LAB_004055a1;
              }
              if ((local_18 == 0) || (*(char *)local_14 != '\n')) {
                bVar5 = bVar5 & 0xfb;
              }
              else {
                bVar5 = bVar5 | 4;
              }
              *(byte *)(iVar12 + 4 + iVar13) = bVar5;
              local_24 = local_14;
              local_20 = (LPWSTR)((int)local_14 + (int)pWVar16);
              iVar12 = local_10;
              cbMultiByte = local_14;
              pWVar16 = local_14;
              if (local_14 < local_20) {
                do {
                  cVar2 = *(char *)pWVar16;
                  if (cVar2 == '\x1a') {
                    bVar5 = *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13);
                    if ((bVar5 & 0x40) == 0) {
                      *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13) = bVar5 | 2;
                    }
                    else {
                      *(undefined *)cbMultiByte = *(undefined *)pWVar16;
                      cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                    }
                    break;
                  }
                  if (cVar2 == '\r') {
                    if (pWVar16 < (LPWSTR)((int)local_20 + -1)) {
                      pWVar14 = (LPWSTR)((int)pWVar16 + 1);
                      if (*(char *)pWVar14 == '\n') {
                        pWVar14 = pWVar16 + 1;
                        *(undefined *)cbMultiByte = 10;
LAB_0040545e:
                        cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                      }
                      else {
                        *(undefined *)cbMultiByte = 0xd;
                        cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                      }
                    }
                    else {
                      pWVar14 = (LPWSTR)((int)pWVar16 + 1);
                      BVar9 = ReadFile(*(HANDLE *)((&DAT_004191d0)[iVar12] + iVar13),&local_5,1,
                                       &local_18,(LPOVERLAPPED)0x0);
                      if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                         (local_18 == 0)) {
                        *(undefined *)cbMultiByte = 0xd;
                        cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                        iVar12 = local_10;
                      }
                      else {
                        iVar12 = local_10;
                        if ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) == 0) {
                          if ((cbMultiByte == local_14) && (local_5 == '\n')) {
                            *(undefined *)cbMultiByte = 10;
                            cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                          }
                          else {
                            FUN_00404ed4(param_1,0xffffffff,0xffffffff,1);
                            iVar12 = local_10;
                            if (local_5 != '\n') {
                              *(undefined *)cbMultiByte = 0xd;
                              goto LAB_0040545e;
                            }
                          }
                        }
                        else {
                          if (local_5 == '\n') {
                            *(undefined *)cbMultiByte = 10;
                            cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                          }
                          else {
                            *(undefined *)cbMultiByte = 0xd;
                            cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                            *(char *)((&DAT_004191d0)[local_10] + 5 + iVar13) = local_5;
                          }
                        }
                      }
                    }
                  }
                  else {
                    *(char *)cbMultiByte = cVar2;
                    cbMultiByte = (LPWSTR)((int)cbMultiByte + 1);
                    pWVar14 = (LPWSTR)((int)pWVar16 + 1);
                  }
                  pWVar16 = pWVar14;
                } while (pWVar14 < local_20);
              }
              pWVar16 = (LPWSTR)((int)cbMultiByte - (int)local_14);
              pWVar14 = local_1c;
              if ((cVar4 != '\x01') || (pWVar16 == (LPWSTR)0x0)) goto LAB_004055a1;
              bVar5 = *(byte *)(LPWSTR)((int)cbMultiByte + -1);
              if ((char)bVar5 < '\0') {
                iVar12 = 1;
                cVar4 = (&DAT_00418400)[bVar5];
                cbMultiByte = (LPWSTR)((int)cbMultiByte + -1);
                while (((cVar4 == '\0' && (iVar12 < 5)) && (local_14 <= cbMultiByte))) {
                  cbMultiByte = (LPWSTR)((int)cbMultiByte + -1);
                  iVar12 = iVar12 + 1;
                  cVar4 = (&DAT_00418400)[*(byte *)cbMultiByte];
                }
                if ((int)(char)(&DAT_00418400)[*(byte *)cbMultiByte] == 0) {
                  piVar8 = __errno();
                  *piVar8 = 0x2a;
                  goto LAB_004052de;
                }
                if ((int)(char)(&DAT_00418400)[*(byte *)cbMultiByte] + 1 == iVar12) {
                  cbMultiByte = (LPWSTR)((int)cbMultiByte + iVar12);
                }
                else {
                  if ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) == 0) {
                    FUN_00404ed4(param_1,-iVar12,-iVar12 >> 0x1f,1);
                  }
                  else {
                    pWVar16 = (LPWSTR)((int)cbMultiByte + 1);
                    *(undefined *)((&DAT_004191d0)[local_10] + 5 + iVar13) =
                         *(undefined *)cbMultiByte;
                    if (1 < iVar12) {
                      uVar3 = *(undefined *)pWVar16;
                      pWVar16 = cbMultiByte + 1;
                      *(undefined *)((&DAT_004191d0)[local_10] + 0x25 + iVar13) = uVar3;
                    }
                    if (iVar12 == 3) {
                      uVar3 = *(undefined *)pWVar16;
                      pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                      *(undefined *)((&DAT_004191d0)[local_10] + 0x26 + iVar13) = uVar3;
                    }
                    cbMultiByte = (LPWSTR)((int)pWVar16 - iVar12);
                  }
                }
              }
              cbMultiByte = (LPWSTR)((int)cbMultiByte - (int)local_14);
              pWVar16 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_14,(int)cbMultiByte,
                                                    param_2,param_3 >> 1);
              if (pWVar16 != (LPWSTR)0x0) {
                bVar18 = pWVar16 != cbMultiByte;
                pWVar16 = (LPWSTR)((int)pWVar16 * 2);
                *(uint *)((&DAT_004191d0)[local_10] + 0x30 + iVar13) = (uint)bVar18;
                pWVar14 = local_1c;
                goto LAB_004055a1;
              }
            }
            uVar10 = GetLastError();
LAB_004052d7:
            FID_conflict___dosmaperr(uVar10);
          }
LAB_004052de:
          pWVar14 = (LPWSTR)0xffffffff;
LAB_004055a1:
          if (local_14 != param_2) {
            FID_conflict__free(local_14);
          }
          if (pWVar14 != (LPWSTR)0xfffffffe) {
            return pWVar14;
          }
          return pWVar16;
        }
LAB_00405145:
        puVar7 = ___doserrno();
        *puVar7 = 0;
      }
      else {
        puVar7 = ___doserrno();
        *puVar7 = 0;
      }
      piVar8 = __errno();
      *piVar8 = 0x16;
      goto LAB_00405821;
    }
  }
  puVar7 = ___doserrno();
  *puVar7 = 0;
  piVar8 = __errno();
  *piVar8 = 9;
LAB_00405821:
  FUN_00402c77();
  return (LPWSTR)0xffffffff;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 FUN_00405830(void)

{
  HANDLE hFile;
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  DWORD nStdHandle;
  HANDLE pvVar4;
  HANDLE *ppvVar5;
  int iVar6;
  _STARTUPINFOW local_78;
  int local_34;
  uint local_30;
  HANDLE *local_2c;
  HANDLE *local_28;
  HANDLE *local_24;
  HANDLE local_20;
  undefined local_14 [8];
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00417768;
  uStack12 = 0x40583c;
  __lock(0xb);
  local_8 = (undefined *)0x0;
  local_28 = (HANDLE *)FUN_00408f5b(0x20,0x40);
  if (local_28 == (HANDLE *)0x0) {
    __local_unwind4(&DAT_004183f0,(int)local_14,0xfffffffe);
    uVar3 = 0xffffffff;
  }
  else {
    DAT_00419ff8 = (HANDLE)0x20;
    DAT_004191d0 = local_28;
    while (local_28 < DAT_004191d0 + 0x200) {
      *(undefined2 *)(local_28 + 1) = 0xa00;
      *local_28 = (HANDLE)0xffffffff;
      local_28[2] = (HANDLE)0x0;
      *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x80;
      *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x7f;
      *(undefined2 *)((int)local_28 + 0x25) = 0xa0a;
      local_28[0xe] = (HANDLE)0x0;
      *(undefined *)(local_28 + 0xd) = 0;
      local_28 = local_28 + 0x10;
    }
    GetStartupInfoW((LPSTARTUPINFOW)&local_78);
    if ((local_78.cbReserved2 != 0) && (local_78.lpReserved2 != (HANDLE *)0x0)) {
      local_20 = *local_78.lpReserved2;
      local_2c = local_78.lpReserved2 + 1;
      local_24 = (HANDLE *)((int)local_2c + (int)local_20);
      if (0x7ff < (int)local_20) {
        local_20 = (HANDLE)0x800;
      }
      local_34 = 1;
      while (iVar6 = local_34, (int)DAT_00419ff8 < (int)local_20) {
        local_28 = (HANDLE *)FUN_00408f5b(0x20,0x40);
        if (local_28 == (HANDLE *)0x0) {
          local_20 = DAT_00419ff8;
          break;
        }
        *(HANDLE **)(&DAT_004191d0 + iVar6) = local_28;
        DAT_00419ff8 = (HANDLE)((int)DAT_00419ff8 + 0x20);
        while (local_28 < (HANDLE *)((&DAT_004191d0)[iVar6] + 0x800)) {
          *(undefined2 *)(local_28 + 1) = 0xa00;
          *local_28 = (HANDLE)0xffffffff;
          local_28[2] = (HANDLE)0x0;
          *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x80;
          *(undefined2 *)((int)local_28 + 0x25) = 0xa0a;
          local_28[0xe] = (HANDLE)0x0;
          *(undefined *)(local_28 + 0xd) = 0;
          local_28 = local_28 + 0x10;
        }
        local_34 = iVar6 + 1;
      }
      local_30 = 0;
      pvVar4 = local_20;
      while (uVar1 = local_30, (int)local_30 < (int)pvVar4) {
        hFile = *local_24;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            ((*(byte *)local_2c & 1) != 0)) &&
           (((*(byte *)local_2c & 8) != 0 ||
            (nStdHandle = GetFileType(hFile), pvVar4 = local_20, nStdHandle != 0)))) {
          ppvVar5 = (HANDLE *)((uVar1 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar1 >> 5]);
          *ppvVar5 = *local_24;
          *(byte *)(ppvVar5 + 1) = *(byte *)local_2c;
          local_28 = ppvVar5;
          FUN_00407e10((LPCRITICAL_SECTION)(ppvVar5 + 3),4000,0);
          ppvVar5[2] = (HANDLE)((int)ppvVar5[2] + 1);
          pvVar4 = local_20;
        }
        local_30 = uVar1 + 1;
        local_2c = (HANDLE *)((int)local_2c + 1);
        local_24 = local_24 + 1;
      }
    }
    iVar6 = 0;
    while (local_30 = iVar6, iVar6 < 3) {
      ppvVar5 = DAT_004191d0 + iVar6 * 0x10;
      local_28 = ppvVar5;
      if ((*ppvVar5 == (HANDLE)0xffffffff) || (*ppvVar5 == (HANDLE)0xfffffffe)) {
        *(undefined *)(ppvVar5 + 1) = 0x81;
        if (iVar6 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else {
          nStdHandle = 0xfffffff5 - (uint)(iVar6 != 1);
        }
        local_20 = GetStdHandle(nStdHandle);
        if (((local_20 == (HANDLE)0xffffffff) || (local_20 == (HANDLE)0x0)) ||
           (nStdHandle = GetFileType(local_20), nStdHandle == 0)) {
          *(byte *)(ppvVar5 + 1) = *(byte *)(ppvVar5 + 1) | 0x40;
          *ppvVar5 = (HANDLE)0xfffffffe;
          if (DAT_0041b000 != 0) {
            *(undefined4 *)(*(int *)(DAT_0041b000 + iVar6 * 4) + 0x10) = 0xfffffffe;
          }
        }
        else {
          *ppvVar5 = local_20;
          if ((nStdHandle & 0xff) == 2) {
            bVar2 = *(byte *)(ppvVar5 + 1) | 0x40;
LAB_00405a90:
            *(byte *)(ppvVar5 + 1) = bVar2;
          }
          else {
            if ((nStdHandle & 0xff) == 3) {
              bVar2 = *(byte *)(ppvVar5 + 1) | 8;
              goto LAB_00405a90;
            }
          }
          FUN_00407e10((LPCRITICAL_SECTION)(ppvVar5 + 3),4000,0);
          ppvVar5[2] = (HANDLE)((int)ppvVar5[2] + 1);
        }
      }
      else {
        *(byte *)(ppvVar5 + 1) = *(byte *)(ppvVar5 + 1) | 0x80;
      }
      iVar6 = iVar6 + 1;
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_00405adb();
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_00405adb(void)

{
  FUN_004092ea(0xb);
  return;
}



uint __cdecl FUN_00405ae4(uint param_1,FILE *param_2)

{
  ushort *puVar1;
  FILE *pFVar2;
  ushort *puVar3;
  int *piVar4;
  undefined **ppuVar5;
  uint uVar6;
  FILE *pFVar7;
  undefined *puVar8;
  FILE *pFVar9;
  longlong lVar10;
  
  pFVar2 = param_2;
  puVar3 = (ushort *)__fileno(param_2);
  uVar6 = param_2->_flag;
  if ((uVar6 & 0x82) == 0) {
    piVar4 = __errno();
    *piVar4 = 9;
LAB_00405b08:
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffffffff;
  }
  if ((uVar6 & 0x40) != 0) {
    piVar4 = __errno();
    *piVar4 = 0x22;
    goto LAB_00405b08;
  }
  pFVar9 = (FILE *)0x0;
  if ((uVar6 & 1) != 0) {
    param_2->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      param_2->_flag = uVar6 | 0x20;
      return 0xffffffff;
    }
    param_2->_ptr = param_2->_base;
    param_2->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = param_2->_flag;
  param_2->_cnt = 0;
  param_2->_flag = uVar6 & 0xffffffef | 2;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar5 = FUN_00404114(), param_2 != (FILE *)(ppuVar5 + 8) &&
       (ppuVar5 = FUN_00404114(), param_2 != (FILE *)(ppuVar5 + 0x10))) ||
      (uVar6 = FUN_00409fb4((uint)puVar3), uVar6 == 0)))) {
    __getbuf(param_2);
  }
  if ((param_2->_flag & 0x108U) == 0) {
    param_2 = (FILE *)0x1;
    pFVar9 = (FILE *)FUN_00406284(puVar3,(ushort *)&param_1,(ushort *)0x1);
  }
  else {
    puVar1 = (ushort *)param_2->_base;
    pFVar7 = (FILE *)(param_2->_ptr + -(int)puVar1);
    param_2->_ptr = (char *)((int)puVar1 + 1);
    param_2->_cnt = param_2->_bufsiz + -1;
    if ((int)pFVar7 < 1) {
      if ((puVar3 == (ushort *)0xffffffff) || (puVar3 == (ushort *)0xfffffffe)) {
        puVar8 = &DAT_00418500;
      }
      else {
        puVar8 = (undefined *)(((uint)puVar3 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)puVar3 >> 5]);
      }
      if (((puVar8[4] & 0x20) != 0) && (lVar10 = FUN_00404dd8((uint)puVar3,0,0,2), lVar10 == -1))
      goto LAB_00405c1f;
    }
    else {
      pFVar9 = (FILE *)FUN_00406284(puVar3,puVar1,(ushort *)pFVar7);
    }
    *param_2->_base = (char)param_1;
    param_2 = pFVar7;
  }
  if (pFVar9 == param_2) {
    return param_1 & 0xff;
  }
LAB_00405c1f:
  pFVar2->_flag = pFVar2->_flag | 0x20;
  return 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data
// Library Function - Multiple Matches With Different Base Names
// Name: _memcpy, _memmove
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  undefined auVar16 [16];
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar13 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar15 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar15 & 3) == 0) {
      uVar9 = _Size >> 2;
      if (uVar9 < 8) goto LAB_00405ff0;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *puVar15 = *puVar13;
        puVar13 = puVar13 + -1;
        puVar15 = puVar15 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_00406014_caseD_1;
      case 2:
        goto switchD_00406014_caseD_2;
      case 3:
        goto switchD_00406014_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_00406014_caseD_1:
        *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
        return _Dst;
      case 2:
switchD_00406014_caseD_2:
        *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
        *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
        return _Dst;
      case 3:
switchD_00406014_caseD_3:
        *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
        *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
        *(undefined *)((int)puVar15 + 1) = *(undefined *)((int)puVar13 + 1);
        return _Dst;
      default:
        uVar10 = _Size - ((uint)puVar15 & 3);
        switch((uint)puVar15 & 3) {
        case 1:
          *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
          puVar13 = (undefined4 *)((int)puVar13 + -1);
          uVar9 = uVar10 >> 2;
          puVar15 = (undefined4 *)((int)puVar15 - 1);
          if (uVar9 < 8) {
LAB_00405ff0:
                    // WARNING: Could not recover jumptable at 0x00405ff2. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar8 = (void *)(*(code *)(&PTR_LAB_004060c4)[uVar9 * 0x3fffffff])();
            return pvVar8;
          }
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar15 = *puVar13;
            puVar13 = puVar13 + -1;
            puVar15 = puVar15 + -1;
          }
          switch(uVar10 & 3) {
          case 3:
            goto switchD_00406014_caseD_3;
          case 2:
            goto switchD_00406014_caseD_2;
          case 1:
            goto switchD_00406014_caseD_1;
          }
          break;
        case 2:
          *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
          puVar13 = (undefined4 *)((int)puVar13 + -2);
          puVar15 = (undefined4 *)((int)puVar15 - 2);
          if (uVar9 < 8) goto LAB_00405ff0;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar15 = *puVar13;
            puVar13 = puVar13 + -1;
            puVar15 = puVar15 + -1;
          }
          switch(uVar10 & 3) {
          case 3:
            goto switchD_00406014_caseD_3;
          case 2:
            goto switchD_00406014_caseD_2;
          case 1:
            goto switchD_00406014_caseD_1;
          }
          break;
        case 3:
          *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
          *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)puVar15 + 1) = *(undefined *)((int)puVar13 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + -3);
          puVar15 = (undefined4 *)((int)puVar15 - 3);
          if (uVar9 < 8) goto LAB_00405ff0;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar15 = *puVar13;
            puVar13 = puVar13 + -1;
            puVar15 = puVar15 + -1;
          }
          switch(uVar10 & 3) {
          case 3:
            goto switchD_00406014_caseD_3;
          case 2:
            goto switchD_00406014_caseD_2;
          case 1:
            goto switchD_00406014_caseD_1;
          }
        }
      }
    }
    return _Dst;
  }
  puVar14 = (undefined *)_Dst;
  if ((DAT_00419eec >> 1 & 1) != 0) {
    while (_Size != 0) {
      _Size = _Size - 1;
      *puVar14 = *(undefined *)_Src;
      _Src = (undefined *)_Src + 1;
      puVar14 = puVar14 + 1;
    }
    return _Dst;
  }
  puVar13 = (undefined4 *)_Dst;
  if (_Size < 0x80) {
LAB_00405e4b:
    if (((uint)_Dst & 3) != 0) {
LAB_00405e68:
      switch(_Size) {
      case 0:
        return _Dst;
      case 1:
        break;
      case 2:
        goto switchD_00405e80_caseD_2;
      case 3:
        goto switchD_00405e80_caseD_3;
      default:
        uVar10 = (_Size - 4) + ((uint)_Dst & 3);
        switch((uint)_Dst & 3) {
        case 0:
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 1:
          *(undefined *)_Dst = *(undefined *)_Src;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
          _Src = (undefined4 *)((int)_Src + 3);
          puVar13 = (undefined4 *)((int)_Dst + 3);
          if (7 < uVar9) {
            while (uVar9 != 0) {
              uVar9 = uVar9 - 1;
              *puVar13 = *(undefined4 *)_Src;
              _Src = (undefined4 *)_Src + 1;
              puVar13 = puVar13 + 1;
            }
            switch(uVar10 & 3) {
            case 0:
              return _Dst;
            case 3:
              goto switchD_00405e80_caseD_3;
            case 2:
              goto switchD_00405e80_caseD_2;
            }
            break;
          }
          goto LAB_00405e88;
        case 2:
          *(undefined *)_Dst = *(undefined *)_Src;
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          _Src = (undefined4 *)((int)_Src + 2);
          puVar13 = (undefined4 *)((int)_Dst + 2);
          if (uVar9 < 8) goto LAB_00405e88;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar13 = *(undefined4 *)_Src;
            _Src = (undefined4 *)_Src + 1;
            puVar13 = puVar13 + 1;
          }
          switch(uVar10 & 3) {
          case 0:
            return _Dst;
          case 3:
            goto switchD_00405e80_caseD_3;
          case 2:
            goto switchD_00405e80_caseD_2;
          }
          break;
        case 3:
          *(undefined *)_Dst = *(undefined *)_Src;
          uVar9 = uVar10 >> 2;
          _Src = (undefined4 *)((int)_Src + 1);
          puVar13 = (undefined4 *)((int)_Dst + 1);
          if (uVar9 < 8) goto LAB_00405e88;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar13 = *(undefined4 *)_Src;
            _Src = (undefined4 *)_Src + 1;
            puVar13 = puVar13 + 1;
          }
          switch(uVar10 & 3) {
          case 0:
            return _Dst;
          case 3:
            goto switchD_00405e80_caseD_3;
          case 2:
            goto switchD_00405e80_caseD_2;
          }
        }
      }
      goto switchD_00405e80_caseD_1;
    }
  }
  else {
    if (((((uint)_Dst ^ (uint)_Src) & 0xf) == 0) && ((DAT_00418e00 >> 1 & 1) != 0)) {
      if (((uint)_Src & 0xf) != 0) {
        uVar9 = 0x10 - ((uint)_Src & 0xf);
        _Size = _Size - uVar9;
        uVar10 = uVar9 & 3;
        while (uVar10 != 0) {
          *(undefined *)puVar13 = *(undefined *)_Src;
          _Src = (void *)((int)_Src + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          uVar10 = uVar10 - 1;
        }
        uVar9 = uVar9 >> 2;
        while (uVar9 != 0) {
          *puVar13 = *(undefined4 *)_Src;
          _Src = (undefined4 *)_Src + 1;
          puVar13 = puVar13 + 1;
          uVar9 = uVar9 - 1;
        }
      }
      uVar10 = _Size >> 7;
      while (uVar10 != 0) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
        auVar16 = *(undefined *)((undefined4 *)_Src + 4);
                    // WARNING: Load size is inaccurate
        auVar2 = *(undefined *)((undefined4 *)_Src + 8);
                    // WARNING: Load size is inaccurate
        auVar3 = *(undefined *)((undefined4 *)_Src + 0xc);
                    // WARNING: Store size is inaccurate
        *(undefined *)puVar13 = *(undefined *)_Src;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 4) = auVar16;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 8) = auVar2;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0xc) = auVar3;
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
        auVar16 = *(undefined *)((undefined4 *)_Src + 0x14);
                    // WARNING: Load size is inaccurate
        auVar2 = *(undefined *)((undefined4 *)_Src + 0x18);
                    // WARNING: Load size is inaccurate
        auVar3 = *(undefined *)((undefined4 *)_Src + 0x1c);
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x10) = *(undefined *)((undefined4 *)_Src + 0x10);
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x14) = auVar16;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x18) = auVar2;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x1c) = auVar3;
        _Src = (undefined4 *)_Src + 0x20;
        puVar13 = puVar13 + 0x20;
        uVar10 = uVar10 - 1;
      }
      if ((_Size & 0x7f) != 0) {
        uVar10 = (_Size & 0x7f) >> 4;
        while (uVar10 != 0) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Store size is inaccurate
          *(undefined *)puVar13 = *(undefined *)_Src;
          _Src = (undefined4 *)_Src + 4;
          puVar13 = puVar13 + 4;
          uVar10 = uVar10 - 1;
        }
        if ((_Size & 0xf) != 0) {
          uVar10 = (_Size & 0xf) >> 2;
          while (uVar10 != 0) {
            *puVar13 = *(undefined4 *)_Src;
            _Src = (undefined4 *)_Src + 1;
            puVar13 = puVar13 + 1;
            uVar10 = uVar10 - 1;
          }
          uVar10 = _Size & 3;
          while (uVar10 != 0) {
            *(undefined *)puVar13 = *(undefined *)_Src;
            _Src = (void *)((int)_Src + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            uVar10 = uVar10 - 1;
          }
        }
      }
      return _Dst;
    }
    if ((DAT_00419eec & 1) == 0) goto LAB_00405e4b;
    if (((uint)_Dst & 3) != 0) goto LAB_00405e68;
    if (((uint)_Src & 3) == 0) {
      if (((uint)_Dst >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)_Src;
        _Size = _Size - 4;
        _Src = (void *)((int)_Src + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (void *)((int)_Dst + 4);
      }
      if (((uint)_Dst >> 3 & 1) != 0) {
        uVar1 = *(undefined8 *)_Src;
        _Size = _Size - 8;
        _Src = (undefined8 *)_Src + 1;
        *(undefined8 *)_Dst = uVar1;
        _Dst = (undefined8 *)_Dst + 1;
      }
      if (((uint)_Src & 7) == 0) {
                    // WARNING: Load size is inaccurate
        puVar7 = (undefined8 *)_Src + -1;
        auVar16 = *(undefined *)((undefined8 *)_Src + -1);
        do {
          puVar12 = puVar7;
                    // WARNING: Load size is inaccurate
          auVar2 = *(undefined *)(puVar12 + 2);
          _Size = _Size - 0x30;
                    // WARNING: Load size is inaccurate
          auVar3 = *(undefined *)(puVar12 + 4);
                    // WARNING: Load size is inaccurate
          auVar4 = *(undefined *)(puVar12 + 6);
                    // WARNING: Store size is inaccurate
          *(undefined *)_Dst = SUB3216(ZEXT2032(CONCAT416(0x40,auVar16)) >> 0x40,0);
                    // WARNING: Store size is inaccurate
          *(undefined *)((undefined8 *)_Dst + 2) =
               SUB3216(ZEXT2032(CONCAT416(0x40,auVar2)) >> 0x40,0);
                    // WARNING: Store size is inaccurate
          *(undefined *)((undefined8 *)_Dst + 4) =
               SUB3216(ZEXT2032(CONCAT416(0x40,auVar3)) >> 0x40,0);
          _Dst = (undefined8 *)_Dst + 6;
          puVar7 = puVar12 + 6;
          auVar16 = auVar4;
        } while (0x2f < (int)_Size);
        puVar12 = puVar12 + 7;
      }
      else {
        if (((uint)_Src >> 3 & 1) == 0) {
                    // WARNING: Load size is inaccurate
          iVar6 = (int)_Src + -4;
          auVar16 = *(undefined *)((int)_Src + -4);
          do {
            iVar11 = iVar6;
                    // WARNING: Load size is inaccurate
            auVar2 = *(undefined *)(iVar11 + 0x10);
            _Size = _Size - 0x30;
                    // WARNING: Load size is inaccurate
            auVar3 = *(undefined *)(iVar11 + 0x20);
                    // WARNING: Load size is inaccurate
            auVar4 = *(undefined *)(iVar11 + 0x30);
                    // WARNING: Store size is inaccurate
            *(undefined *)_Dst = SUB2016(CONCAT416(0x20,auVar16) >> 0x20,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 2) = SUB2016(CONCAT416(0x20,auVar2) >> 0x20,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 4) = SUB2016(CONCAT416(0x20,auVar3) >> 0x20,0);
            _Dst = (undefined8 *)_Dst + 6;
            iVar6 = iVar11 + 0x30;
            auVar16 = auVar4;
          } while (0x2f < (int)_Size);
          puVar12 = (undefined8 *)(iVar11 + 0x34);
        }
        else {
                    // WARNING: Load size is inaccurate
          iVar6 = (int)_Src + -0xc;
          auVar16 = *(undefined *)((int)_Src + -0xc);
          do {
            iVar11 = iVar6;
                    // WARNING: Load size is inaccurate
            auVar2 = *(undefined *)(iVar11 + 0x10);
            _Size = _Size - 0x30;
                    // WARNING: Load size is inaccurate
            auVar3 = *(undefined *)(iVar11 + 0x20);
                    // WARNING: Load size is inaccurate
            auVar4 = *(undefined *)(iVar11 + 0x30);
                    // WARNING: Store size is inaccurate
            *(undefined *)_Dst = SUB3216(ZEXT2032(CONCAT416(0x60,auVar16)) >> 0x60,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 2) =
                 SUB3216(ZEXT2032(CONCAT416(0x60,auVar2)) >> 0x60,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 4) =
                 SUB3216(ZEXT2032(CONCAT416(0x60,auVar3)) >> 0x60,0);
            _Dst = (undefined8 *)_Dst + 6;
            iVar6 = iVar11 + 0x30;
            auVar16 = auVar4;
          } while (0x2f < (int)_Size);
          puVar12 = (undefined8 *)(iVar11 + 0x3c);
        }
      }
      while (0xf < (int)_Size) {
                    // WARNING: Load size is inaccurate
        auVar16 = *(undefined *)puVar12;
        _Size = _Size - 0x10;
        puVar12 = puVar12 + 2;
                    // WARNING: Store size is inaccurate
        *(undefined *)_Dst = auVar16;
        _Dst = (undefined8 *)_Dst + 2;
      }
      if ((_Size >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)puVar12;
        _Size = _Size - 4;
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (void *)((int)_Dst + 4);
      }
      if ((_Size >> 3 & 1) != 0) {
        _Size = _Size - 8;
        *(undefined8 *)_Dst = *puVar12;
      }
                    // WARNING: Could not recover jumptable at 0x00405e49. Too many branches
                    // WARNING: Treating indirect jump as call
      pvVar8 = (void *)(*(code *)(&switchdataD_00405f78)[_Size])();
      return pvVar8;
    }
  }
  uVar9 = _Size >> 2;
  if (uVar9 < 8) {
LAB_00405e88:
                    // WARNING: Could not recover jumptable at 0x00405e88. Too many branches
                    // WARNING: Treating indirect jump as call
    pvVar8 = (void *)(*(code *)(&PTR_LAB_00405f0c)[uVar9])();
    return pvVar8;
  }
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    *puVar13 = *(undefined4 *)_Src;
    _Src = (undefined4 *)_Src + 1;
    puVar13 = puVar13 + 1;
  }
  switch(_Size & 3) {
  case 0:
    return _Dst;
  case 2:
switchD_00405e80_caseD_2:
    *(undefined *)puVar13 = *(undefined *)_Src;
    *(undefined *)((int)puVar13 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00405e80_caseD_3:
    *(undefined *)puVar13 = *(undefined *)_Src;
    *(undefined *)((int)puVar13 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar13 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_00405e80_caseD_1:
  *(undefined *)puVar13 = *(undefined *)_Src;
  return _Dst;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00406284(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ulong *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == (ushort *)0xfffffffe) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_00419ff8 <= param_1)) {
      puVar1 = ___doserrno();
      *puVar1 = 0;
    }
    else {
      iVar4 = ((uint)param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
        FUN_004099c7((uint)param_1);
        if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = FUN_00406373(param_1,param_2,param_3);
        }
        FUN_0040634b();
        return uVar3;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
    }
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00402c77();
  }
  return 0xffffffff;
}



void FUN_0040634b(void)

{
  uint unaff_ESI;
  
  FUN_00409d6d(unaff_ESI);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_00406373(ushort *param_1,ushort *param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  wint_t wVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  _ptiddata p_Var7;
  BOOL BVar8;
  UINT CodePage;
  int iVar9;
  ushort *puVar10;
  DWORD DVar11;
  ushort *puVar12;
  char cVar13;
  ushort *puVar14;
  ushort *puVar15;
  DWORD DVar16;
  DWORD local_1aec;
  char local_1ae5;
  ushort *local_1ae4;
  int local_1ae0;
  int local_1adc;
  ushort *local_1ad8;
  ushort *local_1ad4;
  DWORD local_1ad0;
  ushort *local_1acc;
  ushort *local_1ac8;
  ushort *local_1ac4;
  int local_1ac0;
  ushort local_1abc [854];
  ushort local_1410 [852];
  CHAR local_d68 [3416];
  undefined local_10;
  char local_f;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_1ac0 = 0;
  puVar14 = (ushort *)0x0;
  local_1acc = param_1;
  DVar16 = 0;
  local_1ad4 = param_2;
  local_1ac4 = (ushort *)0x0;
  if (param_3 == (ushort *)0x0) goto LAB_00406bc8;
  if (param_2 == (ushort *)0x0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00402c77();
    goto LAB_00406bc8;
  }
  local_1adc = (int)param_1 >> 5;
  local_1ae0 = ((uint)param_1 & 0x1f) * 0x40;
  cVar13 = *(char *)(local_1ae0 + 0x24 + (&DAT_004191d0)[local_1adc]) * '\x02' >> 1;
  if (((cVar13 == '\x02') || (cVar13 == '\x01')) && ((~(uint)param_3 & 1) == 0)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00402c77();
    goto LAB_00406bc8;
  }
  if ((*(byte *)(local_1ae0 + 4 + (&DAT_004191d0)[local_1adc]) & 0x20) != 0) {
    FUN_00404ed4((uint)param_1,0,0,2);
  }
  uVar6 = FUN_00409fb4((uint)local_1acc);
  if ((uVar6 == 0) || ((*(byte *)(local_1ae0 + 4 + (&DAT_004191d0)[local_1adc]) & 0x80) == 0)) {
LAB_004067b6:
    if ((*(byte *)(local_1ae0 + 4 + (&DAT_004191d0)[local_1adc]) & 0x80) == 0) {
      BVar8 = WriteFile(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),local_1ad4,
                        (DWORD)param_3,(LPDWORD)&local_1ae4,(LPOVERLAPPED)0x0);
      if (BVar8 == 0) {
LAB_004067a9:
        DVar16 = GetLastError();
      }
      else {
        puVar14 = local_1ae4;
        DVar16 = 0;
      }
      goto LAB_004068c6;
    }
    local_1ad0 = 0;
    if (cVar13 == '\0') {
      local_1acc = local_1ad4;
      if (param_3 == (ushort *)0x0) goto LAB_00406b88;
      do {
        puVar10 = local_1410;
        local_1ac8 = (ushort *)0x0;
        puVar12 = (ushort *)((int)local_1acc - (int)local_1ad4);
        do {
          if (param_3 <= puVar12) break;
          local_1ae5 = *(char *)local_1acc;
          local_1acc = (ushort *)((int)local_1acc + 1);
          puVar12 = (ushort *)((int)puVar12 + 1);
          if (local_1ae5 == '\n') {
            local_1ac0 = local_1ac0 + 1;
            *(char *)puVar10 = '\r';
            puVar10 = (ushort *)((int)puVar10 + 1);
            local_1ac8 = (ushort *)((int)local_1ac8 + 1);
          }
          *(char *)puVar10 = local_1ae5;
          puVar10 = (ushort *)((int)puVar10 + 1);
          local_1ac8 = (ushort *)((int)local_1ac8 + 1);
        } while (local_1ac8 < (ushort *)0x13ff);
        BVar8 = WriteFile(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),local_1410,
                          (DWORD)(ushort *)((int)puVar10 - (int)local_1410),(LPDWORD)&local_1ae4,
                          (LPOVERLAPPED)0x0);
        if (BVar8 == 0) goto LAB_004067a9;
        puVar14 = (ushort *)((int)puVar14 + (int)local_1ae4);
        DVar16 = local_1ad0;
      } while (((int)(ushort *)((int)puVar10 - (int)local_1410) <= (int)local_1ae4) &&
              ((ushort *)((int)local_1acc - (int)local_1ad4) < param_3));
      goto LAB_004068c6;
    }
    if (cVar13 == '\x02') {
      puVar10 = local_1ad4;
      if (param_3 != (ushort *)0x0) {
        do {
          local_1aec = 0;
          puVar12 = local_1410;
          puVar14 = (ushort *)((int)puVar10 - (int)local_1ad4);
          uVar6 = 0;
          do {
            if (param_3 <= puVar14) break;
            uVar2 = *puVar10;
            puVar14 = puVar14 + 1;
            puVar10 = puVar10 + 1;
            if (uVar2 == 10) {
              local_1ac0 = local_1ac0 + 2;
              *puVar12 = 0xd;
              puVar12 = puVar12 + 1;
              uVar6 = uVar6 + 2;
            }
            *puVar12 = uVar2;
            uVar6 = uVar6 + 2;
            puVar12 = puVar12 + 1;
          } while (uVar6 < 0x13fe);
          local_1ac8 = puVar10;
          BVar8 = WriteFile(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),local_1410,
                            (DWORD)(ushort *)((int)puVar12 - (int)local_1410),(LPDWORD)&local_1ae4,
                            (LPOVERLAPPED)0x0);
          puVar14 = local_1ac4;
          if (BVar8 == 0) goto LAB_004067a9;
          puVar14 = (ushort *)((int)local_1ac4 + (int)local_1ae4);
          DVar16 = local_1ad0;
          local_1ac4 = puVar14;
        } while (((int)(ushort *)((int)puVar12 - (int)local_1410) <= (int)local_1ae4) &&
                (puVar10 = local_1ac8, (ushort *)((int)local_1ac8 - (int)local_1ad4) < param_3));
        goto LAB_004068c6;
      }
    }
    else {
      local_1acc = local_1ad4;
      if (param_3 != (ushort *)0x0) {
        do {
          local_1aec = 0;
          puVar14 = local_1abc;
          puVar10 = (ushort *)((int)local_1acc - (int)local_1ad4);
          uVar6 = 0;
          do {
            if (param_3 <= puVar10) break;
            uVar2 = *local_1acc;
            puVar10 = puVar10 + 1;
            local_1acc = local_1acc + 1;
            if (uVar2 == 10) {
              *puVar14 = 0xd;
              puVar14 = puVar14 + 1;
              uVar6 = uVar6 + 2;
            }
            *puVar14 = uVar2;
            uVar6 = uVar6 + 2;
            puVar14 = puVar14 + 1;
          } while (uVar6 < 0x6a8);
          local_1ac8 = (ushort *)
                       WideCharToMultiByte(0xfde9,0,(LPCWSTR)local_1abc,
                                           (int)((int)puVar14 - (int)local_1abc) / 2,local_d68,0xd55
                                           ,(LPCSTR)0x0,(LPBOOL)0x0);
          puVar14 = local_1ac4;
          DVar16 = local_1ad0;
          if (local_1ac8 == (ushort *)0x0) goto LAB_004067a9;
          local_1ac4 = (ushort *)0x0;
          do {
            BVar8 = WriteFile(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),
                              local_d68 + (int)local_1ac4,(DWORD)((int)local_1ac8 - (int)local_1ac4)
                              ,(LPDWORD)&local_1ae4,(LPOVERLAPPED)0x0);
            if (BVar8 == 0) {
              DVar16 = GetLastError();
              local_1ad0 = DVar16;
              break;
            }
            local_1ac4 = (ushort *)((int)local_1ac4 + (int)local_1ae4);
          } while ((int)local_1ac4 < (int)local_1ac8);
        } while (((int)local_1ac8 <= (int)local_1ac4) &&
                (puVar14 = (ushort *)((int)local_1acc - (int)local_1ad4), local_1ac4 = puVar14,
                puVar14 < param_3));
        goto LAB_004068c6;
      }
    }
  }
  else {
    p_Var7 = __getptd();
    local_1ac8 = (ushort *)(uint)(p_Var7->ptlocinfo->locale_name[2] == (wchar_t *)0x0);
    BVar8 = GetConsoleMode(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),&local_1aec);
    if ((BVar8 == 0) || ((local_1ac8 != (ushort *)0x0 && (cVar13 == '\0')))) goto LAB_004067b6;
    CodePage = GetConsoleCP();
    DVar11 = 0;
    local_1acc = (ushort *)0x0;
    local_1ad0 = 0;
    local_1ad8 = local_1ad4;
    if (param_3 == (ushort *)0x0) goto LAB_00406b88;
    puVar12 = (ushort *)0x0;
    local_1ac4 = (ushort *)0x0;
    puVar10 = local_1ad4;
    puVar15 = puVar14;
    do {
      local_1ac8 = (ushort *)0x0;
      puVar14 = puVar15;
      if (cVar13 == '\0') {
        cVar1 = *(char *)puVar10;
        local_1aec = (uint)(cVar1 == '\n');
        local_1ac8 = (ushort *)(&DAT_004191d0)[local_1adc];
        if (*(int *)(local_1ae0 + 0x38 + (int)local_1ac8) == 0) {
          iVar9 = FUN_00408e3d((int)cVar1);
          if (iVar9 == 0) {
            uVar6 = 1;
            puVar10 = local_1ad8;
            goto LAB_004065d2;
          }
          if ((uint)((int)((int)local_1ad4 - (int)local_1ad8) + (int)param_3) < 2) {
            *(undefined *)(local_1ae0 + 0x34 + (&DAT_004191d0)[local_1adc]) =
                 *(undefined *)local_1ad8;
            *(undefined4 *)(local_1ae0 + 0x38 + (&DAT_004191d0)[local_1adc]) = 1;
            puVar14 = (ushort *)((int)puVar15 + 1);
            break;
          }
          iVar9 = FUN_00408f43((ushort *)&local_1ad0,(byte *)local_1ad8,2);
          if (iVar9 == -1) break;
          local_1ad8 = (ushort *)((int)local_1ad8 + 1);
          local_1ac4 = (ushort *)((int)local_1ac4 + 1);
        }
        else {
          local_10 = *(undefined *)(local_1ae0 + 0x34 + (int)local_1ac8);
          uVar6 = 2;
          *(undefined4 *)(local_1ae0 + 0x38 + (int)local_1ac8) = 0;
          puVar10 = &local_10;
          local_f = cVar1;
LAB_004065d2:
          iVar9 = FUN_00408f43((ushort *)&local_1ad0,(byte *)puVar10,uVar6);
          if (iVar9 == -1) break;
        }
        local_1ad8 = (ushort *)((int)local_1ad8 + 1);
        local_1ac4 = (ushort *)((int)local_1ac4 + 1);
        local_1ac8 = (ushort *)
                     WideCharToMultiByte(CodePage,0,(LPCWSTR)&local_1ad0,1,(LPSTR)&local_10,5,
                                         (LPCSTR)0x0,(LPBOOL)0x0);
        if (local_1ac8 == (ushort *)0x0) break;
        BVar8 = WriteFile(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),&local_10,
                          (DWORD)local_1ac8,(LPDWORD)&local_1acc,(LPOVERLAPPED)0x0);
        if (BVar8 == 0) goto LAB_004067a9;
        puVar14 = (ushort *)((int)local_1ac4 + local_1ac0);
        if ((int)local_1acc < (int)local_1ac8) break;
        puVar10 = local_1ad8;
        DVar11 = local_1ad0;
        puVar12 = local_1ac4;
        if (local_1aec != 0) {
          local_10 = 0xd;
          BVar8 = WriteFile(*(HANDLE *)(local_1ae0 + (&DAT_004191d0)[local_1adc]),&local_10,1,
                            (LPDWORD)&local_1acc,(LPOVERLAPPED)0x0);
          if (BVar8 == 0) goto LAB_004067a9;
          if ((int)local_1acc < 1) break;
          local_1ac0 = local_1ac0 + 1;
          puVar14 = (ushort *)((int)puVar14 + 1);
          puVar10 = local_1ad8;
          DVar11 = local_1ad0;
          puVar12 = local_1ac4;
        }
      }
      else {
        if ((cVar13 == '\x01') || (cVar13 == '\x02')) {
          DVar11 = (DWORD)*puVar10;
          local_1ac8 = (ushort *)(uint)(*puVar10 == 10);
          puVar10 = puVar10 + 1;
          puVar12 = local_1ac4 + 1;
          local_1ad8 = puVar10;
          local_1ad0 = DVar11;
          local_1ac4 = puVar12;
        }
        if ((cVar13 == '\x01') || (cVar13 == '\x02')) {
          wVar3 = __putwch_nolock((wchar_t)DVar11);
          if (wVar3 != (wint_t)local_1ad0) goto LAB_004067a9;
          puVar14 = puVar15 + 1;
          puVar10 = local_1ad8;
          DVar11 = local_1ad0;
          puVar12 = local_1ac4;
          if (local_1ac8 != (ushort *)0x0) {
            local_1ad0 = 0xd;
            wVar3 = __putwch_nolock(L'\r');
            if (wVar3 != (wint_t)local_1ad0) goto LAB_004067a9;
            puVar14 = (ushort *)((int)puVar15 + 3);
            local_1ac0 = local_1ac0 + 1;
            puVar10 = local_1ad8;
            DVar11 = local_1ad0;
            puVar12 = local_1ac4;
          }
        }
      }
      puVar15 = puVar14;
    } while (puVar12 < param_3);
LAB_004068c6:
    if (puVar14 != (ushort *)0x0) goto LAB_00406bc8;
    if (DVar16 != 0) {
      if (DVar16 == 5) {
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        FID_conflict___dosmaperr(DVar16);
      }
      goto LAB_00406bc8;
    }
  }
LAB_00406b88:
  if (((*(byte *)(local_1ae0 + 4 + (&DAT_004191d0)[local_1adc]) & 0x40) == 0) ||
     (*(char *)local_1ad4 != '\x1a')) {
    piVar5 = __errno();
    *piVar5 = 0x1c;
    puVar4 = ___doserrno();
    *puVar4 = 0;
  }
LAB_00406bc8:
  FUN_00404f47();
  return;
}



// Library Function - Single Match
// Name: __callnewh
// Library: Visual Studio 2012 Release

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)DecodePointer(DAT_004192d0);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



void __cdecl FUN_00406bfe(undefined4 param_1)

{
  DAT_004192d0 = param_1;
  return;
}



undefined4 __cdecl FUN_00406c0b(LPCSTR param_1,LPWSTR *param_2)

{
  int *piVar1;
  uint uVar2;
  BOOL BVar3;
  int cchWideChar;
  DWORD DVar4;
  LPWSTR lpWideCharStr;
  UINT CodePage;
  undefined4 uVar5;
  
  CodePage = 0;
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPWSTR *)0x0)) {
    piVar1 = __errno();
    uVar5 = 0x16;
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  else {
    uVar2 = FUN_00407e3e();
    if ((uVar2 == 0) && (BVar3 = AreFileApisANSI(), BVar3 == 0)) {
      CodePage = 1;
    }
    *param_2 = (LPWSTR)0x0;
    cchWideChar = MultiByteToWideChar(CodePage,0,param_1,-1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      DVar4 = GetLastError();
      FID_conflict___dosmaperr(DVar4);
    }
    else {
      lpWideCharStr = (LPWSTR)FUN_00408fa3(cchWideChar * 2);
      *param_2 = lpWideCharStr;
      if (lpWideCharStr != (LPWSTR)0x0) {
        cchWideChar = MultiByteToWideChar(CodePage,0,param_1,-1,lpWideCharStr,cchWideChar);
        if (cchWideChar != 0) {
          return 1;
        }
        DVar4 = GetLastError();
        FID_conflict___dosmaperr(DVar4);
        FID_conflict__free(*param_2);
        *param_2 = (LPWSTR)0x0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



void __cdecl FUN_00406cbd(undefined4 param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_8;
  
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",&local_8);
  if (BVar1 != 0) {
    pFVar2 = GetProcAddress(local_8,"CorExitProcess");
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)(param_1);
    }
  }
  return;
}



// Library Function - Single Match
// Name: ___crtExitProcess
// Library: Visual Studio 2012 Release

void __cdecl ___crtExitProcess(int param_1)

{
  code *pcVar1;
  
  FUN_00406cbd(param_1);
  ExitProcess(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
// Name: __amsg_exit
// Library: Visual Studio 2012 Release

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_0040701b(param_1);
  __exit(0xff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00406d23(void)

{
  _doexit(0,1,1);
  return;
}



// Library Function - Single Match
// Name: __cexit
// Library: Visual Studio 2012 Release

void __cdecl __cexit(void)

{
  _doexit(0,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_00406d41(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_00414cc8);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  FUN_004090c4();
  iVar2 = __initterm_e((undefined **)&DAT_0041110c,(undefined **)&DAT_00411124);
  if (iVar2 == 0) {
    FUN_0040a335(&LAB_00407ce5);
    FUN_00406e11((undefined **)&DAT_00411104,(undefined **)&DAT_00411108);
    if ((_DAT_00419fe4 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage(&DAT_00419fe4), BVar1 != 0)) {
      (*_DAT_00419fe4)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// Library Function - Single Match
// Name: __exit
// Library: Visual Studio 2012 Release

void __cdecl __exit(int param_1)

{
  _doexit(param_1,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00406dd9(void)

{
  PVOID pvVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  pvVar1 = EncodePointer((PVOID)0x0);
  FUN_00406bfe(pvVar1);
  FUN_00402c3f(pvVar1);
  FUN_0040a38f(pvVar1);
  FUN_0040a3a9(pvVar1);
  FUN_0040a37e();
  FUN_0040a5ba(pvVar1);
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar2 = GetProcAddress(hModule,"FlsAlloc");
  DAT_00419f60 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"FlsFree");
  DAT_00419f64 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"FlsGetValue");
  DAT_00419f68 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"FlsSetValue");
  DAT_00419f6c = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"InitializeCriticalSectionEx");
  DAT_00419f70 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CreateEventExW");
  _DAT_00419f74 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CreateSemaphoreExW");
  _DAT_00419f78 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"SetThreadStackGuarantee");
  _DAT_00419f7c = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CreateThreadpoolTimer");
  _DAT_00419f80 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"SetThreadpoolTimer");
  _DAT_00419f84 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"WaitForThreadpoolTimerCallbacks");
  _DAT_00419f88 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CloseThreadpoolTimer");
  _DAT_00419f8c = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CreateThreadpoolWait");
  _DAT_00419f90 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"SetThreadpoolWait");
  _DAT_00419f94 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CloseThreadpoolWait");
  _DAT_00419f98 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"FlushProcessWriteBuffers");
  _DAT_00419f9c = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"FreeLibraryWhenCallbackReturns");
  _DAT_00419fa0 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetCurrentProcessorNumber");
  _DAT_00419fa4 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
  _DAT_00419fa8 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CreateSymbolicLinkW");
  _DAT_00419fac = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"SetDefaultDllDirectories");
  _DAT_00419fb0 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"EnumSystemLocalesEx");
  _DAT_00419fb8 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"CompareStringEx");
  _DAT_00419fb4 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetDateFormatEx");
  _DAT_00419fbc = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetLocaleInfoEx");
  _DAT_00419fc0 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetTimeFormatEx");
  _DAT_00419fc4 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetUserDefaultLocaleName");
  _DAT_00419fc8 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"IsValidLocaleName");
  _DAT_00419fcc = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"LCMapStringEx");
  DAT_00419fd0 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetCurrentPackageId");
  DAT_00419fd4 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetTickCount64");
  _DAT_00419fd8 = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"GetFileInformationByHandleExW");
  _DAT_00419fdc = (uint)pFVar2 ^ DAT_004183f0;
  pFVar2 = GetProcAddress(hModule,"SetFileInformationByHandleW");
  _DAT_00419fe0 = (uint)pFVar2 ^ DAT_004183f0;
  return;
}



void __cdecl FUN_00406e11(undefined **param_1,undefined **param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = ~-(uint)(param_2 < param_1) & (uint)((int)param_2 + (3 - (int)param_1)) >> 2;
  if (uVar2 != 0) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = (code **)param_1 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}



// Library Function - Single Match
// Name: __initterm_e
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __cdecl __initterm_e(undefined **param_1,undefined **param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = (code **)param_1 + 1;
  }
  return;
}



void FUN_00406e69(void)

{
  __lock(8);
  return;
}



void FUN_00406e72(void)

{
  FUN_004092ea(8);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Removing unreachable block (ram,0x00406f9b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _doexit
// Library: Visual Studio 2012 Release

void __cdecl _doexit(int param_1,int param_2,int param_3)

{
  PVOID pvVar1;
  PVOID *ppvVar2;
  PVOID *ppvVar3;
  code *pcVar4;
  PVOID *ppvVar5;
  PVOID *local_20;
  
  __lock(8);
  pcVar4 = DecodePointer_exref;
  if (_DAT_004192d4 != 1) {
    _DAT_004192fc = 1;
    DAT_004192f8 = (undefined)param_3;
    if (param_2 == 0) {
      local_20 = (PVOID *)DecodePointer(DAT_00419fec);
      if (local_20 != (PVOID *)0x0) {
        ppvVar5 = (PVOID *)DecodePointer(DAT_00419fe8);
        ppvVar5 = ppvVar5;
        while (ppvVar5 = ppvVar5 + -1, local_20 <= ppvVar5) {
          pvVar1 = EncodePointer((PVOID)0x0);
          if (*ppvVar5 != pvVar1) {
            if (ppvVar5 < local_20) break;
            pcVar4 = (code *)(*pcVar4)(*ppvVar5);
            pvVar1 = EncodePointer((PVOID)0x0);
            *ppvVar5 = pvVar1;
            (*pcVar4)();
            pcVar4 = DecodePointer_exref;
            ppvVar2 = (PVOID *)DecodePointer(DAT_00419fec);
            ppvVar3 = (PVOID *)DecodePointer(DAT_00419fe8);
            if ((local_20 != ppvVar2) || (ppvVar5 != ppvVar3)) {
              ppvVar5 = ppvVar3;
              local_20 = ppvVar2;
              ppvVar5 = ppvVar3;
            }
          }
        }
      }
      FUN_00406e11((undefined **)&DAT_00411128,(undefined **)&DAT_00411138);
    }
    FUN_00406e11((undefined **)&DAT_0041113c,(undefined **)&DAT_00411140);
  }
  FUN_00406f95();
  if (param_3 == 0) {
    _DAT_004192d4 = 1;
    FUN_004092ea(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



void FUN_00406f95(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_004092ea(8);
  }
  return;
}



// Library Function - Single Match
// Name: _exit
// Library: Visual Studio 2012 Release

void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: __FF_MSGBANNER
// Library: Visual Studio 2012 Release

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (_DAT_00419308 != 1) {
      return;
    }
  }
  FUN_0040701b(0xfc);
  FUN_0040701b(0xff);
  return;
}



// Library Function - Single Match
// Name: __GET_RTERRMSG
// Library: Visual Studio 2012 Release

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00411198)[uVar1 * 2]) {
      return (wchar_t *)(&PTR_u_R6002___floating_point_support_n_0041119c)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x17);
  return (wchar_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040701b(int param_1)

{
  code *pcVar1;
  wchar_t *_Src;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t nNumberOfBytesToWrite;
  HANDLE hFile;
  uint uVar5;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_200;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  _Src = __GET_RTERRMSG(param_1);
  if (_Src != (wchar_t *)0x0) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (_DAT_00419308 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar5 = 0;
        do {
          local_1fc[uVar5] = *(char *)(_Src + uVar5);
          if (_Src[uVar5] == L'\0') break;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_200;
        local_1fc[499] = 0;
        nNumberOfBytesToWrite = _strlen(local_1fc);
        WriteFile(hFile,local_1fc,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else {
      if (param_1 != 0xfc) {
        eVar3 = _wcscpy_s((wchar_t *)&DAT_00419310,0x314,L"Runtime Error!\n\nProgram: ");
        if (eVar3 == 0) {
          _DAT_0041954a = 0;
          DVar4 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_00419342,0x104);
          if ((DVar4 != 0) ||
             (eVar3 = _wcscpy_s((wchar_t *)&DAT_00419342,0x2fb,L"<program name unknown>"),
             eVar3 == 0)) {
            nNumberOfBytesToWrite = _wcslen((wchar_t *)&DAT_00419342);
            if (0x3c < nNumberOfBytesToWrite + 1) {
              nNumberOfBytesToWrite = _wcslen((wchar_t *)&DAT_00419342);
              iVar2 = FUN_0040a6a8((short *)(&DAT_004192cc + nNumberOfBytesToWrite * 2),
                                   0x2fb - ((int)(nNumberOfBytesToWrite * 2 + -0x76) >> 1),
                                   (short *)&DAT_00411b9c,3);
              if (iVar2 != 0) goto LAB_004071cd;
            }
            eVar3 = _wcscat_s((wchar_t *)&DAT_00419310,0x314,L"\n\n");
            if ((eVar3 == 0) && (eVar3 = _wcscat_s((wchar_t *)&DAT_00419310,0x314,_Src), eVar3 == 0)
               ) {
              FUN_0040a766((LPCWSTR)&DAT_00419310,L"Microsoft Visual C++ Runtime Library",0x12010);
              goto LAB_004071bd;
            }
          }
        }
LAB_004071cd:
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
LAB_004071bd:
  FUN_00404f47();
  return;
}



uint FUN_004071d8(void)

{
  DAT_0041993c = GetProcessHeap();
  return (uint)(DAT_0041993c != (HANDLE)0x0);
}



uint __cdecl FUN_004071ed(FILE *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  LPWSTR pWVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00402c77();
  }
  else {
    uVar6 = param_1->_flag;
    if (((uVar6 & 0x83) != 0) && ((uVar6 & 0x40) == 0)) {
      if ((uVar6 & 2) == 0) {
        param_1->_flag = uVar6 | 1;
        if ((uVar6 & 0x10c) == 0) {
          __getbuf(param_1);
        }
        else {
          param_1->_ptr = param_1->_base;
        }
        uVar6 = param_1->_bufsiz;
        pWVar4 = (LPWSTR)param_1->_base;
        uVar3 = __fileno(param_1);
        pWVar4 = FUN_00404f8b(uVar3,pWVar4,uVar6);
        *(LPWSTR *)&param_1->_cnt = pWVar4;
        if ((pWVar4 != (LPWSTR)0x0) && (pWVar4 != (LPWSTR)0xffffffff)) {
          if ((*(byte *)&param_1->_flag & 0x82) == 0) {
            iVar5 = __fileno(param_1);
            if ((iVar5 == -1) || (iVar5 = __fileno(param_1), iVar5 == -2)) {
              puVar7 = &DAT_00418500;
            }
            else {
              iVar5 = __fileno(param_1);
              uVar6 = __fileno(param_1);
              puVar7 = (undefined *)((uVar6 & 0x1f) * 0x40 + (&DAT_004191d0)[iVar5 >> 5]);
            }
            if ((puVar7[4] & 0x82) == 0x82) {
              param_1->_flag = param_1->_flag | 0x2000;
            }
          }
          if (((param_1->_bufsiz == 0x200) && ((*(byte *)&param_1->_flag & 8) != 0)) &&
             ((param_1->_flag & 0x400U) == 0)) {
            param_1->_bufsiz = 0x1000;
          }
          param_1->_cnt = param_1->_cnt + -1;
          bVar1 = *param_1->_ptr;
          param_1->_ptr = param_1->_ptr + 1;
          return (uint)bVar1;
        }
        param_1->_flag = param_1->_flag | (-(uint)(pWVar4 != (LPWSTR)0x0) & 0x10) + 0x10;
        param_1->_cnt = 0;
      }
      else {
        param_1->_flag = uVar6 | 0x20;
      }
    }
  }
  return 0xffffffff;
}



// Library Function - Single Match
// Name: _memcpy_s
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Debug, Visual Studio 2015 Release

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
      FUN_00402c77();
    }
    else {
      if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
        FUN_00407390((int *)_Dst,0,_DstSize);
        if (_Src == (void *)0x0) {
          piVar2 = __errno();
          eVar1 = 0x16;
        }
        else {
          if (_MaxCount <= _DstSize) {
            return 0x16;
          }
          piVar2 = __errno();
          eVar1 = 0x22;
        }
        *piVar2 = eVar1;
        FUN_00402c77();
      }
      else {
        FID_conflict__memcpy(_Dst,_Src,_MaxCount);
        eVar1 = 0;
      }
    }
  }
  return eVar1;
}



int * __cdecl FUN_00407390(int *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined auVar5 [16];
  
  if (param_3 == 0) {
    return param_1;
  }
  uVar1 = (uint)param_2;
  piVar3 = param_1;
  if ((DAT_00419eec >> 1 & 1) == 0) {
    if ((0x7f < (int)param_3) && ((DAT_00418e00 >> 1 & 1) != 0)) {
      if (param_2 == 0) {
        auVar5 = (undefined  [16])0x0;
      }
      else {
        uVar1 = SUB164(CONCAT142(ZEXT214(0) & SUB1614((undefined  [16])0xffffffffff000000 >> 0x10,0)
                                 ,CONCAT11(param_2,param_2)),0);
        uVar1 = uVar1 | uVar1 << 0x10;
        auVar5 = CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1)));
      }
      if (((uint)param_1 & 0xf) != 0) {
        uVar4 = 0x10 - ((uint)param_1 & 0xf);
        param_3 = param_3 - uVar4;
        uVar1 = uVar4 & 3;
        while (uVar1 != 0) {
          *(byte *)piVar3 = param_2;
          piVar3 = (int *)((int)piVar3 + 1);
          uVar1 = uVar1 - 1;
        }
        uVar4 = uVar4 >> 2;
        while (uVar4 != 0) {
          *piVar3 = SUB164(auVar5,0);
          piVar3 = piVar3 + 1;
          uVar4 = uVar4 - 1;
        }
      }
      uVar1 = param_3 >> 7;
      while (uVar1 != 0) {
                    // WARNING: Store size is inaccurate
        *(undefined *)piVar3 = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 4) = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 8) = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 0xc) = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 0x10) = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 0x14) = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 0x18) = auVar5;
                    // WARNING: Store size is inaccurate
        *(undefined *)(piVar3 + 0x1c) = auVar5;
        piVar3 = piVar3 + 0x20;
        uVar1 = uVar1 - 1;
      }
      if ((param_3 & 0x7f) != 0) {
        uVar1 = (param_3 & 0x7f) >> 4;
        while (uVar1 != 0) {
                    // WARNING: Store size is inaccurate
          *(undefined *)piVar3 = auVar5;
          piVar3 = piVar3 + 4;
          uVar1 = uVar1 - 1;
        }
        if ((param_3 & 0xf) != 0) {
          uVar1 = (param_3 & 0xf) >> 2;
          while (uVar1 != 0) {
            *piVar3 = SUB164(auVar5,0);
            piVar3 = piVar3 + 1;
            uVar1 = uVar1 - 1;
          }
          param_3 = param_3 & 3;
          while (param_3 != 0) {
            *(byte *)piVar3 = param_2;
            piVar3 = (int *)((int)piVar3 + 1);
            param_3 = param_3 - 1;
          }
        }
      }
      return param_1;
    }
    if (3 < param_3) {
      uVar2 = -(int)param_1 & 3;
      uVar4 = param_3;
      if (uVar2 != 0) {
        uVar4 = param_3 - uVar2;
        do {
          *(byte *)piVar3 = param_2;
          piVar3 = (int *)((int)piVar3 + 1);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar1 = uVar1 * 0x1010101;
      param_3 = uVar4 & 3;
      uVar4 = uVar4 >> 2;
      if (uVar4 != 0) {
        while (uVar4 != 0) {
          uVar4 = uVar4 - 1;
          *piVar3 = uVar1;
          piVar3 = piVar3 + 1;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
    }
    do {
      *(char *)piVar3 = (char)uVar1;
      piVar3 = (int *)((int)piVar3 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 - 1;
      *(byte *)piVar3 = param_2;
      piVar3 = (int *)((int)piVar3 + 1);
    }
  }
  return param_1;
}



// Library Function - Single Match
// Name: ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z
// Library: Visual Studio 2012 Release
// long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  code *pcVar3;
  long lVar4;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
    terminate();
    pcVar3 = (code *)swi(3);
    lVar4 = (*pcVar3)();
    return lVar4;
  }
  return 0;
}



_ptiddata __cdecl FUN_0040746f(int param_1,void *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  int iVar6;
  
  p_Var4 = __getptd_noexit();
  if (p_Var4 != (_ptiddata)0x0) {
    piVar1 = (int *)p_Var4->_pxcptacttab;
    piVar5 = piVar1;
    do {
      if (*piVar5 == param_1) break;
      piVar5 = piVar5 + 3;
    } while (piVar5 < piVar1 + 0x24);
    if ((piVar1 + 0x24 <= piVar5) || (*piVar5 != param_1)) {
      piVar5 = (int *)0x0;
    }
    if ((piVar5 == (int *)0x0) || (pcVar2 = (code *)piVar5[2], pcVar2 == (code *)0x0)) {
      p_Var4 = (_ptiddata)0x0;
    }
    else {
      if (pcVar2 == (code *)&DAT_00000005) {
        piVar5[2] = 0;
        p_Var4 = (_ptiddata)0x1;
      }
      else {
        if (pcVar2 == (code *)0x1) {
          p_Var4 = (_ptiddata)0xffffffff;
        }
        else {
          pvVar3 = p_Var4->_tpxcptinfoptrs;
          p_Var4->_tpxcptinfoptrs = param_2;
          if (piVar5[1] == 8) {
            iVar6 = 0x24;
            do {
              *(undefined4 *)(iVar6 + 8 + (int)p_Var4->_pxcptacttab) = 0;
              iVar6 = iVar6 + 0xc;
            } while (iVar6 < 0x90);
            iVar6 = p_Var4->_tfpecode;
            if (*piVar5 == -0x3fffff72) {
              p_Var4->_tfpecode = 0x83;
            }
            else {
              if (*piVar5 == -0x3fffff70) {
                p_Var4->_tfpecode = 0x81;
              }
              else {
                if (*piVar5 == -0x3fffff6f) {
                  p_Var4->_tfpecode = 0x84;
                }
                else {
                  if (*piVar5 == -0x3fffff6d) {
                    p_Var4->_tfpecode = 0x85;
                  }
                  else {
                    if (*piVar5 == -0x3fffff73) {
                      p_Var4->_tfpecode = 0x82;
                    }
                    else {
                      if (*piVar5 == -0x3fffff71) {
                        p_Var4->_tfpecode = 0x86;
                      }
                      else {
                        if (*piVar5 == -0x3fffff6e) {
                          p_Var4->_tfpecode = 0x8a;
                        }
                        else {
                          if (*piVar5 == -0x3ffffd4b) {
                            p_Var4->_tfpecode = 0x8d;
                          }
                          else {
                            if (*piVar5 == -0x3ffffd4c) {
                              p_Var4->_tfpecode = 0x8e;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            (*pcVar2)(8,p_Var4->_tfpecode);
            p_Var4->_tfpecode = iVar6;
          }
          else {
            piVar5[2] = 0;
            (*pcVar2)(piVar5[1]);
          }
          p_Var4->_tpxcptinfoptrs = pvVar3;
          p_Var4 = (_ptiddata)0xffffffff;
        }
      }
    }
  }
  return p_Var4;
}



void FUN_004076ea(void)

{
  FUN_004092ea(0xd);
  return;
}



void FUN_004076f6(void)

{
  FUN_004092ea(0xc);
  return;
}



// Library Function - Single Match
// Name: __getptd
// Library: Visual Studio 2012 Release

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



// Library Function - Single Match
// Name: __getptd_noexit
// Library: Visual Studio 2012 Release

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  DWORD DVar2;
  _ptiddata _Memory;
  
  dwErrCode = GetLastError();
  _Memory = (_ptiddata)FUN_00407dcf(DAT_00418540);
  if (_Memory == (_ptiddata)0x0) {
    _Memory = (_ptiddata)FUN_00408f5b(1,0x3bc);
    if (_Memory != (_ptiddata)0x0) {
      iVar1 = FUN_00407dee(DAT_00418540,_Memory);
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
        _Memory = (_ptiddata)0x0;
      }
      else {
        FUN_00407786((int)_Memory,0);
        DVar2 = GetCurrentThreadId();
        _Memory->_thandle = 0xffffffff;
        _Memory->_tid = DVar2;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

void __cdecl FUN_00407786(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = 0x411c00;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined2 *)(param_1 + 0xb8) = 0x43;
  *(undefined2 *)(param_1 + 0x1be) = 0x43;
  *(undefined4 *)(param_1 + 0x68) = 0x418750;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  __lock(0xd);
  LOCK();
  **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
  FUN_00407827();
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_00418bdc;
  }
  FUN_0040823a(*(int **)(param_1 + 0x6c));
  FUN_00407830();
  return;
}



void FUN_00407827(void)

{
  FUN_004092ea(0xd);
  return;
}



void FUN_00407830(void)

{
  FUN_004092ea(0xc);
  return;
}



undefined4 FUN_00407839(void)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  FUN_00406dd9();
  iVar1 = FUN_004092b1();
  if (iVar1 != 0) {
    DAT_00418540 = FUN_00407d92(&LAB_004075ca);
    if (DAT_00418540 != 0xffffffff) {
      pDVar2 = (DWORD *)FUN_00408f5b(1,0x3bc);
      if (pDVar2 != (DWORD *)0x0) {
        iVar1 = FUN_00407dee(DAT_00418540,pDVar2);
        if (iVar1 != 0) {
          FUN_00407786((int)pDVar2,0);
          DVar3 = GetCurrentThreadId();
          pDVar2[1] = 0xffffffff;
          *pDVar2 = DVar3;
          return 1;
        }
      }
      FUN_004078af();
      return 0;
    }
  }
  FUN_004078af();
  return 0;
}



void FUN_004078af(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION *pp_Var1;
  LPCRITICAL_SECTION *pp_Var2;
  
  if (DAT_00418540 != 0xffffffff) {
    FUN_00407db0(DAT_00418540);
    DAT_00418540 = 0xffffffff;
  }
  pp_Var1 = (LPCRITICAL_SECTION *)&DAT_00418cc8;
  pp_Var2 = (LPCRITICAL_SECTION *)&DAT_00418cc8;
  do {
    lpCriticalSection = *pp_Var2;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (pp_Var2[1] != (LPCRITICAL_SECTION)0x1)) {
      DeleteCriticalSection(lpCriticalSection);
      FID_conflict__free(lpCriticalSection);
      *pp_Var2 = (LPCRITICAL_SECTION)0x0;
    }
    pp_Var2 = pp_Var2 + 2;
  } while ((int)pp_Var2 < 0x418de8);
  do {
    if ((*pp_Var1 != (LPCRITICAL_SECTION)0x0) && (pp_Var1[1] == (LPCRITICAL_SECTION)0x1)) {
      DeleteCriticalSection(*pp_Var1);
    }
    pp_Var1 = pp_Var1 + 2;
  } while ((int)pp_Var1 < 0x418de8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004078cc(void)

{
  uint uVar1;
  uint uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  uint local_c;
  uint local_8;
  
  if (_DAT_00419ff0 == 0) {
    FUN_00408594();
  }
  DAT_00419a44 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_00419940,0x104);
  _DAT_004192ec = &DAT_00419940;
  if ((DAT_0041b008 == (byte *)0x0) || (pbVar4 = DAT_0041b008, *DAT_0041b008 == 0)) {
    pbVar4 = &DAT_00419940;
  }
  FUN_0040797f(pbVar4,(byte **)0x0,(byte *)0x0,(int *)&local_8,(int *)&local_c);
  uVar2 = local_8;
  if ((((local_8 < 0x3fffffff) && (local_c != 0xffffffff)) &&
      (uVar1 = local_c + local_8 * 4, local_c <= uVar1)) &&
     (ppbVar3 = (byte **)FUN_00408fa3(uVar1), ppbVar3 != (byte **)0x0)) {
    FUN_0040797f(pbVar4,ppbVar3,(byte *)(ppbVar3 + uVar2),(int *)&local_8,(int *)&local_c);
    DAT_004192d8 = local_8 - 1;
    DAT_004192dc = ppbVar3;
    return 0;
  }
  return 0xffffffff;
}



void __cdecl FUN_0040797f(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (byte **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == 0x22) {
      bVar2 = !bVar2;
      pbVar6 = param_1 + 1;
      bVar3 = 0x22;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar3 = *param_1;
      pbVar6 = param_1 + 1;
      iVar4 = FUN_0040aa6e((uint)bVar3);
      if (iVar4 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar6;
          param_3 = param_3 + 1;
        }
        pbVar6 = param_1 + 2;
      }
      if (bVar3 == 0) {
        pbVar6 = pbVar6 + -1;
        goto LAB_00407a10;
      }
    }
    param_1 = pbVar6;
  } while ((bVar2) || ((bVar3 != 0x20 && (bVar3 != 9))));
  if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
LAB_00407a10:
  bVar2 = false;
  while (pbVar7 = pbVar6, *pbVar6 != 0) {
    while ((*pbVar7 == 0x20 || (*pbVar7 == 9))) {
      pbVar7 = pbVar7 + 1;
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (byte **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar5 = 0;
      while (*pbVar7 == 0x5c) {
        pbVar7 = pbVar7 + 1;
        uVar5 = uVar5 + 1;
      }
      pbVar6 = pbVar7;
      if (*pbVar7 == 0x22) {
        if (((uVar5 & 1) == 0) && ((!bVar2 || (pbVar6 = pbVar7 + 1, *pbVar6 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar6 = pbVar7;
        }
        uVar5 = uVar5 >> 1;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar3 = *pbVar6;
      if ((bVar3 == 0) || ((!bVar2 && ((bVar3 == 0x20 || (bVar3 == 9)))))) break;
      if (bVar1) {
        iVar4 = FUN_0040aa6e((int)(char)bVar3);
        if (param_3 == (byte *)0x0) {
          if (iVar4 != 0) {
            pbVar6 = pbVar6 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (iVar4 != 0) {
            *param_3 = *pbVar6;
            param_3 = param_3 + 1;
            pbVar6 = pbVar6 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar6;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar7 = pbVar6 + 1;
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

undefined4 FUN_00407afb(void)

{
  uint _SizeInBytes;
  char cVar1;
  code *pcVar2;
  size_t sVar3;
  char *_Dst;
  errno_t eVar4;
  undefined4 uVar5;
  char *_Str;
  int iVar6;
  char **ppcVar7;
  
  if (_DAT_00419ff0 == 0) {
    FUN_00408594();
  }
  iVar6 = 0;
  _Str = DAT_004191c0;
  if (DAT_004191c0 != (char *)0x0) {
    while (*_Str != '\0') {
      if (*_Str != '=') {
        iVar6 = iVar6 + 1;
      }
      sVar3 = _strlen(_Str);
      _Str = _Str + sVar3 + 1;
    }
    DAT_004192e4 = (char **)FUN_00408f5b(iVar6 + 1,4);
    if (DAT_004192e4 != (char **)0x0) {
      cVar1 = *DAT_004191c0;
      ppcVar7 = DAT_004192e4;
      _Str = DAT_004191c0;
      do {
        if (cVar1 == '\0') {
          FID_conflict__free(DAT_004191c0);
          DAT_004191c0 = (char *)0x0;
          *ppcVar7 = (char *)0x0;
          _DAT_00419ff4 = 1;
          return 0;
        }
        sVar3 = _strlen(_Str);
        _SizeInBytes = sVar3 + 1;
        if (*_Str != '=') {
          _Dst = (char *)FUN_00408f5b(_SizeInBytes,1);
          *ppcVar7 = _Dst;
          if (_Dst == (char *)0x0) {
            FID_conflict__free(DAT_004192e4);
            DAT_004192e4 = (char **)0x0;
            return 0xffffffff;
          }
          eVar4 = _strcpy_s(_Dst,_SizeInBytes,_Str);
          if (eVar4 != 0) {
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
          ppcVar7 = ppcVar7 + 1;
        }
        _Str = _Str + _SizeInBytes;
        cVar1 = *_Str;
      } while( true );
    }
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00407bdc(undefined4 param_1)

{
  _DAT_00419308 = param_1;
  return;
}



// Library Function - Single Match
// Name: __set_error_mode
// Library: Visual Studio 2012 Release

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_00419a48;
  if (_Mode < 0) {
LAB_00407c14:
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00402c77();
    return -1;
  }
  if (_Mode < 3) {
    DAT_00419a48 = _Mode;
  }
  else {
    if (_Mode != 3) goto LAB_00407c14;
  }
  return iVar1;
}



// Library Function - Single Match
// Name: ___security_init_cookie
// Library: Visual Studio 2015 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint local_18;
  uint local_14;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_004183f0 == 0xbb40e64e) || ((DAT_004183f0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_10);
    local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
    DVar1 = GetCurrentThreadId();
    local_8 = local_8 ^ DVar1;
    DVar1 = GetCurrentProcessId();
    local_8 = local_8 ^ DVar1;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_18);
    DAT_004183f0 = local_14 ^ local_18 ^ local_8 ^ (uint)&local_8;
    if (DAT_004183f0 == 0xbb40e64e) {
      DAT_004183f0 = 0xbb40e64f;
    }
    else {
      if ((DAT_004183f0 & 0xffff0000) == 0) {
        DAT_004183f0 = DAT_004183f0 | (DAT_004183f0 | 0x4711) << 0x10;
      }
    }
    DAT_004183f4 = ~DAT_004183f0;
  }
  else {
    DAT_004183f4 = ~DAT_004183f0;
  }
  return;
}



void FUN_00407cc5(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)&DAT_004175b0;
  while (ppcVar1 < &DAT_004175b0) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
    ppcVar1 = ppcVar1 + 1;
  }
  return;
}



LPSTR FUN_00407d05(void)

{
  WCHAR WVar1;
  LPWCH lpWideCharStr;
  LPSTR lpMultiByteStr;
  size_t cbMultiByte;
  WCHAR *pWVar2;
  int cchWideChar;
  
  lpWideCharStr = GetEnvironmentStringsW();
  lpMultiByteStr = (LPSTR)0x0;
  if (lpWideCharStr != (LPWCH)0x0) {
    WVar1 = *lpWideCharStr;
    pWVar2 = lpWideCharStr;
    while (WVar1 != L'\0') {
      do {
        pWVar2 = pWVar2;
        pWVar2 = pWVar2 + 1;
      } while (*pWVar2 != L'\0');
      pWVar2 = pWVar2 + 2;
      WVar1 = *pWVar2;
    }
    cchWideChar = ((int)((int)pWVar2 - (int)lpWideCharStr) >> 1) + 1;
    cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
    if ((cbMultiByte == 0) ||
       (lpMultiByteStr = (LPSTR)FUN_00408fa3(cbMultiByte), lpMultiByteStr == (LPSTR)0x0)) {
      FreeEnvironmentStringsW(lpWideCharStr);
      lpMultiByteStr = (LPSTR)0x0;
    }
    else {
      cchWideChar = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
      if (cchWideChar == 0) {
        FID_conflict__free(lpMultiByteStr);
        lpMultiByteStr = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
    }
  }
  return lpMultiByteStr;
}



void __cdecl FUN_00407d92(undefined4 param_1)

{
  if ((code *)(DAT_00419f60 ^ DAT_004183f0) != (code *)0x0) {
    (*(code *)(DAT_00419f60 ^ DAT_004183f0))(param_1);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00407daa. Too many branches
                    // WARNING: Treating indirect jump as call
  TlsAlloc();
  return;
}



void __cdecl FUN_00407db0(DWORD param_1)

{
  if ((code *)(DAT_00419f64 ^ DAT_004183f0) != (code *)0x0) {
    (*(code *)(DAT_00419f64 ^ DAT_004183f0))();
    return;
  }
  TlsFree(param_1);
  return;
}



void __cdecl FUN_00407dcf(DWORD param_1)

{
  if ((code *)(DAT_00419f68 ^ DAT_004183f0) != (code *)0x0) {
    (*(code *)(DAT_00419f68 ^ DAT_004183f0))();
    return;
  }
  TlsGetValue(param_1);
  return;
}



void __cdecl FUN_00407dee(DWORD param_1,LPVOID param_2)

{
  if ((code *)(DAT_00419f6c ^ DAT_004183f0) != (code *)0x0) {
    (*(code *)(DAT_00419f6c ^ DAT_004183f0))();
    return;
  }
  TlsSetValue(param_1,param_2);
  return;
}



undefined4 __cdecl FUN_00407e10(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((code *)(DAT_00419f70 ^ DAT_004183f0) != (code *)0x0) {
    uVar1 = (*(code *)(DAT_00419f70 ^ DAT_004183f0))(param_1,param_2,param_3);
    return uVar1;
  }
  InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return 1;
}



uint FUN_00407e3e(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar1 = DAT_00418544;
  if (DAT_00418544 < 0) {
    local_8 = 0;
    iVar1 = 0;
    if (((code *)(DAT_00419fd4 ^ DAT_004183f0) != (code *)0x0) &&
       (iVar2 = (*(code *)(DAT_00419fd4 ^ DAT_004183f0))(&local_8,0), iVar2 == 0x7a)) {
      iVar1 = 1;
    }
  }
  DAT_00418544 = iVar1;
  return (uint)(0 < DAT_00418544);
}



void __cdecl FUN_0040810b(LPTOP_LEVEL_EXCEPTION_FILTER param_1)

{
  SetUnhandledExceptionFilter(param_1);
  return;
}



void __cdecl FUN_00408119(DWORD param_1)

{
  Sleep(param_1);
  return;
}



// Library Function - Single Match
// Name: ___crtTerminateProcess
// Library: Visual Studio 2012 Release

void __cdecl ___crtTerminateProcess(UINT uExitCode)

{
  HANDLE hProcess;
  
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// Library Function - Single Match
// Name: ___crtUnhandledException
// Library: Visual Studio 2012 Release

LONG __cdecl ___crtUnhandledException(EXCEPTION_POINTERS *exceptionInfo)

{
  LONG LVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar1 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)exceptionInfo);
  return LVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408152(void)

{
  _DAT_00419f4c = 0;
  return;
}



uint __cdecl FUN_0040815a(uint param_1,FILE *param_2)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((*(byte *)&param_2->_flag & 0x40) == 0) {
    uVar2 = __fileno(param_2);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &DAT_00418500;
    }
    else {
      puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &DAT_00418500;
      }
      else {
        puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_004081db;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00402c77();
  }
  else {
LAB_004081db:
    if ((param_1 != 0xffffffff) &&
       (((*(byte *)&param_2->_flag & 1) != 0 ||
        (((*(byte *)&param_2->_flag & 0x80) != 0 && ((*(byte *)&param_2->_flag & 2) == 0)))))) {
      if (param_2->_base == (char *)0x0) {
        __getbuf(param_2);
      }
      if (param_2->_ptr == param_2->_base) {
        if (param_2->_cnt != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      param_2->_ptr = param_2->_ptr + -1;
      pcVar1 = param_2->_ptr;
      if ((*(byte *)&param_2->_flag & 0x40) == 0) {
        *pcVar1 = (char)param_1;
      }
      else {
        if (*pcVar1 != (char)param_1) {
          param_2->_ptr = pcVar1 + 1;
          return 0xffffffff;
        }
      }
      param_2->_cnt = param_2->_cnt + 1;
      param_2->_flag = param_2->_flag & 0xffffffefU | 1;
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}



void __cdecl FUN_0040823a(int *param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  
  LOCK();
  *param_1 = *param_1 + 1;
  piVar1 = (int *)param_1[0x1e];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)param_1[0x22];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
  }
  ppiVar3 = (int **)(param_1 + 7);
  iVar2 = 6;
  do {
    if ((ppiVar3[-2] != (int *)&DAT_00418a74) && (piVar1 = *ppiVar3, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
    }
    if ((ppiVar3[-3] != (int *)0x0) && (piVar1 = ppiVar3[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
    }
    ppiVar3 = ppiVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  *(int *)(param_1[0x27] + 0xb0) = *(int *)(param_1[0x27] + 0xb0) + 1;
  return;
}



void __cdecl FUN_004082cf(void *param_1)

{
  int *_Memory;
  undefined **ppuVar1;
  void *_Memory_00;
  void **ppvVar2;
  int **ppiVar3;
  
  _Memory_00 = param_1;
  if ((((*(undefined ***)((int)param_1 + 0x84) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0x84) != &PTR_DAT_00418e10)) &&
      (*(int **)((int)param_1 + 0x78) != (int *)0x0)) && (**(int **)((int)param_1 + 0x78) == 0)) {
    _Memory = *(int **)((int)param_1 + 0x80);
    if ((_Memory != (int *)0x0) && (*_Memory == 0)) {
      FID_conflict__free(_Memory);
      FID_conflict____acrt_locale_free_monetary(*(int *)((int)param_1 + 0x84));
    }
    _Memory = *(int **)((int)param_1 + 0x7c);
    if ((_Memory != (int *)0x0) && (*_Memory == 0)) {
      FID_conflict__free(_Memory);
      FID_conflict____free_lconv_num(*(void ***)((int)param_1 + 0x84));
    }
    FID_conflict__free(*(void **)((int)param_1 + 0x78));
    FID_conflict__free(*(void **)((int)param_1 + 0x84));
  }
  if ((*(int **)((int)param_1 + 0x88) != (int *)0x0) && (**(int **)((int)param_1 + 0x88) == 0)) {
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x8c) + -0xfe));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x94) + -0x80));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x98) + -0x80));
    FID_conflict__free(*(void **)((int)param_1 + 0x88));
  }
  ppuVar1 = *(undefined ***)((int)param_1 + 0x9c);
  if ((ppuVar1 != &PTR_DAT_00418a78) && (ppuVar1[0x2c] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar1);
    FID_conflict__free(*(void **)((int)param_1 + 0x9c));
  }
  ppvVar2 = (void **)((int)param_1 + 0xa0);
  param_1 = (void *)0x6;
  ppiVar3 = (int **)((int)_Memory_00 + 0x1c);
  do {
    if (((ppiVar3[-2] != (int *)&DAT_00418a74) && (_Memory = *ppiVar3, _Memory != (int *)0x0)) &&
       (*_Memory == 0)) {
      FID_conflict__free(_Memory);
      FID_conflict__free(*ppvVar2);
    }
    if (((ppiVar3[-3] != (int *)0x0) && (_Memory = ppiVar3[-1], _Memory != (int *)0x0)) &&
       (*_Memory == 0)) {
      FID_conflict__free(_Memory);
    }
    ppvVar2 = ppvVar2 + 1;
    ppiVar3 = ppiVar3 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  FID_conflict__free(_Memory_00);
  return;
}



int * __cdecl FUN_00408429(int *param_1)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    LOCK();
    *param_1 = *param_1 + -1;
    piVar1 = (int *)param_1[0x1e];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = (int *)param_1[0x20];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = (int *)param_1[0x1f];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = (int *)param_1[0x22];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
    }
    ppiVar2 = (int **)(param_1 + 7);
    iVar3 = 6;
    do {
      if ((ppiVar2[-2] != (int *)&DAT_00418a74) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
      }
      if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
      }
      ppiVar2 = ppiVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    LOCK();
    *(int *)(param_1[0x27] + 0xb0) = *(int *)(param_1[0x27] + 0xb0) + -1;
  }
  return param_1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

pthreadlocinfo FUN_004084c9(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00418c98) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    ptVar2 = (pthreadlocinfo)
             __updatetlocinfoEx_nolock((int **)&p_Var1->ptlocinfo,(int *)PTR_DAT_00418bdc);
    FUN_00408540();
  }
  else {
    p_Var1 = __getptd();
    ptVar2 = p_Var1->ptlocinfo;
  }
  if (ptVar2 == (pthreadlocinfo)0x0) {
    __amsg_exit(0x20);
  }
  return ptVar2;
}



void FUN_00408540(void)

{
  FUN_004092ea(0xc);
  return;
}



// Library Function - Single Match
// Name: __updatetlocinfoEx_nolock
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int * __cdecl __updatetlocinfoEx_nolock(int **param_1,int *param_2)

{
  int *piVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == (int **)0x0)) {
    param_2 = (int *)0x0;
  }
  else {
    piVar1 = *param_1;
    if (piVar1 != param_2) {
      *param_1 = param_2;
      FUN_0040823a(param_2);
      if (((piVar1 != (int *)0x0) && (FUN_00408429(piVar1), *piVar1 == 0)) &&
         (piVar1 != (int *)&DAT_00418be0)) {
        FUN_004082cf(piVar1);
      }
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00408594(void)

{
  if (_DAT_00419ff0 == 0) {
    FUN_004088f1(0xfffffffd);
    _DAT_00419ff0 = 1;
  }
  return 0;
}



// Library Function - Single Match
// Name: ?CPtoLocaleName@@YAPB_WH@Z
// Library: Visual Studio 2012 Release
// wchar_t const * __cdecl CPtoLocaleName(int)

wchar_t * __cdecl CPtoLocaleName(int param_1)

{
  if (param_1 == 0x3a4) {
    return (wchar_t *)L"ja-JP";
  }
  if (param_1 == 0x3a8) {
    return (wchar_t *)L"zh-CN";
  }
  if (param_1 == 0x3b5) {
    return (wchar_t *)L"ko-KR";
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)L"zh-TW";
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

UINT __cdecl FUN_004085ec(UINT param_1)

{
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,(pthreadlocinfo *)0x0);
  _DAT_00419a64 = 0;
  if (param_1 == 0xfffffffe) {
    _DAT_00419a64 = 1;
    param_1 = GetOEMCP();
  }
  else {
    if (param_1 == 0xfffffffd) {
      _DAT_00419a64 = 1;
      param_1 = GetACP();
    }
    else {
      if (param_1 == 0xfffffffc) {
        _DAT_00419a64 = 1;
        param_1 = *(UINT *)(local_14[0] + 4);
      }
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return param_1;
}



void __cdecl FUN_0040865a(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  FUN_00407390(piVar3,0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *(undefined *)piVar3 =
         *(undefined *)((int)(undefined4 *)((int)&DAT_00418750 - param_1) + (int)piVar3);
    piVar3 = (int *)((int)piVar3 + 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined *)(param_1 + 0x119);
  iVar1 = 0x100;
  do {
    *puVar2 = puVar2[(int)(undefined4 *)((int)&DAT_00418750 - param_1)];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// Library Function - Single Match
// Name: ?setSBUpLow@@YAXPAU__crt_multibyte_data@@@Z
// Library: Visual Studio 2015 Release
// void __cdecl setSBUpLow(struct __crt_multibyte_data *)

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  __crt_multibyte_data *p_Var6;
  _cpinfo local_51c;
  ushort local_508 [256];
  WCHAR local_308 [128];
  WCHAR local_208 [128];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),(LPCPINFO)&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      p_Var6 = param_1 + 0x119 + uVar4;
      if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) + 0x20 < (__crt_multibyte_data *)0x1a) {
        *(byte *)(param_1 + uVar4 + 0x19) = (byte)param_1[uVar4 + 0x19] | 0x10;
        _Var2 = (__crt_multibyte_data)((char)uVar4 + ' ');
LAB_00408823:
        *p_Var6 = _Var2;
      }
      else {
        if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) < (__crt_multibyte_data *)0x1a) {
          *(byte *)(param_1 + uVar4 + 0x19) = (byte)param_1[uVar4 + 0x19] | 0x20;
          _Var2 = (__crt_multibyte_data)((char)uVar4 + -0x20);
          goto LAB_00408823;
        }
        *p_Var6 = (__crt_multibyte_data)0x0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pbVar5 = local_51c.LeadByte;
    local_108[0] = ' ';
    while (local_51c.LeadByte[0] != 0) {
      bVar1 = pbVar5[1];
      uVar4 = (uint)local_51c.LeadByte[0];
      while ((uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_108[uVar4] = ' ';
        uVar4 = uVar4 + 1;
      }
      pbVar5 = pbVar5 + 2;
      local_51c.LeadByte[0] = *pbVar5;
    }
    FUN_0040b31c((pthreadlocinfo *)0x0,1,local_108,0x100,local_508,*(UINT *)(param_1 + 4),0);
    FUN_0040b1c0((pthreadlocinfo *)0x0,*(int *)(param_1 + 0x21c),0x100,local_108,0x100,local_208,
                 0x100,*(UINT *)(param_1 + 4),0);
    FUN_0040b1c0((pthreadlocinfo *)0x0,*(int *)(param_1 + 0x21c),0x200,local_108,0x100,local_308,
                 0x100,*(UINT *)(param_1 + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          *(byte *)(param_1 + uVar4 + 0x19) = (byte)param_1[uVar4 + 0x19] | 0x20;
          _Var2 = *(__crt_multibyte_data *)((int)local_308 + uVar4);
          goto LAB_004087ca;
        }
        param_1[uVar4 + 0x119] = (__crt_multibyte_data)0x0;
      }
      else {
        *(byte *)(param_1 + uVar4 + 0x19) = (byte)param_1[uVar4 + 0x19] | 0x10;
        _Var2 = *(__crt_multibyte_data *)((int)local_208 + uVar4);
LAB_004087ca:
        param_1[uVar4 + 0x119] = _Var2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  FUN_00404f47();
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

pthreadmbcinfo FUN_0040884b(void)

{
  int iVar1;
  _ptiddata p_Var2;
  pthreadmbcinfo _Memory;
  
  p_Var2 = __getptd();
  if (((p_Var2->_ownlocale & DAT_00418c98) == 0) || (p_Var2->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    _Memory = p_Var2->ptmbcinfo;
    if (_Memory != (pthreadmbcinfo)PTR_DAT_00418974) {
      if (_Memory != (pthreadmbcinfo)0x0) {
        LOCK();
        iVar1 = _Memory->refcount + -1;
        _Memory->refcount = iVar1;
        if ((iVar1 == 0) && (_Memory != (pthreadmbcinfo)&DAT_00418750)) {
          FID_conflict__free(_Memory);
        }
      }
      *(undefined **)&p_Var2->ptmbcinfo = PTR_DAT_00418974;
      _Memory = (pthreadmbcinfo)PTR_DAT_00418974;
      LOCK();
      *(int *)PTR_DAT_00418974 = *(int *)PTR_DAT_00418974 + 1;
    }
    FUN_004088e8();
  }
  else {
    _Memory = p_Var2->ptmbcinfo;
  }
  if (_Memory == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return _Memory;
}



void FUN_004088e8(void)

{
  FUN_004092ea(0xd);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_004088f1(UINT param_1)

{
  _ptiddata p_Var1;
  UINT UVar2;
  pthreadmbcinfo _Memory;
  int *piVar3;
  int iVar4;
  pthreadmbcinfo ptVar5;
  int iVar6;
  int iVar7;
  pthreadmbcinfo ptVar8;
  
  iVar7 = -1;
  p_Var1 = __getptd();
  FUN_0040884b();
  _Memory = p_Var1->ptmbcinfo;
  UVar2 = FUN_004085ec(param_1);
  if (UVar2 == _Memory->mbcodepage) {
    iVar7 = 0;
  }
  else {
    _Memory = (pthreadmbcinfo)FUN_00408fa3(0x220);
    if (_Memory != (pthreadmbcinfo)0x0) {
      iVar7 = 0x88;
      ptVar5 = p_Var1->ptmbcinfo;
      ptVar8 = _Memory;
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        ptVar8->refcount = ptVar5->refcount;
        ptVar5 = (pthreadmbcinfo)&ptVar5->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      iVar6 = 0;
      _Memory->refcount = 0;
      iVar7 = FUN_00408a99(UVar2,(__crt_multibyte_data *)_Memory);
      if (iVar7 == 0) {
        LOCK();
        iVar4 = p_Var1->ptmbcinfo->refcount + -1;
        p_Var1->ptmbcinfo->refcount = iVar4;
        if ((iVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00418750)) {
          FID_conflict__free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = _Memory;
        LOCK();
        _Memory->refcount = _Memory->refcount + 1;
        if (((*(byte *)&p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00418c98 & 1) == 0)) {
          __lock(0xd);
          _DAT_00419a4c = _Memory->mbcodepage;
          _DAT_00419a50 = _Memory->ismbcodepage;
          _DAT_00419a60 = _Memory->mblocalename;
          iVar4 = 0;
          while (iVar4 < 5) {
            (&DAT_00419a54)[iVar4] = _Memory->mbulinfo[iVar4];
            iVar4 = iVar4 + 1;
          }
          iVar4 = 0;
          while (iVar4 < 0x101) {
            (&DAT_00418548)[iVar4] = _Memory->mbctype[iVar4];
            iVar4 = iVar4 + 1;
          }
          while (iVar6 < 0x100) {
            (&DAT_00418650)[iVar6] = _Memory->mbcasemap[iVar6];
            iVar6 = iVar6 + 1;
          }
          LOCK();
          iVar6 = *(int *)PTR_DAT_00418974;
          *(int *)PTR_DAT_00418974 = iVar6 + -1;
          if ((iVar6 + -1 == 0) && ((undefined4 *)PTR_DAT_00418974 != &DAT_00418750)) {
            FID_conflict__free(PTR_DAT_00418974);
          }
          LOCK();
          PTR_DAT_00418974 = (undefined *)_Memory;
          _Memory->refcount = _Memory->refcount + 1;
          FUN_00408a63();
        }
      }
      else {
        if (iVar7 == -1) {
          if (_Memory != (pthreadmbcinfo)&DAT_00418750) {
            FID_conflict__free(_Memory);
          }
          piVar3 = __errno();
          *piVar3 = 0x16;
        }
      }
    }
  }
  return iVar7;
}



void FUN_00408a63(void)

{
  FUN_004092ea(0xd);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00408a99(UINT param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  UINT CodePage;
  uint uVar3;
  BOOL BVar4;
  byte *pbVar5;
  __crt_multibyte_data *p_Var6;
  wchar_t *pwVar7;
  int iVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  CodePage = FUN_004085ec(param_1);
  if (CodePage != 0) {
    uVar12 = 0;
    uVar3 = 0;
    local_20 = 0;
LAB_00408ad5:
    if (*(UINT *)((int)&DAT_00418978 + uVar3) != CodePage) goto code_r0x00408ae1;
    FUN_00407390((int *)(param_2 + 0x18),0,0x101);
    pbVar5 = (byte *)(local_20 * 0x30 + 0x418988);
    do {
      bVar1 = *pbVar5;
      pbVar9 = pbVar5;
      while ((bVar1 != 0 && (bVar1 = pbVar9[1], bVar1 != 0))) {
        uVar3 = (uint)*pbVar9;
        while ((uVar3 <= bVar1 && (uVar3 < 0x100))) {
          *(byte *)(param_2 + uVar3 + 0x19) = (byte)param_2[uVar3 + 0x19] | (&DAT_00418970)[uVar12];
          uVar3 = uVar3 + 1;
          bVar1 = pbVar9[1];
        }
        pbVar9 = pbVar9 + 2;
        bVar1 = *pbVar9;
      }
      uVar12 = uVar12 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar12 < 4);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar7 = CPtoLocaleName(CodePage);
    *(wchar_t **)(param_2 + 0x21c) = pwVar7;
    puVar10 = (undefined2 *)(param_2 + 0xc);
    puVar11 = (undefined2 *)(local_20 * 0x30 + 0x41897c);
    iVar8 = 6;
    do {
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    goto LAB_00408c6a;
  }
  FUN_0040865a((int)param_2);
LAB_00408c74:
  FUN_00404f47();
  return;
code_r0x00408ae1:
  local_20 = local_20 + 1;
  uVar3 = uVar3 + 0x30;
  if (0xef < uVar3) goto code_r0x00408aef;
  goto LAB_00408ad5;
code_r0x00408aef:
  if (((CodePage != 65000) && (CodePage != 0xfde9)) &&
     (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 != 0)) {
    BVar4 = GetCPInfo(CodePage,(LPCPINFO)&local_1c);
    if (BVar4 == 0) {
      if (_DAT_00419a64 != 0) {
        FUN_0040865a((int)param_2);
      }
    }
    else {
      FUN_00407390((int *)(param_2 + 0x18),0,0x101);
      *(UINT *)(param_2 + 4) = CodePage;
      *(undefined4 *)(param_2 + 0x21c) = 0;
      if (local_1c.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        pbVar5 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (bVar1 = pbVar5[1], bVar1 != 0))) {
          uVar3 = (uint)*pbVar5;
          while (uVar3 <= bVar1) {
            *(byte *)(param_2 + uVar3 + 0x19) = (byte)param_2[uVar3 + 0x19] | 4;
            uVar3 = uVar3 + 1;
          }
          pbVar5 = pbVar5 + 2;
          local_1c.LeadByte[0] = *pbVar5;
        }
        p_Var6 = param_2 + 0x1a;
        iVar8 = 0xfe;
        do {
          *(byte *)p_Var6 = (byte)*p_Var6 | 8;
          p_Var6 = p_Var6 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        pwVar7 = CPtoLocaleName(*(int *)(param_2 + 4));
        *(wchar_t **)(param_2 + 0x21c) = pwVar7;
        *(undefined4 *)(param_2 + 8) = 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
LAB_00408c6a:
      setSBUpLow(param_2);
    }
  }
  goto LAB_00408c74;
}



uint __cdecl FUN_00408c84(int param_1,pthreadlocinfo *param_2)

{
  uint uVar1;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  if (local_14[0]->mb_cur_max < 2) {
    uVar1 = (uint)local_14[0]->pctype[param_1] & 4;
  }
  else {
    uVar1 = FUN_0040b35c(param_1,4,local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



uint __cdecl FUN_00408cd6(int param_1,pthreadlocinfo *param_2)

{
  uint uVar1;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  if (local_14[0]->mb_cur_max < 2) {
    uVar1 = (uint)local_14[0]->pctype[param_1] & 8;
  }
  else {
    uVar1 = FUN_0040b35c(param_1,8,local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



uint __cdecl FUN_00408d28(int param_1,pthreadlocinfo *param_2)

{
  uint uVar1;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  if (local_14[0]->mb_cur_max < 2) {
    uVar1 = (uint)local_14[0]->pctype[param_1] & 0x80;
  }
  else {
    uVar1 = FUN_0040b35c(param_1,0x80,local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _isdigit
// Library: Visual Studio 2012 Release

int __cdecl _isdigit(int _C)

{
  uint uVar1;
  
  if (_DAT_00419f34 == 0) {
    return (uint)*(ushort *)(PTR_DAT_00418c70 + _C * 2) & 4;
  }
  uVar1 = FUN_00408c84(_C,(pthreadlocinfo *)0x0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _isspace
// Library: Visual Studio 2012 Release

int __cdecl _isspace(int _C)

{
  uint uVar1;
  
  if (_DAT_00419f34 == 0) {
    return (uint)*(ushort *)(PTR_DAT_00418c70 + _C * 2) & 8;
  }
  uVar1 = FUN_00408cd6(_C,(pthreadlocinfo *)0x0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _isxdigit
// Library: Visual Studio 2012 Release

int __cdecl _isxdigit(int _C)

{
  uint uVar1;
  
  if (_DAT_00419f34 == 0) {
    return (uint)*(ushort *)(PTR_DAT_00418c70 + _C * 2) & 0x80;
  }
  uVar1 = FUN_00408d28(_C,(pthreadlocinfo *)0x0);
  return uVar1;
}



uint __cdecl FUN_00408e03(uint param_1,pthreadlocinfo *param_2)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 0x90) + (param_1 & 0xff) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return (uint)uVar1 & 0x8000;
}



void __cdecl FUN_00408e3d(uint param_1)

{
  FUN_00408e03(param_1,(pthreadlocinfo *)0x0);
  return;
}



int __cdecl FUN_00408e4e(ushort *param_1,byte *param_2,uint param_3,pthreadlocinfo *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if (*param_2 == 0) {
    if (param_1 == (ushort *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  FUN_00402d4b(local_14,param_4);
  if (local_14[0]->locale_name[2] == (wchar_t *)0x0) {
    if (param_1 != (ushort *)0x0) {
      *param_1 = (ushort)*param_2;
    }
    iVar4 = 1;
    goto LAB_00408f2e;
  }
  uVar1 = FUN_00408e03((uint)*param_2,local_14);
  if (uVar1 == 0) {
    iVar4 = 1;
    iVar2 = MultiByteToWideChar(local_14[0]->lc_codepage,9,(LPCSTR)param_2,1,(LPWSTR)param_1,
                                (uint)(param_1 != (ushort *)0x0));
    if (iVar2 != 0) goto LAB_00408f2e;
LAB_00408f20:
    piVar3 = __errno();
    iVar4 = -1;
    *piVar3 = 0x2a;
  }
  else {
    if (local_14[0]->mb_cur_max < 2) {
LAB_00408eed:
      uVar1 = local_14[0]->mb_cur_max;
LAB_00408ef0:
      if ((param_3 < uVar1) || (param_2[1] == 0)) goto LAB_00408f20;
    }
    else {
      uVar1 = local_14[0]->mb_cur_max;
      if ((int)param_3 < local_14[0]->mb_cur_max) goto LAB_00408ef0;
      iVar4 = MultiByteToWideChar(local_14[0]->lc_codepage,9,(LPCSTR)param_2,local_14[0]->mb_cur_max
                                  ,(LPWSTR)param_1,(uint)(param_1 != (ushort *)0x0));
      if (iVar4 == 0) goto LAB_00408eed;
    }
    iVar4 = local_14[0]->mb_cur_max;
  }
LAB_00408f2e:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    return iVar4;
  }
  return iVar4;
}



void __cdecl FUN_00408f43(ushort *param_1,byte *param_2,uint param_3)

{
  FUN_00408e4e(param_1,param_2,param_3,(pthreadlocinfo *)0x0);
  return;
}



LPVOID __cdecl FUN_00408f5b(uint param_1,uint param_2)

{
  LPVOID pvVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  while( true ) {
    pvVar1 = __calloc_impl(param_1,param_2,(int *)0x0);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_00419a68 == 0) break;
    FUN_00408119(DVar2);
    DVar2 = DVar2 + 1000;
    if (DAT_00419a68 < DVar2) {
      DVar2 = 0xffffffff;
    }
    if (DVar2 == 0xffffffff) {
      return (LPVOID)0x0;
    }
  }
  return (LPVOID)0x0;
}



void * __cdecl FUN_00408fa3(size_t param_1)

{
  uint uVar1;
  void *pvVar2;
  DWORD DVar3;
  
  DVar3 = 0;
  while( true ) {
    uVar1 = DAT_00419a68;
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    if (uVar1 == 0) break;
    FUN_00408119(DVar3);
    DVar3 = DVar3 + 1000;
    if (DAT_00419a68 < DVar3) {
      DVar3 = 0xffffffff;
    }
    if (DVar3 == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



void * __cdecl FUN_00408fea(void *param_1,size_t param_2)

{
  void *pvVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  do {
    pvVar1 = _realloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (param_2 == 0) {
      return (void *)0x0;
    }
    if (DAT_00419a68 == 0) {
      return (void *)0x0;
    }
    FUN_00408119(DVar2);
    DVar2 = DVar2 + 1000;
    if (DAT_00419a68 < DVar2) {
      DVar2 = 0xffffffff;
    }
  } while (DVar2 != 0xffffffff);
  return (void *)0x0;
}



void * __cdecl FUN_00409034(void *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  do {
    pvVar1 = FUN_0040b50a(param_1,param_2,param_3);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (param_3 == 0) {
      return (void *)0x0;
    }
    if (DAT_00419a68 == 0) {
      return (void *)0x0;
    }
    FUN_00408119(DVar2);
    DVar2 = DVar2 + 1000;
    if (DAT_00419a68 < DVar2) {
      DVar2 = 0xffffffff;
    }
  } while (DVar2 != 0xffffffff);
  return (void *)0x0;
}



// Library Function - Single Match
// Name: __allmul
// Library: Visual Studio

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



void FUN_004090c4(void)

{
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = EncodePointer(*(PVOID *)((int)&PTR_LAB_00418c9c + uVar2));
    *(PVOID *)((int)&PTR_LAB_00418c9c + uVar2) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

int FUN_004090e3(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  __lock(1);
  iVar2 = 3;
  while (iVar2 < DAT_0041b004) {
    _File = *(FILE **)(DAT_0041b000 + iVar2 * 4);
    if (_File != (FILE *)0x0) {
      if ((*(byte *)&_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          iVar3 = iVar3 + 1;
        }
      }
      if (0x13 < iVar2) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0041b000 + iVar2 * 4) + 0x20));
        FID_conflict__free(*(void **)(DAT_0041b000 + iVar2 * 4));
        *(undefined4 *)(DAT_0041b000 + iVar2 * 4) = 0;
      }
    }
    iVar2 = iVar2 + 1;
  }
  FUN_00409177();
  return iVar3;
}



void FUN_00409177(void)

{
  FUN_004092ea(1);
  return;
}



// Library Function - Single Match
// Name: __lock
// Library: Visual Studio 2012 Release

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_00418cc8)[_File * 2] == 0) {
    iVar1 = FUN_00409208(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00418cc8)[_File * 2]);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00409208(int param_1)

{
  LPCRITICAL_SECTION _Memory;
  int *piVar1;
  
  if (DAT_0041993c == 0) {
    __FF_MSGBANNER();
    FUN_0040701b(0x1e);
    ___crtExitProcess(0xff);
  }
  if ((&DAT_00418cc8)[param_1 * 2] == 0) {
    _Memory = (LPCRITICAL_SECTION)FUN_00408fa3(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      return 0;
    }
    __lock(10);
    if ((&DAT_00418cc8)[param_1 * 2] == 0) {
      FUN_00407e10(_Memory,4000,0);
      *(LPCRITICAL_SECTION *)(&DAT_00418cc8 + param_1 * 2) = _Memory;
    }
    else {
      FID_conflict__free(_Memory);
    }
    FUN_004092a8();
  }
  return 1;
}



void FUN_004092a8(void)

{
  FUN_004092ea(10);
  return;
}



undefined4 FUN_004092b1(void)

{
  LPCRITICAL_SECTION *pp_Var1;
  LPCRITICAL_SECTION p_Var2;
  
  pp_Var1 = (LPCRITICAL_SECTION *)&DAT_00418cc8;
  p_Var2 = (LPCRITICAL_SECTION)&DAT_00419a70;
  do {
    if (pp_Var1[1] == (LPCRITICAL_SECTION)0x1) {
      *pp_Var1 = p_Var2;
      p_Var2 = p_Var2 + 1;
      FUN_00407e10(*pp_Var1,4000,0);
    }
    pp_Var1 = pp_Var1 + 2;
  } while ((int)pp_Var1 < 0x418de8);
  return 1;
}



void __cdecl FUN_004092ea(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_00418cc8)[param_1 * 2]);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

int __cdecl
FUN_004092ff(LPCSTR param_1,uint param_2,int param_3,uint param_4,ushort **param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 local_24;
  int local_20;
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_004178b8;
  uStack12 = 0x40930b;
  local_20 = 0;
  local_24 = 0;
  if (((param_5 == (ushort **)0x0) || (*param_5 = (ushort *)0xffffffff, param_1 == (LPCSTR)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    piVar1 = __errno();
    iVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  else {
    local_8 = (undefined *)0x0;
    iVar2 = FUN_004093c8(&local_24,param_5,param_1,param_2,param_3,(byte)param_4);
    local_8 = (undefined *)0xfffffffe;
    local_20 = iVar2;
    FUN_0040939c();
    if (iVar2 != 0) {
      *param_5 = (ushort *)0xffffffff;
    }
  }
  return iVar2;
}



void FUN_0040939c(void)

{
  byte *pbVar1;
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    if (unaff_EDI != 0) {
      pbVar1 = (byte *)((&DAT_004191d0)[(int)*unaff_ESI >> 5] + 4 + (*unaff_ESI & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    FUN_00409d6d(*unaff_ESI);
  }
  return;
}



int __cdecl
FUN_004093c8(undefined4 *param_1,ushort **param_2,LPCSTR param_3,uint param_4,int param_5,
            byte param_6)

{
  int iVar1;
  LPWSTR local_8;
  
  local_8 = (LPCWSTR)0x0;
  iVar1 = FUN_00406c0b(param_3,&local_8);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_0040b67e(param_1,param_2,local_8,param_4,param_5,param_6);
    FID_conflict__free(local_8);
  }
  return iVar1;
}



void __cdecl FUN_00409416(ushort **param_1,LPCSTR param_2,uint param_3,int param_4,uint param_5)

{
  FUN_004092ff(param_2,param_3,param_4,param_5,param_1,1);
  return;
}



void __cdecl FUN_00409434(byte *param_1,byte *param_2,size_t param_3)

{
  FUN_0040944c(param_1,param_2,param_3,(pthreadlocinfo *)0x0);
  return;
}



int __cdecl FUN_0040944c(byte *param_1,byte *param_2,size_t param_3,pthreadlocinfo *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  size_t sVar7;
  byte *pbVar8;
  undefined local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00402d4b(local_18,param_4);
    if (*(int *)(local_14 + 8) == 0) {
      iVar3 = _strncmp((char *)param_1,(char *)param_2,param_3);
    }
    else {
      if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
        do {
          bVar2 = *param_1;
          sVar7 = param_3 - 1;
          local_8 = param_1 + 1;
          iVar3 = 0;
          uVar5 = 0;
          uVar6 = (ushort)bVar2;
          if ((*(byte *)((uint)bVar2 + 0x19 + local_14) & 4) == 0) {
LAB_00409501:
            uVar5 = uVar6;
            bVar2 = *param_2;
            uVar6 = (ushort)bVar2;
            pbVar8 = param_2 + 1;
            if ((*(byte *)((uint)bVar2 + 0x19 + local_14) & 4) != 0) {
              if (sVar7 != 0) {
                sVar7 = param_3 - 2;
                if (*pbVar8 != 0) {
                  uVar6 = CONCAT11(bVar2,*pbVar8);
                  pbVar8 = param_2 + 2;
                  goto LAB_00409530;
                }
              }
              uVar6 = 0;
            }
          }
          else {
            if (sVar7 != 0) {
              bVar1 = *local_8;
              uVar6 = uVar5;
              if (bVar1 != 0) {
                local_8 = param_1 + 2;
                uVar6 = CONCAT11(bVar2,bVar1);
              }
              goto LAB_00409501;
            }
            if ((*(byte *)((uint)*param_2 + 0x19 + local_14) & 4) != 0) goto LAB_0040954d;
            uVar6 = (ushort)*param_2;
            pbVar8 = param_2;
          }
LAB_00409530:
          iVar3 = 0;
          if (uVar6 != uVar5) {
            iVar3 = (-(uint)(uVar6 < uVar5) & 2) - 1;
            goto LAB_0040954d;
          }
          if ((uVar5 == 0) || (param_1 = local_8, param_3 = sVar7, param_2 = pbVar8, sVar7 == 0))
          goto LAB_0040954d;
        } while( true );
      }
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_00402c77();
      iVar3 = 0x7fffffff;
    }
LAB_0040954d:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return iVar3;
}



void __cdecl FUN_00409563(byte *param_1,byte *param_2,size_t param_3)

{
  FUN_0040957b(param_1,param_2,param_3,(pthreadlocinfo *)0x0);
  return;
}



int __cdecl FUN_0040957b(byte *param_1,byte *param_2,size_t param_3,pthreadlocinfo *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  size_t sVar7;
  undefined local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  byte *local_c;
  ushort local_8;
  
  FUN_00402d4b(local_1c,param_4);
  iVar4 = 0;
  if (param_3 != 0) {
    if (*(int *)(local_18 + 8) == 0) {
      iVar4 = __strnicmp((char *)param_1,(char *)param_2,param_3);
    }
    else {
      local_c = param_1;
      if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
        do {
          iVar4 = 0;
          bVar1 = *local_c;
          uVar6 = (uint)bVar1;
          sVar7 = param_3 - 1;
          pbVar2 = local_c + 1;
          if ((*(byte *)(uVar6 + 0x19 + local_18) & 4) == 0) {
            local_8 = (ushort)bVar1;
            local_c = pbVar2;
            if ((*(byte *)(uVar6 + 0x19 + local_18) & 0x10) != 0) {
              local_8 = (ushort)*(byte *)(uVar6 + 0x119 + local_18);
            }
LAB_00409680:
            bVar1 = *param_2;
            uVar6 = (uint)bVar1;
            pbVar5 = param_2 + 1;
            if ((*(byte *)(uVar6 + 0x19 + local_18) & 4) == 0) {
              param_3._0_2_ = (ushort)bVar1;
              if ((*(byte *)(uVar6 + 0x19 + local_18) & 0x10) != 0) {
                bVar1 = *(byte *)(uVar6 + 0x119 + local_18);
                goto LAB_004096fc;
              }
            }
            else {
              if (sVar7 != 0) {
                sVar7 = param_3 - 2;
                if (*pbVar5 != 0) {
                  param_3._0_2_ = CONCAT11(bVar1,*pbVar5);
                  pbVar5 = param_2 + 2;
                  if (((ushort)param_3 < *(ushort *)(local_18 + 0xc)) ||
                     (*(ushort *)(local_18 + 0xe) <= (ushort)param_3 &&
                      (ushort)param_3 != *(ushort *)(local_18 + 0xe))) {
                    if ((*(ushort *)(local_18 + 0x12) <= (ushort)param_3) &&
                       ((ushort)param_3 < *(ushort *)(local_18 + 0x14) ||
                        (ushort)param_3 == *(ushort *)(local_18 + 0x14))) {
                      param_3._0_2_ = (ushort)param_3 + *(short *)(local_18 + 0x16);
                    }
                  }
                  else {
                    param_3._0_2_ = (ushort)param_3 + *(short *)(local_18 + 0x10);
                  }
                  goto LAB_00409703;
                }
              }
              param_3._0_2_ = 0;
            }
          }
          else {
            if (sVar7 != 0) {
              if (*pbVar2 == 0) {
                local_8 = 0;
                local_c = pbVar2;
              }
              else {
                local_8 = CONCAT11(bVar1,*pbVar2);
                local_c = local_c + 2;
                if ((local_8 < *(ushort *)(local_18 + 0xc)) ||
                   (*(ushort *)(local_18 + 0xe) <= local_8 && local_8 != *(ushort *)(local_18 + 0xe)
                   )) {
                  if ((*(ushort *)(local_18 + 0x12) <= local_8) &&
                     (local_8 < *(ushort *)(local_18 + 0x14) ||
                      local_8 == *(ushort *)(local_18 + 0x14))) {
                    local_8 = local_8 + *(short *)(local_18 + 0x16);
                  }
                }
                else {
                  local_8 = local_8 + *(short *)(local_18 + 0x10);
                }
              }
              goto LAB_00409680;
            }
            if ((*(byte *)((uint)*param_2 + 0x19 + local_18) & 4) != 0) goto LAB_00409721;
            bVar1 = *param_2;
            local_8 = 0;
            pbVar5 = param_2;
            local_c = pbVar2;
LAB_004096fc:
            param_3._0_2_ = (ushort)bVar1;
          }
LAB_00409703:
          iVar4 = 0;
          if ((ushort)param_3 != local_8) {
            iVar4 = (-(uint)((ushort)param_3 < local_8) & 2) - 1;
            goto LAB_00409721;
          }
          if ((local_8 == 0) || (param_2 = pbVar5, param_3 = sVar7, sVar7 == 0)) goto LAB_00409721;
        } while( true );
      }
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_00402c77();
      iVar4 = 0x7fffffff;
    }
  }
LAB_00409721:
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return iVar4;
}



// Library Function - Single Match
// Name: __FindPESection
// Library: Visual Studio 2015 Release

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER p_Var1;
  uint uVar2;
  
  uVar2 = 0;
  pImageBase = pImageBase + *(int *)(pImageBase + 0x3c);
  p_Var1 = (PIMAGE_SECTION_HEADER)(pImageBase + (uint)*(ushort *)(pImageBase + 0x14) + 0x18);
  if (*(ushort *)(pImageBase + 6) != 0) {
    do {
      if ((p_Var1->VirtualAddress <= rva) && (rva < p_Var1->Misc + p_Var1->VirtualAddress)) {
        return p_Var1;
      }
      uVar2 = uVar2 + 1;
      p_Var1 = p_Var1 + 1;
    } while (uVar2 < *(ushort *)(pImageBase + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
// Name: __IsNonwritableInCurrentImage
// Library: Visual Studio 2015 Release

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  BOOL BVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  int **in_FS_OFFSET;
  uint uStack44;
  uint *local_1c;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = FUN_004045f0;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_004183f0 ^ 0x4178d8;
  uStack44 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_1c = &uStack44;
  *(int ***)in_FS_OFFSET = &local_14;
  local_8 = 0;
  BVar2 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar2 != 0) {
    p_Var3 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar1 = p_Var3->Characteristics;
      *in_FS_OFFSET = local_14;
      return ~(uVar1 >> 0x1f) & 1;
    }
  }
  *in_FS_OFFSET = local_14;
  return 0;
}



// Library Function - Single Match
// Name: __ValidateImageBase
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)(*(short *)(pImageBase + *(int *)(pImageBase + 0x3c) + 6) == 0x10b);
  }
  return uVar1;
}



// Library Function - Single Match
// Name: __global_unwind2
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4098a8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
// Name: __local_unwind2
// Library: Visual Studio

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_20;
  undefined *puStack28;
  undefined4 local_18;
  int iStack20;
  
  iStack20 = param_1;
  puStack28 = &LAB_004098b0;
  local_20 = *in_FS_OFFSET;
  uVar2 = DAT_004183f0 ^ (uint)&local_20;
  *(undefined4 **)in_FS_OFFSET = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      FUN_004099a5(0x101);
      FUN_004099c4(uVar2);
    }
  }
  *in_FS_OFFSET = local_20;
  return;
}



undefined4 FUN_004099a5(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00418df4 = in_EAX;
  DAT_00418df8 = param_1;
  DAT_00418dfc = unaff_EBP;
  return in_EAX;
}



void FUN_004099c4(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_004099c7(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)param_1 >> 5];
  if (*(int *)(iVar1 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_00407e10((LPCRITICAL_SECTION)(iVar1 + 0xc),4000,0);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_00409a4c();
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_004191d0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x40));
  return 1;
}



void FUN_00409a4c(void)

{
  FUN_004092ea(10);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

uint FUN_00409a55(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  iVar1 = FUN_00409208(0xb);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __lock(0xb);
    iVar1 = 0;
    while (iVar1 < 0x40) {
      puVar2 = (undefined4 *)(&DAT_004191d0)[iVar1];
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_00408f5b(0x20,0x40);
        if (puVar2 != (undefined4 *)0x0) {
          *(undefined4 **)(&DAT_004191d0 + iVar1) = puVar2;
          DAT_00419ff8 = DAT_00419ff8 + 0x20;
          while (puVar2 < (undefined4 *)((&DAT_004191d0)[iVar1] + 0x800)) {
            *(undefined2 *)(puVar2 + 1) = 0xa00;
            *puVar2 = 0xffffffff;
            puVar2[2] = 0;
            puVar2 = puVar2 + 0x10;
          }
          uVar3 = iVar1 << 5;
          *(undefined *)((&DAT_004191d0)[(int)uVar3 >> 5] + 4) = 1;
          iVar1 = FUN_004099c7(uVar3);
          if (iVar1 == 0) {
            uVar3 = 0xffffffff;
          }
        }
        break;
      }
      while (puVar2 < (undefined4 *)((&DAT_004191d0)[iVar1] + 0x800)) {
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          if (puVar2[2] == 0) {
            __lock(10);
            if (puVar2[2] == 0) {
              FUN_00407e10((LPCRITICAL_SECTION)(puVar2 + 3),4000,0);
              puVar2[2] = puVar2[2] + 1;
            }
            FUN_00409b2d();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
          if ((*(byte *)(puVar2 + 1) & 1) == 0) {
            *(undefined *)(puVar2 + 1) = 1;
            *puVar2 = 0xffffffff;
            uVar3 = ((int)((int)puVar2 - (&DAT_004191d0)[iVar1]) >> 6) + iVar1 * 0x20;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        }
        puVar2 = puVar2 + 0x10;
      }
      if (uVar3 != 0xffffffff) break;
      iVar1 = iVar1 + 1;
    }
    FUN_00409bf5();
  }
  return uVar3;
}



void FUN_00409b2d(void)

{
  FUN_004092ea(10);
  return;
}



void FUN_00409bf5(void)

{
  FUN_004092ea(0xb);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00409bfe(uint param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
    iVar3 = (param_1 & 0x1f) * 0x40;
    if (((*(byte *)(iVar3 + 4 + (&DAT_004191d0)[(int)param_1 >> 5]) & 1) != 0) &&
       (*(int *)(iVar3 + (&DAT_004191d0)[(int)param_1 >> 5]) != -1)) {
      if (_DAT_00419308 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else {
          if (param_1 == 1) {
            nStdHandle = 0xfffffff5;
          }
          else {
            if (param_1 != 2) goto LAB_00409c5b;
            nStdHandle = 0xfffffff4;
          }
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00409c5b:
      *(undefined4 *)(iVar3 + (&DAT_004191d0)[(int)param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return 0xffffffff;
}



undefined4 __cdecl FUN_00409c84(uint param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
      iVar3 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
        return *(undefined4 *)((&DAT_004191d0)[(int)param_1 >> 5] + iVar3);
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00402c77();
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00409ceb(uint param_1,HANDLE param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
    iVar3 = (param_1 & 0x1f) * 0x40;
    if (*(int *)(iVar3 + (&DAT_004191d0)[(int)param_1 >> 5]) == -1) {
      if (_DAT_00419308 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else {
          if (param_1 == 1) {
            nStdHandle = 0xfffffff5;
          }
          else {
            if (param_1 != 2) goto LAB_00409d44;
            nStdHandle = 0xfffffff4;
          }
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_00409d44:
      *(HANDLE *)(iVar3 + (&DAT_004191d0)[(int)param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return 0xffffffff;
}



void __cdecl FUN_00409d6d(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_004191d0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x40 + 0xc));
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

DWORD __cdecl FUN_00409d93(uint param_1)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD DVar5;
  
  DVar5 = 0;
  if (param_1 == 0xfffffffe) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
      iVar4 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)(iVar4 + 4 + (&DAT_004191d0)[(int)param_1 >> 5]) & 1) != 0) {
        FUN_004099c7(param_1);
        if ((*(byte *)(iVar4 + 4 + (&DAT_004191d0)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)FUN_00409c84(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            DVar5 = GetLastError();
          }
          if (DVar5 == 0) goto LAB_00409e45;
          puVar3 = ___doserrno();
          *puVar3 = DVar5;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        DVar5 = 0xffffffff;
LAB_00409e45:
        FUN_00409e5b();
        return DVar5;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00402c77();
  }
  return 0xffffffff;
}



void FUN_00409e5b(void)

{
  uint unaff_EDI;
  
  FUN_00409d6d(unaff_EDI);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: ___raise_securityfailure
// Library: Visual Studio 2012 Release

void __cdecl ___raise_securityfailure(EXCEPTION_POINTERS *param_1)

{
  _DAT_00419ee4 = IsDebuggerPresent();
  FUN_00408152();
  ___crtUnhandledException(param_1);
  if (_DAT_00419ee4 == 0) {
    FUN_00408152();
  }
  ___crtTerminateProcess(0xc0000409);
  return;
}



uint __cdecl FUN_00409fb4(uint param_1)

{
  int *piVar1;
  
  if (param_1 == 0xfffffffe) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
      return (int)*(char *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40) & 0x40
      ;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00402c77();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: __getbuf
// Library: Visual Studio 2012 Release

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_004191cc = _DAT_004191cc + 1;
  pcVar1 = (char *)FUN_00408fa3(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    *(int **)&_File->_base = &_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



// WARNING: Removing unreachable block (ram,0x0040a07e)
// WARNING: Removing unreachable block (ram,0x0040a13a)
// WARNING: Removing unreachable block (ram,0x0040a0ce)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0040a04e(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  _DAT_00419ee8 = 0;
  DAT_00418e00 = DAT_00418e00 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00418e00;
  if (BVar4 != 0) {
    _DAT_00419ee8 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00419eec = DAT_00419eec | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00419eec = DAT_00419eec | 2;
      }
    }
    uVar5 = DAT_00418e00 | 2;
    if ((uVar6 & 0x100000) != 0) {
      _DAT_00419ee8 = 2;
      uVar5 = DAT_00418e00 | 6;
      if (((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) {
        _DAT_00419ee8 = 3;
        uVar5 = DAT_00418e00 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          _DAT_00419ee8 = 5;
          uVar5 = DAT_00418e00 | 0x2e;
        }
      }
    }
  }
  DAT_00418e00 = uVar5;
  return 0;
}



// Library Function - Single Match
// Name: __putwch_nolock
// Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (DAT_00418e70 == (HANDLE)0xfffffffe) {
    ___dcrt_lowio_initialize_console_output();
  }
  if ((DAT_00418e70 == (HANDLE)0xffffffff) ||
     (BVar1 = WriteConsoleW(DAT_00418e70,&_WCh,1,&local_8,(LPVOID)0x0), BVar1 == 0)) {
    _WCh = 0xffff;
  }
  return (wint_t)_WCh;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

PVOID __cdecl FUN_0040a239(PVOID param_1)

{
  PVOID pvVar1;
  
  FUN_00406e69();
  pvVar1 = FUN_0040a27d(param_1);
  FUN_0040a277();
  return pvVar1;
}



void FUN_0040a277(void)

{
  FUN_00406e72();
  return;
}



PVOID __cdecl FUN_0040a27d(PVOID param_1)

{
  PVOID *_Memory;
  PVOID *ppvVar1;
  PVOID *ppvVar2;
  PVOID Ptr;
  PVOID *ppvVar3;
  
  _Memory = (PVOID *)DecodePointer(DAT_00419fec);
  ppvVar2 = (PVOID *)DecodePointer(DAT_00419fe8);
  if ((ppvVar2 < _Memory) ||
     (ppvVar3 = (PVOID *)((int)ppvVar2 - (int)_Memory), ppvVar3 + 1 < &DAT_00000004)) {
    return (PVOID)0x0;
  }
  ppvVar1 = (PVOID *)FID_conflict__msize_base(_Memory);
  if (ppvVar1 < ppvVar3 + 1) {
    ppvVar2 = (PVOID *)0x800;
    if (ppvVar1 < (PVOID *)0x800) {
      ppvVar2 = ppvVar1;
    }
    if (((PVOID *)((int)ppvVar2 + (int)ppvVar1) < ppvVar1) ||
       (Ptr = FUN_00408fea(_Memory,(size_t)(PVOID *)((int)ppvVar2 + (int)ppvVar1)),
       Ptr == (void *)0x0)) {
      if (ppvVar1 + 4 < ppvVar1) {
        return (PVOID)0x0;
      }
      Ptr = FUN_00408fea(_Memory,(size_t)(ppvVar1 + 4));
      if (Ptr == (void *)0x0) {
        return (PVOID)0x0;
      }
    }
    ppvVar2 = (PVOID *)((int)Ptr + ((int)ppvVar3 >> 2) * 4);
    DAT_00419fec = EncodePointer(Ptr);
  }
  Ptr = EncodePointer(param_1);
  *ppvVar2 = Ptr;
  DAT_00419fe8 = EncodePointer(ppvVar2 + 1);
  return param_1;
}



int __cdecl FUN_0040a335(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_0040a239(param_1);
  return (uint)(pvVar1 != (PVOID)0x0) - 1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
// Name: ?terminate@@YAXXZ
// Library: Visual Studio 2012 Release
// void __cdecl terminate(void)

void __cdecl terminate(void)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  if ((code *)p_Var2->_terminate != (code *)0x0) {
    (*(code *)p_Var2->_terminate)();
  }
  _abort();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040a37e(void)

{
  _DAT_00419ef0 = EncodePointer(terminate);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040a38f(undefined4 param_1)

{
  _DAT_00419ef4 = param_1;
  return;
}



void FUN_0040a39c(void)

{
  DecodePointer(DAT_00419f00);
  return;
}



void __cdecl FUN_0040a3a9(undefined4 param_1)

{
  DAT_00419ef8 = param_1;
  DAT_00419efc = param_1;
  DAT_00419f00 = param_1;
  DAT_00419f04 = param_1;
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_0040a3c5(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  PVOID Ptr;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  _ptiddata p_Var7;
  int local_34;
  void *local_30;
  code **local_20;
  
  local_30 = (void *)0x0;
  local_34 = 0;
  bVar1 = false;
  p_Var7 = (_ptiddata)0x0;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) {
        local_20 = (code **)&DAT_00419ef8;
        Ptr = DAT_00419ef8;
        goto LAB_0040a484;
      }
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_0040a45c;
        if (param_1 != 8) goto LAB_0040a44a;
      }
    }
    p_Var7 = __getptd_noexit();
    if (p_Var7 == (_ptiddata)0x0) {
      return 0xffffffff;
    }
    uVar2 = FUN_0040a580(param_1,(uint)p_Var7->_pxcptacttab);
    local_20 = (code **)(uVar2 + 8);
    pcVar4 = *local_20;
  }
  else {
    if (param_1 == 0xf) {
      local_20 = (code **)&DAT_00419f04;
      Ptr = DAT_00419f04;
    }
    else {
      if (param_1 == 0x15) {
        local_20 = (code **)&DAT_00419efc;
        Ptr = DAT_00419efc;
      }
      else {
        if (param_1 != 0x16) {
LAB_0040a44a:
          piVar3 = __errno();
          *piVar3 = 0x16;
          FUN_00402c77();
          return 0xffffffff;
        }
LAB_0040a45c:
        local_20 = (code **)&DAT_00419f00;
        Ptr = DAT_00419f00;
      }
    }
LAB_0040a484:
    bVar1 = true;
    pcVar4 = (code *)DecodePointer(Ptr);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_30 = p_Var7->_tpxcptinfoptrs;
    p_Var7->_tpxcptinfoptrs = (void *)0x0;
    if (param_1 == 8) {
      local_34 = p_Var7->_tfpecode;
      p_Var7->_tfpecode = 0x8c;
      goto LAB_0040a4e3;
    }
  }
  else {
LAB_0040a4e3:
    if (param_1 == 8) {
      iVar6 = 3;
      while (iVar6 < 0xc) {
        *(undefined4 *)((int)p_Var7->_pxcptacttab + iVar6 * 0xc + 8) = 0;
        iVar6 = iVar6 + 1;
      }
      goto LAB_0040a522;
    }
  }
  pcVar5 = (code *)EncodePointer((PVOID)0x0);
  *local_20 = pcVar5;
LAB_0040a522:
  FUN_0040a546();
  if (param_1 == 8) {
    (*pcVar4)(8,p_Var7->_tfpecode);
  }
  else {
    (*pcVar4)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  p_Var7->_tpxcptinfoptrs = local_30;
  if (param_1 == 8) {
    p_Var7->_tfpecode = local_34;
  }
  return 0;
}



void FUN_0040a546(void)

{
  int unaff_EBX;
  
  if (unaff_EBX != 0) {
    FUN_004092ea(0);
  }
  return;
}



uint __cdecl FUN_0040a580(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + 0x90);
  if ((param_2 + 0x90 <= uVar1) || (*(int *)(uVar1 + 4) != param_1)) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040a5ba(undefined4 param_1)

{
  _DAT_00419f0c = param_1;
  return;
}



// Library Function - Single Match
// Name: _wcscat_s
// Library: Visual Studio 2012 Release

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iStack16;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        pwVar3 = (wchar_t *)((int)pwVar3 - (int)_Src);
        do {
          wVar1 = *_Src;
          *(wchar_t *)((int)pwVar3 + (int)_Src) = wVar1;
          _Src = _Src + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        piVar2 = __errno();
        iStack16 = 0x22;
        goto LAB_0040a5ed;
      }
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  iStack16 = 0x16;
LAB_0040a5ed:
  *piVar2 = iStack16;
  FUN_00402c77();
  return iStack16;
}



// Library Function - Single Match
// Name: _wcscpy_s
// Library: Visual Studio 2012 Release

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar3 = (wchar_t *)((int)_Dst - (int)_Src);
      do {
        wVar1 = *_Src;
        *(wchar_t *)((int)pwVar3 + (int)_Src) = wVar1;
        _Src = _Src + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = __errno();
      iVar4 = 0x22;
      goto LAB_0040a658;
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  iVar4 = 0x16;
LAB_0040a658:
  *piVar2 = iVar4;
  FUN_00402c77();
  return iVar4;
}



// Library Function - Single Match
// Name: _wcslen
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release

size_t __cdecl _wcslen(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((int)((int)pwVar2 - (int)_Str) >> 1) - 1;
}



int __cdecl FUN_0040a6a8(short *param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_0040a6c7:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != (short *)0x0) {
          iVar4 = param_2;
          if (param_4 == -1) {
            psVar3 = (short *)((int)param_1 - (int)param_3);
            do {
              sVar1 = *param_3;
              *(short *)((int)psVar3 + (int)param_3) = sVar1;
              param_3 = param_3 + 1;
              if (sVar1 == 0) break;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          else {
            psVar3 = param_1;
            do {
              sVar1 = *(short *)((int)((int)param_3 - (int)param_1) + (int)psVar3);
              *psVar3 = sVar1;
              psVar3 = psVar3 + 1;
              if ((sVar1 == 0) || (iVar4 = iVar4 + -1, iVar4 == 0)) break;
              param_4 = param_4 + -1;
            } while (param_4 != 0);
            if (param_4 == 0) {
              *psVar3 = 0;
            }
          }
          if (iVar4 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          piVar2 = __errno();
          iVar4 = 0x22;
          goto LAB_0040a6ec;
        }
        *param_1 = 0;
      }
    }
  }
  else {
    if (param_1 != (short *)0x0) goto LAB_0040a6c7;
  }
  piVar2 = __errno();
  iVar4 = 0x16;
LAB_0040a6ec:
  *piVar2 = iVar4;
  FUN_00402c77();
  return iVar4;
}



void __cdecl FUN_0040a766(LPCWSTR param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  DWORD DVar1;
  FARPROC Ptr;
  BOOL BVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  undefined local_28 [4];
  undefined4 local_24;
  LPCWSTR local_20;
  code *local_1c;
  code *local_18;
  undefined local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  iVar5 = 0;
  local_24 = param_2;
  pcVar6 = (code *)EncodePointer((PVOID)0x0);
  local_1c = pcVar6;
  local_18 = (code *)FUN_00407e3e();
  if (DAT_00419f18 == (PVOID)0x0) {
    hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0x800);
    if (((hModule == (HMODULE)0x0) &&
        ((DVar1 = GetLastError(), DVar1 != 0x57 ||
         (hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0), hModule == (HMODULE)0x0)))) ||
       (Ptr = GetProcAddress(hModule,"MessageBoxW"), Ptr == (FARPROC)0x0)) goto LAB_0040a93b;
    DAT_00419f18 = EncodePointer(Ptr);
    Ptr = GetProcAddress(hModule,"GetActiveWindow");
    DAT_00419f1c = (code *)EncodePointer(Ptr);
    Ptr = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_00419f20 = (code *)EncodePointer(Ptr);
    Ptr = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_00419f28 = (code *)EncodePointer(Ptr);
    pcVar6 = local_1c;
    if (DAT_00419f28 != (code *)0x0) {
      Ptr = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_00419f24 = (code *)EncodePointer(Ptr);
      pcVar6 = local_1c;
    }
  }
  BVar2 = IsDebuggerPresent();
  if (BVar2 == 0) {
    if (local_18 != (code *)0x0) {
      DecodePointer(DAT_00419f18);
      goto LAB_0040a93b;
    }
  }
  else {
    if (local_20 != (LPCWSTR)0x0) {
      OutputDebugStringW(local_20);
    }
    if (local_18 != (code *)0x0) goto LAB_0040a93b;
  }
  if ((DAT_00419f24 == pcVar6) || (DAT_00419f28 == pcVar6)) {
LAB_0040a8f1:
    if ((((DAT_00419f1c != pcVar6) &&
         (pcVar4 = (code *)DecodePointer(DAT_00419f1c), pcVar4 != (code *)0x0)) &&
        (iVar5 = (*pcVar4)(), iVar5 != 0)) &&
       ((DAT_00419f20 != pcVar6 &&
        (pcVar6 = (code *)DecodePointer(DAT_00419f20), pcVar6 != (code *)0x0)))) {
      iVar5 = (*pcVar6)(iVar5);
    }
  }
  else {
    local_18 = (code *)DecodePointer(DAT_00419f24);
    local_1c = (code *)DecodePointer(DAT_00419f28);
    if (((local_18 == (code *)0x0) || (local_1c == (code *)0x0)) ||
       (((iVar3 = (*local_18)(), iVar3 != 0 &&
         (iVar3 = (*local_1c)(iVar3,1,local_14,0xc,local_28), iVar3 != 0)) && ((local_c & 1) != 0)))
       ) goto LAB_0040a8f1;
    param_3 = param_3 | 0x200000;
  }
  pcVar6 = (code *)DecodePointer(DAT_00419f18);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(iVar5,local_20,local_24,param_3);
  }
LAB_0040a93b:
  FUN_00404f47();
  return;
}



undefined4 __cdecl FUN_0040aa14(pthreadlocinfo *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  FUN_00402d4b(&local_14,param_1);
  if ((*(byte *)(local_10 + 0x19 + (param_2 & 0xff)) & param_4) == 0) {
    uVar1 = 0;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(ushort *)(*(int *)(local_14 + 0x90) + (param_2 & 0xff) * 2) & param_3;
    }
    if (param_3 == 0) goto LAB_0040aa5a;
  }
  uVar1 = 1;
LAB_0040aa5a:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



void __cdecl FUN_0040aa6e(uint param_1)

{
  FUN_0040aa14((pthreadlocinfo *)0x0,param_1,0,4);
  return;
}



// Library Function - Single Match
// Name: _strcpy_s
// Library: Visual Studio 2012 Release

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      iVar3 = -(int)_Src;
      do {
        cVar1 = *_Src;
        (_Dst + iVar3)[(int)_Src] = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      iVar3 = 0x22;
      goto LAB_0040aaa6;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  iVar3 = 0x16;
LAB_0040aaa6:
  *piVar2 = iVar3;
  FUN_00402c77();
  return iVar3;
}



// Library Function - Multiple Matches With Different Base Names
// Name: ___acrt_locale_free_monetary, ___free_lconv_mon
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __cdecl FID_conflict____acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_00418e1c) {
      FID_conflict__free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_00418e20) {
      FID_conflict__free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_00418e24) {
      FID_conflict__free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_00418e28) {
      FID_conflict__free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_00418e2c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_00418e30) {
      FID_conflict__free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_00418e34) {
      FID_conflict__free(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_00418e48) {
      FID_conflict__free(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_00418e4c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_00418e50) {
      FID_conflict__free(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_00418e54) {
      FID_conflict__free(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_00418e58) {
      FID_conflict__free(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_00418e5c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}



// Library Function - Multiple Matches With Different Base Names
// Name: ___acrt_locale_free_numeric, ___free_lconv_num
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __cdecl FID_conflict____free_lconv_num(void **param_1)

{
  if (param_1 != (void **)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_00418e10) {
      FID_conflict__free(*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_00418e14) {
      FID_conflict__free(param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_00418e18) {
      FID_conflict__free(param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_00418e40) {
      FID_conflict__free(param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_00418e44) {
      FID_conflict__free(param_1[0xd]);
    }
  }
  return;
}



// Library Function - Single Match
// Name: ___free_lc_time
// Library: Visual Studio 2012 Release

void __cdecl ___free_lc_time(void **param_1)

{
  if (param_1 != (void **)0x0) {
    FID_conflict__free(param_1[1]);
    FID_conflict__free(param_1[2]);
    FID_conflict__free(param_1[3]);
    FID_conflict__free(param_1[4]);
    FID_conflict__free(param_1[5]);
    FID_conflict__free(param_1[6]);
    FID_conflict__free(*param_1);
    FID_conflict__free(param_1[8]);
    FID_conflict__free(param_1[9]);
    FID_conflict__free(param_1[10]);
    FID_conflict__free(param_1[0xb]);
    FID_conflict__free(param_1[0xc]);
    FID_conflict__free(param_1[0xd]);
    FID_conflict__free(param_1[7]);
    FID_conflict__free(param_1[0xe]);
    FID_conflict__free(param_1[0xf]);
    FID_conflict__free(param_1[0x10]);
    FID_conflict__free(param_1[0x11]);
    FID_conflict__free(param_1[0x12]);
    FID_conflict__free(param_1[0x13]);
    FID_conflict__free(param_1[0x14]);
    FID_conflict__free(param_1[0x15]);
    FID_conflict__free(param_1[0x16]);
    FID_conflict__free(param_1[0x17]);
    FID_conflict__free(param_1[0x18]);
    FID_conflict__free(param_1[0x19]);
    FID_conflict__free(param_1[0x1a]);
    FID_conflict__free(param_1[0x1b]);
    FID_conflict__free(param_1[0x1c]);
    FID_conflict__free(param_1[0x1d]);
    FID_conflict__free(param_1[0x1e]);
    FID_conflict__free(param_1[0x1f]);
    FID_conflict__free(param_1[0x20]);
    FID_conflict__free(param_1[0x21]);
    FID_conflict__free(param_1[0x22]);
    FID_conflict__free(param_1[0x23]);
    FID_conflict__free(param_1[0x24]);
    FID_conflict__free(param_1[0x25]);
    FID_conflict__free(param_1[0x26]);
    FID_conflict__free(param_1[0x27]);
    FID_conflict__free(param_1[0x28]);
    FID_conflict__free(param_1[0x29]);
    FID_conflict__free(param_1[0x2a]);
    FID_conflict__free(param_1[0x2e]);
    FID_conflict__free(param_1[0x2f]);
    FID_conflict__free(param_1[0x30]);
    FID_conflict__free(param_1[0x31]);
    FID_conflict__free(param_1[0x32]);
    FID_conflict__free(param_1[0x33]);
    FID_conflict__free(param_1[0x2d]);
    FID_conflict__free(param_1[0x35]);
    FID_conflict__free(param_1[0x36]);
    FID_conflict__free(param_1[0x37]);
    FID_conflict__free(param_1[0x38]);
    FID_conflict__free(param_1[0x39]);
    FID_conflict__free(param_1[0x3a]);
    FID_conflict__free(param_1[0x34]);
    FID_conflict__free(param_1[0x3b]);
    FID_conflict__free(param_1[0x3c]);
    FID_conflict__free(param_1[0x3d]);
    FID_conflict__free(param_1[0x3e]);
    FID_conflict__free(param_1[0x3f]);
    FID_conflict__free(param_1[0x40]);
    FID_conflict__free(param_1[0x41]);
    FID_conflict__free(param_1[0x42]);
    FID_conflict__free(param_1[0x43]);
    FID_conflict__free(param_1[0x44]);
    FID_conflict__free(param_1[0x45]);
    FID_conflict__free(param_1[0x46]);
    FID_conflict__free(param_1[0x47]);
    FID_conflict__free(param_1[0x48]);
    FID_conflict__free(param_1[0x49]);
    FID_conflict__free(param_1[0x4a]);
    FID_conflict__free(param_1[0x4b]);
    FID_conflict__free(param_1[0x4c]);
    FID_conflict__free(param_1[0x4d]);
    FID_conflict__free(param_1[0x4e]);
    FID_conflict__free(param_1[0x4f]);
    FID_conflict__free(param_1[0x50]);
    FID_conflict__free(param_1[0x51]);
    FID_conflict__free(param_1[0x52]);
    FID_conflict__free(param_1[0x53]);
    FID_conflict__free(param_1[0x54]);
    FID_conflict__free(param_1[0x55]);
    FID_conflict__free(param_1[0x56]);
    FID_conflict__free(param_1[0x57]);
    FID_conflict__free(param_1[0x58]);
  }
  return;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __cdecl
FUN_0040afbc(int *param_1,int param_2,uint param_3,LPCSTR param_4,int param_5,LPWSTR param_6,
            int param_7,UINT param_8,int param_9)

{
  uint _Size;
  char *pcVar1;
  int iVar2;
  uint cchWideChar;
  int cbMultiByte;
  undefined4 *lpWideCharStr;
  undefined4 *lpWideCharStr_00;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  pcVar1 = param_4;
  cbMultiByte = param_5;
  if (0 < param_5) {
    do {
      cbMultiByte = cbMultiByte + -1;
      if (*pcVar1 == '\0') goto LAB_0040afe8;
      pcVar1 = pcVar1 + 1;
    } while (cbMultiByte != 0);
    cbMultiByte = -1;
LAB_0040afe8:
    iVar2 = (param_5 - cbMultiByte) + -1;
    cbMultiByte = param_5 - cbMultiByte;
    if (param_5 <= iVar2) {
      cbMultiByte = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 4);
  }
  local_c = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,cbMultiByte,(LPWSTR)0x0
                                ,0);
  if (local_c == 0) goto LAB_0040b1ac;
  if ((((int)local_c < 1) || (0xffffffe0 / local_c < 2)) || (local_c * 2 + 8 <= local_c * 2)) {
    lpWideCharStr = (undefined4 *)0x0;
  }
  else {
    _Size = local_c * 2 + 8;
    if (_Size < 0x401) {
      lpWideCharStr_00 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (undefined4 *)&stack0xffffffe8;
      if ((undefined *)register0x00000010 != (undefined *)0x18) {
LAB_0040b089:
        lpWideCharStr = lpWideCharStr_00 + 2;
      }
    }
    else {
      lpWideCharStr = (undefined4 *)_malloc(_Size);
      if (lpWideCharStr != (undefined4 *)0x0) {
        *lpWideCharStr = 0xdddd;
        lpWideCharStr_00 = lpWideCharStr;
        goto LAB_0040b089;
      }
    }
  }
  if (lpWideCharStr == (undefined4 *)0x0) goto LAB_0040b1ac;
  cbMultiByte = MultiByteToWideChar(param_8,1,param_4,cbMultiByte,(LPWSTR)lpWideCharStr,local_c);
  _Size = local_c;
  if ((cbMultiByte != 0) &&
     (cchWideChar = FUN_0040c096(param_2,param_3,(LPCWSTR)lpWideCharStr,local_c,(LPWSTR)0x0,0),
     cchWideChar != 0)) {
    if ((param_3 & 0x400) == 0) {
      if ((((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) ||
         (cchWideChar * 2 + 8 <= cchWideChar * 2)) {
        lpWideCharStr_00 = (undefined4 *)0x0;
LAB_0040b15e:
        if (lpWideCharStr_00 != (undefined4 *)0x0) {
          cbMultiByte = FUN_0040c096(param_2,param_3,(LPCWSTR)lpWideCharStr,local_c,
                                     (LPWSTR)lpWideCharStr_00,cchWideChar);
          if (cbMultiByte != 0) {
            if (param_7 == 0) {
              param_7 = 0;
              param_6 = (LPWSTR)0x0;
            }
            WideCharToMultiByte(param_8,0,(LPCWSTR)lpWideCharStr_00,cchWideChar,(LPSTR)param_6,
                                param_7,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          FUN_0040b206((int)lpWideCharStr_00);
        }
      }
      else {
        _Size = cchWideChar * 2 + 8;
        if (_Size < 0x401) {
          lpWideCharStr_00 = (undefined4 *)&stack0xffffffe8;
          if ((undefined *)register0x00000010 != (undefined *)0x18) {
LAB_0040b157:
            lpWideCharStr_00 = lpWideCharStr_00 + 2;
            goto LAB_0040b15e;
          }
        }
        else {
          lpWideCharStr_00 = (undefined4 *)_malloc(_Size);
          if (lpWideCharStr_00 != (undefined4 *)0x0) {
            *lpWideCharStr_00 = 0xdddd;
            goto LAB_0040b157;
          }
        }
      }
    }
    else {
      if ((param_7 != 0) && ((int)cchWideChar <= param_7)) {
        FUN_0040c096(param_2,param_3,(LPCWSTR)lpWideCharStr,_Size,param_6,param_7);
      }
    }
  }
  FUN_0040b206((int)lpWideCharStr);
LAB_0040b1ac:
  FUN_00404f47();
  return;
}



void __cdecl
FUN_0040b1c0(pthreadlocinfo *param_1,int param_2,uint param_3,LPCSTR param_4,int param_5,
            LPWSTR param_6,int param_7,UINT param_8,int param_9)

{
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_1);
  FUN_0040afbc(local_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



void __cdecl FUN_0040b206(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    FID_conflict__free((int *)(param_1 + -8));
  }
  return;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __cdecl
FUN_0040b224(int *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,UINT param_6,
            int param_7)

{
  uint _Size;
  uint cchWideChar;
  int cchSrc;
  undefined4 *puVar1;
  int *lpWideCharStr;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  if (param_6 == 0) {
    param_6 = *(UINT *)(*param_1 + 4);
  }
  cchWideChar = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0040b308;
  if ((((int)cchWideChar < 1) || (0x7ffffff0 < cchWideChar)) ||
     (cchWideChar * 2 + 8 <= cchWideChar * 2)) {
    lpWideCharStr = (int *)0x0;
  }
  else {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar1 = (undefined4 *)&stack0xffffffec;
      if ((undefined *)register0x00000010 == (undefined *)0x14) goto LAB_0040b308;
    }
    else {
      puVar1 = (undefined4 *)_malloc(_Size);
      if (puVar1 == (undefined4 *)0x0) goto LAB_0040b308;
      *puVar1 = 0xdddd;
    }
    lpWideCharStr = puVar1 + 2;
  }
  if (lpWideCharStr != (int *)0x0) {
    FUN_00407390(lpWideCharStr,0,cchWideChar * 2);
    cchSrc = MultiByteToWideChar(param_6,1,param_3,param_4,(LPWSTR)lpWideCharStr,cchWideChar);
    if (cchSrc != 0) {
      GetStringTypeW(param_2,(LPCWSTR)lpWideCharStr,cchSrc,param_5);
    }
    FUN_0040b206((int)lpWideCharStr);
  }
LAB_0040b308:
  FUN_00404f47();
  return;
}



void __cdecl
FUN_0040b31c(pthreadlocinfo *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,
            UINT param_6,int param_7)

{
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_1);
  FUN_0040b224(local_14,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



uint __cdecl FUN_0040b35c(int param_1,uint param_2,pthreadlocinfo *param_3)

{
  uint uVar1;
  int iVar2;
  pthreadlocinfo local_1c [2];
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined local_a;
  WORD local_8 [2];
  
  FUN_00402d4b(local_1c,param_3);
  if (param_1 + 1U < 0x101) {
    local_8[0] = local_1c[0]->pctype[param_1];
  }
  else {
    uVar1 = FUN_00408e03(param_1 >> 8 & 0xff,local_1c);
    if (uVar1 == 0) {
      local_b = '\0';
      iVar2 = 1;
      local_c = (CHAR)param_1;
    }
    else {
      local_a = 0;
      iVar2 = 2;
      local_c = (CHAR)((uint)param_1 >> 8);
      local_b = (CHAR)param_1;
    }
    iVar2 = FUN_0040b31c(local_1c,1,&local_c,iVar2,local_8,local_1c[0]->lc_codepage,1);
    if (iVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return local_8[0] & param_2;
}



void FUN_0040b456(void)

{
  FUN_004092ea(0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _realloc
// Library: Visual Studio 2012 Release

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    FID_conflict__free(_Memory);
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) {
        __callnewh(_NewSize);
        piVar4 = __errno();
        *piVar4 = 0xc;
        return (void *)0x0;
      }
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar2 = HeapReAlloc(DAT_0041993c,0,_Memory,_NewSize);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (_DAT_00419938 == 0) {
        piVar4 = __errno();
        DVar5 = GetLastError();
        iVar3 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar3;
        return (void *)0x0;
      }
      iVar3 = __callnewh(_NewSize);
    } while (iVar3 != 0);
    piVar4 = __errno();
    DVar5 = GetLastError();
    iVar3 = __get_errno_from_oserr(DVar5);
    *piVar4 = iVar3;
  }
  return (void *)0x0;
}



void * __cdecl FUN_0040b50a(void *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  void *pvVar2;
  size_t sVar3;
  
  sVar3 = 0;
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    param_2 = param_2 * param_3;
    if (param_1 != (void *)0x0) {
      sVar3 = FID_conflict__msize_base(param_1);
    }
    pvVar2 = _realloc(param_1,param_2);
    if ((pvVar2 != (void *)0x0) && (sVar3 < param_2)) {
      FUN_00407390((int *)(sVar3 + (int)pvVar2),0,param_2 - sVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: __calloc_impl
// Library: Visual Studio 2012 Release

LPVOID __cdecl __calloc_impl(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  LPVOID pvVar2;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    param_1 = param_1 * param_2;
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = (LPVOID)0x0;
      if ((param_1 < 0xffffffe1) &&
         (pvVar2 = HeapAlloc(DAT_0041993c,8,param_1), pvVar2 != (LPVOID)0x0)) {
        return pvVar2;
      }
      if (_DAT_00419938 == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = 0xc;
          return pvVar2;
        }
        return pvVar2;
      }
      iVar1 = __callnewh(param_1);
    } while (iVar1 != 0);
    if (param_3 == (int *)0x0) {
      return (LPVOID)0x0;
    }
  }
  else {
    param_3 = __errno();
  }
  *param_3 = 0xc;
  return (LPVOID)0x0;
}



HANDLE __cdecl
FUN_0040b5f6(LPCWSTR param_1,DWORD param_2,DWORD param_3,LPSECURITY_ATTRIBUTES param_4,DWORD param_5
            ,uint param_6,uint param_7)

{
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  HANDLE pvVar3;
  char *lpProcName;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  LPSECURITY_ATTRIBUTES local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00407e3e();
  if (uVar1 == 0) {
    pvVar3 = CreateFileW(param_1,param_2,param_3,param_4,param_5,param_6 | param_7,(HANDLE)0x0);
  }
  else {
    lpProcName = "CreateFile2";
    hModule = GetModuleHandleW(L"kernel32.dll");
    pFVar2 = GetProcAddress(hModule,lpProcName);
    if (pFVar2 == (FARPROC)0x0) {
      pvVar3 = (HANDLE)0xffffffff;
    }
    else {
      local_10 = 0;
      local_8 = 0;
      local_18 = param_6;
      local_14 = param_7;
      local_c = param_4;
      local_1c = 0x18;
      pvVar3 = (HANDLE)(*pFVar2)(param_1,param_2,param_3,param_5,&local_1c);
    }
  }
  return pvVar3;
}



// WARNING: Could not reconcile some variable overlaps

int __cdecl
FUN_0040b67e(undefined4 *param_1,ushort **param_2,LPCWSTR param_3,uint param_4,int param_5,
            byte param_6)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  DWORD DVar14;
  LPWSTR pWVar15;
  int iVar16;
  HANDLE pvVar17;
  byte bVar18;
  bool bVar19;
  ulonglong uVar20;
  longlong lVar21;
  _SECURITY_ATTRIBUTES local_3c;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  HANDLE local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_3c.nLength = 0xc;
  bVar19 = (param_4 & 0x80) == 0;
  local_24 = 0;
  local_6 = 0;
  local_3c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar19) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_3c.bInheritHandle = ZEXT14(bVar19);
  iVar7 = FUN_0040c332(&local_24);
  if (iVar7 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x74000) != 0 || (local_24 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar8 = param_4 & 3;
  if (uVar8 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar8 == 1) {
      if (((param_4 & 8) == 0) || ((param_4 & 0x70000) == 0)) {
        local_c = 0x40000000;
      }
      else {
        local_c = 0xc0000000;
      }
    }
    else {
      if (uVar8 != 2) {
        puVar9 = ___doserrno();
        *puVar9 = 0;
        *param_2 = (ushort *)0xffffffff;
        piVar10 = __errno();
        *piVar10 = 0x16;
        FUN_00402c77();
        return 0x16;
      }
      local_c = 0xc0000000;
    }
  }
  uVar8 = 2;
  local_2c = 2;
  if (param_5 == 0x10) {
    local_10 = 0;
  }
  else {
    if (param_5 == 0x20) {
      local_10 = 1;
    }
    else {
      if (param_5 == 0x30) {
        local_10 = 2;
      }
      else {
        if (param_5 == 0x40) {
          local_10 = 3;
        }
        else {
          if (param_5 != 0x80) goto LAB_0040b7d5;
          local_10 = (uint)(local_c == 0x80000000);
        }
      }
    }
  }
  uVar11 = param_4 & 0x700;
  if (uVar11 < 0x401) {
    if ((uVar11 == 0x400) || (uVar11 == 0)) {
      uVar8 = 3;
    }
    else {
      if (uVar11 == 0x100) {
        uVar8 = 4;
      }
      else {
        if (uVar11 == 0x200) goto LAB_0040b7f6;
        if (uVar11 != 0x300) goto LAB_0040b7d5;
      }
    }
  }
  else {
    if (uVar11 != 0x500) {
      if (uVar11 == 0x600) {
LAB_0040b7f6:
        uVar8 = 5;
        goto LAB_0040b7fd;
      }
      if (uVar11 != 0x700) {
LAB_0040b7d5:
        puVar9 = ___doserrno();
        *puVar9 = 0;
        *param_2 = (ushort *)0xffffffff;
        piVar10 = __errno();
        *piVar10 = 0x16;
        FUN_00402c77();
        return 0x16;
      }
    }
    uVar8 = 1;
  }
LAB_0040b7fd:
  uVar11 = 0x80;
  local_1c = 0x80;
  local_14 = 0;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_004192f4 & param_6))) {
    uVar11 = 1;
    local_1c = 1;
  }
  uVar12 = 0;
  if ((param_4 & 0x40) != 0) {
    local_c = local_c | 0x10000;
    uVar12 = 0x4000000;
    local_10 = local_10 | 4;
    local_14 = 0x4000000;
  }
  if ((param_4 & 0x1000) != 0) {
    local_1c = uVar11 | 0x100;
  }
  if ((param_4 & 0x2000) != 0) {
    uVar12 = uVar12 | 0x2000000;
    local_14 = uVar12;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      local_14 = uVar12 | 0x10000000;
    }
  }
  else {
    local_14 = uVar12 | 0x8000000;
  }
  puVar13 = (ushort *)FUN_00409a55();
  *param_2 = puVar13;
  if (puVar13 == (ushort *)0xffffffff) {
    puVar9 = ___doserrno();
    *puVar9 = 0;
    *param_2 = (ushort *)0xffffffff;
    piVar10 = __errno();
    *piVar10 = 0x18;
    piVar10 = __errno();
    return *piVar10;
  }
  *param_1 = 1;
  local_20 = FUN_0040b5f6(param_3,local_c,local_10,(LPSECURITY_ATTRIBUTES)&local_3c,uVar8,local_1c,
                          local_14);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = FUN_0040b5f6(param_3,local_c,local_10,(LPSECURITY_ATTRIBUTES)&local_3c,uVar8,
                              local_1c,local_14);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_0040b94e;
    }
    pbVar1 = (byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 4 + ((uint)*param_2 & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar14 = GetLastError();
    FID_conflict___dosmaperr(DVar14);
    uVar20 = CONCAT44(local_18,local_30);
    goto LAB_0040b942;
  }
LAB_0040b94e:
  DVar14 = GetFileType(local_20);
  if (DVar14 == 0) {
    pbVar1 = (byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 4 + ((uint)*param_2 & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar14 = GetLastError();
    FID_conflict___dosmaperr(DVar14);
    CloseHandle(local_20);
    uVar20 = CONCAT44(local_18,local_30);
    if (DVar14 == 0) {
      piVar10 = __errno();
      uVar20 = CONCAT44(local_18,local_30);
      *piVar10 = 0xd;
    }
    goto LAB_0040b942;
  }
  if (DVar14 == 2) {
    local_5 = local_5 | 0x40;
  }
  else {
    if (DVar14 == 3) {
      local_5 = local_5 | 8;
    }
  }
  FUN_00409ceb((uint)*param_2,local_20);
  bVar18 = local_5 | 1;
  *(byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 4 + ((uint)*param_2 & 0x1f) * 0x40) = bVar18;
  pbVar1 = (byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 0x24 + ((uint)*param_2 & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  local_5 = bVar18;
  uVar20 = CONCAT44(local_18,local_30);
  if (local_7 == 0) {
    uVar20 = CONCAT44(local_18,local_30);
    if (-1 < (char)bVar18) goto LAB_0040bcbf;
    if ((param_4 & 2) == 0) goto LAB_0040ba9b;
    uVar20 = FUN_00404ed4((uint)*param_2,0xffffffff,0xffffffff,2);
    if (uVar20 == 0xffffffffffffffff) {
      puVar9 = ___doserrno();
      local_18 = (uint)(uVar20 >> 0x20);
      local_30 = (uint)uVar20;
      if (*puVar9 == 0x83) goto LAB_0040ba9b;
    }
    else {
      local_28 = 0;
      pWVar15 = FUN_0040509f((uint)*param_2,(LPWSTR)&local_28,1);
      local_18 = (uint)(uVar20 >> 0x20);
      local_30 = (uint)uVar20;
      if ((pWVar15 == (LPWSTR)0x0) && ((short)local_28 == 0x1a)) {
        iVar7 = FUN_0040c17c(*param_2,local_30,local_18);
        local_18 = (uint)(uVar20 >> 0x20);
        local_30 = (uint)uVar20;
        if (iVar7 == -1) goto LAB_0040ba42;
      }
      lVar21 = FUN_00404ed4((uint)*param_2,0,0,0);
      local_18 = (uint)(uVar20 >> 0x20);
      local_30 = (uint)uVar20;
      if (lVar21 != -1) goto LAB_0040ba9b;
    }
LAB_0040ba42:
    FUN_004049e1((uint)*param_2);
    local_18 = (uint)(uVar20 >> 0x20);
    local_30 = (uint)uVar20;
  }
  else {
LAB_0040ba9b:
    local_30 = (uint)uVar20;
    if ((char)local_5 < '\0') {
      if ((param_4 & 0x74000) == 0) {
        if ((local_24 & 0x74000) == 0) {
          param_4 = param_4 | 0x4000;
        }
        else {
          param_4 = param_4 | local_24 & 0x74000;
        }
      }
      uVar11 = param_4 & 0x74000;
      if (uVar11 == 0x4000) {
        local_6 = 0;
      }
      else {
        if ((uVar11 == 0x10000) || (uVar11 == 0x14000)) {
          if ((param_4 & 0x301) == 0x301) goto LAB_0040bb0e;
        }
        else {
          if ((uVar11 == 0x20000) || (uVar11 == 0x24000)) {
LAB_0040bb0e:
            local_6 = 2;
          }
          else {
            if ((uVar11 == 0x40000) || (uVar11 == 0x44000)) {
              local_6 = 1;
            }
          }
        }
      }
      if ((param_4 & 0x70000) != 0) {
        local_18 = 0;
        uVar6 = uVar20 & 0xffffffff;
        uVar5 = uVar20 & 0xffffffff;
        uVar4 = uVar20 & 0xffffffff;
        uVar3 = uVar20 & 0xffffffff;
        uVar20 = uVar20 & 0xffffffff;
        if ((local_5 & 0x40) == 0) {
          uVar11 = local_c & 0xc0000000;
          if (uVar11 == 0x40000000) {
            uVar20 = uVar6;
            if (uVar8 != 0) {
              if (2 < uVar8) {
                if (uVar8 < 5) {
                  lVar21 = FUN_00404ed4((uint)*param_2,0,0,2);
                  if (lVar21 != 0) goto LAB_0040bc5a;
                }
                else {
LAB_0040bb6b:
                  uVar20 = uVar5;
                  if (uVar8 != 5) goto LAB_0040bcbf;
                }
              }
LAB_0040bc76:
              iVar7 = 0;
              if (local_6 == 1) {
                iVar16 = 3;
                local_18 = 0xbfbbef;
                local_2c = 3;
              }
              else {
                uVar20 = CONCAT44(local_18,local_30);
                if (local_6 != 2) goto LAB_0040bcbf;
                local_18 = 0xfeff;
                iVar16 = 2;
              }
              do {
                iVar16 = FUN_00406284(*param_2,(ushort *)((int)&local_18 + iVar7),
                                      (ushort *)(iVar16 - iVar7));
                uVar20 = CONCAT44(local_18,local_30);
                if (iVar16 == -1) goto LAB_0040ba42;
                iVar7 = iVar7 + iVar16;
                iVar16 = local_2c;
              } while (iVar7 < local_2c);
            }
          }
          else {
            if (uVar11 == 0x80000000) {
LAB_0040bba6:
              pWVar15 = FUN_0040509f((uint)*param_2,(LPWSTR)&local_18,3);
              uVar20 = CONCAT44(local_18,local_30);
              if (pWVar15 == (LPWSTR)0xffffffff) goto LAB_0040ba42;
              if (pWVar15 == (LPWSTR)0x2) {
LAB_0040bbe3:
                if ((local_18 & 0xffff) == 0xfffe) {
                  FUN_004049e1((uint)*param_2);
                  piVar10 = __errno();
                  *piVar10 = 0x16;
                  return 0x16;
                }
                if ((local_18 & 0xffff) == 0xfeff) {
                  lVar21 = FUN_00404ed4((uint)*param_2,2,0,0);
                  uVar20 = CONCAT44(local_18,local_30);
                  if (lVar21 == -1) goto LAB_0040ba42;
                  local_6 = 2;
                  goto LAB_0040bcbf;
                }
              }
              else {
                if (pWVar15 == (LPWSTR)0x3) {
                  if (local_18 == 0xbfbbef) {
                    local_6 = 1;
                    goto LAB_0040bcbf;
                  }
                  goto LAB_0040bbe3;
                }
              }
LAB_0040bc5a:
              lVar21 = FUN_00404ed4((uint)*param_2,0,0,0);
              uVar20 = CONCAT44(local_18,local_30);
              if (lVar21 == -1) goto LAB_0040ba42;
            }
            else {
              uVar20 = uVar3;
              if ((uVar11 == 0xc0000000) && (uVar20 = uVar4, uVar8 != 0)) {
                if (2 < uVar8) {
                  if (4 < uVar8) goto LAB_0040bb6b;
                  lVar21 = FUN_00404ed4((uint)*param_2,0,0,2);
                  if (lVar21 != 0) {
                    lVar21 = FUN_00404ed4((uint)*param_2,0,0,0);
                    uVar20 = CONCAT44(local_18,local_30);
                    if (lVar21 == -1) goto LAB_0040ba42;
                    goto LAB_0040bba6;
                  }
                }
                goto LAB_0040bc76;
              }
            }
          }
        }
      }
    }
LAB_0040bcbf:
    uVar8 = local_c;
    iVar7 = ((uint)*param_2 & 0x1f) * 0x40;
    pbVar1 = (byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 0x24 + iVar7);
    *pbVar1 = *pbVar1 ^ (*(byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 0x24 + iVar7) ^ local_6) &
                        0x7f;
    iVar7 = ((uint)*param_2 & 0x1f) * 0x40;
    *(byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 0x24 + iVar7) =
         (char)(param_4 >> 0x10) << 7 |
         *(byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 0x24 + iVar7) & 0x7f;
    if ((local_7 == 0) && ((param_4 & 8) != 0)) {
      pbVar1 = (byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 4 + ((uint)*param_2 & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 | 0x20;
    }
    if ((local_c & 0xc0000000) != 0xc0000000) {
      return 0;
    }
    if ((param_4 & 1) == 0) {
      return 0;
    }
    CloseHandle(local_20);
    local_18 = (uint)(uVar20 >> 0x20);
    local_30 = (uint)uVar20;
    pvVar17 = FUN_0040b5f6(param_3,uVar8 & 0x7fffffff,local_10,(LPSECURITY_ATTRIBUTES)&local_3c,3,
                           local_1c,local_14);
    local_18 = (uint)(uVar20 >> 0x20);
    local_30 = (uint)uVar20;
    if (pvVar17 != (HANDLE)0xffffffff) {
      *(HANDLE *)(((uint)*param_2 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)*param_2 >> 5]) = pvVar17;
      return 0;
    }
    DVar14 = GetLastError();
    local_18 = (uint)(uVar20 >> 0x20);
    local_30 = (uint)uVar20;
    FID_conflict___dosmaperr(DVar14);
    local_18 = (uint)(uVar20 >> 0x20);
    local_30 = (uint)uVar20;
    pbVar1 = (byte *)((&DAT_004191d0)[(int)*param_2 >> 5] + 4 + ((uint)*param_2 & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_00409bfe((uint)*param_2);
    local_18 = (uint)(uVar20 >> 0x20);
    local_30 = (uint)uVar20;
  }
LAB_0040b942:
  piVar10 = __errno();
  local_18 = (uint)(uVar20 >> 0x20);
  local_30 = (uint)uVar20;
  return *piVar10;
}



// Library Function - Single Match
// Name: _strncmp
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if (_MaxCount != 0) {
    _Str1 = _Str1 + -(int)_Str2;
    uVar2 = (uint)_Str2 & 3;
    while( true ) {
      if (uVar2 == 0) {
        while ((((int)_Str2 + (int)_Str1 & 0xfffU) < 0xffd &&
               (uVar2 = *(uint *)((int)_Str2 + (int)_Str1), uVar2 == *(uint *)_Str2))) {
          bVar3 = _MaxCount < 4;
          _MaxCount = _MaxCount - 4;
          if (bVar3 || _MaxCount == 0) {
            return 0;
          }
          _Str2 = (char *)((uint *)_Str2 + 1);
          if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = *(byte *)((int)_Str2 + (int)_Str1);
      if (bVar1 != *_Str2) {
        return -(uint)(bVar1 < (byte)*_Str2) | 1;
      }
      uVar2 = _MaxCount;
      if (bVar1 == 0) {
        uVar2 = (uint)bVar1;
      }
      _Str2 = (char *)((int)_Str2 + 1);
      _MaxCount = uVar2 - 1;
      if (uVar2 == 0 || _MaxCount == 0) break;
      uVar2 = (uint)_Str2 & 3;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: __strnicmp
// Library: Visual Studio 2012 Release

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int *piVar1;
  int iVar2;
  
  if (_DAT_00419f34 == 0) {
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00402c77();
      iVar2 = 0x7fffffff;
    }
    else {
      if (_MaxCount < 0x80000000) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
        return iVar2;
      }
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00402c77();
      iVar2 = 0x7fffffff;
    }
  }
  else {
    iVar2 = FUN_0040bec3(_Str1,(byte *)_Str2,_MaxCount,(pthreadlocinfo *)0x0);
  }
  return iVar2;
}



int __cdecl FUN_0040bec3(char *param_1,byte *param_2,uint param_3,pthreadlocinfo *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    FUN_00402d4b(local_14,param_4);
    iVar4 = 0x7fffffff;
    if (((param_1 == (char *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00402c77();
    }
    else {
      if (local_14[0]->locale_name[2] == (wchar_t *)0x0) {
        iVar4 = ___ascii_strnicmp(param_1,(char *)param_2,param_3);
      }
      else {
        iVar4 = -(int)param_2;
        do {
          uVar2 = FUN_0040c491((uint)(byte)(param_1 + iVar4)[(int)param_2],local_14);
          uVar3 = FUN_0040c491((uint)*param_2,local_14);
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
          if ((param_3 == 0) || (uVar2 == 0)) break;
        } while (uVar2 == uVar3);
        iVar4 = uVar2 - uVar3;
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar4;
}



// Library Function - Single Match
// Name: ___dcrt_lowio_initialize_console_output
// Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release

void ___dcrt_lowio_initialize_console_output(void)

{
  DAT_00418e70 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



// Library Function - Multiple Matches With Different Base Names
// Name: ?_msize_base@@YAIQAX@Z, __msize
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release

size_t __cdecl FID_conflict__msize_base(void *_Memory)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_0041993c,0,_Memory);
  return SVar2;
}



// Library Function - Single Match
// Name: _abort
// Library: Visual Studio 2012 Release

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = FUN_0040a39c();
  if (iVar2 != 0) {
    FUN_0040a3c5(0x16);
  }
  if ((DAT_00418e74 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      return;
    }
    FUN_00402b1a(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Multiple Matches With Different Base Names
// Name: ?_AtlGetTableIndexFromLocaleName@ATL@@YAHPB_W@Z, _GetTableIndexFromLocaleName
// Library: Visual Studio 2015 Release

undefined4 __cdecl FID_conflict__GetTableIndexFromLocaleName(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0xe3;
  do {
    iVar3 = (iVar2 + iVar4) / 2;
    iVar1 = FUN_0040c0e2(param_1,(ushort *)(&PTR_DAT_00413368)[iVar3 * 2],0x55);
    if (iVar1 == 0) {
      return *(undefined4 *)(&UNK_0041336c + iVar3 * 8);
    }
    if (iVar1 < 0) {
      iVar2 = iVar3 + -1;
    }
    else {
      iVar4 = iVar3 + 1;
    }
  } while (iVar4 <= iVar2);
  return 0xffffffff;
}



// Library Function - Multiple Matches With Different Base Names
// Name: ?_AtlDownlevelLocaleNameToLCID@ATL@@YAKPB_W@Z, ___crtDownlevelLocaleNameToLCID
// Library: Visual Studio 2015 Release

undefined4 __cdecl FID_conflict__AtlDownlevelLocaleNameToLCID(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = FID_conflict__GetTableIndexFromLocaleName(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_00412c48 + uVar1 * 8);
    }
  }
  return 0;
}



void __cdecl
FUN_0040c096(int param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  LCID Locale;
  
  if ((code *)(DAT_00419fd0 ^ DAT_004183f0) != (code *)0x0) {
    (*(code *)(DAT_00419fd0 ^ DAT_004183f0))(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
    return;
  }
  Locale = FID_conflict__AtlDownlevelLocaleNameToLCID(param_1);
  LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  return;
}



int __cdecl FUN_0040c0e2(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = 0;
  if (param_3 != 0) {
    param_1 = param_1 - (int)param_2;
    do {
      uVar3 = *(ushort *)(param_1 + (int)param_2);
      if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
        uVar3 = uVar3 + 0x20;
      }
      uVar1 = *param_2;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (((param_3 != 0) && (uVar3 != 0)) && (uVar3 == uVar1));
    iVar2 = (uint)uVar3 - (uint)uVar1;
  }
  return iVar2;
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// Library Function - Single Match
// Name: __alloca_probe_16
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// Library Function - Single Match
// Name: __alloca_probe_8
// Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



int __cdecl FUN_0040c17c(ushort *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  HANDLE hFile;
  int *piVar3;
  int _Mode;
  ushort *puVar4;
  ulong *puVar5;
  BOOL BVar6;
  uint uVar7;
  ushort *puVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  DWORD dwFlags;
  SIZE_T dwBytes;
  ushort *lpMem;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_c;
  int local_8;
  
  uVar7 = 0;
  local_c = 0;
  lVar11 = FUN_00404ed4((uint)param_1,0,0,1);
  if (lVar11 == -1) goto LAB_0040c204;
  lVar12 = FUN_00404ed4((uint)param_1,0,0,2);
  _Mode = (int)((ulonglong)lVar12 >> 0x20);
  if (lVar12 == -1) goto LAB_0040c204;
  puVar8 = (ushort *)(param_2 - (uint)lVar12);
  uVar1 = (uint)(param_2 < (uint)lVar12);
  iVar2 = param_3 - _Mode;
  local_8 = iVar2 - uVar1;
  if ((local_8 < 0) ||
     ((local_8 == 0 || (SBORROW4(param_3,_Mode) != SBORROW4(iVar2,uVar1)) != local_8 < 0 &&
      (puVar8 == (ushort *)0x0)))) {
    if ((local_8 < 1) && (local_8 < 0)) {
      lVar12 = FUN_00404ed4((uint)param_1,param_2,param_3,0);
      if (lVar12 == -1) goto LAB_0040c204;
      hFile = (HANDLE)FUN_00409c84((uint)param_1);
      BVar6 = SetEndOfFile(hFile);
      uVar7 = (uint)(BVar6 != 0) - 1;
      local_c = (int)uVar7 >> 0x1f;
      if ((uVar7 & local_c) == 0xffffffff) {
        piVar3 = __errno();
        *piVar3 = 0xd;
        puVar5 = ___doserrno();
        dwFlags = GetLastError();
        *puVar5 = dwFlags;
        goto LAB_0040c303;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    dwFlags = 8;
    hFile = GetProcessHeap();
    lpMem = (ushort *)HeapAlloc(hFile,dwFlags,dwBytes);
    if (lpMem == (ushort *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_0040c204;
    }
    _Mode = __setmode_nolock((int)param_1,0x8000);
    while( true ) {
      puVar4 = puVar8;
      if ((-1 < local_8) && ((0 < local_8 || ((ushort *)0xfff < puVar8)))) {
        puVar4 = (ushort *)0x1000;
      }
      puVar4 = (ushort *)FUN_00406373(param_1,lpMem,puVar4);
      if (puVar4 == (ushort *)0xffffffff) break;
      bVar9 = puVar8 < puVar4;
      puVar8 = (ushort *)((int)puVar8 - (int)puVar4);
      bVar10 = SBORROW4(local_8,(int)puVar4 >> 0x1f);
      iVar2 = local_8 - ((int)puVar4 >> 0x1f);
      local_8 = iVar2 - (uint)bVar9;
      if ((local_8 < 0) ||
         ((local_8 == 0 || (bVar10 != SBORROW4(iVar2,(uint)bVar9)) != local_8 < 0 &&
          (puVar8 == (ushort *)0x0)))) goto LAB_0040c27e;
    }
    puVar5 = ___doserrno();
    if (*puVar5 == 5) {
      piVar3 = __errno();
      *piVar3 = 0xd;
    }
    uVar7 = 0xffffffff;
    local_c = 0xffffffff;
LAB_0040c27e:
    __setmode_nolock((int)param_1,_Mode);
    dwFlags = 0;
    hFile = GetProcessHeap();
    HeapFree(hFile,dwFlags,lpMem);
LAB_0040c303:
    if ((uVar7 & local_c) == 0xffffffff) goto LAB_0040c204;
  }
  local_18 = (undefined4)((ulonglong)lVar11 >> 0x20);
  local_1c = (undefined4)lVar11;
  lVar11 = FUN_00404ed4((uint)param_1,local_1c,local_18,0);
  if (lVar11 != -1) {
    return 0;
  }
LAB_0040c204:
  piVar3 = __errno();
  return *piVar3;
}



undefined4 __cdecl FUN_0040c332(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    return 0x16;
  }
  *param_1 = DAT_00419f3c;
  return 0;
}



// Library Function - Single Match
// Name: __setmode_nolock
// Library: Visual Studio 2012 Release

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = _FileHandle >> 5;
  iVar7 = (_FileHandle & 0x1fU) * 0x40;
  iVar5 = (&DAT_004191d0)[iVar6];
  bVar2 = *(byte *)(iVar5 + 4 + iVar7);
  cVar3 = *(char *)(iVar5 + 0x24 + iVar7);
  if (_Mode == 0x4000) {
    *(byte *)(iVar5 + 4 + iVar7) = bVar2 | 0x80;
    pbVar1 = (byte *)((&DAT_004191d0)[iVar6] + 0x24 + iVar7);
    *pbVar1 = *pbVar1 & 0x80;
  }
  else {
    if (_Mode == 0x8000) {
      *(byte *)(iVar5 + 4 + iVar7) = bVar2 & 0x7f;
    }
    else {
      if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
        *(byte *)(iVar5 + 4 + iVar7) = bVar2 | 0x80;
        iVar5 = (&DAT_004191d0)[iVar6];
        bVar4 = *(byte *)(iVar5 + 0x24 + iVar7) & 0x82 | 2;
      }
      else {
        if (_Mode != 0x40000) goto LAB_0040c407;
        *(byte *)(iVar5 + 4 + iVar7) = bVar2 | 0x80;
        iVar5 = (&DAT_004191d0)[iVar6];
        bVar4 = *(byte *)(iVar5 + 0x24 + iVar7) & 0x81 | 1;
      }
      *(byte *)(iVar5 + 0x24 + iVar7) = bVar4;
    }
  }
LAB_0040c407:
  if ((bVar2 & 0x80) == 0) {
    return 0x8000;
  }
  return (-(uint)((char)(cVar3 * '\x02' >> 1) != '\0') & 0xc000) + 0x4000;
}



// Library Function - Single Match
// Name: ___ascii_strnicmp
// Library: Visual Studio 2012 Release

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      bVar1 = *_Str2;
      if ((bVar2 == 0) || (bVar1 == 0)) break;
      _Str1 = (char *)((byte *)_Str1 + 1);
      _Str2 = (char *)((byte *)_Str2 + 1);
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        bVar2 = bVar2 + 0x20;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
      bVar3 = bVar2 < bVar1;
      if (bVar2 != bVar1) goto LAB_0040c481;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    _MaxCount = 0;
    bVar3 = bVar2 < bVar1;
    if (bVar2 != bVar1) {
LAB_0040c481:
      _MaxCount = 0xffffffff;
      if (!bVar3) {
        _MaxCount = 1;
      }
    }
  }
  return _MaxCount;
}



uint __cdecl FUN_0040c491(uint param_1,pthreadlocinfo *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  pthreadlocinfo local_1c [2];
  int local_14;
  char local_10;
  byte local_c;
  undefined local_b;
  CHAR local_8;
  CHAR local_7;
  undefined local_6;
  
  FUN_00402d4b(local_1c,param_2);
  if (param_1 < 0x100) {
    if (local_1c[0]->mb_cur_max < 2) {
      uVar1 = (uint)local_1c[0]->pctype[param_1] & 1;
    }
    else {
      uVar1 = FUN_0040b35c(param_1,1,local_1c);
    }
    if (uVar1 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
    }
    else {
      param_1 = (uint)local_1c[0]->pclmap[param_1];
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
    }
  }
  else {
    if ((local_1c[0]->mb_cur_max < 2) ||
       (uVar1 = FUN_00408e03((int)param_1 >> 8 & 0xff,local_1c), uVar1 == 0)) {
      piVar2 = __errno();
      iVar3 = 1;
      *piVar2 = 0x2a;
      local_7 = '\0';
      local_8 = (CHAR)param_1;
    }
    else {
      local_6 = 0;
      iVar3 = 2;
      local_8 = (CHAR)(param_1 >> 8);
      local_7 = (CHAR)param_1;
    }
    iVar3 = FUN_0040b1c0(local_1c,(int)local_1c[0]->locale_name[2],0x100,&local_8,iVar3,
                         (LPWSTR)&local_c,3,local_1c[0]->lc_codepage,1);
    if (iVar3 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
    }
    else {
      if (iVar3 == 1) {
        param_1 = (uint)local_c;
        if (local_10 != '\0') {
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
        }
      }
      else {
        param_1 = (uint)CONCAT11(local_c,local_b);
        if (local_10 != '\0') {
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
        }
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: _tolower
// Library: Visual Studio 2012 Release

int __cdecl _tolower(int _C)

{
  uint uVar1;
  
  if (_DAT_00419f34 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
    return _C;
  }
  uVar1 = FUN_0040c491(_C,(pthreadlocinfo *)0x0);
  return uVar1;
}



undefined8 FUN_0040c600(uint param_1,uint param_2,uint param_3,uint param_4)

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



void __cdecl FUN_0040c695(uint *param_1,char *param_2,pthreadlocinfo *param_3,char **param_4)

{
  int local_30 [2];
  int local_28;
  char local_24;
  char **local_20;
  char *local_1c;
  uint *local_18;
  ushort local_14 [6];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_20 = param_4;
  FUN_00402d4b(local_30,param_3);
  FUN_0040d344(local_14,&local_1c,param_2,0,0,0,0,local_30);
  if (local_20 != (char **)0x0) {
    *local_20 = local_1c;
  }
  FUN_0040cdd2(local_14,local_18);
  if (local_24 != '\0') {
    *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
  }
  FUN_00404f47();
  return;
}



void __cdecl FUN_0040c739(uint *param_1,char *param_2,pthreadlocinfo *param_3)

{
  int local_2c [2];
  int local_24;
  char local_20;
  char *local_1c;
  undefined4 local_18;
  ushort local_14 [6];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_00402d4b(local_2c,param_3);
  local_18 = FUN_0040d344(local_14,&local_1c,param_2,0,0,0,0,local_2c);
  FUN_0040c860(local_14,param_1);
  if (local_20 != '\0') {
    *(uint *)(local_24 + 0x70) = *(uint *)(local_24 + 0x70) & 0xfffffffd;
  }
  FUN_00404f47();
  return;
}



void __cdecl FUN_0040c7c7(uint *param_1,char *param_2,pthreadlocinfo *param_3)

{
  FUN_0040c695(param_1,param_2,param_3,(char **)0x0);
  return;
}



// Library Function - Single Match
// Name: __fpmath
// Library: Visual Studio 2012 Release

void __cdecl __fpmath(int param_1)

{
  FUN_0040c7f6();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



void FUN_0040c7f6(void)

{
  PTR_LAB_00418c9c = FUN_0040daec;
  PTR_LAB_00418ca0 = FUN_0040e3d8;
  PTR_LAB_00418ca4 = FUN_0040e469;
  PTR_LAB_00418ca8 = FUN_0040e4c3;
  PTR_LAB_00418cac = __positive;
  PTR_LAB_00418cb0 = FUN_0040daec;
  PTR_LAB_00418cb4 = __cfltcvt_l;
  PTR_LAB_00418cb8 = FUN_0040e481;
  PTR_LAB_00418cbc = FUN_0040e3e9;
  PTR_LAB_00418cc0 = FUN_0040e4d4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040c860(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int local_38;
  uint local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1[5];
  iVar14 = 0;
  uVar10 = (uint)uVar1 & 0x7fff;
  uVar16 = *(uint *)(param_1 + 3);
  iVar11 = uVar10 - 0x3fff;
  local_14[0] = uVar16;
  uVar17 = *(uint *)(param_1 + 1);
  local_14[1] = uVar17;
  uVar2 = *param_1;
  local_14[2] = (uint)uVar2 << 0x10;
  if (iVar11 == -0x3fff) {
    iVar15 = 0;
    iVar11 = 0;
    do {
      if (local_14[iVar11] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        goto LAB_0040c8d5;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
  }
  else {
    uVar5 = DAT_00418ea0 - 1;
    bVar4 = false;
    iVar15 = (int)(((int)DAT_00418ea0 >> 0x1f & 0x1fU) + DAT_00418ea0) >> 5;
    cVar7 = (char)(DAT_00418ea0 & 0x8000001f);
    if ((int)(DAT_00418ea0 & 0x8000001f) < 0) {
      cVar7 = (cVar7 - 1U | 0xe0) + 1;
    }
    bVar8 = 0x1f - cVar7;
    if ((local_14[iVar15] & 1 << (bVar8 & 0x1f)) != 0) {
      uVar6 = local_14[iVar15] & ~(-1 << (bVar8 & 0x1f));
      iVar12 = iVar15;
      while (uVar6 == 0) {
        iVar12 = iVar12 + 1;
        if (2 < iVar12) goto LAB_0040c9d5;
        uVar6 = local_14[iVar12];
      }
      iVar12 = (int)(((int)uVar5 >> 0x1f & 0x1fU) + uVar5) >> 5;
      cVar7 = (char)(uVar5 & 0x8000001f);
      if ((int)(uVar5 & 0x8000001f) < 0) {
        cVar7 = (cVar7 - 1U | 0xe0) + 1;
      }
      bVar4 = false;
      uVar6 = 1 << (0x1fU - cVar7 & 0x1f);
      uVar9 = uVar6 + local_14[iVar12];
      bVar3 = false;
      if ((uVar9 < local_14[iVar12]) || (uVar9 < uVar6)) {
        bVar3 = true;
        bVar4 = true;
      }
      local_14[iVar12] = uVar9;
      while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar3))) {
        bVar3 = false;
        bVar4 = false;
        uVar6 = local_14[iVar12] + 1;
        if ((uVar6 < local_14[iVar12]) || (uVar6 == 0)) {
          bVar3 = true;
          bVar4 = true;
        }
        local_14[iVar12] = uVar6;
      }
    }
LAB_0040c9d5:
    local_14[iVar15] = local_14[iVar15] & -1 << (bVar8 & 0x1f);
    iVar15 = iVar15 + 1;
    if (iVar15 < 3) {
      iVar12 = 3 - iVar15;
      puVar13 = local_14 + iVar15;
      while (iVar12 != 0) {
        iVar12 = iVar12 + -1;
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
    }
    iVar15 = iVar11;
    if (bVar4) {
      iVar15 = uVar10 - 0x3ffe;
    }
    if (iVar15 < (int)(DAT_00418e9c - DAT_00418ea0)) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (DAT_00418e9c < iVar15) {
        if (iVar15 < _DAT_00418e98) {
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar15 = DAT_00418eac + iVar15;
          iVar11 = (int)(DAT_00418ea4 + ((int)DAT_00418ea4 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = (byte)(DAT_00418ea4 & 0x8000001f);
          if ((int)(DAT_00418ea4 & 0x8000001f) < 0) {
            bVar8 = (bVar8 - 1 | 0xe0) + 1;
          }
          local_24 = 0;
          iVar14 = 0;
          do {
            uVar16 = local_14[iVar14] >> (bVar8 & 0x1f) | local_24;
            local_24 = (local_14[iVar14] & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
            local_14[iVar14] = uVar16;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
          iVar14 = 2;
          do {
            if (iVar14 < iVar11) {
              local_14[iVar14] = 0;
            }
            else {
              local_14[iVar14] = *puVar13;
            }
            puVar13 = puVar13 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar11 = (int)(DAT_00418ea4 + ((int)DAT_00418ea4 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = (byte)(DAT_00418ea4 & 0x8000001f);
          if ((int)(DAT_00418ea4 & 0x8000001f) < 0) {
            bVar8 = (bVar8 - 1 | 0xe0) + 1;
          }
          local_24 = 0;
          do {
            uVar16 = local_14[iVar14] >> (bVar8 & 0x1f) | local_24;
            local_24 = (local_14[iVar14] & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
            local_14[iVar14] = uVar16;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
          iVar14 = 2;
          do {
            if (iVar14 < iVar11) {
              local_14[iVar14] = 0;
            }
            else {
              local_14[iVar14] = *puVar13;
            }
            puVar13 = puVar13 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar15 = DAT_00418eac + _DAT_00418e98;
        }
        goto LAB_0040cd86;
      }
      uVar10 = DAT_00418e9c - iVar11;
      local_14[0] = uVar16;
      iVar11 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      local_14[1] = uVar17;
      local_14[2] = (uint)uVar2 << 0x10;
      bVar8 = (byte)(uVar10 & 0x8000001f);
      if ((int)(uVar10 & 0x8000001f) < 0) {
        bVar8 = (bVar8 - 1 | 0xe0) + 1;
      }
      local_24 = 0;
      do {
        uVar16 = local_14[iVar14] >> (bVar8 & 0x1f) | local_24;
        local_24 = (local_14[iVar14] & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
        local_14[iVar14] = uVar16;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
      puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
      iVar14 = 2;
      do {
        if (iVar14 < iVar11) {
          local_14[iVar14] = 0;
        }
        else {
          local_14[iVar14] = *puVar13;
        }
        puVar13 = puVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      iVar11 = (int)(((int)DAT_00418ea0 >> 0x1f & 0x1fU) + DAT_00418ea0) >> 5;
      cVar7 = (char)(DAT_00418ea0 & 0x8000001f);
      if ((int)(DAT_00418ea0 & 0x8000001f) < 0) {
        cVar7 = (cVar7 - 1U | 0xe0) + 1;
      }
      bVar8 = 0x1f - cVar7;
      if ((local_14[iVar11] & 1 << (bVar8 & 0x1f)) != 0) {
        uVar16 = local_14[iVar11] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar11;
        while (uVar16 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_0040cb90;
          uVar16 = local_14[iVar14];
        }
        iVar14 = (int)(((int)uVar5 >> 0x1f & 0x1fU) + uVar5) >> 5;
        cVar7 = (char)(uVar5 & 0x8000001f);
        if ((int)(uVar5 & 0x8000001f) < 0) {
          cVar7 = (cVar7 - 1U | 0xe0) + 1;
        }
        uVar16 = 1 << (0x1fU - cVar7 & 0x1f);
        bVar4 = false;
        uVar17 = uVar16 + local_14[iVar14];
        if ((uVar17 < local_14[iVar14]) || (uVar17 < uVar16)) {
          bVar4 = true;
        }
        local_14[iVar14] = uVar17;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          bVar4 = false;
          uVar16 = local_14[iVar14] + 1;
          if ((uVar16 < local_14[iVar14]) || (uVar16 == 0)) {
            bVar4 = true;
          }
          local_14[iVar14] = uVar16;
        }
      }
LAB_0040cb90:
      local_14[iVar11] = local_14[iVar11] & -1 << (bVar8 & 0x1f);
      iVar11 = iVar11 + 1;
      if (iVar11 < 3) {
        iVar14 = 3 - iVar11;
        puVar13 = local_14 + iVar11;
        while (iVar14 != 0) {
          iVar14 = iVar14 + -1;
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      uVar16 = DAT_00418ea4 + 1;
      iVar11 = (int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)(uVar16 & 0x8000001f);
      if ((int)(uVar16 & 0x8000001f) < 0) {
        bVar8 = (bVar8 - 1 | 0xe0) + 1;
      }
      local_24 = 0;
      local_38 = 0;
      do {
        uVar16 = local_14[local_38];
        local_14[local_38] = uVar16 >> (bVar8 & 0x1f) | local_24;
        local_24 = (uVar16 & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
        local_38 = local_38 + 1;
      } while (local_38 < 3);
      puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
      iVar14 = 2;
      do {
        if (iVar14 < iVar11) {
          local_14[iVar14] = 0;
        }
        else {
          local_14[iVar14] = *puVar13;
        }
        puVar13 = puVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
LAB_0040c8d5:
    iVar15 = 0;
  }
LAB_0040cd86:
  uVar16 = iVar15 << (0x1fU - (char)DAT_00418ea4 & 0x1f) |
           -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_14[0];
  if (DAT_00418ea8 == 0x40) {
    param_2[1] = uVar16;
    *param_2 = local_14[1];
  }
  else {
    if (DAT_00418ea8 == 0x20) {
      *param_2 = uVar16;
    }
  }
  FUN_00404f47();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040cdd2(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int local_38;
  uint local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1[5];
  iVar14 = 0;
  uVar10 = (uint)uVar1 & 0x7fff;
  uVar16 = *(uint *)(param_1 + 3);
  iVar11 = uVar10 - 0x3fff;
  local_14[0] = uVar16;
  uVar17 = *(uint *)(param_1 + 1);
  local_14[1] = uVar17;
  uVar2 = *param_1;
  local_14[2] = (uint)uVar2 << 0x10;
  if (iVar11 == -0x3fff) {
    iVar15 = 0;
    iVar11 = 0;
    do {
      if (local_14[iVar11] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        goto LAB_0040ce47;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
  }
  else {
    uVar5 = DAT_00418eb8 - 1;
    bVar4 = false;
    iVar15 = (int)(((int)DAT_00418eb8 >> 0x1f & 0x1fU) + DAT_00418eb8) >> 5;
    cVar7 = (char)(DAT_00418eb8 & 0x8000001f);
    if ((int)(DAT_00418eb8 & 0x8000001f) < 0) {
      cVar7 = (cVar7 - 1U | 0xe0) + 1;
    }
    bVar8 = 0x1f - cVar7;
    if ((local_14[iVar15] & 1 << (bVar8 & 0x1f)) != 0) {
      uVar6 = local_14[iVar15] & ~(-1 << (bVar8 & 0x1f));
      iVar12 = iVar15;
      while (uVar6 == 0) {
        iVar12 = iVar12 + 1;
        if (2 < iVar12) goto LAB_0040cf47;
        uVar6 = local_14[iVar12];
      }
      iVar12 = (int)(((int)uVar5 >> 0x1f & 0x1fU) + uVar5) >> 5;
      cVar7 = (char)(uVar5 & 0x8000001f);
      if ((int)(uVar5 & 0x8000001f) < 0) {
        cVar7 = (cVar7 - 1U | 0xe0) + 1;
      }
      bVar4 = false;
      uVar6 = 1 << (0x1fU - cVar7 & 0x1f);
      uVar9 = uVar6 + local_14[iVar12];
      bVar3 = false;
      if ((uVar9 < local_14[iVar12]) || (uVar9 < uVar6)) {
        bVar3 = true;
        bVar4 = true;
      }
      local_14[iVar12] = uVar9;
      while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar3))) {
        bVar3 = false;
        bVar4 = false;
        uVar6 = local_14[iVar12] + 1;
        if ((uVar6 < local_14[iVar12]) || (uVar6 == 0)) {
          bVar3 = true;
          bVar4 = true;
        }
        local_14[iVar12] = uVar6;
      }
    }
LAB_0040cf47:
    local_14[iVar15] = local_14[iVar15] & -1 << (bVar8 & 0x1f);
    iVar15 = iVar15 + 1;
    if (iVar15 < 3) {
      iVar12 = 3 - iVar15;
      puVar13 = local_14 + iVar15;
      while (iVar12 != 0) {
        iVar12 = iVar12 + -1;
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
    }
    iVar15 = iVar11;
    if (bVar4) {
      iVar15 = uVar10 - 0x3ffe;
    }
    if (iVar15 < (int)(DAT_00418eb4 - DAT_00418eb8)) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (DAT_00418eb4 < iVar15) {
        if (iVar15 < _DAT_00418eb0) {
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar15 = DAT_00418ec4 + iVar15;
          iVar11 = (int)(DAT_00418ebc + ((int)DAT_00418ebc >> 0x1f & 0x1fU)) >> 5;
          bVar8 = (byte)(DAT_00418ebc & 0x8000001f);
          if ((int)(DAT_00418ebc & 0x8000001f) < 0) {
            bVar8 = (bVar8 - 1 | 0xe0) + 1;
          }
          local_24 = 0;
          iVar14 = 0;
          do {
            uVar16 = local_14[iVar14] >> (bVar8 & 0x1f) | local_24;
            local_24 = (local_14[iVar14] & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
            local_14[iVar14] = uVar16;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
          iVar14 = 2;
          do {
            if (iVar14 < iVar11) {
              local_14[iVar14] = 0;
            }
            else {
              local_14[iVar14] = *puVar13;
            }
            puVar13 = puVar13 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar11 = (int)(DAT_00418ebc + ((int)DAT_00418ebc >> 0x1f & 0x1fU)) >> 5;
          bVar8 = (byte)(DAT_00418ebc & 0x8000001f);
          if ((int)(DAT_00418ebc & 0x8000001f) < 0) {
            bVar8 = (bVar8 - 1 | 0xe0) + 1;
          }
          local_24 = 0;
          do {
            uVar16 = local_14[iVar14] >> (bVar8 & 0x1f) | local_24;
            local_24 = (local_14[iVar14] & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
            local_14[iVar14] = uVar16;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
          iVar14 = 2;
          do {
            if (iVar14 < iVar11) {
              local_14[iVar14] = 0;
            }
            else {
              local_14[iVar14] = *puVar13;
            }
            puVar13 = puVar13 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar15 = DAT_00418ec4 + _DAT_00418eb0;
        }
        goto LAB_0040d2f8;
      }
      uVar10 = DAT_00418eb4 - iVar11;
      local_14[0] = uVar16;
      iVar11 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      local_14[1] = uVar17;
      local_14[2] = (uint)uVar2 << 0x10;
      bVar8 = (byte)(uVar10 & 0x8000001f);
      if ((int)(uVar10 & 0x8000001f) < 0) {
        bVar8 = (bVar8 - 1 | 0xe0) + 1;
      }
      local_24 = 0;
      do {
        uVar16 = local_14[iVar14] >> (bVar8 & 0x1f) | local_24;
        local_24 = (local_14[iVar14] & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
        local_14[iVar14] = uVar16;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
      puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
      iVar14 = 2;
      do {
        if (iVar14 < iVar11) {
          local_14[iVar14] = 0;
        }
        else {
          local_14[iVar14] = *puVar13;
        }
        puVar13 = puVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      iVar11 = (int)(((int)DAT_00418eb8 >> 0x1f & 0x1fU) + DAT_00418eb8) >> 5;
      cVar7 = (char)(DAT_00418eb8 & 0x8000001f);
      if ((int)(DAT_00418eb8 & 0x8000001f) < 0) {
        cVar7 = (cVar7 - 1U | 0xe0) + 1;
      }
      bVar8 = 0x1f - cVar7;
      if ((local_14[iVar11] & 1 << (bVar8 & 0x1f)) != 0) {
        uVar16 = local_14[iVar11] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar11;
        while (uVar16 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_0040d102;
          uVar16 = local_14[iVar14];
        }
        iVar14 = (int)(((int)uVar5 >> 0x1f & 0x1fU) + uVar5) >> 5;
        cVar7 = (char)(uVar5 & 0x8000001f);
        if ((int)(uVar5 & 0x8000001f) < 0) {
          cVar7 = (cVar7 - 1U | 0xe0) + 1;
        }
        uVar16 = 1 << (0x1fU - cVar7 & 0x1f);
        bVar4 = false;
        uVar17 = uVar16 + local_14[iVar14];
        if ((uVar17 < local_14[iVar14]) || (uVar17 < uVar16)) {
          bVar4 = true;
        }
        local_14[iVar14] = uVar17;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          bVar4 = false;
          uVar16 = local_14[iVar14] + 1;
          if ((uVar16 < local_14[iVar14]) || (uVar16 == 0)) {
            bVar4 = true;
          }
          local_14[iVar14] = uVar16;
        }
      }
LAB_0040d102:
      local_14[iVar11] = local_14[iVar11] & -1 << (bVar8 & 0x1f);
      iVar11 = iVar11 + 1;
      if (iVar11 < 3) {
        iVar14 = 3 - iVar11;
        puVar13 = local_14 + iVar11;
        while (iVar14 != 0) {
          iVar14 = iVar14 + -1;
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      uVar16 = DAT_00418ebc + 1;
      iVar11 = (int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)(uVar16 & 0x8000001f);
      if ((int)(uVar16 & 0x8000001f) < 0) {
        bVar8 = (bVar8 - 1 | 0xe0) + 1;
      }
      local_24 = 0;
      local_38 = 0;
      do {
        uVar16 = local_14[local_38];
        local_14[local_38] = uVar16 >> (bVar8 & 0x1f) | local_24;
        local_24 = (uVar16 & ~(-1 << (bVar8 & 0x1f))) << (0x20 - bVar8 & 0x1f);
        local_38 = local_38 + 1;
      } while (local_38 < 3);
      puVar13 = local_14 + iVar11 * 0x3fffffff + 2;
      iVar14 = 2;
      do {
        if (iVar14 < iVar11) {
          local_14[iVar14] = 0;
        }
        else {
          local_14[iVar14] = *puVar13;
        }
        puVar13 = puVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
LAB_0040ce47:
    iVar15 = 0;
  }
LAB_0040d2f8:
  uVar16 = iVar15 << (0x1fU - (char)DAT_00418ebc & 0x1f) |
           -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_14[0];
  if (DAT_00418ec0 == 0x40) {
    param_2[1] = uVar16;
    *param_2 = local_14[1];
  }
  else {
    if (DAT_00418ec0 == 0x20) {
      *param_2 = uVar16;
    }
  }
  FUN_00404f47();
  return;
}



// WARNING: Type propagation algorithm not settling

void __cdecl
FUN_0040d344(ushort *param_1,char **param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  uint uVar17;
  char *pcVar18;
  undefined **ppuVar19;
  ushort *puVar20;
  undefined4 uVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ushort *puVar26;
  undefined4 uVar27;
  ushort uVar28;
  char *pcVar29;
  int iVar30;
  uint uVar31;
  int local_70;
  uint local_6c;
  undefined **local_68;
  char local_59;
  int local_58;
  char *local_54;
  uint local_50;
  undefined2 local_4c;
  undefined2 uStack74;
  undefined2 uStack72;
  undefined2 uStack70;
  undefined *local_44;
  ushort local_40;
  ushort uStack62;
  ushort uStack60;
  undefined2 uStack58;
  ushort uStack56;
  ushort uStack54;
  byte local_30;
  undefined uStack47;
  ushort uStack46;
  ushort local_2c [4];
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_70 = 1;
  iVar10 = 0;
  uVar6 = 0;
  pcVar29 = local_24;
  local_50 = 0;
  bVar3 = false;
  bVar5 = false;
  bVar4 = false;
  local_58 = 0;
  if (param_8 != (int *)0x0) {
    local_54 = param_3;
    while ((((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
           (cVar1 == '\r'))) {
      param_3 = param_3 + 1;
    }
LAB_0040d3c4:
    pcVar18 = param_3;
    iVar23 = 0;
    local_59 = *pcVar18;
    param_3 = pcVar18 + 1;
    switch(iVar10) {
    case 0:
      if (8 < (byte)(local_59 - 0x31U)) {
        if (local_59 == ***(char ***)(*param_8 + 0x84)) {
LAB_0040d3f8:
          iVar10 = 5;
        }
        else {
          if (local_59 == '+') {
            iVar10 = 2;
            uVar6 = 0;
          }
          else {
            if (local_59 == '-') {
              iVar10 = 2;
              uVar6 = 0x8000;
            }
            else {
              if (local_59 != '0') goto LAB_0040d6a0;
LAB_0040d412:
              iVar10 = 1;
            }
          }
        }
        goto LAB_0040d3c4;
      }
      break;
    case 1:
      bVar3 = true;
      if (8 < (byte)(local_59 - 0x31U)) {
        if (local_59 == ***(char ***)(*param_8 + 0x84)) goto LAB_0040d44a;
        if ((local_59 != '+') && (local_59 != '-')) {
          if (local_59 != '0') goto LAB_0040d45d;
          goto LAB_0040d412;
        }
        goto LAB_0040d47e;
      }
      break;
    case 2:
      if (8 < (byte)(local_59 - 0x31U)) {
        if (local_59 == ***(char ***)(*param_8 + 0x84)) goto LAB_0040d3f8;
        pcVar18 = local_54;
        if (local_59 == '0') goto LAB_0040d412;
        goto LAB_0040d6a4;
      }
      break;
    case 3:
      while (('/' < local_59 && (local_59 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar29 = local_59 + -0x30;
          pcVar29 = pcVar29 + 1;
        }
        else {
          local_58 = local_58 + 1;
        }
        local_59 = *param_3;
        param_3 = param_3 + 1;
      }
      if (local_59 != ***(char ***)(*param_8 + 0x84)) {
        if ((local_59 == '+') || (local_59 == '-')) goto LAB_0040d47e;
LAB_0040d45d:
        bVar3 = true;
        iVar23 = 0;
        if (('C' < local_59) && ((local_59 < 'F' || ((byte)(local_59 + 0x9cU) < 2))))
        goto LAB_0040d477;
        goto LAB_0040d6a0;
      }
LAB_0040d44a:
      bVar3 = true;
      iVar10 = 4;
      goto LAB_0040d3c4;
    case 4:
      bVar3 = true;
      bVar5 = true;
      if (local_50 == 0) {
        while (local_59 == '0') {
          local_59 = *param_3;
          local_58 = local_58 + -1;
          param_3 = param_3 + 1;
        }
      }
      while (('/' < local_59 && (local_59 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar29 = local_59 + -0x30;
          pcVar29 = pcVar29 + 1;
          local_58 = local_58 + -1;
        }
        local_59 = *param_3;
        param_3 = param_3 + 1;
      }
      iVar23 = 0;
      if ((local_59 == '+') || (local_59 == '-')) {
LAB_0040d47e:
        bVar3 = true;
        iVar10 = 0xb;
        param_3 = param_3 + -1;
      }
      else {
        if ((local_59 < 'D') || (('E' < local_59 && (1 < (byte)(local_59 + 0x9cU))))) {
          pcVar18 = param_3 + -1;
          goto LAB_0040d6a4;
        }
LAB_0040d477:
        bVar3 = true;
        iVar10 = 6;
      }
      goto LAB_0040d3c4;
    case 5:
      bVar5 = true;
      pcVar18 = local_54;
      if ((byte)(local_59 - 0x30U) < 10) {
        iVar10 = 4;
        goto LAB_0040d3e3;
      }
      goto LAB_0040d6a4;
    case 6:
      local_54 = pcVar18 + -1;
      if ((byte)(local_59 - 0x31U) < 9) goto LAB_0040d5c1;
      if (local_59 == '+') goto LAB_0040d5f2;
      if (local_59 == '-') {
        iVar10 = 7;
        local_70 = 0xffffffff;
      }
      else {
LAB_0040d5d7:
        pcVar18 = local_54;
        if (local_59 != '0') goto LAB_0040d6a4;
        iVar10 = 8;
      }
      goto LAB_0040d3c4;
    case 7:
      if (8 < (byte)(local_59 - 0x31U)) goto LAB_0040d5d7;
      goto LAB_0040d5c1;
    case 8:
      bVar4 = true;
      while (local_59 == '0') {
        local_59 = *param_3;
        param_3 = param_3 + 1;
      }
      if ((byte)(local_59 - 0x31U) < 9) {
LAB_0040d5c1:
        iVar10 = 9;
        goto LAB_0040d3e3;
      }
      goto LAB_0040d6a0;
    case 9:
      iVar23 = 0;
      bVar4 = true;
      goto LAB_0040d682;
    default:
      goto switchD_0040d3d3_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_54 = pcVar18;
        if (local_59 == '+') {
LAB_0040d5f2:
          iVar10 = 7;
        }
        else {
          if (local_59 != '-') goto LAB_0040d6a4;
          local_70 = 0xffffffff;
          iVar10 = 7;
        }
        goto LAB_0040d3c4;
      }
      iVar10 = 10;
      param_3 = pcVar18;
switchD_0040d3d3_caseD_a:
      pcVar18 = param_3;
      if (iVar10 != 10) goto LAB_0040d3c4;
      goto LAB_0040d6a4;
    }
    iVar10 = 3;
LAB_0040d3e3:
    param_3 = param_3 + -1;
    goto LAB_0040d3c4;
  }
  piVar11 = __errno();
  *piVar11 = 0x16;
  FUN_00402c77();
  goto LAB_0040daab;
LAB_0040d682:
  if ((local_59 < '0') || ('9' < local_59)) goto LAB_0040d69b;
  iVar23 = (int)local_59 + -0x30 + iVar23 * 10;
  if (iVar23 < 0x1451) {
    local_59 = *param_3;
    param_3 = param_3 + 1;
    goto LAB_0040d682;
  }
  iVar23 = 0x1451;
LAB_0040d69b:
  while (('/' < local_59 && (local_59 < ':'))) {
    local_59 = *param_3;
    param_3 = param_3 + 1;
  }
LAB_0040d6a0:
  pcVar18 = param_3 + -1;
LAB_0040d6a4:
  *param_2 = pcVar18;
  if (bVar3) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar29 = pcVar29 + -1;
      local_58 = local_58 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) {
      uVar14 = 0;
      uVar22 = 0;
      uVar27 = 0;
      uVar21 = 0;
    }
    else {
      pcVar29 = pcVar29 + -1;
      cVar1 = *pcVar29;
      while (cVar1 == '\0') {
        local_50 = local_50 - 1;
        local_58 = local_58 + 1;
        pcVar29 = pcVar29 + -1;
        cVar1 = *pcVar29;
      }
      FUN_0040e5b1(local_24,local_50,&local_40);
      if (local_70 < 0) {
        iVar23 = -iVar23;
      }
      uVar24 = iVar23 + local_58;
      if (!bVar4) {
        uVar24 = uVar24 + param_5;
      }
      if (!bVar5) {
        uVar24 = uVar24 - param_6;
      }
      if (0x1450 < (int)uVar24) {
        uVar22 = 0x7fff;
        uVar27 = 0x80000000;
        goto LAB_0040da91;
      }
      if ((int)uVar24 < -0x1450) {
        uVar14 = 0;
        uVar22 = 0;
        uVar27 = 0;
        uVar21 = 0;
      }
      else {
        ppuVar19 = &PTR_DAT_00418e68;
        if (uVar24 != 0) {
          if ((int)uVar24 < 0) {
            uVar24 = -uVar24;
            ppuVar19 = (undefined **)0x418fc8;
          }
          if (param_4 == 0) {
            local_40 = 0;
          }
LAB_0040da4a:
          do {
            iVar10 = 0;
            if (uVar24 == 0) break;
            ppuVar19 = ppuVar19 + 0x15;
            uVar25 = (int)uVar24 >> 3;
            uVar12 = uVar24 & 7;
            uVar24 = uVar25;
            if (uVar12 != 0) {
              ppuVar15 = ppuVar19 + uVar12 * 3;
              ppuVar16 = ppuVar15;
              if (0x7fff < *(ushort *)ppuVar15) {
                ppuVar16 = (undefined **)&local_4c;
                local_4c = SUB42(*ppuVar15,0);
                uStack74 = (undefined2)((uint)*ppuVar15 >> 0x10);
                uStack72 = SUB42(ppuVar15[1],0);
                uStack70 = (undefined2)((uint)ppuVar15[1] >> 0x10);
                local_44 = ppuVar15[2];
                iVar23 = CONCAT22(uStack72,uStack74) + -1;
                uStack74 = (undefined2)iVar23;
                uStack72 = (undefined2)((uint)iVar23 >> 0x10);
              }
              uVar14 = (*(ushort *)((int)ppuVar16 + 10) ^ uStack54) & 0x8000;
              local_30 = 0;
              uStack47 = 0;
              uStack46 = 0;
              uVar9 = uStack54 & 0x7fff;
              local_2c[0] = 0;
              uVar28 = *(ushort *)((int)ppuVar16 + 10) & 0x7fff;
              uVar22 = uVar28 + uVar9;
              local_2c[1] = uStack46;
              local_2c[2] = local_2c[0];
              local_2c[3] = uStack46;
              if (((uVar9 < 0x7fff) && (uVar28 < 0x7fff)) && (uVar22 < 0xbffe)) {
                uVar7 = local_2c[0];
                uVar8 = uStack46;
                if (0x3fbf < uVar22) {
                  if (((uVar9 == 0) &&
                      (uVar22 = uVar22 + 1, (CONCAT22(uStack54,uStack56) & 0x7fffffff) == 0)) &&
                     ((CONCAT22(uStack58,uStack60) == 0 && (CONCAT22(uStack62,local_40) == 0)))) {
                    uStack54 = 0;
                    goto LAB_0040da4a;
                  }
                  if (((uVar28 != 0) || (uVar22 = uVar22 + 1, ((uint)ppuVar16[2] & 0x7fffffff) != 0)
                      ) || ((ppuVar16[1] != (undefined *)0x0 ||
                            (uVar7 = local_2c[0], uVar8 = uStack46, *ppuVar16 != (undefined *)0x0)))
                     ) {
                    puVar20 = local_2c;
                    local_6c = 5;
                    iVar23 = iVar10;
                    do {
                      if (0 < (int)local_6c) {
                        puVar26 = (ushort *)(&local_40 + iVar23);
                        local_68 = ppuVar16 + 2;
                        iVar30 = local_6c;
                        do {
                          uVar12 = (uint)*puVar26 * (uint)*(ushort *)local_68 +
                                   *(int *)(puVar20 + -2);
                          if ((uVar12 < *(uint *)(puVar20 + -2)) ||
                             (iVar13 = iVar10, uVar12 < (uint)*puVar26 * (uint)*(ushort *)local_68))
                          {
                            iVar13 = 1;
                          }
                          *(uint *)(puVar20 + -2) = uVar12;
                          if (iVar13 != 0) {
                            *puVar20 = *puVar20 + 1;
                          }
                          local_68 = (undefined **)((int)local_68 + -2);
                          puVar26 = puVar26 + 1;
                          iVar30 = iVar30 + -1;
                        } while (0 < iVar30);
                      }
                      puVar20 = puVar20 + 1;
                      iVar23 = iVar23 + 1;
                      local_6c = local_6c + -1;
                    } while (0 < (int)local_6c);
                    local_54 = (char *)CONCAT22(local_2c[3],local_2c[2]);
                    uVar22 = uVar22 + 0xc002;
                    uVar12 = CONCAT22(uStack46,CONCAT11(uStack47,local_30));
                    if ((short)uVar22 < 1) {
LAB_0040d919:
                      uVar22 = uVar22 - 1;
                      if (-1 < (short)uVar22) goto LAB_0040d982;
                      local_6c = (uint)(ushort)-uVar22;
                      uVar22 = 0;
                      uVar25 = (uint)local_54;
                      do {
                        if ((local_30 & 1) != 0) {
                          iVar10 = iVar10 + 1;
                        }
                        uVar2 = CONCAT22(local_2c[1],local_2c[0]);
                        local_2c[1] = local_2c[1] >> 1 | (ushort)((uVar25 << 0x1f) >> 0x10);
                        uVar17 = uVar2 << 0x1f;
                        uVar31 = uVar12 >> 1;
                        local_54 = (char *)(uVar25 >> 1);
                        uVar12 = uVar31 | uVar17;
                        local_6c = local_6c - 1;
                        local_2c[2] = (ushort)local_54;
                        local_2c[3] = (ushort)(uVar25 >> 0x11);
                        local_2c[0] = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar31;
                        uStack47 = (undefined)(uVar31 >> 8);
                        uStack46 = (ushort)(uVar12 >> 0x10);
                        uVar25 = (uint)local_54;
                      } while (local_6c != 0);
                      if (iVar10 == 0) goto LAB_0040d982;
                      uVar9 = (ushort)uVar31 | 1;
                      local_30 = (byte)uVar9;
                      uVar12 = uVar31 & 0xffff0000 | uVar17 | uVar31 & 0xffff | 1;
                    }
                    else {
                      do {
                        if ((int)local_54 < 0) break;
                        iVar23 = CONCAT22(local_2c[1],local_2c[0]) * 2;
                        uVar9 = local_2c[1] >> 0xf;
                        local_2c[0] = (ushort)iVar23 | (ushort)(uVar12 >> 0x1f);
                        uVar12 = uVar12 * 2;
                        local_2c[1] = (ushort)((uint)iVar23 >> 0x10);
                        uVar25 = (int)local_54 * 2;
                        local_30 = (byte)uVar12;
                        uStack47 = (undefined)(uVar12 >> 8);
                        uStack46 = (ushort)(uVar12 >> 0x10);
                        local_54 = (char *)(uVar25 | uVar9);
                        uVar22 = uVar22 - 1;
                        local_2c[2] = (ushort)local_54;
                        local_2c[3] = (ushort)(uVar25 >> 0x10);
                      } while (0 < (short)uVar22);
                      if ((short)uVar22 < 1) goto LAB_0040d919;
LAB_0040d982:
                      uVar9 = CONCAT11(uStack47,local_30);
                    }
                    if ((0x8000 < uVar9) || ((uVar12 & 0x1ffff) == 0x18000)) {
                      if (CONCAT22(local_2c[0],uStack46) == -1) {
                        uStack46 = 0;
                        local_2c[0] = 0;
                        if (CONCAT22(local_2c[2],local_2c[1]) == -1) {
                          local_2c[1] = 0;
                          local_2c[2] = 0;
                          if (local_2c[3] == 0xffff) {
                            local_2c[3] = 0x8000;
                            uVar22 = uVar22 + 1;
                          }
                          else {
                            local_2c[3] = local_2c[3] + 1;
                          }
                        }
                        else {
                          iVar10 = CONCAT22(local_2c[2],local_2c[1]) + 1;
                          local_2c[1] = (ushort)iVar10;
                          local_2c[2] = (ushort)((uint)iVar10 >> 0x10);
                        }
                        local_54 = (char *)CONCAT22(local_2c[3],local_2c[2]);
                      }
                      else {
                        iVar10 = CONCAT22(local_2c[0],uStack46) + 1;
                        uStack46 = (ushort)iVar10;
                        local_2c[0] = (ushort)((uint)iVar10 >> 0x10);
                      }
                    }
                    if (uVar22 < 0x7fff) {
                      local_40 = uStack46;
                      uStack62 = local_2c[0];
                      uStack60 = local_2c[1];
                      uStack58 = SUB42(local_54,0);
                      uStack56 = (ushort)((uint)local_54 >> 0x10);
                      uStack54 = uVar22 | uVar14;
                    }
                    else {
                      uStack60 = 0;
                      uStack58 = 0;
                      local_40 = 0;
                      uStack62 = 0;
                      iVar10 = ((uint)(uVar14 == 0) - 1 & 0x80000000) + 0x7fff8000;
                      uStack56 = (ushort)iVar10;
                      uStack54 = (ushort)((uint)iVar10 >> 0x10);
                    }
                    goto LAB_0040da4a;
                  }
                }
              }
              else {
                iVar10 = ((uint)(uVar14 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack56 = (ushort)iVar10;
                uStack54 = (ushort)((uint)iVar10 >> 0x10);
                uVar7 = uStack56;
                uVar8 = uStack54;
              }
              uStack54 = uVar8;
              uStack56 = uVar7;
              uStack60 = 0;
              uStack58 = 0;
              local_40 = 0;
              uStack62 = 0;
            }
          } while( true );
        }
        uVar21 = CONCAT22(uStack60,uStack62);
        uVar27 = CONCAT22(uStack56,uStack58);
        uVar22 = uStack54;
        uVar14 = local_40;
      }
    }
  }
  else {
    uVar22 = 0;
    uVar27 = 0;
LAB_0040da91:
    uVar14 = 0;
    uVar21 = 0;
  }
  param_1[5] = uVar22 | uVar6;
  *param_1 = uVar14;
  *(undefined4 *)(param_1 + 1) = uVar21;
  *(undefined4 *)(param_1 + 3) = uVar27;
LAB_0040daab:
  FUN_00404f47();
  return;
}



void __cdecl
FUN_0040daec(double *param_1,char *param_2,size_t param_3,int param_4,int param_5,int param_6)

{
  __cfltcvt_l(param_1,param_2,param_3,param_4,param_5,param_6,(_locale_t)0x0);
  return;
}



// Library Function - Single Match
// Name: __cfltcvt_l
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
// Visual Studio 2012 Release

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = FUN_0040e05e((undefined4 *)arg,buffer,sizeInBytes,precision,caps,
                         (pthreadlocinfo *)plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = FUN_0040e218((undefined4 *)arg,buffer,sizeInBytes,precision,(pthreadlocinfo *)plocinfo
                          );
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      eVar1 = FUN_0040db93((uint *)arg,buffer,sizeInBytes,precision,caps,(pthreadlocinfo *)plocinfo)
      ;
    }
    else {
      eVar1 = FUN_0040e2d9((undefined4 *)arg,buffer,sizeInBytes,precision,caps,
                           (pthreadlocinfo *)plocinfo);
    }
  }
  return eVar1;
}



int __cdecl
FUN_0040db93(uint *param_1,undefined *param_2,uint param_3,uint param_4,int param_5,
            pthreadlocinfo *param_6)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  char extraout_CL;
  uint uVar10;
  uint extraout_ECX;
  uint extraout_ECX_00;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  int iVar15;
  int local_30 [2];
  int local_28;
  char local_24;
  uint local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  local_c = 0x3ff;
  local_8 = 0x30;
  FUN_00402d4b(local_30,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    piVar5 = __errno();
    iVar15 = 0x16;
  }
  else {
    *param_2 = 0;
    if (param_4 + 0xb < param_3) {
      local_18 = *param_1;
      if ((param_1[1] >> 0x14 & 0x7ff) == 0x7ff) {
        uVar6 = 0xffffffff;
        if (param_3 != 0xffffffff) {
          uVar6 = param_3 - 2;
        }
        iVar15 = FUN_0040deef(param_1,param_2 + 2,uVar6,param_4,0);
        if (iVar15 == 0) {
          if (param_2[2] == '-') {
            *param_2 = 0x2d;
            param_2 = param_2 + 1;
          }
          *param_2 = 0x30;
          param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
          pbVar7 = FUN_0040edf0(param_2 + 2,0x65);
          if (pbVar7 != (byte *)0x0) {
            *pbVar7 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
            pbVar7[3] = 0;
          }
          iVar15 = 0;
        }
        else {
          *param_2 = 0;
        }
        goto LAB_0040ded9;
      }
      if ((param_1[1] & 0x80000000) != 0) {
        *param_2 = 0x2d;
        param_2 = param_2 + 1;
      }
      *param_2 = 0x30;
      param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
      iVar15 = (-(uint)(param_5 != 0) & 0xffffffe0) + 0x27;
      if ((param_1[1] & 0x7ff00000) == 0) {
        param_2[2] = 0x30;
        if ((*param_1 | param_1[1] & 0xfffff) == 0) {
          local_c = 0;
        }
        else {
          local_c = 0x3fe;
        }
      }
      else {
        param_2[2] = 0x31;
      }
      local_10 = (int *)(param_2 + 3);
      piVar5 = (int *)(param_2 + 4);
      if (param_4 == 0) {
        *(char *)local_10 = '\0';
      }
      else {
        *(char *)local_10 = ***(char ***)(local_30[0] + 0x84);
      }
      local_1c = param_1[1] & 0xfffff;
      local_14 = iVar15;
      if ((local_1c != 0) || (*param_1 != 0)) {
        do {
          sVar3 = (short)local_8;
          if ((int)param_4 < 1) break;
          sVar3 = __aullshr();
          cVar2 = (char)(sVar3 + 0x30U);
          if (0x39 < (ushort)(sVar3 + 0x30U)) {
            cVar2 = cVar2 + (char)iVar15;
          }
          *(char *)piVar5 = cVar2;
          piVar5 = (int *)((int)piVar5 + 1);
          local_8 = local_8 + -4;
          param_4 = param_4 - 1;
          sVar3 = (short)local_8;
        } while (-1 < sVar3);
        if ((-1 < sVar3) && (uVar4 = __aullshr(), piVar1 = piVar5, 8 < uVar4)) {
          while( true ) {
            piVar8 = (int *)((int)piVar1 + -1);
            if ((*(char *)piVar8 != 'f') && (*(char *)piVar8 != 'F')) break;
            *(char *)piVar8 = '0';
            piVar1 = piVar8;
          }
          if (piVar8 == local_10) {
            *(char *)((int)piVar1 + -2) = *(char *)((int)piVar1 + -2) + '\x01';
          }
          else {
            if (*(char *)piVar8 == '9') {
              *(char *)piVar8 = (char)local_14 + ':';
            }
            else {
              *(char *)piVar8 = *(char *)piVar8 + '\x01';
            }
          }
        }
      }
      if (0 < (int)param_4) {
        FUN_00407390(piVar5,0x30,param_4);
        piVar5 = (int *)((int)piVar5 + param_4);
      }
      if (*(char *)local_10 == '\0') {
        piVar5 = local_10;
      }
      *(byte *)piVar5 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      uVar9 = __aullshr();
      uVar9 = uVar9 & 0x7ff;
      uVar10 = uVar9 - local_c;
      uVar6 = -(uint)(uVar9 < local_c);
      if (uVar9 < local_c) {
        *(char *)((int)piVar5 + 1) = '-';
        bVar13 = uVar10 != 0;
        uVar10 = -uVar10;
        uVar6 = -(uVar6 + bVar13);
      }
      else {
        *(char *)((int)piVar5 + 1) = '+';
      }
      pcVar11 = (char *)((int)piVar5 + 2);
      *pcVar11 = '0';
      pcVar12 = pcVar11;
      if (-1 < (int)uVar6) {
        if (((int)uVar6 < 1) && (uVar10 < 1000)) {
LAB_0040de8a:
          if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar10 < 100)))) goto LAB_0040dea9;
        }
        else {
          uVar14 = __alldvrm(uVar10,uVar6,1000,0);
          local_1c = (uint)((ulonglong)uVar14 >> 0x20);
          *pcVar11 = (char)uVar14 + '0';
          pcVar12 = (char *)((int)piVar5 + 3);
          uVar10 = extraout_ECX;
          if (pcVar12 == pcVar11) goto LAB_0040de8a;
        }
        uVar14 = __alldvrm(uVar10,uVar6,100,0);
        local_1c = (uint)((ulonglong)uVar14 >> 0x20);
        *pcVar12 = (char)uVar14 + '0';
        pcVar12 = pcVar12 + 1;
        uVar10 = extraout_ECX_00;
      }
LAB_0040dea9:
      cVar2 = (char)uVar10;
      if ((pcVar12 != pcVar11) || ((-1 < (int)uVar6 && ((0 < (int)uVar6 || (9 < uVar10)))))) {
        uVar14 = __alldvrm(uVar10,uVar6,10,0);
        *pcVar12 = (char)uVar14 + '0';
        pcVar12 = pcVar12 + 1;
        cVar2 = extraout_CL;
      }
      iVar15 = 0;
      *pcVar12 = cVar2 + '0';
      pcVar12[1] = '\0';
      goto LAB_0040ded9;
    }
    piVar5 = __errno();
    iVar15 = 0x22;
  }
  *piVar5 = iVar15;
  FUN_00402c77();
LAB_0040ded9:
  if (local_24 != '\0') {
    *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
  }
  return iVar15;
}



void __cdecl
FUN_0040deef(undefined4 *param_1,undefined *param_2,uint param_3,int param_4,int param_5)

{
  FUN_0040e05e(param_1,param_2,param_3,param_4,param_5,(pthreadlocinfo *)0x0);
  return;
}



int __cdecl
FUN_0040df0d(undefined *param_1,uint param_2,int param_3,int param_4,int *param_5,char param_6,
            pthreadlocinfo *param_7)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  errno_t eVar4;
  int iVar5;
  char cVar6;
  undefined *_SizeInBytes;
  char *_Dst;
  int iVar7;
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_7);
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    piVar2 = __errno();
    iVar7 = 0x16;
  }
  else {
    iVar7 = 0;
    iVar3 = param_3;
    if (param_3 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_2) {
      if (param_6 != '\0') {
        __shift(param_1 + (*param_5 == 0x2d),(uint)(0 < param_3));
      }
      _SizeInBytes = param_1;
      if (*param_5 == 0x2d) {
        *param_1 = 0x2d;
        _SizeInBytes = param_1 + 1;
      }
      if (0 < param_3) {
        *_SizeInBytes = _SizeInBytes[1];
        _SizeInBytes = _SizeInBytes + 1;
        *_SizeInBytes = *(undefined *)**(undefined4 **)(local_14[0] + 0x84);
      }
      _Dst = _SizeInBytes + (uint)(param_6 == '\0') + param_3;
      _SizeInBytes = (undefined *)0xffffffff;
      if (param_2 != 0xffffffff) {
        _SizeInBytes = param_1 + (param_2 - (int)_Dst);
      }
      eVar4 = _strcpy_s(_Dst,(rsize_t)_SizeInBytes,"e+000");
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (param_4 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_5[3] != '0') {
        iVar3 = param_5[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          iVar5 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar5;
        }
        cVar6 = (char)iVar3;
        if (9 < iVar3) {
          cVar6 = (char)(iVar3 % 10);
          _Dst[3] = _Dst[3] + (char)(iVar3 / 10);
        }
        _Dst[4] = _Dst[4] + cVar6;
      }
      if (((DAT_00419f44 & 1) != 0) && (_Dst[2] == '0')) {
        FID_conflict__memcpy(_Dst + 2,_Dst + 3,3);
      }
      goto LAB_0040e03e;
    }
    piVar2 = __errno();
    iVar7 = 0x22;
  }
  *piVar2 = iVar7;
  FUN_00402c77();
LAB_0040e03e:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar7;
}



void __cdecl
FUN_0040e05e(undefined4 *param_1,undefined *param_2,uint param_3,int param_4,int param_5,
            pthreadlocinfo *param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_30 [4];
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_0040f09f(*param_1,param_1[1],local_30,local_20,0x16);
  if (param_2 == (undefined *)0x0) {
    piVar1 = __errno();
  }
  else {
    if (param_3 != 0) {
      uVar3 = 0xffffffff;
      if (param_3 != 0xffffffff) {
        uVar3 = (param_3 - (local_30[0] == 0x2d)) - (uint)(0 < param_4);
      }
      iVar2 = FUN_0040ef27(param_2 + (uint)(0 < param_4) + (uint)(local_30[0] == 0x2d),uVar3,
                           param_4 + 1,(int)local_30);
      if (iVar2 == 0) {
        FUN_0040df0d(param_2,param_3,param_4,param_5,local_30,'\0',param_6);
      }
      else {
        *param_2 = 0;
      }
      goto LAB_0040e11b;
    }
    piVar1 = __errno();
  }
  *piVar1 = 0x16;
  FUN_00402c77();
LAB_0040e11b:
  FUN_00404f47();
  return;
}



undefined4 __cdecl
FUN_0040e12c(char *param_1,int param_2,uint param_3,int *param_4,char param_5,
            pthreadlocinfo *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_18 [2];
  int local_10;
  char local_c;
  uint local_8;
  
  local_8 = param_4[1] - 1;
  FUN_00402d4b(local_18,param_6);
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    piVar2 = __errno();
    uVar3 = 0x16;
    *piVar2 = 0x16;
    FUN_00402c77();
  }
  else {
    uVar3 = 0;
    if ((param_5 != '\0') && (local_8 == param_3)) {
      *(undefined2 *)(param_1 + (*param_4 == 0x2d) + local_8) = 0x30;
    }
    if (*param_4 == 0x2d) {
      *param_1 = '-';
      param_1 = param_1 + 1;
    }
    if (param_4[1] < 1) {
      __shift(param_1,1);
      *param_1 = '0';
      param_1 = param_1 + 1;
    }
    else {
      param_1 = param_1 + param_4[1];
    }
    if (0 < (int)param_3) {
      __shift(param_1,1);
      *param_1 = ***(char ***)(local_18[0] + 0x84);
      iVar1 = param_4[1];
      if (iVar1 < 0) {
        if (param_5 == '\0') {
          if (SBORROW4(param_3,-iVar1) == (int)(param_3 + iVar1) < 0) {
            param_3 = -iVar1;
          }
        }
        else {
          param_3 = -iVar1;
        }
        __shift(param_1 + 1,param_3);
        FUN_00407390((int *)(param_1 + 1),0x30,param_3);
      }
    }
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return uVar3;
}



void __cdecl
FUN_0040e218(undefined4 *param_1,char *param_2,int param_3,uint param_4,pthreadlocinfo *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_0040f09f(*param_1,param_1[1],&local_30,local_20,0x16);
  if (param_2 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
  }
  else {
    if (param_3 == 0) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00402c77();
    }
    else {
      uVar3 = 0xffffffff;
      if (param_3 != -1) {
        uVar3 = param_3 - (uint)(local_30 == 0x2d);
      }
      iVar2 = FUN_0040ef27(param_2 + (local_30 == 0x2d),uVar3,local_2c + param_4,(int)&local_30);
      if (iVar2 == 0) {
        FUN_0040e12c(param_2,param_3,param_4,&local_30,'\0',param_5);
      }
      else {
        *param_2 = '\0';
      }
    }
  }
  FUN_00404f47();
  return;
}



void __cdecl
FUN_0040e2d9(undefined4 *param_1,char *param_2,uint param_3,uint param_4,int param_5,
            pthreadlocinfo *param_6)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int local_34;
  int local_30;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_0040f09f(*param_1,param_1[1],&local_34,local_20,0x16);
  if (param_2 == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00402c77();
  }
  else {
    if (param_3 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00402c77();
    }
    else {
      local_24 = local_30 + -1;
      uVar3 = 0xffffffff;
      if (param_3 != 0xffffffff) {
        uVar3 = param_3 - (local_34 == 0x2d);
      }
      iVar4 = FUN_0040ef27(param_2 + (local_34 == 0x2d),uVar3,param_4,(int)&local_34);
      if (iVar4 == 0) {
        local_30 = local_30 + -1;
        if ((local_30 < -4) || ((int)param_4 <= local_30)) {
          FUN_0040df0d(param_2,param_3,param_4,param_5,&local_34,'\x01',param_6);
        }
        else {
          pcVar1 = param_2 + (local_34 == 0x2d);
          if (local_24 < local_30) {
            do {
              pcVar5 = pcVar1;
              pcVar1 = pcVar5 + 1;
            } while (*pcVar5 != '\0');
            pcVar5[-1] = '\0';
          }
          FUN_0040e12c(param_2,param_3,param_4,&local_34,'\x01',param_6);
        }
      }
      else {
        *param_2 = '\0';
      }
    }
  }
  FUN_00404f47();
  return;
}



void __cdecl FUN_0040e3d8(char *param_1)

{
  FUN_0040e3e9(param_1,(pthreadlocinfo *)0x0);
  return;
}



void __cdecl FUN_0040e3e9(char *param_1,pthreadlocinfo *param_2)

{
  char cVar1;
  char *pcVar2;
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == ***(char ***)(local_14[0] + 0x84)) break;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar2 = param_1;
      if ((cVar1 == '\0') || (cVar1 == 'e')) break;
    } while (cVar1 != 'E');
    do {
      pcVar2 = pcVar2;
      pcVar2 = pcVar2 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == ***(char ***)(local_14[0] + 0x84)) {
      pcVar2 = pcVar2 + -2;
    }
    do {
      cVar1 = *param_1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



void __cdecl FUN_0040e469(uint param_1,uint *param_2,char *param_3)

{
  FUN_0040e481(param_1,param_2,param_3,(pthreadlocinfo *)0x0);
  return;
}



void __cdecl FUN_0040e481(uint param_1,uint *param_2,char *param_3,pthreadlocinfo *param_4)

{
  uint local_c;
  uint local_8;
  
  if (param_1 == 0) {
    FUN_0040c7c7(&param_1,param_3,param_4);
    *param_2 = param_1;
  }
  else {
    FUN_0040c739(&local_c,param_3,param_4);
    *param_2 = local_c;
    param_2[1] = local_8;
  }
  return;
}



void __cdecl FUN_0040e4c3(byte *param_1)

{
  FUN_0040e4d4(param_1,(pthreadlocinfo *)0x0);
  return;
}



void __cdecl FUN_0040e4d4(byte *param_1,pthreadlocinfo *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  iVar2 = _tolower((int)(char)*param_1);
  bVar4 = iVar2 == 0x65;
  while (!bVar4) {
    param_1 = param_1 + 1;
    iVar2 = _isdigit((uint)*param_1);
    bVar4 = iVar2 == 0;
  }
  iVar2 = _tolower((int)(char)*param_1);
  if (iVar2 == 0x78) {
    param_1 = param_1 + 2;
  }
  bVar3 = *param_1;
  *param_1 = ***(byte ***)(local_14[0] + 0x84);
  do {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    *param_1 = bVar3;
    bVar3 = bVar1;
  } while (*param_1 != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



// Library Function - Single Match
// Name: __positive
// Library: Visual Studio 2012 Release

int __cdecl __positive(double *arg)

{
  bool in_PF;
  
  if (!in_PF) {
    return 1;
  }
  return 0;
}



// Library Function - Single Match
// Name: __shift
// Library: Visual Studio 2012 Release

void __cdecl __shift(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FID_conflict__memcpy(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}



// Library Function - Single Match
// Name: __setdefaultprecision
// Library: Visual Studio 2012 Release

void __setdefaultprecision(void)

{
  code *pcVar1;
  errno_t eVar2;
  
  eVar2 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar2 == 0) {
    return;
  }
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __cdecl FUN_0040e5b1(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_10;
  uint local_c;
  
  puVar3 = param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)0x0;
    local_10 = 0;
    local_c = 0;
    do {
      uVar7 = *puVar3;
      uVar6 = puVar3[1];
      uVar10 = puVar3[2];
      uVar1 = local_10 * 4;
      uVar8 = ((int)param_3 * 2 | local_10 >> 0x1f) * 2 | local_10 * 2 >> 0x1f;
      *puVar3 = uVar1;
      uVar11 = (local_c * 2 | (uint)param_3 >> 0x1f) * 2 | (uint)((int)param_3 * 2) >> 0x1f;
      puVar3[1] = uVar8;
      uVar5 = uVar7 + uVar1;
      puVar3[2] = uVar11;
      bVar2 = false;
      if ((uVar5 < uVar1) || (uVar5 < uVar7)) {
        bVar2 = true;
      }
      *puVar3 = uVar5;
      uVar7 = uVar8;
      if (bVar2) {
        bVar2 = false;
        uVar7 = uVar8 + 1;
        if ((uVar7 < uVar8) || (uVar7 == 0)) {
          bVar2 = true;
        }
        puVar3[1] = uVar7;
        if (bVar2) {
          uVar11 = uVar11 + 1;
          puVar3[2] = uVar11;
        }
      }
      bVar2 = false;
      uVar1 = uVar7 + uVar6;
      if ((uVar1 < uVar7) || (uVar1 < uVar6)) {
        bVar2 = true;
      }
      puVar3[1] = uVar1;
      if (bVar2) {
        uVar11 = uVar11 + 1;
        puVar3[2] = uVar11;
      }
      uVar7 = uVar5 * 2;
      puVar9 = (uint *)(uVar1 * 2 | uVar5 >> 0x1f);
      local_c = (uVar11 + uVar10) * 2 | uVar1 >> 0x1f;
      *puVar3 = uVar7;
      *(uint **)(puVar3 + 1) = puVar9;
      puVar3[2] = local_c;
      local_10 = uVar7 + (int)*param_1;
      if ((local_10 < uVar7) || (local_10 < (uint)(int)*param_1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      *puVar3 = local_10;
      param_3 = puVar9;
      if (bVar2) {
        bVar2 = false;
        param_3 = (uint *)((int)puVar9 + 1);
        if ((param_3 < puVar9) || (param_3 == (uint *)0x0)) {
          bVar2 = true;
        }
        *(uint **)(puVar3 + 1) = param_3;
        if (bVar2) {
          local_c = local_c + 1;
          puVar3[2] = local_c;
        }
      }
      param_2 = param_2 + -1;
      *(uint **)(puVar3 + 1) = param_3;
      param_1 = param_1 + 1;
      puVar3[2] = local_c;
    } while (param_2 != 0);
  }
  sVar4 = 0x404e;
  if (puVar3[2] == 0) {
    uVar7 = puVar3[1];
    sVar4 = 0x404e;
    do {
      uVar6 = uVar7 << 0x10 | *puVar3 >> 0x10;
      uVar10 = uVar7 >> 0x10;
      sVar4 = sVar4 + -0x10;
      *puVar3 = *puVar3 << 0x10;
      uVar7 = uVar6;
    } while (uVar10 == 0);
    puVar3[1] = uVar6;
    puVar3[2] = uVar10;
  }
  uVar7 = puVar3[2];
  if ((uVar7 & 0x8000) == 0) {
    uVar6 = *puVar3;
    uVar10 = puVar3[1];
    do {
      uVar5 = uVar10 * 2 | uVar6 >> 0x1f;
      uVar1 = uVar7 * 2;
      uVar7 = uVar1 | uVar10 >> 0x1f;
      sVar4 = sVar4 + -1;
      uVar6 = uVar6 * 2;
      uVar10 = uVar5;
    } while ((uVar1 & 0x8000) == 0);
    *puVar3 = uVar6;
    puVar3[1] = uVar5;
    puVar3[2] = uVar7;
  }
  *(short *)((int)puVar3 + 10) = sVar4;
  return;
}



// WARNING: Control flow encountered bad instruction data
// Library Function - Multiple Matches With Different Base Names
// Name: _memcpy, _memmove
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  undefined auVar16 [16];
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar13 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar15 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar15 & 3) == 0) {
      uVar9 = _Size >> 2;
      if (uVar9 < 8) goto LAB_0040eb50;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *puVar15 = *puVar13;
        puVar13 = puVar13 + -1;
        puVar15 = puVar15 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_0040eb74_caseD_1;
      case 2:
        goto switchD_0040eb74_caseD_2;
      case 3:
        goto switchD_0040eb74_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_0040eb74_caseD_1:
        *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
        return _Dst;
      case 2:
switchD_0040eb74_caseD_2:
        *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
        *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
        return _Dst;
      case 3:
switchD_0040eb74_caseD_3:
        *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
        *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
        *(undefined *)((int)puVar15 + 1) = *(undefined *)((int)puVar13 + 1);
        return _Dst;
      default:
        uVar10 = _Size - ((uint)puVar15 & 3);
        switch((uint)puVar15 & 3) {
        case 1:
          *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
          puVar13 = (undefined4 *)((int)puVar13 + -1);
          uVar9 = uVar10 >> 2;
          puVar15 = (undefined4 *)((int)puVar15 - 1);
          if (uVar9 < 8) {
LAB_0040eb50:
                    // WARNING: Could not recover jumptable at 0x0040eb52. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar8 = (void *)(*(code *)(&PTR_LAB_0040ec24)[uVar9 * 0x3fffffff])();
            return pvVar8;
          }
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar15 = *puVar13;
            puVar13 = puVar13 + -1;
            puVar15 = puVar15 + -1;
          }
          switch(uVar10 & 3) {
          case 3:
            goto switchD_0040eb74_caseD_3;
          case 2:
            goto switchD_0040eb74_caseD_2;
          case 1:
            goto switchD_0040eb74_caseD_1;
          }
          break;
        case 2:
          *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
          puVar13 = (undefined4 *)((int)puVar13 + -2);
          puVar15 = (undefined4 *)((int)puVar15 - 2);
          if (uVar9 < 8) goto LAB_0040eb50;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar15 = *puVar13;
            puVar13 = puVar13 + -1;
            puVar15 = puVar15 + -1;
          }
          switch(uVar10 & 3) {
          case 3:
            goto switchD_0040eb74_caseD_3;
          case 2:
            goto switchD_0040eb74_caseD_2;
          case 1:
            goto switchD_0040eb74_caseD_1;
          }
          break;
        case 3:
          *(undefined *)((int)puVar15 + 3) = *(undefined *)((int)puVar13 + 3);
          *(undefined *)((int)puVar15 + 2) = *(undefined *)((int)puVar13 + 2);
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)puVar15 + 1) = *(undefined *)((int)puVar13 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + -3);
          puVar15 = (undefined4 *)((int)puVar15 - 3);
          if (uVar9 < 8) goto LAB_0040eb50;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar15 = *puVar13;
            puVar13 = puVar13 + -1;
            puVar15 = puVar15 + -1;
          }
          switch(uVar10 & 3) {
          case 3:
            goto switchD_0040eb74_caseD_3;
          case 2:
            goto switchD_0040eb74_caseD_2;
          case 1:
            goto switchD_0040eb74_caseD_1;
          }
        }
      }
    }
    return _Dst;
  }
  puVar14 = (undefined *)_Dst;
  if ((DAT_00419eec >> 1 & 1) != 0) {
    while (_Size != 0) {
      _Size = _Size - 1;
      *puVar14 = *(undefined *)_Src;
      _Src = (undefined *)_Src + 1;
      puVar14 = puVar14 + 1;
    }
    return _Dst;
  }
  puVar13 = (undefined4 *)_Dst;
  if (_Size < 0x80) {
LAB_0040e9ab:
    if (((uint)_Dst & 3) != 0) {
LAB_0040e9c8:
      switch(_Size) {
      case 0:
        return _Dst;
      case 1:
        break;
      case 2:
        goto switchD_0040e9e0_caseD_2;
      case 3:
        goto switchD_0040e9e0_caseD_3;
      default:
        uVar10 = (_Size - 4) + ((uint)_Dst & 3);
        switch((uint)_Dst & 3) {
        case 0:
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 1:
          *(undefined *)_Dst = *(undefined *)_Src;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
          _Src = (undefined4 *)((int)_Src + 3);
          puVar13 = (undefined4 *)((int)_Dst + 3);
          if (7 < uVar9) {
            while (uVar9 != 0) {
              uVar9 = uVar9 - 1;
              *puVar13 = *(undefined4 *)_Src;
              _Src = (undefined4 *)_Src + 1;
              puVar13 = puVar13 + 1;
            }
            switch(uVar10 & 3) {
            case 0:
              return _Dst;
            case 3:
              goto switchD_0040e9e0_caseD_3;
            case 2:
              goto switchD_0040e9e0_caseD_2;
            }
            break;
          }
          goto LAB_0040e9e8;
        case 2:
          *(undefined *)_Dst = *(undefined *)_Src;
          uVar9 = uVar10 >> 2;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          _Src = (undefined4 *)((int)_Src + 2);
          puVar13 = (undefined4 *)((int)_Dst + 2);
          if (uVar9 < 8) goto LAB_0040e9e8;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar13 = *(undefined4 *)_Src;
            _Src = (undefined4 *)_Src + 1;
            puVar13 = puVar13 + 1;
          }
          switch(uVar10 & 3) {
          case 0:
            return _Dst;
          case 3:
            goto switchD_0040e9e0_caseD_3;
          case 2:
            goto switchD_0040e9e0_caseD_2;
          }
          break;
        case 3:
          *(undefined *)_Dst = *(undefined *)_Src;
          uVar9 = uVar10 >> 2;
          _Src = (undefined4 *)((int)_Src + 1);
          puVar13 = (undefined4 *)((int)_Dst + 1);
          if (uVar9 < 8) goto LAB_0040e9e8;
          while (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            *puVar13 = *(undefined4 *)_Src;
            _Src = (undefined4 *)_Src + 1;
            puVar13 = puVar13 + 1;
          }
          switch(uVar10 & 3) {
          case 0:
            return _Dst;
          case 3:
            goto switchD_0040e9e0_caseD_3;
          case 2:
            goto switchD_0040e9e0_caseD_2;
          }
        }
      }
      goto switchD_0040e9e0_caseD_1;
    }
  }
  else {
    if (((((uint)_Dst ^ (uint)_Src) & 0xf) == 0) && ((DAT_00418e00 >> 1 & 1) != 0)) {
      if (((uint)_Src & 0xf) != 0) {
        uVar9 = 0x10 - ((uint)_Src & 0xf);
        _Size = _Size - uVar9;
        uVar10 = uVar9 & 3;
        while (uVar10 != 0) {
          *(undefined *)puVar13 = *(undefined *)_Src;
          _Src = (void *)((int)_Src + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          uVar10 = uVar10 - 1;
        }
        uVar9 = uVar9 >> 2;
        while (uVar9 != 0) {
          *puVar13 = *(undefined4 *)_Src;
          _Src = (undefined4 *)_Src + 1;
          puVar13 = puVar13 + 1;
          uVar9 = uVar9 - 1;
        }
      }
      uVar10 = _Size >> 7;
      while (uVar10 != 0) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
        auVar16 = *(undefined *)((undefined4 *)_Src + 4);
                    // WARNING: Load size is inaccurate
        auVar2 = *(undefined *)((undefined4 *)_Src + 8);
                    // WARNING: Load size is inaccurate
        auVar3 = *(undefined *)((undefined4 *)_Src + 0xc);
                    // WARNING: Store size is inaccurate
        *(undefined *)puVar13 = *(undefined *)_Src;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 4) = auVar16;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 8) = auVar2;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0xc) = auVar3;
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
        auVar16 = *(undefined *)((undefined4 *)_Src + 0x14);
                    // WARNING: Load size is inaccurate
        auVar2 = *(undefined *)((undefined4 *)_Src + 0x18);
                    // WARNING: Load size is inaccurate
        auVar3 = *(undefined *)((undefined4 *)_Src + 0x1c);
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x10) = *(undefined *)((undefined4 *)_Src + 0x10);
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x14) = auVar16;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x18) = auVar2;
                    // WARNING: Store size is inaccurate
        *(undefined *)(puVar13 + 0x1c) = auVar3;
        _Src = (undefined4 *)_Src + 0x20;
        puVar13 = puVar13 + 0x20;
        uVar10 = uVar10 - 1;
      }
      if ((_Size & 0x7f) != 0) {
        uVar10 = (_Size & 0x7f) >> 4;
        while (uVar10 != 0) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Store size is inaccurate
          *(undefined *)puVar13 = *(undefined *)_Src;
          _Src = (undefined4 *)_Src + 4;
          puVar13 = puVar13 + 4;
          uVar10 = uVar10 - 1;
        }
        if ((_Size & 0xf) != 0) {
          uVar10 = (_Size & 0xf) >> 2;
          while (uVar10 != 0) {
            *puVar13 = *(undefined4 *)_Src;
            _Src = (undefined4 *)_Src + 1;
            puVar13 = puVar13 + 1;
            uVar10 = uVar10 - 1;
          }
          uVar10 = _Size & 3;
          while (uVar10 != 0) {
            *(undefined *)puVar13 = *(undefined *)_Src;
            _Src = (void *)((int)_Src + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            uVar10 = uVar10 - 1;
          }
        }
      }
      return _Dst;
    }
    if ((DAT_00419eec & 1) == 0) goto LAB_0040e9ab;
    if (((uint)_Dst & 3) != 0) goto LAB_0040e9c8;
    if (((uint)_Src & 3) == 0) {
      if (((uint)_Dst >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)_Src;
        _Size = _Size - 4;
        _Src = (void *)((int)_Src + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (void *)((int)_Dst + 4);
      }
      if (((uint)_Dst >> 3 & 1) != 0) {
        uVar1 = *(undefined8 *)_Src;
        _Size = _Size - 8;
        _Src = (undefined8 *)_Src + 1;
        *(undefined8 *)_Dst = uVar1;
        _Dst = (undefined8 *)_Dst + 1;
      }
      if (((uint)_Src & 7) == 0) {
                    // WARNING: Load size is inaccurate
        puVar7 = (undefined8 *)_Src + -1;
        auVar16 = *(undefined *)((undefined8 *)_Src + -1);
        do {
          puVar12 = puVar7;
                    // WARNING: Load size is inaccurate
          auVar2 = *(undefined *)(puVar12 + 2);
          _Size = _Size - 0x30;
                    // WARNING: Load size is inaccurate
          auVar3 = *(undefined *)(puVar12 + 4);
                    // WARNING: Load size is inaccurate
          auVar4 = *(undefined *)(puVar12 + 6);
                    // WARNING: Store size is inaccurate
          *(undefined *)_Dst = SUB3216(ZEXT2032(CONCAT416(0x40,auVar16)) >> 0x40,0);
                    // WARNING: Store size is inaccurate
          *(undefined *)((undefined8 *)_Dst + 2) =
               SUB3216(ZEXT2032(CONCAT416(0x40,auVar2)) >> 0x40,0);
                    // WARNING: Store size is inaccurate
          *(undefined *)((undefined8 *)_Dst + 4) =
               SUB3216(ZEXT2032(CONCAT416(0x40,auVar3)) >> 0x40,0);
          _Dst = (undefined8 *)_Dst + 6;
          puVar7 = puVar12 + 6;
          auVar16 = auVar4;
        } while (0x2f < (int)_Size);
        puVar12 = puVar12 + 7;
      }
      else {
        if (((uint)_Src >> 3 & 1) == 0) {
                    // WARNING: Load size is inaccurate
          iVar6 = (int)_Src + -4;
          auVar16 = *(undefined *)((int)_Src + -4);
          do {
            iVar11 = iVar6;
                    // WARNING: Load size is inaccurate
            auVar2 = *(undefined *)(iVar11 + 0x10);
            _Size = _Size - 0x30;
                    // WARNING: Load size is inaccurate
            auVar3 = *(undefined *)(iVar11 + 0x20);
                    // WARNING: Load size is inaccurate
            auVar4 = *(undefined *)(iVar11 + 0x30);
                    // WARNING: Store size is inaccurate
            *(undefined *)_Dst = SUB2016(CONCAT416(0x20,auVar16) >> 0x20,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 2) = SUB2016(CONCAT416(0x20,auVar2) >> 0x20,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 4) = SUB2016(CONCAT416(0x20,auVar3) >> 0x20,0);
            _Dst = (undefined8 *)_Dst + 6;
            iVar6 = iVar11 + 0x30;
            auVar16 = auVar4;
          } while (0x2f < (int)_Size);
          puVar12 = (undefined8 *)(iVar11 + 0x34);
        }
        else {
                    // WARNING: Load size is inaccurate
          iVar6 = (int)_Src + -0xc;
          auVar16 = *(undefined *)((int)_Src + -0xc);
          do {
            iVar11 = iVar6;
                    // WARNING: Load size is inaccurate
            auVar2 = *(undefined *)(iVar11 + 0x10);
            _Size = _Size - 0x30;
                    // WARNING: Load size is inaccurate
            auVar3 = *(undefined *)(iVar11 + 0x20);
                    // WARNING: Load size is inaccurate
            auVar4 = *(undefined *)(iVar11 + 0x30);
                    // WARNING: Store size is inaccurate
            *(undefined *)_Dst = SUB3216(ZEXT2032(CONCAT416(0x60,auVar16)) >> 0x60,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 2) =
                 SUB3216(ZEXT2032(CONCAT416(0x60,auVar2)) >> 0x60,0);
                    // WARNING: Store size is inaccurate
            *(undefined *)((undefined8 *)_Dst + 4) =
                 SUB3216(ZEXT2032(CONCAT416(0x60,auVar3)) >> 0x60,0);
            _Dst = (undefined8 *)_Dst + 6;
            iVar6 = iVar11 + 0x30;
            auVar16 = auVar4;
          } while (0x2f < (int)_Size);
          puVar12 = (undefined8 *)(iVar11 + 0x3c);
        }
      }
      while (0xf < (int)_Size) {
                    // WARNING: Load size is inaccurate
        auVar16 = *(undefined *)puVar12;
        _Size = _Size - 0x10;
        puVar12 = puVar12 + 2;
                    // WARNING: Store size is inaccurate
        *(undefined *)_Dst = auVar16;
        _Dst = (undefined8 *)_Dst + 2;
      }
      if ((_Size >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)puVar12;
        _Size = _Size - 4;
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (void *)((int)_Dst + 4);
      }
      if ((_Size >> 3 & 1) != 0) {
        _Size = _Size - 8;
        *(undefined8 *)_Dst = *puVar12;
      }
                    // WARNING: Could not recover jumptable at 0x0040e9a9. Too many branches
                    // WARNING: Treating indirect jump as call
      pvVar8 = (void *)(*(code *)(&switchdataD_0040ead8)[_Size])();
      return pvVar8;
    }
  }
  uVar9 = _Size >> 2;
  if (uVar9 < 8) {
LAB_0040e9e8:
                    // WARNING: Could not recover jumptable at 0x0040e9e8. Too many branches
                    // WARNING: Treating indirect jump as call
    pvVar8 = (void *)(*(code *)(&PTR_LAB_0040ea6c)[uVar9])();
    return pvVar8;
  }
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    *puVar13 = *(undefined4 *)_Src;
    _Src = (undefined4 *)_Src + 1;
    puVar13 = puVar13 + 1;
  }
  switch(_Size & 3) {
  case 0:
    return _Dst;
  case 2:
switchD_0040e9e0_caseD_2:
    *(undefined *)puVar13 = *(undefined *)_Src;
    *(undefined *)((int)puVar13 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0040e9e0_caseD_3:
    *(undefined *)puVar13 = *(undefined *)_Src;
    *(undefined *)((int)puVar13 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar13 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0040e9e0_caseD_1:
  *(undefined *)puVar13 = *(undefined *)_Src;
  return _Dst;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte * __cdecl FUN_0040edf0(byte *param_1,byte param_2)

{
  char *pcVar1;
  undefined auVar2 [16];
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  undefined4 unaff_EBX;
  uint uVar24;
  byte *pbVar25;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  undefined auVar26 [16];
  undefined auVar42 [16];
  
  if (_DAT_00419ee8 != 0) {
    if (_DAT_00419ee8 < 2) {
      auVar42 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
      auVar42 = movlhps(auVar42,auVar42);
      uVar21 = (uint)param_1 & 0xf;
      uVar19 = -1 << (sbyte)uVar21;
      param_1 = param_1 + -uVar21;
      pbVar23 = (byte *)0x0;
      while( true ) {
                    // WARNING: Load size is inaccurate
        auVar2 = *(undefined *)param_1;
        cVar27 = SUB161(auVar2 >> 8,0);
        cVar28 = SUB161(auVar2 >> 0x10,0);
        cVar29 = SUB161(auVar2 >> 0x18,0);
        cVar30 = SUB161(auVar2 >> 0x20,0);
        cVar31 = SUB161(auVar2 >> 0x28,0);
        cVar32 = SUB161(auVar2 >> 0x30,0);
        cVar33 = SUB161(auVar2 >> 0x38,0);
        cVar34 = SUB161(auVar2 >> 0x40,0);
        cVar35 = SUB161(auVar2 >> 0x48,0);
        cVar36 = SUB161(auVar2 >> 0x50,0);
        cVar37 = SUB161(auVar2 >> 0x58,0);
        cVar38 = SUB161(auVar2 >> 0x60,0);
        cVar39 = SUB161(auVar2 >> 0x68,0);
        cVar40 = SUB161(auVar2 >> 0x70,0);
        cVar41 = SUB161(auVar2 >> 0x78,0);
        auVar26 = CONCAT115(-(cVar41 == SUB161(auVar42 >> 0x78,0)),
                            CONCAT114(-(cVar40 == SUB161(auVar42 >> 0x70,0)),
                                      CONCAT113(-(cVar39 == SUB161(auVar42 >> 0x68,0)),
                                                CONCAT112(-(cVar38 == SUB161(auVar42 >> 0x60,0)),
                                                          CONCAT111(-(cVar37 ==
                                                                     SUB161(auVar42 >> 0x58,0)),
                                                                    CONCAT110(-(cVar36 ==
                                                                               SUB161(auVar42 >>
                                                                                      0x50,0)),
                                                                              CONCAT19(-(cVar35 ==
                                                                                        SUB161(
                                                  auVar42 >> 0x48,0)),
                                                  CONCAT18(-(cVar34 == SUB161(auVar42 >> 0x40,0)),
                                                           CONCAT17(-(cVar33 ==
                                                                     SUB161(auVar42 >> 0x38,0)),
                                                                    CONCAT16(-(cVar32 ==
                                                                              SUB161(auVar42 >> 0x30
                                                                                     ,0)),
                                                                             CONCAT15(-(cVar31 ==
                                                                                       SUB161(
                                                  auVar42 >> 0x28,0)),
                                                  CONCAT14(-(cVar30 == SUB161(auVar42 >> 0x20,0)),
                                                           CONCAT13(-(cVar29 ==
                                                                     SUB161(auVar42 >> 0x18,0)),
                                                                    CONCAT12(-(cVar28 ==
                                                                              SUB161(auVar42 >> 0x10
                                                                                     ,0)),
                                                                             CONCAT11(-(cVar27 ==
                                                                                       SUB161(
                                                  auVar42 >> 8,0)),
                                                  -(SUB161(auVar2,0) == SUB161(auVar42,0))))))))))))
                                                  )))));
        uVar21 = pmovmskb(uVar21,CONCAT115(-(cVar41 == '\0'),
                                           CONCAT114(-(cVar40 == '\0'),
                                                     CONCAT113(-(cVar39 == '\0'),
                                                               CONCAT112(-(cVar38 == '\0'),
                                                                         CONCAT111(-(cVar37 == '\0')
                                                                                   ,CONCAT110(-(
                                                  cVar36 == '\0'),
                                                  CONCAT19(-(cVar35 == '\0'),
                                                           CONCAT18(-(cVar34 == '\0'),
                                                                    CONCAT17(-(cVar33 == '\0'),
                                                                             CONCAT16(-(cVar32 ==
                                                                                       '\0'),
                                                  CONCAT15(-(cVar31 == '\0'),
                                                           CONCAT14(-(cVar30 == '\0'),
                                                                    CONCAT13(-(cVar29 == '\0'),
                                                                             CONCAT12(-(cVar28 ==
                                                                                       '\0'),
                                                  CONCAT11(-(cVar27 == '\0'),
                                                           -(SUB161(auVar2,0) == '\0')))))))))))))))
                                          ));
        uVar21 = uVar21 & uVar19;
        if (uVar21 != 0) break;
        uVar21 = pmovmskb(0,auVar26);
        uVar21 = uVar21 & uVar19;
        iVar22 = 0x1f;
        if (uVar21 != 0) {
          while (uVar21 >> iVar22 == 0) {
            iVar22 = iVar22 + -1;
          }
        }
        if (uVar21 != 0) {
          pbVar23 = param_1 + iVar22;
        }
        uVar19 = 0xffffffff;
        param_1 = param_1 + 0x10;
      }
      uVar24 = pmovmskb(unaff_EBX,auVar26);
      uVar19 = (uVar21 * 2 & uVar21 * -2) - 1 & uVar24 & uVar19;
      iVar22 = 0x1f;
      if (uVar19 != 0) {
        while (uVar19 >> iVar22 == 0) {
          iVar22 = iVar22 + -1;
        }
      }
      pbVar25 = param_1 + iVar22;
      if (uVar19 == 0) {
        pbVar25 = pbVar23;
      }
      return pbVar25;
    }
    if (param_2 == 0) {
      pcVar20 = (char *)((uint)param_1 & 0xfffffff0);
      uVar19 = pmovmskb(param_1,CONCAT115(-(pcVar20[0xf] == '\0'),
                                          CONCAT114(-(pcVar20[0xe] == '\0'),
                                                    CONCAT113(-(pcVar20[0xd] == '\0'),
                                                              CONCAT112(-(pcVar20[0xc] == '\0'),
                                                                        CONCAT111(-(pcVar20[0xb] ==
                                                                                   '\0'),CONCAT110(-
                                                  (pcVar20[10] == '\0'),
                                                  CONCAT19(-(pcVar20[9] == '\0'),
                                                           CONCAT18(-(pcVar20[8] == '\0'),
                                                                    CONCAT17(-(pcVar20[7] == '\0'),
                                                                             CONCAT16(-(pcVar20[6]
                                                                                       == '\0'),
                                                                                      CONCAT15(-(
                                                  pcVar20[5] == '\0'),
                                                  CONCAT14(-(pcVar20[4] == '\0'),
                                                           CONCAT13(-(pcVar20[3] == '\0'),
                                                                    CONCAT12(-(pcVar20[2] == '\0'),
                                                                             CONCAT11(-(pcVar20[1]
                                                                                       == '\0'),
                                                                                      -(*pcVar20 ==
                                                                                       '\0')))))))))
                                                  ))))))));
      uVar19 = uVar19 & -1 << ((byte)param_1 & 0xf);
      while (uVar19 == 0) {
        pcVar17 = pcVar20 + 0x1f;
        pcVar16 = pcVar20 + 0x1e;
        pcVar15 = pcVar20 + 0x1d;
        pcVar14 = pcVar20 + 0x1c;
        pcVar13 = pcVar20 + 0x1b;
        pcVar12 = pcVar20 + 0x1a;
        pcVar11 = pcVar20 + 0x19;
        pcVar10 = pcVar20 + 0x18;
        pcVar9 = pcVar20 + 0x17;
        pcVar8 = pcVar20 + 0x16;
        pcVar7 = pcVar20 + 0x15;
        pcVar6 = pcVar20 + 0x14;
        pcVar5 = pcVar20 + 0x13;
        pcVar4 = pcVar20 + 0x12;
        pcVar3 = pcVar20 + 0x11;
        pcVar1 = pcVar20 + 0x10;
        pcVar20 = pcVar20 + 0x10;
        uVar19 = pmovmskb(0,CONCAT115(-(*pcVar17 == '\0'),
                                      CONCAT114(-(*pcVar16 == '\0'),
                                                CONCAT113(-(*pcVar15 == '\0'),
                                                          CONCAT112(-(*pcVar14 == '\0'),
                                                                    CONCAT111(-(*pcVar13 == '\0'),
                                                                              CONCAT110(-(*pcVar12 
                                                  == '\0'),CONCAT19(-(*pcVar11 == '\0'),
                                                                    CONCAT18(-(*pcVar10 == '\0'),
                                                                             CONCAT17(-(*pcVar9 ==
                                                                                       '\0'),
                                                  CONCAT16(-(*pcVar8 == '\0'),
                                                           CONCAT15(-(*pcVar7 == '\0'),
                                                                    CONCAT14(-(*pcVar6 == '\0'),
                                                                             CONCAT13(-(*pcVar5 ==
                                                                                       '\0'),
                                                  CONCAT12(-(*pcVar4 == '\0'),
                                                           CONCAT11(-(*pcVar3 == '\0'),
                                                                    -(*pcVar1 == '\0')))))))))))))))
                                     ));
      }
      iVar22 = 0;
      if (uVar19 != 0) {
        while ((uVar19 >> iVar22 & 1) == 0) {
          iVar22 = iVar22 + 1;
        }
      }
      pbVar23 = (byte *)(pcVar20 + iVar22);
    }
    else {
      pbVar23 = (byte *)0x0;
      uVar19 = (uint)param_1 & 0xf;
      while (uVar19 != 0) {
        if ((uint)*param_1 == (uint)param_2) {
          pbVar23 = param_1;
        }
        if (*param_1 == 0) {
          return pbVar23;
        }
        param_1 = param_1 + 1;
        uVar19 = (uint)param_1 & 0xf;
      }
      do {
        pbVar25 = param_1 + 0x10;
                    // WARNING: Load size is inaccurate
        iVar22 = pcmpistri(ZEXT416((uint)param_2),*(undefined *)param_1,0x40);
        if ((byte *)0xffffffef < param_1) {
          pbVar23 = param_1 + iVar22;
        }
        param_1 = pbVar25;
      } while (pbVar25 != (byte *)0x0);
    }
    return pbVar23;
  }
  iVar22 = -1;
  do {
    pbVar23 = param_1;
    if (iVar22 == 0) break;
    iVar22 = iVar22 + -1;
    pbVar23 = param_1 + 1;
    bVar18 = *param_1;
    param_1 = pbVar23;
  } while (bVar18 != 0);
  iVar22 = -(iVar22 + 1);
  pbVar23 = pbVar23 + -1;
  do {
    pbVar25 = pbVar23;
    if (iVar22 == 0) break;
    iVar22 = iVar22 + -1;
    pbVar25 = pbVar23 + -1;
    bVar18 = *pbVar23;
    pbVar23 = pbVar25;
  } while (param_2 != bVar18);
  pbVar25 = pbVar25 + 1;
  if (*pbVar25 != param_2) {
    pbVar25 = (byte *)0x0;
  }
  return pbVar25;
}



int __cdecl FUN_0040ef27(char *param_1,uint param_2,int param_3,int param_4)

{
  char *_Str;
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = *(char **)(param_4 + 0xc);
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    piVar1 = __errno();
    iVar6 = 0x16;
  }
  else {
    *param_1 = '\0';
    iVar6 = param_3;
    if (param_3 < 1) {
      iVar6 = 0;
    }
    if (iVar6 + 1U < param_2) {
      *param_1 = '0';
      _Str = param_1 + 1;
      pcVar2 = _Str;
      if (0 < param_3) {
        do {
          cVar4 = *pcVar5;
          if (cVar4 == '\0') {
            cVar4 = '0';
          }
          else {
            pcVar5 = pcVar5 + 1;
          }
          *pcVar2 = cVar4;
          pcVar2 = pcVar2 + 1;
          param_3 = param_3 + -1;
        } while (0 < param_3);
      }
      *pcVar2 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar5)) {
        while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
          *pcVar2 = '0';
        }
        *pcVar2 = *pcVar2 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        sVar3 = _strlen(_Str);
        FID_conflict__memcpy(param_1,_Str,sVar3 + 1);
      }
      return 0;
    }
    piVar1 = __errno();
    iVar6 = 0x22;
  }
  *piVar1 = iVar6;
  FUN_00402c77();
  return iVar6;
}



void __cdecl FUN_0040efd7(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar4 = 0x80000000;
  uVar1 = *param_2;
  uVar6 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar3 = uVar2 & 0x7ff;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(ushort *)(param_1 + 2) = uVar6;
      return;
    }
    uVar3 = uVar3 + 0x3c01;
    uVar4 = 0;
  }
  else {
    if (uVar3 == 0x7ff) {
      uVar3 = 0x7fff;
    }
    else {
      uVar3 = uVar3 + 0x3c00;
    }
  }
  uVar5 = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | uVar4;
  param_1[1] = uVar5;
  *param_1 = uVar1 << 0xb;
  if (uVar4 == 0) {
    do {
      uVar3 = uVar3 - 1;
      uVar5 = uVar5 * 2 | *param_1 >> 0x1f;
      *param_1 = *param_1 * 2;
    } while (-1 < (int)uVar5);
    param_1[1] = uVar5;
  }
  *(ushort *)(param_1 + 2) = uVar6 | uVar3;
  return;
}



void __cdecl
FUN_0040f09f(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4,rsize_t param_5)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  errno_t eVar4;
  uint local_34;
  uint uStack48;
  ushort uStack44;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_28 = param_4;
  FUN_0040efd7(&local_34,&param_1);
  iVar3 = FUN_0040f28c(local_34,uStack48,uStack44,0x11,0,&local_24);
  pcVar2 = local_28;
  param_3[2] = iVar3;
  *param_3 = (int)local_22;
  param_3[1] = (int)local_24;
  eVar4 = _strcpy_s(local_28,param_5,local_20);
  if (eVar4 == 0) {
    *(char **)(param_3 + 3) = pcVar2;
    FUN_00404f47();
    return;
  }
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
// Name: __alldvrm
// Library: Visual Studio

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar10 = (int)param_2 < 0;
  if (bVar10) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar9 - param_2;
  }
  if ((int)param_4 < 0) {
    bVar10 = (bool)(bVar10 + '\x01');
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar8 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar8 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar8 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (bVar10 == true) {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
// Name: __aullshr
// Library: Visual Studio

ulonglong __aullshr(void)

{
  uint in_EAX;
  byte in_CL;
  uint in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return (ulonglong)(in_EDX >> (in_CL & 0x1f));
}



// Library Function - Single Match
// Name: __controlfp_s
// Library: Visual Studio 2012 Release

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  int *piVar2;
  errno_t eVar3;
  
  _Mask = _Mask & 0xfff7ffff;
  if ((_NewValue & _Mask & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      FUN_0040fd09(_NewValue,_Mask);
    }
    else {
      uVar1 = FUN_0040fd09(_NewValue,_Mask);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = FUN_0040fd09(0,0);
      *_CurrentState = uVar1;
    }
    piVar2 = __errno();
    eVar3 = 0x16;
    *piVar2 = 0x16;
    FUN_00402c77();
  }
  return eVar3;
}



// WARNING: Removing unreachable block (ram,0x0040f809)
// WARNING: Removing unreachable block (ram,0x0040f816)
// WARNING: Removing unreachable block (ram,0x0040f81c)
// WARNING: Could not reconcile some variable overlaps

void __cdecl
FUN_0040f28c(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  code *pcVar2;
  ushort uVar3;
  errno_t eVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  short *psVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ushort uVar20;
  ushort uVar21;
  undefined **ppuVar22;
  ushort *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  char *_Src;
  int local_7c;
  short *local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  ushort local_40;
  undefined2 uStack62;
  undefined2 uStack60;
  undefined2 uStack58;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c;
  undefined2 uStack42;
  ushort local_24;
  undefined4 uStack34;
  undefined4 uStack30;
  undefined local_1a;
  byte bStack25;
  byte local_14;
  undefined uStack19;
  ushort uStack18;
  ushort local_10 [4];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  uVar16 = param_3 & 0x8000;
  local_34 = 0xcccccccc;
  param_3 = param_3 & 0x7fff;
  local_30 = 0xcccccccc;
  local_2c = 0xcccc;
  uStack42 = 0x3ffb;
  if (uVar16 == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if (param_3 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *(undefined *)((int)param_6 + 3) = 1;
      *param_6 = 0;
      *(byte *)(param_6 + 1) = ((uVar16 != 0x8000) - 1U & 0xd) + 0x20;
      param_6[2] = 0x30;
      param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
      goto LAB_0040fc09;
    }
  }
  else {
    if (param_3 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if ((uVar16 == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_0040f39c;
          _Src = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_0040f39c:
            _Src = "1#QNAN";
            goto LAB_0040f3a1;
          }
          _Src = "1#IND";
        }
        eVar4 = _strcpy_s((char *)(param_6 + 2),0x16,_Src);
        if (eVar4 != 0) goto LAB_0040fc53;
        *(undefined *)((int)param_6 + 3) = 5;
      }
      else {
        _Src = "1#SNAN";
LAB_0040f3a1:
        eVar4 = _strcpy_s((char *)(param_6 + 2),0x16,_Src);
        if (eVar4 != 0) {
LAB_0040fc53:
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined *)((int)param_6 + 3) = 6;
      }
      param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
      goto LAB_0040fc09;
    }
  }
  uStack30._0_2_ = (undefined2)param_2;
  uStack30._2_2_ = (ushort)(param_2 >> 0x10);
  ppuVar22 = &PTR_DAT_00418e68;
  local_1a = (undefined)param_3;
  bStack25 = (byte)(param_3 >> 8);
  local_5c = (short *)0x5;
  local_4c._0_2_ =
       (short)((uint)param_3 * 0x4d10 + -0x134312f4 +
               ((uint)(param_3 >> 8) + (param_2 >> 0x18) * 2) * 0x4d >> 0x10);
  uStack34._0_2_ = (ushort)param_1;
  uStack34._2_2_ = (ushort)((uint)param_1 >> 0x10);
  local_24 = 0;
  uVar5 = SEXT24((short)local_4c);
  bVar27 = -uVar5 == 0;
  if (bVar27) {
LAB_0040f75c:
    uVar17 = CONCAT22((undefined2)uStack30,uStack34._2_2_);
    uVar5 = param_1 << 0x10;
  }
  else {
    local_48 = -uVar5;
    if (0 < (int)uVar5) {
      ppuVar22 = (undefined **)0x418fc8;
      bVar27 = uVar5 == 0;
      local_48 = uVar5;
    }
    if (bVar27) goto LAB_0040f75c;
    uVar5 = param_1 << 0x10;
    uVar17 = CONCAT22((undefined2)uStack30,uStack34._2_2_);
    local_44 = uVar5;
    do {
      uStack30._2_2_ = (ushort)(param_2 >> 0x10);
      iVar24 = 0;
      uVar13 = (int)local_48 >> 3;
      ppuVar22 = ppuVar22 + 0x15;
      if ((local_48 & 7) != 0) {
        ppuVar11 = ppuVar22 + (local_48 & 7) * 3;
        ppuVar10 = ppuVar11;
        if (0x7fff < *(ushort *)ppuVar11) {
          ppuVar10 = (undefined **)&local_40;
          local_40 = (ushort)*ppuVar11;
          uStack62 = (undefined2)((uint)*ppuVar11 >> 0x10);
          uStack60 = SUB42(ppuVar11[1],0);
          uStack58 = (undefined2)((uint)ppuVar11[1] >> 0x10);
          local_38 = ppuVar11[2];
          iVar25 = CONCAT22(uStack60,uStack62) + -1;
          uStack62 = (undefined2)iVar25;
          uStack60 = (undefined2)((uint)iVar25 >> 0x10);
        }
        uVar20 = *(ushort *)((int)ppuVar10 + 10) & 0x7fff;
        uVar9 = CONCAT11(bStack25,local_1a) & 0x7fff;
        uVar3 = (*(ushort *)((int)ppuVar10 + 10) ^ CONCAT11(bStack25,local_1a)) & 0x8000;
        uVar21 = uVar9 + uVar20;
        local_14 = 0;
        uStack19 = 0;
        uStack18 = 0;
        local_10[0] = 0;
        local_10[1] = uStack18;
        local_10[2] = local_10[0];
        local_10[3] = uStack18;
        if (((uVar9 < 0x7fff) && (uVar20 < 0x7fff)) && (uVar21 < 0xbffe)) {
          if (uVar21 < 0x3fc0) {
LAB_0040f4ef:
            local_1a = 0;
            bStack25 = 0;
            uStack30._2_2_ = local_10[0];
            goto LAB_0040f73c;
          }
          if (((uVar9 == 0) &&
              (uVar21 = uVar21 + 1,
              (CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_)) & 0x7fffffff) == 0)) &&
             ((uVar17 == 0 && (local_44 == 0)))) {
            local_1a = 0;
            bStack25 = 0;
            uVar5 = local_44;
            goto LAB_0040f74c;
          }
          if (((uVar20 == 0) && (uVar21 = uVar21 + 1, ((uint)ppuVar10[2] & 0x7fffffff) == 0)) &&
             ((ppuVar10[1] == (undefined *)0x0 && (*ppuVar10 == (undefined *)0x0))))
          goto LAB_0040f4ef;
          puVar14 = local_10;
          local_54 = 5;
          iVar25 = iVar24;
          do {
            if (0 < (int)local_54) {
              puVar6 = &local_24 + iVar25;
              ppuVar11 = ppuVar10 + 2;
              iVar19 = local_54;
              do {
                uVar5 = *(uint *)(puVar14 + -2) + (uint)*puVar6 * (uint)*(ushort *)ppuVar11;
                if ((uVar5 < *(uint *)(puVar14 + -2)) ||
                   (iVar12 = iVar24, uVar5 < (uint)*puVar6 * (uint)*(ushort *)ppuVar11)) {
                  iVar12 = 1;
                }
                *(uint *)(puVar14 + -2) = uVar5;
                if (iVar12 != 0) {
                  *puVar14 = *puVar14 + 1;
                }
                puVar6 = puVar6 + 1;
                ppuVar11 = (undefined **)((int)ppuVar11 + -2);
                iVar19 = iVar19 + -1;
              } while (0 < iVar19);
            }
            puVar14 = puVar14 + 1;
            iVar25 = iVar25 + 1;
            local_54 = local_54 + -1;
          } while (0 < (int)local_54);
          local_44 = CONCAT22(local_10[3],local_10[2]);
          uVar21 = uVar21 + 0xc002;
          uVar5 = CONCAT22(uStack18,CONCAT11(uStack19,local_14));
          if ((short)uVar21 < 1) {
LAB_0040f62b:
            uVar21 = uVar21 - 1;
            if (-1 < (short)uVar21) goto LAB_0040f69c;
            local_54 = (uint)(ushort)-uVar21;
            uVar21 = 0;
            uVar17 = local_44;
            do {
              if ((local_14 & 1) != 0) {
                iVar24 = iVar24 + 1;
              }
              uVar26 = CONCAT22(local_10[1],local_10[0]);
              local_10[1] = local_10[1] >> 1 | (ushort)((uVar17 << 0x1f) >> 0x10);
              uVar18 = uVar26 << 0x1f;
              uVar7 = uVar5 >> 1;
              local_44 = uVar17 >> 1;
              uVar5 = uVar7 | uVar18;
              local_54 = local_54 - 1;
              local_10[2] = (ushort)local_44;
              local_10[3] = (ushort)(uVar17 >> 0x11);
              local_10[0] = (ushort)(uVar26 >> 1);
              local_14 = (byte)uVar7;
              uStack19 = (undefined)(uVar7 >> 8);
              uStack18 = (ushort)(uVar5 >> 0x10);
              uVar17 = local_44;
            } while (local_54 != 0);
            if (iVar24 == 0) goto LAB_0040f69c;
            uVar9 = (ushort)uVar7 | 1;
            local_14 = (byte)uVar9;
            uVar5 = uVar7 & 0xffff0000 | uVar18 | uVar7 & 0xffff | 1;
          }
          else {
            do {
              if ((int)local_44 < 0) break;
              iVar25 = CONCAT22(local_10[1],local_10[0]) * 2;
              uVar9 = local_10[1] >> 0xf;
              local_10[0] = (ushort)iVar25 | (ushort)(uVar5 >> 0x1f);
              uVar5 = uVar5 * 2;
              local_10[1] = (ushort)((uint)iVar25 >> 0x10);
              uVar17 = local_44 * 2;
              local_14 = (byte)uVar5;
              uStack19 = (undefined)(uVar5 >> 8);
              uStack18 = (ushort)(uVar5 >> 0x10);
              local_44 = uVar17 | uVar9;
              uVar21 = uVar21 - 1;
              local_10[2] = (ushort)local_44;
              local_10[3] = (ushort)(uVar17 >> 0x10);
            } while (0 < (short)uVar21);
            if ((short)uVar21 < 1) goto LAB_0040f62b;
LAB_0040f69c:
            uVar9 = CONCAT11(uStack19,local_14);
          }
          if ((0x8000 < uVar9) || ((uVar5 & 0x1ffff) == 0x18000)) {
            if (CONCAT22(local_10[0],uStack18) == -1) {
              uStack18 = 0;
              local_10[0] = 0;
              if (CONCAT22(local_10[2],local_10[1]) == -1) {
                local_10[1] = 0;
                local_10[2] = 0;
                if (local_10[3] == 0xffff) {
                  local_10[3] = 0x8000;
                  uVar21 = uVar21 + 1;
                }
                else {
                  local_10[3] = local_10[3] + 1;
                }
              }
              else {
                iVar24 = CONCAT22(local_10[2],local_10[1]) + 1;
                local_10[1] = (ushort)iVar24;
                local_10[2] = (ushort)((uint)iVar24 >> 0x10);
              }
              local_44 = CONCAT22(local_10[3],local_10[2]);
            }
            else {
              iVar24 = CONCAT22(local_10[0],uStack18) + 1;
              uStack18 = (ushort)iVar24;
              local_10[0] = (ushort)((uint)iVar24 >> 0x10);
            }
          }
          if (0x7ffe < uVar21) goto LAB_0040f725;
          bStack25 = (byte)(uVar21 >> 8) | (byte)(uVar3 >> 8);
          local_24 = uStack18;
          uStack34._0_2_ = local_10[0];
          uStack34._2_2_ = local_10[1];
          uVar5 = CONCAT22(local_10[0],uStack18);
          uStack30._0_2_ = (undefined2)local_44;
          uStack30._2_2_ = (ushort)(local_44 >> 0x10);
          uVar17 = CONCAT22((undefined2)uStack30,local_10[1]);
          local_1a = (undefined)uVar21;
        }
        else {
LAB_0040f725:
          iVar24 = ((uint)(uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack30._2_2_ = (ushort)iVar24;
          local_1a = (undefined)((uint)iVar24 >> 0x10);
          bStack25 = (byte)((uint)iVar24 >> 0x18);
LAB_0040f73c:
          uVar17 = 0;
          local_24 = 0;
          uStack34._0_2_ = 0;
          uStack34._2_2_ = 0;
          uStack30._0_2_ = 0;
          uVar5 = uVar17;
        }
        param_2 = CONCAT22(uStack30._2_2_,(undefined2)uStack30);
        param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
        local_44 = uVar5;
      }
LAB_0040f74c:
      local_48 = uVar13;
    } while (uVar13 != 0);
  }
  uStack30._2_2_ = (ushort)(param_2 >> 0x10);
  uVar13 = CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_));
  uVar3 = (ushort)(uVar13 >> 0x10);
  uStack30 = param_2;
  if (0x3ffe < uVar3) {
    local_4c._0_2_ = (short)local_4c + 1;
    local_7c = 0;
    local_14 = 0;
    uStack19 = 0;
    uStack18 = 0;
    uVar3 = (uVar3 ^ 0x3ffb) & 0x8000;
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    uVar13 = uVar13 >> 0x10 & 0x7fff;
    local_50 = uVar13 + 0x3ffb;
    if (((ushort)uVar13 < 0x7fff) && ((ushort)local_50 < 0xbffe)) {
      if (0x3fbf < (ushort)local_50) {
        if (((((ushort)uVar13 == 0) &&
             (local_50 = uVar13 + 0x3ffc,
             (CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_)) & 0x7fffffff) == 0)) &&
            (uVar17 == 0)) && (uVar5 == 0)) {
          local_1a = 0;
          bStack25 = 0;
          goto LAB_0040fa15;
        }
        puVar14 = local_10;
        local_54 = 0;
        do {
          if (0 < (int)local_5c) {
            puVar6 = &local_2c;
            puVar23 = &local_24 + local_54;
            iVar24 = (int)local_5c;
            do {
              uVar5 = *(uint *)(puVar14 + -2) + (uint)*puVar6 * (uint)*puVar23;
              if ((uVar5 < *(uint *)(puVar14 + -2)) || (uVar5 < (uint)*puVar6 * (uint)*puVar23)) {
                bVar27 = true;
              }
              else {
                bVar27 = false;
              }
              *(uint *)(puVar14 + -2) = uVar5;
              if (bVar27) {
                *puVar14 = *puVar14 + 1;
              }
              puVar23 = puVar23 + 1;
              puVar6 = puVar6 + -1;
              iVar24 = iVar24 + -1;
            } while (0 < iVar24);
          }
          puVar14 = puVar14 + 1;
          local_54 = local_54 + 1;
          local_5c = (short *)((int)local_5c + -1);
        } while (0 < (int)local_5c);
        uStack30 = CONCAT22(local_10[3],local_10[2]);
        local_50 = local_50 + 0xc002;
        if ((short)local_50 < 1) {
          uVar5 = CONCAT22(uStack18,CONCAT11(uStack19,local_14));
LAB_0040f94e:
          uVar21 = (ushort)(local_50 + 0xffff);
          if (-1 < (short)uVar21) goto LAB_0040f8f3;
          local_5c = (short *)(-(local_50 + 0xffff) & 0xffff);
          uVar21 = uVar21 + (short)local_5c;
          do {
            uVar17 = uStack30;
            if ((local_14 & 1) != 0) {
              local_7c = local_7c + 1;
            }
            uVar13 = CONCAT22(local_10[1],local_10[0]);
            uVar26 = uVar13 << 0x1f;
            uVar18 = uVar5 >> 1;
            local_10[1] = local_10[1] >> 1 | (ushort)((uVar17 << 0x1f) >> 0x10);
            uVar5 = uVar18 | uVar26;
            uStack30 = uVar17 >> 1;
            local_5c = (short *)((int)local_5c - 1);
            local_10[0] = (ushort)(uVar13 >> 1);
            local_14 = (byte)uVar18;
            uStack19 = (undefined)(uVar18 >> 8);
            uStack18 = (ushort)(uVar5 >> 0x10);
          } while (local_5c != (short *)0x0);
          local_10[2] = (ushort)uStack30;
          local_10[3] = (ushort)(uVar17 >> 0x11);
          if (local_7c == 0) goto LAB_0040f8f3;
          uVar9 = (ushort)uVar18 | 1;
          local_14 = (byte)uVar9;
          uVar5 = uVar18 & 0xffff0000 | uVar26 | uVar18 & 0xffff | 1;
        }
        else {
          uVar5 = CONCAT22(uStack18,CONCAT11(uStack19,local_14));
          do {
            if ((int)uStack30 < 0) break;
            iVar24 = CONCAT22(local_10[1],local_10[0]) * 2;
            uVar21 = local_10[1] >> 0xf;
            local_10[0] = (ushort)iVar24 | (ushort)(uVar5 >> 0x1f);
            uVar17 = uStack30 * 2;
            local_10[1] = (ushort)((uint)iVar24 >> 0x10);
            uVar5 = uVar5 * 2;
            local_14 = (byte)uVar5;
            uStack19 = (undefined)(uVar5 >> 8);
            uStack18 = (ushort)(uVar5 >> 0x10);
            uStack30 = uVar17 | uVar21;
            local_50 = local_50 + 0xffff;
            local_10[2] = (ushort)uStack30;
            local_10[3] = (ushort)(uVar17 >> 0x10);
          } while (0 < (short)local_50);
          uVar21 = (ushort)local_50;
          if ((short)uVar21 < 1) goto LAB_0040f94e;
LAB_0040f8f3:
          uVar9 = CONCAT11(uStack19,local_14);
        }
        if ((0x8000 < uVar9) || ((uVar5 & 0x1ffff) == 0x18000)) {
          if (CONCAT22(local_10[0],uStack18) == -1) {
            uStack18 = 0;
            local_10[0] = 0;
            if (CONCAT22(local_10[2],local_10[1]) == -1) {
              local_10[1] = uStack18;
              local_10[2] = local_10[0];
              if (local_10[3] == 0xffff) {
                uVar21 = uVar21 + 1;
                local_10[3] = 0x8000;
              }
              else {
                local_10[3] = local_10[3] + 1;
              }
            }
            else {
              iVar24 = CONCAT22(local_10[2],local_10[1]) + 1;
              local_10[1] = (ushort)iVar24;
              local_10[2] = (ushort)((uint)iVar24 >> 0x10);
            }
            uStack30 = CONCAT22(local_10[3],local_10[2]);
          }
          else {
            iVar24 = CONCAT22(local_10[0],uStack18) + 1;
            uStack18 = (ushort)iVar24;
            local_10[0] = (ushort)((uint)iVar24 >> 0x10);
          }
        }
        if (uVar21 < 0x7fff) {
          bStack25 = (byte)(uVar21 >> 8) | (byte)(uVar3 >> 8);
          local_24 = uStack18;
          param_1 = CONCAT22(local_10[1],local_10[0]);
          uVar17 = CONCAT22((undefined2)uStack30,local_10[1]);
          uVar5 = CONCAT22(local_10[0],uStack18);
          local_1a = (undefined)uVar21;
          goto LAB_0040fa15;
        }
        goto LAB_0040f9fa;
      }
      uStack30._2_2_ = 0;
      local_1a = 0;
      bStack25 = 0;
    }
    else {
LAB_0040f9fa:
      iVar24 = ((uint)(uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
      uStack30._2_2_ = (ushort)iVar24;
      local_1a = (undefined)((uint)iVar24 >> 0x10);
      bStack25 = (byte)((uint)iVar24 >> 0x18);
    }
    uVar17 = 0;
    uVar5 = uVar17;
    uStack30 = param_2 & 0xffff | (uint)uStack30._2_2_ << 0x10;
  }
LAB_0040fa15:
  uStack30._2_2_ = (ushort)(uStack30 >> 0x10);
  *param_6 = (short)local_4c;
  if ((param_5 & 1) == 0) {
    local_4c = param_4;
LAB_0040fa60:
    if (0x15 < local_4c) {
      local_4c = 0x15;
    }
    iVar24 = (CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_)) >> 0x10) - 0x3ffe;
    uVar13 = (uint)uStack30._2_2_;
    iVar25 = 8;
    do {
      uVar7 = uVar5 >> 0x1f;
      uVar26 = uVar17 * 2;
      uVar18 = uVar13 * 2;
      uVar5 = uVar5 * 2;
      uVar13 = uVar18 | uVar17 >> 0x1f;
      uVar17 = uVar26 | uVar7;
      local_24 = (ushort)uVar5;
      uStack34._0_2_ = (ushort)(uVar5 >> 0x10);
      uStack30._2_2_ = (ushort)uVar13;
      local_1a = (undefined)(uVar18 >> 0x10);
      bStack25 = (byte)(uVar18 >> 0x18);
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    uStack34._2_2_ = (ushort)uVar17;
    uStack30._0_2_ = (undefined2)(uVar26 >> 0x10);
    local_48 = uVar13;
    local_44 = uVar5;
    if ((iVar24 < 0) && (uVar26 = -iVar24 & 0xff, uVar26 != 0)) {
      do {
        uVar7 = uVar5 >> 1;
        uVar5 = uVar7 | uVar17 << 0x1f;
        uVar18 = uVar17 >> 1;
        local_48 = uVar13 >> 1;
        uVar17 = uVar18 | uVar13 << 0x1f;
        uVar26 = uVar26 - 1;
        uStack30._2_2_ = (ushort)local_48;
        local_1a = (undefined)(local_48 >> 0x10);
        bStack25 = (byte)(uVar13 >> 0x19);
        local_24 = (ushort)uVar7;
        uStack34._0_2_ = (ushort)(uVar5 >> 0x10);
        uVar13 = local_48;
      } while (0 < (int)uVar26);
      uStack34._2_2_ = (ushort)uVar18;
      uStack30._0_2_ = (undefined2)(uVar17 >> 0x10);
      local_44 = uVar5;
    }
    local_58 = local_4c + 1;
    psVar1 = param_6 + 2;
    local_5c = psVar1;
    if (0 < local_58) {
      while( true ) {
        local_40 = local_24;
        uStack62 = (ushort)uStack34;
        uStack60 = uStack34._2_2_;
        uStack58 = (undefined2)uStack30;
        local_38 = (undefined *)CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_));
        uVar13 = (uVar17 * 2 | local_44 >> 0x1f) * 2 | local_44 * 2 >> 0x1f;
        uVar26 = (local_48 * 2 | uVar17 >> 0x1f) * 2 | uVar17 * 2 >> 0x1f;
        uVar5 = CONCAT22((ushort)uStack34,local_24) + local_44 * 4;
        if ((uVar5 < local_44 * 4) || (uVar17 = uVar13, uVar5 < CONCAT22((ushort)uStack34,local_24))
           ) {
          uVar17 = uVar13 + 1;
          if ((uVar17 < uVar13) || (bVar27 = false, uVar17 == 0)) {
            bVar27 = true;
          }
          if (bVar27) {
            uVar26 = uVar26 + 1;
          }
        }
        uVar13 = CONCAT22((undefined2)uStack30,uStack34._2_2_) + uVar17;
        if ((uVar13 < uVar17) || (uVar13 < CONCAT22((undefined2)uStack30,uStack34._2_2_))) {
          uVar26 = uVar26 + 1;
        }
        local_44 = uVar5 * 2;
        local_24 = (ushort)local_44;
        uStack34._0_2_ = (ushort)(local_44 >> 0x10);
        uVar17 = uVar13 * 2 | uVar5 >> 0x1f;
        uVar5 = (int)(local_38 + uVar26) * 2;
        uStack34._2_2_ = (ushort)uVar17;
        uStack30._0_2_ = (undefined2)(uVar13 * 2 >> 0x10);
        uStack30._2_2_ = (ushort)uVar5 | (ushort)(uVar13 >> 0x1f);
        local_1a = (undefined)(uVar5 >> 0x10);
        *(char *)local_5c = (char)(uVar5 >> 0x18) + '0';
        local_5c = (short *)((int)local_5c + 1);
        local_58 = local_58 + -1;
        bStack25 = 0;
        if (local_58 < 1) break;
        local_48 = uVar5 & 0xffffff | uVar13 >> 0x1f;
      }
    }
    param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
    psVar15 = local_5c + -1;
    if (*(char *)((int)local_5c + -1) < '5') {
      while ((cVar8 = (char)psVar15, psVar1 <= psVar15 && (*(char *)psVar15 == '0'))) {
        psVar15 = (short *)((int)psVar15 + -1);
      }
      if (psVar15 < psVar1) {
        *param_6 = 0;
        *(byte *)(param_6 + 1) = ((uVar16 != 0x8000) - 1U & 0xd) + 0x20;
        *(undefined *)((int)param_6 + 3) = 1;
        *(char *)psVar1 = '0';
        goto LAB_0040fa55;
      }
    }
    else {
      while ((psVar1 <= psVar15 && (*(char *)psVar15 == '9'))) {
        *(char *)psVar15 = '0';
        psVar15 = (short *)((int)psVar15 + -1);
      }
      if (psVar15 < psVar1) {
        psVar15 = (short *)((int)psVar15 + 1);
        *param_6 = *param_6 + 1;
      }
      cVar8 = (char)psVar15;
      *(char *)psVar15 = *(char *)psVar15 + '\x01';
    }
    cVar8 = (cVar8 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar8;
    *(undefined *)((int)cVar8 + 4 + (int)param_6) = 0;
  }
  else {
    local_4c = param_4 + (short)local_4c;
    if (0 < local_4c) goto LAB_0040fa60;
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar16 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
    *(undefined *)(param_6 + 2) = 0x30;
LAB_0040fa55:
    *(undefined *)((int)param_6 + 5) = 0;
  }
LAB_0040fc09:
  uStack34 = param_1;
  FUN_00404f47();
  return;
}



// Library Function - Single Match
// Name: ___hw_cw_sse2
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

uint __cdecl ___hw_cw_sse2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else {
      if (uVar2 == 0x200) {
        uVar1 = uVar1 | 0x4000;
      }
      else {
        if (uVar2 == 0x300) {
          uVar1 = uVar1 | 0x6000;
        }
      }
    }
  }
  param_1 = param_1 & 0x3000000;
  if (param_1 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (param_1 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (param_1 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0040fd09(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint in_MXCSR;
  ushort in_FPUControlWord;
  
  uVar1 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar3 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar3 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else {
      if (uVar3 == 0x800) {
        uVar1 = uVar1 | 0x200;
      }
      else {
        if (uVar3 == 0xc00) {
          uVar1 = uVar1 | 0x300;
        }
      }
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else {
    if ((in_FPUControlWord & 0x300) == 0x200) {
      uVar1 = uVar1 | 0x10000;
    }
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  uVar4 = ~param_2 & uVar1 | param_1 & param_2;
  if (uVar4 != uVar1) {
    uVar1 = __hw_cw(uVar4);
    uVar4 = 0;
    if ((uVar1 & 1) != 0) {
      uVar4 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar2 = uVar1 & 0xc00;
    if (uVar2 != 0) {
      if (uVar2 == 0x400) {
        uVar4 = uVar4 | 0x100;
      }
      else {
        if (uVar2 == 0x800) {
          uVar4 = uVar4 | 0x200;
        }
        else {
          if (uVar2 == 0xc00) {
            uVar4 = uVar4 | 0x300;
          }
        }
      }
    }
    if ((uVar1 & 0x300) == 0) {
      uVar4 = uVar4 | 0x20000;
    }
    else {
      if ((uVar1 & 0x300) == 0x200) {
        uVar4 = uVar4 | 0x10000;
      }
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar4 = uVar4 | 0x40000;
    }
  }
  uVar1 = uVar4;
  if (0 < _DAT_00419ee8) {
    uVar2 = 0;
    if ((char)in_MXCSR < '\0') {
      uVar2 = 0x10;
    }
    if ((in_MXCSR & 0x200) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((in_MXCSR & 0x400) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((in_MXCSR & 0x800) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((in_MXCSR & 0x1000) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((in_MXCSR & 0x100) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar1 = in_MXCSR & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else {
        if (uVar1 == 0x4000) {
          uVar2 = uVar2 | 0x200;
        }
        else {
          if (uVar1 == 0x6000) {
            uVar2 = uVar2 | 0x300;
          }
        }
      }
    }
    uVar1 = in_MXCSR & 0x8040;
    if (uVar1 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar1 == 0x8000) {
        uVar2 = uVar2 | 0x3000000;
      }
      else {
        if (uVar1 == 0x8040) {
          uVar2 = uVar2 | 0x1000000;
        }
      }
    }
    uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_2 & 0x308031f & param_1;
    if (uVar1 != uVar2) {
      uVar1 = ___hw_cw_sse2(uVar1);
      ___set_fpsr_sse2(uVar1);
      uVar2 = 0;
      if ((char)in_MXCSR < '\0') {
        uVar2 = 0x10;
      }
      if ((in_MXCSR & 0x200) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((in_MXCSR & 0x400) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((in_MXCSR & 0x800) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((in_MXCSR & 0x1000) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((in_MXCSR & 0x100) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      uVar1 = in_MXCSR & 0x6000;
      if (uVar1 != 0) {
        if (uVar1 == 0x2000) {
          uVar2 = uVar2 | 0x100;
        }
        else {
          if (uVar1 == 0x4000) {
            uVar2 = uVar2 | 0x200;
          }
          else {
            if (uVar1 == 0x6000) {
              uVar2 = uVar2 | 0x300;
            }
          }
        }
      }
      uVar1 = in_MXCSR & 0x8040;
      if (uVar1 == 0x40) {
        uVar2 = uVar2 | 0x2000000;
      }
      else {
        if (uVar1 == 0x8000) {
          uVar2 = uVar2 | 0x3000000;
        }
        else {
          if (uVar1 == 0x8040) {
            uVar2 = uVar2 | 0x1000000;
          }
        }
      }
    }
    uVar1 = uVar2 | uVar4;
    if (((uVar2 ^ uVar4) & 0x8031f) != 0) {
      uVar1 = uVar1 | 0x80000000;
    }
  }
  return uVar1;
}



// Library Function - Single Match
// Name: __hw_cw
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

uint __cdecl __hw_cw(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else {
      if (uVar2 == 0x200) {
        uVar1 = uVar1 | 0x800;
      }
      else {
        if (uVar2 == 0x300) {
          uVar1 = uVar1 | 0xc00;
        }
      }
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else {
    if ((param_1 & 0x30000) == 0x10000) {
      uVar1 = uVar1 | 0x200;
    }
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
// Name: ___set_fpsr_sse2
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void ___set_fpsr_sse2(undefined4 param_1)

{
  return;
}



BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00410118. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x0041011e. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


