typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    dword hash;
    void * spare;
    char[0] name;
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor * pType;
    ptrdiff_t dispCatchObj;
    void * addressOfHandler;
};

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Class Structure
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinApp { // PlaceHolder Class Structure
};

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Class Structure
};

typedef unsigned short    wchar16;
typedef struct CBrush CBrush, *PCBrush;

struct CBrush { // PlaceHolder Class Structure
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

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType * pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry * pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry * pTryBlockMap;
    uint nIPMapEntries;
    void * pIPToStateMap;
};

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (* action)(void);
};

typedef struct CDialog CDialog, *PCDialog;

struct CDialog { // PlaceHolder Class Structure
};

typedef struct CCmdTarget CCmdTarget, *PCCmdTarget;

struct CCmdTarget { // PlaceHolder Class Structure
};

typedef struct CObject CObject, *PCObject;

struct CObject { // PlaceHolder Class Structure
};

typedef struct CGdiObject CGdiObject, *PCGdiObject;

struct CGdiObject { // PlaceHolder Class Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Class Structure
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef ulong DWORD;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef ushort WORD;

typedef uchar BYTE;

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

typedef void * PVOID;

typedef ulong ULONG_PTR;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef CHAR * LPCSTR;

typedef CONTEXT * PCONTEXT;

typedef long LONG;

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

typedef uint UINT_PTR;

typedef long LONG_PTR;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ * HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ * HDC;

struct HDC__ {
    int unused;
};

typedef UINT_PTR WPARAM;

typedef LONG_PTR LRESULT;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef LONG_PTR LPARAM;

typedef struct HICON__ * HICON;

typedef void * HGDIOBJ;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef int BOOL;

typedef struct HBRUSH__ * HBRUSH;

typedef struct tagSIZE * LPSIZE;

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

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
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

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
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

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Structure
};

typedef struct CPen CPen, *PCPen;

struct CPen { // PlaceHolder Structure
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Structure
};

typedef struct AFX_OLECMDMAP AFX_OLECMDMAP, *PAFX_OLECMDMAP;

struct AFX_OLECMDMAP { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID { // PlaceHolder Structure
};

typedef struct AFX_EVENTSINKMAP AFX_EVENTSINKMAP, *PAFX_EVENTSINKMAP;

struct AFX_EVENTSINKMAP { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct AFX_CONNECTIONMAP AFX_CONNECTIONMAP, *PAFX_CONNECTIONMAP;

struct AFX_CONNECTIONMAP { // PlaceHolder Structure
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown { // PlaceHolder Structure
};

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};

typedef struct CWnd CWnd, *PCWnd;

struct CWnd { // PlaceHolder Structure
};

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};

typedef struct CFont CFont, *PCFont;

struct CFont { // PlaceHolder Structure
};

typedef struct tagMSG tagMSG, *PtagMSG;

struct tagMSG { // PlaceHolder Structure
};

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};

typedef struct AFX_INTERFACEMAP AFX_INTERFACEMAP, *PAFX_INTERFACEMAP;

struct AFX_INTERFACEMAP { // PlaceHolder Structure
};

typedef struct tagCREATESTRUCTA tagCREATESTRUCTA, *PtagCREATESTRUCTA;

