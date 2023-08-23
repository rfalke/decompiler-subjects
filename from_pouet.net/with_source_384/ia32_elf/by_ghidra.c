typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef ulong size_t;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack_c;
  
  __gmon_start__();
  FUN_080489c0();
  FUN_08049410();
  return iStack_c;
}



void FUN_080487a4(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void glEnable(void)

{
  glEnable();
  return;
}



void glEnableClientState(void)

{
  glEnableClientState();
  return;
}



void glMatrixMode(void)

{
  glMatrixMode();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void glClear(void)

{
  glClear();
  return;
}



void SDL_ShowCursor(void)

{
  SDL_ShowCursor();
  return;
}



void SDL_PollEvent(void)

{
  SDL_PollEvent();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void SDL_GL_SwapBuffers(void)

{
  SDL_GL_SwapBuffers();
  return;
}



void glLoadIdentity(void)

{
  glLoadIdentity();
  return;
}



void glClearColor(void)

{
  glClearColor();
  return;
}



void SDL_SetVideoMode(void)

{
  SDL_SetVideoMode();
  return;
}



void glNormalPointer(void)

{
  glNormalPointer();
  return;
}



void SDL_Init(void)

{
  SDL_Init();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

float cosf(float __x)

{
  longdouble extraout_ST0;
  
  cosf(__x);
  return (float)extraout_ST0;
}



void glOrtho(void)

{
  glOrtho();
  return;
}



void glDrawElements(void)

{
  glDrawElements();
  return;
}



void glColor4f(void)

{
  glColor4f();
  return;
}



void glRotatef(void)

{
  glRotatef();
  return;
}



void glLightfv(void)

{
  glLightfv();
  return;
}



void glPushMatrix(void)

{
  glPushMatrix();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

float sinf(float __x)

{
  longdouble extraout_ST0;
  
  sinf(__x);
  return (float)extraout_ST0;
}



void SDL_Quit(void)

{
  SDL_Quit();
  return;
}



void glVertexPointer(void)

{
  glVertexPointer();
  return;
}



void glPopMatrix(void)

{
  glPopMatrix();
  return;
}



void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(FUN_0804922c,param_2,&stack0x00000004,FUN_080493b0,FUN_080493a0,param_1,
                    auStack_4);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_08048990(void)

{
  code *pcVar1;
  
  if (__bss_start == '\0') {
    while (pcVar1 = *(code **)PTR_DAT_0804a184, pcVar1 != (code *)0x0) {
      PTR_DAT_0804a184 = PTR_DAT_0804a184 + 4;
      (*pcVar1)();
    }
    __bss_start = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080489d8)

void FUN_080489c0(void)

{
  return;
}



void FUN_080489e4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7,int param_8,int param_9)

{
  float fVar1;
  float __x;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_70;
  float local_60;
  float local_5c;
  
  if (-1 < param_7) {
    fVar1 = (param_4 * 3.141593) / 180.0;
    __x = (param_5 * 3.141593) / 180.0;
    fVar12 = sinf(__x);
    fVar13 = cosf(fVar1);
    fVar13 = param_1 + param_6 * fVar12 * fVar13;
    fVar14 = sinf(fVar1);
    fVar12 = param_2 + param_6 * fVar12 * fVar14;
    fVar14 = cosf(__x);
    iVar11 = DAT_0804a194;
    fVar14 = param_3 + param_6 * fVar14;
    fVar2 = param_6 * 0.5 * 1.414214;
    fVar3 = fVar2 * 0.8;
    uVar5 = DAT_0804a18c;
    iVar9 = DAT_0804a194;
    if (param_9 == 1) {
      local_70 = -1.570796;
      iVar10 = 0;
      pfVar7 = (float *)(&DAT_080d2d18 + DAT_0804a194 * 4);
      pfVar8 = (float *)(&DAT_08084b18 + DAT_0804a18c * 4);
      while( true ) {
        iVar9 = iVar10 + iVar11;
        iVar10 = iVar10 + 6;
        if (iVar10 == 0x12) break;
        fVar17 = sinf(__x + 0.7853982);
        fVar18 = cosf(fVar1 + local_70);
        *pfVar8 = fVar2 * fVar17 * fVar18 + param_1;
        fVar19 = sinf(fVar1 + local_70);
        pfVar8[1] = param_2 + fVar2 * fVar17 * fVar19;
        fVar15 = cosf(__x + 0.7853982);
        pfVar8[2] = fVar2 * fVar15 + param_3;
        fVar16 = fVar2 + 1.0;
        *pfVar7 = fVar18 * fVar16 * fVar17 + param_1;
        pfVar7[1] = fVar16 * fVar17 * fVar19 + param_2;
        pfVar7[2] = fVar15 * fVar16 + param_3;
        fVar17 = sinf(__x - 0.7853982);
        pfVar8[3] = param_1 + fVar18 * fVar2 * fVar17;
        pfVar8[4] = fVar2 * fVar17 * fVar19 + param_2;
        fVar15 = cosf(__x - 0.7853982);
        pfVar8[5] = fVar2 * fVar15 + param_3;
        pfVar7[3] = param_1 + fVar18 * fVar16 * fVar17;
        pfVar7[4] = fVar16 * fVar17 * fVar19 + param_2;
        pfVar7[5] = fVar16 * fVar15 + param_3;
        local_70 = local_70 + 3.141593;
        uVar5 = uVar5 + 6;
        pfVar7 = pfVar7 + 6;
        pfVar8 = pfVar8 + 6;
      }
    }
    DAT_0804a194 = iVar9;
    DAT_0804a18c = uVar5;
    iVar9 = DAT_0804a194;
    local_60 = -1.570796;
    iVar11 = 0;
    uVar5 = DAT_0804a18c;
    pfVar7 = (float *)(&DAT_080d2d18 + DAT_0804a194 * 4);
    pfVar8 = (float *)(&DAT_08084b18 + DAT_0804a18c * 4);
    while( true ) {
      iVar4 = DAT_0804a190;
      iVar10 = iVar11 + iVar9;
      iVar11 = iVar11 + 6;
      if (iVar11 == 0x12) break;
      fVar16 = sinf(__x + 0.7853982);
      fVar17 = cosf(fVar1 + local_60);
      *pfVar8 = fVar3 * fVar16 * fVar17 + fVar13;
      fVar18 = sinf(fVar1 + local_60);
      pfVar8[1] = fVar12 + fVar3 * fVar16 * fVar18;
      fVar19 = cosf(__x + 0.7853982);
      pfVar8[2] = fVar3 * fVar19 + fVar14;
      fVar2 = fVar3 + 1.0;
      *pfVar7 = fVar17 * fVar2 * fVar16 + fVar13;
      pfVar7[1] = fVar2 * fVar16 * fVar18 + fVar12;
      pfVar7[2] = fVar19 * fVar2 + fVar14;
      fVar16 = sinf(__x - 0.7853982);
      pfVar8[3] = fVar13 + fVar17 * fVar3 * fVar16;
      pfVar8[4] = fVar3 * fVar16 * fVar18 + fVar12;
      fVar19 = cosf(__x - 0.7853982);
      pfVar8[5] = fVar3 * fVar19 + fVar14;
      pfVar7[3] = fVar13 + fVar17 * fVar2 * fVar16;
      pfVar7[4] = fVar2 * fVar16 * fVar18 + fVar12;
      pfVar7[5] = fVar2 * fVar19 + fVar14;
      local_60 = local_60 + 3.141593;
      uVar5 = uVar5 + 6;
      pfVar7 = pfVar7 + 6;
      pfVar8 = pfVar8 + 6;
    }
    uVar6 = uVar5 / 3;
    DAT_0804a18c = uVar5;
    DAT_0804a194 = iVar10;
    *(uint *)(&DAT_0804a198 + DAT_0804a190 * 4) = uVar6 - 8;
    *(uint *)(&DAT_0804a19c + iVar4 * 4) = uVar6 - 7;
    *(uint *)(&DAT_0804a1a0 + iVar4 * 4) = uVar6 - 3;
    *(uint *)(&DAT_0804a1a4 + iVar4 * 4) = uVar6 - 4;
    *(uint *)(&DAT_0804a1a8 + iVar4 * 4) = uVar6 - 6;
    *(uint *)(&DAT_0804a1ac + iVar4 * 4) = uVar6 - 5;
    *(uint *)(&DAT_0804a1b0 + DAT_0804a190 * 4) = uVar6 - 1;
    *(uint *)(&DAT_0804a1b4 + DAT_0804a190 * 4) = uVar6 - 2;
    *(uint *)(&DAT_0804a1b8 + DAT_0804a190 * 4) = uVar6 - 7;
    *(uint *)(&DAT_0804a1bc + DAT_0804a190 * 4) = uVar6 - 3;
    *(uint *)(&DAT_0804a1c0 + DAT_0804a190 * 4) = uVar6 - 1;
    *(uint *)(&DAT_0804a1c4 + DAT_0804a190 * 4) = uVar6 - 5;
    *(uint *)(&DAT_0804a1c8 + DAT_0804a190 * 4) = uVar6 - 8;
    *(uint *)(&DAT_0804a1cc + DAT_0804a190 * 4) = uVar6 - 4;
    *(uint *)(&DAT_0804a1d0 + DAT_0804a190 * 4) = uVar6 - 2;
    *(uint *)(&DAT_0804a1d4 + DAT_0804a190 * 4) = uVar6 - 6;
    DAT_0804a190 = DAT_0804a190 + 0x10;
    fVar1 = (fVar3 + fVar3) / 1.414214;
    param_7 = param_7 + -1;
    FUN_080489e4(fVar13,fVar12,fVar14,param_4,param_5 + 10.0,fVar1,param_7,param_8,0);
    if (param_8 != 0) {
      local_5c = -90.0;
      iVar9 = 0;
      do {
        FUN_080489e4(fVar13,fVar12,fVar14,param_4 + local_5c,param_5,fVar1,param_7,0,1);
        FUN_080489e4(fVar13,fVar12,fVar14,param_4,param_5 + local_5c,fVar1,param_7,0,1);
        local_5c = local_5c + 180.0;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804908a(void)

{
  int iVar1;
  float local_20;
  
  DAT_0804a190 = 0;
  DAT_0804a18c = 0;
  DAT_0804a194 = 0;
  local_20 = 0.0;
  iVar1 = 0;
  do {
    FUN_080489e4(0,0,0,0,local_20,0x3dcccccd,0xe,1,1);
    local_20 = local_20 + 90.0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  FUN_080489e4(0,0,0,0x42b40000,0x42b40000,0x3dcccccd,0xe,1,1);
  FUN_080489e4(0,0,0,0x43870000,0x42b40000,0x3dcccccd,0xe,1,1);
  glNormalPointer(0x1406,0,&DAT_080d2d18);
  glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  glVertexPointer(3,0x1406,0,&DAT_08084b18);
  glPushMatrix();
  glRotatef(0x428c6666,0x3f800000,0x3f333333,0);
  glDrawElements(7,DAT_0804a190,0x1405,&DAT_0804a198);
  glPopMatrix();
  _DAT_08084b18 = 0xbf000000;
  _DAT_08084b1c = 0xbf000000;
  _DAT_08084b20 = 0xbf000000;
  _DAT_0804a198 = 0;
  _DAT_08084b24 = 0x3f000000;
  _DAT_08084b28 = 0xbf000000;
  _DAT_08084b2c = 0xbf000000;
  _DAT_0804a19c = 1;
  _DAT_08084b30 = 0x3f000000;
  _DAT_08084b34 = 0x3f000000;
  _DAT_08084b38 = 0xbf000000;
  _DAT_0804a1a0 = 2;
  _DAT_08084b3c = 0xbf000000;
  _DAT_08084b40 = 0x3f000000;
  _DAT_08084b44 = 0xbf000000;
  _DAT_0804a1a4 = 3;
  glDrawElements(7,4,0x1405,&DAT_0804a198);
  return;
}



undefined4 FUN_0804922c(void)

{
  bool bVar1;
  int iVar2;
  char acStack_34 [8];
  int iStack_2c;
  undefined auStack_20 [12];
  undefined *puStack_14;
  
  puStack_14 = &stack0x00000004;
  memcpy(auStack_20,&DAT_08049460,0xc);
  SDL_Init(0x20);
  SDL_SetVideoMode(0x400,0x300,0x20,0xa0000013);
  SDL_ShowCursor(0);
  glClearColor(0,0,0,0);
  glMatrixMode(0x1701);
  glLoadIdentity();
  glEnable(0xb71);
  glEnable(0xb50);
  glEnable(0x4000);
  glEnable(0xba1);
  glEnableClientState(0x8074);
  glEnableClientState(0x8075);
  glOrtho(0xbfe0000000000000,0x3fe0000000000000,0xbfe0000000000000,0x3fe0000000000000,0,0xbff00000,0
          ,0x40590000);
  glLightfv(0x4000,0x1203,auStack_20);
  bVar1 = false;
  do {
    while( true ) {
      iVar2 = SDL_PollEvent(acStack_34);
      if (iVar2 == 0) break;
      if ((acStack_34[0] == '\x02') && (iStack_2c == 0x1b)) {
        bVar1 = true;
      }
    }
    glClear(0x4100);
    glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    FUN_0804908a();
    SDL_GL_SwapBuffers();
  } while (!bVar1);
  SDL_ShowCursor(1);
  SDL_Quit();
  return 0;
}



undefined4 FUN_08049236(void)

{
  bool bVar1;
  int iVar2;
  undefined4 in_ECX;
  char local_30 [8];
  int local_28;
  undefined local_1c [12];
  undefined4 local_10;
  
  local_10 = in_ECX;
  memcpy(local_1c,&DAT_08049460,0xc);
  SDL_Init(0x20);
  SDL_SetVideoMode(0x400,0x300,0x20,0xa0000013);
  SDL_ShowCursor(0);
  glClearColor(0,0,0,0);
  glMatrixMode(0x1701);
  glLoadIdentity();
  glEnable(0xb71);
  glEnable(0xb50);
  glEnable(0x4000);
  glEnable(0xba1);
  glEnableClientState(0x8074);
  glEnableClientState(0x8075);
  glOrtho(0xbfe0000000000000,0x3fe0000000000000,0xbfe0000000000000,0x3fe0000000000000,0,0xbff00000,0
          ,0x40590000);
  glLightfv(0x4000,0x1203,local_1c);
  bVar1 = false;
  do {
    while( true ) {
      iVar2 = SDL_PollEvent(local_30);
      if (iVar2 == 0) break;
      if ((local_30[0] == '\x02') && (local_28 == 0x1b)) {
        bVar1 = true;
      }
    }
    glClear(0x4100);
    glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    FUN_0804908a();
    SDL_GL_SwapBuffers();
  } while (!bVar1);
  SDL_ShowCursor(1);
  SDL_Quit();
  return 0;
}



void FUN_080493a0(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x080493de)
// WARNING: Removing unreachable block (ram,0x080493e0)

void FUN_080493b0(void)

{
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



void FUN_08049410(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_0804a000 != (code *)0xffffffff) {
    iVar2 = 0;
    pcVar1 = DAT_0804a000;
    do {
      (*pcVar1)();
      pcVar1 = *(code **)(iVar2 + 0x8049ffc);
      iVar2 = iVar2 + -4;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  FUN_08048990();
  return;
}


