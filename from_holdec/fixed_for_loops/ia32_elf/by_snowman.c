
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80490d7(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049056;

void fun_8049050(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t fputs(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x806a020;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = fputs(0x806a020, v2);
        return eax3;
    }
}

int32_t stdout = 0;

void fun_8049070(int32_t a1, int32_t a2);

void fun_8049060(uint32_t a1);

void fun_8049040(int32_t a1);

int32_t var0000_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0000 signed start:48, iter:10, inc:+1, order:buj cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 != 58);
    fun_8049040("<");
    return 0;
}

int32_t puts = 0x8049046;

void fun_8049040(int32_t a1) {
    goto puts;
}

int32_t var0001_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0001 signed start:48, iter:10, inc:+1, order:buj cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(58));
    fun_8049040("<");
    return 0;
}

int32_t var0002_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0002 signed start:48, iter:10, inc:+1, order:buj cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(57));
    fun_8049040("<");
    return 0;
}

int32_t var0003_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0003 signed start:48, iter:10, inc:+1, order:bju cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 != 57) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0007_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0007 signed start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(57));
    fun_8049040("<");
    return 0;
}

int32_t var0008_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0008 signed start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(56));
    fun_8049040("<");
    return 0;
}

int32_t var0009_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0009 signed start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 != 58) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t putchar = 0x8049066;

void fun_8049060(uint32_t a1) {
    goto putchar;
}

int32_t var0019_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0019 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 < 10);
    fun_8049040("<");
    return 0;
}

int32_t var0020_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0020 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 <= 9);
    fun_8049040("<");
    return 0;
}

int32_t var0021_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0021 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 != 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0025_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0025 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 < 9);
    fun_8049040("<");
    return 0;
}

int32_t var0026_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0026 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 <= 8);
    fun_8049040("<");
    return 0;
}

int32_t var0027_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0027 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 != 10) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0037_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0037 signed start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(36));
    fun_8049040("<");
    return 0;
}

int32_t var0038_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0038 signed start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(35));
    fun_8049040("<");
    return 0;
}

int32_t var0039_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0039 signed start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(35));
    fun_8049040("<");
    return 0;
}

int32_t var0040_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0040 signed start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(34));
    fun_8049040("<");
    return 0;
}

int32_t var0041_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0041 signed start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 != 34) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0047_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0047 signed start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(34));
    fun_8049040("<");
    return 0;
}

int32_t var0048_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0048 signed start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(33));
    fun_8049040("<");
    return 0;
}

int32_t var0049_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0049 signed start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(33));
    fun_8049040("<");
    return 0;
}

int32_t var0050_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0050 signed start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(32));
    fun_8049040("<");
    return 0;
}

int32_t var0051_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0051 signed start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 != 36) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0067_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0067 signed start:57, iter:10, inc:-1, order:buj cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(47));
    fun_8049040("<");
    return 0;
}

int32_t var0068_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0068 signed start:57, iter:10, inc:-1, order:buj cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(48));
    fun_8049040("<");
    return 0;
}

int32_t var0069_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0069 signed start:57, iter:10, inc:-1, order:bju cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 != 48) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0073_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0073 signed start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(48));
    fun_8049040("<");
    return 0;
}

int32_t var0074_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0074 signed start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(49));
    fun_8049040("<");
    return 0;
}

int32_t var0075_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0075 signed start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 != 47) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0085_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0085 signed start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(81));
    fun_8049040("<");
    return 0;
}

int32_t var0086_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0086 signed start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(80));
    fun_8049040("<");
    return 0;
}

int32_t var0087_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0087 signed start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(82));
    fun_8049040("<");
    return 0;
}

int32_t var0088_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0088 signed start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(81));
    fun_8049040("<");
    return 0;
}

int32_t var0089_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0089 signed start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 != 82) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0095_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0095 signed start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(83));
    fun_8049040("<");
    return 0;
}

int32_t var0096_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0096 signed start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(82));
    fun_8049040("<");
    return 0;
}

int32_t var0097_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0097 signed start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(84));
    fun_8049040("<");
    return 0;
}

int32_t var0098_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0098 signed start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(83));
    fun_8049040("<");
    return 0;
}

int32_t var0099_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0099 signed start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 != 80) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0115_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0115 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 < 10);
    fun_8049040("<");
    return 0;
}

int32_t var0116_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0116 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 <= 9);
    fun_8049040("<");
    return 0;
}

int32_t var0117_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0117 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 != 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0121_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0121 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 < 9);
    fun_8049040("<");
    return 0;
}

int32_t var0122_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0122 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 <= 8);
    fun_8049040("<");
    return 0;
}

int32_t var0123_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0123 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0133_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0133 signed start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 > 0);
    fun_8049040("<");
    return 0;
}

int32_t var0134_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0134 signed start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 >= 1);
    fun_8049040("<");
    return 0;
}

int32_t var0135_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0135 signed start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 != 1) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0139_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0139 signed start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 > 1);
    fun_8049040("<");
    return 0;
}

int32_t var0140_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0140 signed start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 >= 2);
    fun_8049040("<");
    return 0;
}

int32_t var0141_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0141 signed start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, !!ebx2) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0151_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0151 signed start:-20, iter:10, inc:+1, order:buj cmp:< 0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    do {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    } while (ebx2 < -10);
    fun_8049040("<");
    return 0;
}

int32_t var0152_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0152 signed start:-20, iter:10, inc:+1, order:buj cmp:<=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    do {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    } while (ebx2 <= -11);
    fun_8049040("<");
    return 0;
}

int32_t var0153_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0153 signed start:-20, iter:10, inc:+1, order:bju cmp:!=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    while (fun_8049060(ebx2 + 68), ebx2 != -11) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0157_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0157 signed start:-20, iter:10, inc:+1, order:ubj cmp:< 0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    } while (ebx2 < -11);
    fun_8049040("<");
    return 0;
}

int32_t var0158_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0158 signed start:-20, iter:10, inc:+1, order:ubj cmp:<=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    } while (ebx2 <= -12);
    fun_8049040("<");
    return 0;
}

int32_t var0159_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0159 signed start:-20, iter:10, inc:+1, order:ujb cmp:!=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 != -10) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0169_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0169 signed start:48, iter:1, inc:+1, order:buj cmp:< 0                expected='0'   >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(49));
    fun_8049040("<");
    return 0;
}

int32_t var0170_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0170 signed start:48, iter:1, inc:+1, order:buj cmp:<=0                expected='0'   >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(48));
    fun_8049040("<");
    return 0;
}

int32_t var0171_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0171 signed start:48, iter:1, inc:+1, order:bju cmp:!=0                expected='0'   >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 != 48) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0175_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0175 signed start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected='0'   >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(48));
    fun_8049040("<");
    return 0;
}

int32_t var0176_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0176 signed start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected='0'   >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(47));
    fun_8049040("<");
    return 0;
}

int32_t var0177_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0177 signed start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected='0'   >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 != 49) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0187_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0187 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 < 1);
    fun_8049040("<");
    return 0;
}

int32_t var0188_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0188 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 <= 0);
    fun_8049040("<");
    return 0;
}

int32_t var0189_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0189 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), !!ebx2) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0193_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0193 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 < 0);
    fun_8049040("<");
    return 0;
}

int32_t var0194_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0194 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 <= -1);
    fun_8049040("<");
    return 0;
}

int32_t var0195_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0195 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 != 1) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0205_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0205 signed start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(18));
    fun_8049040("<");
    return 0;
}

int32_t var0206_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0206 signed start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(17));
    fun_8049040("<");
    return 0;
}

int32_t var0207_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0207 signed start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(17));
    fun_8049040("<");
    return 0;
}

int32_t var0208_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0208 signed start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(16));
    fun_8049040("<");
    return 0;
}

int32_t var0209_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0209 signed start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 != 16) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0215_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0215 signed start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(16));
    fun_8049040("<");
    return 0;
}

int32_t var0216_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0216 signed start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(15));
    fun_8049040("<");
    return 0;
}

int32_t var0217_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0217 signed start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(15));
    fun_8049040("<");
    return 0;
}

int32_t var0218_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0218 signed start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(14));
    fun_8049040("<");
    return 0;
}

int32_t var0219_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0219 signed start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 != 18) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0235_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0235 signed start:57, iter:1, inc:-1, order:buj cmp:< 0                expected='9'   >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(56));
    fun_8049040("<");
    return 0;
}

int32_t var0236_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0236 signed start:57, iter:1, inc:-1, order:buj cmp:<=0                expected='9'   >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(57));
    fun_8049040("<");
    return 0;
}

int32_t var0237_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0237 signed start:57, iter:1, inc:-1, order:bju cmp:!=0                expected='9'   >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 != 57) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0241_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0241 signed start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected='9'   >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(57));
    fun_8049040("<");
    return 0;
}

int32_t var0242_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0242 signed start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected='9'   >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(58));
    fun_8049040("<");
    return 0;
}

int32_t var0243_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0243 signed start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected='9'   >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 != 56) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0253_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0253 signed start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(99));
    fun_8049040("<");
    return 0;
}

int32_t var0254_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0254 signed start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(98));
    fun_8049040("<");
    return 0;
}

int32_t var0255_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0255 signed start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(100));
    fun_8049040("<");
    return 0;
}

int32_t var0256_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0256 signed start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(99));
    fun_8049040("<");
    return 0;
}

int32_t var0257_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0257 signed start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 != 100) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0263_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0263 signed start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x65));
    fun_8049040("<");
    return 0;
}

int32_t var0264_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0264 signed start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(100));
    fun_8049040("<");
    return 0;
}

int32_t var0265_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0265 signed start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x66));
    fun_8049040("<");
    return 0;
}

int32_t var0266_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0266 signed start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x65));
    fun_8049040("<");
    return 0;
}

int32_t var0267_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0267 signed start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 != 98) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0283_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0283 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 < 1);
    fun_8049040("<");
    return 0;
}

int32_t var0284_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0284 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 <= 0);
    fun_8049040("<");
    return 0;
}

int32_t var0285_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0285 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, !!ebx2) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0289_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0289 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 < 0);
    fun_8049040("<");
    return 0;
}

int32_t var0290_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0290 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 <= -1);
    fun_8049040("<");
    return 0;
}

int32_t var0291_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0291 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 != 1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0301_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0301 signed start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 > 9);
    fun_8049040("<");
    return 0;
}

int32_t var0302_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0302 signed start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 >= 10);
    fun_8049040("<");
    return 0;
}

int32_t var0303_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0303 signed start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 != 10) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0307_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0307 signed start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 > 10);
    fun_8049040("<");
    return 0;
}

int32_t var0308_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0308 signed start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 >= 11);
    fun_8049040("<");
    return 0;
}

int32_t var0309_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0309 signed start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 != 9) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0319_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0319 signed start:-20, iter:1, inc:+1, order:buj cmp:< 0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    do {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    } while (ebx2 < -19);
    fun_8049040("<");
    return 0;
}

int32_t var0320_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0320 signed start:-20, iter:1, inc:+1, order:buj cmp:<=0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    do {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    } while (ebx2 <= -20);
    fun_8049040("<");
    return 0;
}

int32_t var0321_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0321 signed start:-20, iter:1, inc:+1, order:bju cmp:!=0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    while (fun_8049060(ebx2 + 68), ebx2 != -20) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0325_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0325 signed start:-20, iter:1, inc:+1, order:ubj cmp:< 0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    } while (ebx2 < -20);
    fun_8049040("<");
    return 0;
}

int32_t var0326_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0326 signed start:-20, iter:1, inc:+1, order:ubj cmp:<=0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    } while (ebx2 <= -21);
    fun_8049040("<");
    return 0;
}

int32_t var0327_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0327 signed start:-20, iter:1, inc:+1, order:ujb cmp:!=0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 != -19) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0421_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0421 unsign start:48, iter:10, inc:+1, order:buj cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 < 58);
    fun_8049040("<");
    return 0;
}

int32_t var0422_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0422 unsign start:48, iter:10, inc:+1, order:buj cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 <= 57);
    fun_8049040("<");
    return 0;
}

int32_t var0423_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0423 unsign start:48, iter:10, inc:+1, order:bju cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 != 57) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0427_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0427 unsign start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 < 57);
    fun_8049040("<");
    return 0;
}

int32_t var0428_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0428 unsign start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 <= 56);
    fun_8049040("<");
    return 0;
}

int32_t var0429_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0429 unsign start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 != 58) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0439_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0439 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 < 10);
    fun_8049040("<");
    return 0;
}

int32_t var0440_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0440 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 <= 9);
    fun_8049040("<");
    return 0;
}

int32_t var0441_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0441 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 != 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0444_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0444 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0xffffffff;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 < 9);
    fun_8049040("<");
    return 0;
}

int32_t var0445_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0445 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 != 10) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0453_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0453 unsign start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 < 36);
    fun_8049040("<");
    return 0;
}

int32_t var0454_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0454 unsign start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 < 35);
    fun_8049040("<");
    return 0;
}

int32_t var0455_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0455 unsign start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 <= 35);
    fun_8049040("<");
    return 0;
}

int32_t var0456_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0456 unsign start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 <= 34);
    fun_8049040("<");
    return 0;
}

int32_t var0457_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0457 unsign start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 != 34) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0463_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0463 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 < 34);
    fun_8049040("<");
    return 0;
}

int32_t var0464_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0464 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 < 33);
    fun_8049040("<");
    return 0;
}

int32_t var0465_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0465 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 <= 33);
    fun_8049040("<");
    return 0;
}

int32_t var0466_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0466 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 <= 32);
    fun_8049040("<");
    return 0;
}

int32_t var0467_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0467 unsign start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 != 36) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0483_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0483 unsign start:57, iter:10, inc:-1, order:buj cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 > 47);
    fun_8049040("<");
    return 0;
}

int32_t var0484_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0484 unsign start:57, iter:10, inc:-1, order:buj cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 >= 48);
    fun_8049040("<");
    return 0;
}

int32_t var0485_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0485 unsign start:57, iter:10, inc:-1, order:bju cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 != 48) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0489_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0489 unsign start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 > 48);
    fun_8049040("<");
    return 0;
}

int32_t var0490_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0490 unsign start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 >= 49);
    fun_8049040("<");
    return 0;
}

int32_t var0491_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0491 unsign start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 != 47) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0501_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0501 unsign start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 > 81);
    fun_8049040("<");
    return 0;
}

int32_t var0502_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0502 unsign start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 > 80);
    fun_8049040("<");
    return 0;
}

int32_t var0503_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0503 unsign start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 >= 82);
    fun_8049040("<");
    return 0;
}

int32_t var0504_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0504 unsign start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 >= 81);
    fun_8049040("<");
    return 0;
}

int32_t var0505_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0505 unsign start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 != 82) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0511_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0511 unsign start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 > 83);
    fun_8049040("<");
    return 0;
}

int32_t var0512_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0512 unsign start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 > 82);
    fun_8049040("<");
    return 0;
}

