
int log_size_7_var_000() {
    int i;
    for(i = 31; !(25178773 >>> i); --i) {
    }
    return i - 24;
}

int log_size_7_var_001() {
    int i;
    for(i = 31; !(-65429 >>> i); --i) {
    }
    unsigned int v0 = 2109456704 % (unsigned int)(i | 0xc0000000);
    if(v0 != 0) {
        unsigned int j;
        for(j = 0; !((v0 >>> j) & 1); ++j) {
        }
        v0 = j;
    }
    int v1 = (unsigned int)(unsigned char)__rol__((unsigned short)0 | ((unsigned short)(((2109456704 / (unsigned int)(i | 0xc0000000)) >>> 8) & 1) << 8), 1) | ((unsigned int)0xffff00 << 8);
    int v2 = 0 - (((unsigned int)(unsigned char)v1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x5a28e0bd);
    int v3 = ((unsigned int)(unsigned char)((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) | ((unsigned int)(((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) >= 0x2fff1800 || ((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) == 0x2fff17ff ? 0: 1) << 8) | ((unsigned int)(unsigned short)(unsigned int)(((unsigned int)((v1 >>> 8) & 0xffffff) >>> 8) & 0xFFFF) << 16)) * 2;
    int v4 = (((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) - 0x2fff17ff) | (unsigned int)((__parity__(64 / (unsigned char)(i | 0xc0000000) + 128) ? (unsigned char)(i | 0xc0000000): 0) + 31) | ((unsigned int)(49472 / (unsigned short)(i | 0xc0000000) < 0x355a ? 0: 1) << 8) | ((unsigned int)(unsigned short)((i | 0xc0000000) >>> 16) << 16);
    return 2109456704 / (unsigned int)(i | 0xc0000000) + 0x2210c080 - ((unsigned int)((unsigned short)v2 - 0x3f7f) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16)) + ((((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) - 0x2fff17ff) | (unsigned int)((unsigned short)v3 + 0xc080) | ((unsigned int)0x2210 << 16)) + (((unsigned int)((unsigned short)v2 - 0x3f7f) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16)) + ((unsigned int)((unsigned short)(unsigned char)(v4 >>> 8) * (unsigned short)(unsigned char)((unsigned int)0 | ((unsigned int)(2109456704 / (unsigned int)((i | 0xc0000000) & 0x7fffffff)) << 1))) | ((unsigned int)(unsigned short)(unsigned int)(((2109456704 / (unsigned int)((i | 0xc0000000) & 0x7fffffff)) >>> 15) & 0xFFFF) << 16))) + (((unsigned int)(unsigned short)__rol__((unsigned int)((unsigned short)((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) - 0x17ff), ((unsigned int)(unsigned char)(v3 >>> 24) | ((unsigned int)(unsigned char)(v3 >>> 16) << 8) | ((unsigned int)0 << 16) | ((unsigned int)(unsigned char)v3 << 24)) & 0x1f) | ((unsigned int)(unsigned short)((((unsigned int)(unsigned char)v0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8)) - 0x2fff17ff) >>> 16) << 16)) + ((unsigned int)(unsigned char)(v3 >>> 24) | ((unsigned int)(unsigned char)(v3 >>> 16) << 8) | ((unsigned int)0 << 16) | ((unsigned int)(unsigned char)v3 << 24)) + v4) + 1106154195;
}

int log_size_7_var_002() {
    return 0;
}

int log_size_7_var_003() {
    int i;
    for(i = 0; !((-942341938 >>> i) & 1); ++i) {
    }
    int v0 = i + 181168203;
    int v1 = (unsigned int)8 | ((unsigned int)(__parity__((unsigned char)v0) ? 0: 1) << 8) | ((unsigned int)0 << 16);
    int v2 = (unsigned int)__ror__((unsigned long long)((unsigned char)v1 + 32 < 0 ? 0x1654: 34097) | ((unsigned long long)1865 << 16) | ((unsigned long long)(((unsigned int)((unsigned short)v0 >> 13) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) >= 2620422523) << 32), 14);
    int v3 = ((unsigned int)6 | ((unsigned int)(((unsigned char)v1 + 32) | 0xcd) << 8) | ((unsigned int)0xd2d9 << 16)) * 2 - 0x53bedde5;
    long long v4 = (unsigned long long)__rol__((unsigned long long)((unsigned short)v1 * (__parity__((unsigned char)((unsigned short)v2 ^ 0x86d8)) ? 1: 0)) | ((unsigned long long)(unsigned short)(v1 >>> 16) << 16) | ((unsigned long long)0 << 32), 1);
    int v5 = (unsigned int)(unsigned char)v3 | ((unsigned int)((unsigned char)(v3 >>> 8) >>> 4) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
    int v6 = ((unsigned int)((v4 >>> 32L) & 0x1L ? (unsigned short)(((unsigned int)(unsigned short)v1 * (__parity__((unsigned char)((unsigned short)v2 ^ 0x86d8)) ? 1: 0)) >>> 16): (unsigned short)v4) | ((unsigned int)32315 << 16)) * 2;
    int v7 = (((unsigned int)((unsigned short)v0 >> 13) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + 1674544773) & 0x2c85416c;
    int v8 = (unsigned int)(__ror__(137, (__parity__((unsigned char)((unsigned short)v2 ^ 0x86d8)) ? 0xffe90001: 0xffe90000) & 0x1f) + 0xFFFF) | ((unsigned int)0x7078 << 16);
    v7 = (unsigned int)__ror__((unsigned short)v7, ((unsigned int)(unsigned char)(((__parity__((unsigned char)((unsigned short)v2 ^ 0x86d8)) ? 1: 0) & 0xefff) | 0x1000) | ((unsigned int)(__parity__((unsigned char)v8 - 182) ? 0: 1) << 8) | ((unsigned int)0xffe9 << 16)) & 0x1f) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    unsigned int v9 = (unsigned int)((unsigned short)v5 | (unsigned short)(unsigned char)v6 | ((unsigned short)__rol__((unsigned char)(v6 >>> 8), 1) << 8)) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
    int v10 = ((unsigned int)(((unsigned short)v2 ^ 0x86d8) - 0x74f4) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16)) + ((unsigned int)(unsigned char)((((unsigned short)v4 + 0xFFFF) >>> 1) & 0x7F) | ((unsigned int)(unsigned char)__rol__((unsigned short)((((unsigned short)v4 + 0xFFFF) >>> 8) & 0x1ff), 1) << 7) | ((unsigned int)(unsigned short)((unsigned int)v4 >>> 16) << 15) | ((unsigned int)0 << 31)) + 1;
    unsigned int v11 = (unsigned int)__ror__((unsigned char)((unsigned int)(unsigned char)(((__parity__((unsigned char)((unsigned short)v2 ^ 0x86d8)) ? 1: 0) & 0xefff) | 0x1000) | ((unsigned int)(__parity__((unsigned char)v8 - 182) ? 0: 1) << 8) | ((unsigned int)0xffe9 << 16)), 1) | ((unsigned int)((__parity__((unsigned char)v8 - 182) ? 0xffe900: 0xffe901) & 0xffffff) << 8);
    v11 = (unsigned int)((unsigned short)v11 + 30171) | ((unsigned int)(unsigned short)(v11 >>> 16) << 16);
    char v12 = (v10 >>> (v11 % 32)) & 1;
    int v13 = (~(1 << (v11 % 32)) & v10) | ((unsigned int)~v12 << (v11 % 32));
    int v14 = (unsigned int)((unsigned char)((unsigned short)(unsigned char)((((unsigned short)v4 + 0xFFFF) >>> 1) & 0x7F) | ((unsigned short)(unsigned char)__rol__((unsigned short)((((unsigned short)v4 + 0xFFFF) >>> 8) & 0x1ff), 1) << 7)) - ((unsigned char)v12 + 105)) | ((unsigned int)(((unsigned int)(((unsigned char)__rol__((unsigned short)((((unsigned short)v4 + 0xFFFF) >>> 8) & 0x1ff), 1) >>> 1) & 0x7F) | ((unsigned int)(unsigned short)((unsigned int)v4 >>> 16) << 7) | ((unsigned int)0 << 23)) & 0xffffff) << 8);
    int v15 = v5 << (v11 & 0x1f);
    v11 = (unsigned int)__rol__((unsigned char)v11, 25) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
    char v16 = (unsigned char)v11;
    v11 = (unsigned int)(unsigned char)v9 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
    v9 = (unsigned int)v16 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
    v14 = (unsigned int)((unsigned short)v14 * 0x4000) | ((unsigned int)(unsigned short)(v14 >>> 16) << 16);
    v8 = (unsigned int)((unsigned short)v14 * 0xaba1) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
    v11 = (unsigned int)((int)(unsigned short)v14 * 0xffffaba1 == (int)(unsigned short)v8 ? (unsigned short)v11: (unsigned short)v13) | ((unsigned int)(unsigned short)(v11 >>> 16) << 16);
    int v17 = (~(1 << (v9 % 32)) & v15) | (1 << (v9 % 32));
    v14 = (unsigned int)((short)(unsigned char)v14 * ((unsigned short)(unsigned char)((0 - (unsigned short)v17) >>> 8) | ((unsigned short)((unsigned short)v17 > 0 ? 0xFF: 0) << 8))) | ((unsigned int)(unsigned short)(v14 >>> 16) << 16);
    int v18 = ((unsigned int)(0 - (unsigned short)v9) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16)) ^ v13;
    int v19 = v18 ? (unsigned int)((unsigned short)v11 >>> (v11 & 0x1f)) | ((unsigned int)(unsigned short)(v11 >>> 16) << 16): v13;
    int v20 = (unsigned int)((unsigned long long)(((unsigned char)v14 >>> 1) & 0x7F) | ((unsigned long long)((unsigned char)(v14 >>> 8) << (v19 & 0x1f)) << 7) | ((unsigned long long)(unsigned short)(v14 >>> 16) << 15) | ((unsigned long long)(unsigned char)v14 << 31) | ((unsigned long long)0 << 39));
    int v21 = (unsigned int)(v14 & 1 ? 0: 1) | ((unsigned int)(((unsigned int)(((unsigned int)(((0 - (unsigned short)v17) >>> 8) & 0xFF) | ((unsigned int)(unsigned short)(v17 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xFFFFFFF) >>> 4) & 0xffffff) << 8);
    int v22 = (unsigned int)__rol__((unsigned short)(unsigned char)((unsigned int)(v20 < 0 ? 0: 1) | ((unsigned int)(unsigned short)(v19 >>> 16) << 8) | ((unsigned int)0 << 24)) | ((unsigned short)(v14 & 1) << 8), 1);
    int v23 = (unsigned int)(unsigned char)((unsigned int)((unsigned char)v19 + 0xFF) | ((unsigned int)(v20 < 0 ? 0: 1) << 8) | ((unsigned int)(unsigned short)(v19 >>> 16) << 16)) | ((unsigned int)(unsigned char)v22 << 8) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v19 >>> 16) << 16);
    int v24 = (v22 >>> 8) & 1 ? v7: v20;
    int v25 = (v14 & 1 ? v13: v8) & 0x74f38578;
    int v26 = (unsigned int)(((unsigned short)v25 & ((unsigned short)__rol__((unsigned char)v18, 1) | ((unsigned short)__rol__((unsigned char)(v18 >>> 8) + (unsigned char)v19, 2) << 8))) + (unsigned short)v21) | ((unsigned int)(unsigned short)(v18 >>> 16) << 16);
    if(v23 != 0) {
        int j;
        for(j = 0; !((v23 >>> j) & 1); ++j) {
        }
        v26 = j;
    }
    int v27 = v25 + 969181076;
    int v28 = v8 * 2;
    return 0xd0d92a4a - (v27 + 1) + (unsigned int)__rol__((unsigned long long)v21 | ((unsigned long long)__carry__(v8, v8) << 32), 22) + (((unsigned int)((unsigned short)v28 * 44559) | ((unsigned int)(unsigned short)(v28 >>> 16) << 16)) + v27) + (v26 + v24 - 0x2f26d5b6) + 0x7d1cba6a;
}

int log_size_7_var_004() {
    return 0;
}

int log_size_7_var_005() {
    for(int i = 0; !((0xffff94ba >>> i) & 1); ++i) {
    }
    return 0x10290;
}

int log_size_7_var_006() {
    int i;
    for(i = 0; !((1706655864 >>> i) & 1); ++i) {
    }
    int v0 = (unsigned int)((unsigned short)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) | ((unsigned int)(unsigned short)((__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1)) >>> 16) << 16);
    int v1 = (unsigned int)(unsigned char)(((unsigned int)(unsigned short)v0 * 32888) >>> 16) | ((unsigned int)((unsigned short)(((unsigned int)(unsigned short)v0 * 32888) >>> 16) ? 0: 1) << 8) | ((unsigned int)31701 << 16);
    char v2 = (unsigned short)((unsigned int)((unsigned short)v1 + 120) | ((unsigned int)32854 << 16)) ? 0: 1;
    char v3 = (unsigned short)v1 >= 65416;
    int v4 = (unsigned int)((unsigned short)v1 >= 65416 || ((unsigned short)((unsigned int)((unsigned short)v1 + 120) | ((unsigned int)32854 << 16)) ? 0: 1) ? 1080: (unsigned short)((unsigned int)((unsigned short)v1 + 120) | ((unsigned int)32854 << 16))) | ((unsigned int)32854 << 16);
    int v5 = (unsigned int)((unsigned long long)((v4 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2));
    int v6 = ((unsigned int)((unsigned short)(((unsigned int)((unsigned short)v1 >= 65416 || ((unsigned short)((unsigned int)((unsigned short)v1 + 120) | ((unsigned int)32854 << 16)) ? 0: 1) ? (unsigned short)v1: 32888) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) < 0) + 0x900) | ((unsigned int)0x686b << 16)) >>> ((unsigned int)((unsigned long long)((v4 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) & 0x1f);
    int v7 = (unsigned int)((unsigned short)((unsigned int)((unsigned long long)((v4 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) << ((unsigned int)((unsigned long long)((v4 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) & 0x1f)) | 0xc000) | ((unsigned int)(unsigned short)(((unsigned int)((unsigned long long)((v4 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) << ((unsigned int)((unsigned long long)((v4 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) & 0x1f)) >>> 16) << 16);
    int v8 = (unsigned int)((unsigned short)((unsigned int)30015 | ((unsigned int)(unsigned short)((unsigned int)((unsigned short)((unsigned int)((unsigned short)v1 >= 65416 || ((unsigned short)((unsigned int)((unsigned short)v1 + 120) | ((unsigned int)32854 << 16)) ? 0: 1) ? (unsigned short)v1: 32888) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) & 0x3fff) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v1 >>> 16) << 16)) << 16)) / (unsigned short)v7) | ((unsigned int)7226 << 16);
    v1 = (unsigned int)((unsigned short)((unsigned int)30015 | ((unsigned int)(unsigned short)((unsigned int)((unsigned short)((unsigned int)((unsigned short)v1 >= 65416 || ((unsigned short)((unsigned int)((unsigned short)v1 + 120) | ((unsigned int)32854 << 16)) ? 0: 1) ? (unsigned short)v1: 32888) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) & 0x3fff) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v1 >>> 16) << 16)) << 16)) % (unsigned short)v7) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(unsigned int)(unsigned short)(v1 >>> 16) << 16);
    int v9 = (unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28));
    int v10 = (unsigned int)(unsigned char)v7 | ((unsigned int)__rol__((unsigned char)(v7 >>> 8), v7 & 0x1f) << 8) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    if(v8 != 0) {
        int j;
        for(j = 0; !((v8 >>> j) & 1); ++j) {
        }
        v1 = j;
    }
    v8 = (unsigned int)((short)(unsigned char)v8 * ((unsigned short)(unsigned char)(v8 >>> 8) | ((unsigned short)((v8 >>> 15) & 1 ? 0xFF: 0) << 8))) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
    v8 = (unsigned int)((unsigned char)v8 | 0xc0) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
    v10 = (unsigned int)__ror__((unsigned short)v10, 1) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    v10 = (unsigned int)((unsigned char)v10 + 16) | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
    int v11 = ((unsigned int)((unsigned char)((unsigned short)v8 & 0x3fff) / (unsigned char)v8) | ((unsigned int)((unsigned char)((unsigned short)v8 & 0x3fff) % (unsigned char)v8) << 8) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16)) & ((unsigned int)(unsigned short)((unsigned int)(((unsigned short)v1 >>> 15) & 1) | ((unsigned int)32889 << 1)) | ((unsigned int)26041 << 16));
    return ((unsigned int)((unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v1 >>> 10) & 1) + (unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28))) + ((((unsigned int)((unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v1 >>> 10) & 1) + (unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)))) | ((unsigned int)0x8989 << 16)) & 0x6883be94 ? 0: 1) || (((unsigned int)((unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v1 >>> 10) & 1) + (unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)))) | ((unsigned int)0x8989 << 16)) & 0x6883be94) < 0 ? (unsigned short)v10: (unsigned short)v11)) | ((unsigned int)(unsigned short)(v11 >>> 16) << 16)) + ((unsigned int)((unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v1 >>> 10) & 1) + (unsigned short)(unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)))) | ((unsigned int)0x8989 << 16)) + (((unsigned int)((unsigned short)v1 & 0xfbff) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) + ((unsigned int)(unsigned char)v6 | ((unsigned int)__ror__((unsigned char)(v6 >>> 8), 1) << 8) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16))) + (v10 + (unsigned int)((unsigned long long)((v4 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) + ((unsigned int)(unsigned short)((unsigned int)(((unsigned short)v1 >>> 15) & 1) | ((unsigned int)32889 << 1)) | ((unsigned int)26041 << 16))) - 0x228a2400;
}

int log_size_7_var_007() {
    return 0;
}

int log_size_7_var_008() {
    int i;
    for(i = 31; !(0x5af56c >>> i); --i) {
    }
    int v0 = (unsigned int)__rol__((unsigned long long)0xd011011e | ((unsigned long long)((unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) > 1688030382) << 32), 30);
    int v1 = ((unsigned int)(unsigned short)__ror__((unsigned int)(unsigned short)((unsigned long long)702482440 | ((unsigned long long)(unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) << 31) | ((unsigned long long)0 << 63)), 1) | ((unsigned int)(unsigned short)((unsigned int)((unsigned long long)702482440 | ((unsigned long long)(unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) << 31) | ((unsigned long long)0 << 63)) >>> 16) << 16)) & 0x49a95b55;
    char v2 = __carry__(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1), (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8)));
    int v3 = (unsigned int)((unsigned long long)0 | ((unsigned long long)(((unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) & 0xffffff00) - (((unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) & 0xffffff00) + 1)) << 1) | ((unsigned long long)0 << 33));
    unsigned int v4 = (unsigned int)((unsigned short)((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) >>> 1) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16);
    return (unsigned int)__ror__((unsigned long long)(((unsigned int)((unsigned short)v2 - 12502) | ((unsigned int)0xd011 << 16)) - ((unsigned int)__rol__((unsigned short)v0, 30) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16))), v4 & 0x1f) + (unsigned int)((unsigned long long)(((((unsigned short)v1 & 0x7FFF) | 0x8000) >>> 1) & 0x7FFF) | ((unsigned long long)(unsigned short)(v1 >>> 16) << 15) | ((unsigned long long)61 << 31)) + ((v2 || ((unsigned short)((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) ? 0: 1) ? (unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8): (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) & 0xffffff00) + ((unsigned int)((unsigned char)((unsigned int)0 | ((unsigned int)(((unsigned int)(unsigned char)v3 | ((unsigned int)((unsigned char)(v3 >>> 8) << (((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) & 0x1f)) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16)) & 0x1ffffff) << 7)) >> (((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) & 0x1f)) | ((unsigned int)(((unsigned int)(((unsigned char)v3 >>> 1) & 0x7F) | ((unsigned int)((unsigned char)(v3 >>> 8) << (((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) & 0x1f)) << 7) | ((unsigned int)(unsigned short)(v3 >>> 16) << 15) | ((unsigned int)0 << 31)) & 0xffffff) << 8))) + (((unsigned int)12349 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + v4 + 1085222337) + 5210045;
}

int log_size_7_var_009() {
    int v0 = 223324171;
    int i;
    for(i = 31; !(0xffff8e8e >>> i); --i) {
    }
    int v1 = i;
    if(i != 0) {
        int j;
        for(j = 31; !(i >>> j); --j) {
        }
        v0 = j;
    }
    short v2 = (unsigned short)v0;
    int v3 = (unsigned int)((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + 28096) | ((unsigned int)44909 << 16);
    v0 = (unsigned int)((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + 0x77da) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v0 >>> 16) << 16);
    int v4 = (unsigned int)((unsigned long long)((v0 >>> 31) & 1) | ((unsigned long long)998300160L << 1));
    int v5 = (((unsigned int)(0 - ((unsigned char)v3 + 0x7F)) | ((unsigned int)(((unsigned char)(((unsigned short)v3 + 0x7F) >>> 8) >>> 1) ^ 0xf3) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16)) & 0xffffbfff) | 0x4000;
    v11 = (unsigned int)(((unsigned char)((unsigned int)(unsigned short)v0 | ((unsigned int)0x8000 << 16)) + 1) ^ 0x1d) | ((unsigned int)((((unsigned int)(unsigned short)v0 | ((unsigned int)0x8000 << 16)) >>> 8) & 0xffffff) << 8);
    v11 = (unsigned int)(unsigned short)__ror__((unsigned int)(unsigned short)v11, ((unsigned int)((unsigned char)((unsigned short)v4 & 0x345f) + 14) | ((unsigned int)~(unsigned char)(((unsigned short)v4 & 0x345f) >>> 8) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16)) & 0x1f) | ((unsigned int)(unsigned short)(v11 >>> 16) << 16);
    v0 = (unsigned int)__rol__((unsigned short)v0 | (unsigned short)(0 - ((unsigned char)v3 + 0x7F)) | ((unsigned short)(((unsigned char)(((unsigned short)v3 + 0x7F) >>> 8) >>> 1) ^ 0xf3) << 8), 1) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    v5 = (unsigned int)((unsigned char)v5 - 155) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
    unsigned int v6 = (unsigned int)53737 | ((unsigned int)(unsigned short)((0x3b800000 - (unsigned int)(unsigned short)v3 * 2) >>> 16) << 16);
    int v7 = (unsigned int)((unsigned char)(v11 >>> 8) & (unsigned char)((unsigned int)((unsigned char)((unsigned short)v4 & 0x345f) + 14) | ((unsigned int)~(unsigned char)(((unsigned short)v4 & 0x345f) >>> 8) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16))) | ((unsigned int)__ror__((unsigned char)((unsigned int)~(unsigned char)(((unsigned short)v4 & 0x345f) >>> 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 8) | ((unsigned int)0 << 24)) + 112, 10) << 8) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v4 >>> 16) << 16);
    char v8 = (int)v11 < (int)v6;
    if(v11 == v6) {
        v6 = v11;
    }
    else {
        v11 = v6;
    }
    v5 = (unsigned int)(v8 ? (unsigned short)v5: (unsigned short)v11) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
    char v9 = (unsigned char)v11 < (unsigned char)v7;
    if((unsigned char)v11 == (unsigned char)v7) {
        v7 = (unsigned int)(unsigned char)(v5 >>> 8) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    }
    else {
        v11 = (unsigned int)(unsigned char)v7 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
    }
    int v10 = (unsigned int)(unsigned char)v7 | ((unsigned int)(unsigned char)__rol__((unsigned short)(unsigned char)(v7 >>> 8), 1) << 8) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    return ((unsigned int)((unsigned char)v11 + (unsigned char)v5 + (unsigned char)v9) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8)) + ((unsigned int)((unsigned short)v0 + 32247) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + (((unsigned int)((v6 >>> (v6 % 32)) & 1 ? (unsigned short)(((unsigned int)(0x131d - ((unsigned short)(v2 < 0) + 27721)) | ((unsigned int)0xa000 << 16)) & 0xddc09ccc): (unsigned short)v10) | ((unsigned int)(unsigned short)((((unsigned int)(0x131d - ((unsigned short)(v2 < 0) + 27721)) | ((unsigned int)0xa000 << 16)) & 0xddc09ccc) >>> 16) << 16)) + v11) + (v10 + v6 + 55967) - 493942167;
}

int main() {
    int v0 = log_size_7_var_000();
    int v1 = /*BAD_CALL!*/ log_size_7_var_001();
    int v2 = /*BAD_CALL!*/ log_size_7_var_002();
    int v3 = /*BAD_CALL!*/ log_size_7_var_003();
    int v4 = /*BAD_CALL!*/ log_size_7_var_004();
    int v5 = /*BAD_CALL!*/ log_size_7_var_005();
    int v6 = /*BAD_CALL!*/ log_size_7_var_006();
    int v7 = /*BAD_CALL!*/ log_size_7_var_007();
    int v8 = /*BAD_CALL!*/ log_size_7_var_008();
    int v9 = log_size_7_var_009();
    if((v1 + v2 + (v3 + v4) + (v5 + v6 + (v7 + v8)) + (v9 + v0))) {
        /*NO_RETURN*/ →__assert_fail("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 31, (char*)&__PRETTY_FUNCTION__.2036);
    }
    return 0;
}

void sub_8049030() {
    jump gvar_804D008;
}

void sub_8049117() {
}
