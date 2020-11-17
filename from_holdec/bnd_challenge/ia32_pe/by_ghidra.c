typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
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
                    // WARNING: Load size is inaccurate
    puVar4 = param_1 + 1;
    *param_1 = CONCAT31(CONCAT21(CONCAT11(*this,*(undefined *)((int)this + 1)),
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
    uVar6 = (*(uint *)(&DAT_00416130 + (((uVar3 & 0xff00) << 8) >> 0x10) * 4) ^ 0x1000000) &
            0xff000000 ^ *(uint *)(&DAT_00416130 + (uVar3 & 0xff) * 4) & 0xff0000 ^
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



void __fastcall FUN_00401780(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint local_2c [3];
  undefined uStack29;
  uint uStack32;
  uint *local_1c;
  uint **local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  puVar15 = param_1;
  local_8 = param_2;
  if (0xf < param_3) {
    puVar16 = (uint *)((int)param_1 - (int)param_5);
    local_c = (uint *)(param_3 >> 4);
    local_10 = param_1;
    do {
      if (((uint *)((int)puVar16 + 0xf + (int)param_5) < local_2c) ||
         (&stack0xffffffe0 + 3 < param_1)) {
        local_2c[0] = *param_1 ^ *param_5;
        local_2c[1] = param_1[1] ^ param_5[1];
        local_2c[2] = param_1[2] ^ param_5[2];
        uStack32 = param_1[3] ^ param_5[3];
      }
      else {
        iVar14 = 0x10;
        puVar15 = param_5;
        do {
          (&stack0xffffffd3 + -(int)param_5)[(int)(uint *)((int)puVar15 + 1)] =
               *(byte *)((int)puVar16 + (int)puVar15) ^ *(byte *)puVar15;
          iVar14 = iVar14 + -1;
          puVar15 = (uint *)((int)puVar15 + 1);
        } while (iVar14 != 0);
      }
      FUN_004011c0((undefined *)local_2c,(undefined *)local_8,param_4);
      param_3 = param_3 - 0x10;
      param_1 = param_1 + 4;
      puVar16 = puVar16 + 4;
      uVar17 = *local_8;
      uVar3 = local_8[1];
      uVar4 = local_8[2];
      uVar5 = local_8[3];
      local_8 = local_8 + 4;
      local_c = (uint *)((int)local_c - 1);
      *param_5 = uVar17;
      param_5[1] = uVar3;
      param_5[2] = uVar4;
      param_5[3] = uVar5;
      puVar15 = param_1;
    } while (local_c != (uint *)0x0);
  }
  local_10 = puVar15;
  if (param_3 != 0) {
    uVar17 = 0;
    if (param_3 != 0) {
      if ((0x1f < param_3) &&
         (((uint *)((int)local_10 + (param_3 - 1)) < local_2c ||
          (&stack0xffffffd3 + param_3 < local_10)))) {
        local_14 = (uint *)((int)local_2c + -(int)local_10);
        local_c = (uint *)((int)param_5 - (int)local_10);
        local_18 = (uint **)((int)&local_1c + -(int)local_10);
        local_1c = param_5 + 4;
        puVar15 = local_10;
        do {
          puVar1 = (uint *)((int)local_c + (int)puVar15);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          puVar16 = puVar15 + 8;
          uVar6 = puVar15[1];
          uVar7 = puVar15[2];
          uVar8 = puVar15[3];
          uVar9 = puVar15[4];
          uVar10 = puVar15[5];
          uVar11 = puVar15[6];
          uVar12 = puVar15[7];
          puVar2 = (uint *)(&stack0xffffffb4 + -(int)local_10 + (int)puVar16);
          *puVar2 = *puVar1 ^ *puVar15;
          puVar2[1] = uVar3 ^ uVar6;
          puVar2[2] = uVar4 ^ uVar7;
          puVar2[3] = uVar5 ^ uVar8;
          puVar15 = (uint *)((int)local_1c + uVar17);
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar17 = uVar17 + 0x20;
          puVar1 = (uint *)(&stack0xffffffc4 + -(int)local_10 + (int)puVar16);
          *puVar1 = *puVar15 ^ uVar9;
          puVar1[1] = uVar3 ^ uVar10;
          puVar1[2] = uVar4 ^ uVar11;
          puVar1[3] = uVar5 ^ uVar12;
          puVar15 = puVar16;
        } while (uVar17 < param_3 - (param_3 & 0x1f));
      }
      if (uVar17 < param_3) {
        puVar15 = (uint *)((int)local_10 - (int)param_5);
        iVar14 = param_3 - uVar17;
        pbVar13 = (byte *)(uVar17 + (int)param_5);
        do {
          pbVar13[(int)((int)local_2c - (int)param_5)] = pbVar13[(int)puVar15] ^ *pbVar13;
          iVar14 = iVar14 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iVar14 != 0);
      }
    }
    if (param_3 < 0x10) {
      FID_conflict__memcpy
                ((void *)((int)local_2c + param_3),(void *)(param_3 + (int)param_5),0x10 - param_3);
    }
    FUN_004011c0((undefined *)local_2c,(undefined *)local_2c,param_4);
    *param_5 = local_2c[0];
    param_5[1] = local_2c[1];
    param_5[2] = local_2c[2];
    param_5[3] = uStack32;
    *local_8 = local_2c[0];
    local_8[1] = local_2c[1];
    local_8[2] = local_2c[2];
    local_8[3] = uStack32;
  }
  return;
}



uint __fastcall FUN_00401960(byte *param_1,int param_2)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined local_c;
  char local_8 [2];
  undefined local_6;
  
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    in_EAX = in_EAX & 0xffffff00 | (uint)bVar1;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  if (pbVar3 + -(int)(param_1 + 1) != (byte *)0x20) {
    return in_EAX;
  }
  local_6 = 0;
  iVar4 = 0;
  do {
    _strncpy(local_8,(char *)param_1,2);
    uVar2 = FUN_00401d24(local_8,(int)&DAT_00417530);
    if (uVar2 != 1) {
      return uVar2 & 0xffffff00;
    }
    param_1 = param_1 + 2;
    *(undefined *)(iVar4 + param_2) = local_c;
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
  char cVar1;
  FILE *_File;
  uint uVar2;
  FILE *_File_00;
  uint *_Memory;
  int iVar3;
  undefined4 *puVar4;
  ushort *extraout_ECX;
  int iVar5;
  uint local_138 [61];
  uint local_44 [4];
  undefined4 local_34;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined8 local_24;
  undefined2 local_1c;
  undefined local_1a;
  byte local_18 [16];
  FILE *local_8;
  
  iVar5 = param_2;
  if (param_1 != 4) {
    return 1;
  }
  uVar2 = FUN_00401960(*(byte **)(param_2 + 4),(int)local_18);
  if ((char)uVar2 == '\0') {
    return 2;
  }
  iVar3 = 0;
  do {
    local_18[iVar3] = (char)iVar3 * '\x02' ^ local_18[iVar3] ^ 0x55;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  _File_00 = _fopen(*(char **)(iVar5 + 8),"rb");
  if (_File_00 == (FILE *)0x0) {
    return 3;
  }
  local_8 = _fopen(*(char **)(iVar5 + 0xc),"wb");
  if (local_8 == (FILE *)0x0) {
    _fclose(_File_00);
    return 4;
  }
  FUN_00402000(_File_00,0,2);
  uVar2 = FUN_00402413(_File_00);
  param_1 = uVar2;
  FUN_004019e0((int)local_18);
  if ((uVar2 & 0xf) != 0) {
    uVar2 = (uVar2 - (uVar2 & 0xf)) + 0x10;
  }
  FUN_00402000(_File_00,0,0);
  _File = local_8;
  puVar4 = &local_34;
  local_1c = 0x2174;
  local_34 = 0x61746f54;
  uStack48 = 0x6f74206c;
  uStack44 = 0x76206c6c;
  uStack40 = 0x63737265;
  local_1a = 0;
  local_24 = 0x6c65737365756c68;
  do {
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  FUN_004025d8((ushort *)&local_34,(uint)((int)puVar4 - ((int)&local_34 + 1)),1,local_8);
  FUN_004025d8((ushort *)&param_1,4,1,_File);
  FUN_004019e0((int)local_18);
  FUN_004025d8(extraout_ECX,0x10,1,_File);
  FUN_004019e0((int)local_18);
  local_8 = (FILE *)_malloc(uVar2);
  FUN_00407390((uint *)local_8,0,uVar2);
  _fread(local_8,param_1,1,_File_00);
  _fclose(_File_00);
  _Memory = (uint *)_malloc(uVar2);
  FUN_00407390(_Memory,0,uVar2);
  iVar5 = 0;
  do {
    *(byte *)((int)local_44 + iVar5) = (byte)param_1 ^ (byte)iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  iVar5 = FUN_00401000(local_18,local_138);
  if (iVar5 != 0) {
    return 4;
  }
  FUN_00401780((uint *)local_8,_Memory,uVar2,local_138,local_44);
  FUN_004025d8((ushort *)_Memory,uVar2,1,_File);
  FID_conflict__free(local_8);
  FID_conflict__free(_Memory);
  _fclose(_File);
  return 0;
}



// Library Function - Single Match
//  _strncpy
// 
// Library: Visual Studio

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
        goto joined_r0x00401c4c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        if (uVar4 == 0) goto LAB_00401c93;
        goto LAB_00401d09;
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
joined_r0x00401d05:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00401d09:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00401c93;
          return _Dest;
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
LAB_00401c93:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
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
//  __fsopen
// 
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
//  _fopen
// 
// Library: Visual Studio 2012 Release

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}



// Library Function - Single Match
//  __fclose_nolock
// 
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
//  _fclose
// 
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
    iVar2 = (iVar2 != -1) - 1;
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
  byte extraout_DL;
  byte bVar8;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  byte *extraout_EDX_01;
  byte *pbVar9;
  char *pcVar10;
  byte *extraout_EDX_02;
  byte *extraout_EDX_03;
  char *pcVar11;
  undefined8 uVar12;
  undefined uVar13;
  char *in_stack_ffffefd4;
  char *local_1020;
  uint local_101c;
  FILE *local_1018;
  int local_1014;
  int local_1010;
  byte local_1009 [4097];
  uint local_8;
  
  uVar13 = SUB41(in_stack_ffffefd4,0);
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_1018 = param_1;
  if (param_1 == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00402c77();
    bVar8 = extraout_DL;
    goto LAB_00402404;
  }
  uVar3 = __fileno(param_1);
  if (param_1->_cnt < 0) {
    param_1->_cnt = 0;
  }
  local_101c = uVar3;
  local_1010 = FUN_00404c42(uVar3,0,1);
  pbVar7 = extraout_EDX;
  if (local_1010 < 0) {
LAB_004023a1:
    bVar8 = (byte)pbVar7;
  }
  else {
    local_1014 = (int)uVar3 >> 5;
    iVar6 = (uVar3 & 0x1f) * 0x40;
    uVar3 = param_1->_flag;
    local_1009[0] = (char)(*(char *)(iVar6 + 0x24 + (&DAT_004191d0)[local_1014]) * '\x02') >> 1;
    bVar8 = local_1009[0];
    if ((uVar3 & 0x108) != 0) {
      pcVar11 = param_1->_ptr;
      local_1020 = param_1->_base;
      in_stack_ffffefd4 = pcVar11 + -(int)local_1020;
      if ((uVar3 & 3) == 0) {
        if ((uVar3 & 0x80) == 0) {
          piVar2 = __errno();
          *piVar2 = 0x16;
          pbVar7 = extraout_EDX_02;
          goto LAB_004023a1;
        }
      }
      else {
        if ((local_1009[0] == 1) && (*(int *)(iVar6 + 0x30 + (&DAT_004191d0)[local_1014]) != 0)) {
          pcVar11 = (char *)((uint)in_stack_ffffefd4 >> 1);
          if (local_1018->_cnt != 0) {
            uVar12 = FUN_00404dd8(local_101c,
                                  *(undefined4 *)(iVar6 + 0x28 + (&DAT_004191d0)[local_1014]),
                                  *(undefined4 *)(iVar6 + 0x2c + (&DAT_004191d0)[local_1014]),0);
            pbVar7 = (byte *)((ulonglong)uVar12 >> 0x20);
            iVar1 = (&DAT_004191d0)[local_1014];
            if (((((int)uVar12 != *(int *)(iVar6 + 0x28 + iVar1)) ||
                 (pbVar7 != *(byte **)(iVar6 + 0x2c + iVar1))) ||
                (BVar4 = ReadFile(*(HANDLE *)(iVar6 + iVar1),local_1009 + 1,0x1000,
                                  (LPDWORD)&local_1020,(LPOVERLAPPED)0x0), pbVar7 = extraout_EDX_00,
                BVar4 == 0)) ||
               ((iVar6 = FUN_00404c42(local_101c,local_1010,0), pbVar7 = extraout_EDX_01, iVar6 < 0
                || (local_1020 < pcVar11)))) goto LAB_004023a1;
            pbVar7 = local_1009 + 1;
            pbVar9 = extraout_EDX_01;
            if (pcVar11 != (char *)0x0) {
              pbVar9 = pbVar7 + (int)local_1020;
              do {
                pcVar11 = pcVar11 + -1;
                if (pbVar9 <= pbVar7) break;
                if (*pbVar7 == 0xd) {
                  if ((pbVar7 < local_1009 + (int)local_1020) && (pbVar7[1] == 10)) {
                    pbVar7 = pbVar7 + 1;
                  }
                }
                else {
                  pbVar7 = pbVar7 + (char)(&DAT_00418400)[*pbVar7];
                }
                pbVar7 = pbVar7 + 1;
              } while (pcVar11 != (char *)0x0);
            }
            bVar8 = (byte)pbVar9;
          }
          goto LAB_00402402;
        }
        pcVar10 = local_1020;
        if ((*(byte *)(iVar6 + 4 + (&DAT_004191d0)[local_1014]) & 0x80) != 0) {
          while (pcVar10 < pcVar11) {
            pcVar10 = pcVar10 + 1;
          }
        }
      }
      if (((local_1010 != 0) && ((uVar3 & 1) != 0)) && (local_1018->_cnt != 0)) {
        pcVar10 = local_1018->_base;
        iVar1 = local_1018->_cnt;
        uVar3 = 0;
        if ((*(byte *)(iVar6 + 4 + (&DAT_004191d0)[local_1014]) & 0x80) != 0) {
          iVar6 = FUN_00404c42(local_101c,0,2);
          if (iVar6 == local_1010) {
            uVar5 = ~-(uint)(local_1018->_base + (int)(pcVar11 + (iVar1 - (int)pcVar10)) <
                            local_1018->_base) &
                    (uint)(local_1018->_base + (int)(pcVar11 + (iVar1 - (int)pcVar10)) +
                          -(int)local_1018->_base);
            bVar8 = local_1009[0];
            if (uVar5 != 0) {
              do {
                uVar3 = uVar3 + 1;
              } while (uVar3 < uVar5);
            }
          }
          else {
            iVar6 = FUN_00404c42(local_101c,local_1010,0);
            pbVar7 = extraout_EDX_03;
            bVar8 = local_1009[0];
            if (iVar6 < 0) goto LAB_004023a1;
          }
        }
      }
    }
  }
LAB_00402402:
  uVar13 = SUB41(in_stack_ffffefd4,0);
LAB_00402404:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,bVar8,uVar13);
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
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (ushort *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      puVar9 = (ushort *)(param_2 * param_3);
      puVar8 = puVar9;
      if ((param_4->_flag & 0x10cU) == 0) {
        local_8 = (ushort *)0x1000;
      }
      else {
        local_8 = (ushort *)param_4->_bufsiz;
      }
      do {
        while( true ) {
          if (puVar8 == (ushort *)0x0) {
            return param_3;
          }
          uVar7 = param_4->_flag & 0x108;
          if (uVar7 != 0) break;
LAB_0040252c:
          if (local_8 <= puVar8) {
            if ((uVar7 != 0) && (iVar3 = FUN_00404af1(param_4), iVar3 != 0)) goto LAB_004025ca;
            puVar4 = puVar8;
            if (local_8 != (ushort *)0x0) {
              puVar4 = (ushort *)((int)puVar8 - (uint)puVar8 % (uint)local_8);
            }
            puVar2 = param_1;
            puVar6 = puVar4;
            puVar5 = (ushort *)__fileno(param_4);
            puVar6 = (ushort *)FUN_00406284(puVar5,puVar2,puVar6);
            if (puVar6 != (ushort *)0xffffffff) {
              puVar2 = puVar4;
              if (puVar6 <= puVar4) {
                puVar2 = puVar6;
              }
              puVar8 = (ushort *)((int)puVar8 - (int)puVar2);
              if (puVar4 <= puVar6) goto LAB_00402589;
            }
            goto LAB_004025c6;
          }
          uVar7 = FUN_00405ae4((int)*(char *)param_1,param_4);
          if (uVar7 == 0xffffffff) goto LAB_004025ca;
          param_1 = (ushort *)((int)param_1 + 1);
          puVar8 = (ushort *)((int)puVar8 - 1);
          local_8 = (ushort *)param_4->_bufsiz;
          if ((int)local_8 < 1) {
            local_8 = (ushort *)0x1;
          }
        }
        puVar2 = (ushort *)param_4->_cnt;
        if (puVar2 == (ushort *)0x0) goto LAB_0040252c;
        if ((int)puVar2 < 0) {
LAB_004025c6:
          param_4->_flag = param_4->_flag | 0x20;
LAB_004025ca:
          return (uint)((int)puVar9 - (int)puVar8) / param_2;
        }
        if (puVar8 < puVar2) {
          puVar2 = puVar8;
        }
        FID_conflict__memcpy(param_4->_ptr,param_1,(size_t)puVar2);
        param_4->_cnt = param_4->_cnt - (int)puVar2;
        puVar8 = (ushort *)((int)puVar8 - (int)puVar2);
        param_4->_ptr = param_4->_ptr + (int)puVar2;
LAB_00402589:
        param_1 = (ushort *)((int)param_1 + (int)puVar2);
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
//  _malloc
// 
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
        FUN_00406cf1(0xff);
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



uint __cdecl FUN_004026ec(uint *param_1,LPWSTR param_2,uint param_3,uint param_4,FILE *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  int *piVar3;
  LPWSTR pWVar4;
  uint uVar5;
  LPWSTR pWVar6;
  uint *puVar7;
  LPWSTR local_10;
  LPWSTR local_c;
  uint *local_8;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (uint *)0x0) {
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
    pWVar6 = (LPWSTR)(param_3 * param_4);
    pWVar2 = pWVar6;
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
      pWVar4 = (LPWSTR)param_5->_cnt;
      if (pWVar4 == (LPWSTR)0x0) break;
      if ((int)pWVar4 < 0) {
LAB_00402899:
        param_5->_flag = param_5->_flag | 0x20;
LAB_0040289d:
        return (uint)((int)pWVar6 - (int)pWVar2) / param_3;
      }
      if (pWVar2 < pWVar4) {
        pWVar4 = pWVar2;
      }
      if (local_c < pWVar4) goto LAB_00402873;
      _memcpy_s(local_8,(rsize_t)local_c,param_5->_ptr,(rsize_t)pWVar4);
      param_5->_cnt = param_5->_cnt - (int)pWVar4;
      param_5->_ptr = param_5->_ptr + (int)pWVar4;
LAB_00402831:
      iVar1 = -(int)pWVar4;
      local_8 = (uint *)((int)local_8 + (int)pWVar4);
      local_c = (LPWSTR)((int)local_c - (int)pWVar4);
LAB_00402863:
      pWVar2 = (LPWSTR)((int)pWVar2 + iVar1);
    }
    if (pWVar2 < local_10) {
      uVar5 = FUN_004071ed(param_5);
      if (uVar5 == 0xffffffff) goto LAB_0040289d;
      if (local_c != (LPWSTR)0x0) {
        *(char *)local_8 = (char)uVar5;
        local_8 = (uint *)((int)local_8 + 1);
        iVar1 = -1;
        local_c = (LPWSTR)((int)local_c - 1);
        local_10 = (LPWSTR)param_5->_bufsiz;
        goto LAB_00402863;
      }
    }
    else {
      if (local_10 == (LPWSTR)0x0) {
        pWVar4 = (LPWSTR)0x7fffffff;
        if (pWVar2 < (LPWSTR)0x80000000) {
          pWVar4 = pWVar2;
        }
      }
      else {
        if (pWVar2 < (LPWSTR)0x80000000) {
          uVar5 = (uint)pWVar2 % (uint)local_10;
          pWVar4 = pWVar2;
        }
        else {
          uVar5 = (uint)(0x7fffffff % ZEXT48(local_10));
          pWVar4 = (LPWSTR)0x7fffffff;
        }
        pWVar4 = (LPWSTR)((int)pWVar4 - uVar5);
      }
      if (pWVar4 <= local_c) {
        puVar7 = local_8;
        uVar5 = __fileno(param_5);
        pWVar4 = FUN_0040509f(uVar5,(LPWSTR)puVar7,(uint)pWVar4);
        if (pWVar4 == (LPWSTR)0x0) {
          param_5->_flag = param_5->_flag | 0x10;
          goto LAB_0040289d;
        }
        if (pWVar4 != (LPWSTR)0xffffffff) goto LAB_00402831;
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
//  _fread
// 
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
//  _fread_s
// 
// Library: Visual Studio 2012 Release

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      uVar2 = FUN_004026ec((uint *)_DstBuf,(LPWSTR)_DstSize,_ElementSize,_Count,_File);
      FUN_00402955();
      return uVar2;
    }
    if (_DstSize != 0xffffffff) {
      FUN_00407390((uint *)_DstBuf,0,_DstSize);
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
//  __free_base
//  _free
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

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
//  _fast_error_exit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __cdecl _fast_error_exit(int param_1)

{
  if (DAT_00419a48 != 2) {
    __FF_MSGBANNER();
  }
  FUN_0040701b(param_1);
  FUN_00406cf1(0xff);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Removing unreachable block (ram,0x004029b7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  ___security_init_cookie();
  FUN_00407bdc(1);
  bVar1 = FUN_004071d8();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    _fast_error_exit(0x1c);
  }
  iVar2 = FUN_00407839();
  if (iVar2 == 0) {
    _fast_error_exit(0x10);
  }
  FUN_00407cc5();
  iVar2 = FUN_00405830();
  if (iVar2 < 0) {
    _fast_error_exit(0x1b);
  }
  DAT_0041b008 = GetCommandLineA();
  DAT_004191c0 = FUN_00407d05();
  iVar2 = FUN_004078cc();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = FUN_00407afb();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  iVar2 = FUN_00406d41(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  _DAT_00419304 = DAT_004192e4;
  iVar2 = FUN_00401a00(DAT_004192d8,DAT_004192dc);
  _exit(iVar2);
  __cexit();
  return iVar2;
}



void __cdecl FUN_00402b1a(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined uVar4;
  PCONTEXT local_328;
  DWORD local_324;
  DWORD local_320 [19];
  undefined4 local_2d4;
  PCONTEXT local_224;
  uint local_214;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  if (param_1 != -1) {
    FUN_00408152();
  }
  local_324 = 0;
  FUN_00407390(local_320,0,0x4c);
  uVar4 = 0xdc;
  local_328 = (PCONTEXT)&local_2d4;
  local_214 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY4((int)&stack0xfffffcc4,0xc) * 0x800 |
              (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
              (uint)((int)&stack0xfffffcd0 < 0) * 0x80 |
              (uint)((undefined *)register0x00000010 == (undefined *)0x330) * 0x40 |
              (uint)(in_AF & 1) * 0x10 |
              (uint)((POPCOUNT((uint)&stack0xfffffcd0 & 0xff) & 1U) == 0) * 4 |
              (uint)((undefined *)0xfffffff3 < &stack0xfffffcc4) | (uint)(in_ID & 1) * 0x200000 |
              (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
              (uint)(in_AC & 1) * 0x40000;
  local_2d4 = 0x10001;
  local_324 = param_2;
  local_320[0] = param_3;
  local_224 = local_328;
  BVar1 = IsDebuggerPresent();
  LVar2 = ___crtUnhandledException((EXCEPTION_POINTERS *)&stack0xfffffcd4);
  uVar3 = extraout_DL;
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_00408152();
    uVar3 = extraout_DL_00;
  }
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar3,uVar4);
  return;
}



void __cdecl FUN_00402c3f(undefined4 param_1)

{
  DAT_004191c8 = param_1;
  return;
}



// Library Function - Single Match
//  __invalid_parameter
// 
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
//  __invoke_watson
// 
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
  }
  FUN_00402b1a(2,0xc0000417,1);
  ___crtTerminateProcess(0xc0000417);
  return;
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
    if (cVar1 == '\0') goto LAB_00402d23;
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
LAB_00402d23:
  return (size_t)((int)puVar3 + (-1 - (int)_Str));
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
FUN_00402dd3(uint param_1,uint *param_2,LPCVOID *param_3,void *param_4,undefined4 *param_5)

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
//  __inc
// 
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
  uint uVar9;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined extraout_DL_04;
  undefined extraout_DL_05;
  undefined extraout_DL_06;
  undefined extraout_DL_07;
  undefined extraout_DL_08;
  undefined extraout_DL_09;
  undefined extraout_DL_10;
  byte bVar10;
  byte bVar11;
  undefined extraout_DL_11;
  undefined extraout_DL_12;
  undefined extraout_DL_13;
  undefined extraout_DL_14;
  undefined extraout_DL_15;
  undefined uVar12;
  undefined *puVar13;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  uint extraout_EDX_20;
  uint extraout_EDX_21;
  char cVar14;
  char cVar16;
  uint uVar15;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined *puVar24;
  undefined uVar25;
  pthreadlocinfo in_stack_fffffe00;
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
  uint local_190;
  char local_18c;
  char local_18b;
  char local_18a;
  char local_189;
  undefined local_188 [352];
  uint local_28 [2];
  undefined local_1d;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  uVar15 = 0;
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
    uVar25 = SUB41(in_stack_fffffe00,0);
    *piVar3 = 0x16;
    FUN_00402c77();
    lVar23 = CONCAT44(local_1b0,local_1cc);
    uVar12 = extraout_DL;
    goto LAB_00403fb4;
  }
  if ((*(byte *)&param_1->_flag & 0x40) == 0) {
    uVar4 = __fileno(param_1);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar13 = &DAT_00418500;
    }
    else {
      puVar13 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar4 >> 5]);
    }
    if ((puVar13[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar13 = &DAT_00418500;
      }
      else {
        puVar13 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)uVar4 >> 5]);
      }
      if ((puVar13[0x24] & 0x80) == 0) goto LAB_00402f76;
    }
    piVar3 = __errno();
    uVar25 = SUB41(in_stack_fffffe00,0);
    *piVar3 = 0x16;
    FUN_00402c77();
    lVar23 = CONCAT44(local_1b0,local_1cc);
    uVar12 = extraout_DL_00;
    goto LAB_00403fb4;
  }
LAB_00402f76:
  FUN_00402d4b(&stack0xfffffe00,param_3);
  lVar23 = CONCAT44(local_1b0,local_1cc);
  bVar11 = *param_2;
  iVar17 = 0;
  local_18b = '\0';
  local_194 = 0;
  local_1a0 = 0;
  local_1d4 = 0;
  uVar12 = extraout_DL_01;
  if (bVar11 == 0) {
LAB_00403f9e:
    uVar25 = SUB41(in_stack_fffffe00,0);
  }
  else {
LAB_00402faa:
    iVar5 = _isspace((uint)bVar11);
    pFVar2 = local_198;
    local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
    local_1cc = (uint)lVar23;
    if (iVar5 != 0) {
      local_1a0 = iVar17 + -1;
      uVar4 = __whiteout(&local_1a0,local_198);
      local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
      local_1cc = (uint)lVar23;
      pbVar19 = param_2;
      if (uVar4 != 0xffffffff) {
        FUN_0040815a(uVar4,pFVar2);
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
      }
      do {
        pbVar19 = pbVar19 + 1;
        iVar17 = _isspace((uint)*pbVar19);
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
      } while (iVar17 != 0);
      local_194 = local_1a0;
      iVar17 = local_1a0;
      uVar12 = extraout_DL_02;
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
      uVar4 = 0;
      local_1b1 = 0;
      uVar15 = 0x100;
      local_1c0 = 0;
      local_1c4 = 0;
      local_1a9 = 0;
      local_1aa = '\0';
      local_18a = '\0';
      local_19a = '\0';
      local_189 = '\0';
      local_1e0 = 0;
      do {
        pbVar20 = param_2 + 1;
        local_1c8 = (int *)(uint)*pbVar20;
        iVar17 = _isdigit((int)local_1c8);
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
        pbVar19 = pbVar20;
        if (iVar17 == 0) {
          cVar14 = (char)uVar15;
          cVar16 = (char)(uVar15 >> 8);
          if ((int)local_1c8 < 0x4f) {
            if (local_1c8 != (int *)0x4e) {
              if (local_1c8 == (int *)0x2a) {
                local_18a = local_18a + '\x01';
              }
              else {
                if (local_1c8 != (int *)0x46) {
                  if (local_1c8 == (int *)0x49) {
                    bVar11 = param_2[2];
                    if ((bVar11 == 0x36) && (pbVar19 = param_2 + 3, *pbVar19 == 0x34))
                    goto LAB_00403122;
                    if ((((bVar11 != 0x33) || (pbVar19 = param_2 + 3, *pbVar19 != 0x32)) &&
                        (pbVar19 = pbVar20, bVar11 != 100)) &&
                       (((bVar11 != 0x69 && (bVar11 != 0x6f)) &&
                        ((bVar11 != 0x78 && (bVar11 != 0x58)))))) goto LAB_00403195;
                  }
                  else {
                    if (local_1c8 == (int *)0x4c) {
                      uVar15 = (uint)CONCAT11(cVar16 + '\x01',cVar14);
                    }
                    else {
LAB_00403195:
                      uVar15 = uVar15 & 0xffffff00 | (uint)(byte)(cVar14 + 1);
                      pbVar19 = pbVar20;
                    }
                  }
                }
              }
            }
          }
          else {
            if (local_1c8 == (int *)0x68) {
              uVar15 = (uint)CONCAT11(cVar16 + -1,cVar14);
              local_189 = local_189 + -1;
            }
            else {
              if (local_1c8 == (int *)0x6c) {
                pbVar19 = param_2 + 2;
                if (*pbVar19 == 0x6c) {
LAB_00403122:
                  local_1e0 = local_1e0 + 1;
                  lVar23 = 0;
                  goto LAB_00403094;
                }
                uVar15 = (uint)CONCAT11(cVar16 + '\x01',cVar14);
              }
              else {
                if (local_1c8 != (int *)0x77) goto LAB_00403195;
              }
              local_189 = local_189 + '\x01';
              pbVar19 = pbVar20;
            }
          }
        }
        else {
          local_1c4 = local_1c4 + 1;
          uVar4 = ((int)local_1c8 - 0x30U) + uVar4 * 10;
        }
LAB_00403094:
        param_2 = pbVar19;
      } while ((char)uVar15 == '\0');
      local_199 = (char)(uVar15 >> 8);
      if (local_18a == '\0') {
        local_1f0 = local_1ec;
        local_1c8 = *local_1ec;
        local_1ec = local_1ec + 1;
      }
      else {
        local_1c8 = (int *)0x0;
      }
      local_18c = '\0';
      if ((local_189 == '\0') && ((*pbVar19 == 0x53 || (local_189 = -1, *pbVar19 == 0x43)))) {
        local_189 = '\x01';
      }
      local_1a8 = *pbVar19 | 0x20;
      iVar17 = local_194;
      local_1bc = pbVar19;
      local_190 = uVar4;
      if (local_1a8 != 0x6e) {
        if ((local_1a8 == 99) || (local_1a8 == 0x7b)) {
          iVar17 = local_194 + 1;
          local_1a0 = iVar17;
          local_194 = iVar17;
          uVar15 = __inc(local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar12 = extraout_DL_04;
        }
        else {
          uVar15 = __whiteout(&local_1a0,local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          local_194 = local_1a0;
          iVar17 = local_1a0;
          uVar12 = extraout_DL_03;
        }
        local_1a4 = uVar15;
        if (uVar15 == 0xffffffff) goto LAB_00403f70;
      }
      pFVar2 = local_198;
      uVar15 = local_1a4;
      uVar4 = local_190;
      if ((local_1c4 != 0) && (local_190 == 0)) goto LAB_00403f5d;
      if ((int)local_1a8 < 0x70) {
        if (local_1a8 == 0x6f) {
LAB_00403b65:
          if (local_1a4 == 0x2d) {
            local_1aa = '\x01';
          }
          else {
            cVar14 = local_18c;
            if (local_1a4 != 0x2b) goto LAB_00403bb6;
          }
          local_190 = local_190 - 1;
          if ((local_190 == 0) && (local_1c4 != 0)) {
            uVar4 = local_190;
            cVar14 = '\x01';
          }
          else {
            iVar17 = iVar17 + 1;
            local_1a0 = iVar17;
            local_194 = iVar17;
            local_1a4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_13;
            cVar14 = local_18c;
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
          uVar18 = local_1a8;
          if (uVar15 != 0xffffffff) {
            FUN_0040815a(uVar15,local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar18 = local_1a8;
          }
          do {
            if ((local_1c4 != 0) &&
               (uVar4 = local_190 - 1, bVar21 = local_190 == 0, local_190 = uVar4, bVar21))
            goto LAB_00403b0d;
            local_1a0 = local_194 + 1;
            local_194 = local_1a0;
            uVar15 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_07;
            local_1a4 = uVar15;
            if (uVar15 == 0xffffffff) goto LAB_00403ae7;
            bVar11 = (byte)uVar15;
            if (uVar18 != 99) {
              if (uVar18 == 0x73) {
                if ((8 < (int)uVar15) && ((int)uVar15 < 0xe)) goto LAB_00403ae7;
                if (uVar15 != 0x20) goto LAB_004037a5;
              }
              if ((uVar18 != 0x7b) ||
                 (uVar4 = 1 << (bVar11 & 7),
                 ((int)(char)(*(byte *)((int)local_28 + ((int)uVar15 >> 3)) ^ local_1a9) & uVar4) ==
                 0)) goto LAB_00403ae7;
            }
LAB_004037a5:
            if (local_18a == '\0') {
              if (local_19a == '\0') {
                *(byte *)local_1c8 = bVar11;
                local_1c8 = (int *)((int)local_1c8 + 1);
              }
              else {
                local_1e4 = bVar11;
                iVar17 = FUN_00408e3d(uVar15 & 0xff);
                local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
                local_1cc = (uint)lVar23;
                if (iVar17 != 0) {
                  local_1a0 = local_194 + 1;
                  local_194 = local_1a0;
                  uVar4 = __inc(local_198);
                  local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
                  local_1cc = (uint)lVar23;
                  local_1e3 = (undefined)uVar4;
                }
                local_1e8 = 0x3f;
                FUN_00408e4e((ushort *)&local_1e8,&local_1e4,in_stack_fffffe00->mb_cur_max,
                             (pthreadlocinfo *)&stack0xfffffe00);
                local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
                local_1cc = (uint)lVar23;
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
          if (*pbVar19 != local_1a4) goto LAB_00403f5d;
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
        uVar18 = 0;
        if (local_1a4 == 0x2d) {
          uVar18 = 1;
          *local_1b8 = 0x2d;
LAB_004032fc:
          local_190 = local_190 - 1;
          iVar17 = local_194 + 1;
          local_1a4 = __inc(local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
        }
        else {
          iVar17 = local_194;
          if (local_1a4 == 0x2b) goto LAB_004032fc;
        }
        uVar15 = local_1a4;
        if (local_1c4 == 0) {
          local_190 = 0xffffffff;
        }
        iVar5 = _isdigit(local_1a4 & 0xff);
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
        uVar4 = extraout_EDX;
        while ((iVar5 != 0 &&
               (uVar9 = local_190 - 1, bVar21 = local_190 != 0, local_190 = uVar9, bVar21))) {
          local_1c0 = local_1c0 + 1;
          local_1b8[uVar18] = (byte)uVar15;
          uVar18 = uVar18 + 1;
          iVar5 = FUN_00402dd3(uVar18,&local_1dc,&local_1b8,local_188,&local_1d8);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar12 = extraout_DL_05;
          if (iVar5 == 0) goto LAB_00403f70;
          iVar17 = iVar17 + 1;
          uVar15 = __inc(local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          local_1a4 = uVar15;
          iVar5 = _isdigit(uVar15 & 0xff);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_00;
        }
        local_1a9 = *in_stack_fffffe00->lconv->decimal_point;
        if ((local_1a9 == (byte)uVar15) &&
           (uVar9 = local_190 - 1, bVar21 = local_190 != 0, local_190 = uVar9, bVar21)) {
          uVar15 = __inc(local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          local_1b8[uVar18] = local_1a9;
          uVar18 = uVar18 + 1;
          local_1a4 = uVar15;
          iVar5 = FUN_00402dd3(uVar18,&local_1dc,&local_1b8,local_188,&local_1d8);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar12 = extraout_DL_06;
          if (iVar5 == 0) goto LAB_00403f70;
          iVar5 = _isdigit(uVar15 & 0xff);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_01;
          while ((iVar17 = iVar17 + 1, iVar5 != 0 &&
                 (uVar9 = local_190 - 1, bVar21 = local_190 != 0, local_190 = uVar9, bVar21))) {
            local_1c0 = local_1c0 + 1;
            local_1b8[uVar18] = (char)uVar15;
            uVar18 = uVar18 + 1;
            iVar5 = FUN_00402dd3(uVar18,&local_1dc,&local_1b8,local_188,&local_1d8);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar12 = extraout_DL_07;
            if (iVar5 == 0) goto LAB_00403f70;
            uVar15 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            local_1a4 = uVar15;
            iVar5 = _isdigit(uVar15 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_02;
          }
        }
        if ((local_1c0 != 0) &&
           (((uVar15 == 0x65 || (uVar15 == 0x45)) &&
            (uVar9 = local_190 - 1, bVar21 = local_190 != 0, local_190 = uVar9, bVar21)))) {
          local_1b8[uVar18] = 0x65;
          uVar4 = uVar18 + 1;
          iVar5 = FUN_00402dd3(uVar4,&local_1dc,&local_1b8,local_188,&local_1d8);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar12 = extraout_DL_08;
          if (iVar5 == 0) goto LAB_00403f70;
          uVar15 = __inc(local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          iVar5 = iVar17 + 1;
          local_1a4 = uVar15;
          if (uVar15 == 0x2d) {
            local_1b8[uVar4] = 0x2d;
            uVar4 = uVar18 + 2;
            iVar6 = FUN_00402dd3(uVar4,&local_1dc,&local_1b8,local_188,&local_1d8);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar12 = extraout_DL_09;
            if (iVar6 == 0) goto LAB_00403f70;
LAB_00403575:
            uVar18 = uVar4;
            if (local_190 == 0) {
              local_190 = 0;
            }
            else {
              local_190 = local_190 - 1;
              uVar15 = __inc(local_198);
              local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
              local_1cc = (uint)lVar23;
              iVar5 = iVar17 + 2;
              local_1a4 = uVar15;
            }
          }
          else {
            uVar18 = uVar4;
            if (uVar15 == 0x2b) goto LAB_00403575;
          }
          iVar17 = iVar5;
          iVar5 = _isdigit(uVar15 & 0xff);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_03;
          while ((iVar5 != 0 &&
                 (uVar9 = local_190 - 1, bVar21 = local_190 != 0, local_190 = uVar9, bVar21))) {
            local_1c0 = local_1c0 + 1;
            local_1b8[uVar18] = (char)uVar15;
            uVar18 = uVar18 + 1;
            iVar5 = FUN_00402dd3(uVar18,&local_1dc,&local_1b8,local_188,&local_1d8);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar12 = extraout_DL_10;
            if (iVar5 == 0) goto LAB_00403f70;
            iVar17 = iVar17 + 1;
            uVar15 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            local_1a4 = uVar15;
            iVar5 = _isdigit(uVar15 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_04;
          }
        }
        local_1a0 = iVar17 + -1;
        local_194 = local_1a0;
        if (uVar15 != 0xffffffff) {
          FUN_0040815a(uVar15,local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_05;
        }
        uVar12 = (undefined)uVar4;
        if (local_1c0 != 0) {
          pbVar19 = local_1bc;
          if (local_18a == '\0') {
            puVar13 = &stack0xfffffe00;
            local_1d4 = local_1d4 + 1;
            local_1b8[uVar18] = 0;
            iVar17 = local_199 + -1;
            piVar3 = local_1c8;
            puVar24 = local_1b8;
            pcVar7 = (code *)DecodePointer(PTR_LAB_00418cb8);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            (*pcVar7)(iVar17,piVar3,puVar24,puVar13);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_06;
            pbVar19 = local_1bc;
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
          pbVar20 = pbVar19 + 1;
          if (*pbVar20 == 0x5e) {
            pbVar20 = pbVar19 + 2;
            local_1a9 = 0xff;
          }
          FUN_00407390(local_28,0,0x20);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          local_1bc = pbVar20;
          bVar11 = local_1b1;
          if (*pbVar20 == 0x5d) {
            local_1d = 0x20;
            local_1bc = pbVar20 + 1;
            bVar11 = 0x5d;
          }
          while (bVar10 = *local_1bc, bVar10 != 0x5d) {
            if (((bVar10 == 0x2d) && (bVar11 != 0)) && (bVar1 = local_1bc[1], bVar1 != 0x5d)) {
              bVar10 = bVar1;
              if (bVar11 < bVar1) {
                bVar10 = bVar11;
                bVar11 = bVar1;
              }
              uVar4 = (uint)bVar11 << 8;
              if (bVar10 < bVar11) {
                uVar9 = (uint)bVar10;
                uVar4 = (uint)CONCAT11(bVar11,bVar11 - bVar10);
                uVar18 = (uint)(byte)(bVar11 - bVar10);
                do {
                  uVar4 = uVar4 & 0xffffff00;
                  pbVar19 = (byte *)((int)local_28 + (uVar9 >> 3));
                  *pbVar19 = *pbVar19 | '\x01' << ((byte)uVar9 & 7);
                  uVar9 = uVar9 + 1;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              pbVar19 = (byte *)((int)local_28 + (uVar4 >> 0xb));
              *pbVar19 = *pbVar19 | '\x01' << ((byte)(uVar4 >> 8) & 7);
              local_1bc = local_1bc + 2;
              bVar11 = 0;
            }
            else {
              pbVar19 = (byte *)((int)local_28 + (uint)(bVar10 >> 3));
              *pbVar19 = *pbVar19 | '\x01' << (bVar10 & 7);
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
        local_190 = local_190 - 1;
        if ((local_190 == 0) && (local_1c4 != 0)) {
          local_18c = '\x01';
          uVar4 = local_190;
        }
        else {
          iVar17 = iVar17 + 1;
          local_1a0 = iVar17;
          local_194 = iVar17;
          local_1a4 = __inc(local_198);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_09;
        }
      }
      else {
        if (local_1a4 == 0x2b) goto LAB_0040399e;
      }
      cVar14 = local_18c;
      if (local_1a4 == 0x30) {
        iVar5 = iVar17 + 1;
        local_1a0 = iVar5;
        local_194 = iVar5;
        local_1a4 = __inc(pFVar2);
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
        if (((char)local_1a4 == 'x') || ((char)local_1a4 == 'X')) {
          iVar17 = iVar17 + 2;
          local_1a0 = iVar17;
          local_194 = iVar17;
          local_1a4 = __inc(pFVar2);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          if ((local_1c4 != 0) && (local_190 = local_190 - 2, (int)local_190 < 1)) {
            local_18c = local_18c + '\x01';
          }
          local_1a8 = 0x78;
          uVar4 = extraout_EDX_11;
          cVar14 = local_18c;
        }
        else {
          local_1c0 = 1;
          uVar4 = extraout_EDX_08;
          if (local_1a8 == 0x78) {
            local_1a0 = iVar17;
            local_194 = iVar17;
            if (local_1a4 != 0xffffffff) {
              FUN_0040815a(local_1a4,pFVar2);
              local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
              local_1cc = (uint)lVar23;
              uVar4 = extraout_EDX_10;
            }
            local_1a4 = 0x30;
            cVar14 = local_18c;
          }
          else {
            if ((local_1c4 != 0) && (local_190 = local_190 - 1, local_190 == 0)) {
              local_18c = local_18c + '\x01';
            }
            local_1a8 = 0x6f;
            iVar17 = iVar5;
            cVar14 = local_18c;
          }
        }
      }
LAB_00403bb6:
      uVar18 = local_1a8;
      uVar15 = local_1a4;
      if (local_1e0 == 0) {
        if (cVar14 == '\0') {
          while ((uVar15 = local_1a4, local_1a8 != 0x78 && (local_1a8 != 0x70))) {
            iVar5 = _isdigit(local_1a4 & 0xff);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_17;
            if (iVar5 == 0) goto LAB_00403e0f;
            if (local_1a8 == 0x6f) {
              if (0x37 < (int)uVar15) goto LAB_00403e0f;
              local_1d0 = local_1d0 << 3;
            }
            else {
              local_1d0 = local_1d0 * 10;
            }
LAB_00403dbb:
            local_1c0 = local_1c0 + 1;
            local_1d0 = local_1d0 + -0x30 + uVar15;
            if ((local_1c4 != 0) && (local_190 = local_190 - 1, uVar18 = local_1a8, local_190 == 0))
            goto LAB_00403e3d;
            iVar17 = iVar17 + 1;
            local_1a0 = iVar17;
            local_194 = iVar17;
            local_1a4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
          }
          iVar5 = _isxdigit(local_1a4 & 0xff);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_18;
          if (iVar5 != 0) {
            local_1d0 = local_1d0 << 4;
            uVar15 = FUN_00402e32((byte)uVar15);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_19;
            local_1a4 = uVar15;
            goto LAB_00403dbb;
          }
LAB_00403e0f:
          uVar18 = local_1a8;
          local_1a0 = iVar17 + -1;
          local_194 = local_1a0;
          if (uVar15 != 0xffffffff) {
            FUN_0040815a(uVar15,local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_20;
          }
        }
LAB_00403e3d:
        if (local_1aa != '\0') {
          local_1d0 = -local_1d0;
        }
      }
      else {
        if (cVar14 == '\0') {
          while ((uVar15 = local_1a4, local_1a8 != 0x78 && (local_1a8 != 0x70))) {
            iVar5 = _isdigit(local_1a4 & 0xff);
            uVar18 = local_1a8;
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_14;
            if (iVar5 == 0) goto LAB_00403ce6;
            if (local_1a8 == 0x6f) {
              if (0x37 < (int)uVar15) goto LAB_00403ce6;
              uVar22 = lVar23 << 3;
            }
            else {
              uVar22 = __allmul(local_1cc,local_1b0,10,0);
              local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
              local_1cc = (uint)lVar23;
            }
LAB_00403c83:
            local_1c0 = local_1c0 + 1;
            uVar4 = (int)(uVar15 - 0x30) >> 0x1f;
            lVar23 = uVar22 + (longlong)(int)(uVar15 - 0x30);
            if ((local_1c4 != 0) && (local_190 = local_190 - 1, local_190 == 0)) goto LAB_00403d1a;
            iVar17 = iVar17 + 1;
            local_1a0 = iVar17;
            local_194 = iVar17;
            local_1a4 = __inc(local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
          }
          iVar5 = _isxdigit(local_1a4 & 0xff);
          local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
          local_1cc = (uint)lVar23;
          uVar4 = extraout_EDX_15;
          if (iVar5 != 0) {
            uVar22 = lVar23 << 4;
            uVar15 = FUN_00402e32((byte)uVar15);
            local_1b0 = (uint)(uVar22 >> 0x20);
            local_1cc = (uint)uVar22;
            uVar18 = local_1a8;
            local_1a4 = uVar15;
            goto LAB_00403c83;
          }
LAB_00403ce6:
          uVar18 = local_1a8;
          local_1a0 = iVar17 + -1;
          local_194 = local_1a0;
          if (uVar15 != 0xffffffff) {
            FUN_0040815a(uVar15,local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar4 = extraout_EDX_16;
          }
        }
LAB_00403d1a:
        if (local_1aa != '\0') {
          lVar23 = CONCAT44(-((int)((ulonglong)lVar23 >> 0x20) + (uint)((int)lVar23 != 0)),
                            -(int)lVar23);
        }
      }
      uVar12 = (undefined)uVar4;
      if ((-(uint)(uVar18 != 0x46) & local_1c0) == 0) goto LAB_00403f70;
      pbVar19 = local_1bc;
      if (local_18a == '\0') {
        local_1d4 = local_1d4 + 1;
        iVar17 = local_1d0;
LAB_00403e80:
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
        if (local_1e0 == 0) {
          if (local_199 == '\0') {
            *(short *)local_1c8 = (short)iVar17;
          }
          else {
            *local_1c8 = iVar17;
          }
        }
        else {
          *local_1c8 = local_1cc;
          local_1c8[1] = local_1b0;
        }
      }
LAB_0040369e:
      uVar12 = (undefined)uVar4;
      local_18b = local_18b + '\x01';
      pbVar19 = pbVar19 + 1;
      iVar17 = local_194;
      iVar5 = local_1a0;
      iVar6 = local_194;
LAB_00403f25:
      local_194 = iVar6;
      local_1a0 = iVar5;
      if ((uVar15 == 0xffffffff) && ((*pbVar19 != 0x25 || (pbVar19[1] != 0x6e)))) goto LAB_00403f70;
LAB_00403f35:
      bVar11 = *pbVar19;
      param_2 = pbVar19;
      if (bVar11 == 0) goto LAB_00403f70;
      goto LAB_00402faa;
    }
LAB_00403ece:
    iVar17 = iVar17 + 1;
    local_1a0 = iVar17;
    local_194 = iVar17;
    uVar15 = __inc(local_198);
    local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
    local_1cc = (uint)lVar23;
    pbVar19 = param_2 + 1;
    uVar4 = extraout_EDX_21;
    local_1a4 = uVar15;
    if (*param_2 == uVar15) {
      iVar8 = FUN_00408e3d(uVar15 & 0xff);
      local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
      local_1cc = (uint)lVar23;
      uVar12 = extraout_DL_11;
      iVar5 = local_1a0;
      iVar6 = local_194;
      if (iVar8 != 0) {
        uVar4 = __inc(local_198);
        pFVar2 = local_198;
        local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
        local_1cc = (uint)lVar23;
        bVar11 = *pbVar19;
        pbVar19 = param_2 + 2;
        uVar12 = extraout_DL_12;
        iVar5 = iVar17;
        iVar6 = iVar17;
        if (bVar11 != uVar4) {
          if (uVar4 != 0xffffffff) {
            FUN_0040815a(uVar4,local_198);
            local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
            local_1cc = (uint)lVar23;
            uVar12 = extraout_DL_13;
          }
          goto joined_r0x00403f60;
        }
      }
      goto LAB_00403f25;
    }
LAB_00403f5d:
    uVar12 = (undefined)uVar4;
    uVar15 = local_1a4;
    pFVar2 = local_198;
joined_r0x00403f60:
    if (uVar15 != 0xffffffff) {
      FUN_0040815a(uVar15,pFVar2);
      local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
      local_1cc = (uint)lVar23;
      uVar12 = extraout_DL_14;
    }
LAB_00403f70:
    if (local_1d8 == 1) {
      FID_conflict__free(local_1b8);
      local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
      local_1cc = (uint)lVar23;
      uVar12 = extraout_DL_15;
    }
    uVar25 = SUB41(in_stack_fffffe00,0);
    if (((uVar15 != 0xffffffff) || (local_1d4 != 0)) || (local_18b != '\0')) goto LAB_00403f9e;
  }
  if (local_1f4 != '\0') {
    *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
  }
LAB_00403fb4:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar12,uVar25);
  local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
  local_1cc = (uint)lVar23;
  return;
LAB_00403ae7:
  local_1a0 = local_194 + -1;
  local_194 = local_1a0;
  if (uVar15 != 0xffffffff) {
    FUN_0040815a(uVar15,local_198);
    local_1b0 = (uint)((ulonglong)lVar23 >> 0x20);
    local_1cc = (uint)lVar23;
    uVar4 = extraout_EDX_12;
  }
LAB_00403b0d:
  uVar12 = (undefined)uVar4;
  if (piVar3 == local_1c8) goto LAB_00403f70;
  pbVar19 = local_1bc;
  if ((local_18a == '\0') && (local_1d4 = local_1d4 + 1, uVar18 != 99)) {
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
//  __whiteout
// 
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
//  ___doserrno
// 
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
//  ___acrt_errno_map_os_error
//  __dosmaperr
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

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
//  __errno
// 
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
//  __get_errno_from_oserr
// 
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
//  __lock_file
// 
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
//  __lock_file2
// 
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
//  __unlock_file
// 
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
//  __unlock_file2
// 
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
    param_4[4] = param_2;
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
//  __SEH_prolog4
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack28 [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack28 + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack28 + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack28 + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack28 + iVar1 + 4) = DAT_004183f0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack28 + iVar1) = unaff_retaddr;
  *in_FS_OFFSET = (int)local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __SEH_epilog4
// 
// Library: Visual Studio

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

undefined4 __cdecl FUN_004045f0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  BOOL BVar4;
  undefined4 uVar5;
  undefined in_DL;
  undefined extraout_DL;
  undefined uVar6;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint uVar7;
  undefined4 unaff_EDI;
  int *piVar8;
  undefined8 uVar9;
  undefined uVar10;
  PEXCEPTION_RECORD local_1c;
  DWORD local_18;
  _EXCEPTION_RECORD *local_14;
  PVOID local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  iVar1 = (int)param_2 + 0x10;
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_004183f0);
  local_10 = (PVOID)0x1;
  if (*piVar8 != -2) {
    FUN_00404f47(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1),in_DL,(char)unaff_EDI);
    in_DL = extraout_DL;
  }
  FUN_00404f47(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1),in_DL,(char)unaff_EDI);
  uVar10 = (undefined)unaff_EDI;
  if ((*(byte *)&param_1->ExceptionFlags & 0x66) == 0) {
    local_1c = param_1;
    local_18 = param_3;
    *(PEXCEPTION_RECORD *)((int)param_2 + -4) = (PEXCEPTION_RECORD)&local_1c;
    local_c = *(uint *)((int)param_2 + 0xc);
    uVar5 = extraout_EDX;
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (_EXCEPTION_RECORD *)(piVar8 + local_c * 3 + 4);
      uVar2 = local_14->ExceptionCode;
      if ((undefined *)piVar8[local_c * 3 + 5] != (undefined *)0x0) {
        uVar9 = __EH4_CallFilterFunc_8((undefined *)piVar8[local_c * 3 + 5]);
        uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar10 = (undefined)unaff_EDI;
        uVar6 = (undefined)((ulonglong)uVar9 >> 0x20);
        local_5 = '\x01';
        if ((int)uVar9 < 0) {
          local_10 = (PVOID)0x0;
          goto LAB_0040472b;
        }
        if (0 < (int)uVar9) {
          if (((param_1->ExceptionCode == 0xe06d7363) && (_DAT_00419ffc != (code *)0x0)) &&
             (BVar4 = __IsNonwritableInCurrentImage(&DAT_00419ffc), BVar4 != 0)) {
            (*_DAT_00419ffc)(param_1,1);
          }
          __EH4_GlobalUnwind2_8(param_2,param_1);
          uVar7 = local_c;
          if (*(uint *)((int)param_2 + 0xc) != local_c) {
            __EH4_LocalUnwind_16((int)param_2,local_c,iVar1,&DAT_004183f0);
            uVar7 = extraout_EDX_00;
          }
          uVar6 = (undefined)uVar7;
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            FUN_00404f47(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1),uVar6,uVar10);
            uVar6 = extraout_DL_01;
          }
          FUN_00404f47(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1),uVar6,uVar10);
          __EH4_TransferToHandler_8((undefined *)local_14->ExceptionRecord);
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      uVar10 = (undefined)unaff_EDI;
      uVar6 = (undefined)uVar5;
      local_c = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return local_10;
    }
    __EH4_LocalUnwind_16((int)param_2,0xfffffffe,iVar1,&DAT_004183f0);
    uVar6 = extraout_DL_00;
  }
LAB_0040472b:
  if (*piVar8 != -2) {
    FUN_00404f47(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1),uVar6,uVar10);
  }
  FUN_00404f47(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1),(char)piVar8[2],uVar10);
  return local_10;
}



// Library Function - Single Match
//  __local_unwind4
// 
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
  *in_FS_OFFSET = &uStack40;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
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
//  @_EH4_CallFilterFunc@8
// 
// Library: Visual Studio

void __fastcall __EH4_CallFilterFunc_8(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



// Library Function - Single Match
//  @_EH4_TransferToHandler@8
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

void __fastcall __EH4_TransferToHandler_8(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    // WARNING: Could not recover jumptable at 0x004048b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Library Function - Single Match
//  @_EH4_GlobalUnwind2@8
// 
// Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015

void __fastcall __EH4_GlobalUnwind2_8(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x4048c6,param_2,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  @_EH4_LocalUnwind@16
// 
// Library: Visual Studio

void __fastcall __EH4_LocalUnwind_16(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



// Library Function - Single Match
//  __fileno
// 
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
//  __freebuf
// 
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
  ushort *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar3 = 0;
  if (((((byte)param_1->_flag & 3) == 2) && ((param_1->_flag & 0x108U) != 0)) &&
     (puVar4 = (ushort *)(param_1->_ptr + -(int)param_1->_base), 0 < (int)puVar4)) {
    puVar2 = (ushort *)param_1->_base;
    puVar5 = puVar4;
    puVar1 = (ushort *)__fileno(param_1);
    puVar2 = (ushort *)FUN_00406284(puVar1,puVar2,puVar5);
    if (puVar2 == puVar4) {
      if ((char)param_1->_flag < '\0') {
        param_1->_flag = param_1->_flag & 0xfffffffd;
      }
    }
    else {
      param_1->_flag = param_1->_flag | 0x20;
      uVar3 = 0xffffffff;
    }
  }
  param_1->_cnt = 0;
  param_1->_ptr = param_1->_base;
  return uVar3;
}



void FUN_00404b55(void)

{
  _flsall(1);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
//  _flsall
// 
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

void __fastcall FUN_00404f47(int param_1,undefined param_2,undefined param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
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
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  
  if (param_1 == DAT_004183f0) {
    return;
  }
  uVar4 = IsProcessorFeaturePresent(0x17);
  uVar11 = CONCAT44(extraout_EDX,uVar4);
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  bVar7 = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  uVar5 = extraout_ECX;
  uVar2 = unaff_retaddr;
  uVar3 = unaff_EBP;
  if (!(bool)bVar8) {
    pcVar1 = (code *)swi(0x29);
    uVar11 = (*pcVar1)();
    uVar5 = extraout_ECX_00;
    uVar2 = unaff_retaddr;
    uVar3 = unaff_EBP;
  }
  _DAT_00419ccc = uVar3;
  _DAT_00419bd4 = uVar2;
  _DAT_00419cd8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00419cdc = &param_3;
  _DAT_00419c18 = 0x10001;
  _DAT_00419bc8 = 0xc0000409;
  _DAT_00419bcc = 1;
  _DAT_00419bd8 = 1;
  _DAT_00419bdc = 2;
  _DAT_00419ca4 = in_GS;
  _DAT_00419ca8 = in_FS;
  _DAT_00419cac = in_ES;
  _DAT_00419cb0 = in_DS;
  _DAT_00419cb4 = unaff_EDI;
  _DAT_00419cb8 = unaff_ESI;
  _DAT_00419cbc = unaff_EBX;
  _DAT_00419cc4 = uVar5;
  DAT_00419cd0 = _DAT_00419bd4;
  _DAT_00419cd4 = in_CS;
  _DAT_00419ce0 = in_SS;
  ___raise_securityfailure((EXCEPTION_POINTERS *)&PTR_DAT_0041231c);
  _DAT_00419cc0 = (undefined4)((ulonglong)uVar11 >> 0x20);
  _DAT_00419cc8 = (undefined4)uVar11;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __chkstk
// 
// Library: Visual Studio

void __alloca_probe(void)

{
  undefined *in_EAX;
  undefined4 *puVar1;
  undefined4 unaff_retaddr;
  undefined auStack4 [4];
  
  puVar1 = (undefined4 *)((uint)auStack4 & 0xfffff000);
  while ((undefined4 *)
         ((uint)(&stack0x00000000 + -(int)in_EAX) & ~-(uint)(register0x00000010 < in_EAX)) < puVar1)
  {
    puVar1 = puVar1 + -0x400;
  }
  *(undefined4 *)((uint)(&stack0x00000000 + -(int)in_EAX) & ~-(uint)(register0x00000010 < in_EAX)) =
       unaff_retaddr;
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
  undefined3 extraout_var;
  BOOL BVar9;
  ulong uVar10;
  DWORD DVar11;
  int iVar12;
  int iVar13;
  LPWSTR pWVar14;
  uint uVar15;
  uint nNumberOfBytesToRead;
  LPWSTR pWVar16;
  LPWSTR pWVar17;
  WCHAR *pWVar18;
  bool bVar19;
  undefined8 uVar20;
  WCHAR *local_24;
  LPWSTR local_20;
  LPWSTR local_1c;
  uint local_18;
  LPWSTR local_14;
  int local_10;
  undefined2 local_c;
  char local_5;
  
  pWVar17 = (LPWSTR)0x0;
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
          cVar4 = (char)(*(char *)((&DAT_004191d0)[local_10] + 0x24 + iVar13) * '\x02') >> 1;
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
            uVar20 = FUN_00404ed4(param_1,0,0,1);
            iVar12 = (&DAT_004191d0)[local_10];
            *(int *)(iVar12 + 0x28 + iVar13) = (int)uVar20;
            *(int *)(iVar12 + 0x2c + iVar13) = (int)((ulonglong)uVar20 >> 0x20);
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
            pWVar17 = (LPWSTR)0x1;
            nNumberOfBytesToRead = uVar15 - 1;
            *(undefined *)((&DAT_004191d0)[local_10] + 5 + iVar13) = 10;
            if (((cVar4 != '\0') &&
                (cVar2 = *(char *)((&DAT_004191d0)[local_10] + 0x25 + iVar13), cVar2 != '\n')) &&
               (nNumberOfBytesToRead != 0)) {
              *(char *)local_20 = cVar2;
              local_20 = local_14 + 1;
              nNumberOfBytesToRead = uVar15 - 2;
              pWVar17 = (LPWSTR)0x2;
              *(undefined *)((&DAT_004191d0)[local_10] + 0x25 + iVar13) = 10;
              if (((cVar4 == '\x01') &&
                  (cVar2 = *(char *)((&DAT_004191d0)[local_10] + 0x26 + iVar13), cVar2 != '\n')) &&
                 (nNumberOfBytesToRead != 0)) {
                *(char *)local_20 = cVar2;
                local_20 = (LPWSTR)((int)local_14 + 3);
                nNumberOfBytesToRead = uVar15 - 3;
                pWVar17 = (LPWSTR)0x3;
                *(undefined *)((&DAT_004191d0)[local_10] + 0x26 + iVar13) = 10;
              }
            }
          }
          bVar5 = FUN_00409fb4(param_1);
          if ((((CONCAT31(extraout_var,bVar5) == 0) ||
               ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x80) == 0)) ||
              (local_24 = (WCHAR *)GetConsoleMode(*(HANDLE *)((&DAT_004191d0)[local_10] + iVar13),
                                                  (LPDWORD)&local_24), local_24 == (WCHAR *)0x0)) ||
             (cVar4 != '\x02')) {
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
              pWVar17 = (LPWSTR)((int)pWVar17 + local_18);
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
                  local_24 = (WCHAR *)((int)local_14 + (int)pWVar17);
                  iVar12 = local_10;
                  pWVar17 = local_14;
                  pWVar18 = local_14;
                  if (local_14 < local_24) {
                    do {
                      WVar6 = *pWVar18;
                      if (WVar6 == L'\x1a') {
                        bVar5 = *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13);
                        if ((bVar5 & 0x40) == 0) {
                          *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13) = bVar5 | 2;
                        }
                        else {
                          *pWVar17 = *pWVar18;
                          pWVar17 = pWVar17 + 1;
                        }
                        break;
                      }
                      if (WVar6 == L'\r') {
                        if (pWVar18 < local_24 + -1) {
                          if (pWVar18[1] != L'\n') {
                            *pWVar17 = L'\r';
                            iVar12 = local_10;
                            goto LAB_004056b6;
                          }
                          pWVar18 = pWVar18 + 2;
                          *pWVar17 = L'\n';
LAB_00405798:
                          pWVar17 = pWVar17 + 1;
                          iVar12 = local_10;
                        }
                        else {
                          pWVar18 = pWVar18 + 1;
                          BVar9 = ReadFile(*(HANDLE *)((&DAT_004191d0)[iVar12] + iVar13),&local_c,2,
                                           &local_18,(LPOVERLAPPED)0x0);
                          if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                             (local_18 == 0)) {
                            *pWVar17 = L'\r';
                            pWVar17 = pWVar17 + 1;
                            iVar12 = local_10;
                          }
                          else {
                            iVar12 = local_10;
                            if ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) == 0) {
                              if ((pWVar17 == local_14) && (local_c == 10)) {
                                *pWVar17 = L'\n';
                                pWVar17 = pWVar17 + 1;
                              }
                              else {
                                FUN_00404ed4(param_1,0xfffffffe,0xffffffff,1);
                                iVar12 = local_10;
                                if (local_c != 10) {
                                  *pWVar17 = L'\r';
                                  goto LAB_00405798;
                                }
                              }
                            }
                            else {
                              if (local_c == 10) {
                                *pWVar17 = L'\n';
                                pWVar17 = pWVar17 + 1;
                              }
                              else {
                                *pWVar17 = L'\r';
                                pWVar17 = pWVar17 + 1;
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
                        *pWVar17 = WVar6;
LAB_004056b6:
                        pWVar17 = pWVar17 + 1;
                        pWVar18 = pWVar18 + 1;
                      }
                    } while (pWVar18 < local_24);
                  }
                  pWVar17 = (LPWSTR)((int)pWVar17 - (int)local_14);
                  pWVar14 = local_1c;
                }
                else {
                  pWVar16 = local_14;
                  pWVar18 = local_14;
                  while (pWVar16 < local_14 + (int)pWVar17 / 2) {
                    WVar6 = *pWVar16;
                    if (WVar6 == L'\x1a') {
                      pbVar1 = (byte *)((&DAT_004191d0)[local_10] + 4 + iVar13);
                      *pbVar1 = *pbVar1 | 2;
                      break;
                    }
                    if (WVar6 == L'\r') {
                      if (pWVar16 < local_14 + (int)pWVar17 / 2 + -1) {
                        pWVar16 = pWVar16 + 1;
                        WVar6 = L'\n';
                        if (*pWVar16 != L'\n') {
                          WVar6 = L'\r';
                        }
                        *pWVar18 = WVar6;
                        pWVar18 = pWVar18 + 1;
                      }
                    }
                    else {
                      *pWVar18 = WVar6;
                      pWVar18 = pWVar18 + 1;
                      pWVar16 = pWVar16 + 1;
                    }
                  }
                  pWVar17 = (LPWSTR)((uint)((int)pWVar18 - (int)local_14) & 0xfffffffe);
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
              local_20 = (LPWSTR)((int)local_14 + (int)pWVar17);
              iVar12 = local_10;
              pWVar16 = local_14;
              pWVar17 = local_14;
              if (local_14 < local_20) {
                do {
                  cVar2 = *(char *)pWVar17;
                  if (cVar2 == '\x1a') {
                    bVar5 = *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13);
                    if ((bVar5 & 0x40) == 0) {
                      *(byte *)((&DAT_004191d0)[iVar12] + 4 + iVar13) = bVar5 | 2;
                    }
                    else {
                      *(undefined *)pWVar16 = *(undefined *)pWVar17;
                      pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                    }
                    break;
                  }
                  if (cVar2 == '\r') {
                    if (pWVar17 < (LPWSTR)((int)local_20 + -1)) {
                      pWVar14 = (LPWSTR)((int)pWVar17 + 1);
                      if (*(char *)pWVar14 == '\n') {
                        pWVar14 = pWVar17 + 1;
                        *(undefined *)pWVar16 = 10;
LAB_0040545e:
                        pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                      }
                      else {
                        *(undefined *)pWVar16 = 0xd;
                        pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                      }
                    }
                    else {
                      pWVar14 = (LPWSTR)((int)pWVar17 + 1);
                      BVar9 = ReadFile(*(HANDLE *)((&DAT_004191d0)[iVar12] + iVar13),&local_5,1,
                                       &local_18,(LPOVERLAPPED)0x0);
                      if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                         (local_18 == 0)) {
                        *(undefined *)pWVar16 = 0xd;
                        pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                        iVar12 = local_10;
                      }
                      else {
                        iVar12 = local_10;
                        if ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) == 0) {
                          if ((pWVar16 == local_14) && (local_5 == '\n')) {
                            *(undefined *)pWVar16 = 10;
                            pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                          }
                          else {
                            FUN_00404ed4(param_1,0xffffffff,0xffffffff,1);
                            iVar12 = local_10;
                            if (local_5 != '\n') {
                              *(undefined *)pWVar16 = 0xd;
                              goto LAB_0040545e;
                            }
                          }
                        }
                        else {
                          if (local_5 == '\n') {
                            *(undefined *)pWVar16 = 10;
                            pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                          }
                          else {
                            *(undefined *)pWVar16 = 0xd;
                            pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                            *(char *)((&DAT_004191d0)[local_10] + 5 + iVar13) = local_5;
                          }
                        }
                      }
                    }
                  }
                  else {
                    *(char *)pWVar16 = cVar2;
                    pWVar16 = (LPWSTR)((int)pWVar16 + 1);
                    pWVar14 = (LPWSTR)((int)pWVar17 + 1);
                  }
                  pWVar17 = pWVar14;
                } while (pWVar14 < local_20);
              }
              pWVar17 = (LPWSTR)((int)pWVar16 - (int)local_14);
              pWVar14 = local_1c;
              if ((cVar4 != '\x01') || (pWVar17 == (LPWSTR)0x0)) goto LAB_004055a1;
              bVar5 = *(byte *)(LPWSTR)((int)pWVar16 + -1);
              if ((char)bVar5 < '\0') {
                iVar12 = 1;
                cVar4 = (&DAT_00418400)[bVar5];
                pWVar16 = (LPWSTR)((int)pWVar16 + -1);
                while (((cVar4 == '\0' && (iVar12 < 5)) && (local_14 <= pWVar16))) {
                  pWVar16 = (LPWSTR)((int)pWVar16 + -1);
                  iVar12 = iVar12 + 1;
                  cVar4 = (&DAT_00418400)[*(byte *)pWVar16];
                }
                if ((char)(&DAT_00418400)[*(byte *)pWVar16] == 0) {
                  piVar8 = __errno();
                  *piVar8 = 0x2a;
                  goto LAB_004052de;
                }
                if ((char)(&DAT_00418400)[*(byte *)pWVar16] + 1 == iVar12) {
                  pWVar16 = (LPWSTR)((int)pWVar16 + iVar12);
                }
                else {
                  if ((*(byte *)((&DAT_004191d0)[local_10] + 4 + iVar13) & 0x48) == 0) {
                    FUN_00404ed4(param_1,-iVar12,-iVar12 >> 0x1f,1);
                  }
                  else {
                    pWVar17 = (LPWSTR)((int)pWVar16 + 1);
                    *(undefined *)((&DAT_004191d0)[local_10] + 5 + iVar13) = *(undefined *)pWVar16;
                    if (1 < iVar12) {
                      uVar3 = *(undefined *)pWVar17;
                      pWVar17 = pWVar16 + 1;
                      *(undefined *)((&DAT_004191d0)[local_10] + 0x25 + iVar13) = uVar3;
                    }
                    if (iVar12 == 3) {
                      uVar3 = *(undefined *)pWVar17;
                      pWVar17 = (LPWSTR)((int)pWVar17 + 1);
                      *(undefined *)((&DAT_004191d0)[local_10] + 0x26 + iVar13) = uVar3;
                    }
                    pWVar16 = (LPWSTR)((int)pWVar17 - iVar12);
                  }
                }
              }
              pWVar16 = (LPWSTR)((int)pWVar16 - (int)local_14);
              pWVar17 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_14,(int)pWVar16,param_2,
                                                    param_3 >> 1);
              if (pWVar17 != (LPWSTR)0x0) {
                bVar19 = pWVar17 != pWVar16;
                pWVar17 = (LPWSTR)((int)pWVar17 * 2);
                *(uint *)((&DAT_004191d0)[local_10] + 0x30 + iVar13) = (uint)bVar19;
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
          return pWVar17;
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
  DWORD DVar4;
  HANDLE pvVar5;
  HANDLE *ppvVar6;
  int iVar7;
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
    if ((local_78.cbReserved2 != 0) && ((HANDLE *)local_78.lpReserved2 != (HANDLE *)0x0)) {
      local_20 = *(HANDLE *)local_78.lpReserved2;
      local_2c = (HANDLE *)((int)local_78.lpReserved2 + 4);
      local_24 = (HANDLE *)((int)local_2c + (int)local_20);
      if (0x7ff < (int)local_20) {
        local_20 = (HANDLE)0x800;
      }
      local_34 = 1;
      while (iVar7 = local_34, (int)DAT_00419ff8 < (int)local_20) {
        local_28 = (HANDLE *)FUN_00408f5b(0x20,0x40);
        if (local_28 == (HANDLE *)0x0) {
          local_20 = DAT_00419ff8;
          break;
        }
        (&DAT_004191d0)[iVar7] = local_28;
        DAT_00419ff8 = (HANDLE)((int)DAT_00419ff8 + 0x20);
        while (local_28 < (HANDLE *)((int)(&DAT_004191d0)[iVar7] + 0x800)) {
          *(undefined2 *)(local_28 + 1) = 0xa00;
          *local_28 = (HANDLE)0xffffffff;
          local_28[2] = (HANDLE)0x0;
          *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x80;
          *(undefined2 *)((int)local_28 + 0x25) = 0xa0a;
          local_28[0xe] = (HANDLE)0x0;
          *(undefined *)(local_28 + 0xd) = 0;
          local_28 = local_28 + 0x10;
        }
        local_34 = iVar7 + 1;
      }
      local_30 = 0;
      pvVar5 = local_20;
      while (uVar1 = local_30, (int)local_30 < (int)pvVar5) {
        hFile = *local_24;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            ((*(byte *)local_2c & 1) != 0)) &&
           (((*(byte *)local_2c & 8) != 0 ||
            (DVar4 = GetFileType(hFile), pvVar5 = local_20, DVar4 != 0)))) {
          ppvVar6 = (HANDLE *)((uVar1 & 0x1f) * 0x40 + (int)(&DAT_004191d0)[(int)uVar1 >> 5]);
          *ppvVar6 = *local_24;
          *(byte *)(ppvVar6 + 1) = *(byte *)local_2c;
          local_28 = ppvVar6;
          FUN_00407e10((LPCRITICAL_SECTION)(ppvVar6 + 3),4000,0);
          ppvVar6[2] = (HANDLE)((int)ppvVar6[2] + 1);
          pvVar5 = local_20;
        }
        local_30 = uVar1 + 1;
        local_2c = (HANDLE *)((int)local_2c + 1);
        local_24 = local_24 + 1;
      }
    }
    iVar7 = 0;
    while (local_30 = iVar7, iVar7 < 3) {
      ppvVar6 = DAT_004191d0 + iVar7 * 0x10;
      local_28 = ppvVar6;
      if ((*ppvVar6 == (HANDLE)0xffffffff) || (*ppvVar6 == (HANDLE)0xfffffffe)) {
        *(undefined *)(ppvVar6 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar4 = 0xfffffff6;
        }
        else {
          DVar4 = 0xfffffff5 - (iVar7 != 1);
        }
        local_20 = GetStdHandle(DVar4);
        if (((local_20 == (HANDLE)0xffffffff) || (local_20 == (HANDLE)0x0)) ||
           (DVar4 = GetFileType(local_20), DVar4 == 0)) {
          *(byte *)(ppvVar6 + 1) = *(byte *)(ppvVar6 + 1) | 0x40;
          *ppvVar6 = (HANDLE)0xfffffffe;
          if (DAT_0041b000 != 0) {
            *(undefined4 *)(*(int *)(DAT_0041b000 + iVar7 * 4) + 0x10) = 0xfffffffe;
          }
        }
        else {
          *ppvVar6 = local_20;
          if ((DVar4 & 0xff) == 2) {
            bVar2 = *(byte *)(ppvVar6 + 1) | 0x40;
LAB_00405a90:
            *(byte *)(ppvVar6 + 1) = bVar2;
          }
          else {
            if ((DVar4 & 0xff) == 3) {
              bVar2 = *(byte *)(ppvVar6 + 1) | 8;
              goto LAB_00405a90;
            }
          }
          FUN_00407e10((LPCRITICAL_SECTION)(ppvVar6 + 3),4000,0);
          ppvVar6[2] = (HANDLE)((int)ppvVar6[2] + 1);
        }
      }
      else {
        *(byte *)(ppvVar6 + 1) = *(byte *)(ppvVar6 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
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
  uint uVar1;
  ushort *puVar2;
  FILE *_File;
  byte bVar3;
  ushort *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined3 extraout_var;
  undefined *puVar7;
  FILE *pFVar8;
  longlong lVar9;
  
  _File = param_2;
  puVar4 = (ushort *)__fileno(param_2);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    piVar5 = __errno();
    *piVar5 = 9;
LAB_00405b08:
    _File->_flag = _File->_flag | 0x20;
    return 0xffffffff;
  }
  if ((uVar1 & 0x40) != 0) {
    piVar5 = __errno();
    *piVar5 = 0x22;
    goto LAB_00405b08;
  }
  pFVar8 = (FILE *)0x0;
  if ((uVar1 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      _File->_flag = uVar1 | 0x20;
      return 0xffffffff;
    }
    _File->_ptr = _File->_base;
    _File->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = _File->_flag;
  _File->_cnt = 0;
  _File->_flag = uVar1 & 0xffffffef | 2;
  if (((uVar1 & 0x10c) == 0) &&
     (((ppuVar6 = FUN_00404114(), _File != (FILE *)(ppuVar6 + 8) &&
       (ppuVar6 = FUN_00404114(), _File != (FILE *)(ppuVar6 + 0x10))) ||
      (bVar3 = FUN_00409fb4((uint)puVar4), CONCAT31(extraout_var,bVar3) == 0)))) {
    __getbuf(_File);
  }
  if ((_File->_flag & 0x108U) == 0) {
    param_2 = (FILE *)0x1;
    pFVar8 = (FILE *)FUN_00406284(puVar4,(ushort *)&param_1,(ushort *)0x1);
  }
  else {
    puVar2 = (ushort *)_File->_base;
    param_2 = (FILE *)(_File->_ptr + -(int)puVar2);
    _File->_ptr = (char *)((int)puVar2 + 1);
    _File->_cnt = _File->_bufsiz + -1;
    if ((int)param_2 < 1) {
      if ((puVar4 == (ushort *)0xffffffff) || (puVar4 == (ushort *)0xfffffffe)) {
        puVar7 = &DAT_00418500;
      }
      else {
        puVar7 = (undefined *)(((uint)puVar4 & 0x1f) * 0x40 + (&DAT_004191d0)[(int)puVar4 >> 5]);
      }
      if (((puVar7[4] & 0x20) != 0) && (lVar9 = FUN_00404dd8((uint)puVar4,0,0,2), lVar9 == -1))
      goto LAB_00405c1f;
    }
    else {
      pFVar8 = (FILE *)FUN_00406284(puVar4,puVar2,(ushort *)param_2);
    }
    *_File->_base = (char)param_1;
  }
  if (pFVar8 == param_2) {
    return param_1 & 0xff;
  }
LAB_00405c1f:
  _File->_flag = _File->_flag | 0x20;
  return 0xffffffff;
}



// WARNING: Control flow encountered bad instruction data
// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined8 *puVar21;
  void *pvVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined auVar30 [16];
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar29 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar28 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar28 & 3) == 0) {
      uVar23 = _Size >> 2;
      if (uVar23 < 8) goto LAB_00405ff0;
      while (uVar23 != 0) {
        uVar23 = uVar23 - 1;
        *puVar28 = *puVar29;
        puVar29 = puVar29 + -1;
        puVar28 = puVar28 + -1;
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
        *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
        return _Dst;
      case 2:
switchD_00406014_caseD_2:
        *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
        *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
        return _Dst;
      case 3:
switchD_00406014_caseD_3:
        *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
        *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
        *(undefined *)((int)puVar28 + 1) = *(undefined *)((int)puVar29 + 1);
        return _Dst;
      default:
        uVar24 = _Size - ((uint)puVar28 & 3);
        switch((uint)puVar28 & 3) {
        case 1:
          *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
          puVar29 = (undefined4 *)((int)puVar29 + -1);
          uVar23 = uVar24 >> 2;
          puVar28 = (undefined4 *)((int)puVar28 - 1);
          if (uVar23 < 8) {
LAB_00405ff0:
                    // WARNING: Could not recover jumptable at 0x00405ff2. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar22 = (void *)(*(code *)(&PTR_LAB_004060c4)[-uVar23])();
            return pvVar22;
          }
          while (uVar23 != 0) {
            uVar23 = uVar23 - 1;
            *puVar28 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar28 = puVar28 + -1;
          }
          switch(uVar24 & 3) {
          case 1:
            goto switchD_00406014_caseD_1;
          case 2:
            goto switchD_00406014_caseD_2;
          case 3:
            goto switchD_00406014_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
          puVar29 = (undefined4 *)((int)puVar29 + -2);
          puVar28 = (undefined4 *)((int)puVar28 - 2);
          if (uVar23 < 8) goto LAB_00405ff0;
          while (uVar23 != 0) {
            uVar23 = uVar23 - 1;
            *puVar28 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar28 = puVar28 + -1;
          }
          switch(uVar24 & 3) {
          case 1:
            goto switchD_00406014_caseD_1;
          case 2:
            goto switchD_00406014_caseD_2;
          case 3:
            goto switchD_00406014_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
          *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)puVar28 + 1) = *(undefined *)((int)puVar29 + 1);
          puVar29 = (undefined4 *)((int)puVar29 + -3);
          puVar28 = (undefined4 *)((int)puVar28 - 3);
          if (uVar23 < 8) goto LAB_00405ff0;
          while (uVar23 != 0) {
            uVar23 = uVar23 - 1;
            *puVar28 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar28 = puVar28 + -1;
          }
          switch(uVar24 & 3) {
          case 1:
            goto switchD_00406014_caseD_1;
          case 2:
            goto switchD_00406014_caseD_2;
          case 3:
            goto switchD_00406014_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar27 = (undefined *)_Dst;
  if ((DAT_00419eec >> 1 & 1) != 0) {
    while (_Size != 0
                    // WARNING: Load size is inaccurate) {
      _Size = _Size - 1;
      *puVar27 = *_Src;
      _Src = (undefined *)((int)_Src + 1);
      puVar27 = puVar27 + 1;
    }
    return _Dst;
  }
  puVar29 = (undefined4 *)_Dst;
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
        uVar24 = (_Size - 4) + ((uint)_Dst & 3);
        switch((uint)_Dst & 3) {
        case 0:
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 1:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
          _Src = (undefined4 *)((int)_Src + 3);
          puVar29 = (undefined4 *)((int)_Dst + 3);
          if (7 < uVar23) {
            while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
              uVar23 = uVar23 - 1;
              *puVar29 = *_Src;
              _Src = (undefined4 *)((int)_Src + 4);
              puVar29 = puVar29 + 1;
            }
            switch(uVar24 & 3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00405e80_caseD_2;
            case 3:
              goto switchD_00405e80_caseD_3;
            }
            break;
          }
          goto LAB_00405e88;
        case 2:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          _Src = (undefined4 *)((int)_Src + 2);
          puVar29 = (undefined4 *)((int)_Dst + 2);
          if (uVar23 < 8) goto LAB_00405e88;
          while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
            uVar23 = uVar23 - 1;
            *puVar29 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar29 = puVar29 + 1;
          }
          switch(uVar24 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00405e80_caseD_2;
          case 3:
            goto switchD_00405e80_caseD_3;
          }
          break;
        case 3:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar23 = uVar24 >> 2;
          _Src = (undefined4 *)((int)_Src + 1);
          puVar29 = (undefined4 *)((int)_Dst + 1);
          if (uVar23 < 8) goto LAB_00405e88;
          while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
            uVar23 = uVar23 - 1;
            *puVar29 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar29 = puVar29 + 1;
          }
          switch(uVar24 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00405e80_caseD_2;
          case 3:
            goto switchD_00405e80_caseD_3;
          }
        }
      }
      goto switchD_00405e80_caseD_1;
    }
  }
  else {
    if (((((uint)_Dst ^ (uint)_Src) & 0xf) == 0) && ((DAT_00418e00 >> 1 & 1) != 0)) {
      if (((uint)_Src & 0xf) != 0) {
        uVar23 = 0x10 - ((uint)_Src & 0xf);
        _Size = _Size - uVar23;
        uVar24 = uVar23 & 3;
        while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
          *(undefined *)puVar29 = *_Src;
          _Src = (void *)((int)_Src + 1);
          puVar29 = (undefined4 *)((int)puVar29 + 1);
          uVar24 = uVar24 - 1;
        }
        uVar23 = uVar23 >> 2;
        while (uVar23 != 0) {
                    // WARNING: Load size is inaccurate
          *puVar29 = *_Src;
          _Src = (void *)((int)_Src + 4);
          puVar29 = puVar29 + 1;
          uVar23 = uVar23 - 1;
        }
      }
      uVar24 = _Size >> 7;
      while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
        uVar5 = *(undefined4 *)((int)_Src + 4);
        uVar6 = *(undefined4 *)((int)_Src + 8);
        uVar7 = *(undefined4 *)((int)_Src + 0xc);
        uVar8 = *(undefined4 *)((int)_Src + 0x10);
        uVar9 = *(undefined4 *)((int)_Src + 0x14);
        uVar10 = *(undefined4 *)((int)_Src + 0x18);
        uVar11 = *(undefined4 *)((int)_Src + 0x1c);
        uVar12 = *(undefined4 *)((int)_Src + 0x20);
        uVar13 = *(undefined4 *)((int)_Src + 0x24);
        uVar14 = *(undefined4 *)((int)_Src + 0x28);
        uVar15 = *(undefined4 *)((int)_Src + 0x2c);
        uVar16 = *(undefined4 *)((int)_Src + 0x30);
        uVar17 = *(undefined4 *)((int)_Src + 0x34);
        uVar18 = *(undefined4 *)((int)_Src + 0x38);
        uVar19 = *(undefined4 *)((int)_Src + 0x3c);
        *puVar29 = *_Src;
        puVar29[1] = uVar5;
        puVar29[2] = uVar6;
        puVar29[3] = uVar7;
        puVar29[4] = uVar8;
        puVar29[5] = uVar9;
        puVar29[6] = uVar10;
        puVar29[7] = uVar11;
        puVar29[8] = uVar12;
        puVar29[9] = uVar13;
        puVar29[10] = uVar14;
        puVar29[0xb] = uVar15;
        puVar29[0xc] = uVar16;
        puVar29[0xd] = uVar17;
        puVar29[0xe] = uVar18;
        puVar29[0xf] = uVar19;
        uVar5 = *(undefined4 *)((int)_Src + 0x44);
        uVar6 = *(undefined4 *)((int)_Src + 0x48);
        uVar7 = *(undefined4 *)((int)_Src + 0x4c);
        uVar8 = *(undefined4 *)((int)_Src + 0x50);
        uVar9 = *(undefined4 *)((int)_Src + 0x54);
        uVar10 = *(undefined4 *)((int)_Src + 0x58);
        uVar11 = *(undefined4 *)((int)_Src + 0x5c);
        uVar12 = *(undefined4 *)((int)_Src + 0x60);
        uVar13 = *(undefined4 *)((int)_Src + 100);
        uVar14 = *(undefined4 *)((int)_Src + 0x68);
        uVar15 = *(undefined4 *)((int)_Src + 0x6c);
        uVar16 = *(undefined4 *)((int)_Src + 0x70);
        uVar17 = *(undefined4 *)((int)_Src + 0x74);
        uVar18 = *(undefined4 *)((int)_Src + 0x78);
        uVar19 = *(undefined4 *)((int)_Src + 0x7c);
        puVar29[0x10] = *(undefined4 *)((int)_Src + 0x40);
        puVar29[0x11] = uVar5;
        puVar29[0x12] = uVar6;
        puVar29[0x13] = uVar7;
        puVar29[0x14] = uVar8;
        puVar29[0x15] = uVar9;
        puVar29[0x16] = uVar10;
        puVar29[0x17] = uVar11;
        puVar29[0x18] = uVar12;
        puVar29[0x19] = uVar13;
        puVar29[0x1a] = uVar14;
        puVar29[0x1b] = uVar15;
        puVar29[0x1c] = uVar16;
        puVar29[0x1d] = uVar17;
        puVar29[0x1e] = uVar18;
        puVar29[0x1f] = uVar19;
        _Src = (void *)((int)_Src + 0x80);
        puVar29 = puVar29 + 0x20;
        uVar24 = uVar24 - 1;
      }
      if ((_Size & 0x7f) != 0) {
        uVar24 = (_Size & 0x7f) >> 4;
        while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
          uVar5 = *(undefined4 *)((int)_Src + 4);
          uVar6 = *(undefined4 *)((int)_Src + 8);
          uVar7 = *(undefined4 *)((int)_Src + 0xc);
          *puVar29 = *_Src;
          puVar29[1] = uVar5;
          puVar29[2] = uVar6;
          puVar29[3] = uVar7;
          _Src = (void *)((int)_Src + 0x10);
          puVar29 = puVar29 + 4;
          uVar24 = uVar24 - 1;
        }
        if ((_Size & 0xf) != 0) {
          uVar24 = (_Size & 0xf) >> 2;
          while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
            *puVar29 = *_Src;
            _Src = (void *)((int)_Src + 4);
            puVar29 = puVar29 + 1;
            uVar24 = uVar24 - 1;
          }
          uVar24 = _Size & 3;
          while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
            *(undefined *)puVar29 = *_Src;
            _Src = (void *)((int)_Src + 1);
            puVar29 = (undefined4 *)((int)puVar29 + 1);
            uVar24 = uVar24 - 1;
          }
        }
      }
      return _Dst;
    }
    if ((DAT_00419eec & 1) == 0) goto LAB_00405e4b;
    if (((uint)_Dst & 3) != 0) goto LAB_00405e68;
    if (((uint)_Src & 3) == 0) {
      if (((uint)_Dst >> 2 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar5 = *_Src;
        _Size = _Size - 4;
        _Src = (void *)((int)_Src + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (void *)((int)_Dst + 4);
      }
      if (((uint)_Dst >> 3 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar1 = *_Src;
        _Size = _Size - 8;
        _Src = (void *)((int)_Src + 8);
        *(undefined8 *)_Dst = uVar1;
        _Dst = (undefined *)_Dst + 8;
      }
      if (((uint)_Src & 7) == 0) {
        puVar21 = (undefined8 *)((int)_Src + -8);
        auVar30 = *(undefined (*) [16])((int)_Src + -8);
        do {
          puVar26 = puVar21;
          auVar2 = *(undefined (*) [16])(puVar26 + 2);
          _Size = _Size - 0x30;
          auVar3 = *(undefined (*) [16])(puVar26 + 4);
          auVar4 = *(undefined (*) [16])(puVar26 + 6);
          *(undefined (*) [16])_Dst =
               SUB3216(CONCAT1220(SUB1612(auVar30 >> 0x20,0),CONCAT416(0x40,auVar30)) >> 0x40,0);
          *(undefined (*) [16])((int)_Dst + 0x10) =
               SUB3216(CONCAT1220(SUB1612(auVar2 >> 0x20,0),CONCAT416(0x40,auVar2)) >> 0x40,0);
          *(undefined (*) [16])((int)_Dst + 0x20) =
               SUB3216(CONCAT1220(SUB1612(auVar3 >> 0x20,0),CONCAT416(0x40,auVar3)) >> 0x40,0);
          _Dst = (void *)((int)_Dst + 0x30);
          puVar21 = puVar26 + 6;
          auVar30 = auVar4;
        } while (0x2f < (int)_Size);
        puVar26 = puVar26 + 7;
      }
      else {
        if (((uint)_Src >> 3 & 1) == 0) {
          iVar20 = (int)_Src + -4;
          auVar30 = *(undefined (*) [16])((int)_Src + -4);
          do {
            iVar25 = iVar20;
            auVar2 = *(undefined (*) [16])(iVar25 + 0x10);
            _Size = _Size - 0x30;
            auVar3 = *(undefined (*) [16])(iVar25 + 0x20);
            auVar4 = *(undefined (*) [16])(iVar25 + 0x30);
            *(undefined (*) [16])_Dst = SUB2016(CONCAT416(0x20,auVar30) >> 0x20,0);
            *(undefined (*) [16])((int)_Dst + 0x10) = SUB2016(CONCAT416(0x20,auVar2) >> 0x20,0);
            *(undefined (*) [16])((int)_Dst + 0x20) = SUB2016(CONCAT416(0x20,auVar3) >> 0x20,0);
            _Dst = (void *)((int)_Dst + 0x30);
            iVar20 = iVar25 + 0x30;
            auVar30 = auVar4;
          } while (0x2f < (int)_Size);
          puVar26 = (undefined8 *)(iVar25 + 0x34);
        }
        else {
          iVar20 = (int)_Src + -0xc;
          auVar30 = *(undefined (*) [16])((int)_Src + -0xc);
          do {
            iVar25 = iVar20;
            auVar2 = *(undefined (*) [16])(iVar25 + 0x10);
            _Size = _Size - 0x30;
            auVar3 = *(undefined (*) [16])(iVar25 + 0x20);
            auVar4 = *(undefined (*) [16])(iVar25 + 0x30);
            *(undefined (*) [16])_Dst =
                 SUB3216(CONCAT1220(SUB1612(auVar30 >> 0x20,0),CONCAT416(0x60,auVar30)) >> 0x60,0);
            *(undefined (*) [16])((int)_Dst + 0x10) =
                 SUB3216(CONCAT1220(SUB1612(auVar2 >> 0x20,0),CONCAT416(0x60,auVar2)) >> 0x60,0);
            *(undefined (*) [16])((int)_Dst + 0x20) =
                 SUB3216(CONCAT1220(SUB1612(auVar3 >> 0x20,0),CONCAT416(0x60,auVar3)) >> 0x60,0);
            _Dst = (void *)((int)_Dst + 0x30);
            iVar20 = iVar25 + 0x30;
            auVar30 = auVar4;
          } while (0x2f < (int)_Size);
          puVar26 = (undefined8 *)(iVar25 + 0x3c);
        }
      }
      while (0xf < (int)_Size) {
        uVar5 = *(undefined4 *)puVar26;
        uVar6 = *(undefined4 *)((int)puVar26 + 4);
        uVar7 = *(undefined4 *)(puVar26 + 1);
        uVar8 = *(undefined4 *)((int)puVar26 + 0xc);
        _Size = _Size - 0x10;
        puVar26 = puVar26 + 2;
        *(undefined4 *)_Dst = uVar5;
        *(undefined4 *)((undefined *)_Dst + 4) = uVar6;
        *(undefined4 *)((undefined *)_Dst + 8) = uVar7;
        *(undefined4 *)((undefined *)_Dst + 0xc) = uVar8;
        _Dst = (void *)((int)_Dst + 0x10);
      }
      if ((_Size >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)puVar26;
        _Size = _Size - 4;
        puVar26 = (undefined8 *)((int)puVar26 + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (undefined *)_Dst + 4;
      }
      if ((_Size >> 3 & 1) != 0) {
        _Size = _Size - 8;
        *(undefined8 *)_Dst = *puVar26;
      }
                    // WARNING: Could not recover jumptable at 0x00405e49. Too many branches
                    // WARNING: Treating indirect jump as call
      pvVar22 = (void *)(*(code *)(&switchD_00405e80::switchdataD_00405f78)[_Size])();
      return pvVar22;
    }
  }
  uVar23 = _Size >> 2;
  if (uVar23 < 8) {
LAB_00405e88:
                    // WARNING: Could not recover jumptable at 0x00405e88. Too many branches
                    // WARNING: Treating indirect jump as call
    pvVar22 = (void *)(*(code *)(&PTR_LAB_00405f0c)[uVar23])();
    return pvVar22;
  }
  while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
    uVar23 = uVar23 - 1;
    *puVar29 = *_Src;
    _Src = (undefined4 *)((int)_Src + 4);
    puVar29 = puVar29 + 1;
  }
  switch(_Size & 3) {
  case 0:
    return _Dst;
  case 2:
switchD_00405e80_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar29 = *_Src;
    *(undefined *)((int)puVar29 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00405e80_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar29 = *_Src;
    *(undefined *)((int)puVar29 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar29 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_00405e80_caseD_1:
                    // WARNING: Load size is inaccurate
  *(undefined *)puVar29 = *_Src;
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
  byte bVar3;
  wint_t wVar4;
  ulong *puVar5;
  int *piVar6;
  undefined3 extraout_var;
  _ptiddata p_Var7;
  BOOL BVar8;
  int iVar9;
  DWORD DVar10;
  undefined in_DL;
  undefined extraout_DL;
  ushort *extraout_EDX;
  ushort *puVar11;
  ushort *extraout_EDX_00;
  ushort *extraout_EDX_01;
  ushort *extraout_EDX_02;
  ushort *extraout_EDX_03;
  ushort *extraout_EDX_04;
  ushort *extraout_EDX_05;
  ushort *extraout_EDX_06;
  ushort *extraout_EDX_07;
  ushort *extraout_EDX_08;
  ushort *extraout_EDX_09;
  ushort *extraout_EDX_10;
  ushort *extraout_EDX_11;
  char cVar12;
  ushort *puVar13;
  ushort *puVar14;
  DWORD DVar15;
  ushort *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined uVar19;
  UINT in_stack_ffffe50c;
  uint local_1aec;
  char local_1ae5;
  ushort *local_1ae4;
  ushort *local_1ae0;
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
  
  uVar19 = (undefined)in_stack_ffffe50c;
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_1ac0 = 0;
  puVar14 = (ushort *)0x0;
  local_1acc = param_1;
  DVar15 = 0;
  local_1ad4 = param_2;
  local_1ac4 = (ushort *)0x0;
  if (param_3 == (ushort *)0x0) goto LAB_00406bc8;
  if (param_2 == (ushort *)0x0) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_00402c77();
    in_DL = extraout_DL;
    goto LAB_00406bc8;
  }
  local_1adc = (int)param_1 >> 5;
  local_1ae0 = (ushort *)(((uint)param_1 & 0x1f) * 0x40);
  cVar12 = (char)(*(char *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 0x24) * '\x02') >> 1;
  if (((cVar12 == '\x02') || (cVar12 == '\x01')) && ((~(uint)param_3 & 1) == 0)) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_00402c77();
    puVar11 = extraout_EDX;
  }
  else {
    if ((*(byte *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 4) & 0x20) != 0) {
      FUN_00404ed4((uint)param_1,0,0,2);
    }
    bVar3 = FUN_00409fb4((uint)local_1acc);
    if ((CONCAT31(extraout_var,bVar3) == 0) ||
       ((*(byte *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 4) & 0x80) == 0)) {
LAB_004067b6:
      if ((*(byte *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 4) & 0x80) == 0) {
        BVar8 = WriteFile(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),local_1ad4,
                          (DWORD)param_3,(LPDWORD)&local_1ae4,(LPOVERLAPPED)0x0);
        if (BVar8 == 0) {
LAB_004067a9:
          DVar15 = GetLastError();
          puVar11 = extraout_EDX_03;
        }
        else {
          puVar11 = extraout_EDX_09;
          puVar14 = local_1ae4;
          DVar15 = 0;
        }
        goto LAB_004068c6;
      }
      local_1ad0 = 0;
      if (cVar12 == '\0') {
        local_1acc = local_1ad4;
        if (param_3 == (ushort *)0x0) goto LAB_00406b88;
        do {
          puVar16 = local_1410;
          local_1ac8 = (ushort *)0x0;
          puVar11 = (ushort *)((int)local_1acc - (int)local_1ad4);
          do {
            if (param_3 <= puVar11) break;
            local_1ae5 = *(char *)local_1acc;
            local_1acc = (ushort *)((int)local_1acc + 1);
            puVar11 = (ushort *)((int)puVar11 + 1);
            if (local_1ae5 == '\n') {
              local_1ac0 = local_1ac0 + 1;
              *(char *)puVar16 = '\r';
              puVar16 = (ushort *)((int)puVar16 + 1);
              local_1ac8 = (ushort *)((int)local_1ac8 + 1);
            }
            *(char *)puVar16 = local_1ae5;
            puVar16 = (ushort *)((int)puVar16 + 1);
            local_1ac8 = (ushort *)((int)local_1ac8 + 1);
          } while (local_1ac8 < (ushort *)0x13ff);
          BVar8 = WriteFile(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),local_1410,
                            (DWORD)(ushort *)((int)puVar16 - (int)local_1410),(LPDWORD)&local_1ae4,
                            (LPOVERLAPPED)0x0);
          if (BVar8 == 0) goto LAB_004067a9;
          puVar14 = (ushort *)((int)puVar14 + (int)local_1ae4);
          puVar11 = extraout_EDX_04;
          DVar15 = local_1ad0;
        } while (((int)(ushort *)((int)puVar16 - (int)local_1410) <= (int)local_1ae4) &&
                (puVar11 = local_1acc, (ushort *)((int)local_1acc - (int)local_1ad4) < param_3));
        goto LAB_004068c6;
      }
      if (cVar12 == '\x02') {
        puVar16 = local_1ad4;
        if (param_3 != (ushort *)0x0) {
          do {
            local_1aec = 0;
            puVar13 = local_1410;
            puVar14 = (ushort *)((int)puVar16 - (int)local_1ad4);
            uVar18 = 0;
            do {
              if (param_3 <= puVar14) break;
              uVar2 = *puVar16;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
              if (uVar2 == 10) {
                local_1ac0 = local_1ac0 + 2;
                *puVar13 = 0xd;
                puVar13 = puVar13 + 1;
                uVar18 = uVar18 + 2;
              }
              *puVar13 = uVar2;
              uVar18 = uVar18 + 2;
              puVar13 = puVar13 + 1;
            } while (uVar18 < 0x13fe);
            local_1ac8 = puVar16;
            BVar8 = WriteFile(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),local_1410,
                              (DWORD)(ushort *)((int)puVar13 - (int)local_1410),(LPDWORD)&local_1ae4
                              ,(LPOVERLAPPED)0x0);
            puVar14 = local_1ac4;
            if (BVar8 == 0) goto LAB_004067a9;
            puVar14 = (ushort *)((int)local_1ac4 + (int)local_1ae4);
            puVar11 = extraout_EDX_06;
            DVar15 = local_1ad0;
            local_1ac4 = puVar14;
          } while (((int)(ushort *)((int)puVar13 - (int)local_1410) <= (int)local_1ae4) &&
                  (puVar16 = local_1ac8, puVar11 = local_1ad4,
                  (ushort *)((int)local_1ac8 - (int)local_1ad4) < param_3));
          goto LAB_004068c6;
        }
      }
      else {
        local_1acc = local_1ad4;
        if (param_3 != (ushort *)0x0) {
          do {
            local_1aec = 0;
            puVar14 = local_1abc;
            puVar11 = (ushort *)((int)local_1acc - (int)local_1ad4);
            uVar18 = 0;
            do {
              if (param_3 <= puVar11) break;
              uVar2 = *local_1acc;
              puVar11 = puVar11 + 1;
              local_1acc = local_1acc + 1;
              if (uVar2 == 10) {
                *puVar14 = 0xd;
                puVar14 = puVar14 + 1;
                uVar18 = uVar18 + 2;
              }
              *puVar14 = uVar2;
              uVar18 = uVar18 + 2;
              puVar14 = puVar14 + 1;
            } while (uVar18 < 0x6a8);
            local_1ac8 = (ushort *)
                         WideCharToMultiByte(0xfde9,0,(LPCWSTR)local_1abc,
                                             (int)((int)puVar14 - (int)local_1abc) / 2,local_d68,
                                             0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
            puVar14 = local_1ac4;
            DVar15 = local_1ad0;
            if (local_1ac8 == (ushort *)0x0) goto LAB_004067a9;
            local_1ac4 = (ushort *)0x0;
            do {
              BVar8 = WriteFile(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),
                                local_d68 + (int)local_1ac4,
                                (DWORD)((int)local_1ac8 - (int)local_1ac4),(LPDWORD)&local_1ae4,
                                (LPOVERLAPPED)0x0);
              if (BVar8 == 0) {
                DVar15 = GetLastError();
                puVar11 = extraout_EDX_08;
                local_1ad0 = DVar15;
                break;
              }
              local_1ac4 = (ushort *)((int)local_1ac4 + (int)local_1ae4);
              puVar11 = extraout_EDX_07;
            } while ((int)local_1ac4 < (int)local_1ac8);
          } while (((int)local_1ac8 <= (int)local_1ac4) &&
                  (puVar14 = (ushort *)((int)local_1acc - (int)local_1ad4), puVar11 = local_1ad4,
                  local_1ac4 = puVar14, puVar14 < param_3));
          goto LAB_004068c6;
        }
      }
LAB_00406b88:
      uVar19 = (undefined)in_stack_ffffe50c;
      if (((*(byte *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 4) & 0x40) == 0) ||
         (puVar11 = local_1ad4, *(char *)local_1ad4 != '\x1a')) {
        piVar6 = __errno();
        *piVar6 = 0x1c;
        puVar5 = ___doserrno();
        *puVar5 = 0;
        puVar11 = extraout_EDX_11;
      }
    }
    else {
      p_Var7 = __getptd();
      local_1ac8 = (ushort *)(uint)(p_Var7->ptlocinfo->locale_name[2] == (wchar_t *)0x0);
      BVar8 = GetConsoleMode(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),&local_1aec)
      ;
      if ((BVar8 == 0) || ((local_1ac8 != (ushort *)0x0 && (cVar12 == '\0')))) goto LAB_004067b6;
      in_stack_ffffe50c = GetConsoleCP();
      DVar10 = 0;
      local_1acc = (ushort *)0x0;
      local_1ad0 = 0;
      local_1ad8 = local_1ad4;
      if (param_3 == (ushort *)0x0) goto LAB_00406b88;
      puVar11 = (ushort *)0x0;
      local_1ac4 = (ushort *)0x0;
      puVar16 = local_1ad4;
      puVar13 = puVar14;
      do {
        local_1ac8 = (ushort *)0x0;
        puVar14 = puVar13;
        if (cVar12 == '\0') {
          cVar1 = *(char *)puVar16;
          local_1aec = (uint)(cVar1 == '\n');
          local_1ac8 = (ushort *)(&DAT_004191d0)[local_1adc];
          if (*(int *)((int)((int)local_1ae0 + 0x38) + (int)local_1ac8) == 0) {
            iVar9 = FUN_00408e3d((int)cVar1);
            if (iVar9 == 0) {
              uVar18 = 1;
              puVar11 = local_1ad8;
              goto LAB_004065d2;
            }
            if ((uint)((int)((int)local_1ad4 - (int)local_1ad8) + (int)param_3) < 2) {
              *(undefined *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 0x34) =
                   *(undefined *)local_1ad8;
              *(undefined4 *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc] + 0x38) = 1;
              puVar11 = local_1ae0;
              puVar14 = (ushort *)((int)puVar13 + 1);
              break;
            }
            uVar17 = FUN_00408f43((ushort *)&local_1ad0,(byte *)local_1ad8,2);
            puVar11 = (ushort *)((ulonglong)uVar17 >> 0x20);
            if ((int)uVar17 == -1) break;
            local_1ad8 = (ushort *)((int)local_1ad8 + 1);
            local_1ac4 = (ushort *)((int)local_1ac4 + 1);
          }
          else {
            local_10 = *(undefined *)((int)((int)local_1ae0 + 0x34) + (int)local_1ac8);
            uVar18 = 2;
            *(undefined4 *)((int)((int)local_1ae0 + 0x38) + (int)local_1ac8) = 0;
            puVar11 = (ushort *)&local_10;
            local_f = cVar1;
LAB_004065d2:
            uVar17 = FUN_00408f43((ushort *)&local_1ad0,(byte *)puVar11,uVar18);
            puVar11 = (ushort *)((ulonglong)uVar17 >> 0x20);
            if ((int)uVar17 == -1) break;
          }
          local_1ad8 = (ushort *)((int)local_1ad8 + 1);
          local_1ac4 = (ushort *)((int)local_1ac4 + 1);
          local_1ac8 = (ushort *)
                       WideCharToMultiByte(in_stack_ffffe50c,0,(LPCWSTR)&local_1ad0,1,&local_10,5,
                                           (LPCSTR)0x0,(LPBOOL)0x0);
          puVar11 = extraout_EDX_00;
          if (local_1ac8 == (ushort *)0x0) break;
          BVar8 = WriteFile(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),&local_10,
                            (DWORD)local_1ac8,(LPDWORD)&local_1acc,(LPOVERLAPPED)0x0);
          if (BVar8 == 0) goto LAB_004067a9;
          puVar14 = (ushort *)((int)local_1ac4 + local_1ac0);
          puVar11 = extraout_EDX_01;
          if ((int)local_1acc < (int)local_1ac8) break;
          puVar16 = local_1ad8;
          DVar10 = local_1ad0;
          puVar11 = local_1ac4;
          if (local_1aec != 0) {
            local_10 = 0xd;
            BVar8 = WriteFile(*(HANDLE *)((int)local_1ae0 + (&DAT_004191d0)[local_1adc]),&local_10,1
                              ,(LPDWORD)&local_1acc,(LPOVERLAPPED)0x0);
            if (BVar8 == 0) goto LAB_004067a9;
            puVar11 = extraout_EDX_02;
            if ((int)local_1acc < 1) break;
            local_1ac0 = local_1ac0 + 1;
            puVar14 = (ushort *)((int)puVar14 + 1);
            puVar16 = local_1ad8;
            DVar10 = local_1ad0;
            puVar11 = local_1ac4;
          }
        }
        else {
          if ((cVar12 == '\x01') || (cVar12 == '\x02')) {
            DVar10 = (DWORD)*puVar16;
            local_1ac8 = (ushort *)(uint)(*puVar16 == 10);
            puVar16 = puVar16 + 1;
            puVar11 = local_1ac4 + 1;
            local_1ad8 = puVar16;
            local_1ad0 = DVar10;
            local_1ac4 = puVar11;
          }
          if ((cVar12 == '\x01') || (cVar12 == '\x02')) {
            wVar4 = __putwch_nolock((wchar_t)DVar10);
            if (wVar4 != (wint_t)local_1ad0) goto LAB_004067a9;
            puVar14 = puVar13 + 1;
            puVar16 = local_1ad8;
            DVar10 = local_1ad0;
            puVar11 = local_1ac4;
            if (local_1ac8 != (ushort *)0x0) {
              local_1ad0 = 0xd;
              wVar4 = __putwch_nolock(L'\r');
              if (wVar4 != (wint_t)local_1ad0) goto LAB_004067a9;
              puVar14 = (ushort *)((int)puVar13 + 3);
              local_1ac0 = local_1ac0 + 1;
              puVar16 = local_1ad8;
              DVar10 = local_1ad0;
              puVar11 = local_1ac4;
            }
          }
        }
        puVar13 = puVar14;
      } while (puVar11 < param_3);
LAB_004068c6:
      uVar19 = (undefined)in_stack_ffffe50c;
      if (puVar14 == (ushort *)0x0) {
        if (DVar15 == 0) goto LAB_00406b88;
        if (DVar15 == 5) {
          piVar6 = __errno();
          *piVar6 = 9;
          puVar5 = ___doserrno();
          *puVar5 = 5;
          puVar11 = extraout_EDX_05;
        }
        else {
          FID_conflict___dosmaperr(DVar15);
          puVar11 = extraout_EDX_10;
        }
      }
    }
  }
  in_DL = SUB41(puVar11,0);
LAB_00406bc8:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,in_DL,uVar19);
  return;
}



// Library Function - Single Match
//  __callnewh
// 
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
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  LPWSTR lpWideCharStr;
  UINT CodePage;
  undefined4 uVar6;
  
  CodePage = 0;
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPWSTR *)0x0)) {
    piVar2 = __errno();
    uVar6 = 0x16;
    *piVar2 = 0x16;
    FUN_00402c77();
  }
  else {
    bVar1 = FUN_00407e3e();
    if ((CONCAT31(extraout_var,bVar1) == 0) && (BVar3 = AreFileApisANSI(), BVar3 == 0)) {
      CodePage = 1;
    }
    *param_2 = (LPWSTR)0x0;
    iVar4 = MultiByteToWideChar(CodePage,0,param_1,-1,(LPWSTR)0x0,0);
    if (iVar4 == 0) {
      DVar5 = GetLastError();
      FID_conflict___dosmaperr(DVar5);
    }
    else {
      lpWideCharStr = (LPWSTR)FUN_00408fa3(iVar4 * 2);
      *param_2 = lpWideCharStr;
      if (lpWideCharStr != (LPWSTR)0x0) {
        iVar4 = MultiByteToWideChar(CodePage,0,param_1,-1,lpWideCharStr,iVar4);
        if (iVar4 != 0) {
          return 1;
        }
        DVar5 = GetLastError();
        FID_conflict___dosmaperr(DVar5);
        FID_conflict__free(*param_2);
        *param_2 = (LPWSTR)0x0;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
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



void FUN_00406cf1(UINT param_1)

{
  FUN_00406cbd(param_1);
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



// Library Function - Single Match
//  __amsg_exit
// 
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
//  __cexit
// 
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
//  __exit
// 
// Library: Visual Studio 2012 Release

void __cdecl __exit(UINT param_1)

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
//  __initterm_e
// 
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
//  _doexit
// 
// Library: Visual Studio 2012 Release

void __cdecl _doexit(UINT param_1,int param_2,int param_3)

{
  PVOID *ppvVar1;
  PVOID pvVar2;
  code *pcVar3;
  PVOID *ppvVar4;
  PVOID *ppvVar5;
  PVOID *ppvVar6;
  PVOID *local_20;
  
  __lock(8);
  pcVar3 = DecodePointer_exref;
  if (_DAT_004192d4 != 1) {
    _DAT_004192fc = 1;
    DAT_004192f8 = (undefined)param_3;
    if (param_2 == 0) {
      local_20 = (PVOID *)DecodePointer(DAT_00419fec);
      if (local_20 != (PVOID *)0x0) {
        ppvVar1 = (PVOID *)DecodePointer(DAT_00419fe8);
        ppvVar6 = ppvVar1;
        while (ppvVar1 = ppvVar1 + -1, local_20 <= ppvVar1) {
          pvVar2 = EncodePointer((PVOID)0x0);
          if (*ppvVar1 != pvVar2) {
            if (ppvVar1 < local_20) break;
            pcVar3 = (code *)(*pcVar3)(*ppvVar1);
            pvVar2 = EncodePointer((PVOID)0x0);
            *ppvVar1 = pvVar2;
            (*pcVar3)();
            pcVar3 = DecodePointer_exref;
            ppvVar4 = (PVOID *)DecodePointer(DAT_00419fec);
            ppvVar5 = (PVOID *)DecodePointer(DAT_00419fe8);
            if ((local_20 != ppvVar4) || (ppvVar6 != ppvVar5)) {
              ppvVar1 = ppvVar5;
              local_20 = ppvVar4;
              ppvVar6 = ppvVar5;
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
    FUN_00406cf1(param_1);
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
//  _exit
// 
// Library: Visual Studio 2012 Release

void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __FF_MSGBANNER
// 
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
//  __GET_RTERRMSG
// 
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
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined uVar7;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  undefined in_stack_fffffe00;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  _Src = __GET_RTERRMSG(param_1);
  uVar7 = extraout_DL;
  if (_Src != (wchar_t *)0x0) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (_DAT_00419308 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      uVar7 = extraout_DL_02;
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar6 = 0;
        do {
          local_1fc[uVar6] = *(char *)(_Src + uVar6);
          if (_Src[uVar6] == L'\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = (LPDWORD)&stack0xfffffe00;
        local_1fc[499] = 0;
        sVar5 = _strlen(local_1fc);
        WriteFile(hFile,local_1fc,sVar5,lpNumberOfBytesWritten,lpOverlapped);
        uVar7 = extraout_DL_03;
      }
    }
    else {
      uVar7 = extraout_DL_00;
      if (param_1 != 0xfc) {
        eVar3 = _wcscpy_s((wchar_t *)&DAT_00419310,0x314,L"Runtime Error!\n\nProgram: ");
        if (eVar3 == 0) {
          _DAT_0041954a = 0;
          DVar4 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_00419342,0x104);
          if ((DVar4 != 0) ||
             (eVar3 = _wcscpy_s((wchar_t *)&DAT_00419342,0x2fb,L"<program name unknown>"),
             eVar3 == 0)) {
            sVar5 = _wcslen((wchar_t *)&DAT_00419342);
            if (0x3c < sVar5 + 1) {
              sVar5 = _wcslen((wchar_t *)&DAT_00419342);
              iVar2 = FUN_0040a6a8((short *)(&DAT_004192cc + sVar5 * 2),
                                   0x2fb - ((int)(sVar5 * 2 + -0x76) >> 1),(short *)&DAT_00411b9c,3)
              ;
              if (iVar2 != 0) goto LAB_004071cd;
            }
            eVar3 = _wcscat_s((wchar_t *)&DAT_00419310,0x314,L"\n\n");
            if ((eVar3 == 0) && (eVar3 = _wcscat_s((wchar_t *)&DAT_00419310,0x314,_Src), eVar3 == 0)
               ) {
              FUN_0040a766((LPCWSTR)&DAT_00419310,L"Microsoft Visual C++ Runtime Library",0x12010);
              uVar7 = extraout_DL_01;
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
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar7,in_stack_fffffe00);
  return;
}



bool FUN_004071d8(void)

{
  DAT_0041993c = GetProcessHeap();
  return DAT_0041993c != (HANDLE)0x0;
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
        param_1->_cnt = (int)pWVar4;
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
//  _memcpy_s
// 
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

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
        FUN_00407390((uint *)_Dst,0,_DstSize);
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



uint * __cdecl FUN_00407390(uint *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_3 == 0) {
    return param_1;
  }
  uVar1 = (uint)param_2;
  puVar4 = param_1;
  if ((DAT_00419eec >> 1 & 1) == 0) {
    if ((0x7f < (int)param_3) && ((DAT_00418e00 >> 1 & 1) != 0)) {
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = SUB164(CONCAT142(ZEXT214(0) & SUB1614((undefined  [16])0xffffffffff000000 >> 0x10,0)
                                 & SUB1614((undefined  [16])0xffffffffff00ffff >> 0x10,0),
                                 CONCAT11(param_2,param_2)),0);
        uVar1 = uVar1 | uVar1 << 0x10;
      }
      if (((uint)param_1 & 0xf) != 0) {
        uVar2 = 0x10 - ((uint)param_1 & 0xf);
        param_3 = param_3 - uVar2;
        uVar3 = uVar2 & 3;
        while (uVar3 != 0) {
          *(byte *)puVar4 = param_2;
          puVar4 = (uint *)((int)puVar4 + 1);
          uVar3 = uVar3 - 1;
        }
        uVar2 = uVar2 >> 2;
        while (uVar2 != 0) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 - 1;
        }
      }
      uVar3 = param_3 >> 7;
      while (uVar3 != 0) {
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
        puVar4[2] = uVar1;
        puVar4[3] = uVar1;
        puVar4[4] = uVar1;
        puVar4[5] = uVar1;
        puVar4[6] = uVar1;
        puVar4[7] = uVar1;
        puVar4[8] = uVar1;
        puVar4[9] = uVar1;
        puVar4[10] = uVar1;
        puVar4[0xb] = uVar1;
        puVar4[0xc] = uVar1;
        puVar4[0xd] = uVar1;
        puVar4[0xe] = uVar1;
        puVar4[0xf] = uVar1;
        puVar4[0x10] = uVar1;
        puVar4[0x11] = uVar1;
        puVar4[0x12] = uVar1;
        puVar4[0x13] = uVar1;
        puVar4[0x14] = uVar1;
        puVar4[0x15] = uVar1;
        puVar4[0x16] = uVar1;
        puVar4[0x17] = uVar1;
        puVar4[0x18] = uVar1;
        puVar4[0x19] = uVar1;
        puVar4[0x1a] = uVar1;
        puVar4[0x1b] = uVar1;
        puVar4[0x1c] = uVar1;
        puVar4[0x1d] = uVar1;
        puVar4[0x1e] = uVar1;
        puVar4[0x1f] = uVar1;
        puVar4 = puVar4 + 0x20;
        uVar3 = uVar3 - 1;
      }
      if ((param_3 & 0x7f) != 0) {
        uVar3 = (param_3 & 0x7f) >> 4;
        while (uVar3 != 0) {
          *puVar4 = uVar1;
          puVar4[1] = uVar1;
          puVar4[2] = uVar1;
          puVar4[3] = uVar1;
          puVar4 = puVar4 + 4;
          uVar3 = uVar3 - 1;
        }
        if ((param_3 & 0xf) != 0) {
          uVar3 = (param_3 & 0xf) >> 2;
          while (uVar3 != 0) {
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            uVar3 = uVar3 - 1;
          }
          uVar1 = param_3 & 3;
          while (uVar1 != 0) {
            *(byte *)puVar4 = param_2;
            puVar4 = (uint *)((int)puVar4 + 1);
            uVar1 = uVar1 - 1;
          }
        }
      }
      return param_1;
    }
    if (3 < param_3) {
      uVar2 = -(int)param_1 & 3;
      uVar3 = param_3;
      if (uVar2 != 0) {
        uVar3 = param_3 - uVar2;
        do {
          *(byte *)puVar4 = param_2;
          puVar4 = (uint *)((int)puVar4 + 1);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar1 = uVar1 * 0x1010101;
      param_3 = uVar3 & 3;
      uVar3 = uVar3 >> 2;
      if (uVar3 != 0) {
        while (uVar3 != 0) {
          uVar3 = uVar3 - 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
    }
    do {
      *(char *)puVar4 = (char)uVar1;
      puVar4 = (uint *)((int)puVar4 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 - 1;
      *(byte *)puVar4 = param_2;
      puVar4 = (uint *)((int)puVar4 + 1);
    }
  }
  return param_1;
}



// Library Function - Single Match
//  long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
// 
// Library: Visual Studio 2012 Release

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
//  __getptd
// 
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
//  __getptd_noexit
// 
// Library: Visual Studio 2012 Release

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  _ptiddata _Memory;
  int iVar1;
  DWORD DVar2;
  
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
  *(undefined **)(param_1 + 0x5c) = &DAT_00411c00;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined2 *)(param_1 + 0xb8) = 0x43;
  *(undefined2 *)(param_1 + 0x1be) = 0x43;
  *(undefined4 **)(param_1 + 0x68) = &DAT_00418750;
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
  char *pcVar6;
  int iVar7;
  char **ppcVar8;
  
  if (_DAT_00419ff0 == 0) {
    FUN_00408594();
  }
  iVar7 = 0;
  pcVar6 = DAT_004191c0;
  if (DAT_004191c0 != (char *)0x0) {
    while (*pcVar6 != '\0') {
      if (*pcVar6 != '=') {
        iVar7 = iVar7 + 1;
      }
      sVar3 = _strlen(pcVar6);
      pcVar6 = pcVar6 + sVar3 + 1;
    }
    DAT_004192e4 = (char **)FUN_00408f5b(iVar7 + 1,4);
    if (DAT_004192e4 != (char **)0x0) {
      cVar1 = *DAT_004191c0;
      ppcVar8 = DAT_004192e4;
      pcVar6 = DAT_004191c0;
      do {
        if (cVar1 == '\0') {
          FID_conflict__free(DAT_004191c0);
          DAT_004191c0 = (char *)0x0;
          *ppcVar8 = (char *)0x0;
          _DAT_00419ff4 = 1;
          return 0;
        }
        sVar3 = _strlen(pcVar6);
        _SizeInBytes = sVar3 + 1;
        if (*pcVar6 != '=') {
          _Dst = (char *)FUN_00408f5b(_SizeInBytes,1);
          *ppcVar8 = _Dst;
          if (_Dst == (char *)0x0) {
            FID_conflict__free(DAT_004192e4);
            DAT_004192e4 = (char **)0x0;
            return 0xffffffff;
          }
          eVar4 = _strcpy_s(_Dst,_SizeInBytes,pcVar6);
          if (eVar4 != 0) {
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
          ppcVar8 = ppcVar8 + 1;
        }
        pcVar6 = pcVar6 + _SizeInBytes;
        cVar1 = *pcVar6;
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
//  __set_error_mode
// 
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
//  ___security_init_cookie
// 
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
  int iVar4;
  WCHAR *pWVar3;
  
  lpWideCharStr = GetEnvironmentStringsW();
  lpMultiByteStr = (LPSTR)0x0;
  if (lpWideCharStr != (LPWCH)0x0) {
    WVar1 = *lpWideCharStr;
    pWVar2 = lpWideCharStr;
    while (WVar1 != L'\0') {
      do {
        pWVar3 = pWVar2;
        pWVar2 = pWVar3 + 1;
      } while (*pWVar2 != L'\0');
      pWVar2 = pWVar3 + 2;
      WVar1 = *pWVar2;
    }
    iVar4 = ((int)((int)pWVar2 - (int)lpWideCharStr) >> 1) + 1;
    cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((cbMultiByte == 0) ||
       (lpMultiByteStr = (LPSTR)FUN_00408fa3(cbMultiByte), lpMultiByteStr == (LPSTR)0x0)) {
      FreeEnvironmentStringsW(lpWideCharStr);
      lpMultiByteStr = (LPSTR)0x0;
    }
    else {
      iVar4 = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if (iVar4 == 0) {
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



bool FUN_00407e3e(void)

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
  return 0 < DAT_00418544;
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
//  ___crtTerminateProcess
// 
// Library: Visual Studio 2012 Release

void __cdecl ___crtTerminateProcess(UINT uExitCode)

{
  HANDLE hProcess;
  
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// Library Function - Single Match
//  ___crtUnhandledException
// 
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
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  void **ppvVar3;
  int **ppiVar4;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0x84) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0x84) != &PTR_DAT_00418e10)) &&
      (*(int **)((int)param_1 + 0x78) != (int *)0x0)) && (**(int **)((int)param_1 + 0x78) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x80);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      FID_conflict____acrt_locale_free_monetary(*(int *)((int)param_1 + 0x84));
    }
    piVar1 = *(int **)((int)param_1 + 0x7c);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
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
  ppuVar2 = *(undefined ***)((int)param_1 + 0x9c);
  if ((ppuVar2 != &PTR_DAT_00418a78) && (ppuVar2[0x2c] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    FID_conflict__free(*(void **)((int)param_1 + 0x9c));
  }
  ppvVar3 = (void **)((int)param_1 + 0xa0);
  param_1 = (void *)0x6;
  ppiVar4 = (int **)((int)_Memory + 0x1c);
  do {
    if (((ppiVar4[-2] != (int *)&DAT_00418a74) && (piVar1 = *ppiVar4, piVar1 != (int *)0x0)) &&
       (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      FID_conflict__free(*ppvVar3);
    }
    if (((ppiVar4[-3] != (int *)0x0) && (piVar1 = ppiVar4[-1], piVar1 != (int *)0x0)) &&
       (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
    }
    ppvVar3 = ppvVar3 + 1;
    ppiVar4 = ppiVar4 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  FID_conflict__free(_Memory);
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
//  __updatetlocinfoEx_nolock
// 
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release

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
//  wchar_t const * __cdecl CPtoLocaleName(int)
// 
// Library: Visual Studio 2012 Release

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
    return (wchar_t *)(wchar_t *)0x0;
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
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x18);
  FUN_00407390(puVar3,0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *(undefined *)puVar3 =
         *(undefined *)((int)(undefined4 *)((int)&DAT_00418750 - param_1) + (int)puVar3);
    puVar3 = (uint *)((int)puVar3 + 1);
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
//  void __cdecl setSBUpLow(struct __crt_multibyte_data *)
// 
// Library: Visual Studio 2015 Release

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  char extraout_DL;
  char cVar6;
  __crt_multibyte_data *p_Var7;
  int in_stack_fffffadc;
  _cpinfo local_51c;
  WORD local_508 [256];
  WCHAR local_308 [128];
  WCHAR local_208 [128];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),(LPCPINFO)&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    in_stack_fffffadc = -0x61 - (int)(param_1 + 0x119);
    do {
      p_Var7 = param_1 + 0x119 + uVar4;
      if (p_Var7 + in_stack_fffffadc + 0x20 < (__crt_multibyte_data *)0x1a) {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + ' ');
LAB_00408823:
        *p_Var7 = _Var2;
      }
      else {
        if (p_Var7 + in_stack_fffffadc < (__crt_multibyte_data *)0x1a) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = (__crt_multibyte_data)((char)uVar4 + -0x20);
          goto LAB_00408823;
        }
        *p_Var7 = (__crt_multibyte_data)0x0;
      }
      cVar6 = (char)param_1 + '\x19';
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
    FUN_0040b1c0((pthreadlocinfo *)0x0,*(wchar_t **)(param_1 + 0x21c),0x100,local_108,0x100,
                 local_208,0x100,*(UINT *)(param_1 + 4),0);
    FUN_0040b1c0((pthreadlocinfo *)0x0,*(wchar_t **)(param_1 + 0x21c),0x200,local_108,0x100,
                 local_308,0x100,*(UINT *)(param_1 + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = *(__crt_multibyte_data *)((int)local_308 + uVar4);
          goto LAB_004087ca;
        }
        param_1[uVar4 + 0x119] = (__crt_multibyte_data)0x0;
      }
      else {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = *(__crt_multibyte_data *)((int)local_208 + uVar4);
LAB_004087ca:
        param_1[uVar4 + 0x119] = _Var2;
      }
      uVar4 = uVar4 + 1;
      cVar6 = extraout_DL;
    } while (uVar4 < 0x100);
  }
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,cVar6,(char)in_stack_fffffadc);
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
      p_Var2->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_00418974;
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
  pthreadmbcinfo ptVar3;
  int *piVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  int iVar7;
  int iVar8;
  pthreadmbcinfo ptVar9;
  
  iVar8 = -1;
  p_Var1 = __getptd();
  FUN_0040884b();
  ptVar3 = p_Var1->ptmbcinfo;
  UVar2 = FUN_004085ec(param_1);
  if (UVar2 == ptVar3->mbcodepage) {
    iVar8 = 0;
  }
  else {
    ptVar3 = (pthreadmbcinfo)FUN_00408fa3(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      iVar8 = 0x88;
      ptVar6 = p_Var1->ptmbcinfo;
      ptVar9 = ptVar3;
      while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        ptVar9->refcount = ptVar6->refcount;
        ptVar6 = (pthreadmbcinfo)&ptVar6->mbcodepage;
        ptVar9 = (pthreadmbcinfo)&ptVar9->mbcodepage;
      }
      iVar7 = 0;
      ptVar3->refcount = 0;
      iVar8 = FUN_00408a99(UVar2,(__crt_multibyte_data *)ptVar3);
      if (iVar8 == 0) {
        LOCK();
        iVar5 = p_Var1->ptmbcinfo->refcount + -1;
        p_Var1->ptmbcinfo->refcount = iVar5;
        if ((iVar5 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00418750)) {
          FID_conflict__free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        LOCK();
        ptVar3->refcount = ptVar3->refcount + 1;
        if (((*(byte *)&p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00418c98 & 1) == 0)) {
          __lock(0xd);
          _DAT_00419a4c = ptVar3->mbcodepage;
          _DAT_00419a50 = ptVar3->ismbcodepage;
          _DAT_00419a60 = ptVar3->mblocalename;
          iVar5 = 0;
          while (iVar5 < 5) {
            (&DAT_00419a54)[iVar5] = ptVar3->mbulinfo[iVar5];
            iVar5 = iVar5 + 1;
          }
          iVar5 = 0;
          while (iVar5 < 0x101) {
            (&DAT_00418548)[iVar5] = ptVar3->mbctype[iVar5];
            iVar5 = iVar5 + 1;
          }
          while (iVar7 < 0x100) {
            (&DAT_00418650)[iVar7] = ptVar3->mbcasemap[iVar7];
            iVar7 = iVar7 + 1;
          }
          LOCK();
          iVar7 = *(int *)PTR_DAT_00418974;
          *(int *)PTR_DAT_00418974 = iVar7 + -1;
          if ((iVar7 + -1 == 0) && ((undefined4 *)PTR_DAT_00418974 != &DAT_00418750)) {
            FID_conflict__free(PTR_DAT_00418974);
          }
          LOCK();
          PTR_DAT_00418974 = (undefined *)ptVar3;
          ptVar3->refcount = ptVar3->refcount + 1;
          FUN_00408a63();
        }
      }
      else {
        if (iVar8 == -1) {
          if (ptVar3 != (pthreadmbcinfo)&DAT_00418750) {
            FID_conflict__free(ptVar3);
          }
          piVar4 = __errno();
          *piVar4 = 0x16;
        }
      }
    }
  }
  return iVar8;
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
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined extraout_DL_04;
  undefined uVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined uVar14;
  int in_stack_ffffffdc;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  CodePage = FUN_004085ec(param_1);
  uVar14 = (undefined)in_stack_ffffffdc;
  if (CodePage != 0) {
    uVar13 = 0;
    uVar3 = 0;
    local_20 = 0;
LAB_00408ad5:
    if (*(UINT *)((int)&DAT_00418978 + uVar3) != CodePage) goto code_r0x00408ae1;
    FUN_00407390((uint *)(param_2 + 0x18),0,0x101);
    in_stack_ffffffdc = local_20 * 0x30;
    pbVar5 = (byte *)(in_stack_ffffffdc + 0x418988);
    do {
      bVar1 = *pbVar5;
      pbVar9 = pbVar5;
      while ((bVar1 != 0 && (bVar1 = pbVar9[1], bVar1 != 0))) {
        uVar3 = (uint)*pbVar9;
        while ((uVar3 <= bVar1 && (uVar3 < 0x100))) {
          param_2[uVar3 + 0x19] =
               (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | (&DAT_00418970)[uVar13]);
          uVar3 = uVar3 + 1;
          bVar1 = pbVar9[1];
        }
        pbVar9 = pbVar9 + 2;
        bVar1 = *pbVar9;
      }
      uVar13 = uVar13 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar13 < 4);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar7 = CPtoLocaleName(CodePage);
    *(wchar_t **)(param_2 + 0x21c) = pwVar7;
    puVar10 = (undefined2 *)(param_2 + 0xc);
    puVar12 = (undefined2 *)(in_stack_ffffffdc + 0x41897c);
    iVar8 = 6;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    goto LAB_00408c6a;
  }
  FUN_0040865a((int)param_2);
  uVar11 = extraout_DL_00;
LAB_00408c74:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar11,uVar14);
  return;
code_r0x00408ae1:
  local_20 = local_20 + 1;
  uVar3 = uVar3 + 0x30;
  if (0xef < uVar3) goto code_r0x00408aef;
  goto LAB_00408ad5;
code_r0x00408aef:
  uVar11 = extraout_DL;
  if ((CodePage != 65000) && (CodePage != 0xfde9)) {
    BVar4 = IsValidCodePage(CodePage & 0xffff);
    uVar14 = (undefined)in_stack_ffffffdc;
    uVar11 = extraout_DL_01;
    if (BVar4 != 0) {
      BVar4 = GetCPInfo(CodePage,(LPCPINFO)&local_1c);
      uVar14 = (undefined)in_stack_ffffffdc;
      if (BVar4 == 0) {
        uVar11 = extraout_DL_02;
        if (_DAT_00419a64 != 0) {
          FUN_0040865a((int)param_2);
          uVar11 = extraout_DL_03;
        }
      }
      else {
        FUN_00407390((uint *)(param_2 + 0x18),0,0x101);
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
              param_2[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | 4);
              uVar3 = uVar3 + 1;
            }
            pbVar5 = pbVar5 + 2;
            local_1c.LeadByte[0] = *pbVar5;
          }
          p_Var6 = param_2 + 0x1a;
          iVar8 = 0xfe;
          do {
            *p_Var6 = (__crt_multibyte_data)((byte)*p_Var6 | 8);
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
        uVar14 = (undefined)in_stack_ffffffdc;
        setSBUpLow(param_2);
        uVar11 = extraout_DL_04;
      }
    }
  }
  goto LAB_00408c74;
}



ushort __cdecl FUN_00408c84(int param_1,pthreadlocinfo *param_2)

{
  ushort uVar1;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  if (local_14[0]->mb_cur_max < 2) {
    uVar1 = local_14[0]->pctype[param_1] & 4;
  }
  else {
    uVar1 = FUN_0040b35c(param_1,4,local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



ushort __cdecl FUN_00408cd6(int param_1,pthreadlocinfo *param_2)

{
  ushort uVar1;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  if (local_14[0]->mb_cur_max < 2) {
    uVar1 = local_14[0]->pctype[param_1] & 8;
  }
  else {
    uVar1 = FUN_0040b35c(param_1,8,local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



ushort __cdecl FUN_00408d28(int param_1,pthreadlocinfo *param_2)

{
  ushort uVar1;
  pthreadlocinfo local_14 [2];
  int local_c;
  char local_8;
  
  FUN_00402d4b(local_14,param_2);
  if (local_14[0]->mb_cur_max < 2) {
    uVar1 = local_14[0]->pctype[param_1] & 0x80;
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
//  _isdigit
// 
// Library: Visual Studio 2012 Release

int __cdecl _isdigit(int _C)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  if (_DAT_00419f34 == 0) {
    return *(ushort *)(PTR_DAT_00418c70 + _C * 2) & 4;
  }
  uVar1 = FUN_00408c84(_C,(pthreadlocinfo *)0x0);
  return CONCAT22(extraout_var,uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _isspace
// 
// Library: Visual Studio 2012 Release

int __cdecl _isspace(int _C)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  if (_DAT_00419f34 == 0) {
    return *(ushort *)(PTR_DAT_00418c70 + _C * 2) & 8;
  }
  uVar1 = FUN_00408cd6(_C,(pthreadlocinfo *)0x0);
  return CONCAT22(extraout_var,uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _isxdigit
// 
// Library: Visual Studio 2012 Release

int __cdecl _isxdigit(int _C)

{
  ushort uVar1;
  undefined2 extraout_var;
  
  if (_DAT_00419f34 == 0) {
    return *(ushort *)(PTR_DAT_00418c70 + _C * 2) & 0x80;
  }
  uVar1 = FUN_00408d28(_C,(pthreadlocinfo *)0x0);
  return CONCAT22(extraout_var,uVar1);
}



ushort __cdecl FUN_00408e03(uint param_1,pthreadlocinfo *param_2)

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
  return uVar1 & 0x8000;
}



void __cdecl FUN_00408e3d(uint param_1)

{
  FUN_00408e03(param_1,(pthreadlocinfo *)0x0);
  return;
}



undefined4 __cdecl FUN_00408e4e(ushort *param_1,byte *param_2,uint param_3,pthreadlocinfo *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined2 extraout_var;
  int iVar3;
  int *piVar4;
  int iVar5;
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
    iVar5 = 1;
    goto LAB_00408f2e;
  }
  uVar2 = FUN_00408e03((uint)*param_2,local_14);
  if (CONCAT22(extraout_var,uVar2) == 0) {
    iVar5 = 1;
    iVar3 = MultiByteToWideChar(local_14[0]->lc_codepage,9,(LPCSTR)param_2,1,(LPWSTR)param_1,
                                (uint)(param_1 != (ushort *)0x0));
    if (iVar3 != 0) goto LAB_00408f2e;
LAB_00408f20:
    piVar4 = __errno();
    iVar5 = -1;
    *piVar4 = 0x2a;
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
      iVar5 = MultiByteToWideChar(local_14[0]->lc_codepage,9,(LPCSTR)param_2,local_14[0]->mb_cur_max
                                  ,(LPWSTR)param_1,(uint)(param_1 != (ushort *)0x0));
      if (iVar5 == 0) goto LAB_00408eed;
    }
    iVar5 = local_14[0]->mb_cur_max;
  }
LAB_00408f2e:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    return iVar5;
  }
  return iVar5;
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



void * __cdecl FUN_00409034(LPCVOID param_1,uint param_2,uint param_3)

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
//  __allmul
// 
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
//  __lock
// 
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
    FUN_00406cf1(0xff);
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
      (&DAT_00418cc8)[param_1 * 2] = _Memory;
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
  LPCWSTR local_8;
  
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



uint __cdecl FUN_0040944c(byte *param_1,byte *param_2,size_t param_3,pthreadlocinfo *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  size_t sVar7;
  byte *pbVar8;
  undefined local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00402d4b(local_18,param_4);
    if (*(int *)(local_14 + 8) == 0) {
      uVar3 = _strncmp((char *)param_1,(char *)param_2,param_3);
    }
    else {
      if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
        do {
          bVar2 = *param_1;
          sVar7 = param_3 - 1;
          local_8 = param_1 + 1;
          uVar3 = 0;
          uVar6 = (uint)bVar2;
          if ((*(byte *)(bVar2 + 0x19 + local_14) & 4) == 0) {
LAB_00409501:
            uVar5 = (ushort)uVar6;
            bVar2 = *param_2;
            pbVar8 = param_2 + 1;
            uVar6 = (uint)bVar2;
            if (((*(byte *)(bVar2 + 0x19 + local_14) & 4) != 0) && (uVar6 = 0, sVar7 != 0)) {
              bVar1 = *pbVar8;
              sVar7 = param_3 - 2;
              if (bVar1 != 0) {
                pbVar8 = param_2 + 2;
                uVar6 = (uint)CONCAT11(bVar2,bVar1);
              }
            }
          }
          else {
            if (sVar7 != 0) {
              bVar1 = *local_8;
              uVar6 = uVar3;
              if (bVar1 != 0) {
                local_8 = param_1 + 2;
                uVar6 = (uint)CONCAT11(bVar2,bVar1);
              }
              goto LAB_00409501;
            }
            uVar5 = 0;
            if ((*(byte *)(*param_2 + 0x19 + local_14) & 4) != 0) goto LAB_0040954d;
            uVar6 = (uint)*param_2;
            pbVar8 = param_2;
          }
          uVar3 = 0;
          if ((ushort)uVar6 != uVar5) {
            uVar3 = (-(uint)((ushort)uVar6 < uVar5) & 2) - 1;
            goto LAB_0040954d;
          }
          if ((uVar5 == 0) || (param_1 = local_8, param_3 = sVar7, param_2 = pbVar8, sVar7 == 0))
          goto LAB_0040954d;
        } while( true );
      }
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_00402c77();
      uVar3 = 0x7fffffff;
    }
LAB_0040954d:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return uVar3;
}



void __cdecl FUN_00409563(byte *param_1,byte *param_2,size_t param_3)

{
  FUN_0040957b(param_1,param_2,param_3,(pthreadlocinfo *)0x0);
  return;
}



// WARNING: Could not reconcile some variable overlaps

int __cdecl FUN_0040957b(byte *param_1,byte *param_2,size_t param_3,pthreadlocinfo *param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  size_t sVar8;
  undefined local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  byte *local_c;
  size_t local_8;
  
  FUN_00402d4b(local_1c,param_4);
  iVar5 = 0;
  if (param_3 != 0) {
    if (*(int *)(local_18 + 8) == 0) {
      iVar5 = __strnicmp((char *)param_1,(char *)param_2,param_3);
    }
    else {
      local_c = param_1;
      if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
        do {
          iVar5 = 0;
          bVar1 = *local_c;
          uVar7 = (uint)bVar1;
          sVar8 = param_3 - 1;
          pbVar3 = local_c + 1;
          if ((*(byte *)(uVar7 + 0x19 + local_18) & 4) == 0) {
            local_8._0_2_ = (ushort)bVar1;
            local_c = pbVar3;
            if ((*(byte *)(uVar7 + 0x19 + local_18) & 0x10) != 0) {
              local_8._0_2_ = (ushort)*(byte *)(uVar7 + 0x119 + local_18);
            }
LAB_00409680:
            local_8 = (size_t)*param_2;
            pbVar6 = param_2 + 1;
            if ((*(byte *)(local_8 + 0x19 + local_18) & 4) == 0) {
              if ((*(byte *)(local_8 + 0x19 + local_18) & 0x10) != 0) {
                bVar1 = *(byte *)(local_8 + 0x119 + local_18);
                goto LAB_004096fc;
              }
            }
            else {
              if (sVar8 != 0) {
                sVar8 = param_3 - 2;
                if (*pbVar6 != 0) {
                  uVar2 = CONCAT11(*param_2,*pbVar6);
                  local_8 = (size_t)uVar2;
                  pbVar6 = param_2 + 2;
                  if ((uVar2 < *(ushort *)(local_18 + 0xc)) ||
                     (*(ushort *)(local_18 + 0xe) <= uVar2 && uVar2 != *(ushort *)(local_18 + 0xe)))
                  {
                    if ((*(ushort *)(local_18 + 0x12) <= uVar2) &&
                       (uVar2 < *(ushort *)(local_18 + 0x14) ||
                        uVar2 == *(ushort *)(local_18 + 0x14))) {
                      local_8 = (size_t)(ushort)(uVar2 + *(short *)(local_18 + 0x16));
                    }
                  }
                  else {
                    local_8 = (size_t)(ushort)(uVar2 + *(short *)(local_18 + 0x10));
                  }
                  goto LAB_00409703;
                }
              }
              param_3 = 0;
              local_8 = param_3;
            }
          }
          else {
            if (sVar8 != 0) {
              if (*pbVar3 == 0) {
                local_8._0_2_ = 0;
                local_c = pbVar3;
              }
              else {
                local_8._0_2_ = CONCAT11(bVar1,*pbVar3);
                local_c = local_c + 2;
                if (((ushort)local_8 < *(ushort *)(local_18 + 0xc)) ||
                   (*(ushort *)(local_18 + 0xe) <= (ushort)local_8 &&
                    (ushort)local_8 != *(ushort *)(local_18 + 0xe))) {
                  if ((*(ushort *)(local_18 + 0x12) <= (ushort)local_8) &&
                     ((ushort)local_8 < *(ushort *)(local_18 + 0x14) ||
                      (ushort)local_8 == *(ushort *)(local_18 + 0x14))) {
                    local_8._0_2_ = (ushort)local_8 + *(short *)(local_18 + 0x16);
                  }
                }
                else {
                  local_8._0_2_ = (ushort)local_8 + *(short *)(local_18 + 0x10);
                }
              }
              goto LAB_00409680;
            }
            if ((*(byte *)(*param_2 + 0x19 + local_18) & 4) != 0) goto LAB_00409721;
            bVar1 = *param_2;
            local_8._0_2_ = 0;
            pbVar6 = param_2;
            local_c = pbVar3;
LAB_004096fc:
            local_8 = (size_t)bVar1;
          }
LAB_00409703:
          iVar5 = 0;
          if ((ushort)local_8 != (ushort)local_8) {
            iVar5 = (-(uint)((ushort)local_8 < (ushort)local_8) & 2) - 1;
            goto LAB_00409721;
          }
          if (((ushort)local_8 == 0) || (param_2 = pbVar6, param_3 = sVar8, sVar8 == 0))
          goto LAB_00409721;
        } while( true );
      }
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_00402c77();
      iVar5 = 0x7fffffff;
    }
  }
LAB_00409721:
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return iVar5;
}



// Library Function - Single Match
//  __FindPESection
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER p_Var1;
  PBYTE pBVar2;
  uint uVar3;
  
  uVar3 = 0;
  pBVar2 = pImageBase + *(int *)(pImageBase + 0x3c);
  p_Var1 = (PIMAGE_SECTION_HEADER)(pBVar2 + *(ushort *)(pBVar2 + 0x14) + 0x18);
  if (*(ushort *)(pBVar2 + 6) != 0) {
    do {
      if ((p_Var1->VirtualAddress <= rva) && (rva < p_Var1->Misc + p_Var1->VirtualAddress)) {
        return p_Var1;
      }
      uVar3 = uVar3 + 1;
      p_Var1 = p_Var1 + 1;
    } while (uVar3 < *(ushort *)(pBVar2 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  __IsNonwritableInCurrentImage
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2019 Release

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
  *in_FS_OFFSET = (int *)&local_14;
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
//  __ValidateImageBase
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)(*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return uVar1;
}



// Library Function - Single Match
//  __global_unwind2
// 
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4098a8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  __local_unwind2
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_20;
  undefined *puStack28;
  undefined4 local_18;
  int iStack20;
  
  iStack20 = param_1;
  puStack28 = &LAB_004098b0;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_004099c4();
    }
  }
  *in_FS_OFFSET = local_20;
  return;
}



// Library Function - Single Match
//  __NLG_Notify
// 
// Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
// Studio 2019 Release

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00418df4 = in_EAX;
  DAT_00418df8 = param_1;
  DAT_00418dfc = unaff_EBP;
  return;
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
          (&DAT_004191d0)[iVar1] = puVar2;
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
//  ___raise_securityfailure
// 
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



byte __cdecl FUN_00409fb4(uint param_1)

{
  int *piVar1;
  
  if (param_1 == 0xfffffffe) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00419ff8)) {
      return *(byte *)((&DAT_004191d0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40) & 0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00402c77();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __getbuf
// 
// Library: Visual Studio 2012 Release

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_004191cc = _DAT_004191cc + 1;
  pcVar1 = (char *)FUN_00408fa3(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
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
//  __putwch_nolock
// 
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
  PVOID *ppvVar1;
  PVOID *ppvVar2;
  PVOID *ppvVar3;
  PVOID pvVar4;
  PVOID *ppvVar5;
  
  ppvVar1 = (PVOID *)DecodePointer(DAT_00419fec);
  ppvVar2 = (PVOID *)DecodePointer(DAT_00419fe8);
  if ((ppvVar2 < ppvVar1) ||
     (ppvVar5 = (PVOID *)((int)ppvVar2 - (int)ppvVar1), ppvVar5 + 1 < &DAT_00000004)) {
    return (PVOID)0x0;
  }
  ppvVar3 = (PVOID *)FUN_0040bfaa(ppvVar1);
  if (ppvVar3 < ppvVar5 + 1) {
    ppvVar2 = (PVOID *)0x800;
    if (ppvVar3 < (PVOID *)0x800) {
      ppvVar2 = ppvVar3;
    }
    if (((PVOID *)((int)ppvVar2 + (int)ppvVar3) < ppvVar3) ||
       (pvVar4 = FUN_00408fea(ppvVar1,(size_t)(PVOID *)((int)ppvVar2 + (int)ppvVar3)),
       pvVar4 == (void *)0x0)) {
      if (ppvVar3 + 4 < ppvVar3) {
        return (PVOID)0x0;
      }
      pvVar4 = FUN_00408fea(ppvVar1,(size_t)(ppvVar3 + 4));
      if (pvVar4 == (void *)0x0) {
        return (PVOID)0x0;
      }
    }
    ppvVar2 = (PVOID *)((int)pvVar4 + ((int)ppvVar5 >> 2) * 4);
    DAT_00419fec = EncodePointer(pvVar4);
  }
  pvVar4 = EncodePointer(param_1);
  *ppvVar2 = pvVar4;
  DAT_00419fe8 = EncodePointer(ppvVar2 + 1);
  return param_1;
}



int __cdecl FUN_0040a335(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_0040a239(param_1);
  return (pvVar1 != (PVOID)0x0) - 1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  void __cdecl terminate(void)
// 
// Library: Visual Studio 2012 Release

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
//  _wcscat_s
// 
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
//  _wcscpy_s
// 
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
//  _wcslen
// 
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
// Visual Studio 2019 Release

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
  bool bVar1;
  code *pcVar2;
  undefined3 extraout_var;
  HMODULE hModule;
  DWORD DVar3;
  FARPROC pFVar4;
  BOOL BVar5;
  int iVar6;
  code *pcVar7;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined extraout_DL_04;
  undefined extraout_DL_05;
  undefined extraout_DL_06;
  undefined uVar8;
  int iVar9;
  undefined in_stack_ffffffd8;
  undefined4 local_24;
  LPCWSTR local_20;
  code *local_1c;
  code *local_18;
  undefined local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  iVar9 = 0;
  local_24 = param_2;
  pcVar2 = (code *)EncodePointer((PVOID)0x0);
  local_1c = pcVar2;
  bVar1 = FUN_00407e3e();
  local_18 = (code *)CONCAT31(extraout_var,bVar1);
  if (DAT_00419f18 == (PVOID)0x0) {
    hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0x800);
    if (((hModule == (HMODULE)0x0) &&
        ((DVar3 = GetLastError(), uVar8 = extraout_DL, DVar3 != 0x57 ||
         (hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0), uVar8 = extraout_DL_00,
         hModule == (HMODULE)0x0)))) ||
       (pFVar4 = GetProcAddress(hModule,"MessageBoxW"), uVar8 = extraout_DL_01,
       pFVar4 == (FARPROC)0x0)) goto LAB_0040a93b;
    DAT_00419f18 = EncodePointer(pFVar4);
    pFVar4 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_00419f1c = (code *)EncodePointer(pFVar4);
    pFVar4 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_00419f20 = (code *)EncodePointer(pFVar4);
    pFVar4 = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_00419f28 = (code *)EncodePointer(pFVar4);
    pcVar2 = local_1c;
    if (DAT_00419f28 != (code *)0x0) {
      pFVar4 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_00419f24 = (code *)EncodePointer(pFVar4);
      pcVar2 = local_1c;
    }
  }
  BVar5 = IsDebuggerPresent();
  if (BVar5 == 0) {
    if (local_18 != (code *)0x0) {
      DecodePointer(DAT_00419f18);
      uVar8 = extraout_DL_04;
      goto LAB_0040a93b;
    }
  }
  else {
    uVar8 = extraout_DL_02;
    if (local_20 != (LPCWSTR)0x0) {
      OutputDebugStringW(local_20);
      uVar8 = extraout_DL_03;
    }
    if (local_18 != (code *)0x0) goto LAB_0040a93b;
  }
  if ((DAT_00419f24 == pcVar2) || (DAT_00419f28 == pcVar2)) {
LAB_0040a8f1:
    if ((((DAT_00419f1c != pcVar2) &&
         (pcVar7 = (code *)DecodePointer(DAT_00419f1c), pcVar7 != (code *)0x0)) &&
        (iVar9 = (*pcVar7)(), iVar9 != 0)) &&
       ((DAT_00419f20 != pcVar2 &&
        (pcVar2 = (code *)DecodePointer(DAT_00419f20), pcVar2 != (code *)0x0)))) {
      iVar9 = (*pcVar2)(iVar9);
    }
  }
  else {
    local_18 = (code *)DecodePointer(DAT_00419f24);
    local_1c = (code *)DecodePointer(DAT_00419f28);
    if (((local_18 == (code *)0x0) || (local_1c == (code *)0x0)) ||
       (((iVar6 = (*local_18)(), iVar6 != 0 &&
         (iVar6 = (*local_1c)(iVar6,1,local_14,0xc,&stack0xffffffd8), iVar6 != 0)) &&
        ((local_c & 1) != 0)))) goto LAB_0040a8f1;
    param_3 = param_3 | 0x200000;
  }
  pcVar2 = (code *)DecodePointer(DAT_00419f18);
  uVar8 = extraout_DL_05;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(iVar9,local_20,local_24,param_3);
    uVar8 = extraout_DL_06;
  }
LAB_0040a93b:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar8,in_stack_ffffffd8);
  return;
}



undefined4 __cdecl FUN_0040aa14(pthreadlocinfo *param_1,uint param_2,uint param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  FUN_00402d4b(&local_14,param_1);
  if ((*(byte *)(local_10 + 0x19 + (param_2 & 0xff)) & param_4) == 0) {
    uVar2 = 0;
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(*(int *)(local_14 + 0x90) + (param_2 & 0xff) * 2) & param_3;
    }
    if (uVar1 == 0) goto LAB_0040aa5a;
  }
  uVar2 = 1;
LAB_0040aa5a:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



void __cdecl FUN_0040aa6e(uint param_1)

{
  FUN_0040aa14((pthreadlocinfo *)0x0,param_1,0,4);
  return;
}



// Library Function - Single Match
//  _strcpy_s
// 
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
//  ___acrt_locale_free_monetary
//  ___free_lconv_mon
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

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
//  ___acrt_locale_free_numeric
//  ___free_lconv_num
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

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
//  ___free_lc_time
// 
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
FUN_0040afbc(int *param_1,wchar_t *param_2,uint param_3,LPCSTR param_4,int param_5,LPWSTR param_6,
            int param_7,UINT param_8,int param_9)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *lpWideCharStr;
  uint cchWideChar;
  undefined4 *puVar4;
  int iVar5;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined uVar6;
  undefined uVar7;
  uint uVar8;
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  pcVar1 = param_4;
  iVar5 = param_5;
  if (0 < param_5) {
    do {
      iVar5 = iVar5 + -1;
      if (*pcVar1 == '\0') goto LAB_0040afe8;
      pcVar1 = pcVar1 + 1;
    } while (iVar5 != 0);
    iVar5 = -1;
LAB_0040afe8:
    iVar2 = (param_5 - iVar5) + -1;
    iVar5 = param_5 - iVar5;
    if (param_5 <= iVar2) {
      iVar5 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 4);
  }
  uVar3 = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,iVar5,(LPWSTR)0x0,0);
  uVar6 = extraout_DL;
  if (uVar3 != 0) {
    if ((((int)uVar3 < 1) || (uVar6 = (undefined)(0xffffffe0 % uVar3), 0xffffffe0 / uVar3 < 2)) ||
       (uVar3 * 2 + 8 <= uVar3 * 2)) {
      lpWideCharStr = (undefined4 *)0x0;
    }
    else {
      uVar8 = uVar3 * 2 + 8;
      if (uVar8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe8;
        lpWideCharStr = (undefined4 *)&stack0xffffffe8;
        if ((undefined *)register0x00000010 != (undefined *)0x18) {
LAB_0040b089:
          lpWideCharStr = puVar4 + 2;
        }
      }
      else {
        lpWideCharStr = (undefined4 *)_malloc(uVar8);
        uVar6 = extraout_DL_00;
        if (lpWideCharStr != (undefined4 *)0x0) {
          *lpWideCharStr = 0xdddd;
          puVar4 = lpWideCharStr;
          goto LAB_0040b089;
        }
      }
    }
    if (lpWideCharStr != (undefined4 *)0x0) {
      iVar5 = MultiByteToWideChar(param_8,1,param_4,iVar5,(LPWSTR)lpWideCharStr,uVar3);
      uVar8 = uVar3;
      if ((iVar5 != 0) &&
         (cchWideChar = FUN_0040c096(param_2,param_3,(LPCWSTR)lpWideCharStr,uVar3,(LPWSTR)0x0,0),
         cchWideChar != 0)) {
        if ((param_3 & 0x400) == 0) {
          if ((((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) ||
             (cchWideChar * 2 + 8 <= cchWideChar * 2)) {
            puVar4 = (undefined4 *)0x0;
LAB_0040b15e:
            if (puVar4 != (undefined4 *)0x0) {
              iVar5 = FUN_0040c096(param_2,param_3,(LPCWSTR)lpWideCharStr,uVar8,(LPWSTR)puVar4,
                                   cchWideChar);
              if (iVar5 != 0) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = (LPWSTR)0x0;
                }
                WideCharToMultiByte(param_8,0,(LPCWSTR)puVar4,cchWideChar,(LPSTR)param_6,param_7,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
              }
              FUN_0040b206((int)puVar4);
            }
          }
          else {
            uVar3 = cchWideChar * 2 + 8;
            if (uVar3 < 0x401) {
              puVar4 = (undefined4 *)&stack0xffffffe8;
              if ((undefined *)register0x00000010 != (undefined *)0x18) {
LAB_0040b157:
                puVar4 = puVar4 + 2;
                goto LAB_0040b15e;
              }
            }
            else {
              puVar4 = (undefined4 *)_malloc(uVar3);
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = 0xdddd;
                goto LAB_0040b157;
              }
            }
          }
        }
        else {
          if ((param_7 != 0) && ((int)cchWideChar <= param_7)) {
            FUN_0040c096(param_2,param_3,(LPCWSTR)lpWideCharStr,uVar3,param_6,param_7);
          }
        }
      }
      uVar7 = (undefined)uVar8;
      FUN_0040b206((int)lpWideCharStr);
      uVar6 = extraout_DL_01;
      goto LAB_0040b1ac;
    }
  }
  uVar7 = (undefined)uVar3;
LAB_0040b1ac:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar6,uVar7);
  return;
}



void __cdecl
FUN_0040b1c0(pthreadlocinfo *param_1,wchar_t *param_2,uint param_3,LPCSTR param_4,int param_5,
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
  uint uVar1;
  uint cchWideChar;
  undefined4 *puVar2;
  int cchSrc;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined uVar3;
  undefined extraout_DL_01;
  uint *lpWideCharStr;
  
  uVar1 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  if (param_6 == 0) {
    param_6 = *(UINT *)(*param_1 + 4);
  }
  cchWideChar = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0
                                    ,0);
  uVar3 = extraout_DL;
  if (cchWideChar == 0) goto LAB_0040b308;
  if ((((int)cchWideChar < 1) || (0x7ffffff0 < cchWideChar)) ||
     (cchWideChar * 2 + 8 <= cchWideChar * 2)) {
    lpWideCharStr = (uint *)0x0;
  }
  else {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar2 = (undefined4 *)&stack0xffffffec;
      if ((undefined *)register0x00000010 == (undefined *)0x14) goto LAB_0040b308;
    }
    else {
      puVar2 = (undefined4 *)_malloc(_Size);
      uVar3 = extraout_DL_00;
      if (puVar2 == (undefined4 *)0x0) goto LAB_0040b308;
      *puVar2 = 0xdddd;
    }
    lpWideCharStr = puVar2 + 2;
  }
  if (lpWideCharStr != (uint *)0x0) {
    FUN_00407390(lpWideCharStr,0,cchWideChar * 2);
    cchSrc = MultiByteToWideChar(param_6,1,param_3,param_4,(LPWSTR)lpWideCharStr,cchWideChar);
    if (cchSrc != 0) {
      GetStringTypeW(param_2,(LPCWSTR)lpWideCharStr,cchSrc,param_5);
    }
    FUN_0040b206((int)lpWideCharStr);
    uVar3 = extraout_DL_01;
  }
LAB_0040b308:
  FUN_00404f47(uVar1 ^ (uint)&stack0xfffffffc,uVar3,(char)uVar1);
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



ushort __cdecl FUN_0040b35c(int param_1,ushort param_2,pthreadlocinfo *param_3)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  pthreadlocinfo local_1c [2];
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined local_a;
  ushort local_8 [2];
  
  FUN_00402d4b(local_1c,param_3);
  if (param_1 + 1U < 0x101) {
    local_8[0] = local_1c[0]->pctype[param_1];
  }
  else {
    uVar1 = FUN_00408e03(param_1 >> 8 & 0xff,local_1c);
    if (CONCAT22(extraout_var,uVar1) == 0) {
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
//  _realloc
// 
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



void * __cdecl FUN_0040b50a(LPCVOID param_1,uint param_2,uint param_3)

{
  int *piVar1;
  void *pvVar2;
  uint _NewSize;
  SIZE_T SVar3;
  
  SVar3 = 0;
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    _NewSize = param_2 * param_3;
    if (param_1 != (LPCVOID)0x0) {
      SVar3 = FUN_0040bfaa(param_1);
    }
    pvVar2 = _realloc(param_1,_NewSize);
    if ((pvVar2 != (void *)0x0) && (SVar3 < _NewSize)) {
      FUN_00407390((uint *)(SVar3 + (int)pvVar2),0,_NewSize - SVar3);
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
//  __calloc_impl
// 
// Library: Visual Studio 2012 Release

LPVOID __cdecl __calloc_impl(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  LPVOID pvVar2;
  uint dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = (LPVOID)0x0;
      if ((dwBytes < 0xffffffe1) &&
         (pvVar2 = HeapAlloc(DAT_0041993c,8,dwBytes), pvVar2 != (LPVOID)0x0)) {
        return pvVar2;
      }
      if (_DAT_00419938 == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = 0xc;
          return pvVar2;
        }
        return pvVar2;
      }
      iVar1 = __callnewh(dwBytes);
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
  bool bVar1;
  undefined3 extraout_var;
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
  
  bVar1 = FUN_00407e3e();
  if (CONCAT31(extraout_var,bVar1) == 0) {
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
//  _strncmp
// 
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  if (_MaxCount != 0) {
    pcVar2 = _Str1 + -(int)_Str2;
    uVar3 = (uint)_Str2 & 3;
    while( true ) {
      if (uVar3 == 0) {
        while ((((int)_Str2 + (int)pcVar2 & 0xfffU) < 0xffd &&
               (uVar3 = *(uint *)((int)_Str2 + (int)pcVar2), uVar3 == *(uint *)_Str2))) {
          bVar4 = _MaxCount < 4;
          _MaxCount = _MaxCount - 4;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          _Str2 = (char *)((int)_Str2 + 4);
          if ((~uVar3 & uVar3 + 0xfefefeff & 0x80808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = *(byte *)((int)_Str2 + (int)pcVar2);
      if (bVar1 != *_Str2) {
        return -(uint)(bVar1 < (byte)*_Str2) | 1;
      }
      uVar3 = _MaxCount;
      if (bVar1 == 0) {
        uVar3 = (uint)bVar1;
      }
      _Str2 = (char *)((int)_Str2 + 1);
      _MaxCount = uVar3 - 1;
      if (uVar3 == 0 || _MaxCount == 0) break;
      uVar3 = (uint)_Str2 & 3;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __strnicmp
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

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
//  ___dcrt_lowio_initialize_console_output
// 
// Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release

void ___dcrt_lowio_initialize_console_output(void)

{
  DAT_00418e70 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



SIZE_T __cdecl FUN_0040bfaa(LPCVOID param_1)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00402c77();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_0041993c,0,param_1);
  return SVar2;
}



// Library Function - Single Match
//  _abort
// 
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
    }
    FUN_00402b1a(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  int __cdecl GetTableIndexFromLocaleName(wchar_t const *)
//  int __cdecl ATL::_AtlGetTableIndexFromLocaleName(wchar_t const *)
//  _GetTableIndexFromLocaleName
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 __cdecl FID_conflict_GetTableIndexFromLocaleName(wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0xe3;
  do {
    iVar3 = (iVar2 + iVar4) / 2;
    iVar1 = __wcsnicmp(param_1,(wchar_t *)(&PTR_DAT_00413368)[iVar3 * 2],0x55);
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
//  unsigned long __cdecl ATL::_AtlDownlevelLocaleNameToLCID(wchar_t const *)
//  ___acrt_DownlevelLocaleNameToLCID
//  ___crtDownlevelLocaleNameToLCID
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 __cdecl FID_conflict__AtlDownlevelLocaleNameToLCID(wchar_t *param_1)

{
  uint uVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    uVar1 = FID_conflict_GetTableIndexFromLocaleName(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_00412c48 + uVar1 * 8);
    }
  }
  return 0;
}



void __cdecl
FUN_0040c096(wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,int param_6)

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



// Library Function - Single Match
//  __wcsnicmp
// 
// Library: Visual Studio 2019 Release

int __cdecl __wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  wchar_t *pwVar4;
  
  iVar2 = 0;
  if (_MaxCount != 0) {
    pwVar4 = (wchar_t *)((int)_Str1 - (int)_Str2);
    do {
      uVar3 = *(ushort *)((int)pwVar4 + (int)_Str2);
      if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
        uVar3 = uVar3 + 0x20;
      }
      uVar1 = *_Str2;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20;
      }
      _Str2 = (wchar_t *)((ushort *)_Str2 + 1);
      _MaxCount = _MaxCount - 1;
    } while (((_MaxCount != 0) && (uVar3 != 0)) && (uVar3 == uVar1));
    iVar2 = (uint)uVar3 - (uint)uVar1;
  }
  return iVar2;
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// Library Function - Single Match
//  __alloca_probe_16
// 
// Library: Visual Studio

uint __alloca_probe_16(undefined1 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// Library Function - Single Match
//  __alloca_probe_8
// 
// Library: Visual Studio

uint __alloca_probe_8(undefined1 param_1)

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
  HANDLE pvVar3;
  ushort *lpMem;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  ulong *puVar7;
  BOOL BVar8;
  uint uVar9;
  ushort *puVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  DWORD DVar15;
  SIZE_T dwBytes;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_c;
  int local_8;
  
  uVar9 = 0;
  local_c = 0;
  lVar13 = FUN_00404ed4((uint)param_1,0,0,1);
  if (lVar13 == -1) goto LAB_0040c204;
  lVar14 = FUN_00404ed4((uint)param_1,0,0,2);
  iVar5 = (int)((ulonglong)lVar14 >> 0x20);
  if (lVar14 == -1) goto LAB_0040c204;
  puVar10 = (ushort *)(param_2 - (uint)lVar14);
  uVar1 = (uint)(param_2 < (uint)lVar14);
  iVar2 = param_3 - iVar5;
  local_8 = iVar2 - uVar1;
  if ((local_8 < 0) ||
     ((local_8 == 0 || (SBORROW4(param_3,iVar5) != SBORROW4(iVar2,uVar1)) != local_8 < 0 &&
      (puVar10 == (ushort *)0x0)))) {
    if ((local_8 < 1) && (local_8 < 0)) {
      lVar14 = FUN_00404ed4((uint)param_1,param_2,param_3,0);
      if (lVar14 == -1) goto LAB_0040c204;
      pvVar3 = (HANDLE)FUN_00409c84((uint)param_1);
      BVar8 = SetEndOfFile(pvVar3);
      uVar9 = (BVar8 != 0) - 1;
      local_c = (int)uVar9 >> 0x1f;
      if ((uVar9 & local_c) == 0xffffffff) {
        piVar4 = __errno();
        *piVar4 = 0xd;
        puVar7 = ___doserrno();
        DVar15 = GetLastError();
        *puVar7 = DVar15;
        goto LAB_0040c303;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar15 = 8;
    pvVar3 = GetProcessHeap();
    lpMem = (ushort *)HeapAlloc(pvVar3,DVar15,dwBytes);
    if (lpMem == (ushort *)0x0) {
      piVar4 = __errno();
      *piVar4 = 0xc;
      goto LAB_0040c204;
    }
    iVar5 = __setmode_nolock((int)param_1,0x8000);
    while( true ) {
      puVar6 = puVar10;
      if ((-1 < local_8) && ((0 < local_8 || ((ushort *)0xfff < puVar10)))) {
        puVar6 = (ushort *)0x1000;
      }
      puVar6 = (ushort *)FUN_00406373(param_1,lpMem,puVar6);
      if (puVar6 == (ushort *)0xffffffff) break;
      bVar11 = puVar10 < puVar6;
      puVar10 = (ushort *)((int)puVar10 - (int)puVar6);
      bVar12 = SBORROW4(local_8,(int)puVar6 >> 0x1f);
      iVar2 = local_8 - ((int)puVar6 >> 0x1f);
      local_8 = iVar2 - (uint)bVar11;
      if ((local_8 < 0) ||
         ((local_8 == 0 || (bVar12 != SBORROW4(iVar2,(uint)bVar11)) != local_8 < 0 &&
          (puVar10 == (ushort *)0x0)))) goto LAB_0040c27e;
    }
    puVar7 = ___doserrno();
    if (*puVar7 == 5) {
      piVar4 = __errno();
      *piVar4 = 0xd;
    }
    uVar9 = 0xffffffff;
    local_c = 0xffffffff;
LAB_0040c27e:
    __setmode_nolock((int)param_1,iVar5);
    DVar15 = 0;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,DVar15,lpMem);
LAB_0040c303:
    if ((uVar9 & local_c) == 0xffffffff) goto LAB_0040c204;
  }
  local_18 = (undefined4)((ulonglong)lVar13 >> 0x20);
  local_1c = (undefined4)lVar13;
  lVar13 = FUN_00404ed4((uint)param_1,local_1c,local_18,0);
  if (lVar13 != -1) {
    return 0;
  }
LAB_0040c204:
  piVar4 = __errno();
  return *piVar4;
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
//  __setmode_nolock
// 
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
  return (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
}



// Library Function - Single Match
//  ___ascii_strnicmp
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

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
  ushort uVar1;
  undefined2 extraout_var;
  uint uVar2;
  undefined2 extraout_var_00;
  int *piVar3;
  int iVar4;
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
      uVar2 = local_1c[0]->pctype[param_1] & 1;
    }
    else {
      uVar1 = FUN_0040b35c(param_1,1,local_1c);
      uVar2 = CONCAT22(extraout_var,uVar1);
    }
    if (uVar2 == 0) {
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
       (uVar1 = FUN_00408e03((int)param_1 >> 8 & 0xff,local_1c),
       CONCAT22(extraout_var_00,uVar1) == 0)) {
      piVar3 = __errno();
      iVar4 = 1;
      *piVar3 = 0x2a;
      local_7 = '\0';
      local_8 = (CHAR)param_1;
    }
    else {
      local_6 = 0;
      iVar4 = 2;
      local_8 = (CHAR)(param_1 >> 8);
      local_7 = (CHAR)param_1;
    }
    iVar4 = FUN_0040b1c0(local_1c,local_1c[0]->locale_name[2],0x100,&local_8,iVar4,(LPWSTR)&local_c,
                         3,local_1c[0]->lc_codepage,1);
    if (iVar4 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
    }
    else {
      if (iVar4 == 1) {
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
//  _tolower
// 
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
  undefined extraout_DL;
  undefined in_stack_ffffffd0;
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
  FUN_00402d4b(&stack0xffffffd0,param_3);
  FUN_0040d344(local_14,&local_1c,param_2,0,0,0,0,(int *)&stack0xffffffd0);
  if (local_20 != (char **)0x0) {
    *local_20 = local_1c;
  }
  FUN_0040cdd2(local_14,local_18);
  if (local_24 != '\0') {
    *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
  }
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,extraout_DL,in_stack_ffffffd0);
  return;
}



void __cdecl FUN_0040c739(uint *param_1,char *param_2,pthreadlocinfo *param_3)

{
  undefined extraout_DL;
  undefined in_stack_ffffffd4;
  int local_24;
  char local_20;
  char *local_1c;
  undefined4 local_18;
  ushort local_14 [6];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_00402d4b(&stack0xffffffd4,param_3);
  local_18 = FUN_0040d344(local_14,&local_1c,param_2,0,0,0,0,(int *)&stack0xffffffd4);
  FUN_0040c860(local_14,param_1);
  if (local_20 != '\0') {
    *(uint *)(local_24 + 0x70) = *(uint *)(local_24 + 0x70) & 0xfffffffd;
  }
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,extraout_DL,in_stack_ffffffd4);
  return;
}



void __cdecl FUN_0040c7c7(uint *param_1,char *param_2,pthreadlocinfo *param_3)

{
  FUN_0040c695(param_1,param_2,param_3,(char **)0x0);
  return;
}



// Library Function - Single Match
//  __fpmath
// 
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
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
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
  uVar11 = uVar1 & 0x7fff;
  uVar16 = *(uint *)(param_1 + 3);
  puVar12 = (uint *)(uVar11 - 0x3fff);
  local_14[0] = uVar16;
  uVar17 = *(uint *)(param_1 + 1);
  local_14[1] = uVar17;
  uVar2 = *param_1;
  local_14[2] = (uint)uVar2 << 0x10;
  bVar3 = (byte)DAT_00418ea4;
  if (puVar12 == (uint *)0xffffc001) {
    iVar15 = 0;
    iVar14 = 0;
    do {
      if (local_14[iVar14] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        goto LAB_0040c8d5;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
  }
  else {
    iVar6 = DAT_00418ea0 + -1;
    bVar5 = false;
    iVar15 = (int)((DAT_00418ea0 >> 0x1f & 0x1fU) + DAT_00418ea0) >> 5;
    bVar8 = 0x1f - ((byte)DAT_00418ea0 & 0x1f);
    if ((local_14[iVar15] & 1 << (bVar8 & 0x1f)) != 0) {
      uVar7 = local_14[iVar15] & ~(-1 << (bVar8 & 0x1f));
      iVar13 = iVar15;
      while (uVar7 == 0) {
        iVar13 = iVar13 + 1;
        if (2 < iVar13) goto LAB_0040c9d5;
        uVar7 = local_14[iVar13];
      }
      iVar13 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
      bVar5 = false;
      uVar7 = 1 << (0x1f - ((byte)iVar6 & 0x1f) & 0x1f);
      uVar9 = uVar7 + local_14[iVar13];
      bVar4 = false;
      if ((uVar9 < local_14[iVar13]) || (uVar9 < uVar7)) {
        bVar4 = true;
        bVar5 = true;
      }
      local_14[iVar13] = uVar9;
      while ((iVar13 = iVar13 + -1, -1 < iVar13 && (bVar4))) {
        bVar4 = false;
        bVar5 = false;
        uVar7 = local_14[iVar13] + 1;
        if ((uVar7 < local_14[iVar13]) || (uVar7 == 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        local_14[iVar13] = uVar7;
      }
    }
LAB_0040c9d5:
    local_14[iVar15] = local_14[iVar15] & -1 << (bVar8 & 0x1f);
    iVar15 = iVar15 + 1;
    if (iVar15 < 3) {
      iVar13 = 3 - iVar15;
      puVar10 = local_14 + iVar15;
      while (iVar13 != 0) {
        iVar13 = iVar13 + -1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    puVar10 = puVar12;
    if (bVar5) {
      puVar10 = (uint *)(uVar11 - 0x3ffe);
    }
    if ((int)puVar10 < (int)((int)DAT_00418e9c - DAT_00418ea0)) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
      puVar12 = DAT_00418e9c;
    }
    else {
      if ((int)DAT_00418e9c < (int)puVar10) {
        if ((int)puVar10 < _DAT_00418e98) {
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar15 = DAT_00418eac + (int)puVar10;
          iVar14 = (int)(DAT_00418ea4 + (DAT_00418ea4 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_24 = 0;
          iVar6 = 0;
          do {
            uVar16 = local_14[iVar6] >> bVar8 | local_24;
            local_24 = (local_14[iVar6] & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_14[iVar6] = uVar16;
            iVar6 = iVar6 + 1;
          } while (iVar6 < 3);
          puVar12 = local_14 + (2 - iVar14);
          iVar6 = 2;
          do {
            if (iVar6 < iVar14) {
              local_14[iVar6] = 0;
            }
            else {
              local_14[iVar6] = *puVar12;
            }
            puVar12 = puVar12 + -1;
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar15 = (int)(DAT_00418ea4 + (DAT_00418ea4 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_24 = 0;
          do {
            uVar16 = local_14[iVar14] >> bVar8 | local_24;
            local_24 = (local_14[iVar14] & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_14[iVar14] = uVar16;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          puVar12 = local_14 + (2 - iVar15);
          iVar14 = 2;
          do {
            if (iVar14 < iVar15) {
              local_14[iVar14] = 0;
            }
            else {
              local_14[iVar14] = *puVar12;
            }
            puVar12 = puVar12 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar15 = DAT_00418eac + _DAT_00418e98;
        }
        goto LAB_0040cd86;
      }
      puVar12 = (uint *)((int)DAT_00418e9c - (int)puVar12);
      local_14[0] = uVar16;
      iVar15 = (int)((int)puVar12 + ((int)puVar12 >> 0x1f & 0x1fU)) >> 5;
      local_14[1] = uVar17;
      local_14[2] = (uint)uVar2 << 0x10;
      bVar8 = (byte)puVar12 & 0x1f;
      local_24 = 0;
      do {
        uVar16 = local_14[iVar14] >> bVar8 | local_24;
        local_24 = (local_14[iVar14] & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_14[iVar14] = uVar16;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
      puVar12 = local_14 + (2 - iVar15);
      iVar14 = 2;
      do {
        if (iVar14 < iVar15) {
          local_14[iVar14] = 0;
        }
        else {
          local_14[iVar14] = *puVar12;
        }
        puVar12 = puVar12 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      iVar14 = (int)((DAT_00418ea0 >> 0x1f & 0x1fU) + DAT_00418ea0) >> 5;
      bVar8 = 0x1f - ((byte)DAT_00418ea0 & 0x1f);
      if ((local_14[iVar14] & 1 << (bVar8 & 0x1f)) != 0) {
        uVar16 = local_14[iVar14] & ~(-1 << (bVar8 & 0x1f));
        iVar15 = iVar14;
        while (uVar16 == 0) {
          iVar15 = iVar15 + 1;
          if (2 < iVar15) goto LAB_0040cb90;
          uVar16 = local_14[iVar15];
        }
        iVar15 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
        uVar16 = 1 << (0x1f - ((byte)iVar6 & 0x1f) & 0x1f);
        bVar5 = false;
        uVar17 = uVar16 + local_14[iVar15];
        if ((uVar17 < local_14[iVar15]) || (uVar17 < uVar16)) {
          bVar5 = true;
        }
        local_14[iVar15] = uVar17;
        while ((iVar15 = iVar15 + -1, -1 < iVar15 && (bVar5))) {
          bVar5 = false;
          uVar16 = local_14[iVar15] + 1;
          if ((uVar16 < local_14[iVar15]) || (uVar16 == 0)) {
            bVar5 = true;
          }
          local_14[iVar15] = uVar16;
        }
      }
LAB_0040cb90:
      local_14[iVar14] = local_14[iVar14] & -1 << (bVar8 & 0x1f);
      iVar14 = iVar14 + 1;
      if (iVar14 < 3) {
        iVar15 = 3 - iVar14;
        puVar12 = local_14 + iVar14;
        while (iVar15 != 0) {
          iVar15 = iVar15 + -1;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      iVar15 = DAT_00418ea4 + 1;
      iVar14 = (int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar15 & 0x1f;
      local_24 = 0;
      local_38 = 0;
      do {
        uVar16 = local_14[local_38];
        local_14[local_38] = uVar16 >> bVar8 | local_24;
        local_24 = (uVar16 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_38 = local_38 + 1;
      } while (local_38 < 3);
      puVar12 = local_14 + (2 - iVar14);
      iVar15 = 2;
      do {
        if (iVar15 < iVar14) {
          local_14[iVar15] = 0;
        }
        else {
          local_14[iVar15] = *puVar12;
        }
        puVar12 = puVar12 + -1;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
LAB_0040c8d5:
    iVar15 = 0;
  }
LAB_0040cd86:
  uVar16 = iVar15 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           local_14[0];
  if (DAT_00418ea8 == 0x40) {
    param_2[1] = uVar16;
    *param_2 = local_14[1];
  }
  else {
    if (DAT_00418ea8 == 0x20) {
      *param_2 = uVar16;
    }
  }
  FUN_00404f47(local_14[3] ^ (uint)&stack0xfffffffc,(char)puVar12,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040cdd2(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
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
  uVar11 = uVar1 & 0x7fff;
  uVar16 = *(uint *)(param_1 + 3);
  puVar12 = (uint *)(uVar11 - 0x3fff);
  local_14[0] = uVar16;
  uVar17 = *(uint *)(param_1 + 1);
  local_14[1] = uVar17;
  uVar2 = *param_1;
  local_14[2] = (uint)uVar2 << 0x10;
  bVar3 = (byte)DAT_00418ebc;
  if (puVar12 == (uint *)0xffffc001) {
    iVar15 = 0;
    iVar14 = 0;
    do {
      if (local_14[iVar14] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        goto LAB_0040ce47;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
  }
  else {
    iVar6 = DAT_00418eb8 + -1;
    bVar5 = false;
    iVar15 = (int)((DAT_00418eb8 >> 0x1f & 0x1fU) + DAT_00418eb8) >> 5;
    bVar8 = 0x1f - ((byte)DAT_00418eb8 & 0x1f);
    if ((local_14[iVar15] & 1 << (bVar8 & 0x1f)) != 0) {
      uVar7 = local_14[iVar15] & ~(-1 << (bVar8 & 0x1f));
      iVar13 = iVar15;
      while (uVar7 == 0) {
        iVar13 = iVar13 + 1;
        if (2 < iVar13) goto LAB_0040cf47;
        uVar7 = local_14[iVar13];
      }
      iVar13 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
      bVar5 = false;
      uVar7 = 1 << (0x1f - ((byte)iVar6 & 0x1f) & 0x1f);
      uVar9 = uVar7 + local_14[iVar13];
      bVar4 = false;
      if ((uVar9 < local_14[iVar13]) || (uVar9 < uVar7)) {
        bVar4 = true;
        bVar5 = true;
      }
      local_14[iVar13] = uVar9;
      while ((iVar13 = iVar13 + -1, -1 < iVar13 && (bVar4))) {
        bVar4 = false;
        bVar5 = false;
        uVar7 = local_14[iVar13] + 1;
        if ((uVar7 < local_14[iVar13]) || (uVar7 == 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        local_14[iVar13] = uVar7;
      }
    }
LAB_0040cf47:
    local_14[iVar15] = local_14[iVar15] & -1 << (bVar8 & 0x1f);
    iVar15 = iVar15 + 1;
    if (iVar15 < 3) {
      iVar13 = 3 - iVar15;
      puVar10 = local_14 + iVar15;
      while (iVar13 != 0) {
        iVar13 = iVar13 + -1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    puVar10 = puVar12;
    if (bVar5) {
      puVar10 = (uint *)(uVar11 - 0x3ffe);
    }
    if ((int)puVar10 < (int)((int)DAT_00418eb4 - DAT_00418eb8)) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
      puVar12 = DAT_00418eb4;
    }
    else {
      if ((int)DAT_00418eb4 < (int)puVar10) {
        if ((int)puVar10 < _DAT_00418eb0) {
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar15 = DAT_00418ec4 + (int)puVar10;
          iVar14 = (int)(DAT_00418ebc + (DAT_00418ebc >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_24 = 0;
          iVar6 = 0;
          do {
            uVar16 = local_14[iVar6] >> bVar8 | local_24;
            local_24 = (local_14[iVar6] & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_14[iVar6] = uVar16;
            iVar6 = iVar6 + 1;
          } while (iVar6 < 3);
          puVar12 = local_14 + (2 - iVar14);
          iVar6 = 2;
          do {
            if (iVar6 < iVar14) {
              local_14[iVar6] = 0;
            }
            else {
              local_14[iVar6] = *puVar12;
            }
            puVar12 = puVar12 + -1;
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar15 = (int)(DAT_00418ebc + (DAT_00418ebc >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_24 = 0;
          do {
            uVar16 = local_14[iVar14] >> bVar8 | local_24;
            local_24 = (local_14[iVar14] & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_14[iVar14] = uVar16;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          puVar12 = local_14 + (2 - iVar15);
          iVar14 = 2;
          do {
            if (iVar14 < iVar15) {
              local_14[iVar14] = 0;
            }
            else {
              local_14[iVar14] = *puVar12;
            }
            puVar12 = puVar12 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar15 = DAT_00418ec4 + _DAT_00418eb0;
        }
        goto LAB_0040d2f8;
      }
      puVar12 = (uint *)((int)DAT_00418eb4 - (int)puVar12);
      local_14[0] = uVar16;
      iVar15 = (int)((int)puVar12 + ((int)puVar12 >> 0x1f & 0x1fU)) >> 5;
      local_14[1] = uVar17;
      local_14[2] = (uint)uVar2 << 0x10;
      bVar8 = (byte)puVar12 & 0x1f;
      local_24 = 0;
      do {
        uVar16 = local_14[iVar14] >> bVar8 | local_24;
        local_24 = (local_14[iVar14] & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_14[iVar14] = uVar16;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
      puVar12 = local_14 + (2 - iVar15);
      iVar14 = 2;
      do {
        if (iVar14 < iVar15) {
          local_14[iVar14] = 0;
        }
        else {
          local_14[iVar14] = *puVar12;
        }
        puVar12 = puVar12 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      iVar14 = (int)((DAT_00418eb8 >> 0x1f & 0x1fU) + DAT_00418eb8) >> 5;
      bVar8 = 0x1f - ((byte)DAT_00418eb8 & 0x1f);
      if ((local_14[iVar14] & 1 << (bVar8 & 0x1f)) != 0) {
        uVar16 = local_14[iVar14] & ~(-1 << (bVar8 & 0x1f));
        iVar15 = iVar14;
        while (uVar16 == 0) {
          iVar15 = iVar15 + 1;
          if (2 < iVar15) goto LAB_0040d102;
          uVar16 = local_14[iVar15];
        }
        iVar15 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
        uVar16 = 1 << (0x1f - ((byte)iVar6 & 0x1f) & 0x1f);
        bVar5 = false;
        uVar17 = uVar16 + local_14[iVar15];
        if ((uVar17 < local_14[iVar15]) || (uVar17 < uVar16)) {
          bVar5 = true;
        }
        local_14[iVar15] = uVar17;
        while ((iVar15 = iVar15 + -1, -1 < iVar15 && (bVar5))) {
          bVar5 = false;
          uVar16 = local_14[iVar15] + 1;
          if ((uVar16 < local_14[iVar15]) || (uVar16 == 0)) {
            bVar5 = true;
          }
          local_14[iVar15] = uVar16;
        }
      }
LAB_0040d102:
      local_14[iVar14] = local_14[iVar14] & -1 << (bVar8 & 0x1f);
      iVar14 = iVar14 + 1;
      if (iVar14 < 3) {
        iVar15 = 3 - iVar14;
        puVar12 = local_14 + iVar14;
        while (iVar15 != 0) {
          iVar15 = iVar15 + -1;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      iVar15 = DAT_00418ebc + 1;
      iVar14 = (int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar15 & 0x1f;
      local_24 = 0;
      local_38 = 0;
      do {
        uVar16 = local_14[local_38];
        local_14[local_38] = uVar16 >> bVar8 | local_24;
        local_24 = (uVar16 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_38 = local_38 + 1;
      } while (local_38 < 3);
      puVar12 = local_14 + (2 - iVar14);
      iVar15 = 2;
      do {
        if (iVar15 < iVar14) {
          local_14[iVar15] = 0;
        }
        else {
          local_14[iVar15] = *puVar12;
        }
        puVar12 = puVar12 + -1;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
LAB_0040ce47:
    iVar15 = 0;
  }
LAB_0040d2f8:
  uVar16 = iVar15 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           local_14[0];
  if (DAT_00418ec0 == 0x40) {
    param_2[1] = uVar16;
    *param_2 = local_14[1];
  }
  else {
    if (DAT_00418ec0 == 0x20) {
      *param_2 = uVar16;
    }
  }
  FUN_00404f47(local_14[3] ^ (uint)&stack0xfffffffc,(char)puVar12,0);
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
  undefined4 extraout_EDX;
  char *pcVar17;
  undefined **ppuVar18;
  ushort *puVar19;
  undefined4 uVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  undefined4 uVar26;
  ushort uVar27;
  char *pcVar28;
  int iVar29;
  uint uVar30;
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
  undefined4 local_40;
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
  pcVar28 = local_24;
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
    pcVar17 = param_3;
    iVar22 = 0;
    local_59 = *pcVar17;
    param_3 = pcVar17 + 1;
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
        pcVar17 = local_54;
        if (local_59 == '0') goto LAB_0040d412;
        goto LAB_0040d6a4;
      }
      break;
    case 3:
      while (('/' < local_59 && (local_59 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar28 = local_59 + -0x30;
          pcVar28 = pcVar28 + 1;
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
        iVar22 = 0;
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
          *pcVar28 = local_59 + -0x30;
          pcVar28 = pcVar28 + 1;
          local_58 = local_58 + -1;
        }
        local_59 = *param_3;
        param_3 = param_3 + 1;
      }
      iVar22 = 0;
      if ((local_59 == '+') || (local_59 == '-')) {
LAB_0040d47e:
        bVar3 = true;
        iVar10 = 0xb;
        param_3 = param_3 + -1;
      }
      else {
        if ((local_59 < 'D') || (('E' < local_59 && (1 < (byte)(local_59 + 0x9cU))))) {
          pcVar17 = param_3 + -1;
          goto LAB_0040d6a4;
        }
LAB_0040d477:
        bVar3 = true;
        iVar10 = 6;
      }
      goto LAB_0040d3c4;
    case 5:
      bVar5 = true;
      pcVar17 = local_54;
      if ((byte)(local_59 - 0x30U) < 10) {
        iVar10 = 4;
        goto LAB_0040d3e3;
      }
      goto LAB_0040d6a4;
    case 6:
      local_54 = pcVar17 + -1;
      if ((byte)(local_59 - 0x31U) < 9) goto LAB_0040d5c1;
      if (local_59 == '+') goto LAB_0040d5f2;
      if (local_59 == '-') {
        iVar10 = 7;
        local_70 = -1;
      }
      else {
LAB_0040d5d7:
        pcVar17 = local_54;
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
      iVar22 = 0;
      bVar4 = true;
      goto LAB_0040d682;
    default:
      goto switchD_0040d3d3_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_54 = pcVar17;
        if (local_59 == '+') {
LAB_0040d5f2:
          iVar10 = 7;
        }
        else {
          if (local_59 != '-') goto LAB_0040d6a4;
          local_70 = -1;
          iVar10 = 7;
        }
        goto LAB_0040d3c4;
      }
      iVar10 = 10;
      param_3 = pcVar17;
switchD_0040d3d3_caseD_a:
      pcVar17 = param_3;
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
  uVar20 = extraout_EDX;
  goto LAB_0040daab;
LAB_0040d682:
  if ((local_59 < '0') || ('9' < local_59)) goto LAB_0040d69b;
  iVar22 = local_59 + -0x30 + iVar22 * 10;
  if (iVar22 < 0x1451) {
    local_59 = *param_3;
    param_3 = param_3 + 1;
    goto LAB_0040d682;
  }
  iVar22 = 0x1451;
LAB_0040d69b:
  while (('/' < local_59 && (local_59 < ':'))) {
    local_59 = *param_3;
    param_3 = param_3 + 1;
  }
LAB_0040d6a0:
  pcVar17 = param_3 + -1;
LAB_0040d6a4:
  *param_2 = pcVar17;
  if (bVar3) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar28 = pcVar28 + -1;
      local_58 = local_58 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) {
      uVar14 = 0;
      uVar21 = 0;
      uVar26 = 0;
      uVar20 = 0;
    }
    else {
      pcVar28 = pcVar28 + -1;
      cVar1 = *pcVar28;
      while (cVar1 == '\0') {
        local_50 = local_50 - 1;
        local_58 = local_58 + 1;
        pcVar28 = pcVar28 + -1;
        cVar1 = *pcVar28;
      }
      FUN_0040e5b1(local_24,local_50,&local_40);
      if (local_70 < 0) {
        iVar22 = -iVar22;
      }
      uVar23 = iVar22 + local_58;
      if (!bVar4) {
        uVar23 = uVar23 + param_5;
      }
      if (!bVar5) {
        uVar23 = uVar23 - param_6;
      }
      if (0x1450 < (int)uVar23) {
        uVar21 = 0x7fff;
        uVar26 = 0x80000000;
        goto LAB_0040da91;
      }
      if ((int)uVar23 < -0x1450) {
        uVar14 = 0;
        uVar21 = 0;
        uVar26 = 0;
        uVar20 = 0;
      }
      else {
        ppuVar18 = &PTR_DAT_00418e68;
        if (uVar23 != 0) {
          if ((int)uVar23 < 0) {
            uVar23 = -uVar23;
            ppuVar18 = (undefined **)0x418fc8;
          }
          if (param_4 == 0) {
            local_40._0_2_ = 0;
          }
LAB_0040da4a:
          do {
            iVar10 = 0;
            if (uVar23 == 0) break;
            ppuVar18 = ppuVar18 + 0x15;
            uVar24 = (int)uVar23 >> 3;
            uVar12 = uVar23 & 7;
            uVar23 = uVar24;
            if (uVar12 != 0) {
              ppuVar15 = ppuVar18 + uVar12 * 3;
              ppuVar16 = ppuVar15;
              if (0x7fff < *(ushort *)ppuVar15) {
                ppuVar16 = (undefined **)&local_4c;
                local_4c = SUB42(*ppuVar15,0);
                uStack74 = (undefined2)((uint)*ppuVar15 >> 0x10);
                uStack72 = SUB42(ppuVar15[1],0);
                uStack70 = (undefined2)((uint)ppuVar15[1] >> 0x10);
                local_44 = ppuVar15[2];
                iVar22 = CONCAT22(uStack72,uStack74) + -1;
                uStack74 = (undefined2)iVar22;
                uStack72 = (undefined2)((uint)iVar22 >> 0x10);
              }
              uVar14 = (*(ushort *)((int)ppuVar16 + 10) ^ uStack54) & 0x8000;
              local_30 = 0;
              uStack47 = 0;
              uStack46 = 0;
              uVar9 = uStack54 & 0x7fff;
              local_2c[0] = 0;
              uVar27 = *(ushort *)((int)ppuVar16 + 10) & 0x7fff;
              uVar21 = uVar27 + uVar9;
              local_2c[1] = uStack46;
              local_2c[2] = local_2c[0];
              local_2c[3] = uStack46;
              if (((uVar9 < 0x7fff) && (uVar27 < 0x7fff)) && (uVar21 < 0xbffe)) {
                uVar7 = local_2c[0];
                uVar8 = uStack46;
                if (0x3fbf < uVar21) {
                  if (((uVar9 == 0) &&
                      (uVar21 = uVar21 + 1, (CONCAT22(uStack54,uStack56) & 0x7fffffff) == 0)) &&
                     ((CONCAT22(uStack58,uStack60) == 0 &&
                      (CONCAT22(local_40._2_2_,(ushort)local_40) == 0)))) {
                    uStack54 = 0;
                    goto LAB_0040da4a;
                  }
                  if (((uVar27 != 0) || (uVar21 = uVar21 + 1, ((uint)ppuVar16[2] & 0x7fffffff) != 0)
                      ) || ((ppuVar16[1] != (undefined *)0x0 ||
                            (uVar7 = local_2c[0], uVar8 = uStack46, *ppuVar16 != (undefined *)0x0)))
                     ) {
                    puVar19 = local_2c;
                    local_6c = 5;
                    iVar22 = iVar10;
                    do {
                      if (0 < (int)local_6c) {
                        puVar25 = (ushort *)((int)&local_40 + iVar22 * 2);
                        local_68 = ppuVar16 + 2;
                        iVar29 = local_6c;
                        do {
                          uVar12 = (uint)*puVar25 * (uint)*(ushort *)local_68 +
                                   *(int *)(puVar19 + -2);
                          if ((uVar12 < *(uint *)(puVar19 + -2)) ||
                             (iVar13 = iVar10, uVar12 < (uint)*puVar25 * (uint)*(ushort *)local_68))
                          {
                            iVar13 = 1;
                          }
                          *(uint *)(puVar19 + -2) = uVar12;
                          if (iVar13 != 0) {
                            *puVar19 = *puVar19 + 1;
                          }
                          local_68 = (undefined **)((int)local_68 + -2);
                          puVar25 = puVar25 + 1;
                          iVar29 = iVar29 + -1;
                        } while (0 < iVar29);
                      }
                      puVar19 = puVar19 + 1;
                      iVar22 = iVar22 + 1;
                      local_6c = local_6c + -1;
                    } while (0 < (int)local_6c);
                    local_54 = (char *)CONCAT22(local_2c[3],local_2c[2]);
                    uVar21 = uVar21 + 0xc002;
                    uVar12 = CONCAT22(uStack46,CONCAT11(uStack47,local_30));
                    if ((short)uVar21 < 1) {
LAB_0040d919:
                      uVar21 = uVar21 - 1;
                      if (-1 < (short)uVar21) goto LAB_0040d982;
                      local_6c = (uint)(ushort)-uVar21;
                      uVar21 = 0;
                      uVar24 = (uint)local_54;
                      do {
                        if ((local_30 & 1) != 0) {
                          iVar10 = iVar10 + 1;
                        }
                        uVar2 = CONCAT22(local_2c[1],local_2c[0]);
                        local_2c[1] = local_2c[1] >> 1 | (ushort)((uVar24 << 0x1f) >> 0x10);
                        uVar30 = uVar12 >> 1;
                        local_54 = (char *)(uVar24 >> 1);
                        uVar12 = uVar30 | uVar2 << 0x1f;
                        local_6c = local_6c - 1;
                        local_2c[2] = (ushort)local_54;
                        local_2c[3] = (ushort)(uVar24 >> 0x11);
                        local_2c[0] = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar30;
                        uStack47 = (undefined)(uVar30 >> 8);
                        uStack46 = (ushort)(uVar12 >> 0x10);
                        uVar24 = (uint)local_54;
                      } while (local_6c != 0);
                      if (iVar10 == 0) goto LAB_0040d982;
                      uVar9 = (ushort)uVar30 | 1;
                      local_30 = (byte)uVar9;
                      uVar12 = uVar30 | 1;
                    }
                    else {
                      do {
                        if ((int)local_54 < 0) break;
                        iVar22 = CONCAT22(local_2c[1],local_2c[0]) * 2;
                        uVar9 = local_2c[1] >> 0xf;
                        local_2c[0] = (ushort)iVar22 | (ushort)(uVar12 >> 0x1f);
                        uVar12 = uVar12 * 2;
                        local_2c[1] = (ushort)((uint)iVar22 >> 0x10);
                        uVar24 = (int)local_54 * 2;
                        local_30 = (byte)uVar12;
                        uStack47 = (undefined)(uVar12 >> 8);
                        uStack46 = (ushort)(uVar12 >> 0x10);
                        local_54 = (char *)(uVar24 | uVar9);
                        uVar21 = uVar21 - 1;
                        local_2c[2] = (ushort)local_54;
                        local_2c[3] = (ushort)(uVar24 >> 0x10);
                      } while (0 < (short)uVar21);
                      if ((short)uVar21 < 1) goto LAB_0040d919;
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
                            uVar21 = uVar21 + 1;
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
                    if (uVar21 < 0x7fff) {
                      local_40._0_2_ = uStack46;
                      local_40._2_2_ = local_2c[0];
                      uStack60 = local_2c[1];
                      uStack58 = SUB42(local_54,0);
                      uStack56 = (ushort)((uint)local_54 >> 0x10);
                      uStack54 = uVar21 | uVar14;
                    }
                    else {
                      uStack60 = 0;
                      uStack58 = 0;
                      local_40._0_2_ = 0;
                      local_40._2_2_ = 0;
                      iVar10 = ((uVar14 == 0) - 1 & 0x80000000) + 0x7fff8000;
                      uStack56 = (ushort)iVar10;
                      uStack54 = (ushort)((uint)iVar10 >> 0x10);
                    }
                    goto LAB_0040da4a;
                  }
                }
              }
              else {
                iVar10 = ((uVar14 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack56 = (ushort)iVar10;
                uStack54 = (ushort)((uint)iVar10 >> 0x10);
                uVar7 = uStack56;
                uVar8 = uStack54;
              }
              uStack54 = uVar8;
              uStack56 = uVar7;
              uStack60 = 0;
              uStack58 = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
          } while( true );
        }
        uVar20 = CONCAT22(uStack60,local_40._2_2_);
        uVar26 = CONCAT22(uStack56,uStack58);
        uVar21 = uStack54;
        uVar14 = (ushort)local_40;
      }
    }
  }
  else {
    uVar21 = 0;
    uVar26 = 0;
LAB_0040da91:
    uVar14 = 0;
    uVar20 = 0;
  }
  param_1[5] = uVar21 | uVar6;
  *param_1 = uVar14;
  *(undefined4 *)(param_1 + 1) = uVar20;
  *(undefined4 *)(param_1 + 3) = uVar26;
LAB_0040daab:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,(char)uVar20,(char)param_1);
  return;
}



void __cdecl
FUN_0040daec(double *param_1,char *param_2,size_t param_3,int param_4,int param_5,int param_6)

{
  __cfltcvt_l(param_1,param_2,param_3,param_4,param_5,param_6,(_locale_t)0x0);
  return;
}



// Library Function - Single Match
//  __cfltcvt_l
// 
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
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int iVar13;
  int local_30 [2];
  int local_28;
  char local_24;
  uint local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  int local_8;
  
  local_c = 0x3ff;
  local_8 = 0x30;
  FUN_00402d4b(local_30,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    iVar13 = 0x16;
  }
  else {
    *param_2 = 0;
    if (param_4 + 0xb < param_3) {
      local_18 = *param_1;
      if ((param_1[1] >> 0x14 & 0x7ff) == 0x7ff) {
        uVar3 = 0xffffffff;
        if (param_3 != 0xffffffff) {
          uVar3 = param_3 - 2;
        }
        iVar13 = FUN_0040deef(param_1,param_2 + 2,uVar3,param_4,0);
        if (iVar13 == 0) {
          if (param_2[2] == '-') {
            *param_2 = 0x2d;
            param_2 = param_2 + 1;
          }
          *param_2 = 0x30;
          param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
          pcVar4 = _strrchr(param_2 + 2,0x65);
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
            pcVar4[3] = '\0';
          }
          iVar13 = 0;
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
      iVar13 = (-(uint)(param_5 != 0) & 0xffffffe0) + 0x27;
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
      local_10 = (uint *)(param_2 + 3);
      puVar8 = (uint *)(param_2 + 4);
      if (param_4 == 0) {
        *(char *)local_10 = '\0';
      }
      else {
        *(char *)local_10 = ***(char ***)(local_30[0] + 0x84);
      }
      local_1c = param_1[1] & 0xfffff;
      local_14 = iVar13;
      if ((local_1c != 0) || (*param_1 != 0)) {
        param_2 = (undefined *)0xf0000;
        do {
          if ((int)param_4 < 1) break;
          uVar11 = __aullshr((byte)local_8,param_1[1] & (uint)param_2);
          uVar3 = (uint)(ushort)((short)uVar11 + 0x30);
          if (0x39 < uVar3) {
            uVar3 = uVar3 + iVar13;
          }
          *(char *)puVar8 = (char)uVar3;
          puVar8 = (uint *)((int)puVar8 + 1);
          param_2 = (undefined *)((uint)param_2 >> 4);
          local_8 = local_8 + -4;
          param_4 = param_4 - 1;
        } while (-1 < (short)local_8);
        if ((-1 < (short)local_8) &&
           (uVar11 = __aullshr((byte)local_8,param_1[1] & (uint)param_2), puVar1 = puVar8,
           8 < (ushort)uVar11)) {
          while( true ) {
            puVar5 = (uint *)((int)puVar1 + -1);
            if ((*(char *)puVar5 != 'f') && (*(char *)puVar5 != 'F')) break;
            *(char *)puVar5 = '0';
            puVar1 = puVar5;
          }
          if (puVar5 == local_10) {
            *(char *)((int)puVar1 + -2) = *(char *)((int)puVar1 + -2) + '\x01';
          }
          else {
            if (*(char *)puVar5 == '9') {
              *(char *)puVar5 = (char)local_14 + ':';
            }
            else {
              *(char *)puVar5 = *(char *)puVar5 + '\x01';
            }
          }
        }
      }
      if (0 < (int)param_4) {
        FUN_00407390(puVar8,0x30,param_4);
        puVar8 = (uint *)((int)puVar8 + param_4);
      }
      if (*(char *)local_10 == '\0') {
        puVar8 = local_10;
      }
      *(byte *)puVar8 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      uVar11 = __aullshr(0x34,param_1[1]);
      uVar3 = (uint)(uVar11 & 0x7ff);
      uVar6 = uVar3 - local_c;
      uVar3 = (uint)(uVar3 < local_c);
      uVar7 = -uVar3;
      if (uVar3 == 0) {
        *(char *)((int)puVar8 + 1) = '+';
      }
      else {
        *(char *)((int)puVar8 + 1) = '-';
        bVar10 = uVar6 != 0;
        uVar6 = -uVar6;
        uVar7 = -(uVar7 + bVar10);
      }
      pcVar9 = (char *)((int)puVar8 + 2);
      *pcVar9 = '0';
      pcVar4 = pcVar9;
      if (-1 < (int)uVar7) {
        if (((int)uVar7 < 1) && (uVar6 < 1000)) {
LAB_0040de8a:
          if (((int)uVar7 < 0) || (((int)uVar7 < 1 && (uVar6 < 100)))) goto LAB_0040dea9;
        }
        else {
          uVar12 = __alldvrm(uVar6,uVar7,1000,0);
          local_1c = (uint)((ulonglong)uVar12 >> 0x20);
          *pcVar9 = (char)uVar12 + '0';
          pcVar4 = (char *)((int)puVar8 + 3);
          uVar6 = extraout_ECX;
          if (pcVar4 == pcVar9) goto LAB_0040de8a;
        }
        uVar12 = __alldvrm(uVar6,uVar7,100,0);
        local_1c = (uint)((ulonglong)uVar12 >> 0x20);
        *pcVar4 = (char)uVar12 + '0';
        pcVar4 = pcVar4 + 1;
        uVar6 = extraout_ECX_00;
      }
LAB_0040dea9:
      if ((pcVar4 != pcVar9) || ((-1 < (int)uVar7 && ((0 < (int)uVar7 || (9 < uVar6)))))) {
        uVar12 = __alldvrm(uVar6,uVar7,10,0);
        *pcVar4 = (char)uVar12 + '0';
        pcVar4 = pcVar4 + 1;
        uVar6 = extraout_ECX_01;
      }
      iVar13 = 0;
      *pcVar4 = (char)uVar6 + '0';
      pcVar4[1] = '\0';
      goto LAB_0040ded9;
    }
    piVar2 = __errno();
    iVar13 = 0x22;
  }
  *piVar2 = iVar13;
  FUN_00402c77();
LAB_0040ded9:
  if (local_24 != '\0') {
    *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
  }
  return iVar13;
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
  undefined *puVar6;
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
      puVar6 = param_1;
      if (*param_5 == 0x2d) {
        *param_1 = 0x2d;
        puVar6 = param_1 + 1;
      }
      if (0 < param_3) {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        *puVar6 = *(undefined *)**(undefined4 **)(local_14[0] + 0x84);
      }
      _Dst = puVar6 + (uint)(param_6 == '\0') + param_3;
      puVar6 = (undefined *)0xffffffff;
      if (param_2 != 0xffffffff) {
        puVar6 = param_1 + (param_2 - (int)_Dst);
      }
      eVar4 = _strcpy_s(_Dst,(rsize_t)puVar6,"e+000");
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
        if (9 < iVar3) {
          iVar5 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar5;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
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
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined uVar4;
  undefined uVar5;
  int in_stack_ffffffd0;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_0040f09f(*param_1,param_1[1],(int *)&stack0xffffffd0,local_20,0x16);
  if (param_2 == (undefined *)0x0) {
    piVar1 = __errno();
    uVar5 = (undefined)in_stack_ffffffd0;
  }
  else {
    if (param_3 != 0) {
      uVar3 = 0xffffffff;
      if (param_3 != 0xffffffff) {
        uVar3 = (param_3 - (in_stack_ffffffd0 == 0x2d)) - (uint)(0 < param_4);
      }
      iVar2 = FUN_0040ef27(param_2 + (uint)(0 < param_4) + (uint)(in_stack_ffffffd0 == 0x2d),uVar3,
                           param_4 + 1,(int)&stack0xffffffd0);
      uVar5 = (undefined)in_stack_ffffffd0;
      if (iVar2 == 0) {
        FUN_0040df0d(param_2,param_3,param_4,param_5,(int *)&stack0xffffffd0,'\0',param_6);
        uVar4 = extraout_DL_01;
      }
      else {
        *param_2 = 0;
        uVar4 = extraout_DL_00;
      }
      goto LAB_0040e11b;
    }
    piVar1 = __errno();
    uVar5 = (undefined)in_stack_ffffffd0;
  }
  *piVar1 = 0x16;
  FUN_00402c77();
  uVar4 = extraout_DL;
LAB_0040e11b:
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar4,uVar5);
  return;
}



undefined4 __cdecl
FUN_0040e12c(char *param_1,int param_2,uint param_3,int *param_4,char param_5,
            pthreadlocinfo *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
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
      pcVar4 = param_1 + 1;
    }
    else {
      pcVar4 = param_1 + param_4[1];
    }
    if (0 < (int)param_3) {
      __shift(pcVar4,1);
      *pcVar4 = ***(char ***)(local_18[0] + 0x84);
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
        __shift(pcVar4 + 1,param_3);
        FUN_00407390((uint *)(pcVar4 + 1),0x30,param_3);
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
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined uVar4;
  undefined uVar5;
  int in_stack_ffffffd0;
  int local_2c;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_0040f09f(*param_1,param_1[1],(int *)&stack0xffffffd0,local_20,0x16);
  if (param_2 == (char *)0x0) {
    piVar1 = __errno();
    uVar5 = (undefined)in_stack_ffffffd0;
    *piVar1 = 0x16;
    FUN_00402c77();
    uVar4 = extraout_DL;
  }
  else {
    if (param_3 == 0) {
      piVar1 = __errno();
      uVar5 = (undefined)in_stack_ffffffd0;
      *piVar1 = 0x16;
      FUN_00402c77();
      uVar4 = extraout_DL_00;
    }
    else {
      uVar3 = 0xffffffff;
      if (param_3 != -1) {
        uVar3 = param_3 - (uint)(in_stack_ffffffd0 == 0x2d);
      }
      iVar2 = FUN_0040ef27(param_2 + (in_stack_ffffffd0 == 0x2d),uVar3,local_2c + param_4,
                           (int)&stack0xffffffd0);
      uVar5 = (undefined)in_stack_ffffffd0;
      if (iVar2 == 0) {
        FUN_0040e12c(param_2,param_3,param_4,(int *)&stack0xffffffd0,'\0',param_5);
        uVar4 = extraout_DL_02;
      }
      else {
        *param_2 = '\0';
        uVar4 = extraout_DL_01;
      }
    }
  }
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar4,uVar5);
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
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined uVar5;
  char *pcVar6;
  bool bVar7;
  undefined uVar8;
  int in_stack_ffffffcc;
  int local_30;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  FUN_0040f09f(*param_1,param_1[1],(int *)&stack0xffffffcc,local_20,0x16);
  if (param_2 == (char *)0x0) {
    piVar2 = __errno();
    uVar8 = (undefined)in_stack_ffffffcc;
    *piVar2 = 0x16;
    FUN_00402c77();
    uVar5 = extraout_DL;
  }
  else {
    if (param_3 == 0) {
      piVar2 = __errno();
      uVar8 = (undefined)in_stack_ffffffcc;
      *piVar2 = 0x16;
      FUN_00402c77();
      uVar5 = extraout_DL_00;
    }
    else {
      local_24 = local_30 + -1;
      bVar7 = in_stack_ffffffcc == 0x2d;
      uVar3 = 0xffffffff;
      if (param_3 != 0xffffffff) {
        uVar3 = param_3 - bVar7;
      }
      iVar4 = FUN_0040ef27(param_2 + bVar7,uVar3,param_4,(int)&stack0xffffffcc);
      uVar8 = (undefined)in_stack_ffffffcc;
      if (iVar4 == 0) {
        local_30 = local_30 + -1;
        if ((local_30 < -4) || ((int)param_4 <= local_30)) {
          FUN_0040df0d(param_2,param_3,param_4,param_5,(int *)&stack0xffffffcc,'\x01',param_6);
          uVar5 = extraout_DL_03;
        }
        else {
          pcVar1 = param_2 + bVar7;
          if (local_24 < local_30) {
            do {
              pcVar6 = pcVar1;
              pcVar1 = pcVar6 + 1;
            } while (*pcVar6 != '\0');
            pcVar6[-1] = '\0';
          }
          FUN_0040e12c(param_2,param_3,param_4,(int *)&stack0xffffffcc,'\x01',param_6);
          uVar5 = extraout_DL_02;
        }
      }
      else {
        *param_2 = '\0';
        uVar5 = extraout_DL_01;
      }
    }
  }
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,uVar5,uVar8);
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
  char *pcVar3;
  
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
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == ***(char ***)(local_14[0] + 0x84)) {
      pcVar2 = pcVar3 + -2;
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
//  __positive
// 
// Library: Visual Studio 2012 Release

int __cdecl __positive(double *arg)

{
  if (0.0 < *arg != (*arg == 0.0)) {
    return 1;
  }
  return 0;
}



// Library Function - Single Match
//  __shift
// 
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
//  __setdefaultprecision
// 
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
      puVar3[1] = (uint)puVar9;
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
        puVar3[1] = (uint)param_3;
        if (bVar2) {
          local_c = local_c + 1;
          puVar3[2] = local_c;
        }
      }
      param_2 = param_2 + -1;
      puVar3[1] = (uint)param_3;
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
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined8 *puVar21;
  void *pvVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined auVar30 [16];
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar29 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar28 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar28 & 3) == 0) {
      uVar23 = _Size >> 2;
      if (uVar23 < 8) goto LAB_0040eb50;
      while (uVar23 != 0) {
        uVar23 = uVar23 - 1;
        *puVar28 = *puVar29;
        puVar29 = puVar29 + -1;
        puVar28 = puVar28 + -1;
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
        *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
        return _Dst;
      case 2:
switchD_0040eb74_caseD_2:
        *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
        *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
        return _Dst;
      case 3:
switchD_0040eb74_caseD_3:
        *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
        *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
        *(undefined *)((int)puVar28 + 1) = *(undefined *)((int)puVar29 + 1);
        return _Dst;
      default:
        uVar24 = _Size - ((uint)puVar28 & 3);
        switch((uint)puVar28 & 3) {
        case 1:
          *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
          puVar29 = (undefined4 *)((int)puVar29 + -1);
          uVar23 = uVar24 >> 2;
          puVar28 = (undefined4 *)((int)puVar28 - 1);
          if (uVar23 < 8) {
LAB_0040eb50:
                    // WARNING: Could not recover jumptable at 0x0040eb52. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar22 = (void *)(*(code *)(&PTR_LAB_0040ec24)[-uVar23])();
            return pvVar22;
          }
          while (uVar23 != 0) {
            uVar23 = uVar23 - 1;
            *puVar28 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar28 = puVar28 + -1;
          }
          switch(uVar24 & 3) {
          case 1:
            goto switchD_0040eb74_caseD_1;
          case 2:
            goto switchD_0040eb74_caseD_2;
          case 3:
            goto switchD_0040eb74_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
          puVar29 = (undefined4 *)((int)puVar29 + -2);
          puVar28 = (undefined4 *)((int)puVar28 - 2);
          if (uVar23 < 8) goto LAB_0040eb50;
          while (uVar23 != 0) {
            uVar23 = uVar23 - 1;
            *puVar28 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar28 = puVar28 + -1;
          }
          switch(uVar24 & 3) {
          case 1:
            goto switchD_0040eb74_caseD_1;
          case 2:
            goto switchD_0040eb74_caseD_2;
          case 3:
            goto switchD_0040eb74_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar28 + 3) = *(undefined *)((int)puVar29 + 3);
          *(undefined *)((int)puVar28 + 2) = *(undefined *)((int)puVar29 + 2);
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)puVar28 + 1) = *(undefined *)((int)puVar29 + 1);
          puVar29 = (undefined4 *)((int)puVar29 + -3);
          puVar28 = (undefined4 *)((int)puVar28 - 3);
          if (uVar23 < 8) goto LAB_0040eb50;
          while (uVar23 != 0) {
            uVar23 = uVar23 - 1;
            *puVar28 = *puVar29;
            puVar29 = puVar29 + -1;
            puVar28 = puVar28 + -1;
          }
          switch(uVar24 & 3) {
          case 1:
            goto switchD_0040eb74_caseD_1;
          case 2:
            goto switchD_0040eb74_caseD_2;
          case 3:
            goto switchD_0040eb74_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar27 = (undefined *)_Dst;
  if ((DAT_00419eec >> 1 & 1) != 0) {
    while (_Size != 0
                    // WARNING: Load size is inaccurate) {
      _Size = _Size - 1;
      *puVar27 = *_Src;
      _Src = (undefined *)((int)_Src + 1);
      puVar27 = puVar27 + 1;
    }
    return _Dst;
  }
  puVar29 = (undefined4 *)_Dst;
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
        uVar24 = (_Size - 4) + ((uint)_Dst & 3);
        switch((uint)_Dst & 3) {
        case 0:
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 1:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
          _Src = (undefined4 *)((int)_Src + 3);
          puVar29 = (undefined4 *)((int)_Dst + 3);
          if (7 < uVar23) {
            while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
              uVar23 = uVar23 - 1;
              *puVar29 = *_Src;
              _Src = (undefined4 *)((int)_Src + 4);
              puVar29 = puVar29 + 1;
            }
            switch(uVar24 & 3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0040e9e0_caseD_2;
            case 3:
              goto switchD_0040e9e0_caseD_3;
            }
            break;
          }
          goto LAB_0040e9e8;
        case 2:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar23 = uVar24 >> 2;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          _Src = (undefined4 *)((int)_Src + 2);
          puVar29 = (undefined4 *)((int)_Dst + 2);
          if (uVar23 < 8) goto LAB_0040e9e8;
          while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
            uVar23 = uVar23 - 1;
            *puVar29 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar29 = puVar29 + 1;
          }
          switch(uVar24 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0040e9e0_caseD_2;
          case 3:
            goto switchD_0040e9e0_caseD_3;
          }
          break;
        case 3:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar23 = uVar24 >> 2;
          _Src = (undefined4 *)((int)_Src + 1);
          puVar29 = (undefined4 *)((int)_Dst + 1);
          if (uVar23 < 8) goto LAB_0040e9e8;
          while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
            uVar23 = uVar23 - 1;
            *puVar29 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar29 = puVar29 + 1;
          }
          switch(uVar24 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0040e9e0_caseD_2;
          case 3:
            goto switchD_0040e9e0_caseD_3;
          }
        }
      }
      goto switchD_0040e9e0_caseD_1;
    }
  }
  else {
    if (((((uint)_Dst ^ (uint)_Src) & 0xf) == 0) && ((DAT_00418e00 >> 1 & 1) != 0)) {
      if (((uint)_Src & 0xf) != 0) {
        uVar23 = 0x10 - ((uint)_Src & 0xf);
        _Size = _Size - uVar23;
        uVar24 = uVar23 & 3;
        while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
          *(undefined *)puVar29 = *_Src;
          _Src = (void *)((int)_Src + 1);
          puVar29 = (undefined4 *)((int)puVar29 + 1);
          uVar24 = uVar24 - 1;
        }
        uVar23 = uVar23 >> 2;
        while (uVar23 != 0) {
                    // WARNING: Load size is inaccurate
          *puVar29 = *_Src;
          _Src = (void *)((int)_Src + 4);
          puVar29 = puVar29 + 1;
          uVar23 = uVar23 - 1;
        }
      }
      uVar24 = _Size >> 7;
      while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
        uVar5 = *(undefined4 *)((int)_Src + 4);
        uVar6 = *(undefined4 *)((int)_Src + 8);
        uVar7 = *(undefined4 *)((int)_Src + 0xc);
        uVar8 = *(undefined4 *)((int)_Src + 0x10);
        uVar9 = *(undefined4 *)((int)_Src + 0x14);
        uVar10 = *(undefined4 *)((int)_Src + 0x18);
        uVar11 = *(undefined4 *)((int)_Src + 0x1c);
        uVar12 = *(undefined4 *)((int)_Src + 0x20);
        uVar13 = *(undefined4 *)((int)_Src + 0x24);
        uVar14 = *(undefined4 *)((int)_Src + 0x28);
        uVar15 = *(undefined4 *)((int)_Src + 0x2c);
        uVar16 = *(undefined4 *)((int)_Src + 0x30);
        uVar17 = *(undefined4 *)((int)_Src + 0x34);
        uVar18 = *(undefined4 *)((int)_Src + 0x38);
        uVar19 = *(undefined4 *)((int)_Src + 0x3c);
        *puVar29 = *_Src;
        puVar29[1] = uVar5;
        puVar29[2] = uVar6;
        puVar29[3] = uVar7;
        puVar29[4] = uVar8;
        puVar29[5] = uVar9;
        puVar29[6] = uVar10;
        puVar29[7] = uVar11;
        puVar29[8] = uVar12;
        puVar29[9] = uVar13;
        puVar29[10] = uVar14;
        puVar29[0xb] = uVar15;
        puVar29[0xc] = uVar16;
        puVar29[0xd] = uVar17;
        puVar29[0xe] = uVar18;
        puVar29[0xf] = uVar19;
        uVar5 = *(undefined4 *)((int)_Src + 0x44);
        uVar6 = *(undefined4 *)((int)_Src + 0x48);
        uVar7 = *(undefined4 *)((int)_Src + 0x4c);
        uVar8 = *(undefined4 *)((int)_Src + 0x50);
        uVar9 = *(undefined4 *)((int)_Src + 0x54);
        uVar10 = *(undefined4 *)((int)_Src + 0x58);
        uVar11 = *(undefined4 *)((int)_Src + 0x5c);
        uVar12 = *(undefined4 *)((int)_Src + 0x60);
        uVar13 = *(undefined4 *)((int)_Src + 100);
        uVar14 = *(undefined4 *)((int)_Src + 0x68);
        uVar15 = *(undefined4 *)((int)_Src + 0x6c);
        uVar16 = *(undefined4 *)((int)_Src + 0x70);
        uVar17 = *(undefined4 *)((int)_Src + 0x74);
        uVar18 = *(undefined4 *)((int)_Src + 0x78);
        uVar19 = *(undefined4 *)((int)_Src + 0x7c);
        puVar29[0x10] = *(undefined4 *)((int)_Src + 0x40);
        puVar29[0x11] = uVar5;
        puVar29[0x12] = uVar6;
        puVar29[0x13] = uVar7;
        puVar29[0x14] = uVar8;
        puVar29[0x15] = uVar9;
        puVar29[0x16] = uVar10;
        puVar29[0x17] = uVar11;
        puVar29[0x18] = uVar12;
        puVar29[0x19] = uVar13;
        puVar29[0x1a] = uVar14;
        puVar29[0x1b] = uVar15;
        puVar29[0x1c] = uVar16;
        puVar29[0x1d] = uVar17;
        puVar29[0x1e] = uVar18;
        puVar29[0x1f] = uVar19;
        _Src = (void *)((int)_Src + 0x80);
        puVar29 = puVar29 + 0x20;
        uVar24 = uVar24 - 1;
      }
      if ((_Size & 0x7f) != 0) {
        uVar24 = (_Size & 0x7f) >> 4;
        while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
          uVar5 = *(undefined4 *)((int)_Src + 4);
          uVar6 = *(undefined4 *)((int)_Src + 8);
          uVar7 = *(undefined4 *)((int)_Src + 0xc);
          *puVar29 = *_Src;
          puVar29[1] = uVar5;
          puVar29[2] = uVar6;
          puVar29[3] = uVar7;
          _Src = (void *)((int)_Src + 0x10);
          puVar29 = puVar29 + 4;
          uVar24 = uVar24 - 1;
        }
        if ((_Size & 0xf) != 0) {
          uVar24 = (_Size & 0xf) >> 2;
          while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
            *puVar29 = *_Src;
            _Src = (void *)((int)_Src + 4);
            puVar29 = puVar29 + 1;
            uVar24 = uVar24 - 1;
          }
          uVar24 = _Size & 3;
          while (uVar24 != 0) {
                    // WARNING: Load size is inaccurate
            *(undefined *)puVar29 = *_Src;
            _Src = (void *)((int)_Src + 1);
            puVar29 = (undefined4 *)((int)puVar29 + 1);
            uVar24 = uVar24 - 1;
          }
        }
      }
      return _Dst;
    }
    if ((DAT_00419eec & 1) == 0) goto LAB_0040e9ab;
    if (((uint)_Dst & 3) != 0) goto LAB_0040e9c8;
    if (((uint)_Src & 3) == 0) {
      if (((uint)_Dst >> 2 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar5 = *_Src;
        _Size = _Size - 4;
        _Src = (void *)((int)_Src + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (void *)((int)_Dst + 4);
      }
      if (((uint)_Dst >> 3 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar1 = *_Src;
        _Size = _Size - 8;
        _Src = (void *)((int)_Src + 8);
        *(undefined8 *)_Dst = uVar1;
        _Dst = (undefined *)_Dst + 8;
      }
      if (((uint)_Src & 7) == 0) {
        puVar21 = (undefined8 *)((int)_Src + -8);
        auVar30 = *(undefined (*) [16])((int)_Src + -8);
        do {
          puVar26 = puVar21;
          auVar2 = *(undefined (*) [16])(puVar26 + 2);
          _Size = _Size - 0x30;
          auVar3 = *(undefined (*) [16])(puVar26 + 4);
          auVar4 = *(undefined (*) [16])(puVar26 + 6);
          *(undefined (*) [16])_Dst =
               SUB3216(CONCAT1220(SUB1612(auVar30 >> 0x20,0),CONCAT416(0x40,auVar30)) >> 0x40,0);
          *(undefined (*) [16])((int)_Dst + 0x10) =
               SUB3216(CONCAT1220(SUB1612(auVar2 >> 0x20,0),CONCAT416(0x40,auVar2)) >> 0x40,0);
          *(undefined (*) [16])((int)_Dst + 0x20) =
               SUB3216(CONCAT1220(SUB1612(auVar3 >> 0x20,0),CONCAT416(0x40,auVar3)) >> 0x40,0);
          _Dst = (void *)((int)_Dst + 0x30);
          puVar21 = puVar26 + 6;
          auVar30 = auVar4;
        } while (0x2f < (int)_Size);
        puVar26 = puVar26 + 7;
      }
      else {
        if (((uint)_Src >> 3 & 1) == 0) {
          iVar20 = (int)_Src + -4;
          auVar30 = *(undefined (*) [16])((int)_Src + -4);
          do {
            iVar25 = iVar20;
            auVar2 = *(undefined (*) [16])(iVar25 + 0x10);
            _Size = _Size - 0x30;
            auVar3 = *(undefined (*) [16])(iVar25 + 0x20);
            auVar4 = *(undefined (*) [16])(iVar25 + 0x30);
            *(undefined (*) [16])_Dst = SUB2016(CONCAT416(0x20,auVar30) >> 0x20,0);
            *(undefined (*) [16])((int)_Dst + 0x10) = SUB2016(CONCAT416(0x20,auVar2) >> 0x20,0);
            *(undefined (*) [16])((int)_Dst + 0x20) = SUB2016(CONCAT416(0x20,auVar3) >> 0x20,0);
            _Dst = (void *)((int)_Dst + 0x30);
            iVar20 = iVar25 + 0x30;
            auVar30 = auVar4;
          } while (0x2f < (int)_Size);
          puVar26 = (undefined8 *)(iVar25 + 0x34);
        }
        else {
          iVar20 = (int)_Src + -0xc;
          auVar30 = *(undefined (*) [16])((int)_Src + -0xc);
          do {
            iVar25 = iVar20;
            auVar2 = *(undefined (*) [16])(iVar25 + 0x10);
            _Size = _Size - 0x30;
            auVar3 = *(undefined (*) [16])(iVar25 + 0x20);
            auVar4 = *(undefined (*) [16])(iVar25 + 0x30);
            *(undefined (*) [16])_Dst =
                 SUB3216(CONCAT1220(SUB1612(auVar30 >> 0x20,0),CONCAT416(0x60,auVar30)) >> 0x60,0);
            *(undefined (*) [16])((int)_Dst + 0x10) =
                 SUB3216(CONCAT1220(SUB1612(auVar2 >> 0x20,0),CONCAT416(0x60,auVar2)) >> 0x60,0);
            *(undefined (*) [16])((int)_Dst + 0x20) =
                 SUB3216(CONCAT1220(SUB1612(auVar3 >> 0x20,0),CONCAT416(0x60,auVar3)) >> 0x60,0);
            _Dst = (void *)((int)_Dst + 0x30);
            iVar20 = iVar25 + 0x30;
            auVar30 = auVar4;
          } while (0x2f < (int)_Size);
          puVar26 = (undefined8 *)(iVar25 + 0x3c);
        }
      }
      while (0xf < (int)_Size) {
        uVar5 = *(undefined4 *)puVar26;
        uVar6 = *(undefined4 *)((int)puVar26 + 4);
        uVar7 = *(undefined4 *)(puVar26 + 1);
        uVar8 = *(undefined4 *)((int)puVar26 + 0xc);
        _Size = _Size - 0x10;
        puVar26 = puVar26 + 2;
        *(undefined4 *)_Dst = uVar5;
        *(undefined4 *)((undefined *)_Dst + 4) = uVar6;
        *(undefined4 *)((undefined *)_Dst + 8) = uVar7;
        *(undefined4 *)((undefined *)_Dst + 0xc) = uVar8;
        _Dst = (void *)((int)_Dst + 0x10);
      }
      if ((_Size >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)puVar26;
        _Size = _Size - 4;
        puVar26 = (undefined8 *)((int)puVar26 + 4);
        *(undefined4 *)_Dst = uVar5;
        _Dst = (undefined *)_Dst + 4;
      }
      if ((_Size >> 3 & 1) != 0) {
        _Size = _Size - 8;
        *(undefined8 *)_Dst = *puVar26;
      }
                    // WARNING: Could not recover jumptable at 0x0040e9a9. Too many branches
                    // WARNING: Treating indirect jump as call
      pvVar22 = (void *)(*(code *)(&switchD_0040e9e0::switchdataD_0040ead8)[_Size])();
      return pvVar22;
    }
  }
  uVar23 = _Size >> 2;
  if (uVar23 < 8) {
LAB_0040e9e8:
                    // WARNING: Could not recover jumptable at 0x0040e9e8. Too many branches
                    // WARNING: Treating indirect jump as call
    pvVar22 = (void *)(*(code *)(&PTR_LAB_0040ea6c)[uVar23])();
    return pvVar22;
  }
  while (uVar23 != 0
                    // WARNING: Load size is inaccurate) {
    uVar23 = uVar23 - 1;
    *puVar29 = *_Src;
    _Src = (undefined4 *)((int)_Src + 4);
    puVar29 = puVar29 + 1;
  }
  switch(_Size & 3) {
  case 0:
    return _Dst;
  case 2:
switchD_0040e9e0_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar29 = *_Src;
    *(undefined *)((int)puVar29 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0040e9e0_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar29 = *_Src;
    *(undefined *)((int)puVar29 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar29 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0040e9e0_caseD_1:
                    // WARNING: Load size is inaccurate
  *(undefined *)puVar29 = *_Src;
  return _Dst;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _strrchr
// 
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char *pcVar1;
  char *pcVar2;
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
  uint uVar16;
  undefined (*pauVar17) [16];
  uint uVar18;
  int iVar19;
  undefined (*pauVar20) [16];
  undefined4 unaff_EBX;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  undefined auVar24 [16];
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  undefined auVar25 [16];
  
  if (_DAT_00419ee8 != 0) {
    if (_DAT_00419ee8 < 2) {
      auVar25 = pshuflw(ZEXT216(CONCAT11((char)_Ch,(char)_Ch)),
                        ZEXT216(CONCAT11((char)_Ch,(char)_Ch)),0);
      uVar18 = (uint)_Str & 0xf;
      uVar16 = -1 << (sbyte)uVar18;
      pcVar22 = _Str + -uVar18;
      pauVar20 = (undefined (*) [16])0x0;
      while( true ) {
        cVar26 = SUB161(auVar25 >> 8,0);
        cVar27 = SUB161(auVar25 >> 0x10,0);
        cVar28 = SUB161(auVar25 >> 0x18,0);
        cVar29 = SUB161(auVar25 >> 0x20,0);
        cVar30 = SUB161(auVar25 >> 0x28,0);
        cVar31 = SUB161(auVar25 >> 0x30,0);
        cVar32 = SUB161(auVar25 >> 0x38,0);
        auVar24 = CONCAT115(-(pcVar22[0xf] == cVar32),
                            CONCAT114(-(pcVar22[0xe] == cVar31),
                                      CONCAT113(-(pcVar22[0xd] == cVar30),
                                                CONCAT112(-(pcVar22[0xc] == cVar29),
                                                          CONCAT111(-(pcVar22[0xb] == cVar28),
                                                                    CONCAT110(-(pcVar22[10] ==
                                                                               cVar27),CONCAT19(-(
                                                  pcVar22[9] == cVar26),
                                                  CONCAT18(-(pcVar22[8] == SUB161(auVar25,0)),
                                                           CONCAT17(-(pcVar22[7] == cVar32),
                                                                    CONCAT16(-(pcVar22[6] == cVar31)
                                                                             ,CONCAT15(-(pcVar22[5]
                                                                                        == cVar30),
                                                                                       CONCAT14(-(
                                                  pcVar22[4] == cVar29),
                                                  CONCAT13(-(pcVar22[3] == cVar28),
                                                           CONCAT12(-(pcVar22[2] == cVar27),
                                                                    CONCAT11(-(pcVar22[1] == cVar26)
                                                                             ,-(*pcVar22 ==
                                                                               SUB161(auVar25,0)))))
                                                  ))))))))))));
        uVar18 = pmovmskb(uVar18,CONCAT115(-(pcVar22[0xf] == '\0'),
                                           CONCAT114(-(pcVar22[0xe] == '\0'),
                                                     CONCAT113(-(pcVar22[0xd] == '\0'),
                                                               CONCAT112(-(pcVar22[0xc] == '\0'),
                                                                         CONCAT111(-(pcVar22[0xb] ==
                                                                                    '\0'),CONCAT110(
                                                  -(pcVar22[10] == '\0'),
                                                  CONCAT19(-(pcVar22[9] == '\0'),
                                                           CONCAT18(-(pcVar22[8] == '\0'),
                                                                    CONCAT17(-(pcVar22[7] == '\0'),
                                                                             CONCAT16(-(pcVar22[6]
                                                                                       == '\0'),
                                                                                      CONCAT15(-(
                                                  pcVar22[5] == '\0'),
                                                  CONCAT14(-(pcVar22[4] == '\0'),
                                                           CONCAT13(-(pcVar22[3] == '\0'),
                                                                    CONCAT12(-(pcVar22[2] == '\0'),
                                                                             CONCAT11(-(pcVar22[1]
                                                                                       == '\0'),
                                                                                      -(*pcVar22 ==
                                                                                       '\0')))))))))
                                                  ))))))));
        uVar18 = uVar18 & uVar16;
        if (uVar18 != 0) break;
        uVar18 = pmovmskb(0,auVar24);
        uVar18 = uVar18 & uVar16;
        iVar19 = 0x1f;
        if (uVar18 != 0) {
          while (uVar18 >> iVar19 == 0) {
            iVar19 = iVar19 + -1;
          }
        }
        if (uVar18 != 0) {
          pauVar20 = (undefined (*) [16])(pcVar22 + iVar19);
        }
        uVar16 = 0xffffffff;
        pcVar22 = pcVar22 + 0x10;
      }
      uVar21 = pmovmskb(unaff_EBX,auVar24);
      uVar16 = (uVar18 * 2 & uVar18 * -2) - 1 & uVar21 & uVar16;
      iVar19 = 0x1f;
      if (uVar16 != 0) {
        while (uVar16 >> iVar19 == 0) {
          iVar19 = iVar19 + -1;
        }
      }
      pauVar17 = (undefined (*) [16])(pcVar22 + iVar19);
      if (uVar16 == 0) {
        pauVar17 = pauVar20;
      }
      return (char *)pauVar17;
    }
    uVar16 = _Ch & 0xff;
    if (uVar16 == 0) {
      pcVar22 = (char *)((uint)_Str & 0xfffffff0);
      uVar16 = pmovmskb(_Str,CONCAT115(-(pcVar22[0xf] == '\0'),
                                       CONCAT114(-(pcVar22[0xe] == '\0'),
                                                 CONCAT113(-(pcVar22[0xd] == '\0'),
                                                           CONCAT112(-(pcVar22[0xc] == '\0'),
                                                                     CONCAT111(-(pcVar22[0xb] ==
                                                                                '\0'),CONCAT110(-(
                                                  pcVar22[10] == '\0'),
                                                  CONCAT19(-(pcVar22[9] == '\0'),
                                                           CONCAT18(-(pcVar22[8] == '\0'),
                                                                    CONCAT17(-(pcVar22[7] == '\0'),
                                                                             CONCAT16(-(pcVar22[6]
                                                                                       == '\0'),
                                                                                      CONCAT15(-(
                                                  pcVar22[5] == '\0'),
                                                  CONCAT14(-(pcVar22[4] == '\0'),
                                                           CONCAT13(-(pcVar22[3] == '\0'),
                                                                    CONCAT12(-(pcVar22[2] == '\0'),
                                                                             CONCAT11(-(pcVar22[1]
                                                                                       == '\0'),
                                                                                      -(*pcVar22 ==
                                                                                       '\0')))))))))
                                                  ))))))));
      uVar16 = uVar16 & -1 << ((byte)_Str & 0xf);
      while (uVar16 == 0) {
        pcVar23 = pcVar22 + 0x10;
        pcVar1 = pcVar22 + 0x11;
        pcVar2 = pcVar22 + 0x12;
        pcVar3 = pcVar22 + 0x13;
        pcVar4 = pcVar22 + 0x14;
        pcVar5 = pcVar22 + 0x15;
        pcVar6 = pcVar22 + 0x16;
        pcVar7 = pcVar22 + 0x17;
        pcVar8 = pcVar22 + 0x18;
        pcVar9 = pcVar22 + 0x19;
        pcVar10 = pcVar22 + 0x1a;
        pcVar11 = pcVar22 + 0x1b;
        pcVar12 = pcVar22 + 0x1c;
        pcVar13 = pcVar22 + 0x1d;
        pcVar14 = pcVar22 + 0x1e;
        pcVar15 = pcVar22 + 0x1f;
        pcVar22 = pcVar22 + 0x10;
        uVar16 = pmovmskb(0,CONCAT115(-(*pcVar15 == '\0'),
                                      CONCAT114(-(*pcVar14 == '\0'),
                                                CONCAT113(-(*pcVar13 == '\0'),
                                                          CONCAT112(-(*pcVar12 == '\0'),
                                                                    CONCAT111(-(*pcVar11 == '\0'),
                                                                              CONCAT110(-(*pcVar10 
                                                  == '\0'),CONCAT19(-(*pcVar9 == '\0'),
                                                                    CONCAT18(-(*pcVar8 == '\0'),
                                                                             CONCAT17(-(*pcVar7 ==
                                                                                       '\0'),
                                                  CONCAT16(-(*pcVar6 == '\0'),
                                                           CONCAT15(-(*pcVar5 == '\0'),
                                                                    CONCAT14(-(*pcVar4 == '\0'),
                                                                             CONCAT13(-(*pcVar3 ==
                                                                                       '\0'),
                                                  CONCAT12(-(*pcVar2 == '\0'),
                                                           CONCAT11(-(*pcVar1 == '\0'),
                                                                    -(*pcVar23 == '\0'))))))))))))))
                                               )));
      }
      iVar19 = 0;
      if (uVar16 != 0) {
        while ((uVar16 >> iVar19 & 1) == 0) {
          iVar19 = iVar19 + 1;
        }
      }
      pauVar20 = (undefined (*) [16])(pcVar22 + iVar19);
    }
    else {
      pauVar20 = (undefined (*) [16])0x0;
      uVar18 = (uint)_Str & 0xf;
      while (uVar18 != 0) {
        if (*(byte *)_Str == uVar16) {
          pauVar20 = (undefined (*) [16])_Str;
        }
        if (*(byte *)_Str == 0) {
          return (char *)pauVar20;
        }
        _Str = _Str + 1;
        uVar18 = (uint)_Str & 0xf;
      }
      do {
        pauVar17 = (undefined (*) [16])((int)_Str + 0x10);
        iVar19 = pcmpistri(ZEXT416(uVar16),*(undefined (*) [16])_Str,0x40);
        if ((undefined (*) [16])0xffffffef < _Str) {
          pauVar20 = (undefined (*) [16])(_Str + iVar19);
        }
        _Str = (char *)pauVar17;
      } while (pauVar17 != (undefined (*) [16])0x0);
    }
    return (char *)pauVar20;
  }
  iVar19 = -1;
  do {
    pcVar22 = _Str;
    if (iVar19 == 0) break;
    iVar19 = iVar19 + -1;
    pcVar22 = _Str + 1;
    cVar26 = *_Str;
    _Str = pcVar22;
  } while (cVar26 != '\0');
  iVar19 = -(iVar19 + 1);
  pcVar22 = pcVar22 + -1;
  do {
    pcVar23 = pcVar22;
    if (iVar19 == 0) break;
    iVar19 = iVar19 + -1;
    pcVar23 = pcVar22 + -1;
    cVar26 = *pcVar22;
    pcVar22 = pcVar23;
  } while ((char)_Ch != cVar26);
  pauVar20 = (undefined (*) [16])(pcVar23 + 1);
  if ((*pauVar20)[0] != (char)_Ch) {
    pauVar20 = (undefined (*) [16])0x0;
  }
  return (char *)pauVar20;
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
FUN_0040f09f(uint param_1,undefined4 param_2,int *param_3,char *param_4,rsize_t param_5)

{
  code *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  errno_t eVar5;
  undefined extraout_DL;
  undefined uVar6;
  uint in_stack_ffffffcc;
  uint uStack48;
  ushort uStack44;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  piVar2 = param_3;
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  local_28 = param_4;
  FUN_0040efd7((uint *)&stack0xffffffcc,&param_1);
  iVar4 = FUN_0040f28c(in_stack_ffffffcc,uStack48,uStack44,0x11,0,&local_24);
  pcVar3 = local_28;
  uVar6 = (undefined)in_stack_ffffffcc;
  piVar2[2] = iVar4;
  *piVar2 = (int)local_22;
  piVar2[1] = (int)local_24;
  eVar5 = _strcpy_s(local_28,param_5,local_20);
  if (eVar5 == 0) {
    piVar2[3] = (int)pcVar3;
    FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,extraout_DL,uVar6);
    return;
  }
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  __alldvrm
// 
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
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
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
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
//  __aullshr
// 
// Library: Visual Studio

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}



// Library Function - Single Match
//  __controlfp_s
// 
// Library: Visual Studio 2012 Release

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  int *piVar1;
  uint uVar2;
  errno_t eVar3;
  
  uVar2 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar2 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      FUN_0040fd09(_NewValue,uVar2);
    }
    else {
      uVar2 = FUN_0040fd09(_NewValue,uVar2);
      *_CurrentState = uVar2;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar2 = FUN_0040fd09(0,0);
      *_CurrentState = uVar2;
    }
    piVar1 = __errno();
    eVar3 = 0x16;
    *piVar1 = 0x16;
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
  ushort *puVar5;
  uint uVar6;
  char cVar7;
  ushort uVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined **ppuVar11;
  uint uVar12;
  ushort *puVar13;
  short *psVar14;
  short sVar15;
  uint uVar16;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined **ppuVar22;
  ushort *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  char *pcVar28;
  undefined uVar29;
  ushort *in_stack_ffffff74;
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
  
  uVar29 = SUB41(in_stack_ffffff74,0);
  local_8 = DAT_004183f0 ^ (uint)&stack0xfffffffc;
  uVar16 = param_3 & 0x8000;
  local_34 = 0xcccccccc;
  uVar21 = param_3 & 0x7fff;
  local_30 = 0xcccccccc;
  local_2c = 0xcccc;
  uStack42 = 0x3ffb;
  sVar15 = (short)uVar16;
  if (sVar15 == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if (uVar21 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *(undefined *)((int)param_6 + 3) = 1;
      *param_6 = 0;
      *(byte *)(param_6 + 1) = ((sVar15 != -0x8000) - 1U & 0xd) + 0x20;
      param_6[2] = 0x30;
      param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
      goto LAB_0040fc09;
    }
  }
  else {
    if (uVar21 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if ((sVar15 == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_0040f39c;
          pcVar28 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_0040f39c:
            pcVar28 = "1#QNAN";
            goto LAB_0040f3a1;
          }
          pcVar28 = "1#IND";
        }
        eVar4 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar28);
        if (eVar4 != 0) goto LAB_0040fc53;
        *(undefined *)((int)param_6 + 3) = 5;
        uVar16 = extraout_EDX;
      }
      else {
        pcVar28 = "1#SNAN";
LAB_0040f3a1:
        eVar4 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar28);
        if (eVar4 != 0) {
LAB_0040fc53:
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined *)((int)param_6 + 3) = 6;
        uVar16 = extraout_EDX_00;
      }
      param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
      goto LAB_0040fc09;
    }
  }
  uStack30._0_2_ = (undefined2)param_2;
  uStack30._2_2_ = (ushort)(param_2 >> 0x10);
  ppuVar22 = &PTR_DAT_00418e68;
  local_1a = (undefined)uVar21;
  bStack25 = (byte)(uVar21 >> 8);
  local_5c = (short *)0x5;
  local_4c._0_2_ =
       (short)((uint)uVar21 * 0x4d10 + -0x134312f4 +
               ((uint)(uVar21 >> 8) + (param_2 >> 0x18) * 2) * 0x4d >> 0x10);
  uStack34._0_2_ = (ushort)param_1;
  uStack34._2_2_ = (ushort)((uint)param_1 >> 0x10);
  local_24 = 0;
  uVar16 = SEXT24((short)local_4c);
  bVar27 = -uVar16 == 0;
  if (bVar27) {
LAB_0040f75c:
    uVar16 = CONCAT22((undefined2)uStack30,uStack34._2_2_);
    uVar19 = param_1 << 0x10;
  }
  else {
    local_48 = -uVar16;
    if (0 < (int)uVar16) {
      ppuVar22 = (undefined **)0x418fc8;
      bVar27 = uVar16 == 0;
      local_48 = uVar16;
    }
    if (bVar27) goto LAB_0040f75c;
    uVar19 = param_1 << 0x10;
    uVar16 = CONCAT22((undefined2)uStack30,uStack34._2_2_);
    local_44 = uVar19;
    do {
      uStack30._2_2_ = (ushort)(param_2 >> 0x10);
      iVar24 = 0;
      uVar12 = (int)local_48 >> 3;
      ppuVar22 = ppuVar22 + 0x15;
      if ((local_48 & 7) != 0) {
        ppuVar11 = ppuVar22 + (local_48 & 7) * 3;
        ppuVar9 = ppuVar11;
        if (0x7fff < *(ushort *)ppuVar11) {
          ppuVar9 = (undefined **)&local_40;
          local_40 = (ushort)*ppuVar11;
          uStack62 = (undefined2)((uint)*ppuVar11 >> 0x10);
          uStack60 = SUB42(ppuVar11[1],0);
          uStack58 = (undefined2)((uint)ppuVar11[1] >> 0x10);
          local_38 = ppuVar11[2];
          iVar25 = CONCAT22(uStack60,uStack62) + -1;
          uStack62 = (undefined2)iVar25;
          uStack60 = (undefined2)((uint)iVar25 >> 0x10);
        }
        uVar20 = *(ushort *)((int)ppuVar9 + 10) & 0x7fff;
        uVar3 = CONCAT11(bStack25,local_1a) & 0x7fff;
        uVar21 = (*(ushort *)((int)ppuVar9 + 10) ^ CONCAT11(bStack25,local_1a)) & 0x8000;
        uVar8 = uVar3 + uVar20;
        local_14 = 0;
        uStack19 = 0;
        uStack18 = 0;
        local_10[0] = 0;
        local_10[1] = uStack18;
        local_10[2] = local_10[0];
        local_10[3] = uStack18;
        if (((uVar3 < 0x7fff) && (uVar20 < 0x7fff)) && (uVar8 < 0xbffe)) {
          if (uVar8 < 0x3fc0) {
LAB_0040f4ef:
            local_1a = 0;
            bStack25 = 0;
            uStack30._2_2_ = local_10[0];
            goto LAB_0040f73c;
          }
          if (((uVar3 == 0) &&
              (uVar8 = uVar8 + 1,
              (CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_)) & 0x7fffffff) == 0)) &&
             ((uVar16 == 0 && (local_44 == 0)))) {
            local_1a = 0;
            bStack25 = 0;
            uVar19 = local_44;
            goto LAB_0040f74c;
          }
          if (((uVar20 == 0) && (uVar8 = uVar8 + 1, ((uint)ppuVar9[2] & 0x7fffffff) == 0)) &&
             ((ppuVar9[1] == (undefined *)0x0 && (*ppuVar9 == (undefined *)0x0))))
          goto LAB_0040f4ef;
          puVar13 = local_10;
          local_54 = 5;
          iVar25 = iVar24;
          do {
            if (0 < (int)local_54) {
              in_stack_ffffff74 = &local_24 + iVar25;
              ppuVar11 = ppuVar9 + 2;
              iVar18 = local_54;
              do {
                uVar16 = *(uint *)(puVar13 + -2) +
                         (uint)*in_stack_ffffff74 * (uint)*(ushort *)ppuVar11;
                if ((uVar16 < *(uint *)(puVar13 + -2)) ||
                   (iVar10 = iVar24, uVar16 < (uint)*in_stack_ffffff74 * (uint)*(ushort *)ppuVar11))
                {
                  iVar10 = 1;
                }
                *(uint *)(puVar13 + -2) = uVar16;
                if (iVar10 != 0) {
                  *puVar13 = *puVar13 + 1;
                }
                in_stack_ffffff74 = in_stack_ffffff74 + 1;
                ppuVar11 = (undefined **)((int)ppuVar11 + -2);
                iVar18 = iVar18 + -1;
              } while (0 < iVar18);
            }
            puVar13 = puVar13 + 1;
            iVar25 = iVar25 + 1;
            local_54 = local_54 + -1;
          } while (0 < (int)local_54);
          local_44 = CONCAT22(local_10[3],local_10[2]);
          uVar8 = uVar8 + 0xc002;
          uVar16 = CONCAT22(uStack18,CONCAT11(uStack19,local_14));
          if ((short)uVar8 < 1) {
LAB_0040f62b:
            uVar8 = uVar8 - 1;
            if (-1 < (short)uVar8) goto LAB_0040f69c;
            local_54 = (uint)(ushort)-uVar8;
            uVar8 = 0;
            uVar19 = local_44;
            do {
              if ((local_14 & 1) != 0) {
                iVar24 = iVar24 + 1;
              }
              uVar26 = CONCAT22(local_10[1],local_10[0]);
              local_10[1] = local_10[1] >> 1 | (ushort)((uVar19 << 0x1f) >> 0x10);
              uVar17 = uVar16 >> 1;
              local_44 = uVar19 >> 1;
              uVar16 = uVar17 | uVar26 << 0x1f;
              local_54 = local_54 - 1;
              local_10[2] = (ushort)local_44;
              local_10[3] = (ushort)(uVar19 >> 0x11);
              local_10[0] = (ushort)(uVar26 >> 1);
              local_14 = (byte)uVar17;
              uStack19 = (undefined)(uVar17 >> 8);
              uStack18 = (ushort)(uVar16 >> 0x10);
              uVar19 = local_44;
            } while (local_54 != 0);
            if (iVar24 == 0) goto LAB_0040f69c;
            uVar3 = (ushort)uVar17 | 1;
            local_14 = (byte)uVar3;
            uVar16 = uVar17 | 1;
          }
          else {
            do {
              if ((int)local_44 < 0) break;
              iVar25 = CONCAT22(local_10[1],local_10[0]) * 2;
              uVar3 = local_10[1] >> 0xf;
              local_10[0] = (ushort)iVar25 | (ushort)(uVar16 >> 0x1f);
              uVar16 = uVar16 * 2;
              local_10[1] = (ushort)((uint)iVar25 >> 0x10);
              uVar19 = local_44 * 2;
              local_14 = (byte)uVar16;
              uStack19 = (undefined)(uVar16 >> 8);
              uStack18 = (ushort)(uVar16 >> 0x10);
              local_44 = uVar19 | uVar3;
              uVar8 = uVar8 - 1;
              local_10[2] = (ushort)local_44;
              local_10[3] = (ushort)(uVar19 >> 0x10);
            } while (0 < (short)uVar8);
            if ((short)uVar8 < 1) goto LAB_0040f62b;
LAB_0040f69c:
            uVar3 = CONCAT11(uStack19,local_14);
          }
          if ((0x8000 < uVar3) || ((uVar16 & 0x1ffff) == 0x18000)) {
            if (CONCAT22(local_10[0],uStack18) == -1) {
              uStack18 = 0;
              local_10[0] = 0;
              if (CONCAT22(local_10[2],local_10[1]) == -1) {
                local_10[1] = 0;
                local_10[2] = 0;
                if (local_10[3] == 0xffff) {
                  local_10[3] = 0x8000;
                  uVar8 = uVar8 + 1;
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
          if (0x7ffe < uVar8) goto LAB_0040f725;
          bStack25 = (byte)(uVar8 >> 8) | (byte)(uVar21 >> 8);
          local_24 = uStack18;
          uStack34._0_2_ = local_10[0];
          uStack34._2_2_ = local_10[1];
          uVar19 = CONCAT22(local_10[0],uStack18);
          uStack30._0_2_ = (undefined2)local_44;
          uStack30._2_2_ = (ushort)(local_44 >> 0x10);
          uVar16 = CONCAT22((undefined2)uStack30,local_10[1]);
          local_1a = (undefined)uVar8;
        }
        else {
LAB_0040f725:
          iVar24 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack30._2_2_ = (ushort)iVar24;
          local_1a = (undefined)((uint)iVar24 >> 0x10);
          bStack25 = (byte)((uint)iVar24 >> 0x18);
LAB_0040f73c:
          uVar16 = 0;
          local_24 = 0;
          uStack34._0_2_ = 0;
          uStack34._2_2_ = 0;
          uStack30._0_2_ = 0;
          uVar19 = uVar16;
        }
        param_2 = CONCAT22(uStack30._2_2_,(undefined2)uStack30);
        param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
        local_44 = uVar19;
      }
LAB_0040f74c:
      uVar29 = SUB41(in_stack_ffffff74,0);
      local_48 = uVar12;
    } while (uVar12 != 0);
  }
  uStack30._2_2_ = (ushort)(param_2 >> 0x10);
  uVar12 = CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_));
  uStack30 = param_2;
  if (0x3ffe < (ushort)(uVar12 >> 0x10)) {
    local_4c._0_2_ = (short)local_4c + 1;
    local_7c = 0;
    local_14 = 0;
    uStack19 = 0;
    uStack18 = 0;
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    uVar12 = uVar12 >> 0x10 & 0x7fff;
    local_50 = uVar12 + 0x3ffb;
    if (((ushort)uVar12 < 0x7fff) && ((ushort)local_50 < 0xbffe)) {
      if (0x3fbf < (ushort)local_50) {
        if (((((ushort)uVar12 == 0) &&
             (local_50 = uVar12 + 0x3ffc,
             (CONCAT13(bStack25,CONCAT12(local_1a,uStack30._2_2_)) & 0x7fffffff) == 0)) &&
            (uVar16 == 0)) && (uVar19 == 0)) {
          local_1a = 0;
          bStack25 = 0;
          goto LAB_0040fa15;
        }
        puVar13 = local_10;
        local_54 = 0;
        do {
          if (0 < (int)local_5c) {
            puVar5 = &local_2c;
            puVar23 = &local_24 + local_54;
            iVar24 = (int)local_5c;
            do {
              uVar16 = *(uint *)(puVar13 + -2) + (uint)*puVar5 * (uint)*puVar23;
              if ((uVar16 < *(uint *)(puVar13 + -2)) || (uVar16 < (uint)*puVar5 * (uint)*puVar23)) {
                bVar27 = true;
              }
              else {
                bVar27 = false;
              }
              *(uint *)(puVar13 + -2) = uVar16;
              if (bVar27) {
                *puVar13 = *puVar13 + 1;
              }
              puVar23 = puVar23 + 1;
              puVar5 = puVar5 + -1;
              iVar24 = iVar24 + -1;
            } while (0 < iVar24);
          }
          puVar13 = puVar13 + 1;
          local_54 = local_54 + 1;
          local_5c = (short *)((int)local_5c + -1);
        } while (0 < (int)local_5c);
        uStack30 = CONCAT22(local_10[3],local_10[2]);
        local_50 = local_50 + 0xc002;
        if ((short)local_50 < 1) {
          uVar16 = CONCAT22(uStack18,CONCAT11(uStack19,local_14));
LAB_0040f94e:
          uVar21 = (ushort)(local_50 + 0xffff);
          if (-1 < (short)uVar21) goto LAB_0040f8f3;
          local_5c = (short *)(-(local_50 + 0xffff) & 0xffff);
          uVar21 = uVar21 + (short)local_5c;
          do {
            uVar19 = uStack30;
            if ((local_14 & 1) != 0) {
              local_7c = local_7c + 1;
            }
            uVar12 = CONCAT22(local_10[1],local_10[0]);
            uVar26 = uVar16 >> 1;
            local_10[1] = local_10[1] >> 1 | (ushort)((uVar19 << 0x1f) >> 0x10);
            uVar16 = uVar26 | uVar12 << 0x1f;
            uStack30 = uVar19 >> 1;
            local_5c = (short *)((int)local_5c - 1);
            local_10[0] = (ushort)(uVar12 >> 1);
            local_14 = (byte)uVar26;
            uStack19 = (undefined)(uVar26 >> 8);
            uStack18 = (ushort)(uVar16 >> 0x10);
          } while (local_5c != (short *)0x0);
          local_10[2] = (ushort)uStack30;
          local_10[3] = (ushort)(uVar19 >> 0x11);
          if (local_7c == 0) goto LAB_0040f8f3;
          uVar8 = (ushort)uVar26 | 1;
          local_14 = (byte)uVar8;
          uVar16 = uVar26 | 1;
        }
        else {
          uVar16 = CONCAT22(uStack18,CONCAT11(uStack19,local_14));
          do {
            if ((int)uStack30 < 0) break;
            iVar24 = CONCAT22(local_10[1],local_10[0]) * 2;
            uVar21 = local_10[1] >> 0xf;
            local_10[0] = (ushort)iVar24 | (ushort)(uVar16 >> 0x1f);
            uVar19 = uStack30 * 2;
            local_10[1] = (ushort)((uint)iVar24 >> 0x10);
            uVar16 = uVar16 * 2;
            local_14 = (byte)uVar16;
            uStack19 = (undefined)(uVar16 >> 8);
            uStack18 = (ushort)(uVar16 >> 0x10);
            uStack30 = uVar19 | uVar21;
            local_50 = local_50 + 0xffff;
            local_10[2] = (ushort)uStack30;
            local_10[3] = (ushort)(uVar19 >> 0x10);
          } while (0 < (short)local_50);
          uVar21 = (ushort)local_50;
          if ((short)uVar21 < 1) goto LAB_0040f94e;
LAB_0040f8f3:
          uVar8 = CONCAT11(uStack19,local_14);
        }
        if ((0x8000 < uVar8) || ((uVar16 & 0x1ffff) == 0x18000)) {
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
          bStack25 = (byte)(uVar21 >> 8) | bStack25 & 0x80;
          local_24 = uStack18;
          param_1 = CONCAT22(local_10[1],local_10[0]);
          uVar16 = CONCAT22((undefined2)uStack30,local_10[1]);
          uVar19 = CONCAT22(local_10[0],uStack18);
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
      iVar24 = (((bStack25 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
      uStack30._2_2_ = (ushort)iVar24;
      local_1a = (undefined)((uint)iVar24 >> 0x10);
      bStack25 = (byte)((uint)iVar24 >> 0x18);
    }
    uVar16 = 0;
    uVar19 = uVar16;
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
    uVar12 = (uint)uStack30._2_2_;
    iVar25 = 8;
    do {
      uVar6 = uVar19 >> 0x1f;
      uVar26 = uVar16 * 2;
      uVar17 = uVar12 * 2;
      uVar19 = uVar19 * 2;
      uVar12 = uVar17 | uVar16 >> 0x1f;
      uVar16 = uVar26 | uVar6;
      local_24 = (ushort)uVar19;
      uStack34._0_2_ = (ushort)(uVar19 >> 0x10);
      uStack30._2_2_ = (ushort)uVar12;
      local_1a = (undefined)(uVar17 >> 0x10);
      bStack25 = (byte)(uVar17 >> 0x18);
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    uStack34._2_2_ = (ushort)uVar16;
    uStack30._0_2_ = (undefined2)(uVar26 >> 0x10);
    local_48 = uVar12;
    local_44 = uVar19;
    if ((iVar24 < 0) && (uVar26 = -iVar24 & 0xff, uVar26 != 0)) {
      do {
        uVar6 = uVar19 >> 1;
        uVar19 = uVar6 | uVar16 << 0x1f;
        uVar17 = uVar16 >> 1;
        local_48 = uVar12 >> 1;
        uVar16 = uVar17 | uVar12 << 0x1f;
        uVar26 = uVar26 - 1;
        uStack30._2_2_ = (ushort)local_48;
        local_1a = (undefined)(local_48 >> 0x10);
        bStack25 = (byte)(uVar12 >> 0x19);
        local_24 = (ushort)uVar6;
        uStack34._0_2_ = (ushort)(uVar19 >> 0x10);
        uVar12 = local_48;
      } while (0 < (int)uVar26);
      uStack34._2_2_ = (ushort)uVar17;
      uStack30._0_2_ = (undefined2)(uVar16 >> 0x10);
      local_44 = uVar19;
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
        uVar19 = (uVar16 * 2 | local_44 >> 0x1f) * 2 | local_44 * 2 >> 0x1f;
        uVar12 = (local_48 * 2 | uVar16 >> 0x1f) * 2 | uVar16 * 2 >> 0x1f;
        uVar16 = CONCAT22((ushort)uStack34,local_24) + local_44 * 4;
        if ((uVar16 < local_44 * 4) ||
           (uVar26 = uVar19, uVar16 < CONCAT22((ushort)uStack34,local_24))) {
          uVar26 = uVar19 + 1;
          if ((uVar26 < uVar19) || (bVar27 = false, uVar26 == 0)) {
            bVar27 = true;
          }
          if (bVar27) {
            uVar12 = uVar12 + 1;
          }
        }
        uVar19 = CONCAT22((undefined2)uStack30,uStack34._2_2_) + uVar26;
        if ((uVar19 < uVar26) || (uVar19 < CONCAT22((undefined2)uStack30,uStack34._2_2_))) {
          uVar12 = uVar12 + 1;
        }
        local_44 = uVar16 * 2;
        local_24 = (ushort)local_44;
        uStack34._0_2_ = (ushort)(local_44 >> 0x10);
        uVar16 = uVar19 * 2 | uVar16 >> 0x1f;
        uVar12 = (int)(local_38 + uVar12) * 2;
        uStack34._2_2_ = (ushort)uVar16;
        uStack30._0_2_ = (undefined2)(uVar19 * 2 >> 0x10);
        uStack30._2_2_ = (ushort)uVar12 | (ushort)(uVar19 >> 0x1f);
        local_1a = (undefined)(uVar12 >> 0x10);
        *(char *)local_5c = (char)(uVar12 >> 0x18) + '0';
        local_5c = (short *)((int)local_5c + 1);
        local_58 = local_58 + -1;
        bStack25 = 0;
        if (local_58 < 1) break;
        local_48 = uVar12 & 0xffffff | uVar19 >> 0x1f;
      }
    }
    param_1 = CONCAT22(uStack34._2_2_,(ushort)uStack34);
    psVar14 = local_5c + -1;
    if (*(char *)((int)local_5c + -1) < '5') {
      while ((psVar1 <= psVar14 && (*(char *)psVar14 == '0'))) {
        psVar14 = (short *)((int)psVar14 + -1);
      }
      if (psVar14 < psVar1) {
        *param_6 = 0;
        *(byte *)(param_6 + 1) = ((sVar15 != -0x8000) - 1U & 0xd) + 0x20;
        *(undefined *)((int)param_6 + 3) = 1;
        *(char *)psVar1 = '0';
        goto LAB_0040fa55;
      }
    }
    else {
      while ((psVar1 <= psVar14 && (*(char *)psVar14 == '9'))) {
        *(char *)psVar14 = '0';
        psVar14 = (short *)((int)psVar14 + -1);
      }
      if (psVar14 < psVar1) {
        psVar14 = (short *)((int)psVar14 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar14 = *(char *)psVar14 + '\x01';
    }
    cVar7 = ((char)psVar14 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar7;
    *(undefined *)(cVar7 + 4 + (int)param_6) = 0;
  }
  else {
    local_4c = param_4 + (short)local_4c;
    if (0 < local_4c) goto LAB_0040fa60;
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((sVar15 != -0x8000) - 1U & 0xd) + 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
    *(undefined *)(param_6 + 2) = 0x30;
LAB_0040fa55:
    *(undefined *)((int)param_6 + 5) = 0;
  }
LAB_0040fc09:
  uStack34 = param_1;
  FUN_00404f47(local_8 ^ (uint)&stack0xfffffffc,(char)uVar16,uVar29);
  return;
}



// Library Function - Single Match
//  ___hw_cw_sse2
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release

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
  uVar2 = param_1 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __cdecl FUN_0040fd09(uint param_1,uint param_2)

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
//  __hw_cw
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release

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
//  ___set_fpsr_sse2
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void ___set_fpsr_sse2(uint param_1)

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