int32_t var0513_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0513 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 >= 84);
    fun_8049040("<");
    return 0;
}

int32_t var0514_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0514 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 >= 83);
    fun_8049040("<");
    return 0;
}

int32_t var0515_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0515 unsign start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 != 80) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0531_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0531 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 < 10);
    fun_8049040("<");
    return 0;
}

int32_t var0532_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0532 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 <= 9);
    fun_8049040("<");
    return 0;
}

int32_t var0533_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0533 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 != 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0536_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0536 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 < 9);
    fun_8049040("<");
    return 0;
}

int32_t var0537_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0537 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0545_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0545 unsign start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 > 0);
    fun_8049040("<");
    return 0;
}

int32_t var0546_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0546 unsign start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 >= 1);
    fun_8049040("<");
    return 0;
}

int32_t var0547_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0547 unsign start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 != 1) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0551_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0551 unsign start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 > 1);
    fun_8049040("<");
    return 0;
}

int32_t var0552_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0552 unsign start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 >= 2);
    fun_8049040("<");
    return 0;
}

int32_t var0553_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0553 unsign start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, !!ebx2) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0563_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0563 unsign start:48, iter:1, inc:+1, order:buj cmp:< 0                expected='0'   >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 < 49);
    fun_8049040("<");
    return 0;
}

int32_t var0564_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0564 unsign start:48, iter:1, inc:+1, order:buj cmp:<=0                expected='0'   >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 <= 48);
    fun_8049040("<");
    return 0;
}

int32_t var0565_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0565 unsign start:48, iter:1, inc:+1, order:bju cmp:!=0                expected='0'   >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 != 48) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0569_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0569 unsign start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected='0'   >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 < 48);
    fun_8049040("<");
    return 0;
}

int32_t var0570_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0570 unsign start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected='0'   >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 <= 47);
    fun_8049040("<");
    return 0;
}

int32_t var0571_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0571 unsign start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected='0'   >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 != 49) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0581_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0581 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 < 1);
    fun_8049040("<");
    return 0;
}

int32_t var0582_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0582 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 <= 0);
    fun_8049040("<");
    return 0;
}

int32_t var0583_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0583 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), !!ebx2) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0586_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0586 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0xffffffff;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 < 0);
    fun_8049040("<");
    return 0;
}

int32_t var0587_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0587 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 != 1) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0595_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0595 unsign start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 < 18);
    fun_8049040("<");
    return 0;
}

int32_t var0596_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0596 unsign start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 < 17);
    fun_8049040("<");
    return 0;
}

int32_t var0597_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0597 unsign start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 <= 17);
    fun_8049040("<");
    return 0;
}

int32_t var0598_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0598 unsign start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 <= 16);
    fun_8049040("<");
    return 0;
}

int32_t var0599_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0599 unsign start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 != 16) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0605_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0605 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 < 16);
    fun_8049040("<");
    return 0;
}

int32_t var0606_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0606 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 < 15);
    fun_8049040("<");
    return 0;
}

int32_t var0607_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0607 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 <= 15);
    fun_8049040("<");
    return 0;
}

int32_t var0608_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0608 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 <= 14);
    fun_8049040("<");
    return 0;
}

int32_t var0609_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0609 unsign start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 != 18) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0625_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0625 unsign start:57, iter:1, inc:-1, order:buj cmp:< 0                expected='9'   >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 > 56);
    fun_8049040("<");
    return 0;
}

int32_t var0626_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0626 unsign start:57, iter:1, inc:-1, order:buj cmp:<=0                expected='9'   >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 >= 57);
    fun_8049040("<");
    return 0;
}

int32_t var0627_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0627 unsign start:57, iter:1, inc:-1, order:bju cmp:!=0                expected='9'   >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 != 57) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0631_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0631 unsign start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected='9'   >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 > 57);
    fun_8049040("<");
    return 0;
}

int32_t var0632_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0632 unsign start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected='9'   >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 >= 58);
    fun_8049040("<");
    return 0;
}

int32_t var0633_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0633 unsign start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected='9'   >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 != 56) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0643_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0643 unsign start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 > 99);
    fun_8049040("<");
    return 0;
}

int32_t var0644_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0644 unsign start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 > 98);
    fun_8049040("<");
    return 0;
}

int32_t var0645_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0645 unsign start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 >= 100);
    fun_8049040("<");
    return 0;
}

int32_t var0646_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0646 unsign start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 >= 99);
    fun_8049040("<");
    return 0;
}

int32_t var0647_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0647 unsign start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 != 100) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0653_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0653 unsign start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 > 0x65);
    fun_8049040("<");
    return 0;
}

int32_t var0654_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0654 unsign start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 > 100);
    fun_8049040("<");
    return 0;
}

int32_t var0655_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0655 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 >= 0x66);
    fun_8049040("<");
    return 0;
}

int32_t var0656_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0656 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 >= 0x65);
    fun_8049040("<");
    return 0;
}

int32_t var0657_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0657 unsign start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 != 98) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0673_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0673 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 < 1);
    fun_8049040("<");
    return 0;
}

int32_t var0674_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0674 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 <= 0);
    fun_8049040("<");
    return 0;
}

int32_t var0675_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0675 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, !!ebx2) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0678_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0678 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 < 0);
    fun_8049040("<");
    return 0;
}

int32_t var0679_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0679 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 != 1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0687_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0687 unsign start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 > 9);
    fun_8049040("<");
    return 0;
}

int32_t var0688_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0688 unsign start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 >= 10);
    fun_8049040("<");
    return 0;
}

int32_t var0689_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0689 unsign start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 != 10) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0693_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0693 unsign start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 > 10);
    fun_8049040("<");
    return 0;
}

int32_t var0694_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0694 unsign start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 >= 11);
    fun_8049040("<");
    return 0;
}

int32_t var0695_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0695 unsign start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 != 9) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t fputs = 0x8049076;

void fun_8049070(int32_t a1, int32_t a2) {
    goto fputs;
}

int32_t var0004_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0004 signed start:48, iter:10, inc:+1, order:bju cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(57)) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0005_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0005 signed start:48, iter:10, inc:+1, order:bju cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(56)) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0006_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0006 signed start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 57);
    fun_8049040("<");
    return 0;
}

int32_t var0010_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0010 signed start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (++ebx2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(58)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0011_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0011 signed start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (++ebx2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(57)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0012_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0012 signed start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (ebx2 != 58) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0013_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0013 signed start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(58)) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0014_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0014 signed start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(57)) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0015_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0015 signed start:48, iter:10, inc:+1, order:jub cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (ebx2 != 57) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0016_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0016 signed start:48, iter:10, inc:+1, order:jub cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(57)) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0017_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0017 signed start:48, iter:10, inc:+1, order:jub cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(56)) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0018_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0018 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 != 10);
    fun_8049040("<");
    return 0;
}

int32_t var0022_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0022 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 < 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0023_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0023 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 <= 8) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0024_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0024 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 != 9);
    fun_8049040("<");
    return 0;
}

int32_t var0028_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0028 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 < 10) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0029_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0029 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 <= 9) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0030_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0030 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (ebx2 != 10) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0031_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0031 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (ebx2 < 10) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0032_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0032 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (ebx2 <= 9) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0033_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0033 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (ebx2 != 9) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0034_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0034 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (ebx2 < 9) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0035_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0035 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (ebx2 <= 8) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0036_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0036 signed start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 != 36);
    fun_8049040("<");
    return 0;
}

int32_t var0042_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0042 signed start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(34)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0043_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0043 signed start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(33)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0044_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0044 signed start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(33)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0045_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0045 signed start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(32)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0046_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0046 signed start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 != 34);
    fun_8049040("<");
    return 0;
}

int32_t var0052_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0052 signed start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(36)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0053_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0053 signed start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(35)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0054_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0054 signed start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(35)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0055_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0055 signed start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(34)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0056_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0056 signed start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (ebx2 != 36) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0057_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0057 signed start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(36)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0058_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0058 signed start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(35)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0059_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0059 signed start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(35)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0060_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0060 signed start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(34)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0061_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0061 signed start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 != 34) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0062_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0062 signed start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(34)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0063_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0063 signed start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(33)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0064_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0064 signed start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(33)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0065_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0065 signed start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(32)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0066_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0066 signed start:57, iter:10, inc:-1, order:buj cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 != 47);
    fun_8049040("<");
    return 0;
}

int32_t var0070_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0070 signed start:57, iter:10, inc:-1, order:bju cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(48)) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0071_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0071 signed start:57, iter:10, inc:-1, order:bju cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(49)) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0072_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0072 signed start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 48);
    fun_8049040("<");
    return 0;
}

int32_t var0076_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0076 signed start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (--ebx2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(47)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0077_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0077 signed start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (--ebx2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(48)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0078_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0078 signed start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (ebx2 != 47) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0079_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0079 signed start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(47)) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0080_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0080 signed start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(48)) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0081_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0081 signed start:57, iter:10, inc:-1, order:jub cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (ebx2 != 48) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0082_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0082 signed start:57, iter:10, inc:-1, order:jub cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(48)) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0083_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0083 signed start:57, iter:10, inc:-1, order:jub cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(49)) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0084_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0084 signed start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 != 80);
    fun_8049040("<");
    return 0;
}

int32_t var0090_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0090 signed start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(83)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0091_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0091 signed start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(82)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0092_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0092 signed start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(84)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0093_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0093 signed start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(83)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0094_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0094 signed start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 != 82);
    fun_8049040("<");
    return 0;
}

int32_t var0100_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0100 signed start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(81)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0101_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0101 signed start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(80)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0102_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0102 signed start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(82)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0103_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0103 signed start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(81)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0104_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0104 signed start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (ebx2 != 80) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0105_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0105 signed start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(81)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0106_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0106 signed start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(80)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0107_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0107 signed start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(82)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0108_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0108 signed start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(81)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0109_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0109 signed start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 != 82) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0110_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0110 signed start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(83)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0111_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0111 signed start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(82)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0112_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0112 signed start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(84)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0113_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0113 signed start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(83)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0114_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0114 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 != 10);
    fun_8049040("<");
    return 0;
}

int32_t var0118_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0118 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 < 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0119_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0119 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 <= 8) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0120_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0120 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 != 9);
    fun_8049040("<");
    return 0;
}

int32_t var0124_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0124 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 < 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0125_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0125 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 <= 9) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0126_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0126 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0127_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0127 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 < 10) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0128_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0128 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 <= 9) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0129_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0129 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 != 9) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0130_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0130 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 < 9) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0131_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0131 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 <= 8) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0132_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0132 signed start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2);
    fun_8049040("<");
    return 0;
}

int32_t var0136_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0136 signed start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 > 1) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0137_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0137 signed start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 >= 2) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0138_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0138 signed start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 != 1);
    fun_8049040("<");
    return 0;
}

int32_t var0142_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0142 signed start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 > 0) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0143_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0143 signed start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 >= 1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0144_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0144 signed start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0145_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0145 signed start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 > 0) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0146_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0146 signed start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 >= 1) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0147_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0147 signed start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 != 1) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0148_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0148 signed start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 > 1) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0149_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0149 signed start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 >= 2) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0150_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0150 signed start:-20, iter:10, inc:+1, order:buj cmp:!=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    do {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    } while (ebx2 != -10);
    fun_8049040("<");
    return 0;
}

int32_t var0154_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0154 signed start:-20, iter:10, inc:+1, order:bju cmp:< 0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    while (fun_8049060(ebx2 + 68), ebx2 < -11) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0155_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0155 signed start:-20, iter:10, inc:+1, order:bju cmp:<=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    while (fun_8049060(ebx2 + 68), ebx2 <= -12) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0156_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0156 signed start:-20, iter:10, inc:+1, order:ubj cmp:!=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    } while (ebx2 != -11);
    fun_8049040("<");
    return 0;
}

int32_t var0160_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0160 signed start:-20, iter:10, inc:+1, order:ujb cmp:< 0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 < -10) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0161_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0161 signed start:-20, iter:10, inc:+1, order:ujb cmp:<=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 <= -11) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0162_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0162 signed start:-20, iter:10, inc:+1, order:jbu cmp:!=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    while (ebx2 != -10) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0163_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0163 signed start:-20, iter:10, inc:+1, order:jbu cmp:< 0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    while (ebx2 < -10) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0164_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0164 signed start:-20, iter:10, inc:+1, order:jbu cmp:<=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -20;
    while (ebx2 <= -11) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0165_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0165 signed start:-20, iter:10, inc:+1, order:jub cmp:!=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    while (ebx2 != -11) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0166_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0166 signed start:-20, iter:10, inc:+1, order:jub cmp:< 0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    while (ebx2 < -11) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0167_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0167 signed start:-20, iter:10, inc:+1, order:jub cmp:<=0 exp:+68      expected='0123456789' >", v1);
    ebx2 = -21;
    while (ebx2 <= -12) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0168_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0168 signed start:48, iter:1, inc:+1, order:buj cmp:!=0                expected='0'   >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 != 49);
    fun_8049040("<");
    return 0;
}

int32_t var0172_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0172 signed start:48, iter:1, inc:+1, order:bju cmp:< 0                expected='0'   >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(48)) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0173_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0173 signed start:48, iter:1, inc:+1, order:bju cmp:<=0                expected='0'   >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(47)) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0174_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0174 signed start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected='0'   >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 48);
    fun_8049040("<");
    return 0;
}

int32_t var0178_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0178 signed start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected='0'   >", v1);
    ebx2 = 47;
    while (++ebx2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(49)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0179_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0179 signed start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected='0'   >", v1);
    ebx2 = 47;
    while (++ebx2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(48)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0180_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0180 signed start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected='0'   >", v1);
    ebx2 = 48;
    while (ebx2 != 49) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0181_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0181 signed start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected='0'   >", v1);
    ebx2 = 48;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(49)) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0182_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0182 signed start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected='0'   >", v1);
    ebx2 = 48;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(48)) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0183_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0183 signed start:48, iter:1, inc:+1, order:jub cmp:!=0                expected='0'   >", v1);
    ebx2 = 47;
    while (ebx2 != 48) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0184_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0184 signed start:48, iter:1, inc:+1, order:jub cmp:< 0                expected='0'   >", v1);
    ebx2 = 47;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(48)) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0185_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0185 signed start:48, iter:1, inc:+1, order:jub cmp:<=0                expected='0'   >", v1);
    ebx2 = 47;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(47)) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0186_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0186 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 != 1);
    fun_8049040("<");
    return 0;
}

int32_t var0190_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0190 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 < 0) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0191_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0191 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 <= -1) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0192_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0192 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2);
    fun_8049040("<");
    return 0;
}

int32_t var0196_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0196 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 < 1) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0197_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0197 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 <= 0) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0198_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0198 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (ebx2 != 1) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0199_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0199 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (ebx2 < 1) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0200_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0200 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (ebx2 <= 0) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0201_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0201 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (ebx2) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0202_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0202 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (ebx2 < 0) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0203_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0203 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (ebx2 <= -1) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0204_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0204 signed start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 != 18);
    fun_8049040("<");
    return 0;
}

