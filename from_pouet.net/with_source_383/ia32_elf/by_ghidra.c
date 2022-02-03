typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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

typedef ulong size_t;




void glTranslated(void)

{
  glTranslated();
  return;
}



void glEnd(void)

{
  glEnd();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



void glEnable(void)

{
  glEnable();
  return;
}



void glHint(void)

{
  glHint();
  return;
}



void glColor3fv(void)

{
  glColor3fv();
  return;
}



void glMatrixMode(void)

{
  glMatrixMode();
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



void glShadeModel(void)

{
  glShadeModel();
  return;
}



void glFrustum(void)

{
  glFrustum();
  return;
}



void glTranslatef(void)

{
  glTranslatef();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void glRotatef(void)

{
  glRotatef();
  return;
}



void glDepthFunc(void)

{
  glDepthFunc();
  return;
}



void glClearDepth(void)

{
  glClearDepth();
  return;
}



void glBegin(void)

{
  glBegin();
  return;
}



void glVertex3f(void)

{
  glVertex3f();
  return;
}



void glPushMatrix(void)

{
  glPushMatrix();
  return;
}



void glFlush(void)

{
  glFlush();
  return;
}



void SDL_Delay(void)

{
  SDL_Delay();
  return;
}



void SDL_Quit(void)

{
  SDL_Quit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



void glViewport(void)

{
  glViewport();
  return;
}



void FUN_08048903(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 1:
    iVar1 = param_1 + param_2 * 0xc;
    *(undefined4 *)(iVar1 + 8) = 0x3f800000;
    break;
  case 2:
    iVar1 = param_1 + param_2 * 0xc;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc + param_2 * 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
    return;
  case 3:
    iVar1 = param_1 + param_2 * 0xc;
    *(undefined4 *)(iVar1 + 8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc + param_2 * 0xc) = 0;
    goto LAB_0804899b;
  case 4:
    iVar1 = param_1 + param_2 * 0xc;
    *(undefined4 *)(iVar1 + 8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc + param_2 * 0xc) = 0x3f000000;
    goto LAB_0804899b;
  case 5:
    iVar1 = param_1 + param_2 * 0xc;
    *(undefined4 *)(iVar1 + 8) = 0;
    break;
  case 6:
    iVar1 = param_1 + param_2 * 0xc;
    *(undefined4 *)(iVar1 + 8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc + param_2 * 0xc) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
    return;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0xc + param_2 * 0xc) = 0x3f800000;
LAB_0804899b:
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}



int FUN_080489c3(int param_1,undefined param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_2) {
  case 0x42:
    uVar4 = (int)(param_4 - 2U) >> 0x1f;
    uVar3 = param_3 - 2;
    param_4 = (param_4 - 2U ^ uVar4) - uVar4;
    uVar4 = (int)uVar3 >> 0x1f;
    param_3 = 0;
    iVar1 = (uVar3 ^ uVar4) - uVar4;
    uVar2 = 3;
    break;
  default:
    uVar2 = 0;
    param_3 = 0;
    iVar1 = 0;
    goto LAB_08048a5e;
  case 0x44:
    iVar1 = 0;
    uVar3 = (int)(param_3 - 2U) >> 0x1f;
    param_3 = (param_3 - 2U ^ uVar3) - uVar3;
    uVar2 = 4;
    break;
  case 0x46:
    uVar3 = param_3 - 2;
    param_3 = 2;
    uVar4 = (int)uVar3 >> 0x1f;
    iVar1 = (uVar3 ^ uVar4) - uVar4;
    uVar2 = 2;
    break;
  case 0x4c:
    uVar3 = (int)(param_3 - 2U) >> 0x1f;
    iVar1 = (param_3 - 2U ^ uVar3) - uVar3;
    uVar2 = 5;
    param_3 = param_4;
LAB_08048a5e:
    param_4 = 0;
    break;
  case 0x52:
    uVar4 = (int)(param_3 - 2U) >> 0x1f;
    uVar3 = param_4 - 2;
    iVar1 = (param_3 - 2U ^ uVar4) - uVar4;
    uVar4 = (int)uVar3 >> 0x1f;
    param_4 = 2;
    param_3 = (uVar3 ^ uVar4) - uVar4;
    uVar2 = 0;
    break;
  case 0x54:
    uVar2 = 1;
    iVar1 = 2;
  }
  iVar1 = param_3 + 0xc + param_4 * 9 + iVar1 * 3;
  uVar2 = FUN_08048903(*(undefined4 *)(param_1 + 4 + iVar1 * 4),uVar2,param_5);
  *(undefined4 *)(param_1 + 4 + iVar1 * 4) = uVar2;
  return param_1;
}



void FUN_08048aa8(int param_1)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = 0;
  do {
    iVar4 = 0;
    do {
      iVar5 = 0;
      piVar6 = (int *)(param_1 + iVar4 * 0xc + 0x34 + iVar1 * 0x24);
      do {
        iVar7 = *piVar6;
        iVar3 = 0;
        do {
          *(undefined4 *)(iVar7 + 0x10 + iVar3) = 0x3e800000;
          *(undefined4 *)(iVar7 + 0xc + iVar3) = 0x3e800000;
          *(undefined4 *)(iVar7 + 8 + iVar3) = 0x3e800000;
          iVar3 = iVar3 + 0xc;
        } while (iVar3 != 0x48);
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 != 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  uVar2 = 0x54;
  iVar1 = 1;
  while( true ) {
    iVar4 = iVar1;
    iVar1 = 0;
    do {
      iVar5 = 0;
      do {
        iVar7 = iVar5 + 1;
        param_1 = FUN_080489c3(param_1,uVar2,iVar1,iVar5,iVar4);
        iVar5 = iVar7;
      } while (iVar7 != 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
    iVar1 = iVar4 + 1;
    if (iVar1 == 7) break;
    uVar2 = 0x54;
    switch(iVar4) {
    case 1:
      uVar2 = 0x46;
      break;
    case 2:
      uVar2 = 0x52;
      break;
    case 3:
      uVar2 = 0x4c;
      break;
    case 4:
      uVar2 = 0x42;
      break;
    case 5:
      uVar2 = 0x44;
    }
  }
  return;
}



void FUN_08048b68(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  param_1 = param_1 + 8;
  puVar1 = (undefined4 *)(param_1 + param_2 * 0xc);
  uVar2 = puVar1[2];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar5 = (undefined4 *)(param_1 + param_3 * 0xc);
  *puVar1 = *puVar5;
  puVar1[1] = puVar5[1];
  puVar1[2] = puVar5[2];
  puVar1 = (undefined4 *)(param_1 + param_4 * 0xc);
  *puVar5 = *puVar1;
  puVar5[1] = puVar1[1];
  puVar5[2] = puVar1[2];
  puVar5 = (undefined4 *)(param_1 + param_5 * 0xc);
  *puVar1 = *puVar5;
  puVar1[1] = puVar5[1];
  puVar1[2] = puVar5[2];
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  return;
}



void FUN_08048be1(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == 2) {
    uVar4 = 0;
    uVar3 = 2;
    uVar2 = 5;
    uVar1 = 3;
LAB_08048c08:
    FUN_08048b68(param_1,uVar1,uVar2,uVar3,uVar4);
    return;
  }
  if (param_2 == 3) {
    FUN_08048b68(param_1,1,5,4,0);
  }
  else if (param_2 == 1) {
    uVar4 = 3;
    uVar3 = 4;
    uVar2 = 2;
    uVar1 = 1;
    goto LAB_08048c08;
  }
  return;
}



void FUN_08048c24(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == 2) {
    uVar4 = 3;
    uVar3 = 5;
    uVar2 = 2;
    uVar1 = 0;
LAB_08048c4b:
    FUN_08048b68(param_1,uVar1,uVar2,uVar3,uVar4);
    return;
  }
  if (param_2 == 3) {
    FUN_08048b68(param_1,0,4,5,1);
  }
  else if (param_2 == 1) {
    uVar4 = 1;
    uVar3 = 2;
    uVar2 = 4;
    uVar1 = 3;
    goto LAB_08048c4b;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048e70)
// WARNING: Removing unreachable block (ram,0x08048e3a)

int FUN_08048c67(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = param_2 + 8;
  fVar1 = (float)param_3 + *(float *)(param_1 + 8 + iVar7 * 4);
  *(float *)(param_1 + 8 + iVar7 * 4) = fVar1;
  if (param_3 < 0) {
    if (fVar1 == -90.0) {
      *(undefined4 *)(param_1 + 8 + iVar7 * 4) = 0;
      iVar7 = param_2 + 0xc;
      uVar5 = *(undefined4 *)(param_1 + 4 + iVar7 * 4);
      *(undefined4 *)(param_1 + 4 + iVar7 * 4) = *(undefined4 *)(param_1 + 4 + (param_2 + 0x1e) * 4)
      ;
      *(undefined4 *)(param_1 + 4 + (param_2 + 0x1e) * 4) =
           *(undefined4 *)(param_1 + 4 + (param_2 + 0x24) * 4);
      *(undefined4 *)(param_1 + 4 + (param_2 + 0x24) * 4) =
           *(undefined4 *)(param_1 + 4 + (param_2 + 0x12) * 4);
      *(undefined4 *)(param_1 + 4 + (param_2 + 0x12) * 4) = uVar5;
      uVar5 = *(undefined4 *)(param_1 + 4 + (param_2 + 0x15) * 4);
      *(undefined4 *)(param_1 + 4 + (param_2 + 0x15) * 4) =
           *(undefined4 *)(param_1 + 4 + (param_2 + 0x21) * 4);
      *(undefined4 *)(param_1 + 4 + (param_2 + 0x21) * 4) =
           *(undefined4 *)(param_1 + 4 + (param_2 + 0x1b) * 4);
      *(undefined4 *)(param_1 + 4 + (param_2 + 0x1b) * 4) =
           *(undefined4 *)(param_1 + 4 + (param_2 + 0xf) * 4);
      puVar6 = (undefined4 *)(param_1 + 4 + iVar7 * 4);
      *(undefined4 *)(param_1 + 4 + (param_2 + 0xf) * 4) = uVar5;
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        uVar5 = FUN_08048be1(*puVar6,3);
        *puVar6 = uVar5;
        uVar5 = FUN_08048be1(puVar6[3],3);
        puVar6[3] = uVar5;
        uVar5 = FUN_08048be1(puVar6[6],3);
        puVar6[6] = uVar5;
        puVar6 = puVar6 + 9;
      } while (iVar7 != 3);
    }
  }
  else if ((param_3 != 0) && (fVar1 == 90.0)) {
    uVar5 = *(undefined4 *)(param_1 + 4 + (param_2 + 0x24) * 4);
    *(undefined4 *)(param_1 + 8 + iVar7 * 4) = 0;
    uVar4 = *(undefined4 *)(param_1 + 4 + (param_2 + 0x12) * 4);
    *(undefined4 *)(param_1 + 4 + (param_2 + 0x12) * 4) = uVar5;
    *(undefined4 *)(param_1 + 4 + (param_2 + 0x24) * 4) =
         *(undefined4 *)(param_1 + 4 + (param_2 + 0x1e) * 4);
    iVar7 = param_2 + 0xc;
    *(undefined4 *)(param_1 + 4 + (param_2 + 0x1e) * 4) = *(undefined4 *)(param_1 + 4 + iVar7 * 4);
    *(undefined4 *)(param_1 + 4 + iVar7 * 4) = uVar4;
    uVar5 = *(undefined4 *)(param_1 + 4 + (param_2 + 0xf) * 4);
    *(undefined4 *)(param_1 + 4 + (param_2 + 0xf) * 4) =
         *(undefined4 *)(param_1 + 4 + (param_2 + 0x1b) * 4);
    *(undefined4 *)(param_1 + 4 + (param_2 + 0x1b) * 4) =
         *(undefined4 *)(param_1 + 4 + (param_2 + 0x21) * 4);
    *(undefined4 *)(param_1 + 4 + (param_2 + 0x21) * 4) =
         *(undefined4 *)(param_1 + 4 + (param_2 + 0x15) * 4);
    puVar6 = (undefined4 *)(param_1 + 4 + iVar7 * 4);
    *(undefined4 *)(param_1 + 4 + (param_2 + 0x15) * 4) = uVar5;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      uVar5 = FUN_08048c24(*puVar6,3);
      *puVar6 = uVar5;
      uVar5 = FUN_08048c24(puVar6[3],3);
      puVar6[3] = uVar5;
      uVar5 = FUN_08048c24(puVar6[6],3);
      puVar6[6] = uVar5;
      puVar6 = puVar6 + 9;
    } while (iVar7 != 3);
  }
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(param_1 + 0x2c);
  if ((((fVar1 == fVar2) || (fVar1 == fVar2 - 90.0)) || (fVar1 == fVar2 + 90.0)) &&
     (((fVar3 = *(float *)(param_1 + 0x30), fVar2 == fVar3 || (fVar2 == fVar3 - 90.0)) ||
      (fVar2 == fVar3 + 90.0)))) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(float *)(param_1 + 0xc) = fVar1 + *(float *)(param_1 + 0xc);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x08049091)
// WARNING: Removing unreachable block (ram,0x0804905b)

int FUN_08048eb5(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar1 = param_2 + 4;
  fVar2 = (float)param_3 + *(float *)(param_1 + 0xc + iVar1 * 4);
  *(float *)(param_1 + 0xc + iVar1 * 4) = fVar2;
  if (param_3 < 0) {
    if (fVar2 == -90.0) {
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0xc + iVar1 * 4) = 0;
      iVar1 = param_1 + param_2 * 0xc;
      uVar6 = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x84);
      *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar1 + 0x7c);
      uVar5 = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(iVar1 + 0x34) = uVar6;
      uVar6 = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(iVar1 + 0x7c) = uVar5;
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x60);
      *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar1 + 0x80);
      uVar5 = *(undefined4 *)(iVar1 + 0x58);
      *(undefined4 *)(iVar1 + 0x58) = uVar6;
      *(undefined4 *)(iVar1 + 0x80) = uVar5;
      puVar7 = (undefined4 *)(param_1 + 0x34 + param_2 * 0xc);
      do {
        iVar8 = iVar8 + 1;
        uVar6 = FUN_08048be1(*puVar7,2);
        *puVar7 = uVar6;
        uVar6 = FUN_08048be1(puVar7[1],2);
        puVar7[1] = uVar6;
        uVar6 = FUN_08048be1(puVar7[2],2);
        puVar7[2] = uVar6;
        puVar7 = puVar7 + 9;
      } while (iVar8 != 3);
    }
  }
  else if ((param_3 != 0) && (fVar2 == 90.0)) {
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0xc + iVar1 * 4) = 0;
    iVar1 = param_1 + param_2 * 0xc;
    uVar6 = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x84);
    uVar5 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x3c) = uVar6;
    uVar6 = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(iVar1 + 0x84) = uVar5;
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar1 + 0x60);
    uVar5 = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x38) = uVar6;
    *(undefined4 *)(iVar1 + 0x60) = uVar5;
    puVar7 = (undefined4 *)(param_1 + 0x34 + param_2 * 0xc);
    do {
      iVar8 = iVar8 + 1;
      uVar6 = FUN_08048c24(*puVar7,2);
      *puVar7 = uVar6;
      uVar6 = FUN_08048c24(puVar7[1],2);
      puVar7[1] = uVar6;
      uVar6 = FUN_08048c24(puVar7[2],2);
      puVar7[2] = uVar6;
      puVar7 = puVar7 + 9;
    } while (iVar8 != 3);
  }
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar3 = *(float *)(param_1 + 0x20);
  if ((((fVar2 == fVar3) || (fVar2 == fVar3 - 90.0)) || (fVar2 == fVar3 + 90.0)) &&
     (((fVar4 = *(float *)(param_1 + 0x24), fVar3 == fVar4 || (fVar3 == fVar4 - 90.0)) ||
      (fVar3 == fVar4 + 90.0)))) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(float *)(param_1 + 8) = fVar2 + *(float *)(param_1 + 8);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0804928d)
