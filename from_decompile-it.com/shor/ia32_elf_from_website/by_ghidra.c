typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

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
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef qword complex float;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE


// WARNING! conflicting data type names: /DWARF/stdio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct quantum_reg_node_struct quantum_reg_node_struct, *Pquantum_reg_node_struct;

struct quantum_reg_node_struct {
    complex float amplitude;
    ulonglong state;
};

typedef struct quantum_reg_struct quantum_reg_struct, *Pquantum_reg_struct;

typedef struct quantum_reg_struct quantum_reg;

typedef struct quantum_reg_node_struct quantum_reg_node;

struct quantum_reg_struct {
    int width;
    int size;
    int hashw;
    quantum_reg_node * node;
    int * hash;
};

typedef struct quantum_density_op_struct quantum_density_op_struct, *Pquantum_density_op_struct;

typedef struct quantum_density_op_struct quantum_density_op;

struct quantum_density_op_struct {
    int num;
    float * prob;
    quantum_reg * reg;
};

typedef enum anon_enum_32.conflict57a {
    COND_PHASE=12,
    MEASURE=128,
    PHASE_KICK=10,
    CNOT=1,
    QUANTUM_ENOMEM=2,
    QUANTUM_EMCMATRIX=65536,
    CPHASE_KICK=13,
    QUANTUM_SUCCESS=0,
    PHASE_SCALE=11,
    SIGMA_Y=4,
    SIGMA_X=3,
    SIGMA_Z=5,
    QUANTUM_EOPCODE=65537,
    TOFFOLI=2,
    QUANTUM_EMLARGE=3,
    QUANTUM_FAILURE=1,
    BMEASURE_P=130,
    NOP=255,
    QUANTUM_EHASHFULL=5,
    INIT=0,
    HADAMARD=6,
    ROT_X=7,
    ROT_Y=8,
    ROT_Z=9,
    SWAPLEADS=14,
    BMEASURE=129,
    QUANTUM_EMSIZE=4
} anon_enum_32.conflict57a;

typedef char * __gnuc_va_list;

typedef __gnuc_va_list va_list;


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

typedef struct quantum_matrix_struct quantum_matrix_struct, *Pquantum_matrix_struct;

typedef struct quantum_matrix_struct quantum_matrix;

struct quantum_matrix_struct {
    int rows;
    int cols;
    complex float * t;
};

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef __time_t time_t;

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

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack12;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return iStack12;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double pow(double __x,double __y)

