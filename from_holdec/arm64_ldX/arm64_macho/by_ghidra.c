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




undefined8 entry(void)

{
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _full_load_with_ldr(&_buffer,&_high,&_low);
  _dump("ldr q0, buffer","full load with ldr");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _full_load_with_byte_wise_ld1(&_buffer,&_high,&_low);
  _dump("ld1 { v0.16b }, buffer","full load with byte-wise ld1");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _full_load_with_8byte_wise_ld1(&_buffer,&_high,&_low);
  _dump("ld1 { v0.2d }, buffer","full load with 8byte-wise ld1");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _half_load_with_8byte_wise_ld1(&_buffer,&_high,&_low);
  _dump("ld1 { v0.1d }, buffer","half load with 8byte-wise ld1");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _full_load_2_regs_with_byte_wise_ld1(&_buffer,&_high,&_low);
  _dump("ld1 { v0.16b, v1.16b }, buffer","full load 2 regs with byte-wise ld1");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _full_load_4_regs_with_byte_wise_ld1(&_buffer,&_high,&_low);
  _dump("ld1 { v0.16b, v1.16b, v2.16b, v3.16b }, buffer","full load 4 regs with byte-wise ld1");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld1__one_byte_at_index_0(&_buffer,&_high,&_low);
  _dump("ld1 { v0.b}[0], buffer","indexed ld1: one byte at index 0");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld1__one_byte_at_index_3(&_buffer,&_high,&_low);
  _dump("ld1 { v0.b}[3], buffer","indexed ld1: one byte at index 3");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld1__8_bytes_to_low(&_buffer,&_high,&_low);
  _dump("ld1 { v0.d}[0], buffer","indexed ld1: 8 bytes to low");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld1__8_bytes_to_high(&_buffer,&_high,&_low);
  _dump("ld1 { v0.d}[1], buffer","indexed ld1: 8 bytes to high");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld1__repeat_first_byte_half(&_buffer,&_high,&_low);
  _dump("ld1r {v0.8b}, buffer","repeating ld1: repeat first byte half");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld1__repeat_first_byte_full(&_buffer,&_high,&_low);
  _dump("ld1r {v0.16b}, buffer","repeating ld1: repeat first byte full");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld1__load_first_8_bytes_into_low(&_buffer,&_high,&_low);
  _dump("ld1r {v0.1d}, buffer","repeating ld1: load first 8 bytes into low");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld1__repeat_8_bytes_to_high(&_buffer,&_high,&_low);
  _dump("ld1r {v0.2d}, buffer","repeating ld1: repeat 8 bytes to high");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld2_spread_bytes_to_2_regs(&_buffer,&_high,&_low);
  _dump("ld2 {v0.16b, v1.16b}, buffer","ld2 spread bytes to 2 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld2_spread_bytes_to_2_regs__half_(&_buffer,&_high,&_low);
  _dump("ld2 {v0.8b, v1.8b}, buffer","ld2 spread bytes to 2 regs (half)");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld2_spread_8_bytes_items_to_2_regs(&_buffer,&_high,&_low);
  _dump("ld2 {v0.2d, v1.2d}, buffer","ld2 spread 8-bytes-items to 2 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld2__first_2_bytes_to_2_regs(&_buffer,&_high,&_low);
  _dump("ld2 {v0.b, v1.b}[9], buffer","indexed ld2: first 2 bytes to 2 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld2__8_bytes_into_lows(&_buffer,&_high,&_low);
  _dump("ld2 {v0.d, v1.d}[0], buffer","indexed ld2: 8 bytes into lows");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld2__8_bytes_to_highs(&_buffer,&_high,&_low);
  _dump("ld2 {v0.d, v1.d}[1], buffer","indexed ld2: 8 bytes to highs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld2__first_bytes_full(&_buffer,&_high,&_low);
  _dump("ld2r {v0.16b, v1.16b}, buffer","repeating ld2: first bytes full");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld2__2_bytes_half(&_buffer,&_high,&_low);
  _dump("ld2r {v0.4h, v1.4h}, buffer","repeating ld2: 2 bytes half");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld3_spread_bytes_to_3_regs(&_buffer,&_high,&_low);
  _dump("ld3 {v0.16b, v1.16b, v2.16b}, buffer","ld3 spread bytes to 3 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld3_spread_bytes_to_3_regs__half_(&_buffer,&_high,&_low);
  _dump("ld3 {v0.8b, v1.8b, v2.8b}, buffer","ld3 spread bytes to 3 regs (half)");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld3_spread_8_bytes_items_to_3_regs(&_buffer,&_high,&_low);
  _dump("ld3 {v0.2d, v1.2d, v2.2d}, buffer","ld3 spread 8-bytes-items to 3 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld3__first_2_bytes_to_3_regs(&_buffer,&_high,&_low);
  _dump("ld3 {v0.b, v1.b, v2.b}[9], buffer","indexed ld3: first 2 bytes to 3 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld3__8_bytes_into_lows(&_buffer,&_high,&_low);
  _dump("ld3 {v0.d, v1.d, v2.d}[0], buffer","indexed ld3: 8 bytes into lows");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld3__8_bytes_to_highs(&_buffer,&_high,&_low);
  _dump("ld3 {v0.d, v1.d, v2.d}[1], buffer","indexed ld3: 8 bytes to highs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld3__first_bytes_full(&_buffer,&_high,&_low);
  _dump("ld3r {v0.16b, v1.16b, v2.16b}, buffer","repeating ld3: first bytes full");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld3__2_bytes_half(&_buffer,&_high,&_low);
  _dump("ld3r {v0.4h, v1.4h, v2.4h}, buffer","repeating ld3: 2 bytes half");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld4_spread_bytes_to_4_regs(&_buffer,&_high,&_low);
  _dump("ld4 {v0.16b, v1.16b, v2.16b, v3.16b}, buffer","ld4 spread bytes to 4 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld4_spread_bytes_to_4_regs__half_(&_buffer,&_high,&_low);
  _dump("ld4 {v0.8b, v1.8b, v2.8b, v3.8b}, buffer","ld4 spread bytes to 4 regs (half)");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _ld4_spread_8_bytes_items_to_4_regs(&_buffer,&_high,&_low);
  _dump("ld4 {v0.2d, v1.2d, v2.2d, v3.2d}, buffer","ld4 spread 8-bytes-items to 4 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld4__first_2_bytes_to_4_regs(&_buffer,&_high,&_low);
  _dump("ld4 {v0.b, v1.b, v2.b, v3.b}[9], buffer","indexed ld4: first 2 bytes to 4 regs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld4__8_bytes_into_lows(&_buffer,&_high,&_low);
  _dump("ld4 {v0.d, v1.d, v2.d, v3.d}[0], buffer","indexed ld4: 8 bytes into lows");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _indexed_ld4__8_bytes_to_highs(&_buffer,&_high,&_low);
  _dump("ld4 {v0.d, v1.d, v2.d, v3.d}[1], buffer","indexed ld4: 8 bytes to highs");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld4__first_bytes_full(&_buffer,&_high,&_low);
  _dump("ld4r {v0.16b, v1.16b, v2.16b, v3.16b}, buffer","repeating ld4: first bytes full");
  DAT_100008098 = 0xeeeeeeeeeeeeeeee;
  _high = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080a0 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080b8 = 0xeeeeeeeeeeeeeeee;
  _low = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c8 = 0xeeeeeeeeeeeeeeee;
  DAT_1000080c0 = 0xeeeeeeeeeeeeeeee;
  _repeating_ld4__2_bytes_half(&_buffer,&_high,&_low);
  _dump("ld4r {v0.4h, v1.4h, v2.4h, v3.4h}, buffer","repeating ld4: 2 bytes half");
  return 0;
}



void _dump(void)

{
  __stubs::_printf("===== %s === %s\n");
  if ((_high & _low) != 0xffffffffffffffff) {
    __stubs::_printf("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
  }
  if ((DAT_100008098 & DAT_1000080b8) != 0xffffffffffffffff) {
    __stubs::_printf("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
  }
  if ((DAT_1000080a0 & DAT_1000080c0) != 0xffffffffffffffff) {
    __stubs::_printf("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
  }
  if ((DAT_1000080a8 & DAT_1000080c8) != 0xffffffffffffffff) {
    __stubs::_printf("V%d(=Q%d)   (high/low):   0x%016lx 0x%016lx\n");
  }
                    // WARNING: Could not recover jumptable at 0x0001000035d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_putchar)(10);
  return;
}



undefined8 _full_load_with_ldr(undefined (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  undefined auVar1 [16];
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined auVar2 [16];
  undefined in_q2 [16];
  undefined auVar3 [16];
  undefined in_q3 [16];
  undefined auVar4 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  auVar2 = NEON_cmeq(in_q1,in_q1,1);
  auVar3 = NEON_cmeq(in_q2,in_q2,1);
  auVar4 = NEON_cmeq(in_q3,in_q3,1);
  auVar1 = *param_1;
  *param_2 = SUB168(auVar1 >> 0x40,0);
  *param_3 = SUB168(auVar1,0);
  param_2[1] = SUB168(auVar2 >> 0x40,0);
  param_3[1] = SUB168(auVar2,0);
  param_2[2] = SUB168(auVar3 >> 0x40,0);
  param_3[2] = SUB168(auVar3,0);
  param_2[3] = SUB168(auVar4 >> 0x40,0);
  param_3[3] = SUB168(auVar4,0);
  return 0;
}



undefined8 _full_load_with_byte_wise_ld1(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined in_q0 [16];
  undefined uVar18;
  undefined in_q1 [16];
  undefined auVar19 [16];
  undefined in_q2 [16];
  undefined auVar20 [16];
  undefined in_q3 [16];
  undefined auVar21 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  auVar19 = NEON_cmeq(in_q1,in_q1,1);
  auVar20 = NEON_cmeq(in_q2,in_q2,1);
  auVar21 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar13 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *(undefined *)(param_2 + 8) = *puVar1;
  *(undefined *)(param_2 + 9) = uVar12;
  *(undefined *)(param_2 + 10) = uVar13;
  *(undefined *)(param_2 + 0xb) = uVar14;
  *(undefined *)(param_2 + 0xc) = uVar15;
  *(undefined *)(param_2 + 0xd) = uVar16;
  *(undefined *)(param_2 + 0xe) = uVar17;
  *(undefined *)(param_2 + 0xf) = uVar18;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *(long *)(param_2 + 8) = SUB168(auVar19 >> 0x40,0);
  *(long *)(param_3 + 8) = SUB168(auVar19,0);
  *(long *)(param_2 + 0x10) = SUB168(auVar20 >> 0x40,0);
  *(long *)(param_3 + 0x10) = SUB168(auVar20,0);
  *(long *)(param_2 + 0x18) = SUB168(auVar21 >> 0x40,0);
  *(long *)(param_3 + 0x18) = SUB168(auVar21,0);
  return 0;
}



undefined8
_full_load_with_8byte_wise_ld1(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined auVar4 [16];
  undefined in_q2 [16];
  undefined auVar5 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  auVar4 = NEON_cmeq(in_q1,in_q1,1);
  auVar5 = NEON_cmeq(in_q2,in_q2,1);
  auVar6 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = uVar3;
  param_2[1] = SUB168(auVar4 >> 0x40,0);
  param_3[1] = SUB168(auVar4,0);
  param_2[2] = SUB168(auVar5 >> 0x40,0);
  param_3[2] = SUB168(auVar5,0);
  param_2[3] = SUB168(auVar6 >> 0x40,0);
  param_3[3] = SUB168(auVar6,0);
  return 0;
}



undefined8
_half_load_with_8byte_wise_ld1(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = uVar3;
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8 _full_load_2_regs_with_byte_wise_ld1(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined in_q0 [16];
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined in_q1 [16];
  undefined uVar34;
  undefined in_q2 [16];
  undefined auVar35 [16];
  undefined in_q3 [16];
  undefined auVar36 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  auVar35 = NEON_cmeq(in_q2,in_q2,1);
  auVar36 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar13 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar22 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar30 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar31 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar32 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar33 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar34 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *(undefined *)(param_2 + 8) = *puVar1;
  *(undefined *)(param_2 + 9) = uVar12;
  *(undefined *)(param_2 + 10) = uVar13;
  *(undefined *)(param_2 + 0xb) = uVar14;
  *(undefined *)(param_2 + 0xc) = uVar15;
  *(undefined *)(param_2 + 0xd) = uVar16;
  *(undefined *)(param_2 + 0xe) = uVar17;
  *(undefined *)(param_2 + 0xf) = uVar18;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *(undefined *)(param_2 + 0x10) = uVar27;
  *(undefined *)(param_2 + 0x11) = uVar28;
  *(undefined *)(param_2 + 0x12) = uVar29;
  *(undefined *)(param_2 + 0x13) = uVar30;
  *(undefined *)(param_2 + 0x14) = uVar31;
  *(undefined *)(param_2 + 0x15) = uVar32;
  *(undefined *)(param_2 + 0x16) = uVar33;
  *(undefined *)(param_2 + 0x17) = uVar34;
  param_3[8] = uVar19;
  param_3[9] = uVar20;
  param_3[10] = uVar21;
  param_3[0xb] = uVar22;
  param_3[0xc] = uVar23;
  param_3[0xd] = uVar24;
  param_3[0xe] = uVar25;
  param_3[0xf] = uVar26;
  *(long *)(param_2 + 0x10) = SUB168(auVar35 >> 0x40,0);
  *(long *)(param_3 + 0x10) = SUB168(auVar35,0);
  *(long *)(param_2 + 0x18) = SUB168(auVar36 >> 0x40,0);
  *(long *)(param_3 + 0x18) = SUB168(auVar36,0);
  return 0;
}



undefined8 _full_load_4_regs_with_byte_wise_ld1(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined in_q0 [16];
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined in_q1 [16];
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined in_q2 [16];
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar59;
  undefined uVar60;
  undefined uVar61;
  undefined uVar62;
  undefined uVar63;
  undefined uVar64;
  undefined uVar65;
  undefined in_q3 [16];
  undefined uVar66;
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar13 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar22 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar30 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar31 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar32 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar33 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar34 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar35 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar36 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar37 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar38 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar39 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar40 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar41 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar42 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar43 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar44 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar45 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar46 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar47 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar48 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar49 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar50 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar51 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar52 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar53 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar54 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar55 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar56 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar57 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar58 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar59 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar60 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar61 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar62 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar63 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar64 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar65 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar66 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *(undefined *)(param_2 + 8) = *puVar1;
  *(undefined *)(param_2 + 9) = uVar12;
  *(undefined *)(param_2 + 10) = uVar13;
  *(undefined *)(param_2 + 0xb) = uVar14;
  *(undefined *)(param_2 + 0xc) = uVar15;
  *(undefined *)(param_2 + 0xd) = uVar16;
  *(undefined *)(param_2 + 0xe) = uVar17;
  *(undefined *)(param_2 + 0xf) = uVar18;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *(undefined *)(param_2 + 0x10) = uVar27;
  *(undefined *)(param_2 + 0x11) = uVar28;
  *(undefined *)(param_2 + 0x12) = uVar29;
  *(undefined *)(param_2 + 0x13) = uVar30;
  *(undefined *)(param_2 + 0x14) = uVar31;
  *(undefined *)(param_2 + 0x15) = uVar32;
  *(undefined *)(param_2 + 0x16) = uVar33;
  *(undefined *)(param_2 + 0x17) = uVar34;
  param_3[8] = uVar19;
  param_3[9] = uVar20;
  param_3[10] = uVar21;
  param_3[0xb] = uVar22;
  param_3[0xc] = uVar23;
  param_3[0xd] = uVar24;
  param_3[0xe] = uVar25;
  param_3[0xf] = uVar26;
  *(undefined *)(param_2 + 0x18) = uVar43;
  *(undefined *)(param_2 + 0x19) = uVar44;
  *(undefined *)(param_2 + 0x1a) = uVar45;
  *(undefined *)(param_2 + 0x1b) = uVar46;
  *(undefined *)(param_2 + 0x1c) = uVar47;
  *(undefined *)(param_2 + 0x1d) = uVar48;
  *(undefined *)(param_2 + 0x1e) = uVar49;
  *(undefined *)(param_2 + 0x1f) = uVar50;
  param_3[0x10] = uVar35;
  param_3[0x11] = uVar36;
  param_3[0x12] = uVar37;
  param_3[0x13] = uVar38;
  param_3[0x14] = uVar39;
  param_3[0x15] = uVar40;
  param_3[0x16] = uVar41;
  param_3[0x17] = uVar42;
  *(undefined *)(param_2 + 0x20) = uVar59;
  *(undefined *)(param_2 + 0x21) = uVar60;
  *(undefined *)(param_2 + 0x22) = uVar61;
  *(undefined *)(param_2 + 0x23) = uVar62;
  *(undefined *)(param_2 + 0x24) = uVar63;
  *(undefined *)(param_2 + 0x25) = uVar64;
  *(undefined *)(param_2 + 0x26) = uVar65;
  *(undefined *)(param_2 + 0x27) = uVar66;
  param_3[0x18] = uVar51;
  param_3[0x19] = uVar52;
  param_3[0x1a] = uVar53;
  param_3[0x1b] = uVar54;
  param_3[0x1c] = uVar55;
  param_3[0x1d] = uVar56;
  param_3[0x1e] = uVar57;
  param_3[0x1f] = uVar58;
  return 0;
}



undefined8
_indexed_ld1__one_byte_at_index_0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = SUB168(CONCAT151(SUB1615(auVar4 >> 8,0),uVar3),0);
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8
_indexed_ld1__one_byte_at_index_3(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar4;
  undefined in_q0 [16];
  undefined auVar3 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar3 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar3 >> 0x40,0);
  *param_3 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),CONCAT13(uVar4,SUB163(auVar3,0))),0);
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8 _indexed_ld1__8_bytes_to_low(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = uVar3;
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8 _indexed_ld1__8_bytes_to_high(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined in_q0 [16];
  undefined auVar3 [16];
  undefined in_q1 [16];
  undefined auVar4 [16];
  undefined in_q2 [16];
  undefined auVar5 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  
  auVar3 = NEON_cmeq(in_q0,in_q0,1);
  auVar4 = NEON_cmeq(in_q1,in_q1,1);
  auVar5 = NEON_cmeq(in_q2,in_q2,1);
  auVar6 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = SUB168(auVar3,0);
  param_2[1] = SUB168(auVar4 >> 0x40,0);
  param_3[1] = SUB168(auVar4,0);
  param_2[2] = SUB168(auVar5 >> 0x40,0);
  param_3[2] = SUB168(auVar5,0);
  param_2[3] = SUB168(auVar6 >> 0x40,0);
  param_3[3] = SUB168(auVar6,0);
  return 0;
}



undefined8
_repeating_ld1__repeat_first_byte_half(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined uVar1;
  undefined *puVar2;
  long lVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar2 = (undefined *)cRead_8(tmp_ldXn);
  uVar1 = *puVar2;
  lVar3 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar3 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8
_repeating_ld1__repeat_first_byte_full(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined uVar1;
  undefined *puVar2;
  long lVar3;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined auVar4 [16];
  undefined in_q2 [16];
  undefined auVar5 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  auVar4 = NEON_cmeq(in_q1,in_q1,1);
  auVar5 = NEON_cmeq(in_q2,in_q2,1);
  auVar6 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar2 = (undefined *)cRead_8(tmp_ldXn);
  uVar1 = *puVar2;
  lVar3 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar3 + 1);
  *(undefined *)(param_2 + 8) = uVar1;
  *(undefined *)(param_2 + 9) = uVar1;
  *(undefined *)(param_2 + 10) = uVar1;
  *(undefined *)(param_2 + 0xb) = uVar1;
  *(undefined *)(param_2 + 0xc) = uVar1;
  *(undefined *)(param_2 + 0xd) = uVar1;
  *(undefined *)(param_2 + 0xe) = uVar1;
  *(undefined *)(param_2 + 0xf) = uVar1;
  *param_3 = uVar1;
  param_3[1] = uVar1;
  param_3[2] = uVar1;
  param_3[3] = uVar1;
  param_3[4] = uVar1;
  param_3[5] = uVar1;
  param_3[6] = uVar1;
  param_3[7] = uVar1;
  *(long *)(param_2 + 8) = SUB168(auVar4 >> 0x40,0);
  *(long *)(param_3 + 8) = SUB168(auVar4,0);
  *(long *)(param_2 + 0x10) = SUB168(auVar5 >> 0x40,0);
  *(long *)(param_3 + 0x10) = SUB168(auVar5,0);
  *(long *)(param_2 + 0x18) = SUB168(auVar6 >> 0x40,0);
  *(long *)(param_3 + 0x18) = SUB168(auVar6,0);
  return 0;
}



undefined8
_repeating_ld1__load_first_8_bytes_into_low
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar1 = *puVar2;
  lVar3 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar3 + 8);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = uVar1;
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8
_repeating_ld1__repeat_8_bytes_to_high(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined auVar4 [16];
  undefined in_q2 [16];
  undefined auVar5 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  auVar4 = NEON_cmeq(in_q1,in_q1,1);
  auVar5 = NEON_cmeq(in_q2,in_q2,1);
  auVar6 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar2 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar1 = *puVar2;
  lVar3 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar3 + 8);
  *param_2 = uVar1;
  *param_3 = uVar1;
  param_2[1] = SUB168(auVar4 >> 0x40,0);
  param_3[1] = SUB168(auVar4,0);
  param_2[2] = SUB168(auVar5 >> 0x40,0);
  param_3[2] = SUB168(auVar5,0);
  param_2[3] = SUB168(auVar6 >> 0x40,0);
  param_3[3] = SUB168(auVar6,0);
  return 0;
}



undefined8 _ld2_spread_bytes_to_2_regs(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined in_q0 [16];
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined in_q1 [16];
  undefined uVar34;
  undefined in_q2 [16];
  undefined auVar35 [16];
  undefined in_q3 [16];
  undefined auVar36 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  auVar35 = NEON_cmeq(in_q2,in_q2,1);
  auVar36 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar22 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar13 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar30 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar31 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar32 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar33 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar34 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *(undefined *)(param_2 + 8) = *puVar1;
  *(undefined *)(param_2 + 9) = uVar12;
  *(undefined *)(param_2 + 10) = uVar13;
  *(undefined *)(param_2 + 0xb) = uVar14;
  *(undefined *)(param_2 + 0xc) = uVar15;
  *(undefined *)(param_2 + 0xd) = uVar16;
  *(undefined *)(param_2 + 0xe) = uVar17;
  *(undefined *)(param_2 + 0xf) = uVar18;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *(undefined *)(param_2 + 0x10) = uVar27;
  *(undefined *)(param_2 + 0x11) = uVar28;
  *(undefined *)(param_2 + 0x12) = uVar29;
  *(undefined *)(param_2 + 0x13) = uVar30;
  *(undefined *)(param_2 + 0x14) = uVar31;
  *(undefined *)(param_2 + 0x15) = uVar32;
  *(undefined *)(param_2 + 0x16) = uVar33;
  *(undefined *)(param_2 + 0x17) = uVar34;
  param_3[8] = uVar19;
  param_3[9] = uVar20;
  param_3[10] = uVar21;
  param_3[0xb] = uVar22;
  param_3[0xc] = uVar23;
  param_3[0xd] = uVar24;
  param_3[0xe] = uVar25;
  param_3[0xf] = uVar26;
  *(long *)(param_2 + 0x10) = SUB168(auVar35 >> 0x40,0);
  *(long *)(param_3 + 0x10) = SUB168(auVar35,0);
  *(long *)(param_2 + 0x18) = SUB168(auVar36 >> 0x40,0);
  *(long *)(param_3 + 0x18) = SUB168(auVar36,0);
  return 0;
}



undefined8
_ld2_spread_bytes_to_2_regs__half_(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined uVar12;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined in_q1 [16];
  undefined auVar13 [16];
  undefined in_q2 [16];
  undefined auVar21 [16];
  undefined in_q3 [16];
  undefined auVar22 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar13 = NEON_cmeq(in_q1,in_q1,1);
  auVar21 = NEON_cmeq(in_q2,in_q2,1);
  auVar22 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12(
                                                  uVar6,CONCAT11(uVar5,uVar3)))))));
  param_2[1] = SUB168(auVar13 >> 0x40,0);
  param_3[1] = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,
                                                  CONCAT12(uVar15,CONCAT11(uVar14,uVar12)))))));
  param_2[2] = SUB168(auVar21 >> 0x40,0);
  param_3[2] = SUB168(auVar21,0);
  param_2[3] = SUB168(auVar22 >> 0x40,0);
  param_3[3] = SUB168(auVar22,0);
  return 0;
}



undefined8
_ld2_spread_8_bytes_items_to_2_regs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined in_q0 [16];
  undefined8 uVar5;
  undefined in_q1 [16];
  undefined8 uVar6;
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined in_q3 [16];
  undefined auVar8 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar8 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = uVar4;
  param_2[1] = uVar6;
  param_3[1] = uVar5;
  param_2[2] = SUB168(auVar7 >> 0x40,0);
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(auVar8 >> 0x40,0);
  param_3[3] = SUB168(auVar8,0);
  return 0;
}



undefined8
_indexed_ld2__first_2_bytes_to_2_regs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined uVar6;
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined in_q3 [16];
  undefined auVar8 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar8 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(CONCAT610(SUB166(auVar4 >> 0x50,0),CONCAT19(*puVar1,SUB169(auVar4,0))) >> 0x40,0
                   );
  *param_3 = SUB168(auVar4,0);
  param_2[1] = SUB168(CONCAT610(SUB166(auVar5 >> 0x50,0),CONCAT19(uVar6,SUB169(auVar5,0))) >> 0x40,0
                     );
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar7 >> 0x40,0);
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(auVar8 >> 0x40,0);
  param_3[3] = SUB168(auVar8,0);
  return 0;
}