// WARNING: Removing unreachable block (ram,0x08049257)

int FUN_080490d5(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar1 = param_2 + 4;
  fVar2 = (float)param_3 + *(float *)(param_1 + iVar1 * 4);
  *(float *)(param_1 + iVar1 * 4) = fVar2;
  if (param_3 < 0) {
    if (fVar2 == -90.0) {
      iVar8 = 0;
      *(undefined4 *)(param_1 + iVar1 * 4) = 0;
      iVar1 = param_1 + param_2 * 0x24;
      uVar6 = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x4c);
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x54);
      uVar5 = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined4 *)(iVar1 + 0x3c) = uVar6;
      uVar6 = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar1 + 0x54) = uVar5;
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x50);
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x48);
      uVar5 = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(iVar1 + 0x38) = uVar6;
      *(undefined4 *)(iVar1 + 0x48) = uVar5;
      puVar7 = (undefined4 *)(param_1 + 0x34 + param_2 * 0x24);
      do {
        iVar8 = iVar8 + 1;
        uVar6 = FUN_08048be1(*puVar7,1);
        *puVar7 = uVar6;
        uVar6 = FUN_08048be1(puVar7[1],1);
        puVar7[1] = uVar6;
        uVar6 = FUN_08048be1(puVar7[2],1);
        puVar7[2] = uVar6;
        puVar7 = puVar7 + 3;
      } while (iVar8 != 3);
    }
  }
  else if ((param_3 != 0) && (fVar2 == 90.0)) {
    iVar8 = 0;
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    iVar1 = param_1 + param_2 * 0x24;
    uVar6 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar1 + 0x4c);
    uVar5 = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x34) = uVar6;
    uVar6 = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x4c) = uVar5;
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x50);
    uVar5 = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(iVar1 + 0x40) = uVar6;
    *(undefined4 *)(iVar1 + 0x50) = uVar5;
    puVar7 = (undefined4 *)(param_1 + 0x34 + param_2 * 0x24);
    do {
      iVar8 = iVar8 + 1;
      uVar6 = FUN_08048c24(*puVar7,1);
      *puVar7 = uVar6;
      uVar6 = FUN_08048c24(puVar7[1],1);
      puVar7[1] = uVar6;
      uVar6 = FUN_08048c24(puVar7[2],1);
      puVar7[2] = uVar6;
      puVar7 = puVar7 + 3;
    } while (iVar8 != 3);
  }
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  if ((((fVar2 == fVar3) || (fVar2 == fVar3 - 90.0)) || (fVar2 == fVar3 + 90.0)) &&
     (((fVar4 = *(float *)(param_1 + 0x18), fVar3 == fVar4 || (fVar3 == fVar4 - 90.0)) ||
      (fVar3 == fVar4 + 90.0)))) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(float *)(param_1 + 4) = fVar2 + *(float *)(param_1 + 4);
  }
  return param_1;
}



