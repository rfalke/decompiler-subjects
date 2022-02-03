typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ulong size_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef enum Elf64_DynTag {
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
} Elf64_DynTag;

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
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
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



void omp_get_thread_num(void)

{
  omp_get_thread_num();
  return;
}



void omp_get_num_threads(void)

{
  omp_get_num_threads();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



void GOMP_parallel(void)

{
  GOMP_parallel();
  return;
}



void main(int __status)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  undefined1 *__s;
  char *pcVar7;
  char **ppcVar8;
  char **ppcVar9;
  int iVar10;
  int local_34;
  int *local_30 [2];
  
  iVar10 = 1;
  do {
    nl._0_8_ = format;
    lVar6 = 0;
    __s = format;
    do {
      iVar4 = iVar10 + (int)lVar6;
      if ((uint)(iVar4 * -0x11111111) < 0x11111112) {
        *(undefined8 *)__s = 0x7a7a75427a7a6946;
        *(undefined2 *)((long)__s + 8) = 10;
        __s = (undefined1 *)((long)__s + 9);
      }
      else if ((uint)(iVar4 * -0x33333333) < 0x33333334) {
        *(undefined4 *)__s = 0x7a7a7542;
        *(undefined2 *)((long)__s + 4) = 10;
        __s = (undefined1 *)((long)__s + 5);
      }
      else if ((uint)(iVar4 * -0x55555555) < 0x55555556) {
        *(undefined4 *)__s = 0x7a7a6946;
        *(undefined2 *)((long)__s + 4) = 10;
        __s = (undefined1 *)((long)__s + 5);
      }
      else {
        iVar4 = sprintf(__s,"%d\n");
        __s = (undefined1 *)((long)__s + (long)iVar4);
      }
      *(undefined1 **)(nl + lVar6 * 8) = __s;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x1771);
    iVar10 = iVar10 + 0x1771;
    write(1,format,(size_t)(nl._48000_8_ + -0x40fc20));
  } while (iVar10 != 0x2ee3);
  local_34 = 0;
  do {
    local_30[0] = &local_34;
    GOMP_parallel(main__omp_fn_0,local_30,0);
    if (local_34 != 0) {
      pcVar2 = nl._48000_8_;
      pcVar5 = nl._48000_8_ + local_34;
      ppcVar9 = (char **)(nl + 48000);
      if (nl._48000_8_ < nl._48000_8_ + local_34) {
        do {
          while (cVar1 = *pcVar2, cVar1 != '\n') {
            pcVar7 = pcVar5;
            ppcVar8 = ppcVar9;
            if (cVar1 == '\v') {
              *pcVar2 = '\n';
              *pcVar5 = '1';
              pcVar7 = pcVar5 + -1;
              ppcVar8 = ppcVar9 + -1;
              *ppcVar9 = pcVar5;
              cVar1 = *pcVar2;
            }
            pcVar2 = pcVar2 + -1;
            pcVar5 = pcVar7 + -1;
            *pcVar7 = cVar1;
            ppcVar9 = ppcVar8;
            if (pcVar5 <= pcVar2) goto LAB_00401253;
          }
          pcVar3 = pcVar2 + -1;
          *ppcVar9 = pcVar5 + 1;
          pcVar7 = pcVar5 + -1;
          *pcVar5 = *pcVar2;
          pcVar2 = pcVar3;
          pcVar5 = pcVar7;
          ppcVar9 = ppcVar9 + -1;
        } while (pcVar3 < pcVar7);
      }
LAB_00401253:
      local_34 = 0;
    }
    write(1,format,(size_t)(nl._48000_8_ + -0x40fc20));
  } while( true );
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004012ad)
// WARNING: Removing unreachable block (ram,0x004012b7)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004012ef)
// WARNING: Removing unreachable block (ram,0x004012f9)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void main__omp_fn_0(int **param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  
  iVar3 = omp_get_num_threads();
  iVar4 = omp_get_thread_num();
  iVar5 = (int)(6000 / (long)iVar3);
  iVar3 = (int)(6000 % (long)iVar3);
  if (iVar4 < iVar3) {
    iVar5 = iVar5 + 1;
    iVar3 = 0;
  }
  iVar3 = iVar4 * iVar5 + iVar3;
  if (iVar3 < iVar5 + iVar3) {
    lVar7 = (long)iVar3;
    do {
      lVar1 = *(long *)(nl + lVar7 * 8 + 8);
      if (*(char *)(lVar1 + -2) != 'z') {
        cVar6 = *(char *)(lVar1 + -5) + '\x06';
        *(char *)(lVar1 + -5) = cVar6;
        pcVar2 = (char *)(lVar1 - 5);
        while ('9' < cVar6) {
          *pcVar2 = cVar6 + -10;
          cVar6 = pcVar2[-1] + '\x01';
          pcVar2[-1] = cVar6;
          pcVar2 = pcVar2 + -1;
        }
        if (pcVar2 <= *(char **)(nl + lVar7 * 8) && *(char **)(nl + lVar7 * 8) != pcVar2) {
          LOCK();
          **param_1 = **param_1 + 1;
        }
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar5 + iVar3);
  }
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