undefined8
_indexed_ld2__8_bytes_into_lows(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined in_q1 [16];
  undefined auVar6 [16];
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined in_q3 [16];
  undefined auVar8 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar6 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar8 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = uVar3;
  param_2[1] = SUB168(auVar6 >> 0x40,0);
  param_3[1] = uVar5;
  param_2[2] = SUB168(auVar7 >> 0x40,0);
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(auVar8 >> 0x40,0);
  param_3[3] = SUB168(auVar8,0);
  return 0;
}



undefined8
_indexed_ld2__8_bytes_to_highs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined in_q3 [16];
  undefined auVar8 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar8 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = SUB168(auVar4,0);
  param_2[1] = uVar6;
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar7 >> 0x40,0);
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(auVar8 >> 0x40,0);
  param_3[3] = SUB168(auVar8,0);
  return 0;
}



undefined8
_repeating_ld2__first_bytes_full(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined uVar1;
  long lVar2;
  undefined *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined auVar5 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  auVar5 = NEON_cmeq(in_q2,in_q2,1);
  auVar6 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar1 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = SUB168(auVar4,0);
  *(undefined *)(param_2 + 2) = uVar1;
  *(undefined *)((long)param_2 + 0x11) = uVar1;
  *(undefined *)((long)param_2 + 0x12) = uVar1;
  *(undefined *)((long)param_2 + 0x13) = uVar1;
  *(undefined *)((long)param_2 + 0x14) = uVar1;
  *(undefined *)((long)param_2 + 0x15) = uVar1;
  *(undefined *)((long)param_2 + 0x16) = uVar1;
  *(undefined *)((long)param_2 + 0x17) = uVar1;
  *(undefined *)(param_3 + 1) = uVar1;
  *(undefined *)((long)param_3 + 9) = uVar1;
  *(undefined *)((long)param_3 + 10) = uVar1;
  *(undefined *)((long)param_3 + 0xb) = uVar1;
  *(undefined *)((long)param_3 + 0xc) = uVar1;
  *(undefined *)((long)param_3 + 0xd) = uVar1;
  *(undefined *)((long)param_3 + 0xe) = uVar1;
  *(undefined *)((long)param_3 + 0xf) = uVar1;
  param_2[2] = SUB168(auVar5 >> 0x40,0);
  param_3[2] = SUB168(auVar5,0);
  param_2[3] = SUB168(auVar6 >> 0x40,0);
  param_3[3] = SUB168(auVar6,0);
  return 0;
}