undefined4 FUN_080492d1(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 2) {
    FUN_08048eb5(param_1,*(undefined4 *)(param_2 + 8),param_3);
  }
  else if (iVar1 == 3) {
    FUN_08048c67(param_1,*(undefined4 *)(param_2 + 8),param_3);
  }
  else if (iVar1 == 1) {
    FUN_080490d5(param_1,*(undefined4 *)(param_2 + 8),param_3);
  }
  return param_1;
}



undefined8 FUN_08049330(char param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uStack12;
  
  do {
    iVar1 = SDL_PollEvent(&param_1);
    if (iVar1 == 0) goto LAB_0804935f;
  } while ((param_1 != '\x02') || (param_3 != 0x1b));
  iVar1 = 1;
LAB_0804935f:
  return CONCAT44(uStack12,iVar1);
}



void FUN_08049363(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = malloc(0xc);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 8) = param_2;
  return;
}



void FUN_0804937f(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x50);
  *(undefined4 *)((int)pvVar1 + 4) = 0x3f4ccccd;
  return;
}



void FUN_08049394(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  pvVar1 = malloc(0xa0);
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x28) = 0;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(undefined4 *)((int)pvVar1 + 0x20) = 0;
  *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar1 + 0x18) = 0;
  *(undefined4 *)((int)pvVar1 + 0x24) = 0;
  *(undefined4 *)((int)pvVar1 + 0x30) = 0;
  do {
    iVar3 = 0;
    puVar4 = (undefined4 *)((int)pvVar1 + iVar5 * 0x24 + 0x34);
    do {
      uVar2 = FUN_0804937f();
      iVar3 = iVar3 + 1;
      *puVar4 = uVar2;
      uVar2 = FUN_0804937f();
      puVar4[1] = uVar2;
      uVar2 = FUN_0804937f();
      puVar4[2] = uVar2;
      puVar4 = puVar4 + 3;
    } while (iVar3 != 3);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  FUN_08048aa8(pvVar1);
  return;
}