int32_t var0210_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0210 signed start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(16)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0211_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0211 signed start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(15)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0212_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0212 signed start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(15)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0213_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0213 signed start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(14)) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0214_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0214 signed start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 != 16);
    fun_8049040("<");
    return 0;
}

int32_t var0220_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0220 signed start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(18)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0221_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0221 signed start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(17)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0222_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0222 signed start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(17)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0223_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0223 signed start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(16)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0224_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0224 signed start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (ebx2 != 18) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0225_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0225 signed start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(18)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0226_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0226 signed start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(17)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0227_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0227 signed start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(17)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0228_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0228 signed start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(16)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0229_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0229 signed start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 != 16) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0230_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0230 signed start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(16)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0231_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0231 signed start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(15)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0232_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0232 signed start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(15)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0233_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0233 signed start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(14)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0234_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0234 signed start:57, iter:1, inc:-1, order:buj cmp:!=0                expected='9'   >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 != 56);
    fun_8049040("<");
    return 0;
}

int32_t var0238_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0238 signed start:57, iter:1, inc:-1, order:bju cmp:< 0                expected='9'   >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(57)) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0239_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0239 signed start:57, iter:1, inc:-1, order:bju cmp:<=0                expected='9'   >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(58)) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0240_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0240 signed start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected='9'   >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 57);
    fun_8049040("<");
    return 0;
}

int32_t var0244_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0244 signed start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected='9'   >", v1);
    ebx2 = 58;
    while (--ebx2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(56)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0245_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0245 signed start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected='9'   >", v1);
    ebx2 = 58;
    while (--ebx2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(57)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0246_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0246 signed start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected='9'   >", v1);
    ebx2 = 57;
    while (ebx2 != 56) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0247_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0247 signed start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected='9'   >", v1);
    ebx2 = 57;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(56)) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0248_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0248 signed start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected='9'   >", v1);
    ebx2 = 57;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(57)) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0249_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0249 signed start:57, iter:1, inc:-1, order:jub cmp:!=0                expected='9'   >", v1);
    ebx2 = 58;
    while (ebx2 != 57) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0250_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0250 signed start:57, iter:1, inc:-1, order:jub cmp:< 0                expected='9'   >", v1);
    ebx2 = 58;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(57)) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0251_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0251 signed start:57, iter:1, inc:-1, order:jub cmp:<=0                expected='9'   >", v1);
    ebx2 = 58;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(58)) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0252_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0252 signed start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 != 98);
    fun_8049040("<");
    return 0;
}

int32_t var0258_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0258 signed start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x65)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0259_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0259 signed start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(100)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0260_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0260 signed start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x66)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0261_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0261 signed start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x65)) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0262_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0262 signed start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 != 100);
    fun_8049040("<");
    return 0;
}

int32_t var0268_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0268 signed start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(99)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0269_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0269 signed start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(98)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0270_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0270 signed start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(100)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0271_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0271 signed start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(99)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0272_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0272 signed start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (ebx2 != 98) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0273_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0273 signed start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(99)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0274_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0274 signed start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(98)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0275_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0275 signed start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(100)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0276_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0276 signed start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(99)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0277_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0277 signed start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 != 100) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0278_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0278 signed start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x65)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0279_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0279 signed start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(100)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0280_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0280 signed start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x66)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0281_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0281 signed start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x65)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0282_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0282 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 != 1);
    fun_8049040("<");
    return 0;
}

int32_t var0286_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0286 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 < 0) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0287_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0287 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 <= -1) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0288_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0288 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2);
    fun_8049040("<");
    return 0;
}

int32_t var0292_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0292 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 < 1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0293_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0293 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 <= 0) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0294_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0294 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 != 1) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0295_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0295 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 < 1) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0296_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0296 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 <= 0) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0297_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0297 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0298_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0298 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 < 0) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0299_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0299 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 <= -1) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0300_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0300 signed start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 != 9);
    fun_8049040("<");
    return 0;
}

int32_t var0304_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0304 signed start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 > 10) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0305_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0305 signed start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 >= 11) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0306_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0306 signed start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 != 10);
    fun_8049040("<");
    return 0;
}

int32_t var0310_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0310 signed start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 > 9) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0311_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0311 signed start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 >= 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0312_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0312 signed start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 != 9) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0313_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0313 signed start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 > 9) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0314_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0314 signed start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 >= 10) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0315_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0315 signed start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 != 10) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0316_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0316 signed start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 > 10) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0317_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0317 signed start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 >= 11) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0318_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0318 signed start:-20, iter:1, inc:+1, order:buj cmp:!=0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    do {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    } while (ebx2 != -19);
    fun_8049040("<");
    return 0;
}

int32_t var0322_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0322 signed start:-20, iter:1, inc:+1, order:bju cmp:< 0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    while (fun_8049060(ebx2 + 68), ebx2 < -20) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0323_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0323 signed start:-20, iter:1, inc:+1, order:bju cmp:<=0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    while (fun_8049060(ebx2 + 68), ebx2 <= -21) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0324_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0324 signed start:-20, iter:1, inc:+1, order:ubj cmp:!=0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    } while (ebx2 != -20);
    fun_8049040("<");
    return 0;
}

int32_t var0328_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0328 signed start:-20, iter:1, inc:+1, order:ujb cmp:< 0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 < -19) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0329_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0329 signed start:-20, iter:1, inc:+1, order:ujb cmp:<=0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 <= -20) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0330_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0330 signed start:-20, iter:1, inc:+1, order:jbu cmp:!=0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    while (ebx2 != -19) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0331_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0331 signed start:-20, iter:1, inc:+1, order:jbu cmp:< 0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    while (ebx2 < -19) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0332_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0332 signed start:-20, iter:1, inc:+1, order:jbu cmp:<=0 exp:+68       expected='0'   >", v1);
    ebx2 = -20;
    while (ebx2 <= -20) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0333_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0333 signed start:-20, iter:1, inc:+1, order:jub cmp:!=0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    while (ebx2 != -20) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0334_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0334 signed start:-20, iter:1, inc:+1, order:jub cmp:< 0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    while (ebx2 < -20) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0335_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0335 signed start:-20, iter:1, inc:+1, order:jub cmp:<=0 exp:+68       expected='0'   >", v1);
    ebx2 = -21;
    while (ebx2 <= -21) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0336_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0336 signed start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=''    >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 != 48) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0337_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0337 signed start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=''    >", v1);
    ebx2 = 47;
    while (++ebx2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(48)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0338_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0338 signed start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=''    >", v1);
    ebx2 = 47;
    while (++ebx2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(47)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0339_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0339 signed start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=''    >", v1);
    ebx2 = 48;
    while (ebx2 != 48) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0340_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0340 signed start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=''    >", v1);
    ebx2 = 48;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(48)) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0341_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0341 signed start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=''    >", v1);
    ebx2 = 48;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(47)) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0342_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0342 signed start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=''    >", v1);
    ebx2 = 47;
    while (ebx2 != 47) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0343_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0343 signed start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=''    >", v1);
    ebx2 = 47;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(47)) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0344_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0344 signed start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=''    >", v1);
    ebx2 = 47;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(46)) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0345_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0345 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (++ebx2, !!ebx2) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0346_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0346 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 < 0) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0347_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0347 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (++ebx2, ebx2 <= -1) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0348_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0348 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=''    >", v1);
    ebx2 = 0;
    while (ebx2) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0349_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0349 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=''    >", v1);
    ebx2 = 0;
    while (ebx2 < 0) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0350_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0350 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 exp:+48         expected=''    >", v1);
    ebx2 = 0;
    while (ebx2 <= -1) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0351_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0351 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (ebx2 != -1) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0352_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0352 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (ebx2 < -1) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0353_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0353 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (ebx2 <= -2) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0354_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0354 signed start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 != 16) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0355_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0355 signed start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(16)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0356_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0356 signed start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(15)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0357_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0357 signed start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(15)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0358_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0358 signed start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(14)) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0359_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0359 signed start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (ebx2 != 16) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0360_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0360 signed start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(16)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0361_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0361 signed start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(15)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0362_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0362 signed start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(15)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0363_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0363 signed start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(14)) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0364_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0364 signed start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 != 14) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0365_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0365 signed start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(14)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0366_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0366 signed start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) < reinterpret_cast<int32_t>(13)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0367_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0367 signed start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(13)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0368_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0368 signed start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (reinterpret_cast<int32_t>(ebx2) <= reinterpret_cast<int32_t>(12)) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0369_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0369 signed start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=''    >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 != 57) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0370_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0370 signed start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=''    >", v1);
    ebx2 = 58;
    while (--ebx2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(57)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0371_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0371 signed start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=''    >", v1);
    ebx2 = 58;
    while (--ebx2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(58)) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0372_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0372 signed start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=''    >", v1);
    ebx2 = 57;
    while (ebx2 != 57) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0373_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0373 signed start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=''    >", v1);
    ebx2 = 57;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(57)) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0374_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0374 signed start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=''    >", v1);
    ebx2 = 57;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(58)) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0375_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0375 signed start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=''    >", v1);
    ebx2 = 58;
    while (ebx2 != 58) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0376_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0376 signed start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=''    >", v1);
    ebx2 = 58;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(58)) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0377_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0377 signed start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=''    >", v1);
    ebx2 = 58;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(59)) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0378_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0378 signed start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 != 100) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0379_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0379 signed start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x65)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0380_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0380 signed start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(100)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0381_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0381 signed start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x66)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0382_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0382 signed start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x65)) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0383_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0383 signed start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 100;
    while (ebx2 != 100) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0384_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0384 signed start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x65)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0385_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0385 signed start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(100)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0386_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0386 signed start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x66)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0387_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0387 signed start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 100;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x65)) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0388_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0388 signed start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 != 0x66) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0389_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0389 signed start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x67)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0390_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0390 signed start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) > reinterpret_cast<int32_t>(0x66)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0391_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0391 signed start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x68)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0392_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0392 signed start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0x67)) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0393_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0393 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, !!ebx2) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0394_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0394 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 < 0) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0395_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0395 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, ebx2 <= -1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0396_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0396 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=''    >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0397_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0397 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=''    >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 < 0) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0398_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0398 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=''    >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 <= -1) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0399_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0399 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 != -1) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0400_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0400 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 < -1) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0401_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0401 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 <= -2) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0402_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0402 signed start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0403_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0403 signed start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 > 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0404_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0404 signed start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 >= 11) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0405_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0405 signed start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0406_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0406 signed start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=''    >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 > 10) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0407_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0407 signed start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 >= 11) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0408_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0408 signed start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 != 11) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0409_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0409 signed start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 > 11) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0410_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0410 signed start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 >= 12) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0411_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0411 signed start:-20, iter:0, inc:+1, order:ujb cmp:!=0 exp:+68       expected=''    >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 != -20) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0412_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0412 signed start:-20, iter:0, inc:+1, order:ujb cmp:< 0 exp:+68       expected=''    >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 < -20) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0413_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0413 signed start:-20, iter:0, inc:+1, order:ujb cmp:<=0 exp:+68       expected=''    >", v1);
    ebx2 = -21;
    while (++ebx2, ebx2 <= -21) {
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0414_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0414 signed start:-20, iter:0, inc:+1, order:jbu cmp:!=0 exp:+68       expected=''    >", v1);
    ebx2 = -20;
    while (ebx2 != -20) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0415_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0415 signed start:-20, iter:0, inc:+1, order:jbu cmp:< 0 exp:+68       expected=''    >", v1);
    ebx2 = -20;
    while (ebx2 < -20) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0416_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0416 signed start:-20, iter:0, inc:+1, order:jbu cmp:<=0 exp:+68       expected=''    >", v1);
    ebx2 = -20;
    while (ebx2 <= -21) {
        fun_8049060(ebx2 + 68);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0417_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0417 signed start:-20, iter:0, inc:+1, order:jub cmp:!=0 exp:+68       expected=''    >", v1);
    ebx2 = -21;
    while (ebx2 != -21) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0418_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0418 signed start:-20, iter:0, inc:+1, order:jub cmp:< 0 exp:+68       expected=''    >", v1);
    ebx2 = -21;
    while (ebx2 < -21) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0419_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0419 signed start:-20, iter:0, inc:+1, order:jub cmp:<=0 exp:+68       expected=''    >", v1);
    ebx2 = -21;
    while (ebx2 <= -22) {
        ++ebx2;
        fun_8049060(ebx2 + 68);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0420_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0420 unsign start:48, iter:10, inc:+1, order:buj cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 != 58);
    fun_8049040("<");
    return 0;
}

int32_t var0424_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0424 unsign start:48, iter:10, inc:+1, order:bju cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 < 57) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0425_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0425 unsign start:48, iter:10, inc:+1, order:bju cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 <= 56) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0426_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0426 unsign start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 57);
    fun_8049040("<");
    return 0;
}

int32_t var0430_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0430 unsign start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 < 58) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0431_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0431 unsign start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 <= 57) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0432_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0432 unsign start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (ebx2 != 58) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0433_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0433 unsign start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (ebx2 < 58) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0434_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0434 unsign start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 48;
    while (ebx2 <= 57) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0435_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0435 unsign start:48, iter:10, inc:+1, order:jub cmp:!=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (ebx2 != 57) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0436_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0436 unsign start:48, iter:10, inc:+1, order:jub cmp:< 0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (ebx2 < 57) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0437_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0437 unsign start:48, iter:10, inc:+1, order:jub cmp:<=0               expected='0123456789' >", v1);
    ebx2 = 47;
    while (ebx2 <= 56) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0438_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0438 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 != 10);
    fun_8049040("<");
    return 0;
}

int32_t var0442_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0442 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 < 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0443_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0443 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2 != 9);
    fun_8049040("<");
    return 0;
}

int32_t var0446_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0446 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0xffffffff;
    while (++ebx2, ebx2 < 10) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0447_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0447 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0xffffffff;
    while (++ebx2, ebx2 <= 9) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0448_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0448 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (ebx2 != 10) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0449_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0449 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (ebx2 < 10) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0450_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0450 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = 0;
    while (ebx2 <= 9) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0451_0123456789() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0451 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected='0123456789' >", v1);
    ebx2 = -1;
    while (ebx2 != 9) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0452_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0452 unsign start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 != 36);
    fun_8049040("<");
    return 0;
}

int32_t var0458_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0458 unsign start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 < 34) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0459_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0459 unsign start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 < 33) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0460_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0460 unsign start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 <= 33) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0461_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0461 unsign start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 <= 32) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0462_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0462 unsign start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 != 34);
    fun_8049040("<");
    return 0;
}

