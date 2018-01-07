
int64_t __gmon_start__ = 0;

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t fclose = 0x400526;

void fun_400520(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto fclose;
}

int64_t strchr = 0x400536;

int64_t fun_400530(int64_t rdi, int64_t rsi) {
    goto strchr;
}

int64_t printf = 0x400546;

void fun_400540(int64_t rdi, int64_t rsi) {
    goto printf;
}

int64_t fopen = 0x400556;

int64_t fun_400550(int64_t rdi, int64_t rsi) {
    goto fopen;
}

int64_t fwrite = 0x400566;

void fun_400560(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto fwrite;
}

int64_t puts = 0x400516;

void fun_400510(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto puts;
}

void _fini() {
    return;
}

void fun_401095() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void fwrite();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        fwrite();
    }
    if (1) 
        goto 0x401098;
    if (1) 
        goto 0x401098;
    goto 0;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x603e08 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t g604010 = 0;

void fun_400516() {
    goto g604010;
}

signed char __bss_start = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = __bss_start == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        __bss_start = 1;
    }
    return rax2;
}

void fun_400526() {
    goto 0x400500;
}

void fun_400536() {
    goto 0x400500;
}

void fun_400546() {
    goto 0x400500;
}

void fun_400556() {
    goto 0x400500;
}

void fun_400566() {
    goto 0x400500;
}