undefined8 _repeating_ld2__2_bytes_half(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  undefined auVar7 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  auVar7 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 2);
  puVar3 = (undefined2 *)cRead_8(tmp_ldXn);
  uVar1 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 2);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = SUB168(auVar4,0);
  param_2[1] = SUB168(auVar5 >> 0x40,0) & 0xffff000000000000;
  param_3[1] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  param_2[3] = SUB168(auVar7 >> 0x40,0);
  param_3[3] = SUB168(auVar7,0);
  return 0;
}



undefined8 _ld3_spread_bytes_to_3_regs(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined in_q0 [16];
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined in_q1 [16];
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined in_q2 [16];
  undefined uVar50;
  undefined in_q3 [16];
  undefined auVar51 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  auVar51 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar35 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar36 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar37 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar22 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar38 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar39 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar40 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar41 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar42 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar43 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar44 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar13 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar45 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar30 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar46 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar31 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar47 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar32 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar48 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar33 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar49 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar34 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar50 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *(undefined *)(param_2 + 8) = *puVar1;
  *(undefined *)(param_2 + 9) = uVar12;
  *(undefined *)(param_2 + 10) = uVar13;
  *(undefined *)(param_2 + 0xb) = uVar14;
  *(undefined *)(param_2 + 0xc) = uVar15;
  *(undefined *)(param_2 + 0xd) = uVar16;
  *(undefined *)(param_2 + 0xe) = uVar17;
  *(undefined *)(param_2 + 0xf) = uVar18;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *(undefined *)(param_2 + 0x10) = uVar27;
  *(undefined *)(param_2 + 0x11) = uVar28;
  *(undefined *)(param_2 + 0x12) = uVar29;
  *(undefined *)(param_2 + 0x13) = uVar30;
  *(undefined *)(param_2 + 0x14) = uVar31;
  *(undefined *)(param_2 + 0x15) = uVar32;
  *(undefined *)(param_2 + 0x16) = uVar33;
  *(undefined *)(param_2 + 0x17) = uVar34;
  param_3[8] = uVar19;
  param_3[9] = uVar20;
  param_3[10] = uVar21;
  param_3[0xb] = uVar22;
  param_3[0xc] = uVar23;
  param_3[0xd] = uVar24;
  param_3[0xe] = uVar25;
  param_3[0xf] = uVar26;
  *(undefined *)(param_2 + 0x18) = uVar43;
  *(undefined *)(param_2 + 0x19) = uVar44;
  *(undefined *)(param_2 + 0x1a) = uVar45;
  *(undefined *)(param_2 + 0x1b) = uVar46;
  *(undefined *)(param_2 + 0x1c) = uVar47;
  *(undefined *)(param_2 + 0x1d) = uVar48;
  *(undefined *)(param_2 + 0x1e) = uVar49;
  *(undefined *)(param_2 + 0x1f) = uVar50;
  param_3[0x10] = uVar35;
  param_3[0x11] = uVar36;
  param_3[0x12] = uVar37;
  param_3[0x13] = uVar38;
  param_3[0x14] = uVar39;
  param_3[0x15] = uVar40;
  param_3[0x16] = uVar41;
  param_3[0x17] = uVar42;
  *(long *)(param_2 + 0x18) = SUB168(auVar51 >> 0x40,0);
  *(long *)(param_3 + 0x18) = SUB168(auVar51,0);
  return 0;
}