int32_t var0468_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0468 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 < 36) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0469_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0469 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 < 35) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0470_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0470 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 <= 35) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0471_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0471 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 <= 34) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0472_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0472 unsign start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (ebx2 != 36) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0473_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0473 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (ebx2 < 36) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0474_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0474 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (ebx2 < 35) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0475_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0475 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (ebx2 <= 35) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0476_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0476 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 16;
    while (ebx2 <= 34) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0477_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0477 unsign start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 != 34) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0478_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0478 unsign start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 < 34) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0479_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0479 unsign start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 < 33) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0480_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0480 unsign start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 <= 33) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0481_0123456789() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0481 unsign start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected='0123456789' >", v1);
    ebx2 = 14;
    while (ebx2 <= 32) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0482_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0482 unsign start:57, iter:10, inc:-1, order:buj cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 != 47);
    fun_8049040("<");
    return 0;
}

int32_t var0486_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0486 unsign start:57, iter:10, inc:-1, order:bju cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 > 48) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0487_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0487 unsign start:57, iter:10, inc:-1, order:bju cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 >= 49) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0488_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0488 unsign start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 48);
    fun_8049040("<");
    return 0;
}

int32_t var0492_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0492 unsign start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 > 47) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0493_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0493 unsign start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 >= 48) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0494_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0494 unsign start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (ebx2 != 47) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0495_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0495 unsign start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (ebx2 > 47) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0496_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0496 unsign start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 57;
    while (ebx2 >= 48) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0497_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0497 unsign start:57, iter:10, inc:-1, order:jub cmp:!=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (ebx2 != 48) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0498_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0498 unsign start:57, iter:10, inc:-1, order:jub cmp:< 0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (ebx2 > 48) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0499_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0499 unsign start:57, iter:10, inc:-1, order:jub cmp:<=0               expected='9876543210' >", v1);
    ebx2 = 58;
    while (ebx2 >= 49) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0500_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0500 unsign start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 != 80);
    fun_8049040("<");
    return 0;
}

int32_t var0506_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0506 unsign start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 > 83) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0507_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0507 unsign start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 > 82) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0508_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0508 unsign start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 >= 84) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0509_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0509 unsign start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 >= 83) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0510_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0510 unsign start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 != 82);
    fun_8049040("<");
    return 0;
}

int32_t var0516_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0516 unsign start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 > 81) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0517_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0517 unsign start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 > 80) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0518_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0518 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 >= 82) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0519_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0519 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 >= 81) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0520_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0520 unsign start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (ebx2 != 80) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0521_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0521 unsign start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (ebx2 > 81) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0522_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0522 unsign start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (ebx2 > 80) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0523_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0523 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 100;
    while (ebx2 >= 82) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0524_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0524 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 100;
    while (ebx2 >= 81) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0525_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0525 unsign start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 != 82) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0526_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0526 unsign start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 > 83) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0527_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0527 unsign start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 > 82) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0528_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0528 unsign start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 >= 84) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0529_9876543210() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0529 unsign start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected='9876543210' >", v1);
    ebx2 = 0x66;
    while (ebx2 >= 83) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0530_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0530 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 != 10);
    fun_8049040("<");
    return 0;
}

int32_t var0534_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0534 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 < 9) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0535_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0535 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 != 9);
    fun_8049040("<");
    return 0;
}

int32_t var0538_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0538 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    while (++ebx2, ebx2 < 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0539_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0539 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    while (++ebx2, ebx2 <= 9) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0540_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0540 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0541_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0541 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 < 10) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0542_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0542 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 <= 9) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0543_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0543 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected='0123456789' >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2 != 9) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0544_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0544 unsign start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2);
    fun_8049040("<");
    return 0;
}

int32_t var0548_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0548 unsign start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 > 1) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0549_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0549 unsign start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 >= 2) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0550_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0550 unsign start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 != 1);
    fun_8049040("<");
    return 0;
}

int32_t var0554_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0554 unsign start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 > 0) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0555_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0555 unsign start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 >= 1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0556_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0556 unsign start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0557_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0557 unsign start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 > 0) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0558_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0558 unsign start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 >= 1) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0559_0123456789() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0559 unsign start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 != 1) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0560_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0560 unsign start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 > 1) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0561_0123456789() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0561 unsign start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected='0123456789' >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 >= 2) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0562_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0562 unsign start:48, iter:1, inc:+1, order:buj cmp:!=0                expected='0'   >", v1);
    ebx2 = 48;
    do {
        fun_8049060(ebx2);
        ++ebx2;
    } while (ebx2 != 49);
    fun_8049040("<");
    return 0;
}

int32_t var0566_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0566 unsign start:48, iter:1, inc:+1, order:bju cmp:< 0                expected='0'   >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 < 48) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0567_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0567 unsign start:48, iter:1, inc:+1, order:bju cmp:<=0                expected='0'   >", v1);
    ebx2 = 48;
    while (fun_8049060(ebx2), ebx2 <= 47) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0568_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0568 unsign start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected='0'   >", v1);
    ebx2 = 47;
    do {
        ++ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 48);
    fun_8049040("<");
    return 0;
}

int32_t var0572_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0572 unsign start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected='0'   >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 < 49) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0573_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0573 unsign start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected='0'   >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 <= 48) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0574_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0574 unsign start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected='0'   >", v1);
    ebx2 = 48;
    while (ebx2 != 49) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0575_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0575 unsign start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected='0'   >", v1);
    ebx2 = 48;
    while (ebx2 < 49) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0576_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0576 unsign start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected='0'   >", v1);
    ebx2 = 48;
    while (ebx2 <= 48) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0577_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0577 unsign start:48, iter:1, inc:+1, order:jub cmp:!=0                expected='0'   >", v1);
    ebx2 = 47;
    while (ebx2 != 48) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0578_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0578 unsign start:48, iter:1, inc:+1, order:jub cmp:< 0                expected='0'   >", v1);
    ebx2 = 47;
    while (ebx2 < 48) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0579_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0579 unsign start:48, iter:1, inc:+1, order:jub cmp:<=0                expected='0'   >", v1);
    ebx2 = 47;
    while (ebx2 <= 47) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0580_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0580 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    do {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    } while (ebx2 != 1);
    fun_8049040("<");
    return 0;
}

int32_t var0584_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0584 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (fun_8049060(ebx2 + 48), ebx2 < 0) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0585_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0585 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    do {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    } while (ebx2);
    fun_8049040("<");
    return 0;
}

int32_t var0588_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0588 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0xffffffff;
    while (++ebx2, ebx2 < 1) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0589_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0589 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0xffffffff;
    while (++ebx2, ebx2 <= 0) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0590_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0590 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (ebx2 != 1) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0591_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0591 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (ebx2 < 1) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0592_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0592 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected='0'   >", v1);
    ebx2 = 0;
    while (ebx2 <= 0) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0593_0() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0593 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected='0'   >", v1);
    ebx2 = -1;
    while (ebx2) {
        ++ebx2;
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0594_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0594 unsign start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    do {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    } while (ebx2 != 18);
    fun_8049040("<");
    return 0;
}

int32_t var0600_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0600 unsign start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 < 16) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0601_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0601 unsign start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 < 15) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0602_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0602 unsign start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 <= 15) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0603_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0603 unsign start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (fun_8049060((ebx2 >> 1) + 40), ebx2 <= 14) {
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0604_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0604 unsign start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    do {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    } while (ebx2 != 16);
    fun_8049040("<");
    return 0;
}

int32_t var0610_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0610 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 < 18) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0611_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0611 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 < 17) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0612_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0612 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 <= 17) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0613_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0613 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 <= 16) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0614_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0614 unsign start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (ebx2 != 18) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0615_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0615 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (ebx2 < 18) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0616_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0616 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (ebx2 < 17) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0617_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0617 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (ebx2 <= 17) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0618_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0618 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 16;
    while (ebx2 <= 16) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0619_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0619 unsign start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 != 16) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0620_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0620 unsign start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 < 16) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0621_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0621 unsign start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 < 15) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0622_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0622 unsign start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 <= 15) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0623_0() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0623 unsign start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected='0'   >", v1);
    ebx2 = 14;
    while (ebx2 <= 14) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0624_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0624 unsign start:57, iter:1, inc:-1, order:buj cmp:!=0                expected='9'   >", v1);
    ebx2 = 57;
    do {
        fun_8049060(ebx2);
        --ebx2;
    } while (ebx2 != 56);
    fun_8049040("<");
    return 0;
}

int32_t var0628_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0628 unsign start:57, iter:1, inc:-1, order:bju cmp:< 0                expected='9'   >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 > 57) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0629_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0629 unsign start:57, iter:1, inc:-1, order:bju cmp:<=0                expected='9'   >", v1);
    ebx2 = 57;
    while (fun_8049060(ebx2), ebx2 >= 58) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0630_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0630 unsign start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected='9'   >", v1);
    ebx2 = 58;
    do {
        --ebx2;
        fun_8049060(ebx2);
    } while (ebx2 != 57);
    fun_8049040("<");
    return 0;
}

int32_t var0634_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0634 unsign start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected='9'   >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 > 56) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0635_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0635 unsign start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected='9'   >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 >= 57) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0636_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0636 unsign start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected='9'   >", v1);
    ebx2 = 57;
    while (ebx2 != 56) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0637_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0637 unsign start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected='9'   >", v1);
    ebx2 = 57;
    while (ebx2 > 56) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0638_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0638 unsign start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected='9'   >", v1);
    ebx2 = 57;
    while (ebx2 >= 57) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0639_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0639 unsign start:57, iter:1, inc:-1, order:jub cmp:!=0                expected='9'   >", v1);
    ebx2 = 58;
    while (ebx2 != 57) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0640_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0640 unsign start:57, iter:1, inc:-1, order:jub cmp:< 0                expected='9'   >", v1);
    ebx2 = 58;
    while (ebx2 > 57) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0641_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0641 unsign start:57, iter:1, inc:-1, order:jub cmp:<=0                expected='9'   >", v1);
    ebx2 = 58;
    while (ebx2 >= 58) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0642_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0642 unsign start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    do {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    } while (ebx2 != 98);
    fun_8049040("<");
    return 0;
}

int32_t var0648_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0648 unsign start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 > 0x65) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0649_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0649 unsign start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 > 100) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0650_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0650 unsign start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 >= 0x66) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0651_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0651 unsign start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (fun_8049060((ebx2 >> 1) + 7), ebx2 >= 0x65) {
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0652_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0652 unsign start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    do {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    } while (ebx2 != 100);
    fun_8049040("<");
    return 0;
}

int32_t var0658_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0658 unsign start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 > 99) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0659_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0659 unsign start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 > 98) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0660_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0660 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 >= 100) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0661_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0661 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 >= 99) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0662_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0662 unsign start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (ebx2 != 98) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0663_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0663 unsign start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (ebx2 > 99) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0664_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0664 unsign start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (ebx2 > 98) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0665_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0665 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 100;
    while (ebx2 >= 100) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0666_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0666 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 100;
    while (ebx2 >= 99) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0667_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0667 unsign start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 != 100) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0668_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0668 unsign start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 > 0x65) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0669_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0669 unsign start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 > 100) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0670_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0670 unsign start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 >= 0x66) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0671_9() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0671 unsign start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected='9'   >", v1);
    ebx2 = 0x66;
    while (ebx2 >= 0x65) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0672_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0672 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    } while (ebx2 != 1);
    fun_8049040("<");
    return 0;
}

int32_t var0676_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0676 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 < 0) {
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0677_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0677 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    do {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2);
    fun_8049040("<");
    return 0;
}

int32_t var0680_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0680 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    while (++ebx2, ebx2 < 1) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0681_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0681 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    while (++ebx2, ebx2 <= 0) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0682_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0682 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 != 1) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0683_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0683 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 < 1) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0684_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0684 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 <= 0) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0685_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0685 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected='0'   >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (ebx2) {
        ++ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0686_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0686 unsign start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    do {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    } while (ebx2 != 9);
    fun_8049040("<");
    return 0;
}

int32_t var0690_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0690 unsign start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 > 10) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0691_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0691 unsign start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (fun_8049060(esi3), ++esi3, ebx2 >= 11) {
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0692_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0692 unsign start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    do {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    } while (ebx2 != 10);
    fun_8049040("<");
    return 0;
}

int32_t var0696_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0696 unsign start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 > 9) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0697_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0697 unsign start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 >= 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0698_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0698 unsign start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 != 9) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0699_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0699 unsign start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 > 9) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0700_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0700 unsign start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 >= 10) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0701_0() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0701 unsign start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 != 10) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0702_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0702 unsign start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 > 10) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0703_0() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0703 unsign start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected='0'   >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 >= 11) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0704_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0704 unsign start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=''    >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 != 48) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0705_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0705 unsign start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=''    >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 < 48) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0706_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0706 unsign start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=''    >", v1);
    ebx2 = 47;
    while (++ebx2, ebx2 <= 47) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0707_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0707 unsign start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=''    >", v1);
    ebx2 = 48;
    while (ebx2 != 48) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0708_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0708 unsign start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=''    >", v1);
    ebx2 = 48;
    while (ebx2 < 48) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0709_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0709 unsign start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=''    >", v1);
    ebx2 = 48;
    while (ebx2 <= 47) {
        fun_8049060(ebx2);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0710_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0710 unsign start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=''    >", v1);
    ebx2 = 47;
    while (ebx2 != 47) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0711_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0711 unsign start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=''    >", v1);
    ebx2 = 47;
    while (ebx2 < 47) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0712_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0712 unsign start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=''    >", v1);
    ebx2 = 47;
    while (ebx2 <= 46) {
        ++ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0713_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0713 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=''    >", v1);
    ebx2 = -1;
    while (++ebx2, !!ebx2) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0714_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0714 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=''    >", v1);
    ebx2 = 0xffffffff;
    while (++ebx2, ebx2 < 0) {
        fun_8049060(ebx2 + 48);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0715_empty() {
    int32_t v1;
    int32_t ebx2;

    v1 = stdout;
    fun_8049070("0715 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=''    >", v1);
    ebx2 = 0;
    while (ebx2) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0716_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0716 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=''    >", v1);
    ebx2 = 0;
    while (ebx2 < 0) {
        fun_8049060(ebx2 + 48);
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0717_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0717 unsign start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 != 16) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0718_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0718 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 < 16) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0719_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0719 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 < 15) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0720_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0720 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 <= 15) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0721_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0721 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 = ebx2 + 2, ebx2 <= 14) {
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0722_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0722 unsign start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (ebx2 != 16) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0723_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0723 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (ebx2 < 16) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0724_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0724 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (ebx2 < 15) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0725_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0725 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (ebx2 <= 15) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0726_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0726 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 16;
    while (ebx2 <= 14) {
        fun_8049060((ebx2 >> 1) + 40);
        ebx2 = ebx2 + 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0727_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0727 unsign start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 != 14) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0728_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0728 unsign start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 < 14) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0729_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0729 unsign start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 < 13) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0730_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0730 unsign start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 <= 13) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0731_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0731 unsign start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=''    >", v1);
    ebx2 = 14;
    while (ebx2 <= 12) {
        ebx2 = ebx2 + 2;
        fun_8049060((ebx2 >> 1) + 40);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0732_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0732 unsign start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=''    >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 != 57) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0733_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0733 unsign start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=''    >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 > 57) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0734_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0734 unsign start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=''    >", v1);
    ebx2 = 58;
    while (--ebx2, ebx2 >= 58) {
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0735_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0735 unsign start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=''    >", v1);
    ebx2 = 57;
    while (ebx2 != 57) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0736_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0736 unsign start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=''    >", v1);
    ebx2 = 57;
    while (ebx2 > 57) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0737_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0737 unsign start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=''    >", v1);
    ebx2 = 57;
    while (ebx2 >= 58) {
        fun_8049060(ebx2);
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0738_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0738 unsign start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=''    >", v1);
    ebx2 = 58;
    while (ebx2 != 58) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0739_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0739 unsign start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=''    >", v1);
    ebx2 = 58;
    while (ebx2 > 58) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0740_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0740 unsign start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=''    >", v1);
    ebx2 = 58;
    while (ebx2 >= 59) {
        --ebx2;
        fun_8049060(ebx2);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0741_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0741 unsign start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 != 100) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0742_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0742 unsign start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 > 0x65) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0743_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0743 unsign start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 > 100) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0744_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0744 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 >= 0x66) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0745_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0745 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 = ebx2 - 2, ebx2 >= 0x65) {
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0746_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0746 unsign start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 100;
    while (ebx2 != 100) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0747_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0747 unsign start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 100;
    while (ebx2 > 0x65) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0748_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0748 unsign start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 100;
    while (ebx2 > 100) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0749_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0749 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 100;
    while (ebx2 >= 0x66) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0750_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0750 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 100;
    while (ebx2 >= 0x65) {
        fun_8049060((ebx2 >> 1) + 7);
        ebx2 = ebx2 - 2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0751_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0751 unsign start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 != 0x66) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0752_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0752 unsign start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 > 0x67) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0753_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0753 unsign start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 > 0x66) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0754_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0754 unsign start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 >= 0x68) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0755_empty() {
    int32_t v1;
    uint32_t ebx2;

    v1 = stdout;
    fun_8049070("0755 unsign start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=''    >", v1);
    ebx2 = 0x66;
    while (ebx2 >= 0x67) {
        ebx2 = ebx2 - 2;
        fun_8049060((ebx2 >> 1) + 7);
    }
    fun_8049040("<");
    return 0;
}

