typedef unsigned char   undefined;

typedef pointer32 ImageBaseOffset32;

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

typedef uint size_t;




void entry(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  UINT uExitCode;
  
  _fpreset();
  FUN_00011360();
  FUN_0001153c();
  FUN_00011624();
  uExitCode = FUN_0001164c(param_1,param_2,param_3);
  FUN_00011514();
  TerminateProcess((HANDLE)0x42,uExitCode);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_00011050(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (*(int *)(local_14 * 4 + param_2) == 0) {
      return 0;
    }
    iVar1 = local_14 * 4;
    local_14 = local_14 + 1;
    iVar1 = strncmp(*(char **)(iVar1 + param_2),"LOLO",3);
  } while (iVar1 != 0);
  DAT_00014000 = 1;
  return 1;
}



void FUN_0001110c(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  uStack_4 = 0x11118;
  puStack_1c = &stack0xfffffff0;
  puStack_20 = &uStack_4;
  puts("Password Incorrect!");
  uVar2 = FUN_00011524(0);
  uStack_14 = 0x11138;
  uStack_18 = 0x11128;
  sscanf((char *)uVar2,"%d",&uStack_28);
  iVar1 = FUN_00011050(uStack_28,(int)((ulonglong)uVar2 >> 0x20));
  if (iVar1 != 0) {
    for (iStack_24 = 0; iStack_24 < 10; iStack_24 = iStack_24 + 1) {
      if ((uStack_28 & 1) == 0) {
        if (DAT_00014000 == 1) {
          puts("Password OK!");
        }
        FUN_00011524(0);
      }
    }
  }
  return;
}



void FUN_0001112c(char *param_1,int param_2)

{
  int iVar1;
  uint local_18;
  int local_14;
  
  sscanf(param_1,"%d",&local_18);
  iVar1 = FUN_00011050(local_18,param_2);
  if (iVar1 != 0) {
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      if ((local_18 & 1) == 0) {
        if (DAT_00014000 == 1) {
          puts("Password OK!");
        }
        FUN_00011524(0);
      }
    }
  }
  return;
}



void FUN_000111dc(char *param_1,int param_2)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  char local_21;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_1c = 0;
  for (local_18 = 0; uVar1 = local_18, sVar2 = strlen(param_1), uVar1 < sVar2;
      local_18 = local_18 + 1) {
    local_21 = param_1[local_18];
    sscanf(&local_21,"%d",&local_20);
    local_1c = local_1c + local_20;
    if (local_1c == 0x10) {
      FUN_0001112c(param_1,param_2);
    }
  }
  FUN_0001110c();
  iVar3 = FUN_00011050(local_20,param_2);
  if (iVar3 != 0) {
    for (local_18 = 0; (int)local_18 < 10; local_18 = local_18 + 1) {
      if ((local_20 & 1) == 0) {
        puts("wtf?");
        FUN_00011524(0);
      }
    }
  }
  return;
}



undefined4 FUN_000112f4(undefined4 param_1,undefined4 param_2,int param_3)

{
  char acStack_74 [100];
  
  FUN_00011624();
  puts("IOLI Crackme Level 0x07");
  printf("Password: ");
  scanf("%s",acStack_74);
  FUN_000111dc(acStack_74,param_3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00011374)
// WARNING: Removing unreachable block (ram,0x00011378)
// WARNING: Removing unreachable block (ram,0x00011394)

void FUN_00011360(void)

{
  return;
}



void FUN_000113b4(void)

{
  _fcloseall();
  return;
}



undefined4 FUN_000113e4(undefined4 param_1,void **param_2,void **param_3)

{
  size_t _NewSize;
  void *pvVar1;
  int iVar2;
  
  if ((((param_2 != (void **)0x0) &&
       (pvVar1 = *param_2, param_3 != (void **)0x0 && pvVar1 != (void *)0x0)) &&
      (*param_3 != (void *)0x0)) && (iVar2 = ((int)*param_3 - (int)pvVar1 >> 2) + 1, 0 < iVar2)) {
    _NewSize = iVar2 * 4;
    pvVar1 = realloc(pvVar1,_NewSize);
    if (pvVar1 != (void *)0x0) {
      *param_2 = pvVar1;
      pvVar1 = (void *)((int)pvVar1 + _NewSize);
      *param_3 = pvVar1;
      *(undefined4 *)((int)pvVar1 + -4) = param_1;
      return param_1;
    }
  }
  return 0;
}



undefined4 FUN_00011474(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000113e4(param_1,(void **)&DAT_00014004,(void **)&DAT_00014008);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0001149c(void)

{
  bool bVar1;
  void *pvVar2;
  
  if (DAT_00014004 != (void *)0x0) {
    if (DAT_00014004 <= (void *)(DAT_00014008 + -4)) {
      pvVar2 = (void *)(DAT_00014008 + -8);
      do {
        if (*(code **)((int)pvVar2 + 4) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000114dc. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)((int)pvVar2 + 4))();
          return;
        }
        bVar1 = DAT_00014004 <= pvVar2;
        pvVar2 = (void *)((int)pvVar2 + -4);
      } while (bVar1);
    }
    free(DAT_00014004);
    DAT_00014004 = (void *)0x0;
  }
  fflush((FILE *)0x0);
  return;
}



