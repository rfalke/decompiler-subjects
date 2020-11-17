typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
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
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
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




void SDL_Quit(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void dlsym(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_PauseAudio(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_GetTicks(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_OpenAudio(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_GL_SwapBuffers(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_Init(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_PollEvent(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_ShowCursor(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void SDL_SetVideoMode(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void dlopen(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



uint FUN_080486e2(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = (uint)*(byte *)(*(int *)(&DAT_0804a48e + in_ECX) + *(int *)(&DAT_0804a6e6 + in_ECX)) * 4;
  return uVar1 & 0xffffff00 |
         (uint)*(byte *)(*(int *)(&DAT_0804a5e2 + uVar1) + *(int *)(&DAT_087cab98 + in_ECX));
}



ulonglong __regparm3 FUN_08048706(int param_1)

{
  int unaff_ESI;
  
  return (ulonglong)(longlong)param_1 / 0x3e04 & 0xffffffff |
         (ulonglong)(uint)((int)((ulonglong)(longlong)param_1 % 0x3e04) * 4 + unaff_ESI) << 0x20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_08048714(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  float10 fVar9;
  
  iVar3 = 0x3c;
  puVar4 = &DAT_0804a6b8;
  puVar5 = &DAT_0804a6a0;
  do {
    *puVar5 = *puVar4 >> 1;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (iVar3 != 0);
  bVar8 = 0;
  iVar3 = 0;
  puVar6 = &DAT_0804ab70;
  do {
    uVar1 = 0x7fff;
    if (((ulonglong)(longlong)(iVar3 * 2) / 0xa8 & 1) != 0) {
      uVar1 = 0xffff8001;
    }
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = uVar1;
    puVar7[0x1ffff] =
         (int)((ulonglong)(longlong)((int)((ulonglong)(longlong)iVar3 % 0xa8) << 0x10) / 0xa8) +
         -0x8000;
    uVar2 = FUN_0804890c();
    puVar7[0x2ffff] = (uVar2 & 0xffff) - 0x8000;
    fVar9 = (float10)fsin((float10)_DAT_0804a71e);
    DAT_0804a712 = (int)ROUND(fVar9 * (float10)_DAT_0804a726);
    _DAT_0804a71e = (double)((float10)_DAT_0804a71e + (float10)_DAT_0804a716);
    puVar7[0xffff] = DAT_0804a712;
    iVar3 = iVar3 + 1;
    puVar6 = puVar7;
  } while (extraout_ECX != 1);
  iVar3 = 9;
  do {
    FUN_080487cb();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return CONCAT44(param_2,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080487cb(void)

{
  int iVar1;
  int unaff_EBP;
  
  DAT_0804ab40 = 0;
  DAT_0804ab44 = 0;
  DAT_0804ab48 = 0;
  _DAT_0804ab4c = 0;
  DAT_0804ab50 = 0;
  DAT_0804ab60 = 0;
  DAT_0804ab64 = 0x10000;
  DAT_0804ab68 = (*(int *)(unaff_EBP + 0x1c) << 0x10) / 0x29040;
  iVar1 = *(int *)(unaff_EBP + 0x18);
  if (iVar1 == 0) {
    DAT_0804ab48 = 0x2a;
  }
  else {
    DAT_0804ab40 = (undefined4)((ulonglong)(longlong)iVar1 / 0x67);
    DAT_0804ab44 = (int)((ulonglong)(longlong)iVar1 % 0x67) * 0x27c4597;
  }
  FUN_0804888c();
  DAT_0804ab54 = -DAT_0804ab54;
  FUN_08048891();
  FUN_0804888c();
  FUN_0804888c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 FUN_0804888c(int param_1,undefined4 param_2,int param_3)

{
  int unaff_ESI;
  int *unaff_EDI;
  bool bVar1;
  
  DAT_0804ab54 = param_1;
  do {
    if (param_3 == 0) {
      return;
    }
    DAT_0804ab60 = DAT_0804ab60 + DAT_0804ab64;
    DAT_0804ab64 = DAT_0804ab64 + DAT_0804ab68;
    *unaff_EDI = ((int)(&DAT_0808ab70)[DAT_0804ab48 & 0xffff] >> 4) *
                 (*(int *)(unaff_ESI + (DAT_0804ab60 >> 0x10) * 4) * (DAT_0804ab50 >> 10) >> 0xb) >>
                 0xc;
    DAT_0804ab50 = DAT_0804ab50 + DAT_0804ab54;
    bVar1 = CARRY4(_DAT_0804ab4c,DAT_0804ab44);
    _DAT_0804ab4c = _DAT_0804ab4c + DAT_0804ab44;
    DAT_0804ab48 = DAT_0804ab48 + DAT_0804ab40 + (uint)bVar1;
    param_3 = param_3 + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (param_3 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048891(void)

{
  int in_ECX;
  int unaff_ESI;
  int *unaff_EDI;
  bool bVar1;
  
  do {
    if (in_ECX == 0) {
      return;
    }
    DAT_0804ab60 = DAT_0804ab60 + DAT_0804ab64;
    DAT_0804ab64 = DAT_0804ab64 + DAT_0804ab68;
    *unaff_EDI = ((int)(&DAT_0808ab70)[DAT_0804ab48 & 0xffff] >> 4) *
                 (*(int *)(unaff_ESI + (DAT_0804ab60 >> 0x10) * 4) * (DAT_0804ab50 >> 10) >> 0xb) >>
                 0xc;
    DAT_0804ab50 = DAT_0804ab50 + DAT_0804ab54;
    bVar1 = CARRY4(_DAT_0804ab4c,DAT_0804ab44);
    _DAT_0804ab4c = _DAT_0804ab4c + DAT_0804ab44;
    DAT_0804ab48 = DAT_0804ab48 + DAT_0804ab40 + (uint)bVar1;
    in_ECX = in_ECX + -1;
    unaff_EDI = unaff_EDI + 1;
  } while (in_ECX != 0);
  return;
}



void FUN_0804890c(void)

{
  uint uVar1;
  
  uVar1 = DAT_0804a626 + 0xf31782ce ^ 0xf31782ce;
  DAT_0804a626 = uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  
  FUN_08048714();
  SDL_Init(0x31);
  SDL_OpenAudio(&DAT_0804a734,0);
  SDL_SetVideoMode(0x280,0x1e0,0x20,0x80000003);
  FUN_080491c0();
  SDL_ShowCursor(0);
  SDL_PauseAudio();
  _DAT_087cabe8 = SDL_GetTicks();
  do {
    iVar3 = SDL_GetTicks();
    FUN_08048e99(iVar3 - _DAT_087cabe8);
    SDL_GL_SwapBuffers();
    if (DAT_0804a74c != '\0') break;
    SDL_PollEvent(&DAT_087cabec);
  } while (DAT_087cabec != '\x02');
  SDL_Quit();
  pcVar2 = (code *)swi(0x80);
  (*pcVar2)();
  iVar3 = 0;
  iVar5 = 0;
  do {
    sVar1 = *(short *)(unaff_EDI + iVar5 * 2);
    (&DAT_087d55e0)[iVar5] = (float)sVar1 * _DAT_0804a8c8;
    iVar4 = (int)sVar1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x400);
  _DAT_087d55c0 = _DAT_0804a8d0 * _DAT_087d55c0 + (float)(short)iVar3 * _DAT_0804a8cc;
  if (0x2f < _DAT_087d55c4) {
    _DAT_087d55c0 = 0.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_080489c8(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  short local_4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    sVar1 = *(short *)(unaff_EDI + iVar3 * 2);
    (&DAT_087d55e0)[iVar3] = (float)sVar1 * _DAT_0804a8c8;
    iVar2 = (int)sVar1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x400);
  local_4 = (short)iVar4;
  _DAT_087d55c0 = _DAT_0804a8d0 * _DAT_087d55c0 + (float)local_4 * _DAT_0804a8cc;
  if (0x2f < _DAT_087d55c4) {
    _DAT_087d55c0 = 0.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048a31(float param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    fVar1 = (param_1 + param_1) * param_1;
    fVar3 = param_1 * param_1;
    fVar2 = *(float *)(param_2 + 0x18 + iVar4 * 4) - *(float *)(param_2 + 0xc + iVar4 * 4);
    *(float *)(param_3 + iVar4 * 4) =
         (fVar3 * param_1 * _DAT_0804a8d8 + fVar3 * _DAT_0804a8d4) *
         *(float *)(param_2 + 0x18 + iVar4 * 4) +
         ((param_1 * fVar1 - fVar3 * _DAT_0804a8d4) + 1.0) * *(float *)(param_2 + 0xc + iVar4 * 4) +
         (1.0 - DAT_087d4844) *
         ((*(float *)(param_2 + 0xc + iVar4 * 4) - *(float *)(param_2 + iVar4 * 4)) *
          (1.0 - DAT_087d4848) * (_DAT_087d484c + 1.0) +
         (1.0 - _DAT_087d484c) * (DAT_087d4848 + 1.0) * fVar2) *
         ((fVar3 * param_1 - fVar1) + param_1) * _DAT_0804a8dc +
         (1.0 - DAT_087d4844) *
         ((*(float *)(param_2 + 0x24 + iVar4 * 4) - *(float *)(param_2 + 0x18 + iVar4 * 4)) *
          (1.0 - _DAT_087d484c) * (1.0 - DAT_087d4848) +
         (_DAT_087d484c + 1.0) * (DAT_087d4848 + 1.0) * fVar2) * fVar3 * (param_1 - 1.0) *
         _DAT_0804a8dc;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm1 FUN_08048b1e(int param_1_00,float param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  uint local_14;
  
  iVar2 = 0;
  local_14 = 0;
  do {
    iVar4 = 0;
    do {
      iVar3 = iVar2;
      fVar10 = _DAT_0804a8e0 * (float)iVar4;
      FUN_08048a31(fVar10,&DAT_0804a800 + local_14 * 0xc,&DAT_087d4864,param_1_00);
      puVar9 = &DAT_087d4870;
      puVar1 = &DAT_0804a860 + local_14 * 0xc;
      FUN_08048a31(fVar10,puVar1,&DAT_087d4870);
      iVar2 = 0;
      do {
        (&DAT_087d48a0)[iVar3 * 3 + iVar2] =
             param_1 * (float)(&DAT_087d4870)[iVar2] +
             (_DAT_0804a8e4 - param_1) * (float)(&DAT_087d4864)[iVar2];
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      param_1_00 = iVar3 * 3;
      fVar5 = (float10)fsin((float10)_DAT_0804a8e8 * (float10)iVar3);
      (&DAT_087d48a8)[iVar3 * 3] = (float)(fVar5 * (float10)_DAT_0804a8ec);
      iVar2 = iVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  local_14 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = local_14 * 0xc;
      _DAT_087d487c = *(float *)(&DAT_087d48b4 + iVar2) - (float)(&DAT_087d48a8)[local_14 * 3];
      _DAT_087d4880 = (float)(&DAT_087d48a0)[local_14 * 3] - *(float *)(&DAT_087d48ac + iVar2);
      _DAT_087d4884 = *(float *)(&DAT_087d48b0 + iVar2) - (float)(&DAT_087d48a4)[local_14 * 3];
      fVar5 = (float10)local_14;
      fVar6 = (float10)_DAT_087d55c8;
      fVar7 = (float10)fsin(fVar6 * (float10)_DAT_0804a8f0 + fVar5 * (float10)_DAT_0804a8dc);
      (&DAT_087d48a4)[local_14 * 3] =
           (float)(fVar7 * (float10)_DAT_087d55c0 * (fVar5 * (float10)_DAT_0804a8f4 + (float10)1) *
                   (float10)_DAT_0804a8f0 + (float10)(float)(&DAT_087d48a4)[local_14 * 3]);
      fVar6 = (float10)fsin(fVar6 * (float10)_DAT_0804a8fc + fVar5 * (float10)_DAT_0804a8f8);
      (&DAT_087d48a8)[local_14 * 3] =
           (float)((fVar5 + (float10)1) * fVar6 * (float10)_DAT_087d55c0 * (float10)_DAT_0804a900 +
                  (float10)(float)(&DAT_087d48a8)[local_14 * 3]);
      (*_DAT_087d558c)(0xb50,puVar1,puVar9);
      (*_DAT_087d558c)(0xba1);
      (*_DAT_087d558c)(0xb71);
      (*_DAT_087d5580)(_DAT_087d4850 * _DAT_0804a90c,_DAT_087d4850 * _DAT_0804a908,
                       _DAT_087d4850 * _DAT_0804a904);
      (*_DAT_087d5598)(&DAT_087d487c);
      (*DAT_087d5564)(9);
      (*_DAT_087d556c)((&DAT_087d48a0)[local_14 * 3],(&DAT_087d48a8)[local_14 * 3] ^ 0x80000000,
                       (float)(&DAT_087d48a4)[local_14 * 3] * _DAT_0804a910);
      (*_DAT_087d556c)(*(undefined4 *)(&DAT_087d48ac + iVar2),
                       *(uint *)(&DAT_087d48b4 + iVar2) ^ 0x80000000,
                       *(float *)(&DAT_087d48b0 + iVar2) * _DAT_0804a910);
      (*_DAT_087d556c)(*(undefined4 *)(&DAT_087d48ac + iVar2),*(undefined4 *)(&DAT_087d48b4 + iVar2)
                       ,*(float *)(&DAT_087d48b0 + iVar2) * _DAT_0804a910);
      fVar10 = (float)(&DAT_087d48a4)[local_14 * 3] * _DAT_0804a910;
      uVar8 = (&DAT_087d48a8)[local_14 * 3];
      uVar11 = (&DAT_087d48a0)[local_14 * 3];
      (*_DAT_087d556c)();
      (*_DAT_087d5568)(uVar11,uVar8,fVar10);
      uVar11 = 0;
      uVar8 = 0;
      (*_DAT_087d5580)(0);
      (*_DAT_087d5590)(0xb50);
      (*DAT_087d5564)(1,uVar8,uVar11);
      (*_DAT_087d556c)((&DAT_087d48a0)[local_14 * 3],(&DAT_087d48a8)[local_14 * 3] ^ 0x80000000,
                       (float)(&DAT_087d48a4)[local_14 * 3] * _DAT_0804a910);
      (*_DAT_087d556c)(*(undefined4 *)(&DAT_087d48ac + iVar2),
                       *(uint *)(&DAT_087d48b4 + iVar2) ^ 0x80000000,
                       *(float *)(&DAT_087d48b0 + iVar2) * _DAT_0804a910);
      (*_DAT_087d556c)(*(undefined4 *)(&DAT_087d48ac + iVar2),*(undefined4 *)(&DAT_087d48b4 + iVar2)
                       ,*(float *)(&DAT_087d48b0 + iVar2) * _DAT_0804a910);
      puVar9 = (undefined4 *)((float)(&DAT_087d48a4)[local_14 * 3] * _DAT_0804a910);
      puVar1 = (undefined *)(&DAT_087d48a8)[local_14 * 3];
      uVar8 = (&DAT_087d48a0)[local_14 * 3];
      (*_DAT_087d556c)();
      (*_DAT_087d5568)(uVar8);
      local_14 = local_14 + 1;
    } while ((int)local_14 < iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08048e99(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  _DAT_087d55c8 = (float)param_1;
  _DAT_087d55c4 = (int)ROUND((_DAT_0804a914 * (float)DAT_0804a72e - _DAT_0804a918) * _DAT_0804a91c);
  if (0x3a < _DAT_087d55c4) {
    DAT_0804a74c = 1;
  }
  iVar2 = (int)ROUND(_DAT_0804a920 * (float)param_1);
  if (iVar2 == _DAT_0804a8b4) {
    return;
  }
  uVar3 = 0;
  while (_DAT_0804a8b4 = iVar2, (char)(&DAT_0804a769)[uVar3 * 9] <= _DAT_087d55c4) {
    uVar3 = uVar3 + 1;
    if (0xf < uVar3) goto LAB_08048f70;
  }
  iVar2 = 1;
  do {
    *(float *)(&DAT_087d4840 + iVar2 * 4) =
         (float)(short)*(char *)(iVar2 + 0x804a760 + uVar3 * 9) * _DAT_0804a928 +
         *(float *)(&DAT_087d4840 + iVar2 * 4) * _DAT_0804a924;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
LAB_08048f70:
  (*_DAT_087d5578)(_DAT_087d4860,_DAT_087d4860,_DAT_087d4860,0x3f800000);
  (*_DAT_087d557c)(0x4100);
  (*_DAT_087d5570)(0x1701);
  (*_DAT_087d5574)();
  (*_DAT_087d55a0)(0x47ae147b,0xbf847ae1,0x47ae147b,0x3f847ae1,0xeb851eb8,0xbf7eb851,0xeb851eb8,
                   0x3f7eb851,0x47ae147b,0x3f847ae1,0,0x4091bc00);
  (*_DAT_087d5570)(0x1700);
  (*_DAT_087d5574)();
  (*_DAT_087d5588)(0,0,DAT_087d4854);
  (*_DAT_087d5584)(-_DAT_087d4858 * _DAT_0804a92c,0x3f800000,0,0);
  _DAT_087d5560 = _DAT_0804a930 * _DAT_087d485c + _DAT_087d5560;
  uVar8 = 0x3f800000;
  uVar7 = 0;
  uVar6 = 0;
  uVar1 = (*_DAT_087d5584)(_DAT_087d5560,0,0,0x3f800000);
  if (_DAT_087d55c4 < 0x30) {
    (*_DAT_087d5590)(0xb50);
    (*_DAT_087d559c)(0x40400000);
    iVar2 = 0;
    do {
      (*DAT_087d5564)(3,uVar6,uVar7,uVar8);
      iVar4 = 0;
      do {
        fVar9 = (float)iVar4;
        fVar5 = (float10)fsin((float10)iVar4 * (float10)_DAT_0804a934);
        fVar5 = (float10)_DAT_0804a8e4 - fVar5;
        (*_DAT_087d5580)((float)fVar5,(float)fVar5,(float)fVar5,iVar4,fVar9);
        fVar9 = fVar9 * _DAT_0804a938 - _DAT_0804a8dc;
        (*_DAT_087d556c)(fVar9 + fVar9,(&DAT_087d55e0)[iVar4],0xbe99999a);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x400);
      (*_DAT_087d5568)();
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar6 = 0;
      uVar1 = (*_DAT_087d5584)(0x42b40000);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  (*_DAT_087d5594)(0x4000,0x1200,&DAT_0804a8b8,uVar1);
  (*_DAT_087d558c)(0x4000);
  (*_DAT_087d558c)(0xb57);
  (*_DAT_087d5584)(0x41700000,0,0,0x3f800000);
  iVar2 = 0;
  do {
    (*_DAT_087d5584)(0x41f00000,0,0,0x3f800000);
    fVar5 = (float10)fsin((float10)_DAT_0804a900 * (float10)param_1);
    FUN_08048b1e((float)(fVar5 * (float10)_DAT_0804a8dc + (float10)_DAT_0804a8dc));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  return;
}



undefined8 __regparm3 FUN_080491c0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar2 = dlopen(s_libGL_so_0804a93c,0);
  ppuVar4 = &PTR_s_glBegin_0804a945;
  puVar5 = &DAT_087d5564;
  while( true ) {
    uVar1 = (uint)bVar6;
    if (*ppuVar4 == (undefined *)0x0) break;
    uVar3 = dlsym(uVar2,*ppuVar4);
    *puVar5 = uVar3;
    ppuVar4 = ppuVar4 + uVar1 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  return CONCAT44(param_2,param_1);
}


