typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void processEntry g(void)

{
  return;
}



void h(void)

{
  return;
}



void f(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 auStack_28 [2];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  puVar6 = &stack0xfffffffffffffff8;
  local_c = param_1;
  local_10 = param_2;
  local_14 = param_3;
  local_18 = param_4;
  while (puVar5 = &local_18, local_c != 0) {
    while (iVar1 = h(), iVar1 != 0) {
      local_10 = local_10 + 1;
      if (local_10 == local_14) {
        return;
      }
    }
    local_10 = local_10 + 1;
  }
  do {
    puVar3 = (undefined *)puVar5;
    if (*(int *)(puVar6 + -8) + *(int *)(puVar6 + -4) == *(int *)(puVar6 + -0xc)) {
      return;
    }
    while( true ) {
      *(undefined8 *)(puVar3 + -8) = 0x4001cc;
      iVar1 = h();
      puVar2 = puVar3;
      if (iVar1 == 0) break;
      do {
        if (*(int *)(puVar6 + -4) != 0) {
          *(undefined4 *)(puVar6 + -0x10) = *(undefined4 *)(puVar6 + -0xc);
        }
        puVar3 = puVar2 + -8;
        *(undefined8 *)(puVar2 + -8) = 0x4001a9;
        iVar1 = g();
        if (iVar1 == 0) break;
        *(undefined8 *)(puVar2 + -0x10) = 0x4001b7;
        iVar1 = h();
        puVar2 = puVar2 + -8;
      } while (iVar1 != 0);
      *(int *)(puVar6 + -4) = *(int *)(puVar6 + -4) + -1;
    }
    while( true ) {
      puVar4 = puVar3 + -8;
      *(undefined8 *)(puVar3 + -8) = 0x4001f6;
      iVar1 = g();
      puVar5 = (undefined4 *)(puVar3 + -8);
      if (iVar1 == 0) break;
      *(undefined8 *)(puVar3 + -0x10) = 0x400204;
      iVar1 = h();
      puVar5 = (undefined4 *)(puVar3 + -8);
      if ((iVar1 == 0) ||
         (*(int *)(puVar6 + -4) = *(int *)(puVar6 + -4) + 1, puVar5 = (undefined4 *)(puVar3 + -8),
         *(int *)(puVar6 + -0x10) == 0)) break;
      puVar3 = puVar3 + -8;
      if (*(int *)(puVar6 + -4) == 0) {
        *(undefined4 *)(puVar6 + -0x10) = 0x14;
        puVar3 = puVar4;
      }
    }
  } while( true );
}