void FUN_00011514(void)

{
  FUN_0001149c();
  FUN_000113b4();
  return;
}



void FUN_00011524(UINT param_1)

{
  FUN_00011514();
  TerminateProcess((HANDLE)0x42,param_1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 FUN_0001153c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x80);
  DAT_00014004 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0;
  DAT_00014008 = puVar1;
  return 1;
}



void FUN_000115bc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code **ppcVar4;
  
  piVar2 = &DAT_00011988;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 + 1;
  } while (*piVar2 != 0);
  if (iVar3 != 0) {
    ppcVar4 = (code **)(&DAT_00011988 + iVar3);
    do {
      (**ppcVar4)();
      iVar3 = iVar3 + -1;
      ppcVar4 = ppcVar4 + -1;
    } while (iVar3 != 0);
  }
  FUN_00011474(&LAB_00011578);
  return;
}



void FUN_00011624(void)

{
  if (DAT_0001400c != 0) {
    return;
  }
  DAT_0001400c = 1;
  FUN_000115bc();
  return;
}



void FUN_0001164c(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  char cVar1;
  DWORD DVar2;
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  char **ppcVar6;
  undefined1 *puVar7;
  char *_Str;
  char *pcVar8;
  int iVar9;
  int iVar10;
  wchar_t awStack_41c [512];
  
  awStack_41c[0] = L'\0';
  DVar2 = GetModuleFileNameW((HMODULE)0x0,awStack_41c,0x200);
  if (param_3 == (wchar_t *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = wcslen(param_3);
  }
  pcVar4 = (char *)malloc(DVar2 + sVar3 + 2);
  if (pcVar4 == (char *)0x0) {
    TerminateProcess((HANDLE)0x42,0xffffffff);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  DAT_00014014 = (char **)malloc(4);
  if (DAT_00014014 == (char **)0x0) {
    TerminateProcess((HANDLE)0x42,0xffffffff);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *DAT_00014014 = pcVar4;
  sVar5 = wcslen(awStack_41c);
  wcstombs(pcVar4,awStack_41c,sVar5 + 1);
  DAT_00014010 = DAT_00014010 + 1;
  if (0 < (int)sVar3) {
    pcVar4 = *DAT_00014014;
    sVar5 = strlen(pcVar4);
    pcVar4 = pcVar4 + sVar5 + 1;
    wcstombs(pcVar4,param_3,sVar3 + 1);
    sVar3 = strlen(pcVar4);
    pcVar8 = pcVar4 + sVar3;
    if (pcVar4 == (char *)0x0) {
      DAT_00014010 = 1;
    }
    else {
      iVar9 = 1;
      while( true ) {
        sVar3 = strspn(pcVar4," \t\r\n");
        _Str = pcVar4 + sVar3;
        cVar1 = pcVar4[sVar3];
        iVar10 = iVar9;
        if (cVar1 == '\0') break;
        puVar7 = &DAT_00013068;
        if (cVar1 != '\"') {
          do {
            pcVar4 = puVar7 + 1;
            if (*pcVar4 == '\0') {
              sVar3 = strcspn(_Str," \t\r\n");
              pcVar4 = _Str + sVar3;
              goto LAB_000117e8;
            }
            puVar7 = puVar7 + 1;
          } while (cVar1 != *pcVar4);
        }
        _Str = _Str + 1;
        pcVar4 = strchr(_Str,(int)cVar1);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = pcVar8;
        }
LAB_000117e8:
        *pcVar4 = '\0';
        iVar10 = iVar9 + 1;
        ppcVar6 = (char **)realloc(DAT_00014014,iVar10 * 4);
        if (ppcVar6 == (char **)0x0) {
          DAT_00014010 = -1;
          goto LAB_00011838;
        }
        DAT_00014014 = ppcVar6;
        ppcVar6[iVar9] = _Str;
        if (pcVar4 == pcVar8) break;
        pcVar4 = pcVar4 + 1;
        iVar9 = iVar10;
      }
      DAT_00014010 = iVar10;
      if (iVar10 < 0) {
LAB_00011838:
        TerminateProcess((HANDLE)0x42,0xffffffff);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
  }
  ppcVar6 = DAT_00014014;
  DAT_00014014[DAT_00014010] = (char *)0x0;
  FUN_000112f4(DAT_00014010,DAT_00014014,(int)ppcVar6);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _fpreset(void)

{
                    // WARNING: Could not recover jumptable at 0x000118a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _fpreset();
  return;
}



BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118b4. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int scanf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118c0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = scanf(_Format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118cc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118d8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sscanf(_Src,_Format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *_Str)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118e4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = puts(_Str);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118f0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf(_Format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000118fc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011908. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00011914. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011920. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fflush(_File);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001192c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fcloseall(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011938. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _fcloseall();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strspn(char *_Str,char *_Control)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011944. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strspn(_Str,_Control);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011950. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strchr(_Str,_Val);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strcspn(char *_Str,char *_Control)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001195c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strcspn(_Str,_Control);
  return sVar1;
}



DWORD GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011968. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011974. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = wcslen(_Str);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t wcstombs(char *_Dest,wchar_t *_Source,size_t _MaxCount)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00011980. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = wcstombs(_Dest,_Source,_MaxCount);
  return sVar1;
}


