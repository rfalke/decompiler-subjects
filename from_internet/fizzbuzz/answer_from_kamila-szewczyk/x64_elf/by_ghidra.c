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

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
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
} Elf64_DynTag;

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

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



void main(int __status)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  ssize_t sVar6;
  char cVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  char *local_98;
  ulong local_40;
  
  puVar11 = buf;
  uVar12 = 1;
  puVar10 = out + 0x1e;
  lVar9 = 0;
  local_98 = buf + 0x1b;
  local_b8 = buf;
  local_b0 = buf;
  local_a8 = buf;
  local_100 = buf;
  local_f8 = buf;
  local_f0 = buf;
  local_e8 = buf;
  local_e0 = buf;
  local_d8 = buf;
  local_d0 = buf;
  local_c8 = buf;
  local_c0 = buf;
  local_40 = 1;
  do {
    lVar1 = local_40 + 2;
    lVar2 = local_40 + 1;
    iVar5 = sprintf(buf,
                    "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n"
                    ,local_40,local_40,local_40,local_40,local_40,local_40,lVar2,lVar2,lVar2,lVar2,
                    lVar2,lVar1,lVar1,lVar1,lVar1,lVar1);
    local_40 = local_40 * 10;
    if (uVar12 < local_40) {
      puVar8 = puVar10;
      do {
        while( true ) {
          puVar10 = puVar8 + iVar5;
          memcpy(puVar8,buf,(long)iVar5);
          if (puVar10 < out + 0x10000) break;
          puVar8 = out;
          do {
            while( true ) {
              sVar6 = write(1,puVar8,0x414060 - (long)puVar8);
              if ((int)sVar6 < 1) break;
              puVar8 = puVar8 + (int)sVar6;
              if (out + 0xffff < puVar8) goto LAB_004013cb;
            }
          } while (puVar8 < out + 0x10000);
LAB_004013cb:
          puVar8 = puVar10 + -0x10000;
          memcpy(out,out + 0x10000,(size_t)(puVar10 + -0x414060));
          cVar7 = buf[lVar9 + 5];
          puVar10 = puVar8;
          if (cVar7 < '7') goto LAB_00401200;
LAB_004013fb:
          buf[lVar9 + 5] = cVar7 + -7;
          cVar7 = buf[lVar9 + 4];
          pcVar4 = buf + lVar9 + 4;
          while (cVar7 == '9') {
            cVar7 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar7 + '\x01';
          cVar7 = local_b8[0xd];
          if (cVar7 < '7') goto LAB_0040121b;
LAB_00401446:
          local_b8[0xd] = cVar7 + -7;
          cVar7 = local_b8[0xc];
          pcVar4 = local_b8 + 0xc;
          while (cVar7 == '9') {
            cVar7 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar7 + '\x01';
          cVar7 = local_b0[0x10];
          if (cVar7 < '7') goto LAB_00401233;
LAB_00401486:
          local_b0[0x10] = cVar7 + -7;
          cVar7 = local_b0[0xf];
          pcVar4 = local_b0 + 0xf;
          while (cVar7 == '9') {
            cVar7 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar7 + '\x01';
          cVar7 = buf[lVar9 * 4 + 0x1c];
          if (cVar7 < '7') goto LAB_0040124a;
LAB_004014c5:
          buf[lVar9 * 4 + 0x1c] = cVar7 + -7;
          cVar7 = *local_98;
          pcVar4 = local_98;
          while (cVar7 == '9') {
            cVar7 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar7 + '\x01';
          cVar7 = puVar11[0x1f];
          if (cVar7 < '7') goto LAB_00401262;
LAB_00401502:
          puVar11[0x1f] = cVar7 + -7;
          cVar7 = puVar11[0x1e];
          pcVar4 = puVar11 + 0x1e;
          while (cVar7 == '9') {
            cVar7 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar7 + '\x01';
          cVar7 = local_a8[0x27];
          if (cVar7 < '7') goto LAB_0040127b;
LAB_00401546:
          local_a8[0x27] = cVar7 + -7;
          cVar7 = local_a8[0x26];
          pcVar4 = local_a8 + 0x26;
          while (cVar7 == '9') {
            cVar7 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar7 + '\x01';
          cVar7 = local_100[0x34];
          if (cVar7 < '7') goto LAB_00401292;
LAB_00401585:
          cVar3 = local_100[0x33];
          local_100[0x34] = cVar7 + -7;
          pcVar4 = local_100 + 0x33;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = buf[lVar9 * 8 + 0x37];
          if (cVar7 < '7') goto LAB_004012a8;
LAB_004015c4:
          cVar3 = buf[lVar9 * 8 + 0x36];
          buf[lVar9 * 8 + 0x37] = cVar7 + -7;
          pcVar4 = buf + lVar9 * 8 + 0x36;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_f8[0x44];
          if (cVar7 < '7') goto LAB_004012c3;
LAB_00401615:
          cVar3 = local_f8[0x43];
          local_f8[0x44] = cVar7 + -7;
          pcVar4 = local_f8 + 0x43;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_f0[0x4c];
          if (cVar7 < '7') goto LAB_004012da;
LAB_00401655:
          cVar3 = local_f0[0x4b];
          local_f0[0x4c] = cVar7 + -7;
          pcVar4 = local_f0 + 0x4b;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_e8[0x4f];
          if (cVar7 < '7') goto LAB_004012f1;
LAB_00401695:
          cVar3 = local_e8[0x4e];
          local_e8[0x4f] = cVar7 + -7;
          pcVar4 = local_e8 + 0x4e;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_e0[0x5b];
          if (cVar7 < '7') goto LAB_00401308;
LAB_004016d5:
          cVar3 = local_e0[0x5a];
          local_e0[0x5b] = cVar7 + -7;
          pcVar4 = local_e0 + 0x5a;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_d8[0x5e];
          if (cVar7 < '7') goto LAB_0040131f;
LAB_00401715:
          cVar3 = local_d8[0x5d];
          local_d8[0x5e] = cVar7 + -7;
          pcVar4 = local_d8 + 0x5d;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_d0[0x66];
          if (cVar7 < '7') goto LAB_00401336;
LAB_00401755:
          cVar3 = local_d0[0x65];
          local_d0[0x66] = cVar7 + -7;
          pcVar4 = local_d0 + 0x65;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_c8[0x73];
          if (cVar7 < '7') goto LAB_0040134d;
LAB_00401795:
          cVar3 = local_c8[0x72];
          local_c8[0x73] = cVar7 + -7;
          pcVar4 = local_c8 + 0x72;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          *pcVar4 = cVar3 + '\x01';
          cVar7 = local_c0[0x76];
          if (cVar7 < '7') goto LAB_00401364;
LAB_004017d5:
          cVar3 = local_c0[0x75];
          local_c0[0x76] = cVar7 + -7;
          pcVar4 = local_c0 + 0x75;
          while (cVar3 == '9') {
            cVar3 = pcVar4[-1];
            *pcVar4 = '0';
            pcVar4 = pcVar4 + -1;
          }
          uVar12 = uVar12 + 3;
          *pcVar4 = cVar3 + '\x01';
          puVar8 = puVar10;
          if (local_40 <= uVar12) goto LAB_00401813;
        }
        cVar7 = buf[lVar9 + 5];
        if ('6' < cVar7) goto LAB_004013fb;
LAB_00401200:
        buf[lVar9 + 5] = cVar7 + '\x03';
        cVar7 = local_b8[0xd];
        if ('6' < cVar7) goto LAB_00401446;
LAB_0040121b:
        local_b8[0xd] = cVar7 + '\x03';
        cVar7 = local_b0[0x10];
        if ('6' < cVar7) goto LAB_00401486;
LAB_00401233:
        local_b0[0x10] = cVar7 + '\x03';
        cVar7 = buf[lVar9 * 4 + 0x1c];
        if ('6' < cVar7) goto LAB_004014c5;
LAB_0040124a:
        buf[lVar9 * 4 + 0x1c] = cVar7 + '\x03';
        cVar7 = puVar11[0x1f];
        if ('6' < cVar7) goto LAB_00401502;
LAB_00401262:
        puVar11[0x1f] = cVar7 + '\x03';
        cVar7 = local_a8[0x27];
        if ('6' < cVar7) goto LAB_00401546;
LAB_0040127b:
        local_a8[0x27] = cVar7 + '\x03';
        cVar7 = local_100[0x34];
        if ('6' < cVar7) goto LAB_00401585;
LAB_00401292:
        local_100[0x34] = cVar7 + '\x03';
        cVar7 = buf[lVar9 * 8 + 0x37];
        if ('6' < cVar7) goto LAB_004015c4;
LAB_004012a8:
        buf[lVar9 * 8 + 0x37] = cVar7 + '\x03';
        cVar7 = local_f8[0x44];
        if ('6' < cVar7) goto LAB_00401615;
LAB_004012c3:
        local_f8[0x44] = cVar7 + '\x03';
        cVar7 = local_f0[0x4c];
        if ('6' < cVar7) goto LAB_00401655;
LAB_004012da:
        local_f0[0x4c] = cVar7 + '\x03';
        cVar7 = local_e8[0x4f];
        if ('6' < cVar7) goto LAB_00401695;
LAB_004012f1:
        local_e8[0x4f] = cVar7 + '\x03';
        cVar7 = local_e0[0x5b];
        if ('6' < cVar7) goto LAB_004016d5;
LAB_00401308:
        local_e0[0x5b] = cVar7 + '\x03';
        cVar7 = local_d8[0x5e];
        if ('6' < cVar7) goto LAB_00401715;
LAB_0040131f:
        local_d8[0x5e] = cVar7 + '\x03';
        cVar7 = local_d0[0x66];
        if ('6' < cVar7) goto LAB_00401755;
LAB_00401336:
        local_d0[0x66] = cVar7 + '\x03';
        cVar7 = local_c8[0x73];
        if ('6' < cVar7) goto LAB_00401795;
LAB_0040134d:
        local_c8[0x73] = cVar7 + '\x03';
        cVar7 = local_c0[0x76];
        if ('6' < cVar7) goto LAB_004017d5;
LAB_00401364:
        uVar12 = uVar12 + 3;
        local_c0[0x76] = cVar7 + '\x03';
        puVar8 = puVar10;
      } while (uVar12 < local_40);
    }
LAB_00401813:
    lVar9 = lVar9 + 1;
    local_c0 = local_c0 + 0x10;
    puVar11 = puVar11 + 5;
    local_c8 = local_c8 + 0xf;
    local_d0 = local_d0 + 0xe;
    local_d8 = local_d8 + 0xd;
    local_e0 = local_e0 + 0xc;
    local_e8 = local_e8 + 0xb;
    local_f0 = local_f0 + 10;
    local_f8 = local_f8 + 9;
    local_100 = local_100 + 7;
    local_a8 = local_a8 + 6;
    local_98 = local_98 + 4;
    local_b0 = local_b0 + 3;
    local_b8 = local_b8 + 2;
    if (lVar9 == 0x13) {
      return;
    }
  } while( true );
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004018fd)
// WARNING: Removing unreachable block (ram,0x00401907)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040193f)
// WARNING: Removing unreachable block (ram,0x00401949)

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