void FUN_08049444(int param_1)

{
  float fVar1;
  
  glPushMatrix();
  glBegin(7);
  glColor3fv(param_1 + 8);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,fVar1);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,-*(float *)(param_1 + 4) / 1.8);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(*(float *)(param_1 + 4) / 1.8,fVar1,fVar1);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,-*(float *)(param_1 + 4) / 1.8,fVar1);
  glColor3fv(param_1 + 0x14);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,*(float *)(param_1 + 4) / 1.8,fVar1);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(-*(float *)(param_1 + 4) / 1.8,fVar1,fVar1);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,fVar1);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,-*(float *)(param_1 + 4) / 1.8);
  glColor3fv(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,fVar1);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(-*(float *)(param_1 + 4) / 1.8,fVar1,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,*(float *)(param_1 + 4) / 1.8);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,-*(float *)(param_1 + 4) / 1.8,fVar1);
  glColor3fv(param_1 + 0x2c);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,-*(float *)(param_1 + 4) / 1.8);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,*(float *)(param_1 + 4) / 1.8,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(*(float *)(param_1 + 4) / 1.8,fVar1,fVar1);
  glColor3fv(param_1 + 0x38);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,*(float *)(param_1 + 4) / 1.8);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,-*(float *)(param_1 + 4) / 1.8,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(*(float *)(param_1 + 4) / 1.8,fVar1,fVar1);
  glColor3fv(param_1 + 0x44);
  fVar1 = *(float *)(param_1 + 4) / 1.8;
  glVertex3f(-*(float *)(param_1 + 4) / 1.8,fVar1,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,*(float *)(param_1 + 4) / 1.8,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,fVar1);
  fVar1 = -*(float *)(param_1 + 4) / 1.8;
  glVertex3f(fVar1,fVar1,*(float *)(param_1 + 4) / 1.8);
  glEnd();
  glPopMatrix();
  return;
}