{
  float10 extraout_ST0;
  
  pow(__x,__y);
  return (double)extraout_ST0;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double sqrt(double __x)

{
  float10 extraout_ST0;
  
  sqrt(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double cos(double __x)

{
  float10 extraout_ST0;
  
  cos(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fgetc(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

double log(double __x)

{
  float10 extraout_ST0;
  
  log(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double sin(double __x)

{
  float10 extraout_ST0;
  
  sin(__x);
  return (double)extraout_ST0;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x08048a8a)
// WARNING: Removing unreachable block (ram,0x08048a90)

void __do_global_dtors_aux(void)

{
  if (completed_6635 == '\0') {
    completed_6635 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048ad8)

void frame_dummy(void)

{
  return;
}



int quantum_ipow(int a,int b)

{
  int r;
  int i;
  
  r = 1;
  i = 0;
  while (i < b) {
    r = r * a;
    i = i + 1;
  }
  return r;
}



int quantum_gcd(int u,int v)

{
  int iVar1;
  int r;
  
  while (v != 0) {
    iVar1 = u % v;
    u = v;
    v = iVar1;
  }
  return u;
}



void quantum_frac_approx(int *a,int *b,int width)

{
  int iVar1;
  int den;
  int num;
  int den1;
  int num1;
  int den2;
  int num2;
  int i;
  float g;
  float f;
  
  num2 = 0;
  den2 = 1;
  num1 = 1;
  den1 = 0;
  num = 0;
  g = (float)*a / (float)*b;
  do {
    iVar1 = (int)ROUND(g + 5e-06);
    g = 1.0 / (g - ((float)iVar1 - 5e-06));
    den = den1;
    if (1 << ((byte)width & 0x1f) < iVar1 * den1 + den2) break;
    num = iVar1 * num1 + num2;
    den = iVar1 * den1 + den2;
    num2 = num1;
    den2 = den1;
    den1 = den;
    num1 = num;
  } while (1.0 / (float)(2 << ((byte)width & 0x1f)) <
           ABS((float)num / (float)den - (float)*a / (float)*b));
  *a = num;
  *b = den;
  return;
}



int quantum_getwidth(int n)

{
  int i;
  
  i = 1;
  while (1 << ((byte)i & 0x1f) < n) {
    i = i + 1;
  }
  return i;
}



int quantum_inverse_mod(int n,int c)

{
  int i;
  
  i = 1;
  while ((i * c) % n != 1) {
    i = i + 1;
  }
  return i;
}



complex_float quantum_conj(complex_float a)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float i;
  float r;
  
  fVar2 = quantum_real(a);
  fVar3 = quantum_imag(a);
  uVar1 = __mulsc3(fVar3,0,0x80000000,0xbf800000);
  return CONCAT44((float)((ulonglong)uVar1 >> 0x20) + 0.0,(float)uVar1 + fVar2);
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



float quantum_prob(complex_float a)

{
  float fVar1;
  
  fVar1 = quantum_prob_inline(a);
  return fVar1;
}



float quantum_prob_inline(complex_float a)

{
  float fVar1;
  float fVar2;
  float i;
  float r;
  
  fVar1 = quantum_real(a);
  fVar2 = quantum_imag(a);
  return fVar2 * fVar2 + fVar1 * fVar1;
}



complex_float quantum_cexp(float phi)

{
  double dVar1;
  double dVar2;
  double local_1c;
  double local_14;
  
  dVar1 = cos((double)phi);
  dVar2 = sin((double)phi);
  __muldc3(&local_1c,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),0,0,0x3ff0000000000000);
  return CONCAT44((float)local_14 + 0.0,(float)local_1c + (float)dVar1);
}



float quantum_get_decoherence(void)

{
  return quantum_lambda;
}



void quantum_set_decoherence(float l)

{
  if (l != 0.0) {
    quantum_lambda = l;
  }
  quantum_status = ZEXT14(l != 0.0);
  return;
}



// WARNING: Removing unreachable block (ram,0x08048fa6)

void quantum_decohere(quantum_reg *reg)

{
  undefined4 uVar1;
  uint uVar2;
  quantum_reg_node *pqVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  void *__ptr;
  complex_float cVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  int j;
  int i;
  float angle;
  float *nrands;
  float x;
  float s;
  float v;
  float u;
  
  quantum_gate_counter(1);
  if (quantum_status != 0) {
    __ptr = calloc(reg->width,4);
    if (__ptr == (void *)0x0) {
      quantum_error(2);
    }
    quantum_memman(reg->width << 2);
    i = 0;
    while (i < reg->width) {
      do {
        dVar10 = quantum_frand();
        fVar5 = ((float)dVar10 + (float)dVar10) - 1.0;
        dVar10 = quantum_frand();
        fVar6 = ((float)dVar10 + (float)dVar10) - 1.0;
        fVar6 = fVar6 * fVar6 + fVar5 * fVar5;
      } while (1.0 <= fVar6);
      dVar10 = log((double)fVar6);
      dVar11 = sqrt((double)(quantum_lambda + quantum_lambda));
      *(float *)(i * 4 + (int)__ptr) =
           ((float)dVar11 * (float)SQRT((dVar10 * -2.0) / (double)fVar6) * fVar5) / 2.0;
      i = i + 1;
    }
    i = 0;
    while (i < reg->size) {
      angle = 0.0;
      j = 0;
      while (j < reg->width) {
        uVar2 = *(uint *)((int)&reg->node[i].state + 4);
        bVar7 = (byte)j & 0x1f;
        bVar7 = (byte)(*(uint *)&reg->node[i].state >> bVar7) | (byte)(uVar2 << 0x20 - bVar7);
        if ((j & 0x20U) != 0) {
          bVar7 = (byte)(uVar2 >> ((byte)j & 0x1f));
        }
        if ((bVar7 & 1) == 0) {
          angle = angle - *(float *)(j * 4 + (int)__ptr);
        }
        else {
          angle = angle + *(float *)(j * 4 + (int)__ptr);
        }
        j = j + 1;
      }
      pqVar3 = reg->node;
      uVar4 = *(undefined4 *)&reg->node[i].amplitude;
      uVar1 = *(undefined4 *)((int)&reg->node[i].amplitude + 4);
      cVar8 = quantum_cexp(angle);
      uVar9 = __mulsc3(uVar4,uVar1,cVar8);
      *(int *)&pqVar3[i].amplitude = (int)uVar9;
      *(int *)((int)&pqVar3[i].amplitude + 4) = (int)((ulonglong)uVar9 >> 0x20);
      i = i + 1;
    }
    free(__ptr);
    quantum_memman(reg->width * -4);
  }
  return;
}



quantum_density_op *
quantum_new_density_op
          (quantum_density_op *__return_storage_ptr__,int num,float *prob,quantum_reg *reg)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  quantum_reg *pqVar4;
  quantum_reg *pqVar5;
  quantum_reg *pqVar6;
  quantum_density_op rho;
  int hashw;
  int *phash;
  int i;
  
  pfVar3 = (float *)calloc(num,4);
  if (pfVar3 == (float *)0x0) {
    quantum_error(2);
  }
  pqVar4 = (quantum_reg *)calloc(num,0x14);
  if (pqVar4 == (quantum_reg *)0x0) {
    quantum_error(2);
  }
  quantum_memman(num * 0x18);
  *pfVar3 = *prob;
  piVar1 = reg->hash;
  iVar2 = reg->hashw;
  pqVar4->width = reg->width;
  pqVar4->size = reg->size;
  pqVar4->hashw = reg->hashw;
  pqVar4->node = reg->node;
  pqVar4->hash = reg->hash;
  reg->size = 0;
  reg->width = 0;
  reg->node = (quantum_reg_node *)0x0;
  reg->hash = (int *)0x0;
  i = 1;
  while (i < num) {
    pfVar3[i] = prob[i];
    pqVar5 = pqVar4 + i;
    pqVar6 = reg + i;
    pqVar5->width = pqVar6->width;
    pqVar5->size = pqVar6->size;
    pqVar5->hashw = pqVar6->hashw;
    pqVar5->node = pqVar6->node;
    pqVar5->hash = pqVar6->hash;
    pqVar4[i].hash = piVar1;
    pqVar4[i].hashw = iVar2;
    reg[i].size = 0;
    reg[i].width = 0;
    reg[i].node = (quantum_reg_node *)0x0;
    reg[i].hash = (int *)0x0;
    i = i + 1;
  }
  __return_storage_ptr__->num = num;
  __return_storage_ptr__->prob = pfVar3;
  __return_storage_ptr__->reg = pqVar4;
  return __return_storage_ptr__;
}



quantum_density_op *
quantum_qureg2density_op(quantum_density_op *__return_storage_ptr__,quantum_reg *reg)

{
  float f;
  
  f = 1.0;
  quantum_new_density_op(__return_storage_ptr__,1,&f,reg);
  return __return_storage_ptr__;
}



void quantum_reduced_density_op(int pos,quantum_density_op *rho)

{
  quantum_reg_node *pqVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  quantum_reg *pqVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  quantum_reg local_7c [2];
  float local_50;
  quantum_reg rtmp;
  ulonglong pos2;
  double ptmp;
  double p0;
  int j;
  int i;
  
  pfVar4 = (float *)realloc(rho->prob,rho->num << 3);
  rho->prob = pfVar4;
  if (rho->prob == (float *)0x0) {
    quantum_error(2);
  }
  pqVar5 = (quantum_reg *)realloc(rho->reg,rho->num * 0x28);
  rho->reg = pqVar5;
  if (rho->reg == (quantum_reg *)0x0) {
    quantum_error(2);
  }
  quantum_memman(rho->num * 0x18);
  bVar3 = (byte)pos & 0x1f;
  uVar6 = 1 << ((byte)pos & 0x1f);
  uVar7 = uVar6;
  uVar8 = 0 << bVar3 | 1U >> 0x20 - bVar3;
  if ((pos & 0x20U) != 0) {
    uVar7 = 0;
    uVar8 = uVar6;
  }
  i = 0;
  while (i < rho->num) {
    fVar2 = rho->prob[i];
    pqVar5 = rho->reg + i;
    rtmp.width = pqVar5->width;
    rtmp.size = pqVar5->size;
    rtmp.hashw = pqVar5->hashw;
    rtmp.node = pqVar5->node;
    rtmp.hash = pqVar5->hash;
    p0 = 0.0;
    j = 0;
    while (j < rho->reg[i].size) {
      pqVar1 = rho->reg[i].node + j;
      if ((*(uint *)&pqVar1->state & uVar7 | *(uint *)((int)&pqVar1->state + 4) & uVar8) == 0) {
        fVar9 = quantum_prob_inline(rho->reg[i].node[j].amplitude);
        p0 = (double)((float)p0 + fVar9);
      }
      j = j + 1;
    }
    rho->prob[i] = fVar2 * (float)p0;
    local_50 = (1.0 - (float)p0) * fVar2;
    rho->prob[rho->num + i] = local_50;
    pqVar5 = rho->reg + i;
    quantum_state_collapse
              (local_7c,pos,0,
               (quantum_reg)
               CONCAT416(rtmp.hash,
                         CONCAT412(rtmp.node,CONCAT48(rtmp.hashw,CONCAT44(rtmp.size,rtmp.width)))));
    pqVar5->width = local_7c[0].width;
    pqVar5->size = local_7c[0].size;
    pqVar5->hashw = local_7c[0].hashw;
    pqVar5->node = local_7c[0].node;
    pqVar5->hash = local_7c[0].hash;
    pqVar5 = rho->reg + rho->num + i;
    quantum_state_collapse
              (local_7c,pos,1,
               (quantum_reg)
               CONCAT416(rtmp.hash,
                         CONCAT412(rtmp.node,CONCAT48(rtmp.hashw,CONCAT44(rtmp.size,rtmp.width)))));
    pqVar5->width = local_7c[0].width;
    pqVar5->size = local_7c[0].size;
    pqVar5->hashw = local_7c[0].hashw;
    pqVar5->node = local_7c[0].node;
    pqVar5->hash = local_7c[0].hash;
    quantum_delete_qureg_hashpreserve(&rtmp);
    i = i + 1;
  }
  rho->num = rho->num * 2;
  return;
}



float quantum_prob_inline(complex_float a)

{
  float fVar1;
  float fVar2;
  float i;
  float r;
  
  fVar1 = quantum_real(a);
  fVar2 = quantum_imag(a);
  return fVar2 * fVar2 + fVar1 * fVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



quantum_matrix *
quantum_density_matrix(quantum_matrix *__return_storage_ptr__,quantum_density_op *rho)

{
  complex_float *pcVar1;
  quantum_reg_node *pqVar2;
  float fVar3;
  float fVar4;
  int cols;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  complex_float cVar8;
  quantum_matrix m;
  int dim;
  int l2;
  int l1;
  int k;
  int j;
  int i;
  
  cols = 1 << ((byte)rho->reg->width & 0x1f);
  if (cols < 0) {
    quantum_error(3);
  }
  quantum_new_matrix(&m,cols,cols);
  k = 0;
  while (k < rho->num) {
    quantum_reconstruct_hash(rho->reg + k);
    i = 0;
    while (i < cols) {
      j = 0;
      while (j < cols) {
        iVar5 = quantum_get_state((longlong)i,rho->reg[k]);
        iVar6 = quantum_get_state((longlong)j,rho->reg[k]);
        if ((-1 < iVar5) && (-1 < iVar6)) {
          pcVar1 = m.t + m.cols * j + i;
          fVar3 = *(float *)(m.t + m.cols * j + i);
          fVar4 = *(float *)((int)(m.t + m.cols * j + i) + 4);
          pqVar2 = rho->reg[k].node + iVar6;
          uVar7 = __mulsc3(rho->prob[k],0,*(undefined4 *)&pqVar2->amplitude,
                           *(undefined4 *)((int)&pqVar2->amplitude + 4));
          cVar8 = quantum_conj(rho->reg[k].node[iVar5].amplitude);
          uVar7 = __mulsc3(uVar7,cVar8);
          *(float *)pcVar1 = (float)uVar7 + fVar3;
          *(float *)((int)pcVar1 + 4) = (float)((ulonglong)uVar7 >> 0x20) + fVar4;
        }
        j = j + 1;
      }
      i = i + 1;
    }
    k = k + 1;
  }
  __return_storage_ptr__->rows = m.rows;
  __return_storage_ptr__->cols = m.cols;
  __return_storage_ptr__->t = m.t;
  return __return_storage_ptr__;
}



void quantum_reconstruct_hash(quantum_reg *reg)

{
  int i;
  
  i = 0;
  while (i < 1 << ((byte)reg->hashw & 0x1f)) {
    reg->hash[i] = 0;
    i = i + 1;
  }
  i = 0;
  while (i < reg->size) {
    quantum_add_hash(reg->node[i].state,i,reg);
    i = i + 1;
  }
  return;
}



void quantum_add_hash(ulonglong a,int pos,quantum_reg *reg)

{
  bool bVar1;
  int mark;
  int i;
  
  bVar1 = false;
  i = quantum_hash64(a,reg->hashw);
  while (reg->hash[i] != 0) {
    i = i + 1;
    if (1 << ((byte)reg->hashw & 0x1f) == i) {
      if (bVar1) {
        quantum_error(5);
      }
      else {
        i = 0;
        bVar1 = true;
      }
    }
  }
  reg->hash[i] = pos + 1;
  return;
}



uint quantum_hash64(ulonglong key,int width)

{
  uint k32;
  
  return (key._4_4_ ^ (uint)key) * -0x61c8ffff >> (0x20U - (char)width & 0x1f);
}



int quantum_get_state(ulonglong a,quantum_reg reg)

{
  int local_20;
  int i;
  
  if (reg.hashw == 0) {
    local_20 = (int)a;
  }
  else {
    i = quantum_hash64(a,reg.hashw);
    while (reg.hash[i] != 0) {
      if (a == reg.node[-(1 - reg.hash[i])].state) {
        return reg.hash[i] + -1;
      }
      i = i + 1;
      if (1 << (SUB201(reg >> 0x40,0) & 0x1f) == i) {
        i = 0;
      }
    }
    local_20 = -1;
  }
  return local_20;
}



void quantum_print_density_matrix(quantum_density_op *rho)

{
  quantum_matrix local_2c;
  quantum_matrix m;
  
  quantum_density_matrix(&local_2c,rho);
  m.rows = local_2c.rows;
  m.cols = local_2c.cols;
  m.t = local_2c.t;
  quantum_print_matrix((quantum_matrix)CONCAT48(local_2c.t,CONCAT44(local_2c.cols,local_2c.rows)));
  quantum_delete_matrix(&m);
  return;
}



void quantum_delete_density_op(quantum_density_op *rho)

{
  int i;
  
  quantum_destroy_hash(rho->reg);
  i = 0;
  while (i < rho->num) {
    quantum_delete_qureg_hashpreserve(rho->reg + i);
    i = i + 1;
  }
  free(rho->prob);
  free(rho->reg);
  quantum_memman(rho->num * -0x18);
  rho->prob = (float *)0x0;
  rho->reg = (quantum_reg *)0x0;
  return;
}



float quantum_purity(quantum_density_op *rho)

{
  quantum_reg_node *pqVar1;
  int iVar2;
  complex_float cVar3;
  undefined8 uVar4;
  complex_float cVar5;
  float fVar6;
  complex_float dp;
  complex_float g;
  float f;
  int l;
  int k;
  int j;
  int i;
  
  f = 0.0;
  i = 0;
  while (i < rho->num) {
    f = f + rho->prob[i] * rho->prob[i];
    i = i + 1;
  }
  i = 0;
  while (i < rho->num) {
    j = 0;
    while (j < i) {
      cVar3 = quantum_dot_product(rho->reg + i,rho->reg + j);
      k = 0;
      while (k < rho->reg[i].size) {
        iVar2 = quantum_get_state(rho->reg[i].node[k].state,rho->reg[j]);
        if (iVar2 < 0) {
          cVar5 = 0;
        }
        else {
          uVar4 = __mulsc3(rho->prob[j] * rho->prob[i],0,cVar3);
          pqVar1 = rho->reg[i].node + k;
          uVar4 = __mulsc3(uVar4,*(undefined4 *)&pqVar1->amplitude,
                           *(undefined4 *)((int)&pqVar1->amplitude + 4));
          cVar5 = quantum_conj(rho->reg[j].node[iVar2].amplitude);
          cVar5 = __mulsc3(uVar4,cVar5);
        }
        fVar6 = quantum_real(cVar5);
        f = f + fVar6 + fVar6;
        k = k + 1;
      }
      j = j + 1;
    }
    i = i + 1;
  }
  return f;
}



void * quantum_error_handler(anon_subr_void_ptr_int *f)

{
  if (f != (anon_subr_void_ptr_int *)0x0) {
    quantum_error_handler::errfunc = f;
  }
  return quantum_error_handler::errfunc;
}



char * quantum_strerr(int errno)

{
  char *local_8;
  
  if (errno == 3) {
    local_8 = "matrix too large";
    return local_8;
  }
  if (errno < 4) {
    if (errno == 1) {
      local_8 = "failure";
      return local_8;
    }
    if (1 < errno) {
      local_8 = "malloc failed";
      return local_8;
    }
    if (errno == 0) {
      local_8 = "success";
      return local_8;
    }
  }
  else {
    if (errno == 5) {
      local_8 = "hash table full";
      return local_8;
    }
    if (errno < 5) {
      local_8 = "wrong matrix size";
      return local_8;
    }
    if (errno == 0x10000) {
      local_8 = "single-column matrix expected";
      return local_8;
    }
    if (errno == 0x10001) {
      local_8 = "unknown opcode";
      return local_8;
    }
  }
  local_8 = "unknown error code";
  return local_8;
}



void quantum_error(int errno)

{
  code *pcVar1;
  char *pcVar2;
  anon_subr_void_int *p;
  
  pcVar1 = (code *)quantum_error_handler((anon_subr_void_ptr_int *)0x0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(errno);
    return;
  }
  fflush(stdout);
  pcVar2 = quantum_strerr(errno);
  fprintf(stderr,"ERROR: %s\n",pcVar2);
  fflush(stderr);
                    // WARNING: Subroutine does not return
  abort();
}



void quantum_exp_mod_n(int N,int x,int width_input,int width,quantum_reg *reg)

{
  int f;
  int j;
  int i;
  
  quantum_sigma_x((width + 1) * 2,reg);
  i = 1;
  while (i <= width_input) {
    f = x % N;
    j = 1;
    while (j < i) {
      f = (f * f) % N;
      j = j + 1;
    }
    mul_mod_n(N,f,width * 3 + 1 + i,width,reg);
    i = i + 1;
  }
  return;
}



void quantum_cnot(int control,int target,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int qec;
  int i;
  
  quantum_qec_get_status(&qec,(int *)0x0);
  if (qec == 0) {
    iVar4 = quantum_objcode_put('\x01',control,target);
    if (iVar4 == 0) {
      i = 0;
      while (i < reg->size) {
        uVar1 = *(uint *)((int)&reg->node[i].state + 4);
        bVar3 = (byte)control & 0x1f;
        bVar3 = (byte)(*(uint *)&reg->node[i].state >> bVar3) | (byte)(uVar1 << 0x20 - bVar3);
        if ((control & 0x20U) != 0) {
          bVar3 = (byte)(uVar1 >> ((byte)control & 0x1f));
        }
        if ((bVar3 & 1) != 0) {
          pqVar2 = reg->node;
          uVar1 = *(uint *)((int)&reg->node[i].state + 4);
          bVar3 = (byte)target & 0x1f;
          uVar5 = 1 << ((byte)target & 0x1f);
          uVar6 = uVar5;
          uVar7 = 0 << bVar3 | 1U >> 0x20 - bVar3;
          if ((target & 0x20U) != 0) {
            uVar6 = 0;
            uVar7 = uVar5;
          }
          *(uint *)&pqVar2[i].state = *(uint *)&reg->node[i].state ^ uVar6;
          *(uint *)((int)&pqVar2[i].state + 4) = uVar1 ^ uVar7;
        }
        i = i + 1;
      }
      quantum_decohere(reg);
    }
  }
  else {
    quantum_cnot_ft(control,target,reg);
  }
  return;
}



void quantum_toffoli(int control1,int control2,int target,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int qec;
  int i;
  
  quantum_qec_get_status(&qec,(int *)0x0);
  if (qec == 0) {
    iVar4 = quantum_objcode_put('\x02',control1,control2,target);
    if (iVar4 == 0) {
      i = 0;
      while (i < reg->size) {
        uVar1 = *(uint *)((int)&reg->node[i].state + 4);
        bVar3 = (byte)control1 & 0x1f;
        bVar3 = (byte)(*(uint *)&reg->node[i].state >> bVar3) | (byte)(uVar1 << 0x20 - bVar3);
        if ((control1 & 0x20U) != 0) {
          bVar3 = (byte)(uVar1 >> ((byte)control1 & 0x1f));
        }
        if ((bVar3 & 1) != 0) {
          uVar1 = *(uint *)((int)&reg->node[i].state + 4);
          bVar3 = (byte)control2 & 0x1f;
          bVar3 = (byte)(*(uint *)&reg->node[i].state >> bVar3) | (byte)(uVar1 << 0x20 - bVar3);
          if ((control2 & 0x20U) != 0) {
            bVar3 = (byte)(uVar1 >> ((byte)control2 & 0x1f));
          }
          if ((bVar3 & 1) != 0) {
            pqVar2 = reg->node;
            uVar1 = *(uint *)((int)&reg->node[i].state + 4);
            bVar3 = (byte)target & 0x1f;
            uVar5 = 1 << ((byte)target & 0x1f);
            uVar6 = uVar5;
            uVar7 = 0 << bVar3 | 1U >> 0x20 - bVar3;
            if ((target & 0x20U) != 0) {
              uVar6 = 0;
              uVar7 = uVar5;
            }
            *(uint *)&pqVar2[i].state = *(uint *)&reg->node[i].state ^ uVar6;
            *(uint *)((int)&pqVar2[i].state + 4) = uVar1 ^ uVar7;
          }
        }
        i = i + 1;
      }
      quantum_decohere(reg);
    }
  }
  else {
    quantum_toffoli_ft(control1,control2,target,reg);
  }
  return;
}



void quantum_unbounded_toffoli(int controlling,quantum_reg *reg,...)

{
  uint uVar1;
  uint uVar2;
  quantum_reg_node *pqVar3;
  byte bVar4;
  void *__ptr;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int j;
  int i;
  int *controls;
  int target;
  va_list bits;
  
  __ptr = malloc(controlling << 2);
  if (__ptr == (void *)0x0) {
    quantum_error(2);
  }
  quantum_memman(controlling << 2);
  i = 0;
  bits = &stack0x0000000c;
  while (i < controlling) {
    *(undefined4 *)(i * 4 + (int)__ptr) = *(undefined4 *)bits;
    i = i + 1;
    bits = bits + 4;
  }
  uVar1 = *(uint *)bits;
  i = 0;
  do {
    if (reg->size <= i) {
      free(__ptr);
      quantum_memman(controlling * -4);
      quantum_decohere(reg);
      return;
    }
    j = 0;
    while (j < controlling) {
      uVar2 = *(uint *)((int)&reg->node[i].state + 4);
      uVar6 = *(uint *)(j * 4 + (int)__ptr);
      bVar7 = (byte)uVar6;
      bVar4 = bVar7 & 0x1f;
      bVar4 = (byte)(*(uint *)&reg->node[i].state >> bVar4) | (byte)(uVar2 << 0x20 - bVar4);
      if ((uVar6 & 0x20) != 0) {
        bVar4 = (byte)(uVar2 >> (bVar7 & 0x1f));
      }
      if ((bVar4 & 1) == 0) break;
      j = j + 1;
    }
    if (j == controlling) {
      pqVar3 = reg->node;
      uVar2 = *(uint *)((int)&reg->node[i].state + 4);
      bVar7 = (byte)uVar1;
      bVar4 = bVar7 & 0x1f;
      uVar5 = 1 << (bVar7 & 0x1f);
      uVar6 = uVar5;
      uVar8 = 0 << bVar4 | 1U >> 0x20 - bVar4;
      if ((uVar1 & 0x20) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      *(uint *)&pqVar3[i].state = *(uint *)&reg->node[i].state ^ uVar6;
      *(uint *)((int)&pqVar3[i].state + 4) = uVar2 ^ uVar8;
    }
    i = i + 1;
  } while( true );
}



void quantum_sigma_x(int target,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int qec;
  int i;
  
  quantum_qec_get_status(&qec,(int *)0x0);
  if (qec == 0) {
    iVar4 = quantum_objcode_put('\x03',target);
    if (iVar4 == 0) {
      i = 0;
      while (i < reg->size) {
        pqVar1 = reg->node;
        uVar2 = *(uint *)((int)&reg->node[i].state + 4);
        bVar3 = (byte)target & 0x1f;
        uVar5 = 1 << ((byte)target & 0x1f);
        uVar6 = uVar5;
        uVar7 = 0 << bVar3 | 1U >> 0x20 - bVar3;
        if ((target & 0x20U) != 0) {
          uVar6 = 0;
          uVar7 = uVar5;
        }
        *(uint *)&pqVar1[i].state = *(uint *)&reg->node[i].state ^ uVar6;
        *(uint *)((int)&pqVar1[i].state + 4) = uVar2 ^ uVar7;
        i = i + 1;
      }
      quantum_decohere(reg);
    }
  }
  else {
    quantum_sigma_x_ft(target,reg);
  }
  return;
}



void quantum_sigma_y(int target,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  int i;
  
  iVar4 = quantum_objcode_put('\x04',target);
  if (iVar4 == 0) {
    i = 0;
    while (i < reg->size) {
      pqVar1 = reg->node;
      uVar2 = *(uint *)((int)&reg->node[i].state + 4);
      bVar7 = (byte)target;
      uVar5 = 1 << (bVar7 & 0x1f);
      uVar6 = uVar5;
      uVar8 = 0 << (bVar7 & 0x1f) | 1U >> 0x20 - (bVar7 & 0x1f);
      if ((target & 0x20U) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      *(uint *)&pqVar1[i].state = *(uint *)&reg->node[i].state ^ uVar6;
      *(uint *)((int)&pqVar1[i].state + 4) = uVar2 ^ uVar8;
      uVar2 = *(uint *)((int)&reg->node[i].state + 4);
      bVar3 = (byte)(*(uint *)&reg->node[i].state >> (bVar7 & 0x1f)) |
              (byte)(uVar2 << 0x20 - (bVar7 & 0x1f));
      if ((target & 0x20U) != 0) {
        bVar3 = (byte)(uVar2 >> (bVar7 & 0x1f));
      }
      if ((bVar3 & 1) == 0) {
        pqVar1 = reg->node;
        uVar9 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                         *(undefined4 *)((int)&reg->node[i].amplitude + 4),0,0xbf800000);
        *(int *)&pqVar1[i].amplitude = (int)uVar9;
        *(int *)((int)&pqVar1[i].amplitude + 4) = (int)((ulonglong)uVar9 >> 0x20);
      }
      else {
        pqVar1 = reg->node;
        uVar9 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                         *(undefined4 *)((int)&reg->node[i].amplitude + 4),0,0x3f800000);
        *(int *)&pqVar1[i].amplitude = (int)uVar9;
        *(int *)((int)&pqVar1[i].amplitude + 4) = (int)((ulonglong)uVar9 >> 0x20);
      }
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



void quantum_sigma_z(int target,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int i;
  
  iVar5 = quantum_objcode_put('\x05',target);
  if (iVar5 == 0) {
    i = 0;
    while (i < reg->size) {
      uVar1 = *(uint *)((int)&reg->node[i].state + 4);
      bVar4 = (byte)target & 0x1f;
      bVar4 = (byte)(*(uint *)&reg->node[i].state >> bVar4) | (byte)(uVar1 << 0x20 - bVar4);
      if ((target & 0x20U) != 0) {
        bVar4 = (byte)(uVar1 >> ((byte)target & 0x1f));
      }
      if ((bVar4 & 1) != 0) {
        pqVar2 = reg->node;
        fVar3 = *(float *)((int)&reg->node[i].amplitude + 4);
        *(float *)&pqVar2[i].amplitude = -*(float *)&reg->node[i].amplitude;
        *(float *)((int)&pqVar2[i].amplitude + 4) = -fVar3;
      }
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



void quantum_swaptheleads(int width,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong l;
  int qec;
  int pat2;
  int pat1;
  int j;
  int i;
  
  quantum_qec_get_status(&qec,(int *)0x0);
  if (qec == 0) {
    i = 0;
    while ((i < reg->size && (iVar3 = quantum_objcode_put('\x0e',width), iVar3 == 0))) {
      bVar8 = (byte)width;
      iVar3 = 1 << (bVar8 & 0x1f);
      if ((width & 0x20U) != 0) {
        iVar3 = 0;
      }
      pat1 = iVar3 - 1U & *(uint *)&reg->node[i].state;
      pat2 = 0;
      j = 0;
      while (j < width) {
        uVar4 = 1 << ((byte)(width + j) & 0x1f);
        if ((width + j & 0x20U) != 0) {
          uVar4 = 0;
        }
        pat2 = (*(uint *)&reg->node[i].state & uVar4) + pat2;
        j = j + 1;
      }
      uVar4 = *(uint *)&reg->node[i].state;
      iVar3 = *(int *)((int)&reg->node[i].state + 4);
      uVar5 = pat1 + pat2;
      uVar9 = uVar4 - uVar5;
      uVar6 = pat1 << (bVar8 & 0x1f);
      uVar1 = uVar9 + uVar6;
      uVar7 = pat2 >> (bVar8 & 0x1f);
      pqVar2 = reg->node;
      *(uint *)&pqVar2[i].state = uVar1 + uVar7;
      *(uint *)((int)&pqVar2[i].state + 4) =
           ((iVar3 - ((int)uVar5 >> 0x1f)) - (uint)(uVar4 < uVar5)) + ((int)uVar6 >> 0x1f) +
           (uint)CARRY4(uVar9,uVar6) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar1,uVar7);
      i = i + 1;
    }
  }
  else {
    i = 0;
    while (i < width) {
      quantum_cnot(i,width + i,reg);
      quantum_cnot(width + i,i,reg);
      quantum_cnot(i,width + i,reg);
      i = i + 1;
    }
  }
  return;
}



void quantum_swaptheleads_omuln_controlled(int control,int width,quantum_reg *reg)

{
  int i;
  
  i = 0;
  while (i < width) {
    quantum_toffoli(control,width + i,width * 2 + i + 2,reg);
    quantum_toffoli(control,width * 2 + i + 2,width + i,reg);
    quantum_toffoli(control,width + i,width * 2 + i + 2,reg);
    i = i + 1;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void quantum_gate1(int target,quantum_matrix m,quantum_reg *reg)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  quantum_reg_node *pqVar5;
  void *__ptr;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float10 local_8c;
  complex_float tnot;
  complex_float t;
  char *done;
  float limit;
  int sorted;
  int decsize;
  int addsize;
  int iset;
  int k;
  int j;
  int i;
  
  addsize = 0;
  decsize = 0;
  bVar4 = true;
  if ((m.cols != 2) || (m.rows != 2)) {
    quantum_error(4);
  }
  quantum_reconstruct_hash(reg);
  i = 0;
  while (bVar12 = (byte)target, i < reg->size) {
    if ((bVar4) &&
       ((i ^ *(uint *)&reg->node[i].state | *(uint *)((int)&reg->node[i].state + 4) ^ i >> 0x1f) !=
        0)) {
      bVar4 = false;
    }
    uVar6 = 1 << (bVar12 & 0x1f);
    uVar7 = uVar6;
    uVar9 = 0 << (bVar12 & 0x1f) | 1U >> 0x20 - (bVar12 & 0x1f);
    if ((target & 0x20U) != 0) {
      uVar7 = 0;
      uVar9 = uVar6;
    }
    iVar10 = quantum_get_state(CONCAT44(*(uint *)((int)&reg->node[i].state + 4) ^ uVar9,
                                        *(uint *)&reg->node[i].state ^ uVar7),*reg);
    if (iVar10 == -1) {
      addsize = addsize + 1;
    }
    i = i + 1;
  }
  pqVar5 = (quantum_reg_node *)realloc(reg->node,(reg->size + addsize) * 0x10);
  reg->node = pqVar5;
  if (reg->node == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(addsize << 4);
  i = 0;
  while (i < addsize) {
    pqVar5 = reg->node;
    iVar10 = reg->size;
    *(undefined4 *)&pqVar5[iVar10 + i].state = 0;
    *(undefined4 *)((int)&pqVar5[iVar10 + i].state + 4) = 0;
    pqVar5 = reg->node;
    iVar10 = reg->size;
    *(undefined4 *)&pqVar5[iVar10 + i].amplitude = 0;
    *(undefined4 *)((int)&pqVar5[iVar10 + i].amplitude + 4) = 0;
    i = i + 1;
  }
  __ptr = calloc(reg->size + addsize,1);
  if (__ptr == (void *)0x0) {
    quantum_error(2);
  }
  quantum_memman(reg->size + addsize);
  k = reg->size;
  bVar13 = (byte)reg->width;
  bVar3 = bVar13 & 0x1f;
  uVar6 = 1 << (bVar13 & 0x1f);
  uVar7 = uVar6;
  uVar9 = 0 << bVar3 | 1U >> 0x20 - bVar3;
  if ((reg->width & 0x20U) != 0) {
    uVar7 = 0;
    uVar9 = uVar6;
  }
  local_8c = (float10)CONCAT44(uVar9,uVar7);
  if ((int)uVar9 < 0) {
    local_8c = local_8c + _DAT_08054330;
  }
  i = 0;
  while (i < reg->size) {
    if (*(char *)(i + (int)__ptr) == '\0') {
      uVar7 = 1 << (bVar12 & 0x1f);
      if ((target & 0x20U) != 0) {
        uVar7 = 0;
      }
      uVar7 = uVar7 & *(uint *)&reg->node[i].state;
      tnot._0_4_ = 0;
      tnot._4_4_ = 0;
      uVar8 = 1 << (bVar12 & 0x1f);
      uVar9 = uVar8;
      uVar6 = 0 << (bVar12 & 0x1f) | 1U >> 0x20 - (bVar12 & 0x1f);
      if ((target & 0x20U) != 0) {
        uVar9 = 0;
        uVar6 = uVar8;
      }
      iVar10 = quantum_get_state(CONCAT44(*(uint *)((int)&reg->node[i].state + 4) ^ uVar6,
                                          *(uint *)&reg->node[i].state ^ uVar9),*reg);
      uVar2 = *(undefined4 *)&reg->node[i].amplitude;
      uVar1 = *(undefined4 *)((int)&reg->node[i].amplitude + 4);
      if (-1 < iVar10) {
        tnot._0_4_ = *(undefined4 *)&reg->node[iVar10].amplitude;
        tnot._4_4_ = *(undefined4 *)((int)&reg->node[iVar10].amplitude + 4);
      }
      if (uVar7 == 0) {
        pqVar5 = reg->node;
        uVar14 = __mulsc3(*(undefined4 *)m.t,*(undefined4 *)((int)m.t + 4),uVar2,uVar1);
        uVar15 = __mulsc3(*(undefined4 *)(m.t + 1),*(undefined4 *)((int)m.t + 0xc),(undefined4)tnot,
                          tnot._4_4_);
        *(float *)&pqVar5[i].amplitude = (float)uVar15 + (float)uVar14;
        *(float *)((int)&pqVar5[i].amplitude + 4) =
             (float)((ulonglong)uVar15 >> 0x20) + (float)((ulonglong)uVar14 >> 0x20);
      }
      else {
        pqVar5 = reg->node;
        uVar14 = __mulsc3(*(undefined4 *)(m.t + 2),*(undefined4 *)((int)m.t + 0x14),(undefined4)tnot
                          ,tnot._4_4_);
        uVar15 = __mulsc3(*(undefined4 *)(m.t + 3),*(undefined4 *)((int)m.t + 0x1c),uVar2,uVar1);
        *(float *)&pqVar5[i].amplitude = (float)uVar15 + (float)uVar14;
        *(float *)((int)&pqVar5[i].amplitude + 4) =
             (float)((ulonglong)uVar15 >> 0x20) + (float)((ulonglong)uVar14 >> 0x20);
      }
      if (iVar10 < 0) {
        if ((*(float *)((int)m.t + 0xc) == 0.0 && *(float *)(m.t + 1) == 0.0) && (uVar7 != 0))
        break;
        if ((*(float *)((int)m.t + 0x14) == 0.0 && *(float *)(m.t + 2) == 0.0) && (uVar7 == 0))
        break;
        pqVar5 = reg->node;
        uVar9 = *(uint *)((int)&reg->node[i].state + 4);
        uVar11 = 1 << (bVar12 & 0x1f);
        uVar6 = uVar11;
        uVar8 = 0 << (bVar12 & 0x1f) | 1U >> 0x20 - (bVar12 & 0x1f);
        if ((target & 0x20U) != 0) {
          uVar6 = 0;
          uVar8 = uVar11;
        }
        *(uint *)&pqVar5[k].state = *(uint *)&reg->node[i].state ^ uVar6;
        *(uint *)((int)&pqVar5[k].state + 4) = uVar9 ^ uVar8;
        if (uVar7 == 0) {
          pqVar5 = reg->node;
          uVar14 = __mulsc3(*(undefined4 *)(m.t + 2),*(undefined4 *)((int)m.t + 0x14),uVar2,uVar1);
          *(int *)&pqVar5[k].amplitude = (int)uVar14;
          *(int *)((int)&pqVar5[k].amplitude + 4) = (int)((ulonglong)uVar14 >> 0x20);
        }
        else {
          pqVar5 = reg->node;
          uVar14 = __mulsc3(*(undefined4 *)(m.t + 1),*(undefined4 *)((int)m.t + 0xc),uVar2,uVar1);
          *(int *)&pqVar5[k].amplitude = (int)uVar14;
          *(int *)((int)&pqVar5[k].amplitude + 4) = (int)((ulonglong)uVar14 >> 0x20);
        }
        k = k + 1;
      }
      else {
        if (uVar7 == 0) {
          pqVar5 = reg->node;
          uVar14 = __mulsc3(*(undefined4 *)(m.t + 2),*(undefined4 *)((int)m.t + 0x14),uVar2,uVar1);
          uVar15 = __mulsc3(*(undefined4 *)(m.t + 3),*(undefined4 *)((int)m.t + 0x1c),
                            (undefined4)tnot,tnot._4_4_);
          *(float *)&pqVar5[iVar10].amplitude = (float)uVar15 + (float)uVar14;
          *(float *)((int)&pqVar5[iVar10].amplitude + 4) =
               (float)((ulonglong)uVar15 >> 0x20) + (float)((ulonglong)uVar14 >> 0x20);
        }
        else {
          pqVar5 = reg->node;
          uVar14 = __mulsc3(*(undefined4 *)m.t,*(undefined4 *)((int)m.t + 4),(undefined4)tnot,
                            tnot._4_4_);
          uVar15 = __mulsc3(*(undefined4 *)(m.t + 1),*(undefined4 *)((int)m.t + 0xc),uVar2,uVar1);
          *(float *)&pqVar5[iVar10].amplitude = (float)uVar15 + (float)uVar14;
          *(float *)((int)&pqVar5[iVar10].amplitude + 4) =
               (float)((ulonglong)uVar15 >> 0x20) + (float)((ulonglong)uVar14 >> 0x20);
        }
      }
      if (-1 < iVar10) {
        *(undefined *)(iVar10 + (int)__ptr) = 1;
      }
    }
    i = i + 1;
  }
  reg->size = reg->size + addsize;
  free(__ptr);
  quantum_memman(-reg->size);
  if (!bVar4) {
    i = 0;
    j = 0;
    while (i < reg->size) {
      fVar16 = quantum_prob_inline(reg->node[i].amplitude);
      if ((1.0 / (float)local_8c) * 1e-06 <= fVar16) {
        if (j != 0) {
          pqVar5 = reg->node;
          uVar2 = *(undefined4 *)((int)&reg->node[i].state + 4);
          *(undefined4 *)&pqVar5[i - j].state = *(undefined4 *)&reg->node[i].state;
          *(undefined4 *)((int)&pqVar5[i - j].state + 4) = uVar2;
          pqVar5 = reg->node;
          uVar2 = *(undefined4 *)((int)&reg->node[i].amplitude + 4);
          *(undefined4 *)&pqVar5[i - j].amplitude = *(undefined4 *)&reg->node[i].amplitude;
          *(undefined4 *)((int)&pqVar5[i - j].amplitude + 4) = uVar2;
        }
      }
      else {
        j = j + 1;
        decsize = decsize + 1;
      }
      i = i + 1;
    }
    if (decsize != 0) {
      reg->size = reg->size - decsize;
      pqVar5 = (quantum_reg_node *)realloc(reg->node,reg->size << 4);
      reg->node = pqVar5;
      if (reg->node == (quantum_reg_node *)0x0) {
        quantum_error(2);
      }
      quantum_memman(decsize * -0x10);
    }
  }
  quantum_decohere(reg);
  return;
}



void quantum_reconstruct_hash(quantum_reg *reg)

{
  int i;
  
  i = 0;
  while (i < 1 << ((byte)reg->hashw & 0x1f)) {
    reg->hash[i] = 0;
    i = i + 1;
  }
  i = 0;
  while (i < reg->size) {
    quantum_add_hash(reg->node[i].state,i,reg);
    i = i + 1;
  }
  return;
}



void quantum_add_hash(ulonglong a,int pos,quantum_reg *reg)

{
  bool bVar1;
  int mark;
  int i;
  
  bVar1 = false;
  i = quantum_hash64(a,reg->hashw);
  while (reg->hash[i] != 0) {
    i = i + 1;
    if (1 << ((byte)reg->hashw & 0x1f) == i) {
      if (bVar1) {
        quantum_error(5);
      }
      else {
        i = 0;
        bVar1 = true;
      }
    }
  }
  reg->hash[i] = pos + 1;
  return;
}



uint quantum_hash64(ulonglong key,int width)

{
  uint k32;
  
  return (key._4_4_ ^ (uint)key) * -0x61c8ffff >> (0x20U - (char)width & 0x1f);
}



int quantum_get_state(ulonglong a,quantum_reg reg)

{
  int local_20;
  int i;
  
  if (reg.hashw == 0) {
    local_20 = (int)a;
  }
  else {
    i = quantum_hash64(a,reg.hashw);
    while (reg.hash[i] != 0) {
      if (a == reg.node[-(1 - reg.hash[i])].state) {
        return reg.hash[i] + -1;
      }
      i = i + 1;
      if (1 << (SUB201(reg >> 0x40,0) & 0x1f) == i) {
        i = 0;
      }
    }
    local_20 = -1;
  }
  return local_20;
}



float quantum_prob_inline(complex_float a)

{
  float fVar1;
  float fVar2;
  float i;
  float r;
  
  fVar1 = quantum_real(a);
  fVar2 = quantum_imag(a);
  return fVar2 * fVar2 + fVar1 * fVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void quantum_gate2(int target1,int target2,quantum_matrix m,quantum_reg *reg)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  quantum_reg_node *pqVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  float fVar15;
  float10 local_ac;
  complex_float psi_sub [4];
  int base [4];
  int bits [2];
  char *done;
  float limit;
  int decsize;
  int addsize;
  int l;
  int k;
  int j;
  int i;
  byte bVar9;
  
  addsize = 0;
  decsize = 0;
  if ((m.cols != 4) || (m.rows != 4)) {
    quantum_error(4);
  }
  i = 0;
  while (i < 1 << ((byte)reg->hashw & 0x1f)) {
    reg->hash[i] = 0;
    i = i + 1;
  }
  i = 0;
  while (i < reg->size) {
    quantum_add_hash(reg->node[i].state,i,reg);
    i = i + 1;
  }
  i = 0;
  while (bVar8 = (byte)target1, bVar9 = (byte)target2, i < reg->size) {
    uVar5 = 1 << (bVar8 & 0x1f);
    uVar6 = uVar5;
    uVar11 = 0 << (bVar8 & 0x1f) | 1U >> 0x20 - (bVar8 & 0x1f);
    if ((target1 & 0x20U) != 0) {
      uVar6 = 0;
      uVar11 = uVar5;
    }
    iVar7 = quantum_get_state(CONCAT44(*(uint *)((int)&reg->node[i].state + 4) ^ uVar11,
                                       *(uint *)&reg->node[i].state ^ uVar6),*reg);
    if (iVar7 == -1) {
      addsize = addsize + 1;
    }
    uVar5 = 1 << (bVar9 & 0x1f);
    uVar6 = uVar5;
    uVar11 = 0 << (bVar9 & 0x1f) | 1U >> 0x20 - (bVar9 & 0x1f);
    if ((target2 & 0x20U) != 0) {
      uVar6 = 0;
      uVar11 = uVar5;
    }
    iVar7 = quantum_get_state(CONCAT44(*(uint *)((int)&reg->node[i].state + 4) ^ uVar11,
                                       *(uint *)&reg->node[i].state ^ uVar6),*reg);
    if (iVar7 == -1) {
      addsize = addsize + 1;
    }
    i = i + 1;
  }
  pqVar4 = (quantum_reg_node *)realloc(reg->node,(reg->size + addsize) * 0x10);
  reg->node = pqVar4;
  if (reg->node == (quantum_reg_node *)0x0) {
    quantum_error(4);
  }
  quantum_memman(addsize << 4);
  i = 0;
  while (i < addsize) {
    pqVar4 = reg->node;
    iVar7 = reg->size;
    *(undefined4 *)&pqVar4[iVar7 + i].state = 0;
    *(undefined4 *)((int)&pqVar4[iVar7 + i].state + 4) = 0;
    pqVar4 = reg->node;
    iVar7 = reg->size;
    *(undefined4 *)&pqVar4[iVar7 + i].amplitude = 0;
    *(undefined4 *)((int)&pqVar4[iVar7 + i].amplitude + 4) = 0;
    i = i + 1;
  }
  done = (char *)calloc(reg->size + addsize,1);
  if (done == (char *)0x0) {
    quantum_error(4);
  }
  quantum_memman(reg->size + addsize);
  l = reg->size;
  bVar10 = (byte)reg->width;
  bVar3 = bVar10 & 0x1f;
  uVar5 = 1 << (bVar10 & 0x1f);
  uVar6 = uVar5;
  uVar11 = 0 << bVar3 | 1U >> 0x20 - bVar3;
  if ((reg->width & 0x20U) != 0) {
    uVar6 = 0;
    uVar11 = uVar5;
  }
  local_ac = (float10)CONCAT44(uVar11,uVar6);
  if ((int)uVar11 < 0) {
    local_ac = local_ac + _DAT_08054330;
  }
  limit = (1.0 / (float)local_ac) / 1000000.0;
  bits[0] = target1;
  bits[1] = target2;
  i = 0;
  while (i < reg->size) {
    if (done[i] == '\0') {
      j = quantum_bitmask(reg->node[i].state,2,bits);
      base[j] = i;
      uVar5 = 1 << (bVar9 & 0x1f);
      uVar6 = uVar5;
      uVar11 = 0 << (bVar9 & 0x1f) | 1U >> 0x20 - (bVar9 & 0x1f);
      if ((target2 & 0x20U) != 0) {
        uVar6 = 0;
        uVar11 = uVar5;
      }
      iVar7 = quantum_get_state(CONCAT44(*(uint *)((int)&reg->node[i].state + 4) ^ uVar11,
                                         *(uint *)&reg->node[i].state ^ uVar6),*reg);
      base[j ^ 1] = iVar7;
      uVar5 = 1 << (bVar8 & 0x1f);
      uVar6 = uVar5;
      uVar11 = 0 << (bVar8 & 0x1f) | 1U >> 0x20 - (bVar8 & 0x1f);
      if ((target1 & 0x20U) != 0) {
        uVar6 = 0;
        uVar11 = uVar5;
      }
      iVar7 = quantum_get_state(CONCAT44(*(uint *)((int)&reg->node[i].state + 4) ^ uVar11,
                                         *(uint *)&reg->node[i].state ^ uVar6),*reg);
      base[j ^ 2] = iVar7;
      uVar5 = 1 << (bVar8 & 0x1f);
      uVar6 = uVar5;
      uVar11 = 0 << (bVar8 & 0x1f) | 1U >> 0x20 - (bVar8 & 0x1f);
      if ((target1 & 0x20U) != 0) {
        uVar6 = 0;
        uVar11 = uVar5;
      }
      uVar12 = 1 << (bVar9 & 0x1f);
      uVar5 = uVar12;
      uVar13 = 0 << (bVar9 & 0x1f) | 1U >> 0x20 - (bVar9 & 0x1f);
      if ((target2 & 0x20U) != 0) {
        uVar5 = 0;
        uVar13 = uVar12;
      }
      iVar7 = quantum_get_state(CONCAT44(uVar13 ^ *(uint *)((int)&reg->node[i].state + 4) ^ uVar11,
                                         uVar5 ^ *(uint *)&reg->node[i].state ^ uVar6),*reg);
      base[j ^ 3] = iVar7;
      j = 0;
      while (j < 4) {
        if (base[j] == -1) {
          base[j] = l;
          l = l + 1;
        }
        iVar7 = j;
        uVar2 = *(undefined4 *)((int)&reg->node[base[j]].amplitude + 4);
        *(undefined4 *)(psi_sub + j) = *(undefined4 *)&reg->node[base[j]].amplitude;
        *(undefined4 *)((int)psi_sub + iVar7 * 8 + 4) = uVar2;
        j = j + 1;
      }
      j = 0;
      while (j < 4) {
        pqVar4 = reg->node;
        iVar7 = base[j];
        *(undefined4 *)&pqVar4[iVar7].amplitude = 0;
        *(undefined4 *)((int)&pqVar4[iVar7].amplitude + 4) = 0;
        k = 0;
        while (k < 4) {
          pqVar4 = reg->node;
          iVar7 = base[j];
          fVar15 = *(float *)&reg->node[base[j]].amplitude;
          fVar1 = *(float *)((int)&reg->node[base[j]].amplitude + 4);
          uVar14 = __mulsc3(*(undefined4 *)(m.t + m.cols * j + k),
                            *(undefined4 *)((int)(m.t + m.cols * j + k) + 4),
                            *(undefined4 *)(psi_sub + k),*(undefined4 *)((int)psi_sub + k * 8 + 4));
          *(float *)&pqVar4[iVar7].amplitude = (float)uVar14 + fVar15;
          *(float *)((int)&pqVar4[iVar7].amplitude + 4) = (float)((ulonglong)uVar14 >> 0x20) + fVar1
          ;
          k = k + 1;
        }
        done[base[j]] = '\x01';
        j = j + 1;
      }
    }
    i = i + 1;
  }
  reg->size = reg->size + addsize;
  free(done);
  quantum_memman(-reg->size);
  i = 0;
  j = 0;
  while (i < reg->size) {
    fVar15 = quantum_prob_inline(reg->node[i].amplitude);
    if (limit <= fVar15) {
      if (j != 0) {
        pqVar4 = reg->node;
        uVar2 = *(undefined4 *)((int)&reg->node[i].state + 4);
        *(undefined4 *)&pqVar4[i - j].state = *(undefined4 *)&reg->node[i].state;
        *(undefined4 *)((int)&pqVar4[i - j].state + 4) = uVar2;
        pqVar4 = reg->node;
        uVar2 = *(undefined4 *)((int)&reg->node[i].amplitude + 4);
        *(undefined4 *)&pqVar4[i - j].amplitude = *(undefined4 *)&reg->node[i].amplitude;
        *(undefined4 *)((int)&pqVar4[i - j].amplitude + 4) = uVar2;
      }
    }
    else {
      j = j + 1;
      decsize = decsize + 1;
    }
    i = i + 1;
  }
  if (decsize != 0) {
    reg->size = reg->size - decsize;
    pqVar4 = (quantum_reg_node *)realloc(reg->node,reg->size << 4);
    reg->node = pqVar4;
    if (reg->node == (quantum_reg_node *)0x0) {
      quantum_error(2);
    }
    quantum_memman(decsize * -0x10);
  }
  quantum_decohere(reg);
  return;
}



int quantum_bitmask(ulonglong a,int width,int *bits)

{
  byte bVar1;
  byte bVar2;
  int mask;
  int i;
  
  mask = 0;
  i = 0;
  while (i < width) {
    bVar2 = (byte)bits[i];
    bVar1 = bVar2 & 0x1f;
    bVar1 = (byte)((uint)a >> bVar1) | (byte)(a._4_4_ << 0x20 - bVar1);
    if ((bits[i] & 0x20U) != 0) {
      bVar1 = (byte)(a._4_4_ >> (bVar2 & 0x1f));
    }
    if ((bVar1 & 1) != 0) {
      mask = mask + (1 << ((byte)i & 0x1f));
    }
    i = i + 1;
  }
  return mask;
}



void quantum_hadamard(int target,quantum_reg *reg)

{
  int iVar1;
  quantum_matrix local_2c;
  quantum_matrix m;
  
  iVar1 = quantum_objcode_put('\x06',target);
  if (iVar1 == 0) {
    quantum_new_matrix(&local_2c,2,2);
    m.rows = local_2c.rows;
    m.cols = local_2c.cols;
    m.t = local_2c.t;
    *(undefined4 *)local_2c.t = 0x3f3504f3;
    *(undefined4 *)((int)local_2c.t + 4) = 0;
    *(undefined4 *)(local_2c.t + 1) = 0x3f3504f3;
    *(undefined4 *)((int)local_2c.t + 0xc) = 0;
    *(undefined4 *)(local_2c.t + 2) = 0x3f3504f3;
    *(undefined4 *)((int)local_2c.t + 0x14) = 0;
    *(undefined4 *)(local_2c.t + 3) = 0xbf3504f3;
    *(undefined4 *)((int)local_2c.t + 0x1c) = 0;
    quantum_gate1(target,(quantum_matrix)CONCAT48(local_2c.t,CONCAT44(local_2c.cols,local_2c.rows)),
                  reg);
    quantum_delete_matrix(&m);
  }
  return;
}



void quantum_walsh(int width,quantum_reg *reg)

{
  int i;
  
  i = 0;
  while (i < width) {
    quantum_hadamard(i,reg);
    i = i + 1;
  }
  return;
}



void quantum_r_x(int target,float gamma,quantum_reg *reg)

{
  complex_float *pcVar1;
  complex_float *pcVar2;
  complex_float *pcVar3;
  int iVar4;
  double dVar5;
  double local_44;
  double local_3c;
  float local_30;
  quantum_matrix local_2c;
  quantum_matrix m;
  
  iVar4 = quantum_objcode_put('\a',target,SUB84((double)gamma,0),
                              (int)((ulonglong)(double)gamma >> 0x20));
  if (iVar4 == 0) {
    quantum_new_matrix(&local_2c,2,2);
    m.rows = local_2c.rows;
    m.cols = local_2c.cols;
    m.t = local_2c.t;
    dVar5 = cos((double)(gamma / 2.0));
    pcVar2 = m.t;
    local_30 = (float)dVar5;
    *(float *)local_2c.t = local_30;
    *(float *)((int)local_2c.t + 4) = 0.0;
    pcVar1 = m.t + 1;
    dVar5 = sin((double)(gamma / 2.0));
    __muldc3(&local_44,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),0,0,0,0xbff0000000000000);
    pcVar3 = m.t;
    local_30 = (float)local_3c;
    *(float *)pcVar1 = (float)local_44;
    *(float *)((int)pcVar2 + 0xc) = local_30;
    pcVar1 = m.t + 2;
    dVar5 = sin((double)(gamma / 2.0));
    __muldc3(&local_44,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),0,0,0,0xbff0000000000000);
    pcVar2 = m.t;
    local_30 = (float)local_3c;
    *(float *)pcVar1 = (float)local_44;
    *(float *)((int)pcVar3 + 0x14) = local_30;
    pcVar1 = m.t + 3;
    dVar5 = cos((double)(gamma / 2.0));
    local_30 = (float)dVar5;
    *(float *)pcVar1 = local_30;
    *(undefined4 *)((int)pcVar2 + 0x1c) = 0;
    quantum_gate1(target,(quantum_matrix)CONCAT48(m.t,CONCAT44(m.cols,m.rows)),reg);
    quantum_delete_matrix(&m);
  }
  return;
}



void quantum_r_y(int target,float gamma,quantum_reg *reg)

{
  complex_float *pcVar1;
  complex_float *pcVar2;
  complex_float *pcVar3;
  int iVar4;
  double dVar5;
  quantum_matrix local_2c;
  quantum_matrix m;
  
  iVar4 = quantum_objcode_put('\b',target,SUB84((double)gamma,0),
                              (int)((ulonglong)(double)gamma >> 0x20));
  if (iVar4 == 0) {
    quantum_new_matrix(&local_2c,2,2);
    m.rows = local_2c.rows;
    m.cols = local_2c.cols;
    m.t = local_2c.t;
    dVar5 = cos((double)(gamma / 2.0));
    pcVar2 = m.t;
    *(float *)local_2c.t = (float)dVar5;
    *(float *)((int)local_2c.t + 4) = 0.0;
    pcVar1 = m.t + 1;
    dVar5 = sin((double)(gamma / -2.0));
    pcVar3 = m.t;
    *(float *)pcVar1 = (float)dVar5;
    *(undefined4 *)((int)pcVar2 + 0xc) = 0;
    pcVar1 = m.t + 2;
    dVar5 = sin((double)(gamma / 2.0));
    pcVar2 = m.t;
    *(float *)pcVar1 = (float)dVar5;
    *(undefined4 *)((int)pcVar3 + 0x14) = 0;
    pcVar1 = m.t + 3;
    dVar5 = cos((double)(gamma / 2.0));
    *(float *)pcVar1 = (float)dVar5;
    *(undefined4 *)((int)pcVar2 + 0x1c) = 0;
    quantum_gate1(target,(quantum_matrix)CONCAT48(m.t,CONCAT44(m.cols,m.rows)),reg);
    quantum_delete_matrix(&m);
  }
  return;
}



void quantum_r_z(int target,float gamma,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  byte bVar3;
  int iVar4;
  complex_float cVar5;
  undefined8 uVar6;
  complex_float z;
  int i;
  
  iVar4 = quantum_objcode_put('\t',target,(double)gamma);
  if (iVar4 == 0) {
    cVar5 = quantum_cexp(gamma / 2.0);
    i = 0;
    while (i < reg->size) {
      uVar1 = *(uint *)((int)&reg->node[i].state + 4);
      bVar3 = (byte)target & 0x1f;
      bVar3 = (byte)(*(uint *)&reg->node[i].state >> bVar3) | (byte)(uVar1 << 0x20 - bVar3);
      if ((target & 0x20U) != 0) {
        bVar3 = (byte)(uVar1 >> ((byte)target & 0x1f));
      }
      if ((bVar3 & 1) == 0) {
        pqVar2 = reg->node;
        uVar6 = __divsc3(*(undefined4 *)&reg->node[i].amplitude,
                         *(undefined4 *)((int)&reg->node[i].amplitude + 4),cVar5);
        *(int *)&pqVar2[i].amplitude = (int)uVar6;
        *(int *)((int)&pqVar2[i].amplitude + 4) = (int)((ulonglong)uVar6 >> 0x20);
      }
      else {
        pqVar2 = reg->node;
        uVar6 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                         *(undefined4 *)((int)&reg->node[i].amplitude + 4));
        *(int *)&pqVar2[i].amplitude = (int)uVar6;
        *(int *)((int)&pqVar2[i].amplitude + 4) = (int)((ulonglong)uVar6 >> 0x20);
      }
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void quantum_phase_scale(int target,float gamma,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  int iVar2;
  complex_float cVar3;
  undefined8 uVar4;
  complex_float z;
  int i;
  
  iVar2 = quantum_objcode_put('\v',target,(double)gamma);
  if (iVar2 == 0) {
    cVar3 = quantum_cexp(gamma);
    i = 0;
    while (z._0_4_ = (undefined4)cVar3, i < reg->size) {
      pqVar1 = reg->node;
      uVar4 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                       *(undefined4 *)((int)&reg->node[i].amplitude + 4),(undefined4)z,
                       (int)(cVar3 >> 0x20));
      *(int *)&pqVar1[i].amplitude = (int)uVar4;
      *(int *)((int)&pqVar1[i].amplitude + 4) = (int)((ulonglong)uVar4 >> 0x20);
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void quantum_phase_kick(int target,float gamma,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  byte bVar3;
  int iVar4;
  complex_float cVar5;
  undefined8 uVar6;
  complex_float z;
  int i;
  
  iVar4 = quantum_objcode_put('\n',target,(double)gamma);
  if (iVar4 == 0) {
    cVar5 = quantum_cexp(gamma);
    i = 0;
    while (z._0_4_ = (undefined4)cVar5, i < reg->size) {
      uVar1 = *(uint *)((int)&reg->node[i].state + 4);
      bVar3 = (byte)target & 0x1f;
      bVar3 = (byte)(*(uint *)&reg->node[i].state >> bVar3) | (byte)(uVar1 << 0x20 - bVar3);
      if ((target & 0x20U) != 0) {
        bVar3 = (byte)(uVar1 >> ((byte)target & 0x1f));
      }
      if ((bVar3 & 1) != 0) {
        pqVar2 = reg->node;
        uVar6 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                         *(undefined4 *)((int)&reg->node[i].amplitude + 4),(undefined4)z,
                         (int)(cVar5 >> 0x20));
        *(int *)&pqVar2[i].amplitude = (int)uVar6;
        *(int *)((int)&pqVar2[i].amplitude + 4) = (int)((ulonglong)uVar6 >> 0x20);
      }
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void quantum_cond_phase(int control,int target,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  complex_float cVar8;
  undefined8 uVar9;
  float10 local_3c;
  complex_float z;
  int i;
  
  iVar3 = quantum_objcode_put('\f',control,target);
  if (iVar3 == 0) {
    bVar6 = (byte)(control - target);
    bVar2 = bVar6 & 0x1f;
    uVar4 = 1 << (bVar6 & 0x1f);
    uVar5 = uVar4;
    uVar7 = 0 << bVar2 | 1U >> 0x20 - bVar2;
    if ((control - target & 0x20U) != 0) {
      uVar5 = 0;
      uVar7 = uVar4;
    }
    local_3c = (float10)CONCAT44(uVar7,uVar5);
    if ((int)uVar7 < 0) {
      local_3c = local_3c + _DAT_08054330;
    }
    cVar8 = quantum_cexp(3.141593 / (float)local_3c);
    i = 0;
    while (i < reg->size) {
      uVar5 = *(uint *)((int)&reg->node[i].state + 4);
      bVar2 = (byte)control & 0x1f;
      bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar5 << 0x20 - bVar2);
      if ((control & 0x20U) != 0) {
        bVar2 = (byte)(uVar5 >> ((byte)control & 0x1f));
      }
      if ((bVar2 & 1) != 0) {
        uVar5 = *(uint *)((int)&reg->node[i].state + 4);
        bVar2 = (byte)target & 0x1f;
        bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar5 << 0x20 - bVar2);
        if ((target & 0x20U) != 0) {
          bVar2 = (byte)(uVar5 >> ((byte)target & 0x1f));
        }
        if ((bVar2 & 1) != 0) {
          pqVar1 = reg->node;
          uVar9 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                           *(undefined4 *)((int)&reg->node[i].amplitude + 4),cVar8);
          *(int *)&pqVar1[i].amplitude = (int)uVar9;
          *(int *)((int)&pqVar1[i].amplitude + 4) = (int)((ulonglong)uVar9 >> 0x20);
        }
      }
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void quantum_cond_phase_inv(int control,int target,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  complex_float cVar7;
  undefined8 uVar8;
  float10 local_3c;
  complex_float z;
  int i;
  
  bVar5 = (byte)(control - target);
  bVar2 = bVar5 & 0x1f;
  uVar3 = 1 << (bVar5 & 0x1f);
  uVar4 = uVar3;
  uVar6 = 0 << bVar2 | 1U >> 0x20 - bVar2;
  if ((control - target & 0x20U) != 0) {
    uVar4 = 0;
    uVar6 = uVar3;
  }
  local_3c = (float10)CONCAT44(uVar6,uVar4);
  if ((int)uVar6 < 0) {
    local_3c = local_3c + _DAT_08054330;
  }
  cVar7 = quantum_cexp(-3.141593 / (float)local_3c);
  i = 0;
  while (i < reg->size) {
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    bVar2 = (byte)control & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((control & 0x20U) != 0) {
      bVar2 = (byte)(uVar4 >> ((byte)control & 0x1f));
    }
    if ((bVar2 & 1) != 0) {
      uVar4 = *(uint *)((int)&reg->node[i].state + 4);
      bVar2 = (byte)target & 0x1f;
      bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
      if ((target & 0x20U) != 0) {
        bVar2 = (byte)(uVar4 >> ((byte)target & 0x1f));
      }
      if ((bVar2 & 1) != 0) {
        pqVar1 = reg->node;
        uVar8 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                         *(undefined4 *)((int)&reg->node[i].amplitude + 4),cVar7);
        *(int *)&pqVar1[i].amplitude = (int)uVar8;
        *(int *)((int)&pqVar1[i].amplitude + 4) = (int)((ulonglong)uVar8 >> 0x20);
      }
    }
    i = i + 1;
  }
  quantum_decohere(reg);
  return;
}



void quantum_cond_phase_kick(int control,int target,float gamma,quantum_reg *reg)

{
  uint uVar1;
  quantum_reg_node *pqVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  complex_float cVar6;
  undefined8 uVar7;
  double dVar8;
  complex_float z;
  int i;
  
  dVar8 = (double)gamma;
  iVar5 = quantum_objcode_put('\f',control,target,dVar8);
  if (iVar5 == 0) {
    cVar6 = quantum_cexp(gamma);
    i = 0;
    while (i < reg->size) {
      uVar1 = *(uint *)((int)&reg->node[i].state + 4);
      bVar4 = (byte)control & 0x1f;
      bVar4 = (byte)(*(uint *)&reg->node[i].state >> bVar4) | (byte)(uVar1 << 0x20 - bVar4);
      if ((control & 0x20U) != 0) {
        bVar4 = (byte)(uVar1 >> ((byte)control & 0x1f));
      }
      if ((bVar4 & 1) != 0) {
        uVar1 = *(uint *)((int)&reg->node[i].state + 4);
        bVar4 = (byte)target & 0x1f;
        bVar4 = (byte)(*(uint *)&reg->node[i].state >> bVar4) | (byte)(uVar1 << 0x20 - bVar4);
        if ((target & 0x20U) != 0) {
          bVar4 = (byte)(uVar1 >> ((byte)target & 0x1f));
        }
        if ((bVar4 & 1) != 0) {
          pqVar2 = reg->node;
          uVar3 = (ulonglong)dVar8 >> 0x20;
          dVar8 = (double)((ulonglong)dVar8 & 0xffffffff00000000);
          uVar7 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                           *(undefined4 *)((int)&reg->node[i].amplitude + 4),cVar6,(int)uVar3);
          *(int *)&pqVar2[i].amplitude = (int)uVar7;
          *(int *)((int)&pqVar2[i].amplitude + 4) = (int)((ulonglong)uVar7 >> 0x20);
        }
      }
      i = i + 1;
    }
    quantum_decohere(reg);
  }
  return;
}



int quantum_gate_counter(int inc)

{
  if (inc < 1) {
    if (inc < 0) {
      quantum_gate_counter::counter = 0;
    }
  }
  else {
    quantum_gate_counter::counter = quantum_gate_counter::counter + inc;
  }
  return quantum_gate_counter::counter;
}



ulong quantum_memman(long change)

{
  quantum_memman::mem = quantum_memman::mem + change;
  if (quantum_memman::max < quantum_memman::mem) {
    quantum_memman::max = quantum_memman::mem;
  }
  return quantum_memman::mem;
}



quantum_matrix * quantum_new_matrix(quantum_matrix *__return_storage_ptr__,int cols,int rows)

{
  complex_float *pcVar1;
  quantum_matrix m;
  
  pcVar1 = (complex_float *)calloc(cols * rows,8);
  if (pcVar1 == (complex_float *)0x0) {
    quantum_error(2);
  }
  quantum_memman(rows * cols * 8);
  __return_storage_ptr__->rows = rows;
  __return_storage_ptr__->cols = cols;
  __return_storage_ptr__->t = pcVar1;
  return __return_storage_ptr__;
}



void quantum_delete_matrix(quantum_matrix *m)

{
  free(m->t);
  quantum_memman(m->rows * m->cols * -8);
  m->t = (complex_float *)0x0;
  return;
}



void quantum_print_matrix(quantum_matrix m)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int z;
  int j;
  int i;
  
  z = 0;
  do {
    bVar1 = (byte)z;
    z = z + 1;
  } while (1 << (bVar1 & 0x1f) < m.rows);
  i = 0;
  while (i < m.rows) {
    j = 0;
    while (j < m.cols) {
      fVar2 = quantum_imag(m.t[m.cols * i + j]);
      fVar3 = quantum_real(m.t[m.cols * i + j]);
      printf("%g %+gi ",SUB84((double)fVar3,0),(int)((ulonglong)(double)fVar3 >> 0x20),(double)fVar2
            );
      j = j + 1;
    }
    putchar(10);
    i = i + 1;
  }
  putchar(10);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



quantum_matrix *
quantum_mmult(quantum_matrix *__return_storage_ptr__,quantum_matrix A,quantum_matrix B)

{
  complex_float *pcVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  quantum_matrix C;
  int k;
  int j;
  int i;
  
  if (A.cols != B.rows) {
    quantum_error(4);
  }
  quantum_new_matrix(&C,B.cols,A.rows);
  i = 0;
  while (i < B.cols) {
    j = 0;
    while (j < A.rows) {
      k = 0;
      while (k < B.rows) {
        pcVar1 = C.t + C.cols * j + i;
        fVar3 = *(float *)(C.t + C.cols * j + i);
        fVar2 = *(float *)((int)(C.t + C.cols * j + i) + 4);
        uVar4 = __mulsc3(*(undefined4 *)(A.t + A.cols * j + k),
                         *(undefined4 *)((int)(A.t + A.cols * j + k) + 4),
                         *(undefined4 *)(B.t + B.cols * k + i),
                         *(undefined4 *)((int)(B.t + B.cols * k + i) + 4));
        *(float *)pcVar1 = (float)uVar4 + fVar3;
        *(float *)((int)pcVar1 + 4) = (float)((ulonglong)uVar4 >> 0x20) + fVar2;
        k = k + 1;
      }
      j = j + 1;
    }
    i = i + 1;
  }
  __return_storage_ptr__->rows = C.rows;
  __return_storage_ptr__->cols = C.cols;
  __return_storage_ptr__->t = C.t;
  return __return_storage_ptr__;
}



double quantum_frand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (double)iVar1 / 2147483647.0;
}



ulonglong quantum_measure(quantum_reg reg)

{
  int iVar1;
  float fVar2;
  undefined4 local_1c;
  undefined4 local_18;
  double r;
  int i;
  
  iVar1 = quantum_objcode_put(-0x80);
  if (iVar1 == 0) {
    r = quantum_frand();
    i = 0;
    while (i < reg.size) {
      fVar2 = quantum_prob_inline(reg.node[i].amplitude);
      r = (double)((float)r - fVar2);
      if (r <= 0.0) {
        local_1c = *(undefined4 *)&reg.node[i].state;
        local_18 = *(undefined4 *)((int)&reg.node[i].state + 4);
        goto LAB_0804cfd8;
      }
      i = i + 1;
    }
    local_1c = 0xffffffff;
    local_18 = 0xffffffff;
  }
  else {
    local_1c = 0;
    local_18 = 0;
  }
LAB_0804cfd8:
  return CONCAT44(local_18,local_1c);
}



float quantum_prob_inline(complex_float a)

{
  float fVar1;
  float fVar2;
  float i;
  float r;
  
  fVar1 = quantum_real(a);
  fVar2 = quantum_imag(a);
  return fVar2 * fVar2 + fVar1 * fVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



int quantum_bmeasure(int pos,quantum_reg *reg)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  int local_50;
  quantum_reg out;
  ulonglong pos2;
  double r;
  double pa;
  int result;
  int i;
  
  pa = 0.0;
  iVar2 = quantum_objcode_put(-0x7f,pos);
  if (iVar2 == 0) {
    bVar1 = (byte)pos & 0x1f;
    uVar3 = 1 << ((byte)pos & 0x1f);
    uVar4 = uVar3;
    uVar5 = 0 << bVar1 | 1U >> 0x20 - bVar1;
    if ((pos & 0x20U) != 0) {
      uVar4 = 0;
      uVar5 = uVar3;
    }
    i = 0;
    while (i < reg->size) {
      if ((*(uint *)&reg->node[i].state & uVar4 | *(uint *)((int)&reg->node[i].state + 4) & uVar5)
          == 0) {
        fVar6 = quantum_prob_inline(reg->node[i].amplitude);
        pa = (double)((float)pa + fVar6);
      }
      i = i + 1;
    }
    dVar7 = quantum_frand();
    result = ZEXT14(pa < dVar7);
    quantum_state_collapse(&out,pos,result,*reg);
    quantum_delete_qureg_hashpreserve(reg);
    reg->width = out.width;
    reg->size = out.size;
    reg->hashw = out.hashw;
    reg->node = out.node;
    reg->hash = out.hash;
    local_50 = result;
  }
  else {
    local_50 = 0;
  }
  return local_50;
}



// WARNING: Removing unreachable block (ram,0x0804d488)

int quantum_bmeasure_bitpreserve(int pos,quantum_reg *reg)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  quantum_reg_node *pqVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  int local_74;
  quantum_reg out;
  ulonglong pos2;
  double r;
  double pa;
  double d;
  int result;
  int size;
  int j;
  int i;
  
  size = 0;
  d = 0.0;
  pa = 0.0;
  iVar5 = quantum_objcode_put(-0x7e,pos);
  if (iVar5 == 0) {
    bVar4 = (byte)pos & 0x1f;
    uVar6 = 1 << ((byte)pos & 0x1f);
    uVar7 = uVar6;
    uVar9 = 0 << bVar4 | 1U >> 0x20 - bVar4;
    if ((pos & 0x20U) != 0) {
      uVar7 = 0;
      uVar9 = uVar6;
    }
    i = 0;
    while (i < reg->size) {
      if ((*(uint *)&reg->node[i].state & uVar7 | *(uint *)((int)&reg->node[i].state + 4) & uVar9)
          == 0) {
        fVar11 = quantum_prob_inline(reg->node[i].amplitude);
        pa = (double)((float)pa + fVar11);
      }
      i = i + 1;
    }
    dVar12 = quantum_frand();
    result = ZEXT14(pa < dVar12);
    i = 0;
    while (i < reg->size) {
      if ((*(uint *)&reg->node[i].state & uVar7 | *(uint *)((int)&reg->node[i].state + 4) & uVar9)
          == 0) {
        if (result == 0) {
          fVar11 = quantum_prob_inline(reg->node[i].amplitude);
          d = (double)((float)d + fVar11);
          size = size + 1;
        }
        else {
          pqVar8 = reg->node;
          *(undefined4 *)&pqVar8[i].amplitude = 0;
          *(undefined4 *)((int)&pqVar8[i].amplitude + 4) = 0;
        }
      }
      else {
        if (result == 0) {
          pqVar8 = reg->node;
          *(undefined4 *)&pqVar8[i].amplitude = 0;
          *(undefined4 *)((int)&pqVar8[i].amplitude + 4) = 0;
        }
        else {
          fVar11 = quantum_prob_inline(reg->node[i].amplitude);
          d = (double)((float)d + fVar11);
          size = size + 1;
        }
      }
      i = i + 1;
    }
    pqVar8 = (quantum_reg_node *)calloc(size,0x10);
    if (pqVar8 == (quantum_reg_node *)0x0) {
      quantum_error(2);
    }
    quantum_memman(size << 4);
    iVar5 = reg->hashw;
    piVar1 = reg->hash;
    iVar2 = reg->width;
    i = 0;
    j = 0;
    while (i < reg->size) {
      if ((*(float *)&reg->node[i].amplitude != 0.0) ||
         (*(float *)((int)&reg->node[i].amplitude + 4) != 0.0)) {
        uVar3 = *(undefined4 *)((int)&reg->node[i].state + 4);
        *(undefined4 *)&pqVar8[j].state = *(undefined4 *)&reg->node[i].state;
        *(undefined4 *)((int)&pqVar8[j].state + 4) = uVar3;
        uVar10 = __divsc3(*(undefined4 *)&reg->node[i].amplitude,
                          *(undefined4 *)((int)&reg->node[i].amplitude + 4),(float)SQRT(d),0);
        *(int *)&pqVar8[j].amplitude = (int)uVar10;
        *(int *)((int)&pqVar8[j].amplitude + 4) = (int)((ulonglong)uVar10 >> 0x20);
        j = j + 1;
      }
      i = i + 1;
    }
    quantum_delete_qureg_hashpreserve(reg);
    reg->width = iVar2;
    reg->size = size;
    reg->hashw = iVar5;
    reg->node = pqVar8;
    reg->hash = piVar1;
    local_74 = result;
  }
  else {
    local_74 = 0;
  }
  return local_74;
}



void test_sum(int compare,int width,quantum_reg *reg)

{
  byte bVar1;
  byte bVar2;
  int i;
  
  bVar2 = (byte)(width - 1U);
  bVar1 = bVar2 & 0x1f;
  bVar1 = (byte)((uint)compare >> bVar1) | (byte)((compare >> 0x1f) << 0x20 - bVar1);
  if ((width - 1U & 0x20) != 0) {
    bVar1 = (byte)((uint)(compare >> 0x1f) >> (bVar2 & 0x1f));
  }
  if ((bVar1 & 1) == 0) {
    quantum_sigma_x(width * 2 + -1,reg);
    quantum_cnot(width * 2 + -1,width + -1,reg);
  }
  else {
    quantum_cnot(width * 2 + -1,width + -1,reg);
    quantum_sigma_x(width * 2 + -1,reg);
    quantum_cnot(width * 2 + -1,0,reg);
  }
  i = width + -2;
  while (0 < i) {
    if ((compare >> ((byte)i & 0x1f) & 1U) == 0) {
      quantum_sigma_x(width + i,reg);
      quantum_toffoli(i + 1,width + i,i,reg);
    }
    else {
      quantum_toffoli(i + 1,width + i,i,reg);
      quantum_sigma_x(width + i,reg);
      quantum_toffoli(i + 1,width + i,0,reg);
    }
    i = i + -1;
  }
  if ((compare & 1U) != 0) {
    quantum_sigma_x(width,reg);
    quantum_toffoli(width,1,0,reg);
  }
  quantum_toffoli(width * 2 + 1,0,width * 2,reg);
  if ((compare & 1U) != 0) {
    quantum_toffoli(width,1,0,reg);
    quantum_sigma_x(width,reg);
  }
  i = 1;
  while (i <= width + -2) {
    if ((compare >> ((byte)i & 0x1f) & 1U) == 0) {
      quantum_toffoli(i + 1,width + i,i,reg);
      quantum_sigma_x(width + i,reg);
    }
    else {
      quantum_toffoli(i + 1,width + i,0,reg);
      quantum_sigma_x(width + i,reg);
      quantum_toffoli(i + 1,width + i,i,reg);
    }
    i = i + 1;
  }
  if ((compare >> ((char)width - 1U & 0x1f) & 1U) == 0) {
    quantum_cnot(width * 2 + -1,width + -1,reg);
    quantum_sigma_x(width * 2 + -1,reg);
  }
  else {
    quantum_cnot(width * 2 + -1,0,reg);
    quantum_sigma_x(width * 2 + -1,reg);
    quantum_cnot(width * 2 + -1,width + -1,reg);
  }
  return;
}



void muxfa(int a,int b_in,int c_in,int c_out,int xlt_l,int L,int total,quantum_reg *reg)

{
  if (a == 0) {
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 3) {
    quantum_toffoli(L,c_in,c_out,reg);
    quantum_cnot(L,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 1) {
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 2) {
    quantum_sigma_x(xlt_l,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_cnot(b_in,c_in,reg);
    quantum_sigma_x(xlt_l,reg);
  }
  return;
}



void muxfa_inv(int a,int b_in,int c_in,int c_out,int xlt_l,int L,int total,quantum_reg *reg)

{
  if (a == 0) {
    quantum_cnot(b_in,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
  }
  if (a == 3) {
    quantum_cnot(b_in,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_cnot(L,c_in,reg);
    quantum_toffoli(L,c_in,c_out,reg);
  }
  if (a == 1) {
    quantum_cnot(b_in,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
  }
  if (a == 2) {
    quantum_sigma_x(xlt_l,reg);
    quantum_cnot(b_in,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_toffoli(b_in,c_in,c_out,reg);
    quantum_toffoli(L,xlt_l,b_in,reg);
    quantum_sigma_x(xlt_l,reg);
  }
  return;
}



void muxha(int a,int b_in,int c_in,int xlt_l,int L,int total,quantum_reg *reg)

{
  if (a == 0) {
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 3) {
    quantum_cnot(L,c_in,reg);
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 1) {
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 2) {
    quantum_sigma_x(xlt_l,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_cnot(b_in,c_in,reg);
    quantum_sigma_x(xlt_l,reg);
  }
  return;
}



void muxha_inv(int a,int b_in,int c_in,int xlt_l,int L,int total,quantum_reg *reg)

{
  if (a == 0) {
    quantum_cnot(b_in,c_in,reg);
  }
  if (a == 3) {
    quantum_cnot(b_in,c_in,reg);
    quantum_cnot(L,c_in,reg);
  }
  if (a == 1) {
    quantum_cnot(b_in,c_in,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
  }
  if (a == 2) {
    quantum_sigma_x(xlt_l,reg);
    quantum_cnot(b_in,c_in,reg);
    quantum_toffoli(L,xlt_l,c_in,reg);
    quantum_sigma_x(xlt_l,reg);
  }
  return;
}



void madd(int a,int a_inv,int width,quantum_reg *reg)

{
  int total_00;
  int total;
  int j;
  int i;
  
  total_00 = (width * 2 + 1) * 2;
  i = 0;
  while (i < width + -1) {
    if ((a >> ((byte)i & 0x1f) & 1U) == 0) {
      j = 0;
    }
    else {
      j = 2;
    }
    if ((a_inv >> ((byte)i & 0x1f) & 1U) != 0) {
      j = j + 1;
    }
    muxfa(j,width + i,i,i + 1,width * 2,width * 2 + 1,total_00,reg);
    i = i + 1;
  }
  j = 0;
  if ((a >> ((char)width - 1U & 0x1f) & 1U) != 0) {
    j = 2;
  }
  if ((a_inv >> ((char)width - 1U & 0x1f) & 1U) != 0) {
    j = j + 1;
  }
  muxha(j,width * 2 + -1,width + -1,width * 2,width * 2 + 1,total_00,reg);
  return;
}



void madd_inv(int a,int a_inv,int width,quantum_reg *reg)

{
  int total_00;
  int total;
  int j;
  int i;
  
  total_00 = (width * 2 + 1) * 2;
  j = 0;
  if ((a >> ((char)width - 1U & 0x1f) & 1U) != 0) {
    j = 2;
  }
  if ((a_inv >> ((char)width - 1U & 0x1f) & 1U) != 0) {
    j = j + 1;
  }
  muxha_inv(j,width + -1,width * 2 + -1,width * 2,width * 2 + 1,total_00,reg);
  i = width + -2;
  while (-1 < i) {
    if ((a >> ((byte)i & 0x1f) & 1U) == 0) {
      j = 0;
    }
    else {
      j = 2;
    }
    if ((a_inv >> ((byte)i & 0x1f) & 1U) != 0) {
      j = j + 1;
    }
    muxfa_inv(j,i,width + i,width + 1 + i,width * 2,width * 2 + 1,total_00,reg);
    i = i + -1;
  }
  return;
}



void addn(int N,int a,int width,quantum_reg *reg)

{
  test_sum(N - a,width,reg);
  madd(((1 << ((byte)width & 0x1f)) + a) - N,a,width,reg);
  return;
}



void addn_inv(int N,int a,int width,quantum_reg *reg)

{
  quantum_cnot(width * 2 + 1,width * 2,reg);
  madd_inv((1 << ((byte)width & 0x1f)) - a,N - a,width,reg);
  quantum_swaptheleads(width,reg);
  test_sum(a,width,reg);
  return;
}



void add_mod_n(int N,int a,int width,quantum_reg *reg)

{
  addn(N,a,width,reg);
  addn_inv(N,a,width,reg);
  return;
}



void quantum_mu2char(ulonglong mu,uchar *buf)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint local_24;
  uint local_20;
  int size;
  int i;
  
  i = 0;
  while (local_20 = (uint)(mu >> 0x20), local_24 = (uint)mu, i < 8) {
    uVar1 = ~(i - 8U) * 8;
    bVar5 = (byte)uVar1;
    bVar2 = bVar5 & 0x1f;
    bVar2 = (byte)(local_24 >> bVar2) | (byte)(local_20 << 0x20 - bVar2);
    if ((uVar1 & 0x20) != 0) {
      bVar2 = (byte)(local_20 >> (bVar5 & 0x1f));
    }
    buf[i] = bVar2;
    uVar1 = ~(i - 8U) * 8;
    bVar5 = (byte)uVar1;
    bVar2 = bVar5 & 0x1f;
    uVar3 = 1 << (bVar5 & 0x1f);
    uVar4 = uVar3;
    uVar6 = 0 << bVar2 | 1U >> 0x20 - bVar2;
    if ((uVar1 & 0x20) != 0) {
      uVar4 = 0;
      uVar6 = uVar3;
    }
    mu = CONCAT44(local_20 & (uVar6 - 1) + (uint)(uVar4 != 0),local_24 & uVar4 - 1);
    i = i + 1;
  }
  return;
}



void quantum_int2char(int j,uchar *buf)

{
  int size;
  int i;
  
  i = 0;
  while (i < 4) {
    buf[i] = (uchar)(j / (1 << (~((char)i - 4U) * '\b' & 0x1f)));
    j = j % (1 << (~((char)i - 4U) * '\b' & 0x1f));
    i = i + 1;
  }
  return;
}



void quantum_double2char(double d,uchar *buf)

{
  uchar local_1c [16];
  uchar *p;
  int i;
  
  i = 0;
  while ((uint)i < 8) {
    buf[i] = local_1c[i];
    i = i + 1;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong quantum_char2mu(uchar *buf)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  ulonglong mu;
  int size;
  int i;
  
  mu._0_4_ = 0;
  mu._4_4_ = 0;
  i = 7;
  while (-1 < i) {
    uVar1 = ~(i - 8U) * 8;
    bVar5 = (byte)uVar1;
    bVar2 = bVar5 & 0x1f;
    uVar3 = (uint)buf[i] << (bVar5 & 0x1f);
    uVar4 = uVar3;
    uVar6 = 0 << bVar2 | (uint)(buf[i] >> 0x20 - bVar2);
    if ((uVar1 & 0x20) != 0) {
      uVar4 = 0;
      uVar6 = uVar3;
    }
    bVar7 = CARRY4((uint)mu,uVar4);
    mu._0_4_ = (uint)mu + uVar4;
    mu._4_4_ = mu._4_4_ + uVar6 + (uint)bVar7;
    i = i + -1;
  }
  return CONCAT44(mu._4_4_,(uint)mu);
}



int quantum_char2int(uchar *buf)

{
  int j;
  int size;
  int i;
  
  j = 0;
  i = 3;
  while (-1 < i) {
    j = j + ((uint)buf[i] << (~((char)i - 4U) * '\b' & 0x1f));
    i = i + -1;
  }
  return j;
}



double quantum_char2double(uchar *buf)

{
  double *d;
  
  return *(double *)buf;
}



void quantum_objcode_start(void)

{
  opstatus = 1;
  allocated = 1;
  objcode = (uchar *)malloc(0x10000);
  if (objcode == (uchar *)0x0) {
    quantum_error(2);
  }
  quantum_memman(0x10000);
  return;
}



void quantum_objcode_stop(void)

{
  opstatus = 0;
  free(objcode);
  objcode = (uchar *)0x0;
  quantum_memman(allocated * -0x10000);
  allocated = 0;
  return;
}



int quantum_objcode_put(uchar operation,...)

{
  int iVar1;
  int in_GS_OFFSET;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_80;
  ulonglong mu;
  double d;
  va_list args;
  int size;
  int i;
  uchar buf [80];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  size = 0;
  if (opstatus == 0) {
    local_80 = 0;
    goto LAB_0804ea67;
  }
  buf[0] = operation;
  if (operation < 0xc) {
    if (operation < 7) {
      if (operation == '\x02') {
        quantum_int2char(in_stack_00000008,buf + 1);
        quantum_int2char(in_stack_0000000c,buf + 5);
        quantum_int2char(in_stack_00000010,buf + 9);
        size = 0xd;
      }
      else {
        if (2 < operation) goto LAB_0804e8a9;
        if (operation != '\0') {
          if (operation == '\x01') goto LAB_0804e7d8;
          goto LAB_0804e9b1;
        }
        quantum_mu2char(CONCAT44(in_stack_0000000c,in_stack_00000008),buf + 1);
        size = 9;
      }
    }
    else {
      quantum_int2char(in_stack_00000008,buf + 1);
      quantum_double2char((double)CONCAT44(in_stack_00000010,in_stack_0000000c),buf + 5);
      size = 0xd;
    }
  }
  else {
    if (operation == -0x80) {
LAB_0804e9a8:
      size = 1;
    }
    else {
      if (operation < 0x81) {
        if (operation == '\r') {
          quantum_int2char(in_stack_00000008,buf + 1);
          quantum_int2char(in_stack_0000000c,buf + 5);
          quantum_double2char((double)CONCAT44(in_stack_00000014,in_stack_00000010),buf + 9);
          size = 0x11;
        }
        else {
          if (0xc < operation) {
            if (operation != '\x0e') goto LAB_0804e9b1;
            goto LAB_0804e8a9;
          }
LAB_0804e7d8:
          quantum_int2char(in_stack_00000008,buf + 1);
          quantum_int2char(in_stack_0000000c,buf + 5);
          size = 9;
        }
      }
      else {
        if (operation < 0x83) {
LAB_0804e8a9:
          quantum_int2char(in_stack_00000008,buf + 1);
          size = 5;
        }
        else {
          if (operation == -1) goto LAB_0804e9a8;
LAB_0804e9b1:
          quantum_error(0x10001);
        }
      }
    }
  }
  if (position >> 0x10 < position + size >> 0x10) {
    allocated = allocated + 1;
    objcode = (uchar *)realloc(objcode,allocated * 0x10000);
    if (objcode == (uchar *)0x0) {
      quantum_error(2);
    }
    quantum_memman(0x10000);
  }
  i = 0;
  while (i < size) {
    objcode[position] = buf[i];
    position = position + 1;
    i = i + 1;
  }
  local_80 = 1;
LAB_0804ea67:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_80;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int quantum_objcode_write(char *file)

{
  FILE *__s;
  int local_18;
  FILE *fhd;
  
  if (opstatus == 0) {
    fwrite("Object code generation not active! Forgot to call quantum_objcode_start?\n",1,0x49,
           stderr);
    local_18 = 1;
  }
  else {
    if (file == (char *)0x0) {
      file = globalfile;
    }
    __s = fopen(file,"w");
    if (__s == (FILE *)0x0) {
      local_18 = -1;
    }
    else {
      fwrite(objcode,position,1,__s);
      fclose(__s);
      local_18 = 0;
    }
  }
  return local_18;
}



void quantum_objcode_file(char *file)

{
  globalfile = file;
  return;
}



void quantum_objcode_exit(char *file)

{
  quantum_objcode_write((char *)0x0);
  quantum_objcode_stop();
  return;
}



// WARNING: Could not reconcile some variable overlaps

void quantum_objcode_run(char *file,quantum_reg *reg)

{
  int iVar1;
  quantum_reg *pqVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_GS_OFFSET;
  ulonglong initval;
  quantum_reg local_bc [2];
  quantum_reg *local_94;
  char *local_90;
  double d;
  ulonglong mu;
  FILE *fhd;
  int l;
  int k;
  int j;
  int i;
  uchar operation;
  uchar buf [80];
  
  local_90 = file;
  local_94 = reg;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  fhd = (FILE *)fopen(file,"r");
  if (fhd == (FILE *)0x0) {
    fprintf(stderr,"quantum_objcode_run: Could not open %s: ",local_90);
    perror((char *)0x0);
  }
  else {
    i = 0;
    while( true ) {
      iVar4 = feof((FILE *)fhd);
      if (iVar4 != 0) break;
      j = 0;
      while (j < 0x50) {
        buf[j] = '\0';
        j = j + 1;
      }
      uVar3 = fgetc((FILE *)fhd);
      operation = (uchar)uVar3;
      uVar5 = uVar3 & 0xff;
      if (uVar5 < 0xc) {
        if (uVar5 < 7) {
          if (uVar5 == 2) {
            fread(buf,4,1,(FILE *)fhd);
            j = quantum_char2int(buf);
            fread(buf,4,1,(FILE *)fhd);
            k = quantum_char2int(buf);
            fread(buf,4,1,(FILE *)fhd);
            l = quantum_char2int(buf);
            quantum_toffoli(j,k,l,local_94);
          }
          else {
            if (2 < uVar5) goto LAB_0804eecb;
            if (uVar5 != 0) {
              if (uVar5 == 1) goto LAB_0804ed50;
              goto LAB_0804f294;
            }
            fread(buf,8,1,(FILE *)fhd);
            initval = quantum_char2mu(buf);
            pqVar2 = local_94;
            mu = initval;
            quantum_new_qureg(local_bc,initval,0xc);
            pqVar2->width = local_bc[0].width;
            pqVar2->size = local_bc[0].size;
            pqVar2->hashw = local_bc[0].hashw;
            pqVar2->node = local_bc[0].node;
            pqVar2->hash = local_bc[0].hash;
          }
        }
        else {
          fread(buf,4,1,(FILE *)fhd);
          j = quantum_char2int(buf);
          fread(buf,8,1,(FILE *)fhd);
          d = quantum_char2double(buf);
          switch(operation) {
          case '\a':
            quantum_r_x(j,(float)d,local_94);
            break;
          case '\b':
            quantum_r_y(j,(float)d,local_94);
            break;
          case '\t':
            quantum_r_z(j,(float)d,local_94);
            break;
          case '\n':
            quantum_phase_kick(j,(float)d,local_94);
            break;
          case '\v':
            quantum_phase_scale(j,(float)d,local_94);
          }
        }
      }
      else {
        if (uVar5 == 0x80) {
          quantum_measure(*local_94);
        }
        else {
          if (uVar5 < 0x81) {
            if (uVar5 == 0xd) {
              fread(buf,4,1,(FILE *)fhd);
              j = quantum_char2int(buf);
              fread(buf,4,1,(FILE *)fhd);
              k = quantum_char2int(buf);
              fread(buf,8,1,(FILE *)fhd);
              d = quantum_char2double(buf);
              quantum_cond_phase_kick(j,k,(float)d,local_94);
            }
            else {
              if (0xc < uVar5) {
                if (uVar5 != 0xe) goto LAB_0804f294;
                goto LAB_0804eecb;
              }
LAB_0804ed50:
              fread(buf,4,1,(FILE *)fhd);
              j = quantum_char2int(buf);
              fread(buf,4,1,(FILE *)fhd);
              k = quantum_char2int(buf);
              if (operation == '\x01') {
                quantum_cnot(j,k,local_94);
              }
              else {
                if (operation == '\f') {
                  quantum_cond_phase(j,k,local_94);
                }
              }
            }
          }
          else {
            if (uVar5 < 0x83) {
LAB_0804eecb:
              fread(buf,4,1,(FILE *)fhd);
              j = quantum_char2int(buf);
              if (operation == '\x06') {
                quantum_hadamard(j,local_94);
              }
              else {
                if (operation < 7) {
                  if (operation == '\x04') {
                    quantum_sigma_y(j,local_94);
                  }
                  else {
                    if (operation < 5) {
                      if (operation == '\x03') {
                        quantum_sigma_x(j,local_94);
                      }
                    }
                    else {
                      quantum_sigma_z(j,local_94);
                    }
                  }
                }
                else {
                  if (operation == -0x7f) {
                    quantum_bmeasure(j,local_94);
                  }
                  else {
                    if (operation == -0x7e) {
                      quantum_bmeasure_bitpreserve(j,local_94);
                    }
                    else {
                      if (operation == '\x0e') {
                        quantum_swaptheleads(j,local_94);
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar5 != 0xff) {
LAB_0804f294:
                fprintf(stderr,"%i: Unknown opcode 0x(%X)!\n",i,uVar3 & 0xff);
                goto LAB_0804f2dd;
              }
            }
          }
        }
      }
      i = i + 1;
    }
    fclose((FILE *)fhd);
  }
LAB_0804f2dd:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void emul(int a,int L,int width,quantum_reg *reg)

{
  int i;
  
  i = width + -1;
  while (-1 < i) {
    if ((a >> ((byte)i & 0x1f) & 1U) != 0) {
      quantum_toffoli((width + 1) * 2,L,width + i,reg);
    }
    i = i + -1;
  }
  return;
}



void muln(int N,int a,int ctl,int width,quantum_reg *reg)

{
  int target;
  int L;
  int i;
  
  target = width * 2 + 1;
  quantum_toffoli(ctl,(width + 1) * 2,target,reg);
  emul(a % N,target,width,reg);
  quantum_toffoli(ctl,(width + 1) * 2,target,reg);
  i = 1;
  while (i < width) {
    quantum_toffoli(ctl,(width + 1) * 2 + i,target,reg);
    add_mod_n(N,(a << ((byte)i & 0x1f)) % N,width,reg);
    quantum_toffoli(ctl,(width + 1) * 2 + i,target,reg);
    i = i + 1;
  }
  return;
}



void muln_inv(int N,int a,int ctl,int width,quantum_reg *reg)

{
  int target;
  int iVar1;
  int L;
  int i;
  
  target = width * 2 + 1;
  iVar1 = quantum_inverse_mod(N,a);
  i = width + -1;
  while (0 < i) {
    quantum_toffoli(ctl,(width + 1) * 2 + i,target,reg);
    add_mod_n(N,N - (iVar1 << ((byte)i & 0x1f)) % N,width,reg);
    quantum_toffoli(ctl,(width + 1) * 2 + i,target,reg);
    i = i + -1;
  }
  quantum_toffoli(ctl,(width + 1) * 2,target,reg);
  emul(iVar1 % N,target,width,reg);
  quantum_toffoli(ctl,(width + 1) * 2,target,reg);
  return;
}



void mul_mod_n(int N,int a,int ctl,int width,quantum_reg *reg)

{
  muln(N,a,ctl,width,reg);
  quantum_swaptheleads_omuln_controlled(ctl,width,reg);
  muln_inv(N,a,ctl,width,reg);
  return;
}



void quantum_qec_set_status(int stype,int swidth)

{
  type = stype;
  width = swidth;
  return;
}



void quantum_qec_get_status(int *ptype,int *pwidth)

{
  if (ptype != (int *)0x0) {
    *ptype = type;
  }
  if (pwidth != (int *)0x0) {
    *pwidth = width;
  }
  return;
}



void quantum_qec_encode(int type,int width,quantum_reg *reg)

{
  float l;
  float lambda;
  int i;
  
  l = quantum_get_decoherence();
  quantum_set_decoherence(0.0);
  i = 0;
  while (i < reg->width) {
    if (reg->width + -1 == i) {
      quantum_set_decoherence(l);
    }
    if (i < width) {
      quantum_hadamard(reg->width + i,reg);
      quantum_hadamard(reg->width * 2 + i,reg);
      quantum_cnot(reg->width + i,i,reg);
      quantum_cnot(reg->width * 2 + i,i,reg);
    }
    else {
      quantum_cnot(i,reg->width + i,reg);
      quantum_cnot(i,reg->width * 2 + i,reg);
    }
    i = i + 1;
  }
  quantum_qec_set_status(1,reg->width);
  reg->width = reg->width * 3;
  return;
}



void quantum_qec_decode(int type,int width,quantum_reg *reg)

{
  int pos;
  int iVar1;
  int iVar2;
  float l;
  float lambda;
  int swidth;
  int b;
  int a;
  int i;
  
  l = quantum_get_decoherence();
  quantum_set_decoherence(0.0);
  pos = reg->width / 3;
  quantum_qec_set_status(0,0);
  i = reg->width / 3;
  while (i = i + -1, -1 < i) {
    if (i == 0) {
      quantum_set_decoherence(l);
    }
    if (i < width) {
      quantum_cnot(pos * 2 + i,i,reg);
      quantum_cnot(pos + i,i,reg);
      quantum_hadamard(pos * 2 + i,reg);
      quantum_hadamard(pos + i,reg);
    }
    else {
      quantum_cnot(i,pos * 2 + i,reg);
      quantum_cnot(i,pos + i,reg);
    }
  }
  i = 1;
  while (i <= pos) {
    iVar1 = quantum_bmeasure(pos,reg);
    iVar2 = quantum_bmeasure(pos * 2 - i,reg);
    if (((iVar1 == 1) && (iVar2 == 1)) && (i + -1 < width)) {
      quantum_sigma_z(i + -1,reg);
    }
    i = i + 1;
  }
  return;
}



int quantum_qec_counter(int inc,int frequency,quantum_reg *reg)

{
  if (inc < 1) {
    if (inc < 0) {
      quantum_qec_counter::counter = 0;
    }
  }
  else {
    quantum_qec_counter::counter = quantum_qec_counter::counter + inc;
  }
  if (0 < frequency) {
    quantum_qec_counter::freq = frequency;
  }
  if (quantum_qec_counter::freq <= quantum_qec_counter::counter) {
    quantum_qec_counter::counter = 0;
    quantum_qec_decode(type,width,reg);
    quantum_qec_encode(type,width,reg);
  }
  return quantum_qec_counter::counter;
}



void quantum_sigma_x_ft(int target,quantum_reg *reg)

{
  int iVar1;
  float l;
  float lambda;
  int tmp;
  
  iVar1 = type;
  type = 0;
  l = quantum_get_decoherence();
  quantum_set_decoherence(0.0);
  quantum_sigma_x(target,reg);
  quantum_sigma_x(width + target,reg);
  quantum_set_decoherence(l);
  quantum_sigma_x(width * 2 + target,reg);
  quantum_qec_counter(1,0,reg);
  type = iVar1;
  return;
}



void quantum_cnot_ft(int control,int target,quantum_reg *reg)

{
  int iVar1;
  float l;
  float lambda;
  int tmp;
  
  iVar1 = type;
  type = 0;
  l = quantum_get_decoherence();
  quantum_set_decoherence(0.0);
  quantum_cnot(control,target,reg);
  quantum_cnot(width + control,width + target,reg);
  quantum_set_decoherence(l);
  quantum_cnot(width * 2 + control,width * 2 + target,reg);
  quantum_qec_counter(1,0,reg);
  type = iVar1;
  return;
}



void quantum_toffoli_ft(int control1,int control2,int target,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  ulonglong mask;
  int c2;
  int c1;
  int i;
  
  bVar2 = (byte)target & 0x1f;
  uVar9 = 1 << ((byte)target & 0x1f);
  uVar10 = uVar9;
  uVar11 = 0 << bVar2 | 1U >> 0x20 - bVar2;
  if ((target & 0x20U) != 0) {
    uVar10 = 0;
    uVar11 = uVar9;
  }
  bVar5 = (byte)(width + target);
  bVar2 = bVar5 & 0x1f;
  uVar3 = 1 << (bVar5 & 0x1f);
  uVar9 = uVar3;
  uVar7 = 0 << bVar2 | 1U >> 0x20 - bVar2;
  if ((width + target & 0x20U) != 0) {
    uVar9 = 0;
    uVar7 = uVar3;
  }
  uVar6 = width * 2 + target;
  bVar5 = (byte)uVar6;
  bVar2 = bVar5 & 0x1f;
  uVar4 = 1 << (bVar5 & 0x1f);
  uVar3 = uVar4;
  uVar8 = 0 << bVar2 | 1U >> 0x20 - bVar2;
  if ((uVar6 & 0x20) != 0) {
    uVar3 = 0;
    uVar8 = uVar4;
  }
  i = 0;
  while (i < reg->size) {
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    bVar2 = (byte)control1 & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((control1 & 0x20U) != 0) {
      bVar2 = (byte)(uVar4 >> ((byte)control1 & 0x1f));
    }
    bVar12 = (bVar2 & 1) != 0;
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    bVar5 = (byte)(width + control1);
    bVar2 = bVar5 & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((width + control1 & 0x20U) != 0) {
      bVar2 = (byte)(uVar4 >> (bVar5 & 0x1f));
    }
    if ((bVar2 & 1) != 0) {
      bVar12 = !bVar12;
    }
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    uVar6 = width * 2 + control1;
    bVar5 = (byte)uVar6;
    bVar2 = bVar5 & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((uVar6 & 0x20) != 0) {
      bVar2 = (byte)(uVar4 >> (bVar5 & 0x1f));
    }
    if ((bVar2 & 1) != 0) {
      bVar12 = (bool)(bVar12 ^ 1);
    }
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    bVar2 = (byte)control2 & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((control2 & 0x20U) != 0) {
      bVar2 = (byte)(uVar4 >> ((byte)control2 & 0x1f));
    }
    bVar13 = (bVar2 & 1) != 0;
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    bVar5 = (byte)(width + control2);
    bVar2 = bVar5 & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((width + control2 & 0x20U) != 0) {
      bVar2 = (byte)(uVar4 >> (bVar5 & 0x1f));
    }
    if ((bVar2 & 1) != 0) {
      bVar13 = !bVar13;
    }
    uVar4 = *(uint *)((int)&reg->node[i].state + 4);
    uVar6 = width * 2 + control2;
    bVar5 = (byte)uVar6;
    bVar2 = bVar5 & 0x1f;
    bVar2 = (byte)(*(uint *)&reg->node[i].state >> bVar2) | (byte)(uVar4 << 0x20 - bVar2);
    if ((uVar6 & 0x20) != 0) {
      bVar2 = (byte)(uVar4 >> (bVar5 & 0x1f));
    }
    if ((bVar2 & 1) != 0) {
      bVar13 = (bool)(bVar13 ^ 1);
    }
    if ((bVar12) && (bVar13)) {
      pqVar1 = reg->node;
      uVar4 = *(uint *)((int)&reg->node[i].state + 4);
      *(uint *)&pqVar1[i].state = *(uint *)&reg->node[i].state ^ uVar3 + uVar10 + uVar9;
      *(uint *)((int)&pqVar1[i].state + 4) =
           uVar4 ^ uVar8 + uVar11 + uVar7 + (uint)CARRY4(uVar10,uVar9) +
                   (uint)CARRY4(uVar3,uVar10 + uVar9);
    }
    i = i + 1;
  }
  quantum_decohere(reg);
  quantum_qec_counter(1,0,reg);
  return;
}



void quantum_qft(int width,quantum_reg *reg)

{
  int j;
  int i;
  
  i = width + -1;
  while (-1 < i) {
    j = width + -1;
    while (i < j) {
      quantum_cond_phase(j,i,reg);
      j = j + -1;
    }
    quantum_hadamard(i,reg);
    i = i + -1;
  }
  return;
}



void quantum_qft_inv(int width,quantum_reg *reg)

{
  int j;
  int i;
  
  i = 0;
  while (i < width) {
    quantum_hadamard(i,reg);
    j = i;
    while (j = j + 1, j < width) {
      quantum_cond_phase_inv(j,i,reg);
    }
    i = i + 1;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void quantum_rk4(quantum_reg *reg,double t,double dt,anon_subr_quantum_reg_ulonglong_double *H)

{
  int *piVar1;
  int iVar2;
  double local_ac;
  double local_a4;
  quantum_reg local_9c;
  undefined8 local_7c;
  undefined8 local_74;
  quantum_reg tmp;
  quantum_reg out;
  quantum_reg k;
  double r;
  int hashw;
  void *hash;
  int i;
  
  piVar1 = reg->hash;
  reg->hash = (int *)0x0;
  iVar2 = reg->hashw;
  reg->hashw = 0;
  local_74 = t;
  local_7c = dt;
  quantum_matrix_qureg(&local_9c,H,t,reg);
  k.width = local_9c.width;
  k.size = local_9c.size;
  k.hashw = local_9c.hashw;
  k.node = local_9c.node;
  k.hash = local_9c.hash;
  __muldc3(&local_ac,local_7c,0,0,0,0xbff0000000000000);
  __divdc3(&local_ac,SUB84(local_ac,0),(int)((ulonglong)local_ac >> 0x20),SUB84(local_a4,0),
           (int)((ulonglong)local_a4 >> 0x20),0x4000000000000000,0);
  quantum_scalar_qureg(CONCAT44((float)local_a4,(float)local_ac),&k);
  quantum_vectoradd(&local_9c,reg,&k);
  tmp.width = local_9c.width;
  tmp.size = local_9c.size;
  tmp.hashw = local_9c.hashw;
  tmp.node = local_9c.node;
  tmp.hash = local_9c.hash;
  quantum_scalar_qureg(0x3eaaaaab,&k);
  quantum_vectoradd(&local_9c,reg,&k);
  out.width = local_9c.width;
  out.size = local_9c.size;
  out.hashw = local_9c.hashw;
  out.node = local_9c.node;
  out.hash = local_9c.hash;
  quantum_delete_qureg(&k);
  quantum_matrix_qureg(&local_9c,H,local_7c / 2.0 + local_74,&tmp);
  k.width = local_9c.width;
  k.size = local_9c.size;
  k.hashw = local_9c.hashw;
  k.node = local_9c.node;
  k.hash = local_9c.hash;
  quantum_delete_qureg(&tmp);
  __muldc3(&local_ac,local_7c,0,0,0,0xbff0000000000000);
  __divdc3(&local_ac,SUB84(local_ac,0),(int)((ulonglong)local_ac >> 0x20),SUB84(local_a4,0),
           (int)((ulonglong)local_a4 >> 0x20),0x4000000000000000,0);
  quantum_scalar_qureg(CONCAT44((float)local_a4,(float)local_ac),&k);
  quantum_vectoradd(&local_9c,reg,&k);
  tmp.width = local_9c.width;
  tmp.size = local_9c.size;
  tmp.hashw = local_9c.hashw;
  tmp.node = local_9c.node;
  tmp.hash = local_9c.hash;
  quantum_scalar_qureg(0x3f2aaaab,&k);
  quantum_vectoradd_inplace(&out,&k);
  quantum_delete_qureg(&k);
  quantum_matrix_qureg(&local_9c,H,local_7c / 2.0 + local_74,&tmp);
  k.width = local_9c.width;
  k.size = local_9c.size;
  k.hashw = local_9c.hashw;
  k.node = local_9c.node;
  k.hash = local_9c.hash;
  quantum_delete_qureg(&tmp);
  __muldc3(&local_ac,local_7c,0,0,0,0xbff0000000000000);
  quantum_scalar_qureg(CONCAT44((float)local_a4,(float)local_ac),&k);
  quantum_vectoradd(&local_9c,reg,&k);
  tmp.width = local_9c.width;
  tmp.size = local_9c.size;
  tmp.hashw = local_9c.hashw;
  tmp.node = local_9c.node;
  tmp.hash = local_9c.hash;
  quantum_scalar_qureg(0x3eaaaaab,&k);
  quantum_vectoradd_inplace(&out,&k);
  quantum_delete_qureg(&k);
  quantum_matrix_qureg(&local_9c,H,local_74 + local_7c,&tmp);
  k.width = local_9c.width;
  k.size = local_9c.size;
  k.hashw = local_9c.hashw;
  k.node = local_9c.node;
  k.hash = local_9c.hash;
  quantum_delete_qureg(&tmp);
  __muldc3(&local_ac,local_7c,0,0,0,0xbff0000000000000);
  __divdc3(&local_ac,SUB84(local_ac,0),(int)((ulonglong)local_ac >> 0x20),SUB84(local_a4,0),
           (int)((ulonglong)local_a4 >> 0x20),0x4018000000000000,0);
  quantum_scalar_qureg(CONCAT44((float)local_a4,(float)local_ac),&k);
  quantum_vectoradd_inplace(&out,&k);
  quantum_delete_qureg(&k);
  quantum_delete_qureg(reg);
  i = 0;
  while (i < out.size) {
    quantum_prob(out.node[i].amplitude);
    i = i + 1;
  }
  reg->width = out.width;
  reg->size = out.size;
  reg->hashw = iVar2;
  reg->node = out.node;
  reg->hash = piVar1;
  return;
}



double quantum_rk4a(quantum_reg *reg,double t,double *dt,double epsilon,
                   anon_subr_quantum_reg_ulonglong_double *H)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  quantum_reg_node *pqVar8;
  int *piVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  quantum_reg tmp;
  quantum_reg old;
  quantum_reg reg2;
  double dtused;
  double r;
  double delta;
  int hashw;
  void *hash;
  int i;
  
  piVar3 = reg->hash;
  reg->hash = (int *)0x0;
  iVar4 = reg->hashw;
  reg->hashw = 0;
  quantum_copy_qureg(reg,&old);
  quantum_copy_qureg(reg,&reg2);
  while( true ) {
    quantum_rk4(reg,t,*dt,H);
    quantum_rk4(&reg2,t,*dt / 2.0,H);
    quantum_rk4(&reg2,t,*dt / 2.0,H);
    delta = 0.0;
    i = 0;
    while (i < reg->size) {
      fVar11 = quantum_real(CONCAT44(*(float *)((int)&reg->node[i].amplitude + 4) -
                                     *(float *)((int)&reg2.node[i].amplitude + 4),
                                     *(float *)&reg->node[i].amplitude -
                                     *(float *)&reg2.node[i].amplitude));
      fVar12 = quantum_imag(CONCAT44(*(float *)((int)&reg->node[i].amplitude + 4) -
                                     *(float *)((int)&reg2.node[i].amplitude + 4),
                                     *(float *)&reg->node[i].amplitude -
                                     *(float *)&reg2.node[i].amplitude));
      if (fVar11 <= fVar12) {
        fVar12 = quantum_imag(CONCAT44(*(float *)((int)&reg->node[i].amplitude + 4) -
                                       *(float *)((int)&reg2.node[i].amplitude + 4),
                                       *(float *)&reg->node[i].amplitude -
                                       *(float *)&reg2.node[i].amplitude));
        fVar11 = quantum_imag(CONCAT44(*(float *)((int)&reg2.node[i].amplitude + 4) +
                                       *(float *)((int)&reg->node[i].amplitude + 4),
                                       *(float *)&reg2.node[i].amplitude +
                                       *(float *)&reg->node[i].amplitude));
        fVar11 = (fVar12 + fVar12) / fVar11;
      }
      else {
        fVar12 = quantum_real(CONCAT44(*(float *)((int)&reg->node[i].amplitude + 4) -
                                       *(float *)((int)&reg2.node[i].amplitude + 4),
                                       *(float *)&reg->node[i].amplitude -
                                       *(float *)&reg2.node[i].amplitude));
        fVar11 = quantum_real(CONCAT44(*(float *)((int)&reg2.node[i].amplitude + 4) +
                                       *(float *)((int)&reg->node[i].amplitude + 4),
                                       *(float *)&reg2.node[i].amplitude +
                                       *(float *)&reg->node[i].amplitude));
        fVar11 = (fVar12 + fVar12) / fVar11;
      }
      r = (double)fVar11;
      if (delta < r) {
        delta = r;
      }
      i = i + 1;
    }
    dVar1 = *dt;
    dVar2 = *dt;
    dVar10 = pow(epsilon / delta,0.2);
    *dt = dVar10 * dVar2;
    if (delta <= epsilon) break;
    iVar5 = reg->width;
    iVar6 = reg->size;
    iVar7 = reg->hashw;
    pqVar8 = reg->node;
    piVar9 = reg->hash;
    reg->width = old.width;
    reg->size = old.size;
    reg->hashw = old.hashw;
    reg->node = old.node;
    reg->hash = old.hash;
    old.width = iVar5;
    old.size = iVar6;
    old.hashw = iVar7;
    old.node = pqVar8;
    old.hash = piVar9;
    memcpy(reg2.node,reg->node,reg->size << 4);
    memcpy(old.node,reg->node,reg->size << 4);
  }
  reg->hash = piVar3;
  reg->hashw = iVar4;
  return dVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



quantum_reg * quantum_matrix2qureg(quantum_reg *__return_storage_ptr__,quantum_matrix *m,int width)

{
  undefined4 uVar1;
  quantum_reg_node *pqVar2;
  int *piVar3;
  byte bVar4;
  quantum_reg reg;
  int size;
  int j;
  int i;
  
  size = 0;
  if (m->cols != 1) {
    quantum_error(0x10000);
  }
  i = 0;
  while (i < m->rows) {
    if ((*(float *)(m->t + i) != 0.0) || (*(float *)((int)(m->t + i) + 4) != 0.0)) {
      size = size + 1;
    }
    i = i + 1;
  }
  pqVar2 = (quantum_reg_node *)calloc(size,0x10);
  if (pqVar2 == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(size << 4);
  bVar4 = (byte)(width + 2);
  piVar3 = (int *)calloc(1 << (bVar4 & 0x1f),4);
  if (piVar3 == (int *)0x0) {
    quantum_error(2);
  }
  quantum_memman(4 << (bVar4 & 0x1f));
  i = 0;
  j = 0;
  while (i < m->rows) {
    if ((*(float *)(m->t + i) != 0.0) || (*(float *)((int)(m->t + i) + 4) != 0.0)) {
      *(int *)&pqVar2[j].state = i;
      *(int *)((int)&pqVar2[j].state + 4) = i >> 0x1f;
      uVar1 = *(undefined4 *)((int)(m->t + i) + 4);
      *(undefined4 *)&pqVar2[j].amplitude = *(undefined4 *)(m->t + i);
      *(undefined4 *)((int)&pqVar2[j].amplitude + 4) = uVar1;
      j = j + 1;
    }
    i = i + 1;
  }
  __return_storage_ptr__->width = width;
  __return_storage_ptr__->size = size;
  __return_storage_ptr__->hashw = width + 2;
  __return_storage_ptr__->node = pqVar2;
  __return_storage_ptr__->hash = piVar3;
  return __return_storage_ptr__;
}



quantum_reg * quantum_new_qureg(quantum_reg *__return_storage_ptr__,ulonglong initval,int width)

{
  quantum_reg_node *pqVar1;
  int *piVar2;
  char *file;
  byte bVar3;
  quantum_reg reg;
  char *c;
  
  pqVar1 = (quantum_reg_node *)calloc(1,0x10);
  if (pqVar1 == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(0x10);
  bVar3 = (byte)(width + 2);
  piVar2 = (int *)calloc(1 << (bVar3 & 0x1f),4);
  if (piVar2 == (int *)0x0) {
    quantum_error(2);
  }
  quantum_memman(4 << (bVar3 & 0x1f));
  *(undefined4 *)&pqVar1->state = (undefined4)initval;
  *(undefined4 *)((int)&pqVar1->state + 4) = initval._4_4_;
  *(undefined4 *)&pqVar1->amplitude = 0x3f800000;
  *(undefined4 *)((int)&pqVar1->amplitude + 4) = 0;
  file = getenv("QUOBFILE");
  if (file != (char *)0x0) {
    quantum_objcode_start();
    quantum_objcode_file(file);
    atexit(quantum_objcode_exit);
  }
  quantum_objcode_put('\0',(undefined4)initval,initval._4_4_);
  __return_storage_ptr__->width = width;
  __return_storage_ptr__->size = 1;
  __return_storage_ptr__->hashw = width + 2;
  __return_storage_ptr__->node = pqVar1;
  __return_storage_ptr__->hash = piVar2;
  return __return_storage_ptr__;
}



quantum_reg * quantum_new_qureg_size(quantum_reg *__return_storage_ptr__,int n,int width)

{
  quantum_reg_node *pqVar1;
  quantum_reg reg;
  
  pqVar1 = (quantum_reg_node *)calloc(n,0x10);
  if (pqVar1 == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(n << 4);
  __return_storage_ptr__->width = width;
  __return_storage_ptr__->size = n;
  __return_storage_ptr__->hashw = 0;
  __return_storage_ptr__->node = pqVar1;
  __return_storage_ptr__->hash = (int *)0x0;
  return __return_storage_ptr__;
}



quantum_matrix * quantum_qureg2matrix(quantum_matrix *__return_storage_ptr__,quantum_reg reg)

{
  int iVar1;
  undefined4 uVar2;
  quantum_matrix m;
  int i;
  
  quantum_new_matrix(&m,1,1 << (SUB201(reg,0) & 0x1f));
  i = 0;
  while (i < reg.size) {
    iVar1 = *(int *)&reg.node[i].state;
    uVar2 = *(undefined4 *)((int)&reg.node[i].amplitude + 4);
    *(undefined4 *)(m.t + iVar1) = *(undefined4 *)&reg.node[i].amplitude;
    *(undefined4 *)((int)(m.t + iVar1) + 4) = uVar2;
    i = i + 1;
  }
  __return_storage_ptr__->rows = m.rows;
  __return_storage_ptr__->cols = m.cols;
  __return_storage_ptr__->t = m.t;
  return __return_storage_ptr__;
}



void quantum_destroy_hash(quantum_reg *reg)

{
  free(reg->hash);
  quantum_memman(-4 << ((byte)reg->hashw & 0x1f));
  reg->hash = (int *)0x0;
  return;
}



void quantum_delete_qureg(quantum_reg *reg)

{
  if ((reg->hashw != 0) && (reg->hash != (int *)0x0)) {
    quantum_destroy_hash(reg);
  }
  free(reg->node);
  quantum_memman(reg->size * -0x10);
  reg->node = (quantum_reg_node *)0x0;
  return;
}



void quantum_delete_qureg_hashpreserve(quantum_reg *reg)

{
  free(reg->node);
  quantum_memman(reg->size * -0x10);
  reg->node = (quantum_reg_node *)0x0;
  return;
}



void quantum_copy_qureg(quantum_reg *src,quantum_reg *dst)

{
  quantum_reg_node *pqVar1;
  int *piVar2;
  
  dst->width = src->width;
  dst->size = src->size;
  dst->hashw = src->hashw;
  dst->node = src->node;
  dst->hash = src->hash;
  pqVar1 = (quantum_reg_node *)calloc(dst->size,0x10);
  dst->node = pqVar1;
  if (dst->node == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(dst->size << 4);
  if (dst->hashw != 0) {
    piVar2 = (int *)calloc(1 << ((byte)dst->hashw & 0x1f),4);
    dst->hash = piVar2;
    if (dst->hash == (int *)0x0) {
      quantum_error(2);
    }
    quantum_memman(4 << ((byte)dst->hashw & 0x1f));
  }
  memcpy(dst->node,src->node,src->size << 4);
  return;
}



void quantum_print_qureg(quantum_reg reg)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  int j;
  int i;
  
  i = 0;
  while (i < reg.size) {
    fVar4 = quantum_prob_inline(reg.node[i].amplitude);
    dVar9 = (double)fVar4;
    uVar7 = *(undefined4 *)&reg.node[i].state;
    uVar8 = *(undefined4 *)((int)&reg.node[i].state + 4);
    fVar4 = quantum_imag(reg.node[i].amplitude);
    dVar6 = (double)fVar4;
    fVar4 = quantum_real(reg.node[i].amplitude);
    uVar5 = (undefined4)((ulonglong)(double)fVar4 >> 0x20);
    printf("% f %+fi|%lli> (%e) (|",SUB84((double)fVar4,0),uVar5,dVar6,uVar7,uVar8,dVar9);
    j = reg.width;
    while (j = j + -1, -1 < j) {
      uVar3 = (uint)(j >> 0x1f) >> 0x1e;
      if ((j + uVar3 & 3) - uVar3 == 3) {
        putchar(0x20);
      }
      uVar3 = *(uint *)((int)&reg.node[i].state + 4);
      bVar1 = (byte)j & 0x1f;
      uVar2 = *(uint *)&reg.node[i].state >> bVar1 | uVar3 << 0x20 - bVar1;
      if ((j & 0x20U) != 0) {
        uVar2 = uVar3 >> ((byte)j & 0x1f);
      }
      printf("%i",uVar2 & 1,uVar5,dVar6,uVar7,uVar8,dVar9);
    }
    puts(">)");
    i = i + 1;
  }
  putchar(10);
  return;
}



float quantum_prob_inline(complex_float a)

{
  float fVar1;
  float fVar2;
  float i;
  float r;
  
  fVar1 = quantum_real(a);
  fVar2 = quantum_imag(a);
  return fVar2 * fVar2 + fVar1 * fVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_imag(complex_float a)

{
  float *p;
  
  return a._4_4_;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float quantum_real(complex_float a)

{
  float *p;
  
  return (float)a;
}



void quantum_print_expn(quantum_reg reg)

{
  uint uVar1;
  uint uVar2;
  int i;
  
  i = 0;
  while (i < reg.size) {
    uVar1 = *(uint *)&reg.node[i].state;
    uVar2 = i << ((byte)(reg.width / 2) & 0x1f);
    printf("%i: %lli\n",i,uVar1 - uVar2,
           (*(int *)((int)&reg.node[i].state + 4) - ((int)uVar2 >> 0x1f)) - (uint)(uVar1 < uVar2));
    i = i + 1;
  }
  return;
}



void quantum_addscratch(int bits,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong l;
  int oldwidth;
  int i;
  
  reg->width = reg->width + bits;
  i = 0;
  while (i < reg->size) {
    uVar5 = *(uint *)&reg->node[i].state;
    bVar2 = (byte)bits & 0x1f;
    uVar3 = uVar5 << ((byte)bits & 0x1f);
    uVar4 = uVar3;
    uVar5 = *(int *)((int)&reg->node[i].state + 4) << bVar2 | uVar5 >> 0x20 - bVar2;
    if ((bits & 0x20U) != 0) {
      uVar4 = 0;
      uVar5 = uVar3;
    }
    pqVar1 = reg->node;
    *(uint *)&pqVar1[i].state = uVar4;
    *(uint *)((int)&pqVar1[i].state + 4) = uVar5;
    i = i + 1;
  }
  return;
}



void quantum_print_hash(quantum_reg reg)

{
  int i;
  
  i = 0;
  while (i < 1 << (SUB201(reg >> 0x40,0) & 0x1f)) {
    if (i != 0) {
      printf("%i: %i %llu\n",i,reg.hash[i] + -1,*(undefined4 *)&reg.node[-(1 - reg.hash[i])].state,
             *(undefined4 *)((int)&reg.node[-(1 - reg.hash[i])].state + 4));
    }
    i = i + 1;
  }
  return;
}



quantum_reg *
quantum_kronecker(quantum_reg *__return_storage_ptr__,quantum_reg *reg1,quantum_reg *reg2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t __nmemb;
  int iVar4;
  quantum_reg_node *pqVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  quantum_reg reg;
  int j;
  int i;
  
  iVar1 = reg1->width;
  iVar2 = reg2->width;
  __nmemb = reg2->size * reg1->size;
  iVar4 = reg2->size * reg1->size + 2;
  pqVar5 = (quantum_reg_node *)calloc(__nmemb,0x10);
  if (pqVar5 == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(__nmemb * 0x10);
  bVar7 = (byte)iVar4;
  piVar6 = (int *)calloc(1 << (bVar7 & 0x1f),4);
  if (piVar6 == (int *)0x0) {
    quantum_error(2);
  }
  quantum_memman(4 << (bVar7 & 0x1f));
  i = 0;
  while (i < reg1->size) {
    j = 0;
    while (j < reg2->size) {
      iVar3 = reg2->size;
      uVar11 = *(uint *)&reg1->node[i].state;
      bVar8 = (byte)reg2->width;
      bVar7 = bVar8 & 0x1f;
      uVar9 = uVar11 << (bVar8 & 0x1f);
      uVar10 = uVar9;
      uVar11 = *(int *)((int)&reg1->node[i].state + 4) << bVar7 | uVar11 >> 0x20 - bVar7;
      if ((reg2->width & 0x20U) != 0) {
        uVar10 = 0;
        uVar11 = uVar9;
      }
      uVar9 = *(uint *)((int)&reg2->node[j].state + 4);
      *(uint *)&pqVar5[iVar3 * i + j].state = uVar10 | *(uint *)&reg2->node[j].state;
      *(uint *)((int)&pqVar5[iVar3 * i + j].state + 4) = uVar11 | uVar9;
      iVar3 = reg2->size;
      uVar12 = __mulsc3(*(undefined4 *)&reg1->node[i].amplitude,
                        *(undefined4 *)((int)&reg1->node[i].amplitude + 4),
                        *(undefined4 *)&reg2->node[j].amplitude,
                        *(undefined4 *)((int)&reg2->node[j].amplitude + 4));
      *(int *)&pqVar5[iVar3 * i + j].amplitude = (int)uVar12;
      *(int *)((int)&pqVar5[iVar3 * i + j].amplitude + 4) = (int)((ulonglong)uVar12 >> 0x20);
      j = j + 1;
    }
    i = i + 1;
  }
  __return_storage_ptr__->width = iVar1 + iVar2;
  __return_storage_ptr__->size = __nmemb;
  __return_storage_ptr__->hashw = iVar4;
  __return_storage_ptr__->node = pqVar5;
  __return_storage_ptr__->hash = piVar6;
  return __return_storage_ptr__;
}



// WARNING: Removing unreachable block (ram,0x0805191a)
// WARNING: Could not reconcile some variable overlaps

quantum_reg *
quantum_state_collapse(quantum_reg *__return_storage_ptr__,int pos,int value,quantum_reg reg)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  quantum_reg_node *pqVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  float fVar11;
  quantum_reg out;
  ulonglong pos2;
  ulonglong rpat;
  ulonglong lpat;
  double d;
  int size;
  int k;
  int j;
  int i;
  
  size = 0;
  d = 0.0;
  bVar1 = (byte)pos & 0x1f;
  uVar2 = 1 << ((byte)pos & 0x1f);
  uVar3 = uVar2;
  uVar8 = 0 << bVar1 | 1U >> 0x20 - bVar1;
  if ((pos & 0x20U) != 0) {
    uVar3 = 0;
    uVar8 = uVar2;
  }
  i = 0;
  while (i < reg.size) {
    if ((((*(uint *)&reg.node[i].state & uVar3 | *(uint *)((int)&reg.node[i].state + 4) & uVar8) !=
          0) && (value != 0)) ||
       (((*(uint *)&reg.node[i].state & uVar3 | *(uint *)((int)&reg.node[i].state + 4) & uVar8) == 0
        && (value == 0)))) {
      fVar11 = quantum_prob_inline(reg.node[i].amplitude);
      d = (double)((float)d + fVar11);
      size = size + 1;
    }
    i = i + 1;
  }
  pqVar4 = (quantum_reg_node *)calloc(size,0x10);
  if (pqVar4 == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(size << 4);
  i = 0;
  j = 0;
  while (i < reg.size) {
    if ((((*(uint *)&reg.node[i].state & uVar3 | *(uint *)((int)&reg.node[i].state + 4) & uVar8) !=
          0) && (value != 0)) ||
       (((*(uint *)&reg.node[i].state & uVar3 | *(uint *)((int)&reg.node[i].state + 4) & uVar8) == 0
        && (value == 0)))) {
      k = 0;
      rpat._0_4_ = 0;
      rpat._4_4_ = 0;
      while (k < pos) {
        bVar1 = (byte)k & 0x1f;
        uVar5 = 1 << ((byte)k & 0x1f);
        uVar2 = uVar5;
        uVar7 = 0 << bVar1 | 1U >> 0x20 - bVar1;
        if ((k & 0x20U) != 0) {
          uVar2 = 0;
          uVar7 = uVar5;
        }
        bVar9 = CARRY4((uint)rpat,uVar2);
        rpat._0_4_ = (uint)rpat + uVar2;
        rpat._4_4_ = rpat._4_4_ + uVar7 + (uint)bVar9;
        k = k + 1;
      }
      uVar2 = *(uint *)((int)&reg.node[i].state + 4);
      k = 0x3f;
      lpat._0_4_ = 0;
      lpat._4_4_ = 0;
      while (pos < k) {
        bVar1 = (byte)k & 0x1f;
        uVar6 = 1 << ((byte)k & 0x1f);
        uVar7 = uVar6;
        uVar5 = 0 << bVar1 | 1U >> 0x20 - bVar1;
        if ((k & 0x20U) != 0) {
          uVar7 = 0;
          uVar5 = uVar6;
        }
        bVar9 = CARRY4((uint)lpat,uVar7);
        lpat._0_4_ = (uint)lpat + uVar7;
        lpat._4_4_ = lpat._4_4_ + uVar5 + (uint)bVar9;
        k = k + -1;
      }
      uVar7 = lpat._4_4_ & *(uint *)((int)&reg.node[i].state + 4);
      *(uint *)&pqVar4[j].state =
           ((uint)lpat & *(uint *)&reg.node[i].state) >> 1 | uVar7 << 0x1f |
           (uint)rpat & *(uint *)&reg.node[i].state;
      *(uint *)((int)&pqVar4[j].state + 4) = uVar7 >> 1 | rpat._4_4_ & uVar2;
      uVar10 = __divsc3(*(undefined4 *)&reg.node[i].amplitude,
                        *(undefined4 *)((int)&reg.node[i].amplitude + 4),(float)SQRT(d),0);
      *(int *)&pqVar4[j].amplitude = (int)uVar10;
      *(int *)((int)&pqVar4[j].amplitude + 4) = (int)((ulonglong)uVar10 >> 0x20);
      j = j + 1;
    }
    i = i + 1;
  }
  __return_storage_ptr__->width = reg.width + -1;
  __return_storage_ptr__->size = size;
  __return_storage_ptr__->hashw = reg.hashw;
  __return_storage_ptr__->node = pqVar4;
  __return_storage_ptr__->hash = reg.hash;
  return __return_storage_ptr__;
}



// WARNING: Could not reconcile some variable overlaps

complex_float quantum_dot_product(quantum_reg *reg1,quantum_reg *reg2)

{
  int iVar1;
  complex_float cVar2;
  undefined8 uVar3;
  complex_float f;
  int j;
  int i;
  
  f._0_4_ = 0.0;
  f._4_4_ = 0.0;
  if (reg2->hashw != 0) {
    quantum_reconstruct_hash(reg2);
  }
  i = 0;
  while (i < reg1->size) {
    iVar1 = quantum_get_state(reg1->node[i].state,*reg2);
    if (-1 < iVar1) {
      cVar2 = quantum_conj(reg1->node[i].amplitude);
      uVar3 = __mulsc3(cVar2,*(undefined4 *)&reg2->node[iVar1].amplitude,
                       *(undefined4 *)((int)&reg2->node[iVar1].amplitude + 4));
      f._0_4_ = (float)f + (float)uVar3;
      f._4_4_ = f._4_4_ + (float)((ulonglong)uVar3 >> 0x20);
    }
    i = i + 1;
  }
  return CONCAT44(f._4_4_,(float)f);
}



void quantum_reconstruct_hash(quantum_reg *reg)

{
  int i;
  
  i = 0;
  while (i < 1 << ((byte)reg->hashw & 0x1f)) {
    reg->hash[i] = 0;
    i = i + 1;
  }
  i = 0;
  while (i < reg->size) {
    quantum_add_hash(reg->node[i].state,i,reg);
    i = i + 1;
  }
  return;
}



void quantum_add_hash(ulonglong a,int pos,quantum_reg *reg)

{
  bool bVar1;
  int mark;
  int i;
  
  bVar1 = false;
  i = quantum_hash64(a,reg->hashw);
  while (reg->hash[i] != 0) {
    i = i + 1;
    if (1 << ((byte)reg->hashw & 0x1f) == i) {
      if (bVar1) {
        quantum_error(5);
      }
      else {
        i = 0;
        bVar1 = true;
      }
    }
  }
  reg->hash[i] = pos + 1;
  return;
}



uint quantum_hash64(ulonglong key,int width)

{
  uint k32;
  
  return (key._4_4_ ^ (uint)key) * -0x61c8ffff >> (0x20U - (char)width & 0x1f);
}



int quantum_get_state(ulonglong a,quantum_reg reg)

{
  int local_20;
  int i;
  
  if (reg.hashw == 0) {
    local_20 = (int)a;
  }
  else {
    i = quantum_hash64(a,reg.hashw);
    while (reg.hash[i] != 0) {
      if (a == reg.node[-(1 - reg.hash[i])].state) {
        return reg.hash[i] + -1;
      }
      i = i + 1;
      if (1 << (SUB201(reg >> 0x40,0) & 0x1f) == i) {
        i = 0;
      }
    }
    local_20 = -1;
  }
  return local_20;
}



// WARNING: Could not reconcile some variable overlaps

complex_float quantum_dot_product_noconj(quantum_reg *reg1,quantum_reg *reg2)

{
  int iVar1;
  undefined8 uVar2;
  complex_float f;
  int j;
  int i;
  
  f._0_4_ = 0.0;
  f._4_4_ = 0.0;
  if (reg2->hashw != 0) {
    quantum_reconstruct_hash(reg2);
  }
  i = 0;
  while (i < reg1->size) {
    iVar1 = quantum_get_state(reg1->node[i].state,*reg2);
    if (-1 < iVar1) {
      uVar2 = __mulsc3(*(undefined4 *)&reg1->node[i].amplitude,
                       *(undefined4 *)((int)&reg1->node[i].amplitude + 4),
                       *(undefined4 *)&reg2->node[iVar1].amplitude,
                       *(undefined4 *)((int)&reg2->node[iVar1].amplitude + 4));
      f._0_4_ = (float)f + (float)uVar2;
      f._4_4_ = f._4_4_ + (float)((ulonglong)uVar2 >> 0x20);
    }
    i = i + 1;
  }
  return CONCAT44(f._4_4_,(float)f);
}



quantum_reg *
quantum_vectoradd(quantum_reg *__return_storage_ptr__,quantum_reg *reg1,quantum_reg *reg2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  quantum_reg reg;
  int addsize;
  int k;
  int j;
  int i;
  
  addsize = 0;
  quantum_copy_qureg(reg1,&reg);
  if ((reg1->hashw != 0) || (reg2->hashw != 0)) {
    quantum_reconstruct_hash(reg1);
    quantum_copy_qureg(reg1,&reg);
    i = 0;
    while (i < reg2->size) {
      iVar4 = quantum_get_state(reg2->node[i].state,*reg1);
      if (iVar4 == -1) {
        addsize = addsize + 1;
      }
      i = i + 1;
    }
  }
  reg.size = reg.size + addsize;
  reg.node = (quantum_reg_node *)realloc(reg.node,reg.size * 0x10);
  if (reg.node == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(addsize << 4);
  k = reg1->size;
  i = 0;
  while (i < reg2->size) {
    iVar4 = quantum_get_state(reg2->node[i].state,*reg1);
    if (iVar4 < 0) {
      uVar3 = *(undefined4 *)((int)&reg2->node[i].state + 4);
      *(undefined4 *)&reg.node[k].state = *(undefined4 *)&reg2->node[i].state;
      *(undefined4 *)((int)&reg.node[k].state + 4) = uVar3;
      uVar3 = *(undefined4 *)((int)&reg2->node[i].amplitude + 4);
      *(undefined4 *)&reg.node[k].amplitude = *(undefined4 *)&reg2->node[i].amplitude;
      *(undefined4 *)((int)&reg.node[k].amplitude + 4) = uVar3;
      k = k + 1;
    }
    else {
      fVar1 = *(float *)((int)&reg.node[iVar4].amplitude + 4);
      fVar2 = *(float *)((int)&reg2->node[i].amplitude + 4);
      *(float *)&reg.node[iVar4].amplitude =
           *(float *)&reg2->node[i].amplitude + *(float *)&reg.node[iVar4].amplitude;
      *(float *)((int)&reg.node[iVar4].amplitude + 4) = fVar2 + fVar1;
    }
    i = i + 1;
  }
  __return_storage_ptr__->width = reg.width;
  __return_storage_ptr__->size = reg.size;
  __return_storage_ptr__->hashw = reg.hashw;
  __return_storage_ptr__->node = reg.node;
  __return_storage_ptr__->hash = reg.hash;
  return __return_storage_ptr__;
}



void quantum_vectoradd_inplace(quantum_reg *reg1,quantum_reg *reg2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  quantum_reg_node *pqVar4;
  int iVar5;
  int addsize;
  int k;
  int j;
  int i;
  
  addsize = 0;
  if ((reg1->hashw != 0) || (reg2->hashw != 0)) {
    quantum_reconstruct_hash(reg1);
    i = 0;
    while (i < reg2->size) {
      iVar5 = quantum_get_state(reg2->node[i].state,*reg1);
      if (iVar5 == -1) {
        addsize = addsize + 1;
      }
      i = i + 1;
    }
  }
  pqVar4 = (quantum_reg_node *)realloc(reg1->node,(reg1->size + addsize) * 0x10);
  reg1->node = pqVar4;
  if (reg1->node == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(addsize << 4);
  k = reg1->size;
  i = 0;
  while (i < reg2->size) {
    iVar5 = quantum_get_state(reg2->node[i].state,*reg1);
    if (iVar5 < 0) {
      pqVar4 = reg1->node;
      uVar3 = *(undefined4 *)((int)&reg2->node[i].state + 4);
      *(undefined4 *)&pqVar4[k].state = *(undefined4 *)&reg2->node[i].state;
      *(undefined4 *)((int)&pqVar4[k].state + 4) = uVar3;
      pqVar4 = reg1->node;
      uVar3 = *(undefined4 *)((int)&reg2->node[i].amplitude + 4);
      *(undefined4 *)&pqVar4[k].amplitude = *(undefined4 *)&reg2->node[i].amplitude;
      *(undefined4 *)((int)&pqVar4[k].amplitude + 4) = uVar3;
      k = k + 1;
    }
    else {
      pqVar4 = reg1->node;
      fVar1 = *(float *)((int)&reg1->node[iVar5].amplitude + 4);
      fVar2 = *(float *)((int)&reg2->node[i].amplitude + 4);
      *(float *)&pqVar4[iVar5].amplitude =
           *(float *)&reg2->node[i].amplitude + *(float *)&reg1->node[iVar5].amplitude;
      *(float *)((int)&pqVar4[iVar5].amplitude + 4) = fVar2 + fVar1;
    }
    i = i + 1;
  }
  reg1->size = reg1->size + addsize;
  return;
}



// WARNING: Could not reconcile some variable overlaps

quantum_reg *
quantum_matrix_qureg
          (quantum_reg *__return_storage_ptr__,anon_subr_quantum_reg_ulonglong_double *A,double t,
          quantum_reg *reg)

{
  int iVar1;
  size_t __nmemb;
  quantum_reg_node *pqVar2;
  quantum_reg **ppqVar3;
  bool bVar4;
  complex_float cVar5;
  quantum_reg *local_94 [8];
  quantum_reg *local_74;
  quantum_reg *local_70;
  int local_6c;
  int local_68;
  int local_64;
  quantum_reg_node *local_60;
  int *local_5c;
  undefined8 local_44;
  quantum_reg tmp;
  quantum_reg reg2;
  ulonglong i;
  
  iVar1 = reg->width;
  __nmemb = 1 << ((byte)iVar1 & 0x1f);
  local_44 = t;
  pqVar2 = (quantum_reg_node *)calloc(__nmemb,0x10);
  if (pqVar2 == (quantum_reg_node *)0x0) {
    quantum_error(2);
  }
  quantum_memman(__nmemb << 4);
  i._0_4_ = (quantum_reg *)0x0;
  i._4_4_ = (quantum_reg *)0x0;
  ppqVar3 = (quantum_reg **)&stack0xffffff64;
  while( true ) {
    local_74 = (quantum_reg *)(1 << ((byte)reg->width & 0x1f));
    local_70 = (quantum_reg *)((int)local_74 >> 0x1f);
    if ((local_70 <= i._4_4_) && ((local_70 < i._4_4_ || (local_74 <= (quantum_reg *)i)))) break;
    *(quantum_reg **)&pqVar2[(int)(quantum_reg *)i].state = (quantum_reg *)i;
    *(quantum_reg **)((int)&pqVar2[(int)(quantum_reg *)i].state + 4) = i._4_4_;
    *(double *)(ppqVar3 + 3) = local_44;
    ppqVar3[1] = (quantum_reg *)i;
    ppqVar3[2] = i._4_4_;
    *ppqVar3 = (quantum_reg *)&local_6c;
    ppqVar3[-1] = (quantum_reg *)0x8052394;
    (*A)(*ppqVar3,*(ulonglong *)(ppqVar3 + 1),*(double *)(ppqVar3 + 3));
    tmp.width = local_6c;
    tmp.size = local_68;
    tmp.hashw = local_64;
    tmp.node = local_60;
    tmp.hash = local_5c;
    *ppqVar3 = reg;
    ppqVar3[-1] = &tmp;
    ppqVar3[-2] = (quantum_reg *)0x80523d3;
    cVar5 = quantum_dot_product_noconj(ppqVar3[-1],*ppqVar3);
    *(int *)&pqVar2[(int)(quantum_reg *)i].amplitude = (int)cVar5;
    *(int *)((int)&pqVar2[(int)(quantum_reg *)i].amplitude + 4) = (int)(cVar5 >> 0x20);
    ppqVar3[-1] = &tmp;
    ppqVar3[-2] = (quantum_reg *)0x80523eb;
    quantum_delete_qureg(ppqVar3[-1]);
    bVar4 = (quantum_reg *)0xfffffffe < (quantum_reg *)i;
    i._0_4_ = (quantum_reg *)((int)&((quantum_reg *)i)->width + 1);
    i._4_4_ = (quantum_reg *)((int)&(i._4_4_)->width + (uint)bVar4);
    ppqVar3 = ppqVar3 + -1;
  }
  __return_storage_ptr__->width = iVar1;
  __return_storage_ptr__->size = __nmemb;
  __return_storage_ptr__->hashw = 0;
  __return_storage_ptr__->node = pqVar2;
  __return_storage_ptr__->hash = (int *)0x0;
  return __return_storage_ptr__;
}



void quantum_scalar_qureg(complex_float r,quantum_reg *reg)

{
  quantum_reg_node *pqVar1;
  undefined8 uVar2;
  int i;
  
  i = 0;
  while (i < reg->size) {
    pqVar1 = reg->node;
    uVar2 = __mulsc3(*(undefined4 *)&reg->node[i].amplitude,
                     *(undefined4 *)((int)&reg->node[i].amplitude + 4),r);
    *(int *)&pqVar1[i].amplitude = (int)uVar2;
    *(int *)((int)&pqVar1[i].amplitude + 4) = (int)((ulonglong)uVar2 >> 0x20);
    i = i + 1;
  }
  return;
}



void quantum_print_timeop(int width,anon_subr_void_quantum_reg_ptr *f)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  quantum_reg local_6c;
  quantum_matrix local_4c [2];
  quantum_reg tmp;
  quantum_matrix m;
  int j;
  int i;
  
  bVar3 = (byte)width;
  quantum_new_matrix(local_4c,1 << (bVar3 & 0x1f),1 << (bVar3 & 0x1f));
  m.rows = local_4c[0].rows;
  m.cols = local_4c[0].cols;
  m.t = local_4c[0].t;
  i = 0;
  while (i < 1 << (bVar3 & 0x1f)) {
    quantum_new_qureg(&local_6c,(longlong)i,width);
    tmp.width = local_6c.width;
    tmp.size = local_6c.size;
    tmp.hashw = local_6c.hashw;
    tmp.node = local_6c.node;
    tmp.hash = local_6c.hash;
    (*f)(&tmp);
    j = 0;
    while (j < tmp.size) {
      iVar1 = *(int *)&tmp.node[j].state;
      uVar2 = *(undefined4 *)((int)&tmp.node[j].amplitude + 4);
      *(undefined4 *)(m.t + iVar1 + m.cols * i) = *(undefined4 *)&tmp.node[j].amplitude;
      *(undefined4 *)((int)(m.t + iVar1 + m.cols * i) + 4) = uVar2;
      j = j + 1;
    }
    quantum_delete_qureg(&tmp);
    i = i + 1;
  }
  quantum_print_matrix((quantum_matrix)CONCAT48(m.t,CONCAT44(m.cols,m.rows)));
  quantum_delete_matrix(&m);
  return;
}



int main(void)

{
  longlong lVar1;
  longlong lVar2;
  uint __seed;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uVar7;
  int local_74;
  quantum_reg local_70;
  undefined local_4c [4];
  quantum_reg qr;
  int factor;
  int b;
  int a;
  int q;
  int c;
  int N;
  int x;
  int swidth;
  int width;
  int i;
  undefined4 *local_c;
  
  local_c = (undefined4 *)&stack0x00000004;
  N = 0;
  __seed = time((time_t *)0x0);
  srand(__seed);
  if (in_stack_00000004 == 1) {
    puts("Usage: shor [number]\n");
    local_74 = 3;
  }
  else {
    c = atoi(*(char **)(in_stack_00000008 + 4));
    if (c < 0xf) {
      puts("Invalid number\n");
      local_74 = 3;
    }
    else {
      swidth = quantum_getwidth(c * c);
      x = quantum_getwidth(c);
      iVar3 = x * 3 + swidth + 2;
      printf("N = %i, %i qubits required\n",c,iVar3);
      if (2 < in_stack_00000004) {
        N = atoi(*(char **)(in_stack_00000008 + 8));
      }
      while ((iVar4 = quantum_gcd(c,N), 1 < iVar4 || (N < 2))) {
        iVar4 = rand();
        N = iVar4 % c;
      }
      printf("Random seed: %i\n",N,iVar3);
      quantum_new_qureg(&local_70,0,swidth);
      local_4c = local_70.width;
      qr.width = local_70.size;
      qr.size = local_70.hashw;
      qr.hashw = (int)local_70.node;
      qr.node = (quantum_reg_node *)local_70.hash;
      width = 0;
      while (width < swidth) {
        quantum_hadamard(width,(quantum_reg *)local_4c);
        width = width + 1;
      }
      quantum_addscratch(x * 3 + 2,(quantum_reg *)local_4c);
      quantum_exp_mod_n(c,N,swidth,x,(quantum_reg *)local_4c);
      width = 0;
      while (width < x * 3 + 2) {
        quantum_bmeasure(0,(quantum_reg *)local_4c);
        width = width + 1;
      }
      quantum_qft(swidth,(quantum_reg *)local_4c);
      width = 0;
      while (width < swidth / 2) {
        quantum_cnot(width,(swidth - width) + -1,(quantum_reg *)local_4c);
        quantum_cnot((swidth - width) + -1,width,(quantum_reg *)local_4c);
        quantum_cnot(width,(swidth - width) + -1,(quantum_reg *)local_4c);
        width = width + 1;
      }
      uVar6 = quantum_measure((quantum_reg)
                              CONCAT416(qr.node,CONCAT412(qr.hashw,CONCAT48(qr.size,CONCAT44(qr.
                                                  width,local_4c)))));
      q = (int)uVar6;
      if (q == -1) {
        puts("Impossible Measurement!");
        local_74 = 1;
      }
      else {
        if (q == 0) {
          puts("Measured zero, try again.");
          local_74 = 2;
        }
        else {
          a = 1 << ((byte)swidth & 0x1f);
          uVar7 = (undefined4)((ulonglong)((double)q / (double)a) >> 0x20);
          printf("Measured %i (%f), ",q,SUB84((double)q / (double)a,0),uVar7);
          quantum_frac_approx(&q,&a,swidth);
          iVar3 = a;
          printf("fractional approximation is %i/%i.\n",q,a);
          if (((a - (a >> 0x1f) & 1U) + (a >> 0x1f) == 1) && (a * 2 < 1 << ((byte)swidth & 0x1f))) {
            puts("Odd denominator, trying to expand by 2.");
            a = a * 2;
          }
          if ((a - (a >> 0x1f) & 1U) + (a >> 0x1f) == 1) {
            puts("Odd period, try again.");
            local_74 = 2;
          }
          else {
            printf("Possible period is %i.\n",a,iVar3,uVar7);
            iVar3 = quantum_ipow(N,a / 2);
            lVar1 = (longlong)c;
            iVar4 = quantum_ipow(N,a / 2);
            lVar2 = (longlong)c;
            piVar5 = (int *)quantum_gcd(c,iVar3 + (int)(1 % lVar1));
            qr.hash = (int *)quantum_gcd(c,iVar4 - (int)(1 % lVar2));
            if ((int)qr.hash < (int)piVar5) {
              qr.hash = piVar5;
            }
            if (((int)qr.hash < c) && (1 < (int)qr.hash)) {
              printf("%i = %i * %i\n",c,qr.hash,c / (int)qr.hash);
              quantum_delete_qureg((quantum_reg *)local_4c);
              local_74 = 0;
            }
            else {
              puts("Unable to determine factors, try again.");
              local_74 = 2;
            }
          }
        }
      }
    }
  }
  return local_74;
}



char * quantum_get_version(void)

{
  return "0.9.1";
}



// WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx
// WARNING: Removing unreachable block (ram,0x08052ffe)
// WARNING: Removing unreachable block (ram,0x0805300f)
// WARNING: Removing unreachable block (ram,0x08052da0)
// WARNING: Removing unreachable block (ram,0x08053113)
// WARNING: Removing unreachable block (ram,0x08053120)
// WARNING: Removing unreachable block (ram,0x08053126)
// WARNING: Removing unreachable block (ram,0x0805312d)
// WARNING: Removing unreachable block (ram,0x0805313a)
// WARNING: Removing unreachable block (ram,0x08053140)
// WARNING: Removing unreachable block (ram,0x08053147)
// WARNING: Removing unreachable block (ram,0x08053154)
// WARNING: Removing unreachable block (ram,0x0805315a)
// WARNING: Removing unreachable block (ram,0x08052f76)
// WARNING: Removing unreachable block (ram,0x08052f42)
// WARNING: Removing unreachable block (ram,0x08052f96)
// WARNING: Removing unreachable block (ram,0x08052f9c)
// WARNING: Removing unreachable block (ram,0x08052ec2)
// WARNING: Removing unreachable block (ram,0x08053161)
// WARNING: Removing unreachable block (ram,0x0805316e)
// WARNING: Removing unreachable block (ram,0x08053174)
// WARNING: Removing unreachable block (ram,0x08052e3a)
// WARNING: Removing unreachable block (ram,0x08052de8)
// WARNING: Removing unreachable block (ram,0x080531be)
// WARNING: Removing unreachable block (ram,0x08052d31)
// WARNING: Removing unreachable block (ram,0x08052d16)
// WARNING: Removing unreachable block (ram,0x080530d0)
// WARNING: Removing unreachable block (ram,0x080530e0)
// WARNING: Removing unreachable block (ram,0x0805304c)
// WARNING: Removing unreachable block (ram,0x08052c78)
// WARNING: Removing unreachable block (ram,0x08052bf7)
// WARNING: Removing unreachable block (ram,0x08052c0b)
// WARNING: Removing unreachable block (ram,0x08052c11)
// WARNING: Removing unreachable block (ram,0x08053028)
// WARNING: Removing unreachable block (ram,0x0805302e)
// WARNING: Removing unreachable block (ram,0x08052c1e)
// WARNING: Removing unreachable block (ram,0x08052c22)
// WARNING: Removing unreachable block (ram,0x08052c24)
// WARNING: Removing unreachable block (ram,0x08052c31)
// WARNING: Removing unreachable block (ram,0x08052c37)
// WARNING: Removing unreachable block (ram,0x08052c47)
// WARNING: Removing unreachable block (ram,0x08052c49)
// WARNING: Removing unreachable block (ram,0x08052c58)
// WARNING: Removing unreachable block (ram,0x08052c5e)
// WARNING: Removing unreachable block (ram,0x08052c6a)
// WARNING: Removing unreachable block (ram,0x08052c84)
// WARNING: Removing unreachable block (ram,0x08052beb)
// WARNING: Removing unreachable block (ram,0x08052bf5)
// WARNING: Removing unreachable block (ram,0x08052bac)
// WARNING: Removing unreachable block (ram,0x0805303c)
// WARNING: Removing unreachable block (ram,0x0805305a)
// WARNING: Removing unreachable block (ram,0x0805306a)
// WARNING: Removing unreachable block (ram,0x0805306c)
// WARNING: Removing unreachable block (ram,0x080530c0)
// WARNING: Removing unreachable block (ram,0x08053075)
// WARNING: Removing unreachable block (ram,0x08053098)
// WARNING: Removing unreachable block (ram,0x08053082)
// WARNING: Removing unreachable block (ram,0x080530a6)
// WARNING: Removing unreachable block (ram,0x08052c89)
// WARNING: Removing unreachable block (ram,0x08052c9f)
// WARNING: Removing unreachable block (ram,0x08052c99)
// WARNING: Removing unreachable block (ram,0x08052ca1)
// WARNING: Removing unreachable block (ram,0x08052cac)
// WARNING: Removing unreachable block (ram,0x08052cb6)
// WARNING: Removing unreachable block (ram,0x080530c2)
// WARNING: Removing unreachable block (ram,0x080530ee)
// WARNING: Removing unreachable block (ram,0x080530f5)
// WARNING: Removing unreachable block (ram,0x08052cba)
// WARNING: Removing unreachable block (ram,0x08053106)
// WARNING: Removing unreachable block (ram,0x08052cbc)
// WARNING: Removing unreachable block (ram,0x08052cd0)
// WARNING: Removing unreachable block (ram,0x08052cd6)
// WARNING: Removing unreachable block (ram,0x08053195)
// WARNING: Removing unreachable block (ram,0x080531a2)
// WARNING: Removing unreachable block (ram,0x080531a8)
// WARNING: Removing unreachable block (ram,0x08052ce2)
// WARNING: Removing unreachable block (ram,0x08052cf6)
// WARNING: Removing unreachable block (ram,0x08052cfc)
// WARNING: Removing unreachable block (ram,0x08052d05)
// WARNING: Removing unreachable block (ram,0x08052e08)
// WARNING: Removing unreachable block (ram,0x08052d0e)
// WARNING: Removing unreachable block (ram,0x08052d1c)
// WARNING: Removing unreachable block (ram,0x08052d27)
// WARNING: Removing unreachable block (ram,0x08052d2d)
// WARNING: Removing unreachable block (ram,0x08052d33)
// WARNING: Removing unreachable block (ram,0x08052d40)
// WARNING: Removing unreachable block (ram,0x08052d46)
// WARNING: Removing unreachable block (ram,0x080531c2)
// WARNING: Removing unreachable block (ram,0x080531c4)
// WARNING: Removing unreachable block (ram,0x08052df8)
// WARNING: Removing unreachable block (ram,0x08052e14)
// WARNING: Removing unreachable block (ram,0x08052e24)
// WARNING: Removing unreachable block (ram,0x08052e26)
// WARNING: Removing unreachable block (ram,0x08052e30)
// WARNING: Removing unreachable block (ram,0x08052e78)
// WARNING: Removing unreachable block (ram,0x08052e32)
// WARNING: Removing unreachable block (ram,0x08052e40)
// WARNING: Removing unreachable block (ram,0x08052d4c)
// WARNING: Removing unreachable block (ram,0x08052d58)
// WARNING: Removing unreachable block (ram,0x0805317b)
// WARNING: Removing unreachable block (ram,0x08053188)
// WARNING: Removing unreachable block (ram,0x0805318e)
// WARNING: Removing unreachable block (ram,0x08052d5e)
// WARNING: Removing unreachable block (ram,0x08052d60)
// WARNING: Removing unreachable block (ram,0x08052d6c)
// WARNING: Removing unreachable block (ram,0x08052d76)
// WARNING: Removing unreachable block (ram,0x08052d78)
// WARNING: Removing unreachable block (ram,0x08052d87)
// WARNING: Removing unreachable block (ram,0x08052d89)
// WARNING: Removing unreachable block (ram,0x0805301b)
// WARNING: Removing unreachable block (ram,0x08052d9e)
// WARNING: Removing unreachable block (ram,0x08052da8)
// WARNING: Removing unreachable block (ram,0x08052e68)
// WARNING: Removing unreachable block (ram,0x08052e58)
// WARNING: Removing unreachable block (ram,0x08052e84)
// WARNING: Removing unreachable block (ram,0x08052db0)
// WARNING: Removing unreachable block (ram,0x08052e8c)
// WARNING: Removing unreachable block (ram,0x08052e9c)
// WARNING: Removing unreachable block (ram,0x08052ed0)
// WARNING: Removing unreachable block (ram,0x08052e9e)
// WARNING: Removing unreachable block (ram,0x08052f82)
// WARNING: Removing unreachable block (ram,0x08052eac)
// WARNING: Removing unreachable block (ram,0x08052eb6)
// WARNING: Removing unreachable block (ram,0x08052edc)
// WARNING: Removing unreachable block (ram,0x08052ee9)
// WARNING: Removing unreachable block (ram,0x08052f14)
// WARNING: Removing unreachable block (ram,0x08052eeb)
// WARNING: Removing unreachable block (ram,0x08052ef8)
// WARNING: Removing unreachable block (ram,0x08052efe)
// WARNING: Removing unreachable block (ram,0x08052f8a)
// WARNING: Removing unreachable block (ram,0x08052f90)
// WARNING: Removing unreachable block (ram,0x08052f08)
// WARNING: Removing unreachable block (ram,0x08052f1e)
// WARNING: Removing unreachable block (ram,0x08052f2d)
// WARNING: Removing unreachable block (ram,0x08052f4a)
// WARNING: Removing unreachable block (ram,0x08052f2f)
// WARNING: Removing unreachable block (ram,0x08052f38)
// WARNING: Removing unreachable block (ram,0x08052f4c)
// WARNING: Removing unreachable block (ram,0x08052f5f)
// WARNING: Removing unreachable block (ram,0x08052bc6)
// WARNING: Removing unreachable block (ram,0x08052f65)
// WARNING: Removing unreachable block (ram,0x08052f6c)
// WARNING: Removing unreachable block (ram,0x08052bd2)
// WARNING: Removing unreachable block (ram,0x08052fa8)
// WARNING: Removing unreachable block (ram,0x08052f3a)
// WARNING: Removing unreachable block (ram,0x08052fac)
// WARNING: Removing unreachable block (ram,0x08052fb7)
// WARNING: Removing unreachable block (ram,0x08052fbd)
// WARNING: Removing unreachable block (ram,0x08052fbf)
// WARNING: Removing unreachable block (ram,0x08052fca)
// WARNING: Removing unreachable block (ram,0x08052fd6)
// WARNING: Removing unreachable block (ram,0x08052fd8)
// WARNING: Removing unreachable block (ram,0x08052fe4)
// WARNING: Removing unreachable block (ram,0x08052fee)
// WARNING: Removing unreachable block (ram,0x08052ff0)
// WARNING: Removing unreachable block (ram,0x08052ff8)
// WARNING: Removing unreachable block (ram,0x08052dba)
// WARNING: Removing unreachable block (ram,0x08052dc0)
// WARNING: Removing unreachable block (ram,0x08052bba)

undefined8 __mulsc3(float param_1,float param_2,float param_3,float param_4)

{
  return CONCAT44(param_2 * param_3 + param_1 * param_4,param_1 * param_3 - param_2 * param_4);
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_cx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x080536ae)
// WARNING: Removing unreachable block (ram,0x080536bf)
// WARNING: Removing unreachable block (ram,0x08053456)
// WARNING: Removing unreachable block (ram,0x080537c3)
// WARNING: Removing unreachable block (ram,0x080537d0)
// WARNING: Removing unreachable block (ram,0x080537d6)
// WARNING: Removing unreachable block (ram,0x080537dd)
// WARNING: Removing unreachable block (ram,0x080537ea)
// WARNING: Removing unreachable block (ram,0x080537f0)
// WARNING: Removing unreachable block (ram,0x080537f7)
// WARNING: Removing unreachable block (ram,0x08053804)
// WARNING: Removing unreachable block (ram,0x0805380a)
// WARNING: Removing unreachable block (ram,0x0805361e)
// WARNING: Removing unreachable block (ram,0x080535ea)
// WARNING: Removing unreachable block (ram,0x080535b2)
// WARNING: Removing unreachable block (ram,0x08053646)
// WARNING: Removing unreachable block (ram,0x0805357a)
// WARNING: Removing unreachable block (ram,0x08053811)
// WARNING: Removing unreachable block (ram,0x0805381e)
// WARNING: Removing unreachable block (ram,0x08053824)
// WARNING: Removing unreachable block (ram,0x080534f2)
// WARNING: Removing unreachable block (ram,0x0805349b)
// WARNING: Removing unreachable block (ram,0x0805386e)
// WARNING: Removing unreachable block (ram,0x080533e9)
// WARNING: Removing unreachable block (ram,0x080533ce)
// WARNING: Removing unreachable block (ram,0x08053780)
// WARNING: Removing unreachable block (ram,0x080536ec)
// WARNING: Removing unreachable block (ram,0x0805328f)
// WARNING: Removing unreachable block (ram,0x08053298)
// WARNING: Removing unreachable block (ram,0x0805329a)
// WARNING: Removing unreachable block (ram,0x080532a1)
// WARNING: Removing unreachable block (ram,0x0805324d)
// WARNING: Removing unreachable block (ram,0x08053322)
// WARNING: Removing unreachable block (ram,0x080532aa)
// WARNING: Removing unreachable block (ram,0x080532be)
// WARNING: Removing unreachable block (ram,0x080536fc)
// WARNING: Removing unreachable block (ram,0x080532c4)
// WARNING: Removing unreachable block (ram,0x080536d8)
// WARNING: Removing unreachable block (ram,0x080536de)
// WARNING: Removing unreachable block (ram,0x0805370a)
// WARNING: Removing unreachable block (ram,0x0805371a)
// WARNING: Removing unreachable block (ram,0x08053790)
// WARNING: Removing unreachable block (ram,0x0805371c)
// WARNING: Removing unreachable block (ram,0x08053770)
// WARNING: Removing unreachable block (ram,0x08053725)
// WARNING: Removing unreachable block (ram,0x08053748)
// WARNING: Removing unreachable block (ram,0x08053732)
// WARNING: Removing unreachable block (ram,0x08053772)
// WARNING: Removing unreachable block (ram,0x0805379e)
// WARNING: Removing unreachable block (ram,0x080532da)
// WARNING: Removing unreachable block (ram,0x080532d1)
// WARNING: Removing unreachable block (ram,0x080532dc)
// WARNING: Removing unreachable block (ram,0x080532e9)
// WARNING: Removing unreachable block (ram,0x080532ef)
// WARNING: Removing unreachable block (ram,0x080532ff)
// WARNING: Removing unreachable block (ram,0x08053301)
// WARNING: Removing unreachable block (ram,0x08053310)
// WARNING: Removing unreachable block (ram,0x08053316)
// WARNING: Removing unreachable block (ram,0x08053756)
// WARNING: Removing unreachable block (ram,0x08053330)
// WARNING: Removing unreachable block (ram,0x0805333c)
// WARNING: Removing unreachable block (ram,0x08053341)
// WARNING: Removing unreachable block (ram,0x08053357)
// WARNING: Removing unreachable block (ram,0x08053351)
// WARNING: Removing unreachable block (ram,0x08053359)
// WARNING: Removing unreachable block (ram,0x08053364)
// WARNING: Removing unreachable block (ram,0x0805336e)
// WARNING: Removing unreachable block (ram,0x080537a5)
// WARNING: Removing unreachable block (ram,0x08053372)
// WARNING: Removing unreachable block (ram,0x080537b6)
// WARNING: Removing unreachable block (ram,0x08053374)
// WARNING: Removing unreachable block (ram,0x08053388)
// WARNING: Removing unreachable block (ram,0x0805338e)
// WARNING: Removing unreachable block (ram,0x08053845)
// WARNING: Removing unreachable block (ram,0x08053852)
// WARNING: Removing unreachable block (ram,0x08053858)
// WARNING: Removing unreachable block (ram,0x0805339a)
// WARNING: Removing unreachable block (ram,0x080533ae)
// WARNING: Removing unreachable block (ram,0x080533b4)
// WARNING: Removing unreachable block (ram,0x080533bd)
// WARNING: Removing unreachable block (ram,0x080534c0)
// WARNING: Removing unreachable block (ram,0x080533c6)
// WARNING: Removing unreachable block (ram,0x080533d4)
// WARNING: Removing unreachable block (ram,0x080533df)
// WARNING: Removing unreachable block (ram,0x080533e5)
// WARNING: Removing unreachable block (ram,0x080533eb)
// WARNING: Removing unreachable block (ram,0x080533f8)
// WARNING: Removing unreachable block (ram,0x080533fe)
// WARNING: Removing unreachable block (ram,0x08053872)
// WARNING: Removing unreachable block (ram,0x08053874)
// WARNING: Removing unreachable block (ram,0x080534ab)
// WARNING: Removing unreachable block (ram,0x080534cc)
// WARNING: Removing unreachable block (ram,0x080534dc)
// WARNING: Removing unreachable block (ram,0x080534de)
// WARNING: Removing unreachable block (ram,0x080534e8)
// WARNING: Removing unreachable block (ram,0x08053530)
// WARNING: Removing unreachable block (ram,0x080534ea)
// WARNING: Removing unreachable block (ram,0x080534f8)
// WARNING: Removing unreachable block (ram,0x08053404)
// WARNING: Removing unreachable block (ram,0x08053410)
// WARNING: Removing unreachable block (ram,0x0805382b)
// WARNING: Removing unreachable block (ram,0x08053838)
// WARNING: Removing unreachable block (ram,0x0805383e)
// WARNING: Removing unreachable block (ram,0x08053416)
// WARNING: Removing unreachable block (ram,0x08053418)
// WARNING: Removing unreachable block (ram,0x08053424)
// WARNING: Removing unreachable block (ram,0x0805342e)
// WARNING: Removing unreachable block (ram,0x08053430)
// WARNING: Removing unreachable block (ram,0x0805343d)
// WARNING: Removing unreachable block (ram,0x0805343f)
// WARNING: Removing unreachable block (ram,0x080536cb)
// WARNING: Removing unreachable block (ram,0x08053454)
// WARNING: Removing unreachable block (ram,0x0805345e)
// WARNING: Removing unreachable block (ram,0x08053520)
// WARNING: Removing unreachable block (ram,0x08053510)
// WARNING: Removing unreachable block (ram,0x0805353c)
// WARNING: Removing unreachable block (ram,0x08053468)
// WARNING: Removing unreachable block (ram,0x08053544)
// WARNING: Removing unreachable block (ram,0x08053554)
// WARNING: Removing unreachable block (ram,0x08053588)
// WARNING: Removing unreachable block (ram,0x08053556)
// WARNING: Removing unreachable block (ram,0x0805362a)
// WARNING: Removing unreachable block (ram,0x08053564)
// WARNING: Removing unreachable block (ram,0x0805356e)
// WARNING: Removing unreachable block (ram,0x08053594)
// WARNING: Removing unreachable block (ram,0x080535a3)
// WARNING: Removing unreachable block (ram,0x080535c2)
// WARNING: Removing unreachable block (ram,0x080535a5)
// WARNING: Removing unreachable block (ram,0x080535b0)
// WARNING: Removing unreachable block (ram,0x08053630)
// WARNING: Removing unreachable block (ram,0x08053636)
// WARNING: Removing unreachable block (ram,0x080535bd)
// WARNING: Removing unreachable block (ram,0x080535c4)
// WARNING: Removing unreachable block (ram,0x080535d3)
// WARNING: Removing unreachable block (ram,0x080535f2)
// WARNING: Removing unreachable block (ram,0x080535d5)
// WARNING: Removing unreachable block (ram,0x080535dc)
// WARNING: Removing unreachable block (ram,0x080535f4)
// WARNING: Removing unreachable block (ram,0x08053607)
// WARNING: Removing unreachable block (ram,0x08053267)
// WARNING: Removing unreachable block (ram,0x0805360d)
// WARNING: Removing unreachable block (ram,0x08053614)
// WARNING: Removing unreachable block (ram,0x08053275)
// WARNING: Removing unreachable block (ram,0x08053656)
// WARNING: Removing unreachable block (ram,0x080535e2)
// WARNING: Removing unreachable block (ram,0x0805365c)
// WARNING: Removing unreachable block (ram,0x08053667)
// WARNING: Removing unreachable block (ram,0x0805366d)
// WARNING: Removing unreachable block (ram,0x0805366f)
// WARNING: Removing unreachable block (ram,0x0805367a)
// WARNING: Removing unreachable block (ram,0x08053686)
// WARNING: Removing unreachable block (ram,0x08053688)
// WARNING: Removing unreachable block (ram,0x08053694)
// WARNING: Removing unreachable block (ram,0x0805369e)
// WARNING: Removing unreachable block (ram,0x080536a0)
// WARNING: Removing unreachable block (ram,0x080536a8)
// WARNING: Removing unreachable block (ram,0x08053472)
// WARNING: Removing unreachable block (ram,0x08053478)
// WARNING: Removing unreachable block (ram,0x08053259)

double * __muldc3(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  *param_1 = param_2 * param_4 - param_3 * param_5;
  param_1[1] = param_3 * param_4 + param_2 * param_5;
  return param_1;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx
// WARNING: Removing unreachable block (ram,0x08053934)
// WARNING: Removing unreachable block (ram,0x08053cc7)
// WARNING: Removing unreachable block (ram,0x08053c28)
// WARNING: Removing unreachable block (ram,0x08053c34)
// WARNING: Removing unreachable block (ram,0x08053b05)
// WARNING: Removing unreachable block (ram,0x08053cd8)
// WARNING: Removing unreachable block (ram,0x08053cf1)
// WARNING: Removing unreachable block (ram,0x080539cf)
// WARNING: Removing unreachable block (ram,0x08053adc)
// WARNING: Removing unreachable block (ram,0x0805399e)
// WARNING: Removing unreachable block (ram,0x080539c5)
// WARNING: Removing unreachable block (ram,0x080539a9)
// WARNING: Removing unreachable block (ram,0x080539b2)
// WARNING: Removing unreachable block (ram,0x080539bd)
// WARNING: Removing unreachable block (ram,0x080539d7)
// WARNING: Removing unreachable block (ram,0x080539f6)
// WARNING: Removing unreachable block (ram,0x08053a07)
// WARNING: Removing unreachable block (ram,0x08053a0d)
// WARNING: Removing unreachable block (ram,0x08053a18)
// WARNING: Removing unreachable block (ram,0x08053a1e)
// WARNING: Removing unreachable block (ram,0x08053a2d)
// WARNING: Removing unreachable block (ram,0x08053b11)
// WARNING: Removing unreachable block (ram,0x08053a36)
// WARNING: Removing unreachable block (ram,0x08053b1d)
// WARNING: Removing unreachable block (ram,0x08053a45)
// WARNING: Removing unreachable block (ram,0x08053a4e)
// WARNING: Removing unreachable block (ram,0x08053a5c)
// WARNING: Removing unreachable block (ram,0x08053a60)
// WARNING: Removing unreachable block (ram,0x08053a6f)
// WARNING: Removing unreachable block (ram,0x08053a71)
// WARNING: Removing unreachable block (ram,0x08053a82)
// WARNING: Removing unreachable block (ram,0x08053a88)
// WARNING: Removing unreachable block (ram,0x08053a91)
// WARNING: Removing unreachable block (ram,0x08053ce0)
// WARNING: Removing unreachable block (ram,0x08053a9e)
// WARNING: Removing unreachable block (ram,0x08053b29)
// WARNING: Removing unreachable block (ram,0x08053c40)
// WARNING: Removing unreachable block (ram,0x08053c48)
// WARNING: Removing unreachable block (ram,0x08053c59)
// WARNING: Removing unreachable block (ram,0x08053c68)
// WARNING: Removing unreachable block (ram,0x08053c6e)
// WARNING: Removing unreachable block (ram,0x08053ad8)
// WARNING: Removing unreachable block (ram,0x08053ade)
// WARNING: Removing unreachable block (ram,0x08053ae5)
// WARNING: Removing unreachable block (ram,0x08053c76)
// WARNING: Removing unreachable block (ram,0x08053c80)
// WARNING: Removing unreachable block (ram,0x08053c91)
// WARNING: Removing unreachable block (ram,0x08053c99)
// WARNING: Removing unreachable block (ram,0x08053aee)
// WARNING: Removing unreachable block (ram,0x08053b33)
// WARNING: Removing unreachable block (ram,0x08053b49)
// WARNING: Removing unreachable block (ram,0x08053b5a)
// WARNING: Removing unreachable block (ram,0x0805390f)
// WARNING: Removing unreachable block (ram,0x08053b60)
// WARNING: Removing unreachable block (ram,0x08053b69)
// WARNING: Removing unreachable block (ram,0x08053920)
// WARNING: Removing unreachable block (ram,0x08053b76)
// WARNING: Removing unreachable block (ram,0x0805392a)
// WARNING: Removing unreachable block (ram,0x08053b84)
// WARNING: Removing unreachable block (ram,0x08053b8e)
// WARNING: Removing unreachable block (ram,0x0805393e)
// WARNING: Removing unreachable block (ram,0x08053b9d)
// WARNING: Removing unreachable block (ram,0x08053ba6)
// WARNING: Removing unreachable block (ram,0x08053bb2)
// WARNING: Removing unreachable block (ram,0x08053bb6)
// WARNING: Removing unreachable block (ram,0x08053bc5)
// WARNING: Removing unreachable block (ram,0x08053bc7)
// WARNING: Removing unreachable block (ram,0x08053bd8)
// WARNING: Removing unreachable block (ram,0x08053cae)
// WARNING: Removing unreachable block (ram,0x08053bde)
// WARNING: Removing unreachable block (ram,0x08053be8)
// WARNING: Removing unreachable block (ram,0x08053cb6)
// WARNING: Removing unreachable block (ram,0x08053bee)
// WARNING: Removing unreachable block (ram,0x08053ca6)
// WARNING: Removing unreachable block (ram,0x08053cba)
// WARNING: Removing unreachable block (ram,0x08053bf2)
// WARNING: Removing unreachable block (ram,0x08053c01)
// WARNING: Removing unreachable block (ram,0x08053c03)
// WARNING: Removing unreachable block (ram,0x08053948)
// WARNING: Removing unreachable block (ram,0x08053cd0)
// WARNING: Removing unreachable block (ram,0x08053ce4)
// WARNING: Removing unreachable block (ram,0x08053aa2)
// WARNING: Removing unreachable block (ram,0x08053ab1)
// WARNING: Removing unreachable block (ram,0x08053ab3)
// WARNING: Removing unreachable block (ram,0x08053988)
// WARNING: Removing unreachable block (ram,0x08053983)
// WARNING: Removing unreachable block (ram,0x0805398a)
// WARNING: Removing unreachable block (ram,0x08053991)
// WARNING: Removing unreachable block (ram,0x080538f9)
// WARNING: Removing unreachable block (ram,0x08053903)

undefined8 __divsc3(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  if (ABS(param_4) <= ABS(param_3)) {
    fVar2 = param_4 / param_3;
    param_4 = param_4 * fVar2 + param_3;
    fVar1 = (param_2 * fVar2 + param_1) / param_4;
    param_4 = (param_2 - fVar2 * param_1) / param_4;
  }
  else {
    fVar2 = param_3 / param_4;
    param_4 = param_3 * fVar2 + param_4;
    fVar1 = (param_1 * fVar2 + param_2) / param_4;
    param_4 = (param_2 * fVar2 - param_1) / param_4;
  }
  return CONCAT44(param_4,fVar1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08053da4)
// WARNING: Removing unreachable block (ram,0x08054137)
// WARNING: Removing unreachable block (ram,0x08054098)
// WARNING: Removing unreachable block (ram,0x080540a4)
// WARNING: Removing unreachable block (ram,0x08053f75)
// WARNING: Removing unreachable block (ram,0x08054148)
// WARNING: Removing unreachable block (ram,0x08054161)
// WARNING: Removing unreachable block (ram,0x08053e3f)
// WARNING: Removing unreachable block (ram,0x08053f4c)
// WARNING: Removing unreachable block (ram,0x08053e0e)
// WARNING: Removing unreachable block (ram,0x08053e35)
// WARNING: Removing unreachable block (ram,0x08053e19)
// WARNING: Removing unreachable block (ram,0x08053e22)
// WARNING: Removing unreachable block (ram,0x08053e2d)
// WARNING: Removing unreachable block (ram,0x08053e47)
// WARNING: Removing unreachable block (ram,0x08053e66)
// WARNING: Removing unreachable block (ram,0x08053e77)
// WARNING: Removing unreachable block (ram,0x08053e7d)
// WARNING: Removing unreachable block (ram,0x08053e88)
// WARNING: Removing unreachable block (ram,0x08053e8e)
// WARNING: Removing unreachable block (ram,0x08053e9d)
// WARNING: Removing unreachable block (ram,0x08053f81)
// WARNING: Removing unreachable block (ram,0x08053ea6)
// WARNING: Removing unreachable block (ram,0x08053f8d)
// WARNING: Removing unreachable block (ram,0x08053eb5)
// WARNING: Removing unreachable block (ram,0x08053ebe)
// WARNING: Removing unreachable block (ram,0x08053ecc)
// WARNING: Removing unreachable block (ram,0x08053ed0)
// WARNING: Removing unreachable block (ram,0x08053edf)
// WARNING: Removing unreachable block (ram,0x08053ee1)
// WARNING: Removing unreachable block (ram,0x08053ef2)
// WARNING: Removing unreachable block (ram,0x08053ef8)
// WARNING: Removing unreachable block (ram,0x08053f01)
// WARNING: Removing unreachable block (ram,0x08054150)
// WARNING: Removing unreachable block (ram,0x08053f0e)
// WARNING: Removing unreachable block (ram,0x08053f99)
// WARNING: Removing unreachable block (ram,0x080540b0)
// WARNING: Removing unreachable block (ram,0x080540b8)
// WARNING: Removing unreachable block (ram,0x080540c9)
// WARNING: Removing unreachable block (ram,0x080540d8)
// WARNING: Removing unreachable block (ram,0x080540de)
// WARNING: Removing unreachable block (ram,0x08053f48)
// WARNING: Removing unreachable block (ram,0x08053f4e)
// WARNING: Removing unreachable block (ram,0x08053f55)
// WARNING: Removing unreachable block (ram,0x080540e6)
// WARNING: Removing unreachable block (ram,0x080540f0)
// WARNING: Removing unreachable block (ram,0x08054101)
// WARNING: Removing unreachable block (ram,0x08054109)
// WARNING: Removing unreachable block (ram,0x08053f5e)
// WARNING: Removing unreachable block (ram,0x08053fa3)
// WARNING: Removing unreachable block (ram,0x08053fb9)
// WARNING: Removing unreachable block (ram,0x08053fca)
// WARNING: Removing unreachable block (ram,0x08053d83)
// WARNING: Removing unreachable block (ram,0x08053fd0)
// WARNING: Removing unreachable block (ram,0x08053fd9)
// WARNING: Removing unreachable block (ram,0x08053d90)
// WARNING: Removing unreachable block (ram,0x08053fe6)
// WARNING: Removing unreachable block (ram,0x08053d9a)
// WARNING: Removing unreachable block (ram,0x08053ff4)
// WARNING: Removing unreachable block (ram,0x08053ffe)
// WARNING: Removing unreachable block (ram,0x08053dae)
// WARNING: Removing unreachable block (ram,0x0805400d)
// WARNING: Removing unreachable block (ram,0x08054016)
// WARNING: Removing unreachable block (ram,0x08054022)
// WARNING: Removing unreachable block (ram,0x08054026)
// WARNING: Removing unreachable block (ram,0x08054035)
// WARNING: Removing unreachable block (ram,0x08054037)
// WARNING: Removing unreachable block (ram,0x08054048)
// WARNING: Removing unreachable block (ram,0x0805411e)
// WARNING: Removing unreachable block (ram,0x0805404e)
// WARNING: Removing unreachable block (ram,0x08054058)
// WARNING: Removing unreachable block (ram,0x08054126)
// WARNING: Removing unreachable block (ram,0x0805405e)
// WARNING: Removing unreachable block (ram,0x08054116)
// WARNING: Removing unreachable block (ram,0x0805412a)
// WARNING: Removing unreachable block (ram,0x08054062)
// WARNING: Removing unreachable block (ram,0x08054071)
// WARNING: Removing unreachable block (ram,0x08054073)
// WARNING: Removing unreachable block (ram,0x08053db8)
// WARNING: Removing unreachable block (ram,0x08054140)
// WARNING: Removing unreachable block (ram,0x08054154)
// WARNING: Removing unreachable block (ram,0x08053f12)
// WARNING: Removing unreachable block (ram,0x08053f21)
// WARNING: Removing unreachable block (ram,0x08053f23)
// WARNING: Removing unreachable block (ram,0x08053df8)
// WARNING: Removing unreachable block (ram,0x08053df3)
// WARNING: Removing unreachable block (ram,0x08053dfa)
// WARNING: Removing unreachable block (ram,0x08053e01)
// WARNING: Removing unreachable block (ram,0x08053d6d)
// WARNING: Removing unreachable block (ram,0x08053d77)

double * __divdc3(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  
  if (ABS(param_5) <= ABS(param_4)) {
    dVar2 = param_5 / param_4;
    param_5 = param_5 * dVar2 + param_4;
    dVar1 = (param_3 * dVar2 + param_2) / param_5;
    param_5 = (param_3 - dVar2 * param_2) / param_5;
  }
  else {
    dVar2 = param_4 / param_5;
    param_5 = param_4 * dVar2 + param_5;
    dVar1 = (param_2 * dVar2 + param_3) / param_5;
    param_5 = (param_3 * dVar2 - param_2) / param_5;
  }
  *param_1 = dVar1;
  param_1[1] = param_5;
  return param_1;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x080541ae)
// WARNING: Removing unreachable block (ram,0x080541b0)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    ppcVar2 = &__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


