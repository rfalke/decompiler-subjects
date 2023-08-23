typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong sizetype;

typedef ulong size_t;

typedef long __off_t;

typedef sqword __off64_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

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
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_001006c0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention

int main(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int extraout_w8;
  int iVar8;
  int extraout_w9;
  ulong uVar9;
  ulong extraout_x10;
  int number;
  
  printf("Input number: ");
  __isoc99_scanf(&DAT_00100df0,&number);
  uVar9 = (ulong)(uint)number;
  if (number < 2) {
    iVar1 = 0;
  }
  else {
    iVar8 = number + -1;
    uVar5 = number - 3;
    iVar1 = 0;
    do {
      uVar6 = (ulong)uVar5;
      if (iVar8 == 1) {
        number = number + -2;
        iVar3 = 0;
        uVar2 = 1;
        iVar8 = 1;
      }
      else {
        uVar7 = (ulong)(number - 2);
        uVar4 = (ulong)((number + -4) - (uVar5 & 0xfffffffe));
        iVar3 = 0;
        uVar9 = uVar7;
        do {
          iVar1 = (int)uVar7;
          uVar7 = (ulong)(iVar1 - 2);
          iVar1 = fib(iVar1);
          uVar5 = (uint)uVar6;
          number = (int)uVar9;
          iVar3 = iVar3 + iVar1;
        } while ((int)uVar7 != (int)uVar4);
        uVar2 = uVar5 & 1;
        uVar9 = extraout_x10;
        iVar1 = extraout_w9;
        iVar8 = extraout_w8;
      }
      iVar1 = iVar1 + uVar2 + iVar3;
      iVar8 = iVar8 + -2;
      uVar5 = uVar5 - 2;
    } while (1 < number);
    number = (uint)uVar9 & 1;
  }
  printf("fibonacci(%d) = %d\n",uVar9 & 0xffffffff,(ulong)(uint)(iVar1 + number));
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100860)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100888)
// WARNING: Removing unreachable block (ram,0x00100894)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001008c4)
// WARNING: Removing unreachable block (ram,0x001008d0)

void register_tm_clones(void)

{
  return;
}



void FUN_001008dc(void)

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



// WARNING: Removing unreachable block (ram,0x00100940)
// WARNING: Removing unreachable block (ram,0x0010094c)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

int fib(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (x < 2) {
    local_8 = 0;
  }
  else {
    local_38 = x - 3;
    local_3c = x + -1;
    iVar5 = local_38 - (x - 2U & 0xfffffffe);
    local_8 = 0;
    do {
      if (local_3c == 1) {
        local_10 = 0;
        uVar14 = 1;
      }
      else {
        local_24 = local_3c + -1;
        local_20 = local_3c - 3;
        local_10 = 0;
        local_54 = local_3c;
        do {
          if (local_24 == 1) {
            local_18 = 0;
            uVar14 = 1;
          }
          else {
            local_44 = local_54 + -2;
            local_40 = local_54 - 4;
            iVar6 = local_40 - (local_20 & 0xfffffffe);
            local_18 = 0;
            do {
              if (local_44 == 1) {
                local_c = 0;
                uVar14 = 1;
              }
              else {
                local_2c = local_44 + -1;
                local_28 = local_44 - 3;
                local_c = 0;
                local_50 = local_44;
                do {
                  if (local_2c == 1) {
                    local_1c = 0;
                    uVar14 = 1;
                  }
                  else {
                    local_4c = local_50 + -2;
                    local_48 = local_50 - 4;
                    iVar7 = local_48 - (local_28 & 0xfffffffe);
                    local_1c = 0;
                    do {
                      if (local_4c == 1) {
                        local_14 = 0;
                        uVar14 = 1;
                      }
                      else {
                        local_34 = local_4c + -1;
                        local_30 = local_4c - 3;
                        local_14 = 0;
                        local_58 = local_4c;
                        do {
                          if (local_34 == 1) {
                            iVar15 = 0;
                            uVar14 = 1;
                          }
                          else {
                            iVar1 = local_58 + -2;
                            uVar14 = local_58 - 4;
                            iVar8 = uVar14 - (local_30 & 0xfffffffe);
                            iVar15 = 0;
                            do {
                              if (iVar1 == 1) {
                                iVar16 = 0;
                                uVar12 = 1;
                              }
                              else {
                                iVar13 = iVar1 + -1;
                                uVar12 = iVar1 - 3;
                                iVar16 = 0;
                                iVar2 = iVar1;
                                do {
                                  iVar3 = iVar2 + -2;
                                  if (iVar13 == 1) {
                                    iVar11 = 0;
                                    uVar10 = 1;
                                  }
                                  else {
                                    iVar11 = 0;
                                    iVar9 = iVar3;
                                    do {
                                      iVar4 = iVar9 + -2;
                                      iVar9 = fib(iVar9);
                                      iVar11 = iVar11 + iVar9;
                                      iVar9 = iVar4;
                                    } while ((iVar2 + -4) - (uVar12 & 0xfffffffe) != iVar4);
                                    uVar10 = uVar12 & 1;
                                  }
                                  iVar16 = iVar16 + uVar10 + iVar11;
                                  iVar13 = iVar13 + -2;
                                  uVar12 = uVar12 - 2;
                                  iVar2 = iVar3;
                                } while (1 < iVar3);
                                uVar12 = uVar14 & 1;
                              }
                              iVar1 = iVar1 + -2;
                              uVar14 = uVar14 - 2;
                              iVar15 = iVar15 + uVar12 + iVar16;
                            } while (iVar8 != iVar1);
                            uVar14 = local_30 & 1;
                          }
                          local_58 = local_58 + -2;
                          local_14 = local_14 + uVar14 + iVar15;
                          local_34 = local_34 + -2;
                          local_30 = local_30 - 2;
                        } while (1 < local_58);
                        uVar14 = local_48 & 1;
                      }
                      local_4c = local_4c + -2;
                      local_1c = local_1c + local_14 + uVar14;
                      local_48 = local_48 - 2;
                    } while (iVar7 != local_4c);
                    uVar14 = local_28 & 1;
                  }
                  local_50 = local_50 + -2;
                  local_c = local_c + local_1c + uVar14;
                  local_2c = local_2c + -2;
                  local_28 = local_28 - 2;
                } while (1 < local_50);
                uVar14 = local_40 & 1;
              }
              local_18 = local_18 + local_c + uVar14;
              local_44 = local_44 + -2;
              local_40 = local_40 - 2;
            } while (iVar6 != local_44);
            uVar14 = local_20 & 1;
          }
          local_54 = local_54 + -2;
          local_10 = local_10 + uVar14 + local_18;
          local_24 = local_24 + -2;
          local_20 = local_20 - 2;
        } while (1 < local_54);
        uVar14 = local_38 & 1;
      }
      local_3c = local_3c + -2;
      local_8 = local_8 + local_10 + uVar14;
      local_38 = local_38 - 2;
    } while (iVar5 != local_3c);
    x = x - 2U & 1;
  }
  return local_8 + x;
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


