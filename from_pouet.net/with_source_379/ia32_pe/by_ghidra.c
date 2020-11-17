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



undefined8 __fastcall FUN_00401020(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = 0x200;
  puVar2 = DAT_00402124;
  do {
    *puVar2 = (&DAT_00402146)[(ushort)((ushort)(byte)((uint)uVar1 >> 8) * 0x40 + uVar1)];
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xb00);
  return CONCAT44(param_2,in_EAX);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401052(void)

{
  char cVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 in_ST1;
  float10 fVar14;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  
  DAT_00402140 = DAT_00402140 + 1;
  _DAT_0040213e = _DAT_0040213e & 0xffff | (uint)DAT_00402140 << 0x10;
  uVar8 = 0;
  do {
    uVar11 = 0x402;
    uVar6 = 0xf200;
    fVar14 = in_ST0;
    fVar13 = in_ST1;
    in_ST0 = in_ST2;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    uVar7 = uVar8;
    do {
      in_ST5 = in_ST6;
      in_ST4 = in_ST3;
      in_ST3 = in_ST2;
      in_ST2 = in_ST1;
      in_ST1 = in_ST0;
      in_ST0 = fVar13;
      fVar13 = fVar14;
      cVar3 = (char)uVar7 + -0x80;
      uVar9 = (short)uVar6 - (short)cVar3 * (short)cVar3;
      uVar6 = (uint)uVar9;
      uVar7 = uVar8 >> 8;
      uVar11 = uVar11 + 1;
      fVar14 = (float10)(short)cVar3;
      in_ST6 = in_ST4;
    } while ((POPCOUNT(uVar11 & 0xff) & 1U) == 0);
    fVar14 = (float10)fpatan(fVar13,(float10)(short)cVar3);
    DAT_00402144 = (ushort)ROUND(fVar14 * (float10)_DAT_0040213e);
    uVar11 = DAT_00402144 + _DAT_0040213f;
    uVar7 = (uint)(uVar11 >> 8) << 8;
    bVar4 = (byte)(uVar6 >> 8);
    uVar5 = (uVar11 & 0xff00 | (ushort)bVar4) & 0x707;
    cVar3 = (char)uVar5 + (char)((uint)uVar5 >> 8) + bVar4;
    if ((bVar4 < 0xed) && (0xea < bVar4)) {
      uVar7 = (uint)(uVar11 >> 8) << 8 | (uint)(uVar11 >> 9);
      cVar3 = (char)((uint)(ushort)(uVar9 * 0x20) >> 8) + '`';
    }
    if (bVar4 < 0xe7) {
      uVar11 = (ushort)uVar7 & 0x1fff;
      uVar7 = (uint)uVar11;
      if ((byte)(uVar7 >> 8) < 4) {
        if (0xe4 < bVar4) {
          cVar3 = (bVar4 >> 3 | bVar4 << 5) + 0x1e;
          uVar7 = (uint)(ushort)(uVar11 - 1);
        }
        cVar3 = cVar3 + -0x14;
      }
      if (bVar4 < 0xb3) {
        uVar7 = (uint)(ushort)((short)uVar7 - 1);
      }
    }
    DAT_00402144 = uVar9;
    *(char *)(uVar8 + DAT_0040211c) = (char)uVar7;
    *(char *)(uVar8 + DAT_00402120) = cVar3 + -0x80;
    uVar11 = (short)uVar8 + 1;
    uVar8 = (uint)uVar11;
    in_ST6 = in_ST5;
  } while (uVar11 != 0);
  iVar12 = 0x3e800;
  sVar10 = 100;
  do {
    _DAT_00402142 = -0xa0;
    do {
      uVar8 = 0x7f40;
      bVar4 = (byte)(DAT_00402140 << 1);
      cVar3 = (bVar4 & 0x7f) - 0x40;
      uVar11 = (short)cVar3 * (short)cVar3;
      uVar11 = uVar11 & 0xff | (ushort)(byte)((char)((uint)uVar11 >> 8) - 0x10) << 8;
      uVar9 = (short)(char)bVar4 >> 0xf ^ uVar11;
      uVar11 = uVar11 * 2;
      uVar11 = uVar11 & 0xff | (ushort)(byte)((char)((uint)uVar11 >> 8) - 1) << 8;
      uVar7 = (uint)(ushort)(uVar9 & 0xff | (ushort)(byte)((char)((uint)uVar9 >> 8) + 0x20) << 8);
      do {
        uVar8 = (uint)(ushort)((short)uVar8 + _DAT_00402142);
        uVar7 = (uint)(ushort)((short)uVar7 + sVar10);
        uVar11 = uVar11 - 0xa0;
        uVar6 = (uint)(ushort)(uVar11 & 0xff00 | (ushort)(byte)(uVar8 >> 8));
        cVar3 = *(char *)(DAT_0040211c + uVar6);
        cVar1 = *(char *)(DAT_00402120 + uVar6);
        uVar6 = (uint)CONCAT11(cVar3,cVar1);
        if (cVar3 < '\0') break;
        bVar4 = (byte)(uVar7 >> 8);
        if (cVar3 != '\0') {
          uVar6 = (uint)CONCAT11(*(undefined *)(DAT_00402124 + (uint)CONCAT11(bVar4 >> 1,cVar3)),
                                 cVar1);
          if ((char)(uVar6 >> 8) != '\0') {
            uVar6 = (uint)(byte)(cVar1 + 0x80);
            break;
          }
        }
      } while (bVar4 < 0x47);
      *(undefined4 *)(iVar12 + (int)DAT_00402100) =
           *(undefined4 *)((uVar6 & 0xff) * 4 + DAT_00402104);
      sVar2 = _DAT_00402142;
      iVar12 = iVar12 + -4;
      _DAT_00402142 = _DAT_00402142 + 1;
    } while (sVar2 != 0x9f);
    sVar10 = sVar10 + -1;
    if (sVar10 == -100) {
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
  undefined2 *puVar2;
  undefined2 extraout_var;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar3;
  
  puVar2 = (undefined2 *)GlobalAlloc(0,1000000);
  if (puVar2 != (undefined2 *)0x0) {
    DAT_00402100 = puVar2 + 1000;
    DAT_0040211c = puVar2 + 0x31128;
    DAT_00402120 = puVar2 + 0x497c8;
    DAT_00402124 = puVar2 + 0x55b18;
    iVar3 = 499999;
    DAT_00402104 = puVar2;
    DAT_0040210c = puVar2;
    do {
      *DAT_0040210c = 0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_004020b4 = (HINSTANCE)GetModuleHandleW((LPCWSTR)0x0);
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
        FUN_00401020(extraout_ECX,extraout_EDX);
        FUN_00401052();
        SetStretchBltMode(DAT_004020d0,4);
        while( true ) {
          PeekMessageW((LPMSG)&DAT_004020d4,(HWND)0x0,0,0,1);
          if (_DAT_004020d8 == 0x12) break;
          TranslateMessage((MSG *)&DAT_004020d4);
          DispatchMessageW((MSG *)&DAT_004020d4);
          FUN_00401052();
          _DAT_00402108 = _DAT_00402108 + 1;
        }
        goto LAB_0040138c;
      }
    }
  }
  MessageBoxW((HWND)0x0,u_Startup_failed__0040204c,(LPCWSTR)0x0,0x10);
LAB_0040138c:
  ReleaseDC(DAT_004020cc,DAT_004020d0);
  GlobalFree(DAT_0040210c);
                    // WARNING: Subroutine does not return
  ExitProcess(DAT_004020dc);
}


