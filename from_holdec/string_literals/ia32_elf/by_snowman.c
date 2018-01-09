
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048410();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x3c8f - 4)) {
        fun_8048410();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048410() {
    goto __gmon_start__;
}

int32_t strchr = 0x80483e6;

int32_t fun_80483e0(void* ecx) {
    goto strchr;
}

int32_t printf = 0x80483a6;

void fun_80483a0(void* ecx) {
    goto printf;
}

int32_t fopen = 0x8048406;

int32_t fun_8048400(void* ecx, void* a2, int32_t a3) {
    goto fopen;
}

int32_t fwrite = 0x80483c6;

void fun_80483c0(void* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6, int32_t a7) {
    goto fwrite;
}

int32_t fclose = 0x80483b6;

void fun_80483b0(void* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto fclose;
}

int32_t puts = 0x80483d6;

void fun_80483d0(void* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto puts;
}

int32_t fopen(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = fopen(0x804c02c, v2);
    }
    return eax1;
}

int32_t __libc_start_main = 0x80483f6;

void fun_80483f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main() {
    void* ecx1;
    void* v2;
    void** v3;
    int32_t eax4;
    int32_t ebx5;

    ecx1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80483e0(ecx1);
    fun_80483a0(39);
    v2 = *v3;
    fun_80483e0(39);
    fun_80483a0(v2);
    eax4 = fun_8048400(v2, "with-null-byte", "w");
    fun_80483c0(v2, "with null byte ", 17, 1, eax4, "with-null-byte", "w");
    fun_80483c0(v2, "with null byte ", 1, 17, eax4, ecx1, ebx5);
    fun_80483b0(v2, eax4, 1, 17, eax4);
    fun_80483d0(v2, 0x8049265, 1, 17, eax4);
    fun_80483d0(v2, 0x804927f, 1, 17, eax4);
    fun_80483d0(v2, 0x8049299, 1, 17, eax4);
    fun_80483d0(v2, 0x80492b3, 1, 17, eax4);
    fun_80483d0(v2, 0x80492cd, 1, 17, eax4);
    fun_80483d0(v2, 0x80492e7, 1, 17, eax4);
    fun_80483d0(v2, 0x8049301, 1, 17, eax4);
    fun_80483d0(v2, 0x804931b, 1, 17, eax4);
    fun_80483d0(v2, "hex=0x09 dec=9 char=\tFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x0a dec=10 char=\nFINI", 1, 17, eax4);
    fun_80483d0(v2, 0x804936a, 1, 17, eax4);
    fun_80483d0(v2, 0x8049385, 1, 17, eax4);
    fun_80483d0(v2, "hex=0x0d dec=13 char=\rFINI", 1, 17, eax4);
    fun_80483d0(v2, 0x80493bb, 1, 17, eax4);
    fun_80483d0(v2, 0x80493d6, 1, 17, eax4);
    fun_80483d0(v2, 0x80493f1, 1, 17, eax4);
    fun_80483d0(v2, 0x804940c, 1, 17, eax4);
    fun_80483d0(v2, 0x8049427, 1, 17, eax4);
    fun_80483d0(v2, 0x8049442, 1, 17, eax4);
    fun_80483d0(v2, 0x804945d, 1, 17, eax4);
    fun_80483d0(v2, 0x8049478, 1, 17, eax4);
    fun_80483d0(v2, 0x8049493, 1, 17, eax4);
    fun_80483d0(v2, 0x80494ae, 1, 17, eax4);
    fun_80483d0(v2, 0x80494c9, 1, 17, eax4);
    fun_80483d0(v2, 0x80494e4, 1, 17, eax4);
    fun_80483d0(v2, 0x80494ff, 1, 17, eax4);
    fun_80483d0(v2, 0x804951a, 1, 17, eax4);
    fun_80483d0(v2, 0x8049535, 1, 17, eax4);
    fun_80483d0(v2, 0x8049550, 1, 17, eax4);
    fun_80483d0(v2, 0x804956b, 1, 17, eax4);
    fun_80483d0(v2, 0x8049586, 1, 17, eax4);
    fun_80483d0(v2, "hex=0x20 dec=32 char= FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x21 dec=33 char=!FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x22 dec=34 char=\"FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x23 dec=35 char=#FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x24 dec=36 char=$FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x25 dec=37 char=%FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x26 dec=38 char=&FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x27 dec=39 char='FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x28 dec=40 char=(FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x29 dec=41 char=)FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x2a dec=42 char=*FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x2b dec=43 char=+FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x2c dec=44 char=,FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x2d dec=45 char=-FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x2e dec=46 char=.FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x2f dec=47 char=/FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x30 dec=48 char=0FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x31 dec=49 char=1FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x32 dec=50 char=2FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x33 dec=51 char=3FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x34 dec=52 char=4FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x35 dec=53 char=5FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x36 dec=54 char=6FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x37 dec=55 char=7FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x38 dec=56 char=8FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x39 dec=57 char=9FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x3a dec=58 char=:FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x3b dec=59 char=;FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x3c dec=60 char=<FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x3d dec=61 char==FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x3e dec=62 char=>FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x3f dec=63 char=?FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x40 dec=64 char=@FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x41 dec=65 char=AFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x42 dec=66 char=BFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x43 dec=67 char=CFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x44 dec=68 char=DFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x45 dec=69 char=EFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x46 dec=70 char=FFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x47 dec=71 char=GFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x48 dec=72 char=HFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x49 dec=73 char=IFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x4a dec=74 char=JFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x4b dec=75 char=KFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x4c dec=76 char=LFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x4d dec=77 char=MFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x4e dec=78 char=NFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x4f dec=79 char=OFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x50 dec=80 char=PFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x51 dec=81 char=QFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x52 dec=82 char=RFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x53 dec=83 char=SFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x54 dec=84 char=TFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x55 dec=85 char=UFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x56 dec=86 char=VFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x57 dec=87 char=WFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x58 dec=88 char=XFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x59 dec=89 char=YFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x5a dec=90 char=ZFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x5b dec=91 char=[FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x5c dec=92 char=\\FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x5d dec=93 char=]FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x5e dec=94 char=^FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x5f dec=95 char=_FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x60 dec=96 char=`FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x61 dec=97 char=aFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x62 dec=98 char=bFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x63 dec=99 char=cFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x64 dec=100 char=dFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x65 dec=101 char=eFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x66 dec=102 char=fFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x67 dec=103 char=gFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x68 dec=104 char=hFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x69 dec=105 char=iFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x6a dec=106 char=jFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x6b dec=107 char=kFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x6c dec=108 char=lFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x6d dec=109 char=mFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x6e dec=110 char=nFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x6f dec=111 char=oFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x70 dec=112 char=pFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x71 dec=113 char=qFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x72 dec=114 char=rFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x73 dec=115 char=sFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x74 dec=116 char=tFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x75 dec=117 char=uFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x76 dec=118 char=vFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x77 dec=119 char=wFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x78 dec=120 char=xFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x79 dec=121 char=yFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x7a dec=122 char=zFINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x7b dec=123 char={FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x7c dec=124 char=|FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x7d dec=125 char=}FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x7e dec=126 char=~FINI", 1, 17, eax4);
    fun_80483d0(v2, "hex=0x7f dec=127 char=FINI", 1, 17, eax4);
    fun_80483d0(v2, 0x8049fdd, 1, 17, eax4);
    fun_80483d0(v2, 0x8049ff9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a015, 1, 17, eax4);
    fun_80483d0(v2, 0x804a031, 1, 17, eax4);
    fun_80483d0(v2, 0x804a04d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a069, 1, 17, eax4);
    fun_80483d0(v2, 0x804a085, 1, 17, eax4);
    fun_80483d0(v2, 0x804a0a1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a0bd, 1, 17, eax4);
    fun_80483d0(v2, 0x804a0d9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a0f5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a111, 1, 17, eax4);
    fun_80483d0(v2, 0x804a12d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a149, 1, 17, eax4);
    fun_80483d0(v2, 0x804a165, 1, 17, eax4);
    fun_80483d0(v2, 0x804a181, 1, 17, eax4);
    fun_80483d0(v2, 0x804a19d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a1b9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a1d5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a1f1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a20d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a229, 1, 17, eax4);
    fun_80483d0(v2, 0x804a245, 1, 17, eax4);
    fun_80483d0(v2, 0x804a261, 1, 17, eax4);
    fun_80483d0(v2, 0x804a27d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a299, 1, 17, eax4);
    fun_80483d0(v2, 0x804a2b5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a2d1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a2ed, 1, 17, eax4);
    fun_80483d0(v2, 0x804a309, 1, 17, eax4);
    fun_80483d0(v2, 0x804a325, 1, 17, eax4);
    fun_80483d0(v2, 0x804a341, 1, 17, eax4);
    fun_80483d0(v2, 0x804a35d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a379, 1, 17, eax4);
    fun_80483d0(v2, 0x804a395, 1, 17, eax4);
    fun_80483d0(v2, 0x804a3b1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a3cd, 1, 17, eax4);
    fun_80483d0(v2, 0x804a3e9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a405, 1, 17, eax4);
    fun_80483d0(v2, 0x804a421, 1, 17, eax4);
    fun_80483d0(v2, 0x804a43d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a459, 1, 17, eax4);
    fun_80483d0(v2, 0x804a475, 1, 17, eax4);
    fun_80483d0(v2, 0x804a491, 1, 17, eax4);
    fun_80483d0(v2, 0x804a4ad, 1, 17, eax4);
    fun_80483d0(v2, 0x804a4c9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a4e5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a501, 1, 17, eax4);
    fun_80483d0(v2, 0x804a51d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a539, 1, 17, eax4);
    fun_80483d0(v2, 0x804a555, 1, 17, eax4);
    fun_80483d0(v2, 0x804a571, 1, 17, eax4);
    fun_80483d0(v2, 0x804a58d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a5a9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a5c5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a5e1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a5fd, 1, 17, eax4);
    fun_80483d0(v2, 0x804a619, 1, 17, eax4);
    fun_80483d0(v2, 0x804a635, 1, 17, eax4);
    fun_80483d0(v2, 0x804a651, 1, 17, eax4);
    fun_80483d0(v2, 0x804a66d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a689, 1, 17, eax4);
    fun_80483d0(v2, 0x804a6a5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a6c1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a6dd, 1, 17, eax4);
    fun_80483d0(v2, 0x804a6f9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a715, 1, 17, eax4);
    fun_80483d0(v2, 0x804a731, 1, 17, eax4);
    fun_80483d0(v2, 0x804a74d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a769, 1, 17, eax4);
    fun_80483d0(v2, 0x804a785, 1, 17, eax4);
    fun_80483d0(v2, 0x804a7a1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a7bd, 1, 17, eax4);
    fun_80483d0(v2, 0x804a7d9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a7f5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a811, 1, 17, eax4);
    fun_80483d0(v2, 0x804a82d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a849, 1, 17, eax4);
    fun_80483d0(v2, 0x804a865, 1, 17, eax4);
    fun_80483d0(v2, 0x804a881, 1, 17, eax4);
    fun_80483d0(v2, 0x804a89d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a8b9, 1, 17, eax4);
    fun_80483d0(v2, 0x804a8d5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a8f1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a90d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a929, 1, 17, eax4);
    fun_80483d0(v2, 0x804a945, 1, 17, eax4);
    fun_80483d0(v2, 0x804a961, 1, 17, eax4);
    fun_80483d0(v2, 0x804a97d, 1, 17, eax4);
    fun_80483d0(v2, 0x804a999, 1, 17, eax4);
    fun_80483d0(v2, 0x804a9b5, 1, 17, eax4);
    fun_80483d0(v2, 0x804a9d1, 1, 17, eax4);
    fun_80483d0(v2, 0x804a9ed, 1, 17, eax4);
    fun_80483d0(v2, 0x804aa09, 1, 17, eax4);
    fun_80483d0(v2, 0x804aa25, 1, 17, eax4);
    fun_80483d0(v2, 0x804aa41, 1, 17, eax4);
    fun_80483d0(v2, 0x804aa5d, 1, 17, eax4);
    fun_80483d0(v2, 0x804aa79, 1, 17, eax4);
    fun_80483d0(v2, 0x804aa95, 1, 17, eax4);
    fun_80483d0(v2, 0x804aab1, 1, 17, eax4);
    fun_80483d0(v2, 0x804aacd, 1, 17, eax4);
    fun_80483d0(v2, 0x804aae9, 1, 17, eax4);
    fun_80483d0(v2, 0x804ab05, 1, 17, eax4);
    fun_80483d0(v2, 0x804ab21, 1, 17, eax4);
    fun_80483d0(v2, 0x804ab3d, 1, 17, eax4);
    fun_80483d0(v2, 0x804ab59, 1, 17, eax4);
    fun_80483d0(v2, 0x804ab75, 1, 17, eax4);
    fun_80483d0(v2, 0x804ab91, 1, 17, eax4);
    fun_80483d0(v2, 0x804abad, 1, 17, eax4);
    fun_80483d0(v2, 0x804abc9, 1, 17, eax4);
    fun_80483d0(v2, 0x804abe5, 1, 17, eax4);
    fun_80483d0(v2, 0x804ac01, 1, 17, eax4);
    fun_80483d0(v2, 0x804ac1d, 1, 17, eax4);
    fun_80483d0(v2, 0x804ac39, 1, 17, eax4);
    fun_80483d0(v2, 0x804ac55, 1, 17, eax4);
    fun_80483d0(v2, 0x804ac71, 1, 17, eax4);
    fun_80483d0(v2, 0x804ac8d, 1, 17, eax4);
    fun_80483d0(v2, 0x804aca9, 1, 17, eax4);
    fun_80483d0(v2, 0x804acc5, 1, 17, eax4);
    fun_80483d0(v2, 0x804ace1, 1, 17, eax4);
    fun_80483d0(v2, 0x804acfd, 1, 17, eax4);
    fun_80483d0(v2, 0x804ad19, 1, 17, eax4);
    fun_80483d0(v2, 0x804ad35, 1, 17, eax4);
    fun_80483d0(v2, 0x804ad51, 1, 17, eax4);
    fun_80483d0(v2, 0x804ad6d, 1, 17, eax4);
    fun_80483d0(v2, 0x804ad89, 1, 17, eax4);
    fun_80483d0(v2, 0x804ada5, 1, 17, eax4);
    fun_80483d0(v2, 0x804adc1, 1, 17, eax4);
    return 0;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804839c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80483f0(main, __return_address(), esp1, __libc_csu_init, 0x8049200, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        fopen(0x804bf10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = fopen(0x804c02c, 0);
    }
    return eax3;
}

void fun_804917d() {
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2e57;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80491c1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80491fd() {
    return;
}

int32_t g804c008 = 0;

void fun_80483e6() {
    goto g804c008;
}

void fun_80483a6() {
    goto 0x8048390;
}

void fun_8048406() {
    goto 0x8048390;
}

void fun_80483c6() {
    goto 0x8048390;
}

void fun_80483b6() {
    goto 0x8048390;
}

void fun_80483d6() {
    goto 0x8048390;
}

void fun_804910c() {
}

signed char __TMC_END__ = 0;

int32_t fun_8049145() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80483f6() {
    goto 0x8048390;
}