int32_t var0756_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0756 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=''    >", v1);
    ebx2 = -1;
    esi3 = 48;
    while (++ebx2, !!ebx2) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0757_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0757 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=''    >", v1);
    ebx2 = 0xffffffff;
    esi3 = 48;
    while (++ebx2, ebx2 < 0) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0758_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0758 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=''    >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0759_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0759 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=''    >", v1);
    ebx2 = 0;
    esi3 = 48;
    while (ebx2 < 0) {
        fun_8049060(esi3);
        ++esi3;
        ++ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0760_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0760 unsign start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0761_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0761 unsign start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 > 10) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0762_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0762 unsign start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (--ebx2, ebx2 >= 11) {
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0763_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0763 unsign start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 != 10) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0764_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0764 unsign start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=''    >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 > 10) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0765_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0765 unsign start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 10;
    esi3 = 48;
    while (ebx2 >= 11) {
        fun_8049060(esi3);
        ++esi3;
        --ebx2;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0766_empty() {
    int32_t v1;
    int32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0766 unsign start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 != 11) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0767_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0767 unsign start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 > 11) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t var0768_empty() {
    int32_t v1;
    uint32_t ebx2;
    uint32_t esi3;

    v1 = stdout;
    fun_8049070("0768 unsign start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=''    >", v1);
    ebx2 = 11;
    esi3 = 48;
    while (ebx2 >= 12) {
        --ebx2;
        fun_8049060(esi3);
        ++esi3;
    }
    fun_8049040("<");
    return 0;
}

