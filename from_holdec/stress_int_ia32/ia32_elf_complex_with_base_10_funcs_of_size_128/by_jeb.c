
int log_size_7_var_000() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    int i;
    for(i = 31; !(25178773 >>> i); --i) {
    }
    return i - 24;
}

int log_size_7_var_001() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    int i;
    for(i = 0; !((2109456704 >>> i) & 1); ++i) {
    }
    int v2 = (unsigned int)(49281 - (unsigned short)(unsigned int)(i & 0x5a28e000)) | ((unsigned int)(unsigned short)((0 - (unsigned int)(i & 0x5a28e000)) >>> 16) << 16);
    int v3 = ((unsigned int)(unsigned char)i | ((unsigned int)(((unsigned int)(unsigned char)i | ((unsigned int)0xffff00 << 8)) >= 0x2fff1800 || (((unsigned int)(unsigned char)i | ((unsigned int)0xffff00 << 8)) - 0x2fff17ff ? 0: 1) ? 0: 1) << 8) | ((unsigned int)0xffff << 16)) * 2;
    return (unsigned int)(0x2210c080 - v2 + ((((unsigned int)(unsigned char)i | ((unsigned int)0xffff00 << 8)) - 0x2fff17ff) | (unsigned int)((unsigned short)v3 + 0xc080) | ((unsigned int)0x2210 << 16)) + (((((unsigned int)(unsigned char)i | ((unsigned int)0xffff00 << 8)) - 0x2fff17ff) | 0xc000001f) + ((unsigned int)(unsigned short)__rol__((unsigned int)((unsigned short)((unsigned int)(unsigned char)i | ((unsigned int)0xffff00 << 8)) + 59393), ((unsigned int)(unsigned char)(v3 >>> 24) | ((unsigned int)(unsigned char)(v3 >>> 16) << 8) | ((unsigned int)0 << 16) | ((unsigned int)(unsigned char)v3 << 24)) & 0x1f) | ((unsigned int)(unsigned short)((((unsigned int)(unsigned char)i | ((unsigned int)0xffff00 << 8)) - 0x2fff17ff) >>> 16) << 16))) + (((unsigned int)(unsigned char)(v3 >>> 24) | ((unsigned int)(unsigned char)(v3 >>> 16) << 8) | ((unsigned int)0 << 16) | ((unsigned int)(unsigned char)v3 << 24)) + v2)) + 1106154195;
}

int log_size_7_var_002() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    return 0;
}