undefined8
_ld3_spread_bytes_to_3_regs__half_(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined uVar12;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined in_q1 [16];
  undefined auVar13 [16];
  undefined uVar21;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined in_q2 [16];
  undefined auVar22 [16];
  undefined in_q3 [16];
  undefined auVar30 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar13 = NEON_cmeq(in_q1,in_q1,1);
  auVar22 = NEON_cmeq(in_q2,in_q2,1);
  auVar30 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12(
                                                  uVar6,CONCAT11(uVar5,uVar3)))))));
  param_2[1] = SUB168(auVar13 >> 0x40,0);
  param_3[1] = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,
                                                  CONCAT12(uVar15,CONCAT11(uVar14,uVar12)))))));
  param_2[2] = SUB168(auVar22 >> 0x40,0);
  param_3[2] = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(uVar25,
                                                  CONCAT12(uVar24,CONCAT11(uVar23,uVar21)))))));
  param_2[3] = SUB168(auVar30 >> 0x40,0);
  param_3[3] = SUB168(auVar30,0);
  return 0;
}



undefined8
_ld3_spread_8_bytes_items_to_3_regs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined in_q0 [16];
  undefined8 uVar5;
  undefined in_q1 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined in_q2 [16];
  undefined8 uVar8;
  undefined in_q3 [16];
  undefined auVar9 [16];
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  auVar9 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar8 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = uVar4;
  param_2[1] = uVar6;
  param_3[1] = uVar5;
  param_2[2] = uVar8;
  param_3[2] = uVar7;
  param_2[3] = SUB168(auVar9 >> 0x40,0);
  param_3[3] = SUB168(auVar9,0);
  return 0;
}