int32_t call_all() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;
    int32_t eax29;
    int32_t eax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    int32_t eax35;
    int32_t eax36;
    int32_t eax37;
    int32_t eax38;
    int32_t eax39;
    int32_t eax40;
    int32_t eax41;
    int32_t eax42;
    int32_t eax43;
    int32_t eax44;
    int32_t eax45;
    int32_t eax46;
    int32_t eax47;
    int32_t eax48;
    int32_t eax49;
    int32_t eax50;
    int32_t eax51;
    int32_t eax52;
    int32_t eax53;
    int32_t eax54;
    int32_t eax55;
    int32_t eax56;
    int32_t eax57;
    int32_t eax58;
    int32_t eax59;
    int32_t eax60;
    int32_t eax61;
    int32_t eax62;
    int32_t eax63;
    int32_t eax64;
    int32_t eax65;
    int32_t eax66;
    int32_t eax67;
    int32_t eax68;
    int32_t eax69;
    int32_t eax70;
    int32_t eax71;
    int32_t eax72;
    int32_t eax73;
    int32_t eax74;
    int32_t eax75;
    int32_t eax76;
    int32_t eax77;
    int32_t eax78;
    int32_t eax79;
    int32_t eax80;
    int32_t eax81;
    int32_t eax82;
    int32_t eax83;
    int32_t eax84;
    int32_t eax85;
    int32_t eax86;
    int32_t eax87;
    int32_t eax88;
    int32_t eax89;
    int32_t eax90;
    int32_t eax91;
    int32_t eax92;
    int32_t eax93;
    int32_t eax94;
    int32_t eax95;
    int32_t eax96;
    int32_t eax97;
    int32_t eax98;
    int32_t eax99;
    int32_t eax100;
    int32_t eax101;
    int32_t eax102;
    int32_t eax103;
    int32_t eax104;
    int32_t eax105;
    int32_t eax106;
    int32_t eax107;
    int32_t eax108;
    int32_t eax109;
    int32_t eax110;
    int32_t eax111;
    int32_t eax112;
    int32_t eax113;
    int32_t eax114;
    int32_t eax115;
    int32_t eax116;
    int32_t eax117;
    int32_t eax118;
    int32_t eax119;
    int32_t eax120;
    int32_t eax121;
    int32_t eax122;
    int32_t eax123;
    int32_t eax124;
    int32_t eax125;
    int32_t eax126;
    int32_t eax127;
    int32_t eax128;
    int32_t eax129;
    int32_t eax130;
    int32_t eax131;
    int32_t eax132;
    int32_t eax133;
    int32_t eax134;
    int32_t eax135;
    int32_t eax136;
    int32_t eax137;
    int32_t eax138;
    int32_t eax139;
    int32_t eax140;
    int32_t eax141;
    int32_t eax142;
    int32_t eax143;
    int32_t eax144;
    int32_t eax145;
    int32_t eax146;
    int32_t eax147;
    int32_t eax148;
    int32_t eax149;
    int32_t eax150;
    int32_t eax151;
    int32_t eax152;
    int32_t eax153;
    int32_t eax154;
    int32_t eax155;
    int32_t eax156;
    int32_t eax157;
    int32_t eax158;
    int32_t eax159;
    int32_t eax160;
    int32_t eax161;
    int32_t eax162;
    int32_t eax163;
    int32_t eax164;
    int32_t eax165;
    int32_t eax166;
    int32_t eax167;
    int32_t eax168;
    int32_t eax169;
    int32_t eax170;
    int32_t eax171;
    int32_t eax172;
    int32_t eax173;
    int32_t eax174;
    int32_t eax175;
    int32_t eax176;
    int32_t eax177;
    int32_t eax178;
    int32_t eax179;
    int32_t eax180;
    int32_t eax181;
    int32_t eax182;
    int32_t eax183;
    int32_t eax184;
    int32_t eax185;
    int32_t eax186;
    int32_t eax187;
    int32_t eax188;
    int32_t eax189;
    int32_t eax190;
    int32_t eax191;
    int32_t eax192;
    int32_t eax193;
    int32_t eax194;
    int32_t eax195;
    int32_t eax196;
    int32_t eax197;
    int32_t eax198;
    int32_t eax199;
    int32_t eax200;
    int32_t eax201;
    int32_t eax202;
    int32_t eax203;
    int32_t eax204;
    int32_t eax205;
    int32_t eax206;
    int32_t eax207;
    int32_t eax208;
    int32_t eax209;
    int32_t eax210;
    int32_t eax211;
    int32_t eax212;
    int32_t eax213;
    int32_t eax214;
    int32_t eax215;
    int32_t eax216;
    int32_t eax217;
    int32_t eax218;
    int32_t eax219;
    int32_t eax220;
    int32_t eax221;
    int32_t eax222;
    int32_t eax223;
    int32_t eax224;
    int32_t eax225;
    int32_t eax226;
    int32_t eax227;
    int32_t eax228;
    int32_t eax229;
    int32_t eax230;
    int32_t eax231;
    int32_t eax232;
    int32_t eax233;
    int32_t eax234;
    int32_t eax235;
    int32_t eax236;
    int32_t eax237;
    int32_t eax238;
    int32_t eax239;
    int32_t eax240;
    int32_t eax241;
    int32_t eax242;
    int32_t eax243;
    int32_t eax244;
    int32_t eax245;
    int32_t eax246;
    int32_t eax247;
    int32_t eax248;
    int32_t eax249;
    int32_t eax250;
    int32_t eax251;
    int32_t eax252;
    int32_t eax253;
    int32_t eax254;
    int32_t eax255;
    int32_t eax256;
    int32_t eax257;
    int32_t eax258;
    int32_t eax259;
    int32_t eax260;
    int32_t eax261;
    int32_t eax262;
    int32_t eax263;
    int32_t eax264;
    int32_t eax265;
    int32_t eax266;
    int32_t eax267;
    int32_t eax268;
    int32_t eax269;
    int32_t eax270;
    int32_t eax271;
    int32_t eax272;
    int32_t eax273;
    int32_t eax274;
    int32_t eax275;
    int32_t eax276;
    int32_t eax277;
    int32_t eax278;
    int32_t eax279;
    int32_t eax280;
    int32_t eax281;
    int32_t eax282;
    int32_t eax283;
    int32_t eax284;
    int32_t eax285;
    int32_t eax286;
    int32_t eax287;
    int32_t eax288;
    int32_t eax289;
    int32_t eax290;
    int32_t eax291;
    int32_t eax292;
    int32_t eax293;
    int32_t eax294;
    int32_t eax295;
    int32_t eax296;
    int32_t eax297;
    int32_t eax298;
    int32_t eax299;
    int32_t eax300;
    int32_t eax301;
    int32_t eax302;
    int32_t eax303;
    int32_t eax304;
    int32_t eax305;
    int32_t eax306;
    int32_t eax307;
    int32_t eax308;
    int32_t eax309;
    int32_t eax310;
    int32_t eax311;
    int32_t eax312;
    int32_t eax313;
    int32_t eax314;
    int32_t eax315;
    int32_t eax316;
    int32_t eax317;
    int32_t eax318;
    int32_t eax319;
    int32_t eax320;
    int32_t eax321;
    int32_t eax322;
    int32_t eax323;
    int32_t eax324;
    int32_t eax325;
    int32_t eax326;
    int32_t eax327;
    int32_t eax328;
    int32_t eax329;
    int32_t eax330;
    int32_t eax331;
    int32_t eax332;
    int32_t eax333;
    int32_t eax334;
    int32_t eax335;
    int32_t eax336;
    int32_t eax337;
    int32_t eax338;
    int32_t eax339;
    int32_t eax340;
    int32_t eax341;
    int32_t eax342;
    int32_t eax343;
    int32_t eax344;
    int32_t eax345;
    int32_t eax346;
    int32_t eax347;
    int32_t eax348;
    int32_t eax349;
    int32_t eax350;
    int32_t eax351;
    int32_t eax352;
    int32_t eax353;
    int32_t eax354;
    int32_t eax355;
    int32_t eax356;
    int32_t eax357;
    int32_t eax358;
    int32_t eax359;
    int32_t eax360;
    int32_t eax361;
    int32_t eax362;
    int32_t eax363;
    int32_t eax364;
    int32_t eax365;
    int32_t eax366;
    int32_t eax367;
    int32_t eax368;
    int32_t eax369;
    int32_t eax370;
    int32_t eax371;
    int32_t eax372;
    int32_t eax373;
    int32_t eax374;
    int32_t eax375;
    int32_t eax376;
    int32_t eax377;
    int32_t eax378;
    int32_t eax379;
    int32_t eax380;
    int32_t eax381;
    int32_t eax382;
    int32_t eax383;
    int32_t eax384;
    int32_t eax385;
    int32_t eax386;
    int32_t eax387;
    int32_t eax388;
    int32_t eax389;
    int32_t eax390;
    int32_t eax391;
    int32_t eax392;
    int32_t eax393;
    int32_t eax394;
    int32_t eax395;
    int32_t eax396;
    int32_t eax397;
    int32_t eax398;
    int32_t eax399;
    int32_t eax400;
    int32_t eax401;
    int32_t eax402;
    int32_t eax403;
    int32_t eax404;
    int32_t eax405;
    int32_t eax406;
    int32_t eax407;
    int32_t eax408;
    int32_t eax409;
    int32_t eax410;
    int32_t eax411;
    int32_t eax412;
    int32_t eax413;
    int32_t eax414;
    int32_t eax415;
    int32_t eax416;
    int32_t eax417;
    int32_t eax418;
    int32_t eax419;
    int32_t eax420;
    int32_t eax421;
    int32_t eax422;
    int32_t eax423;
    int32_t eax424;
    int32_t eax425;
    int32_t eax426;
    int32_t eax427;
    int32_t eax428;
    int32_t eax429;
    int32_t eax430;
    int32_t eax431;
    int32_t eax432;
    int32_t eax433;
    int32_t eax434;
    int32_t eax435;
    int32_t eax436;
    int32_t eax437;
    int32_t eax438;
    int32_t eax439;
    int32_t eax440;
    int32_t eax441;
    int32_t eax442;
    int32_t eax443;
    int32_t eax444;
    int32_t eax445;
    int32_t eax446;
    int32_t eax447;
    int32_t eax448;
    int32_t eax449;
    int32_t eax450;
    int32_t eax451;
    int32_t eax452;
    int32_t eax453;
    int32_t eax454;
    int32_t eax455;
    int32_t eax456;
    int32_t eax457;
    int32_t eax458;
    int32_t eax459;
    int32_t eax460;
    int32_t eax461;
    int32_t eax462;
    int32_t eax463;
    int32_t eax464;
    int32_t eax465;
    int32_t eax466;
    int32_t eax467;
    int32_t eax468;
    int32_t eax469;
    int32_t eax470;
    int32_t eax471;
    int32_t eax472;
    int32_t eax473;
    int32_t eax474;
    int32_t eax475;
    int32_t eax476;
    int32_t eax477;
    int32_t eax478;
    int32_t eax479;
    int32_t eax480;
    int32_t eax481;
    int32_t eax482;
    int32_t eax483;
    int32_t eax484;
    int32_t eax485;
    int32_t eax486;
    int32_t eax487;
    int32_t eax488;
    int32_t eax489;
    int32_t eax490;
    int32_t eax491;
    int32_t eax492;
    int32_t eax493;
    int32_t eax494;
    int32_t eax495;
    int32_t eax496;
    int32_t eax497;
    int32_t eax498;
    int32_t eax499;
    int32_t eax500;
    int32_t eax501;
    int32_t eax502;
    int32_t eax503;
    int32_t eax504;
    int32_t eax505;
    int32_t eax506;
    int32_t eax507;
    int32_t eax508;
    int32_t eax509;
    int32_t eax510;
    int32_t eax511;
    int32_t eax512;
    int32_t eax513;
    int32_t eax514;
    int32_t eax515;
    int32_t eax516;
    int32_t eax517;
    int32_t eax518;
    int32_t eax519;
    int32_t eax520;
    int32_t eax521;
    int32_t eax522;
    int32_t eax523;
    int32_t eax524;
    int32_t eax525;
    int32_t eax526;
    int32_t eax527;
    int32_t eax528;
    int32_t eax529;
    int32_t eax530;
    int32_t eax531;
    int32_t eax532;
    int32_t eax533;
    int32_t eax534;
    int32_t eax535;
    int32_t eax536;
    int32_t eax537;
    int32_t eax538;
    int32_t eax539;
    int32_t eax540;
    int32_t eax541;
    int32_t eax542;
    int32_t eax543;
    int32_t eax544;
    int32_t eax545;
    int32_t eax546;
    int32_t eax547;
    int32_t eax548;
    int32_t eax549;
    int32_t eax550;
    int32_t eax551;
    int32_t eax552;
    int32_t eax553;
    int32_t eax554;
    int32_t eax555;
    int32_t eax556;
    int32_t eax557;
    int32_t eax558;
    int32_t eax559;
    int32_t eax560;
    int32_t eax561;
    int32_t eax562;
    int32_t eax563;
    int32_t eax564;
    int32_t eax565;
    int32_t eax566;
    int32_t eax567;
    int32_t eax568;
    int32_t eax569;
    int32_t eax570;
    int32_t eax571;
    int32_t eax572;
    int32_t eax573;
    int32_t eax574;
    int32_t eax575;
    int32_t eax576;
    int32_t eax577;
    int32_t eax578;
    int32_t eax579;
    int32_t eax580;
    int32_t eax581;
    int32_t eax582;
    int32_t eax583;
    int32_t eax584;
    int32_t eax585;
    int32_t eax586;
    int32_t eax587;
    int32_t eax588;
    int32_t eax589;
    int32_t eax590;
    int32_t eax591;
    int32_t eax592;
    int32_t eax593;
    int32_t eax594;
    int32_t eax595;
    int32_t eax596;
    int32_t eax597;
    int32_t eax598;
    int32_t eax599;
    int32_t eax600;
    int32_t eax601;
    int32_t eax602;
    int32_t eax603;
    int32_t eax604;
    int32_t eax605;
    int32_t eax606;
    int32_t eax607;
    int32_t eax608;
    int32_t eax609;
    int32_t eax610;
    int32_t eax611;
    int32_t eax612;
    int32_t eax613;
    int32_t eax614;
    int32_t eax615;
    int32_t eax616;
    int32_t eax617;
    int32_t eax618;
    int32_t eax619;
    int32_t eax620;
    int32_t eax621;
    int32_t eax622;
    int32_t eax623;
    int32_t eax624;
    int32_t eax625;
    int32_t eax626;
    int32_t eax627;
    int32_t eax628;
    int32_t eax629;
    int32_t eax630;
    int32_t eax631;
    int32_t eax632;
    int32_t eax633;
    int32_t eax634;
    int32_t eax635;
    int32_t eax636;
    int32_t eax637;
    int32_t eax638;
    int32_t eax639;
    int32_t eax640;
    int32_t eax641;
    int32_t eax642;
    int32_t eax643;
    int32_t eax644;
    int32_t eax645;
    int32_t eax646;
    int32_t eax647;
    int32_t eax648;
    int32_t eax649;
    int32_t eax650;
    int32_t eax651;
    int32_t eax652;
    int32_t eax653;
    int32_t eax654;
    int32_t eax655;
    int32_t eax656;
    int32_t eax657;
    int32_t eax658;
    int32_t eax659;
    int32_t eax660;
    int32_t eax661;
    int32_t eax662;
    int32_t eax663;
    int32_t eax664;
    int32_t eax665;
    int32_t eax666;
    int32_t eax667;
    int32_t eax668;
    int32_t eax669;
    int32_t eax670;
    int32_t eax671;
    int32_t eax672;
    int32_t eax673;
    int32_t eax674;
    int32_t eax675;
    int32_t eax676;
    int32_t eax677;
    int32_t eax678;
    int32_t eax679;
    int32_t eax680;
    int32_t eax681;
    int32_t eax682;
    int32_t eax683;
    int32_t eax684;
    int32_t eax685;
    int32_t eax686;
    int32_t eax687;
    int32_t eax688;
    int32_t eax689;
    int32_t eax690;
    int32_t eax691;
    int32_t eax692;
    int32_t eax693;
    int32_t eax694;
    int32_t eax695;
    int32_t eax696;
    int32_t eax697;
    int32_t eax698;
    int32_t eax699;
    int32_t eax700;
    int32_t eax701;
    int32_t eax702;
    int32_t eax703;
    int32_t eax704;
    int32_t eax705;
    int32_t eax706;
    int32_t eax707;
    int32_t eax708;
    int32_t eax709;
    int32_t eax710;
    int32_t eax711;
    int32_t eax712;
    int32_t eax713;
    int32_t eax714;
    int32_t eax715;
    int32_t eax716;
    int32_t eax717;
    int32_t eax718;
    int32_t eax719;
    int32_t eax720;
    int32_t eax721;
    int32_t eax722;
    int32_t eax723;
    int32_t eax724;
    int32_t eax725;
    int32_t eax726;
    int32_t eax727;
    int32_t eax728;
    int32_t eax729;
    int32_t eax730;
    int32_t eax731;
    int32_t eax732;
    int32_t eax733;
    int32_t eax734;
    int32_t eax735;
    int32_t eax736;
    int32_t eax737;
    int32_t eax738;
    int32_t eax739;
    int32_t eax740;
    int32_t eax741;
    int32_t eax742;
    int32_t eax743;
    int32_t eax744;
    int32_t eax745;
    int32_t eax746;
    int32_t eax747;
    int32_t eax748;
    int32_t eax749;
    int32_t eax750;
    int32_t eax751;
    int32_t eax752;
    int32_t eax753;
    int32_t eax754;
    int32_t eax755;
    int32_t eax756;
    int32_t eax757;
    int32_t eax758;
    int32_t eax759;
    int32_t eax760;
    int32_t eax761;
    int32_t eax762;
    int32_t eax763;
    int32_t eax764;
    int32_t eax765;
    int32_t eax766;
    int32_t eax767;
    int32_t eax768;
    int32_t eax769;

    eax1 = var0000_0123456789();
    eax2 = var0001_0123456789();
    eax3 = var0002_0123456789();
    eax4 = var0003_0123456789();
    eax5 = var0004_0123456789();
    eax6 = var0005_0123456789();
    eax7 = var0006_0123456789();
    eax8 = var0007_0123456789();
    eax9 = var0008_0123456789();
    eax10 = var0009_0123456789();
    eax11 = var0010_0123456789();
    eax12 = var0011_0123456789();
    eax13 = var0012_0123456789();
    eax14 = var0013_0123456789();
    eax15 = var0014_0123456789();
    eax16 = var0015_0123456789();
    eax17 = var0016_0123456789();
    eax18 = var0017_0123456789();
    eax19 = var0018_0123456789();
    eax20 = var0019_0123456789();
    eax21 = var0020_0123456789();
    eax22 = var0021_0123456789();
    eax23 = var0022_0123456789();
    eax24 = var0023_0123456789();
    eax25 = var0024_0123456789();
    eax26 = var0025_0123456789();
    eax27 = var0026_0123456789();
    eax28 = var0027_0123456789();
    eax29 = var0028_0123456789();
    eax30 = var0029_0123456789();
    eax31 = var0030_0123456789();
    eax32 = var0031_0123456789();
    eax33 = var0032_0123456789();
    eax34 = var0033_0123456789();
    eax35 = var0034_0123456789();
    eax36 = var0035_0123456789();
    eax37 = var0036_0123456789();
    eax38 = var0037_0123456789();
    eax39 = var0038_0123456789();
    eax40 = var0039_0123456789();
    eax41 = var0040_0123456789();
    eax42 = var0041_0123456789();
    eax43 = var0042_0123456789();
    eax44 = var0043_0123456789();
    eax45 = var0044_0123456789();
    eax46 = var0045_0123456789();
    eax47 = var0046_0123456789();
    eax48 = var0047_0123456789();
    eax49 = var0048_0123456789();
    eax50 = var0049_0123456789();
    eax51 = var0050_0123456789();
    eax52 = var0051_0123456789();
    eax53 = var0052_0123456789();
    eax54 = var0053_0123456789();
    eax55 = var0054_0123456789();
    eax56 = var0055_0123456789();
    eax57 = var0056_0123456789();
    eax58 = var0057_0123456789();
    eax59 = var0058_0123456789();
    eax60 = var0059_0123456789();
    eax61 = var0060_0123456789();
    eax62 = var0061_0123456789();
    eax63 = var0062_0123456789();
    eax64 = var0063_0123456789();
    eax65 = var0064_0123456789();
    eax66 = var0065_0123456789();
    eax67 = var0066_9876543210();
    eax68 = var0067_9876543210();
    eax69 = var0068_9876543210();
    eax70 = var0069_9876543210();
    eax71 = var0070_9876543210();
    eax72 = var0071_9876543210();
    eax73 = var0072_9876543210();
    eax74 = var0073_9876543210();
    eax75 = var0074_9876543210();
    eax76 = var0075_9876543210();
    eax77 = var0076_9876543210();
    eax78 = var0077_9876543210();
    eax79 = var0078_9876543210();
    eax80 = var0079_9876543210();
    eax81 = var0080_9876543210();
    eax82 = var0081_9876543210();
    eax83 = var0082_9876543210();
    eax84 = var0083_9876543210();
    eax85 = var0084_9876543210();
    eax86 = var0085_9876543210();
    eax87 = var0086_9876543210();
    eax88 = var0087_9876543210();
    eax89 = var0088_9876543210();
    eax90 = var0089_9876543210();
    eax91 = var0090_9876543210();
    eax92 = var0091_9876543210();
    eax93 = var0092_9876543210();
    eax94 = var0093_9876543210();
    eax95 = var0094_9876543210();
    eax96 = var0095_9876543210();
    eax97 = var0096_9876543210();
    eax98 = var0097_9876543210();
    eax99 = var0098_9876543210();
    eax100 = var0099_9876543210();
    eax101 = var0100_9876543210();
    eax102 = var0101_9876543210();
    eax103 = var0102_9876543210();
    eax104 = var0103_9876543210();
    eax105 = var0104_9876543210();
    eax106 = var0105_9876543210();
    eax107 = var0106_9876543210();
    eax108 = var0107_9876543210();
    eax109 = var0108_9876543210();
    eax110 = var0109_9876543210();
    eax111 = var0110_9876543210();
    eax112 = var0111_9876543210();
    eax113 = var0112_9876543210();
    eax114 = var0113_9876543210();
    eax115 = var0114_0123456789();
    eax116 = var0115_0123456789();
    eax117 = var0116_0123456789();
    eax118 = var0117_0123456789();
    eax119 = var0118_0123456789();
    eax120 = var0119_0123456789();
    eax121 = var0120_0123456789();
    eax122 = var0121_0123456789();
    eax123 = var0122_0123456789();
    eax124 = var0123_0123456789();
    eax125 = var0124_0123456789();
    eax126 = var0125_0123456789();
    eax127 = var0126_0123456789();
    eax128 = var0127_0123456789();
    eax129 = var0128_0123456789();
    eax130 = var0129_0123456789();
    eax131 = var0130_0123456789();
    eax132 = var0131_0123456789();
    eax133 = var0132_0123456789();
    eax134 = var0133_0123456789();
    eax135 = var0134_0123456789();
    eax136 = var0135_0123456789();
    eax137 = var0136_0123456789();
    eax138 = var0137_0123456789();
    eax139 = var0138_0123456789();
    eax140 = var0139_0123456789();
    eax141 = var0140_0123456789();
    eax142 = var0141_0123456789();
    eax143 = var0142_0123456789();
    eax144 = var0143_0123456789();
    eax145 = var0144_0123456789();
    eax146 = var0145_0123456789();
    eax147 = var0146_0123456789();
    eax148 = var0147_0123456789();
    eax149 = var0148_0123456789();
    eax150 = var0149_0123456789();
    eax151 = var0150_0123456789();
    eax152 = var0151_0123456789();
    eax153 = var0152_0123456789();
    eax154 = var0153_0123456789();
    eax155 = var0154_0123456789();
    eax156 = var0155_0123456789();
    eax157 = var0156_0123456789();
    eax158 = var0157_0123456789();
    eax159 = var0158_0123456789();
    eax160 = var0159_0123456789();
    eax161 = var0160_0123456789();
    eax162 = var0161_0123456789();
    eax163 = var0162_0123456789();
    eax164 = var0163_0123456789();
    eax165 = var0164_0123456789();
    eax166 = var0165_0123456789();
    eax167 = var0166_0123456789();
    eax168 = var0167_0123456789();
    eax169 = var0168_0();
    eax170 = var0169_0();
    eax171 = var0170_0();
    eax172 = var0171_0();
    eax173 = var0172_0();
    eax174 = var0173_0();
    eax175 = var0174_0();
    eax176 = var0175_0();
    eax177 = var0176_0();
    eax178 = var0177_0();
    eax179 = var0178_0();
    eax180 = var0179_0();
    eax181 = var0180_0();
    eax182 = var0181_0();
    eax183 = var0182_0();
    eax184 = var0183_0();
    eax185 = var0184_0();
    eax186 = var0185_0();
    eax187 = var0186_0();
    eax188 = var0187_0();
    eax189 = var0188_0();
    eax190 = var0189_0();
    eax191 = var0190_0();
    eax192 = var0191_0();
    eax193 = var0192_0();
    eax194 = var0193_0();
    eax195 = var0194_0();
    eax196 = var0195_0();
    eax197 = var0196_0();
    eax198 = var0197_0();
    eax199 = var0198_0();
    eax200 = var0199_0();
    eax201 = var0200_0();
    eax202 = var0201_0();
    eax203 = var0202_0();
    eax204 = var0203_0();
    eax205 = var0204_0();
    eax206 = var0205_0();
    eax207 = var0206_0();
    eax208 = var0207_0();
    eax209 = var0208_0();
    eax210 = var0209_0();
    eax211 = var0210_0();
    eax212 = var0211_0();
    eax213 = var0212_0();
    eax214 = var0213_0();
    eax215 = var0214_0();
    eax216 = var0215_0();
    eax217 = var0216_0();
    eax218 = var0217_0();
    eax219 = var0218_0();
    eax220 = var0219_0();
    eax221 = var0220_0();
    eax222 = var0221_0();
    eax223 = var0222_0();
    eax224 = var0223_0();
    eax225 = var0224_0();
    eax226 = var0225_0();
    eax227 = var0226_0();
    eax228 = var0227_0();
    eax229 = var0228_0();
    eax230 = var0229_0();
    eax231 = var0230_0();
    eax232 = var0231_0();
    eax233 = var0232_0();
    eax234 = var0233_0();
    eax235 = var0234_9();
    eax236 = var0235_9();
    eax237 = var0236_9();
    eax238 = var0237_9();
    eax239 = var0238_9();
    eax240 = var0239_9();
    eax241 = var0240_9();
    eax242 = var0241_9();
    eax243 = var0242_9();
    eax244 = var0243_9();
    eax245 = var0244_9();
    eax246 = var0245_9();
    eax247 = var0246_9();
    eax248 = var0247_9();
    eax249 = var0248_9();
    eax250 = var0249_9();
    eax251 = var0250_9();
    eax252 = var0251_9();
    eax253 = var0252_9();
    eax254 = var0253_9();
    eax255 = var0254_9();
    eax256 = var0255_9();
    eax257 = var0256_9();
    eax258 = var0257_9();
    eax259 = var0258_9();
    eax260 = var0259_9();
    eax261 = var0260_9();
    eax262 = var0261_9();
    eax263 = var0262_9();
    eax264 = var0263_9();
    eax265 = var0264_9();
    eax266 = var0265_9();
    eax267 = var0266_9();
    eax268 = var0267_9();
    eax269 = var0268_9();
    eax270 = var0269_9();
    eax271 = var0270_9();
    eax272 = var0271_9();
    eax273 = var0272_9();
    eax274 = var0273_9();
    eax275 = var0274_9();
    eax276 = var0275_9();
    eax277 = var0276_9();
    eax278 = var0277_9();
    eax279 = var0278_9();
    eax280 = var0279_9();
    eax281 = var0280_9();
    eax282 = var0281_9();
    eax283 = var0282_0();
    eax284 = var0283_0();
    eax285 = var0284_0();
    eax286 = var0285_0();
    eax287 = var0286_0();
    eax288 = var0287_0();
    eax289 = var0288_0();
    eax290 = var0289_0();
    eax291 = var0290_0();
    eax292 = var0291_0();
    eax293 = var0292_0();
    eax294 = var0293_0();
    eax295 = var0294_0();
    eax296 = var0295_0();
    eax297 = var0296_0();
    eax298 = var0297_0();
    eax299 = var0298_0();
    eax300 = var0299_0();
    eax301 = var0300_0();
    eax302 = var0301_0();
    eax303 = var0302_0();
    eax304 = var0303_0();
    eax305 = var0304_0();
    eax306 = var0305_0();
    eax307 = var0306_0();
    eax308 = var0307_0();
    eax309 = var0308_0();
    eax310 = var0309_0();
    eax311 = var0310_0();
    eax312 = var0311_0();
    eax313 = var0312_0();
    eax314 = var0313_0();
    eax315 = var0314_0();
    eax316 = var0315_0();
    eax317 = var0316_0();
    eax318 = var0317_0();
    eax319 = var0318_0();
    eax320 = var0319_0();
    eax321 = var0320_0();
    eax322 = var0321_0();
    eax323 = var0322_0();
    eax324 = var0323_0();
    eax325 = var0324_0();
    eax326 = var0325_0();
    eax327 = var0326_0();
    eax328 = var0327_0();
    eax329 = var0328_0();
    eax330 = var0329_0();
    eax331 = var0330_0();
    eax332 = var0331_0();
    eax333 = var0332_0();
    eax334 = var0333_0();
    eax335 = var0334_0();
    eax336 = var0335_0();
    eax337 = var0336_empty();
    eax338 = var0337_empty();
    eax339 = var0338_empty();
    eax340 = var0339_empty();
    eax341 = var0340_empty();
    eax342 = var0341_empty();
    eax343 = var0342_empty();
    eax344 = var0343_empty();
    eax345 = var0344_empty();
    eax346 = var0345_empty();
    eax347 = var0346_empty();
    eax348 = var0347_empty();
    eax349 = var0348_empty();
    eax350 = var0349_empty();
    eax351 = var0350_empty();
    eax352 = var0351_empty();
    eax353 = var0352_empty();
    eax354 = var0353_empty();
    eax355 = var0354_empty();
    eax356 = var0355_empty();
    eax357 = var0356_empty();
    eax358 = var0357_empty();
    eax359 = var0358_empty();
    eax360 = var0359_empty();
    eax361 = var0360_empty();
    eax362 = var0361_empty();
    eax363 = var0362_empty();
    eax364 = var0363_empty();
    eax365 = var0364_empty();
    eax366 = var0365_empty();
    eax367 = var0366_empty();
    eax368 = var0367_empty();
    eax369 = var0368_empty();
    eax370 = var0369_empty();
    eax371 = var0370_empty();
    eax372 = var0371_empty();
    eax373 = var0372_empty();
    eax374 = var0373_empty();
    eax375 = var0374_empty();
    eax376 = var0375_empty();
    eax377 = var0376_empty();
    eax378 = var0377_empty();
    eax379 = var0378_empty();
    eax380 = var0379_empty();
    eax381 = var0380_empty();
    eax382 = var0381_empty();
    eax383 = var0382_empty();
    eax384 = var0383_empty();
    eax385 = var0384_empty();
    eax386 = var0385_empty();
    eax387 = var0386_empty();
    eax388 = var0387_empty();
    eax389 = var0388_empty();
    eax390 = var0389_empty();
    eax391 = var0390_empty();
    eax392 = var0391_empty();
    eax393 = var0392_empty();
    eax394 = var0393_empty();
    eax395 = var0394_empty();
    eax396 = var0395_empty();
    eax397 = var0396_empty();
    eax398 = var0397_empty();
    eax399 = var0398_empty();
    eax400 = var0399_empty();
    eax401 = var0400_empty();
    eax402 = var0401_empty();
    eax403 = var0402_empty();
    eax404 = var0403_empty();
    eax405 = var0404_empty();
    eax406 = var0405_empty();
    eax407 = var0406_empty();
    eax408 = var0407_empty();
    eax409 = var0408_empty();
    eax410 = var0409_empty();
    eax411 = var0410_empty();
    eax412 = var0411_empty();
    eax413 = var0412_empty();
    eax414 = var0413_empty();
    eax415 = var0414_empty();
    eax416 = var0415_empty();
    eax417 = var0416_empty();
    eax418 = var0417_empty();
    eax419 = var0418_empty();
    eax420 = var0419_empty();
    eax421 = var0420_0123456789();
    eax422 = var0421_0123456789();
    eax423 = var0422_0123456789();
    eax424 = var0423_0123456789();
    eax425 = var0424_0123456789();
    eax426 = var0425_0123456789();
    eax427 = var0426_0123456789();
    eax428 = var0427_0123456789();
    eax429 = var0428_0123456789();
    eax430 = var0429_0123456789();
    eax431 = var0430_0123456789();
    eax432 = var0431_0123456789();
    eax433 = var0432_0123456789();
    eax434 = var0433_0123456789();
    eax435 = var0434_0123456789();
    eax436 = var0435_0123456789();
    eax437 = var0436_0123456789();
    eax438 = var0437_0123456789();
    eax439 = var0438_0123456789();
    eax440 = var0439_0123456789();
    eax441 = var0440_0123456789();
    eax442 = var0441_0123456789();
    eax443 = var0442_0123456789();
    eax444 = var0443_0123456789();
    eax445 = var0444_0123456789();
    eax446 = var0445_0123456789();
    eax447 = var0446_0123456789();
    eax448 = var0447_0123456789();
    eax449 = var0448_0123456789();
    eax450 = var0449_0123456789();
    eax451 = var0450_0123456789();
    eax452 = var0451_0123456789();
    eax453 = var0452_0123456789();
    eax454 = var0453_0123456789();
    eax455 = var0454_0123456789();
    eax456 = var0455_0123456789();
    eax457 = var0456_0123456789();
    eax458 = var0457_0123456789();
    eax459 = var0458_0123456789();
    eax460 = var0459_0123456789();
    eax461 = var0460_0123456789();
    eax462 = var0461_0123456789();
    eax463 = var0462_0123456789();
    eax464 = var0463_0123456789();
    eax465 = var0464_0123456789();
    eax466 = var0465_0123456789();
    eax467 = var0466_0123456789();
    eax468 = var0467_0123456789();
    eax469 = var0468_0123456789();
    eax470 = var0469_0123456789();
    eax471 = var0470_0123456789();
    eax472 = var0471_0123456789();
    eax473 = var0472_0123456789();
    eax474 = var0473_0123456789();
    eax475 = var0474_0123456789();
    eax476 = var0475_0123456789();
    eax477 = var0476_0123456789();
    eax478 = var0477_0123456789();
    eax479 = var0478_0123456789();
    eax480 = var0479_0123456789();
    eax481 = var0480_0123456789();
    eax482 = var0481_0123456789();
    eax483 = var0482_9876543210();
    eax484 = var0483_9876543210();
    eax485 = var0484_9876543210();
    eax486 = var0485_9876543210();
    eax487 = var0486_9876543210();
    eax488 = var0487_9876543210();
    eax489 = var0488_9876543210();
    eax490 = var0489_9876543210();
    eax491 = var0490_9876543210();
    eax492 = var0491_9876543210();
    eax493 = var0492_9876543210();
    eax494 = var0493_9876543210();
    eax495 = var0494_9876543210();
    eax496 = var0495_9876543210();
    eax497 = var0496_9876543210();
    eax498 = var0497_9876543210();
    eax499 = var0498_9876543210();
    eax500 = var0499_9876543210();
    eax501 = var0500_9876543210();
    eax502 = var0501_9876543210();
    eax503 = var0502_9876543210();
    eax504 = var0503_9876543210();
    eax505 = var0504_9876543210();
    eax506 = var0505_9876543210();
    eax507 = var0506_9876543210();
    eax508 = var0507_9876543210();
    eax509 = var0508_9876543210();
    eax510 = var0509_9876543210();
    eax511 = var0510_9876543210();
    eax512 = var0511_9876543210();
    eax513 = var0512_9876543210();
    eax514 = var0513_9876543210();
    eax515 = var0514_9876543210();
    eax516 = var0515_9876543210();
    eax517 = var0516_9876543210();
    eax518 = var0517_9876543210();
    eax519 = var0518_9876543210();
    eax520 = var0519_9876543210();
    eax521 = var0520_9876543210();
    eax522 = var0521_9876543210();
    eax523 = var0522_9876543210();
    eax524 = var0523_9876543210();
    eax525 = var0524_9876543210();
    eax526 = var0525_9876543210();
    eax527 = var0526_9876543210();
    eax528 = var0527_9876543210();
    eax529 = var0528_9876543210();
    eax530 = var0529_9876543210();
    eax531 = var0530_0123456789();
    eax532 = var0531_0123456789();
    eax533 = var0532_0123456789();
    eax534 = var0533_0123456789();
    eax535 = var0534_0123456789();
    eax536 = var0535_0123456789();
    eax537 = var0536_0123456789();
    eax538 = var0537_0123456789();
    eax539 = var0538_0123456789();
    eax540 = var0539_0123456789();
    eax541 = var0540_0123456789();
    eax542 = var0541_0123456789();
    eax543 = var0542_0123456789();
    eax544 = var0543_0123456789();
    eax545 = var0544_0123456789();
    eax546 = var0545_0123456789();
    eax547 = var0546_0123456789();
    eax548 = var0547_0123456789();
    eax549 = var0548_0123456789();
    eax550 = var0549_0123456789();
    eax551 = var0550_0123456789();
    eax552 = var0551_0123456789();
    eax553 = var0552_0123456789();
    eax554 = var0553_0123456789();
    eax555 = var0554_0123456789();
    eax556 = var0555_0123456789();
    eax557 = var0556_0123456789();
    eax558 = var0557_0123456789();
    eax559 = var0558_0123456789();
    eax560 = var0559_0123456789();
    eax561 = var0560_0123456789();
    eax562 = var0561_0123456789();
    eax563 = var0562_0();
    eax564 = var0563_0();
    eax565 = var0564_0();
    eax566 = var0565_0();
    eax567 = var0566_0();
    eax568 = var0567_0();
    eax569 = var0568_0();
    eax570 = var0569_0();
    eax571 = var0570_0();
    eax572 = var0571_0();
    eax573 = var0572_0();
    eax574 = var0573_0();
    eax575 = var0574_0();
    eax576 = var0575_0();
    eax577 = var0576_0();
    eax578 = var0577_0();
    eax579 = var0578_0();
    eax580 = var0579_0();
    eax581 = var0580_0();
    eax582 = var0581_0();
    eax583 = var0582_0();
    eax584 = var0583_0();
    eax585 = var0584_0();
    eax586 = var0585_0();
    eax587 = var0586_0();
    eax588 = var0587_0();
    eax589 = var0588_0();
    eax590 = var0589_0();
    eax591 = var0590_0();
    eax592 = var0591_0();
    eax593 = var0592_0();
    eax594 = var0593_0();
    eax595 = var0594_0();
    eax596 = var0595_0();
    eax597 = var0596_0();
    eax598 = var0597_0();
    eax599 = var0598_0();
    eax600 = var0599_0();
    eax601 = var0600_0();
    eax602 = var0601_0();
    eax603 = var0602_0();
    eax604 = var0603_0();
    eax605 = var0604_0();
    eax606 = var0605_0();
    eax607 = var0606_0();
    eax608 = var0607_0();
    eax609 = var0608_0();
    eax610 = var0609_0();
    eax611 = var0610_0();
    eax612 = var0611_0();
    eax613 = var0612_0();
    eax614 = var0613_0();
    eax615 = var0614_0();
    eax616 = var0615_0();
    eax617 = var0616_0();
    eax618 = var0617_0();
    eax619 = var0618_0();
    eax620 = var0619_0();
    eax621 = var0620_0();
    eax622 = var0621_0();
    eax623 = var0622_0();
    eax624 = var0623_0();
    eax625 = var0624_9();
    eax626 = var0625_9();
    eax627 = var0626_9();
    eax628 = var0627_9();
    eax629 = var0628_9();
    eax630 = var0629_9();
    eax631 = var0630_9();
    eax632 = var0631_9();
    eax633 = var0632_9();
    eax634 = var0633_9();
    eax635 = var0634_9();
    eax636 = var0635_9();
    eax637 = var0636_9();
    eax638 = var0637_9();
    eax639 = var0638_9();
    eax640 = var0639_9();
    eax641 = var0640_9();
    eax642 = var0641_9();
    eax643 = var0642_9();
    eax644 = var0643_9();
    eax645 = var0644_9();
    eax646 = var0645_9();
    eax647 = var0646_9();
    eax648 = var0647_9();
    eax649 = var0648_9();
    eax650 = var0649_9();
    eax651 = var0650_9();
    eax652 = var0651_9();
    eax653 = var0652_9();
    eax654 = var0653_9();
    eax655 = var0654_9();
    eax656 = var0655_9();
    eax657 = var0656_9();
    eax658 = var0657_9();
    eax659 = var0658_9();
    eax660 = var0659_9();
    eax661 = var0660_9();
    eax662 = var0661_9();
    eax663 = var0662_9();
    eax664 = var0663_9();
    eax665 = var0664_9();
    eax666 = var0665_9();
    eax667 = var0666_9();
    eax668 = var0667_9();
    eax669 = var0668_9();
    eax670 = var0669_9();
    eax671 = var0670_9();
    eax672 = var0671_9();
    eax673 = var0672_0();
    eax674 = var0673_0();
    eax675 = var0674_0();
    eax676 = var0675_0();
    eax677 = var0676_0();
    eax678 = var0677_0();
    eax679 = var0678_0();
    eax680 = var0679_0();
    eax681 = var0680_0();
    eax682 = var0681_0();
    eax683 = var0682_0();
    eax684 = var0683_0();
    eax685 = var0684_0();
    eax686 = var0685_0();
    eax687 = var0686_0();
    eax688 = var0687_0();
    eax689 = var0688_0();
    eax690 = var0689_0();
    eax691 = var0690_0();
    eax692 = var0691_0();
    eax693 = var0692_0();
    eax694 = var0693_0();
    eax695 = var0694_0();
    eax696 = var0695_0();
    eax697 = var0696_0();
    eax698 = var0697_0();
    eax699 = var0698_0();
    eax700 = var0699_0();
    eax701 = var0700_0();
    eax702 = var0701_0();
    eax703 = var0702_0();
    eax704 = var0703_0();
    eax705 = var0704_empty();
    eax706 = var0705_empty();
    eax707 = var0706_empty();
    eax708 = var0707_empty();
    eax709 = var0708_empty();
    eax710 = var0709_empty();
    eax711 = var0710_empty();
    eax712 = var0711_empty();
    eax713 = var0712_empty();
    eax714 = var0713_empty();
    eax715 = var0714_empty();
    eax716 = var0715_empty();
    eax717 = var0716_empty();
    eax718 = var0717_empty();
    eax719 = var0718_empty();
    eax720 = var0719_empty();
    eax721 = var0720_empty();
    eax722 = var0721_empty();
    eax723 = var0722_empty();
    eax724 = var0723_empty();
    eax725 = var0724_empty();
    eax726 = var0725_empty();
    eax727 = var0726_empty();
    eax728 = var0727_empty();
    eax729 = var0728_empty();
    eax730 = var0729_empty();
    eax731 = var0730_empty();
    eax732 = var0731_empty();
    eax733 = var0732_empty();
    eax734 = var0733_empty();
    eax735 = var0734_empty();
    eax736 = var0735_empty();
    eax737 = var0736_empty();
    eax738 = var0737_empty();
    eax739 = var0738_empty();
    eax740 = var0739_empty();
    eax741 = var0740_empty();
    eax742 = var0741_empty();
    eax743 = var0742_empty();
    eax744 = var0743_empty();
    eax745 = var0744_empty();
    eax746 = var0745_empty();
    eax747 = var0746_empty();
    eax748 = var0747_empty();
    eax749 = var0748_empty();
    eax750 = var0749_empty();
    eax751 = var0750_empty();
    eax752 = var0751_empty();
    eax753 = var0752_empty();
    eax754 = var0753_empty();
    eax755 = var0754_empty();
    eax756 = var0755_empty();
    eax757 = var0756_empty();
    eax758 = var0757_empty();
    eax759 = var0758_empty();
    eax760 = var0759_empty();
    eax761 = var0760_empty();
    eax762 = var0761_empty();
    eax763 = var0762_empty();
    eax764 = var0763_empty();
    eax765 = var0764_empty();
    eax766 = var0765_empty();
    eax767 = var0766_empty();
    eax768 = var0767_empty();
    eax769 = var0768_empty();
    return eax1 + eax2 + eax3 + eax4 + eax5 + eax6 + eax7 + eax8 + eax9 + eax10 + eax11 + eax12 + eax13 + eax14 + eax15 + eax16 + eax17 + eax18 + eax19 + eax20 + eax21 + eax22 + eax23 + eax24 + eax25 + eax26 + eax27 + eax28 + eax29 + eax30 + eax31 + eax32 + eax33 + eax34 + eax35 + eax36 + eax37 + eax38 + eax39 + eax40 + eax41 + eax42 + eax43 + eax44 + eax45 + eax46 + eax47 + eax48 + eax49 + eax50 + eax51 + eax52 + eax53 + eax54 + eax55 + eax56 + eax57 + eax58 + eax59 + eax60 + eax61 + eax62 + eax63 + eax64 + eax65 + eax66 + eax67 + eax68 + eax69 + eax70 + eax71 + eax72 + eax73 + eax74 + eax75 + eax76 + eax77 + eax78 + eax79 + eax80 + eax81 + eax82 + eax83 + eax84 + eax85 + eax86 + eax87 + eax88 + eax89 + eax90 + eax91 + eax92 + eax93 + eax94 + eax95 + eax96 + eax97 + eax98 + eax99 + eax100 + eax101 + eax102 + eax103 + eax104 + eax105 + eax106 + eax107 + eax108 + eax109 + eax110 + eax111 + eax112 + eax113 + eax114 + eax115 + eax116 + eax117 + eax118 + eax119 + eax120 + eax121 + eax122 + eax123 + eax124 + eax125 + eax126 + eax127 + eax128 + eax129 + eax130 + eax131 + eax132 + eax133 + eax134 + eax135 + eax136 + eax137 + eax138 + eax139 + eax140 + eax141 + eax142 + eax143 + eax144 + eax145 + eax146 + eax147 + eax148 + eax149 + eax150 + eax151 + eax152 + eax153 + eax154 + eax155 + eax156 + eax157 + eax158 + eax159 + eax160 + eax161 + eax162 + eax163 + eax164 + eax165 + eax166 + eax167 + eax168 + eax169 + eax170 + eax171 + eax172 + eax173 + eax174 + eax175 + eax176 + eax177 + eax178 + eax179 + eax180 + eax181 + eax182 + eax183 + eax184 + eax185 + eax186 + eax187 + eax188 + eax189 + eax190 + eax191 + eax192 + eax193 + eax194 + eax195 + eax196 + eax197 + eax198 + eax199 + eax200 + eax201 + eax202 + eax203 + eax204 + eax205 + eax206 + eax207 + eax208 + eax209 + eax210 + eax211 + eax212 + eax213 + eax214 + eax215 + eax216 + eax217 + eax218 + eax219 + eax220 + eax221 + eax222 + eax223 + eax224 + eax225 + eax226 + eax227 + eax228 + eax229 + eax230 + eax231 + eax232 + eax233 + eax234 + eax235 + eax236 + eax237 + eax238 + eax239 + eax240 + eax241 + eax242 + eax243 + eax244 + eax245 + eax246 + eax247 + eax248 + eax249 + eax250 + eax251 + eax252 + eax253 + eax254 + eax255 + eax256 + eax257 + eax258 + eax259 + eax260 + eax261 + eax262 + eax263 + eax264 + eax265 + eax266 + eax267 + eax268 + eax269 + eax270 + eax271 + eax272 + eax273 + eax274 + eax275 + eax276 + eax277 + eax278 + eax279 + eax280 + eax281 + eax282 + eax283 + eax284 + eax285 + eax286 + eax287 + eax288 + eax289 + eax290 + eax291 + eax292 + eax293 + eax294 + eax295 + eax296 + eax297 + eax298 + eax299 + eax300 + eax301 + eax302 + eax303 + eax304 + eax305 + eax306 + eax307 + eax308 + eax309 + eax310 + eax311 + eax312 + eax313 + eax314 + eax315 + eax316 + eax317 + eax318 + eax319 + eax320 + eax321 + eax322 + eax323 + eax324 + eax325 + eax326 + eax327 + eax328 + eax329 + eax330 + eax331 + eax332 + eax333 + eax334 + eax335 + eax336 + eax337 + eax338 + eax339 + eax340 + eax341 + eax342 + eax343 + eax344 + eax345 + eax346 + eax347 + eax348 + eax349 + eax350 + eax351 + eax352 + eax353 + eax354 + eax355 + eax356 + eax357 + eax358 + eax359 + eax360 + eax361 + eax362 + eax363 + eax364 + eax365 + eax366 + eax367 + eax368 + eax369 + eax370 + eax371 + eax372 + eax373 + eax374 + eax375 + eax376 + eax377 + eax378 + eax379 + eax380 + eax381 + eax382 + eax383 + eax384 + eax385 + eax386 + eax387 + eax388 + eax389 + eax390 + eax391 + eax392 + eax393 + eax394 + eax395 + eax396 + eax397 + eax398 + eax399 + eax400 + eax401 + eax402 + eax403 + eax404 + eax405 + eax406 + eax407 + eax408 + eax409 + eax410 + eax411 + eax412 + eax413 + eax414 + eax415 + eax416 + eax417 + eax418 + eax419 + eax420 + eax421 + eax422 + eax423 + eax424 + eax425 + eax426 + eax427 + eax428 + eax429 + eax430 + eax431 + eax432 + eax433 + eax434 + eax435 + eax436 + eax437 + eax438 + eax439 + eax440 + eax441 + eax442 + eax443 + eax444 + eax445 + eax446 + eax447 + eax448 + eax449 + eax450 + eax451 + eax452 + eax453 + eax454 + eax455 + eax456 + eax457 + eax458 + eax459 + eax460 + eax461 + eax462 + eax463 + eax464 + eax465 + eax466 + eax467 + eax468 + eax469 + eax470 + eax471 + eax472 + eax473 + eax474 + eax475 + eax476 + eax477 + eax478 + eax479 + eax480 + eax481 + eax482 + eax483 + eax484 + eax485 + eax486 + eax487 + eax488 + eax489 + eax490 + eax491 + eax492 + eax493 + eax494 + eax495 + eax496 + eax497 + eax498 + eax499 + eax500 + eax501 + eax502 + eax503 + eax504 + eax505 + eax506 + eax507 + eax508 + eax509 + eax510 + eax511 + eax512 + eax513 + eax514 + eax515 + eax516 + eax517 + eax518 + eax519 + eax520 + eax521 + eax522 + eax523 + eax524 + eax525 + eax526 + eax527 + eax528 + eax529 + eax530 + eax531 + eax532 + eax533 + eax534 + eax535 + eax536 + eax537 + eax538 + eax539 + eax540 + eax541 + eax542 + eax543 + eax544 + eax545 + eax546 + eax547 + eax548 + eax549 + eax550 + eax551 + eax552 + eax553 + eax554 + eax555 + eax556 + eax557 + eax558 + eax559 + eax560 + eax561 + eax562 + eax563 + eax564 + eax565 + eax566 + eax567 + eax568 + eax569 + eax570 + eax571 + eax572 + eax573 + eax574 + eax575 + eax576 + eax577 + eax578 + eax579 + eax580 + eax581 + eax582 + eax583 + eax584 + eax585 + eax586 + eax587 + eax588 + eax589 + eax590 + eax591 + eax592 + eax593 + eax594 + eax595 + eax596 + eax597 + eax598 + eax599 + eax600 + eax601 + eax602 + eax603 + eax604 + eax605 + eax606 + eax607 + eax608 + eax609 + eax610 + eax611 + eax612 + eax613 + eax614 + eax615 + eax616 + eax617 + eax618 + eax619 + eax620 + eax621 + eax622 + eax623 + eax624 + eax625 + eax626 + eax627 + eax628 + eax629 + eax630 + eax631 + eax632 + eax633 + eax634 + eax635 + eax636 + eax637 + eax638 + eax639 + eax640 + eax641 + eax642 + eax643 + eax644 + eax645 + eax646 + eax647 + eax648 + eax649 + eax650 + eax651 + eax652 + eax653 + eax654 + eax655 + eax656 + eax657 + eax658 + eax659 + eax660 + eax661 + eax662 + eax663 + eax664 + eax665 + eax666 + eax667 + eax668 + eax669 + eax670 + eax671 + eax672 + eax673 + eax674 + eax675 + eax676 + eax677 + eax678 + eax679 + eax680 + eax681 + eax682 + eax683 + eax684 + eax685 + eax686 + eax687 + eax688 + eax689 + eax690 + eax691 + eax692 + eax693 + eax694 + eax695 + eax696 + eax697 + eax698 + eax699 + eax700 + eax701 + eax702 + eax703 + eax704 + eax705 + eax706 + eax707 + eax708 + eax709 + eax710 + eax711 + eax712 + eax713 + eax714 + eax715 + eax716 + eax717 + eax718 + eax719 + eax720 + eax721 + eax722 + eax723 + eax724 + eax725 + eax726 + eax727 + eax728 + eax729 + eax730 + eax731 + eax732 + eax733 + eax734 + eax735 + eax736 + eax737 + eax738 + eax739 + eax740 + eax741 + eax742 + eax743 + eax744 + eax745 + eax746 + eax747 + eax748 + eax749 + eax750 + eax751 + eax752 + eax753 + eax754 + eax755 + eax756 + eax757 + eax758 + eax759 + eax760 + eax761 + eax762 + eax763 + eax764 + eax765 + eax766 + eax767 + eax768 + eax769;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x20ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main(int32_t a1, signed char** a2);

void fun_80490a2() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_80490d7(edx5, v4, eax6);
    ebx7 = ebx8 + 0x20f4c;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x13170, ebx7 - 0x13110, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490e2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

/* completed.6843 */
signed char completed_6843 = 0;

void fun_8049182() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = completed_6843 == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        completed_6843 = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_80491b2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        fputs(0x806a020, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_8056e92() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x13163;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x8056eaf);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8056ef2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_8056efa() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049127() {
}

void fun_8049174() {
}

void fun_80491a1() {
}

void fun_8056eed() {
}

int32_t g806a008 = 0;

void fun_8049056() {
    goto g806a008;
}

void fun_8049131() {
}

void fun_8049179() {
}

void fun_80491a9() {
}

void fun_8049046() {
    goto 0x8049030;
}

void fun_8049066() {
    goto 0x8049030;
}

void fun_8049076() {
    goto 0x8049030;
}

int32_t main(int32_t a1, signed char** a2) {
    int32_t ebx3;
    int32_t eax4;

    ebx3 = **a2 + a1;
    eax4 = call_all();
    return eax4 + ebx3;
}
