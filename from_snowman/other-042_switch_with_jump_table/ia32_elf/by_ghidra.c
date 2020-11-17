typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
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




// WARNING: Unknown calling convention yet parameter storage is locked
// printf(...)

void printf(void...)

{
  return;
}



// do_switch(int)

undefined * do_switch(int param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
    printf("Hmm...");
  case 1:
    puVar1 = &DAT_0804a82b;
    break;
  case 2:
    puVar1 = &DAT_0804a82d;
    break;
  case 3:
    puVar1 = &DAT_0804a82f;
    break;
  case 4:
    puVar1 = &DAT_0804a831;
    break;
  case 5:
    puVar1 = &DAT_0804a833;
    break;
  case 6:
    puVar1 = &DAT_0804a835;
    break;
  case 7:
    puVar1 = &DAT_0804a837;
    break;
  case 8:
    puVar1 = &DAT_0804a839;
    break;
  case 9:
    puVar1 = &DAT_0804a83b;
    break;
  case 10:
    puVar1 = &DAT_0804a83d;
    break;
  case 0xb:
    puVar1 = &DAT_0804a840;
    break;
  case 0xc:
    puVar1 = &DAT_0804a843;
    break;
  case 0xd:
    puVar1 = &DAT_0804a846;
    break;
  case 0xe:
    puVar1 = &DAT_0804a849;
    break;
  case 0xf:
    puVar1 = &DAT_0804a84c;
    break;
  case 0x10:
    puVar1 = &DAT_0804a84f;
    break;
  case 0x11:
    puVar1 = &DAT_0804a852;
    break;
  case 0x12:
    puVar1 = &DAT_0804a855;
    break;
  case 0x13:
    puVar1 = &DAT_0804a858;
    break;
  case 0x14:
    puVar1 = &DAT_0804a85b;
    break;
  case 0x15:
    puVar1 = &DAT_0804a85e;
    break;
  case 0x16:
    puVar1 = &DAT_0804a861;
    break;
  case 0x17:
    puVar1 = &DAT_0804a864;
    break;
  case 0x18:
    puVar1 = &DAT_0804a867;
    break;
  case 0x19:
    puVar1 = &DAT_0804a86a;
    break;
  case 0x1a:
    puVar1 = &DAT_0804a86d;
    break;
  case 0x1b:
    puVar1 = &DAT_0804a870;
    break;
  case 0x1c:
    puVar1 = &DAT_0804a873;
    break;
  case 0x1d:
    puVar1 = &DAT_0804a876;
    break;
  case 0x1e:
    puVar1 = &DAT_0804a879;
    break;
  case 0x1f:
    puVar1 = &DAT_0804a87c;
    break;
  case 0x20:
    puVar1 = &DAT_0804a87f;
    break;
  case 0x21:
    printf("Hmm...");
  case 0x22:
    puVar1 = &DAT_0804a882;
    break;
  case 0x23:
    puVar1 = &DAT_0804a885;
    break;
  case 0x24:
    puVar1 = &DAT_0804a888;
    break;
  case 0x25:
    puVar1 = &DAT_0804a88b;
    break;
  case 0x26:
    puVar1 = &DAT_0804a88e;
    break;
  case 0x27:
    puVar1 = &DAT_0804a891;
    break;
  case 0x28:
    puVar1 = &DAT_0804a894;
    break;
  case 0x29:
    puVar1 = &DAT_0804a897;
    break;
  case 0x2a:
    puVar1 = &DAT_0804a89a;
    break;
  case 0x2b:
    puVar1 = &DAT_0804a89d;
    break;
  case 0x2c:
    puVar1 = &DAT_0804a8a0;
    break;
  case 0x2d:
    puVar1 = &DAT_0804a8a3;
    break;
  case 0x2e:
    puVar1 = &DAT_0804a8a6;
    break;
  case 0x2f:
    puVar1 = &DAT_0804a8a9;
    break;
  case 0x30:
    puVar1 = &DAT_0804a8ac;
    break;
  case 0x31:
    puVar1 = &DAT_0804a8af;
    break;
  case 0x32:
    puVar1 = &DAT_0804a8b2;
    break;
  case 0x33:
    puVar1 = &DAT_0804a8b5;
    break;
  case 0x34:
    puVar1 = &DAT_0804a8b8;
    break;
  case 0x35:
    puVar1 = &DAT_0804a8bb;
    break;
  case 0x36:
    puVar1 = &DAT_0804a8be;
    break;
  case 0x37:
    puVar1 = &DAT_0804a8c1;
    break;
  case 0x38:
    puVar1 = &DAT_0804a8c4;
    break;
  case 0x39:
    puVar1 = &DAT_0804a8c7;
    break;
  case 0x3a:
    puVar1 = &DAT_0804a8ca;
    break;
  case 0x3b:
    puVar1 = &DAT_0804a8cd;
    break;
  case 0x3c:
    puVar1 = &DAT_0804a8d0;
    break;
  case 0x3d:
    puVar1 = &DAT_0804a8d3;
    break;
  case 0x3e:
    puVar1 = &DAT_0804a8d6;
    break;
  case 0x3f:
    puVar1 = &DAT_0804a8d9;
    break;
  case 0x40:
    puVar1 = &DAT_0804a8dc;
    break;
  case 0x41:
    puVar1 = &DAT_0804a8df;
    break;
  case 0x42:
    printf("Hmm...");
  case 0x43:
    puVar1 = &DAT_0804a8e2;
    break;
  case 0x44:
    puVar1 = &DAT_0804a8e5;
    break;
  case 0x45:
    puVar1 = &DAT_0804a8e8;
    break;
  case 0x46:
    puVar1 = &DAT_0804a8eb;
    break;
  case 0x47:
    puVar1 = &DAT_0804a8ee;
    break;
  case 0x48:
    puVar1 = &DAT_0804a8f1;
    break;
  case 0x49:
    puVar1 = &DAT_0804a8f4;
    break;
  case 0x4a:
    puVar1 = &DAT_0804a8f7;
    break;
  case 0x4b:
    puVar1 = &DAT_0804a8fa;
    break;
  case 0x4c:
    puVar1 = &DAT_0804a8fd;
    break;
  case 0x4d:
    puVar1 = &DAT_0804a900;
    break;
  case 0x4e:
    puVar1 = &DAT_0804a903;
    break;
  case 0x4f:
    puVar1 = &DAT_0804a906;
    break;
  case 0x50:
    puVar1 = &DAT_0804a909;
    break;
  case 0x51:
    puVar1 = &DAT_0804a90c;
    break;
  case 0x52:
    puVar1 = &DAT_0804a90f;
    break;
  case 0x53:
    puVar1 = &DAT_0804a912;
    break;
  case 0x54:
    puVar1 = &DAT_0804a915;
    break;
  case 0x55:
    puVar1 = &DAT_0804a918;
    break;
  case 0x56:
    puVar1 = &DAT_0804a91b;
    break;
  case 0x57:
    puVar1 = &DAT_0804a91e;
    break;
  case 0x58:
    puVar1 = &DAT_0804a921;
    break;
  case 0x59:
    puVar1 = &DAT_0804a924;
    break;
  case 0x5a:
    puVar1 = &DAT_0804a927;
    break;
  case 0x5b:
    puVar1 = &DAT_0804a92a;
    break;
  case 0x5c:
    puVar1 = &DAT_0804a92d;
    break;
  case 0x5d:
    puVar1 = &DAT_0804a930;
    break;
  case 0x5e:
    puVar1 = &DAT_0804a933;
    break;
  case 0x5f:
    puVar1 = &DAT_0804a936;
    break;
  case 0x60:
    puVar1 = &DAT_0804a939;
    break;
  case 0x61:
    puVar1 = &DAT_0804a93c;
    break;
  case 0x62:
    puVar1 = &DAT_0804a93f;
    break;
  case 99:
    printf("Hmm...");
  case 100:
    puVar1 = &DAT_0804a942;
    break;
  case 0x65:
    puVar1 = &DAT_0804a946;
    break;
  case 0x66:
    puVar1 = &DAT_0804a94a;
    break;
  case 0x67:
    puVar1 = &DAT_0804a94e;
    break;
  case 0x68:
    puVar1 = &DAT_0804a952;
    break;
  case 0x69:
    puVar1 = &DAT_0804a956;
    break;
  case 0x6a:
    puVar1 = &DAT_0804a95a;
    break;
  case 0x6b:
    puVar1 = &DAT_0804a95e;
    break;
  case 0x6c:
    puVar1 = &DAT_0804a962;
    break;
  case 0x6d:
    puVar1 = &DAT_0804a966;
    break;
  case 0x6e:
    puVar1 = &DAT_0804a96a;
    break;
  case 0x6f:
    puVar1 = &DAT_0804a96e;
    break;
  case 0x70:
    puVar1 = &DAT_0804a972;
    break;
  case 0x71:
    puVar1 = &DAT_0804a976;
    break;
  case 0x72:
    puVar1 = &DAT_0804a97a;
    break;
  case 0x73:
    puVar1 = &DAT_0804a97e;
    break;
  case 0x74:
    puVar1 = &DAT_0804a982;
    break;
  case 0x75:
    puVar1 = &DAT_0804a986;
    break;
  case 0x76:
    puVar1 = &DAT_0804a98a;
    break;
  case 0x77:
    puVar1 = &DAT_0804a98e;
    break;
  case 0x78:
    puVar1 = &DAT_0804a992;
    break;
  case 0x79:
    puVar1 = &DAT_0804a996;
    break;
  case 0x7a:
    puVar1 = &DAT_0804a99a;
    break;
  case 0x7b:
    puVar1 = &DAT_0804a99e;
    break;
  case 0x7c:
    puVar1 = &DAT_0804a9a2;
    break;
  case 0x7d:
    puVar1 = &DAT_0804a9a6;
    break;
  case 0x7e:
    puVar1 = &DAT_0804a9aa;
    break;
  case 0x7f:
    puVar1 = &DAT_0804a9ae;
    break;
  case 0x80:
    puVar1 = &DAT_0804a9b2;
    break;
  case 0x81:
    puVar1 = &DAT_0804a9b6;
    break;
  case 0x82:
    puVar1 = &DAT_0804a9ba;
    break;
  case 0x83:
    puVar1 = &DAT_0804a9be;
    break;
  case 0x84:
    printf("Hmm...");
  case 0x85:
    puVar1 = &DAT_0804a9c2;
    break;
  case 0x86:
    puVar1 = &DAT_0804a9c6;
    break;
  case 0x87:
    puVar1 = &DAT_0804a9ca;
    break;
  case 0x88:
    puVar1 = &DAT_0804a9ce;
    break;
  case 0x89:
    puVar1 = &DAT_0804a9d2;
    break;
  case 0x8a:
    puVar1 = &DAT_0804a9d6;
    break;
  case 0x8b:
    puVar1 = &DAT_0804a9da;
    break;
  case 0x8c:
    puVar1 = &DAT_0804a9de;
    break;
  case 0x8d:
    puVar1 = &DAT_0804a9e2;
    break;
  case 0x8e:
    puVar1 = &DAT_0804a9e6;
    break;
  case 0x8f:
    puVar1 = &DAT_0804a9ea;
    break;
  case 0x90:
    puVar1 = &DAT_0804a9ee;
    break;
  case 0x91:
    puVar1 = &DAT_0804a9f2;
    break;
  case 0x92:
    puVar1 = &DAT_0804a9f6;
    break;
  case 0x93:
    puVar1 = &DAT_0804a9fa;
    break;
  case 0x94:
    puVar1 = &DAT_0804a9fe;
    break;
  case 0x95:
    puVar1 = &DAT_0804aa02;
    break;
  case 0x96:
    puVar1 = &DAT_0804aa06;
    break;
  case 0x97:
    puVar1 = &DAT_0804aa0a;
    break;
  case 0x98:
    puVar1 = &DAT_0804aa0e;
    break;
  case 0x99:
    puVar1 = &DAT_0804aa12;
    break;
  case 0x9a:
    puVar1 = &DAT_0804aa16;
    break;
  case 0x9b:
    puVar1 = &DAT_0804aa1a;
    break;
  case 0x9c:
    puVar1 = &DAT_0804aa1e;
    break;
  case 0x9d:
    puVar1 = &DAT_0804aa22;
    break;
  case 0x9e:
    puVar1 = &DAT_0804aa26;
    break;
  case 0x9f:
    puVar1 = &DAT_0804aa2a;
    break;
  case 0xa0:
    puVar1 = &DAT_0804aa2e;
    break;
  case 0xa1:
    puVar1 = &DAT_0804aa32;
    break;
  case 0xa2:
    puVar1 = &DAT_0804aa36;
    break;
  case 0xa3:
    puVar1 = &DAT_0804aa3a;
    break;
  case 0xa4:
    puVar1 = &DAT_0804aa3e;
    break;
  case 0xa5:
    printf("Hmm...");
  case 0xa6:
    puVar1 = &DAT_0804aa42;
    break;
  case 0xa7:
    puVar1 = &DAT_0804aa46;
    break;
  case 0xa8:
    puVar1 = &DAT_0804aa4a;
    break;
  case 0xa9:
    puVar1 = &DAT_0804aa4e;
    break;
  case 0xaa:
    puVar1 = &DAT_0804aa52;
    break;
  case 0xab:
    puVar1 = &DAT_0804aa56;
    break;
  case 0xac:
    puVar1 = &DAT_0804aa5a;
    break;
  case 0xad:
    puVar1 = &DAT_0804aa5e;
    break;
  case 0xae:
    puVar1 = &DAT_0804aa62;
    break;
  case 0xaf:
    puVar1 = &DAT_0804aa66;
    break;
  case 0xb0:
    puVar1 = &DAT_0804aa6a;
    break;
  case 0xb1:
    puVar1 = &DAT_0804aa6e;
    break;
  case 0xb2:
    puVar1 = &DAT_0804aa72;
    break;
  case 0xb3:
    puVar1 = &DAT_0804aa76;
    break;
  case 0xb4:
    puVar1 = &DAT_0804aa7a;
    break;
  case 0xb5:
    puVar1 = &DAT_0804aa7e;
    break;
  case 0xb6:
    puVar1 = &DAT_0804aa82;
    break;
  case 0xb7:
    puVar1 = &DAT_0804aa86;
    break;
  case 0xb8:
    puVar1 = &DAT_0804aa8a;
    break;
  case 0xb9:
    puVar1 = &DAT_0804aa8e;
    break;
  case 0xba:
    puVar1 = &DAT_0804aa92;
    break;
  case 0xbb:
    puVar1 = &DAT_0804aa96;
    break;
  case 0xbc:
    puVar1 = &DAT_0804aa9a;
    break;
  case 0xbd:
    puVar1 = &DAT_0804aa9e;
    break;
  case 0xbe:
    puVar1 = &DAT_0804aaa2;
    break;
  case 0xbf:
    puVar1 = &DAT_0804aaa6;
    break;
  case 0xc0:
    puVar1 = &DAT_0804aaaa;
    break;
  case 0xc1:
    puVar1 = &DAT_0804aaae;
    break;
  case 0xc2:
    puVar1 = &DAT_0804aab2;
    break;
  case 0xc3:
    puVar1 = &DAT_0804aab6;
    break;
  case 0xc4:
    puVar1 = &DAT_0804aaba;
    break;
  case 0xc5:
    puVar1 = &DAT_0804aabe;
    break;
  case 0xc6:
    printf("Hmm...");
  case 199:
    puVar1 = &DAT_0804aac2;
    break;
  case 200:
    puVar1 = &DAT_0804aac6;
    break;
  case 0xc9:
    puVar1 = &DAT_0804aaca;
    break;
  case 0xca:
    puVar1 = &DAT_0804aace;
    break;
  case 0xcb:
    puVar1 = &DAT_0804aad2;
    break;
  case 0xcc:
    puVar1 = &DAT_0804aad6;
    break;
  case 0xcd:
    puVar1 = &DAT_0804aada;
    break;
  case 0xce:
    puVar1 = &DAT_0804aade;
    break;
  case 0xcf:
    puVar1 = &DAT_0804aae2;
    break;
  case 0xd0:
    puVar1 = &DAT_0804aae6;
    break;
  case 0xd1:
    puVar1 = &DAT_0804aaea;
    break;
  case 0xd2:
    puVar1 = &DAT_0804aaee;
    break;
  case 0xd3:
    puVar1 = &DAT_0804aaf2;
    break;
  case 0xd4:
    puVar1 = &DAT_0804aaf6;
    break;
  case 0xd5:
    puVar1 = &DAT_0804aafa;
    break;
  case 0xd6:
    puVar1 = &DAT_0804aafe;
    break;
  case 0xd7:
    puVar1 = &DAT_0804ab02;
    break;
  case 0xd8:
    puVar1 = &DAT_0804ab06;
    break;
  case 0xd9:
    puVar1 = &DAT_0804ab0a;
    break;
  case 0xda:
    puVar1 = &DAT_0804ab0e;
    break;
  case 0xdb:
    puVar1 = &DAT_0804ab12;
    break;
  case 0xdc:
    puVar1 = &DAT_0804ab16;
    break;
  case 0xdd:
    puVar1 = &DAT_0804ab1a;
    break;
  case 0xde:
    puVar1 = &DAT_0804ab1e;
    break;
  case 0xdf:
    puVar1 = &DAT_0804ab22;
    break;
  case 0xe0:
    puVar1 = &DAT_0804ab26;
    break;
  case 0xe1:
    puVar1 = &DAT_0804ab2a;
    break;
  case 0xe2:
    puVar1 = &DAT_0804ab2e;
    break;
  case 0xe3:
    puVar1 = &DAT_0804ab32;
    break;
  case 0xe4:
    puVar1 = &DAT_0804ab36;
    break;
  case 0xe5:
    puVar1 = &DAT_0804ab3a;
    break;
  case 0xe6:
    puVar1 = &DAT_0804ab3e;
    break;
  case 0xe7:
    printf("Hmm...");
  case 0xe8:
    puVar1 = &DAT_0804ab42;
    break;
  case 0xe9:
    puVar1 = &DAT_0804ab46;
    break;
  case 0xea:
    puVar1 = &DAT_0804ab4a;
    break;
  case 0xeb:
    puVar1 = &DAT_0804ab4e;
    break;
  case 0xec:
    puVar1 = &DAT_0804ab52;
    break;
  case 0xed:
    puVar1 = &DAT_0804ab56;
    break;
  case 0xee:
    puVar1 = &DAT_0804ab5a;
    break;
  case 0xef:
    puVar1 = &DAT_0804ab5e;
    break;
  case 0xf0:
    puVar1 = &DAT_0804ab62;
    break;
  case 0xf1:
    puVar1 = &DAT_0804ab66;
    break;
  case 0xf2:
    puVar1 = &DAT_0804ab6a;
    break;
  case 0xf3:
    puVar1 = &DAT_0804ab6e;
    break;
  case 0xf4:
    puVar1 = &DAT_0804ab72;
    break;
  case 0xf5:
    puVar1 = &DAT_0804ab76;
    break;
  case 0xf6:
    puVar1 = &DAT_0804ab7a;
    break;
  case 0xf7:
    puVar1 = &DAT_0804ab7e;
    break;
  case 0xf8:
    puVar1 = &DAT_0804ab82;
    break;
  case 0xf9:
    puVar1 = &DAT_0804ab86;
    break;
  case 0xfa:
    puVar1 = &DAT_0804ab8a;
    break;
  case 0xfb:
    puVar1 = &DAT_0804ab8e;
    break;
  case 0xfc:
    puVar1 = &DAT_0804ab92;
    break;
  case 0xfd:
    puVar1 = &DAT_0804ab96;
    break;
  case 0xfe:
    puVar1 = &DAT_0804ab9a;
    break;
  case 0xff:
    puVar1 = &DAT_0804ab9e;
    break;
  case 0x100:
    puVar1 = &DAT_0804aba2;
    break;
  case 0x101:
    puVar1 = &DAT_0804aba6;
    break;
  case 0x102:
    puVar1 = &DAT_0804abaa;
    break;
  case 0x103:
    puVar1 = &DAT_0804abae;
    break;
  case 0x104:
    puVar1 = &DAT_0804abb2;
    break;
  case 0x105:
    puVar1 = &DAT_0804abb6;
    break;
  case 0x106:
    puVar1 = &DAT_0804abba;
    break;
  case 0x107:
    puVar1 = &DAT_0804abbe;
    break;
  case 0x108:
    printf("Hmm...");
  case 0x109:
    puVar1 = &DAT_0804abc2;
    break;
  case 0x10a:
    puVar1 = &DAT_0804abc6;
    break;
  case 0x10b:
    puVar1 = &DAT_0804abca;
    break;
  case 0x10c:
    puVar1 = &DAT_0804abce;
    break;
  case 0x10d:
    puVar1 = &DAT_0804abd2;
    break;
  case 0x10e:
    puVar1 = &DAT_0804abd6;
    break;
  case 0x10f:
    puVar1 = &DAT_0804abda;
    break;
  case 0x110:
    puVar1 = &DAT_0804abde;
    break;
  case 0x111:
    puVar1 = &DAT_0804abe2;
    break;
  case 0x112:
    puVar1 = &DAT_0804abe6;
    break;
  case 0x113:
    puVar1 = &DAT_0804abea;
    break;
  case 0x114:
    puVar1 = &DAT_0804abee;
    break;
  case 0x115:
    puVar1 = &DAT_0804abf2;
    break;
  case 0x116:
    puVar1 = &DAT_0804abf6;
    break;
  case 0x117:
    puVar1 = &DAT_0804abfa;
    break;
  case 0x118:
    puVar1 = &DAT_0804abfe;
    break;
  case 0x119:
    puVar1 = &DAT_0804ac02;
    break;
  case 0x11a:
    puVar1 = &DAT_0804ac06;
    break;
  case 0x11b:
    puVar1 = &DAT_0804ac0a;
    break;
  case 0x11c:
    puVar1 = &DAT_0804ac0e;
    break;
  case 0x11d:
    puVar1 = &DAT_0804ac12;
    break;
  case 0x11e:
    puVar1 = &DAT_0804ac16;
    break;
  case 0x11f:
    puVar1 = &DAT_0804ac1a;
    break;
  case 0x120:
    puVar1 = &DAT_0804ac1e;
    break;
  case 0x121:
    puVar1 = &DAT_0804ac22;
    break;
  case 0x122:
    puVar1 = &DAT_0804ac26;
    break;
  case 0x123:
    puVar1 = &DAT_0804ac2a;
    break;
  case 0x124:
    puVar1 = &DAT_0804ac2e;
    break;
  case 0x125:
    puVar1 = &DAT_0804ac32;
    break;
  case 0x126:
    puVar1 = &DAT_0804ac36;
    break;
  case 0x127:
    puVar1 = &DAT_0804ac3a;
    break;
  case 0x128:
    puVar1 = &DAT_0804ac3e;
    break;
  case 0x129:
    printf("Hmm...");
  case 0x12a:
    puVar1 = &DAT_0804ac42;
    break;
  case 299:
    puVar1 = &DAT_0804ac46;
    break;
  case 300:
    puVar1 = &DAT_0804ac4a;
    break;
  case 0x12d:
    puVar1 = &DAT_0804ac4e;
    break;
  case 0x12e:
    puVar1 = &DAT_0804ac52;
    break;
  case 0x12f:
    puVar1 = &DAT_0804ac56;
    break;
  case 0x130:
    puVar1 = &DAT_0804ac5a;
    break;
  case 0x131:
    puVar1 = &DAT_0804ac5e;
    break;
  case 0x132:
    puVar1 = &DAT_0804ac62;
    break;
  case 0x133:
    puVar1 = &DAT_0804ac66;
    break;
  case 0x134:
    puVar1 = &DAT_0804ac6a;
    break;
  case 0x135:
    puVar1 = &DAT_0804ac6e;
    break;
  case 0x136:
    puVar1 = &DAT_0804ac72;
    break;
  case 0x137:
    puVar1 = &DAT_0804ac76;
    break;
  case 0x138:
    puVar1 = &DAT_0804ac7a;
    break;
  case 0x139:
    puVar1 = &DAT_0804ac7e;
    break;
  case 0x13a:
    puVar1 = &DAT_0804ac82;
    break;
  case 0x13b:
    puVar1 = &DAT_0804ac86;
    break;
  case 0x13c:
    puVar1 = &DAT_0804ac8a;
    break;
  case 0x13d:
    puVar1 = &DAT_0804ac8e;
    break;
  case 0x13e:
    puVar1 = &DAT_0804ac92;
    break;
  case 0x13f:
    puVar1 = &DAT_0804ac96;
    break;
  case 0x140:
    puVar1 = &DAT_0804ac9a;
    break;
  case 0x141:
    puVar1 = &DAT_0804ac9e;
    break;
  case 0x142:
    puVar1 = &DAT_0804aca2;
    break;
  case 0x143:
    puVar1 = &DAT_0804aca6;
    break;
  case 0x144:
    puVar1 = &DAT_0804acaa;
    break;
  case 0x145:
    puVar1 = &DAT_0804acae;
    break;
  case 0x146:
    puVar1 = &DAT_0804acb2;
    break;
  case 0x147:
    puVar1 = &DAT_0804acb6;
    break;
  case 0x148:
    puVar1 = &DAT_0804acba;
    break;
  case 0x149:
    puVar1 = &DAT_0804acbe;
    break;
  case 0x14a:
    printf("Hmm...");
  case 0x14b:
    puVar1 = &DAT_0804acc2;
    break;
  case 0x14c:
    puVar1 = &DAT_0804acc6;
    break;
  case 0x14d:
    puVar1 = &DAT_0804acca;
    break;
  case 0x14e:
    puVar1 = &DAT_0804acce;
    break;
  case 0x14f:
    puVar1 = &DAT_0804acd2;
    break;
  case 0x150:
    puVar1 = &DAT_0804acd6;
    break;
  case 0x151:
    puVar1 = &DAT_0804acda;
    break;
  case 0x152:
    puVar1 = &DAT_0804acde;
    break;
  case 0x153:
    puVar1 = &DAT_0804ace2;
    break;
  case 0x154:
    puVar1 = &DAT_0804ace6;
    break;
  case 0x155:
    puVar1 = &DAT_0804acea;
    break;
  case 0x156:
    puVar1 = &DAT_0804acee;
    break;
  case 0x157:
    puVar1 = &DAT_0804acf2;
    break;
  case 0x158:
    puVar1 = &DAT_0804acf6;
    break;
  case 0x159:
    puVar1 = &DAT_0804acfa;
    break;
  case 0x15a:
    puVar1 = &DAT_0804acfe;
    break;
  case 0x15b:
    puVar1 = &DAT_0804ad02;
    break;
  case 0x15c:
    puVar1 = &DAT_0804ad06;
    break;
  case 0x15d:
    puVar1 = &DAT_0804ad0a;
    break;
  case 0x15e:
    puVar1 = &DAT_0804ad0e;
    break;
  case 0x15f:
    puVar1 = &DAT_0804ad12;
    break;
  case 0x160:
    puVar1 = &DAT_0804ad16;
    break;
  case 0x161:
    puVar1 = &DAT_0804ad1a;
    break;
  case 0x162:
    puVar1 = &DAT_0804ad1e;
    break;
  case 0x163:
    puVar1 = &DAT_0804ad22;
    break;
  case 0x164:
    puVar1 = &DAT_0804ad26;
    break;
  case 0x165:
    puVar1 = &DAT_0804ad2a;
    break;
  case 0x166:
    puVar1 = &DAT_0804ad2e;
    break;
  case 0x167:
    puVar1 = &DAT_0804ad32;
    break;
  case 0x168:
    puVar1 = &DAT_0804ad36;
    break;
  case 0x169:
    puVar1 = &DAT_0804ad3a;
    break;
  case 0x16a:
    puVar1 = &DAT_0804ad3e;
    break;
  case 0x16b:
    printf("Hmm...");
  case 0x16c:
    puVar1 = &DAT_0804ad42;
    break;
  case 0x16d:
    puVar1 = &DAT_0804ad46;
    break;
  case 0x16e:
    puVar1 = &DAT_0804ad4a;
    break;
  case 0x16f:
    puVar1 = &DAT_0804ad4e;
    break;
  case 0x170:
    puVar1 = &DAT_0804ad52;
    break;
  case 0x171:
    puVar1 = &DAT_0804ad56;
    break;
  case 0x172:
    puVar1 = &DAT_0804ad5a;
    break;
  case 0x173:
    puVar1 = &DAT_0804ad5e;
    break;
  case 0x174:
    puVar1 = &DAT_0804ad62;
    break;
  case 0x175:
    puVar1 = &DAT_0804ad66;
    break;
  case 0x176:
    puVar1 = &DAT_0804ad6a;
    break;
  case 0x177:
    puVar1 = &DAT_0804ad6e;
    break;
  case 0x178:
    puVar1 = &DAT_0804ad72;
    break;
  case 0x179:
    puVar1 = &DAT_0804ad76;
    break;
  case 0x17a:
    puVar1 = &DAT_0804ad7a;
    break;
  case 0x17b:
    puVar1 = &DAT_0804ad7e;
    break;
  case 0x17c:
    puVar1 = &DAT_0804ad82;
    break;
  case 0x17d:
    puVar1 = &DAT_0804ad86;
    break;
  case 0x17e:
    puVar1 = &DAT_0804ad8a;
    break;
  case 0x17f:
    puVar1 = &DAT_0804ad8e;
    break;
  case 0x180:
    puVar1 = &DAT_0804ad92;
    break;
  case 0x181:
    puVar1 = &DAT_0804ad96;
    break;
  case 0x182:
    puVar1 = &DAT_0804ad9a;
    break;
  case 0x183:
    puVar1 = &DAT_0804ad9e;
    break;
  case 0x184:
    puVar1 = &DAT_0804ada2;
    break;
  case 0x185:
    puVar1 = &DAT_0804ada6;
    break;
  case 0x186:
    puVar1 = &DAT_0804adaa;
    break;
  case 0x187:
    puVar1 = &DAT_0804adae;
    break;
  case 0x188:
    puVar1 = &DAT_0804adb2;
    break;
  case 0x189:
    puVar1 = &DAT_0804adb6;
    break;
  case 0x18a:
    puVar1 = &DAT_0804adba;
    break;
  case 0x18b:
    puVar1 = &DAT_0804adbe;
    break;
  case 0x18c:
    printf("Hmm...");
  case 0x18d:
    puVar1 = &DAT_0804adc2;
    break;
  case 0x18e:
    puVar1 = &DAT_0804adc6;
    break;
  case 399:
    puVar1 = &DAT_0804adca;
    break;
  case 400:
    puVar1 = &DAT_0804adce;
    break;
  case 0x191:
    puVar1 = &DAT_0804add2;
    break;
  case 0x192:
    puVar1 = &DAT_0804add6;
    break;
  case 0x193:
    puVar1 = &DAT_0804adda;
    break;
  case 0x194:
    puVar1 = &DAT_0804adde;
    break;
  case 0x195:
    puVar1 = &DAT_0804ade2;
    break;
  case 0x196:
    puVar1 = &DAT_0804ade6;
    break;
  case 0x197:
    puVar1 = &DAT_0804adea;
    break;
  case 0x198:
    puVar1 = &DAT_0804adee;
    break;
  case 0x199:
    puVar1 = &DAT_0804adf2;
    break;
  case 0x19a:
    puVar1 = &DAT_0804adf6;
    break;
  case 0x19b:
    puVar1 = &DAT_0804adfa;
    break;
  case 0x19c:
    puVar1 = &DAT_0804adfe;
    break;
  case 0x19d:
    puVar1 = &DAT_0804ae02;
    break;
  case 0x19e:
    puVar1 = &DAT_0804ae06;
    break;
  case 0x19f:
    puVar1 = &DAT_0804ae0a;
    break;
  case 0x1a0:
    puVar1 = &DAT_0804ae0e;
    break;
  case 0x1a1:
    puVar1 = &DAT_0804ae12;
    break;
  case 0x1a2:
    puVar1 = &DAT_0804ae16;
    break;
  case 0x1a3:
    puVar1 = &DAT_0804ae1a;
    break;
  case 0x1a4:
    puVar1 = &DAT_0804ae1e;
    break;
  case 0x1a5:
    puVar1 = &DAT_0804ae22;
    break;
  case 0x1a6:
    puVar1 = &DAT_0804ae26;
    break;
  case 0x1a7:
    puVar1 = &DAT_0804ae2a;
    break;
  case 0x1a8:
    puVar1 = &DAT_0804ae2e;
    break;
  case 0x1a9:
    puVar1 = &DAT_0804ae32;
    break;
  case 0x1aa:
    puVar1 = &DAT_0804ae36;
    break;
  case 0x1ab:
    puVar1 = &DAT_0804ae3a;
    break;
  case 0x1ac:
    puVar1 = &DAT_0804ae3e;
    break;
  case 0x1ad:
    printf("Hmm...");
  case 0x1ae:
    puVar1 = &DAT_0804ae42;
    break;
  case 0x1af:
    puVar1 = &DAT_0804ae46;
    break;
  case 0x1b0:
    puVar1 = &DAT_0804ae4a;
    break;
  case 0x1b1:
    puVar1 = &DAT_0804ae4e;
    break;
  case 0x1b2:
    puVar1 = &DAT_0804ae52;
    break;
  case 0x1b3:
    puVar1 = &DAT_0804ae56;
    break;
  case 0x1b4:
    puVar1 = &DAT_0804ae5a;
    break;
  case 0x1b5:
    puVar1 = &DAT_0804ae5e;
    break;
  case 0x1b6:
    puVar1 = &DAT_0804ae62;
    break;
  case 0x1b7:
    puVar1 = &DAT_0804ae66;
    break;
  case 0x1b8:
    puVar1 = &DAT_0804ae6a;
    break;
  case 0x1b9:
    puVar1 = &DAT_0804ae6e;
    break;
  case 0x1ba:
    puVar1 = &DAT_0804ae72;
    break;
  case 0x1bb:
    puVar1 = &DAT_0804ae76;
    break;
  case 0x1bc:
    puVar1 = &DAT_0804ae7a;
    break;
  case 0x1bd:
    puVar1 = &DAT_0804ae7e;
    break;
  case 0x1be:
    puVar1 = &DAT_0804ae82;
    break;
  case 0x1bf:
    puVar1 = &DAT_0804ae86;
    break;
  case 0x1c0:
    puVar1 = &DAT_0804ae8a;
    break;
  case 0x1c1:
    puVar1 = &DAT_0804ae8e;
    break;
  case 0x1c2:
    puVar1 = &DAT_0804ae92;
    break;
  case 0x1c3:
    puVar1 = &DAT_0804ae96;
    break;
  case 0x1c4:
    puVar1 = &DAT_0804ae9a;
    break;
  case 0x1c5:
    puVar1 = &DAT_0804ae9e;
    break;
  case 0x1c6:
    puVar1 = &DAT_0804aea2;
    break;
  case 0x1c7:
    puVar1 = &DAT_0804aea6;
    break;
  case 0x1c8:
    puVar1 = &DAT_0804aeaa;
    break;
  case 0x1c9:
    puVar1 = &DAT_0804aeae;
    break;
  case 0x1ca:
    puVar1 = &DAT_0804aeb2;
    break;
  case 0x1cb:
    puVar1 = &DAT_0804aeb6;
    break;
  case 0x1cc:
    puVar1 = &DAT_0804aeba;
    break;
  case 0x1cd:
    puVar1 = &DAT_0804aebe;
    break;
  case 0x1ce:
    printf("Hmm...");
  case 0x1cf:
    puVar1 = &DAT_0804aec2;
    break;
  case 0x1d0:
    puVar1 = &DAT_0804aec6;
    break;
  case 0x1d1:
    puVar1 = &DAT_0804aeca;
    break;
  case 0x1d2:
    puVar1 = &DAT_0804aece;
    break;
  case 0x1d3:
    puVar1 = &DAT_0804aed2;
    break;
  case 0x1d4:
    puVar1 = &DAT_0804aed6;
    break;
  case 0x1d5:
    puVar1 = &DAT_0804aeda;
    break;
  case 0x1d6:
    puVar1 = &DAT_0804aede;
    break;
  case 0x1d7:
    puVar1 = &DAT_0804aee2;
    break;
  case 0x1d8:
    puVar1 = &DAT_0804aee6;
    break;
  case 0x1d9:
    puVar1 = &DAT_0804aeea;
    break;
  case 0x1da:
    puVar1 = &DAT_0804aeee;
    break;
  case 0x1db:
    puVar1 = &DAT_0804aef2;
    break;
  case 0x1dc:
    puVar1 = &DAT_0804aef6;
    break;
  case 0x1dd:
    puVar1 = &DAT_0804aefa;
    break;
  case 0x1de:
    puVar1 = &DAT_0804aefe;
    break;
  case 0x1df:
    puVar1 = &DAT_0804af02;
    break;
  case 0x1e0:
    puVar1 = &DAT_0804af06;
    break;
  case 0x1e1:
    puVar1 = &DAT_0804af0a;
    break;
  case 0x1e2:
    puVar1 = &DAT_0804af0e;
    break;
  case 0x1e3:
    puVar1 = &DAT_0804af12;
    break;
  case 0x1e4:
    puVar1 = &DAT_0804af16;
    break;
  case 0x1e5:
    puVar1 = &DAT_0804af1a;
    break;
  case 0x1e6:
    puVar1 = &DAT_0804af1e;
    break;
  case 0x1e7:
    puVar1 = &DAT_0804af22;
    break;
  case 0x1e8:
    puVar1 = &DAT_0804af26;
    break;
  case 0x1e9:
    puVar1 = &DAT_0804af2a;
    break;
  case 0x1ea:
    puVar1 = &DAT_0804af2e;
    break;
  case 0x1eb:
    puVar1 = &DAT_0804af32;
    break;
  case 0x1ec:
    puVar1 = &DAT_0804af36;
    break;
  case 0x1ed:
    puVar1 = &DAT_0804af3a;
    break;
  case 0x1ee:
    puVar1 = &DAT_0804af3e;
    break;
  case 0x1ef:
    printf("Hmm...");
  case 0x1f0:
    puVar1 = &DAT_0804af42;
    break;
  case 0x1f1:
    puVar1 = &DAT_0804af46;
    break;
  case 0x1f2:
    puVar1 = &DAT_0804af4a;
    break;
  case 499:
    puVar1 = &DAT_0804af4e;
    break;
  case 500:
    puVar1 = &DAT_0804af52;
    break;
  case 0x1f5:
    puVar1 = &DAT_0804af56;
    break;
  case 0x1f6:
    puVar1 = &DAT_0804af5a;
    break;
  case 0x1f7:
    puVar1 = &DAT_0804af5e;
    break;
  case 0x1f8:
    puVar1 = &DAT_0804af62;
    break;
  case 0x1f9:
    puVar1 = &DAT_0804af66;
    break;
  case 0x1fa:
    puVar1 = &DAT_0804af6a;
    break;
  case 0x1fb:
    puVar1 = &DAT_0804af6e;
    break;
  case 0x1fc:
    puVar1 = &DAT_0804af72;
    break;
  case 0x1fd:
    puVar1 = &DAT_0804af76;
    break;
  case 0x1fe:
    puVar1 = &DAT_0804af7a;
    break;
  case 0x1ff:
    puVar1 = &DAT_0804af7e;
    break;
  case 0x200:
    puVar1 = &DAT_0804af82;
    break;
  case 0x201:
    puVar1 = &DAT_0804af86;
    break;
  case 0x202:
    puVar1 = &DAT_0804af8a;
    break;
  case 0x203:
    puVar1 = &DAT_0804af8e;
    break;
  case 0x204:
    puVar1 = &DAT_0804af92;
    break;
  case 0x205:
    puVar1 = &DAT_0804af96;
    break;
  case 0x206:
    puVar1 = &DAT_0804af9a;
    break;
  case 0x207:
    puVar1 = &DAT_0804af9e;
    break;
  case 0x208:
    puVar1 = &DAT_0804afa2;
    break;
  case 0x209:
    puVar1 = &DAT_0804afa6;
    break;
  case 0x20a:
    puVar1 = &DAT_0804afaa;
    break;
  case 0x20b:
    puVar1 = &DAT_0804afae;
    break;
  case 0x20c:
    puVar1 = &DAT_0804afb2;
    break;
  case 0x20d:
    puVar1 = &DAT_0804afb6;
    break;
  case 0x20e:
    puVar1 = &DAT_0804afba;
    break;
  case 0x20f:
    puVar1 = &DAT_0804afbe;
    break;
  case 0x210:
    printf("Hmm...");
  case 0x211:
    puVar1 = &DAT_0804afc2;
    break;
  case 0x212:
    puVar1 = &DAT_0804afc6;
    break;
  case 0x213:
    puVar1 = &DAT_0804afca;
    break;
  case 0x214:
    puVar1 = &DAT_0804afce;
    break;
  case 0x215:
    puVar1 = &DAT_0804afd2;
    break;
  case 0x216:
    puVar1 = &DAT_0804afd6;
    break;
  case 0x217:
    puVar1 = &DAT_0804afda;
    break;
  case 0x218:
    puVar1 = &DAT_0804afde;
    break;
  case 0x219:
    puVar1 = &DAT_0804afe2;
    break;
  case 0x21a:
    puVar1 = &DAT_0804afe6;
    break;
  case 0x21b:
    puVar1 = &DAT_0804afea;
    break;
  case 0x21c:
    puVar1 = &DAT_0804afee;
    break;
  case 0x21d:
    puVar1 = &DAT_0804aff2;
    break;
  case 0x21e:
    puVar1 = &DAT_0804aff6;
    break;
  case 0x21f:
    puVar1 = &DAT_0804affa;
    break;
  case 0x220:
    puVar1 = &DAT_0804affe;
    break;
  case 0x221:
    puVar1 = &DAT_0804b002;
    break;
  case 0x222:
    puVar1 = &DAT_0804b006;
    break;
  case 0x223:
    puVar1 = &DAT_0804b00a;
    break;
  case 0x224:
    puVar1 = &DAT_0804b00e;
    break;
  case 0x225:
    puVar1 = &DAT_0804b012;
    break;
  case 0x226:
    puVar1 = &DAT_0804b016;
    break;
  case 0x227:
    puVar1 = &DAT_0804b01a;
    break;
  case 0x228:
    puVar1 = &DAT_0804b01e;
    break;
  case 0x229:
    puVar1 = &DAT_0804b022;
    break;
  case 0x22a:
    puVar1 = &DAT_0804b026;
    break;
  case 0x22b:
    puVar1 = &DAT_0804b02a;
    break;
  case 0x22c:
    puVar1 = &DAT_0804b02e;
    break;
  case 0x22d:
    puVar1 = &DAT_0804b032;
    break;
  case 0x22e:
    puVar1 = &DAT_0804b036;
    break;
  case 0x22f:
    puVar1 = &DAT_0804b03a;
    break;
  case 0x230:
    puVar1 = &DAT_0804b03e;
    break;
  case 0x231:
    printf("Hmm...");
  case 0x232:
    puVar1 = &DAT_0804b042;
    break;
  case 0x233:
    puVar1 = &DAT_0804b046;
    break;
  case 0x234:
    puVar1 = &DAT_0804b04a;
    break;
  case 0x235:
    puVar1 = &DAT_0804b04e;
    break;
  case 0x236:
    puVar1 = &DAT_0804b052;
    break;
  case 0x237:
    puVar1 = &DAT_0804b056;
    break;
  case 0x238:
    puVar1 = &DAT_0804b05a;
    break;
  case 0x239:
    puVar1 = &DAT_0804b05e;
    break;
  case 0x23a:
    puVar1 = &DAT_0804b062;
    break;
  case 0x23b:
    puVar1 = &DAT_0804b066;
    break;
  case 0x23c:
    puVar1 = &DAT_0804b06a;
    break;
  case 0x23d:
    puVar1 = &DAT_0804b06e;
    break;
  case 0x23e:
    puVar1 = &DAT_0804b072;
    break;
  case 0x23f:
    puVar1 = &DAT_0804b076;
    break;
  case 0x240:
    puVar1 = &DAT_0804b07a;
    break;
  case 0x241:
    puVar1 = &DAT_0804b07e;
    break;
  case 0x242:
    puVar1 = &DAT_0804b082;
    break;
  case 0x243:
    puVar1 = &DAT_0804b086;
    break;
  case 0x244:
    puVar1 = &DAT_0804b08a;
    break;
  case 0x245:
    puVar1 = &DAT_0804b08e;
    break;
  case 0x246:
    puVar1 = &DAT_0804b092;
    break;
  case 0x247:
    puVar1 = &DAT_0804b096;
    break;
  case 0x248:
    puVar1 = &DAT_0804b09a;
    break;
  case 0x249:
    puVar1 = &DAT_0804b09e;
    break;
  case 0x24a:
    puVar1 = &DAT_0804b0a2;
    break;
  case 0x24b:
    puVar1 = &DAT_0804b0a6;
    break;
  case 0x24c:
    puVar1 = &DAT_0804b0aa;
    break;
  case 0x24d:
    puVar1 = &DAT_0804b0ae;
    break;
  case 0x24e:
    puVar1 = &DAT_0804b0b2;
    break;
  case 0x24f:
    puVar1 = &DAT_0804b0b6;
    break;
  case 0x250:
    puVar1 = &DAT_0804b0ba;
    break;
  case 0x251:
    puVar1 = &DAT_0804b0be;
    break;
  case 0x252:
    printf("Hmm...");
  case 0x253:
    puVar1 = &DAT_0804b0c2;
    break;
  case 0x254:
    puVar1 = &DAT_0804b0c6;
    break;
  case 0x255:
    puVar1 = &DAT_0804b0ca;
    break;
  case 0x256:
    puVar1 = &DAT_0804b0ce;
    break;
  case 599:
    puVar1 = &DAT_0804b0d2;
    break;
  case 600:
    puVar1 = &DAT_0804b0d6;
    break;
  case 0x259:
    puVar1 = &DAT_0804b0da;
    break;
  case 0x25a:
    puVar1 = &DAT_0804b0de;
    break;
  case 0x25b:
    puVar1 = &DAT_0804b0e2;
    break;
  case 0x25c:
    puVar1 = &DAT_0804b0e6;
    break;
  case 0x25d:
    puVar1 = &DAT_0804b0ea;
    break;
  case 0x25e:
    puVar1 = &DAT_0804b0ee;
    break;
  case 0x25f:
    puVar1 = &DAT_0804b0f2;
    break;
  case 0x260:
    puVar1 = &DAT_0804b0f6;
    break;
  case 0x261:
    puVar1 = &DAT_0804b0fa;
    break;
  case 0x262:
    puVar1 = &DAT_0804b0fe;
    break;
  case 0x263:
    puVar1 = &DAT_0804b102;
    break;
  case 0x264:
    puVar1 = &DAT_0804b106;
    break;
  case 0x265:
    puVar1 = &DAT_0804b10a;
    break;
  case 0x266:
    puVar1 = &DAT_0804b10e;
    break;
  case 0x267:
    puVar1 = &DAT_0804b112;
    break;
  case 0x268:
    puVar1 = &DAT_0804b116;
    break;
  case 0x269:
    puVar1 = &DAT_0804b11a;
    break;
  case 0x26a:
    puVar1 = &DAT_0804b11e;
    break;
  case 0x26b:
    puVar1 = &DAT_0804b122;
    break;
  case 0x26c:
    puVar1 = &DAT_0804b126;
    break;
  case 0x26d:
    puVar1 = &DAT_0804b12a;
    break;
  case 0x26e:
    puVar1 = &DAT_0804b12e;
    break;
  case 0x26f:
    puVar1 = &DAT_0804b132;
    break;
  case 0x270:
    puVar1 = &DAT_0804b136;
    break;
  case 0x271:
    puVar1 = &DAT_0804b13a;
    break;
  case 0x272:
    puVar1 = &DAT_0804b13e;
    break;
  case 0x273:
    printf("Hmm...");
  case 0x274:
    puVar1 = &DAT_0804b142;
    break;
  case 0x275:
    puVar1 = &DAT_0804b146;
    break;
  case 0x276:
    puVar1 = &DAT_0804b14a;
    break;
  case 0x277:
    puVar1 = &DAT_0804b14e;
    break;
  case 0x278:
    puVar1 = &DAT_0804b152;
    break;
  case 0x279:
    puVar1 = &DAT_0804b156;
    break;
  case 0x27a:
    puVar1 = &DAT_0804b15a;
    break;
  case 0x27b:
    puVar1 = &DAT_0804b15e;
    break;
  case 0x27c:
    puVar1 = &DAT_0804b162;
    break;
  case 0x27d:
    puVar1 = &DAT_0804b166;
    break;
  case 0x27e:
    puVar1 = &DAT_0804b16a;
    break;
  case 0x27f:
    puVar1 = &DAT_0804b16e;
    break;
  case 0x280:
    puVar1 = &DAT_0804b172;
    break;
  case 0x281:
    puVar1 = &DAT_0804b176;
    break;
  case 0x282:
    puVar1 = &DAT_0804b17a;
    break;
  case 0x283:
    puVar1 = &DAT_0804b17e;
    break;
  case 0x284:
    puVar1 = &DAT_0804b182;
    break;
  case 0x285:
    puVar1 = &DAT_0804b186;
    break;
  case 0x286:
    puVar1 = &DAT_0804b18a;
    break;
  case 0x287:
    puVar1 = &DAT_0804b18e;
    break;
  case 0x288:
    puVar1 = &DAT_0804b192;
    break;
  case 0x289:
    puVar1 = &DAT_0804b196;
    break;
  case 0x28a:
    puVar1 = &DAT_0804b19a;
    break;
  case 0x28b:
    puVar1 = &DAT_0804b19e;
    break;
  case 0x28c:
    puVar1 = &DAT_0804b1a2;
    break;
  case 0x28d:
    puVar1 = &DAT_0804b1a6;
    break;
  case 0x28e:
    puVar1 = &DAT_0804b1aa;
    break;
  case 0x28f:
    puVar1 = &DAT_0804b1ae;
    break;
  case 0x290:
    puVar1 = &DAT_0804b1b2;
    break;
  case 0x291:
    puVar1 = &DAT_0804b1b6;
    break;
  case 0x292:
    puVar1 = &DAT_0804b1ba;
    break;
  case 0x293:
    puVar1 = &DAT_0804b1be;
    break;
  case 0x294:
    printf("Hmm...");
  case 0x295:
    puVar1 = &DAT_0804b1c2;
    break;
  case 0x296:
    puVar1 = &DAT_0804b1c6;
    break;
  case 0x297:
    puVar1 = &DAT_0804b1ca;
    break;
  case 0x298:
    puVar1 = &DAT_0804b1ce;
    break;
  case 0x299:
    puVar1 = &DAT_0804b1d2;
    break;
  case 0x29a:
    puVar1 = &DAT_0804b1d6;
    break;
  case 0x29b:
    puVar1 = &DAT_0804b1da;
    break;
  case 0x29c:
    puVar1 = &DAT_0804b1de;
    break;
  case 0x29d:
    puVar1 = &DAT_0804b1e2;
    break;
  case 0x29e:
    puVar1 = &DAT_0804b1e6;
    break;
  case 0x29f:
    puVar1 = &DAT_0804b1ea;
    break;
  case 0x2a0:
    puVar1 = &DAT_0804b1ee;
    break;
  case 0x2a1:
    puVar1 = &DAT_0804b1f2;
    break;
  case 0x2a2:
    puVar1 = &DAT_0804b1f6;
    break;
  case 0x2a3:
    puVar1 = &DAT_0804b1fa;
    break;
  case 0x2a4:
    puVar1 = &DAT_0804b1fe;
    break;
  case 0x2a5:
    puVar1 = &DAT_0804b202;
    break;
  case 0x2a6:
    puVar1 = &DAT_0804b206;
    break;
  case 0x2a7:
    puVar1 = &DAT_0804b20a;
    break;
  case 0x2a8:
    puVar1 = &DAT_0804b20e;
    break;
  case 0x2a9:
    puVar1 = &DAT_0804b212;
    break;
  case 0x2aa:
    puVar1 = &DAT_0804b216;
    break;
  case 0x2ab:
    puVar1 = &DAT_0804b21a;
    break;
  case 0x2ac:
    puVar1 = &DAT_0804b21e;
    break;
  case 0x2ad:
    puVar1 = &DAT_0804b222;
    break;
  case 0x2ae:
    puVar1 = &DAT_0804b226;
    break;
  case 0x2af:
    puVar1 = &DAT_0804b22a;
    break;
  case 0x2b0:
    puVar1 = &DAT_0804b22e;
    break;
  case 0x2b1:
    puVar1 = &DAT_0804b232;
    break;
  case 0x2b2:
    puVar1 = &DAT_0804b236;
    break;
  case 0x2b3:
    puVar1 = &DAT_0804b23a;
    break;
  case 0x2b4:
    puVar1 = &DAT_0804b23e;
    break;
  case 0x2b5:
    printf("Hmm...");
  case 0x2b6:
    puVar1 = &DAT_0804b242;
    break;
  case 0x2b7:
    puVar1 = &DAT_0804b246;
    break;
  case 0x2b8:
    puVar1 = &DAT_0804b24a;
    break;
  case 0x2b9:
    puVar1 = &DAT_0804b24e;
    break;
  case 0x2ba:
    puVar1 = &DAT_0804b252;
    break;
  case 699:
    puVar1 = &DAT_0804b256;
    break;
  case 700:
    puVar1 = &DAT_0804b25a;
    break;
  case 0x2bd:
    puVar1 = &DAT_0804b25e;
    break;
  case 0x2be:
    puVar1 = &DAT_0804b262;
    break;
  case 0x2bf:
    puVar1 = &DAT_0804b266;
    break;
  case 0x2c0:
    puVar1 = &DAT_0804b26a;
    break;
  case 0x2c1:
    puVar1 = &DAT_0804b26e;
    break;
  case 0x2c2:
    puVar1 = &DAT_0804b272;
    break;
  case 0x2c3:
    puVar1 = &DAT_0804b276;
    break;
  case 0x2c4:
    puVar1 = &DAT_0804b27a;
    break;
  case 0x2c5:
    puVar1 = &DAT_0804b27e;
    break;
  case 0x2c6:
    puVar1 = &DAT_0804b282;
    break;
  case 0x2c7:
    puVar1 = &DAT_0804b286;
    break;
  case 0x2c8:
    puVar1 = &DAT_0804b28a;
    break;
  case 0x2c9:
    puVar1 = &DAT_0804b28e;
    break;
  case 0x2ca:
    puVar1 = &DAT_0804b292;
    break;
  case 0x2cb:
    puVar1 = &DAT_0804b296;
    break;
  case 0x2cc:
    puVar1 = &DAT_0804b29a;
    break;
  case 0x2cd:
    puVar1 = &DAT_0804b29e;
    break;
  case 0x2ce:
    puVar1 = &DAT_0804b2a2;
    break;
  case 0x2cf:
    puVar1 = &DAT_0804b2a6;
    break;
  case 0x2d0:
    puVar1 = &DAT_0804b2aa;
    break;
  case 0x2d1:
    puVar1 = &DAT_0804b2ae;
    break;
  case 0x2d2:
    puVar1 = &DAT_0804b2b2;
    break;
  case 0x2d3:
    puVar1 = &DAT_0804b2b6;
    break;
  case 0x2d4:
    puVar1 = &DAT_0804b2ba;
    break;
  case 0x2d5:
    puVar1 = &DAT_0804b2be;
    break;
  case 0x2d6:
    printf("Hmm...");
  case 0x2d7:
    puVar1 = &DAT_0804b2c2;
    break;
  case 0x2d8:
    puVar1 = &DAT_0804b2c6;
    break;
  case 0x2d9:
    puVar1 = &DAT_0804b2ca;
    break;
  case 0x2da:
    puVar1 = &DAT_0804b2ce;
    break;
  case 0x2db:
    puVar1 = &DAT_0804b2d2;
    break;
  case 0x2dc:
    puVar1 = &DAT_0804b2d6;
    break;
  case 0x2dd:
    puVar1 = &DAT_0804b2da;
    break;
  case 0x2de:
    puVar1 = &DAT_0804b2de;
    break;
  case 0x2df:
    puVar1 = &DAT_0804b2e2;
    break;
  case 0x2e0:
    puVar1 = &DAT_0804b2e6;
    break;
  case 0x2e1:
    puVar1 = &DAT_0804b2ea;
    break;
  case 0x2e2:
    puVar1 = &DAT_0804b2ee;
    break;
  case 0x2e3:
    puVar1 = &DAT_0804b2f2;
    break;
  case 0x2e4:
    puVar1 = &DAT_0804b2f6;
    break;
  case 0x2e5:
    puVar1 = &DAT_0804b2fa;
    break;
  case 0x2e6:
    puVar1 = &DAT_0804b2fe;
    break;
  case 0x2e7:
    puVar1 = &DAT_0804b302;
    break;
  case 0x2e8:
    puVar1 = &DAT_0804b306;
    break;
  case 0x2e9:
    puVar1 = &DAT_0804b30a;
    break;
  case 0x2ea:
    puVar1 = &DAT_0804b30e;
    break;
  case 0x2eb:
    puVar1 = &DAT_0804b312;
    break;
  case 0x2ec:
    puVar1 = &DAT_0804b316;
    break;
  case 0x2ed:
    puVar1 = &DAT_0804b31a;
    break;
  case 0x2ee:
    puVar1 = &DAT_0804b31e;
    break;
  case 0x2ef:
    puVar1 = &DAT_0804b322;
    break;
  case 0x2f0:
    puVar1 = &DAT_0804b326;
    break;
  case 0x2f1:
    puVar1 = &DAT_0804b32a;
    break;
  case 0x2f2:
    puVar1 = &DAT_0804b32e;
    break;
  case 0x2f3:
    puVar1 = &DAT_0804b332;
    break;
  case 0x2f4:
    puVar1 = &DAT_0804b336;
    break;
  case 0x2f5:
    puVar1 = &DAT_0804b33a;
    break;
  case 0x2f6:
    puVar1 = &DAT_0804b33e;
    break;
  case 0x2f7:
    printf("Hmm...");
  case 0x2f8:
    puVar1 = &DAT_0804b342;
    break;
  case 0x2f9:
    puVar1 = &DAT_0804b346;
    break;
  case 0x2fa:
    puVar1 = &DAT_0804b34a;
    break;
  case 0x2fb:
    puVar1 = &DAT_0804b34e;
    break;
  case 0x2fc:
    puVar1 = &DAT_0804b352;
    break;
  case 0x2fd:
    puVar1 = &DAT_0804b356;
    break;
  case 0x2fe:
    puVar1 = &DAT_0804b35a;
    break;
  case 0x2ff:
    puVar1 = &DAT_0804b35e;
    break;
  case 0x300:
    puVar1 = &DAT_0804b362;
    break;
  case 0x301:
    puVar1 = &DAT_0804b366;
    break;
  case 0x302:
    puVar1 = &DAT_0804b36a;
    break;
  case 0x303:
    puVar1 = &DAT_0804b36e;
    break;
  case 0x304:
    puVar1 = &DAT_0804b372;
    break;
  case 0x305:
    puVar1 = &DAT_0804b376;
    break;
  case 0x306:
    puVar1 = &DAT_0804b37a;
    break;
  case 0x307:
    puVar1 = &DAT_0804b37e;
    break;
  case 0x308:
    puVar1 = &DAT_0804b382;
    break;
  case 0x309:
    puVar1 = &DAT_0804b386;
    break;
  case 0x30a:
    puVar1 = &DAT_0804b38a;
    break;
  case 0x30b:
    puVar1 = &DAT_0804b38e;
    break;
  case 0x30c:
    puVar1 = &DAT_0804b392;
    break;
  case 0x30d:
    puVar1 = &DAT_0804b396;
    break;
  case 0x30e:
    puVar1 = &DAT_0804b39a;
    break;
  case 0x30f:
    puVar1 = &DAT_0804b39e;
    break;
  case 0x310:
    puVar1 = &DAT_0804b3a2;
    break;
  case 0x311:
    puVar1 = &DAT_0804b3a6;
    break;
  case 0x312:
    puVar1 = &DAT_0804b3aa;
    break;
  case 0x313:
    puVar1 = &DAT_0804b3ae;
    break;
  case 0x314:
    puVar1 = &DAT_0804b3b2;
    break;
  case 0x315:
    puVar1 = &DAT_0804b3b6;
    break;
  case 0x316:
    puVar1 = &DAT_0804b3ba;
    break;
  case 0x317:
    puVar1 = &DAT_0804b3be;
    break;
  case 0x318:
    printf("Hmm...");
  case 0x319:
    puVar1 = &DAT_0804b3c2;
    break;
  case 0x31a:
    puVar1 = &DAT_0804b3c6;
    break;
  case 0x31b:
    puVar1 = &DAT_0804b3ca;
    break;
  case 0x31c:
    puVar1 = &DAT_0804b3ce;
    break;
  case 0x31d:
    puVar1 = &DAT_0804b3d2;
    break;
  case 0x31e:
    puVar1 = &DAT_0804b3d6;
    break;
  case 799:
    puVar1 = &DAT_0804b3da;
    break;
  case 800:
    puVar1 = &DAT_0804b3de;
    break;
  case 0x321:
    puVar1 = &DAT_0804b3e2;
    break;
  case 0x322:
    puVar1 = &DAT_0804b3e6;
    break;
  case 0x323:
    puVar1 = &DAT_0804b3ea;
    break;
  case 0x324:
    puVar1 = &DAT_0804b3ee;
    break;
  case 0x325:
    puVar1 = &DAT_0804b3f2;
    break;
  case 0x326:
    puVar1 = &DAT_0804b3f6;
    break;
  case 0x327:
    puVar1 = &DAT_0804b3fa;
    break;
  case 0x328:
    puVar1 = &DAT_0804b3fe;
    break;
  case 0x329:
    puVar1 = &DAT_0804b402;
    break;
  case 0x32a:
    puVar1 = &DAT_0804b406;
    break;
  case 0x32b:
    puVar1 = &DAT_0804b40a;
    break;
  case 0x32c:
    puVar1 = &DAT_0804b40e;
    break;
  case 0x32d:
    puVar1 = &DAT_0804b412;
    break;
  case 0x32e:
    puVar1 = &DAT_0804b416;
    break;
  case 0x32f:
    puVar1 = &DAT_0804b41a;
    break;
  case 0x330:
    puVar1 = &DAT_0804b41e;
    break;
  case 0x331:
    puVar1 = &DAT_0804b422;
    break;
  case 0x332:
    puVar1 = &DAT_0804b426;
    break;
  case 0x333:
    puVar1 = &DAT_0804b42a;
    break;
  case 0x334:
    puVar1 = &DAT_0804b42e;
    break;
  case 0x335:
    puVar1 = &DAT_0804b432;
    break;
  case 0x336:
    puVar1 = &DAT_0804b436;
    break;
  case 0x337:
    puVar1 = &DAT_0804b43a;
    break;
  case 0x338:
    puVar1 = &DAT_0804b43e;
    break;
  case 0x339:
    printf("Hmm...");
  case 0x33a:
    puVar1 = &DAT_0804b442;
    break;
  case 0x33b:
    puVar1 = &DAT_0804b446;
    break;
  case 0x33c:
    puVar1 = &DAT_0804b44a;
    break;
  case 0x33d:
    puVar1 = &DAT_0804b44e;
    break;
  case 0x33e:
    puVar1 = &DAT_0804b452;
    break;
  case 0x33f:
    puVar1 = &DAT_0804b456;
    break;
  case 0x340:
    puVar1 = &DAT_0804b45a;
    break;
  case 0x341:
    puVar1 = &DAT_0804b45e;
    break;
  case 0x342:
    puVar1 = &DAT_0804b462;
    break;
  case 0x343:
    puVar1 = &DAT_0804b466;
    break;
  case 0x344:
    puVar1 = &DAT_0804b46a;
    break;
  case 0x345:
    puVar1 = &DAT_0804b46e;
    break;
  case 0x346:
    puVar1 = &DAT_0804b472;
    break;
  case 0x347:
    puVar1 = &DAT_0804b476;
    break;
  case 0x348:
    puVar1 = &DAT_0804b47a;
    break;
  case 0x349:
    puVar1 = &DAT_0804b47e;
    break;
  case 0x34a:
    puVar1 = &DAT_0804b482;
    break;
  case 0x34b:
    puVar1 = &DAT_0804b486;
    break;
  case 0x34c:
    puVar1 = &DAT_0804b48a;
    break;
  case 0x34d:
    puVar1 = &DAT_0804b48e;
    break;
  case 0x34e:
    puVar1 = &DAT_0804b492;
    break;
  case 0x34f:
    puVar1 = &DAT_0804b496;
    break;
  case 0x350:
    puVar1 = &DAT_0804b49a;
    break;
  case 0x351:
    puVar1 = &DAT_0804b49e;
    break;
  case 0x352:
    puVar1 = &DAT_0804b4a2;
    break;
  case 0x353:
    puVar1 = &DAT_0804b4a6;
    break;
  case 0x354:
    puVar1 = &DAT_0804b4aa;
    break;
  case 0x355:
    puVar1 = &DAT_0804b4ae;
    break;
  case 0x356:
    puVar1 = &DAT_0804b4b2;
    break;
  case 0x357:
    puVar1 = &DAT_0804b4b6;
    break;
  case 0x358:
    puVar1 = &DAT_0804b4ba;
    break;
  case 0x359:
    puVar1 = &DAT_0804b4be;
    break;
  case 0x35a:
    printf("Hmm...");
  case 0x35b:
    puVar1 = &DAT_0804b4c2;
    break;
  case 0x35c:
    puVar1 = &DAT_0804b4c6;
    break;
  case 0x35d:
    puVar1 = &DAT_0804b4ca;
    break;
  case 0x35e:
    puVar1 = &DAT_0804b4ce;
    break;
  case 0x35f:
    puVar1 = &DAT_0804b4d2;
    break;
  case 0x360:
    puVar1 = &DAT_0804b4d6;
    break;
  case 0x361:
    puVar1 = &DAT_0804b4da;
    break;
  case 0x362:
    puVar1 = &DAT_0804b4de;
    break;
  case 0x363:
    puVar1 = &DAT_0804b4e2;
    break;
  case 0x364:
    puVar1 = &DAT_0804b4e6;
    break;
  case 0x365:
    puVar1 = &DAT_0804b4ea;
    break;
  case 0x366:
    puVar1 = &DAT_0804b4ee;
    break;
  case 0x367:
    puVar1 = &DAT_0804b4f2;
    break;
  case 0x368:
    puVar1 = &DAT_0804b4f6;
    break;
  case 0x369:
    puVar1 = &DAT_0804b4fa;
    break;
  case 0x36a:
    puVar1 = &DAT_0804b4fe;
    break;
  case 0x36b:
    puVar1 = &DAT_0804b502;
    break;
  case 0x36c:
    puVar1 = &DAT_0804b506;
    break;
  case 0x36d:
    puVar1 = &DAT_0804b50a;
    break;
  case 0x36e:
    puVar1 = &DAT_0804b50e;
    break;
  case 0x36f:
    puVar1 = &DAT_0804b512;
    break;
  case 0x370:
    puVar1 = &DAT_0804b516;
    break;
  case 0x371:
    puVar1 = &DAT_0804b51a;
    break;
  case 0x372:
    puVar1 = &DAT_0804b51e;
    break;
  case 0x373:
    puVar1 = &DAT_0804b522;
    break;
  case 0x374:
    puVar1 = &DAT_0804b526;
    break;
  case 0x375:
    puVar1 = &DAT_0804b52a;
    break;
  case 0x376:
    puVar1 = &DAT_0804b52e;
    break;
  case 0x377:
    puVar1 = &DAT_0804b532;
    break;
  case 0x378:
    puVar1 = &DAT_0804b536;
    break;
  case 0x379:
    puVar1 = &DAT_0804b53a;
    break;
  case 0x37a:
    puVar1 = &DAT_0804b53e;
    break;
  case 0x37b:
    printf("Hmm...");
  case 0x37c:
    puVar1 = &DAT_0804b542;
    break;
  case 0x37d:
    puVar1 = &DAT_0804b546;
    break;
  case 0x37e:
    puVar1 = &DAT_0804b54a;
    break;
  case 0x37f:
    puVar1 = &DAT_0804b54e;
    break;
  case 0x380:
    puVar1 = &DAT_0804b552;
    break;
  case 0x381:
    puVar1 = &DAT_0804b556;
    break;
  case 0x382:
    puVar1 = &DAT_0804b55a;
    break;
  case 899:
    puVar1 = &DAT_0804b55e;
    break;
  case 900:
    puVar1 = &DAT_0804b562;
    break;
  case 0x385:
    puVar1 = &DAT_0804b566;
    break;
  case 0x386:
    puVar1 = &DAT_0804b56a;
    break;
  case 0x387:
    puVar1 = &DAT_0804b56e;
    break;
  case 0x388:
    puVar1 = &DAT_0804b572;
    break;
  case 0x389:
    puVar1 = &DAT_0804b576;
    break;
  case 0x38a:
    puVar1 = &DAT_0804b57a;
    break;
  case 0x38b:
    puVar1 = &DAT_0804b57e;
    break;
  case 0x38c:
    puVar1 = &DAT_0804b582;
    break;
  case 0x38d:
    puVar1 = &DAT_0804b586;
    break;
  case 0x38e:
    puVar1 = &DAT_0804b58a;
    break;
  case 0x38f:
    puVar1 = &DAT_0804b58e;
    break;
  case 0x390:
    puVar1 = &DAT_0804b592;
    break;
  case 0x391:
    puVar1 = &DAT_0804b596;
    break;
  case 0x392:
    puVar1 = &DAT_0804b59a;
    break;
  case 0x393:
    puVar1 = &DAT_0804b59e;
    break;
  case 0x394:
    puVar1 = &DAT_0804b5a2;
    break;
  case 0x395:
    puVar1 = &DAT_0804b5a6;
    break;
  case 0x396:
    puVar1 = &DAT_0804b5aa;
    break;
  case 0x397:
    puVar1 = &DAT_0804b5ae;
    break;
  case 0x398:
    puVar1 = &DAT_0804b5b2;
    break;
  case 0x399:
    puVar1 = &DAT_0804b5b6;
    break;
  case 0x39a:
    puVar1 = &DAT_0804b5ba;
    break;
  case 0x39b:
    puVar1 = &DAT_0804b5be;
    break;
  case 0x39c:
    printf("Hmm...");
  case 0x39d:
    puVar1 = &DAT_0804b5c2;
    break;
  case 0x39e:
    puVar1 = &DAT_0804b5c6;
    break;
  case 0x39f:
    puVar1 = &DAT_0804b5ca;
    break;
  case 0x3a0:
    puVar1 = &DAT_0804b5ce;
    break;
  case 0x3a1:
    puVar1 = &DAT_0804b5d2;
    break;
  case 0x3a2:
    puVar1 = &DAT_0804b5d6;
    break;
  case 0x3a3:
    puVar1 = &DAT_0804b5da;
    break;
  case 0x3a4:
    puVar1 = &DAT_0804b5de;
    break;
  case 0x3a5:
    puVar1 = &DAT_0804b5e2;
    break;
  case 0x3a6:
    puVar1 = &DAT_0804b5e6;
    break;
  case 0x3a7:
    puVar1 = &DAT_0804b5ea;
    break;
  case 0x3a8:
    puVar1 = &DAT_0804b5ee;
    break;
  case 0x3a9:
    puVar1 = &DAT_0804b5f2;
    break;
  case 0x3aa:
    puVar1 = &DAT_0804b5f6;
    break;
  case 0x3ab:
    puVar1 = &DAT_0804b5fa;
    break;
  case 0x3ac:
    puVar1 = &DAT_0804b5fe;
    break;
  case 0x3ad:
    puVar1 = &DAT_0804b602;
    break;
  case 0x3ae:
    puVar1 = &DAT_0804b606;
    break;
  case 0x3af:
    puVar1 = &DAT_0804b60a;
    break;
  case 0x3b0:
    puVar1 = &DAT_0804b60e;
    break;
  case 0x3b1:
    puVar1 = &DAT_0804b612;
    break;
  case 0x3b2:
    puVar1 = &DAT_0804b616;
    break;
  case 0x3b3:
    puVar1 = &DAT_0804b61a;
    break;
  case 0x3b4:
    puVar1 = &DAT_0804b61e;
    break;
  case 0x3b5:
    puVar1 = &DAT_0804b622;
    break;
  case 0x3b6:
    puVar1 = &DAT_0804b626;
    break;
  case 0x3b7:
    puVar1 = &DAT_0804b62a;
    break;
  case 0x3b8:
    puVar1 = &DAT_0804b62e;
    break;
  case 0x3b9:
    puVar1 = &DAT_0804b632;
    break;
  case 0x3ba:
    puVar1 = &DAT_0804b636;
    break;
  case 0x3bb:
    puVar1 = &DAT_0804b63a;
    break;
  case 0x3bc:
    puVar1 = &DAT_0804b63e;
    break;
  case 0x3bd:
    printf("Hmm...");
  case 0x3be:
    puVar1 = &DAT_0804b642;
    break;
  case 0x3bf:
    puVar1 = &DAT_0804b646;
    break;
  case 0x3c0:
    puVar1 = &DAT_0804b64a;
    break;
  case 0x3c1:
    puVar1 = &DAT_0804b64e;
    break;
  case 0x3c2:
    puVar1 = &DAT_0804b652;
    break;
  case 0x3c3:
    puVar1 = &DAT_0804b656;
    break;
  case 0x3c4:
    puVar1 = &DAT_0804b65a;
    break;
  case 0x3c5:
    puVar1 = &DAT_0804b65e;
    break;
  case 0x3c6:
    puVar1 = &DAT_0804b662;
    break;
  case 0x3c7:
    puVar1 = &DAT_0804b666;
    break;
  case 0x3c8:
    puVar1 = &DAT_0804b66a;
    break;
  case 0x3c9:
    puVar1 = &DAT_0804b66e;
    break;
  case 0x3ca:
    puVar1 = &DAT_0804b672;
    break;
  case 0x3cb:
    puVar1 = &DAT_0804b676;
    break;
  case 0x3cc:
    puVar1 = &DAT_0804b67a;
    break;
  case 0x3cd:
    puVar1 = &DAT_0804b67e;
    break;
  case 0x3ce:
    puVar1 = &DAT_0804b682;
    break;
  case 0x3cf:
    puVar1 = &DAT_0804b686;
    break;
  case 0x3d0:
    puVar1 = &DAT_0804b68a;
    break;
  case 0x3d1:
    puVar1 = &DAT_0804b68e;
    break;
  case 0x3d2:
    puVar1 = &DAT_0804b692;
    break;
  case 0x3d3:
    puVar1 = &DAT_0804b696;
    break;
  case 0x3d4:
    puVar1 = &DAT_0804b69a;
    break;
  case 0x3d5:
    puVar1 = &DAT_0804b69e;
    break;
  case 0x3d6:
    puVar1 = &DAT_0804b6a2;
    break;
  case 0x3d7:
    puVar1 = &DAT_0804b6a6;
    break;
  case 0x3d8:
    puVar1 = &DAT_0804b6aa;
    break;
  case 0x3d9:
    puVar1 = &DAT_0804b6ae;
    break;
  case 0x3da:
    puVar1 = &DAT_0804b6b2;
    break;
  case 0x3db:
    puVar1 = &DAT_0804b6b6;
    break;
  case 0x3dc:
    puVar1 = &DAT_0804b6ba;
    break;
  case 0x3dd:
    puVar1 = &DAT_0804b6be;
    break;
  case 0x3de:
    printf("Hmm...");
  case 0x3df:
    puVar1 = &DAT_0804b6c2;
    break;
  case 0x3e0:
    puVar1 = &DAT_0804b6c6;
    break;
  case 0x3e1:
    puVar1 = &DAT_0804b6ca;
    break;
  case 0x3e2:
    puVar1 = &DAT_0804b6ce;
    break;
  case 0x3e3:
    puVar1 = &DAT_0804b6d2;
    break;
  case 0x3e4:
    puVar1 = &DAT_0804b6d6;
    break;
  case 0x3e5:
    puVar1 = &DAT_0804b6da;
    break;
  case 0x3e6:
    puVar1 = &DAT_0804b6de;
    break;
  case 999:
    puVar1 = &DAT_0804b6e2;
    break;
  default:
    puVar1 = &DAT_0804b6e6;
  }
  return puVar1;
}


