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
  char *pcVar1;
  char cVar2;
  
  cVar2 = '\0';
  pcVar1 = DAT_00402104;
  do {
    *pcVar1 = cVar2;
    pcVar1[1] = cVar2;
    pcVar1[2] = cVar2;
    pcVar1 = pcVar1 + 4;
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != '\0');
  return;
}



undefined4 FUN_00401017(void)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar6;
  uint uVar5;
  undefined1 *puVar7;
  undefined *puVar8;
  
  iVar1 = 0xf00;
  puVar7 = &DAT_00402136;
  puVar8 = DAT_00402118;
  do {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar5 = 0;
  do {
    cVar2 = -5;
    bVar4 = (byte)uVar5;
    if ((bVar4 < 0xfc) && (3 < bVar4)) {
      bVar6 = (byte)(uVar5 >> 8) >> 2;
      if ((DAT_00402118[(ushort)((ushort)bVar6 * 0x40 + CONCAT11(bVar6,bVar4 >> 2)) - 0x21c4] & 0xfb
          ) == 0) {
        uVar3 = (ushort)uVar5 & 0xf0f;
        cVar2 = ((char)uVar3 + (char)((uint)uVar3 >> 8)) * '\x04';
      }
    }
    *(char *)(DAT_0040211c + uVar5) = cVar2;
    uVar3 = (ushort)uVar5 - 1;
    uVar5 = (uint)uVar3;
  } while (uVar3 != 0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401088(void)

{
  short *psVar1;
  char *pcVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  short sVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  float10 in_ST0;
  float10 fVar15;
  float10 fVar16;
  float10 in_ST1;
  float10 fVar17;
  float10 in_ST2;
  float10 in_ST3;
  float10 fVar18;
  float10 in_ST4;
  uint uVar9;
  
  uVar5 = 0;
  uVar9 = 0x400;
  do {
    uVar4 = (short)uVar5 + 1;
    uVar5 = (uint)uVar4;
    *(ushort *)(&DAT_00402136 + uVar9) = *(short *)(&DAT_00402136 + uVar9) + uVar4;
    fVar17 = (float10)fcos((float10)*(short *)(&DAT_00402136 + uVar9) / (float10)_DAT_00402130);
    fVar15 = (float10)fsin((float10)*(short *)(&DAT_00402136 + uVar9) / (float10)_DAT_00402130);
    *(float *)(uVar9 + 0x402155) = (float)fVar17;
    *(float *)(uVar9 + 0x402159) = (float)fVar15;
    bVar8 = (char)uVar9 + 8;
    uVar9 = uVar9 & 0xffffff00 | (uint)bVar8;
  } while ((POPCOUNT(bVar8) & 1U) != 0);
  uVar9 = 0x300;
  uVar7 = 0;
LAB_004010c2:
  sVar10 = 0x80;
  do {
    uVar12 = 0x41d;
    bVar8 = (byte)(uVar5 >> 8);
    uVar9 = uVar9 & 0xffffff00 | (uint)bVar8;
    uVar3 = uVar7;
    do {
      *(short *)(&DAT_00402136 + uVar9) = (short)(char)((char)uVar3 + -0x80);
      uVar3 = uVar7 >> 8;
      uVar4 = (short)uVar9 + 2;
      uVar9 = (uint)uVar4;
      if ((POPCOUNT(uVar4 & 0xff) & 1U) == 0) {
        uVar9 = uVar9 & 0xffffff00;
      }
      uVar4 = (short)uVar12 + 1;
      uVar12 = (uint)uVar4;
    } while ((POPCOUNT(uVar4 & 0xff) & 1U) == 0);
    *(short *)(&DAT_00402136 + uVar9) = sVar10;
    uVar9 = uVar9 & 0xffffff00;
    fVar17 = in_ST0;
    fVar15 = in_ST1;
    fVar18 = in_ST2;
    do {
      in_ST2 = in_ST4;
      in_ST1 = in_ST3;
      in_ST0 = fVar18;
      fVar18 = fVar15;
      fVar15 = fVar17;
      psVar1 = (short *)(&DAT_00402136 + uVar9);
      uVar4 = (short)uVar9 + 2;
      uVar9 = (uint)uVar4;
      fVar17 = (float10)*psVar1;
      in_ST3 = in_ST0;
      in_ST4 = in_ST1;
    } while ((POPCOUNT(uVar4 & 0xff) & 1U) != 0);
    do {
      fVar16 = fVar17;
      fVar17 = fVar18 * (float10)*(float *)(uVar12 + 0x40213a) +
               fVar15 * (float10)*(float *)(&DAT_00402136 + uVar12);
      fVar18 = fVar15 * (float10)*(float *)(uVar12 + 0x40213a) -
               fVar18 * (float10)*(float *)(&DAT_00402136 + uVar12);
      uVar4 = (short)uVar12 + 8;
      uVar12 = (uint)uVar4;
      fVar15 = fVar16;
    } while ((POPCOUNT(uVar4 & 0xff) & 1U) == 0);
    fVar17 = (fVar17 + (float10)_DAT_00402132) / (float10)_DAT_00402134;
    *(int *)(&DAT_00402136 + uVar9) = (int)ROUND(fVar16 / fVar17);
    iVar6 = *(int *)(&DAT_00402136 + uVar9);
    *(int *)(&DAT_00402136 + uVar9) = (int)ROUND(fVar18 / fVar17);
    pcVar2 = (char *)(DAT_00402118 + 0x7da0 + iVar6 * 0x140 + *(int *)(&DAT_00402136 + uVar9));
    *pcVar2 = *pcVar2 + (*(byte *)(uVar7 + DAT_0040211c) >> 5);
    while (uVar4 = (short)uVar7 + 1, uVar7 = (uint)uVar4, in_ST3 = in_ST2, in_ST4 = in_ST2,
          uVar4 == 0) {
      bVar14 = sVar10 < 1;
      sVar10 = -sVar10;
      if (bVar14) {
        bVar8 = bVar8 + 2;
        uVar5 = (uint)bVar8 << 8;
        if ((POPCOUNT(bVar8) & 1U) == 0) {
          iVar6 = 64000;
          pbVar11 = (byte *)(DAT_00402118 + 0x500);
          puVar13 = (undefined4 *)((int)DAT_00402100 + 0x500);
          do {
            bVar8 = *pbVar11;
            *pbVar11 = 0;
            *puVar13 = *(undefined4 *)((uint)bVar8 * 4 + DAT_00402104);
            pbVar11 = pbVar11 + 1;
            puVar13 = puVar13 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          GetClientRect(DAT_004020cc,(LPRECT)&DAT_004020f0);
          StretchDIBits(DAT_004020d0,0,0,DAT_004020f8,DAT_004020fc,0,0,0x140,200,DAT_00402100,
                        (BITMAPINFO *)&DAT_0040206c,0,0xcc0020);
          return;
        }
        goto LAB_004010c2;
      }
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
    DAT_00402118 = (int)pvVar2 + 0x92f90;
    DAT_00402104 = pvVar2;
    DAT_0040210c = pvVar2;
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
        FUN_00401017();
        FUN_00401088();
        SetStretchBltMode(DAT_004020d0,4);
        while( true ) {
          PeekMessageW((LPMSG)&DAT_004020d4,(HWND)0x0,0,0,1);
          if (_DAT_004020d8 == 0x12) break;
          TranslateMessage((MSG *)&DAT_004020d4);
          DispatchMessageW((MSG *)&DAT_004020d4);
          FUN_00401088();
          _DAT_00402108 = _DAT_00402108 + 1;
        }
        goto LAB_0040132f;
      }
    }
  }
  MessageBoxW((HWND)0x0,u_Startup_failed__0040204c,(LPCWSTR)0x0,0x10);
LAB_0040132f:
  ReleaseDC(DAT_004020cc,DAT_004020d0);
  GlobalFree(DAT_0040210c);
                    // WARNING: Subroutine does not return
  ExitProcess(DAT_004020dc);
}


