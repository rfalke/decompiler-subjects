typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct build_tool_version build_tool_version, *Pbuild_tool_version;

struct build_tool_version {
    dword tool;
    dword version;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off;
    dword rebase_size;
    dword bind_off;
    dword bind_size;
    dword weak_bind_off;
    dword weak_bind_size;
    dword lazy_bind_off;
    dword lazy_bind_size;
    dword export_off;
    dword export_size;
};

typedef struct build_version_command build_version_command, *Pbuild_version_command;

struct build_version_command {
    dword cmd;
    dword cmdsize;
    dword platform;
    dword minos;
    dword sdk;
    dword ntools;
    struct build_tool_version build_tool_version[][1];
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct entry_point_command entry_point_command, *Pentry_point_command;

struct entry_point_command {
    dword cmd;
    dword cmdsize;
    qword entryoff;
    qword stacksize;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _full_write_with_str(&_buffer);
  _dump("str q0, buffer","full write with str");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _full_store_with_byte_wise_st1(&_buffer);
  _dump("st1 { v0.16b }, buffer","full store with byte-wise st1");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _full_store_with_8byte_wise_st1(&_buffer);
  _dump("st1 { v0.2d }, buffer","full store with 8byte-wise st1");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _half_store_with_8byte_wise_st1(&_buffer);
  _dump("st1 { v0.1d }, buffer","half store with 8byte-wise st1");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _full_store_2_regs_with_byte_wise_st1(&_buffer);
  _dump("st1 { v0.16b, v1.16b }, buffer","full store 2 regs with byte-wise st1");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _full_store_4_regs_with_byte_wise_st1(&_buffer);
  _dump("st1 { v0.16b, v1.16b, v2.16b, v3.16b }, buffer","full store 4 regs with byte-wise st1");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st1__one_byte_from_index_0(&_buffer);
  _dump("st1 { v0.b}[0], buffer","indexed st1: one byte from index 0");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st1__one_byte_from_index_3(&_buffer);
  _dump("st1 { v0.b}[3], buffer","indexed st1: one byte from index 3");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st1__8_bytes_from_low(&_buffer);
  _dump("st1 { v0.d}[0], buffer","indexed st1: 8 bytes from low");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st1__8_bytes_from_high(&_buffer);
  _dump("st1 { v0.d}[1], buffer","indexed st1: 8 bytes from high");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_bytes_from_2_regs(&_buffer);
  _dump("st2 {v0.16b, v1.16b}, buffer","write interleaved bytes from 2 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_bytes_from_2_regs__half_(&_buffer);
  _dump("st2 {v0.8b, v1.8b}, buffer","write interleaved bytes from 2 regs (half)");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_8_bytes_from_2_regs(&_buffer);
  _dump("st2 {v0.2d, v1.2d}, buffer","write interleaved 8-bytes from 2 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st2__write_2_bytes_from_2_regs(&_buffer);
  _dump("st2 {v0.b, v1.b}[9], buffer","indexed st2: write 2 bytes from 2 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st2__8_bytes_from_lows(&_buffer);
  _dump("st2 {v0.d, v1.d}[0], buffer","indexed st2: 8 bytes from lows");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st2__8_bytes_from_highs(&_buffer);
  _dump("st2 {v0.d, v1.d}[1], buffer","indexed st2: 8 bytes from highs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_bytes_from_3_regs(&_buffer);
  _dump("st3 {v0.16b, v1.16b, v2.16b}, buffer","write interleaved bytes from 3 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_bytes_from_3_regs__half_(&_buffer);
  _dump("st3 {v0.8b, v1.8b, v2.8b}, buffer","write interleaved bytes from 3 regs (half)");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_8_bytes_from_3_regs(&_buffer);
  _dump("st3 {v0.2d, v1.2d, v2.2d}, buffer","write interleaved 8-bytes from 3 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st3__write_3_bytes_from_3_regs(&_buffer);
  _dump("st3 {v0.b, v1.b, v2.b}[9], buffer","indexed st3: write 3 bytes from 3 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st3__8_bytes_from_lows(&_buffer);
  _dump("st3 {v0.d, v1.d, v2.d}[0], buffer","indexed st3: 8 bytes from lows");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st3__8_bytes_from_highs(&_buffer);
  _dump("st3 {v0.d, v1.d, v2.d}[1], buffer","indexed st3: 8 bytes from highs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_bytes_from_4_regs(&_buffer);
  _dump("st4 {v0.16b, v1.16b, v2.16b, v3.16b}, buffer","write interleaved bytes from 4 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_bytes_from_4_regs__half_(&_buffer);
  _dump("st4 {v0.8b, v1.8b, v2.8b, v3.8b}, buffer","write interleaved bytes from 4 regs (half)");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _write_interleaved_8_bytes_from_4_regs(&_buffer);
  _dump("st4 {v0.2d, v1.2d, v2.2d, v3.2d}, buffer","write interleaved 8-bytes from 4 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st4__write_4_bytes_from_4_regs(&_buffer);
  _dump("st4 {v0.b, v1.b, v2.b, v3.b}[9], buffer","indexed st4: write 4 bytes from 4 regs");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st4__8_bytes_from_lows(&_buffer);
  _dump("st4 {v0.d, v1.d, v2.d, v3.d}[0], buffer","indexed st4: 8 bytes from lows");
  uRam0000000100008068 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008060 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008078 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008070 = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008048 = 0xeeeeeeeeeeeeeeee;
  __buffer = 0xeeeeeeeeeeeeeeee;
  uRam0000000100008058 = 0xeeeeeeeeeeeeeeee;
  _DAT_100008050 = 0xeeeeeeeeeeeeeeee;
  _indexed_st4__8_bytes_from_highs(&_buffer);
  _dump("st4 {v0.d, v1.d, v2.d, v3.d}[1], buffer","indexed st4: 8 bytes from highs");
  return 0;
}



int _dump(void)

{
  int iVar1;
  
  __stubs::_printf("===== %s === %s\n");
  __stubs::_puts("memory (rev):");
  __stubs::_printf("  [%d] ");
  _print_word(8);
  __stubs::_putchar(0x20);
  _print_word(0);
  __stubs::_putchar(10);
  __stubs::_printf("  [%d] ");
  _print_word(0x18);
  __stubs::_putchar(0x20);
  _print_word(0x10);
  __stubs::_putchar(10);
  __stubs::_printf("  [%d] ");
  _print_word(0x28);
  __stubs::_putchar(0x20);
  _print_word(0x20);
  __stubs::_putchar(10);
  __stubs::_printf("  [%d] ");
  _print_word(0x38);
  __stubs::_putchar(0x20);
  _print_word(0x30);
  __stubs::_putchar(10);
  iVar1 = __stubs::_putchar(10);
  return iVar1;
}



int _print_word(void)

{
  int iVar1;
  
  __stubs::_printf("0x");
  __stubs::_printf("%02x");
  __stubs::_printf("%02x");
  __stubs::_printf("%02x");
  __stubs::_printf("%02x");
  __stubs::_printf("%02x");
  __stubs::_printf("%02x");
  __stubs::_printf("%02x");
  iVar1 = __stubs::_printf("%02x");
  return iVar1;
}



undefined8 _full_write_with_str(undefined8 *param_1)

{
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  param_1[1] = 0x1f1e1d1c1b1a1918;
  *param_1 = 0x1f1e1d1c13121110;
  return 0;
}



undefined8 _full_store_with_byte_wise_st1(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x18;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _full_store_with_8byte_wise_st1(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f1e1d1c13121110;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f1e1d1c1b1a1918;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _half_store_with_8byte_wise_st1(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f1e1d1c13121110;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _full_store_2_regs_with_byte_wise_st1(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x18;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x28;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _full_store_4_regs_with_byte_wise_st1(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x18;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x28;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x31;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x32;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x33;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x38;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x39;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x40;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x41;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x42;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x43;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x48;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x49;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _indexed_st1__one_byte_from_index_0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _indexed_st1__one_byte_from_index_3(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _indexed_st1__8_bytes_from_low(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f1e1d1c13121110;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st1__8_bytes_from_high(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f1e1d1c1b1a1918;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _write_interleaved_bytes_from_2_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x18;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x28;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _write_interleaved_bytes_from_2_regs__half_(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _write_interleaved_8_bytes_from_2_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  puVar1[1] = 0x11;
  puVar1[2] = 0x12;
  puVar1[3] = 0x13;
  puVar1[4] = 0x1c;
  puVar1[5] = 0x1d;
  puVar1[6] = 0x1e;
  puVar1[7] = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  puVar1[1] = 0x21;
  puVar1[2] = 0x22;
  puVar1[3] = 0x23;
  puVar1[4] = 0x2c;
  puVar1[5] = 0x2d;
  puVar1[6] = 0x2e;
  puVar1[7] = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x18;
  *(undefined *)(lVar2 + 9) = 0x19;
  *(undefined *)(lVar2 + 10) = 0x1a;
  *(undefined *)(lVar2 + 0xb) = 0x1b;
  *(undefined *)(lVar2 + 0xc) = 0x1c;
  *(undefined *)(lVar2 + 0xd) = 0x1d;
  *(undefined *)(lVar2 + 0xe) = 0x1e;
  *(undefined *)(lVar2 + 0xf) = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x28;
  *(undefined *)(lVar2 + 9) = 0x29;
  *(undefined *)(lVar2 + 10) = 0x2a;
  *(undefined *)(lVar2 + 0xb) = 0x2b;
  *(undefined *)(lVar2 + 0xc) = 0x2c;
  *(undefined *)(lVar2 + 0xd) = 0x2d;
  *(undefined *)(lVar2 + 0xe) = 0x2e;
  *(undefined *)(lVar2 + 0xf) = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st2__write_2_bytes_from_2_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _indexed_st2__8_bytes_from_lows(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  puVar1[1] = 0x11;
  puVar1[2] = 0x12;
  puVar1[3] = 0x13;
  puVar1[4] = 0x1c;
  puVar1[5] = 0x1d;
  puVar1[6] = 0x1e;
  puVar1[7] = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar3 = 0x2f2e2d2c23222120;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st2__8_bytes_from_highs(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  lVar1 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar1 + 8) = 0x18;
  *(undefined *)(lVar1 + 9) = 0x19;
  *(undefined *)(lVar1 + 10) = 0x1a;
  *(undefined *)(lVar1 + 0xb) = 0x1b;
  *(undefined *)(lVar1 + 0xc) = 0x1c;
  *(undefined *)(lVar1 + 0xd) = 0x1d;
  *(undefined *)(lVar1 + 0xe) = 0x1e;
  *(undefined *)(lVar1 + 0xf) = 0x1f;
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar2 = (long)(CONCAT18(0x2f,0x2e2d2c2b2a29282f) >> 8);
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  return 0;
}



undefined8 _write_interleaved_bytes_from_3_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x31;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x32;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x33;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x18;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x28;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x38;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x39;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _write_interleaved_bytes_from_3_regs__half_(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x31;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x32;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x33;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _write_interleaved_8_bytes_from_3_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  puVar1[1] = 0x11;
  puVar1[2] = 0x12;
  puVar1[3] = 0x13;
  puVar1[4] = 0x1c;
  puVar1[5] = 0x1d;
  puVar1[6] = 0x1e;
  puVar1[7] = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  puVar1[1] = 0x21;
  puVar1[2] = 0x22;
  puVar1[3] = 0x23;
  puVar1[4] = 0x2c;
  puVar1[5] = 0x2d;
  puVar1[6] = 0x2e;
  puVar1[7] = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  puVar1[1] = 0x31;
  puVar1[2] = 0x32;
  puVar1[3] = 0x33;
  puVar1[4] = 0x3c;
  puVar1[5] = 0x3d;
  puVar1[6] = 0x3e;
  puVar1[7] = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x18;
  *(undefined *)(lVar2 + 9) = 0x19;
  *(undefined *)(lVar2 + 10) = 0x1a;
  *(undefined *)(lVar2 + 0xb) = 0x1b;
  *(undefined *)(lVar2 + 0xc) = 0x1c;
  *(undefined *)(lVar2 + 0xd) = 0x1d;
  *(undefined *)(lVar2 + 0xe) = 0x1e;
  *(undefined *)(lVar2 + 0xf) = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x28;
  *(undefined *)(lVar2 + 9) = 0x29;
  *(undefined *)(lVar2 + 10) = 0x2a;
  *(undefined *)(lVar2 + 0xb) = 0x2b;
  *(undefined *)(lVar2 + 0xc) = 0x2c;
  *(undefined *)(lVar2 + 0xd) = 0x2d;
  *(undefined *)(lVar2 + 0xe) = 0x2e;
  *(undefined *)(lVar2 + 0xf) = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x38;
  *(undefined *)(lVar2 + 9) = 0x39;
  *(undefined *)(lVar2 + 10) = 0x3a;
  *(undefined *)(lVar2 + 0xb) = 0x3b;
  *(undefined *)(lVar2 + 0xc) = 0x3c;
  *(undefined *)(lVar2 + 0xd) = 0x3d;
  *(undefined *)(lVar2 + 0xe) = 0x3e;
  *(undefined *)(lVar2 + 0xf) = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st3__write_3_bytes_from_3_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x39;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _indexed_st3__8_bytes_from_lows(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  puVar1[1] = 0x11;
  puVar1[2] = 0x12;
  puVar1[3] = 0x13;
  puVar1[4] = 0x1c;
  puVar1[5] = 0x1d;
  puVar1[6] = 0x1e;
  puVar1[7] = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar3 = 0x2f2e2d2c23222120;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar3 = 0x3f3e3d3c33323130;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st3__8_bytes_from_highs(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  lVar1 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar1 + 8) = 0x18;
  *(undefined *)(lVar1 + 9) = 0x19;
  *(undefined *)(lVar1 + 10) = 0x1a;
  *(undefined *)(lVar1 + 0xb) = 0x1b;
  *(undefined *)(lVar1 + 0xc) = 0x1c;
  *(undefined *)(lVar1 + 0xd) = 0x1d;
  *(undefined *)(lVar1 + 0xe) = 0x1e;
  *(undefined *)(lVar1 + 0xf) = 0x1f;
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar2 = (long)(CONCAT18(0x2f,0x2e2d2c2b2a29282f) >> 8);
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar2 = (long)(CONCAT18(0x3f,0x3e3d3c3b3a39383f) >> 8);
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  return 0;
}



undefined8 _write_interleaved_bytes_from_4_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x40;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x31;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x41;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x32;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x42;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x33;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x43;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x18;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x28;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x38;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x48;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x39;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x49;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4a;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4b;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _write_interleaved_bytes_from_4_regs__half_(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x40;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x11;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x21;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x31;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x41;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x12;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x22;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x32;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x42;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x13;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x23;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x33;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x43;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4c;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4d;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4e;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _write_interleaved_8_bytes_from_4_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  puVar1[1] = 0x11;
  puVar1[2] = 0x12;
  puVar1[3] = 0x13;
  puVar1[4] = 0x1c;
  puVar1[5] = 0x1d;
  puVar1[6] = 0x1e;
  puVar1[7] = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x20;
  puVar1[1] = 0x21;
  puVar1[2] = 0x22;
  puVar1[3] = 0x23;
  puVar1[4] = 0x2c;
  puVar1[5] = 0x2d;
  puVar1[6] = 0x2e;
  puVar1[7] = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x30;
  puVar1[1] = 0x31;
  puVar1[2] = 0x32;
  puVar1[3] = 0x33;
  puVar1[4] = 0x3c;
  puVar1[5] = 0x3d;
  puVar1[6] = 0x3e;
  puVar1[7] = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x40;
  puVar1[1] = 0x41;
  puVar1[2] = 0x42;
  puVar1[3] = 0x43;
  puVar1[4] = 0x4c;
  puVar1[5] = 0x4d;
  puVar1[6] = 0x4e;
  puVar1[7] = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x18;
  *(undefined *)(lVar2 + 9) = 0x19;
  *(undefined *)(lVar2 + 10) = 0x1a;
  *(undefined *)(lVar2 + 0xb) = 0x1b;
  *(undefined *)(lVar2 + 0xc) = 0x1c;
  *(undefined *)(lVar2 + 0xd) = 0x1d;
  *(undefined *)(lVar2 + 0xe) = 0x1e;
  *(undefined *)(lVar2 + 0xf) = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x28;
  *(undefined *)(lVar2 + 9) = 0x29;
  *(undefined *)(lVar2 + 10) = 0x2a;
  *(undefined *)(lVar2 + 0xb) = 0x2b;
  *(undefined *)(lVar2 + 0xc) = 0x2c;
  *(undefined *)(lVar2 + 0xd) = 0x2d;
  *(undefined *)(lVar2 + 0xe) = 0x2e;
  *(undefined *)(lVar2 + 0xf) = 0x2f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x38;
  *(undefined *)(lVar2 + 9) = 0x39;
  *(undefined *)(lVar2 + 10) = 0x3a;
  *(undefined *)(lVar2 + 0xb) = 0x3b;
  *(undefined *)(lVar2 + 0xc) = 0x3c;
  *(undefined *)(lVar2 + 0xd) = 0x3d;
  *(undefined *)(lVar2 + 0xe) = 0x3e;
  *(undefined *)(lVar2 + 0xf) = 0x3f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  lVar2 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar2 + 8) = 0x48;
  *(undefined *)(lVar2 + 9) = 0x49;
  *(undefined *)(lVar2 + 10) = 0x4a;
  *(undefined *)(lVar2 + 0xb) = 0x4b;
  *(undefined *)(lVar2 + 0xc) = 0x4c;
  *(undefined *)(lVar2 + 0xd) = 0x4d;
  *(undefined *)(lVar2 + 0xe) = 0x4e;
  *(undefined *)(lVar2 + 0xf) = 0x4f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st4__write_4_bytes_from_4_regs(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x19;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x29;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x39;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x49;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  return 0;
}



undefined8 _indexed_st4__8_bytes_from_lows(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  *puVar1 = 0x10;
  puVar1[1] = 0x11;
  puVar1[2] = 0x12;
  puVar1[3] = 0x13;
  puVar1[4] = 0x1c;
  puVar1[5] = 0x1d;
  puVar1[6] = 0x1e;
  puVar1[7] = 0x1f;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar3 = 0x2f2e2d2c23222120;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar3 = 0x3f3e3d3c33323130;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar3 = 0x4f4e4d4c43424140;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  return 0;
}



undefined8 _indexed_st4__8_bytes_from_highs(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  lVar1 = cRead_8(tmp_ldXn);
  *(undefined *)(lVar1 + 8) = 0x18;
  *(undefined *)(lVar1 + 9) = 0x19;
  *(undefined *)(lVar1 + 10) = 0x1a;
  *(undefined *)(lVar1 + 0xb) = 0x1b;
  *(undefined *)(lVar1 + 0xc) = 0x1c;
  *(undefined *)(lVar1 + 0xd) = 0x1d;
  *(undefined *)(lVar1 + 0xe) = 0x1e;
  *(undefined *)(lVar1 + 0xf) = 0x1f;
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar2 = (long)(CONCAT18(0x2f,0x2e2d2c2b2a29282f) >> 8);
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar2 = (long)(CONCAT18(0x3f,0x3e3d3c3b3a39383f) >> 8);
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  *puVar2 = (long)(CONCAT18(0x4f,0x4e4d4c4b4a49484f) >> 8);
  lVar1 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar1 + 8);
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stubs::_printf(char *param_1,...)

{
  int iVar1;
  
  iVar1 = (*(code *)__la_symbol_ptr::_printf)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stubs::_putchar(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)__la_symbol_ptr::_putchar)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stubs::_puts(char *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)__la_symbol_ptr::_puts)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stub_helper::_printf(char *param_1,...)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100004000. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0x4000,0x100004000);
  iVar1 = (*UNRECOVERED_JUMPTABLE)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stub_helper::_putchar(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100004000. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0x4000,0x100004000);
  iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __stub_helper::_puts(char *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100004000. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0x4000,0x100004000);
  iVar1 = (*UNRECOVERED_JUMPTABLE)((int)param_1);
  return iVar1;
}