int64_t main() {
    int64_t rdi1;
    int64_t* rsi2;
    int64_t rax3;
    int64_t rdi4;
    int64_t rax5;
    int64_t rax6;

    rdi1 = *rsi2;
    rax3 = fun_400530(rdi1, 39);
    fun_400540("with single ' quote %p\n", rax3);
    rdi4 = *rsi2;
    rax5 = fun_400530(rdi4, 34);
    fun_400540("with double \" quote %p\n", rax5);
    rax6 = fun_400550("with-null-byte", "w");
    fun_400560("with null byte ", 17, 1, rax6);
    fun_400560("with null byte ", 1, 17, rax6);
    fun_400520(rax6, 1, 17, rax6);
    fun_400510(0x4011c1, 1, 17, rax6);
    fun_400510(0x4011db, 1, 17, rax6);
    fun_400510(0x4011f5, 1, 17, rax6);
    fun_400510(0x40120f, 1, 17, rax6);
    fun_400510(0x401229, 1, 17, rax6);
    fun_400510(0x401243, 1, 17, rax6);
    fun_400510(0x40125d, 1, 17, rax6);
    fun_400510(0x401277, 1, 17, rax6);
    fun_400510("hex=0x09 dec=9 char=\tFINI", 1, 17, rax6);
    fun_400510("hex=0x0a dec=10 char=\nFINI", 1, 17, rax6);
    fun_400510(0x4012c6, 1, 17, rax6);
    fun_400510(0x4012e1, 1, 17, rax6);
    fun_400510("hex=0x0d dec=13 char=\rFINI", 1, 17, rax6);
    fun_400510(0x401317, 1, 17, rax6);
    fun_400510(0x401332, 1, 17, rax6);
    fun_400510(0x40134d, 1, 17, rax6);
    fun_400510(0x401368, 1, 17, rax6);
    fun_400510(0x401383, 1, 17, rax6);
    fun_400510(0x40139e, 1, 17, rax6);
    fun_400510(0x4013b9, 1, 17, rax6);
    fun_400510(0x4013d4, 1, 17, rax6);
    fun_400510(0x4013ef, 1, 17, rax6);
    fun_400510(0x40140a, 1, 17, rax6);
    fun_400510(0x401425, 1, 17, rax6);
    fun_400510(0x401440, 1, 17, rax6);
    fun_400510(0x40145b, 1, 17, rax6);
    fun_400510(0x401476, 1, 17, rax6);
    fun_400510(0x401491, 1, 17, rax6);
    fun_400510(0x4014ac, 1, 17, rax6);
    fun_400510(0x4014c7, 1, 17, rax6);
    fun_400510(0x4014e2, 1, 17, rax6);
    fun_400510("hex=0x20 dec=32 char= FINI", 1, 17, rax6);
    fun_400510("hex=0x21 dec=33 char=!FINI", 1, 17, rax6);
    fun_400510("hex=0x22 dec=34 char=\"FINI", 1, 17, rax6);
    fun_400510("hex=0x23 dec=35 char=#FINI", 1, 17, rax6);
    fun_400510("hex=0x24 dec=36 char=$FINI", 1, 17, rax6);
    fun_400510("hex=0x25 dec=37 char=%FINI", 1, 17, rax6);
    fun_400510("hex=0x26 dec=38 char=&FINI", 1, 17, rax6);
    fun_400510("hex=0x27 dec=39 char='FINI", 1, 17, rax6);
    fun_400510("hex=0x28 dec=40 char=(FINI", 1, 17, rax6);
    fun_400510("hex=0x29 dec=41 char=)FINI", 1, 17, rax6);
    fun_400510("hex=0x2a dec=42 char=*FINI", 1, 17, rax6);
    fun_400510("hex=0x2b dec=43 char=+FINI", 1, 17, rax6);
    fun_400510("hex=0x2c dec=44 char=,FINI", 1, 17, rax6);
    fun_400510("hex=0x2d dec=45 char=-FINI", 1, 17, rax6);
    fun_400510("hex=0x2e dec=46 char=.FINI", 1, 17, rax6);
    fun_400510("hex=0x2f dec=47 char=/FINI", 1, 17, rax6);
    fun_400510("hex=0x30 dec=48 char=0FINI", 1, 17, rax6);
    fun_400510("hex=0x31 dec=49 char=1FINI", 1, 17, rax6);
    fun_400510("hex=0x32 dec=50 char=2FINI", 1, 17, rax6);
    fun_400510("hex=0x33 dec=51 char=3FINI", 1, 17, rax6);
    fun_400510("hex=0x34 dec=52 char=4FINI", 1, 17, rax6);
    fun_400510("hex=0x35 dec=53 char=5FINI", 1, 17, rax6);
    fun_400510("hex=0x36 dec=54 char=6FINI", 1, 17, rax6);
    fun_400510("hex=0x37 dec=55 char=7FINI", 1, 17, rax6);
    fun_400510("hex=0x38 dec=56 char=8FINI", 1, 17, rax6);
    fun_400510("hex=0x39 dec=57 char=9FINI", 1, 17, rax6);
    fun_400510("hex=0x3a dec=58 char=:FINI", 1, 17, rax6);
    fun_400510("hex=0x3b dec=59 char=;FINI", 1, 17, rax6);
    fun_400510("hex=0x3c dec=60 char=<FINI", 1, 17, rax6);
    fun_400510("hex=0x3d dec=61 char==FINI", 1, 17, rax6);
    fun_400510("hex=0x3e dec=62 char=>FINI", 1, 17, rax6);
    fun_400510("hex=0x3f dec=63 char=?FINI", 1, 17, rax6);
    fun_400510("hex=0x40 dec=64 char=@FINI", 1, 17, rax6);
    fun_400510("hex=0x41 dec=65 char=AFINI", 1, 17, rax6);
    fun_400510("hex=0x42 dec=66 char=BFINI", 1, 17, rax6);
    fun_400510("hex=0x43 dec=67 char=CFINI", 1, 17, rax6);
    fun_400510("hex=0x44 dec=68 char=DFINI", 1, 17, rax6);
    fun_400510("hex=0x45 dec=69 char=EFINI", 1, 17, rax6);
    fun_400510("hex=0x46 dec=70 char=FFINI", 1, 17, rax6);
    fun_400510("hex=0x47 dec=71 char=GFINI", 1, 17, rax6);
    fun_400510("hex=0x48 dec=72 char=HFINI", 1, 17, rax6);
    fun_400510("hex=0x49 dec=73 char=IFINI", 1, 17, rax6);
    fun_400510("hex=0x4a dec=74 char=JFINI", 1, 17, rax6);
    fun_400510("hex=0x4b dec=75 char=KFINI", 1, 17, rax6);
    fun_400510("hex=0x4c dec=76 char=LFINI", 1, 17, rax6);
    fun_400510("hex=0x4d dec=77 char=MFINI", 1, 17, rax6);
    fun_400510("hex=0x4e dec=78 char=NFINI", 1, 17, rax6);
    fun_400510("hex=0x4f dec=79 char=OFINI", 1, 17, rax6);
    fun_400510("hex=0x50 dec=80 char=PFINI", 1, 17, rax6);
    fun_400510("hex=0x51 dec=81 char=QFINI", 1, 17, rax6);
    fun_400510("hex=0x52 dec=82 char=RFINI", 1, 17, rax6);
    fun_400510("hex=0x53 dec=83 char=SFINI", 1, 17, rax6);
    fun_400510("hex=0x54 dec=84 char=TFINI", 1, 17, rax6);
    fun_400510("hex=0x55 dec=85 char=UFINI", 1, 17, rax6);
    fun_400510("hex=0x56 dec=86 char=VFINI", 1, 17, rax6);
    fun_400510("hex=0x57 dec=87 char=WFINI", 1, 17, rax6);
    fun_400510("hex=0x58 dec=88 char=XFINI", 1, 17, rax6);
    fun_400510("hex=0x59 dec=89 char=YFINI", 1, 17, rax6);
    fun_400510("hex=0x5a dec=90 char=ZFINI", 1, 17, rax6);
    fun_400510("hex=0x5b dec=91 char=[FINI", 1, 17, rax6);
    fun_400510("hex=0x5c dec=92 char=\\FINI", 1, 17, rax6);
    fun_400510("hex=0x5d dec=93 char=]FINI", 1, 17, rax6);
    fun_400510("hex=0x5e dec=94 char=^FINI", 1, 17, rax6);
    fun_400510("hex=0x5f dec=95 char=_FINI", 1, 17, rax6);
    fun_400510("hex=0x60 dec=96 char=`FINI", 1, 17, rax6);
    fun_400510("hex=0x61 dec=97 char=aFINI", 1, 17, rax6);
    fun_400510("hex=0x62 dec=98 char=bFINI", 1, 17, rax6);
    fun_400510("hex=0x63 dec=99 char=cFINI", 1, 17, rax6);
    fun_400510("hex=0x64 dec=100 char=dFINI", 1, 17, rax6);
    fun_400510("hex=0x65 dec=101 char=eFINI", 1, 17, rax6);
    fun_400510("hex=0x66 dec=102 char=fFINI", 1, 17, rax6);
    fun_400510("hex=0x67 dec=103 char=gFINI", 1, 17, rax6);
    fun_400510("hex=0x68 dec=104 char=hFINI", 1, 17, rax6);
    fun_400510("hex=0x69 dec=105 char=iFINI", 1, 17, rax6);
    fun_400510("hex=0x6a dec=106 char=jFINI", 1, 17, rax6);
    fun_400510("hex=0x6b dec=107 char=kFINI", 1, 17, rax6);
    fun_400510("hex=0x6c dec=108 char=lFINI", 1, 17, rax6);
    fun_400510("hex=0x6d dec=109 char=mFINI", 1, 17, rax6);
    fun_400510("hex=0x6e dec=110 char=nFINI", 1, 17, rax6);
    fun_400510("hex=0x6f dec=111 char=oFINI", 1, 17, rax6);
    fun_400510("hex=0x70 dec=112 char=pFINI", 1, 17, rax6);
    fun_400510("hex=0x71 dec=113 char=qFINI", 1, 17, rax6);
    fun_400510("hex=0x72 dec=114 char=rFINI", 1, 17, rax6);
    fun_400510("hex=0x73 dec=115 char=sFINI", 1, 17, rax6);
    fun_400510("hex=0x74 dec=116 char=tFINI", 1, 17, rax6);
    fun_400510("hex=0x75 dec=117 char=uFINI", 1, 17, rax6);
    fun_400510("hex=0x76 dec=118 char=vFINI", 1, 17, rax6);
    fun_400510("hex=0x77 dec=119 char=wFINI", 1, 17, rax6);
    fun_400510("hex=0x78 dec=120 char=xFINI", 1, 17, rax6);
    fun_400510("hex=0x79 dec=121 char=yFINI", 1, 17, rax6);
    fun_400510("hex=0x7a dec=122 char=zFINI", 1, 17, rax6);
    fun_400510("hex=0x7b dec=123 char={FINI", 1, 17, rax6);
    fun_400510("hex=0x7c dec=124 char=|FINI", 1, 17, rax6);
    fun_400510("hex=0x7d dec=125 char=}FINI", 1, 17, rax6);
    fun_400510("hex=0x7e dec=126 char=~FINI", 1, 17, rax6);
    fun_400510("hex=0x7f dec=127 char=FINI", 1, 17, rax6);
    fun_400510(0x401f39, 1, 17, rax6);
    fun_400510(0x401f55, 1, 17, rax6);
    fun_400510(0x401f71, 1, 17, rax6);
    fun_400510(0x401f8d, 1, 17, rax6);
    fun_400510(0x401fa9, 1, 17, rax6);
    fun_400510(0x401fc5, 1, 17, rax6);
    fun_400510(0x401fe1, 1, 17, rax6);
    fun_400510(0x401ffd, 1, 17, rax6);
    fun_400510(0x402019, 1, 17, rax6);
    fun_400510(0x402035, 1, 17, rax6);
    fun_400510(0x402051, 1, 17, rax6);
    fun_400510(0x40206d, 1, 17, rax6);
    fun_400510(0x402089, 1, 17, rax6);
    fun_400510(0x4020a5, 1, 17, rax6);
    fun_400510(0x4020c1, 1, 17, rax6);
    fun_400510(0x4020dd, 1, 17, rax6);
    fun_400510(0x4020f9, 1, 17, rax6);
    fun_400510(0x402115, 1, 17, rax6);
    fun_400510(0x402131, 1, 17, rax6);
    fun_400510(0x40214d, 1, 17, rax6);
    fun_400510(0x402169, 1, 17, rax6);
    fun_400510(0x402185, 1, 17, rax6);
    fun_400510(0x4021a1, 1, 17, rax6);
    fun_400510(0x4021bd, 1, 17, rax6);
    fun_400510(0x4021d9, 1, 17, rax6);
    fun_400510(0x4021f5, 1, 17, rax6);
    fun_400510(0x402211, 1, 17, rax6);
    fun_400510(0x40222d, 1, 17, rax6);
    fun_400510(0x402249, 1, 17, rax6);
    fun_400510(0x402265, 1, 17, rax6);
    fun_400510(0x402281, 1, 17, rax6);
    fun_400510(0x40229d, 1, 17, rax6);
    fun_400510(0x4022b9, 1, 17, rax6);
    fun_400510(0x4022d5, 1, 17, rax6);
    fun_400510(0x4022f1, 1, 17, rax6);
    fun_400510(0x40230d, 1, 17, rax6);
    fun_400510(0x402329, 1, 17, rax6);
    fun_400510(0x402345, 1, 17, rax6);
    fun_400510(0x402361, 1, 17, rax6);
    fun_400510(0x40237d, 1, 17, rax6);
    fun_400510(0x402399, 1, 17, rax6);
    fun_400510(0x4023b5, 1, 17, rax6);
    fun_400510(0x4023d1, 1, 17, rax6);
    fun_400510(0x4023ed, 1, 17, rax6);
    fun_400510(0x402409, 1, 17, rax6);
    fun_400510(0x402425, 1, 17, rax6);
    fun_400510(0x402441, 1, 17, rax6);
    fun_400510(0x40245d, 1, 17, rax6);
    fun_400510(0x402479, 1, 17, rax6);
    fun_400510(0x402495, 1, 17, rax6);
    fun_400510(0x4024b1, 1, 17, rax6);
    fun_400510(0x4024cd, 1, 17, rax6);
    fun_400510(0x4024e9, 1, 17, rax6);
    fun_400510(0x402505, 1, 17, rax6);
    fun_400510(0x402521, 1, 17, rax6);
    fun_400510(0x40253d, 1, 17, rax6);
    fun_400510(0x402559, 1, 17, rax6);
    fun_400510(0x402575, 1, 17, rax6);
    fun_400510(0x402591, 1, 17, rax6);
    fun_400510(0x4025ad, 1, 17, rax6);
    fun_400510(0x4025c9, 1, 17, rax6);
    fun_400510(0x4025e5, 1, 17, rax6);
    fun_400510(0x402601, 1, 17, rax6);
    fun_400510(0x40261d, 1, 17, rax6);
    fun_400510(0x402639, 1, 17, rax6);
    fun_400510(0x402655, 1, 17, rax6);
    fun_400510(0x402671, 1, 17, rax6);
    fun_400510(0x40268d, 1, 17, rax6);
    fun_400510(0x4026a9, 1, 17, rax6);
    fun_400510(0x4026c5, 1, 17, rax6);
    fun_400510(0x4026e1, 1, 17, rax6);
    fun_400510(0x4026fd, 1, 17, rax6);
    fun_400510(0x402719, 1, 17, rax6);
    fun_400510(0x402735, 1, 17, rax6);
    fun_400510(0x402751, 1, 17, rax6);
    fun_400510(0x40276d, 1, 17, rax6);
    fun_400510(0x402789, 1, 17, rax6);
    fun_400510(0x4027a5, 1, 17, rax6);
    fun_400510(0x4027c1, 1, 17, rax6);
    fun_400510(0x4027dd, 1, 17, rax6);
    fun_400510(0x4027f9, 1, 17, rax6);
    fun_400510(0x402815, 1, 17, rax6);
    fun_400510(0x402831, 1, 17, rax6);
    fun_400510(0x40284d, 1, 17, rax6);
    fun_400510(0x402869, 1, 17, rax6);
    fun_400510(0x402885, 1, 17, rax6);
    fun_400510(0x4028a1, 1, 17, rax6);
    fun_400510(0x4028bd, 1, 17, rax6);
    fun_400510(0x4028d9, 1, 17, rax6);
    fun_400510(0x4028f5, 1, 17, rax6);
    fun_400510(0x402911, 1, 17, rax6);
    fun_400510(0x40292d, 1, 17, rax6);
    fun_400510(0x402949, 1, 17, rax6);
    fun_400510(0x402965, 1, 17, rax6);
    fun_400510(0x402981, 1, 17, rax6);
    fun_400510(0x40299d, 1, 17, rax6);
    fun_400510(0x4029b9, 1, 17, rax6);
    fun_400510(0x4029d5, 1, 17, rax6);
    fun_400510(0x4029f1, 1, 17, rax6);
    fun_400510(0x402a0d, 1, 17, rax6);
    fun_400510(0x402a29, 1, 17, rax6);
    fun_400510(0x402a45, 1, 17, rax6);
    fun_400510(0x402a61, 1, 17, rax6);
    fun_400510(0x402a7d, 1, 17, rax6);
    fun_400510(0x402a99, 1, 17, rax6);
    fun_400510(0x402ab5, 1, 17, rax6);
    fun_400510(0x402ad1, 1, 17, rax6);
    fun_400510(0x402aed, 1, 17, rax6);
    fun_400510(0x402b09, 1, 17, rax6);
    fun_400510(0x402b25, 1, 17, rax6);
    fun_400510(0x402b41, 1, 17, rax6);
    fun_400510(0x402b5d, 1, 17, rax6);
    fun_400510(0x402b79, 1, 17, rax6);
    fun_400510(0x402b95, 1, 17, rax6);
    fun_400510(0x402bb1, 1, 17, rax6);
    fun_400510(0x402bcd, 1, 17, rax6);
    fun_400510(0x402be9, 1, 17, rax6);
    fun_400510(0x402c05, 1, 17, rax6);
    fun_400510(0x402c21, 1, 17, rax6);
    fun_400510(0x402c3d, 1, 17, rax6);
    fun_400510(0x402c59, 1, 17, rax6);
    fun_400510(0x402c75, 1, 17, rax6);
    fun_400510(0x402c91, 1, 17, rax6);
    fun_400510(0x402cad, 1, 17, rax6);
    fun_400510(0x402cc9, 1, 17, rax6);
    fun_400510(0x402ce5, 1, 17, rax6);
    fun_400510(0x402d01, 1, 17, rax6);
    fun_400510(0x402d1d, 1, 17, rax6);
    return 0;
}

int64_t __libc_start_main = 0;

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}
