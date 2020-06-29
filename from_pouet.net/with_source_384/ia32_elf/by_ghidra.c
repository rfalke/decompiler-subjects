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
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
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
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
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
    byte e_ident_pad[9];
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
  int iStack12;
  
  __gmon_start__();
  FUN_080489c0();
  FUN_08049410();
  return iStack12;
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



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

float cosf(float __x)

{
  float10 extraout_ST0;
  
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



// WARNING: Unknown calling convention yet parameter storage is locked

float sinf(float __x)

{
  float10 extraout_ST0;
  
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



void entry(void)

{
  __libc_start_main(FUN_0804922c);
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
  float __x;
  float __x_00;
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_70;
  float local_60;
  float local_5c;
  
  if (-1 < param_7) {
    __x = (param_4 * 3.14159250) / 180.00000000;
    __x_00 = (param_5 * 3.14159250) / 180.00000000;
    fVar11 = sinf(__x_00);
    fVar12 = cosf(__x);
    fVar12 = param_1 + param_6 * fVar11 * fVar12;
    fVar13 = sinf(__x);
    fVar11 = param_2 + param_6 * fVar11 * fVar13;
    fVar13 = cosf(__x_00);
    iVar10 = DAT_0804a194;
    fVar13 = param_3 + param_6 * fVar13;
    fVar1 = param_6 * 0.50000000 * 1.41421354;
    fVar2 = fVar1 * 0.80000001;
    uVar4 = DAT_0804a18c;
    iVar8 = DAT_0804a194;
    if (param_9 == 1) {
      local_70 = -1.57079637;
      iVar9 = 0;
      pfVar6 = (float *)(&DAT_080d2d18 + DAT_0804a194 * 4);
      pfVar7 = (float *)(&DAT_08084b18 + DAT_0804a18c * 4);
      while( true ) {
        iVar8 = iVar9 + iVar10;
        iVar9 = iVar9 + 6;
        if (iVar9 == 0x12) break;
        fVar16 = sinf(__x_00 + 0.78539813);
        fVar17 = cosf(__x + local_70);
        *pfVar7 = fVar1 * fVar16 * fVar17 + param_1;
        fVar18 = sinf(__x + local_70);
        pfVar7[1] = param_2 + fVar1 * fVar16 * fVar18;
        fVar14 = cosf(__x_00 + 0.78539813);
        pfVar7[2] = fVar1 * fVar14 + param_3;
        fVar15 = fVar1 + 1.00000000;
        *pfVar6 = fVar17 * fVar15 * fVar16 + param_1;
        pfVar6[1] = fVar15 * fVar16 * fVar18 + param_2;
        pfVar6[2] = fVar14 * fVar15 + param_3;
        fVar16 = sinf(__x_00 - 0.78539813);
        pfVar7[3] = param_1 + fVar17 * fVar1 * fVar16;
        pfVar7[4] = fVar1 * fVar16 * fVar18 + param_2;
        fVar14 = cosf(__x_00 - 0.78539813);
        pfVar7[5] = fVar1 * fVar14 + param_3;
        pfVar6[3] = param_1 + fVar17 * fVar15 * fVar16;
        pfVar6[4] = fVar15 * fVar16 * fVar18 + param_2;
        pfVar6[5] = fVar15 * fVar14 + param_3;
        local_70 = local_70 + 3.14159250;
        uVar4 = uVar4 + 6;
        pfVar6 = pfVar6 + 6;
        pfVar7 = pfVar7 + 6;
      }
    }
    DAT_0804a194 = iVar8;
    DAT_0804a18c = uVar4;
    iVar8 = DAT_0804a194;
    local_60 = -1.57079637;
    iVar10 = 0;
    uVar4 = DAT_0804a18c;
    pfVar6 = (float *)(&DAT_080d2d18 + DAT_0804a194 * 4);
    pfVar7 = (float *)(&DAT_08084b18 + DAT_0804a18c * 4);
    while( true ) {
      iVar3 = DAT_0804a190;
      iVar9 = iVar10 + iVar8;
      iVar10 = iVar10 + 6;
      if (iVar10 == 0x12) break;
      fVar15 = sinf(__x_00 + 0.78539813);
      fVar16 = cosf(__x + local_60);
      *pfVar7 = fVar2 * fVar15 * fVar16 + fVar12;
      fVar17 = sinf(__x + local_60);
      pfVar7[1] = fVar11 + fVar2 * fVar15 * fVar17;
      fVar18 = cosf(__x_00 + 0.78539813);
      pfVar7[2] = fVar2 * fVar18 + fVar13;
      fVar1 = fVar2 + 1.00000000;
      *pfVar6 = fVar16 * fVar1 * fVar15 + fVar12;
      pfVar6[1] = fVar1 * fVar15 * fVar17 + fVar11;
      pfVar6[2] = fVar18 * fVar1 + fVar13;
      fVar15 = sinf(__x_00 - 0.78539813);
      pfVar7[3] = fVar12 + fVar16 * fVar2 * fVar15;
      pfVar7[4] = fVar2 * fVar15 * fVar17 + fVar11;
      fVar18 = cosf(__x_00 - 0.78539813);
      pfVar7[5] = fVar2 * fVar18 + fVar13;
      pfVar6[3] = fVar12 + fVar16 * fVar1 * fVar15;
      pfVar6[4] = fVar1 * fVar15 * fVar17 + fVar11;
      pfVar6[5] = fVar1 * fVar18 + fVar13;
      local_60 = local_60 + 3.14159250;
      uVar4 = uVar4 + 6;
      pfVar6 = pfVar6 + 6;
      pfVar7 = pfVar7 + 6;
    }
    uVar5 = uVar4 / 3;
    DAT_0804a18c = uVar4;
    DAT_0804a194 = iVar9;
    *(uint *)(&DAT_0804a198 + DAT_0804a190 * 4) = uVar5 - 8;
    *(uint *)(&DAT_0804a19c + iVar3 * 4) = uVar5 - 7;
    *(uint *)(&DAT_0804a1a0 + iVar3 * 4) = uVar5 - 3;
    *(uint *)(&DAT_0804a1a4 + iVar3 * 4) = uVar5 - 4;
    *(uint *)(&DAT_0804a1a8 + iVar3 * 4) = uVar5 - 6;
    *(uint *)(&DAT_0804a1ac + iVar3 * 4) = uVar5 - 5;
    *(uint *)(&DAT_0804a1b0 + DAT_0804a190 * 4) = uVar5 - 1;
    *(uint *)(&DAT_0804a1b4 + DAT_0804a190 * 4) = uVar5 - 2;
    *(uint *)(&DAT_0804a1b8 + DAT_0804a190 * 4) = uVar5 - 7;
    *(uint *)(&DAT_0804a1bc + DAT_0804a190 * 4) = uVar5 - 3;
    *(uint *)(&DAT_0804a1c0 + DAT_0804a190 * 4) = uVar5 - 1;
    *(uint *)(&DAT_0804a1c4 + DAT_0804a190 * 4) = uVar5 - 5;
    *(uint *)(&DAT_0804a1c8 + DAT_0804a190 * 4) = uVar5 - 8;
    *(uint *)(&DAT_0804a1cc + DAT_0804a190 * 4) = uVar5 - 4;
    *(uint *)(&DAT_0804a1d0 + DAT_0804a190 * 4) = uVar5 - 2;
    *(uint *)(&DAT_0804a1d4 + DAT_0804a190 * 4) = uVar5 - 6;
    DAT_0804a190 = DAT_0804a190 + 0x10;
    __x = (fVar2 + fVar2) / 1.41421354;
    param_7 = param_7 + -1;
    FUN_080489e4(fVar12,fVar11,fVar13,param_4,param_5 + 10.00000000,__x,param_7,param_8,0);
    if (param_8 != 0) {
      local_5c = -90.00000000;
      iVar8 = 0;
      do {
        FUN_080489e4(fVar12,fVar11,fVar13,param_4 + local_5c,param_5,__x,param_7,0,1);
        FUN_080489e4(fVar12,fVar11,fVar13,param_4,param_5 + local_5c,__x,param_7,0,1);
        local_5c = local_5c + 180.00000000;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 2);
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
  local_20 = 0.00000000;
  iVar1 = 0;
  do {
    FUN_080489e4(0,0,0,0,local_20,0x3dcccccd,0xe,1,1);
    local_20 = local_20 + 90.00000000;
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
  char local_34 [8];
  int local_2c;
  undefined local_20 [12];
  undefined *local_14;
  
  local_14 = &stack0x00000004;
  memcpy(local_20,&DAT_08049460,0xc);
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
  glLightfv(0x4000,0x1203,local_20);
  bVar1 = false;
  do {
    while( true ) {
      iVar2 = SDL_PollEvent(local_34);
      if (iVar2 == 0) break;
      if ((local_34[0] == '\x02') && (local_2c == 0x1b)) {
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
  EVP_PKEY_CTX *local_1c;
  
  _init(local_1c);
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
      pcVar1 = *(code **)(&DAT_08049ffc + iVar2);
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


