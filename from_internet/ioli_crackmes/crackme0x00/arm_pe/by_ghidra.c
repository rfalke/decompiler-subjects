typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef int BOOL;

typedef struct HINSTANCE__ * HINSTANCE;

typedef ulong DWORD;

typedef HINSTANCE HMODULE;

typedef uint UINT;

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

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 448
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

typedef wchar_t WCHAR;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef void * HANDLE;

typedef WCHAR * LPWSTR;

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

typedef int (* _onexit_t)(void);

typedef uint size_t;




void entry(HINSTANCE param_1,HINSTANCE param_2,LPSTR param_3,int param_4)

{
  UINT uExitCode;
  
  _fpreset();
  _pei386_runtime_relocator();
  __atexit_init();
  __gccmain();
  uExitCode = WinMain(param_1,param_2,param_3,param_4);
  _cexit();
  TerminateProcess((HANDLE)0x42,uExitCode);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



int main(int _Argc,char **_Argv,char **_Env)

{
  int iVar1;
  char acStack26 [10];
  undefined4 uStack4;
  
  uStack4 = 0x1105c;
  __gccmain();
  puts("IOLI Crackme Level 0x00");
  printf("Password: ");
  scanf("%s",acStack26);
  iVar1 = strcmp(acStack26,"250382");
  if (iVar1 == 0) {
    puts("Password OK :)");
  }
  else {
    puts("Invalid Password!");
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000110f0)
// WARNING: Removing unreachable block (ram,0x000110f4)
// WARNING: Removing unreachable block (ram,0x00011110)

void _pei386_runtime_relocator(void)

{
  return;
}



void closeall_streams(void)

{
  _fcloseall();
  return;
}



void _exit(int _Code)

{
  closeall_streams();
  TerminateProcess((HANDLE)0x42,_Code);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _c_exit(void)

{
  closeall_streams();
  return;
}



undefined4 __dllonexit(undefined4 param_1,void **param_2,void **param_3)

{
  size_t _NewSize;
  void *_Memory;
  int iVar1;
  
  if ((((param_2 != (void **)0x0) &&
       (_Memory = *param_2, param_3 != (void **)0x0 && _Memory != (void *)0x0)) &&
      (*param_3 != (void *)0x0)) &&
     (iVar1 = ((int)((int)*param_3 - (int)_Memory) >> 2) + 1, 0 < iVar1)) {
    _NewSize = iVar1 * 4;
    _Memory = realloc(_Memory,_NewSize);
    if (_Memory != (void *)0x0) {
      *param_2 = _Memory;
      _Memory = (void *)((int)_Memory + _NewSize);
      *param_3 = _Memory;
      *(undefined4 *)((int)_Memory + -4) = param_1;
      return param_1;
    }
  }
  return 0;
}



_onexit_t _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  p_Var1 = (_onexit_t)__dllonexit(_Func,(void **)&DAT_00014000,(void **)&next_atexit);
  return p_Var1;
}



int atexit(void *param_1)

{
  int iVar1;
  
  iVar1 = __dllonexit(param_1,(void **)&DAT_00014000,(void **)&next_atexit);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void __dll_exit(void)

{
  bool bVar1;
  void *pvVar2;
  
  if (DAT_00014000 != (void *)0x0) {
    if (DAT_00014000 <= (void *)(next_atexit + -4)) {
      pvVar2 = (void *)(next_atexit + -8);
      do {
        if (*(code **)((int)pvVar2 + 4) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00011258. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)((int)pvVar2 + 4))();
          return;
        }
        bVar1 = DAT_00014000 <= pvVar2;
        pvVar2 = (void *)((int)pvVar2 + -4);
      } while (bVar1);
    }
    free(DAT_00014000);
    DAT_00014000 = (void *)0x0;
  }
  fflush((FILE *)0x0);
  return;
}



void _cexit(void)

{
  __dll_exit();
  closeall_streams();
  return;
}



void exit(int _Code)

{
  _cexit();
  TerminateProcess((HANDLE)0x42,_Code);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 __atexit_init(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x80);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_00014000 = puVar1;
    return 0;
  }
  DAT_00014000 = puVar1;
  *puVar1 = 0;
  next_atexit = puVar1;
  return 1;
}



void __do_global_ctors(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code **ppcVar4;
  
  piVar2 = &___CTOR_LIST__;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 + 1;
  } while (*piVar2 != 0);
  if (iVar3 != 0) {
    ppcVar4 = (code **)(&___CTOR_LIST__ + iVar3);
    do {
      (**ppcVar4)();
      iVar3 = iVar3 + -1;
      ppcVar4 = ppcVar4 + -1;
    } while (iVar3 != 0);
  }
  atexit(&__do_global_dtors);
  return;
}



