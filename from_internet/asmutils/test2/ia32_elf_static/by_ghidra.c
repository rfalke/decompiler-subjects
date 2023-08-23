typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef ulong size_t;

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

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
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

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};




void main(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined local_22 [18];
  undefined *puStack_10;
  
  puStack_10 = &stack0x00000004;
  pcVar1 = (char *)_fastcall();
  uVar2 = 10;
  pcVar1 = (char *)printf(pcVar1);
  printf(pcVar1);
                    // WARNING: Subroutine does not return
  read(0,local_22,10,uVar2);
}



void processEntry entry(void)

{
  __start_main();
  return;
}



void __get_GOT(void)

{
  return;
}



undefined8 __regparm3
__system_call(int param_1_00,undefined4 param_2_00,undefined4 param_3,undefined4 param_1,int param_2
             )

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int iVar4;
  char *unaff_retaddr;
  
  iVar4 = unaff_EBX;
  if ((*unaff_retaddr != '\0') &&
     ((*unaff_retaddr < '\0' ||
      (__get_GOT(), iVar4 = param_1_00, **(char **)(unaff_EBX + 0x2d44) == '\0')))) {
    iVar4 = param_2;
  }
  pcVar1 = (code *)swi(0x80);
  uVar2 = (*pcVar1)();
  if (0xfffff000 < uVar2) {
    uVar3 = __get_GOT();
    **(undefined4 **)(iVar4 + 0x2ce9) = uVar3;
    uVar2 = 0xffffffff;
  }
  return CONCAT44(param_3,uVar2);
}



