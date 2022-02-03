typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef ulong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
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
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
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
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
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
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100850(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



int main(int argc,int argv)

{
  uint uVar1;
  uint n;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (1 < argc - 2U) {
    printf("usage: %s n [base]\n",(ulong)*(uint *)(long)argv);
    puts("Compute fib(n) and fact(n) and output the result in base \'base\'");
    return 1;
  }
  n = atoi((char *)(ulong)*(uint *)(long)(argv + 4));
  base = 10;
  if ((argc == 3) && (base = atoi((char *)(ulong)*(uint *)(long)(argv + 8)), 0x22 < base - 2U)) {
    fwrite("Invalid base\n",1,0xd,stderr);
    return 1;
  }
  printf("fib(%d) = ",(ulong)n);
  if ((int)n < 3) {
    print_num(1,base);
    putchar(10);
    printf("fact(%d) = ",(ulong)n);
  }
  else {
    uVar9 = 0;
    uVar5 = n;
    do {
      iVar3 = (int)uVar9;
      if (uVar5 == 3) {
        iVar4 = 0;
        uVar5 = 1;
      }
      else {
        uVar7 = (ulong)(uVar5 - 2);
        uVar6 = (ulong)(uVar5 & 1);
        iVar4 = 0;
        uVar8 = uVar7;
        do {
          iVar3 = (int)uVar7;
          uVar7 = (ulong)(iVar3 - 2);
          iVar2 = fib(iVar3);
          iVar3 = (int)uVar9;
          uVar5 = (uint)uVar8;
          iVar4 = iVar4 + iVar2;
        } while ((int)uVar7 != (int)uVar6);
      }
      uVar1 = iVar3 + iVar4 + 1;
      uVar9 = (ulong)uVar1;
    } while (2 < (int)uVar5);
    print_num(uVar1 + 1,base);
    putchar(10);
    printf("fact(%d) = ",(ulong)n);
    if (0xc < (int)n) {
      printf("Overflow");
      goto LAB_00100a48;
    }
  }
  iVar3 = fact(n);
  print_num(iVar3,base);
LAB_00100a48:
  putchar(10);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100b40)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b68)
// WARNING: Removing unreachable block (ram,0x00100b74)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100ba4)
// WARNING: Removing unreachable block (ram,0x00100bb0)

void register_tm_clones(void)

{
  return;
}