undefined8
_indexed_ld3__first_2_bytes_to_3_regs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined uVar6;
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined uVar8;
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined in_q3 [16];
  undefined auVar9 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar9 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(CONCAT610(SUB166(auVar4 >> 0x50,0),CONCAT19(*puVar1,SUB169(auVar4,0))) >> 0x40,0
                   );
  *param_3 = SUB168(auVar4,0);
  param_2[1] = SUB168(CONCAT610(SUB166(auVar5 >> 0x50,0),CONCAT19(uVar6,SUB169(auVar5,0))) >> 0x40,0
                     );
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(CONCAT610(SUB166(auVar7 >> 0x50,0),CONCAT19(uVar8,SUB169(auVar7,0))) >> 0x40,0
                     );
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(auVar9 >> 0x40,0);
  param_3[3] = SUB168(auVar9,0);
  return 0;
}



undefined8
_indexed_ld3__8_bytes_into_lows(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined in_q1 [16];
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined in_q2 [16];
  undefined auVar8 [16];
  undefined in_q3 [16];
  undefined auVar9 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar6 = NEON_cmeq(in_q1,in_q1,1);
  auVar8 = NEON_cmeq(in_q2,in_q2,1);
  auVar9 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = uVar3;
  param_2[1] = SUB168(auVar6 >> 0x40,0);
  param_3[1] = uVar5;
  param_2[2] = SUB168(auVar8 >> 0x40,0);
  param_3[2] = uVar7;
  param_2[3] = SUB168(auVar9 >> 0x40,0);
  param_3[3] = SUB168(auVar9,0);
  return 0;
}



