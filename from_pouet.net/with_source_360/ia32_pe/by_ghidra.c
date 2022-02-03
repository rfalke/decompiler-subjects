typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
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

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

typedef uchar BYTE;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef ushort WORD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ * HDC;

struct HDC__ {
    int unused;
};

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef WORD ATOM;

typedef struct HMENU__ HMENU__, *PHMENU__;

struct HMENU__ {
    int unused;
};

typedef struct tagRECT * LPRECT;

typedef void * HANDLE;

typedef HANDLE HGLOBAL;

typedef void * LPVOID;

typedef HINSTANCE HMODULE;

typedef int BOOL;

typedef struct HMENU__ * HMENU;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

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




void FUN_00401000(void)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  pcVar2 = DAT_00402104;
  do {
    cVar1 = bVar3 << 1;
    if (0x7f < bVar3) {
      *pcVar2 = cVar1;
    }
    pcVar2[1] = cVar1;
    pcVar2[2] = cVar1;
    pcVar2 = pcVar2 + 4;
    bVar3 = bVar3 + 1;
  } while (bVar3 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401020(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  float10 in_ST0;
  float10 fVar12;
  float10 in_ST1;
  float10 fVar13;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  
  DAT_0040213c = DAT_0040213c - 1;
  _DAT_0040213a = _DAT_0040213a & 0xffff | (uint)DAT_0040213c << 0x10;
  uVar6 = 0;
  do {
    uVar10 = 0x402;
    uVar4 = 0xf400;
    fVar13 = in_ST0;
    fVar12 = in_ST1;
    in_ST0 = in_ST2;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    uVar5 = uVar6;
    do {
      in_ST5 = in_ST6;
      in_ST4 = in_ST3;
      in_ST3 = in_ST2;
      in_ST2 = in_ST1;
      in_ST1 = in_ST0;
      in_ST0 = fVar12;
      fVar12 = fVar13;
      cVar1 = (char)uVar5 + -0x80;
      uVar4 = (uint)(ushort)((short)uVar4 - (short)cVar1 * (short)cVar1);
      uVar5 = uVar6 >> 8;
      uVar10 = uVar10 + 1;
      fVar13 = (float10)(short)cVar1;
      in_ST6 = in_ST4;
    } while ((POPCOUNT(uVar10 & 0xff) & 1U) == 0);
    fVar13 = (float10)fpatan(fVar12,(float10)(short)cVar1);
    DAT_0040213e = (short)ROUND(fVar13 * (float10)_DAT_0040213a);
    uVar10 = (ushort)(DAT_0040213e + _DAT_0040213b) >> 8;
    uVar5 = (uint)uVar10 << 8;
    bVar2 = (byte)(uVar4 >> 8);
    uVar3 = (DAT_0040213e + _DAT_0040213b & 0xff00U | (ushort)bVar2) & 0x707;
    cVar1 = (char)uVar3 + (char)((uint)uVar3 >> 8) + bVar2;
    if (0xee < bVar2) {
      uVar5 = CONCAT31((uint3)uVar10,0x50);
    }
    if (bVar2 < 0xeb) {
      uVar10 = (ushort)uVar5 & 0x1fff;
      uVar5 = (uint)uVar10;
      if ((byte)(uVar5 >> 8) < 4) {
        if (0xe8 < bVar2) {
          cVar1 = (bVar2 >> 3 | bVar2 << 5) + 0x9b;
          uVar5 = (uint)(ushort)(uVar10 - 1);
        }
        cVar1 = cVar1 + -0x14;
      }
      if (bVar2 < 0xb5) {
        uVar5 = (uint)(ushort)((short)uVar5 - 1);
      }
    }
    *(char *)(uVar6 + DAT_0040211c) = (char)uVar5;
    *(char *)(uVar6 + DAT_00402120) = cVar1 + -0x80;
    uVar10 = (short)uVar6 + 1;
    uVar6 = (uint)uVar10;
    in_ST6 = in_ST5;
  } while (uVar10 != 0);
  iVar11 = 0x3e800;
  sVar9 = -100;
  do {
    sVar8 = -0xa0;
    do {
      uVar6 = 0x7f40;
      bVar2 = (byte)(DAT_0040213c << 1);
      cVar1 = (bVar2 & 0x7f) - 0x40;
      uVar10 = (short)cVar1 * (short)cVar1;
      uVar10 = uVar10 & 0xff | (ushort)(byte)((char)((uint)uVar10 >> 8) - 0x10) << 8;
      uVar3 = (short)(char)bVar2 >> 0xf ^ uVar10;
      uVar10 = uVar10 * 2;
      uVar5 = (uint)(ushort)(uVar3 & 0xff | (ushort)(byte)((char)((uint)uVar3 >> 8) + 0x24) << 8);
      uVar10 = uVar10 & 0xff | (ushort)(byte)((char)((uint)uVar10 >> 8) - 1) << 8;
LAB_00401106:
      do {
        uVar6 = (uint)(ushort)((short)uVar6 + sVar8);
        uVar5 = (uint)(ushort)((short)uVar5 + sVar9);
        uVar10 = uVar10 - 0xa0;
        uVar4 = (uint)(ushort)(uVar10 & 0xff00 | (ushort)(byte)(uVar6 >> 8));
        bVar2 = *(byte *)(uVar4 + DAT_0040211c);
        cVar1 = *(char *)(uVar4 + DAT_00402120);
        uVar4 = (uint)CONCAT11(bVar2,cVar1);
        if ((char)bVar2 < '\0') break;
        bVar7 = (byte)(uVar5 >> 8);
        if (bVar2 != 0) {
          if (bVar7 < bVar2) goto LAB_00401106;
          if ((char)bVar2 <= (char)bVar7) {
            uVar4 = (uint)(byte)(cVar1 + bVar2);
          }
        }
      } while (bVar7 < 0x47);
      *(undefined4 *)(iVar11 + (int)DAT_00402100) =
           *(undefined4 *)((uVar4 & 0xff) * 4 + DAT_00402104);
      iVar11 = iVar11 + -4;
      sVar8 = sVar8 + 1;
    } while (sVar8 != 0xa0);
    sVar9 = sVar9 + 1;
    if (sVar9 == 100) {
      GetClientRect(DAT_004020cc,(LPRECT)&DAT_004020f0);
      StretchDIBits(DAT_004020d0,0,0,DAT_004020f8,DAT_004020fc,0,0,0x140,200,DAT_00402100,
                    (BITMAPINFO *)&DAT_0040206c,0,0xcc0020);
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  ATOM AVar1;
  HGLOBAL pvVar2;
  undefined2 extraout_var;
  HWND hWnd;
  
  pvVar2 = GlobalAlloc(0,1000000);
  if (pvVar2 != (HGLOBAL)0x0) {
    DAT_00402100 = (int)pvVar2 + 2000;
    DAT_0040211c = (int)pvVar2 + 0x62250;
    DAT_00402120 = (int)pvVar2 + 0x92f90;
    DAT_00402104 = pvVar2;
    DAT_0040210c = pvVar2;
    DAT_004020b4 = GetModuleHandleW((LPCWSTR)0x0);
    _DAT_004020b8 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    _DAT_004020bc = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    AVar1 = RegisterClassW((WNDCLASSW *)&DAT_004020a4);
    if (CONCAT22(extraout_var,AVar1) != 0) {
      hWnd = CreateWindowExW(0,u_DEMODEMO_00402000,u____http___www_devreci_com____00402012,
                             0x10cf0000,0x8000,0x8000,0x21c,400,(HWND)0x0,(HMENU)0x0,DAT_004020b4,
                             (LPVOID)0x0);
      if (hWnd != (HWND)0x0) {
        DAT_004020cc = hWnd;
        DAT_004020d0 = GetDC(hWnd);
        FUN_00401000();
        FUN_00401020();
        SetStretchBltMode(DAT_004020d0,4);
        while( true ) {
          PeekMessageW((LPMSG)&DAT_004020d4,(HWND)0x0,0,0,1);
          if (_DAT_004020d8 == 0x12) break;
          TranslateMessage((MSG *)&DAT_004020d4);
          DispatchMessageW((MSG *)&DAT_004020d4);
          FUN_00401020();
          _DAT_00402108 = _DAT_00402108 + 1;
        }
        goto LAB_004012fa;
      }
    }
  }
  MessageBoxW((HWND)0x0,u_Startup_failed__0040204c,(LPCWSTR)0x0,0x10);
LAB_004012fa:
  ReleaseDC(DAT_004020cc,DAT_004020d0);
  GlobalFree(DAT_0040210c);
                    // WARNING: Subroutine does not return
  ExitProcess(DAT_004020dc);
}