void FUN_00100bbc(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



int fact(int n)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined auVar8 [16];
  undefined auVar12 [16];
  
  if (n < 2) {
    iVar4 = 1;
  }
  else {
    uVar1 = (n - 5U >> 2) + 1;
    iVar2 = uVar1 * 4;
    if (n - 2U < 9) {
      iVar4 = 1;
      iVar9 = 2;
    }
    else {
      iVar4 = 1;
      iVar5 = 1;
      iVar6 = 1;
      iVar7 = 1;
      uVar3 = 0;
      auVar8 = CONCAT88(0x500000004,0x300000002);
      do {
        iVar4 = iVar4 * SUB164(auVar8,0);
        iVar9 = SUB164(auVar8 >> 0x20,0);
        iVar5 = iVar5 * iVar9;
        iVar10 = SUB164(auVar8 >> 0x40,0);
        iVar6 = iVar6 * iVar10;
        iVar11 = SUB164(auVar8 >> 0x60,0);
        iVar7 = iVar7 * iVar11;
        uVar3 = uVar3 + 1;
        auVar8 = CONCAT412(iVar11 + 4,CONCAT48(iVar10 + 4,CONCAT44(iVar9 + 4,SUB164(auVar8,0) + 4)))
        ;
      } while (uVar3 < uVar1);
      iVar9 = iVar2 + 2;
      auVar12 = NEON_ext(CONCAT412(iVar7,CONCAT48(iVar6,CONCAT44(iVar5,iVar4))),
                         auVar8 & (undefined  [16])0x0,8,1);
      iVar4 = iVar4 * SUB164(auVar12,0);
      auVar8 = NEON_ext(CONCAT412(iVar7 * SUB164(auVar12 >> 0x60,0),
                                  CONCAT48(iVar6 * SUB164(auVar12 >> 0x40,0),
                                           CONCAT44(iVar5 * SUB164(auVar12 >> 0x20,0),iVar4))),
                        auVar8 & (undefined  [16])0x0,4,1);
      iVar4 = iVar4 * SUB164(auVar8,0);
      if (n + -1 == iVar2) {
        return iVar4;
      }
    }
    iVar4 = iVar4 * iVar9;
    if (iVar9 + 1 <= n) {
      iVar4 = iVar4 * (iVar9 + 1);
      if (iVar9 + 2 <= n) {
        iVar4 = iVar4 * (iVar9 + 2);
        if (iVar9 + 3 <= n) {
          iVar4 = iVar4 * (iVar9 + 3);
          if (iVar9 + 4 <= n) {
            iVar4 = iVar4 * (iVar9 + 4);
            if (iVar9 + 5 <= n) {
              iVar4 = iVar4 * (iVar9 + 5);
              if (iVar9 + 6 <= n) {
                iVar4 = iVar4 * (iVar9 + 6);
                if (iVar9 + 7 <= n) {
                  iVar4 = iVar4 * (iVar9 + 7);
                  if (iVar9 + 8 <= n) {
                    return iVar4 * (iVar9 + 8);
                  }
                  return iVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar4;
}



int fib(int n)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint n_00;
  int iVar11;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (2 < n) {
    uVar10 = n - 1;
    local_8 = 0;
    do {
      if (uVar10 == 2) {
        local_c = 1;
      }
      else {
        local_c = 0;
        local_20 = uVar10;
        do {
          if (local_20 == 3) {
            local_4 = 1;
            local_20 = 1;
          }
          else {
            local_4 = 0;
            local_1c = local_20 - 2;
            do {
              if (local_1c == 2) {
                local_10 = 1;
              }
              else {
                local_10 = 0;
                uVar5 = local_1c;
                do {
                  if (uVar5 == 3) {
                    local_14 = 1;
                    local_28 = 1;
                  }
                  else {
                    local_28 = uVar5 - 2;
                    local_14 = 0;
                    uVar3 = local_28;
                    do {
                      if (uVar3 == 2) {
                        local_18 = 1;
                      }
                      else {
                        local_18 = 0;
                        local_24 = uVar3;
                        do {
                          if (local_24 == 3) {
                            iVar9 = 1;
                            local_24 = 1;
                          }
                          else {
                            iVar9 = 0;
                            uVar2 = local_24 - 2;
                            do {
                              if (uVar2 == 2) {
                                iVar8 = 1;
                              }
                              else {
                                iVar8 = 0;
                                uVar4 = uVar2;
                                do {
                                  if (uVar4 == 3) {
                                    iVar11 = 1;
                                    uVar7 = 1;
                                  }
                                  else {
                                    uVar7 = uVar4 - 2;
                                    iVar11 = 0;
                                    n_00 = uVar7;
                                    do {
                                      uVar1 = n_00 - 2;
                                      iVar6 = fib(n_00);
                                      iVar11 = iVar11 + iVar6;
                                      n_00 = uVar1;
                                    } while (uVar1 != (uVar4 & 1));
                                    iVar11 = iVar11 + 1;
                                  }
                                  iVar8 = iVar8 + iVar11;
                                  uVar4 = uVar7;
                                } while (2 < (int)uVar7);
                                iVar8 = iVar8 + 1;
                              }
                              uVar2 = uVar2 - 2;
                              iVar9 = iVar9 + iVar8;
                            } while ((local_24 & 1) != uVar2);
                            iVar9 = iVar9 + 1;
                            local_24 = local_24 - 2;
                          }
                          local_18 = local_18 + iVar9;
                        } while (2 < (int)local_24);
                        local_18 = local_18 + 1;
                      }
                      uVar3 = uVar3 - 2;
                      local_14 = local_14 + local_18;
                    } while ((uVar5 & 1) != uVar3);
                    local_14 = local_14 + 1;
                  }
                  local_10 = local_10 + local_14;
                  uVar5 = local_28;
                } while (2 < (int)local_28);
                local_10 = local_10 + 1;
              }
              local_4 = local_4 + local_10;
              local_1c = local_1c - 2;
            } while ((local_20 & 1) != local_1c);
            local_4 = local_4 + 1;
            local_20 = local_20 - 2;
          }
          local_c = local_c + local_4;
        } while (2 < (int)local_20);
        local_c = local_c + 1;
      }
      uVar10 = uVar10 - 2;
      local_8 = local_8 + local_c;
    } while ((n - 3U & 1) != uVar10);
    return local_8 + 1;
  }
  return 1;
}



int print_num(int n,int b)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pvVar7 = malloc(0x100);
  uVar5 = (uint)pvVar7;
  lVar8 = (long)(int)(uVar5 + 1);
  do {
    iVar3 = 0;
    if (b != 0) {
      iVar3 = n / b;
    }
    uVar6 = (uint)lVar8;
    iVar2 = n - iVar3 * b;
    cVar4 = (char)iVar2;
    cVar1 = cVar4 + 'W';
    if (iVar2 < 10) {
      cVar1 = cVar4 + '0';
    }
    *(char *)(lVar8 + -1) = cVar1;
    lVar8 = lVar8 + 1;
    n = iVar3;
  } while (iVar3 != 0);
  if (uVar5 != uVar6) {
    pbVar10 = (byte *)((long)(int)uVar6 + -1);
    do {
      pbVar9 = pbVar10 + -1;
      putchar((uint)*pbVar10);
      pbVar10 = pbVar9;
    } while ((byte *)(((long)(int)uVar6 + -2) - (ulong)(~uVar5 + uVar6)) != pbVar9);
  }
  free((void *)(long)(int)uVar5);
  return 0;
}



int help(int name)

{
  int iVar1;
  
  printf("usage: %s n [base]\n",(ulong)(uint)name);
  iVar1 = puts("Compute fib(n) and fact(n) and output the result in base \'base\'");
  return iVar1;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