undefined8
_indexed_ld3__8_bytes_to_highs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined in_q3 [16];
  undefined auVar9 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar9 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar8 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = SUB168(auVar4,0);
  param_2[1] = uVar6;
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = uVar8;
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(auVar9 >> 0x40,0);
  param_3[3] = SUB168(auVar9,0);
  return 0;
}



undefined8
_repeating_ld3__first_bytes_full(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined uVar1;
  long lVar2;
  undefined *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  auVar6 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar1 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = SUB168(auVar4,0);
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  *(undefined *)(param_2 + 3) = uVar1;
  *(undefined *)((long)param_2 + 0x19) = uVar1;
  *(undefined *)((long)param_2 + 0x1a) = uVar1;
  *(undefined *)((long)param_2 + 0x1b) = uVar1;
  *(undefined *)((long)param_2 + 0x1c) = uVar1;
  *(undefined *)((long)param_2 + 0x1d) = uVar1;
  *(undefined *)((long)param_2 + 0x1e) = uVar1;
  *(undefined *)((long)param_2 + 0x1f) = uVar1;
  *(undefined *)(param_3 + 2) = uVar1;
  *(undefined *)((long)param_3 + 0x11) = uVar1;
  *(undefined *)((long)param_3 + 0x12) = uVar1;
  *(undefined *)((long)param_3 + 0x13) = uVar1;
  *(undefined *)((long)param_3 + 0x14) = uVar1;
  *(undefined *)((long)param_3 + 0x15) = uVar1;
  *(undefined *)((long)param_3 + 0x16) = uVar1;
  *(undefined *)((long)param_3 + 0x17) = uVar1;
  param_2[3] = SUB168(auVar6 >> 0x40,0);
  param_3[3] = SUB168(auVar6,0);
  return 0;
}



undefined8 _repeating_ld3__2_bytes_half(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort *puVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined in_q0 [16];
  undefined auVar6 [16];
  undefined in_q1 [16];
  undefined auVar7 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  undefined auVar8 [16];
  undefined2 uVar2;
  
  auVar6 = NEON_cmeq(in_q0,in_q0,1);
  auVar7 = NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  auVar8 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar3 = (ushort *)cRead_8(tmp_ldXn);
  uVar1 = *puVar3;
  lVar4 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar4 + 2);
  cRead(tmp_ldXn);
  lVar4 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar4 + 2);
  puVar5 = (undefined2 *)cRead_8(tmp_ldXn);
  uVar2 = *puVar5;
  lVar4 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar4 + 2);
  *param_2 = SUB168(auVar6 >> 0x40,0);
  *param_3 = SUB168(auVar6,0);
  param_2[1] = SUB168(auVar7 >> 0x40,0);
  param_3[1] = SUB168(auVar7,0);
  param_2[2] = SUB168((ZEXT1016((unkuint10)uVar1 & 0xffff) << 0x30) >> 0x40,0);
  param_3[2] = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
  param_2[3] = SUB168(auVar8 >> 0x40,0);
  param_3[3] = SUB168(auVar8,0);
  return 0;
}