void __gccmain(void)

{
  if (initialized != 0) {
    return;
  }
  initialized = 1;
  __do_global_ctors();
  return;
}



int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)

{
  char cVar1;
  DWORD DVar2;
  size_t sVar3;
  char **_Env;
  int iVar4;
  undefined1 *puVar5;
  char *_Dest;
  LPSTR pCVar6;
  char *_Str;
  char *pcVar7;
  int iVar8;
  wchar_t awStack1052 [512];
  
  DVar2 = GetModuleFileNameW((HMODULE)0x0,awStack1052,0x200);
  pCVar6 = lpCmdLine;
  if (lpCmdLine != (LPSTR)0x0) {
    pCVar6 = (LPSTR)wcslen((wchar_t *)lpCmdLine);
  }
  _Dest = (char *)malloc((size_t)(pCVar6 + DVar2 + 2));
  if (_Dest == (char *)0x0) {
    TerminateProcess((HANDLE)0x42,0xffffffff);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _argv = (char **)malloc(4);
  if (_argv == (char **)0x0) {
    TerminateProcess((HANDLE)0x42,0xffffffff);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *_argv = _Dest;
  sVar3 = wcslen(awStack1052);
  wcstombs(_Dest,awStack1052,sVar3 + 1);
  _argc = _argc + 1;
  if (0 < (int)pCVar6) {
    _Dest = *_argv;
    sVar3 = strlen(_Dest);
    _Dest = _Dest + sVar3 + 1;
    wcstombs(_Dest,(wchar_t *)lpCmdLine,(size_t)(pCVar6 + 1));
    sVar3 = strlen(_Dest);
    pcVar7 = _Dest + sVar3;
    if (_Dest == (char *)0x0) {
      _argc = 1;
    }
    else {
      iVar4 = 1;
      while( true ) {
        sVar3 = strspn(_Dest," \t\r\n");
        _Str = _Dest + sVar3;
        cVar1 = _Dest[sVar3];
        iVar8 = iVar4;
        if (cVar1 == '\0') break;
        puVar5 = &DAT_0001305c;
        if (cVar1 != '\"') {
          do {
            _Dest = puVar5 + 1;
            if (*_Dest == '\0') {
              sVar3 = strcspn(_Str," \t\r\n");
              _Dest = _Str + sVar3;
              goto LAB_00011564;
            }
            puVar5 = puVar5 + 1;
          } while (cVar1 != *_Dest);
        }
        _Str = _Str + 1;
        _Dest = strchr(_Str,(int)cVar1);
        if (_Dest == (char *)0x0) {
          _Dest = pcVar7;
        }
LAB_00011564:
        *_Dest = '\0';
        iVar8 = iVar4 + 1;
        _Env = (char **)realloc(_argv,iVar8 * 4);
        if (_Env == (char **)0x0) {
          _argc = -1;
          goto LAB_000115b4;
        }
        _argv = _Env;
        _Env[iVar4] = _Str;
        if (_Dest == pcVar7) break;
        _Dest = _Dest + 1;
        iVar4 = iVar8;
      }
      _argc = iVar8;
      if (iVar8 < 0) {
LAB_000115b4:
        TerminateProcess((HANDLE)0x42,0xffffffff);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  _Env = _argv;
  _argv[_argc] = (char *)0x0;
  iVar4 = main(_argc,_argv,_Env);
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _fpreset(void)

{
                    // WARNING: Could not recover jumptable at 0x00011624. Too many branches
                    // WARNING: Treating indirect jump as call
  _fpreset();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011630. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TerminateProcess();
  return BVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

int puts(char *_Str)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001163c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = puts();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

int strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011648. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strcmp();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

int scanf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011654. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = scanf();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

int printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011660. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void * malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001166c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00011678. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

int fflush(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011684. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fflush();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

void * realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011690. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = realloc();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _fcloseall(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001169c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _fcloseall();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

size_t strspn(char *_Str,char *_Control)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116a8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strspn();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

char * strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116b4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strchr();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

size_t strcspn(char *_Str,char *_Control)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116c0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strcspn();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

DWORD GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116cc. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetModuleFileNameW();
  return DVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

size_t wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116d8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = wcslen();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

size_t strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116e4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Exceeded maximum restarts with more pending

size_t wcstombs(char *_Dest,wchar_t *_Source,size_t _MaxCount)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000116f0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = wcstombs();
  return sVar1;
}


