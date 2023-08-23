typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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

void processEntry entry(void)

{
  undefined (*pauVar1) [16];
  undefined4 *puVar2;
  uint *puVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  ulong uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 in_RDI;
  int iVar12;
  undefined in_YMM0 [32];
  undefined auVar13 [32];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [32];
  undefined auVar17 [16];
  
  auVar13 = vpand_avx2(in_YMM0,in_YMM0);
  auVar17 = SUB3216(ascii_offset._0_32_,0);
  auVar14 = SUB3216(_lineno_top_init,0);
  puVar3 = (uint *)cpuid(0x80000000);
  uVar9 = puVar3[3];
  if (0x80000005 < *puVar3) {
    lVar4 = cpuid(0x80000006);
    uVar9 = *(uint *)(lVar4 + 0xc) >> 0x10;
    if (uVar9 != 0) {
      syscall();
      auVar16 = _endian_shuffle_init;
      uVar8 = exit_on_error(auVar13._0_8_,1,0x407,uVar9 << 9);
      if (uVar8 == uVar9 << 9) {
        syscall();
        exit_on_error(0x800000,0x600000,0xe);
        auVar7 = _second_phase_constants;
        auVar13 = vmovdqu_avx(_fizzbuzz_intro);
        _io_buffers = vmovdqu_avx(auVar13);
        puVar11 = &DAT_0080001e;
        uVar8 = 2;
        iVar10 = 6;
        auVar13 = ZEXT1632(_line_number_init);
        iVar12 = iVar10;
        do {
          do {
            *puVar11 = 0xa7a7a7542;
            auVar5 = vpaddq_avx(auVar7,auVar13._0_16_);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar15 = auVar16._0_16_;
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *(undefined (*) [16])((long)puVar11 + 5) = auVar5;
            puVar11 = (undefined8 *)((long)puVar11 + uVar8 + 6);
            *(undefined *)((long)puVar11 + -1) = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            *puVar11 = 0xa7a7a6946;
            auVar5 = vpaddq_avx(auVar7,auVar5);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *(undefined (*) [16])((long)puVar11 + 5) = auVar5;
            pauVar1 = (undefined (*) [16])((long)puVar11 + uVar8 + 6);
            pauVar1[-1][0xf] = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *pauVar1 = auVar5;
            puVar2 = (undefined4 *)(*pauVar1 + uVar8 + 1);
            *(undefined *)((long)puVar2 + -1) = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            *puVar2 = 0x7a7a6946;
            *(undefined8 *)(puVar2 + 1) = 0xa7a7a7542;
            auVar5 = vpaddq_avx(auVar7,auVar5);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *(undefined (*) [16])((long)puVar2 + 9) = auVar5;
            pauVar1 = (undefined (*) [16])((long)puVar2 + uVar8 + 10);
            pauVar1[-1][0xf] = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *pauVar1 = auVar5;
            puVar11 = (undefined8 *)(*pauVar1 + uVar8 + 1);
            *(undefined *)((long)puVar11 + -1) = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            *puVar11 = 0xa7a7a6946;
            auVar5 = vpaddq_avx(auVar7,auVar5);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *(undefined (*) [16])((long)puVar11 + 5) = auVar5;
            puVar11 = (undefined8 *)((long)puVar11 + uVar8 + 6);
            *(undefined *)((long)puVar11 + -1) = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            *puVar11 = 0xa7a7a7542;
            auVar5 = vpaddq_avx(auVar7,auVar5);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            *(undefined8 *)((long)puVar11 + 5) = 0xa7a7a6946;
            auVar5 = vpaddq_avx(auVar7,auVar5);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar5 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar5);
            *(undefined (*) [16])((long)puVar11 + 10) = auVar5;
            pauVar1 = (undefined (*) [16])((long)puVar11 + uVar8 + 0xb);
            pauVar1[-1][0xf] = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar6 = vpmaxub_avx(auVar14,auVar5);
            auVar5 = vpaddb_avx(auVar17,auVar6);
            auVar15 = vpshufb_avx(auVar5,auVar15);
            auVar5 = vmovdqu_avx(auVar15);
            *pauVar1 = auVar5;
            puVar11 = (undefined8 *)(*pauVar1 + uVar8 + 1);
            *(undefined *)((long)puVar11 + -1) = 10;
            auVar5 = vpaddq_avx(auVar7,auVar6);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            *puVar11 = 0xa7a7a6946;
            puVar11 = (undefined8 *)((long)puVar11 + 5);
            auVar5 = vpaddq_avx(auVar7,auVar5);
            auVar5 = vpmaxub_avx(auVar14,auVar5);
            auVar13 = ZEXT1632(auVar5);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar10 = iVar12 * 10;
          uVar9 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar9;
          auVar5 = vpcmpeqb_avx(auVar15,auVar15);
          auVar16 = vpsubb_avx2(auVar16,ZEXT1632(auVar5));
          iVar12 = iVar10;
        } while (uVar9 != 6);
        swap_buffers();
        third_phase_init();
        return;
      }
      write_stderr();
      inefficiently_write_as_hex();
      write_stderr();
      inefficiently_write_as_hex();
      write_stderr();
                    // WARNING: Subroutine does not return
      exit(0x49);
    }
  }
  write_stderr(in_RDI,&cpuid_error_message,0x60,uVar9);
                    // WARNING: Subroutine does not return
  exit(0x3b);
}