int log_size_7_var_003() {
    short v0;
    short v1;
    *(int*)&v1 = (unsigned int)v0;
    unsigned int i;
    for(i = 0; !((-942341938 >>> i) & 1); ++i) {
    }
    int v2 = (unsigned int)((unsigned short)__ror__((unsigned long long)122258737 | ((unsigned long long)(((unsigned int)(((unsigned short)i - 38837) >> 13) | ((unsigned int)(unsigned short)((i + 181168203) >>> 16) << 16)) >= 2620422523) << 32), 14) ^ 0x86d8) | ((unsigned int)(unsigned short)((unsigned int)__ror__((unsigned long long)122258737 | ((unsigned long long)(((unsigned int)(((unsigned short)i - 38837) >> 13) | ((unsigned int)(unsigned short)((i + 181168203) >>> 16) << 16)) >= 2620422523) << 32), 14) >>> 16) << 16);
    long long v3 = (unsigned long long)__rol__((unsigned long long)((__parity__((unsigned char)i - 181) ? 8: 264) * (__parity__((unsigned char)v2) ? 1: 0)), 1);
    int v4 = ((unsigned int)((v3 >>> 32L) & 0x1L ? (unsigned short)(((__parity__((unsigned char)v2) ? 1: 0) * ((unsigned int)8 | ((unsigned int)(__parity__((unsigned char)i - 181) ? 0: 1) << 8) | ((unsigned int)0 << 16))) >>> 16): (unsigned short)v3) | ((unsigned int)32315 << 16)) * 2;
    unsigned int v5 = (unsigned int)((unsigned short)(unsigned char)v4 | ((unsigned short)__rol__((unsigned char)(v4 >>> 8), 1) << 8) | 0xf27) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
    int v6 = ((unsigned int)((unsigned short)v2 - 0x74f4) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16)) + ((unsigned int)(unsigned char)((((unsigned short)v3 + 0xffff) >>> 1) & 0x7F) | ((unsigned int)(unsigned char)__rol__((unsigned short)((((unsigned short)v3 + 0xffff) >>> 8) & 0x1ff), 1) << 7) | ((unsigned int)(unsigned short)((unsigned int)v3 >>> 16) << 15) | ((unsigned int)0 << 31)) + 1;
    unsigned int v7 = (unsigned int)__ror__((unsigned char)((unsigned int)(__parity__((unsigned char)v2) ? 1: 0) | ((unsigned int)(__parity__((unsigned char)((unsigned int)(__ror__(137, __parity__((unsigned char)v2) ? 1: 0) + 0xffff) | ((unsigned int)0x7078 << 16)) - 182) ? 0: 1) << 8) | ((unsigned int)0xffe9 << 16)), 1) | ((unsigned int)((__parity__((unsigned char)((unsigned int)(__ror__(137, __parity__((unsigned char)v2) ? 1: 0) + 0xffff) | ((unsigned int)0x7078 << 16)) - 182) ? 0xffe900: 0xffe901) & 0xffffff) << 8);
    v7 = (unsigned int)((unsigned short)v7 + 30171) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    char v8 = (v6 >>> (v7 % 32)) & 1;
    unsigned int v9 = (unsigned int)((~(1 << (v7 % 32)) & v6) | ((unsigned int)~v8 << (v7 % 32)));
    int v10 = (unsigned int)((unsigned char)((unsigned short)(unsigned char)((((unsigned short)v3 + 0xffff) >>> 1) & 0x7F) | ((unsigned short)(unsigned char)__rol__((unsigned short)((((unsigned short)v3 + 0xffff) >>> 8) & 0x1ff), 1) << 7)) - ((unsigned char)v8 + 105)) | ((unsigned int)(((unsigned int)(((unsigned char)__rol__((unsigned short)((((unsigned short)v3 + 0xffff) >>> 8) & 0x1ff), 1) >>> 1) & 0x7F) | ((unsigned int)(unsigned short)((unsigned int)v3 >>> 16) << 7) | ((unsigned int)0 << 23)) & 0xffffff) << 8);
    int v11 = 1374949159 << (v7 & 0x1f);
    v7 = (unsigned int)__rol__((unsigned char)v7, 25) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    char v12 = (unsigned char)v7;
    v7 = (unsigned int)(unsigned char)v5 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    v5 = (unsigned int)v12 | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
    unsigned int v13 = (unsigned int)((unsigned short)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * 0xaba1) | ((unsigned int)0x7078 << 16);
    int v14 = (~(1 << (v5 % 32)) & v11) | (1 << (v5 % 32));
    unsigned int v15 = ((unsigned int)(0 - (unsigned short)v5) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16)) ^ v9;
    unsigned int v16 = v15 ? (unsigned int)(((int)(unsigned short)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * 0xffffaba1 == ((unsigned int)((unsigned short)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * 0xaba1) | ((unsigned int)((v13 >>> 15) & 1 ? 0xffff: 0) << 16)) ? (unsigned short)v7: (unsigned short)v9) >>> (((unsigned int)((int)(unsigned short)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * 0xffffaba1 == ((unsigned int)((unsigned short)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * 0xaba1) | ((unsigned int)((v13 >>> 15) & 1 ? 0xffff: 0) << 16)) ? (unsigned short)v7: (unsigned short)v9) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16)) & 0x1f)) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16): v9;
    int v17 = (unsigned int)((unsigned char)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * (unsigned char)((unsigned short)(unsigned char)((0 - (unsigned short)v14) >>> 8) | ((unsigned short)((unsigned short)v14 > 0 ? 0xFF: 0) << 8))) | ((unsigned int)((unsigned char)(((short)(unsigned char)((unsigned int)((unsigned short)v10 * 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) * ((unsigned short)(unsigned char)((0 - (unsigned short)v14) >>> 8) | ((unsigned short)((unsigned short)v14 > 0 ? 0xFF: 0) << 8))) >>> 8) << (v16 & 0x1f)) << 8) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v10 >>> 16) << 16);
    int v18 = (unsigned int)(v17 & 1 ? 0: 1) | ((unsigned int)(((unsigned int)(((unsigned int)(((0 - (unsigned short)v14) >>> 8) & 0xFF) | ((unsigned int)(unsigned short)(v14 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xFFFFFFF) >>> 4) & 0xffffff) << 8);
    int v19 = (unsigned int)__rol__((unsigned short)(unsigned char)((unsigned int)((unsigned int)((unsigned long long)((v17 >>> 1) & 0x7FFFFFFF) | ((unsigned long long)v17 << 31) | ((unsigned long long)0 << 63)) >= 0x80000000 ? 0: 1) | ((unsigned int)(unsigned short)(v16 >>> 16) << 8) | ((unsigned int)0 << 24)) | ((unsigned short)(v17 & 1) << 8), 1);
    int v20 = (unsigned int)(unsigned char)((unsigned int)((unsigned char)v16 + 0xFF) | ((unsigned int)((unsigned int)((unsigned long long)((v17 >>> 1) & 0x7FFFFFFF) | ((unsigned long long)v17 << 31) | ((unsigned long long)0 << 63)) >= 0x80000000 ? 0: 1) << 8) | ((unsigned int)(unsigned short)(v16 >>> 16) << 16)) | ((unsigned int)(unsigned char)v19 << 8) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)(v16 >>> 16) << 16);
    unsigned int v21 = (v19 >>> 8) & 1 ? (unsigned int)__ror__(((((unsigned short)i - 38837) >> 13) + 34437) & 0x416c, ((unsigned int)(__parity__((unsigned char)v2) ? 1: 0) | ((unsigned int)(__parity__((unsigned char)((unsigned int)(__ror__(137, __parity__((unsigned char)v2) ? 1: 0) + 0xffff) | ((unsigned int)0x7078 << 16)) - 182) ? 0: 1) << 8) | ((unsigned int)0xffe9 << 16)) & 0x1f) | ((unsigned int)(unsigned short)((unsigned int)((((unsigned int)(((unsigned short)i - 38837) >> 13) | ((unsigned int)(unsigned short)((i + 181168203) >>> 16) << 16)) + 1674544773) & 0x2c85416c) >>> 16) << 16): (unsigned int)((unsigned long long)((v17 >>> 1) & 0x7FFFFFFF) | ((unsigned long long)v17 << 31) | ((unsigned long long)0 << 63));
    int v22 = (v17 & 1 ? v9: v13) & 0x74f38578;
    int v23 = (unsigned int)(((unsigned short)v22 & ((unsigned short)__rol__((unsigned char)v15, 1) | ((unsigned short)__rol__((unsigned char)(v15 >>> 8) + (unsigned char)v16, 2) << 8))) + (unsigned short)v18) | ((unsigned int)(unsigned short)(v15 >>> 16) << 16);
    if(v20 != 0) {
        int j;
        for(j = 0; !((v20 >>> j) & 1); ++j) {
        }
        v23 = j;
    }
    return (unsigned int)(0xd0d92a4a - (v22 + 969181077) + (unsigned int)__rol__((unsigned long long)v18 | ((unsigned long long)__carry__(v13, v13) << 32), 22) + (((unsigned int)((unsigned short)v13 * 23582) | ((unsigned int)(unsigned short)(v13 >>> 15) << 16)) + v22) + (v23 + v21 + 178106846)) + 0x7d1cba6a;
}