void FUN_0804993d(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  int local_28;
  int local_24;
  
  iVar4 = 0;
  glRotatef(*(undefined4 *)(param_1 + 4),0x3f800000,0,0);
  glRotatef(*(undefined4 *)(param_1 + 8),0,0x3f800000,0);
  glRotatef(*(undefined4 *)(param_1 + 0xc),0,0,0x3f800000);
  local_28 = param_1;
  do {
    iVar2 = 0;
    glRotatef(*(undefined4 *)(param_1 + 0x10 + iVar4 * 4),0x3f800000,0,0);
    local_24 = local_28;
    do {
      iVar3 = 0;
      glRotatef(*(undefined4 *)(param_1 + 0x1c + iVar2 * 4),0,0x3f800000,0);
      do {
        uVar5 = 0x3f800000;
        glRotatef(*(undefined4 *)(param_1 + 0x28 + iVar3 * 4),0,0,0x3f800000);
        fVar6 = (float)iVar3;
        glTranslatef((float)iVar4 - 1.0,(float)iVar2 - 1.0,fVar6 - 1.0,uVar5,fVar6);
        FUN_08049444(*(undefined4 *)(local_24 + 0x34 + iVar3 * 4));
        glTranslatef(1.0 - (float)iVar4,1.0 - (float)iVar2,1.0 - fVar6);
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        glRotatef(-*(float *)(param_1 + 0x28 + iVar1),0,0,0x3f800000);
      } while (iVar3 != 3);
      iVar3 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      glRotatef(-*(float *)(param_1 + 0x1c + iVar3),0,0x3f800000,0);
      local_24 = local_24 + 0xc;
    } while (iVar2 != 3);
    iVar2 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    glRotatef(-*(float *)(param_1 + 0x10 + iVar2),0x3f800000,0,0);
    local_28 = local_28 + 0x24;
  } while (iVar4 != 3);
  glRotatef(-*(float *)(param_1 + 0xc),0,0,0x3f800000);
  glRotatef(-*(float *)(param_1 + 8),0,0x3f800000,0);
  glRotatef(-*(float *)(param_1 + 4),0x3f800000,0,0);
  return;
}



