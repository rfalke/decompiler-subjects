typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned short    word;
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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




// WARNING: Removing unreachable block (ram,0x00401a2a)
// WARNING: Removing unreachable block (ram,0x0040105b)
// WARNING: Removing unreachable block (ram,0x00401049)
// WARNING: Removing unreachable block (ram,0x00401a12)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(undefined8 param_1)

{
  undefined (*pauVar1) [16];
  uint *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined (*pauVar12) [32];
  undefined (*pauVar13) [32];
  undefined (*pauVar14) [32];
  undefined (*pauVar15) [32];
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined (*pauVar18) [32];
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined (*pauVar24) [32];
  undefined (*pauVar25) [32];
  ulong uVar26;
  undefined in_YMM0 [32];
  undefined auVar27 [32];
  undefined auVar28 [32];
  undefined auVar29 [32];
  undefined auVar30 [16];
  undefined auVar31 [32];
  undefined auVar32 [32];
  undefined auVar33 [32];
  undefined auVar34 [32];
  undefined in_YMM5 [32];
  undefined auVar35 [32];
  undefined auVar36 [16];
  undefined auVar37 [32];
  undefined auVar38 [16];
  undefined auVar39 [32];
  undefined in_YMM9 [32];
  undefined auVar40 [32];
  undefined auVar41 [32];
  undefined auVar42 [16];
  undefined auVar43 [32];
  undefined auVar44 [32];
  
  auVar27 = vpand_avx2(in_YMM0,in_YMM0);
  auVar42 = SUB3216(ascii_offset._0_32_,0);
  puVar2 = (uint *)cpuid(0x80000000);
  uVar9 = puVar2[3];
  if (0x80000005 < *puVar2) {
    lVar23 = cpuid(0x80000006);
    uVar9 = *(uint *)(lVar23 + 0xc) >> 0x10;
    if (uVar9 != 0) {
      uVar9 = uVar9 << 9;
      uVar11 = (ulong)uVar9;
      syscall();
      auVar37 = _lineno_top_init;
      auVar39 = _endian_shuffle_init;
      auVar29 = ram0x00402080;
      auVar40 = _lineno_mid_base;
      auVar41 = _lineno_top_max;
      auVar43 = biascii_offset._0_32_;
      auVar44 = _bascii_offset;
      uVar7 = exit_on_error(SUB328(auVar27,0),1,0x407,uVar9);
      if (uVar7 != uVar11) {
        write_stderr();
        inefficiently_write_as_hex();
        write_stderr();
        inefficiently_write_as_hex();
        write_stderr();
                    // WARNING: Subroutine does not return
        exit(0x49);
      }
      syscall();
      exit_on_error(0x800000,0x600000,0xe);
      auVar30 = _second_phase_constants;
      auVar27 = vmovdqu_avx(_fizzbuzz_intro);
      _io_buffers = vmovdqu_avx(auVar27);
      pauVar12 = (undefined (*) [32])&DAT_0080001e;
      uVar26 = 2;
      uVar7 = 6;
      auVar27 = ZEXT1632(_line_number_init);
      uVar19 = uVar7;
      do {
        do {
          *(undefined8 *)*pauVar12 = 0xa7a7a7542;
          auVar3 = vpaddq_avx(auVar30,SUB3216(auVar27,0));
          auVar36 = SUB3216(auVar37,0);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar38 = SUB3216(auVar39,0);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *(undefined (*) [16])(*pauVar12 + 5) = auVar3;
          puVar16 = (undefined8 *)(*pauVar12 + uVar26 + 6);
          *(undefined *)((long)puVar16 + -1) = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          *puVar16 = 0xa7a7a6946;
          auVar3 = vpaddq_avx(auVar30,auVar3);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *(undefined (*) [16])((long)puVar16 + 5) = auVar3;
          pauVar1 = (undefined (*) [16])((long)puVar16 + uVar26 + 6);
          pauVar1[-1][0xf] = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *pauVar1 = auVar3;
          puVar17 = (undefined4 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar17 + -1) = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          *puVar17 = 0x7a7a6946;
          *(undefined8 *)(puVar17 + 1) = 0xa7a7a7542;
          auVar3 = vpaddq_avx(auVar30,auVar3);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *(undefined (*) [16])((long)puVar17 + 9) = auVar3;
          pauVar1 = (undefined (*) [16])((long)puVar17 + uVar26 + 10);
          pauVar1[-1][0xf] = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *pauVar1 = auVar3;
          puVar16 = (undefined8 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar16 + -1) = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          *puVar16 = 0xa7a7a6946;
          auVar3 = vpaddq_avx(auVar30,auVar3);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *(undefined (*) [16])((long)puVar16 + 5) = auVar3;
          puVar16 = (undefined8 *)((long)puVar16 + uVar26 + 6);
          *(undefined *)((long)puVar16 + -1) = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          *puVar16 = 0xa7a7a7542;
          auVar3 = vpaddq_avx(auVar30,auVar3);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          *(undefined8 *)((long)puVar16 + 5) = 0xa7a7a6946;
          auVar3 = vpaddq_avx(auVar30,auVar3);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar3 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar3);
          *(undefined (*) [16])((long)puVar16 + 10) = auVar3;
          pauVar1 = (undefined (*) [16])((long)puVar16 + uVar26 + 0xb);
          pauVar1[-1][0xf] = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar4 = vpmaxub_avx(auVar36,auVar3);
          auVar3 = vpaddb_avx(auVar42,auVar4);
          auVar38 = vpshufb_avx(auVar3,auVar38);
          auVar3 = vmovdqu_avx(auVar38);
          *pauVar1 = auVar3;
          puVar16 = (undefined8 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar16 + -1) = 10;
          auVar3 = vpaddq_avx(auVar30,auVar4);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          *puVar16 = 0xa7a7a6946;
          pauVar12 = (undefined (*) [32])((long)puVar16 + 5);
          auVar3 = vpaddq_avx(auVar30,auVar3);
          auVar3 = vpmaxub_avx(auVar36,auVar3);
          auVar27 = ZEXT1632(auVar3);
          uVar10 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar10;
        } while (uVar10 != 0);
        uVar7 = (ulong)(uint)((int)uVar19 * 10);
        uVar10 = (int)uVar26 + 1;
        uVar26 = (ulong)uVar10;
        auVar4 = vpcmpeqb_avx(auVar38,auVar38);
        auVar28 = ZEXT1632(auVar4);
        auVar39 = vpsubb_avx2(auVar39,auVar28);
        uVar19 = uVar7;
      } while (uVar10 != 6);
      swap_buffers(SUB168(auVar4,0),SUB168(auVar3,0));
      auVar27 = vpermq_avx2(auVar39,0xee);
      pauVar25 = (undefined (*) [32])(uVar11 + 0xc00000);
      pauVar24 = (undefined (*) [32])(uVar11 + 0xc00ed8);
      uVar19 = 0xffffffffffffffff;
third_phase_per_width_init:
      uVar10 = (uint)uVar26;
      uVar20 = (uVar7 >> 5) * (ulong)(uVar10 * 8 + 0x2f);
      auVar39 = vpxor_avx2(in_YMM9,in_YMM9);
      auVar42 = vpinsrq_avx(SUB3216(auVar39,0),0,0);
      in_YMM9 = vpermq_avx2(ZEXT1632(auVar42),0);
      iVar6 = 0xb - uVar10;
      if (0xb < uVar10 || iVar6 == 0) {
        iVar6 = 1;
      }
      auVar42 = vpxor_avx(SUB3216(auVar28,0),SUB3216(auVar28,0));
      auVar42 = vpinsrq_avx(auVar42,(ulong)(uint)(iVar6 << 3),0);
      auVar39 = vpermq_avx2(ZEXT1632(auVar42),0);
      auVar28 = vpcmpeqb_avx2(in_YMM5,in_YMM5);
      auVar39 = vpsrlq_avx2(auVar28,SUB3216(auVar39,0));
      auVar28 = vpmaxub_avx2(auVar40,auVar39);
      auVar39 = vpermq_avx2(auVar40,0x55);
      auVar39 = vpsubb_avx2(auVar39,auVar40);
      auVar39 = vpaddq_avx2(auVar28,auVar39);
      in_YMM5 = vpmaxub_avx2(auVar40,auVar39);
      pauVar15 = pauVar25;
      auVar39 = auVar29;
      do {
        uVar22 = 0xf6868697ba;
        uVar21 = 0xf686868bbe;
        auVar28 = vpsubb_avx2(auVar44,auVar37);
        auVar28 = vpshufb_avx2(auVar28,auVar27);
        uVar5 = 0xd0;
        iVar6 = 0x14;
        pauVar18 = pauVar25;
        do {
          *(undefined8 *)*pauVar18 = uVar21;
          auVar30 = SUB3216(auVar28,0);
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])(*pauVar18 + 5) = auVar42;
          puVar16 = (undefined8 *)(*pauVar18 + uVar26 + 6);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6cf;
          *puVar16 = uVar22;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 5) = auVar42;
          pauVar1 = (undefined (*) [16])((long)puVar16 + uVar26 + 6);
          pauVar1[-1][0xd] = uVar5;
          *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6cd;
          auVar42 = vmovdqu_avx(auVar30);
          *pauVar1 = auVar42;
          puVar17 = (undefined4 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar17 + -3) = uVar5;
          *(undefined2 *)((long)puVar17 + -2) = 0xf6cc;
          *puVar17 = (int)uVar22;
          *(undefined8 *)(puVar17 + 1) = uVar21;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar17 + 9) = auVar42;
          pauVar1 = (undefined (*) [16])((long)puVar17 + uVar26 + 10);
          pauVar1[-1][0xd] = uVar5;
          *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6ca;
          auVar42 = vmovdqu_avx(auVar30);
          *pauVar1 = auVar42;
          puVar16 = (undefined8 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6c9;
          *puVar16 = uVar22;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 5) = auVar42;
          puVar16 = (undefined8 *)((long)puVar16 + uVar26 + 6);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6c7;
          uVar5 = inc_tens_digit();
          *puVar16 = uVar21;
          *(undefined8 *)((long)puVar16 + 5) = uVar22;
          auVar30 = SUB3216(auVar28,0);
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 10) = auVar42;
          pauVar1 = (undefined (*) [16])((long)puVar16 + uVar26 + 0xb);
          pauVar1[-1][0xd] = uVar5;
          *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6ce;
          auVar42 = vmovdqu_avx(auVar30);
          *pauVar1 = auVar42;
          puVar16 = (undefined8 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6cd;
          *puVar16 = uVar22;
          *(undefined8 *)((long)puVar16 + 5) = uVar21;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 10) = auVar42;
          puVar16 = (undefined8 *)((long)puVar16 + uVar26 + 0xb);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6ca;
          *puVar16 = uVar22;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 5) = auVar42;
          pauVar1 = (undefined (*) [16])((long)puVar16 + uVar26 + 6);
          pauVar1[-1][0xd] = uVar5;
          *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6c8;
          auVar42 = vmovdqu_avx(auVar30);
          *pauVar1 = auVar42;
          puVar17 = (undefined4 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar17 + -3) = uVar5;
          *(undefined2 *)((long)puVar17 + -2) = 0xf6c7;
          uVar5 = inc_tens_digit();
          *puVar17 = (int)uVar22;
          *(undefined8 *)(puVar17 + 1) = uVar21;
          auVar30 = SUB3216(auVar28,0);
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar17 + 9) = auVar42;
          pauVar1 = (undefined (*) [16])((long)puVar17 + uVar26 + 10);
          pauVar1[-1][0xd] = uVar5;
          *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6cf;
          auVar42 = vmovdqu_avx(auVar30);
          *pauVar1 = auVar42;
          puVar16 = (undefined8 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6ce;
          *puVar16 = uVar22;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 5) = auVar42;
          puVar16 = (undefined8 *)((long)puVar16 + uVar26 + 6);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6cc;
          *puVar16 = uVar21;
          *(undefined8 *)((long)puVar16 + 5) = uVar22;
          auVar42 = vmovdqu_avx(auVar30);
          *(undefined (*) [16])((long)puVar16 + 10) = auVar42;
          pauVar1 = (undefined (*) [16])((long)puVar16 + uVar26 + 0xb);
          pauVar1[-1][0xd] = uVar5;
          *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6c9;
          auVar42 = vmovdqu_avx(auVar30);
          *pauVar1 = auVar42;
          puVar16 = (undefined8 *)(*pauVar1 + uVar26 + 1);
          *(undefined *)((long)puVar16 + -3) = uVar5;
          *(undefined2 *)((long)puVar16 + -2) = 0xf6c8;
          *puVar16 = uVar22;
          pauVar18 = (undefined (*) [32])((long)puVar16 + 5);
          uVar5 = inc_tens_digit();
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc00020);
        auVar31 = vmovdqu_avx(*pauVar25);
        *pauVar18 = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[1] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc00060);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc00040));
        pauVar18[2] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[3] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc000a0);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc00080));
        pauVar18[4] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[5] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc000e0);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc000c0));
        pauVar18[6] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[7] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc00120);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc00100));
        pauVar18[8] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[9] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc00160);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc00140));
        pauVar18[10] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[0xb] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc001a0);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc00180));
        pauVar18[0xc] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[0xd] = auVar28;
        auVar28 = *(undefined (*) [32])(uVar11 + 0xc001e0);
        auVar31 = vmovdqu_avx(*(undefined (*) [32])(uVar11 + 0xc001c0));
        pauVar18[0xe] = auVar31;
        auVar28 = vmovdqu_avx(auVar28);
        pauVar18[0xf] = auVar28;
        pauVar18 = pauVar12;
        do {
          uVar8 = (ulong)(uVar9 >> 5);
          if (uVar20 <= uVar9 >> 5) {
            uVar8 = uVar20;
          }
          lVar23 = uVar8 - (((uint)pauVar18 & 0x1ffe00) >> 5);
          uVar20 = uVar20 - lVar23;
          pauVar12 = pauVar18[lVar23];
          auVar28 = vpaddb_avx2(auVar43,in_YMM5);
          pauVar14 = pauVar15;
          do {
            auVar34 = auVar29;
            auVar31 = vmovdqu_avx(*pauVar14);
            auVar29 = vpshufb_avx2(auVar28,auVar31);
            auVar29 = vpsubb_avx2(auVar29,auVar31);
            *pauVar18 = auVar29;
            auVar31 = vmovdqu_avx(pauVar14[1]);
            auVar29 = vpshufb_avx2(auVar28,auVar31);
            auVar29 = vpsubb_avx2(auVar29,auVar31);
            pauVar18[1] = auVar29;
            auVar29 = vpaddq_avx2(in_YMM9,auVar34);
            auVar32 = vmovdqu_avx(pauVar14[2]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[2] = auVar31;
            auVar33 = vpandn_avx2(auVar34,auVar29);
            auVar32 = vmovdqu_avx(pauVar14[3]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[3] = auVar31;
            auVar33 = vpsrlq_avx2(auVar33,0x3f);
            auVar32 = vmovdqu_avx(pauVar14[4]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[4] = auVar31;
            auVar33 = vpaddb_avx2(auVar33,auVar33);
            auVar32 = vmovdqu_avx(pauVar14[5]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[5] = auVar31;
            auVar35 = vpaddq_avx2(in_YMM5,auVar33);
            auVar32 = vmovdqu_avx(pauVar14[6]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[6] = auVar31;
            in_YMM5 = vpmaxub_avx2(auVar40,auVar35);
            auVar31 = vmovdqu_avx(pauVar14[7]);
            auVar28 = vpshufb_avx2(auVar28,auVar31);
            auVar28 = vpsubb_avx2(auVar28,auVar31);
            pauVar18[7] = auVar28;
            auVar28 = vpaddb_avx2(auVar43,in_YMM5);
            auVar32 = vmovdqu_avx(pauVar14[8]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[8] = auVar31;
            pauVar13 = pauVar18[0x10];
            auVar32 = vmovdqu_avx(pauVar14[9]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[9] = auVar31;
            pauVar15 = pauVar14[0x10];
            auVar32 = vmovdqu_avx(pauVar14[10]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[10] = auVar31;
            auVar32 = vmovdqu_avx(pauVar14[0xb]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[0xb] = auVar31;
            auVar32 = vmovdqu_avx(pauVar14[0xc]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[0xc] = auVar31;
            if (pauVar24 <= pauVar15) {
              pauVar15 = (undefined (*) [32])((long)pauVar15 + ((long)pauVar25 - (long)pauVar24));
            }
            auVar32 = vmovdqu_avx(pauVar14[0xd]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[0xd] = auVar31;
            auVar32 = vmovdqu_avx(pauVar14[0xe]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[0xe] = auVar31;
            auVar32 = vmovdqu_avx(pauVar14[0xf]);
            auVar31 = vpshufb_avx2(auVar28,auVar32);
            auVar31 = vpsubb_avx2(auVar31,auVar32);
            pauVar18[0xf] = auVar31;
            pauVar18 = pauVar13;
            pauVar14 = pauVar15;
          } while (pauVar13 < pauVar12);
          if ((uint)-(0xc00000 - (int)pauVar25) <= ((uint)pauVar12 & 0x1fffff)) {
            swap_buffers(SUB328(auVar31,0),SUB328(auVar34,0),SUB328(auVar32,0),SUB328(auVar33,0),
                         SUB328(auVar29,0),SUB328(in_YMM5,0));
          }
          if (uVar20 == 0) {
            if (uVar10 == 0x12) {
              syscall();
              exit_on_error(1,"Buzz\nFizz\n7\n8\nFizz\n",5);
                    // WARNING: Subroutine does not return
              exit(0);
            }
            uVar26 = (ulong)(uVar10 + 1);
            auVar28 = vpcmpeqb_avx2(auVar31,auVar31);
            auVar27 = vpsubb_avx2(auVar27,auVar28);
            uVar7 = uVar7 * 10;
            pauVar24 = pauVar24[10];
            auVar29 = auVar39;
            goto third_phase_per_width_init;
          }
          auVar42 = vpshufd_avx(SUB3216(in_YMM5,0),0xed);
          uVar8 = vpextrq_avx(auVar42,0);
          pauVar18 = pauVar12;
        } while ((uVar8 | 0xffff0000ffff) != uVar19);
        if (uVar19 == 0xffffffffffffffff) {
          uVar8 = vpextrq_avx(SUB3216(auVar37,0),1);
          uVar19 = 0;
          if (~(uVar8 & 0x7fffffffffffffff) != 0) {
            for (; (~(uVar8 & 0x7fffffffffffffff) >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
            }
          }
          auVar37 = vpshufb_avx2(auVar37,*(undefined (*) [32])
                                          (":;<=>?@ABCDEFGHI:;<=>?@ABCDEFGHI" +
                                          (uVar19 & 0xfffffffffffffff8) * 4 + 0x20));
          iVar6 = (int)(uVar8 >> ((byte)(uVar19 & 0xfffffffffffffff8) & 0x3f));
          auVar42 = vpinsrb_avx(SUB3216(in_YMM5,0),iVar6,7);
          auVar42 = vpinsrb_avx(auVar42,iVar6,0xf);
          in_YMM5 = vpermq_avx2(ZEXT1632(auVar42),0x44);
          iVar6 = (iVar6 + 1) * 0x1000000;
          uVar19 = CONCAT44(iVar6,iVar6) | 0xf6ffff00f6ffff;
        }
        else {
          auVar28 = vpsubb_avx2(auVar44,auVar37);
          auVar28 = vpshufb_avx2(in_YMM5,auVar28);
          auVar37 = vpmaxub_avx2(auVar37,auVar28);
          auVar37 = vpminub_avx2(auVar41,auVar37);
          auVar28 = vpsllq_avx2(in_YMM5,8);
          auVar28 = vpsrlq_avx2(auVar28,8);
          in_YMM5 = vpmaxub_avx2(auVar40,auVar28);
          uVar19 = 0xffffffffffffffff;
        }
      } while( true );
    }
  }
  write_stderr(SUB328(auVar27,0),param_1,&cpuid_error_message,0x60,uVar9);
                    // WARNING: Subroutine does not return
  exit(0x3b);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void swap_buffers(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong unaff_RBX;
  long *plVar3;
  
  _iovec_base = unaff_RBX & 0xffffffffffe00000;
  plVar3 = (long *)&iovec_base;
  _DAT_00c00008 = param_3;
  do {
    syscall();
    lVar2 = exit_on_error();
    *plVar3 = *plVar3 + lVar2;
    plVar1 = plVar3 + 1;
    *plVar1 = *plVar1 - lVar2;
  } while (*plVar1 != 0);
  return;
}



int inc_tens_digit(void)

{
  int in_EAX;
  undefined in_YMM2 [32];
  
  if ((char)in_EAX != -0x39) {
    return in_EAX + -1;
  }
  vpermq_avx2(in_YMM2,0x4e);
  return 0xd0;
}



undefined8 write_stderr(void)

{
  syscall();
  return 1;
}



void inefficiently_write_as_hex
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong in_RAX;
  
  do {
    error_write_buffer = (&hexdigits)[in_RAX >> ((byte)param_4 & 0x3f) & 0xf];
    write_stderr(param_1,&error_write_buffer,1);
    param_4 = param_4 + -4;
  } while (-1 < param_4);
  return;
}



void exit_on_error(undefined8 param_1)

{
  long in_RAX;
  
  if (-1 < in_RAX) {
    return;
  }
  write_stderr(param_1,&error_message_part_1,0x17);
  inefficiently_write_as_hex();
  write_stderr();
  inefficiently_write_as_hex();
  write_stderr();
  syscall();
  do {
    invalidInstructionException();
  } while( true );
}



void exit(int __status)

{
  syscall();
  do {
    invalidInstructionException();
  } while( true );
}