undefined8 _ld4_spread_bytes_to_4_regs(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined in_q0 [16];
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined in_q1 [16];
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined in_q2 [16];
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar59;
  undefined uVar60;
  undefined uVar61;
  undefined uVar62;
  undefined uVar63;
  undefined uVar64;
  undefined uVar65;
  undefined in_q3 [16];
  undefined uVar66;
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar35 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar51 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar36 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar52 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar37 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar53 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar22 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar38 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar54 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar39 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar55 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar40 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar56 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar41 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar57 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar42 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar58 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar43 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar59 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar44 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar60 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar13 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar45 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar61 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar30 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar46 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar62 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar31 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar47 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar63 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar32 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar48 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar64 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar33 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar49 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar65 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar34 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar50 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar66 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *(undefined *)(param_2 + 8) = *puVar1;
  *(undefined *)(param_2 + 9) = uVar12;
  *(undefined *)(param_2 + 10) = uVar13;
  *(undefined *)(param_2 + 0xb) = uVar14;
  *(undefined *)(param_2 + 0xc) = uVar15;
  *(undefined *)(param_2 + 0xd) = uVar16;
  *(undefined *)(param_2 + 0xe) = uVar17;
  *(undefined *)(param_2 + 0xf) = uVar18;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *(undefined *)(param_2 + 0x10) = uVar27;
  *(undefined *)(param_2 + 0x11) = uVar28;
  *(undefined *)(param_2 + 0x12) = uVar29;
  *(undefined *)(param_2 + 0x13) = uVar30;
  *(undefined *)(param_2 + 0x14) = uVar31;
  *(undefined *)(param_2 + 0x15) = uVar32;
  *(undefined *)(param_2 + 0x16) = uVar33;
  *(undefined *)(param_2 + 0x17) = uVar34;
  param_3[8] = uVar19;
  param_3[9] = uVar20;
  param_3[10] = uVar21;
  param_3[0xb] = uVar22;
  param_3[0xc] = uVar23;
  param_3[0xd] = uVar24;
  param_3[0xe] = uVar25;
  param_3[0xf] = uVar26;
  *(undefined *)(param_2 + 0x18) = uVar43;
  *(undefined *)(param_2 + 0x19) = uVar44;
  *(undefined *)(param_2 + 0x1a) = uVar45;
  *(undefined *)(param_2 + 0x1b) = uVar46;
  *(undefined *)(param_2 + 0x1c) = uVar47;
  *(undefined *)(param_2 + 0x1d) = uVar48;
  *(undefined *)(param_2 + 0x1e) = uVar49;
  *(undefined *)(param_2 + 0x1f) = uVar50;
  param_3[0x10] = uVar35;
  param_3[0x11] = uVar36;
  param_3[0x12] = uVar37;
  param_3[0x13] = uVar38;
  param_3[0x14] = uVar39;
  param_3[0x15] = uVar40;
  param_3[0x16] = uVar41;
  param_3[0x17] = uVar42;
  *(undefined *)(param_2 + 0x20) = uVar59;
  *(undefined *)(param_2 + 0x21) = uVar60;
  *(undefined *)(param_2 + 0x22) = uVar61;
  *(undefined *)(param_2 + 0x23) = uVar62;
  *(undefined *)(param_2 + 0x24) = uVar63;
  *(undefined *)(param_2 + 0x25) = uVar64;
  *(undefined *)(param_2 + 0x26) = uVar65;
  *(undefined *)(param_2 + 0x27) = uVar66;
  param_3[0x18] = uVar51;
  param_3[0x19] = uVar52;
  param_3[0x1a] = uVar53;
  param_3[0x1b] = uVar54;
  param_3[0x1c] = uVar55;
  param_3[0x1d] = uVar56;
  param_3[0x1e] = uVar57;
  param_3[0x1f] = uVar58;
  return 0;
}



undefined8
_ld4_spread_bytes_to_4_regs__half_(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined uVar12;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined in_q1 [16];
  undefined auVar13 [16];
  undefined uVar21;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined in_q2 [16];
  undefined auVar22 [16];
  undefined uVar30;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined in_q3 [16];
  undefined auVar31 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar13 = NEON_cmeq(in_q1,in_q1,1);
  auVar22 = NEON_cmeq(in_q2,in_q2,1);
  auVar31 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar12 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar21 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar30 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar14 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar23 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar32 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar15 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar24 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar33 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar16 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar25 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar34 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar17 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar26 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar35 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar18 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar27 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar36 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar19 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar28 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar37 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar11 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar20 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar29 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  uVar38 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12(
                                                  uVar6,CONCAT11(uVar5,uVar3)))))));
  param_2[1] = SUB168(auVar13 >> 0x40,0);
  param_3[1] = CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,
                                                  CONCAT12(uVar15,CONCAT11(uVar14,uVar12)))))));
  param_2[2] = SUB168(auVar22 >> 0x40,0);
  param_3[2] = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(uVar25,
                                                  CONCAT12(uVar24,CONCAT11(uVar23,uVar21)))))));
  param_2[3] = SUB168(auVar31 >> 0x40,0);
  param_3[3] = CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(uVar34,
                                                  CONCAT12(uVar33,CONCAT11(uVar32,uVar30)))))));
  return 0;
}



undefined8
_ld4_spread_8_bytes_items_to_4_regs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined in_q0 [16];
  undefined8 uVar5;
  undefined in_q1 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined in_q2 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined in_q3 [16];
  undefined8 uVar10;
  
  NEON_cmeq(in_q0,in_q0,1);
  NEON_cmeq(in_q1,in_q1,1);
  NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar4 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar8 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar10 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = uVar4;
  param_2[1] = uVar6;
  param_3[1] = uVar5;
  param_2[2] = uVar8;
  param_3[2] = uVar7;
  param_2[3] = uVar10;
  param_3[3] = uVar9;
  return 0;
}