struct tagCREATESTRUCTA { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP AFX_MSGMAP, *PAFX_MSGMAP;

struct AFX_MSGMAP { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef int (* _onexit_t)(void);

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




undefined ** __fastcall FUN_00401020(undefined **param_1)

{
  CWinApp::CWinApp((CWinApp *)param_1,(char *)0x0);
  *param_1 = (undefined *)&PTR_LAB_00402038;
  return param_1;
}



CWinApp * __thiscall FUN_00401040(void *this,byte param_1)

{
  CWinApp::_CWinApp((CWinApp *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CWinApp *)this;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CWinApp::_CWinApp(CWinApp *this)

{
                    // WARNING: Could not recover jumptable at 0x00401824. Too many branches
                    // WARNING: Treating indirect jump as call
  _CWinApp();
  return;
}



void FUN_00401080(void)

{
  FUN_00401020((undefined **)&DAT_00403048);
  return;
}



undefined4 __fastcall FUN_004010b0(CWinApp *param_1)

{
  undefined4 *in_FS_OFFSET;
  CDialog local_70 [100];
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack8 = &LAB_00401c78;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  CWinApp::Enable3dControls(param_1);
  FUN_00401150(local_70,(CWnd *)0x0);
  local_4 = 0;
  *(CDialog **)(param_1 + 0x20) = local_70;
  CDialog::DoModal(local_70);
  local_4 = 0xffffffff;
  CDialog::_CDialog(local_70);
  *in_FS_OFFSET = local_c;
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CDialog::_CDialog(CDialog *this)

{
                    // WARNING: Could not recover jumptable at 0x0040182a. Too many branches
                    // WARNING: Treating indirect jump as call
  _CDialog();
  return;
}



undefined ** __thiscall FUN_00401150(void *this,CWnd *param_1)

{
  HINSTANCE__ *hInstance;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpIconName;
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack8 = &LAB_00401c98;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  CDialog::CDialog((CDialog *)this,0x66,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00402138;
  AfxGetModuleState();
  lpIconName = (LPCSTR)0x80;
  hInstance = AfxFindResourceHandle((char *)0x80,(char *)0xe);
  pHVar1 = LoadIconA((HINSTANCE)hInstance,lpIconName);
  *(HICON *)((int)this + 0x60) = pHVar1;
  *in_FS_OFFSET = local_c;
  return (undefined **)this;
}



CDialog * __thiscall FUN_004011c0(void *this,byte param_1)

{
  CDialog::_CDialog((CDialog *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (CDialog *)this;
}



undefined4 __fastcall FUN_00401210(CDialog *param_1)

{
  CDialog::OnInitDialog(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x60));
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x60));
  return 1;
}



// WARNING: Could not reconcile some variable overlaps

void __fastcall FUN_00401250(CWnd *param_1)

{
  HFONT pHVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int cWidth;
  int cEscapement;
  int cOrientation;
  int cWeight;
  DWORD bItalic;
  DWORD bUnderline;
  DWORD bStrikeOut;
  DWORD iCharSet;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  char *pszFaceName;
  undefined **appuStack148 [2];
  CFont *pCStack140;
  CBrush local_88 [4];
  undefined **local_84;
  CPen local_80 [4];
  undefined8 uStack124;
  undefined local_70 [4];
  LONG local_6c;
  HDC local_68;
  HDC local_64;
  CPaintDC local_60 [4];
  HDC local_5c;
  undefined4 uStack24;
  undefined4 local_10;
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack8 = &LAB_00401cf4;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  CPaintDC::CPaintDC(local_60,param_1);
  local_4 = 0;
  CDC::SetMapMode((CDC *)local_60,2);
  CBrush::CBrush(local_88,0xc0ffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_70 = 100;
  local_6c = -100;
  local_68 = (HDC)0x258;
  local_64 = (HDC)0xfffffda8;
  FillRect(local_5c,(RECT *)local_70,
           (HBRUSH)(-(uint)((undefined *)register0x00000010 != (undefined *)0x88) & (uint)local_84))
  ;
  iVar3 = 100;
  iVar4 = -100;
  iVar2 = 0xb;
  do {
    CDC::MoveTo((CDC *)local_60,(int)local_70,iVar3);
    CDC::LineTo((CDC *)(local_70 + 0xc),iVar4 + 700,-100);
    CDC::MoveTo((CDC *)(local_70 + 0xc),(int)&stack0xffffff68,100);
    CDC::LineTo((CDC *)(local_70 + 8),600,iVar3 + -700);
    iVar3 = iVar3 + 0x32;
    iVar4 = iVar4 + -0x32;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  CPen::CPen(local_80,0,0x1e,0xff);
  local_c = CONCAT31(local_c._1_3_,2);
  local_84 = (undefined **)CDC::SelectObject((CDC *)(local_70 + 8),local_80);
  CDC::MoveTo((CDC *)(local_70 + 8),(int)&uStack124 + 4,100);
  CDC::LineTo((CDC *)(local_70 + 4),100,-600);
  CDC::LineTo((CDC *)(local_70 + 4),600,-600);
  CDC::LineTo((CDC *)(local_70 + 4),600,-100);
  CDC::LineTo((CDC *)(local_70 + 4),100,-100);
  if ((undefined *)register0x00000010 != (undefined *)0x88) {
    SelectObject(local_68,local_88);
  }
  iVar3 = 700;
  CDC::SetTextAlign((CDC *)(local_70 + 4),0x18);
  CDC::SetBkMode((CDC *)(local_70 + 4),1);
  iVar2 = 0;
  do {
    pszFaceName = s_Arial_0040302c;
    iPitchAndFamily = 0x22;
    iQuality = 0;
    iClipPrecision = 0;
    iOutPrecision = 0;
    iCharSet = 0;
    bStrikeOut = 0;
    bUnderline = 0;
    bItalic = 0;
    cWeight = 0;
    cOrientation = 0;
    cEscapement = 0;
    local_10 = CONCAT31(local_10._1_3_,3);
    cWidth = 0;
    iVar4 = _ftol();
    pHVar1 = CreateFontA(iVar4,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                         ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName
                        );
    CGdiObject::Attach((CGdiObject *)&stack0xffffff60,pHVar1);
    pCStack140 = CDC::SelectObject((CDC *)(local_70 + 4),(CFont *)&stack0xffffff60);
    TextOutA(local_68,iVar3,-600,s_Fading____00403020 + iVar2,1);
    GetTextExtentPointA(local_64,s_Fading____00403020 + iVar2,1,(LPSIZE)&uStack124);
    iVar3 = iVar3 + (int)uStack124;
    if ((undefined *)register0x00000010 != (undefined *)0x8c) {
      SelectObject(local_68,&pCStack140);
    }
    local_10 = CONCAT31(local_10._1_3_,4);
    CGdiObject::DeleteObject((CGdiObject *)&stack0xffffff60);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  local_84 = &PTR_LAB_00402228;
  local_10._0_1_ = 5;
  CGdiObject::DeleteObject((CGdiObject *)&local_84);
  appuStack148[0] = &PTR_LAB_00402228;
  local_84 = &PTR_LAB_00402210;
  local_10 = CONCAT31(local_10._1_3_,6);
  CGdiObject::DeleteObject((CGdiObject *)appuStack148);
  appuStack148[0] = &PTR_LAB_00402210;
  local_10 = 0xffffffff;
  CPaintDC::_CPaintDC((CPaintDC *)(local_70 + 4));
  *in_FS_OFFSET = uStack24;
  return;
}



undefined ** __thiscall FUN_004015a0(void *this,byte param_1)

{
  FUN_004015c0((undefined **)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void __fastcall FUN_004015c0(undefined **param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  puStack8 = &LAB_00401d08;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  *param_1 = (undefined *)&PTR_LAB_00402228;
  local_4 = 0;
  CGdiObject::DeleteObject((CGdiObject *)param_1);
  *param_1 = (undefined *)&PTR_LAB_00402210;
  *in_FS_OFFSET = local_c;
  return;
}



undefined ** __thiscall FUN_004016b0(void *this,byte param_1)

{
  FUN_004016d0((undefined **)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void __fastcall FUN_004016d0(undefined **param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  puStack8 = &LAB_00401d68;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  *param_1 = (undefined *)&PTR_LAB_00402228;
  local_4 = 0;
  CGdiObject::DeleteObject((CGdiObject *)param_1);
  *param_1 = (undefined *)&PTR_LAB_00402210;
  *in_FS_OFFSET = local_c;
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00401818. Too many branches
                    // WARNING: Treating indirect jump as call
  CWinApp();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0040181e. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CWinApp::_CWinApp(CWinApp *this)

{
                    // WARNING: Could not recover jumptable at 0x00401824. Too many branches
                    // WARNING: Treating indirect jump as call
  _CWinApp();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CDialog::_CDialog(CDialog *this)

{
                    // WARNING: Could not recover jumptable at 0x0040182a. Too many branches
                    // WARNING: Treating indirect jump as call
  _CDialog();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401830. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = DoModal();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CWinApp::Enable3dControls(CWinApp *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401836. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = Enable3dControls();
  return iVar1;
}



HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2)

{
  HINSTANCE__ *pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x004018f0. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = AfxFindResourceHandle(param_1,param_2);
  return pHVar1;
}



AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    // WARNING: Could not recover jumptable at 0x004018f6. Too many branches
                    // WARNING: Treating indirect jump as call
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    // WARNING: Could not recover jumptable at 0x004018fc. Too many branches
                    // WARNING: Treating indirect jump as call
  CDialog();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401902. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = OnInitDialog();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CPaintDC::_CPaintDC(CPaintDC *this)

{
                    // WARNING: Could not recover jumptable at 0x0040191a. Too many branches
                    // WARNING: Treating indirect jump as call
  _CPaintDC();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401920. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = DeleteObject();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

CFont * __thiscall CDC::SelectObject(CDC *this,CFont *param_1)

{
  CFont *pCVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401926. Too many branches
                    // WARNING: Treating indirect jump as call
  pCVar1 = (CFont *)SelectObject();
  return pCVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040192c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = Attach();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CDC::SetBkMode(CDC *this,int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401932. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = SetBkMode();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

uint __thiscall CDC::SetTextAlign(CDC *this,uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401938. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = SetTextAlign();
  return uVar1;
}



// WARNING: Exceeded maximum restarts with more pending

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CPen *pCVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040193e. Too many branches
                    // WARNING: Treating indirect jump as call
  pCVar1 = (CPen *)SelectObject();
  return pCVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CPen::CPen(CPen *this,int param_1,int param_2,ulong param_3)

{
                    // WARNING: Could not recover jumptable at 0x00401944. Too many branches
                    // WARNING: Treating indirect jump as call
  CPen();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CDC::LineTo(CDC *this,int param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040194a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = LineTo();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

CPoint __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2)

{
  CPoint CVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401950. Too many branches
                    // WARNING: Treating indirect jump as call
  CVar1 = (CPoint)MoveTo();
  return CVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CBrush::CBrush(CBrush *this,ulong param_1)

{
                    // WARNING: Could not recover jumptable at 0x00401956. Too many branches
                    // WARNING: Treating indirect jump as call
  CBrush();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __thiscall CDC::SetMapMode(CDC *this,int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040195c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = SetMapMode();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00401962. Too many branches
                    // WARNING: Treating indirect jump as call
  CPaintDC();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00401970(_onexit_t param_1)

{
  if (_DAT_00403130 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_00403130,&DAT_0040312c);
  return;
}



int __cdecl FUN_004019a0(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401970(param_1);
  return (iVar1 != 0) - 1;
}



void _ftol(void)

{
                    // WARNING: Could not recover jumptable at 0x004019d0. Too many branches
                    // WARNING: Treating indirect jump as call
  _ftol();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined4 *puVar1;
  byte **ppbVar2;
  HMODULE pHVar3;
  undefined4 *in_FS_OFFSET;
  HINSTANCE__ *pHVar4;
  byte *pbVar5;
  byte *local_78;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  undefined local_60 [68];
  undefined *local_1c;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_00402258;
  puStack16 = &DAT_00401bf0;
  uStack20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack20;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  __set_app_type(2);
  _DAT_0040312c = 0xffffffff;
  _DAT_00403130 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00403120;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0040311c;
  _DAT_00403128 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_00401be0();
  if (DAT_00403040 == 0) {
    __setusermatherr(&LAB_00401bd0);
  }
  FUN_00401bb0();
  _initterm(&DAT_00403010,&DAT_00403014);
  local_70 = (int)DAT_00403118;
  __getmainargs(&local_64,&local_74,&local_68,DAT_00403114,&local_70);
  _initterm(&DAT_00403000,&DAT_0040300c);
  ppbVar2 = (byte **)__p__acmdln();
  local_78 = *ppbVar2;
  if (*local_78 == 0x22) {
    do {
      pbVar5 = local_78;
      local_78 = pbVar5 + 1;
      if (*local_78 == 0) break;
    } while (*local_78 != 0x22);
    if (*local_78 == 0x22) {
      local_78 = pbVar5 + 2;
    }
  }
  else {
    while (0x20 < *local_78) {
      local_78 = local_78 + 1;
    }
  }
  while ((pbVar5 = local_78, *local_78 != 0 && (*local_78 < 0x21))) {
    local_78 = local_78 + 1;
  }
  local_60._44_4_ = 0;
  GetStartupInfoA((LPSTARTUPINFOA)local_60);
  if ((local_60._44_4_ & 1) == 0) {
    local_60._48_4_ = 10;
  }
  else {
    local_60._48_4_ = local_60._48_4_ & 0xffff;
  }
  pHVar4 = (HINSTANCE__ *)0x0;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_00401bfc((HINSTANCE__ *)pHVar3,pHVar4,(char *)pbVar5,local_60._48_4_);
                    // WARNING: Subroutine does not return
  exit(local_6c);
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00401b90. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401b96. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter();
  return iVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00401b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void FUN_00401bb0(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



void FUN_00401be0(void)

{
  return;
}



// WARNING: Exceeded maximum restarts with more pending

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401bf6. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp();
  return uVar1;
}



void FUN_00401bfc(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  AfxWinMain(param_1,param_2,param_3,param_4);
  return;
}



undefined4 FUN_00401c14(int param_1,undefined4 param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  pAVar1[0x14] = SUB41(param_1,0);
  *(undefined4 *)(pAVar1 + 0x1040) = param_2;
  if (param_1 == 0) {
    _setmbcp(-3);
  }
  return 1;
}



int AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401c60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = AfxWinMain(param_1,param_2,param_3,param_4);
  return iVar1;
}



void Unwind_00401c70(void)

{
  int unaff_EBP;
  
  CDialog::_CDialog((CDialog *)(unaff_EBP + -0x70));
  return;
}



void Unwind_00401c90(void)

{
  int unaff_EBP;
  
  CDialog::_CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



void Unwind_00401cb0(void)

{
  int unaff_EBP;
  
  CPaintDC::_CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  return;
}



void Unwind_00401cb8(void)

{
  undefined **this;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  this = (undefined **)(unaff_EBP + -0x88);
  puStack8 = &LAB_00401d48;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  *this = (undefined *)&PTR_LAB_00402228;
  local_4 = 0;
  CGdiObject::DeleteObject((CGdiObject *)this);
  *this = (undefined *)&PTR_LAB_00402210;
  *in_FS_OFFSET = local_c;
  return;
}



void Unwind_00401cc3(void)

{
  undefined **this;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 local_c;
  undefined *puStack8;
  undefined4 local_4;
  
  this = (undefined **)(unaff_EBP + -0x78);
  puStack8 = &LAB_00401d28;
  local_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_c;
  *this = (undefined *)&PTR_LAB_00402228;
  local_4 = 0;
  CGdiObject::DeleteObject((CGdiObject *)this);
  *this = (undefined *)&PTR_LAB_00402210;
  *in_FS_OFFSET = local_c;
  return;
}



void Unwind_00401ccb(void)

{
  int unaff_EBP;
  
  FUN_004016d0((undefined **)(unaff_EBP + -0x94));
  return;
}



void Unwind_00401cd6(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x94) = &PTR_LAB_00402210;
  return;
}



void Unwind_00401ce1(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x78) = &PTR_LAB_00402210;
  return;
}



void Unwind_00401ce9(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x88) = &PTR_LAB_00402210;
  return;
}



void Unwind_00401d00(void)

{
  int unaff_EBP;
  
  **(undefined ***)(unaff_EBP + -0x10) = (undefined *)&PTR_LAB_00402210;
  return;
}



void Unwind_00401d20(void)

{
  int unaff_EBP;
  
  **(undefined ***)(unaff_EBP + -0x10) = (undefined *)&PTR_LAB_00402210;
  return;
}



void Unwind_00401d40(void)

{
  int unaff_EBP;
  
  **(undefined ***)(unaff_EBP + -0x10) = (undefined *)&PTR_LAB_00402210;
  return;
}



void Unwind_00401d60(void)

{
  int unaff_EBP;
  
  **(undefined ***)(unaff_EBP + -0x10) = (undefined *)&PTR_LAB_00402210;
  return;
}