void entry(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 uStack364;
  undefined4 uStack360;
  undefined4 uStack356;
  undefined4 uStack352;
  undefined4 *local_14c;
  undefined4 *local_148;
  undefined4 *local_144;
  undefined4 *local_140;
  int local_130;
  undefined4 auStack288 [60];
  undefined4 local_30 [8];
  
  bVar7 = 0;
  uStack352 = 0x8049b38;
  SDL_SetVideoMode();
  uStack352 = 0x8049b44;
  SDL_ShowCursor();
  uStack352 = 0x8049b50;
  glShadeModel();
  uStack352 = 0x3f000000;
  uStack356 = 0x3f4ccccd;
  uStack360 = 0x3f4ccccd;
  uStack364 = 0x3f4ccccd;
  glClearColor();
  uStack352 = 0x8049b78;
  glClearDepth();
  uStack352 = 0x8049b84;
  glEnable();
  uStack352 = 0x8049b90;
  glDepthFunc();
  uStack352 = 0x8049ba1;
  glHint();
  uStack352 = 800;
  uStack356 = 0x500;
  uStack360 = 0;
  uStack364 = 0;
  glViewport();
  uStack352 = 0x8049bc1;
  glMatrixMode();
  uStack352 = 0x8049bc6;
  glLoadIdentity();
  uStack352 = 0x40590000;
  uStack356 = 0;
  uStack360 = 0x3ff80000;
  uStack364 = 0;
  glFrustum(0x147ae148,0xbff547ae,0x147ae148,0x3ff547ae,0,0xbff00000,0,0x3ff00000);
  uStack352 = 0x8049c08;
  glMatrixMode();
  uStack352 = 0x8049c0d;
  glLoadIdentity();
  uStack352 = 0x8049c19;
  glClear();
  uStack352 = 0x8049c1e;
  glLoadIdentity();
  iVar4 = 0;
  uStack352 = 0;
  uStack356 = 0;
  uStack360 = 0;
  uStack364 = 0;
  glTranslated();
  uStack352 = 0x8049c4c;
  glRotatef();
  uStack352 = 0;
  uStack356 = 0x3f800000;
  uStack360 = 0;
  uStack364 = 0x42700000;
  glRotatef();
  FUN_08049394();
  uStack352 = 0x8049c76;
  srand(100000000);
  local_130 = 0;
  local_140 = local_30;
  do {
    puVar5 = local_140;
    puVar6 = &uStack364;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar3 = FUN_08049330();
    if (iVar3 == 1) goto LAB_08049e43;
    iVar3 = rand();
    iVar3 = iVar3 % 3 + 1;
    rand();
    if (local_130 == iVar3) {
      iVar4 = iVar4 + -1;
    }
    else {
      uStack352 = 0x8049cd5;
      uVar2 = FUN_08049363();
      auStack288[iVar4] = uVar2;
      uStack352 = 0x8049ce5;
      FUN_080492d1();
      local_130 = iVar3;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x3c);
  iVar4 = 0;
  uStack352 = 0x8049cfd;
  FUN_0804993d();
  uStack352 = 0x8049d02;
  SDL_GL_SwapBuffers();
  local_144 = local_30;
  do {
    puVar5 = local_144;
    puVar6 = &uStack364;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar3 = FUN_08049330();
    if (iVar3 == 1) goto LAB_08049e43;
    iVar4 = iVar4 + 1;
    uStack352 = 0x8049d46;
    glRotatef();
    uStack352 = 0x8049d52;
    glClear();
    uStack352 = 0x8049d57;
    glFlush();
    uStack352 = 0x8049d5f;
    FUN_0804993d();
    uStack352 = 0x8049d64;
    SDL_GL_SwapBuffers();
    uStack352 = 0x8049d70;
    SDL_Delay();
  } while (iVar4 != 200);
  local_148 = local_30;
  iVar4 = 0x3b;
  do {
    local_130 = 0;
    do {
      puVar5 = local_148;
      puVar6 = &uStack364;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = FUN_08049330();
      if (iVar3 == 1) goto LAB_08049e43;
      uStack352 = 0x8049dc2;
      glRotatef();
      uStack352 = 0x8049dd1;
      FUN_080492d1();
      uStack352 = 0x8049ddd;
      glClear();
      uStack352 = 0x8049de2;
      glFlush();
      uStack352 = 0x8049dea;
      FUN_0804993d();
      uStack352 = 0x8049def;
      SDL_GL_SwapBuffers();
      uStack352 = 0x8049dfb;
      SDL_Delay();
      local_130 = local_130 + 1;
    } while (local_130 != 0x12);
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  local_14c = local_30;
  iVar4 = 0;
  while( true ) {
    puVar5 = local_14c;
    puVar6 = &uStack364;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar3 = FUN_08049330();
    if (iVar3 == 1) break;
    iVar4 = iVar4 + 1;
    uStack352 = 0x8049e69;
    glRotatef();
    uStack352 = 0x8049e75;
    glClear();
    uStack352 = 0x8049e7a;
    glFlush();
    uStack352 = 0x8049e82;
    FUN_0804993d();
    uStack352 = 0x8049e87;
    SDL_GL_SwapBuffers();
    uStack352 = 0x8049e93;
    SDL_Delay();
    if (iVar4 == 0x15e) {
      SDL_Quit();
      pcVar1 = (code *)swi(0x80);
      (*pcVar1)();
      return;
    }
  }
LAB_08049e43:
  SDL_Quit();
  return;
}


