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



// WARNING: Removing unreachable block (ram,0x00400172)
// WARNING: Removing unreachable block (ram,0x00400254)

void f(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 auStack_28 [2];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  puVar10 = &stack0xfffffffffffffff8;
  puVar6 = &local_18;
  local_10 = param_2;
  while (param_1 != 0) {
    local_10 = local_10 + 1;
  }
  local_c = 0;
  local_18 = param_4;
  local_14 = param_3;
  while (iVar4 = h(), iVar4 != 0) {
    local_c = local_c + 1;
  }
  while( true ) {
    *(undefined8 *)((long)puVar6 + -8) = 0x4001ac;
    iVar4 = g();
    puVar9 = (undefined *)((long)puVar6 + -8);
    if (iVar4 == 0) break;
    *(undefined8 *)((long)puVar6 + -0x10) = 0x4001ba;
    iVar4 = h();
    puVar9 = (undefined *)((long)puVar6 + -8);
    if (iVar4 == 0) break;
    *(int *)(puVar10 + -4) = *(int *)(puVar10 + -4) + 1;
    puVar6 = (undefined4 *)((long)puVar6 + -8);
  }
  do {
    puVar7 = puVar9;
    uVar5 = *(undefined4 *)(puVar10 + -0xc);
    uVar1 = *(undefined4 *)(puVar10 + -8);
    uVar2 = *(undefined4 *)(puVar10 + -4);
    uVar3 = *(undefined4 *)(puVar10 + -0x10);
    *(undefined8 *)(puVar7 + -8) = 0x4001d1;
    f(uVar3,uVar2,uVar1,uVar5);
    *(undefined8 *)(puVar7 + -8) = 0x4001db;
    iVar4 = g();
    puVar9 = puVar7 + -8;
    puVar8 = puVar7;
  } while (iVar4 != 0);
  while( true ) {
    if (*(int *)(puVar10 + -4) != 0) {
      uVar5 = *(undefined4 *)(puVar10 + -4);
      uVar1 = *(undefined4 *)(puVar10 + -8);
      uVar2 = *(undefined4 *)(puVar10 + -0xc);
      uVar3 = *(undefined4 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar8 + -0x10) = 0x4001f8;
      f(uVar3,uVar2,uVar1,uVar5);
      return;
    }
    puVar9 = puVar8 + -0x10;
    *(undefined8 *)(puVar8 + -0x10) = 0x400204;
    uVar5 = g();
    *(undefined4 *)(puVar10 + -0x10) = uVar5;
    if (*(int *)(puVar10 + -0x10) != 0) break;
    puVar8 = puVar8 + -8;
    if (*(int *)(puVar10 + -4) == 0) {
LAB_0040021f:
      while( true ) {
        *(undefined8 *)(puVar9 + -8) = 0x400229;
        iVar4 = g();
        *(int *)(puVar10 + -4) = iVar4 - *(int *)(puVar10 + -8);
        if (*(int *)(puVar10 + -4) != 0) {
          return;
        }
        *(undefined8 *)(puVar9 + -0x10) = 0x40023f;
        iVar4 = g();
        if (iVar4 == 0) break;
        *(undefined8 *)(puVar9 + -0x18) = 0x40024d;
        iVar4 = h();
        puVar9 = puVar9 + -0x10;
        if (iVar4 == 0) {
          return;
        }
      }
      return;
    }
  }
  *(undefined8 *)(puVar8 + -0x18) = 0x400217;
  h();
  puVar9 = puVar8 + -0x10;
  goto LAB_0040021f;
}