int log_size_7_var_004() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    return 0;
}

int log_size_7_var_005() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    for(int i = 0; !((0xffff94ba >>> i) & 1); ++i) {
    }
    return 0x10290;
}

int log_size_7_var_006() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    int i;
    for(i = 0; !((1706655864 >>> i) & 1); ++i) {
    }
    int v2 = (unsigned int)(((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) >= 65416 || (((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) + 120 ? 0: 1) ? 1080: ((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) + 120) | ((unsigned int)32854 << 16);
    int v3 = ((unsigned int)((unsigned short)(((unsigned int)(((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) >= 65416 || (((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) + 120 ? 0: 1) ? (unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8): 32888) | ((unsigned int)31701 << 16)) < 0) + 0x900) | ((unsigned int)0x686b << 16)) >>> ((unsigned int)((unsigned long long)((v2 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) & 0x1f);
    int v4 = (unsigned int)((unsigned short)((unsigned int)((unsigned long long)((v2 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) << ((unsigned int)((unsigned long long)((v2 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) & 0x1f)) | 0xc000) | ((unsigned int)(unsigned short)(((unsigned int)((unsigned long long)((v2 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) << ((unsigned int)((unsigned long long)((v2 >>> 30) & 3) | ((unsigned long long)0xccf0000L << 2)) & 0x1f)) >>> 16) << 16);
    int v5 = (unsigned int)((unsigned short)((unsigned int)30015 | ((unsigned int)(unsigned short)((unsigned int)((unsigned short)((unsigned int)(((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) >= 65416 || (((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) + 120 ? 0: 1) ? (unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8): 32888) | ((unsigned int)31701 << 16)) & 0x3fff) | ((unsigned int)31701 << 16)) << 16)) / (unsigned short)v4) | ((unsigned int)7226 << 16);
    int v6 = (unsigned int)((unsigned short)((unsigned int)30015 | ((unsigned int)(unsigned short)((unsigned int)((unsigned short)((unsigned int)(((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) >= 65416 || (((unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8)) + 120 ? 0: 1) ? (unsigned short)(unsigned char)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) | ((unsigned short)((unsigned short)(((unsigned int)((unsigned short)(unsigned int)__rol__((unsigned int)(unsigned char)i | ((unsigned int)6 << 8) | ((unsigned int)(unsigned short)(i >>> 16) << 16), 1) & 0x4856) * 32888) >>> 16) ? 0: 1) << 8): 32888) | ((unsigned int)31701 << 16)) & 0x3fff) | ((unsigned int)31701 << 16)) << 16)) % (unsigned short)v4) | ((unsigned int)31701 << 16);
    int v7 = (unsigned int)(unsigned char)v4 | ((unsigned int)__rol__((unsigned char)(v4 >>> 8), v4 & 0x1f) << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
    if(v5 != 0) {
        int j;
        for(j = 0; !((v5 >>> j) & 1); ++j) {
        }
        v6 = j;
    }
    v5 = (unsigned int)((short)(unsigned char)v5 * ((unsigned short)(unsigned char)(v5 >>> 8) | ((unsigned short)((v5 >>> 15) & 1 ? 0xFF: 0) << 8))) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
    v5 = (unsigned int)((unsigned char)v5 | 0xc0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
    v7 = (unsigned int)__ror__((unsigned short)v7, 1) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    v7 = (unsigned int)((unsigned char)v7 + 16) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    int v8 = ((unsigned int)(unsigned short)((unsigned int)(((unsigned short)v6 >>> 15) & 1) | ((unsigned int)32889 << 1)) | ((unsigned int)26041 << 16)) & ((unsigned int)((unsigned char)((unsigned short)v5 & 0x3fff) / (unsigned char)v5) | ((unsigned int)((unsigned char)((unsigned short)v5 & 0x3fff) % (unsigned char)v5) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16));
    return (unsigned int)((unsigned int)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) + ((unsigned int)((unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v6 >>> 10) & 1) + (unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28))) + ((((unsigned int)((unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v6 >>> 10) & 1) + (unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)))) | ((unsigned int)0x8989 << 16)) & 0x6883be94 ? 0: 1) || (((unsigned int)((unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v6 >>> 10) & 1) + (unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)))) | ((unsigned int)0x8989 << 16)) & 0x6883be94) < 0 ? (unsigned short)v7: (unsigned short)v8)) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16)) + (((unsigned int)((unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)) * 33970 - ((unsigned short)((v6 >>> 10) & 1) + (unsigned short)((unsigned long long)((v2 >>> 4) & 0xFFFFFFF) | ((unsigned long long)0x8989f974L << 28)))) | ((unsigned int)0x8989 << 16)) + ((unsigned int)((unsigned short)v6 & 0xfbff) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16))) + (((unsigned int)(unsigned short)((unsigned int)(((unsigned short)v6 >>> 15) & 1) | ((unsigned int)32889 << 1)) | ((unsigned int)26041 << 16)) + ((unsigned int)(unsigned char)v3 | ((unsigned int)__ror__((unsigned char)(v3 >>> 8), 1) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16)) + v7)) - 0x228a2400;
}

int log_size_7_var_007() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    return 0;
}

int log_size_7_var_008() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    int i;
    for(i = 31; !(0x5af56c >>> i); --i) {
    }
    long long v2 = (unsigned long long)__rol__((unsigned long long)0xd011011e | ((unsigned long long)((unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) > 1688030382) << 32), 30);
    int v3 = ((unsigned int)(unsigned short)__ror__((unsigned int)(unsigned short)((unsigned long long)702482440 | ((unsigned long long)(unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) << 31)), 1) | ((unsigned int)(unsigned short)((unsigned int)((unsigned long long)702482440 | ((unsigned long long)(unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) << 31)) >>> 16) << 16)) & 0x49a95b55;
    char v4 = __carry__(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1), (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8)));
    int v5 = (unsigned int)((unsigned long long)0 | ((unsigned long long)(((unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) & 0xffffff00) - (((unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) & 0xffffff00) + 1)) << 1) | ((unsigned long long)0 << 33));
    int v6 = (unsigned int)((unsigned short)((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) >>> 1) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16);
    return (unsigned int)((unsigned int)__ror__((unsigned long long)(((unsigned int)((unsigned short)v4 + 53034) | ((unsigned int)0xd011 << 16)) - ((unsigned int)__rol__((unsigned short)v2, 30) | ((unsigned int)(unsigned short)((unsigned int)v2 >>> 16) << 16))), v6 & 0x1f) + (unsigned int)((unsigned long long)(((((unsigned short)v3 & 0x7FFF) | 0x8000) >>> 1) & 0x7FFF) | ((unsigned long long)(unsigned short)(v3 >>> 16) << 15) | ((unsigned long long)61 << 31)) + ((v4 || ((unsigned short)((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) ? 0: 1) ? (unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8): (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) & 0xffffff00) + ((unsigned int)(((unsigned char)v5 * 128) >> (((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) & 0x1f)) | ((unsigned int)(((unsigned int)(((unsigned char)v5 >>> 1) & 0x7F) | ((unsigned int)((unsigned char)(v5 >>> 8) << (((unsigned int)(19630 - (unsigned short)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) + (unsigned short)((unsigned int)(unsigned char)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1) | ((unsigned int)2527337 << 8))) | ((unsigned int)(unsigned short)((1688030382 - (unsigned int)__rol__((unsigned long long)i | ((unsigned long long)1 << 32), 1)) >>> 16) << 16)) & 0x1f)) << 7) | ((unsigned int)(unsigned short)(v5 >>> 16) << 15) | ((unsigned int)0 << 31)) & 0xffffff) << 8))) + (((unsigned int)12349 | ((unsigned int)(unsigned short)((unsigned int)v2 >>> 16) << 16)) + v6 + 1085222337)) + 5210045;
}