void swap_buffers(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong unaff_RBX;
  long *plVar3;
  
  iovec_base = unaff_RBX & 0xffffffffffe00000;
  plVar3 = (long *)&iovec_base;
  DAT_00c00008 = param_3;
  do {
    syscall();
    lVar2 = exit_on_error();
    *plVar3 = *plVar3 + lVar2;
    plVar1 = plVar3 + 1;
    *plVar1 = *plVar1 - lVar2;
  } while (*plVar1 != 0);
  return;
}



void third_phase_init(void)

{
  undefined (*pauVar1) [16];
  undefined auVar2 [16];
  uint uVar3;
  undefined uVar4;
  int iVar5;
  ulong uVar6;
  undefined (*unaff_RBX) [32];
  undefined (*pauVar7) [32];
  undefined (*pauVar8) [32];
  undefined (*pauVar9) [32];
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined (*pauVar12) [32];
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined (*pauVar18) [32];
  ulong unaff_R13;
  undefined (*pauVar19) [32];
  ulong unaff_R14;
  ulong unaff_R15;
  undefined in_YMM0 [32];
  undefined auVar20 [32];
  undefined extraout_var [24];
  undefined auVar21 [16];
  undefined auVar22 [32];
  undefined in_YMM5 [32];
  undefined auVar23 [32];
  undefined in_YMM6 [32];
  undefined auVar24 [32];
  undefined in_YMM8 [32];
  undefined auVar25 [32];
  undefined in_YMM9 [32];
  undefined auVar26 [32];
  undefined in_YMM10 [32];
  undefined in_YMM11 [32];
  undefined in_YMM12 [32];
  undefined in_YMM14 [32];
  undefined in_YMM15 [32];
  
  auVar25 = vpermq_avx2(in_YMM8,0xee);
  pauVar19 = (undefined (*) [32])(unaff_R13 + 0xc00000);
  pauVar18 = (undefined (*) [32])(unaff_R13 + 0xc00ed8);
  uVar13 = 0xffffffffffffffff;
third_phase_per_width_init:
  uVar3 = (uint)unaff_R14;
  uVar14 = (unaff_R15 >> 5) * (ulong)(uVar3 * 8 + 0x2f);
  auVar26 = vpxor_avx2(in_YMM9,in_YMM9);
  auVar2 = vpinsrq_avx(auVar26._0_16_,0,0);
  in_YMM9 = vpermq_avx2(ZEXT1632(auVar2),0);
  iVar5 = 0xb - uVar3;
  if (0xb < uVar3 || iVar5 == 0) {
    iVar5 = 1;
  }
  auVar2 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
  auVar2 = vpinsrq_avx(auVar2,(ulong)(uint)(iVar5 << 3),0);
  auVar26 = vpermq_avx2(ZEXT1632(auVar2),0);
  auVar23 = vpcmpeqb_avx2(in_YMM5,in_YMM5);
  auVar26 = vpsrlq_avx2(auVar23,auVar26._0_16_);
  auVar23 = vpmaxub_avx2(in_YMM11,auVar26);
  auVar26 = vpermq_avx2(in_YMM11,0x55);
  auVar26 = vpsubb_avx2(auVar26,in_YMM11);
  auVar26 = vpaddq_avx2(auVar23,auVar26);
  in_YMM5 = vpmaxub_avx2(in_YMM11,auVar26);
  pauVar9 = pauVar19;
  auVar26 = in_YMM10;
  do {
    uVar16 = 0xf6868697ba;
    uVar15 = 0xf686868bbe;
    auVar23 = vpsubb_avx2(in_YMM15,in_YMM6);
    auVar23 = vpshufb_avx2(auVar23,auVar25);
    uVar4 = 0xd0;
    iVar5 = 0x14;
    pauVar12 = pauVar19;
    do {
      *(undefined8 *)*pauVar12 = uVar15;
      auVar21 = auVar23._0_16_;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])(*pauVar12 + 5) = auVar2;
      puVar10 = (undefined8 *)(*pauVar12 + unaff_R14 + 6);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6cf;
      *puVar10 = uVar16;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 6);
      pauVar1[-1][0xd] = uVar4;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6cd;
      auVar2 = vmovdqu_avx(auVar21);
      *pauVar1 = auVar2;
      puVar11 = (undefined4 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar11 + -3) = uVar4;
      *(undefined2 *)((long)puVar11 + -2) = 0xf6cc;
      *puVar11 = (int)uVar16;
      *(undefined8 *)(puVar11 + 1) = uVar15;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar11 + 9) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar11 + unaff_R14 + 10);
      pauVar1[-1][0xd] = uVar4;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6ca;
      auVar2 = vmovdqu_avx(auVar21);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6c9;
      *puVar10 = uVar16;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      puVar10 = (undefined8 *)((long)puVar10 + unaff_R14 + 6);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6c7;
      uVar4 = inc_tens_digit();
      *puVar10 = uVar15;
      *(undefined8 *)((long)puVar10 + 5) = uVar16;
      auVar21 = auVar23._0_16_;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 10) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 0xb);
      pauVar1[-1][0xd] = uVar4;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6ce;
      auVar2 = vmovdqu_avx(auVar21);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6cd;
      *puVar10 = uVar16;
      *(undefined8 *)((long)puVar10 + 5) = uVar15;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 10) = auVar2;
      puVar10 = (undefined8 *)((long)puVar10 + unaff_R14 + 0xb);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6ca;
      *puVar10 = uVar16;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 6);
      pauVar1[-1][0xd] = uVar4;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6c8;
      auVar2 = vmovdqu_avx(auVar21);
      *pauVar1 = auVar2;
      puVar11 = (undefined4 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar11 + -3) = uVar4;
      *(undefined2 *)((long)puVar11 + -2) = 0xf6c7;
      uVar4 = inc_tens_digit();
      *puVar11 = (int)uVar16;
      *(undefined8 *)(puVar11 + 1) = uVar15;
      auVar21 = auVar23._0_16_;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar11 + 9) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar11 + unaff_R14 + 10);
      pauVar1[-1][0xd] = uVar4;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6cf;
      auVar2 = vmovdqu_avx(auVar21);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6ce;
      *puVar10 = uVar16;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      puVar10 = (undefined8 *)((long)puVar10 + unaff_R14 + 6);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6cc;
      *puVar10 = uVar15;
      *(undefined8 *)((long)puVar10 + 5) = uVar16;
      auVar2 = vmovdqu_avx(auVar21);
      *(undefined (*) [16])((long)puVar10 + 10) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 0xb);
      pauVar1[-1][0xd] = uVar4;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6c9;
      auVar2 = vmovdqu_avx(auVar21);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar4;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6c8;
      *puVar10 = uVar16;
      pauVar12 = (undefined (*) [32])((long)puVar10 + 5);
      uVar4 = inc_tens_digit();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc00020);
    auVar24 = vmovdqu_avx(*pauVar19);
    *pauVar12 = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[1] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc00060);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc00040));
    pauVar12[2] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[3] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc000a0);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc00080));
    pauVar12[4] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[5] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc000e0);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc000c0));
    pauVar12[6] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[7] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc00120);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc00100));
    pauVar12[8] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[9] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc00160);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc00140));
    pauVar12[10] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[0xb] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc001a0);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc00180));
    pauVar12[0xc] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[0xd] = auVar23;
    auVar23 = *(undefined (*) [32])(unaff_R13 + 0xc001e0);
    auVar24 = vmovdqu_avx(*(undefined (*) [32])(unaff_R13 + 0xc001c0));
    pauVar12[0xe] = auVar24;
    auVar23 = vmovdqu_avx(auVar23);
    pauVar12[0xf] = auVar23;
    pauVar12 = unaff_RBX;
    do {
      uVar6 = unaff_R13 >> 5;
      if (uVar14 <= unaff_R13 >> 5) {
        uVar6 = uVar14;
      }
      lVar17 = uVar6 - (((uint)pauVar12 & 0x1ffe00) >> 5);
      uVar14 = uVar14 - lVar17;
      unaff_RBX = pauVar12[lVar17];
      auVar24 = vpaddb_avx2(in_YMM14,in_YMM5);
      pauVar8 = pauVar9;
      auVar23 = in_YMM10;
      do {
        auVar22 = vmovdqu_avx(*pauVar8);
        auVar20 = vpshufb_avx2(auVar24,auVar22);
        auVar20 = vpsubb_avx2(auVar20,auVar22);
        *pauVar12 = auVar20;
        auVar22 = vmovdqu_avx(pauVar8[1]);
        auVar20 = vpshufb_avx2(auVar24,auVar22);
        auVar20 = vpsubb_avx2(auVar20,auVar22);
        pauVar12[1] = auVar20;
        in_YMM10 = vpaddq_avx2(in_YMM9,auVar23);
        auVar22 = vmovdqu_avx(pauVar8[2]);
        auVar20 = vpshufb_avx2(auVar24,auVar22);
        auVar20 = vpsubb_avx2(auVar20,auVar22);
        pauVar12[2] = auVar20;
        auVar22 = vpandn_avx2(auVar23,in_YMM10);
        auVar20 = vmovdqu_avx(pauVar8[3]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[3] = auVar23;
        auVar22 = vpsrlq_avx2(auVar22,0x3f);
        auVar20 = vmovdqu_avx(pauVar8[4]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[4] = auVar23;
        auVar22 = vpaddb_avx2(auVar22,auVar22);
        auVar20 = vmovdqu_avx(pauVar8[5]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[5] = auVar23;
        auVar22 = vpaddq_avx2(in_YMM5,auVar22);
        auVar20 = vmovdqu_avx(pauVar8[6]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[6] = auVar23;
        in_YMM5 = vpmaxub_avx2(in_YMM11,auVar22);
        auVar20 = vmovdqu_avx(pauVar8[7]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[7] = auVar23;
        auVar24 = vpaddb_avx2(in_YMM14,in_YMM5);
        auVar20 = vmovdqu_avx(pauVar8[8]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[8] = auVar23;
        pauVar7 = pauVar12[0x10];
        auVar20 = vmovdqu_avx(pauVar8[9]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[9] = auVar23;
        pauVar9 = pauVar8[0x10];
        auVar20 = vmovdqu_avx(pauVar8[10]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[10] = auVar23;
        auVar20 = vmovdqu_avx(pauVar8[0xb]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[0xb] = auVar23;
        auVar20 = vmovdqu_avx(pauVar8[0xc]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[0xc] = auVar23;
        if (pauVar18 <= pauVar9) {
          pauVar9 = (undefined (*) [32])((long)pauVar9 + ((long)pauVar19 - (long)pauVar18));
        }
        auVar20 = vmovdqu_avx(pauVar8[0xd]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[0xd] = auVar23;
        auVar20 = vmovdqu_avx(pauVar8[0xe]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar23 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[0xe] = auVar23;
        auVar20 = vmovdqu_avx(pauVar8[0xf]);
        auVar23 = vpshufb_avx2(auVar24,auVar20);
        auVar20 = vpsubb_avx2(auVar23,auVar20);
        pauVar12[0xf] = auVar20;
        pauVar12 = pauVar7;
        pauVar8 = pauVar9;
        auVar23 = in_YMM10;
      } while (pauVar7 < unaff_RBX);
      if ((uint)-(0xc00000 - (int)pauVar19) <= ((uint)unaff_RBX & 0x1fffff)) {
        auVar20._0_8_ = swap_buffers();
        auVar20._8_24_ = extraout_var;
      }
      if (uVar14 == 0) {
        if (uVar3 == 0x12) {
          syscall();
          exit_on_error(1,"Buzz\nFizz\n7\n8\nFizz\n",5);
                    // WARNING: Subroutine does not return
          exit(0);
        }
        unaff_R14 = (ulong)(uVar3 + 1);
        in_YMM0 = vpcmpeqb_avx2(auVar20,auVar20);
        auVar25 = vpsubb_avx2(auVar25,in_YMM0);
        unaff_R15 = unaff_R15 * 10;
        pauVar18 = pauVar18[10];
        in_YMM10 = auVar26;
        goto third_phase_per_width_init;
      }
      auVar2 = vpshufd_avx(in_YMM5._0_16_,0xed);
      uVar6 = vpextrq_avx(auVar2,0);
      pauVar12 = unaff_RBX;
    } while ((uVar6 | 0xffff0000ffff) != uVar13);
    if (uVar13 == 0xffffffffffffffff) {
      uVar6 = vpextrq_avx(in_YMM6._0_16_,1);
      uVar13 = 0;
      if (~(uVar6 & 0x7fffffffffffffff) != 0) {
        for (; (~(uVar6 & 0x7fffffffffffffff) >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
        }
      }
      in_YMM6 = vpshufb_avx2(in_YMM6,*(undefined (*) [32])
                                      (":;<=>?@ABCDEFGHI:;<=>?@ABCDEFGHI" +
                                      (uVar13 & 0xfffffffffffffff8) * 4 + 0x20));
      iVar5 = (int)(uVar6 >> ((byte)(uVar13 & 0xfffffffffffffff8) & 0x3f));
      auVar2 = vpinsrb_avx(in_YMM5._0_16_,iVar5,7);
      auVar2 = vpinsrb_avx(auVar2,iVar5,0xf);
      in_YMM5 = vpermq_avx2(ZEXT1632(auVar2),0x44);
      iVar5 = (iVar5 + 1) * 0x1000000;
      uVar13 = CONCAT44(iVar5,iVar5) | 0xf6ffff00f6ffff;
    }
    else {
      auVar23 = vpsubb_avx2(in_YMM15,in_YMM6);
      auVar23 = vpshufb_avx2(in_YMM5,auVar23);
      auVar23 = vpmaxub_avx2(in_YMM6,auVar23);
      in_YMM6 = vpminub_avx2(in_YMM12,auVar23);
      auVar23 = vpsllq_avx2(in_YMM5,8);
      auVar23 = vpsrlq_avx2(auVar23,8);
      in_YMM5 = vpmaxub_avx2(in_YMM11,auVar23);
      uVar13 = 0xffffffffffffffff;
    }
  } while( true );
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



void FUN_004013b1(undefined (*param_1) [32])

{
  undefined (*pauVar1) [16];
  undefined auVar2 [16];
  undefined in_AL;
  undefined uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined (*unaff_RBX) [32];
  undefined (*pauVar7) [32];
  undefined (*pauVar8) [32];
  undefined (*unaff_RBP) [32];
  undefined (*pauVar9) [32];
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong in_R8;
  ulong in_R9;
  undefined8 in_R10;
  undefined8 in_R11;
  long lVar12;
  undefined (*unaff_R12) [32];
  undefined (*unaff_R13) [32];
  uint uVar13;
  ulong unaff_R14;
  ulong unaff_R15;
  undefined auVar14 [32];
  undefined auVar15 [32];
  undefined extraout_var [24];
  undefined auVar16 [16];
  undefined in_YMM2 [32];
  undefined auVar17 [32];
  undefined in_YMM4 [32];
  undefined in_YMM5 [32];
  undefined in_YMM6 [32];
  undefined auVar18 [32];
  undefined in_YMM8 [32];
  undefined in_YMM9 [32];
  undefined in_YMM10 [32];
  undefined in_YMM11 [32];
  undefined in_YMM12 [32];
  undefined in_YMM14 [32];
  undefined in_YMM15 [32];
  
  do {
    iVar5 = 0x14;
    do {
      *(undefined8 *)*param_1 = in_R10;
      auVar16 = in_YMM2._0_16_;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])(*param_1 + 5) = auVar2;
      puVar10 = (undefined8 *)(*param_1 + unaff_R14 + 6);
      *(undefined *)((long)puVar10 + -3) = in_AL;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6cf;
      *puVar10 = in_R11;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 6);
      pauVar1[-1][0xd] = in_AL;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6cd;
      auVar2 = vmovdqu_avx(auVar16);
      *pauVar1 = auVar2;
      puVar11 = (undefined4 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar11 + -3) = in_AL;
      *(undefined2 *)((long)puVar11 + -2) = 0xf6cc;
      *puVar11 = (int)in_R11;
      *(undefined8 *)(puVar11 + 1) = in_R10;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar11 + 9) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar11 + unaff_R14 + 10);
      pauVar1[-1][0xd] = in_AL;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6ca;
      auVar2 = vmovdqu_avx(auVar16);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = in_AL;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6c9;
      *puVar10 = in_R11;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      puVar10 = (undefined8 *)((long)puVar10 + unaff_R14 + 6);
      *(undefined *)((long)puVar10 + -3) = in_AL;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6c7;
      uVar3 = inc_tens_digit();
      *puVar10 = in_R10;
      *(undefined8 *)((long)puVar10 + 5) = in_R11;
      auVar16 = in_YMM2._0_16_;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 10) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 0xb);
      pauVar1[-1][0xd] = uVar3;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6ce;
      auVar2 = vmovdqu_avx(auVar16);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar3;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6cd;
      *puVar10 = in_R11;
      *(undefined8 *)((long)puVar10 + 5) = in_R10;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 10) = auVar2;
      puVar10 = (undefined8 *)((long)puVar10 + unaff_R14 + 0xb);
      *(undefined *)((long)puVar10 + -3) = uVar3;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6ca;
      *puVar10 = in_R11;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 6);
      pauVar1[-1][0xd] = uVar3;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6c8;
      auVar2 = vmovdqu_avx(auVar16);
      *pauVar1 = auVar2;
      puVar11 = (undefined4 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar11 + -3) = uVar3;
      *(undefined2 *)((long)puVar11 + -2) = 0xf6c7;
      uVar3 = inc_tens_digit();
      *puVar11 = (int)in_R11;
      *(undefined8 *)(puVar11 + 1) = in_R10;
      auVar16 = in_YMM2._0_16_;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar11 + 9) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar11 + unaff_R14 + 10);
      pauVar1[-1][0xd] = uVar3;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6cf;
      auVar2 = vmovdqu_avx(auVar16);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar3;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6ce;
      *puVar10 = in_R11;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 5) = auVar2;
      puVar10 = (undefined8 *)((long)puVar10 + unaff_R14 + 6);
      *(undefined *)((long)puVar10 + -3) = uVar3;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6cc;
      *puVar10 = in_R10;
      *(undefined8 *)((long)puVar10 + 5) = in_R11;
      auVar2 = vmovdqu_avx(auVar16);
      *(undefined (*) [16])((long)puVar10 + 10) = auVar2;
      pauVar1 = (undefined (*) [16])((long)puVar10 + unaff_R14 + 0xb);
      pauVar1[-1][0xd] = uVar3;
      *(undefined2 *)(pauVar1[-1] + 0xe) = 0xf6c9;
      auVar2 = vmovdqu_avx(auVar16);
      *pauVar1 = auVar2;
      puVar10 = (undefined8 *)(*pauVar1 + unaff_R14 + 1);
      *(undefined *)((long)puVar10 + -3) = uVar3;
      *(undefined2 *)((long)puVar10 + -2) = 0xf6c8;
      *puVar10 = in_R11;
      param_1 = (undefined (*) [32])((long)puVar10 + 5);
      in_AL = inc_tens_digit();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    auVar15 = unaff_R13[1];
    auVar18 = vmovdqu_avx(*unaff_R13);
    *param_1 = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[1] = auVar15;
    auVar15 = unaff_R13[3];
    auVar18 = vmovdqu_avx(unaff_R13[2]);
    param_1[2] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[3] = auVar15;
    auVar15 = unaff_R13[5];
    auVar18 = vmovdqu_avx(unaff_R13[4]);
    param_1[4] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[5] = auVar15;
    auVar15 = unaff_R13[7];
    auVar18 = vmovdqu_avx(unaff_R13[6]);
    param_1[6] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[7] = auVar15;
    auVar15 = unaff_R13[9];
    auVar18 = vmovdqu_avx(unaff_R13[8]);
    param_1[8] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[9] = auVar15;
    auVar15 = unaff_R13[0xb];
    auVar18 = vmovdqu_avx(unaff_R13[10]);
    param_1[10] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[0xb] = auVar15;
    auVar15 = unaff_R13[0xd];
    auVar18 = vmovdqu_avx(unaff_R13[0xc]);
    param_1[0xc] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[0xd] = auVar15;
    auVar15 = unaff_R13[0xf];
    auVar18 = vmovdqu_avx(unaff_R13[0xe]);
    param_1[0xe] = auVar18;
    auVar15 = vmovdqu_avx(auVar15);
    param_1[0xf] = auVar15;
    pauVar7 = unaff_RBX;
    do {
      uVar4 = (ulong)unaff_R13[-0x60000] >> 5;
      if (in_R9 <= (ulong)unaff_R13[-0x60000] >> 5) {
        uVar4 = in_R9;
      }
      lVar12 = uVar4 - (((uint)pauVar7 & 0x1ffe00) >> 5);
      in_R9 = in_R9 - lVar12;
      unaff_RBX = pauVar7[lVar12];
      auVar18 = vpaddb_avx2(in_YMM14,in_YMM5);
      pauVar9 = unaff_RBP;
      auVar15 = in_YMM4;
      do {
        auVar17 = vmovdqu_avx(*pauVar9);
        auVar14 = vpshufb_avx2(auVar18,auVar17);
        auVar14 = vpsubb_avx2(auVar14,auVar17);
        *pauVar7 = auVar14;
        auVar17 = vmovdqu_avx(pauVar9[1]);
        auVar14 = vpshufb_avx2(auVar18,auVar17);
        auVar14 = vpsubb_avx2(auVar14,auVar17);
        pauVar7[1] = auVar14;
        in_YMM4 = vpaddq_avx2(in_YMM9,auVar15);
        auVar17 = vmovdqu_avx(pauVar9[2]);
        auVar14 = vpshufb_avx2(auVar18,auVar17);
        auVar14 = vpsubb_avx2(auVar14,auVar17);
        pauVar7[2] = auVar14;
        auVar17 = vpandn_avx2(auVar15,in_YMM4);
        auVar14 = vmovdqu_avx(pauVar9[3]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[3] = auVar15;
        auVar17 = vpsrlq_avx2(auVar17,0x3f);
        auVar14 = vmovdqu_avx(pauVar9[4]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[4] = auVar15;
        auVar17 = vpaddb_avx2(auVar17,auVar17);
        auVar14 = vmovdqu_avx(pauVar9[5]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[5] = auVar15;
        auVar17 = vpaddq_avx2(in_YMM5,auVar17);
        auVar14 = vmovdqu_avx(pauVar9[6]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[6] = auVar15;
        in_YMM5 = vpmaxub_avx2(in_YMM11,auVar17);
        auVar14 = vmovdqu_avx(pauVar9[7]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[7] = auVar15;
        auVar18 = vpaddb_avx2(in_YMM14,in_YMM5);
        auVar14 = vmovdqu_avx(pauVar9[8]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[8] = auVar15;
        pauVar8 = pauVar7[0x10];
        auVar14 = vmovdqu_avx(pauVar9[9]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[9] = auVar15;
        unaff_RBP = pauVar9[0x10];
        auVar14 = vmovdqu_avx(pauVar9[10]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[10] = auVar15;
        auVar14 = vmovdqu_avx(pauVar9[0xb]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[0xb] = auVar15;
        auVar14 = vmovdqu_avx(pauVar9[0xc]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[0xc] = auVar15;
        if (unaff_R12 <= unaff_RBP) {
          unaff_RBP = (undefined (*) [32])((long)unaff_RBP + ((long)unaff_R13 - (long)unaff_R12));
        }
        auVar14 = vmovdqu_avx(pauVar9[0xd]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[0xd] = auVar15;
        auVar14 = vmovdqu_avx(pauVar9[0xe]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar15 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[0xe] = auVar15;
        auVar14 = vmovdqu_avx(pauVar9[0xf]);
        auVar15 = vpshufb_avx2(auVar18,auVar14);
        auVar14 = vpsubb_avx2(auVar15,auVar14);
        pauVar7[0xf] = auVar14;
        pauVar7 = pauVar8;
        pauVar9 = unaff_RBP;
        auVar15 = in_YMM4;
      } while (pauVar8 < unaff_RBX);
      if ((uint)-(0xc00000 - (int)unaff_R13) <= ((uint)unaff_RBX & 0x1fffff)) {
        auVar14._0_8_ = swap_buffers();
        auVar14._8_24_ = extraout_var;
      }
      if (in_R9 == 0) {
        if ((int)unaff_R14 == 0x12) {
          syscall();
          exit_on_error(1,"Buzz\nFizz\n7\n8\nFizz\n",5);
                    // WARNING: Subroutine does not return
          exit(0);
        }
        uVar13 = (int)unaff_R14 + 1;
        unaff_R14 = (ulong)uVar13;
        auVar15 = vpcmpeqb_avx2(auVar14,auVar14);
        in_YMM8 = vpsubb_avx2(in_YMM8,auVar15);
        unaff_R15 = unaff_R15 * 10;
        unaff_R12 = unaff_R12[10];
        in_R9 = (unaff_R15 >> 5) * (ulong)(uVar13 * 8 + 0x2f);
        auVar18 = vpxor_avx2(in_YMM9,in_YMM9);
        auVar2 = vpinsrq_avx(auVar18._0_16_,0,0);
        in_YMM9 = vpermq_avx2(ZEXT1632(auVar2),0);
        iVar5 = 0xb - uVar13;
        if (0xb < uVar13 || iVar5 == 0) {
          iVar5 = 1;
        }
        auVar2 = vpxor_avx(auVar15._0_16_,auVar15._0_16_);
        auVar2 = vpinsrq_avx(auVar2,(ulong)(uint)(iVar5 << 3),0);
        auVar15 = vpermq_avx2(ZEXT1632(auVar2),0);
        auVar18 = vpcmpeqb_avx2(in_YMM5,in_YMM5);
        auVar15 = vpsrlq_avx2(auVar18,auVar15._0_16_);
        auVar18 = vpmaxub_avx2(in_YMM11,auVar15);
        auVar15 = vpermq_avx2(in_YMM11,0x55);
        auVar15 = vpsubb_avx2(auVar15,in_YMM11);
        auVar15 = vpaddq_avx2(auVar18,auVar15);
        in_YMM5 = vpmaxub_avx2(in_YMM11,auVar15);
        unaff_RBP = unaff_R13;
        in_YMM4 = in_YMM10;
        goto generate_bytecode;
      }
      auVar2 = vpshufd_avx(in_YMM5._0_16_,0xed);
      uVar4 = vpextrq_avx(auVar2,0);
      pauVar7 = unaff_RBX;
    } while ((uVar4 | 0xffff0000ffff) != in_R8);
    if (in_R8 == 0xffffffffffffffff) {
      uVar6 = vpextrq_avx(in_YMM6._0_16_,1);
      uVar4 = 0;
      if (~(uVar6 & 0x7fffffffffffffff) != 0) {
        for (; (~(uVar6 & 0x7fffffffffffffff) >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      in_YMM6 = vpshufb_avx2(in_YMM6,*(undefined (*) [32])
                                      (":;<=>?@ABCDEFGHI:;<=>?@ABCDEFGHI" +
                                      (uVar4 & 0xfffffffffffffff8) * 4 + 0x20));
      iVar5 = (int)(uVar6 >> ((byte)(uVar4 & 0xfffffffffffffff8) & 0x3f));
      auVar2 = vpinsrb_avx(in_YMM5._0_16_,iVar5,7);
      auVar2 = vpinsrb_avx(auVar2,iVar5,0xf);
      in_YMM5 = vpermq_avx2(ZEXT1632(auVar2),0x44);
      iVar5 = (iVar5 + 1) * 0x1000000;
      in_R8 = CONCAT44(iVar5,iVar5) | 0xf6ffff00f6ffff;
    }
    else {
      auVar15 = vpsubb_avx2(in_YMM15,in_YMM6);
      auVar15 = vpshufb_avx2(in_YMM5,auVar15);
      auVar15 = vpmaxub_avx2(in_YMM6,auVar15);
      in_YMM6 = vpminub_avx2(in_YMM12,auVar15);
      auVar15 = vpsllq_avx2(in_YMM5,8);
      auVar15 = vpsrlq_avx2(auVar15,8);
      in_YMM5 = vpmaxub_avx2(in_YMM11,auVar15);
      in_R8 = 0xffffffffffffffff;
    }
generate_bytecode:
    in_R11 = 0xf6868697ba;
    in_R10 = 0xf686868bbe;
    auVar15 = vpsubb_avx2(in_YMM15,in_YMM6);
    in_YMM2 = vpshufb_avx2(auVar15,in_YMM8);
    in_AL = 0xd0;
    param_1 = unaff_R13;
  } while( true );
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