undefined8
_indexed_ld4__first_2_bytes_to_4_regs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined uVar6;
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined uVar8;
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined uVar10;
  undefined in_q3 [16];
  undefined auVar9 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar9 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar8 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar10 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(CONCAT610(SUB166(auVar4 >> 0x50,0),CONCAT19(*puVar1,SUB169(auVar4,0))) >> 0x40,0
                   );
  *param_3 = SUB168(auVar4,0);
  param_2[1] = SUB168(CONCAT610(SUB166(auVar5 >> 0x50,0),CONCAT19(uVar6,SUB169(auVar5,0))) >> 0x40,0
                     );
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(CONCAT610(SUB166(auVar7 >> 0x50,0),CONCAT19(uVar8,SUB169(auVar7,0))) >> 0x40,0
                     );
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = SUB168(CONCAT610(SUB166(auVar9 >> 0x50,0),CONCAT19(uVar10,SUB169(auVar9,0))) >> 0x40,
                      0);
  param_3[3] = SUB168(auVar9,0);
  return 0;
}



undefined8
_indexed_ld4__8_bytes_into_lows(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined in_q1 [16];
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined in_q2 [16];
  undefined auVar8 [16];
  undefined8 uVar9;
  undefined in_q3 [16];
  undefined auVar10 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar6 = NEON_cmeq(in_q1,in_q1,1);
  auVar8 = NEON_cmeq(in_q2,in_q2,1);
  auVar10 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar5 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar7 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar9 = *puVar1;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = uVar3;
  param_2[1] = SUB168(auVar6 >> 0x40,0);
  param_3[1] = uVar5;
  param_2[2] = SUB168(auVar8 >> 0x40,0);
  param_3[2] = uVar7;
  param_2[3] = SUB168(auVar10 >> 0x40,0);
  param_3[3] = uVar9;
  return 0;
}



undefined8
_indexed_ld4__8_bytes_to_highs(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined in_q2 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined in_q3 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar7 = NEON_cmeq(in_q2,in_q2,1);
  auVar9 = NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar1 = (undefined8 *)cRead_8(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar6 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar8 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  puVar3 = (undefined8 *)cRead_8(tmp_ldXn);
  uVar10 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 8);
  *param_2 = *puVar1;
  *param_3 = SUB168(auVar4,0);
  param_2[1] = uVar6;
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = uVar8;
  param_3[2] = SUB168(auVar7,0);
  param_2[3] = uVar10;
  param_3[3] = SUB168(auVar9,0);
  return 0;
}



undefined8
_repeating_ld4__first_bytes_full(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined uVar1;
  long lVar2;
  undefined *puVar3;
  undefined in_q0 [16];
  undefined auVar4 [16];
  undefined in_q1 [16];
  undefined auVar5 [16];
  undefined in_q2 [16];
  undefined auVar6 [16];
  undefined in_q3 [16];
  
  auVar4 = NEON_cmeq(in_q0,in_q0,1);
  auVar5 = NEON_cmeq(in_q1,in_q1,1);
  auVar6 = NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  cRead(tmp_ldXn);
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  puVar3 = (undefined *)cRead_8(tmp_ldXn);
  uVar1 = *puVar3;
  lVar2 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar2 + 1);
  *param_2 = SUB168(auVar4 >> 0x40,0);
  *param_3 = SUB168(auVar4,0);
  param_2[1] = SUB168(auVar5 >> 0x40,0);
  param_3[1] = SUB168(auVar5,0);
  param_2[2] = SUB168(auVar6 >> 0x40,0);
  param_3[2] = SUB168(auVar6,0);
  *(undefined *)(param_2 + 4) = uVar1;
  *(undefined *)((long)param_2 + 0x21) = uVar1;
  *(undefined *)((long)param_2 + 0x22) = uVar1;
  *(undefined *)((long)param_2 + 0x23) = uVar1;
  *(undefined *)((long)param_2 + 0x24) = uVar1;
  *(undefined *)((long)param_2 + 0x25) = uVar1;
  *(undefined *)((long)param_2 + 0x26) = uVar1;
  *(undefined *)((long)param_2 + 0x27) = uVar1;
  *(undefined *)(param_3 + 3) = uVar1;
  *(undefined *)((long)param_3 + 0x19) = uVar1;
  *(undefined *)((long)param_3 + 0x1a) = uVar1;
  *(undefined *)((long)param_3 + 0x1b) = uVar1;
  *(undefined *)((long)param_3 + 0x1c) = uVar1;
  *(undefined *)((long)param_3 + 0x1d) = uVar1;
  *(undefined *)((long)param_3 + 0x1e) = uVar1;
  *(undefined *)((long)param_3 + 0x1f) = uVar1;
  return 0;
}



undefined8 _repeating_ld4__2_bytes_half(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort *puVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined in_q0 [16];
  undefined auVar7 [16];
  undefined in_q1 [16];
  undefined auVar8 [16];
  undefined in_q2 [16];
  undefined auVar9 [16];
  undefined in_q3 [16];
  undefined2 uVar2;
  undefined2 uVar3;
  
  auVar7 = NEON_cmeq(in_q0,in_q0,1);
  auVar8 = NEON_cmeq(in_q1,in_q1,1);
  auVar9 = NEON_cmeq(in_q2,in_q2,1);
  NEON_cmeq(in_q3,in_q3,1);
  cWrite_8(tmp_ldXn,param_1);
  puVar4 = (ushort *)cRead_8(tmp_ldXn);
  uVar1 = *puVar4;
  lVar5 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar5 + 2);
  puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
  uVar2 = *puVar6;
  lVar5 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar5 + 2);
  cRead(tmp_ldXn);
  lVar5 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar5 + 2);
  puVar6 = (undefined2 *)cRead_8(tmp_ldXn);
  uVar3 = *puVar6;
  lVar5 = cRead_8(tmp_ldXn);
  cWrite_8(tmp_ldXn,lVar5 + 2);
  *param_2 = SUB168(auVar7 >> 0x40,0);
  *param_3 = SUB168(auVar7,0);
  param_2[1] = SUB168(auVar8 >> 0x40,0);
  param_3[1] = SUB168(auVar8,0);
  param_2[2] = SUB168(auVar9 >> 0x40,0);
  param_3[2] = SUB168(auVar9,0);
  param_2[3] = SUB168((ZEXT1016(CONCAT82(SUB168((ZEXT1016((unkuint10)uVar1 & 0xffff) << 0x30) >>
                                                0x40,0),uVar2)) << 0x30) >> 0x40,0);
  param_3[3] = CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3)));
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