int log_size_7_var_009() {
    short v0;
    short v1;
    *(int*)&v0 = (unsigned int)v1;
    int i;
    for(i = 31; !(31 >>> i); --i) {
    }
    unsigned int v2 = (unsigned int)(((unsigned int)(0x131d - ((unsigned short)((unsigned short)i < 0) + 27721)) | ((unsigned int)0xa000 << 16)) & 0xddc09ccc);
    int v3 = (((unsigned int)(0 - ((unsigned char)i * 2 + 63)) | ((unsigned int)(((unsigned char)(((unsigned short)i * 2 + 28223) >>> 8) >>> 1) ^ 0xf3) << 8) | ((unsigned int)44909 << 16)) & 0xffffbfff) | 0x4000;
    unsigned int v4 = (unsigned int)(unsigned short)__ror__((unsigned int)(unsigned short)((unsigned int)(((unsigned char)i * 2 + 219) ^ 0x1d) | ((unsigned int)(((unsigned int)((((unsigned short)i * 2 + 0x77da) >>> 8) & 0xFF) | ((unsigned int)0x8000 << 8)) & 0xffffff) << 8)), ((unsigned int)(((unsigned char)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) & 0x5f) + 14) | ((unsigned int)~(unsigned char)(((unsigned short)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) & 0x345f) >>> 8) << 8) | ((unsigned int)(unsigned short)((unsigned int)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) >>> 16) << 16)) & 0x1f) | ((unsigned int)0x8000 << 16);
    int v5 = (unsigned int)__rol__(((unsigned short)i * 2 + 0x77da) | (unsigned short)(0 - ((unsigned char)i * 2 + 63)) | ((unsigned short)(((unsigned char)(((unsigned short)i * 2 + 28223) >>> 8) >>> 1) ^ 0xf3) << 8), 1) | ((unsigned int)(unsigned short)(i >>> 16) << 16);
    v3 = (unsigned int)((unsigned char)v3 - 155) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
    unsigned int v6 = (unsigned int)53737 | ((unsigned int)(unsigned short)((unsigned int)(0x3b800000 - (unsigned int)((unsigned int)((unsigned short)i * 2 + 28096) * 2)) >>> 16) << 16);
    int v7 = (unsigned int)((unsigned char)(v4 >>> 8) & (unsigned char)((unsigned int)(((unsigned char)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) & 0x5f) + 14) | ((unsigned int)~(unsigned char)(((unsigned short)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) & 0x345f) >>> 8) << 8) | ((unsigned int)(unsigned short)((unsigned int)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) >>> 16) << 16))) | ((unsigned int)__ror__((unsigned char)((unsigned int)~(unsigned char)(((unsigned short)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) & 0x345f) >>> 8) | ((unsigned int)(unsigned short)((unsigned int)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) >>> 16) << 8) | ((unsigned int)0 << 24)) + 112, 10) << 8) | ((unsigned int)(unsigned short)(unsigned int)(unsigned short)((unsigned int)((unsigned long long)(((unsigned short)(i >>> 16) >>> 15) & 1) | ((unsigned long long)998300160L << 1)) >>> 16) << 16);
    char v8 = (int)v4 < (int)v6;
    if(v4 == v6) {
        v6 = v4;
    }
    else {
        v4 = v6;
    }
    v3 = (unsigned int)(v8 ? (unsigned short)v3: (unsigned short)v4) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
    char v9 = (unsigned char)v4 < (unsigned char)v7;
    if((unsigned char)v4 == (unsigned char)v7) {
        v7 = (unsigned int)(unsigned char)(v3 >>> 8) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    }
    else {
        v4 = (unsigned int)(unsigned char)v7 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
    }
    int v10 = (unsigned int)(unsigned char)v7 | ((unsigned int)(unsigned char)__rol__((unsigned short)(unsigned char)(v7 >>> 8), 1) << 8) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    return (unsigned int)(((unsigned int)((unsigned char)v4 + (unsigned char)v3 + (unsigned char)v9) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8)) + ((unsigned int)((unsigned short)v5 + 32247) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16)) + (((unsigned int)((v6 >>> (v6 % 32)) & 1 ? (unsigned short)v2: (unsigned short)v10) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16)) + v4) + (v10 + v6 + 55967)) - 493942167;
}