void open(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void close(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void read(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void write(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void lseek(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void chmod(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void chown(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void pipe(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void link(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void symlink(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void unlink(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void mkdir(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void rmdir(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void exit(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void fork(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void execve(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void uname(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void ioctl(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void alarm(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void nanosleep(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void kill(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void signal(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void wait4(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void fstat(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void lstat(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void getuid(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void getgid(void)

{
                    // WARNING: Subroutine does not return
  __system_call();
}



void __start_main(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBX;
  code *unaff_retaddr;
  undefined4 uStack00000004;
  
  uStack00000004 = 0x80493ef;
  uVar1 = __get_GOT();
  **(undefined4 **)(unaff_EBX + 0x2c05) = extraout_ECX;
  uVar1 = (*unaff_retaddr)(uVar1);
                    // WARNING: Subroutine does not return
  exit(uVar1);
}



void _fastcall(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  uVar1 = __get_GOT();
  **(undefined4 **)(unaff_EBX + 0x2bec) = uVar1;
  return;
}



void * __regparm2 memset(void *__s,int __c,size_t __n)

{
  undefined uVar1;
  int extraout_ECX;
  int iVar2;
  undefined *extraout_EDX;
  int unaff_EBX;
  undefined *puVar3;
  undefined in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = __get_GOT();
  iVar2 = extraout_ECX;
  puVar3 = extraout_EDX;
  if (**(char **)(unaff_EBX + 0x2bd2) == '\0') {
    iVar2 = in_stack_0000000c;
    puVar3 = (undefined *)__n;
    uVar1 = in_stack_00000008;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  return __s;
}



void * __regparm2 memcpy(void *__dest,void *__src,size_t __n)

{
  int extraout_ECX;
  int iVar1;
  int unaff_EBX;
  undefined *puVar2;
  undefined *in_stack_00000008;
  int in_stack_0000000c;
  
  __get_GOT();
  iVar1 = extraout_ECX;
  puVar2 = (undefined *)__dest;
  if (**(char **)(unaff_EBX + 0x2b9e) == '\0') {
    iVar1 = in_stack_0000000c;
    __src = in_stack_00000008;
    puVar2 = (undefined *)__n;
  }
                    // WARNING: Load size is inaccurate
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *__src;
    __src = (undefined *)((int)__src + 1);
    puVar2 = puVar2 + 1;
  }
  return __dest;
}



int memcmp(void *__s1,void *__s2,size_t __n)

{
  uint uVar1;
  size_t extraout_ECX;
  size_t sVar2;
  int unaff_EBX;
  byte *unaff_ESI;
  byte *unaff_EDI;
  bool bVar3;
  bool bVar4;
  
  uVar1 = __get_GOT();
  bVar3 = false;
  bVar4 = **(char **)(unaff_EBX + 0x2b72) == '\0';
  sVar2 = extraout_ECX;
  if (bVar4) {
    sVar2 = __n;
    unaff_ESI = (byte *)__s1;
    unaff_EDI = (byte *)__s2;
  }
  do {
    if (sVar2 == 0) break;
    bVar3 = *unaff_ESI < *unaff_EDI;
    bVar4 = *unaff_ESI == *unaff_EDI;
    sVar2 = sVar2 - 1;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while (bVar4);
  if (!bVar4) {
    uVar1 = -(uint)bVar3 | 1;
  }
  return uVar1;
}



char * __regparm2 getenv(char *__name)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char *in_stack_00000004;
  int iVar9;
  
  iVar9 = unaff_EBX;
  __get_GOT();
  if (**(char **)(unaff_EBX + 0x2b3d) == '\0') {
    __name = in_stack_00000004;
  }
  __get_GOT();
  ppcVar4 = (char **)**(undefined4 **)(iVar9 + 0x2b1a);
  uVar2 = 0xffffffff;
  pcVar5 = __name;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  do {
    bVar8 = *ppcVar4 == (char *)0x0;
    pcVar5 = __name;
    pcVar6 = *ppcVar4;
    uVar3 = ~uVar2;
    if (bVar8) {
      return (char *)0x0;
    }
    do {
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      pcVar7 = pcVar6 + 1;
      bVar8 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar7;
    } while (bVar8);
    if (bVar8) {
      return pcVar7 + 1;
    }
    ppcVar4 = ppcVar4 + 1;
  } while( true );
}



size_t __regparm2 strlen(char *__s)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  int unaff_EBX;
  int in_stack_00000004;
  
  iVar2 = __get_GOT();
  if (**(char **)(unaff_EBX + 0x2ae4) == '\0') {
    iVar2 = in_stack_00000004;
  }
  sVar1 = 0;
  do {
    sVar3 = sVar1;
    sVar1 = sVar3 + 1;
  } while (*(char *)(iVar2 + sVar3) != '\0');
  return sVar3;
}



undefined8 __regparm2
itoa(undefined4 param_1_00,undefined *param_2_00,undefined4 param_1,undefined *param_2)

{
  int unaff_EBX;
  undefined *puVar1;
  
  __get_GOT();
  puVar1 = param_2_00;
  if (**(char **)(unaff_EBX + 0x2ab7) == '\0') {
    puVar1 = param_2;
  }
  itoa_printB();
  *puVar1 = 0;
  return CONCAT44(param_2_00,param_1_00);
}



void __regparm3 itoa_printB(uint param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *unaff_EDI;
  char cVar2;
  
  if (param_1 / param_3 != 0) {
    itoa_printB();
  }
  cVar2 = (char)(param_1 % param_3);
  cVar1 = cVar2 + '0';
  if ('9' < cVar1) {
    cVar1 = cVar2 + 'W';
  }
  *unaff_EDI = cVar1;
  return;
}



int __regparm2 sprintf(char *__s,char *__format,...)

{
  char cVar1;
  undefined4 uVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined4 unaff_EBP;
  char *pcVar5;
  byte bVar6;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *pcStack_24;
  
  ppcVar3 = (char **)&stack0x0000000c;
  pcStack_24 = in_stack_00000004;
  bVar6 = 0;
  do {
    while( true ) {
      pcVar5 = in_stack_00000008 + (uint)bVar6 * -2 + 1;
      cVar1 = *in_stack_00000008;
      if (cVar1 == '\0') {
        *in_stack_00000004 = '\0';
        return (int)(in_stack_00000004 + ((uint)bVar6 * -2 - (int)pcStack_24));
      }
      in_stack_00000008 = pcVar5;
      if (cVar1 == '%') break;
sprintf_store:
      *in_stack_00000004 = cVar1;
      in_stack_00000004 = in_stack_00000004 + (uint)bVar6 * -2 + 1;
    }
    pcVar4 = *ppcVar3;
    in_stack_00000008 = pcVar5 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar5;
    uVar2 = 10;
    if ((((cVar1 == 'd') || (uVar2 = 0x10, cVar1 == 'x')) || (uVar2 = 8, cVar1 == 'o')) ||
       (uVar2 = 2, cVar1 == 'b')) {
      pcVar5 = in_stack_00000004;
      itoa_printB(in_stack_00000004,in_stack_00000008,unaff_EBP,&pcStack_24,pcVar4,ppcVar3,uVar2,
                  cVar1);
      *in_stack_00000004 = '\0';
      do {
        in_stack_00000004 = pcVar5;
        pcVar5 = in_stack_00000004 + 1;
      } while (*in_stack_00000004 != '\0');
      goto sprintf_allok;
    }
    if (cVar1 == 'c') goto sprintf_store;
    if (cVar1 == 's') {
      if (pcVar4 != (char *)0x0) {
        for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
          *in_stack_00000004 = *pcVar4;
          in_stack_00000004 = in_stack_00000004 + (uint)bVar6 * -2 + 1;
        }
      }
sprintf_allok:
      ppcVar3 = ppcVar3 + 1;
    }
  } while( true );
}



int __regparm3 printf(char *__format,...)

{
  code *pcVar1;
  char *in_EDX;
  int local_1000;
  
  sprintf(__format,in_EDX);
  pcVar1 = (code *)swi(0x80);
  (*pcVar1)();
  return local_1000;
}



int __regparm2 inet_aton(char *__cp,in_addr *__inp)

{
  int iVar1;
  char cVar2;
  int unaff_EBX;
  byte *in_stack_00000004;
  in_addr *in_stack_00000008;
  
  __get_GOT();
  if (**(char **)(unaff_EBX + 0x29ab) == '\0') {
    __cp = (char *)in_stack_00000004;
    __inp = in_stack_00000008;
  }
  iVar1 = 4;
  cVar2 = '\0';
  do {
    while( true ) {
      if ((byte)*__cp < 0x30) break;
      cVar2 = cVar2 * '\n' + (*__cp - 0x30U);
      __cp = (char *)((byte *)__cp + 1);
    }
    *(char *)&__inp->s_addr = cVar2;
    iVar1 = iVar1 + -1;
    __cp = (char *)((byte *)__cp + 1);
    __inp = (in_addr *)((int)&__inp->s_addr + 1);
  } while (iVar1 != 0);
  return 0;
}



long __regparm2 strtol(char *__nptr,char **__endptr,int __base)

{
  byte bVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  char **in_stack_00000008;
  int in_stack_0000000c;
  
  __get_GOT();
  iVar3 = extraout_ECX;
  if (**(char **)(unaff_EBX + 0x2964) == '\0') {
    iVar3 = in_stack_0000000c;
    __endptr = in_stack_00000008;
    __nptr = (char *)__base;
  }
  if (iVar3 == 0) {
    iVar3 = 10;
  }
  iVar2 = 0;
  for (; *__nptr == 0x20; __nptr = (char *)((int)__nptr + 1)) {
  }
  if (*(short *)__nptr == 0x7830) {
    iVar3 = 0x10;
    __nptr = (char *)((int)__nptr + 2);
  }
  do {
    bVar1 = *__nptr;
    uVar4 = (uint)(byte)(bVar1 - 0x30);
    if (bVar1 < 0x30) {
      return iVar2;
    }
    if ((9 < (byte)(bVar1 - 0x30)) &&
       (uVar4 = (uint)(byte)(bVar1 - 0x37), 0x23 < (byte)(bVar1 - 0x37))) {
      uVar4 = (uint)(byte)(bVar1 + 0xa9);
    }
    iVar2 = iVar2 * iVar3 + uVar4;
    __nptr = (char *)((int)__nptr + 1);
  } while ((char **)__nptr != __endptr);
  return iVar2;
}