int main() {
    int v0;
    char v1;
    void* ptr0;
    int* ptr1;
    int v2;
    int* ptr2 = &v1;
    char v3 = &v0 ? 0: 1;
    char v4 = (int)&v0 < 0;
    char v5 = __parity__((unsigned char)&v0);
    char v6 = 0;
    char v7 = 0;
    int v8 = v0;
    int* ptr3 = &ptr1;
    int v9 = v2;
    int* ptr4 = &v1;
    int v10 = log_size_7_var_000();
    int v11 = v10;
    int v12 = log_size_7_var_001();
    int v13 = v11;
    int v14 = v12 + v11;
    char v15 = v14 ? 0: 1;
    char v16 = v14 < 0;
    char v17 = __parity__((unsigned char)v14);
    char v18 = (((v12 ^ v13) ^ v14) >>> 4) & 1;
    char v19 = __carry__(v12, v13);
    char v20 = ((v14 ^ v13) & ~(v12 ^ v13)) < 0;
    int v21 = log_size_7_var_002();
    int v22 = v14;
    int v23 = v21 + v14;
    char v24 = v23 ? 0: 1;
    char v25 = v23 < 0;
    char v26 = __parity__((unsigned char)v23);
    char v27 = (((v21 ^ v22) ^ v23) >>> 4) & 1;
    char v28 = __carry__(v21, v22);
    char v29 = ((v23 ^ v22) & ~(v21 ^ v22)) < 0;
    int v30 = log_size_7_var_003();
    int v31 = v23;
    int v32 = v30 + v23;
    char v33 = v32 ? 0: 1;
    char v34 = v32 < 0;
    char v35 = __parity__((unsigned char)v32);
    char v36 = (((v30 ^ v31) ^ v32) >>> 4) & 1;
    char v37 = __carry__(v30, v31);
    char v38 = ((v32 ^ v31) & ~(v30 ^ v31)) < 0;
    int v39 = log_size_7_var_004();
    int v40 = v32;
    int v41 = v39 + v32;
    char v42 = v41 ? 0: 1;
    char v43 = v41 < 0;
    char v44 = __parity__((unsigned char)v41);
    char v45 = (((v39 ^ v40) ^ v41) >>> 4) & 1;
    char v46 = __carry__(v39, v40);
    char v47 = ((v41 ^ v40) & ~(v39 ^ v40)) < 0;
    int v48 = log_size_7_var_005();
    int v49 = v41;
    int v50 = v48 + v41;
    char v51 = v50 ? 0: 1;
    char v52 = v50 < 0;
    char v53 = __parity__((unsigned char)v50);
    char v54 = (((v48 ^ v49) ^ v50) >>> 4) & 1;
    char v55 = __carry__(v48, v49);
    char v56 = ((v50 ^ v49) & ~(v48 ^ v49)) < 0;
    int v57 = log_size_7_var_006();
    int v58 = v50;
    int v59 = v57 + v50;
    char v60 = v59 ? 0: 1;
    char v61 = v59 < 0;
    char v62 = __parity__((unsigned char)v59);
    char v63 = (((v57 ^ v58) ^ v59) >>> 4) & 1;
    char v64 = __carry__(v57, v58);
    char v65 = ((v59 ^ v58) & ~(v57 ^ v58)) < 0;
    int v66 = log_size_7_var_007();
    int v67 = v59;
    int v68 = v66 + v59;
    char v69 = v68 ? 0: 1;
    char v70 = v68 < 0;
    char v71 = __parity__((unsigned char)v68);
    char v72 = (((v66 ^ v67) ^ v68) >>> 4) & 1;
    char v73 = __carry__(v66, v67);
    char v74 = ((v68 ^ v67) & ~(v66 ^ v67)) < 0;
    int v75 = log_size_7_var_008();
    int v76 = v68;
    int v77 = v75 + v68;
    char v78 = v77 ? 0: 1;
    char v79 = v77 < 0;
    char v80 = __parity__((unsigned char)v77);
    char v81 = (((v75 ^ v76) ^ v77) >>> 4) & 1;
    char v82 = __carry__(v75, v76);
    char v83 = ((v77 ^ v76) & ~(v75 ^ v76)) < 0;
    int v84 = log_size_7_var_009();
    int v85 = v77;
    int v86 = v84 + v77;
    char v87 = v86 ? 0: 1;
    char v88 = v86 < 0;
    char v89 = __parity__((unsigned char)v86);
    char v90 = (((v84 ^ v85) ^ v86) >>> 4) & 1;
    char v91 = __carry__(v84, v85);
    char v92 = ((v86 ^ v85) & ~(v84 ^ v85)) < 0;
    if(!v87) {
        int* ptr5 = &ptr0;
        /*NO_RETURN*/ →__assert_fail("sum==0", "source_complex_with_base_10_funcs_of_size_128.c", 31, (char*)&__PRETTY_FUNCTION__.2036);
    }
    return 0;
}

int sub_8049036() {
    return gvar_804D008();
}

void sub_8049117() {
}

int sub_804914C() {
    return 0;
}

void sub_8049198() {
}

int sub_80491CD() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80491E8() {
}
